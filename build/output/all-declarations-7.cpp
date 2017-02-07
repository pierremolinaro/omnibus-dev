#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-7.h"


//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_getPropertyReferenceFromSelfIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_getPropertyReferenceFromSelfIR * p = (const cPtr_getPropertyReferenceFromSelfIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_getPropertyReferenceFromSelfIR) ;
  if (kOperandEqual == result) {
    result = mProperty_mTarget.objectCompare (p->mProperty_mTarget) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSelfType.objectCompare (p->mProperty_mSelfType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPropertyName.objectCompare (p->mProperty_mPropertyName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPropertyIndex.objectCompare (p->mProperty_mPropertyIndex) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_getPropertyReferenceFromSelfIR::objectCompare (const GALGAS_getPropertyReferenceFromSelfIR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_getPropertyReferenceFromSelfIR::GALGAS_getPropertyReferenceFromSelfIR (void) :
GALGAS_abstractInstructionIR () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_getPropertyReferenceFromSelfIR::GALGAS_getPropertyReferenceFromSelfIR (const cPtr_getPropertyReferenceFromSelfIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_getPropertyReferenceFromSelfIR) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_getPropertyReferenceFromSelfIR GALGAS_getPropertyReferenceFromSelfIR::constructor_new (const GALGAS_objectIR & inAttribute_mTarget,
                                                                                              const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mSelfType,
                                                                                              const GALGAS_string & inAttribute_mPropertyName,
                                                                                              const GALGAS_uint & inAttribute_mPropertyIndex
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_getPropertyReferenceFromSelfIR result ;
  if (inAttribute_mTarget.isValid () && inAttribute_mSelfType.isValid () && inAttribute_mPropertyName.isValid () && inAttribute_mPropertyIndex.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_getPropertyReferenceFromSelfIR (inAttribute_mTarget, inAttribute_mSelfType, inAttribute_mPropertyName, inAttribute_mPropertyIndex COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_getPropertyReferenceFromSelfIR::getter_mTarget (UNUSED_LOCATION_ARGS) const {
  GALGAS_objectIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_getPropertyReferenceFromSelfIR * p = (const cPtr_getPropertyReferenceFromSelfIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getPropertyReferenceFromSelfIR) ;
    result = p->mProperty_mTarget ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR cPtr_getPropertyReferenceFromSelfIR::getter_mTarget (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTarget ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_getPropertyReferenceFromSelfIR::getter_mSelfType (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != mObjectPtr) {
    const cPtr_getPropertyReferenceFromSelfIR * p = (const cPtr_getPropertyReferenceFromSelfIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getPropertyReferenceFromSelfIR) ;
    result = p->mProperty_mSelfType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cPtr_getPropertyReferenceFromSelfIR::getter_mSelfType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSelfType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_getPropertyReferenceFromSelfIR::getter_mPropertyName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_getPropertyReferenceFromSelfIR * p = (const cPtr_getPropertyReferenceFromSelfIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getPropertyReferenceFromSelfIR) ;
    result = p->mProperty_mPropertyName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_getPropertyReferenceFromSelfIR::getter_mPropertyName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPropertyName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_getPropertyReferenceFromSelfIR::getter_mPropertyIndex (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_getPropertyReferenceFromSelfIR * p = (const cPtr_getPropertyReferenceFromSelfIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getPropertyReferenceFromSelfIR) ;
    result = p->mProperty_mPropertyIndex ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cPtr_getPropertyReferenceFromSelfIR::getter_mPropertyIndex (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPropertyIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                               Pointer class for @getPropertyReferenceFromSelfIR class                               *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_getPropertyReferenceFromSelfIR::cPtr_getPropertyReferenceFromSelfIR (const GALGAS_objectIR & in_mTarget,
                                                                          const GALGAS_unifiedTypeMap_2D_proxy & in_mSelfType,
                                                                          const GALGAS_string & in_mPropertyName,
                                                                          const GALGAS_uint & in_mPropertyIndex
                                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mTarget (in_mTarget),
mProperty_mSelfType (in_mSelfType),
mProperty_mPropertyName (in_mPropertyName),
mProperty_mPropertyIndex (in_mPropertyIndex) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_getPropertyReferenceFromSelfIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_getPropertyReferenceFromSelfIR ;
}

void cPtr_getPropertyReferenceFromSelfIR::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "[@getPropertyReferenceFromSelfIR:" ;
  mProperty_mTarget.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSelfType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mPropertyName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mPropertyIndex.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_getPropertyReferenceFromSelfIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_getPropertyReferenceFromSelfIR (mProperty_mTarget, mProperty_mSelfType, mProperty_mPropertyName, mProperty_mPropertyIndex COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @getPropertyReferenceFromSelfIR type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_getPropertyReferenceFromSelfIR ("getPropertyReferenceFromSelfIR",
                                                       & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_getPropertyReferenceFromSelfIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_getPropertyReferenceFromSelfIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_getPropertyReferenceFromSelfIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_getPropertyReferenceFromSelfIR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_getPropertyReferenceFromSelfIR GALGAS_getPropertyReferenceFromSelfIR::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_getPropertyReferenceFromSelfIR result ;
  const GALGAS_getPropertyReferenceFromSelfIR * p = (const GALGAS_getPropertyReferenceFromSelfIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_getPropertyReferenceFromSelfIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("getPropertyReferenceFromSelfIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_selectInstructionIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_selectInstructionIR * p = (const cPtr_selectInstructionIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_selectInstructionIR) ;
  if (kOperandEqual == result) {
    result = mProperty_mTargetValue.objectCompare (p->mProperty_mTargetValue) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_m_5F_if_5F_variable.objectCompare (p->mProperty_m_5F_if_5F_variable) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_m_5F_then_5F_variable.objectCompare (p->mProperty_m_5F_then_5F_variable) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_m_5F_else_5F_variable.objectCompare (p->mProperty_m_5F_else_5F_variable) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_selectInstructionIR::objectCompare (const GALGAS_selectInstructionIR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_selectInstructionIR::GALGAS_selectInstructionIR (void) :
GALGAS_abstractInstructionIR () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_selectInstructionIR::GALGAS_selectInstructionIR (const cPtr_selectInstructionIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_selectInstructionIR) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_selectInstructionIR GALGAS_selectInstructionIR::constructor_new (const GALGAS_objectIR & inAttribute_mTargetValue,
                                                                        const GALGAS_objectIR & inAttribute_m_5F_if_5F_variable,
                                                                        const GALGAS_objectIR & inAttribute_m_5F_then_5F_variable,
                                                                        const GALGAS_objectIR & inAttribute_m_5F_else_5F_variable
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_selectInstructionIR result ;
  if (inAttribute_mTargetValue.isValid () && inAttribute_m_5F_if_5F_variable.isValid () && inAttribute_m_5F_then_5F_variable.isValid () && inAttribute_m_5F_else_5F_variable.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_selectInstructionIR (inAttribute_mTargetValue, inAttribute_m_5F_if_5F_variable, inAttribute_m_5F_then_5F_variable, inAttribute_m_5F_else_5F_variable COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_selectInstructionIR::getter_mTargetValue (UNUSED_LOCATION_ARGS) const {
  GALGAS_objectIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_selectInstructionIR * p = (const cPtr_selectInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectInstructionIR) ;
    result = p->mProperty_mTargetValue ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR cPtr_selectInstructionIR::getter_mTargetValue (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTargetValue ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_selectInstructionIR::getter_m_5F_if_5F_variable (UNUSED_LOCATION_ARGS) const {
  GALGAS_objectIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_selectInstructionIR * p = (const cPtr_selectInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectInstructionIR) ;
    result = p->mProperty_m_5F_if_5F_variable ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR cPtr_selectInstructionIR::getter_m_5F_if_5F_variable (UNUSED_LOCATION_ARGS) const {
  return mProperty_m_5F_if_5F_variable ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_selectInstructionIR::getter_m_5F_then_5F_variable (UNUSED_LOCATION_ARGS) const {
  GALGAS_objectIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_selectInstructionIR * p = (const cPtr_selectInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectInstructionIR) ;
    result = p->mProperty_m_5F_then_5F_variable ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR cPtr_selectInstructionIR::getter_m_5F_then_5F_variable (UNUSED_LOCATION_ARGS) const {
  return mProperty_m_5F_then_5F_variable ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_selectInstructionIR::getter_m_5F_else_5F_variable (UNUSED_LOCATION_ARGS) const {
  GALGAS_objectIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_selectInstructionIR * p = (const cPtr_selectInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectInstructionIR) ;
    result = p->mProperty_m_5F_else_5F_variable ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR cPtr_selectInstructionIR::getter_m_5F_else_5F_variable (UNUSED_LOCATION_ARGS) const {
  return mProperty_m_5F_else_5F_variable ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                    Pointer class for @selectInstructionIR class                                     *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_selectInstructionIR::cPtr_selectInstructionIR (const GALGAS_objectIR & in_mTargetValue,
                                                    const GALGAS_objectIR & in_m_5F_if_5F_variable,
                                                    const GALGAS_objectIR & in_m_5F_then_5F_variable,
                                                    const GALGAS_objectIR & in_m_5F_else_5F_variable
                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mTargetValue (in_mTargetValue),
mProperty_m_5F_if_5F_variable (in_m_5F_if_5F_variable),
mProperty_m_5F_then_5F_variable (in_m_5F_then_5F_variable),
mProperty_m_5F_else_5F_variable (in_m_5F_else_5F_variable) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_selectInstructionIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selectInstructionIR ;
}

void cPtr_selectInstructionIR::description (C_String & ioString,
                                            const int32_t inIndentation) const {
  ioString << "[@selectInstructionIR:" ;
  mProperty_mTargetValue.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_m_5F_if_5F_variable.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_m_5F_then_5F_variable.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_m_5F_else_5F_variable.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_selectInstructionIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_selectInstructionIR (mProperty_mTargetValue, mProperty_m_5F_if_5F_variable, mProperty_m_5F_then_5F_variable, mProperty_m_5F_else_5F_variable COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @selectInstructionIR type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_selectInstructionIR ("selectInstructionIR",
                                            & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_selectInstructionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selectInstructionIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_selectInstructionIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_selectInstructionIR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_selectInstructionIR GALGAS_selectInstructionIR::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_selectInstructionIR result ;
  const GALGAS_selectInstructionIR * p = (const GALGAS_selectInstructionIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_selectInstructionIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selectInstructionIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_testArrayIndexIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_testArrayIndexIR * p = (const cPtr_testArrayIndexIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_testArrayIndexIR) ;
  if (kOperandEqual == result) {
    result = mProperty_mIndex.objectCompare (p->mProperty_mIndex) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mErrorLocation.objectCompare (p->mProperty_mErrorLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSize.objectCompare (p->mProperty_mSize) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_testArrayIndexIR::objectCompare (const GALGAS_testArrayIndexIR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_testArrayIndexIR::GALGAS_testArrayIndexIR (void) :
GALGAS_abstractInstructionIR () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_testArrayIndexIR::GALGAS_testArrayIndexIR (const cPtr_testArrayIndexIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_testArrayIndexIR) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_testArrayIndexIR GALGAS_testArrayIndexIR::constructor_new (const GALGAS_objectIR & inAttribute_mIndex,
                                                                  const GALGAS_location & inAttribute_mErrorLocation,
                                                                  const GALGAS_bigint & inAttribute_mSize
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_testArrayIndexIR result ;
  if (inAttribute_mIndex.isValid () && inAttribute_mErrorLocation.isValid () && inAttribute_mSize.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_testArrayIndexIR (inAttribute_mIndex, inAttribute_mErrorLocation, inAttribute_mSize COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_testArrayIndexIR::getter_mIndex (UNUSED_LOCATION_ARGS) const {
  GALGAS_objectIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_testArrayIndexIR * p = (const cPtr_testArrayIndexIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_testArrayIndexIR) ;
    result = p->mProperty_mIndex ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR cPtr_testArrayIndexIR::getter_mIndex (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_testArrayIndexIR::getter_mErrorLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_testArrayIndexIR * p = (const cPtr_testArrayIndexIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_testArrayIndexIR) ;
    result = p->mProperty_mErrorLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_testArrayIndexIR::getter_mErrorLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mErrorLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint GALGAS_testArrayIndexIR::getter_mSize (UNUSED_LOCATION_ARGS) const {
  GALGAS_bigint result ;
  if (NULL != mObjectPtr) {
    const cPtr_testArrayIndexIR * p = (const cPtr_testArrayIndexIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_testArrayIndexIR) ;
    result = p->mProperty_mSize ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint cPtr_testArrayIndexIR::getter_mSize (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSize ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                      Pointer class for @testArrayIndexIR class                                      *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_testArrayIndexIR::cPtr_testArrayIndexIR (const GALGAS_objectIR & in_mIndex,
                                              const GALGAS_location & in_mErrorLocation,
                                              const GALGAS_bigint & in_mSize
                                              COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mIndex (in_mIndex),
mProperty_mErrorLocation (in_mErrorLocation),
mProperty_mSize (in_mSize) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_testArrayIndexIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_testArrayIndexIR ;
}

void cPtr_testArrayIndexIR::description (C_String & ioString,
                                         const int32_t inIndentation) const {
  ioString << "[@testArrayIndexIR:" ;
  mProperty_mIndex.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mErrorLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSize.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_testArrayIndexIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_testArrayIndexIR (mProperty_mIndex, mProperty_mErrorLocation, mProperty_mSize COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @testArrayIndexIR type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_testArrayIndexIR ("testArrayIndexIR",
                                         & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_testArrayIndexIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_testArrayIndexIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_testArrayIndexIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_testArrayIndexIR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_testArrayIndexIR GALGAS_testArrayIndexIR::extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_testArrayIndexIR result ;
  const GALGAS_testArrayIndexIR * p = (const GALGAS_testArrayIndexIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_testArrayIndexIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("testArrayIndexIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_upperBoundCheckIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_upperBoundCheckIR * p = (const cPtr_upperBoundCheckIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_upperBoundCheckIR) ;
  if (kOperandEqual == result) {
    result = mProperty_mSource.objectCompare (p->mProperty_mSource) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mUpperBoundPlusOne.objectCompare (p->mProperty_mUpperBoundPlusOne) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPanicCode.objectCompare (p->mProperty_mPanicCode) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLocation.objectCompare (p->mProperty_mLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_upperBoundCheckIR::objectCompare (const GALGAS_upperBoundCheckIR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_upperBoundCheckIR::GALGAS_upperBoundCheckIR (void) :
GALGAS_abstractInstructionIR () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_upperBoundCheckIR::GALGAS_upperBoundCheckIR (const cPtr_upperBoundCheckIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_upperBoundCheckIR) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_upperBoundCheckIR GALGAS_upperBoundCheckIR::constructor_new (const GALGAS_objectIR & inAttribute_mSource,
                                                                    const GALGAS_bigint & inAttribute_mUpperBoundPlusOne,
                                                                    const GALGAS_uint & inAttribute_mPanicCode,
                                                                    const GALGAS_location & inAttribute_mLocation
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_upperBoundCheckIR result ;
  if (inAttribute_mSource.isValid () && inAttribute_mUpperBoundPlusOne.isValid () && inAttribute_mPanicCode.isValid () && inAttribute_mLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_upperBoundCheckIR (inAttribute_mSource, inAttribute_mUpperBoundPlusOne, inAttribute_mPanicCode, inAttribute_mLocation COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_upperBoundCheckIR::getter_mSource (UNUSED_LOCATION_ARGS) const {
  GALGAS_objectIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_upperBoundCheckIR * p = (const cPtr_upperBoundCheckIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_upperBoundCheckIR) ;
    result = p->mProperty_mSource ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR cPtr_upperBoundCheckIR::getter_mSource (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSource ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint GALGAS_upperBoundCheckIR::getter_mUpperBoundPlusOne (UNUSED_LOCATION_ARGS) const {
  GALGAS_bigint result ;
  if (NULL != mObjectPtr) {
    const cPtr_upperBoundCheckIR * p = (const cPtr_upperBoundCheckIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_upperBoundCheckIR) ;
    result = p->mProperty_mUpperBoundPlusOne ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint cPtr_upperBoundCheckIR::getter_mUpperBoundPlusOne (UNUSED_LOCATION_ARGS) const {
  return mProperty_mUpperBoundPlusOne ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_upperBoundCheckIR::getter_mPanicCode (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_upperBoundCheckIR * p = (const cPtr_upperBoundCheckIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_upperBoundCheckIR) ;
    result = p->mProperty_mPanicCode ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cPtr_upperBoundCheckIR::getter_mPanicCode (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPanicCode ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_upperBoundCheckIR::getter_mLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_upperBoundCheckIR * p = (const cPtr_upperBoundCheckIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_upperBoundCheckIR) ;
    result = p->mProperty_mLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_upperBoundCheckIR::getter_mLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                     Pointer class for @upperBoundCheckIR class                                      *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_upperBoundCheckIR::cPtr_upperBoundCheckIR (const GALGAS_objectIR & in_mSource,
                                                const GALGAS_bigint & in_mUpperBoundPlusOne,
                                                const GALGAS_uint & in_mPanicCode,
                                                const GALGAS_location & in_mLocation
                                                COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mSource (in_mSource),
mProperty_mUpperBoundPlusOne (in_mUpperBoundPlusOne),
mProperty_mPanicCode (in_mPanicCode),
mProperty_mLocation (in_mLocation) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_upperBoundCheckIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_upperBoundCheckIR ;
}

void cPtr_upperBoundCheckIR::description (C_String & ioString,
                                          const int32_t inIndentation) const {
  ioString << "[@upperBoundCheckIR:" ;
  mProperty_mSource.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mUpperBoundPlusOne.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mPanicCode.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_upperBoundCheckIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_upperBoundCheckIR (mProperty_mSource, mProperty_mUpperBoundPlusOne, mProperty_mPanicCode, mProperty_mLocation COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @upperBoundCheckIR type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_upperBoundCheckIR ("upperBoundCheckIR",
                                          & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_upperBoundCheckIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_upperBoundCheckIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_upperBoundCheckIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_upperBoundCheckIR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_upperBoundCheckIR GALGAS_upperBoundCheckIR::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_upperBoundCheckIR result ;
  const GALGAS_upperBoundCheckIR * p = (const GALGAS_upperBoundCheckIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_upperBoundCheckIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("upperBoundCheckIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Extension method '@routineMapIR-element enterAccessibleEntities'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_enterAccessibleEntities (const GALGAS_routineMapIR_2D_element inObject,
                                              GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                              GALGAS_uint & ioArgument_ioMaxBranchOfOnInstructions,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  extensionMethod_enterAccessibleEntities (inObject.mProperty_mInstructionGenerationList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 32)) ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumConstantMap_2D_element::GALGAS_enumConstantMap_2D_element (void) :
mProperty_lkey (),
mProperty_mIndex () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumConstantMap_2D_element::~ GALGAS_enumConstantMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumConstantMap_2D_element::GALGAS_enumConstantMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                      const GALGAS_uint & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mIndex (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumConstantMap_2D_element GALGAS_enumConstantMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_enumConstantMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                            GALGAS_uint::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumConstantMap_2D_element GALGAS_enumConstantMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                      const GALGAS_uint & inOperand1 
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_enumConstantMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_enumConstantMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_enumConstantMap_2D_element::objectCompare (const GALGAS_enumConstantMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mIndex.objectCompare (inOperand.mProperty_mIndex) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_enumConstantMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mIndex.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_enumConstantMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mIndex.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_enumConstantMap_2D_element::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "<struct @enumConstantMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mIndex.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_enumConstantMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_enumConstantMap_2D_element::getter_mIndex (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIndex ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @enumConstantMap-element type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_enumConstantMap_2D_element ("enumConstantMap-element",
                                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_enumConstantMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumConstantMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_enumConstantMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumConstantMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumConstantMap_2D_element GALGAS_enumConstantMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_enumConstantMap_2D_element result ;
  const GALGAS_enumConstantMap_2D_element * p = (const GALGAS_enumConstantMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_enumConstantMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumConstantMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structurePropertyListAST_2D_element::GALGAS_structurePropertyListAST_2D_element (void) :
mProperty_mFieldName (),
mProperty_mIsPublic (),
mProperty_mFieldTypeName (),
mProperty_mInitialisation () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structurePropertyListAST_2D_element::~ GALGAS_structurePropertyListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structurePropertyListAST_2D_element::GALGAS_structurePropertyListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                        const GALGAS_bool & inOperand1,
                                                                                        const GALGAS_lstring & inOperand2,
                                                                                        const GALGAS_structureVarInit & inOperand3) :
mProperty_mFieldName (inOperand0),
mProperty_mIsPublic (inOperand1),
mProperty_mFieldTypeName (inOperand2),
mProperty_mInitialisation (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structurePropertyListAST_2D_element GALGAS_structurePropertyListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                        const GALGAS_bool & inOperand1,
                                                                                                        const GALGAS_lstring & inOperand2,
                                                                                                        const GALGAS_structureVarInit & inOperand3 
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_structurePropertyListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_structurePropertyListAST_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_structurePropertyListAST_2D_element::objectCompare (const GALGAS_structurePropertyListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mFieldName.objectCompare (inOperand.mProperty_mFieldName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mIsPublic.objectCompare (inOperand.mProperty_mIsPublic) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFieldTypeName.objectCompare (inOperand.mProperty_mFieldTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mInitialisation.objectCompare (inOperand.mProperty_mInitialisation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_structurePropertyListAST_2D_element::isValid (void) const {
  return mProperty_mFieldName.isValid () && mProperty_mIsPublic.isValid () && mProperty_mFieldTypeName.isValid () && mProperty_mInitialisation.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_structurePropertyListAST_2D_element::drop (void) {
  mProperty_mFieldName.drop () ;
  mProperty_mIsPublic.drop () ;
  mProperty_mFieldTypeName.drop () ;
  mProperty_mInitialisation.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_structurePropertyListAST_2D_element::description (C_String & ioString,
                                                              const int32_t inIndentation) const {
  ioString << "<struct @structurePropertyListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mFieldName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mIsPublic.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFieldTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mInitialisation.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_structurePropertyListAST_2D_element::getter_mFieldName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFieldName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_structurePropertyListAST_2D_element::getter_mIsPublic (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIsPublic ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_structurePropertyListAST_2D_element::getter_mFieldTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFieldTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structureVarInit GALGAS_structurePropertyListAST_2D_element::getter_mInitialisation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInitialisation ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @structurePropertyListAST-element type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_structurePropertyListAST_2D_element ("structurePropertyListAST-element",
                                                            NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_structurePropertyListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structurePropertyListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_structurePropertyListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_structurePropertyListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structurePropertyListAST_2D_element GALGAS_structurePropertyListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_structurePropertyListAST_2D_element result ;
  const GALGAS_structurePropertyListAST_2D_element * p = (const GALGAS_structurePropertyListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_structurePropertyListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("structurePropertyListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyList_2D_element::GALGAS_propertyList_2D_element (void) :
mProperty_mPropertyName (),
mProperty_mType () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyList_2D_element::~ GALGAS_propertyList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyList_2D_element::GALGAS_propertyList_2D_element (const GALGAS_string & inOperand0,
                                                                const GALGAS_unifiedTypeMap_2D_proxy & inOperand1) :
mProperty_mPropertyName (inOperand0),
mProperty_mType (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyList_2D_element GALGAS_propertyList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_propertyList_2D_element (GALGAS_string::constructor_default (HERE),
                                         GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyList_2D_element GALGAS_propertyList_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                const GALGAS_unifiedTypeMap_2D_proxy & inOperand1 
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_propertyList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_propertyList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_propertyList_2D_element::objectCompare (const GALGAS_propertyList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mPropertyName.objectCompare (inOperand.mProperty_mPropertyName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mType.objectCompare (inOperand.mProperty_mType) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_propertyList_2D_element::isValid (void) const {
  return mProperty_mPropertyName.isValid () && mProperty_mType.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_propertyList_2D_element::drop (void) {
  mProperty_mPropertyName.drop () ;
  mProperty_mType.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_propertyList_2D_element::description (C_String & ioString,
                                                  const int32_t inIndentation) const {
  ioString << "<struct @propertyList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mPropertyName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mType.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_propertyList_2D_element::getter_mPropertyName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPropertyName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_propertyList_2D_element::getter_mType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mType ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @propertyList-element type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_propertyList_2D_element ("propertyList-element",
                                                NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_propertyList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_propertyList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_propertyList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyList_2D_element GALGAS_propertyList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_propertyList_2D_element result ;
  const GALGAS_propertyList_2D_element * p = (const GALGAS_propertyList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_propertyList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyMap_2D_element::GALGAS_propertyMap_2D_element (void) :
mProperty_lkey (),
mProperty_mIsPublic (),
mProperty_mPropertyObject () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyMap_2D_element::~ GALGAS_propertyMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyMap_2D_element::GALGAS_propertyMap_2D_element (const GALGAS_lstring & inOperand0,
                                                              const GALGAS_bool & inOperand1,
                                                              const GALGAS_objectIR & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mIsPublic (inOperand1),
mProperty_mPropertyObject (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyMap_2D_element GALGAS_propertyMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                              const GALGAS_bool & inOperand1,
                                                                              const GALGAS_objectIR & inOperand2 
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_propertyMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_propertyMap_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_propertyMap_2D_element::objectCompare (const GALGAS_propertyMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mIsPublic.objectCompare (inOperand.mProperty_mIsPublic) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mPropertyObject.objectCompare (inOperand.mProperty_mPropertyObject) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_propertyMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mIsPublic.isValid () && mProperty_mPropertyObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_propertyMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mIsPublic.drop () ;
  mProperty_mPropertyObject.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_propertyMap_2D_element::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "<struct @propertyMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mIsPublic.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mPropertyObject.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_propertyMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_propertyMap_2D_element::getter_mIsPublic (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIsPublic ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_propertyMap_2D_element::getter_mPropertyObject (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPropertyObject ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @propertyMap-element type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_propertyMap_2D_element ("propertyMap-element",
                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_propertyMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_propertyMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_propertyMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyMap_2D_element GALGAS_propertyMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_propertyMap_2D_element result ;
  const GALGAS_propertyMap_2D_element * p = (const GALGAS_propertyMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_propertyMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorSignature_2D_element::GALGAS_constructorSignature_2D_element (void) :
mProperty_mSelector (),
mProperty_mType (),
mProperty_mFieldIndex () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorSignature_2D_element::~ GALGAS_constructorSignature_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorSignature_2D_element::GALGAS_constructorSignature_2D_element (const GALGAS_string & inOperand0,
                                                                                const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                                const GALGAS_uint & inOperand2) :
mProperty_mSelector (inOperand0),
mProperty_mType (inOperand1),
mProperty_mFieldIndex (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorSignature_2D_element GALGAS_constructorSignature_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_constructorSignature_2D_element (GALGAS_string::constructor_default (HERE),
                                                 GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                                 GALGAS_uint::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorSignature_2D_element GALGAS_constructorSignature_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                                                const GALGAS_uint & inOperand2 
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_constructorSignature_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_constructorSignature_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_constructorSignature_2D_element::objectCompare (const GALGAS_constructorSignature_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mSelector.objectCompare (inOperand.mProperty_mSelector) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mType.objectCompare (inOperand.mProperty_mType) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFieldIndex.objectCompare (inOperand.mProperty_mFieldIndex) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_constructorSignature_2D_element::isValid (void) const {
  return mProperty_mSelector.isValid () && mProperty_mType.isValid () && mProperty_mFieldIndex.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_constructorSignature_2D_element::drop (void) {
  mProperty_mSelector.drop () ;
  mProperty_mType.drop () ;
  mProperty_mFieldIndex.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_constructorSignature_2D_element::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "<struct @constructorSignature-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mSelector.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFieldIndex.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_constructorSignature_2D_element::getter_mSelector (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSelector ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_constructorSignature_2D_element::getter_mType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_constructorSignature_2D_element::getter_mFieldIndex (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFieldIndex ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @constructorSignature-element type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_constructorSignature_2D_element ("constructorSignature-element",
                                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_constructorSignature_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constructorSignature_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_constructorSignature_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_constructorSignature_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorSignature_2D_element GALGAS_constructorSignature_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_constructorSignature_2D_element result ;
  const GALGAS_constructorSignature_2D_element * p = (const GALGAS_constructorSignature_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_constructorSignature_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("constructorSignature-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sortedOperandIRList_2D_element::GALGAS_sortedOperandIRList_2D_element (void) :
mProperty_mOperand (),
mProperty_mIndex () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sortedOperandIRList_2D_element::~ GALGAS_sortedOperandIRList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sortedOperandIRList_2D_element::GALGAS_sortedOperandIRList_2D_element (const GALGAS_objectIR & inOperand0,
                                                                              const GALGAS_uint & inOperand1) :
mProperty_mOperand (inOperand0),
mProperty_mIndex (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sortedOperandIRList_2D_element GALGAS_sortedOperandIRList_2D_element::constructor_new (const GALGAS_objectIR & inOperand0,
                                                                                              const GALGAS_uint & inOperand1 
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_sortedOperandIRList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_sortedOperandIRList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_sortedOperandIRList_2D_element::objectCompare (const GALGAS_sortedOperandIRList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mOperand.objectCompare (inOperand.mProperty_mOperand) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mIndex.objectCompare (inOperand.mProperty_mIndex) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_sortedOperandIRList_2D_element::isValid (void) const {
  return mProperty_mOperand.isValid () && mProperty_mIndex.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_sortedOperandIRList_2D_element::drop (void) {
  mProperty_mOperand.drop () ;
  mProperty_mIndex.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_sortedOperandIRList_2D_element::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "<struct @sortedOperandIRList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mOperand.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mIndex.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_sortedOperandIRList_2D_element::getter_mOperand (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOperand ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_sortedOperandIRList_2D_element::getter_mIndex (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIndex ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @sortedOperandIRList-element type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_sortedOperandIRList_2D_element ("sortedOperandIRList-element",
                                                       NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_sortedOperandIRList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sortedOperandIRList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_sortedOperandIRList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sortedOperandIRList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sortedOperandIRList_2D_element GALGAS_sortedOperandIRList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_sortedOperandIRList_2D_element result ;
  const GALGAS_sortedOperandIRList_2D_element * p = (const GALGAS_sortedOperandIRList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_sortedOperandIRList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sortedOperandIRList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionDeclarationListAST_2D_element::GALGAS_extensionDeclarationListAST_2D_element (void) :
mProperty_mTypeName (),
mProperty_mProcedureDeclarationListAST (),
mProperty_mPropertyList (),
mProperty_mSVCListAST (),
mProperty_mGuardListAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionDeclarationListAST_2D_element::~ GALGAS_extensionDeclarationListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionDeclarationListAST_2D_element::GALGAS_extensionDeclarationListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                              const GALGAS_functionDeclarationListAST & inOperand1,
                                                                                              const GALGAS_structurePropertyListAST & inOperand2,
                                                                                              const GALGAS_systemRoutineDeclarationListAST & inOperand3,
                                                                                              const GALGAS_guardDeclarationListAST & inOperand4) :
mProperty_mTypeName (inOperand0),
mProperty_mProcedureDeclarationListAST (inOperand1),
mProperty_mPropertyList (inOperand2),
mProperty_mSVCListAST (inOperand3),
mProperty_mGuardListAST (inOperand4) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionDeclarationListAST_2D_element GALGAS_extensionDeclarationListAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_extensionDeclarationListAST_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                        GALGAS_functionDeclarationListAST::constructor_emptyList (HERE),
                                                        GALGAS_structurePropertyListAST::constructor_emptyList (HERE),
                                                        GALGAS_systemRoutineDeclarationListAST::constructor_emptyList (HERE),
                                                        GALGAS_guardDeclarationListAST::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionDeclarationListAST_2D_element GALGAS_extensionDeclarationListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                              const GALGAS_functionDeclarationListAST & inOperand1,
                                                                                                              const GALGAS_structurePropertyListAST & inOperand2,
                                                                                                              const GALGAS_systemRoutineDeclarationListAST & inOperand3,
                                                                                                              const GALGAS_guardDeclarationListAST & inOperand4 
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_extensionDeclarationListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_extensionDeclarationListAST_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_extensionDeclarationListAST_2D_element::objectCompare (const GALGAS_extensionDeclarationListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mTypeName.objectCompare (inOperand.mProperty_mTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mProcedureDeclarationListAST.objectCompare (inOperand.mProperty_mProcedureDeclarationListAST) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mPropertyList.objectCompare (inOperand.mProperty_mPropertyList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSVCListAST.objectCompare (inOperand.mProperty_mSVCListAST) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mGuardListAST.objectCompare (inOperand.mProperty_mGuardListAST) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_extensionDeclarationListAST_2D_element::isValid (void) const {
  return mProperty_mTypeName.isValid () && mProperty_mProcedureDeclarationListAST.isValid () && mProperty_mPropertyList.isValid () && mProperty_mSVCListAST.isValid () && mProperty_mGuardListAST.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_extensionDeclarationListAST_2D_element::drop (void) {
  mProperty_mTypeName.drop () ;
  mProperty_mProcedureDeclarationListAST.drop () ;
  mProperty_mPropertyList.drop () ;
  mProperty_mSVCListAST.drop () ;
  mProperty_mGuardListAST.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_extensionDeclarationListAST_2D_element::description (C_String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString << "<struct @extensionDeclarationListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mProcedureDeclarationListAST.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mPropertyList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSVCListAST.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mGuardListAST.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_extensionDeclarationListAST_2D_element::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionDeclarationListAST GALGAS_extensionDeclarationListAST_2D_element::getter_mProcedureDeclarationListAST (UNUSED_LOCATION_ARGS) const {
  return mProperty_mProcedureDeclarationListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structurePropertyListAST GALGAS_extensionDeclarationListAST_2D_element::getter_mPropertyList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPropertyList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_systemRoutineDeclarationListAST GALGAS_extensionDeclarationListAST_2D_element::getter_mSVCListAST (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSVCListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardDeclarationListAST GALGAS_extensionDeclarationListAST_2D_element::getter_mGuardListAST (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGuardListAST ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @extensionDeclarationListAST-element type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_extensionDeclarationListAST_2D_element ("extensionDeclarationListAST-element",
                                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_extensionDeclarationListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionDeclarationListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_extensionDeclarationListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_extensionDeclarationListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionDeclarationListAST_2D_element GALGAS_extensionDeclarationListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_extensionDeclarationListAST_2D_element result ;
  const GALGAS_extensionDeclarationListAST_2D_element * p = (const GALGAS_extensionDeclarationListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_extensionDeclarationListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionDeclarationListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterNameList_2D_element::GALGAS_controlRegisterNameList_2D_element (void) :
mProperty_mRegisterName (),
mProperty_mControlRegisterKind (),
mProperty_mAttributeList (),
mProperty_mRegisterAddress (),
mProperty_mRegisterAddressLocation () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterNameList_2D_element::~ GALGAS_controlRegisterNameList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterNameList_2D_element::GALGAS_controlRegisterNameList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                      const GALGAS_controlRegisterKind & inOperand1,
                                                                                      const GALGAS_lstringlist & inOperand2,
                                                                                      const GALGAS_expressionAST & inOperand3,
                                                                                      const GALGAS_location & inOperand4) :
mProperty_mRegisterName (inOperand0),
mProperty_mControlRegisterKind (inOperand1),
mProperty_mAttributeList (inOperand2),
mProperty_mRegisterAddress (inOperand3),
mProperty_mRegisterAddressLocation (inOperand4) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterNameList_2D_element GALGAS_controlRegisterNameList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                      const GALGAS_controlRegisterKind & inOperand1,
                                                                                                      const GALGAS_lstringlist & inOperand2,
                                                                                                      const GALGAS_expressionAST & inOperand3,
                                                                                                      const GALGAS_location & inOperand4 
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_controlRegisterNameList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_controlRegisterNameList_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_controlRegisterNameList_2D_element::objectCompare (const GALGAS_controlRegisterNameList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mRegisterName.objectCompare (inOperand.mProperty_mRegisterName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mControlRegisterKind.objectCompare (inOperand.mProperty_mControlRegisterKind) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mAttributeList.objectCompare (inOperand.mProperty_mAttributeList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mRegisterAddress.objectCompare (inOperand.mProperty_mRegisterAddress) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mRegisterAddressLocation.objectCompare (inOperand.mProperty_mRegisterAddressLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_controlRegisterNameList_2D_element::isValid (void) const {
  return mProperty_mRegisterName.isValid () && mProperty_mControlRegisterKind.isValid () && mProperty_mAttributeList.isValid () && mProperty_mRegisterAddress.isValid () && mProperty_mRegisterAddressLocation.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_controlRegisterNameList_2D_element::drop (void) {
  mProperty_mRegisterName.drop () ;
  mProperty_mControlRegisterKind.drop () ;
  mProperty_mAttributeList.drop () ;
  mProperty_mRegisterAddress.drop () ;
  mProperty_mRegisterAddressLocation.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_controlRegisterNameList_2D_element::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "<struct @controlRegisterNameList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mRegisterName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mControlRegisterKind.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mAttributeList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mRegisterAddress.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mRegisterAddressLocation.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_controlRegisterNameList_2D_element::getter_mRegisterName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRegisterName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterKind GALGAS_controlRegisterNameList_2D_element::getter_mControlRegisterKind (UNUSED_LOCATION_ARGS) const {
  return mProperty_mControlRegisterKind ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_controlRegisterNameList_2D_element::getter_mAttributeList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAttributeList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST GALGAS_controlRegisterNameList_2D_element::getter_mRegisterAddress (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRegisterAddress ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_controlRegisterNameList_2D_element::getter_mRegisterAddressLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRegisterAddressLocation ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @controlRegisterNameList-element type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_controlRegisterNameList_2D_element ("controlRegisterNameList-element",
                                                           NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_controlRegisterNameList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterNameList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_controlRegisterNameList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_controlRegisterNameList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterNameList_2D_element GALGAS_controlRegisterNameList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterNameList_2D_element result ;
  const GALGAS_controlRegisterNameList_2D_element * p = (const GALGAS_controlRegisterNameList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_controlRegisterNameList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterNameList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterBitSliceList_2D_element::GALGAS_controlRegisterBitSliceList_2D_element (void) :
mProperty_mRegisterBitSlice () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterBitSliceList_2D_element::~ GALGAS_controlRegisterBitSliceList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterBitSliceList_2D_element::GALGAS_controlRegisterBitSliceList_2D_element (const GALGAS_controlRegisterBitSlice & inOperand0) :
mProperty_mRegisterBitSlice (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterBitSliceList_2D_element GALGAS_controlRegisterBitSliceList_2D_element::constructor_new (const GALGAS_controlRegisterBitSlice & inOperand0 
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_controlRegisterBitSliceList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_controlRegisterBitSliceList_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_controlRegisterBitSliceList_2D_element::objectCompare (const GALGAS_controlRegisterBitSliceList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mRegisterBitSlice.objectCompare (inOperand.mProperty_mRegisterBitSlice) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_controlRegisterBitSliceList_2D_element::isValid (void) const {
  return mProperty_mRegisterBitSlice.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_controlRegisterBitSliceList_2D_element::drop (void) {
  mProperty_mRegisterBitSlice.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_controlRegisterBitSliceList_2D_element::description (C_String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString << "<struct @controlRegisterBitSliceList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mRegisterBitSlice.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterBitSlice GALGAS_controlRegisterBitSliceList_2D_element::getter_mRegisterBitSlice (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRegisterBitSlice ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @controlRegisterBitSliceList-element type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_controlRegisterBitSliceList_2D_element ("controlRegisterBitSliceList-element",
                                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_controlRegisterBitSliceList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterBitSliceList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_controlRegisterBitSliceList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_controlRegisterBitSliceList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterBitSliceList_2D_element GALGAS_controlRegisterBitSliceList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterBitSliceList_2D_element result ;
  const GALGAS_controlRegisterBitSliceList_2D_element * p = (const GALGAS_controlRegisterBitSliceList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_controlRegisterBitSliceList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterBitSliceList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterFieldMap_2D_element::GALGAS_controlRegisterFieldMap_2D_element (void) :
mProperty_lkey (),
mProperty_mBitIndex (),
mProperty_mBitCount () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterFieldMap_2D_element::~ GALGAS_controlRegisterFieldMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterFieldMap_2D_element::GALGAS_controlRegisterFieldMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                      const GALGAS_uint & inOperand1,
                                                                                      const GALGAS_uint & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mBitIndex (inOperand1),
mProperty_mBitCount (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterFieldMap_2D_element GALGAS_controlRegisterFieldMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_controlRegisterFieldMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                    GALGAS_uint::constructor_default (HERE),
                                                    GALGAS_uint::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterFieldMap_2D_element GALGAS_controlRegisterFieldMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                      const GALGAS_uint & inOperand1,
                                                                                                      const GALGAS_uint & inOperand2 
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_controlRegisterFieldMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_controlRegisterFieldMap_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_controlRegisterFieldMap_2D_element::objectCompare (const GALGAS_controlRegisterFieldMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBitIndex.objectCompare (inOperand.mProperty_mBitIndex) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBitCount.objectCompare (inOperand.mProperty_mBitCount) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_controlRegisterFieldMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mBitIndex.isValid () && mProperty_mBitCount.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_controlRegisterFieldMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mBitIndex.drop () ;
  mProperty_mBitCount.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_controlRegisterFieldMap_2D_element::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "<struct @controlRegisterFieldMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBitIndex.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBitCount.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_controlRegisterFieldMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_controlRegisterFieldMap_2D_element::getter_mBitIndex (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBitIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_controlRegisterFieldMap_2D_element::getter_mBitCount (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBitCount ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @controlRegisterFieldMap-element type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_controlRegisterFieldMap_2D_element ("controlRegisterFieldMap-element",
                                                           NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_controlRegisterFieldMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterFieldMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_controlRegisterFieldMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_controlRegisterFieldMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterFieldMap_2D_element GALGAS_controlRegisterFieldMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterFieldMap_2D_element result ;
  const GALGAS_controlRegisterFieldMap_2D_element * p = (const GALGAS_controlRegisterFieldMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_controlRegisterFieldMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterFieldMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sliceMap_2D_element::GALGAS_sliceMap_2D_element (void) :
mProperty_lkey (),
mProperty_mAccessOperator (),
mProperty_mAccessRightOperand (),
mProperty_mSubMap (),
mProperty_mResultType () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sliceMap_2D_element::~ GALGAS_sliceMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sliceMap_2D_element::GALGAS_sliceMap_2D_element (const GALGAS_lstring & inOperand0,
                                                        const GALGAS_llvmBinaryOperation & inOperand1,
                                                        const GALGAS_bigint & inOperand2,
                                                        const GALGAS_sliceMap & inOperand3,
                                                        const GALGAS_unifiedTypeMap_2D_proxy & inOperand4) :
mProperty_lkey (inOperand0),
mProperty_mAccessOperator (inOperand1),
mProperty_mAccessRightOperand (inOperand2),
mProperty_mSubMap (inOperand3),
mProperty_mResultType (inOperand4) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sliceMap_2D_element GALGAS_sliceMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                        const GALGAS_llvmBinaryOperation & inOperand1,
                                                                        const GALGAS_bigint & inOperand2,
                                                                        const GALGAS_sliceMap & inOperand3,
                                                                        const GALGAS_unifiedTypeMap_2D_proxy & inOperand4 
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_sliceMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_sliceMap_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_sliceMap_2D_element::objectCompare (const GALGAS_sliceMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mAccessOperator.objectCompare (inOperand.mProperty_mAccessOperator) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mAccessRightOperand.objectCompare (inOperand.mProperty_mAccessRightOperand) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSubMap.objectCompare (inOperand.mProperty_mSubMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mResultType.objectCompare (inOperand.mProperty_mResultType) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_sliceMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mAccessOperator.isValid () && mProperty_mAccessRightOperand.isValid () && mProperty_mSubMap.isValid () && mProperty_mResultType.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_sliceMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mAccessOperator.drop () ;
  mProperty_mAccessRightOperand.drop () ;
  mProperty_mSubMap.drop () ;
  mProperty_mResultType.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_sliceMap_2D_element::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "<struct @sliceMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mAccessOperator.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mAccessRightOperand.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSubMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mResultType.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_sliceMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_llvmBinaryOperation GALGAS_sliceMap_2D_element::getter_mAccessOperator (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAccessOperator ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint GALGAS_sliceMap_2D_element::getter_mAccessRightOperand (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAccessRightOperand ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sliceMap GALGAS_sliceMap_2D_element::getter_mSubMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSubMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_sliceMap_2D_element::getter_mResultType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mResultType ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @sliceMap-element type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_sliceMap_2D_element ("sliceMap-element",
                                            NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_sliceMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sliceMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_sliceMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sliceMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sliceMap_2D_element GALGAS_sliceMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_sliceMap_2D_element result ;
  const GALGAS_sliceMap_2D_element * p = (const GALGAS_sliceMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_sliceMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sliceMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterMap_2D_element::GALGAS_controlRegisterMap_2D_element (void) :
mProperty_lkey (),
mProperty_mType (),
mProperty_mIsReadOnly (),
mProperty_mIsAccessibleInUserMode (),
mProperty_mRegisterFieldAccessMap (),
mProperty_mRegisterFieldMap (),
mProperty_mAddress (),
mProperty_mControlRegisterFieldList (),
mProperty_mRegisterBitCount (),
mProperty_mArraySize (),
mProperty_mElementArraySize () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterMap_2D_element::~ GALGAS_controlRegisterMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterMap_2D_element::GALGAS_controlRegisterMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                            const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                            const GALGAS_bool & inOperand2,
                                                                            const GALGAS_bool & inOperand3,
                                                                            const GALGAS_sliceMap & inOperand4,
                                                                            const GALGAS_controlRegisterFieldMap & inOperand5,
                                                                            const GALGAS_bigint & inOperand6,
                                                                            const GALGAS_controlRegisterFieldList & inOperand7,
                                                                            const GALGAS_uint & inOperand8,
                                                                            const GALGAS_uint & inOperand9,
                                                                            const GALGAS_uint & inOperand10) :
mProperty_lkey (inOperand0),
mProperty_mType (inOperand1),
mProperty_mIsReadOnly (inOperand2),
mProperty_mIsAccessibleInUserMode (inOperand3),
mProperty_mRegisterFieldAccessMap (inOperand4),
mProperty_mRegisterFieldMap (inOperand5),
mProperty_mAddress (inOperand6),
mProperty_mControlRegisterFieldList (inOperand7),
mProperty_mRegisterBitCount (inOperand8),
mProperty_mArraySize (inOperand9),
mProperty_mElementArraySize (inOperand10) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterMap_2D_element GALGAS_controlRegisterMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_controlRegisterMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                               GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                               GALGAS_bool::constructor_default (HERE),
                                               GALGAS_bool::constructor_default (HERE),
                                               GALGAS_sliceMap::constructor_emptyMap (HERE),
                                               GALGAS_controlRegisterFieldMap::constructor_emptyMap (HERE),
                                               GALGAS_bigint::constructor_zero (HERE),
                                               GALGAS_controlRegisterFieldList::constructor_emptyList (HERE),
                                               GALGAS_uint::constructor_default (HERE),
                                               GALGAS_uint::constructor_default (HERE),
                                               GALGAS_uint::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterMap_2D_element GALGAS_controlRegisterMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                            const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                                            const GALGAS_bool & inOperand2,
                                                                                            const GALGAS_bool & inOperand3,
                                                                                            const GALGAS_sliceMap & inOperand4,
                                                                                            const GALGAS_controlRegisterFieldMap & inOperand5,
                                                                                            const GALGAS_bigint & inOperand6,
                                                                                            const GALGAS_controlRegisterFieldList & inOperand7,
                                                                                            const GALGAS_uint & inOperand8,
                                                                                            const GALGAS_uint & inOperand9,
                                                                                            const GALGAS_uint & inOperand10 
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_controlRegisterMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid () && inOperand10.isValid ()) {
    result = GALGAS_controlRegisterMap_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_controlRegisterMap_2D_element::objectCompare (const GALGAS_controlRegisterMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mType.objectCompare (inOperand.mProperty_mType) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mIsReadOnly.objectCompare (inOperand.mProperty_mIsReadOnly) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mIsAccessibleInUserMode.objectCompare (inOperand.mProperty_mIsAccessibleInUserMode) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mRegisterFieldAccessMap.objectCompare (inOperand.mProperty_mRegisterFieldAccessMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mRegisterFieldMap.objectCompare (inOperand.mProperty_mRegisterFieldMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mAddress.objectCompare (inOperand.mProperty_mAddress) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mControlRegisterFieldList.objectCompare (inOperand.mProperty_mControlRegisterFieldList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mRegisterBitCount.objectCompare (inOperand.mProperty_mRegisterBitCount) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mArraySize.objectCompare (inOperand.mProperty_mArraySize) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mElementArraySize.objectCompare (inOperand.mProperty_mElementArraySize) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_controlRegisterMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mType.isValid () && mProperty_mIsReadOnly.isValid () && mProperty_mIsAccessibleInUserMode.isValid () && mProperty_mRegisterFieldAccessMap.isValid () && mProperty_mRegisterFieldMap.isValid () && mProperty_mAddress.isValid () && mProperty_mControlRegisterFieldList.isValid () && mProperty_mRegisterBitCount.isValid () && mProperty_mArraySize.isValid () && mProperty_mElementArraySize.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_controlRegisterMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mType.drop () ;
  mProperty_mIsReadOnly.drop () ;
  mProperty_mIsAccessibleInUserMode.drop () ;
  mProperty_mRegisterFieldAccessMap.drop () ;
  mProperty_mRegisterFieldMap.drop () ;
  mProperty_mAddress.drop () ;
  mProperty_mControlRegisterFieldList.drop () ;
  mProperty_mRegisterBitCount.drop () ;
  mProperty_mArraySize.drop () ;
  mProperty_mElementArraySize.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_controlRegisterMap_2D_element::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "<struct @controlRegisterMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mIsReadOnly.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mIsAccessibleInUserMode.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mRegisterFieldAccessMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mRegisterFieldMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mAddress.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mControlRegisterFieldList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mRegisterBitCount.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mArraySize.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mElementArraySize.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_controlRegisterMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_controlRegisterMap_2D_element::getter_mType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_controlRegisterMap_2D_element::getter_mIsReadOnly (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIsReadOnly ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_controlRegisterMap_2D_element::getter_mIsAccessibleInUserMode (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIsAccessibleInUserMode ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sliceMap GALGAS_controlRegisterMap_2D_element::getter_mRegisterFieldAccessMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRegisterFieldAccessMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterFieldMap GALGAS_controlRegisterMap_2D_element::getter_mRegisterFieldMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRegisterFieldMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint GALGAS_controlRegisterMap_2D_element::getter_mAddress (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAddress ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterFieldList GALGAS_controlRegisterMap_2D_element::getter_mControlRegisterFieldList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mControlRegisterFieldList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_controlRegisterMap_2D_element::getter_mRegisterBitCount (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRegisterBitCount ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_controlRegisterMap_2D_element::getter_mArraySize (UNUSED_LOCATION_ARGS) const {
  return mProperty_mArraySize ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_controlRegisterMap_2D_element::getter_mElementArraySize (UNUSED_LOCATION_ARGS) const {
  return mProperty_mElementArraySize ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @controlRegisterMap-element type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_controlRegisterMap_2D_element ("controlRegisterMap-element",
                                                      NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_controlRegisterMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_controlRegisterMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_controlRegisterMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterMap_2D_element GALGAS_controlRegisterMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterMap_2D_element result ;
  const GALGAS_controlRegisterMap_2D_element * p = (const GALGAS_controlRegisterMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_controlRegisterMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleMap_2D_element::GALGAS_moduleMap_2D_element (void) :
mProperty_lkey () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleMap_2D_element::~ GALGAS_moduleMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleMap_2D_element::GALGAS_moduleMap_2D_element (const GALGAS_lstring & inOperand0) :
mProperty_lkey (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleMap_2D_element GALGAS_moduleMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_moduleMap_2D_element (GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleMap_2D_element GALGAS_moduleMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0 
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_moduleMap_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_moduleMap_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_moduleMap_2D_element::objectCompare (const GALGAS_moduleMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_moduleMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_moduleMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_moduleMap_2D_element::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "<struct @moduleMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_moduleMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @moduleMap-element type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_moduleMap_2D_element ("moduleMap-element",
                                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_moduleMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_moduleMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_moduleMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_moduleMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleMap_2D_element GALGAS_moduleMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_moduleMap_2D_element result ;
  const GALGAS_moduleMap_2D_element * p = (const GALGAS_moduleMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_moduleMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("moduleMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticArrayPropertyListAST_2D_element::GALGAS_staticArrayPropertyListAST_2D_element (void) :
mProperty_mPropertyName (),
mProperty_mPropertyType () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticArrayPropertyListAST_2D_element::~ GALGAS_staticArrayPropertyListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticArrayPropertyListAST_2D_element::GALGAS_staticArrayPropertyListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                            const GALGAS_staticArrayPropertyTypeAST & inOperand1) :
mProperty_mPropertyName (inOperand0),
mProperty_mPropertyType (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticArrayPropertyListAST_2D_element GALGAS_staticArrayPropertyListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                            const GALGAS_staticArrayPropertyTypeAST & inOperand1 
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_staticArrayPropertyListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_staticArrayPropertyListAST_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_staticArrayPropertyListAST_2D_element::objectCompare (const GALGAS_staticArrayPropertyListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mPropertyName.objectCompare (inOperand.mProperty_mPropertyName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mPropertyType.objectCompare (inOperand.mProperty_mPropertyType) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_staticArrayPropertyListAST_2D_element::isValid (void) const {
  return mProperty_mPropertyName.isValid () && mProperty_mPropertyType.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_staticArrayPropertyListAST_2D_element::drop (void) {
  mProperty_mPropertyName.drop () ;
  mProperty_mPropertyType.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_staticArrayPropertyListAST_2D_element::description (C_String & ioString,
                                                                const int32_t inIndentation) const {
  ioString << "<struct @staticArrayPropertyListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mPropertyName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mPropertyType.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_staticArrayPropertyListAST_2D_element::getter_mPropertyName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPropertyName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticArrayPropertyTypeAST GALGAS_staticArrayPropertyListAST_2D_element::getter_mPropertyType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPropertyType ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @staticArrayPropertyListAST-element type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_staticArrayPropertyListAST_2D_element ("staticArrayPropertyListAST-element",
                                                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_staticArrayPropertyListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_staticArrayPropertyListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_staticArrayPropertyListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_staticArrayPropertyListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticArrayPropertyListAST_2D_element GALGAS_staticArrayPropertyListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_staticArrayPropertyListAST_2D_element result ;
  const GALGAS_staticArrayPropertyListAST_2D_element * p = (const GALGAS_staticArrayPropertyListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_staticArrayPropertyListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("staticArrayPropertyListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticlistMap_2D_element::GALGAS_staticlistMap_2D_element (void) :
mProperty_lkey (),
mProperty_mStaticlistPropertyList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticlistMap_2D_element::~ GALGAS_staticlistMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticlistMap_2D_element::GALGAS_staticlistMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                  const GALGAS_propertyList & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mStaticlistPropertyList (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticlistMap_2D_element GALGAS_staticlistMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_staticlistMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                          GALGAS_propertyList::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticlistMap_2D_element GALGAS_staticlistMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                  const GALGAS_propertyList & inOperand1 
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_staticlistMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_staticlistMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_staticlistMap_2D_element::objectCompare (const GALGAS_staticlistMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mStaticlistPropertyList.objectCompare (inOperand.mProperty_mStaticlistPropertyList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_staticlistMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mStaticlistPropertyList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_staticlistMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mStaticlistPropertyList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_staticlistMap_2D_element::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "<struct @staticlistMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mStaticlistPropertyList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_staticlistMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyList GALGAS_staticlistMap_2D_element::getter_mStaticlistPropertyList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mStaticlistPropertyList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @staticlistMap-element type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_staticlistMap_2D_element ("staticlistMap-element",
                                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_staticlistMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_staticlistMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_staticlistMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_staticlistMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticlistMap_2D_element GALGAS_staticlistMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_staticlistMap_2D_element result ;
  const GALGAS_staticlistMap_2D_element * p = (const GALGAS_staticlistMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_staticlistMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("staticlistMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extendStaticArrayExpressionListAST_2D_element::GALGAS_extendStaticArrayExpressionListAST_2D_element (void) :
mProperty_mExpression (),
mProperty_mEndOfExpression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extendStaticArrayExpressionListAST_2D_element::~ GALGAS_extendStaticArrayExpressionListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extendStaticArrayExpressionListAST_2D_element::GALGAS_extendStaticArrayExpressionListAST_2D_element (const GALGAS_extendStaticArrayExpressionAST & inOperand0,
                                                                                                            const GALGAS_location & inOperand1) :
mProperty_mExpression (inOperand0),
mProperty_mEndOfExpression (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extendStaticArrayExpressionListAST_2D_element GALGAS_extendStaticArrayExpressionListAST_2D_element::constructor_new (const GALGAS_extendStaticArrayExpressionAST & inOperand0,
                                                                                                                            const GALGAS_location & inOperand1 
                                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_extendStaticArrayExpressionListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_extendStaticArrayExpressionListAST_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_extendStaticArrayExpressionListAST_2D_element::objectCompare (const GALGAS_extendStaticArrayExpressionListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mExpression.objectCompare (inOperand.mProperty_mExpression) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mEndOfExpression.objectCompare (inOperand.mProperty_mEndOfExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_extendStaticArrayExpressionListAST_2D_element::isValid (void) const {
  return mProperty_mExpression.isValid () && mProperty_mEndOfExpression.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_extendStaticArrayExpressionListAST_2D_element::drop (void) {
  mProperty_mExpression.drop () ;
  mProperty_mEndOfExpression.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_extendStaticArrayExpressionListAST_2D_element::description (C_String & ioString,
                                                                        const int32_t inIndentation) const {
  ioString << "<struct @extendStaticArrayExpressionListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mExpression.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mEndOfExpression.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extendStaticArrayExpressionAST GALGAS_extendStaticArrayExpressionListAST_2D_element::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_extendStaticArrayExpressionListAST_2D_element::getter_mEndOfExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOfExpression ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  @extendStaticArrayExpressionListAST-element type                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_extendStaticArrayExpressionListAST_2D_element ("extendStaticArrayExpressionListAST-element",
                                                                      NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_extendStaticArrayExpressionListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extendStaticArrayExpressionListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_extendStaticArrayExpressionListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_extendStaticArrayExpressionListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extendStaticArrayExpressionListAST_2D_element GALGAS_extendStaticArrayExpressionListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                          C_Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_extendStaticArrayExpressionListAST_2D_element result ;
  const GALGAS_extendStaticArrayExpressionListAST_2D_element * p = (const GALGAS_extendStaticArrayExpressionListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_extendStaticArrayExpressionListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extendStaticArrayExpressionListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticArrayMap_2D_element::GALGAS_staticArrayMap_2D_element (void) :
mProperty_lkey (),
mProperty_mInvokedFunctionSet () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticArrayMap_2D_element::~ GALGAS_staticArrayMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticArrayMap_2D_element::GALGAS_staticArrayMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                    const GALGAS_stringset & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mInvokedFunctionSet (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticArrayMap_2D_element GALGAS_staticArrayMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_staticArrayMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                           GALGAS_stringset::constructor_emptySet (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticArrayMap_2D_element GALGAS_staticArrayMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                    const GALGAS_stringset & inOperand1 
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_staticArrayMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_staticArrayMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_staticArrayMap_2D_element::objectCompare (const GALGAS_staticArrayMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mInvokedFunctionSet.objectCompare (inOperand.mProperty_mInvokedFunctionSet) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_staticArrayMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mInvokedFunctionSet.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_staticArrayMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mInvokedFunctionSet.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_staticArrayMap_2D_element::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "<struct @staticArrayMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mInvokedFunctionSet.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_staticArrayMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringset GALGAS_staticArrayMap_2D_element::getter_mInvokedFunctionSet (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInvokedFunctionSet ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @staticArrayMap-element type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_staticArrayMap_2D_element ("staticArrayMap-element",
                                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_staticArrayMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_staticArrayMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_staticArrayMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_staticArrayMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticArrayMap_2D_element GALGAS_staticArrayMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_staticArrayMap_2D_element result ;
  const GALGAS_staticArrayMap_2D_element * p = (const GALGAS_staticArrayMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_staticArrayMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("staticArrayMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskInitListAST_2D_element::GALGAS_taskInitListAST_2D_element (void) :
mProperty_mTaskInitPriority (),
mProperty_mTaskInitInstructionList (),
mProperty_mEndOfTaskInitDeclaration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskInitListAST_2D_element::~ GALGAS_taskInitListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskInitListAST_2D_element::GALGAS_taskInitListAST_2D_element (const GALGAS_lbigint & inOperand0,
                                                                      const GALGAS_instructionListAST & inOperand1,
                                                                      const GALGAS_location & inOperand2) :
mProperty_mTaskInitPriority (inOperand0),
mProperty_mTaskInitInstructionList (inOperand1),
mProperty_mEndOfTaskInitDeclaration (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskInitListAST_2D_element GALGAS_taskInitListAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_taskInitListAST_2D_element (GALGAS_lbigint::constructor_default (HERE),
                                            GALGAS_instructionListAST::constructor_emptyList (HERE),
                                            GALGAS_location::constructor_nowhere (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskInitListAST_2D_element GALGAS_taskInitListAST_2D_element::constructor_new (const GALGAS_lbigint & inOperand0,
                                                                                      const GALGAS_instructionListAST & inOperand1,
                                                                                      const GALGAS_location & inOperand2 
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_taskInitListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_taskInitListAST_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_taskInitListAST_2D_element::objectCompare (const GALGAS_taskInitListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mTaskInitPriority.objectCompare (inOperand.mProperty_mTaskInitPriority) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mTaskInitInstructionList.objectCompare (inOperand.mProperty_mTaskInitInstructionList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mEndOfTaskInitDeclaration.objectCompare (inOperand.mProperty_mEndOfTaskInitDeclaration) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_taskInitListAST_2D_element::isValid (void) const {
  return mProperty_mTaskInitPriority.isValid () && mProperty_mTaskInitInstructionList.isValid () && mProperty_mEndOfTaskInitDeclaration.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskInitListAST_2D_element::drop (void) {
  mProperty_mTaskInitPriority.drop () ;
  mProperty_mTaskInitInstructionList.drop () ;
  mProperty_mEndOfTaskInitDeclaration.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskInitListAST_2D_element::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "<struct @taskInitListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mTaskInitPriority.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mTaskInitInstructionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mEndOfTaskInitDeclaration.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbigint GALGAS_taskInitListAST_2D_element::getter_mTaskInitPriority (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTaskInitPriority ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST GALGAS_taskInitListAST_2D_element::getter_mTaskInitInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTaskInitInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_taskInitListAST_2D_element::getter_mEndOfTaskInitDeclaration (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOfTaskInitDeclaration ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @taskInitListAST-element type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_taskInitListAST_2D_element ("taskInitListAST-element",
                                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_taskInitListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_taskInitListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_taskInitListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_taskInitListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskInitListAST_2D_element GALGAS_taskInitListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_taskInitListAST_2D_element result ;
  const GALGAS_taskInitListAST_2D_element * p = (const GALGAS_taskInitListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_taskInitListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("taskInitListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskInitSortedListAST_2D_element::GALGAS_taskInitSortedListAST_2D_element (void) :
mProperty_mTaskInitPriority (),
mProperty_mTaskInitInstructionList (),
mProperty_mEndOfTaskInitDeclaration (),
mProperty_mPriority () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskInitSortedListAST_2D_element::~ GALGAS_taskInitSortedListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskInitSortedListAST_2D_element::GALGAS_taskInitSortedListAST_2D_element (const GALGAS_lbigint & inOperand0,
                                                                                  const GALGAS_instructionListAST & inOperand1,
                                                                                  const GALGAS_location & inOperand2,
                                                                                  const GALGAS_bigint & inOperand3) :
mProperty_mTaskInitPriority (inOperand0),
mProperty_mTaskInitInstructionList (inOperand1),
mProperty_mEndOfTaskInitDeclaration (inOperand2),
mProperty_mPriority (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskInitSortedListAST_2D_element GALGAS_taskInitSortedListAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_taskInitSortedListAST_2D_element (GALGAS_lbigint::constructor_default (HERE),
                                                  GALGAS_instructionListAST::constructor_emptyList (HERE),
                                                  GALGAS_location::constructor_nowhere (HERE),
                                                  GALGAS_bigint::constructor_zero (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskInitSortedListAST_2D_element GALGAS_taskInitSortedListAST_2D_element::constructor_new (const GALGAS_lbigint & inOperand0,
                                                                                                  const GALGAS_instructionListAST & inOperand1,
                                                                                                  const GALGAS_location & inOperand2,
                                                                                                  const GALGAS_bigint & inOperand3 
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_taskInitSortedListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_taskInitSortedListAST_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_taskInitSortedListAST_2D_element::objectCompare (const GALGAS_taskInitSortedListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mTaskInitPriority.objectCompare (inOperand.mProperty_mTaskInitPriority) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mTaskInitInstructionList.objectCompare (inOperand.mProperty_mTaskInitInstructionList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mEndOfTaskInitDeclaration.objectCompare (inOperand.mProperty_mEndOfTaskInitDeclaration) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mPriority.objectCompare (inOperand.mProperty_mPriority) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_taskInitSortedListAST_2D_element::isValid (void) const {
  return mProperty_mTaskInitPriority.isValid () && mProperty_mTaskInitInstructionList.isValid () && mProperty_mEndOfTaskInitDeclaration.isValid () && mProperty_mPriority.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskInitSortedListAST_2D_element::drop (void) {
  mProperty_mTaskInitPriority.drop () ;
  mProperty_mTaskInitInstructionList.drop () ;
  mProperty_mEndOfTaskInitDeclaration.drop () ;
  mProperty_mPriority.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskInitSortedListAST_2D_element::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "<struct @taskInitSortedListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mTaskInitPriority.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mTaskInitInstructionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mEndOfTaskInitDeclaration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mPriority.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbigint GALGAS_taskInitSortedListAST_2D_element::getter_mTaskInitPriority (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTaskInitPriority ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST GALGAS_taskInitSortedListAST_2D_element::getter_mTaskInitInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTaskInitInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_taskInitSortedListAST_2D_element::getter_mEndOfTaskInitDeclaration (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOfTaskInitDeclaration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint GALGAS_taskInitSortedListAST_2D_element::getter_mPriority (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPriority ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @taskInitSortedListAST-element type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_taskInitSortedListAST_2D_element ("taskInitSortedListAST-element",
                                                         NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_taskInitSortedListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_taskInitSortedListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_taskInitSortedListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_taskInitSortedListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskInitSortedListAST_2D_element GALGAS_taskInitSortedListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_taskInitSortedListAST_2D_element result ;
  const GALGAS_taskInitSortedListAST_2D_element * p = (const GALGAS_taskInitSortedListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_taskInitSortedListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("taskInitSortedListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskProcedureMap_2D_element::GALGAS_taskProcedureMap_2D_element (void) :
mProperty_lkey () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskProcedureMap_2D_element::~ GALGAS_taskProcedureMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskProcedureMap_2D_element::GALGAS_taskProcedureMap_2D_element (const GALGAS_lstring & inOperand0) :
mProperty_lkey (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskProcedureMap_2D_element GALGAS_taskProcedureMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_taskProcedureMap_2D_element (GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskProcedureMap_2D_element GALGAS_taskProcedureMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0 
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_taskProcedureMap_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_taskProcedureMap_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_taskProcedureMap_2D_element::objectCompare (const GALGAS_taskProcedureMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_taskProcedureMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskProcedureMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskProcedureMap_2D_element::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "<struct @taskProcedureMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_taskProcedureMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @taskProcedureMap-element type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_taskProcedureMap_2D_element ("taskProcedureMap-element",
                                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_taskProcedureMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_taskProcedureMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_taskProcedureMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_taskProcedureMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskProcedureMap_2D_element GALGAS_taskProcedureMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_taskProcedureMap_2D_element result ;
  const GALGAS_taskProcedureMap_2D_element * p = (const GALGAS_taskProcedureMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_taskProcedureMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("taskProcedureMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskMap_2D_element::GALGAS_taskMap_2D_element (void) :
mProperty_lkey (),
mProperty_mTaskProcedureMap () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskMap_2D_element::~ GALGAS_taskMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskMap_2D_element::GALGAS_taskMap_2D_element (const GALGAS_lstring & inOperand0,
                                                      const GALGAS_taskProcedureMap & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mTaskProcedureMap (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskMap_2D_element GALGAS_taskMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_taskMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                    GALGAS_taskProcedureMap::constructor_emptyMap (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskMap_2D_element GALGAS_taskMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                      const GALGAS_taskProcedureMap & inOperand1 
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_taskMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_taskMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_taskMap_2D_element::objectCompare (const GALGAS_taskMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mTaskProcedureMap.objectCompare (inOperand.mProperty_mTaskProcedureMap) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_taskMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mTaskProcedureMap.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mTaskProcedureMap.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskMap_2D_element::description (C_String & ioString,
                                             const int32_t inIndentation) const {
  ioString << "<struct @taskMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mTaskProcedureMap.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_taskMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskProcedureMap GALGAS_taskMap_2D_element::getter_mTaskProcedureMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTaskProcedureMap ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @taskMap-element type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_taskMap_2D_element ("taskMap-element",
                                           NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_taskMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_taskMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_taskMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_taskMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskMap_2D_element GALGAS_taskMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_taskMap_2D_element result ;
  const GALGAS_taskMap_2D_element * p = (const GALGAS_taskMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_taskMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("taskMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskMapIR_2D_element::GALGAS_taskMapIR_2D_element (void) :
mProperty_lkey (),
mProperty_mTaskType (),
mProperty_mPriority (),
mProperty_mStackSize (),
mProperty_mAllocaList (),
mProperty_mInitInstructionListIR () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskMapIR_2D_element::~ GALGAS_taskMapIR_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskMapIR_2D_element::GALGAS_taskMapIR_2D_element (const GALGAS_lstring & inOperand0,
                                                          const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                          const GALGAS_bigint & inOperand2,
                                                          const GALGAS_bigint & inOperand3,
                                                          const GALGAS_allocaList & inOperand4,
                                                          const GALGAS_instructionListIR & inOperand5) :
mProperty_lkey (inOperand0),
mProperty_mTaskType (inOperand1),
mProperty_mPriority (inOperand2),
mProperty_mStackSize (inOperand3),
mProperty_mAllocaList (inOperand4),
mProperty_mInitInstructionListIR (inOperand5) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskMapIR_2D_element GALGAS_taskMapIR_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_taskMapIR_2D_element (GALGAS_lstring::constructor_default (HERE),
                                      GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                      GALGAS_bigint::constructor_zero (HERE),
                                      GALGAS_bigint::constructor_zero (HERE),
                                      GALGAS_allocaList::constructor_emptyList (HERE),
                                      GALGAS_instructionListIR::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskMapIR_2D_element GALGAS_taskMapIR_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                          const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                          const GALGAS_bigint & inOperand2,
                                                                          const GALGAS_bigint & inOperand3,
                                                                          const GALGAS_allocaList & inOperand4,
                                                                          const GALGAS_instructionListIR & inOperand5 
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_taskMapIR_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid ()) {
    result = GALGAS_taskMapIR_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_taskMapIR_2D_element::objectCompare (const GALGAS_taskMapIR_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mTaskType.objectCompare (inOperand.mProperty_mTaskType) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mPriority.objectCompare (inOperand.mProperty_mPriority) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mStackSize.objectCompare (inOperand.mProperty_mStackSize) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mAllocaList.objectCompare (inOperand.mProperty_mAllocaList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mInitInstructionListIR.objectCompare (inOperand.mProperty_mInitInstructionListIR) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_taskMapIR_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mTaskType.isValid () && mProperty_mPriority.isValid () && mProperty_mStackSize.isValid () && mProperty_mAllocaList.isValid () && mProperty_mInitInstructionListIR.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskMapIR_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mTaskType.drop () ;
  mProperty_mPriority.drop () ;
  mProperty_mStackSize.drop () ;
  mProperty_mAllocaList.drop () ;
  mProperty_mInitInstructionListIR.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskMapIR_2D_element::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "<struct @taskMapIR-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mTaskType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mPriority.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mStackSize.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mAllocaList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mInitInstructionListIR.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_taskMapIR_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_taskMapIR_2D_element::getter_mTaskType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTaskType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint GALGAS_taskMapIR_2D_element::getter_mPriority (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPriority ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint GALGAS_taskMapIR_2D_element::getter_mStackSize (UNUSED_LOCATION_ARGS) const {
  return mProperty_mStackSize ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allocaList GALGAS_taskMapIR_2D_element::getter_mAllocaList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAllocaList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR GALGAS_taskMapIR_2D_element::getter_mInitInstructionListIR (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInitInstructionListIR ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @taskMapIR-element type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_taskMapIR_2D_element ("taskMapIR-element",
                                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_taskMapIR_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_taskMapIR_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_taskMapIR_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_taskMapIR_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskMapIR_2D_element GALGAS_taskMapIR_2D_element::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_taskMapIR_2D_element result ;
  const GALGAS_taskMapIR_2D_element * p = (const GALGAS_taskMapIR_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_taskMapIR_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("taskMapIR-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_panicRoutinePriorityMap_2D_element::GALGAS_panicRoutinePriorityMap_2D_element (void) :
mProperty_lkey () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_panicRoutinePriorityMap_2D_element::~ GALGAS_panicRoutinePriorityMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_panicRoutinePriorityMap_2D_element::GALGAS_panicRoutinePriorityMap_2D_element (const GALGAS_lstring & inOperand0) :
mProperty_lkey (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_panicRoutinePriorityMap_2D_element GALGAS_panicRoutinePriorityMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_panicRoutinePriorityMap_2D_element (GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_panicRoutinePriorityMap_2D_element GALGAS_panicRoutinePriorityMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0 
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_panicRoutinePriorityMap_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_panicRoutinePriorityMap_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_panicRoutinePriorityMap_2D_element::objectCompare (const GALGAS_panicRoutinePriorityMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_panicRoutinePriorityMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_panicRoutinePriorityMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_panicRoutinePriorityMap_2D_element::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "<struct @panicRoutinePriorityMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_panicRoutinePriorityMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @panicRoutinePriorityMap-element type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_panicRoutinePriorityMap_2D_element ("panicRoutinePriorityMap-element",
                                                           NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_panicRoutinePriorityMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_panicRoutinePriorityMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_panicRoutinePriorityMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_panicRoutinePriorityMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_panicRoutinePriorityMap_2D_element GALGAS_panicRoutinePriorityMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_panicRoutinePriorityMap_2D_element result ;
  const GALGAS_panicRoutinePriorityMap_2D_element * p = (const GALGAS_panicRoutinePriorityMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_panicRoutinePriorityMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("panicRoutinePriorityMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_systemRoutineDeclarationListAST_2D_element::GALGAS_systemRoutineDeclarationListAST_2D_element (void) :
mProperty_mName (),
mProperty_mRoutineKind (),
mProperty_mPublic (),
mProperty_mAttributeList (),
mProperty_mFormalArgumentList (),
mProperty_mReturnTypeName (),
mProperty_mInstructionList (),
mProperty_mEndOfInstructionListLocation () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_systemRoutineDeclarationListAST_2D_element::~ GALGAS_systemRoutineDeclarationListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_systemRoutineDeclarationListAST_2D_element::GALGAS_systemRoutineDeclarationListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                      const GALGAS_routineKind & inOperand1,
                                                                                                      const GALGAS_bool & inOperand2,
                                                                                                      const GALGAS_lstringlist & inOperand3,
                                                                                                      const GALGAS_routineFormalArgumentList & inOperand4,
                                                                                                      const GALGAS_lstring & inOperand5,
                                                                                                      const GALGAS_instructionListAST & inOperand6,
                                                                                                      const GALGAS_location & inOperand7) :
mProperty_mName (inOperand0),
mProperty_mRoutineKind (inOperand1),
mProperty_mPublic (inOperand2),
mProperty_mAttributeList (inOperand3),
mProperty_mFormalArgumentList (inOperand4),
mProperty_mReturnTypeName (inOperand5),
mProperty_mInstructionList (inOperand6),
mProperty_mEndOfInstructionListLocation (inOperand7) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_systemRoutineDeclarationListAST_2D_element GALGAS_systemRoutineDeclarationListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                      const GALGAS_routineKind & inOperand1,
                                                                                                                      const GALGAS_bool & inOperand2,
                                                                                                                      const GALGAS_lstringlist & inOperand3,
                                                                                                                      const GALGAS_routineFormalArgumentList & inOperand4,
                                                                                                                      const GALGAS_lstring & inOperand5,
                                                                                                                      const GALGAS_instructionListAST & inOperand6,
                                                                                                                      const GALGAS_location & inOperand7 
                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_systemRoutineDeclarationListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid ()) {
    result = GALGAS_systemRoutineDeclarationListAST_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_systemRoutineDeclarationListAST_2D_element::objectCompare (const GALGAS_systemRoutineDeclarationListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mName.objectCompare (inOperand.mProperty_mName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mRoutineKind.objectCompare (inOperand.mProperty_mRoutineKind) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mPublic.objectCompare (inOperand.mProperty_mPublic) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mAttributeList.objectCompare (inOperand.mProperty_mAttributeList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFormalArgumentList.objectCompare (inOperand.mProperty_mFormalArgumentList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mReturnTypeName.objectCompare (inOperand.mProperty_mReturnTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mInstructionList.objectCompare (inOperand.mProperty_mInstructionList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mEndOfInstructionListLocation.objectCompare (inOperand.mProperty_mEndOfInstructionListLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_systemRoutineDeclarationListAST_2D_element::isValid (void) const {
  return mProperty_mName.isValid () && mProperty_mRoutineKind.isValid () && mProperty_mPublic.isValid () && mProperty_mAttributeList.isValid () && mProperty_mFormalArgumentList.isValid () && mProperty_mReturnTypeName.isValid () && mProperty_mInstructionList.isValid () && mProperty_mEndOfInstructionListLocation.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_systemRoutineDeclarationListAST_2D_element::drop (void) {
  mProperty_mName.drop () ;
  mProperty_mRoutineKind.drop () ;
  mProperty_mPublic.drop () ;
  mProperty_mAttributeList.drop () ;
  mProperty_mFormalArgumentList.drop () ;
  mProperty_mReturnTypeName.drop () ;
  mProperty_mInstructionList.drop () ;
  mProperty_mEndOfInstructionListLocation.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_systemRoutineDeclarationListAST_2D_element::description (C_String & ioString,
                                                                     const int32_t inIndentation) const {
  ioString << "<struct @systemRoutineDeclarationListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mRoutineKind.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mPublic.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mAttributeList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFormalArgumentList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mReturnTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mInstructionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mEndOfInstructionListLocation.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_systemRoutineDeclarationListAST_2D_element::getter_mName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineKind GALGAS_systemRoutineDeclarationListAST_2D_element::getter_mRoutineKind (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRoutineKind ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_systemRoutineDeclarationListAST_2D_element::getter_mPublic (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPublic ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_systemRoutineDeclarationListAST_2D_element::getter_mAttributeList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAttributeList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineFormalArgumentList GALGAS_systemRoutineDeclarationListAST_2D_element::getter_mFormalArgumentList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFormalArgumentList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_systemRoutineDeclarationListAST_2D_element::getter_mReturnTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mReturnTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST GALGAS_systemRoutineDeclarationListAST_2D_element::getter_mInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_systemRoutineDeclarationListAST_2D_element::getter_mEndOfInstructionListLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOfInstructionListLocation ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @systemRoutineDeclarationListAST-element type                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_systemRoutineDeclarationListAST_2D_element ("systemRoutineDeclarationListAST-element",
                                                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_systemRoutineDeclarationListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_systemRoutineDeclarationListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_systemRoutineDeclarationListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_systemRoutineDeclarationListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_systemRoutineDeclarationListAST_2D_element GALGAS_systemRoutineDeclarationListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_systemRoutineDeclarationListAST_2D_element result ;
  const GALGAS_systemRoutineDeclarationListAST_2D_element * p = (const GALGAS_systemRoutineDeclarationListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_systemRoutineDeclarationListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("systemRoutineDeclarationListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootRoutinePriorityMap_2D_element::GALGAS_bootRoutinePriorityMap_2D_element (void) :
mProperty_lkey () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootRoutinePriorityMap_2D_element::~ GALGAS_bootRoutinePriorityMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootRoutinePriorityMap_2D_element::GALGAS_bootRoutinePriorityMap_2D_element (const GALGAS_lstring & inOperand0) :
mProperty_lkey (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootRoutinePriorityMap_2D_element GALGAS_bootRoutinePriorityMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_bootRoutinePriorityMap_2D_element (GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootRoutinePriorityMap_2D_element GALGAS_bootRoutinePriorityMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0 
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bootRoutinePriorityMap_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_bootRoutinePriorityMap_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_bootRoutinePriorityMap_2D_element::objectCompare (const GALGAS_bootRoutinePriorityMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_bootRoutinePriorityMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_bootRoutinePriorityMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_bootRoutinePriorityMap_2D_element::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "<struct @bootRoutinePriorityMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_bootRoutinePriorityMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @bootRoutinePriorityMap-element type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_bootRoutinePriorityMap_2D_element ("bootRoutinePriorityMap-element",
                                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_bootRoutinePriorityMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bootRoutinePriorityMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_bootRoutinePriorityMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_bootRoutinePriorityMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootRoutinePriorityMap_2D_element GALGAS_bootRoutinePriorityMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_bootRoutinePriorityMap_2D_element result ;
  const GALGAS_bootRoutinePriorityMap_2D_element * p = (const GALGAS_bootRoutinePriorityMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_bootRoutinePriorityMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bootRoutinePriorityMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initRoutineMap_2D_element::GALGAS_initRoutineMap_2D_element (void) :
mProperty_lkey () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initRoutineMap_2D_element::~ GALGAS_initRoutineMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initRoutineMap_2D_element::GALGAS_initRoutineMap_2D_element (const GALGAS_lstring & inOperand0) :
mProperty_lkey (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initRoutineMap_2D_element GALGAS_initRoutineMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_initRoutineMap_2D_element (GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initRoutineMap_2D_element GALGAS_initRoutineMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0 
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_initRoutineMap_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_initRoutineMap_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_initRoutineMap_2D_element::objectCompare (const GALGAS_initRoutineMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_initRoutineMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_initRoutineMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_initRoutineMap_2D_element::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "<struct @initRoutineMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_initRoutineMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @initRoutineMap-element type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_initRoutineMap_2D_element ("initRoutineMap-element",
                                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_initRoutineMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_initRoutineMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_initRoutineMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_initRoutineMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initRoutineMap_2D_element GALGAS_initRoutineMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_initRoutineMap_2D_element result ;
  const GALGAS_initRoutineMap_2D_element * p = (const GALGAS_initRoutineMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_initRoutineMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("initRoutineMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initRoutinePriorityMap_2D_element::GALGAS_initRoutinePriorityMap_2D_element (void) :
mProperty_lkey () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initRoutinePriorityMap_2D_element::~ GALGAS_initRoutinePriorityMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initRoutinePriorityMap_2D_element::GALGAS_initRoutinePriorityMap_2D_element (const GALGAS_lstring & inOperand0) :
mProperty_lkey (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initRoutinePriorityMap_2D_element GALGAS_initRoutinePriorityMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_initRoutinePriorityMap_2D_element (GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initRoutinePriorityMap_2D_element GALGAS_initRoutinePriorityMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0 
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_initRoutinePriorityMap_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_initRoutinePriorityMap_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_initRoutinePriorityMap_2D_element::objectCompare (const GALGAS_initRoutinePriorityMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_initRoutinePriorityMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_initRoutinePriorityMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_initRoutinePriorityMap_2D_element::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "<struct @initRoutinePriorityMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_initRoutinePriorityMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @initRoutinePriorityMap-element type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_initRoutinePriorityMap_2D_element ("initRoutinePriorityMap-element",
                                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_initRoutinePriorityMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_initRoutinePriorityMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_initRoutinePriorityMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_initRoutinePriorityMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initRoutinePriorityMap_2D_element GALGAS_initRoutinePriorityMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_initRoutinePriorityMap_2D_element result ;
  const GALGAS_initRoutinePriorityMap_2D_element * p = (const GALGAS_initRoutinePriorityMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_initRoutinePriorityMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("initRoutinePriorityMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initListIR_2D_element::GALGAS_initListIR_2D_element (void) :
mProperty_mSelfType (),
mProperty_mGlobalVariable (),
mProperty_mInitRequiredByProcList (),
mProperty_mPriority (),
mProperty_mAllocaList (),
mProperty_mInstructionListIR () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initListIR_2D_element::~ GALGAS_initListIR_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initListIR_2D_element::GALGAS_initListIR_2D_element (const GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                            const GALGAS_string & inOperand1,
                                                            const GALGAS_lstringlist & inOperand2,
                                                            const GALGAS_bigint & inOperand3,
                                                            const GALGAS_allocaList & inOperand4,
                                                            const GALGAS_instructionListIR & inOperand5) :
mProperty_mSelfType (inOperand0),
mProperty_mGlobalVariable (inOperand1),
mProperty_mInitRequiredByProcList (inOperand2),
mProperty_mPriority (inOperand3),
mProperty_mAllocaList (inOperand4),
mProperty_mInstructionListIR (inOperand5) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initListIR_2D_element GALGAS_initListIR_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_initListIR_2D_element (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                       GALGAS_string::constructor_default (HERE),
                                       GALGAS_lstringlist::constructor_emptyList (HERE),
                                       GALGAS_bigint::constructor_zero (HERE),
                                       GALGAS_allocaList::constructor_emptyList (HERE),
                                       GALGAS_instructionListIR::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initListIR_2D_element GALGAS_initListIR_2D_element::constructor_new (const GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                            const GALGAS_string & inOperand1,
                                                                            const GALGAS_lstringlist & inOperand2,
                                                                            const GALGAS_bigint & inOperand3,
                                                                            const GALGAS_allocaList & inOperand4,
                                                                            const GALGAS_instructionListIR & inOperand5 
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_initListIR_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid ()) {
    result = GALGAS_initListIR_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_initListIR_2D_element::objectCompare (const GALGAS_initListIR_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mSelfType.objectCompare (inOperand.mProperty_mSelfType) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mGlobalVariable.objectCompare (inOperand.mProperty_mGlobalVariable) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mInitRequiredByProcList.objectCompare (inOperand.mProperty_mInitRequiredByProcList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mPriority.objectCompare (inOperand.mProperty_mPriority) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mAllocaList.objectCompare (inOperand.mProperty_mAllocaList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mInstructionListIR.objectCompare (inOperand.mProperty_mInstructionListIR) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_initListIR_2D_element::isValid (void) const {
  return mProperty_mSelfType.isValid () && mProperty_mGlobalVariable.isValid () && mProperty_mInitRequiredByProcList.isValid () && mProperty_mPriority.isValid () && mProperty_mAllocaList.isValid () && mProperty_mInstructionListIR.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_initListIR_2D_element::drop (void) {
  mProperty_mSelfType.drop () ;
  mProperty_mGlobalVariable.drop () ;
  mProperty_mInitRequiredByProcList.drop () ;
  mProperty_mPriority.drop () ;
  mProperty_mAllocaList.drop () ;
  mProperty_mInstructionListIR.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_initListIR_2D_element::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "<struct @initListIR-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mSelfType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mGlobalVariable.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mInitRequiredByProcList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mPriority.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mAllocaList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mInstructionListIR.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_initListIR_2D_element::getter_mSelfType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSelfType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_initListIR_2D_element::getter_mGlobalVariable (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGlobalVariable ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_initListIR_2D_element::getter_mInitRequiredByProcList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInitRequiredByProcList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint GALGAS_initListIR_2D_element::getter_mPriority (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPriority ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allocaList GALGAS_initListIR_2D_element::getter_mAllocaList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAllocaList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR GALGAS_initListIR_2D_element::getter_mInstructionListIR (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInstructionListIR ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @initListIR-element type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_initListIR_2D_element ("initListIR-element",
                                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_initListIR_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_initListIR_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_initListIR_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_initListIR_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initListIR_2D_element GALGAS_initListIR_2D_element::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_initListIR_2D_element result ;
  const GALGAS_initListIR_2D_element * p = (const GALGAS_initListIR_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_initListIR_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("initListIR-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionDeclarationListAST_2D_element::GALGAS_functionDeclarationListAST_2D_element (void) :
mProperty_mMode (),
mProperty_mPublicFunction (),
mProperty_mFunctionName (),
mProperty_mFunctionAttributeList (),
mProperty_mFunctionFormalArgumentList (),
mProperty_mFunctionReturnTypeName (),
mProperty_mFunctionInstructionList (),
mProperty_mEndOfFunctionDeclaration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionDeclarationListAST_2D_element::~ GALGAS_functionDeclarationListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionDeclarationListAST_2D_element::GALGAS_functionDeclarationListAST_2D_element (const GALGAS_mode & inOperand0,
                                                                                            const GALGAS_bool & inOperand1,
                                                                                            const GALGAS_lstring & inOperand2,
                                                                                            const GALGAS_lstringlist & inOperand3,
                                                                                            const GALGAS_routineFormalArgumentList & inOperand4,
                                                                                            const GALGAS_lstring & inOperand5,
                                                                                            const GALGAS_instructionListAST & inOperand6,
                                                                                            const GALGAS_location & inOperand7) :
mProperty_mMode (inOperand0),
mProperty_mPublicFunction (inOperand1),
mProperty_mFunctionName (inOperand2),
mProperty_mFunctionAttributeList (inOperand3),
mProperty_mFunctionFormalArgumentList (inOperand4),
mProperty_mFunctionReturnTypeName (inOperand5),
mProperty_mFunctionInstructionList (inOperand6),
mProperty_mEndOfFunctionDeclaration (inOperand7) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionDeclarationListAST_2D_element GALGAS_functionDeclarationListAST_2D_element::constructor_new (const GALGAS_mode & inOperand0,
                                                                                                            const GALGAS_bool & inOperand1,
                                                                                                            const GALGAS_lstring & inOperand2,
                                                                                                            const GALGAS_lstringlist & inOperand3,
                                                                                                            const GALGAS_routineFormalArgumentList & inOperand4,
                                                                                                            const GALGAS_lstring & inOperand5,
                                                                                                            const GALGAS_instructionListAST & inOperand6,
                                                                                                            const GALGAS_location & inOperand7 
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_functionDeclarationListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid ()) {
    result = GALGAS_functionDeclarationListAST_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_functionDeclarationListAST_2D_element::objectCompare (const GALGAS_functionDeclarationListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mMode.objectCompare (inOperand.mProperty_mMode) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mPublicFunction.objectCompare (inOperand.mProperty_mPublicFunction) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFunctionName.objectCompare (inOperand.mProperty_mFunctionName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFunctionAttributeList.objectCompare (inOperand.mProperty_mFunctionAttributeList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFunctionFormalArgumentList.objectCompare (inOperand.mProperty_mFunctionFormalArgumentList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFunctionReturnTypeName.objectCompare (inOperand.mProperty_mFunctionReturnTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFunctionInstructionList.objectCompare (inOperand.mProperty_mFunctionInstructionList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mEndOfFunctionDeclaration.objectCompare (inOperand.mProperty_mEndOfFunctionDeclaration) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_functionDeclarationListAST_2D_element::isValid (void) const {
  return mProperty_mMode.isValid () && mProperty_mPublicFunction.isValid () && mProperty_mFunctionName.isValid () && mProperty_mFunctionAttributeList.isValid () && mProperty_mFunctionFormalArgumentList.isValid () && mProperty_mFunctionReturnTypeName.isValid () && mProperty_mFunctionInstructionList.isValid () && mProperty_mEndOfFunctionDeclaration.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_functionDeclarationListAST_2D_element::drop (void) {
  mProperty_mMode.drop () ;
  mProperty_mPublicFunction.drop () ;
  mProperty_mFunctionName.drop () ;
  mProperty_mFunctionAttributeList.drop () ;
  mProperty_mFunctionFormalArgumentList.drop () ;
  mProperty_mFunctionReturnTypeName.drop () ;
  mProperty_mFunctionInstructionList.drop () ;
  mProperty_mEndOfFunctionDeclaration.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_functionDeclarationListAST_2D_element::description (C_String & ioString,
                                                                const int32_t inIndentation) const {
  ioString << "<struct @functionDeclarationListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mMode.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mPublicFunction.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFunctionName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFunctionAttributeList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFunctionFormalArgumentList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFunctionReturnTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFunctionInstructionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mEndOfFunctionDeclaration.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mode GALGAS_functionDeclarationListAST_2D_element::getter_mMode (UNUSED_LOCATION_ARGS) const {
  return mProperty_mMode ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_functionDeclarationListAST_2D_element::getter_mPublicFunction (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPublicFunction ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_functionDeclarationListAST_2D_element::getter_mFunctionName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFunctionName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_functionDeclarationListAST_2D_element::getter_mFunctionAttributeList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFunctionAttributeList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineFormalArgumentList GALGAS_functionDeclarationListAST_2D_element::getter_mFunctionFormalArgumentList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFunctionFormalArgumentList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_functionDeclarationListAST_2D_element::getter_mFunctionReturnTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFunctionReturnTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST GALGAS_functionDeclarationListAST_2D_element::getter_mFunctionInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFunctionInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_functionDeclarationListAST_2D_element::getter_mEndOfFunctionDeclaration (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOfFunctionDeclaration ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @functionDeclarationListAST-element type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_functionDeclarationListAST_2D_element ("functionDeclarationListAST-element",
                                                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_functionDeclarationListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionDeclarationListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_functionDeclarationListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_functionDeclarationListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionDeclarationListAST_2D_element GALGAS_functionDeclarationListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_functionDeclarationListAST_2D_element result ;
  const GALGAS_functionDeclarationListAST_2D_element * p = (const GALGAS_functionDeclarationListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_functionDeclarationListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("functionDeclarationListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineFormalArgumentList_2D_element::GALGAS_routineFormalArgumentList_2D_element (void) :
mProperty_mFormalArgumentPassingMode (),
mProperty_mSelector (),
mProperty_mFormalArgumentTypeName (),
mProperty_mFormalArgumentName () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineFormalArgumentList_2D_element::~ GALGAS_routineFormalArgumentList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineFormalArgumentList_2D_element::GALGAS_routineFormalArgumentList_2D_element (const GALGAS_procFormalArgumentPassingMode & inOperand0,
                                                                                          const GALGAS_lstring & inOperand1,
                                                                                          const GALGAS_lstring & inOperand2,
                                                                                          const GALGAS_lstring & inOperand3) :
mProperty_mFormalArgumentPassingMode (inOperand0),
mProperty_mSelector (inOperand1),
mProperty_mFormalArgumentTypeName (inOperand2),
mProperty_mFormalArgumentName (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineFormalArgumentList_2D_element GALGAS_routineFormalArgumentList_2D_element::constructor_new (const GALGAS_procFormalArgumentPassingMode & inOperand0,
                                                                                                          const GALGAS_lstring & inOperand1,
                                                                                                          const GALGAS_lstring & inOperand2,
                                                                                                          const GALGAS_lstring & inOperand3 
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_routineFormalArgumentList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_routineFormalArgumentList_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_routineFormalArgumentList_2D_element::objectCompare (const GALGAS_routineFormalArgumentList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mFormalArgumentPassingMode.objectCompare (inOperand.mProperty_mFormalArgumentPassingMode) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSelector.objectCompare (inOperand.mProperty_mSelector) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFormalArgumentTypeName.objectCompare (inOperand.mProperty_mFormalArgumentTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFormalArgumentName.objectCompare (inOperand.mProperty_mFormalArgumentName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_routineFormalArgumentList_2D_element::isValid (void) const {
  return mProperty_mFormalArgumentPassingMode.isValid () && mProperty_mSelector.isValid () && mProperty_mFormalArgumentTypeName.isValid () && mProperty_mFormalArgumentName.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineFormalArgumentList_2D_element::drop (void) {
  mProperty_mFormalArgumentPassingMode.drop () ;
  mProperty_mSelector.drop () ;
  mProperty_mFormalArgumentTypeName.drop () ;
  mProperty_mFormalArgumentName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineFormalArgumentList_2D_element::description (C_String & ioString,
                                                               const int32_t inIndentation) const {
  ioString << "<struct @routineFormalArgumentList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mFormalArgumentPassingMode.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSelector.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFormalArgumentTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFormalArgumentName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentPassingMode GALGAS_routineFormalArgumentList_2D_element::getter_mFormalArgumentPassingMode (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFormalArgumentPassingMode ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_routineFormalArgumentList_2D_element::getter_mSelector (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSelector ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_routineFormalArgumentList_2D_element::getter_mFormalArgumentTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFormalArgumentTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_routineFormalArgumentList_2D_element::getter_mFormalArgumentName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFormalArgumentName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @routineFormalArgumentList-element type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_routineFormalArgumentList_2D_element ("routineFormalArgumentList-element",
                                                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_routineFormalArgumentList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineFormalArgumentList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_routineFormalArgumentList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_routineFormalArgumentList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineFormalArgumentList_2D_element GALGAS_routineFormalArgumentList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_routineFormalArgumentList_2D_element result ;
  const GALGAS_routineFormalArgumentList_2D_element * p = (const GALGAS_routineFormalArgumentList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_routineFormalArgumentList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineFormalArgumentList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_requiredProcedureDeclarationListAST_2D_element::GALGAS_requiredProcedureDeclarationListAST_2D_element (void) :
mProperty_mName (),
mProperty_mExecutionMode (),
mProperty_mIsExported (),
mProperty_mFormalArgumentList (),
mProperty_mEndOfProcLocation () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_requiredProcedureDeclarationListAST_2D_element::~ GALGAS_requiredProcedureDeclarationListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_requiredProcedureDeclarationListAST_2D_element::GALGAS_requiredProcedureDeclarationListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                              const GALGAS_mode & inOperand1,
                                                                                                              const GALGAS_bool & inOperand2,
                                                                                                              const GALGAS_routineFormalArgumentList & inOperand3,
                                                                                                              const GALGAS_location & inOperand4) :
mProperty_mName (inOperand0),
mProperty_mExecutionMode (inOperand1),
mProperty_mIsExported (inOperand2),
mProperty_mFormalArgumentList (inOperand3),
mProperty_mEndOfProcLocation (inOperand4) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_requiredProcedureDeclarationListAST_2D_element GALGAS_requiredProcedureDeclarationListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                              const GALGAS_mode & inOperand1,
                                                                                                                              const GALGAS_bool & inOperand2,
                                                                                                                              const GALGAS_routineFormalArgumentList & inOperand3,
                                                                                                                              const GALGAS_location & inOperand4 
                                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_requiredProcedureDeclarationListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_requiredProcedureDeclarationListAST_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_requiredProcedureDeclarationListAST_2D_element::objectCompare (const GALGAS_requiredProcedureDeclarationListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mName.objectCompare (inOperand.mProperty_mName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mExecutionMode.objectCompare (inOperand.mProperty_mExecutionMode) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mIsExported.objectCompare (inOperand.mProperty_mIsExported) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFormalArgumentList.objectCompare (inOperand.mProperty_mFormalArgumentList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mEndOfProcLocation.objectCompare (inOperand.mProperty_mEndOfProcLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_requiredProcedureDeclarationListAST_2D_element::isValid (void) const {
  return mProperty_mName.isValid () && mProperty_mExecutionMode.isValid () && mProperty_mIsExported.isValid () && mProperty_mFormalArgumentList.isValid () && mProperty_mEndOfProcLocation.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_requiredProcedureDeclarationListAST_2D_element::drop (void) {
  mProperty_mName.drop () ;
  mProperty_mExecutionMode.drop () ;
  mProperty_mIsExported.drop () ;
  mProperty_mFormalArgumentList.drop () ;
  mProperty_mEndOfProcLocation.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_requiredProcedureDeclarationListAST_2D_element::description (C_String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString << "<struct @requiredProcedureDeclarationListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mExecutionMode.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mIsExported.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFormalArgumentList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mEndOfProcLocation.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_requiredProcedureDeclarationListAST_2D_element::getter_mName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mode GALGAS_requiredProcedureDeclarationListAST_2D_element::getter_mExecutionMode (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExecutionMode ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_requiredProcedureDeclarationListAST_2D_element::getter_mIsExported (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIsExported ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineFormalArgumentList GALGAS_requiredProcedureDeclarationListAST_2D_element::getter_mFormalArgumentList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFormalArgumentList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_requiredProcedureDeclarationListAST_2D_element::getter_mEndOfProcLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOfProcLocation ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  @requiredProcedureDeclarationListAST-element type                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_requiredProcedureDeclarationListAST_2D_element ("requiredProcedureDeclarationListAST-element",
                                                                       NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_requiredProcedureDeclarationListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_requiredProcedureDeclarationListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_requiredProcedureDeclarationListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_requiredProcedureDeclarationListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_requiredProcedureDeclarationListAST_2D_element GALGAS_requiredProcedureDeclarationListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                            C_Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_requiredProcedureDeclarationListAST_2D_element result ;
  const GALGAS_requiredProcedureDeclarationListAST_2D_element * p = (const GALGAS_requiredProcedureDeclarationListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_requiredProcedureDeclarationListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("requiredProcedureDeclarationListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_isrDeclarationListAST_2D_element::GALGAS_isrDeclarationListAST_2D_element (void) :
mProperty_mISRName (),
mProperty_mMode (),
mProperty_mSelfTypeName (),
mProperty_mGlobalVariableName (),
mProperty_mISRInstructionList (),
mProperty_mEndOfISRDeclaration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_isrDeclarationListAST_2D_element::~ GALGAS_isrDeclarationListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_isrDeclarationListAST_2D_element::GALGAS_isrDeclarationListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                  const GALGAS_mode & inOperand1,
                                                                                  const GALGAS_lstring & inOperand2,
                                                                                  const GALGAS_string & inOperand3,
                                                                                  const GALGAS_instructionListAST & inOperand4,
                                                                                  const GALGAS_location & inOperand5) :
mProperty_mISRName (inOperand0),
mProperty_mMode (inOperand1),
mProperty_mSelfTypeName (inOperand2),
mProperty_mGlobalVariableName (inOperand3),
mProperty_mISRInstructionList (inOperand4),
mProperty_mEndOfISRDeclaration (inOperand5) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_isrDeclarationListAST_2D_element GALGAS_isrDeclarationListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                  const GALGAS_mode & inOperand1,
                                                                                                  const GALGAS_lstring & inOperand2,
                                                                                                  const GALGAS_string & inOperand3,
                                                                                                  const GALGAS_instructionListAST & inOperand4,
                                                                                                  const GALGAS_location & inOperand5 
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_isrDeclarationListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid ()) {
    result = GALGAS_isrDeclarationListAST_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_isrDeclarationListAST_2D_element::objectCompare (const GALGAS_isrDeclarationListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mISRName.objectCompare (inOperand.mProperty_mISRName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mMode.objectCompare (inOperand.mProperty_mMode) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSelfTypeName.objectCompare (inOperand.mProperty_mSelfTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mGlobalVariableName.objectCompare (inOperand.mProperty_mGlobalVariableName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mISRInstructionList.objectCompare (inOperand.mProperty_mISRInstructionList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mEndOfISRDeclaration.objectCompare (inOperand.mProperty_mEndOfISRDeclaration) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_isrDeclarationListAST_2D_element::isValid (void) const {
  return mProperty_mISRName.isValid () && mProperty_mMode.isValid () && mProperty_mSelfTypeName.isValid () && mProperty_mGlobalVariableName.isValid () && mProperty_mISRInstructionList.isValid () && mProperty_mEndOfISRDeclaration.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_isrDeclarationListAST_2D_element::drop (void) {
  mProperty_mISRName.drop () ;
  mProperty_mMode.drop () ;
  mProperty_mSelfTypeName.drop () ;
  mProperty_mGlobalVariableName.drop () ;
  mProperty_mISRInstructionList.drop () ;
  mProperty_mEndOfISRDeclaration.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_isrDeclarationListAST_2D_element::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "<struct @isrDeclarationListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mISRName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mMode.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSelfTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mGlobalVariableName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mISRInstructionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mEndOfISRDeclaration.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_isrDeclarationListAST_2D_element::getter_mISRName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mISRName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mode GALGAS_isrDeclarationListAST_2D_element::getter_mMode (UNUSED_LOCATION_ARGS) const {
  return mProperty_mMode ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_isrDeclarationListAST_2D_element::getter_mSelfTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSelfTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_isrDeclarationListAST_2D_element::getter_mGlobalVariableName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGlobalVariableName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST GALGAS_isrDeclarationListAST_2D_element::getter_mISRInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mISRInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_isrDeclarationListAST_2D_element::getter_mEndOfISRDeclaration (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOfISRDeclaration ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @isrDeclarationListAST-element type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_isrDeclarationListAST_2D_element ("isrDeclarationListAST-element",
                                                         NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_isrDeclarationListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_isrDeclarationListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_isrDeclarationListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_isrDeclarationListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_isrDeclarationListAST_2D_element GALGAS_isrDeclarationListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_isrDeclarationListAST_2D_element result ;
  const GALGAS_isrDeclarationListAST_2D_element * p = (const GALGAS_isrDeclarationListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_isrDeclarationListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("isrDeclarationListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionCallEffectiveParameterList_2D_element::GALGAS_functionCallEffectiveParameterList_2D_element (void) :
mProperty_mSelector (),
mProperty_mExpression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionCallEffectiveParameterList_2D_element::~ GALGAS_functionCallEffectiveParameterList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionCallEffectiveParameterList_2D_element::GALGAS_functionCallEffectiveParameterList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                            const GALGAS_expressionAST & inOperand1) :
mProperty_mSelector (inOperand0),
mProperty_mExpression (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionCallEffectiveParameterList_2D_element GALGAS_functionCallEffectiveParameterList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                            const GALGAS_expressionAST & inOperand1 
                                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_functionCallEffectiveParameterList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_functionCallEffectiveParameterList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_functionCallEffectiveParameterList_2D_element::objectCompare (const GALGAS_functionCallEffectiveParameterList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mSelector.objectCompare (inOperand.mProperty_mSelector) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mExpression.objectCompare (inOperand.mProperty_mExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_functionCallEffectiveParameterList_2D_element::isValid (void) const {
  return mProperty_mSelector.isValid () && mProperty_mExpression.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_functionCallEffectiveParameterList_2D_element::drop (void) {
  mProperty_mSelector.drop () ;
  mProperty_mExpression.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_functionCallEffectiveParameterList_2D_element::description (C_String & ioString,
                                                                        const int32_t inIndentation) const {
  ioString << "<struct @functionCallEffectiveParameterList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mSelector.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mExpression.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_functionCallEffectiveParameterList_2D_element::getter_mSelector (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSelector ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST GALGAS_functionCallEffectiveParameterList_2D_element::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExpression ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  @functionCallEffectiveParameterList-element type                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_functionCallEffectiveParameterList_2D_element ("functionCallEffectiveParameterList-element",
                                                                      NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_functionCallEffectiveParameterList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionCallEffectiveParameterList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_functionCallEffectiveParameterList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_functionCallEffectiveParameterList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionCallEffectiveParameterList_2D_element GALGAS_functionCallEffectiveParameterList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                          C_Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_functionCallEffectiveParameterList_2D_element result ;
  const GALGAS_functionCallEffectiveParameterList_2D_element * p = (const GALGAS_functionCallEffectiveParameterList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_functionCallEffectiveParameterList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("functionCallEffectiveParameterList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerIntegerFieldListAST_2D_element::GALGAS_registerIntegerFieldListAST_2D_element (void) :
mProperty_mFieldName (),
mProperty_mExpression (),
mProperty_mExpressionLocation () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerIntegerFieldListAST_2D_element::~ GALGAS_registerIntegerFieldListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerIntegerFieldListAST_2D_element::GALGAS_registerIntegerFieldListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                              const GALGAS_expressionAST & inOperand1,
                                                                                              const GALGAS_location & inOperand2) :
mProperty_mFieldName (inOperand0),
mProperty_mExpression (inOperand1),
mProperty_mExpressionLocation (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerIntegerFieldListAST_2D_element GALGAS_registerIntegerFieldListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                              const GALGAS_expressionAST & inOperand1,
                                                                                                              const GALGAS_location & inOperand2 
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_registerIntegerFieldListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_registerIntegerFieldListAST_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_registerIntegerFieldListAST_2D_element::objectCompare (const GALGAS_registerIntegerFieldListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mFieldName.objectCompare (inOperand.mProperty_mFieldName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mExpression.objectCompare (inOperand.mProperty_mExpression) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mExpressionLocation.objectCompare (inOperand.mProperty_mExpressionLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_registerIntegerFieldListAST_2D_element::isValid (void) const {
  return mProperty_mFieldName.isValid () && mProperty_mExpression.isValid () && mProperty_mExpressionLocation.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_registerIntegerFieldListAST_2D_element::drop (void) {
  mProperty_mFieldName.drop () ;
  mProperty_mExpression.drop () ;
  mProperty_mExpressionLocation.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_registerIntegerFieldListAST_2D_element::description (C_String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString << "<struct @registerIntegerFieldListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mFieldName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mExpression.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mExpressionLocation.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_registerIntegerFieldListAST_2D_element::getter_mFieldName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFieldName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST GALGAS_registerIntegerFieldListAST_2D_element::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_registerIntegerFieldListAST_2D_element::getter_mExpressionLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExpressionLocation ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @registerIntegerFieldListAST-element type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_registerIntegerFieldListAST_2D_element ("registerIntegerFieldListAST-element",
                                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_registerIntegerFieldListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_registerIntegerFieldListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_registerIntegerFieldListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_registerIntegerFieldListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerIntegerFieldListAST_2D_element GALGAS_registerIntegerFieldListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_registerIntegerFieldListAST_2D_element result ;
  const GALGAS_registerIntegerFieldListAST_2D_element * p = (const GALGAS_registerIntegerFieldListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_registerIntegerFieldListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("registerIntegerFieldListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_effectiveArgumentListAST_2D_element::GALGAS_effectiveArgumentListAST_2D_element (void) :
mProperty_mEffectiveParameterKind (),
mProperty_mSelector () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_effectiveArgumentListAST_2D_element::~ GALGAS_effectiveArgumentListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_effectiveArgumentListAST_2D_element::GALGAS_effectiveArgumentListAST_2D_element (const GALGAS_effectiveArgumentPassingModeAST & inOperand0,
                                                                                        const GALGAS_lstring & inOperand1) :
mProperty_mEffectiveParameterKind (inOperand0),
mProperty_mSelector (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_effectiveArgumentListAST_2D_element GALGAS_effectiveArgumentListAST_2D_element::constructor_new (const GALGAS_effectiveArgumentPassingModeAST & inOperand0,
                                                                                                        const GALGAS_lstring & inOperand1 
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_effectiveArgumentListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_effectiveArgumentListAST_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_effectiveArgumentListAST_2D_element::objectCompare (const GALGAS_effectiveArgumentListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mEffectiveParameterKind.objectCompare (inOperand.mProperty_mEffectiveParameterKind) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSelector.objectCompare (inOperand.mProperty_mSelector) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_effectiveArgumentListAST_2D_element::isValid (void) const {
  return mProperty_mEffectiveParameterKind.isValid () && mProperty_mSelector.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_effectiveArgumentListAST_2D_element::drop (void) {
  mProperty_mEffectiveParameterKind.drop () ;
  mProperty_mSelector.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_effectiveArgumentListAST_2D_element::description (C_String & ioString,
                                                              const int32_t inIndentation) const {
  ioString << "<struct @effectiveArgumentListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mEffectiveParameterKind.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSelector.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_effectiveArgumentPassingModeAST GALGAS_effectiveArgumentListAST_2D_element::getter_mEffectiveParameterKind (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEffectiveParameterKind ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_effectiveArgumentListAST_2D_element::getter_mSelector (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSelector ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @effectiveArgumentListAST-element type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_effectiveArgumentListAST_2D_element ("effectiveArgumentListAST-element",
                                                            NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_effectiveArgumentListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_effectiveArgumentListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_effectiveArgumentListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_effectiveArgumentListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_effectiveArgumentListAST_2D_element GALGAS_effectiveArgumentListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_effectiveArgumentListAST_2D_element result ;
  const GALGAS_effectiveArgumentListAST_2D_element * p = (const GALGAS_effectiveArgumentListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_effectiveArgumentListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("effectiveArgumentListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_primaryInExpressionAccessListAST_2D_element::GALGAS_primaryInExpressionAccessListAST_2D_element (void) :
mProperty_mAccess () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_primaryInExpressionAccessListAST_2D_element::~ GALGAS_primaryInExpressionAccessListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_primaryInExpressionAccessListAST_2D_element::GALGAS_primaryInExpressionAccessListAST_2D_element (const GALGAS_primaryInExpressionAccessAST & inOperand0) :
mProperty_mAccess (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_primaryInExpressionAccessListAST_2D_element GALGAS_primaryInExpressionAccessListAST_2D_element::constructor_new (const GALGAS_primaryInExpressionAccessAST & inOperand0 
                                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_primaryInExpressionAccessListAST_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_primaryInExpressionAccessListAST_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_primaryInExpressionAccessListAST_2D_element::objectCompare (const GALGAS_primaryInExpressionAccessListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mAccess.objectCompare (inOperand.mProperty_mAccess) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_primaryInExpressionAccessListAST_2D_element::isValid (void) const {
  return mProperty_mAccess.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_primaryInExpressionAccessListAST_2D_element::drop (void) {
  mProperty_mAccess.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_primaryInExpressionAccessListAST_2D_element::description (C_String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString << "<struct @primaryInExpressionAccessListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mAccess.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_primaryInExpressionAccessAST GALGAS_primaryInExpressionAccessListAST_2D_element::getter_mAccess (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAccess ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @primaryInExpressionAccessListAST-element type                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_primaryInExpressionAccessListAST_2D_element ("primaryInExpressionAccessListAST-element",
                                                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_primaryInExpressionAccessListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_primaryInExpressionAccessListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_primaryInExpressionAccessListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_primaryInExpressionAccessListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_primaryInExpressionAccessListAST_2D_element GALGAS_primaryInExpressionAccessListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_primaryInExpressionAccessListAST_2D_element result ;
  const GALGAS_primaryInExpressionAccessListAST_2D_element * p = (const GALGAS_primaryInExpressionAccessListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_primaryInExpressionAccessListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("primaryInExpressionAccessListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syncInstructionBranchList_2D_element::GALGAS_syncInstructionBranchList_2D_element (void) :
mProperty_mGuardedCommand (),
mProperty_mInstructionList (),
mProperty_mEndOfBranch () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syncInstructionBranchList_2D_element::~ GALGAS_syncInstructionBranchList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syncInstructionBranchList_2D_element::GALGAS_syncInstructionBranchList_2D_element (const GALGAS_guardedCommand & inOperand0,
                                                                                          const GALGAS_instructionListAST & inOperand1,
                                                                                          const GALGAS_location & inOperand2) :
mProperty_mGuardedCommand (inOperand0),
mProperty_mInstructionList (inOperand1),
mProperty_mEndOfBranch (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syncInstructionBranchList_2D_element GALGAS_syncInstructionBranchList_2D_element::constructor_new (const GALGAS_guardedCommand & inOperand0,
                                                                                                          const GALGAS_instructionListAST & inOperand1,
                                                                                                          const GALGAS_location & inOperand2 
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_syncInstructionBranchList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_syncInstructionBranchList_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_syncInstructionBranchList_2D_element::objectCompare (const GALGAS_syncInstructionBranchList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mGuardedCommand.objectCompare (inOperand.mProperty_mGuardedCommand) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mInstructionList.objectCompare (inOperand.mProperty_mInstructionList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mEndOfBranch.objectCompare (inOperand.mProperty_mEndOfBranch) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_syncInstructionBranchList_2D_element::isValid (void) const {
  return mProperty_mGuardedCommand.isValid () && mProperty_mInstructionList.isValid () && mProperty_mEndOfBranch.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_syncInstructionBranchList_2D_element::drop (void) {
  mProperty_mGuardedCommand.drop () ;
  mProperty_mInstructionList.drop () ;
  mProperty_mEndOfBranch.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_syncInstructionBranchList_2D_element::description (C_String & ioString,
                                                               const int32_t inIndentation) const {
  ioString << "<struct @syncInstructionBranchList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mGuardedCommand.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mInstructionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mEndOfBranch.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardedCommand GALGAS_syncInstructionBranchList_2D_element::getter_mGuardedCommand (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGuardedCommand ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST GALGAS_syncInstructionBranchList_2D_element::getter_mInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_syncInstructionBranchList_2D_element::getter_mEndOfBranch (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOfBranch ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @syncInstructionBranchList-element type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_syncInstructionBranchList_2D_element ("syncInstructionBranchList-element",
                                                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_syncInstructionBranchList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syncInstructionBranchList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_syncInstructionBranchList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_syncInstructionBranchList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syncInstructionBranchList_2D_element GALGAS_syncInstructionBranchList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_syncInstructionBranchList_2D_element result ;
  const GALGAS_syncInstructionBranchList_2D_element * p = (const GALGAS_syncInstructionBranchList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_syncInstructionBranchList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syncInstructionBranchList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syncInstructionBranchListIR_2D_element::GALGAS_syncInstructionBranchListIR_2D_element (void) :
mProperty_mGuardedCommand (),
mProperty_mInstructionGenerationList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syncInstructionBranchListIR_2D_element::~ GALGAS_syncInstructionBranchListIR_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syncInstructionBranchListIR_2D_element::GALGAS_syncInstructionBranchListIR_2D_element (const GALGAS_guardedCommandIR & inOperand0,
                                                                                              const GALGAS_instructionListIR & inOperand1) :
mProperty_mGuardedCommand (inOperand0),
mProperty_mInstructionGenerationList (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syncInstructionBranchListIR_2D_element GALGAS_syncInstructionBranchListIR_2D_element::constructor_new (const GALGAS_guardedCommandIR & inOperand0,
                                                                                                              const GALGAS_instructionListIR & inOperand1 
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_syncInstructionBranchListIR_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_syncInstructionBranchListIR_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_syncInstructionBranchListIR_2D_element::objectCompare (const GALGAS_syncInstructionBranchListIR_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mGuardedCommand.objectCompare (inOperand.mProperty_mGuardedCommand) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mInstructionGenerationList.objectCompare (inOperand.mProperty_mInstructionGenerationList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_syncInstructionBranchListIR_2D_element::isValid (void) const {
  return mProperty_mGuardedCommand.isValid () && mProperty_mInstructionGenerationList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_syncInstructionBranchListIR_2D_element::drop (void) {
  mProperty_mGuardedCommand.drop () ;
  mProperty_mInstructionGenerationList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_syncInstructionBranchListIR_2D_element::description (C_String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString << "<struct @syncInstructionBranchListIR-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mGuardedCommand.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mInstructionGenerationList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardedCommandIR GALGAS_syncInstructionBranchListIR_2D_element::getter_mGuardedCommand (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGuardedCommand ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR GALGAS_syncInstructionBranchListIR_2D_element::getter_mInstructionGenerationList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInstructionGenerationList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @syncInstructionBranchListIR-element type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_syncInstructionBranchListIR_2D_element ("syncInstructionBranchListIR-element",
                                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_syncInstructionBranchListIR_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syncInstructionBranchListIR_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_syncInstructionBranchListIR_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_syncInstructionBranchListIR_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syncInstructionBranchListIR_2D_element GALGAS_syncInstructionBranchListIR_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_syncInstructionBranchListIR_2D_element result ;
  const GALGAS_syncInstructionBranchListIR_2D_element * p = (const GALGAS_syncInstructionBranchListIR_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_syncInstructionBranchListIR_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syncInstructionBranchListIR-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procEffectiveParameterList_2D_element::GALGAS_procEffectiveParameterList_2D_element (void) :
mProperty_mEffectiveParameterPassingMode (),
mProperty_mSelector (),
mProperty_mParameterType () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procEffectiveParameterList_2D_element::~ GALGAS_procEffectiveParameterList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procEffectiveParameterList_2D_element::GALGAS_procEffectiveParameterList_2D_element (const GALGAS_effectiveArgumentPassingModeAST & inOperand0,
                                                                                            const GALGAS_lstring & inOperand1,
                                                                                            const GALGAS_unifiedTypeMap_2D_proxy & inOperand2) :
mProperty_mEffectiveParameterPassingMode (inOperand0),
mProperty_mSelector (inOperand1),
mProperty_mParameterType (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procEffectiveParameterList_2D_element GALGAS_procEffectiveParameterList_2D_element::constructor_new (const GALGAS_effectiveArgumentPassingModeAST & inOperand0,
                                                                                                            const GALGAS_lstring & inOperand1,
                                                                                                            const GALGAS_unifiedTypeMap_2D_proxy & inOperand2 
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_procEffectiveParameterList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_procEffectiveParameterList_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_procEffectiveParameterList_2D_element::objectCompare (const GALGAS_procEffectiveParameterList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mEffectiveParameterPassingMode.objectCompare (inOperand.mProperty_mEffectiveParameterPassingMode) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSelector.objectCompare (inOperand.mProperty_mSelector) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mParameterType.objectCompare (inOperand.mProperty_mParameterType) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_procEffectiveParameterList_2D_element::isValid (void) const {
  return mProperty_mEffectiveParameterPassingMode.isValid () && mProperty_mSelector.isValid () && mProperty_mParameterType.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procEffectiveParameterList_2D_element::drop (void) {
  mProperty_mEffectiveParameterPassingMode.drop () ;
  mProperty_mSelector.drop () ;
  mProperty_mParameterType.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procEffectiveParameterList_2D_element::description (C_String & ioString,
                                                                const int32_t inIndentation) const {
  ioString << "<struct @procEffectiveParameterList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mEffectiveParameterPassingMode.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSelector.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mParameterType.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_effectiveArgumentPassingModeAST GALGAS_procEffectiveParameterList_2D_element::getter_mEffectiveParameterPassingMode (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEffectiveParameterPassingMode ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_procEffectiveParameterList_2D_element::getter_mSelector (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSelector ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_procEffectiveParameterList_2D_element::getter_mParameterType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mParameterType ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @procEffectiveParameterList-element type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_procEffectiveParameterList_2D_element ("procEffectiveParameterList-element",
                                                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_procEffectiveParameterList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procEffectiveParameterList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_procEffectiveParameterList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_procEffectiveParameterList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procEffectiveParameterList_2D_element GALGAS_procEffectiveParameterList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_procEffectiveParameterList_2D_element result ;
  const GALGAS_procEffectiveParameterList_2D_element * p = (const GALGAS_procEffectiveParameterList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_procEffectiveParameterList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("procEffectiveParameterList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procCallEffectiveParameterListIR_2D_element::GALGAS_procCallEffectiveParameterListIR_2D_element (void) :
mProperty_mEffectiveParameterPassingMode (),
mProperty_mParameter () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procCallEffectiveParameterListIR_2D_element::~ GALGAS_procCallEffectiveParameterListIR_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procCallEffectiveParameterListIR_2D_element::GALGAS_procCallEffectiveParameterListIR_2D_element (const GALGAS_procEffectiveParameterPassingModeIR & inOperand0,
                                                                                                        const GALGAS_objectIR & inOperand1) :
mProperty_mEffectiveParameterPassingMode (inOperand0),
mProperty_mParameter (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procCallEffectiveParameterListIR_2D_element GALGAS_procCallEffectiveParameterListIR_2D_element::constructor_new (const GALGAS_procEffectiveParameterPassingModeIR & inOperand0,
                                                                                                                        const GALGAS_objectIR & inOperand1 
                                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_procCallEffectiveParameterListIR_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_procCallEffectiveParameterListIR_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_procCallEffectiveParameterListIR_2D_element::objectCompare (const GALGAS_procCallEffectiveParameterListIR_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mEffectiveParameterPassingMode.objectCompare (inOperand.mProperty_mEffectiveParameterPassingMode) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mParameter.objectCompare (inOperand.mProperty_mParameter) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_procCallEffectiveParameterListIR_2D_element::isValid (void) const {
  return mProperty_mEffectiveParameterPassingMode.isValid () && mProperty_mParameter.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procCallEffectiveParameterListIR_2D_element::drop (void) {
  mProperty_mEffectiveParameterPassingMode.drop () ;
  mProperty_mParameter.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procCallEffectiveParameterListIR_2D_element::description (C_String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString << "<struct @procCallEffectiveParameterListIR-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mEffectiveParameterPassingMode.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mParameter.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procEffectiveParameterPassingModeIR GALGAS_procCallEffectiveParameterListIR_2D_element::getter_mEffectiveParameterPassingMode (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEffectiveParameterPassingMode ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_procCallEffectiveParameterListIR_2D_element::getter_mParameter (UNUSED_LOCATION_ARGS) const {
  return mProperty_mParameter ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @procCallEffectiveParameterListIR-element type                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_procCallEffectiveParameterListIR_2D_element ("procCallEffectiveParameterListIR-element",
                                                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_procCallEffectiveParameterListIR_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procCallEffectiveParameterListIR_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_procCallEffectiveParameterListIR_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_procCallEffectiveParameterListIR_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procCallEffectiveParameterListIR_2D_element GALGAS_procCallEffectiveParameterListIR_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_procCallEffectiveParameterListIR_2D_element result ;
  const GALGAS_procCallEffectiveParameterListIR_2D_element * p = (const GALGAS_procCallEffectiveParameterListIR_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_procCallEffectiveParameterListIR_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("procCallEffectiveParameterListIR-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_accessInAssignmentListAST_2D_element::GALGAS_accessInAssignmentListAST_2D_element (void) :
mProperty_mAccess () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_accessInAssignmentListAST_2D_element::~ GALGAS_accessInAssignmentListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_accessInAssignmentListAST_2D_element::GALGAS_accessInAssignmentListAST_2D_element (const GALGAS_accessInAssignmentAST & inOperand0) :
mProperty_mAccess (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_accessInAssignmentListAST_2D_element GALGAS_accessInAssignmentListAST_2D_element::constructor_new (const GALGAS_accessInAssignmentAST & inOperand0 
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_accessInAssignmentListAST_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_accessInAssignmentListAST_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_accessInAssignmentListAST_2D_element::objectCompare (const GALGAS_accessInAssignmentListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mAccess.objectCompare (inOperand.mProperty_mAccess) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_accessInAssignmentListAST_2D_element::isValid (void) const {
  return mProperty_mAccess.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_accessInAssignmentListAST_2D_element::drop (void) {
  mProperty_mAccess.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_accessInAssignmentListAST_2D_element::description (C_String & ioString,
                                                               const int32_t inIndentation) const {
  ioString << "<struct @accessInAssignmentListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mAccess.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_accessInAssignmentAST GALGAS_accessInAssignmentListAST_2D_element::getter_mAccess (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAccess ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @accessInAssignmentListAST-element type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_accessInAssignmentListAST_2D_element ("accessInAssignmentListAST-element",
                                                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_accessInAssignmentListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_accessInAssignmentListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_accessInAssignmentListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_accessInAssignmentListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_accessInAssignmentListAST_2D_element GALGAS_accessInAssignmentListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_accessInAssignmentListAST_2D_element result ;
  const GALGAS_accessInAssignmentListAST_2D_element * p = (const GALGAS_accessInAssignmentListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_accessInAssignmentListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("accessInAssignmentListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineTypedSignature_2D_element::GALGAS_routineTypedSignature_2D_element (void) :
mProperty_mFormalArgumentPassingMode (),
mProperty_mSelector (),
mProperty_mType () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineTypedSignature_2D_element::~ GALGAS_routineTypedSignature_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineTypedSignature_2D_element::GALGAS_routineTypedSignature_2D_element (const GALGAS_procFormalArgumentPassingMode & inOperand0,
                                                                                  const GALGAS_lstring & inOperand1,
                                                                                  const GALGAS_unifiedTypeMap_2D_proxy & inOperand2) :
mProperty_mFormalArgumentPassingMode (inOperand0),
mProperty_mSelector (inOperand1),
mProperty_mType (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineTypedSignature_2D_element GALGAS_routineTypedSignature_2D_element::constructor_new (const GALGAS_procFormalArgumentPassingMode & inOperand0,
                                                                                                  const GALGAS_lstring & inOperand1,
                                                                                                  const GALGAS_unifiedTypeMap_2D_proxy & inOperand2 
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_routineTypedSignature_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_routineTypedSignature_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_routineTypedSignature_2D_element::objectCompare (const GALGAS_routineTypedSignature_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mFormalArgumentPassingMode.objectCompare (inOperand.mProperty_mFormalArgumentPassingMode) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSelector.objectCompare (inOperand.mProperty_mSelector) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mType.objectCompare (inOperand.mProperty_mType) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_routineTypedSignature_2D_element::isValid (void) const {
  return mProperty_mFormalArgumentPassingMode.isValid () && mProperty_mSelector.isValid () && mProperty_mType.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineTypedSignature_2D_element::drop (void) {
  mProperty_mFormalArgumentPassingMode.drop () ;
  mProperty_mSelector.drop () ;
  mProperty_mType.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineTypedSignature_2D_element::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "<struct @routineTypedSignature-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mFormalArgumentPassingMode.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSelector.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mType.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentPassingMode GALGAS_routineTypedSignature_2D_element::getter_mFormalArgumentPassingMode (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFormalArgumentPassingMode ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_routineTypedSignature_2D_element::getter_mSelector (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSelector ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_routineTypedSignature_2D_element::getter_mType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mType ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @routineTypedSignature-element type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_routineTypedSignature_2D_element ("routineTypedSignature-element",
                                                         NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_routineTypedSignature_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineTypedSignature_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_routineTypedSignature_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_routineTypedSignature_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineTypedSignature_2D_element GALGAS_routineTypedSignature_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_routineTypedSignature_2D_element result ;
  const GALGAS_routineTypedSignature_2D_element * p = (const GALGAS_routineTypedSignature_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_routineTypedSignature_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineTypedSignature-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineArgumentSignatureMapForContext_2D_element::GALGAS_routineArgumentSignatureMapForContext_2D_element (void) :
mProperty_lkey (),
mProperty_mRoutineLLVMName (),
mProperty_mDescriptor () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineArgumentSignatureMapForContext_2D_element::~ GALGAS_routineArgumentSignatureMapForContext_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineArgumentSignatureMapForContext_2D_element::GALGAS_routineArgumentSignatureMapForContext_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                                  const GALGAS_lstring & inOperand1,
                                                                                                                  const GALGAS_routineDescriptor & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mRoutineLLVMName (inOperand1),
mProperty_mDescriptor (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineArgumentSignatureMapForContext_2D_element GALGAS_routineArgumentSignatureMapForContext_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                                  const GALGAS_lstring & inOperand1,
                                                                                                                                  const GALGAS_routineDescriptor & inOperand2 
                                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_routineArgumentSignatureMapForContext_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_routineArgumentSignatureMapForContext_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_routineArgumentSignatureMapForContext_2D_element::objectCompare (const GALGAS_routineArgumentSignatureMapForContext_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mRoutineLLVMName.objectCompare (inOperand.mProperty_mRoutineLLVMName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mDescriptor.objectCompare (inOperand.mProperty_mDescriptor) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_routineArgumentSignatureMapForContext_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mRoutineLLVMName.isValid () && mProperty_mDescriptor.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineArgumentSignatureMapForContext_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mRoutineLLVMName.drop () ;
  mProperty_mDescriptor.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineArgumentSignatureMapForContext_2D_element::description (C_String & ioString,
                                                                           const int32_t inIndentation) const {
  ioString << "<struct @routineArgumentSignatureMapForContext-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mRoutineLLVMName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mDescriptor.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_routineArgumentSignatureMapForContext_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_routineArgumentSignatureMapForContext_2D_element::getter_mRoutineLLVMName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRoutineLLVMName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineDescriptor GALGAS_routineArgumentSignatureMapForContext_2D_element::getter_mDescriptor (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDescriptor ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 @routineArgumentSignatureMapForContext-element type                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_routineArgumentSignatureMapForContext_2D_element ("routineArgumentSignatureMapForContext-element",
                                                                         NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_routineArgumentSignatureMapForContext_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineArgumentSignatureMapForContext_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_routineArgumentSignatureMapForContext_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_routineArgumentSignatureMapForContext_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineArgumentSignatureMapForContext_2D_element GALGAS_routineArgumentSignatureMapForContext_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                C_Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_routineArgumentSignatureMapForContext_2D_element result ;
  const GALGAS_routineArgumentSignatureMapForContext_2D_element * p = (const GALGAS_routineArgumentSignatureMapForContext_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_routineArgumentSignatureMapForContext_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineArgumentSignatureMapForContext-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_internalRoutineMapForContext_2D_element::GALGAS_internalRoutineMapForContext_2D_element (void) :
mProperty_lkey (),
mProperty_mRoutineArgumentSignatureMapForContext () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_internalRoutineMapForContext_2D_element::~ GALGAS_internalRoutineMapForContext_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_internalRoutineMapForContext_2D_element::GALGAS_internalRoutineMapForContext_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                const GALGAS_routineArgumentSignatureMapForContext & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mRoutineArgumentSignatureMapForContext (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_internalRoutineMapForContext_2D_element GALGAS_internalRoutineMapForContext_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_internalRoutineMapForContext_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                         GALGAS_routineArgumentSignatureMapForContext::constructor_emptyMap (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_internalRoutineMapForContext_2D_element GALGAS_internalRoutineMapForContext_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                const GALGAS_routineArgumentSignatureMapForContext & inOperand1 
                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_internalRoutineMapForContext_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_internalRoutineMapForContext_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_internalRoutineMapForContext_2D_element::objectCompare (const GALGAS_internalRoutineMapForContext_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mRoutineArgumentSignatureMapForContext.objectCompare (inOperand.mProperty_mRoutineArgumentSignatureMapForContext) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_internalRoutineMapForContext_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mRoutineArgumentSignatureMapForContext.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_internalRoutineMapForContext_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mRoutineArgumentSignatureMapForContext.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_internalRoutineMapForContext_2D_element::description (C_String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString << "<struct @internalRoutineMapForContext-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mRoutineArgumentSignatureMapForContext.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_internalRoutineMapForContext_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineArgumentSignatureMapForContext GALGAS_internalRoutineMapForContext_2D_element::getter_mRoutineArgumentSignatureMapForContext (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRoutineArgumentSignatureMapForContext ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @internalRoutineMapForContext-element type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_internalRoutineMapForContext_2D_element ("internalRoutineMapForContext-element",
                                                                NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_internalRoutineMapForContext_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_internalRoutineMapForContext_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_internalRoutineMapForContext_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_internalRoutineMapForContext_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_internalRoutineMapForContext_2D_element GALGAS_internalRoutineMapForContext_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_internalRoutineMapForContext_2D_element result ;
  const GALGAS_internalRoutineMapForContext_2D_element * p = (const GALGAS_internalRoutineMapForContext_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_internalRoutineMapForContext_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("internalRoutineMapForContext-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardMapForContext_2D_element::GALGAS_guardMapForContext_2D_element (void) :
mProperty_lkey (),
mProperty_mIsPublic (),
mProperty_mSignature () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardMapForContext_2D_element::~ GALGAS_guardMapForContext_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardMapForContext_2D_element::GALGAS_guardMapForContext_2D_element (const GALGAS_lstring & inOperand0,
                                                                            const GALGAS_bool & inOperand1,
                                                                            const GALGAS_routineTypedSignature & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mIsPublic (inOperand1),
mProperty_mSignature (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardMapForContext_2D_element GALGAS_guardMapForContext_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_guardMapForContext_2D_element (GALGAS_lstring::constructor_default (HERE),
                                               GALGAS_bool::constructor_default (HERE),
                                               GALGAS_routineTypedSignature::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardMapForContext_2D_element GALGAS_guardMapForContext_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                            const GALGAS_bool & inOperand1,
                                                                                            const GALGAS_routineTypedSignature & inOperand2 
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_guardMapForContext_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_guardMapForContext_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_guardMapForContext_2D_element::objectCompare (const GALGAS_guardMapForContext_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mIsPublic.objectCompare (inOperand.mProperty_mIsPublic) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSignature.objectCompare (inOperand.mProperty_mSignature) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_guardMapForContext_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mIsPublic.isValid () && mProperty_mSignature.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guardMapForContext_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mIsPublic.drop () ;
  mProperty_mSignature.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guardMapForContext_2D_element::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "<struct @guardMapForContext-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mIsPublic.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSignature.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_guardMapForContext_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_guardMapForContext_2D_element::getter_mIsPublic (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIsPublic ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineTypedSignature GALGAS_guardMapForContext_2D_element::getter_mSignature (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSignature ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @guardMapForContext-element type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_guardMapForContext_2D_element ("guardMapForContext-element",
                                                      NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_guardMapForContext_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guardMapForContext_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_guardMapForContext_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_guardMapForContext_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardMapForContext_2D_element GALGAS_guardMapForContext_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_guardMapForContext_2D_element result ;
  const GALGAS_guardMapForContext_2D_element * p = (const GALGAS_guardMapForContext_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_guardMapForContext_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("guardMapForContext-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_internalUniversalPropertyAndRoutineMapForContext_2D_element::GALGAS_internalUniversalPropertyAndRoutineMapForContext_2D_element (void) :
mProperty_lkey (),
mProperty_mObjectState (),
mProperty_mObjectShouldBeValuedAtEndOfScope (),
mProperty_mPossibleValuedObject (),
mProperty_mRoutineSignatureMapForContext () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_internalUniversalPropertyAndRoutineMapForContext_2D_element::~ GALGAS_internalUniversalPropertyAndRoutineMapForContext_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_internalUniversalPropertyAndRoutineMapForContext_2D_element::GALGAS_internalUniversalPropertyAndRoutineMapForContext_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                                                        const GALGAS_valuedObjectState & inOperand1,
                                                                                                                                        const GALGAS_bool & inOperand2,
                                                                                                                                        const GALGAS_possibleValuedObject & inOperand3,
                                                                                                                                        const GALGAS_routineSignatureMapForContext & inOperand4) :
mProperty_lkey (inOperand0),
mProperty_mObjectState (inOperand1),
mProperty_mObjectShouldBeValuedAtEndOfScope (inOperand2),
mProperty_mPossibleValuedObject (inOperand3),
mProperty_mRoutineSignatureMapForContext (inOperand4) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_internalUniversalPropertyAndRoutineMapForContext_2D_element GALGAS_internalUniversalPropertyAndRoutineMapForContext_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                                                        const GALGAS_valuedObjectState & inOperand1,
                                                                                                                                                        const GALGAS_bool & inOperand2,
                                                                                                                                                        const GALGAS_possibleValuedObject & inOperand3,
                                                                                                                                                        const GALGAS_routineSignatureMapForContext & inOperand4 
                                                                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_internalUniversalPropertyAndRoutineMapForContext_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_internalUniversalPropertyAndRoutineMapForContext_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_internalUniversalPropertyAndRoutineMapForContext_2D_element::objectCompare (const GALGAS_internalUniversalPropertyAndRoutineMapForContext_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mObjectState.objectCompare (inOperand.mProperty_mObjectState) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mObjectShouldBeValuedAtEndOfScope.objectCompare (inOperand.mProperty_mObjectShouldBeValuedAtEndOfScope) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mPossibleValuedObject.objectCompare (inOperand.mProperty_mPossibleValuedObject) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mRoutineSignatureMapForContext.objectCompare (inOperand.mProperty_mRoutineSignatureMapForContext) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_internalUniversalPropertyAndRoutineMapForContext_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mObjectState.isValid () && mProperty_mObjectShouldBeValuedAtEndOfScope.isValid () && mProperty_mPossibleValuedObject.isValid () && mProperty_mRoutineSignatureMapForContext.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_internalUniversalPropertyAndRoutineMapForContext_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mObjectState.drop () ;
  mProperty_mObjectShouldBeValuedAtEndOfScope.drop () ;
  mProperty_mPossibleValuedObject.drop () ;
  mProperty_mRoutineSignatureMapForContext.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_internalUniversalPropertyAndRoutineMapForContext_2D_element::description (C_String & ioString,
                                                                                      const int32_t inIndentation) const {
  ioString << "<struct @internalUniversalPropertyAndRoutineMapForContext-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mObjectState.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mObjectShouldBeValuedAtEndOfScope.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mPossibleValuedObject.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mRoutineSignatureMapForContext.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_internalUniversalPropertyAndRoutineMapForContext_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_valuedObjectState GALGAS_internalUniversalPropertyAndRoutineMapForContext_2D_element::getter_mObjectState (UNUSED_LOCATION_ARGS) const {
  return mProperty_mObjectState ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_internalUniversalPropertyAndRoutineMapForContext_2D_element::getter_mObjectShouldBeValuedAtEndOfScope (UNUSED_LOCATION_ARGS) const {
  return mProperty_mObjectShouldBeValuedAtEndOfScope ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_possibleValuedObject GALGAS_internalUniversalPropertyAndRoutineMapForContext_2D_element::getter_mPossibleValuedObject (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPossibleValuedObject ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineSignatureMapForContext GALGAS_internalUniversalPropertyAndRoutineMapForContext_2D_element::getter_mRoutineSignatureMapForContext (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRoutineSignatureMapForContext ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           @internalUniversalPropertyAndRoutineMapForContext-element type                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_internalUniversalPropertyAndRoutineMapForContext_2D_element ("internalUniversalPropertyAndRoutineMapForContext-element",
                                                                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_internalUniversalPropertyAndRoutineMapForContext_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_internalUniversalPropertyAndRoutineMapForContext_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_internalUniversalPropertyAndRoutineMapForContext_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_internalUniversalPropertyAndRoutineMapForContext_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_internalUniversalPropertyAndRoutineMapForContext_2D_element GALGAS_internalUniversalPropertyAndRoutineMapForContext_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                                      C_Compiler * inCompiler
                                                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_internalUniversalPropertyAndRoutineMapForContext_2D_element result ;
  const GALGAS_internalUniversalPropertyAndRoutineMapForContext_2D_element * p = (const GALGAS_internalUniversalPropertyAndRoutineMapForContext_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_internalUniversalPropertyAndRoutineMapForContext_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("internalUniversalPropertyAndRoutineMapForContext-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_referenceStateMap_2D_element::GALGAS_referenceStateMap_2D_element (void) :
mProperty_lkey (),
mProperty_mState () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_referenceStateMap_2D_element::~ GALGAS_referenceStateMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_referenceStateMap_2D_element::GALGAS_referenceStateMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                          const GALGAS_valuedObjectState & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mState (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_referenceStateMap_2D_element GALGAS_referenceStateMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                          const GALGAS_valuedObjectState & inOperand1 
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_referenceStateMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_referenceStateMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_referenceStateMap_2D_element::objectCompare (const GALGAS_referenceStateMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mState.objectCompare (inOperand.mProperty_mState) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_referenceStateMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mState.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_referenceStateMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mState.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_referenceStateMap_2D_element::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "<struct @referenceStateMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mState.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_referenceStateMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_valuedObjectState GALGAS_referenceStateMap_2D_element::getter_mState (UNUSED_LOCATION_ARGS) const {
  return mProperty_mState ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @referenceStateMap-element type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_referenceStateMap_2D_element ("referenceStateMap-element",
                                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_referenceStateMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_referenceStateMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_referenceStateMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_referenceStateMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_referenceStateMap_2D_element GALGAS_referenceStateMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_referenceStateMap_2D_element result ;
  const GALGAS_referenceStateMap_2D_element * p = (const GALGAS_referenceStateMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_referenceStateMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("referenceStateMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineSignatureMapForContext_2D_element::GALGAS_routineSignatureMapForContext_2D_element (void) :
mProperty_lkey (),
mProperty_mLLVMInvocationRoutineName (),
mProperty_mDescriptor () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineSignatureMapForContext_2D_element::~ GALGAS_routineSignatureMapForContext_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineSignatureMapForContext_2D_element::GALGAS_routineSignatureMapForContext_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                  const GALGAS_lstring & inOperand1,
                                                                                                  const GALGAS_routineDescriptor & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mLLVMInvocationRoutineName (inOperand1),
mProperty_mDescriptor (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineSignatureMapForContext_2D_element GALGAS_routineSignatureMapForContext_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                  const GALGAS_lstring & inOperand1,
                                                                                                                  const GALGAS_routineDescriptor & inOperand2 
                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_routineSignatureMapForContext_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_routineSignatureMapForContext_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_routineSignatureMapForContext_2D_element::objectCompare (const GALGAS_routineSignatureMapForContext_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mLLVMInvocationRoutineName.objectCompare (inOperand.mProperty_mLLVMInvocationRoutineName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mDescriptor.objectCompare (inOperand.mProperty_mDescriptor) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_routineSignatureMapForContext_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mLLVMInvocationRoutineName.isValid () && mProperty_mDescriptor.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineSignatureMapForContext_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mLLVMInvocationRoutineName.drop () ;
  mProperty_mDescriptor.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineSignatureMapForContext_2D_element::description (C_String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString << "<struct @routineSignatureMapForContext-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mLLVMInvocationRoutineName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mDescriptor.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_routineSignatureMapForContext_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_routineSignatureMapForContext_2D_element::getter_mLLVMInvocationRoutineName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLLVMInvocationRoutineName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineDescriptor GALGAS_routineSignatureMapForContext_2D_element::getter_mDescriptor (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDescriptor ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @routineSignatureMapForContext-element type                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_routineSignatureMapForContext_2D_element ("routineSignatureMapForContext-element",
                                                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_routineSignatureMapForContext_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineSignatureMapForContext_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_routineSignatureMapForContext_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_routineSignatureMapForContext_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineSignatureMapForContext_2D_element GALGAS_routineSignatureMapForContext_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_routineSignatureMapForContext_2D_element result ;
  const GALGAS_routineSignatureMapForContext_2D_element * p = (const GALGAS_routineSignatureMapForContext_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_routineSignatureMapForContext_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineSignatureMapForContext-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap_2D_element::GALGAS_infixOperatorMap_2D_element (void) :
mProperty_lkey (),
mProperty_mResultType (),
mProperty_mOperation () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap_2D_element::~ GALGAS_infixOperatorMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap_2D_element::GALGAS_infixOperatorMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                        const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                        const GALGAS_infixOperatorDescription & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mResultType (inOperand1),
mProperty_mOperation (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap_2D_element GALGAS_infixOperatorMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                        const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                                        const GALGAS_infixOperatorDescription & inOperand2 
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_infixOperatorMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_infixOperatorMap_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_infixOperatorMap_2D_element::objectCompare (const GALGAS_infixOperatorMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mResultType.objectCompare (inOperand.mProperty_mResultType) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mOperation.objectCompare (inOperand.mProperty_mOperation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_infixOperatorMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mResultType.isValid () && mProperty_mOperation.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_infixOperatorMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mResultType.drop () ;
  mProperty_mOperation.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_infixOperatorMap_2D_element::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "<struct @infixOperatorMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mResultType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mOperation.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_infixOperatorMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_infixOperatorMap_2D_element::getter_mResultType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mResultType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorDescription GALGAS_infixOperatorMap_2D_element::getter_mOperation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOperation ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @infixOperatorMap-element type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_infixOperatorMap_2D_element ("infixOperatorMap-element",
                                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_infixOperatorMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_infixOperatorMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_infixOperatorMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_infixOperatorMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap_2D_element GALGAS_infixOperatorMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_infixOperatorMap_2D_element result ;
  const GALGAS_infixOperatorMap_2D_element * p = (const GALGAS_infixOperatorMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_infixOperatorMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("infixOperatorMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefixOperatorMap_2D_element::GALGAS_prefixOperatorMap_2D_element (void) :
mProperty_lkey () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefixOperatorMap_2D_element::~ GALGAS_prefixOperatorMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefixOperatorMap_2D_element::GALGAS_prefixOperatorMap_2D_element (const GALGAS_lstring & inOperand0) :
mProperty_lkey (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefixOperatorMap_2D_element GALGAS_prefixOperatorMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_prefixOperatorMap_2D_element (GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefixOperatorMap_2D_element GALGAS_prefixOperatorMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0 
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_prefixOperatorMap_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_prefixOperatorMap_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_prefixOperatorMap_2D_element::objectCompare (const GALGAS_prefixOperatorMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_prefixOperatorMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_prefixOperatorMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_prefixOperatorMap_2D_element::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "<struct @prefixOperatorMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_prefixOperatorMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @prefixOperatorMap-element type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_prefixOperatorMap_2D_element ("prefixOperatorMap-element",
                                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_prefixOperatorMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_prefixOperatorMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_prefixOperatorMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_prefixOperatorMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefixOperatorMap_2D_element GALGAS_prefixOperatorMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_prefixOperatorMap_2D_element result ;
  const GALGAS_prefixOperatorMap_2D_element * p = (const GALGAS_prefixOperatorMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_prefixOperatorMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("prefixOperatorMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticStringMap_2D_element::GALGAS_staticStringMap_2D_element (void) :
mProperty_lkey (),
mProperty_mIndex () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticStringMap_2D_element::~ GALGAS_staticStringMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticStringMap_2D_element::GALGAS_staticStringMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                      const GALGAS_uint & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mIndex (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticStringMap_2D_element GALGAS_staticStringMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_staticStringMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                            GALGAS_uint::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticStringMap_2D_element GALGAS_staticStringMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                      const GALGAS_uint & inOperand1 
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_staticStringMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_staticStringMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_staticStringMap_2D_element::objectCompare (const GALGAS_staticStringMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mIndex.objectCompare (inOperand.mProperty_mIndex) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_staticStringMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mIndex.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_staticStringMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mIndex.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_staticStringMap_2D_element::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "<struct @staticStringMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mIndex.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_staticStringMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_staticStringMap_2D_element::getter_mIndex (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIndex ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @staticStringMap-element type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_staticStringMap_2D_element ("staticStringMap-element",
                                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_staticStringMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_staticStringMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_staticStringMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_staticStringMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticStringMap_2D_element GALGAS_staticStringMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_staticStringMap_2D_element result ;
  const GALGAS_staticStringMap_2D_element * p = (const GALGAS_staticStringMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_staticStringMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("staticStringMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalConstantMap_2D_element::GALGAS_globalConstantMap_2D_element (void) :
mProperty_lkey (),
mProperty_mValue () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalConstantMap_2D_element::~ GALGAS_globalConstantMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalConstantMap_2D_element::GALGAS_globalConstantMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                          const GALGAS_objectIR & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mValue (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalConstantMap_2D_element GALGAS_globalConstantMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                          const GALGAS_objectIR & inOperand1 
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_globalConstantMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_globalConstantMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_globalConstantMap_2D_element::objectCompare (const GALGAS_globalConstantMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mValue.objectCompare (inOperand.mProperty_mValue) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_globalConstantMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mValue.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_globalConstantMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mValue.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_globalConstantMap_2D_element::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "<struct @globalConstantMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mValue.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_globalConstantMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_globalConstantMap_2D_element::getter_mValue (UNUSED_LOCATION_ARGS) const {
  return mProperty_mValue ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @globalConstantMap-element type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_globalConstantMap_2D_element ("globalConstantMap-element",
                                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_globalConstantMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_globalConstantMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_globalConstantMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_globalConstantMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalConstantMap_2D_element GALGAS_globalConstantMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_globalConstantMap_2D_element result ;
  const GALGAS_globalConstantMap_2D_element * p = (const GALGAS_globalConstantMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_globalConstantMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("globalConstantMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedGuardMap_2D_element::GALGAS_allowedGuardMap_2D_element (void) :
mProperty_lkey () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedGuardMap_2D_element::~ GALGAS_allowedGuardMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedGuardMap_2D_element::GALGAS_allowedGuardMap_2D_element (const GALGAS_lstring & inOperand0) :
mProperty_lkey (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedGuardMap_2D_element GALGAS_allowedGuardMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_allowedGuardMap_2D_element (GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedGuardMap_2D_element GALGAS_allowedGuardMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0 
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_allowedGuardMap_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_allowedGuardMap_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_allowedGuardMap_2D_element::objectCompare (const GALGAS_allowedGuardMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_allowedGuardMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allowedGuardMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allowedGuardMap_2D_element::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "<struct @allowedGuardMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_allowedGuardMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @allowedGuardMap-element type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_allowedGuardMap_2D_element ("allowedGuardMap-element",
                                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_allowedGuardMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_allowedGuardMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_allowedGuardMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_allowedGuardMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedGuardMap_2D_element GALGAS_allowedGuardMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_allowedGuardMap_2D_element result ;
  const GALGAS_allowedGuardMap_2D_element * p = (const GALGAS_allowedGuardMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_allowedGuardMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("allowedGuardMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalVariableMap_2D_element::GALGAS_globalVariableMap_2D_element (void) :
mProperty_lkey (),
mProperty_type (),
mProperty_executionModeSet (),
mProperty_allowedGuardMap (),
mProperty_initialValue (),
mProperty_isConstant (),
mProperty_allowedAccessToAll () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalVariableMap_2D_element::~ GALGAS_globalVariableMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalVariableMap_2D_element::GALGAS_globalVariableMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                          const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                          const GALGAS_stringset & inOperand2,
                                                                          const GALGAS_allowedGuardMap & inOperand3,
                                                                          const GALGAS_objectIR & inOperand4,
                                                                          const GALGAS_bool & inOperand5,
                                                                          const GALGAS_bool & inOperand6) :
mProperty_lkey (inOperand0),
mProperty_type (inOperand1),
mProperty_executionModeSet (inOperand2),
mProperty_allowedGuardMap (inOperand3),
mProperty_initialValue (inOperand4),
mProperty_isConstant (inOperand5),
mProperty_allowedAccessToAll (inOperand6) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalVariableMap_2D_element GALGAS_globalVariableMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                          const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                                          const GALGAS_stringset & inOperand2,
                                                                                          const GALGAS_allowedGuardMap & inOperand3,
                                                                                          const GALGAS_objectIR & inOperand4,
                                                                                          const GALGAS_bool & inOperand5,
                                                                                          const GALGAS_bool & inOperand6 
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_globalVariableMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid ()) {
    result = GALGAS_globalVariableMap_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_globalVariableMap_2D_element::objectCompare (const GALGAS_globalVariableMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_type.objectCompare (inOperand.mProperty_type) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_executionModeSet.objectCompare (inOperand.mProperty_executionModeSet) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_allowedGuardMap.objectCompare (inOperand.mProperty_allowedGuardMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_initialValue.objectCompare (inOperand.mProperty_initialValue) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_isConstant.objectCompare (inOperand.mProperty_isConstant) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_allowedAccessToAll.objectCompare (inOperand.mProperty_allowedAccessToAll) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_globalVariableMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_type.isValid () && mProperty_executionModeSet.isValid () && mProperty_allowedGuardMap.isValid () && mProperty_initialValue.isValid () && mProperty_isConstant.isValid () && mProperty_allowedAccessToAll.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_globalVariableMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_type.drop () ;
  mProperty_executionModeSet.drop () ;
  mProperty_allowedGuardMap.drop () ;
  mProperty_initialValue.drop () ;
  mProperty_isConstant.drop () ;
  mProperty_allowedAccessToAll.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_globalVariableMap_2D_element::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "<struct @globalVariableMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_type.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_executionModeSet.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_allowedGuardMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_initialValue.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_isConstant.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_allowedAccessToAll.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_globalVariableMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_globalVariableMap_2D_element::getter_type (UNUSED_LOCATION_ARGS) const {
  return mProperty_type ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringset GALGAS_globalVariableMap_2D_element::getter_executionModeSet (UNUSED_LOCATION_ARGS) const {
  return mProperty_executionModeSet ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedGuardMap GALGAS_globalVariableMap_2D_element::getter_allowedGuardMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_allowedGuardMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_globalVariableMap_2D_element::getter_initialValue (UNUSED_LOCATION_ARGS) const {
  return mProperty_initialValue ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_globalVariableMap_2D_element::getter_isConstant (UNUSED_LOCATION_ARGS) const {
  return mProperty_isConstant ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_globalVariableMap_2D_element::getter_allowedAccessToAll (UNUSED_LOCATION_ARGS) const {
  return mProperty_allowedAccessToAll ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @globalVariableMap-element type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_globalVariableMap_2D_element ("globalVariableMap-element",
                                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_globalVariableMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_globalVariableMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_globalVariableMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_globalVariableMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalVariableMap_2D_element GALGAS_globalVariableMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_globalVariableMap_2D_element result ;
  const GALGAS_globalVariableMap_2D_element * p = (const GALGAS_globalVariableMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_globalVariableMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("globalVariableMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandList_2D_element::GALGAS_operandList_2D_element (void) :
mProperty_mOperand () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandList_2D_element::~ GALGAS_operandList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandList_2D_element::GALGAS_operandList_2D_element (const GALGAS_objectIR & inOperand0) :
mProperty_mOperand (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandList_2D_element GALGAS_operandList_2D_element::constructor_new (const GALGAS_objectIR & inOperand0 
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_operandList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_operandList_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_operandList_2D_element::objectCompare (const GALGAS_operandList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mOperand.objectCompare (inOperand.mProperty_mOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_operandList_2D_element::isValid (void) const {
  return mProperty_mOperand.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_operandList_2D_element::drop (void) {
  mProperty_mOperand.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_operandList_2D_element::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "<struct @operandList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mOperand.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_operandList_2D_element::getter_mOperand (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOperand ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @operandList-element type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_operandList_2D_element ("operandList-element",
                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_operandList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_operandList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_operandList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_operandList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandList_2D_element GALGAS_operandList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_operandList_2D_element result ;
  const GALGAS_operandList_2D_element * p = (const GALGAS_operandList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_operandList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("operandList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_classConstantMap_2D_element::GALGAS_classConstantMap_2D_element (void) :
mProperty_lkey (),
mProperty_mValue () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_classConstantMap_2D_element::~ GALGAS_classConstantMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_classConstantMap_2D_element::GALGAS_classConstantMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                        const GALGAS_objectIR & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mValue (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_classConstantMap_2D_element GALGAS_classConstantMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                        const GALGAS_objectIR & inOperand1 
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_classConstantMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_classConstantMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_classConstantMap_2D_element::objectCompare (const GALGAS_classConstantMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mValue.objectCompare (inOperand.mProperty_mValue) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_classConstantMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mValue.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_classConstantMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mValue.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_classConstantMap_2D_element::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "<struct @classConstantMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mValue.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_classConstantMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_classConstantMap_2D_element::getter_mValue (UNUSED_LOCATION_ARGS) const {
  return mProperty_mValue ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @classConstantMap-element type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_classConstantMap_2D_element ("classConstantMap-element",
                                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_classConstantMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classConstantMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_classConstantMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_classConstantMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_classConstantMap_2D_element GALGAS_classConstantMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_classConstantMap_2D_element result ;
  const GALGAS_classConstantMap_2D_element * p = (const GALGAS_classConstantMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_classConstantMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("classConstantMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandIRList_2D_element::GALGAS_operandIRList_2D_element (void) :
mProperty_mOperand () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandIRList_2D_element::~ GALGAS_operandIRList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandIRList_2D_element::GALGAS_operandIRList_2D_element (const GALGAS_objectIR & inOperand0) :
mProperty_mOperand (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandIRList_2D_element GALGAS_operandIRList_2D_element::constructor_new (const GALGAS_objectIR & inOperand0 
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_operandIRList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_operandIRList_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_operandIRList_2D_element::objectCompare (const GALGAS_operandIRList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mOperand.objectCompare (inOperand.mProperty_mOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_operandIRList_2D_element::isValid (void) const {
  return mProperty_mOperand.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_operandIRList_2D_element::drop (void) {
  mProperty_mOperand.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_operandIRList_2D_element::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "<struct @operandIRList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mOperand.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_operandIRList_2D_element::getter_mOperand (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOperand ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @operandIRList-element type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_operandIRList_2D_element ("operandIRList-element",
                                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_operandIRList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_operandIRList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_operandIRList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_operandIRList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandIRList_2D_element GALGAS_operandIRList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_operandIRList_2D_element result ;
  const GALGAS_operandIRList_2D_element * p = (const GALGAS_operandIRList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_operandIRList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("operandIRList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorMap_2D_element::GALGAS_constructorMap_2D_element (void) :
mProperty_lkey (),
mProperty_mInitValue () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorMap_2D_element::~ GALGAS_constructorMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorMap_2D_element::GALGAS_constructorMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                    const GALGAS_constructorValue & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mInitValue (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorMap_2D_element GALGAS_constructorMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                    const GALGAS_constructorValue & inOperand1 
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_constructorMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_constructorMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_constructorMap_2D_element::objectCompare (const GALGAS_constructorMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mInitValue.objectCompare (inOperand.mProperty_mInitValue) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_constructorMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mInitValue.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_constructorMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mInitValue.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_constructorMap_2D_element::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "<struct @constructorMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mInitValue.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_constructorMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorValue GALGAS_constructorMap_2D_element::getter_mInitValue (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInitValue ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @constructorMap-element type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_constructorMap_2D_element ("constructorMap-element",
                                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_constructorMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constructorMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_constructorMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_constructorMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorMap_2D_element GALGAS_constructorMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_constructorMap_2D_element result ;
  const GALGAS_constructorMap_2D_element * p = (const GALGAS_constructorMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_constructorMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("constructorMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalTaskVariableList_2D_element::GALGAS_globalTaskVariableList_2D_element (void) :
mProperty_mTaskName (),
mProperty_mTaskTypeName (),
mProperty_mInitialValue () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalTaskVariableList_2D_element::~ GALGAS_globalTaskVariableList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalTaskVariableList_2D_element::GALGAS_globalTaskVariableList_2D_element (const GALGAS_string & inOperand0,
                                                                                    const GALGAS_string & inOperand1,
                                                                                    const GALGAS_objectIR & inOperand2) :
mProperty_mTaskName (inOperand0),
mProperty_mTaskTypeName (inOperand1),
mProperty_mInitialValue (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalTaskVariableList_2D_element GALGAS_globalTaskVariableList_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                    const GALGAS_string & inOperand1,
                                                                                                    const GALGAS_objectIR & inOperand2 
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_globalTaskVariableList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_globalTaskVariableList_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_globalTaskVariableList_2D_element::objectCompare (const GALGAS_globalTaskVariableList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mTaskName.objectCompare (inOperand.mProperty_mTaskName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mTaskTypeName.objectCompare (inOperand.mProperty_mTaskTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mInitialValue.objectCompare (inOperand.mProperty_mInitialValue) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_globalTaskVariableList_2D_element::isValid (void) const {
  return mProperty_mTaskName.isValid () && mProperty_mTaskTypeName.isValid () && mProperty_mInitialValue.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_globalTaskVariableList_2D_element::drop (void) {
  mProperty_mTaskName.drop () ;
  mProperty_mTaskTypeName.drop () ;
  mProperty_mInitialValue.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_globalTaskVariableList_2D_element::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "<struct @globalTaskVariableList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mTaskName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mTaskTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mInitialValue.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_globalTaskVariableList_2D_element::getter_mTaskName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTaskName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_globalTaskVariableList_2D_element::getter_mTaskTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTaskTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_globalTaskVariableList_2D_element::getter_mInitialValue (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInitialValue ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @globalTaskVariableList-element type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_globalTaskVariableList_2D_element ("globalTaskVariableList-element",
                                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_globalTaskVariableList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_globalTaskVariableList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_globalTaskVariableList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_globalTaskVariableList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalTaskVariableList_2D_element GALGAS_globalTaskVariableList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_globalTaskVariableList_2D_element result ;
  const GALGAS_globalTaskVariableList_2D_element * p = (const GALGAS_globalTaskVariableList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_globalTaskVariableList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("globalTaskVariableList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineFormalArgumentListForGeneration_2D_element::GALGAS_routineFormalArgumentListForGeneration_2D_element (void) :
mProperty_mFormalArgumentKind (),
mProperty_mFormalArgumentType (),
mProperty_mFormalArgumentName () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineFormalArgumentListForGeneration_2D_element::~ GALGAS_routineFormalArgumentListForGeneration_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineFormalArgumentListForGeneration_2D_element::GALGAS_routineFormalArgumentListForGeneration_2D_element (const GALGAS_procFormalArgumentPassingMode & inOperand0,
                                                                                                                    const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                                                                    const GALGAS_string & inOperand2) :
mProperty_mFormalArgumentKind (inOperand0),
mProperty_mFormalArgumentType (inOperand1),
mProperty_mFormalArgumentName (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineFormalArgumentListForGeneration_2D_element GALGAS_routineFormalArgumentListForGeneration_2D_element::constructor_new (const GALGAS_procFormalArgumentPassingMode & inOperand0,
                                                                                                                                    const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                                                                                    const GALGAS_string & inOperand2 
                                                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_routineFormalArgumentListForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_routineFormalArgumentListForGeneration_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_routineFormalArgumentListForGeneration_2D_element::objectCompare (const GALGAS_routineFormalArgumentListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mFormalArgumentKind.objectCompare (inOperand.mProperty_mFormalArgumentKind) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFormalArgumentType.objectCompare (inOperand.mProperty_mFormalArgumentType) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFormalArgumentName.objectCompare (inOperand.mProperty_mFormalArgumentName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_routineFormalArgumentListForGeneration_2D_element::isValid (void) const {
  return mProperty_mFormalArgumentKind.isValid () && mProperty_mFormalArgumentType.isValid () && mProperty_mFormalArgumentName.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineFormalArgumentListForGeneration_2D_element::drop (void) {
  mProperty_mFormalArgumentKind.drop () ;
  mProperty_mFormalArgumentType.drop () ;
  mProperty_mFormalArgumentName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineFormalArgumentListForGeneration_2D_element::description (C_String & ioString,
                                                                            const int32_t inIndentation) const {
  ioString << "<struct @routineFormalArgumentListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mFormalArgumentKind.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFormalArgumentType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFormalArgumentName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentPassingMode GALGAS_routineFormalArgumentListForGeneration_2D_element::getter_mFormalArgumentKind (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFormalArgumentKind ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_routineFormalArgumentListForGeneration_2D_element::getter_mFormalArgumentType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFormalArgumentType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_routineFormalArgumentListForGeneration_2D_element::getter_mFormalArgumentName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFormalArgumentName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                @routineFormalArgumentListForGeneration-element type                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_routineFormalArgumentListForGeneration_2D_element ("routineFormalArgumentListForGeneration-element",
                                                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_routineFormalArgumentListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineFormalArgumentListForGeneration_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_routineFormalArgumentListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_routineFormalArgumentListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineFormalArgumentListForGeneration_2D_element GALGAS_routineFormalArgumentListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                  C_Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_routineFormalArgumentListForGeneration_2D_element result ;
  const GALGAS_routineFormalArgumentListForGeneration_2D_element * p = (const GALGAS_routineFormalArgumentListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_routineFormalArgumentListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineFormalArgumentListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalConstantMapIR_2D_element::GALGAS_globalConstantMapIR_2D_element (void) :
mProperty_lkey (),
mProperty_mType (),
mProperty_mSourceExpression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalConstantMapIR_2D_element::~ GALGAS_globalConstantMapIR_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalConstantMapIR_2D_element::GALGAS_globalConstantMapIR_2D_element (const GALGAS_lstring & inOperand0,
                                                                              const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                              const GALGAS_objectIR & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mType (inOperand1),
mProperty_mSourceExpression (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalConstantMapIR_2D_element GALGAS_globalConstantMapIR_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                              const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                                              const GALGAS_objectIR & inOperand2 
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_globalConstantMapIR_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_globalConstantMapIR_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_globalConstantMapIR_2D_element::objectCompare (const GALGAS_globalConstantMapIR_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mType.objectCompare (inOperand.mProperty_mType) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSourceExpression.objectCompare (inOperand.mProperty_mSourceExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_globalConstantMapIR_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mType.isValid () && mProperty_mSourceExpression.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_globalConstantMapIR_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mType.drop () ;
  mProperty_mSourceExpression.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_globalConstantMapIR_2D_element::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "<struct @globalConstantMapIR-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSourceExpression.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_globalConstantMapIR_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_globalConstantMapIR_2D_element::getter_mType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_globalConstantMapIR_2D_element::getter_mSourceExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSourceExpression ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @globalConstantMapIR-element type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_globalConstantMapIR_2D_element ("globalConstantMapIR-element",
                                                       NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_globalConstantMapIR_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_globalConstantMapIR_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_globalConstantMapIR_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_globalConstantMapIR_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalConstantMapIR_2D_element GALGAS_globalConstantMapIR_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_globalConstantMapIR_2D_element result ;
  const GALGAS_globalConstantMapIR_2D_element * p = (const GALGAS_globalConstantMapIR_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_globalConstantMapIR_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("globalConstantMapIR-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_interruptMapIR_2D_element::GALGAS_interruptMapIR_2D_element (void) :
mProperty_lkey (),
mProperty_mSelfType (),
mProperty_mGlobalVariableName (),
mProperty_mAllocaList (),
mProperty_mInstructionGenerationList (),
mProperty_mMode () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_interruptMapIR_2D_element::~ GALGAS_interruptMapIR_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_interruptMapIR_2D_element::GALGAS_interruptMapIR_2D_element (const GALGAS_lstring & inOperand0,
                                                                    const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                    const GALGAS_string & inOperand2,
                                                                    const GALGAS_allocaList & inOperand3,
                                                                    const GALGAS_instructionListIR & inOperand4,
                                                                    const GALGAS_mode & inOperand5) :
mProperty_lkey (inOperand0),
mProperty_mSelfType (inOperand1),
mProperty_mGlobalVariableName (inOperand2),
mProperty_mAllocaList (inOperand3),
mProperty_mInstructionGenerationList (inOperand4),
mProperty_mMode (inOperand5) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_interruptMapIR_2D_element GALGAS_interruptMapIR_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                    const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                                    const GALGAS_string & inOperand2,
                                                                                    const GALGAS_allocaList & inOperand3,
                                                                                    const GALGAS_instructionListIR & inOperand4,
                                                                                    const GALGAS_mode & inOperand5 
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_interruptMapIR_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid ()) {
    result = GALGAS_interruptMapIR_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_interruptMapIR_2D_element::objectCompare (const GALGAS_interruptMapIR_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSelfType.objectCompare (inOperand.mProperty_mSelfType) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mGlobalVariableName.objectCompare (inOperand.mProperty_mGlobalVariableName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mAllocaList.objectCompare (inOperand.mProperty_mAllocaList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mInstructionGenerationList.objectCompare (inOperand.mProperty_mInstructionGenerationList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mMode.objectCompare (inOperand.mProperty_mMode) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_interruptMapIR_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mSelfType.isValid () && mProperty_mGlobalVariableName.isValid () && mProperty_mAllocaList.isValid () && mProperty_mInstructionGenerationList.isValid () && mProperty_mMode.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_interruptMapIR_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mSelfType.drop () ;
  mProperty_mGlobalVariableName.drop () ;
  mProperty_mAllocaList.drop () ;
  mProperty_mInstructionGenerationList.drop () ;
  mProperty_mMode.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_interruptMapIR_2D_element::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "<struct @interruptMapIR-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSelfType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mGlobalVariableName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mAllocaList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mInstructionGenerationList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mMode.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_interruptMapIR_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_interruptMapIR_2D_element::getter_mSelfType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSelfType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_interruptMapIR_2D_element::getter_mGlobalVariableName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGlobalVariableName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allocaList GALGAS_interruptMapIR_2D_element::getter_mAllocaList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAllocaList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR GALGAS_interruptMapIR_2D_element::getter_mInstructionGenerationList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInstructionGenerationList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mode GALGAS_interruptMapIR_2D_element::getter_mMode (UNUSED_LOCATION_ARGS) const {
  return mProperty_mMode ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @interruptMapIR-element type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_interruptMapIR_2D_element ("interruptMapIR-element",
                                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_interruptMapIR_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_interruptMapIR_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_interruptMapIR_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_interruptMapIR_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_interruptMapIR_2D_element GALGAS_interruptMapIR_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_interruptMapIR_2D_element result ;
  const GALGAS_interruptMapIR_2D_element * p = (const GALGAS_interruptMapIR_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_interruptMapIR_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("interruptMapIR-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
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
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_infixObjectObjectOperatorDescription::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_infixObjectObjectOperatorDescription * p = (const cPtr_infixObjectObjectOperatorDescription *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_infixObjectObjectOperatorDescription) ;
  if (kOperandEqual == result) {
    result = mProperty_mOperator.objectCompare (p->mProperty_mOperator) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_infixObjectObjectOperatorDescription::objectCompare (const GALGAS_infixObjectObjectOperatorDescription & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixObjectObjectOperatorDescription::GALGAS_infixObjectObjectOperatorDescription (void) :
GALGAS_infixOperatorDescription () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixObjectObjectOperatorDescription::GALGAS_infixObjectObjectOperatorDescription (const cPtr_infixObjectObjectOperatorDescription * inSourcePtr) :
GALGAS_infixOperatorDescription (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_infixObjectObjectOperatorDescription) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixObjectObjectOperatorDescription GALGAS_infixObjectObjectOperatorDescription::constructor_new (const GALGAS_llvmBinaryOperation & inAttribute_mOperator
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_infixObjectObjectOperatorDescription result ;
  if (inAttribute_mOperator.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_infixObjectObjectOperatorDescription (inAttribute_mOperator COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                            Pointer class for @infixObjectObjectOperatorDescription class                            *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_infixObjectObjectOperatorDescription::cPtr_infixObjectObjectOperatorDescription (const GALGAS_llvmBinaryOperation & in_mOperator
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_infixOperatorDescription (in_mOperator COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_infixObjectObjectOperatorDescription::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_infixObjectObjectOperatorDescription ;
}

void cPtr_infixObjectObjectOperatorDescription::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "[@infixObjectObjectOperatorDescription:" ;
  mProperty_mOperator.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_infixObjectObjectOperatorDescription::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_infixObjectObjectOperatorDescription (mProperty_mOperator COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @infixObjectObjectOperatorDescription type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_infixObjectObjectOperatorDescription ("infixObjectObjectOperatorDescription",
                                                             & kTypeDescriptor_GALGAS_infixOperatorDescription) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_infixObjectObjectOperatorDescription::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_infixObjectObjectOperatorDescription ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_infixObjectObjectOperatorDescription::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_infixObjectObjectOperatorDescription (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixObjectObjectOperatorDescription GALGAS_infixObjectObjectOperatorDescription::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_infixObjectObjectOperatorDescription result ;
  const GALGAS_infixObjectObjectOperatorDescription * p = (const GALGAS_infixObjectObjectOperatorDescription *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_infixObjectObjectOperatorDescription *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("infixObjectObjectOperatorDescription", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Extension method '@controlRegisterDeclarationListAST-element controlRegisterType'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_controlRegisterType (const GALGAS_controlRegisterDeclarationListAST_2D_element inObject,
                                          GALGAS_semanticContext & ioArgument_ioContext,
                                          GALGAS_unifiedTypeMap_2D_proxy & outArgument_outRegisterType,
                                          GALGAS_uint & outArgument_outRegisterBitCount,
                                          C_Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outRegisterType.drop () ; // Release 'out' argument
  outArgument_outRegisterBitCount.drop () ; // Release 'out' argument
  outArgument_outRegisterType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), inObject.mProperty_mRegisterTypeName, inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 211)) ;
  switch (outArgument_outRegisterType.getter_kind (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 212)).enumValue ()) {
  case GALGAS_typeKind::kNotBuilt:
    break ;
  case GALGAS_typeKind::kEnum_integer:
    {
      const cEnumAssociatedValues_typeKind_integer * extractPtr_7947 = (const cEnumAssociatedValues_typeKind_integer *) (outArgument_outRegisterType.getter_kind (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 212)).unsafePointer ()) ;
      const GALGAS_uint extractedValue_bitCount = extractPtr_7947->mAssociatedValue3 ;
      outArgument_outRegisterBitCount = extractedValue_bitCount ;
    }
    break ;
  case GALGAS_typeKind::kEnum_boolean:
    {
      TC_Array <C_FixItDescription> fixItArray0 ;
      inCompiler->emitSemanticError (inObject.mProperty_mRegisterTypeName.getter_location (SOURCE_FILE ("declaration-control-register.galgas", 216)), GALGAS_string ("a register should be an $intXX or an $uintXX"), fixItArray0  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 216)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_enumeration:
    {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (inObject.mProperty_mRegisterTypeName.getter_location (SOURCE_FILE ("declaration-control-register.galgas", 218)), GALGAS_string ("a register should be an $intXX or an $uintXX"), fixItArray1  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 218)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_literalString:
    {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (inObject.mProperty_mRegisterTypeName.getter_location (SOURCE_FILE ("declaration-control-register.galgas", 220)), GALGAS_string ("a register should be an $intXX or an $uintXX"), fixItArray2  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 220)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_staticInteger:
    {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (inObject.mProperty_mRegisterTypeName.getter_location (SOURCE_FILE ("declaration-control-register.galgas", 222)), GALGAS_string ("a register should be an $intXX or an $uintXX"), fixItArray3  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 222)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_structure:
    {
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (inObject.mProperty_mRegisterTypeName.getter_location (SOURCE_FILE ("declaration-control-register.galgas", 224)), GALGAS_string ("a register should be an $intXX or an $uintXX"), fixItArray4  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 224)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_opaque:
    {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (inObject.mProperty_mRegisterTypeName.getter_location (SOURCE_FILE ("declaration-control-register.galgas", 226)), GALGAS_string ("a register should be an $intXX or an $uintXX"), fixItArray5  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 226)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_arrayType:
    {
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (inObject.mProperty_mRegisterTypeName.getter_location (SOURCE_FILE ("declaration-control-register.galgas", 228)), GALGAS_string ("a register should be an $intXX or an $uintXX"), fixItArray6  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 228)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_function:
    {
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (inObject.mProperty_mRegisterTypeName.getter_location (SOURCE_FILE ("declaration-control-register.galgas", 230)), GALGAS_string ("a register should be an $intXX or an $uintXX"), fixItArray7  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 230)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_pointer:
    {
      TC_Array <C_FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (inObject.mProperty_mRegisterTypeName.getter_location (SOURCE_FILE ("declaration-control-register.galgas", 232)), GALGAS_string ("a register should be an $intXX or an $uintXX"), fixItArray8  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 232)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Extension method '@globalVarDeclarationList-element enterInContext'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_enterInContext (const GALGAS_globalVarDeclarationList_2D_element inObject,
                                     GALGAS_semanticContext & ioArgument_ioContext,
                                     GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                     C_Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_proxy var_variableAnnotationType_8021 ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, inObject.mProperty_mTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_variableAnnotationType_8021 = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-global-variable.galgas", 241)) ;
  }else if (kBoolFalse == test_0) {
    var_variableAnnotationType_8021 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), inObject.mProperty_mTypeName, inCompiler  COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 243)) ;
  }
  GALGAS_semanticTemporariesStruct var_temporaries_8268 = GALGAS_semanticTemporariesStruct::constructor_default (SOURCE_FILE ("declaration-global-variable.galgas", 246)) ;
  GALGAS_instructionListIR var_instructionGenerationList_8326 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("declaration-global-variable.galgas", 247)) ;
  GALGAS_allocaList var_allocaList_8356 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("declaration-global-variable.galgas", 248)) ;
  GALGAS_unifiedSymbolMap var_variableMap_8448 ;
  GALGAS_universalPropertyAndRoutineMapForContext var_universalMap_8508 ;
  {
  routine_variableMapWithConstants (ioArgument_ioContext, var_variableMap_8448, var_universalMap_8508, inCompiler  COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 249)) ;
  }
  GALGAS_objectIR var_expressionResult_9042 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) inObject.mProperty_mSourceExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-global-variable.galgas", 255)), GALGAS_bool (false), GALGAS_bool (false), GALGAS_string ("compiler").getter_nowhere (SOURCE_FILE ("declaration-global-variable.galgas", 258)), var_variableAnnotationType_8021, ioArgument_ioContext, GALGAS_mode::constructor_bootMode (SOURCE_FILE ("declaration-global-variable.galgas", 261)), var_temporaries_8268, ioArgument_ioGlobalLiteralStringMap, var_variableMap_8448, var_universalMap_8508, var_allocaList_8356, var_instructionGenerationList_8326, var_expressionResult_9042, inCompiler COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 254)) ;
  GALGAS_bool test_1 = GALGAS_bool (kIsStrictSup, var_instructionGenerationList_8326.getter_length (SOURCE_FILE ("declaration-global-variable.galgas", 270)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  if (kBoolTrue != test_1.boolEnum ()) {
    test_1 = GALGAS_bool (kIsStrictSup, var_allocaList_8356.getter_length (SOURCE_FILE ("declaration-global-variable.galgas", 270)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  }
  GALGAS_bool test_2 = test_1 ;
  if (kBoolTrue != test_2.boolEnum ()) {
    test_2 = extensionGetter_isStatic (var_expressionResult_9042, inCompiler COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 270)).operator_not (SOURCE_FILE ("declaration-global-variable.galgas", 270)) ;
  }
  const enumGalgasBool test_3 = test_2.boolEnum () ;
  if (kBoolTrue == test_3) {
    TC_Array <C_FixItDescription> fixItArray4 ;
    inCompiler->emitSemanticError (inObject.mProperty_mVarName.getter_location (SOURCE_FILE ("declaration-global-variable.galgas", 271)), GALGAS_string ("source expression cannot be statically computed"), fixItArray4  COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 271)) ;
  }
  GALGAS_bool test_5 = GALGAS_bool (kIsEqual, var_variableAnnotationType_8021.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-global-variable.galgas", 274)))) ;
  if (kBoolTrue == test_5.boolEnum ()) {
    test_5 = extensionGetter_kind (var_expressionResult_9042, inCompiler COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 274)).getter_isStaticInteger (SOURCE_FILE ("declaration-global-variable.galgas", 274)) ;
  }
  const enumGalgasBool test_6 = test_5.boolEnum () ;
  if (kBoolTrue == test_6) {
    TC_Array <C_FixItDescription> fixItArray7 ;
    inCompiler->emitSemanticError (inObject.mProperty_mVarName.getter_location (SOURCE_FILE ("declaration-global-variable.galgas", 275)), GALGAS_string ("cannot infer type"), fixItArray7  COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 275)) ;
  }
  GALGAS_objectIR var_result_9430 = function_checkAssignmentCompatibility (var_expressionResult_9042, var_variableAnnotationType_8021, inObject.mProperty_mVarName.getter_location (HERE), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 277)) ;
  GALGAS_stringset var_executionModes_9639 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("declaration-global-variable.galgas", 283)) ;
  GALGAS_allowedGuardMap var_allowedGuardMap_11796 = GALGAS_allowedGuardMap::constructor_emptyMap (SOURCE_FILE ("declaration-global-variable.galgas", 336)) ;
  {
  ioArgument_ioContext.mProperty_mGlobalVariableMap.setter_insertKey (inObject.mProperty_mVarName, extensionGetter_type (var_result_9430, inCompiler COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 375)), var_executionModes_9639, var_allowedGuardMap_11796, var_result_9430, GALGAS_bool (false), inObject.mProperty_mAllowedAccessToAll, inCompiler COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 373)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Extension method '@globalVariableMapIR-element generateLLVM'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_generateLLVM (const GALGAS_globalVariableMapIR_2D_element inObject,
                                   GALGAS_string & ioArgument_ioLLVMcode,
                                   C_Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("@").add_operation (function_llvmNameForGlobalVariable (inObject.mProperty_lkey.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 421)), inCompiler COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 421)).add_operation (GALGAS_string (" = internal global "), inCompiler COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 421)), inCompiler  COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 421)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (inObject.mProperty_mType.getter_kind (inCompiler COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 422)), inCompiler COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 422)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 422)), inCompiler  COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 422)) ;
  GALGAS_string var_initialString_15480 = extensionGetter_llvmName (inObject.mProperty_mInitialValue, inCompiler COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 423)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_initialString_15480.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("zeroinitializer"), inCompiler  COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 425)) ;
  }else if (kBoolFalse == test_0) {
    ioArgument_ioLLVMcode.plusAssign_operation(var_initialString_15480, inCompiler  COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 427)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 429)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Extension method '@moduleListIR-element generateLLVM'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_generateLLVM (const GALGAS_moduleListIR_2D_element inObject,
                                   GALGAS_string & ioArgument_ioLLVMcode,
                                   C_Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("@").add_operation (function_llvmNameForGlobalVariable (inObject.mProperty_mModuleName, inCompiler COMMA_SOURCE_FILE ("declaration-module.galgas", 218)), inCompiler COMMA_SOURCE_FILE ("declaration-module.galgas", 218)).add_operation (GALGAS_string (" = internal global "), inCompiler COMMA_SOURCE_FILE ("declaration-module.galgas", 218)), inCompiler  COMMA_SOURCE_FILE ("declaration-module.galgas", 218)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (inObject.mProperty_mType.getter_kind (inCompiler COMMA_SOURCE_FILE ("declaration-module.galgas", 219)), inCompiler COMMA_SOURCE_FILE ("declaration-module.galgas", 219)).add_operation (GALGAS_string (" {"), inCompiler COMMA_SOURCE_FILE ("declaration-module.galgas", 219)), inCompiler  COMMA_SOURCE_FILE ("declaration-module.galgas", 219)) ;
  cEnumerator_operandIRList enumerator_9223 (inObject.mProperty_mInitialValueList, kENUMERATION_UP) ;
  while (enumerator_9223.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_9223.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-module.galgas", 221)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("declaration-module.galgas", 221)).add_operation (extensionGetter_llvmName (enumerator_9223.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-module.galgas", 221)), inCompiler COMMA_SOURCE_FILE ("declaration-module.galgas", 221)), inCompiler  COMMA_SOURCE_FILE ("declaration-module.galgas", 221)) ;
    if (enumerator_9223.hasNextObject ()) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-module.galgas", 222)) ;
    }
    enumerator_9223.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-module.galgas", 224)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Extension method '@taskVarListAST-element enterInContext'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_enterInContext (const GALGAS_taskVarListAST_2D_element inObject,
                                     GALGAS_semanticContext & ioArgument_ioContext,
                                     GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                     GALGAS_propertyList & ioArgument_ioPropertyList,
                                     GALGAS_propertyMap & ioArgument_ioPropertyMap,
                                     GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalPropertyAndRoutineMapForContext,
                                     GALGAS_operandIRList & ioArgument_ioInitialValueList,
                                     C_Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_proxy var_variableAnnotationType_7914 ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, inObject.mProperty_mVarTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_variableAnnotationType_7914 = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-task.galgas", 221)) ;
  }else if (kBoolFalse == test_0) {
    var_variableAnnotationType_7914 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), inObject.mProperty_mVarTypeName, inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 223)) ;
  }
  GALGAS_semanticTemporariesStruct var_temporaries_8167 = GALGAS_semanticTemporariesStruct::constructor_default (SOURCE_FILE ("declaration-task.galgas", 226)) ;
  GALGAS_instructionListIR var_instructionGenerationList_8225 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("declaration-task.galgas", 227)) ;
  GALGAS_allocaList var_allocaList_8255 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("declaration-task.galgas", 228)) ;
  GALGAS_unifiedSymbolMap var_variableMap_8347 ;
  GALGAS_universalPropertyAndRoutineMapForContext var_universalMap_8407 ;
  {
  routine_variableMapWithConstants (ioArgument_ioContext, var_variableMap_8347, var_universalMap_8407, inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 229)) ;
  }
  GALGAS_objectIR var_expressionResult_8928 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) inObject.mProperty_mVarInitExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-task.galgas", 235)), GALGAS_bool (false), GALGAS_bool (false), GALGAS_string ("compiler").getter_nowhere (SOURCE_FILE ("declaration-task.galgas", 238)), var_variableAnnotationType_7914, ioArgument_ioContext, GALGAS_mode::constructor_bootMode (SOURCE_FILE ("declaration-task.galgas", 241)), var_temporaries_8167, ioArgument_ioGlobalLiteralStringMap, var_variableMap_8347, var_universalMap_8407, var_allocaList_8255, var_instructionGenerationList_8225, var_expressionResult_8928, inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 234)) ;
  GALGAS_bool test_1 = GALGAS_bool (kIsStrictSup, var_instructionGenerationList_8225.getter_length (SOURCE_FILE ("declaration-task.galgas", 250)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  if (kBoolTrue != test_1.boolEnum ()) {
    test_1 = GALGAS_bool (kIsStrictSup, var_allocaList_8255.getter_length (SOURCE_FILE ("declaration-task.galgas", 250)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  }
  GALGAS_bool test_2 = test_1 ;
  if (kBoolTrue != test_2.boolEnum ()) {
    test_2 = extensionGetter_isStatic (var_expressionResult_8928, inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 250)).operator_not (SOURCE_FILE ("declaration-task.galgas", 250)) ;
  }
  const enumGalgasBool test_3 = test_2.boolEnum () ;
  if (kBoolTrue == test_3) {
    TC_Array <C_FixItDescription> fixItArray4 ;
    inCompiler->emitSemanticError (inObject.mProperty_mVarName.getter_location (SOURCE_FILE ("declaration-task.galgas", 251)), GALGAS_string ("source expression cannot be statically computed"), fixItArray4  COMMA_SOURCE_FILE ("declaration-task.galgas", 251)) ;
  }
  GALGAS_bool test_5 = GALGAS_bool (kIsEqual, var_variableAnnotationType_7914.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-task.galgas", 254)))) ;
  if (kBoolTrue == test_5.boolEnum ()) {
    test_5 = extensionGetter_kind (var_expressionResult_8928, inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 254)).getter_isStaticInteger (SOURCE_FILE ("declaration-task.galgas", 254)) ;
  }
  const enumGalgasBool test_6 = test_5.boolEnum () ;
  if (kBoolTrue == test_6) {
    TC_Array <C_FixItDescription> fixItArray7 ;
    inCompiler->emitSemanticError (inObject.mProperty_mVarName.getter_location (SOURCE_FILE ("declaration-task.galgas", 255)), GALGAS_string ("cannot infer type"), fixItArray7  COMMA_SOURCE_FILE ("declaration-task.galgas", 255)) ;
  }
  GALGAS_objectIR var_result_9326 = function_checkAssignmentCompatibility (var_expressionResult_8928, var_variableAnnotationType_7914, inObject.mProperty_mVarName.getter_location (HERE), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 257)) ;
  const enumGalgasBool test_8 = extensionGetter_instanciable (extensionGetter_type (var_result_9326, inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 265)).getter_kind (inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 265)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 265)).operator_not (SOURCE_FILE ("declaration-task.galgas", 265)).boolEnum () ;
  if (kBoolTrue == test_8) {
    TC_Array <C_FixItDescription> fixItArray9 ;
    inCompiler->emitSemanticError (inObject.mProperty_mVarName.getter_location (SOURCE_FILE ("declaration-task.galgas", 266)), GALGAS_string ("$").add_operation (extensionGetter_key (var_result_9326, inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 266)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 266)).add_operation (GALGAS_string (" type is not instanciable"), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 266)), fixItArray9  COMMA_SOURCE_FILE ("declaration-task.galgas", 266)) ;
  }
  {
  ioArgument_ioPropertyMap.setter_insertKey (inObject.mProperty_mVarName, GALGAS_bool (false), GALGAS_objectIR::constructor_property (extensionGetter_type (var_result_9326, inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 271)), inObject.mProperty_mVarName, ioArgument_ioPropertyList.getter_length (SOURCE_FILE ("declaration-task.galgas", 271))  COMMA_SOURCE_FILE ("declaration-task.galgas", 271)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 268)) ;
  }
  {
  ioArgument_ioUniversalPropertyAndRoutineMapForContext.insulate (HERE) ;
  cPtr_universalPropertyAndRoutineMapForContext * ptr_9893 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalPropertyAndRoutineMapForContext.ptr () ;
  callExtensionSetter_insertProperty ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_9893, inObject.mProperty_mVarName, GALGAS_bool (false), GALGAS_objectIR::constructor_property (extensionGetter_type (var_result_9326, inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 276)), inObject.mProperty_mVarName, ioArgument_ioPropertyList.getter_length (SOURCE_FILE ("declaration-task.galgas", 276))  COMMA_SOURCE_FILE ("declaration-task.galgas", 276)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 273)) ;
  }
  ioArgument_ioInitialValueList.addAssign_operation (var_result_9326  COMMA_SOURCE_FILE ("declaration-task.galgas", 278)) ;
  ioArgument_ioPropertyList.addAssign_operation (inObject.mProperty_mVarName.getter_string (HERE), extensionGetter_type (var_result_9326, inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 279))  COMMA_SOURCE_FILE ("declaration-task.galgas", 279)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Extension method '@taskList-element semanticAnalysis'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_semanticAnalysis (const GALGAS_taskList_2D_element inObject,
                                       const GALGAS_semanticContext constinArgument_inContext,
                                       GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                       GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                       C_Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint var_stackSize_11517 = inObject.mProperty_mStackSize.getter_bigint (HERE) ;
  GALGAS_bool test_0 = GALGAS_bool (kIsStrictInf, var_stackSize_11517.objectCompare (GALGAS_bigint ("64", inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 315)))) ;
  if (kBoolTrue != test_0.boolEnum ()) {
    test_0 = GALGAS_bool (kIsNotEqual, var_stackSize_11517.modulo_operation (GALGAS_bigint ("8", inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 315)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 315)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 315)))) ;
  }
  const enumGalgasBool test_1 = test_0.boolEnum () ;
  if (kBoolTrue == test_1) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (inObject.mProperty_mStackSize.getter_location (SOURCE_FILE ("declaration-task.galgas", 316)), GALGAS_string ("stack size should be a multiple of 8, and >= 64"), fixItArray2  COMMA_SOURCE_FILE ("declaration-task.galgas", 316)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_taskType_11758 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), inObject.mProperty_mTaskName, inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 319)) ;
  cEnumerator_functionDeclarationListAST enumerator_11858 (inObject.mProperty_mTaskProcList, kENUMERATION_UP) ;
  while (enumerator_11858.hasCurrentObject ()) {
    {
    routine_routineSemanticAnalysis (var_taskType_11758, GALGAS_routineKind::constructor_function (GALGAS_mode::constructor_userMode (SOURCE_FILE ("declaration-task.galgas", 323))  COMMA_SOURCE_FILE ("declaration-task.galgas", 323)), GALGAS_mode::constructor_userMode (SOURCE_FILE ("declaration-task.galgas", 324)), enumerator_11858.current (HERE).getter_mFunctionName (HERE), enumerator_11858.current (HERE).getter_mFunctionFormalArgumentList (HERE), enumerator_11858.current (HERE).getter_mFunctionReturnTypeName (HERE), enumerator_11858.current (HERE).getter_mFunctionInstructionList (HERE), enumerator_11858.current (HERE).getter_mEndOfFunctionDeclaration (HERE), GALGAS_bool (true), GALGAS_bool (true), GALGAS_bool (true), GALGAS_bool (false), constinArgument_inContext, ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct, inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 321)) ;
    }
    enumerator_11858.gotoNextObject () ;
  }
  GALGAS_taskInitSortedListAST var_taskInitSortedListAST_12566 = GALGAS_taskInitSortedListAST::constructor_emptySortedList (SOURCE_FILE ("declaration-task.galgas", 340)) ;
  cEnumerator_taskInitListAST enumerator_12641 (inObject.mProperty_mTaskInitListAST, kENUMERATION_UP) ;
  while (enumerator_12641.hasCurrentObject ()) {
    var_taskInitSortedListAST_12566.addAssign_operation (enumerator_12641.current_mTaskInitPriority (HERE), enumerator_12641.current_mTaskInitInstructionList (HERE), enumerator_12641.current_mEndOfTaskInitDeclaration (HERE), enumerator_12641.current_mTaskInitPriority (HERE).getter_bigint (HERE)  COMMA_SOURCE_FILE ("declaration-task.galgas", 342)) ;
    enumerator_12641.gotoNextObject () ;
  }
  GALGAS_instructionListIR var_initInstructionListIR_12784 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("declaration-task.galgas", 344)) ;
  GALGAS_allocaList var_initAllocaList_12818 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("declaration-task.galgas", 345)) ;
  cEnumerator_taskInitSortedListAST enumerator_12924 (var_taskInitSortedListAST_12566, kENUMERATION_UP) ;
  while (enumerator_12924.hasCurrentObject ()) {
    GALGAS_allocaList var_partialAllocaList_13287 ;
    GALGAS_instructionListIR var_partialInstructionGenerationList_13350 ;
    {
    routine_initSemanticAnalysis (constinArgument_inContext, ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct, var_taskType_11758, enumerator_12924.current_mTaskInitPriority (HERE), GALGAS_mode::constructor_userMode (SOURCE_FILE ("declaration-task.galgas", 353)), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("declaration-task.galgas", 354)), enumerator_12924.current_mTaskInitInstructionList (HERE), enumerator_12924.current_mEndOfTaskInitDeclaration (HERE), var_partialAllocaList_13287, var_partialInstructionGenerationList_13350, inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 347)) ;
    }
    var_initInstructionListIR_12784.plusAssign_operation(var_partialInstructionGenerationList_13350, inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 360)) ;
    var_initAllocaList_12818.plusAssign_operation(var_partialAllocaList_13287, inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 361)) ;
    enumerator_12924.gotoNextObject () ;
  }
  GALGAS_instructionListAST var_taskListInstructionList_13649 = GALGAS_instructionListAST::constructor_emptyList (SOURCE_FILE ("declaration-task.galgas", 365)) ;
  const enumGalgasBool test_3 = GALGAS_bool (kIsStrictSup, inObject.mProperty_mGuardedCommandList.getter_length (SOURCE_FILE ("declaration-task.galgas", 366)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_3) {
    GALGAS_syncInstructionAST var_syncInstruction_13721 = GALGAS_syncInstructionAST::constructor_new (inObject.mProperty_mTaskName.getter_location (HERE), inObject.mProperty_mGuardedCommandList, inObject.mProperty_mTaskName.getter_location (HERE)  COMMA_SOURCE_FILE ("declaration-task.galgas", 367)) ;
    var_taskListInstructionList_13649.addAssign_operation (GALGAS_location::constructor_nowhere (SOURCE_FILE ("declaration-task.galgas", 368)), var_syncInstruction_13721  COMMA_SOURCE_FILE ("declaration-task.galgas", 368)) ;
  }
  {
  routine_routineSemanticAnalysis (var_taskType_11758, GALGAS_routineKind::constructor_function (GALGAS_mode::constructor_userMode (SOURCE_FILE ("declaration-task.galgas", 372))  COMMA_SOURCE_FILE ("declaration-task.galgas", 372)), GALGAS_mode::constructor_userMode (SOURCE_FILE ("declaration-task.galgas", 373)), GALGAS_lstring::constructor_new (function_llvmNameForTaskLoopFunction (inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 374)), inObject.mProperty_mTaskName.getter_location (HERE)  COMMA_SOURCE_FILE ("declaration-task.galgas", 374)), GALGAS_routineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("declaration-task.galgas", 375)), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-task.galgas", 376)), var_taskListInstructionList_13649, inObject.mProperty_mTaskName.getter_location (HERE), GALGAS_bool (true), GALGAS_bool (true), GALGAS_bool (true), GALGAS_bool (false), constinArgument_inContext, ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct, inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 370)) ;
  }
  {
  ioArgument_ioIntermediateCodeStruct.mProperty_mTaskMapIR.setter_insertKey (inObject.mProperty_mTaskName, var_taskType_11758, inObject.mProperty_mPriority.getter_bigint (HERE), inObject.mProperty_mStackSize.getter_bigint (HERE), var_initAllocaList_12818, var_initInstructionListIR_12784, inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 388)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Extension method '@panicClauseListAST-element enterInContext'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_enterInContext (const GALGAS_panicClauseListAST_2D_element inObject,
                                     GALGAS_semanticContext & ioArgument_ioContext,
                                     C_Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  const enumGalgasBool test_0 = inObject.mProperty_mIsSetup.boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    ioArgument_ioContext.mProperty_mPanicSetupRoutinePriorityMap.setter_insertSetupKey (GALGAS_lstring::constructor_new (inObject.mProperty_mPriority.getter_bigint (HERE).getter_string (SOURCE_FILE ("panic.galgas", 76)), inObject.mProperty_mPriority.getter_location (HERE)  COMMA_SOURCE_FILE ("panic.galgas", 76)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 76)) ;
    }
  }else if (kBoolFalse == test_0) {
    {
    ioArgument_ioContext.mProperty_mPanicLoopRoutinePriorityMap.setter_insertLoopKey (GALGAS_lstring::constructor_new (inObject.mProperty_mPriority.getter_bigint (HERE).getter_string (SOURCE_FILE ("panic.galgas", 78)), inObject.mProperty_mPriority.getter_location (HERE)  COMMA_SOURCE_FILE ("panic.galgas", 78)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 78)) ;
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Extension method '@initList-element enterInContext'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_enterInContext (const GALGAS_initList_2D_element inObject,
                                     GALGAS_semanticContext & ioArgument_ioContext,
                                     C_Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_ioContext.mProperty_mInitRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (inObject.mProperty_mPriority.getter_bigint (HERE).getter_string (SOURCE_FILE ("declaration-init.galgas", 76)), inObject.mProperty_mPriority.getter_location (HERE)  COMMA_SOURCE_FILE ("declaration-init.galgas", 76)), inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 76)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Extension method '@externProcedureDeclarationListAST-element enterExternProcInContext'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_enterExternProcInContext (const GALGAS_externProcedureDeclarationListAST_2D_element inObject,
                                               GALGAS_semanticContext & ioArgument_ioContext,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_routineTypedSignature var_signature_3500 ;
  {
  routine_routineSignature (ioArgument_ioContext.mProperty_mTypeMap, inObject.mProperty_mProcFormalArgumentList, var_signature_3500, inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 79)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_returnType_3620 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeOptionalProxy (ioArgument_ioContext.mProperty_mTypeMap, inObject.mProperty_mReturnTypeName, var_returnType_3620 COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 81)) ;
  }
  {
  extensionSetter_insertKey (ioArgument_ioContext.mProperty_mRoutineMapForContext, inObject.mProperty_mExternProcedureName, extensionGetter_routineSignature (inObject.mProperty_mProcFormalArgumentList, inObject.mProperty_mExternProcedureName.getter_location (SOURCE_FILE ("declaration-extern-proc.galgas", 84)), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 84)), inObject.mProperty_mRoutineNameForGeneration, GALGAS_routineDescriptor::constructor_new (GALGAS_bool (true), GALGAS_bool (false), GALGAS_routineKind::constructor_function (inObject.mProperty_mMode  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 89)), var_signature_3500, var_returnType_3620, GALGAS_bool (false), GALGAS_bool (false)  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 86)), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 82)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Extension method '@externProcedureMapIR-element llvmPrototypeGeneration'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_llvmPrototypeGeneration (const GALGAS_externProcedureMapIR_2D_element inObject,
                                              GALGAS_string & ioArgument_ioLLVMcode,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_procName_7579 = function_llvmNameForFunction (inObject.mProperty_lkey.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 191)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("extern procedure ").add_operation (inObject.mProperty_lkey.getter_string (SOURCE_FILE ("declaration-extern-proc.galgas", 192)), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 192)), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 192)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 192)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("declare"), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 193)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, inObject.mProperty_mReturnType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-extern-proc.galgas", 194)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" void"), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 195)) ;
  }else if (kBoolFalse == test_0) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_llvmTypeName (inObject.mProperty_mReturnType.getter_kind (inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 197)), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 197)), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 197)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 197)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" @").add_operation (var_procName_7579, inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 199)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 199)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 199)) ;
  cEnumerator_routineFormalArgumentListForGeneration enumerator_7919 (inObject.mProperty_mFormalArgumentListForGeneration, kENUMERATION_UP) ;
  while (enumerator_7919.hasCurrentObject ()) {
    switch (enumerator_7919.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_7919.current_mFormalArgumentType (HERE).getter_kind (inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 204)), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 204)).add_operation (GALGAS_string (" %in."), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 204)).add_operation (enumerator_7919.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 204)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 204)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_7919.current_mFormalArgumentType (HERE).getter_kind (inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 206)), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 206)).add_operation (GALGAS_string (" * %"), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 206)).add_operation (function_llvmNameForLocalVariable (enumerator_7919.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 206)), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 206)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 206)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_7919.current_mFormalArgumentType (HERE).getter_kind (inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 208)), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 208)).add_operation (GALGAS_string (" * %"), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 208)).add_operation (function_llvmNameForLocalVariable (enumerator_7919.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 208)), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 208)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 208)) ;
      }
      break ;
    }
    if (enumerator_7919.hasNextObject ()) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 211)) ;
    }
    enumerator_7919.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 213)), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 213)).add_operation (GALGAS_string ("; defined in C\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 213)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 213)) ;
}


//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_guardKind_convenienceGuard::cEnumAssociatedValues_guardKind_convenienceGuard (const GALGAS_callInstructionAST & inAssociatedValue0
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

GALGAS_guardKind GALGAS_guardKind::constructor_convenienceGuard (const GALGAS_callInstructionAST & inAssociatedValue0
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

void GALGAS_guardKind::method_convenienceGuard (GALGAS_callInstructionAST & outAssociatedValue0,
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
//                              Extension method '@guardMapIR-element llvmCodeGeneration'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_llvmCodeGeneration (const GALGAS_guardMapIR_2D_element inObject,
                                         GALGAS_string & ioArgument_ioLLVMcode,
                                         const GALGAS_generationContext constinArgument_inGenerationContext,
                                         GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                         C_Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_guardRoutineName_18118 ;
  switch (inObject.mProperty_mGuardKindGenerationIR.enumValue ()) {
  case GALGAS_guardKindGenerationIR::kNotBuilt:
    break ;
  case GALGAS_guardKindGenerationIR::kEnum_convenienceGuard:
    {
      var_guardRoutineName_18118 = function_llvmNameForGuardCall (inObject.mProperty_lkey.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 468)) ;
    }
    break ;
  case GALGAS_guardKindGenerationIR::kEnum_baseGuard:
    {
      var_guardRoutineName_18118 = function_llvmNameForGuardImplementation (inObject.mProperty_lkey.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 470)) ;
    }
    break ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (var_guardRoutineName_18118, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 472)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 472)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define i1 @").add_operation (var_guardRoutineName_18118, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 473)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 473)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 473)) ;
  GALGAS_string temp_0 ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, inObject.mProperty_mReceiverType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-guard.galgas", 474)))).boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_string::makeEmptyString () ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_string ("$").add_operation (inObject.mProperty_mReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 474)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 474)) ;
  }
  GALGAS_string var_receiverTypeName_18471 = temp_0 ;
  GALGAS_bool var_first_18554 = GALGAS_bool (true) ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_receiverTypeName_18471.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_2) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("%").add_operation (var_receiverTypeName_18471.getter_assemblerRepresentation (SOURCE_FILE ("declaration-guard.galgas", 477)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 477)).add_operation (GALGAS_string (" * %self"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 477)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 477)) ;
    var_first_18554 = GALGAS_bool (false) ;
  }
  cEnumerator_routineFormalArgumentListForGeneration enumerator_18743 (inObject.mProperty_mFormalArgumentListForGeneration, kENUMERATION_UP) ;
  while (enumerator_18743.hasCurrentObject ()) {
    const enumGalgasBool test_3 = var_first_18554.boolEnum () ;
    if (kBoolTrue == test_3) {
      var_first_18554 = GALGAS_bool (false) ;
    }else if (kBoolFalse == test_3) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 484)) ;
    }
    switch (enumerator_18743.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_18743.current_mFormalArgumentType (HERE).getter_kind (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 488)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 488)).add_operation (GALGAS_string (" %in."), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 488)).add_operation (enumerator_18743.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 488)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 488)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_18743.current_mFormalArgumentType (HERE).getter_kind (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 490)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 490)).add_operation (GALGAS_string (" * %"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 490)).add_operation (function_llvmNameForLocalVariable (enumerator_18743.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 490)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 490)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 490)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_18743.current_mFormalArgumentType (HERE).getter_kind (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 492)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 492)).add_operation (GALGAS_string (" * %"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 492)).add_operation (function_llvmNameForLocalVariable (enumerator_18743.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 492)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 492)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 492)) ;
      }
      break ;
    }
    enumerator_18743.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 495)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 495)).add_operation (GALGAS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 495)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 495)) ;
  cEnumerator_allocaList enumerator_19395 (inObject.mProperty_mAllocaList, kENUMERATION_UP) ;
  while (enumerator_19395.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (function_llvmNameForLocalVariable (enumerator_19395.current_mVarName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 498)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 498)).add_operation (GALGAS_string (" = alloca "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 498)).add_operation (enumerator_19395.current_mLLVMTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 498)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 498)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 498)) ;
    enumerator_19395.gotoNextObject () ;
  }
  cEnumerator_routineFormalArgumentListForGeneration enumerator_19586 (inObject.mProperty_mFormalArgumentListForGeneration, kENUMERATION_UP) ;
  while (enumerator_19586.hasCurrentObject ()) {
    switch (enumerator_19586.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        GALGAS_string var_llvmType_19656 = extensionGetter_llvmTypeName (enumerator_19586.current_mFormalArgumentType (HERE).getter_kind (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 504)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 504)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (function_llvmNameForLocalVariable (enumerator_19586.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 505)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 505)).add_operation (GALGAS_string (" = alloca "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 505)).add_operation (var_llvmType_19656, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 505)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 505)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 505)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
      }
      break ;
    }
    enumerator_19586.gotoNextObject () ;
  }
  cEnumerator_routineFormalArgumentListForGeneration enumerator_19899 (inObject.mProperty_mFormalArgumentListForGeneration, kENUMERATION_UP) ;
  while (enumerator_19899.hasCurrentObject ()) {
    switch (enumerator_19899.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        GALGAS_string var_llvmType_19969 = extensionGetter_llvmTypeName (enumerator_19899.current_mFormalArgumentType (HERE).getter_kind (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 512)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 512)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_llvmType_19969, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 513)).add_operation (GALGAS_string (" %in."), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 513)).add_operation (enumerator_19899.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 513)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 513)).add_operation (var_llvmType_19969, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 513)).add_operation (GALGAS_string (" * %"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 514)).add_operation (function_llvmNameForLocalVariable (enumerator_19899.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 514)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 514)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 514)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 513)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
      }
      break ;
    }
    enumerator_19899.gotoNextObject () ;
  }
  GALGAS_string var_accepted_5F_llvmName_20281 = function_llvmNameForLocalVariable (function_acceptVariableName (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 519)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 519)) ;
  GALGAS_string var_accepted_5F_llvmName_5F_loaded_20364 = function_llvmNameForLocalVariable (function_acceptVariableName (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 520)).add_operation (GALGAS_string (".loaded"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 520)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 520)) ;
  GALGAS_string var_accepted_5F_llvmName_5F_true_20457 = function_llvmNameForLocalVariable (function_acceptVariableName (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 521)).add_operation (GALGAS_string (".true"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 521)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 521)) ;
  GALGAS_string var_accepted_5F_llvmName_5F_false_20549 = function_llvmNameForLocalVariable (function_acceptVariableName (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 522)).add_operation (GALGAS_string (".false"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 522)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 522)) ;
  switch (inObject.mProperty_mGuardKindGenerationIR.enumValue ()) {
  case GALGAS_guardKindGenerationIR::kNotBuilt:
    break ;
  case GALGAS_guardKindGenerationIR::kEnum_baseGuard:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store i1 false, i1* %").add_operation (var_accepted_5F_llvmName_20281, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 526)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 526)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 526)) ;
      extensionMethod_instructionListLLVMCode (inObject.mProperty_mInstructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 527)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_accepted_5F_llvmName_5F_loaded_20364, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 528)).add_operation (GALGAS_string (" = load i1, i1* %"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 528)).add_operation (var_accepted_5F_llvmName_20281, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 528)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 528)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 528)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %").add_operation (var_accepted_5F_llvmName_5F_loaded_20364, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 529)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 529)).add_operation (var_accepted_5F_llvmName_5F_true_20457, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 529)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 529)).add_operation (var_accepted_5F_llvmName_5F_false_20549, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 529)).add_operation (GALGAS_string ("\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 529)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 529)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(var_accepted_5F_llvmName_5F_true_20457.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 530)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 530)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @noteGuardHasBeenAccepted ()\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 531)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret i1 true\n"
        "\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 532)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(var_accepted_5F_llvmName_5F_false_20549.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 533)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 533)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret i1 false\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 534)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
        "\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 535)) ;
    }
    break ;
  case GALGAS_guardKindGenerationIR::kEnum_convenienceGuard:
    {
      const cEnumAssociatedValues_guardKindGenerationIR_convenienceGuard * extractPtr_22790 = (const cEnumAssociatedValues_guardKindGenerationIR_convenienceGuard *) (inObject.mProperty_mGuardKindGenerationIR.unsafePointer ()) ;
      const GALGAS_allocaList extractedValue_baseGuardAllocaList = extractPtr_22790->mAssociatedValue0 ;
      const GALGAS_instructionListIR extractedValue_baseGuardInstructionGenerationList = extractPtr_22790->mAssociatedValue1 ;
      const GALGAS_string extractedValue_baseGuardMangledName = extractPtr_22790->mAssociatedValue2 ;
      const GALGAS_procCallEffectiveParameterListIR extractedValue_baseGuardEffectiveParameterList = extractPtr_22790->mAssociatedValue3 ;
      cEnumerator_allocaList enumerator_21583 (extractedValue_baseGuardAllocaList, kENUMERATION_UP) ;
      while (enumerator_21583.hasCurrentObject ()) {
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (function_llvmNameForLocalVariable (enumerator_21583.current_mVarName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 538)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 538)).add_operation (GALGAS_string (" = alloca "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 538)).add_operation (enumerator_21583.current_mLLVMTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 538)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 538)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 538)) ;
        enumerator_21583.gotoNextObject () ;
      }
      extensionMethod_instructionListLLVMCode (extractedValue_baseGuardInstructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 540)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %baseGuard.result = call i1 @").add_operation (function_llvmNameForGuardCall (extractedValue_baseGuardMangledName, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 541)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 541)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 541)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ("), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 542)) ;
      cEnumerator_procCallEffectiveParameterListIR enumerator_21982 (extractedValue_baseGuardEffectiveParameterList, kENUMERATION_UP) ;
      while (enumerator_21982.hasCurrentObject ()) {
        switch (enumerator_21982.current_mEffectiveParameterPassingMode (HERE).enumValue ()) {
        case GALGAS_procEffectiveParameterPassingModeIR::kNotBuilt:
          break ;
        case GALGAS_procEffectiveParameterPassingModeIR::kEnum_input:
          {
            ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_21982.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 546)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 546)).add_operation (extensionGetter_llvmName (enumerator_21982.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 546)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 546)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 546)) ;
          }
          break ;
        case GALGAS_procEffectiveParameterPassingModeIR::kEnum_output:
          {
            ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_21982.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 548)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 548)).add_operation (extensionGetter_llvmName (enumerator_21982.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 548)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 548)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 548)) ;
          }
          break ;
        case GALGAS_procEffectiveParameterPassingModeIR::kEnum_outputInput:
          {
            ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_21982.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 550)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 550)).add_operation (extensionGetter_llvmName (enumerator_21982.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 550)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 550)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 550)) ;
          }
          break ;
        }
        if (enumerator_21982.hasNextObject ()) {
          ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 553)) ;
        }
        enumerator_21982.gotoNextObject () ;
      }
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 555)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %baseGuard.result, label %baseGuard.true, label %baseGuard.exit\n"
        "\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 556)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("baseGuard.true:\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 557)) ;
      extensionMethod_instructionListLLVMCode (inObject.mProperty_mInstructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 558)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret i1 true\n"
        "\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 559)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("baseGuard.exit:\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 560)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret i1 false\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 561)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
        "\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 562)) ;
    }
    break ;
  }
  ioArgument_ioGenerationAdds.mProperty_mExternFunctionDeclarationSet.addAssign_operation (GALGAS_string ("declare void @noteGuardHasBeenAccepted ()\n")  COMMA_SOURCE_FILE ("declaration-guard.galgas", 564)) ;
}


//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_internalRepresentation_standAloneIdentifier::cEnumAssociatedValues_internalRepresentation_standAloneIdentifier (const GALGAS_lstring & inAssociatedValue0
                                                                                                                                      COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_internalRepresentation_standAloneIdentifier::description (C_String & ioString,
                                                                                     const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_internalRepresentation_standAloneIdentifier::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_internalRepresentation_standAloneIdentifier * ptr = dynamic_cast<const cEnumAssociatedValues_internalRepresentation_standAloneIdentifier *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_internalRepresentation_structureProperty::cEnumAssociatedValues_internalRepresentation_structureProperty (const GALGAS_lstring & inAssociatedValue0,
                                                                                                                                const GALGAS_universalPropertyAndRoutineMapForContext & inAssociatedValue1
                                                                                                                                COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_internalRepresentation_structureProperty::description (C_String & ioString,
                                                                                  const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_internalRepresentation_structureProperty::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_internalRepresentation_structureProperty * ptr = dynamic_cast<const cEnumAssociatedValues_internalRepresentation_structureProperty *> (inOperand) ;
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

cEnumAssociatedValues_internalRepresentation_registerBitField::cEnumAssociatedValues_internalRepresentation_registerBitField (const GALGAS_lstring & inAssociatedValue0,
                                                                                                                              const GALGAS_sliceMap & inAssociatedValue1,
                                                                                                                              const GALGAS_uint & inAssociatedValue2,
                                                                                                                              const GALGAS_uint & inAssociatedValue3
                                                                                                                              COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1),
mAssociatedValue2 (inAssociatedValue2),
mAssociatedValue3 (inAssociatedValue3) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_internalRepresentation_registerBitField::description (C_String & ioString,
                                                                                 const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  mAssociatedValue2.description (ioString, inIndentation) ;
  mAssociatedValue3.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_internalRepresentation_registerBitField::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_internalRepresentation_registerBitField * ptr = dynamic_cast<const cEnumAssociatedValues_internalRepresentation_registerBitField *> (inOperand) ;
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

GALGAS_internalRepresentation::GALGAS_internalRepresentation (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_internalRepresentation GALGAS_internalRepresentation::constructor_standAloneIdentifier (const GALGAS_lstring & inAssociatedValue0
                                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_internalRepresentation result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_standAloneIdentifier ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_internalRepresentation_standAloneIdentifier (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_internalRepresentation GALGAS_internalRepresentation::constructor_structureProperty (const GALGAS_lstring & inAssociatedValue0,
                                                                                            const GALGAS_universalPropertyAndRoutineMapForContext & inAssociatedValue1
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_internalRepresentation result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_structureProperty ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_internalRepresentation_structureProperty (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_internalRepresentation GALGAS_internalRepresentation::constructor_registerBitField (const GALGAS_lstring & inAssociatedValue0,
                                                                                           const GALGAS_sliceMap & inAssociatedValue1,
                                                                                           const GALGAS_uint & inAssociatedValue2,
                                                                                           const GALGAS_uint & inAssociatedValue3
                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_internalRepresentation result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid () && inAssociatedValue2.isValid () && inAssociatedValue3.isValid ()) {
    result.mEnum = kEnum_registerBitField ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_internalRepresentation_registerBitField (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2, inAssociatedValue3 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_internalRepresentation::method_standAloneIdentifier (GALGAS_lstring & outAssociatedValue0,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_standAloneIdentifier) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @internalRepresentation standAloneIdentifier invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_internalRepresentation_standAloneIdentifier * ptr = (const cEnumAssociatedValues_internalRepresentation_standAloneIdentifier *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_internalRepresentation::method_structureProperty (GALGAS_lstring & outAssociatedValue0,
                                                              GALGAS_universalPropertyAndRoutineMapForContext & outAssociatedValue1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_structureProperty) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    C_String s ;
    s << "method @internalRepresentation structureProperty invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_internalRepresentation_structureProperty * ptr = (const cEnumAssociatedValues_internalRepresentation_structureProperty *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_internalRepresentation::method_registerBitField (GALGAS_lstring & outAssociatedValue0,
                                                             GALGAS_sliceMap & outAssociatedValue1,
                                                             GALGAS_uint & outAssociatedValue2,
                                                             GALGAS_uint & outAssociatedValue3,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_registerBitField) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    outAssociatedValue2.drop () ;
    outAssociatedValue3.drop () ;
    C_String s ;
    s << "method @internalRepresentation registerBitField invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_internalRepresentation_registerBitField * ptr = (const cEnumAssociatedValues_internalRepresentation_registerBitField *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
    outAssociatedValue3 = ptr->mAssociatedValue3 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * gEnumNameArrayFor_internalRepresentation [4] = {
  "(not built)",
  "standAloneIdentifier",
  "structureProperty",
  "registerBitField"
} ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_internalRepresentation::getter_isStandAloneIdentifier (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_standAloneIdentifier == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_internalRepresentation::getter_isStructureProperty (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_structureProperty == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_internalRepresentation::getter_isRegisterBitField (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_registerBitField == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_internalRepresentation::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "<enum @internalRepresentation: " << gEnumNameArrayFor_internalRepresentation [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_internalRepresentation::objectCompare (const GALGAS_internalRepresentation & inOperand) const {
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
//                                            @internalRepresentation type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_internalRepresentation ("internalRepresentation",
                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_internalRepresentation::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_internalRepresentation ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_internalRepresentation::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_internalRepresentation (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_internalRepresentation GALGAS_internalRepresentation::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_internalRepresentation result ;
  const GALGAS_internalRepresentation * p = (const GALGAS_internalRepresentation *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_internalRepresentation *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("internalRepresentation", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_varAssignmentInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_varAssignmentInstructionAST * p = (const cPtr_varAssignmentInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_varAssignmentInstructionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mAssignmentTargetAST.objectCompare (p->mProperty_mAssignmentTargetAST) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSourceExpression.objectCompare (p->mProperty_mSourceExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_varAssignmentInstructionAST::objectCompare (const GALGAS_varAssignmentInstructionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_varAssignmentInstructionAST::GALGAS_varAssignmentInstructionAST (void) :
GALGAS_instructionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_varAssignmentInstructionAST::GALGAS_varAssignmentInstructionAST (const cPtr_varAssignmentInstructionAST * inSourcePtr) :
GALGAS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_varAssignmentInstructionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_varAssignmentInstructionAST GALGAS_varAssignmentInstructionAST::constructor_new (const GALGAS_assignmentTargetAST & inAttribute_mAssignmentTargetAST,
                                                                                        const GALGAS_expressionAST & inAttribute_mSourceExpression
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_varAssignmentInstructionAST result ;
  if (inAttribute_mAssignmentTargetAST.isValid () && inAttribute_mSourceExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_varAssignmentInstructionAST (inAttribute_mAssignmentTargetAST, inAttribute_mSourceExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_assignmentTargetAST GALGAS_varAssignmentInstructionAST::getter_mAssignmentTargetAST (UNUSED_LOCATION_ARGS) const {
  GALGAS_assignmentTargetAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_varAssignmentInstructionAST * p = (const cPtr_varAssignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varAssignmentInstructionAST) ;
    result = p->mProperty_mAssignmentTargetAST ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_assignmentTargetAST cPtr_varAssignmentInstructionAST::getter_mAssignmentTargetAST (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAssignmentTargetAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST GALGAS_varAssignmentInstructionAST::getter_mSourceExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_varAssignmentInstructionAST * p = (const cPtr_varAssignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varAssignmentInstructionAST) ;
    result = p->mProperty_mSourceExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST cPtr_varAssignmentInstructionAST::getter_mSourceExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSourceExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                Pointer class for @varAssignmentInstructionAST class                                 *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_varAssignmentInstructionAST::cPtr_varAssignmentInstructionAST (const GALGAS_assignmentTargetAST & in_mAssignmentTargetAST,
                                                                    const GALGAS_expressionAST & in_mSourceExpression
                                                                    COMMA_LOCATION_ARGS) :
cPtr_instructionAST (THERE),
mProperty_mAssignmentTargetAST (in_mAssignmentTargetAST),
mProperty_mSourceExpression (in_mSourceExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_varAssignmentInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varAssignmentInstructionAST ;
}

void cPtr_varAssignmentInstructionAST::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "[@varAssignmentInstructionAST:" ;
  mProperty_mAssignmentTargetAST.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSourceExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_varAssignmentInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_varAssignmentInstructionAST (mProperty_mAssignmentTargetAST, mProperty_mSourceExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @varAssignmentInstructionAST type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_varAssignmentInstructionAST ("varAssignmentInstructionAST",
                                                    & kTypeDescriptor_GALGAS_instructionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_varAssignmentInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varAssignmentInstructionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_varAssignmentInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_varAssignmentInstructionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_varAssignmentInstructionAST GALGAS_varAssignmentInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_varAssignmentInstructionAST result ;
  const GALGAS_varAssignmentInstructionAST * p = (const GALGAS_varAssignmentInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_varAssignmentInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("varAssignmentInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Extension method '@routineMapIR-element llvmCodeGeneration'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_llvmCodeGeneration (const GALGAS_routineMapIR_2D_element inObject,
                                         GALGAS_string & ioArgument_ioLLVMcode,
                                         GALGAS_string & /* ioArgument_ioAssemblerCode */,
                                         const GALGAS_generationContext constinArgument_inGenerationContext,
                                         GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                         C_Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_routineName_7210 ;
  switch (inObject.mProperty_mKind.enumValue ()) {
  case GALGAS_routineKind::kNotBuilt:
    break ;
  case GALGAS_routineKind::kEnum_function:
    {
      var_routineName_7210 = function_llvmNameForFunction (inObject.mProperty_mRoutineNameForGeneration.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 191)) ;
    }
    break ;
  case GALGAS_routineKind::kEnum_section:
    {
      var_routineName_7210 = function_llvmNameForSectionImplementation (inObject.mProperty_mRoutineNameForGeneration.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 192)) ;
    }
    break ;
  case GALGAS_routineKind::kEnum_safe:
    {
      var_routineName_7210 = function_llvmNameForSafeImplementation (inObject.mProperty_mRoutineNameForGeneration.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 193)) ;
    }
    break ;
  case GALGAS_routineKind::kEnum_service:
    {
      var_routineName_7210 = function_llvmNameForServiceImplementation (inObject.mProperty_mRoutineNameForGeneration.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 194)) ;
    }
    break ;
  case GALGAS_routineKind::kEnum_primitive:
    {
      var_routineName_7210 = function_llvmNameForPrimitiveImplementation (inObject.mProperty_mRoutineNameForGeneration.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 195)) ;
    }
    break ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (var_routineName_7210, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 197)), inCompiler  COMMA_SOURCE_FILE ("semantic-routines.galgas", 197)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define"), inCompiler  COMMA_SOURCE_FILE ("semantic-routines.galgas", 198)) ;
  const enumGalgasBool test_0 = inObject.mProperty_mGlobal.operator_not (SOURCE_FILE ("semantic-routines.galgas", 199)).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" internal"), inCompiler  COMMA_SOURCE_FILE ("semantic-routines.galgas", 200)) ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, inObject.mProperty_mReturnType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semantic-routines.galgas", 202)))).boolEnum () ;
  if (kBoolTrue == test_1) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" void"), inCompiler  COMMA_SOURCE_FILE ("semantic-routines.galgas", 203)) ;
  }else if (kBoolFalse == test_1) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_llvmTypeName (inObject.mProperty_mReturnType.getter_kind (inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 205)), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 205)), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 205)), inCompiler  COMMA_SOURCE_FILE ("semantic-routines.galgas", 205)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" @").add_operation (var_routineName_7210, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 207)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 207)), inCompiler  COMMA_SOURCE_FILE ("semantic-routines.galgas", 207)) ;
  GALGAS_string temp_2 ;
  const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, inObject.mProperty_mReceiverType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semantic-routines.galgas", 208)))).boolEnum () ;
  if (kBoolTrue == test_3) {
    temp_2 = GALGAS_string::makeEmptyString () ;
  }else if (kBoolFalse == test_3) {
    temp_2 = GALGAS_string ("$").add_operation (inObject.mProperty_mReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 208)), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 208)) ;
  }
  GALGAS_string var_receiverTypeName_8045 = temp_2 ;
  GALGAS_bool var_first_8128 = GALGAS_bool (true) ;
  const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, var_receiverTypeName_8045.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_4) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("%").add_operation (var_receiverTypeName_8045.getter_assemblerRepresentation (SOURCE_FILE ("semantic-routines.galgas", 211)), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 211)).add_operation (GALGAS_string (" * %self"), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 211)), inCompiler  COMMA_SOURCE_FILE ("semantic-routines.galgas", 211)) ;
    var_first_8128 = GALGAS_bool (false) ;
  }
  cEnumerator_routineFormalArgumentListForGeneration enumerator_8317 (inObject.mProperty_mFormalArgumentListForGeneration, kENUMERATION_UP) ;
  while (enumerator_8317.hasCurrentObject ()) {
    const enumGalgasBool test_5 = var_first_8128.boolEnum () ;
    if (kBoolTrue == test_5) {
      var_first_8128 = GALGAS_bool (false) ;
    }else if (kBoolFalse == test_5) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("semantic-routines.galgas", 218)) ;
    }
    switch (enumerator_8317.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_8317.current_mFormalArgumentType (HERE).getter_kind (inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 222)), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 222)).add_operation (GALGAS_string (" %in."), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 222)).add_operation (enumerator_8317.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 222)), inCompiler  COMMA_SOURCE_FILE ("semantic-routines.galgas", 222)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_8317.current_mFormalArgumentType (HERE).getter_kind (inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 224)), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 224)).add_operation (GALGAS_string (" * %"), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 224)).add_operation (function_llvmNameForLocalVariable (enumerator_8317.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 224)), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 224)), inCompiler  COMMA_SOURCE_FILE ("semantic-routines.galgas", 224)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_8317.current_mFormalArgumentType (HERE).getter_kind (inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 226)), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 226)).add_operation (GALGAS_string (" * %"), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 226)).add_operation (function_llvmNameForLocalVariable (enumerator_8317.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 226)), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 226)), inCompiler  COMMA_SOURCE_FILE ("semantic-routines.galgas", 226)) ;
      }
      break ;
    }
    enumerator_8317.gotoNextObject () ;
  }
  GALGAS_bool test_6 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).operator_not (SOURCE_FILE ("semantic-routines.galgas", 229)) ;
  if (kBoolTrue == test_6.boolEnum ()) {
    test_6 = inObject.mProperty_mAppendFileAndLineArgumentForPanicLocation ;
  }
  const enumGalgasBool test_7 = test_6.boolEnum () ;
  if (kBoolTrue == test_7) {
    const enumGalgasBool test_8 = var_first_8128.operator_not (SOURCE_FILE ("semantic-routines.galgas", 230)).boolEnum () ;
    if (kBoolTrue == test_8) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("semantic-routines.galgas", 231)) ;
    }
    ioArgument_ioLLVMcode.plusAssign_operation(constinArgument_inGenerationContext.getter_mPanicLineLLVMType (HERE).add_operation (GALGAS_string (" %LINE, i8* %FILE"), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 233)), inCompiler  COMMA_SOURCE_FILE ("semantic-routines.galgas", 233)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 235)), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 235)).add_operation (GALGAS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 235)), inCompiler  COMMA_SOURCE_FILE ("semantic-routines.galgas", 235)) ;
  const enumGalgasBool test_9 = GALGAS_bool (kIsNotEqual, inObject.mProperty_mReturnType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semantic-routines.galgas", 237)))).boolEnum () ;
  if (kBoolTrue == test_9) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (function_llvmNameForLocalVariable (function_functionResultVariableName (inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 238)), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 238)), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 238)).add_operation (GALGAS_string (" = alloca "), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 238)).add_operation (extensionGetter_llvmTypeName (inObject.mProperty_mReturnType.getter_kind (inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 239)), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 239)), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 239)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 239)), inCompiler  COMMA_SOURCE_FILE ("semantic-routines.galgas", 238)) ;
  }
  cEnumerator_allocaList enumerator_9405 (inObject.mProperty_mAllocaList, kENUMERATION_UP) ;
  while (enumerator_9405.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (function_llvmNameForLocalVariable (enumerator_9405.current_mVarName (HERE), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 242)), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 242)).add_operation (GALGAS_string (" = alloca "), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 242)).add_operation (enumerator_9405.current_mLLVMTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 242)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 242)), inCompiler  COMMA_SOURCE_FILE ("semantic-routines.galgas", 242)) ;
    enumerator_9405.gotoNextObject () ;
  }
  cEnumerator_routineFormalArgumentListForGeneration enumerator_9596 (inObject.mProperty_mFormalArgumentListForGeneration, kENUMERATION_UP) ;
  while (enumerator_9596.hasCurrentObject ()) {
    switch (enumerator_9596.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        GALGAS_string var_llvmType_9666 = extensionGetter_llvmTypeName (enumerator_9596.current_mFormalArgumentType (HERE).getter_kind (inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 248)), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 248)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (function_llvmNameForLocalVariable (enumerator_9596.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 249)), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 249)).add_operation (GALGAS_string (" = alloca "), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 249)).add_operation (var_llvmType_9666, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 249)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 249)), inCompiler  COMMA_SOURCE_FILE ("semantic-routines.galgas", 249)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
      }
      break ;
    }
    enumerator_9596.gotoNextObject () ;
  }
  cEnumerator_routineFormalArgumentListForGeneration enumerator_9909 (inObject.mProperty_mFormalArgumentListForGeneration, kENUMERATION_UP) ;
  while (enumerator_9909.hasCurrentObject ()) {
    switch (enumerator_9909.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        GALGAS_string var_llvmType_9979 = extensionGetter_llvmTypeName (enumerator_9909.current_mFormalArgumentType (HERE).getter_kind (inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 256)), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 256)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_llvmType_9979, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 257)).add_operation (GALGAS_string (" %in."), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 257)).add_operation (enumerator_9909.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 257)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 257)).add_operation (var_llvmType_9979, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 257)).add_operation (GALGAS_string (" * %"), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 257)).add_operation (function_llvmNameForLocalVariable (enumerator_9909.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 258)), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 257)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 258)), inCompiler  COMMA_SOURCE_FILE ("semantic-routines.galgas", 257)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
      }
      break ;
    }
    enumerator_9909.gotoNextObject () ;
  }
  extensionMethod_instructionListLLVMCode (inObject.mProperty_mInstructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 263)) ;
  const enumGalgasBool test_10 = GALGAS_bool (kIsEqual, inObject.mProperty_mReturnType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semantic-routines.galgas", 265)))).boolEnum () ;
  if (kBoolTrue == test_10) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("semantic-routines.galgas", 266)) ;
  }else if (kBoolFalse == test_10) {
    GALGAS_string var_resultVarLLVMName_10482 = GALGAS_string ("%").add_operation (function_llvmNameForLocalVariable (function_functionResultVariableName (inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 268)), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 268)), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 268)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %result = load ").add_operation (extensionGetter_llvmTypeName (inObject.mProperty_mReturnType.getter_kind (inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 269)), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 269)), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 269)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 269)).add_operation (extensionGetter_llvmTypeName (inObject.mProperty_mReturnType.getter_kind (inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 269)), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 269)), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 269)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 269)).add_operation (var_resultVarLLVMName_10482, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 269)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 269)), inCompiler  COMMA_SOURCE_FILE ("semantic-routines.galgas", 269)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret ").add_operation (extensionGetter_llvmTypeName (inObject.mProperty_mReturnType.getter_kind (inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 270)), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 270)), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 270)).add_operation (GALGAS_string (" %result\n"), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 270)), inCompiler  COMMA_SOURCE_FILE ("semantic-routines.galgas", 270)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("semantic-routines.galgas", 272)) ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_interruptionConfigurationList_2D_element::GALGAS_interruptionConfigurationList_2D_element (void) :
mProperty_mInterruptName (),
mProperty_mInterruptionPanicCode () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_interruptionConfigurationList_2D_element::~ GALGAS_interruptionConfigurationList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_interruptionConfigurationList_2D_element::GALGAS_interruptionConfigurationList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                  const GALGAS_interruptionPanicCode & inOperand1) :
mProperty_mInterruptName (inOperand0),
mProperty_mInterruptionPanicCode (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_interruptionConfigurationList_2D_element GALGAS_interruptionConfigurationList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                  const GALGAS_interruptionPanicCode & inOperand1 
                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_interruptionConfigurationList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_interruptionConfigurationList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_interruptionConfigurationList_2D_element::objectCompare (const GALGAS_interruptionConfigurationList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mInterruptName.objectCompare (inOperand.mProperty_mInterruptName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mInterruptionPanicCode.objectCompare (inOperand.mProperty_mInterruptionPanicCode) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_interruptionConfigurationList_2D_element::isValid (void) const {
  return mProperty_mInterruptName.isValid () && mProperty_mInterruptionPanicCode.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_interruptionConfigurationList_2D_element::drop (void) {
  mProperty_mInterruptName.drop () ;
  mProperty_mInterruptionPanicCode.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_interruptionConfigurationList_2D_element::description (C_String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString << "<struct @interruptionConfigurationList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mInterruptName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mInterruptionPanicCode.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_interruptionConfigurationList_2D_element::getter_mInterruptName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInterruptName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_interruptionPanicCode GALGAS_interruptionConfigurationList_2D_element::getter_mInterruptionPanicCode (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInterruptionPanicCode ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @interruptionConfigurationList-element type                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_interruptionConfigurationList_2D_element ("interruptionConfigurationList-element",
                                                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_interruptionConfigurationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_interruptionConfigurationList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_interruptionConfigurationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_interruptionConfigurationList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_interruptionConfigurationList_2D_element GALGAS_interruptionConfigurationList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_interruptionConfigurationList_2D_element result ;
  const GALGAS_interruptionConfigurationList_2D_element * p = (const GALGAS_interruptionConfigurationList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_interruptionConfigurationList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("interruptionConfigurationList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardDeclarationListAST_2D_element::GALGAS_guardDeclarationListAST_2D_element (void) :
mProperty_mGuardName (),
mProperty_mIsPublic (),
mProperty_mGuardAttributeList (),
mProperty_mGuardFormalArgumentList (),
mProperty_mGuardKind (),
mProperty_mGuardInstructionList (),
mProperty_mEndOfGuardDeclaration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardDeclarationListAST_2D_element::~ GALGAS_guardDeclarationListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardDeclarationListAST_2D_element::GALGAS_guardDeclarationListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                      const GALGAS_bool & inOperand1,
                                                                                      const GALGAS_lstringlist & inOperand2,
                                                                                      const GALGAS_routineFormalArgumentList & inOperand3,
                                                                                      const GALGAS_guardKind & inOperand4,
                                                                                      const GALGAS_instructionListAST & inOperand5,
                                                                                      const GALGAS_location & inOperand6) :
mProperty_mGuardName (inOperand0),
mProperty_mIsPublic (inOperand1),
mProperty_mGuardAttributeList (inOperand2),
mProperty_mGuardFormalArgumentList (inOperand3),
mProperty_mGuardKind (inOperand4),
mProperty_mGuardInstructionList (inOperand5),
mProperty_mEndOfGuardDeclaration (inOperand6) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardDeclarationListAST_2D_element GALGAS_guardDeclarationListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                      const GALGAS_bool & inOperand1,
                                                                                                      const GALGAS_lstringlist & inOperand2,
                                                                                                      const GALGAS_routineFormalArgumentList & inOperand3,
                                                                                                      const GALGAS_guardKind & inOperand4,
                                                                                                      const GALGAS_instructionListAST & inOperand5,
                                                                                                      const GALGAS_location & inOperand6 
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_guardDeclarationListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid ()) {
    result = GALGAS_guardDeclarationListAST_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_guardDeclarationListAST_2D_element::objectCompare (const GALGAS_guardDeclarationListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mGuardName.objectCompare (inOperand.mProperty_mGuardName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mIsPublic.objectCompare (inOperand.mProperty_mIsPublic) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mGuardAttributeList.objectCompare (inOperand.mProperty_mGuardAttributeList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mGuardFormalArgumentList.objectCompare (inOperand.mProperty_mGuardFormalArgumentList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mGuardKind.objectCompare (inOperand.mProperty_mGuardKind) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mGuardInstructionList.objectCompare (inOperand.mProperty_mGuardInstructionList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mEndOfGuardDeclaration.objectCompare (inOperand.mProperty_mEndOfGuardDeclaration) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_guardDeclarationListAST_2D_element::isValid (void) const {
  return mProperty_mGuardName.isValid () && mProperty_mIsPublic.isValid () && mProperty_mGuardAttributeList.isValid () && mProperty_mGuardFormalArgumentList.isValid () && mProperty_mGuardKind.isValid () && mProperty_mGuardInstructionList.isValid () && mProperty_mEndOfGuardDeclaration.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guardDeclarationListAST_2D_element::drop (void) {
  mProperty_mGuardName.drop () ;
  mProperty_mIsPublic.drop () ;
  mProperty_mGuardAttributeList.drop () ;
  mProperty_mGuardFormalArgumentList.drop () ;
  mProperty_mGuardKind.drop () ;
  mProperty_mGuardInstructionList.drop () ;
  mProperty_mEndOfGuardDeclaration.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guardDeclarationListAST_2D_element::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "<struct @guardDeclarationListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mGuardName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mIsPublic.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mGuardAttributeList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mGuardFormalArgumentList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mGuardKind.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mGuardInstructionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mEndOfGuardDeclaration.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_guardDeclarationListAST_2D_element::getter_mGuardName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGuardName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_guardDeclarationListAST_2D_element::getter_mIsPublic (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIsPublic ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_guardDeclarationListAST_2D_element::getter_mGuardAttributeList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGuardAttributeList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineFormalArgumentList GALGAS_guardDeclarationListAST_2D_element::getter_mGuardFormalArgumentList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGuardFormalArgumentList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardKind GALGAS_guardDeclarationListAST_2D_element::getter_mGuardKind (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGuardKind ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST GALGAS_guardDeclarationListAST_2D_element::getter_mGuardInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGuardInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_guardDeclarationListAST_2D_element::getter_mEndOfGuardDeclaration (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOfGuardDeclaration ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @guardDeclarationListAST-element type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_guardDeclarationListAST_2D_element ("guardDeclarationListAST-element",
                                                           NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_guardDeclarationListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guardDeclarationListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_guardDeclarationListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_guardDeclarationListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardDeclarationListAST_2D_element GALGAS_guardDeclarationListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_guardDeclarationListAST_2D_element result ;
  const GALGAS_guardDeclarationListAST_2D_element * p = (const GALGAS_guardDeclarationListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_guardDeclarationListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("guardDeclarationListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_availableInterruptMap_2D_element::GALGAS_availableInterruptMap_2D_element (void) :
mProperty_lkey (),
mProperty_mInterruptionPanicCode () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_availableInterruptMap_2D_element::~ GALGAS_availableInterruptMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_availableInterruptMap_2D_element::GALGAS_availableInterruptMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                  const GALGAS_interruptionPanicCode & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mInterruptionPanicCode (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_availableInterruptMap_2D_element GALGAS_availableInterruptMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                  const GALGAS_interruptionPanicCode & inOperand1 
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_availableInterruptMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_availableInterruptMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_availableInterruptMap_2D_element::objectCompare (const GALGAS_availableInterruptMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mInterruptionPanicCode.objectCompare (inOperand.mProperty_mInterruptionPanicCode) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_availableInterruptMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mInterruptionPanicCode.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_availableInterruptMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mInterruptionPanicCode.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_availableInterruptMap_2D_element::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "<struct @availableInterruptMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mInterruptionPanicCode.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_availableInterruptMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_interruptionPanicCode GALGAS_availableInterruptMap_2D_element::getter_mInterruptionPanicCode (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInterruptionPanicCode ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @availableInterruptMap-element type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_availableInterruptMap_2D_element ("availableInterruptMap-element",
                                                         NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_availableInterruptMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_availableInterruptMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_availableInterruptMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_availableInterruptMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_availableInterruptMap_2D_element GALGAS_availableInterruptMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_availableInterruptMap_2D_element result ;
  const GALGAS_availableInterruptMap_2D_element * p = (const GALGAS_availableInterruptMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_availableInterruptMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("availableInterruptMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

C_BoolCommandLineOption gOption_plm_5F_options_emitGlobalConstantHTMLDumpFile ("plm_options",
                                         "emitGlobalConstantHTMLDumpFile",
                                         0,
                                         "emit-global-constant-map",
                                         "Emit global constant map in an HTML file") ;

C_BoolCommandLineOption gOption_plm_5F_options_emitTypeMap ("plm_options",
                                         "emitTypeMap",
                                         116,
                                         "emit-type-map",
                                         "Emit type map in an HTML file") ;

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
                                         "emit-control-register-map",
                                         "Emit control register map in an HTML file") ;

C_BoolCommandLineOption gOption_plm_5F_options_writeDeclarationDependencyGraphFile ("plm_options",
                                         "writeDeclarationDependencyGraphFile",
                                         100,
                                         "emit-declaration-dependency-graph",
                                         "Emit declaration dependency graph file") ;

C_BoolCommandLineOption gOption_plm_5F_options_writeRoutineInvocationGraphFile ("plm_options",
                                         "writeRoutineInvocationGraphFile",
                                         105,
                                         "emit-routine-invocation-graph",
                                         "Emit routine invocation graph file") ;

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
//                       Overriding extension method '@configurationDeclarationAST addExtension'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_configurationDeclarationAST_addExtension (const cPtr_abstractDeclaration * inObject,
                                                                      GALGAS_extensionDeclarationListAST & /* ioArgument_ioExtensionDeclarationListAST */,
                                                                      GALGAS_abstractDeclaration & outArgument_outNewDeclaration,
                                                                      C_Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_configurationDeclarationAST * object = (const cPtr_configurationDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_configurationDeclarationAST) ;
  const GALGAS_configurationDeclarationAST temp_0 = object ;
  outArgument_outNewDeclaration = temp_0 ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_configurationDeclarationAST_addExtension (void) {
  enterExtensionMethod_addExtension (kTypeDescriptor_GALGAS_configurationDeclarationAST.mSlotID,
                                     extensionMethod_configurationDeclarationAST_addExtension) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_configurationDeclarationAST_addExtension (defineExtensionMethod_configurationDeclarationAST_addExtension, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@configurationDeclarationAST enterInPrecedenceGraph'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_configurationDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclaration * inObject,
                                                                                GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_configurationDeclarationAST * object = (const cPtr_configurationDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_configurationDeclarationAST) ;
  GALGAS_lstring var_rootNode_4594 = GALGAS_lstring::constructor_new (GALGAS_string ("config"), object->mProperty_mPanicCodeTypeName.getter_location (HERE)  COMMA_SOURCE_FILE ("configuration.galgas", 121)) ;
  {
  const GALGAS_configurationDeclarationAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (var_rootNode_4594, temp_0, inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 122)) ;
  }
  GALGAS_lstring var_panicCodeTypeName_4713 = function_llvmRegularTypeMangledNameFromName (object->mProperty_mPanicCodeTypeName, inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 123)) ;
  {
  ioArgument_ioGraph.setter_addEdge (var_rootNode_4594, var_panicCodeTypeName_4713 COMMA_SOURCE_FILE ("configuration.galgas", 124)) ;
  }
  GALGAS_lstring var_panicLineTypeName_4847 = function_llvmRegularTypeMangledNameFromName (object->mProperty_mPanicLineTypeName, inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 125)) ;
  {
  ioArgument_ioGraph.setter_addEdge (var_rootNode_4594, var_panicLineTypeName_4847 COMMA_SOURCE_FILE ("configuration.galgas", 126)) ;
  }
  GALGAS_lstring var_unsignedIntegerTypeName_4987 = function_llvmRegularTypeMangledNameFromName (object->mProperty_mUnsignedIntegerTypeName, inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 127)) ;
  {
  ioArgument_ioGraph.setter_addEdge (var_rootNode_4594, var_unsignedIntegerTypeName_4987 COMMA_SOURCE_FILE ("configuration.galgas", 128)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_configurationDeclarationAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_configurationDeclarationAST.mSlotID,
                                               extensionMethod_configurationDeclarationAST_enterInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_configurationDeclarationAST_enterInPrecedenceGraph (defineExtensionMethod_configurationDeclarationAST_enterInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension getter '@configurationDeclarationAST location'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_location extensionGetter_configurationDeclarationAST_location (const cPtr_abstractDeclaration * inObject,
                                                                             C_Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_configurationDeclarationAST * object = (const cPtr_configurationDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_configurationDeclarationAST) ;
  result_outLocation = object->mProperty_mPanicCodeTypeName.getter_location (HERE) ;
//---
  return result_outLocation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_configurationDeclarationAST_location (void) {
  enterExtensionGetter_location (kTypeDescriptor_GALGAS_configurationDeclarationAST.mSlotID,
                                 extensionGetter_configurationDeclarationAST_location) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_configurationDeclarationAST_location (defineExtensionGetter_configurationDeclarationAST_location, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding extension getter '@configurationDeclarationAST keyRepresentationForErrorSignaling'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_configurationDeclarationAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclaration * /* inObject */,
                                                                                                     C_Compiler * /* inCompiler */
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  result_outRepresentation = GALGAS_string ("config") ;
//---
  return result_outRepresentation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_configurationDeclarationAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_configurationDeclarationAST.mSlotID,
                                                           extensionGetter_configurationDeclarationAST_keyRepresentationForErrorSignaling) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_configurationDeclarationAST_keyRepresentationForErrorSignaling (defineExtensionGetter_configurationDeclarationAST_keyRepresentationForErrorSignaling, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@configurationDeclarationAST enterRoutinesInContext'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_configurationDeclarationAST_enterRoutinesInContext (const cPtr_abstractDeclaration * /* inObject */,
                                                                                const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                                GALGAS_semanticContext & /* ioArgument_ioContext */,
                                                                                GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_configurationDeclarationAST_enterRoutinesInContext (void) {
  enterExtensionMethod_enterRoutinesInContext (kTypeDescriptor_GALGAS_configurationDeclarationAST.mSlotID,
                                               extensionMethod_configurationDeclarationAST_enterRoutinesInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_configurationDeclarationAST_enterRoutinesInContext (defineExtensionMethod_configurationDeclarationAST_enterRoutinesInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@configurationDeclarationAST enterInContext'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_configurationDeclarationAST_enterInContext (const cPtr_abstractDeclaration * inObject,
                                                                        const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                        GALGAS_semanticContext & ioArgument_ioContext,
                                                                        GALGAS_staticlistValues_5F_listMap & /* ioArgument_ioStaticListValueMap */,
                                                                        GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_configurationDeclarationAST * object = (const cPtr_configurationDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_configurationDeclarationAST) ;
  GALGAS_stringset var_panicCodeSet_6814 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("configuration.galgas", 163)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, ioArgument_ioContext.getter_mPointerSize (HERE).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mTargetParameters.getter_mPointerSize (HERE).getter_location (SOURCE_FILE ("configuration.galgas", 165)), GALGAS_string ("duplicate configuration"), fixItArray1  COMMA_SOURCE_FILE ("configuration.galgas", 165)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, object->mProperty_mTargetParameters.getter_mPointerSize (HERE).getter_bigint (HERE).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("configuration.galgas", 166)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mProperty_mTargetParameters.getter_mPointerSize (HERE).getter_location (SOURCE_FILE ("configuration.galgas", 167)), GALGAS_string ("zero size pointer not allowed"), fixItArray3  COMMA_SOURCE_FILE ("configuration.galgas", 167)) ;
    }else if (kBoolFalse == test_2) {
      ioArgument_ioContext.mProperty_mPointerSize = object->mProperty_mTargetParameters.getter_mPointerSize (HERE).getter_bigint (HERE).getter_uint (inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 169)) ;
    }
  }
  ioArgument_ioContext.mProperty_mTargetParameters = object->mProperty_mTargetParameters ;
  ioArgument_ioContext.mProperty_mPanicCodeType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), object->mProperty_mPanicCodeTypeName, inCompiler  COMMA_SOURCE_FILE ("configuration.galgas", 172)) ;
  ioArgument_ioContext.mProperty_mPanicLineType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), object->mProperty_mPanicLineTypeName, inCompiler  COMMA_SOURCE_FILE ("configuration.galgas", 173)) ;
  ioArgument_ioContext.mProperty_mUnsignedIntegerType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), object->mProperty_mUnsignedIntegerTypeName, inCompiler  COMMA_SOURCE_FILE ("configuration.galgas", 174)) ;
  ioArgument_ioContext.mProperty_mSectionInvocationScheme = object->mProperty_mTargetParameters.getter_mSectionInvocationScheme (HERE).getter_string (HERE) ;
  cEnumerator_interruptionConfigurationList enumerator_7662 (object->mProperty_mInterruptionConfigurationList, kENUMERATION_UP) ;
  while (enumerator_7662.hasCurrentObject ()) {
    {
    ioArgument_ioContext.mProperty_mAvailableInterruptMap.setter_insertKey (enumerator_7662.current_mInterruptName (HERE), enumerator_7662.current_mInterruptionPanicCode (HERE), inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 177)) ;
    }
    switch (enumerator_7662.current_mInterruptionPanicCode (HERE).enumValue ()) {
    case GALGAS_interruptionPanicCode::kNotBuilt:
      break ;
    case GALGAS_interruptionPanicCode::kEnum_noPanicCode:
      {
      }
      break ;
    case GALGAS_interruptionPanicCode::kEnum_panicCode:
      {
        const cEnumAssociatedValues_interruptionPanicCode_panicCode * extractPtr_7961 = (const cEnumAssociatedValues_interruptionPanicCode_panicCode *) (enumerator_7662.current_mInterruptionPanicCode (HERE).unsafePointer ()) ;
        const GALGAS_lbigint extractedValue_value = extractPtr_7961->mAssociatedValue0 ;
        GALGAS_string var_s_7818 = extractedValue_value.getter_bigint (HERE).getter_string (SOURCE_FILE ("configuration.galgas", 181)) ;
        const enumGalgasBool test_4 = var_panicCodeSet_6814.getter_hasKey (var_s_7818 COMMA_SOURCE_FILE ("configuration.galgas", 182)).boolEnum () ;
        if (kBoolTrue == test_4) {
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (extractedValue_value.getter_location (SOURCE_FILE ("configuration.galgas", 183)), GALGAS_string ("duplicate panic code"), fixItArray5  COMMA_SOURCE_FILE ("configuration.galgas", 183)) ;
        }
        var_panicCodeSet_6814.addAssign_operation (var_s_7818  COMMA_SOURCE_FILE ("configuration.galgas", 185)) ;
      }
      break ;
    }
    enumerator_7662.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_configurationDeclarationAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_configurationDeclarationAST.mSlotID,
                                       extensionMethod_configurationDeclarationAST_enterInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_configurationDeclarationAST_enterInContext (defineExtensionMethod_configurationDeclarationAST_enterInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@configurationDeclarationAST semanticAnalysis'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_configurationDeclarationAST_semanticAnalysis (const cPtr_abstractDeclaration * /* inObject */,
                                                                          const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                          GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                          GALGAS_intermediateCodeStruct & /* ioArgument_ioIntermediateCodeStruct */,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_configurationDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_configurationDeclarationAST.mSlotID,
                                         extensionMethod_configurationDeclarationAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_configurationDeclarationAST_semanticAnalysis (defineExtensionMethod_configurationDeclarationAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Overriding extension getter '@typeArrayDeclaration location'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_location extensionGetter_typeArrayDeclaration_location (const cPtr_abstractDeclaration * inObject,
                                                                      C_Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_typeArrayDeclaration * object = (const cPtr_typeArrayDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_typeArrayDeclaration) ;
  result_outLocation = object->mProperty_mArrayTypeName.getter_location (HERE) ;
//---
  return result_outLocation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_typeArrayDeclaration_location (void) {
  enterExtensionGetter_location (kTypeDescriptor_GALGAS_typeArrayDeclaration.mSlotID,
                                 extensionGetter_typeArrayDeclaration_location) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_typeArrayDeclaration_location (defineExtensionGetter_typeArrayDeclaration_location, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding extension method '@typeArrayDeclaration addExtension'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_typeArrayDeclaration_addExtension (const cPtr_abstractDeclaration * inObject,
                                                               GALGAS_extensionDeclarationListAST & /* ioArgument_ioExtensionDeclarationListAST */,
                                                               GALGAS_abstractDeclaration & outArgument_outNewDeclaration,
                                                               C_Compiler * /* inCompiler */
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_typeArrayDeclaration * object = (const cPtr_typeArrayDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_typeArrayDeclaration) ;
  const GALGAS_typeArrayDeclaration temp_0 = object ;
  outArgument_outNewDeclaration = temp_0 ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_typeArrayDeclaration_addExtension (void) {
  enterExtensionMethod_addExtension (kTypeDescriptor_GALGAS_typeArrayDeclaration.mSlotID,
                                     extensionMethod_typeArrayDeclaration_addExtension) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_typeArrayDeclaration_addExtension (defineExtensionMethod_typeArrayDeclaration_addExtension, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@typeArrayDeclaration enterInPrecedenceGraph'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_typeArrayDeclaration_enterInPrecedenceGraph (const cPtr_abstractDeclaration * inObject,
                                                                         GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_typeArrayDeclaration * object = (const cPtr_typeArrayDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_typeArrayDeclaration) ;
  GALGAS_lstring var_newTypeName_2849 = function_llvmRegularTypeMangledNameFromName (object->mProperty_mArrayTypeName, inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 60)) ;
  GALGAS_lstring var_elementTypeName_2926 = function_llvmRegularTypeMangledNameFromName (object->mProperty_mElementTypeName, inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 61)) ;
  {
  const GALGAS_typeArrayDeclaration temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (var_newTypeName_2849, temp_0, inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 62)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_newTypeName_2849, var_elementTypeName_2926 COMMA_SOURCE_FILE ("type-array.galgas", 63)) ;
  }
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mProperty_mSizeExpression.ptr (), var_newTypeName_2849, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 64)) ;
  GALGAS_lstring var_rootNode_3171 = GALGAS_lstring::constructor_new (GALGAS_string ("config"), object->mProperty_mArrayTypeName.getter_location (HERE)  COMMA_SOURCE_FILE ("type-array.galgas", 65)) ;
  {
  ioArgument_ioGraph.setter_addEdge (var_newTypeName_2849, var_rootNode_3171 COMMA_SOURCE_FILE ("type-array.galgas", 66)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_typeArrayDeclaration_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_typeArrayDeclaration.mSlotID,
                                               extensionMethod_typeArrayDeclaration_enterInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_typeArrayDeclaration_enterInPrecedenceGraph (defineExtensionMethod_typeArrayDeclaration_enterInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension getter '@typeArrayDeclaration keyRepresentationForErrorSignaling'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_typeArrayDeclaration_keyRepresentationForErrorSignaling (const cPtr_abstractDeclaration * inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_typeArrayDeclaration * object = (const cPtr_typeArrayDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_typeArrayDeclaration) ;
  result_outRepresentation = GALGAS_string ("arraytype $").add_operation (object->mProperty_mArrayTypeName.getter_string (SOURCE_FILE ("type-array.galgas", 72)), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 72)) ;
//---
  return result_outRepresentation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_typeArrayDeclaration_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_typeArrayDeclaration.mSlotID,
                                                           extensionGetter_typeArrayDeclaration_keyRepresentationForErrorSignaling) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_typeArrayDeclaration_keyRepresentationForErrorSignaling (defineExtensionGetter_typeArrayDeclaration_keyRepresentationForErrorSignaling, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@typeArrayDeclaration enterRoutinesInContext'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_typeArrayDeclaration_enterRoutinesInContext (const cPtr_abstractDeclaration * /* inObject */,
                                                                         const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                         GALGAS_semanticContext & /* ioArgument_ioContext */,
                                                                         GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                         C_Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_typeArrayDeclaration_enterRoutinesInContext (void) {
  enterExtensionMethod_enterRoutinesInContext (kTypeDescriptor_GALGAS_typeArrayDeclaration.mSlotID,
                                               extensionMethod_typeArrayDeclaration_enterRoutinesInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_typeArrayDeclaration_enterRoutinesInContext (defineExtensionMethod_typeArrayDeclaration_enterRoutinesInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@typeArrayDeclaration enterInContext'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_typeArrayDeclaration_enterInContext (const cPtr_abstractDeclaration * inObject,
                                                                 const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                 GALGAS_semanticContext & ioArgument_ioContext,
                                                                 GALGAS_staticlistValues_5F_listMap & /* ioArgument_ioStaticListValueMap */,
                                                                 GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_typeArrayDeclaration * object = (const cPtr_typeArrayDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_typeArrayDeclaration) ;
  GALGAS_typeKind var_kind_4731 ;
  ioArgument_ioContext.getter_mTypeMap (HERE).method_searchKey (object->mProperty_mElementTypeName, var_kind_4731, inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 95)) ;
  const enumGalgasBool test_0 = extensionGetter_copyable (var_kind_4731, inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 99)).operator_not (SOURCE_FILE ("type-array.galgas", 99)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mElementTypeName.getter_location (SOURCE_FILE ("type-array.galgas", 100)), GALGAS_string ("an array element should be copyable"), fixItArray1  COMMA_SOURCE_FILE ("type-array.galgas", 100)) ;
  }
  const enumGalgasBool test_2 = extensionGetter_instanciable (var_kind_4731, inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 102)).operator_not (SOURCE_FILE ("type-array.galgas", 102)).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mProperty_mElementTypeName.getter_location (SOURCE_FILE ("type-array.galgas", 103)), GALGAS_string ("an array element should be instanciable"), fixItArray3  COMMA_SOURCE_FILE ("type-array.galgas", 103)) ;
  }
  GALGAS_instructionListIR var_initInstructionGenerationList_5024 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("type-array.galgas", 106)) ;
  GALGAS_allocaList var_allocaList_5054 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("type-array.galgas", 107)) ;
  GALGAS_semanticTemporariesStruct var_temporaries_5100 = GALGAS_semanticTemporariesStruct::constructor_default (SOURCE_FILE ("type-array.galgas", 108)) ;
  GALGAS_unifiedSymbolMap var_variableMap_5198 ;
  GALGAS_universalPropertyAndRoutineMapForContext var_universalMap_5258 ;
  {
  routine_variableMapWithConstants (ioArgument_ioContext, var_variableMap_5198, var_universalMap_5258, inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 109)) ;
  }
  GALGAS_staticStringMap joker_5601 = GALGAS_staticStringMap::constructor_emptyMap (SOURCE_FILE ("type-array.galgas", 123)) ;
  GALGAS_objectIR var_sizeExpressionIR_5780 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mSizeExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-array.galgas", 115)), GALGAS_bool (false), GALGAS_bool (false), GALGAS_lstring::constructor_new (object->mProperty_mArrayTypeName.getter_string (HERE).add_operation (GALGAS_string (" init"), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 118)), object->mProperty_mArrayTypeName.getter_location (HERE)  COMMA_SOURCE_FILE ("type-array.galgas", 118)), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-array.galgas", 119)), ioArgument_ioContext, GALGAS_mode::constructor_bootMode (SOURCE_FILE ("type-array.galgas", 121)), var_temporaries_5100, joker_5601, var_variableMap_5198, var_universalMap_5258, var_allocaList_5054, var_initInstructionGenerationList_5024, var_sizeExpressionIR_5780, inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 114)) ;
  GALGAS_bool test_4 = GALGAS_bool (kIsStrictSup, var_allocaList_5054.getter_length (SOURCE_FILE ("type-array.galgas", 130)).add_operation (var_initInstructionGenerationList_5024.getter_length (SOURCE_FILE ("type-array.galgas", 130)), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 130)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  if (kBoolTrue != test_4.boolEnum ()) {
    test_4 = var_sizeExpressionIR_5780.getter_isLiteralInteger (SOURCE_FILE ("type-array.galgas", 130)).operator_not (SOURCE_FILE ("type-array.galgas", 130)) ;
  }
  const enumGalgasBool test_5 = test_4.boolEnum () ;
  if (kBoolTrue == test_5) {
    TC_Array <C_FixItDescription> fixItArray6 ;
    inCompiler->emitSemanticError (object->mProperty_mSizeExpressionLocation, GALGAS_string ("array size expression is not static"), fixItArray6  COMMA_SOURCE_FILE ("type-array.galgas", 131)) ;
  }else if (kBoolFalse == test_5) {
    GALGAS_bigint var_arraySize_6049 ;
    GALGAS_unifiedTypeMap_2D_proxy joker_6026_1 ; // Joker input parameter
    var_sizeExpressionIR_5780.method_literalInteger (joker_6026_1, var_arraySize_6049, inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 133)) ;
    GALGAS_unifiedTypeMap_2D_proxy var_elementType_6070 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), object->mProperty_mElementTypeName, inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 134)) ;
    GALGAS_classConstantMap var_classConstantMap_6227 = GALGAS_classConstantMap::constructor_emptyMap (SOURCE_FILE ("type-array.galgas", 136)) ;
    {
    var_classConstantMap_6227.setter_insertKey (GALGAS_string ("size").getter_nowhere (SOURCE_FILE ("type-array.galgas", 137)), var_sizeExpressionIR_5780, inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 137)) ;
    }
    {
    ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (object->mProperty_mArrayTypeName, GALGAS_typeKind::constructor_arrayType (object->mProperty_mArrayTypeName, var_elementType_6070, var_arraySize_6049, var_classConstantMap_6227, function_instanciableFlag (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 146)).operator_or (function_copyableFlag (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 146)) COMMA_SOURCE_FILE ("type-array.galgas", 146))  COMMA_SOURCE_FILE ("type-array.galgas", 141)), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 139)) ;
    }
    {
    ioArgument_ioContext.mProperty_mConstructorMap.setter_insertKey (object->mProperty_mArrayTypeName, GALGAS_constructorValue::constructor_zero (SOURCE_FILE ("type-array.galgas", 152)), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 150)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_typeArrayDeclaration_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_typeArrayDeclaration.mSlotID,
                                       extensionMethod_typeArrayDeclaration_enterInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_typeArrayDeclaration_enterInContext (defineExtensionMethod_typeArrayDeclaration_enterInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@typeArrayDeclaration semanticAnalysis'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_typeArrayDeclaration_semanticAnalysis (const cPtr_abstractDeclaration * /* inObject */,
                                                                   const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                   GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                   GALGAS_intermediateCodeStruct & /* ioArgument_ioIntermediateCodeStruct */,
                                                                   C_Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_typeArrayDeclaration_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_typeArrayDeclaration.mSlotID,
                                         extensionMethod_typeArrayDeclaration_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_typeArrayDeclaration_semanticAnalysis (defineExtensionMethod_typeArrayDeclaration_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Overriding extension getter '@booleanDeclaration location'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_location extensionGetter_booleanDeclaration_location (const cPtr_abstractDeclaration * inObject,
                                                                    C_Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_booleanDeclaration * object = (const cPtr_booleanDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_booleanDeclaration) ;
  result_outLocation = object->mProperty_mBooleanTypeName.getter_location (HERE) ;
//---
  return result_outLocation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_booleanDeclaration_location (void) {
  enterExtensionGetter_location (kTypeDescriptor_GALGAS_booleanDeclaration.mSlotID,
                                 extensionGetter_booleanDeclaration_location) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_booleanDeclaration_location (defineExtensionGetter_booleanDeclaration_location, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding extension method '@booleanDeclaration addExtension'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_booleanDeclaration_addExtension (const cPtr_abstractDeclaration * inObject,
                                                             GALGAS_extensionDeclarationListAST & /* ioArgument_ioExtensionDeclarationListAST */,
                                                             GALGAS_abstractDeclaration & outArgument_outNewDeclaration,
                                                             C_Compiler * /* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_booleanDeclaration * object = (const cPtr_booleanDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_booleanDeclaration) ;
  const GALGAS_booleanDeclaration temp_0 = object ;
  outArgument_outNewDeclaration = temp_0 ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_booleanDeclaration_addExtension (void) {
  enterExtensionMethod_addExtension (kTypeDescriptor_GALGAS_booleanDeclaration.mSlotID,
                                     extensionMethod_booleanDeclaration_addExtension) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_booleanDeclaration_addExtension (defineExtensionMethod_booleanDeclaration_addExtension, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@booleanDeclaration enterInPrecedenceGraph'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_booleanDeclaration_enterInPrecedenceGraph (const cPtr_abstractDeclaration * inObject,
                                                                       GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_booleanDeclaration * object = (const cPtr_booleanDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_booleanDeclaration) ;
  GALGAS_lstring var_boolTypeName_1725 = function_llvmRegularTypeMangledNameFromName (object->mProperty_mBooleanTypeName, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 33)) ;
  {
  const GALGAS_booleanDeclaration temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (var_boolTypeName_1725, temp_0, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 34)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_booleanDeclaration_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_booleanDeclaration.mSlotID,
                                               extensionMethod_booleanDeclaration_enterInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_booleanDeclaration_enterInPrecedenceGraph (defineExtensionMethod_booleanDeclaration_enterInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension getter '@booleanDeclaration keyRepresentationForErrorSignaling'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_booleanDeclaration_keyRepresentationForErrorSignaling (const cPtr_abstractDeclaration * inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_booleanDeclaration * object = (const cPtr_booleanDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_booleanDeclaration) ;
  result_outRepresentation = GALGAS_string ("bool ").add_operation (function_llvmRegularTypeMangledNameFromName (object->mProperty_mBooleanTypeName, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 40)).getter_string (SOURCE_FILE ("type-bool.galgas", 40)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 40)) ;
//---
  return result_outRepresentation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_booleanDeclaration_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_booleanDeclaration.mSlotID,
                                                           extensionGetter_booleanDeclaration_keyRepresentationForErrorSignaling) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_booleanDeclaration_keyRepresentationForErrorSignaling (defineExtensionGetter_booleanDeclaration_keyRepresentationForErrorSignaling, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding extension method '@booleanDeclaration enterInContext'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_booleanDeclaration_enterInContext (const cPtr_abstractDeclaration * inObject,
                                                               const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                               GALGAS_semanticContext & ioArgument_ioContext,
                                                               GALGAS_staticlistValues_5F_listMap & /* ioArgument_ioStaticListValueMap */,
                                                               GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_booleanDeclaration * object = (const cPtr_booleanDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_booleanDeclaration) ;
  {
  ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (object->mProperty_mBooleanTypeName, GALGAS_typeKind::constructor_boolean (SOURCE_FILE ("type-bool.galgas", 54)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 54)) ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, ioArgument_ioContext.getter_mBooleanType (HERE).objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-bool.galgas", 56)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mBooleanTypeName.getter_location (SOURCE_FILE ("type-bool.galgas", 57)), GALGAS_string ("Boolean type already defined"), fixItArray1  COMMA_SOURCE_FILE ("type-bool.galgas", 57)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_boolType_3071 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), object->mProperty_mBooleanTypeName, inCompiler  COMMA_SOURCE_FILE ("type-bool.galgas", 59)) ;
  ioArgument_ioContext.mProperty_mBooleanType = var_boolType_3071 ;
  {
  routine_enterBooleanOperators (object->mProperty_mBooleanTypeName, ioArgument_ioContext, inCompiler  COMMA_SOURCE_FILE ("type-bool.galgas", 62)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_booleanDeclaration_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_booleanDeclaration.mSlotID,
                                       extensionMethod_booleanDeclaration_enterInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_booleanDeclaration_enterInContext (defineExtensionMethod_booleanDeclaration_enterInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@booleanDeclaration enterRoutinesInContext'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_booleanDeclaration_enterRoutinesInContext (const cPtr_abstractDeclaration * /* inObject */,
                                                                       const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                       GALGAS_semanticContext & /* ioArgument_ioContext */,
                                                                       GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                       C_Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_booleanDeclaration_enterRoutinesInContext (void) {
  enterExtensionMethod_enterRoutinesInContext (kTypeDescriptor_GALGAS_booleanDeclaration.mSlotID,
                                               extensionMethod_booleanDeclaration_enterRoutinesInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_booleanDeclaration_enterRoutinesInContext (defineExtensionMethod_booleanDeclaration_enterRoutinesInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Routine 'enterBooleanOperators'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterBooleanOperators (GALGAS_lstring inArgument_inBooleanTypeName,
                                    GALGAS_semanticContext & ioArgument_ioContext,
                                    C_Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_proxy var_selfTypeProxy_3950 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), inArgument_inBooleanTypeName, inCompiler  COMMA_SOURCE_FILE ("type-bool.galgas", 83)) ;
  GALGAS_lstring var_boolBoolOp_4042 = function_combineTypeNamesForInfixOperator (inArgument_inBooleanTypeName.getter_string (HERE), inArgument_inBooleanTypeName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 84)) ;
  {
  ioArgument_ioContext.mProperty_mEqualOperatorMap.setter_insertKey (var_boolBoolOp_4042, var_selfTypeProxy_3950, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_eq (SOURCE_FILE ("type-bool.galgas", 88))  COMMA_SOURCE_FILE ("type-bool.galgas", 88)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 85)) ;
  }
  {
  ioArgument_ioContext.mProperty_mNonEqualOperatorMap.setter_insertKey (var_boolBoolOp_4042, var_selfTypeProxy_3950, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ne (SOURCE_FILE ("type-bool.galgas", 93))  COMMA_SOURCE_FILE ("type-bool.galgas", 93)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 90)) ;
  }
  {
  ioArgument_ioContext.mProperty_mStrictInfOperatorMap.setter_insertKey (var_boolBoolOp_4042, var_selfTypeProxy_3950, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ult (SOURCE_FILE ("type-bool.galgas", 98))  COMMA_SOURCE_FILE ("type-bool.galgas", 98)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 95)) ;
  }
  {
  ioArgument_ioContext.mProperty_mInfEqualOperatorMap.setter_insertKey (var_boolBoolOp_4042, var_selfTypeProxy_3950, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ule (SOURCE_FILE ("type-bool.galgas", 103))  COMMA_SOURCE_FILE ("type-bool.galgas", 103)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 100)) ;
  }
  {
  ioArgument_ioContext.mProperty_mStrictSupOperatorMap.setter_insertKey (var_boolBoolOp_4042, var_selfTypeProxy_3950, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ugt (SOURCE_FILE ("type-bool.galgas", 108))  COMMA_SOURCE_FILE ("type-bool.galgas", 108)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 105)) ;
  }
  {
  ioArgument_ioContext.mProperty_mSupEqualOperatorMap.setter_insertKey (var_boolBoolOp_4042, var_selfTypeProxy_3950, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_uge (SOURCE_FILE ("type-bool.galgas", 113))  COMMA_SOURCE_FILE ("type-bool.galgas", 113)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 110)) ;
  }
  {
  ioArgument_ioContext.mProperty_mBooleanXorOperatorMap.setter_insertKey (var_boolBoolOp_4042, var_selfTypeProxy_3950, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_xor (SOURCE_FILE ("type-bool.galgas", 118))  COMMA_SOURCE_FILE ("type-bool.galgas", 118)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 115)) ;
  }
  {
  ioArgument_ioContext.mProperty_mNotOperatorMap.setter_insertKey (inArgument_inBooleanTypeName, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 120)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@booleanDeclaration semanticAnalysis'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_booleanDeclaration_semanticAnalysis (const cPtr_abstractDeclaration * /* inObject */,
                                                                 const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                 GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                 GALGAS_intermediateCodeStruct & /* ioArgument_ioIntermediateCodeStruct */,
                                                                 C_Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_booleanDeclaration_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_booleanDeclaration.mSlotID,
                                         extensionMethod_booleanDeclaration_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_booleanDeclaration_semanticAnalysis (defineExtensionMethod_booleanDeclaration_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding extension getter '@enumerationDeclaration location'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_location extensionGetter_enumerationDeclaration_location (const cPtr_abstractDeclaration * inObject,
                                                                        C_Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_enumerationDeclaration * object = (const cPtr_enumerationDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_enumerationDeclaration) ;
  result_outLocation = object->mProperty_mEnumerationName.getter_location (HERE) ;
//---
  return result_outLocation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_enumerationDeclaration_location (void) {
  enterExtensionGetter_location (kTypeDescriptor_GALGAS_enumerationDeclaration.mSlotID,
                                 extensionGetter_enumerationDeclaration_location) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_enumerationDeclaration_location (defineExtensionGetter_enumerationDeclaration_location, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@enumerationDeclaration addExtension'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_enumerationDeclaration_addExtension (const cPtr_abstractDeclaration * inObject,
                                                                 GALGAS_extensionDeclarationListAST & /* ioArgument_ioExtensionDeclarationListAST */,
                                                                 GALGAS_abstractDeclaration & outArgument_outNewDeclaration,
                                                                 C_Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumerationDeclaration * object = (const cPtr_enumerationDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_enumerationDeclaration) ;
  const GALGAS_enumerationDeclaration temp_0 = object ;
  outArgument_outNewDeclaration = temp_0 ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_enumerationDeclaration_addExtension (void) {
  enterExtensionMethod_addExtension (kTypeDescriptor_GALGAS_enumerationDeclaration.mSlotID,
                                     extensionMethod_enumerationDeclaration_addExtension) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_enumerationDeclaration_addExtension (defineExtensionMethod_enumerationDeclaration_addExtension, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@enumerationDeclaration enterInPrecedenceGraph'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_enumerationDeclaration_enterInPrecedenceGraph (const cPtr_abstractDeclaration * inObject,
                                                                           GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumerationDeclaration * object = (const cPtr_enumerationDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_enumerationDeclaration) ;
  GALGAS_lstring var_typeName_2952 = function_llvmRegularTypeMangledNameFromName (object->mProperty_mEnumerationName, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 72)) ;
  {
  const GALGAS_enumerationDeclaration temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (var_typeName_2952, temp_0, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 73)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_typeName_2952, function_llvmRegularTypeMangledNameFromName (function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 74)).getter_nowhere (SOURCE_FILE ("type-enumeration-declaration.galgas", 74)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 74)) COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 74)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_enumerationDeclaration_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_enumerationDeclaration.mSlotID,
                                               extensionMethod_enumerationDeclaration_enterInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_enumerationDeclaration_enterInPrecedenceGraph (defineExtensionMethod_enumerationDeclaration_enterInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension getter '@enumerationDeclaration keyRepresentationForErrorSignaling'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_enumerationDeclaration_keyRepresentationForErrorSignaling (const cPtr_abstractDeclaration * inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_enumerationDeclaration * object = (const cPtr_enumerationDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_enumerationDeclaration) ;
  result_outRepresentation = GALGAS_string ("enum $").add_operation (object->mProperty_mEnumerationName.getter_string (SOURCE_FILE ("type-enumeration-declaration.galgas", 80)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 80)) ;
//---
  return result_outRepresentation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_enumerationDeclaration_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_enumerationDeclaration.mSlotID,
                                                           extensionGetter_enumerationDeclaration_keyRepresentationForErrorSignaling) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_enumerationDeclaration_keyRepresentationForErrorSignaling (defineExtensionGetter_enumerationDeclaration_keyRepresentationForErrorSignaling, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@enumerationDeclaration enterInContext'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_enumerationDeclaration_enterInContext (const cPtr_abstractDeclaration * inObject,
                                                                   const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                   GALGAS_semanticContext & ioArgument_ioContext,
                                                                   GALGAS_staticlistValues_5F_listMap & /* ioArgument_ioStaticListValueMap */,
                                                                   GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumerationDeclaration * object = (const cPtr_enumerationDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_enumerationDeclaration) ;
  GALGAS_unifiedTypeMap_2D_proxy var_selfType_4509 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioContext.mProperty_mTypeMap, object->mProperty_mEnumerationName, var_selfType_4509 COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 102)) ;
  }
  GALGAS_enumConstantMap var_enumConstantMap_4545 = GALGAS_enumConstantMap::constructor_emptyMap (SOURCE_FILE ("type-enumeration-declaration.galgas", 103)) ;
  GALGAS_classConstantMap var_classConstantMap_4587 = GALGAS_classConstantMap::constructor_emptyMap (SOURCE_FILE ("type-enumeration-declaration.galgas", 104)) ;
  cEnumerator_lstringlist enumerator_4621 (object->mProperty_mCaseNameList, kENUMERATION_UP) ;
  while (enumerator_4621.hasCurrentObject ()) {
    GALGAS_uint var_idx_4636 = var_enumConstantMap_4545.getter_count (SOURCE_FILE ("type-enumeration-declaration.galgas", 106)) ;
    {
    var_enumConstantMap_4545.setter_insertKey (enumerator_4621.current_mValue (HERE), var_idx_4636, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 107)) ;
    }
    {
    var_classConstantMap_4587.setter_insertKey (enumerator_4621.current_mValue (HERE), GALGAS_objectIR::constructor_literalInteger (var_selfType_4509, var_idx_4636.getter_bigint (SOURCE_FILE ("type-enumeration-declaration.galgas", 108))  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 108)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 108)) ;
    }
    enumerator_4621.gotoNextObject () ;
  }
  {
  ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (object->mProperty_mEnumerationName, GALGAS_typeKind::constructor_enumeration (var_enumConstantMap_4545, var_classConstantMap_4587  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 112)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 110)) ;
  }
  {
  routine_enterEnumerationOperators (object->mProperty_mEnumerationName, ioArgument_ioContext, inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 115)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_enumerationDeclaration_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_enumerationDeclaration.mSlotID,
                                       extensionMethod_enumerationDeclaration_enterInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_enumerationDeclaration_enterInContext (defineExtensionMethod_enumerationDeclaration_enterInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@enumerationDeclaration enterRoutinesInContext'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_enumerationDeclaration_enterRoutinesInContext (const cPtr_abstractDeclaration * /* inObject */,
                                                                           const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                           GALGAS_semanticContext & /* ioArgument_ioContext */,
                                                                           GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                           C_Compiler * /* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_enumerationDeclaration_enterRoutinesInContext (void) {
  enterExtensionMethod_enterRoutinesInContext (kTypeDescriptor_GALGAS_enumerationDeclaration.mSlotID,
                                               extensionMethod_enumerationDeclaration_enterRoutinesInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_enumerationDeclaration_enterRoutinesInContext (defineExtensionMethod_enumerationDeclaration_enterRoutinesInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Routine 'enterEnumerationOperators'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterEnumerationOperators (GALGAS_lstring inArgument_inEnumerationTypeName,
                                        GALGAS_semanticContext & ioArgument_ioContext,
                                        C_Compiler * inCompiler
                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring var_key_5727 = function_combineTypeNamesForInfixOperator (inArgument_inEnumerationTypeName.getter_string (HERE), inArgument_inEnumerationTypeName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 136)) ;
  {
  ioArgument_ioContext.mProperty_mEqualOperatorMap.setter_insertKey (var_key_5727, ioArgument_ioContext.getter_mBooleanType (HERE), GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_eq (SOURCE_FILE ("type-enumeration-declaration.galgas", 140))  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 140)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 137)) ;
  }
  {
  ioArgument_ioContext.mProperty_mNonEqualOperatorMap.setter_insertKey (var_key_5727, ioArgument_ioContext.getter_mBooleanType (HERE), GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ne (SOURCE_FILE ("type-enumeration-declaration.galgas", 145))  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 145)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 142)) ;
  }
  {
  ioArgument_ioContext.mProperty_mStrictInfOperatorMap.setter_insertKey (var_key_5727, ioArgument_ioContext.getter_mBooleanType (HERE), GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ult (SOURCE_FILE ("type-enumeration-declaration.galgas", 150))  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 150)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 147)) ;
  }
  {
  ioArgument_ioContext.mProperty_mInfEqualOperatorMap.setter_insertKey (var_key_5727, ioArgument_ioContext.getter_mBooleanType (HERE), GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ule (SOURCE_FILE ("type-enumeration-declaration.galgas", 155))  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 155)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 152)) ;
  }
  {
  ioArgument_ioContext.mProperty_mStrictSupOperatorMap.setter_insertKey (var_key_5727, ioArgument_ioContext.getter_mBooleanType (HERE), GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ugt (SOURCE_FILE ("type-enumeration-declaration.galgas", 160))  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 160)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 157)) ;
  }
  {
  ioArgument_ioContext.mProperty_mSupEqualOperatorMap.setter_insertKey (var_key_5727, ioArgument_ioContext.getter_mBooleanType (HERE), GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_uge (SOURCE_FILE ("type-enumeration-declaration.galgas", 165))  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 165)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 162)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@enumerationDeclaration semanticAnalysis'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_enumerationDeclaration_semanticAnalysis (const cPtr_abstractDeclaration * /* inObject */,
                                                                     const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                     GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                     GALGAS_intermediateCodeStruct & /* ioArgument_ioIntermediateCodeStruct */,
                                                                     C_Compiler * /* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_enumerationDeclaration_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_enumerationDeclaration.mSlotID,
                                         extensionMethod_enumerationDeclaration_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_enumerationDeclaration_semanticAnalysis (defineExtensionMethod_enumerationDeclaration_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Overriding extension getter '@structureDeclaration location'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_location extensionGetter_structureDeclaration_location (const cPtr_abstractDeclaration * inObject,
                                                                      C_Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_structureDeclaration * object = (const cPtr_structureDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_structureDeclaration) ;
  result_outLocation = object->mProperty_mStructureName.getter_location (HERE) ;
//---
  return result_outLocation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_structureDeclaration_location (void) {
  enterExtensionGetter_location (kTypeDescriptor_GALGAS_structureDeclaration.mSlotID,
                                 extensionGetter_structureDeclaration_location) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_structureDeclaration_location (defineExtensionGetter_structureDeclaration_location, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding extension method '@structureDeclaration addExtension'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_structureDeclaration_addExtension (const cPtr_abstractDeclaration * inObject,
                                                               GALGAS_extensionDeclarationListAST & ioArgument_ioExtensionDeclarationListAST,
                                                               GALGAS_abstractDeclaration & outArgument_outNewDeclaration,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_structureDeclaration * object = (const cPtr_structureDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_structureDeclaration) ;
  const GALGAS_structureDeclaration temp_0 = object ;
  GALGAS_structureDeclaration var_newDeclaration_4322 = temp_0 ;
  GALGAS_extensionDeclarationListAST var_currentExtensionDeclarationListAST_4370 = ioArgument_ioExtensionDeclarationListAST ;
  ioArgument_ioExtensionDeclarationListAST = GALGAS_extensionDeclarationListAST::constructor_emptyList (SOURCE_FILE ("type-structure-declaration.galgas", 123)) ;
  cEnumerator_extensionDeclarationListAST enumerator_4527 (var_currentExtensionDeclarationListAST_4370, kENUMERATION_UP) ;
  while (enumerator_4527.hasCurrentObject ()) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, object->mProperty_mStructureName.getter_string (HERE).objectCompare (enumerator_4527.current_mTypeName (HERE).getter_string (HERE))).boolEnum () ;
    if (kBoolTrue == test_1) {
      var_newDeclaration_4322 = GALGAS_structureDeclaration::constructor_new (var_newDeclaration_4322.getter_mStructureName (SOURCE_FILE ("type-structure-declaration.galgas", 127)), var_newDeclaration_4322.getter_mAttributeListAST (SOURCE_FILE ("type-structure-declaration.galgas", 128)), var_newDeclaration_4322.getter_mStructureFieldListAST (SOURCE_FILE ("type-structure-declaration.galgas", 129)).add_operation (enumerator_4527.current_mPropertyList (HERE), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 129)), var_newDeclaration_4322.getter_mFunctionDeclarationListAST (SOURCE_FILE ("type-structure-declaration.galgas", 130)).add_operation (enumerator_4527.current_mProcedureDeclarationListAST (HERE), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 130)), var_newDeclaration_4322.getter_mSystemRoutineListAST (SOURCE_FILE ("type-structure-declaration.galgas", 131)).add_operation (enumerator_4527.current_mSVCListAST (HERE), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 131)), var_newDeclaration_4322.getter_mGuardListAST (SOURCE_FILE ("type-structure-declaration.galgas", 132)).add_operation (enumerator_4527.current_mGuardListAST (HERE), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 132))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 126)) ;
    }else if (kBoolFalse == test_1) {
      ioArgument_ioExtensionDeclarationListAST.addAssign_operation (enumerator_4527.current_mTypeName (HERE), enumerator_4527.current_mProcedureDeclarationListAST (HERE), enumerator_4527.current_mPropertyList (HERE), enumerator_4527.current_mSVCListAST (HERE), enumerator_4527.current_mGuardListAST (HERE)  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 135)) ;
    }
    enumerator_4527.gotoNextObject () ;
  }
  outArgument_outNewDeclaration = var_newDeclaration_4322 ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_structureDeclaration_addExtension (void) {
  enterExtensionMethod_addExtension (kTypeDescriptor_GALGAS_structureDeclaration.mSlotID,
                                     extensionMethod_structureDeclaration_addExtension) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_structureDeclaration_addExtension (defineExtensionMethod_structureDeclaration_addExtension, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@structureDeclaration enterInPrecedenceGraph'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_structureDeclaration_enterInPrecedenceGraph (const cPtr_abstractDeclaration * inObject,
                                                                         GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_structureDeclaration * object = (const cPtr_structureDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_structureDeclaration) ;
  GALGAS_lstring var_structureTypeName_5583 = function_llvmRegularTypeMangledNameFromName (object->mProperty_mStructureName, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 146)) ;
  {
  const GALGAS_structureDeclaration temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (var_structureTypeName_5583, temp_0, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 148)) ;
  }
  cEnumerator_structurePropertyListAST enumerator_5810 (object->mProperty_mStructureFieldListAST, kENUMERATION_UP) ;
  while (enumerator_5810.hasCurrentObject ()) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, enumerator_5810.current_mFieldTypeName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_lstring var_typeName_5871 = function_llvmRegularTypeMangledNameFromName (enumerator_5810.current_mFieldTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 152)) ;
      {
      ioArgument_ioGraph.setter_addEdge (var_structureTypeName_5583, var_typeName_5871 COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 153)) ;
      }
    }
    switch (enumerator_5810.current_mInitialisation (HERE).enumValue ()) {
    case GALGAS_structureVarInit::kNotBuilt:
      break ;
    case GALGAS_structureVarInit::kEnum_noExpression:
      {
      }
      break ;
    case GALGAS_structureVarInit::kEnum_expression:
      {
        const cEnumAssociatedValues_structureVarInit_expression * extractPtr_6166 = (const cEnumAssociatedValues_structureVarInit_expression *) (enumerator_5810.current_mInitialisation (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_initExpression = extractPtr_6166->mAssociatedValue0 ;
        callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) extractedValue_initExpression.ptr (), var_structureTypeName_5583, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 158)) ;
      }
      break ;
    }
    enumerator_5810.gotoNextObject () ;
  }
  cEnumerator_functionDeclarationListAST enumerator_6250 (object->mProperty_mFunctionDeclarationListAST, kENUMERATION_UP) ;
  while (enumerator_6250.hasCurrentObject ()) {
    cEnumerator_routineFormalArgumentList enumerator_6323 (enumerator_6250.current_mFunctionFormalArgumentList (HERE), kENUMERATION_UP) ;
    while (enumerator_6323.hasCurrentObject ()) {
      GALGAS_lstring var_typeName_6345 = function_llvmRegularTypeMangledNameFromName (enumerator_6323.current_mFormalArgumentTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 164)) ;
      {
      ioArgument_ioGraph.setter_noteNode (var_typeName_6345 COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 165)) ;
      }
      enumerator_6323.gotoNextObject () ;
    }
    extensionMethod_noteInstructionListTypesInPrecedenceGraph (enumerator_6250.current_mFunctionInstructionList (HERE), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 167)) ;
    enumerator_6250.gotoNextObject () ;
  }
  extensionMethod_noteTypesInPrecedenceGraph (object->mProperty_mSystemRoutineListAST, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 170)) ;
  extensionMethod_noteTypesInPrecedenceGraph (object->mProperty_mGuardListAST, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 171)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_structureDeclaration_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_structureDeclaration.mSlotID,
                                               extensionMethod_structureDeclaration_enterInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_structureDeclaration_enterInPrecedenceGraph (defineExtensionMethod_structureDeclaration_enterInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension getter '@structureDeclaration keyRepresentationForErrorSignaling'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_structureDeclaration_keyRepresentationForErrorSignaling (const cPtr_abstractDeclaration * inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_structureDeclaration * object = (const cPtr_structureDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_structureDeclaration) ;
  result_outRepresentation = GALGAS_string ("struct $").add_operation (object->mProperty_mStructureName.getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 177)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 177)) ;
//---
  return result_outRepresentation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_structureDeclaration_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_structureDeclaration.mSlotID,
                                                           extensionGetter_structureDeclaration_keyRepresentationForErrorSignaling) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_structureDeclaration_keyRepresentationForErrorSignaling (defineExtensionGetter_structureDeclaration_keyRepresentationForErrorSignaling, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@structureDeclaration enterInContext'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_structureDeclaration_enterInContext (const cPtr_abstractDeclaration * inObject,
                                                                 const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                 GALGAS_semanticContext & ioArgument_ioContext,
                                                                 GALGAS_staticlistValues_5F_listMap & /* ioArgument_ioStaticListValueMap */,
                                                                 GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_structureDeclaration * object = (const cPtr_structureDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_structureDeclaration) ;
  GALGAS_universalPropertyAndRoutineMapForContext var_universalPropertyAndRoutineMapForContext_8786 = GALGAS_universalPropertyAndRoutineMapForContext::constructor_default (SOURCE_FILE ("type-structure-declaration.galgas", 224)) ;
  GALGAS_propertyList var_propertyList_8826 = GALGAS_propertyList::constructor_emptyList (SOURCE_FILE ("type-structure-declaration.galgas", 225)) ;
  GALGAS_propertyMap var_propertyMap_8858 = GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-structure-declaration.galgas", 226)) ;
  GALGAS_sortedOperandIRList var_sortedOperandIRList_8906 = GALGAS_sortedOperandIRList::constructor_emptySortedList (SOURCE_FILE ("type-structure-declaration.galgas", 227)) ;
  GALGAS_constructorSignature var_constructorSignature_8956 = GALGAS_constructorSignature::constructor_emptyList (SOURCE_FILE ("type-structure-declaration.galgas", 228)) ;
  GALGAS_bool var_canBeCopied_8979 = GALGAS_bool (true) ;
  cEnumerator_structurePropertyListAST enumerator_9021 (object->mProperty_mStructureFieldListAST, kENUMERATION_UP) ;
  GALGAS_uint index_8992 ((uint32_t) 0) ;
  while (enumerator_9021.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy temp_0 ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_9021.current_mFieldTypeName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      temp_0 = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-structure-declaration.galgas", 233)) ;
    }else if (kBoolFalse == test_1) {
      temp_0 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), enumerator_9021.current_mFieldTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 234)) ;
    }
    GALGAS_unifiedTypeMap_2D_proxy var_optionalPropertyType_9109 = temp_0 ;
    GALGAS_instructionListIR var_initInstructionGenerationList_9303 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("type-structure-declaration.galgas", 237)) ;
    GALGAS_allocaList var_allocaList_9335 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("type-structure-declaration.galgas", 238)) ;
    GALGAS_semanticTemporariesStruct var_temporaries_9383 = GALGAS_semanticTemporariesStruct::constructor_default (SOURCE_FILE ("type-structure-declaration.galgas", 239)) ;
    switch (enumerator_9021.current_mInitialisation (HERE).enumValue ()) {
    case GALGAS_structureVarInit::kNotBuilt:
      break ;
    case GALGAS_structureVarInit::kEnum_expression:
      {
        const cEnumAssociatedValues_structureVarInit_expression * extractPtr_11217 = (const cEnumAssociatedValues_structureVarInit_expression *) (enumerator_9021.current_mInitialisation (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_initExpression = extractPtr_11217->mAssociatedValue0 ;
        GALGAS_staticStringMap joker_9853 = GALGAS_staticStringMap::constructor_emptyMap (SOURCE_FILE ("type-structure-declaration.galgas", 251)) ;
        GALGAS_unifiedSymbolMap joker_9877 = GALGAS_unifiedSymbolMap::constructor_emptyMap (SOURCE_FILE ("type-structure-declaration.galgas", 252)) ;
        GALGAS_universalPropertyAndRoutineMapForContext joker_9901 = GALGAS_universalPropertyAndRoutineMapForContext::constructor_default (SOURCE_FILE ("type-structure-declaration.galgas", 253)) ;
        GALGAS_objectIR var_expressionIR_10027 ;
        callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) extractedValue_initExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-structure-declaration.galgas", 243)), GALGAS_bool (false), GALGAS_bool (false), GALGAS_lstring::constructor_new (object->mProperty_mStructureName.getter_string (HERE).add_operation (GALGAS_string (" init"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 246)), object->mProperty_mStructureName.getter_location (HERE)  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 246)), var_optionalPropertyType_9109, ioArgument_ioContext, GALGAS_mode::constructor_bootMode (SOURCE_FILE ("type-structure-declaration.galgas", 249)), var_temporaries_9383, joker_9853, joker_9877, joker_9901, var_allocaList_9335, var_initInstructionGenerationList_9303, var_expressionIR_10027, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 242)) ;
        GALGAS_bool test_2 = GALGAS_bool (kIsStrictSup, var_initInstructionGenerationList_9303.getter_length (SOURCE_FILE ("type-structure-declaration.galgas", 258)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
        if (kBoolTrue != test_2.boolEnum ()) {
          test_2 = GALGAS_bool (kIsStrictSup, var_allocaList_9335.getter_length (SOURCE_FILE ("type-structure-declaration.galgas", 258)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
        }
        GALGAS_bool test_3 = test_2 ;
        if (kBoolTrue != test_3.boolEnum ()) {
          test_3 = extensionGetter_isStatic (var_expressionIR_10027, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 258)).operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 258)) ;
        }
        const enumGalgasBool test_4 = test_3.boolEnum () ;
        if (kBoolTrue == test_4) {
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (enumerator_9021.current_mFieldName (HERE).getter_location (SOURCE_FILE ("type-structure-declaration.galgas", 259)), GALGAS_string ("initialization expression cannot be computed statically"), fixItArray5  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 259)) ;
        }
        GALGAS_unifiedTypeMap_2D_proxy var_actualPropertyType_10296 ;
        const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, var_optionalPropertyType_9109.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-structure-declaration.galgas", 262)))).boolEnum () ;
        if (kBoolTrue == test_6) {
          var_actualPropertyType_10296 = var_optionalPropertyType_9109 ;
        }else if (kBoolFalse == test_6) {
          var_actualPropertyType_10296 = extensionGetter_type (var_expressionIR_10027, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 265)) ;
        }
        const enumGalgasBool test_7 = extensionGetter_instanciable (var_actualPropertyType_10296.getter_kind (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 267)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 267)).operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 267)).boolEnum () ;
        if (kBoolTrue == test_7) {
          TC_Array <C_FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (enumerator_9021.current_mFieldName (HERE).getter_location (SOURCE_FILE ("type-structure-declaration.galgas", 268)), GALGAS_string ("$").add_operation (var_actualPropertyType_10296.getter_key (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 268)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 268)).add_operation (GALGAS_string (" type is not instanciable"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 268)), fixItArray8  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 268)) ;
        }
        const enumGalgasBool test_9 = extensionGetter_copyable (var_actualPropertyType_10296, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 270)).operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 270)).boolEnum () ;
        if (kBoolTrue == test_9) {
          var_canBeCopied_8979 = GALGAS_bool (false) ;
        }
        var_propertyList_8826.addAssign_operation (enumerator_9021.current_mFieldName (HERE).getter_string (HERE), var_actualPropertyType_10296  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 273)) ;
        {
        var_propertyMap_8858.setter_insertKey (enumerator_9021.current_mFieldName (HERE), enumerator_9021.current_mIsPublic (HERE), GALGAS_objectIR::constructor_property (var_actualPropertyType_10296, enumerator_9021.current_mFieldName (HERE), index_8992  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 277)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 274)) ;
        }
        {
        var_universalPropertyAndRoutineMapForContext_8786.insulate (HERE) ;
        cPtr_universalPropertyAndRoutineMapForContext * ptr_10979 = (cPtr_universalPropertyAndRoutineMapForContext *) var_universalPropertyAndRoutineMapForContext_8786.ptr () ;
        callExtensionSetter_insertProperty ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_10979, enumerator_9021.current_mFieldName (HERE), enumerator_9021.current_mIsPublic (HERE), GALGAS_objectIR::constructor_property (var_actualPropertyType_10296, enumerator_9021.current_mFieldName (HERE), index_8992  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 282)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 279)) ;
        }
        var_sortedOperandIRList_8906.addAssign_operation (extensionGetter_withType (var_expressionIR_10027, var_actualPropertyType_10296, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 284)), index_8992  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 284)) ;
      }
      break ;
    case GALGAS_structureVarInit::kEnum_noExpression:
      {
        const enumGalgasBool test_10 = extensionGetter_instanciable (var_optionalPropertyType_9109.getter_kind (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 286)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 286)).operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 286)).boolEnum () ;
        if (kBoolTrue == test_10) {
          TC_Array <C_FixItDescription> fixItArray11 ;
          inCompiler->emitSemanticError (enumerator_9021.current_mFieldName (HERE).getter_location (SOURCE_FILE ("type-structure-declaration.galgas", 287)), GALGAS_string ("$").add_operation (var_optionalPropertyType_9109.getter_key (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 287)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 287)).add_operation (GALGAS_string (" type is not instanciable"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 287)), fixItArray11  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 287)) ;
        }
        var_propertyList_8826.addAssign_operation (enumerator_9021.current_mFieldName (HERE).getter_string (HERE), var_optionalPropertyType_9109  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 289)) ;
        {
        var_propertyMap_8858.setter_insertKey (enumerator_9021.current_mFieldName (HERE), enumerator_9021.current_mIsPublic (HERE), GALGAS_objectIR::constructor_property (var_optionalPropertyType_9109, enumerator_9021.current_mFieldName (HERE), index_8992  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 293)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 290)) ;
        }
        {
        var_universalPropertyAndRoutineMapForContext_8786.insulate (HERE) ;
        cPtr_universalPropertyAndRoutineMapForContext * ptr_11682 = (cPtr_universalPropertyAndRoutineMapForContext *) var_universalPropertyAndRoutineMapForContext_8786.ptr () ;
        callExtensionSetter_insertProperty ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_11682, enumerator_9021.current_mFieldName (HERE), enumerator_9021.current_mIsPublic (HERE), GALGAS_objectIR::constructor_property (var_optionalPropertyType_9109, enumerator_9021.current_mFieldName (HERE), index_8992  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 298)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 295)) ;
        }
        var_constructorSignature_8956.addAssign_operation (enumerator_9021.current_mFieldName (HERE).getter_string (HERE), var_optionalPropertyType_9109, index_8992  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 300)) ;
      }
      break ;
    }
    enumerator_9021.gotoNextObject () ;
    index_8992.increment_operation (inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 230)) ;
  }
  {
  ioArgument_ioContext.mProperty_mConstructorMap.setter_insertKey (object->mProperty_mStructureName, GALGAS_constructorValue::constructor_structure (var_constructorSignature_8956, var_sortedOperandIRList_8906  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 306)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 304)) ;
  }
  GALGAS_uint var_flags_12202 = function_instanciableFlag (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 309)) ;
  cEnumerator_lstringlist enumerator_12255 (object->mProperty_mAttributeListAST, kENUMERATION_UP) ;
  while (enumerator_12255.hasCurrentObject ()) {
    const enumGalgasBool test_12 = GALGAS_bool (kIsEqual, enumerator_12255.current_mValue (HERE).getter_string (HERE).objectCompare (GALGAS_string ("copyable"))).boolEnum () ;
    if (kBoolTrue == test_12) {
      const enumGalgasBool test_13 = GALGAS_bool (kIsNotEqual, var_flags_12202.operator_and (function_instanciableFlag (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 312)) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 312)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_13) {
        TC_Array <C_FixItDescription> fixItArray14 ;
        inCompiler->emitSemanticError (enumerator_12255.current_mValue (HERE).getter_location (SOURCE_FILE ("type-structure-declaration.galgas", 313)), GALGAS_string ("duplicated attribute"), fixItArray14  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 313)) ;
      }else if (kBoolFalse == test_13) {
        const enumGalgasBool test_15 = var_canBeCopied_8979.operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 314)).boolEnum () ;
        if (kBoolTrue == test_15) {
          TC_Array <C_FixItDescription> fixItArray16 ;
          inCompiler->emitSemanticError (object->mProperty_mStructureName.getter_location (SOURCE_FILE ("type-structure-declaration.galgas", 315)), GALGAS_string ("this structure cannot be copied, one field is not copyable"), fixItArray16  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 315)) ;
        }else if (kBoolFalse == test_15) {
          var_flags_12202 = var_flags_12202.operator_or (function_instanciableFlag (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 317)) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 317)) ;
        }
      }
    }else if (kBoolFalse == test_12) {
      TC_Array <C_FixItDescription> fixItArray17 ;
      inCompiler->emitSemanticError (enumerator_12255.current_mValue (HERE).getter_location (SOURCE_FILE ("type-structure-declaration.galgas", 320)), GALGAS_string ("only @copyable attribute is allowed here"), fixItArray17  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 320)) ;
    }
    enumerator_12255.gotoNextObject () ;
  }
  cEnumerator_functionDeclarationListAST enumerator_12774 (object->mProperty_mFunctionDeclarationListAST, kENUMERATION_UP) ;
  while (enumerator_12774.hasCurrentObject ()) {
    GALGAS_stringset var_attributeSet_12826 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-structure-declaration.galgas", 326)) ;
    cEnumerator_lstringlist enumerator_12884 (enumerator_12774.current (HERE).getter_mFunctionAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_12884.hasCurrentObject ()) {
      var_attributeSet_12826.addAssign_operation (enumerator_12884.current (HERE).getter_mValue (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 328)) ;
      enumerator_12884.gotoNextObject () ;
    }
    GALGAS_lstring var_signature_12977 = extensionGetter_routineSignature (enumerator_12774.current (HERE).getter_mFunctionFormalArgumentList (HERE), enumerator_12774.current (HERE).getter_mFunctionName (HERE).getter_location (SOURCE_FILE ("type-structure-declaration.galgas", 331)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 331)) ;
    GALGAS_routineTypedSignature var_typedSignature_13183 ;
    {
    routine_routineSignature (ioArgument_ioContext.mProperty_mTypeMap, enumerator_12774.current (HERE).getter_mFunctionFormalArgumentList (HERE), var_typedSignature_13183, inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 332)) ;
    }
    GALGAS_unifiedTypeMap_2D_proxy var_returnType_13319 ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeOptionalProxy (ioArgument_ioContext.mProperty_mTypeMap, enumerator_12774.current (HERE).getter_mFunctionReturnTypeName (HERE), var_returnType_13319 COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 334)) ;
    }
    GALGAS_lstring var_invocationName_13375 = function_routineMangledNameFromAST (object->mProperty_mStructureName.getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 337)), enumerator_12774.current (HERE).getter_mFunctionName (HERE), enumerator_12774.current (HERE).getter_mFunctionFormalArgumentList (HERE), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 336)) ;
    GALGAS_routineDescriptor var_functionDescriptor_13562 = GALGAS_routineDescriptor::constructor_new (enumerator_12774.current (HERE).getter_mPublicFunction (HERE), var_attributeSet_12826.getter_hasKey (function_exportedAttribute (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 344)) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 344)), GALGAS_routineKind::constructor_function (enumerator_12774.current (HERE).getter_mMode (HERE)  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 345)), var_typedSignature_13183, var_returnType_13319, var_attributeSet_12826.getter_hasKey (function_accessAttribute (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 348)) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 348)), var_attributeSet_12826.getter_hasKey (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 349)) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 349))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 342)) ;
    {
    var_universalPropertyAndRoutineMapForContext_8786.insulate (HERE) ;
    cPtr_universalPropertyAndRoutineMapForContext * ptr_13922 = (cPtr_universalPropertyAndRoutineMapForContext *) var_universalPropertyAndRoutineMapForContext_8786.ptr () ;
    callExtensionSetter_insertRoutine ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_13922, enumerator_12774.current (HERE).getter_mFunctionName (HERE), var_signature_12977, var_invocationName_13375, var_functionDescriptor_13562, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 352)) ;
    }
    enumerator_12774.gotoNextObject () ;
  }
  cEnumerator_systemRoutineDeclarationListAST enumerator_14081 (object->mProperty_mSystemRoutineListAST, kENUMERATION_UP) ;
  while (enumerator_14081.hasCurrentObject ()) {
    GALGAS_stringset var_attributeSet_14133 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-structure-declaration.galgas", 361)) ;
    cEnumerator_lstringlist enumerator_14181 (enumerator_14081.current (HERE).getter_mAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_14181.hasCurrentObject ()) {
      var_attributeSet_14133.addAssign_operation (enumerator_14181.current (HERE).getter_mValue (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 363)) ;
      enumerator_14181.gotoNextObject () ;
    }
    GALGAS_lstring var_signature_14274 = extensionGetter_routineSignature (enumerator_14081.current (HERE).getter_mFormalArgumentList (HERE), enumerator_14081.current (HERE).getter_mName (HERE).getter_location (SOURCE_FILE ("type-structure-declaration.galgas", 366)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 366)) ;
    GALGAS_routineTypedSignature var_typedSignature_14450 ;
    {
    routine_routineSignature (ioArgument_ioContext.mProperty_mTypeMap, enumerator_14081.current (HERE).getter_mFormalArgumentList (HERE), var_typedSignature_14450, inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 367)) ;
    }
    GALGAS_unifiedTypeMap_2D_proxy var_returnType_14576 ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeOptionalProxy (ioArgument_ioContext.mProperty_mTypeMap, enumerator_14081.current (HERE).getter_mReturnTypeName (HERE), var_returnType_14576 COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 369)) ;
    }
    GALGAS_lstring var_invocationName_14632 = function_routineMangledNameFromAST (object->mProperty_mStructureName.getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 372)), enumerator_14081.current (HERE).getter_mName (HERE), enumerator_14081.current (HERE).getter_mFormalArgumentList (HERE), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 371)) ;
    GALGAS_routineDescriptor var_descriptor_14791 = GALGAS_routineDescriptor::constructor_new (enumerator_14081.current (HERE).getter_mPublic (HERE), var_attributeSet_14133.getter_hasKey (function_exportedAttribute (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 379)) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 379)), enumerator_14081.current (HERE).getter_mRoutineKind (HERE), var_typedSignature_14450, var_returnType_14576, var_attributeSet_14133.getter_hasKey (function_accessAttribute (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 383)) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 383)), var_attributeSet_14133.getter_hasKey (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 384)) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 384))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 377)) ;
    {
    var_universalPropertyAndRoutineMapForContext_8786.insulate (HERE) ;
    cPtr_universalPropertyAndRoutineMapForContext * ptr_15119 = (cPtr_universalPropertyAndRoutineMapForContext *) var_universalPropertyAndRoutineMapForContext_8786.ptr () ;
    callExtensionSetter_insertRoutine ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_15119, enumerator_14081.current (HERE).getter_mName (HERE), var_signature_14274, var_invocationName_14632, var_descriptor_14791, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 387)) ;
    }
    enumerator_14081.gotoNextObject () ;
  }
  {
  ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (object->mProperty_mStructureName, GALGAS_typeKind::constructor_structure (object->mProperty_mStructureName, var_propertyMap_8858, var_universalPropertyAndRoutineMapForContext_8786, var_propertyList_8826, var_flags_12202  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 397)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 395)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_structureDeclaration_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_structureDeclaration.mSlotID,
                                       extensionMethod_structureDeclaration_enterInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_structureDeclaration_enterInContext (defineExtensionMethod_structureDeclaration_enterInContext, NULL) ;

