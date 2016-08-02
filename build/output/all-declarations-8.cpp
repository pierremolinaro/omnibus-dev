#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-8.h"


//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*



typeComparisonResult GALGAS_infixOperatorDescription::objectCompare (const GALGAS_infixOperatorDescription & inOperand) const {
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

GALGAS_infixOperatorDescription::GALGAS_infixOperatorDescription (void) :
AC_GALGAS_class () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorDescription::GALGAS_infixOperatorDescription (const cPtr_infixOperatorDescription * inSourcePtr) :
AC_GALGAS_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_infixOperatorDescription) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_llvmBinaryOperation GALGAS_infixOperatorDescription::getter_mOperator (UNUSED_LOCATION_ARGS) const {
  GALGAS_llvmBinaryOperation result ;
  if (NULL != mObjectPtr) {
    const cPtr_infixOperatorDescription * p = (const cPtr_infixOperatorDescription *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_infixOperatorDescription) ;
    result = p->mAttribute_mOperator ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_llvmBinaryOperation cPtr_infixOperatorDescription::getter_mOperator (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOperator ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                  Pointer class for @infixOperatorDescription class                                  *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_infixOperatorDescription::cPtr_infixOperatorDescription (const GALGAS_llvmBinaryOperation & in_mOperator
                                                              COMMA_LOCATION_ARGS) :
acPtr_class (THERE),
mAttribute_mOperator (in_mOperator) {
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @infixOperatorDescription type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_infixOperatorDescription ("infixOperatorDescription",
                                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_infixOperatorDescription::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_infixOperatorDescription ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_infixOperatorDescription::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_infixOperatorDescription (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorDescription GALGAS_infixOperatorDescription::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_infixOperatorDescription result ;
  const GALGAS_infixOperatorDescription * p = (const GALGAS_infixOperatorDescription *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_infixOperatorDescription *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("infixOperatorDescription", p->dynamicTypeDescriptor () COMMA_THERE) ;
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
    result = mAttribute_mOperator.objectCompare (p->mAttribute_mOperator) ;
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
  mAttribute_mOperator.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_infixObjectObjectOperatorDescription::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_infixObjectObjectOperatorDescription (mAttribute_mOperator COMMA_THERE)) ;
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
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_integerObject_5F_literal_5F_divisionOperator::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_integerObject_5F_literal_5F_divisionOperator * p = (const cPtr_integerObject_5F_literal_5F_divisionOperator *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_integerObject_5F_literal_5F_divisionOperator) ;
  if (kOperandEqual == result) {
    result = mAttribute_mOperator.objectCompare (p->mAttribute_mOperator) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_integerObject_5F_literal_5F_divisionOperator::objectCompare (const GALGAS_integerObject_5F_literal_5F_divisionOperator & inOperand) const {
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

GALGAS_integerObject_5F_literal_5F_divisionOperator::GALGAS_integerObject_5F_literal_5F_divisionOperator (void) :
GALGAS_infixOperatorDescription () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_integerObject_5F_literal_5F_divisionOperator::GALGAS_integerObject_5F_literal_5F_divisionOperator (const cPtr_integerObject_5F_literal_5F_divisionOperator * inSourcePtr) :
GALGAS_infixOperatorDescription (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_integerObject_5F_literal_5F_divisionOperator) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_integerObject_5F_literal_5F_divisionOperator GALGAS_integerObject_5F_literal_5F_divisionOperator::constructor_new (const GALGAS_llvmBinaryOperation & inAttribute_mOperator
                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_integerObject_5F_literal_5F_divisionOperator result ;
  if (inAttribute_mOperator.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_integerObject_5F_literal_5F_divisionOperator (inAttribute_mOperator COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                           Pointer class for @integerObject_literal_divisionOperator class                           *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_integerObject_5F_literal_5F_divisionOperator::cPtr_integerObject_5F_literal_5F_divisionOperator (const GALGAS_llvmBinaryOperation & in_mOperator
                                                                                                      COMMA_LOCATION_ARGS) :
cPtr_infixOperatorDescription (in_mOperator COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_integerObject_5F_literal_5F_divisionOperator::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_integerObject_5F_literal_5F_divisionOperator ;
}

void cPtr_integerObject_5F_literal_5F_divisionOperator::description (C_String & ioString,
                                                                     const int32_t inIndentation) const {
  ioString << "[@integerObject_literal_divisionOperator:" ;
  mAttribute_mOperator.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_integerObject_5F_literal_5F_divisionOperator::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_integerObject_5F_literal_5F_divisionOperator (mAttribute_mOperator COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @integerObject_literal_divisionOperator type                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_integerObject_5F_literal_5F_divisionOperator ("integerObject_literal_divisionOperator",
                                                                     & kTypeDescriptor_GALGAS_infixOperatorDescription) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_integerObject_5F_literal_5F_divisionOperator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_integerObject_5F_literal_5F_divisionOperator ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_integerObject_5F_literal_5F_divisionOperator::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_integerObject_5F_literal_5F_divisionOperator (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_integerObject_5F_literal_5F_divisionOperator GALGAS_integerObject_5F_literal_5F_divisionOperator::extractObject (const GALGAS_object & inObject,
                                                                                                                        C_Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_integerObject_5F_literal_5F_divisionOperator result ;
  const GALGAS_integerObject_5F_literal_5F_divisionOperator * p = (const GALGAS_integerObject_5F_literal_5F_divisionOperator *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_integerObject_5F_literal_5F_divisionOperator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("integerObject_literal_divisionOperator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_integerObject_5F_literal_5F_infixOperator::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_integerObject_5F_literal_5F_infixOperator * p = (const cPtr_integerObject_5F_literal_5F_infixOperator *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_integerObject_5F_literal_5F_infixOperator) ;
  if (kOperandEqual == result) {
    result = mAttribute_mOperator.objectCompare (p->mAttribute_mOperator) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_integerObject_5F_literal_5F_infixOperator::objectCompare (const GALGAS_integerObject_5F_literal_5F_infixOperator & inOperand) const {
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

GALGAS_integerObject_5F_literal_5F_infixOperator::GALGAS_integerObject_5F_literal_5F_infixOperator (void) :
GALGAS_infixOperatorDescription () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_integerObject_5F_literal_5F_infixOperator::GALGAS_integerObject_5F_literal_5F_infixOperator (const cPtr_integerObject_5F_literal_5F_infixOperator * inSourcePtr) :
GALGAS_infixOperatorDescription (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_integerObject_5F_literal_5F_infixOperator) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_integerObject_5F_literal_5F_infixOperator GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (const GALGAS_llvmBinaryOperation & inAttribute_mOperator
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_integerObject_5F_literal_5F_infixOperator result ;
  if (inAttribute_mOperator.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_integerObject_5F_literal_5F_infixOperator (inAttribute_mOperator COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                            Pointer class for @integerObject_literal_infixOperator class                             *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_integerObject_5F_literal_5F_infixOperator::cPtr_integerObject_5F_literal_5F_infixOperator (const GALGAS_llvmBinaryOperation & in_mOperator
                                                                                                COMMA_LOCATION_ARGS) :
cPtr_infixOperatorDescription (in_mOperator COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_integerObject_5F_literal_5F_infixOperator::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_integerObject_5F_literal_5F_infixOperator ;
}

void cPtr_integerObject_5F_literal_5F_infixOperator::description (C_String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString << "[@integerObject_literal_infixOperator:" ;
  mAttribute_mOperator.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_integerObject_5F_literal_5F_infixOperator::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_integerObject_5F_literal_5F_infixOperator (mAttribute_mOperator COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @integerObject_literal_infixOperator type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_integerObject_5F_literal_5F_infixOperator ("integerObject_literal_infixOperator",
                                                                  & kTypeDescriptor_GALGAS_infixOperatorDescription) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_integerObject_5F_literal_5F_infixOperator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_integerObject_5F_literal_5F_infixOperator ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_integerObject_5F_literal_5F_infixOperator::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_integerObject_5F_literal_5F_infixOperator (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_integerObject_5F_literal_5F_infixOperator GALGAS_integerObject_5F_literal_5F_infixOperator::extractObject (const GALGAS_object & inObject,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_integerObject_5F_literal_5F_infixOperator result ;
  const GALGAS_integerObject_5F_literal_5F_infixOperator * p = (const GALGAS_integerObject_5F_literal_5F_infixOperator *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_integerObject_5F_literal_5F_infixOperator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("integerObject_literal_infixOperator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_literal_5F_integerObject_5F_infixOperator::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_literal_5F_integerObject_5F_infixOperator * p = (const cPtr_literal_5F_integerObject_5F_infixOperator *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_literal_5F_integerObject_5F_infixOperator) ;
  if (kOperandEqual == result) {
    result = mAttribute_mOperator.objectCompare (p->mAttribute_mOperator) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_literal_5F_integerObject_5F_infixOperator::objectCompare (const GALGAS_literal_5F_integerObject_5F_infixOperator & inOperand) const {
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

GALGAS_literal_5F_integerObject_5F_infixOperator::GALGAS_literal_5F_integerObject_5F_infixOperator (void) :
GALGAS_infixOperatorDescription () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literal_5F_integerObject_5F_infixOperator::GALGAS_literal_5F_integerObject_5F_infixOperator (const cPtr_literal_5F_integerObject_5F_infixOperator * inSourcePtr) :
GALGAS_infixOperatorDescription (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literal_5F_integerObject_5F_infixOperator) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literal_5F_integerObject_5F_infixOperator GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (const GALGAS_llvmBinaryOperation & inAttribute_mOperator
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_literal_5F_integerObject_5F_infixOperator result ;
  if (inAttribute_mOperator.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_literal_5F_integerObject_5F_infixOperator (inAttribute_mOperator COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                            Pointer class for @literal_integerObject_infixOperator class                             *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_literal_5F_integerObject_5F_infixOperator::cPtr_literal_5F_integerObject_5F_infixOperator (const GALGAS_llvmBinaryOperation & in_mOperator
                                                                                                COMMA_LOCATION_ARGS) :
cPtr_infixOperatorDescription (in_mOperator COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_literal_5F_integerObject_5F_infixOperator::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literal_5F_integerObject_5F_infixOperator ;
}

void cPtr_literal_5F_integerObject_5F_infixOperator::description (C_String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString << "[@literal_integerObject_infixOperator:" ;
  mAttribute_mOperator.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_literal_5F_integerObject_5F_infixOperator::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_literal_5F_integerObject_5F_infixOperator (mAttribute_mOperator COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @literal_integerObject_infixOperator type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_literal_5F_integerObject_5F_infixOperator ("literal_integerObject_infixOperator",
                                                                  & kTypeDescriptor_GALGAS_infixOperatorDescription) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_literal_5F_integerObject_5F_infixOperator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literal_5F_integerObject_5F_infixOperator ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_literal_5F_integerObject_5F_infixOperator::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_literal_5F_integerObject_5F_infixOperator (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literal_5F_integerObject_5F_infixOperator GALGAS_literal_5F_integerObject_5F_infixOperator::extractObject (const GALGAS_object & inObject,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_literal_5F_integerObject_5F_infixOperator result ;
  const GALGAS_literal_5F_integerObject_5F_infixOperator * p = (const GALGAS_literal_5F_integerObject_5F_infixOperator *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_literal_5F_integerObject_5F_infixOperator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literal_integerObject_infixOperator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_literal_5F_literal_5F_integerInfixOperation::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_literal_5F_literal_5F_integerInfixOperation * p = (const cPtr_literal_5F_literal_5F_integerInfixOperation *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_literal_5F_literal_5F_integerInfixOperation) ;
  if (kOperandEqual == result) {
    result = mAttribute_mOperator.objectCompare (p->mAttribute_mOperator) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_literal_5F_literal_5F_integerInfixOperation::objectCompare (const GALGAS_literal_5F_literal_5F_integerInfixOperation & inOperand) const {
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

GALGAS_literal_5F_literal_5F_integerInfixOperation::GALGAS_literal_5F_literal_5F_integerInfixOperation (void) :
GALGAS_infixOperatorDescription () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literal_5F_literal_5F_integerInfixOperation::GALGAS_literal_5F_literal_5F_integerInfixOperation (const cPtr_literal_5F_literal_5F_integerInfixOperation * inSourcePtr) :
GALGAS_infixOperatorDescription (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literal_5F_literal_5F_integerInfixOperation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literal_5F_literal_5F_integerInfixOperation GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (const GALGAS_llvmBinaryOperation & inAttribute_mOperator
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_literal_5F_literal_5F_integerInfixOperation result ;
  if (inAttribute_mOperator.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_literal_5F_literal_5F_integerInfixOperation (inAttribute_mOperator COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                           Pointer class for @literal_literal_integerInfixOperation class                            *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_literal_5F_literal_5F_integerInfixOperation::cPtr_literal_5F_literal_5F_integerInfixOperation (const GALGAS_llvmBinaryOperation & in_mOperator
                                                                                                    COMMA_LOCATION_ARGS) :
cPtr_infixOperatorDescription (in_mOperator COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_literal_5F_literal_5F_integerInfixOperation::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literal_5F_literal_5F_integerInfixOperation ;
}

void cPtr_literal_5F_literal_5F_integerInfixOperation::description (C_String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString << "[@literal_literal_integerInfixOperation:" ;
  mAttribute_mOperator.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_literal_5F_literal_5F_integerInfixOperation::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_literal_5F_literal_5F_integerInfixOperation (mAttribute_mOperator COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @literal_literal_integerInfixOperation type                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_literal_5F_literal_5F_integerInfixOperation ("literal_literal_integerInfixOperation",
                                                                    & kTypeDescriptor_GALGAS_infixOperatorDescription) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_literal_5F_literal_5F_integerInfixOperation::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literal_5F_literal_5F_integerInfixOperation ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_literal_5F_literal_5F_integerInfixOperation::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_literal_5F_literal_5F_integerInfixOperation (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literal_5F_literal_5F_integerInfixOperation GALGAS_literal_5F_literal_5F_integerInfixOperation::extractObject (const GALGAS_object & inObject,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_literal_5F_literal_5F_integerInfixOperation result ;
  const GALGAS_literal_5F_literal_5F_integerInfixOperation * p = (const GALGAS_literal_5F_literal_5F_integerInfixOperation *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_literal_5F_literal_5F_integerInfixOperation *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literal_literal_integerInfixOperation", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*



typeComparisonResult GALGAS_instructionAST::objectCompare (const GALGAS_instructionAST & inOperand) const {
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

GALGAS_instructionAST::GALGAS_instructionAST (void) :
AC_GALGAS_class () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionAST::GALGAS_instructionAST (const cPtr_instructionAST * inSourcePtr) :
AC_GALGAS_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_instructionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                       Pointer class for @instructionAST class                                       *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_instructionAST::cPtr_instructionAST (LOCATION_ARGS) :
acPtr_class (THERE) {
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @instructionAST type                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_instructionAST ("instructionAST",
                                       NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_instructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_instructionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_instructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_instructionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionAST GALGAS_instructionAST::extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_instructionAST result ;
  const GALGAS_instructionAST * p = (const GALGAS_instructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_instructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("instructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_assertInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_assertInstructionAST * p = (const cPtr_assertInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_assertInstructionAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mAssertInstructionLocation.objectCompare (p->mAttribute_mAssertInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mExpression.objectCompare (p->mAttribute_mExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_assertInstructionAST::objectCompare (const GALGAS_assertInstructionAST & inOperand) const {
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

GALGAS_assertInstructionAST::GALGAS_assertInstructionAST (void) :
GALGAS_instructionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_assertInstructionAST::GALGAS_assertInstructionAST (const cPtr_assertInstructionAST * inSourcePtr) :
GALGAS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_assertInstructionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_assertInstructionAST GALGAS_assertInstructionAST::constructor_new (const GALGAS_location & inAttribute_mAssertInstructionLocation,
                                                                          const GALGAS_expressionAST & inAttribute_mExpression
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_assertInstructionAST result ;
  if (inAttribute_mAssertInstructionLocation.isValid () && inAttribute_mExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_assertInstructionAST (inAttribute_mAssertInstructionLocation, inAttribute_mExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_assertInstructionAST::getter_mAssertInstructionLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_assertInstructionAST * p = (const cPtr_assertInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assertInstructionAST) ;
    result = p->mAttribute_mAssertInstructionLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_assertInstructionAST::getter_mAssertInstructionLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAssertInstructionLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST GALGAS_assertInstructionAST::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_assertInstructionAST * p = (const cPtr_assertInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assertInstructionAST) ;
    result = p->mAttribute_mExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST cPtr_assertInstructionAST::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                    Pointer class for @assertInstructionAST class                                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_assertInstructionAST::cPtr_assertInstructionAST (const GALGAS_location & in_mAssertInstructionLocation,
                                                      const GALGAS_expressionAST & in_mExpression
                                                      COMMA_LOCATION_ARGS) :
cPtr_instructionAST (THERE),
mAttribute_mAssertInstructionLocation (in_mAssertInstructionLocation),
mAttribute_mExpression (in_mExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_assertInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assertInstructionAST ;
}

void cPtr_assertInstructionAST::description (C_String & ioString,
                                             const int32_t inIndentation) const {
  ioString << "[@assertInstructionAST:" ;
  mAttribute_mAssertInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_assertInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_assertInstructionAST (mAttribute_mAssertInstructionLocation, mAttribute_mExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @assertInstructionAST type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_assertInstructionAST ("assertInstructionAST",
                                             & kTypeDescriptor_GALGAS_instructionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_assertInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assertInstructionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_assertInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_assertInstructionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_assertInstructionAST GALGAS_assertInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_assertInstructionAST result ;
  const GALGAS_assertInstructionAST * p = (const GALGAS_assertInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_assertInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("assertInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_callInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_callInstructionAST * p = (const cPtr_callInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_callInstructionAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mAssignmentTargetAST.objectCompare (p->mAttribute_mAssignmentTargetAST) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mArguments.objectCompare (p->mAttribute_mArguments) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mEndOfArguments.objectCompare (p->mAttribute_mEndOfArguments) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_callInstructionAST::objectCompare (const GALGAS_callInstructionAST & inOperand) const {
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

GALGAS_callInstructionAST::GALGAS_callInstructionAST (void) :
GALGAS_instructionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_callInstructionAST::GALGAS_callInstructionAST (const cPtr_callInstructionAST * inSourcePtr) :
GALGAS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_callInstructionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_callInstructionAST GALGAS_callInstructionAST::constructor_new (const GALGAS_assignmentTargetAST & inAttribute_mAssignmentTargetAST,
                                                                      const GALGAS_effectiveParameterListAST & inAttribute_mArguments,
                                                                      const GALGAS_location & inAttribute_mEndOfArguments
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_callInstructionAST result ;
  if (inAttribute_mAssignmentTargetAST.isValid () && inAttribute_mArguments.isValid () && inAttribute_mEndOfArguments.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_callInstructionAST (inAttribute_mAssignmentTargetAST, inAttribute_mArguments, inAttribute_mEndOfArguments COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_assignmentTargetAST GALGAS_callInstructionAST::getter_mAssignmentTargetAST (UNUSED_LOCATION_ARGS) const {
  GALGAS_assignmentTargetAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_callInstructionAST * p = (const cPtr_callInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_callInstructionAST) ;
    result = p->mAttribute_mAssignmentTargetAST ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_assignmentTargetAST cPtr_callInstructionAST::getter_mAssignmentTargetAST (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAssignmentTargetAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_effectiveParameterListAST GALGAS_callInstructionAST::getter_mArguments (UNUSED_LOCATION_ARGS) const {
  GALGAS_effectiveParameterListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_callInstructionAST * p = (const cPtr_callInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_callInstructionAST) ;
    result = p->mAttribute_mArguments ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_effectiveParameterListAST cPtr_callInstructionAST::getter_mArguments (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mArguments ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_callInstructionAST::getter_mEndOfArguments (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_callInstructionAST * p = (const cPtr_callInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_callInstructionAST) ;
    result = p->mAttribute_mEndOfArguments ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_callInstructionAST::getter_mEndOfArguments (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfArguments ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                     Pointer class for @callInstructionAST class                                     *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_callInstructionAST::cPtr_callInstructionAST (const GALGAS_assignmentTargetAST & in_mAssignmentTargetAST,
                                                  const GALGAS_effectiveParameterListAST & in_mArguments,
                                                  const GALGAS_location & in_mEndOfArguments
                                                  COMMA_LOCATION_ARGS) :
cPtr_instructionAST (THERE),
mAttribute_mAssignmentTargetAST (in_mAssignmentTargetAST),
mAttribute_mArguments (in_mArguments),
mAttribute_mEndOfArguments (in_mEndOfArguments) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_callInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_callInstructionAST ;
}

void cPtr_callInstructionAST::description (C_String & ioString,
                                           const int32_t inIndentation) const {
  ioString << "[@callInstructionAST:" ;
  mAttribute_mAssignmentTargetAST.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mArguments.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mEndOfArguments.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_callInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_callInstructionAST (mAttribute_mAssignmentTargetAST, mAttribute_mArguments, mAttribute_mEndOfArguments COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @callInstructionAST type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_callInstructionAST ("callInstructionAST",
                                           & kTypeDescriptor_GALGAS_instructionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_callInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_callInstructionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_callInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_callInstructionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_callInstructionAST GALGAS_callInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_callInstructionAST result ;
  const GALGAS_callInstructionAST * p = (const GALGAS_callInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_callInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("callInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_checkInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_checkInstructionAST * p = (const cPtr_checkInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_checkInstructionAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mCheckInstructionLocation.objectCompare (p->mAttribute_mCheckInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mExpression.objectCompare (p->mAttribute_mExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_checkInstructionAST::objectCompare (const GALGAS_checkInstructionAST & inOperand) const {
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

GALGAS_checkInstructionAST::GALGAS_checkInstructionAST (void) :
GALGAS_instructionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_checkInstructionAST::GALGAS_checkInstructionAST (const cPtr_checkInstructionAST * inSourcePtr) :
GALGAS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_checkInstructionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_checkInstructionAST GALGAS_checkInstructionAST::constructor_new (const GALGAS_location & inAttribute_mCheckInstructionLocation,
                                                                        const GALGAS_expressionAST & inAttribute_mExpression
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_checkInstructionAST result ;
  if (inAttribute_mCheckInstructionLocation.isValid () && inAttribute_mExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_checkInstructionAST (inAttribute_mCheckInstructionLocation, inAttribute_mExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_checkInstructionAST::getter_mCheckInstructionLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_checkInstructionAST * p = (const cPtr_checkInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_checkInstructionAST) ;
    result = p->mAttribute_mCheckInstructionLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_checkInstructionAST::getter_mCheckInstructionLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mCheckInstructionLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST GALGAS_checkInstructionAST::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_checkInstructionAST * p = (const cPtr_checkInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_checkInstructionAST) ;
    result = p->mAttribute_mExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST cPtr_checkInstructionAST::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                    Pointer class for @checkInstructionAST class                                     *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_checkInstructionAST::cPtr_checkInstructionAST (const GALGAS_location & in_mCheckInstructionLocation,
                                                    const GALGAS_expressionAST & in_mExpression
                                                    COMMA_LOCATION_ARGS) :
cPtr_instructionAST (THERE),
mAttribute_mCheckInstructionLocation (in_mCheckInstructionLocation),
mAttribute_mExpression (in_mExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_checkInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_checkInstructionAST ;
}

void cPtr_checkInstructionAST::description (C_String & ioString,
                                            const int32_t inIndentation) const {
  ioString << "[@checkInstructionAST:" ;
  mAttribute_mCheckInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_checkInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_checkInstructionAST (mAttribute_mCheckInstructionLocation, mAttribute_mExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @checkInstructionAST type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_checkInstructionAST ("checkInstructionAST",
                                            & kTypeDescriptor_GALGAS_instructionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_checkInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_checkInstructionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_checkInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_checkInstructionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_checkInstructionAST GALGAS_checkInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_checkInstructionAST result ;
  const GALGAS_checkInstructionAST * p = (const GALGAS_checkInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_checkInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("checkInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_forInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_forInstructionAST * p = (const cPtr_forInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_forInstructionAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mVarName.objectCompare (p->mAttribute_mVarName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mIteratedExpression.objectCompare (p->mAttribute_mIteratedExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mEndOf_5F_iteratedExpression_5F_instruction.objectCompare (p->mAttribute_mEndOf_5F_iteratedExpression_5F_instruction) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mDoInstructionList.objectCompare (p->mAttribute_mDoInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mEndOf_5F_do_5F_instruction.objectCompare (p->mAttribute_mEndOf_5F_do_5F_instruction) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_forInstructionAST::objectCompare (const GALGAS_forInstructionAST & inOperand) const {
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

GALGAS_forInstructionAST::GALGAS_forInstructionAST (void) :
GALGAS_instructionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_forInstructionAST::GALGAS_forInstructionAST (const cPtr_forInstructionAST * inSourcePtr) :
GALGAS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_forInstructionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_forInstructionAST GALGAS_forInstructionAST::constructor_new (const GALGAS_lstring & inAttribute_mVarName,
                                                                    const GALGAS_expressionAST & inAttribute_mIteratedExpression,
                                                                    const GALGAS_location & inAttribute_mEndOf_5F_iteratedExpression_5F_instruction,
                                                                    const GALGAS_instructionListAST & inAttribute_mDoInstructionList,
                                                                    const GALGAS_location & inAttribute_mEndOf_5F_do_5F_instruction
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_forInstructionAST result ;
  if (inAttribute_mVarName.isValid () && inAttribute_mIteratedExpression.isValid () && inAttribute_mEndOf_5F_iteratedExpression_5F_instruction.isValid () && inAttribute_mDoInstructionList.isValid () && inAttribute_mEndOf_5F_do_5F_instruction.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_forInstructionAST (inAttribute_mVarName, inAttribute_mIteratedExpression, inAttribute_mEndOf_5F_iteratedExpression_5F_instruction, inAttribute_mDoInstructionList, inAttribute_mEndOf_5F_do_5F_instruction COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_forInstructionAST::getter_mVarName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_forInstructionAST * p = (const cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    result = p->mAttribute_mVarName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_forInstructionAST::getter_mVarName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mVarName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST GALGAS_forInstructionAST::getter_mIteratedExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_forInstructionAST * p = (const cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    result = p->mAttribute_mIteratedExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST cPtr_forInstructionAST::getter_mIteratedExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIteratedExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_forInstructionAST::getter_mEndOf_5F_iteratedExpression_5F_instruction (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_forInstructionAST * p = (const cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    result = p->mAttribute_mEndOf_5F_iteratedExpression_5F_instruction ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_forInstructionAST::getter_mEndOf_5F_iteratedExpression_5F_instruction (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOf_5F_iteratedExpression_5F_instruction ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST GALGAS_forInstructionAST::getter_mDoInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_instructionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_forInstructionAST * p = (const cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    result = p->mAttribute_mDoInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST cPtr_forInstructionAST::getter_mDoInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDoInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_forInstructionAST::getter_mEndOf_5F_do_5F_instruction (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_forInstructionAST * p = (const cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    result = p->mAttribute_mEndOf_5F_do_5F_instruction ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_forInstructionAST::getter_mEndOf_5F_do_5F_instruction (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOf_5F_do_5F_instruction ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                     Pointer class for @forInstructionAST class                                      *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_forInstructionAST::cPtr_forInstructionAST (const GALGAS_lstring & in_mVarName,
                                                const GALGAS_expressionAST & in_mIteratedExpression,
                                                const GALGAS_location & in_mEndOf_5F_iteratedExpression_5F_instruction,
                                                const GALGAS_instructionListAST & in_mDoInstructionList,
                                                const GALGAS_location & in_mEndOf_5F_do_5F_instruction
                                                COMMA_LOCATION_ARGS) :
cPtr_instructionAST (THERE),
mAttribute_mVarName (in_mVarName),
mAttribute_mIteratedExpression (in_mIteratedExpression),
mAttribute_mEndOf_5F_iteratedExpression_5F_instruction (in_mEndOf_5F_iteratedExpression_5F_instruction),
mAttribute_mDoInstructionList (in_mDoInstructionList),
mAttribute_mEndOf_5F_do_5F_instruction (in_mEndOf_5F_do_5F_instruction) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_forInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forInstructionAST ;
}

void cPtr_forInstructionAST::description (C_String & ioString,
                                          const int32_t inIndentation) const {
  ioString << "[@forInstructionAST:" ;
  mAttribute_mVarName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mIteratedExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mEndOf_5F_iteratedExpression_5F_instruction.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mDoInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mEndOf_5F_do_5F_instruction.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_forInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_forInstructionAST (mAttribute_mVarName, mAttribute_mIteratedExpression, mAttribute_mEndOf_5F_iteratedExpression_5F_instruction, mAttribute_mDoInstructionList, mAttribute_mEndOf_5F_do_5F_instruction COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @forInstructionAST type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_forInstructionAST ("forInstructionAST",
                                          & kTypeDescriptor_GALGAS_instructionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_forInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forInstructionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_forInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_forInstructionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_forInstructionAST GALGAS_forInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_forInstructionAST result ;
  const GALGAS_forInstructionAST * p = (const GALGAS_forInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_forInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("forInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_forLowerUpperBoundInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_forLowerUpperBoundInstructionAST * p = (const cPtr_forLowerUpperBoundInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mVarName.objectCompare (p->mAttribute_mVarName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mTypeName.objectCompare (p->mAttribute_mTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mLowerBoundExpression.objectCompare (p->mAttribute_mLowerBoundExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mEndOf_5F_lowerBoundExpression_5F_instruction.objectCompare (p->mAttribute_mEndOf_5F_lowerBoundExpression_5F_instruction) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mUpperBoundExpression.objectCompare (p->mAttribute_mUpperBoundExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mEndOf_5F_upperBoundExpression_5F_instruction.objectCompare (p->mAttribute_mEndOf_5F_upperBoundExpression_5F_instruction) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mDoInstructionList.objectCompare (p->mAttribute_mDoInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mEndOf_5F_do_5F_instruction.objectCompare (p->mAttribute_mEndOf_5F_do_5F_instruction) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_forLowerUpperBoundInstructionAST::objectCompare (const GALGAS_forLowerUpperBoundInstructionAST & inOperand) const {
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

GALGAS_forLowerUpperBoundInstructionAST::GALGAS_forLowerUpperBoundInstructionAST (void) :
GALGAS_instructionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_forLowerUpperBoundInstructionAST::GALGAS_forLowerUpperBoundInstructionAST (const cPtr_forLowerUpperBoundInstructionAST * inSourcePtr) :
GALGAS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_forLowerUpperBoundInstructionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_forLowerUpperBoundInstructionAST GALGAS_forLowerUpperBoundInstructionAST::constructor_new (const GALGAS_lstring & inAttribute_mVarName,
                                                                                                  const GALGAS_lstring & inAttribute_mTypeName,
                                                                                                  const GALGAS_expressionAST & inAttribute_mLowerBoundExpression,
                                                                                                  const GALGAS_location & inAttribute_mEndOf_5F_lowerBoundExpression_5F_instruction,
                                                                                                  const GALGAS_expressionAST & inAttribute_mUpperBoundExpression,
                                                                                                  const GALGAS_location & inAttribute_mEndOf_5F_upperBoundExpression_5F_instruction,
                                                                                                  const GALGAS_instructionListAST & inAttribute_mDoInstructionList,
                                                                                                  const GALGAS_location & inAttribute_mEndOf_5F_do_5F_instruction
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_forLowerUpperBoundInstructionAST result ;
  if (inAttribute_mVarName.isValid () && inAttribute_mTypeName.isValid () && inAttribute_mLowerBoundExpression.isValid () && inAttribute_mEndOf_5F_lowerBoundExpression_5F_instruction.isValid () && inAttribute_mUpperBoundExpression.isValid () && inAttribute_mEndOf_5F_upperBoundExpression_5F_instruction.isValid () && inAttribute_mDoInstructionList.isValid () && inAttribute_mEndOf_5F_do_5F_instruction.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_forLowerUpperBoundInstructionAST (inAttribute_mVarName, inAttribute_mTypeName, inAttribute_mLowerBoundExpression, inAttribute_mEndOf_5F_lowerBoundExpression_5F_instruction, inAttribute_mUpperBoundExpression, inAttribute_mEndOf_5F_upperBoundExpression_5F_instruction, inAttribute_mDoInstructionList, inAttribute_mEndOf_5F_do_5F_instruction COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_forLowerUpperBoundInstructionAST::getter_mVarName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_forLowerUpperBoundInstructionAST * p = (const cPtr_forLowerUpperBoundInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionAST) ;
    result = p->mAttribute_mVarName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_forLowerUpperBoundInstructionAST::getter_mVarName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mVarName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_forLowerUpperBoundInstructionAST::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_forLowerUpperBoundInstructionAST * p = (const cPtr_forLowerUpperBoundInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionAST) ;
    result = p->mAttribute_mTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_forLowerUpperBoundInstructionAST::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST GALGAS_forLowerUpperBoundInstructionAST::getter_mLowerBoundExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_forLowerUpperBoundInstructionAST * p = (const cPtr_forLowerUpperBoundInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionAST) ;
    result = p->mAttribute_mLowerBoundExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST cPtr_forLowerUpperBoundInstructionAST::getter_mLowerBoundExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLowerBoundExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_forLowerUpperBoundInstructionAST::getter_mEndOf_5F_lowerBoundExpression_5F_instruction (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_forLowerUpperBoundInstructionAST * p = (const cPtr_forLowerUpperBoundInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionAST) ;
    result = p->mAttribute_mEndOf_5F_lowerBoundExpression_5F_instruction ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_forLowerUpperBoundInstructionAST::getter_mEndOf_5F_lowerBoundExpression_5F_instruction (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOf_5F_lowerBoundExpression_5F_instruction ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST GALGAS_forLowerUpperBoundInstructionAST::getter_mUpperBoundExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_forLowerUpperBoundInstructionAST * p = (const cPtr_forLowerUpperBoundInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionAST) ;
    result = p->mAttribute_mUpperBoundExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST cPtr_forLowerUpperBoundInstructionAST::getter_mUpperBoundExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mUpperBoundExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_forLowerUpperBoundInstructionAST::getter_mEndOf_5F_upperBoundExpression_5F_instruction (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_forLowerUpperBoundInstructionAST * p = (const cPtr_forLowerUpperBoundInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionAST) ;
    result = p->mAttribute_mEndOf_5F_upperBoundExpression_5F_instruction ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_forLowerUpperBoundInstructionAST::getter_mEndOf_5F_upperBoundExpression_5F_instruction (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOf_5F_upperBoundExpression_5F_instruction ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST GALGAS_forLowerUpperBoundInstructionAST::getter_mDoInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_instructionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_forLowerUpperBoundInstructionAST * p = (const cPtr_forLowerUpperBoundInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionAST) ;
    result = p->mAttribute_mDoInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST cPtr_forLowerUpperBoundInstructionAST::getter_mDoInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDoInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_forLowerUpperBoundInstructionAST::getter_mEndOf_5F_do_5F_instruction (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_forLowerUpperBoundInstructionAST * p = (const cPtr_forLowerUpperBoundInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionAST) ;
    result = p->mAttribute_mEndOf_5F_do_5F_instruction ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_forLowerUpperBoundInstructionAST::getter_mEndOf_5F_do_5F_instruction (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOf_5F_do_5F_instruction ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                              Pointer class for @forLowerUpperBoundInstructionAST class                              *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_forLowerUpperBoundInstructionAST::cPtr_forLowerUpperBoundInstructionAST (const GALGAS_lstring & in_mVarName,
                                                                              const GALGAS_lstring & in_mTypeName,
                                                                              const GALGAS_expressionAST & in_mLowerBoundExpression,
                                                                              const GALGAS_location & in_mEndOf_5F_lowerBoundExpression_5F_instruction,
                                                                              const GALGAS_expressionAST & in_mUpperBoundExpression,
                                                                              const GALGAS_location & in_mEndOf_5F_upperBoundExpression_5F_instruction,
                                                                              const GALGAS_instructionListAST & in_mDoInstructionList,
                                                                              const GALGAS_location & in_mEndOf_5F_do_5F_instruction
                                                                              COMMA_LOCATION_ARGS) :
cPtr_instructionAST (THERE),
mAttribute_mVarName (in_mVarName),
mAttribute_mTypeName (in_mTypeName),
mAttribute_mLowerBoundExpression (in_mLowerBoundExpression),
mAttribute_mEndOf_5F_lowerBoundExpression_5F_instruction (in_mEndOf_5F_lowerBoundExpression_5F_instruction),
mAttribute_mUpperBoundExpression (in_mUpperBoundExpression),
mAttribute_mEndOf_5F_upperBoundExpression_5F_instruction (in_mEndOf_5F_upperBoundExpression_5F_instruction),
mAttribute_mDoInstructionList (in_mDoInstructionList),
mAttribute_mEndOf_5F_do_5F_instruction (in_mEndOf_5F_do_5F_instruction) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_forLowerUpperBoundInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forLowerUpperBoundInstructionAST ;
}

void cPtr_forLowerUpperBoundInstructionAST::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "[@forLowerUpperBoundInstructionAST:" ;
  mAttribute_mVarName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mLowerBoundExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mEndOf_5F_lowerBoundExpression_5F_instruction.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mUpperBoundExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mEndOf_5F_upperBoundExpression_5F_instruction.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mDoInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mEndOf_5F_do_5F_instruction.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_forLowerUpperBoundInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_forLowerUpperBoundInstructionAST (mAttribute_mVarName, mAttribute_mTypeName, mAttribute_mLowerBoundExpression, mAttribute_mEndOf_5F_lowerBoundExpression_5F_instruction, mAttribute_mUpperBoundExpression, mAttribute_mEndOf_5F_upperBoundExpression_5F_instruction, mAttribute_mDoInstructionList, mAttribute_mEndOf_5F_do_5F_instruction COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @forLowerUpperBoundInstructionAST type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_forLowerUpperBoundInstructionAST ("forLowerUpperBoundInstructionAST",
                                                         & kTypeDescriptor_GALGAS_instructionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_forLowerUpperBoundInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forLowerUpperBoundInstructionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_forLowerUpperBoundInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_forLowerUpperBoundInstructionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_forLowerUpperBoundInstructionAST GALGAS_forLowerUpperBoundInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_forLowerUpperBoundInstructionAST result ;
  const GALGAS_forLowerUpperBoundInstructionAST * p = (const GALGAS_forLowerUpperBoundInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_forLowerUpperBoundInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("forLowerUpperBoundInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_ifInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_ifInstructionAST * p = (const cPtr_ifInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_ifInstructionAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mTestExpression.objectCompare (p->mAttribute_mTestExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mTestExpressionEndLocation.objectCompare (p->mAttribute_mTestExpressionEndLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mThenInstructionList.objectCompare (p->mAttribute_mThenInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mEndOfThenInstructionList.objectCompare (p->mAttribute_mEndOfThenInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mElseInstructionList.objectCompare (p->mAttribute_mElseInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mEndOfElseInstructionList.objectCompare (p->mAttribute_mEndOfElseInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mEndOf_5F_if_5F_instruction.objectCompare (p->mAttribute_mEndOf_5F_if_5F_instruction) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_ifInstructionAST::objectCompare (const GALGAS_ifInstructionAST & inOperand) const {
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

GALGAS_ifInstructionAST::GALGAS_ifInstructionAST (void) :
GALGAS_instructionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ifInstructionAST::GALGAS_ifInstructionAST (const cPtr_ifInstructionAST * inSourcePtr) :
GALGAS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ifInstructionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ifInstructionAST GALGAS_ifInstructionAST::constructor_new (const GALGAS_expressionAST & inAttribute_mTestExpression,
                                                                  const GALGAS_location & inAttribute_mTestExpressionEndLocation,
                                                                  const GALGAS_instructionListAST & inAttribute_mThenInstructionList,
                                                                  const GALGAS_location & inAttribute_mEndOfThenInstructionList,
                                                                  const GALGAS_instructionListAST & inAttribute_mElseInstructionList,
                                                                  const GALGAS_location & inAttribute_mEndOfElseInstructionList,
                                                                  const GALGAS_location & inAttribute_mEndOf_5F_if_5F_instruction
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_ifInstructionAST result ;
  if (inAttribute_mTestExpression.isValid () && inAttribute_mTestExpressionEndLocation.isValid () && inAttribute_mThenInstructionList.isValid () && inAttribute_mEndOfThenInstructionList.isValid () && inAttribute_mElseInstructionList.isValid () && inAttribute_mEndOfElseInstructionList.isValid () && inAttribute_mEndOf_5F_if_5F_instruction.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_ifInstructionAST (inAttribute_mTestExpression, inAttribute_mTestExpressionEndLocation, inAttribute_mThenInstructionList, inAttribute_mEndOfThenInstructionList, inAttribute_mElseInstructionList, inAttribute_mEndOfElseInstructionList, inAttribute_mEndOf_5F_if_5F_instruction COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST GALGAS_ifInstructionAST::getter_mTestExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_ifInstructionAST * p = (const cPtr_ifInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionAST) ;
    result = p->mAttribute_mTestExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST cPtr_ifInstructionAST::getter_mTestExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTestExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_ifInstructionAST::getter_mTestExpressionEndLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_ifInstructionAST * p = (const cPtr_ifInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionAST) ;
    result = p->mAttribute_mTestExpressionEndLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_ifInstructionAST::getter_mTestExpressionEndLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTestExpressionEndLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST GALGAS_ifInstructionAST::getter_mThenInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_instructionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_ifInstructionAST * p = (const cPtr_ifInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionAST) ;
    result = p->mAttribute_mThenInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST cPtr_ifInstructionAST::getter_mThenInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mThenInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_ifInstructionAST::getter_mEndOfThenInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_ifInstructionAST * p = (const cPtr_ifInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionAST) ;
    result = p->mAttribute_mEndOfThenInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_ifInstructionAST::getter_mEndOfThenInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfThenInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST GALGAS_ifInstructionAST::getter_mElseInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_instructionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_ifInstructionAST * p = (const cPtr_ifInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionAST) ;
    result = p->mAttribute_mElseInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST cPtr_ifInstructionAST::getter_mElseInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mElseInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_ifInstructionAST::getter_mEndOfElseInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_ifInstructionAST * p = (const cPtr_ifInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionAST) ;
    result = p->mAttribute_mEndOfElseInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_ifInstructionAST::getter_mEndOfElseInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfElseInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_ifInstructionAST::getter_mEndOf_5F_if_5F_instruction (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_ifInstructionAST * p = (const cPtr_ifInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionAST) ;
    result = p->mAttribute_mEndOf_5F_if_5F_instruction ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_ifInstructionAST::getter_mEndOf_5F_if_5F_instruction (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOf_5F_if_5F_instruction ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                      Pointer class for @ifInstructionAST class                                      *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_ifInstructionAST::cPtr_ifInstructionAST (const GALGAS_expressionAST & in_mTestExpression,
                                              const GALGAS_location & in_mTestExpressionEndLocation,
                                              const GALGAS_instructionListAST & in_mThenInstructionList,
                                              const GALGAS_location & in_mEndOfThenInstructionList,
                                              const GALGAS_instructionListAST & in_mElseInstructionList,
                                              const GALGAS_location & in_mEndOfElseInstructionList,
                                              const GALGAS_location & in_mEndOf_5F_if_5F_instruction
                                              COMMA_LOCATION_ARGS) :
cPtr_instructionAST (THERE),
mAttribute_mTestExpression (in_mTestExpression),
mAttribute_mTestExpressionEndLocation (in_mTestExpressionEndLocation),
mAttribute_mThenInstructionList (in_mThenInstructionList),
mAttribute_mEndOfThenInstructionList (in_mEndOfThenInstructionList),
mAttribute_mElseInstructionList (in_mElseInstructionList),
mAttribute_mEndOfElseInstructionList (in_mEndOfElseInstructionList),
mAttribute_mEndOf_5F_if_5F_instruction (in_mEndOf_5F_if_5F_instruction) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_ifInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifInstructionAST ;
}

void cPtr_ifInstructionAST::description (C_String & ioString,
                                         const int32_t inIndentation) const {
  ioString << "[@ifInstructionAST:" ;
  mAttribute_mTestExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mTestExpressionEndLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mThenInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mEndOfThenInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mElseInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mEndOfElseInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mEndOf_5F_if_5F_instruction.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_ifInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_ifInstructionAST (mAttribute_mTestExpression, mAttribute_mTestExpressionEndLocation, mAttribute_mThenInstructionList, mAttribute_mEndOfThenInstructionList, mAttribute_mElseInstructionList, mAttribute_mEndOfElseInstructionList, mAttribute_mEndOf_5F_if_5F_instruction COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @ifInstructionAST type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ifInstructionAST ("ifInstructionAST",
                                         & kTypeDescriptor_GALGAS_instructionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_ifInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifInstructionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_ifInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ifInstructionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ifInstructionAST GALGAS_ifInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_ifInstructionAST result ;
  const GALGAS_ifInstructionAST * p = (const GALGAS_ifInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_ifInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ifInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_letInstructionWithAssignmentAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_letInstructionWithAssignmentAST * p = (const cPtr_letInstructionWithAssignmentAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_letInstructionWithAssignmentAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mVarName.objectCompare (p->mAttribute_mVarName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mOptionalTypeName.objectCompare (p->mAttribute_mOptionalTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSourceExpression.objectCompare (p->mAttribute_mSourceExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_letInstructionWithAssignmentAST::objectCompare (const GALGAS_letInstructionWithAssignmentAST & inOperand) const {
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

GALGAS_letInstructionWithAssignmentAST::GALGAS_letInstructionWithAssignmentAST (void) :
GALGAS_instructionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_letInstructionWithAssignmentAST::GALGAS_letInstructionWithAssignmentAST (const cPtr_letInstructionWithAssignmentAST * inSourcePtr) :
GALGAS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_letInstructionWithAssignmentAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_letInstructionWithAssignmentAST GALGAS_letInstructionWithAssignmentAST::constructor_new (const GALGAS_lstring & inAttribute_mVarName,
                                                                                                const GALGAS_lstring & inAttribute_mOptionalTypeName,
                                                                                                const GALGAS_expressionAST & inAttribute_mSourceExpression
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_letInstructionWithAssignmentAST result ;
  if (inAttribute_mVarName.isValid () && inAttribute_mOptionalTypeName.isValid () && inAttribute_mSourceExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_letInstructionWithAssignmentAST (inAttribute_mVarName, inAttribute_mOptionalTypeName, inAttribute_mSourceExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_letInstructionWithAssignmentAST::getter_mVarName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_letInstructionWithAssignmentAST * p = (const cPtr_letInstructionWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_letInstructionWithAssignmentAST) ;
    result = p->mAttribute_mVarName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_letInstructionWithAssignmentAST::getter_mVarName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mVarName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_letInstructionWithAssignmentAST::getter_mOptionalTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_letInstructionWithAssignmentAST * p = (const cPtr_letInstructionWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_letInstructionWithAssignmentAST) ;
    result = p->mAttribute_mOptionalTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_letInstructionWithAssignmentAST::getter_mOptionalTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOptionalTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST GALGAS_letInstructionWithAssignmentAST::getter_mSourceExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_letInstructionWithAssignmentAST * p = (const cPtr_letInstructionWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_letInstructionWithAssignmentAST) ;
    result = p->mAttribute_mSourceExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST cPtr_letInstructionWithAssignmentAST::getter_mSourceExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSourceExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                              Pointer class for @letInstructionWithAssignmentAST class                               *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_letInstructionWithAssignmentAST::cPtr_letInstructionWithAssignmentAST (const GALGAS_lstring & in_mVarName,
                                                                            const GALGAS_lstring & in_mOptionalTypeName,
                                                                            const GALGAS_expressionAST & in_mSourceExpression
                                                                            COMMA_LOCATION_ARGS) :
cPtr_instructionAST (THERE),
mAttribute_mVarName (in_mVarName),
mAttribute_mOptionalTypeName (in_mOptionalTypeName),
mAttribute_mSourceExpression (in_mSourceExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_letInstructionWithAssignmentAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_letInstructionWithAssignmentAST ;
}

void cPtr_letInstructionWithAssignmentAST::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "[@letInstructionWithAssignmentAST:" ;
  mAttribute_mVarName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mOptionalTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mSourceExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_letInstructionWithAssignmentAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_letInstructionWithAssignmentAST (mAttribute_mVarName, mAttribute_mOptionalTypeName, mAttribute_mSourceExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @letInstructionWithAssignmentAST type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_letInstructionWithAssignmentAST ("letInstructionWithAssignmentAST",
                                                        & kTypeDescriptor_GALGAS_instructionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_letInstructionWithAssignmentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_letInstructionWithAssignmentAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_letInstructionWithAssignmentAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_letInstructionWithAssignmentAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_letInstructionWithAssignmentAST GALGAS_letInstructionWithAssignmentAST::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_letInstructionWithAssignmentAST result ;
  const GALGAS_letInstructionWithAssignmentAST * p = (const GALGAS_letInstructionWithAssignmentAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_letInstructionWithAssignmentAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("letInstructionWithAssignmentAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_panicInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_panicInstructionAST * p = (const cPtr_panicInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_panicInstructionAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mThrowLocation.objectCompare (p->mAttribute_mThrowLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mCodeExpression.objectCompare (p->mAttribute_mCodeExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_panicInstructionAST::objectCompare (const GALGAS_panicInstructionAST & inOperand) const {
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

GALGAS_panicInstructionAST::GALGAS_panicInstructionAST (void) :
GALGAS_instructionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_panicInstructionAST::GALGAS_panicInstructionAST (const cPtr_panicInstructionAST * inSourcePtr) :
GALGAS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_panicInstructionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_panicInstructionAST GALGAS_panicInstructionAST::constructor_new (const GALGAS_location & inAttribute_mThrowLocation,
                                                                        const GALGAS_expressionAST & inAttribute_mCodeExpression
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_panicInstructionAST result ;
  if (inAttribute_mThrowLocation.isValid () && inAttribute_mCodeExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_panicInstructionAST (inAttribute_mThrowLocation, inAttribute_mCodeExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_panicInstructionAST::getter_mThrowLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_panicInstructionAST * p = (const cPtr_panicInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_panicInstructionAST) ;
    result = p->mAttribute_mThrowLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_panicInstructionAST::getter_mThrowLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mThrowLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST GALGAS_panicInstructionAST::getter_mCodeExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_panicInstructionAST * p = (const cPtr_panicInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_panicInstructionAST) ;
    result = p->mAttribute_mCodeExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST cPtr_panicInstructionAST::getter_mCodeExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mCodeExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                    Pointer class for @panicInstructionAST class                                     *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_panicInstructionAST::cPtr_panicInstructionAST (const GALGAS_location & in_mThrowLocation,
                                                    const GALGAS_expressionAST & in_mCodeExpression
                                                    COMMA_LOCATION_ARGS) :
cPtr_instructionAST (THERE),
mAttribute_mThrowLocation (in_mThrowLocation),
mAttribute_mCodeExpression (in_mCodeExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_panicInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_panicInstructionAST ;
}

void cPtr_panicInstructionAST::description (C_String & ioString,
                                            const int32_t inIndentation) const {
  ioString << "[@panicInstructionAST:" ;
  mAttribute_mThrowLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mCodeExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_panicInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_panicInstructionAST (mAttribute_mThrowLocation, mAttribute_mCodeExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @panicInstructionAST type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_panicInstructionAST ("panicInstructionAST",
                                            & kTypeDescriptor_GALGAS_instructionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_panicInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_panicInstructionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_panicInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_panicInstructionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_panicInstructionAST GALGAS_panicInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_panicInstructionAST result ;
  const GALGAS_panicInstructionAST * p = (const GALGAS_panicInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_panicInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("panicInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_syncInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_syncInstructionAST * p = (const cPtr_syncInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_syncInstructionAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mStartOf_5F_on_5F_instruction.objectCompare (p->mAttribute_mStartOf_5F_on_5F_instruction) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mBranchList.objectCompare (p->mAttribute_mBranchList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mEndOf_5F_on_5F_instruction.objectCompare (p->mAttribute_mEndOf_5F_on_5F_instruction) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_syncInstructionAST::objectCompare (const GALGAS_syncInstructionAST & inOperand) const {
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

GALGAS_syncInstructionAST::GALGAS_syncInstructionAST (void) :
GALGAS_instructionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syncInstructionAST GALGAS_syncInstructionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_syncInstructionAST::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                     GALGAS_syncInstructionBranchList::constructor_emptyList (HERE),
                                                     GALGAS_location::constructor_nowhere (HERE)
                                                     COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syncInstructionAST::GALGAS_syncInstructionAST (const cPtr_syncInstructionAST * inSourcePtr) :
GALGAS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_syncInstructionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syncInstructionAST GALGAS_syncInstructionAST::constructor_new (const GALGAS_location & inAttribute_mStartOf_5F_on_5F_instruction,
                                                                      const GALGAS_syncInstructionBranchList & inAttribute_mBranchList,
                                                                      const GALGAS_location & inAttribute_mEndOf_5F_on_5F_instruction
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_syncInstructionAST result ;
  if (inAttribute_mStartOf_5F_on_5F_instruction.isValid () && inAttribute_mBranchList.isValid () && inAttribute_mEndOf_5F_on_5F_instruction.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_syncInstructionAST (inAttribute_mStartOf_5F_on_5F_instruction, inAttribute_mBranchList, inAttribute_mEndOf_5F_on_5F_instruction COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_syncInstructionAST::getter_mStartOf_5F_on_5F_instruction (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_syncInstructionAST * p = (const cPtr_syncInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syncInstructionAST) ;
    result = p->mAttribute_mStartOf_5F_on_5F_instruction ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_syncInstructionAST::getter_mStartOf_5F_on_5F_instruction (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mStartOf_5F_on_5F_instruction ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syncInstructionBranchList GALGAS_syncInstructionAST::getter_mBranchList (UNUSED_LOCATION_ARGS) const {
  GALGAS_syncInstructionBranchList result ;
  if (NULL != mObjectPtr) {
    const cPtr_syncInstructionAST * p = (const cPtr_syncInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syncInstructionAST) ;
    result = p->mAttribute_mBranchList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syncInstructionBranchList cPtr_syncInstructionAST::getter_mBranchList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBranchList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_syncInstructionAST::getter_mEndOf_5F_on_5F_instruction (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_syncInstructionAST * p = (const cPtr_syncInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syncInstructionAST) ;
    result = p->mAttribute_mEndOf_5F_on_5F_instruction ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_syncInstructionAST::getter_mEndOf_5F_on_5F_instruction (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOf_5F_on_5F_instruction ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                     Pointer class for @syncInstructionAST class                                     *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_syncInstructionAST::cPtr_syncInstructionAST (const GALGAS_location & in_mStartOf_5F_on_5F_instruction,
                                                  const GALGAS_syncInstructionBranchList & in_mBranchList,
                                                  const GALGAS_location & in_mEndOf_5F_on_5F_instruction
                                                  COMMA_LOCATION_ARGS) :
cPtr_instructionAST (THERE),
mAttribute_mStartOf_5F_on_5F_instruction (in_mStartOf_5F_on_5F_instruction),
mAttribute_mBranchList (in_mBranchList),
mAttribute_mEndOf_5F_on_5F_instruction (in_mEndOf_5F_on_5F_instruction) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_syncInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syncInstructionAST ;
}

void cPtr_syncInstructionAST::description (C_String & ioString,
                                           const int32_t inIndentation) const {
  ioString << "[@syncInstructionAST:" ;
  mAttribute_mStartOf_5F_on_5F_instruction.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mBranchList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mEndOf_5F_on_5F_instruction.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_syncInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_syncInstructionAST (mAttribute_mStartOf_5F_on_5F_instruction, mAttribute_mBranchList, mAttribute_mEndOf_5F_on_5F_instruction COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @syncInstructionAST type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_syncInstructionAST ("syncInstructionAST",
                                           & kTypeDescriptor_GALGAS_instructionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_syncInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syncInstructionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_syncInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_syncInstructionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syncInstructionAST GALGAS_syncInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_syncInstructionAST result ;
  const GALGAS_syncInstructionAST * p = (const GALGAS_syncInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_syncInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syncInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
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
    result = mAttribute_mAssignmentTargetAST.objectCompare (p->mAttribute_mAssignmentTargetAST) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSourceExpression.objectCompare (p->mAttribute_mSourceExpression) ;
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
    result = p->mAttribute_mAssignmentTargetAST ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_assignmentTargetAST cPtr_varAssignmentInstructionAST::getter_mAssignmentTargetAST (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAssignmentTargetAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST GALGAS_varAssignmentInstructionAST::getter_mSourceExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_varAssignmentInstructionAST * p = (const cPtr_varAssignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varAssignmentInstructionAST) ;
    result = p->mAttribute_mSourceExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST cPtr_varAssignmentInstructionAST::getter_mSourceExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSourceExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                Pointer class for @varAssignmentInstructionAST class                                 *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_varAssignmentInstructionAST::cPtr_varAssignmentInstructionAST (const GALGAS_assignmentTargetAST & in_mAssignmentTargetAST,
                                                                    const GALGAS_expressionAST & in_mSourceExpression
                                                                    COMMA_LOCATION_ARGS) :
cPtr_instructionAST (THERE),
mAttribute_mAssignmentTargetAST (in_mAssignmentTargetAST),
mAttribute_mSourceExpression (in_mSourceExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_varAssignmentInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varAssignmentInstructionAST ;
}

void cPtr_varAssignmentInstructionAST::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "[@varAssignmentInstructionAST:" ;
  mAttribute_mAssignmentTargetAST.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mSourceExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_varAssignmentInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_varAssignmentInstructionAST (mAttribute_mAssignmentTargetAST, mAttribute_mSourceExpression COMMA_THERE)) ;
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
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_varInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_varInstructionAST * p = (const cPtr_varInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_varInstructionAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mVarName.objectCompare (p->mAttribute_mVarName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mTypeName.objectCompare (p->mAttribute_mTypeName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_varInstructionAST::objectCompare (const GALGAS_varInstructionAST & inOperand) const {
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

GALGAS_varInstructionAST::GALGAS_varInstructionAST (void) :
GALGAS_instructionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_varInstructionAST GALGAS_varInstructionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_varInstructionAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                    GALGAS_lstring::constructor_default (HERE)
                                                    COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_varInstructionAST::GALGAS_varInstructionAST (const cPtr_varInstructionAST * inSourcePtr) :
GALGAS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_varInstructionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_varInstructionAST GALGAS_varInstructionAST::constructor_new (const GALGAS_lstring & inAttribute_mVarName,
                                                                    const GALGAS_lstring & inAttribute_mTypeName
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_varInstructionAST result ;
  if (inAttribute_mVarName.isValid () && inAttribute_mTypeName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_varInstructionAST (inAttribute_mVarName, inAttribute_mTypeName COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_varInstructionAST::getter_mVarName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_varInstructionAST * p = (const cPtr_varInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varInstructionAST) ;
    result = p->mAttribute_mVarName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_varInstructionAST::getter_mVarName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mVarName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_varInstructionAST::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_varInstructionAST * p = (const cPtr_varInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varInstructionAST) ;
    result = p->mAttribute_mTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_varInstructionAST::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                     Pointer class for @varInstructionAST class                                      *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_varInstructionAST::cPtr_varInstructionAST (const GALGAS_lstring & in_mVarName,
                                                const GALGAS_lstring & in_mTypeName
                                                COMMA_LOCATION_ARGS) :
cPtr_instructionAST (THERE),
mAttribute_mVarName (in_mVarName),
mAttribute_mTypeName (in_mTypeName) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_varInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varInstructionAST ;
}

void cPtr_varInstructionAST::description (C_String & ioString,
                                          const int32_t inIndentation) const {
  ioString << "[@varInstructionAST:" ;
  mAttribute_mVarName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mTypeName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_varInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_varInstructionAST (mAttribute_mVarName, mAttribute_mTypeName COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @varInstructionAST type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_varInstructionAST ("varInstructionAST",
                                          & kTypeDescriptor_GALGAS_instructionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_varInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varInstructionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_varInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_varInstructionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_varInstructionAST GALGAS_varInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_varInstructionAST result ;
  const GALGAS_varInstructionAST * p = (const GALGAS_varInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_varInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("varInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_varInstructionWithAssignmentAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_varInstructionWithAssignmentAST * p = (const cPtr_varInstructionWithAssignmentAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_varInstructionWithAssignmentAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mVarName.objectCompare (p->mAttribute_mVarName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mOptionalTypeName.objectCompare (p->mAttribute_mOptionalTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSourceExpression.objectCompare (p->mAttribute_mSourceExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_varInstructionWithAssignmentAST::objectCompare (const GALGAS_varInstructionWithAssignmentAST & inOperand) const {
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

GALGAS_varInstructionWithAssignmentAST::GALGAS_varInstructionWithAssignmentAST (void) :
GALGAS_instructionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_varInstructionWithAssignmentAST::GALGAS_varInstructionWithAssignmentAST (const cPtr_varInstructionWithAssignmentAST * inSourcePtr) :
GALGAS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_varInstructionWithAssignmentAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_varInstructionWithAssignmentAST GALGAS_varInstructionWithAssignmentAST::constructor_new (const GALGAS_lstring & inAttribute_mVarName,
                                                                                                const GALGAS_lstring & inAttribute_mOptionalTypeName,
                                                                                                const GALGAS_expressionAST & inAttribute_mSourceExpression
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_varInstructionWithAssignmentAST result ;
  if (inAttribute_mVarName.isValid () && inAttribute_mOptionalTypeName.isValid () && inAttribute_mSourceExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_varInstructionWithAssignmentAST (inAttribute_mVarName, inAttribute_mOptionalTypeName, inAttribute_mSourceExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_varInstructionWithAssignmentAST::getter_mVarName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_varInstructionWithAssignmentAST * p = (const cPtr_varInstructionWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varInstructionWithAssignmentAST) ;
    result = p->mAttribute_mVarName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_varInstructionWithAssignmentAST::getter_mVarName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mVarName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_varInstructionWithAssignmentAST::getter_mOptionalTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_varInstructionWithAssignmentAST * p = (const cPtr_varInstructionWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varInstructionWithAssignmentAST) ;
    result = p->mAttribute_mOptionalTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_varInstructionWithAssignmentAST::getter_mOptionalTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOptionalTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST GALGAS_varInstructionWithAssignmentAST::getter_mSourceExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_varInstructionWithAssignmentAST * p = (const cPtr_varInstructionWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varInstructionWithAssignmentAST) ;
    result = p->mAttribute_mSourceExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST cPtr_varInstructionWithAssignmentAST::getter_mSourceExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSourceExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                              Pointer class for @varInstructionWithAssignmentAST class                               *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_varInstructionWithAssignmentAST::cPtr_varInstructionWithAssignmentAST (const GALGAS_lstring & in_mVarName,
                                                                            const GALGAS_lstring & in_mOptionalTypeName,
                                                                            const GALGAS_expressionAST & in_mSourceExpression
                                                                            COMMA_LOCATION_ARGS) :
cPtr_instructionAST (THERE),
mAttribute_mVarName (in_mVarName),
mAttribute_mOptionalTypeName (in_mOptionalTypeName),
mAttribute_mSourceExpression (in_mSourceExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_varInstructionWithAssignmentAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varInstructionWithAssignmentAST ;
}

void cPtr_varInstructionWithAssignmentAST::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "[@varInstructionWithAssignmentAST:" ;
  mAttribute_mVarName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mOptionalTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mSourceExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_varInstructionWithAssignmentAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_varInstructionWithAssignmentAST (mAttribute_mVarName, mAttribute_mOptionalTypeName, mAttribute_mSourceExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @varInstructionWithAssignmentAST type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_varInstructionWithAssignmentAST ("varInstructionWithAssignmentAST",
                                                        & kTypeDescriptor_GALGAS_instructionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_varInstructionWithAssignmentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varInstructionWithAssignmentAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_varInstructionWithAssignmentAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_varInstructionWithAssignmentAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_varInstructionWithAssignmentAST GALGAS_varInstructionWithAssignmentAST::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_varInstructionWithAssignmentAST result ;
  const GALGAS_varInstructionWithAssignmentAST * p = (const GALGAS_varInstructionWithAssignmentAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_varInstructionWithAssignmentAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("varInstructionWithAssignmentAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_varOperatorAssignInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_varOperatorAssignInstructionAST * p = (const cPtr_varOperatorAssignInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_varOperatorAssignInstructionAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mAssignmentTargetAST.objectCompare (p->mAttribute_mAssignmentTargetAST) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mOperator.objectCompare (p->mAttribute_mOperator) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSourceExpression.objectCompare (p->mAttribute_mSourceExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_varOperatorAssignInstructionAST::objectCompare (const GALGAS_varOperatorAssignInstructionAST & inOperand) const {
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

GALGAS_varOperatorAssignInstructionAST::GALGAS_varOperatorAssignInstructionAST (void) :
GALGAS_instructionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_varOperatorAssignInstructionAST::GALGAS_varOperatorAssignInstructionAST (const cPtr_varOperatorAssignInstructionAST * inSourcePtr) :
GALGAS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_varOperatorAssignInstructionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_varOperatorAssignInstructionAST GALGAS_varOperatorAssignInstructionAST::constructor_new (const GALGAS_assignmentTargetAST & inAttribute_mAssignmentTargetAST,
                                                                                                const GALGAS_operatorAssignmentKind & inAttribute_mOperator,
                                                                                                const GALGAS_expressionAST & inAttribute_mSourceExpression
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_varOperatorAssignInstructionAST result ;
  if (inAttribute_mAssignmentTargetAST.isValid () && inAttribute_mOperator.isValid () && inAttribute_mSourceExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_varOperatorAssignInstructionAST (inAttribute_mAssignmentTargetAST, inAttribute_mOperator, inAttribute_mSourceExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_assignmentTargetAST GALGAS_varOperatorAssignInstructionAST::getter_mAssignmentTargetAST (UNUSED_LOCATION_ARGS) const {
  GALGAS_assignmentTargetAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_varOperatorAssignInstructionAST * p = (const cPtr_varOperatorAssignInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varOperatorAssignInstructionAST) ;
    result = p->mAttribute_mAssignmentTargetAST ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_assignmentTargetAST cPtr_varOperatorAssignInstructionAST::getter_mAssignmentTargetAST (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAssignmentTargetAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operatorAssignmentKind GALGAS_varOperatorAssignInstructionAST::getter_mOperator (UNUSED_LOCATION_ARGS) const {
  GALGAS_operatorAssignmentKind result ;
  if (NULL != mObjectPtr) {
    const cPtr_varOperatorAssignInstructionAST * p = (const cPtr_varOperatorAssignInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varOperatorAssignInstructionAST) ;
    result = p->mAttribute_mOperator ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operatorAssignmentKind cPtr_varOperatorAssignInstructionAST::getter_mOperator (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOperator ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST GALGAS_varOperatorAssignInstructionAST::getter_mSourceExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_varOperatorAssignInstructionAST * p = (const cPtr_varOperatorAssignInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varOperatorAssignInstructionAST) ;
    result = p->mAttribute_mSourceExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST cPtr_varOperatorAssignInstructionAST::getter_mSourceExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSourceExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                              Pointer class for @varOperatorAssignInstructionAST class                               *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_varOperatorAssignInstructionAST::cPtr_varOperatorAssignInstructionAST (const GALGAS_assignmentTargetAST & in_mAssignmentTargetAST,
                                                                            const GALGAS_operatorAssignmentKind & in_mOperator,
                                                                            const GALGAS_expressionAST & in_mSourceExpression
                                                                            COMMA_LOCATION_ARGS) :
cPtr_instructionAST (THERE),
mAttribute_mAssignmentTargetAST (in_mAssignmentTargetAST),
mAttribute_mOperator (in_mOperator),
mAttribute_mSourceExpression (in_mSourceExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_varOperatorAssignInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varOperatorAssignInstructionAST ;
}

void cPtr_varOperatorAssignInstructionAST::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "[@varOperatorAssignInstructionAST:" ;
  mAttribute_mAssignmentTargetAST.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mOperator.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mSourceExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_varOperatorAssignInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_varOperatorAssignInstructionAST (mAttribute_mAssignmentTargetAST, mAttribute_mOperator, mAttribute_mSourceExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @varOperatorAssignInstructionAST type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_varOperatorAssignInstructionAST ("varOperatorAssignInstructionAST",
                                                        & kTypeDescriptor_GALGAS_instructionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_varOperatorAssignInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varOperatorAssignInstructionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_varOperatorAssignInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_varOperatorAssignInstructionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_varOperatorAssignInstructionAST GALGAS_varOperatorAssignInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_varOperatorAssignInstructionAST result ;
  const GALGAS_varOperatorAssignInstructionAST * p = (const GALGAS_varOperatorAssignInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_varOperatorAssignInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("varOperatorAssignInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_whileInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_whileInstructionAST * p = (const cPtr_whileInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_whileInstructionAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mTestExpression.objectCompare (p->mAttribute_mTestExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mEndOf_5F_test_5F_expression.objectCompare (p->mAttribute_mEndOf_5F_test_5F_expression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mWhileInstructionList.objectCompare (p->mAttribute_mWhileInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mEndOf_5F_while_5F_instruction.objectCompare (p->mAttribute_mEndOf_5F_while_5F_instruction) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_whileInstructionAST::objectCompare (const GALGAS_whileInstructionAST & inOperand) const {
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

GALGAS_whileInstructionAST::GALGAS_whileInstructionAST (void) :
GALGAS_instructionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_whileInstructionAST::GALGAS_whileInstructionAST (const cPtr_whileInstructionAST * inSourcePtr) :
GALGAS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_whileInstructionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_whileInstructionAST GALGAS_whileInstructionAST::constructor_new (const GALGAS_expressionAST & inAttribute_mTestExpression,
                                                                        const GALGAS_location & inAttribute_mEndOf_5F_test_5F_expression,
                                                                        const GALGAS_instructionListAST & inAttribute_mWhileInstructionList,
                                                                        const GALGAS_location & inAttribute_mEndOf_5F_while_5F_instruction
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_whileInstructionAST result ;
  if (inAttribute_mTestExpression.isValid () && inAttribute_mEndOf_5F_test_5F_expression.isValid () && inAttribute_mWhileInstructionList.isValid () && inAttribute_mEndOf_5F_while_5F_instruction.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_whileInstructionAST (inAttribute_mTestExpression, inAttribute_mEndOf_5F_test_5F_expression, inAttribute_mWhileInstructionList, inAttribute_mEndOf_5F_while_5F_instruction COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST GALGAS_whileInstructionAST::getter_mTestExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_whileInstructionAST * p = (const cPtr_whileInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_whileInstructionAST) ;
    result = p->mAttribute_mTestExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST cPtr_whileInstructionAST::getter_mTestExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTestExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_whileInstructionAST::getter_mEndOf_5F_test_5F_expression (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_whileInstructionAST * p = (const cPtr_whileInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_whileInstructionAST) ;
    result = p->mAttribute_mEndOf_5F_test_5F_expression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_whileInstructionAST::getter_mEndOf_5F_test_5F_expression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOf_5F_test_5F_expression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST GALGAS_whileInstructionAST::getter_mWhileInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_instructionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_whileInstructionAST * p = (const cPtr_whileInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_whileInstructionAST) ;
    result = p->mAttribute_mWhileInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST cPtr_whileInstructionAST::getter_mWhileInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mWhileInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_whileInstructionAST::getter_mEndOf_5F_while_5F_instruction (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_whileInstructionAST * p = (const cPtr_whileInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_whileInstructionAST) ;
    result = p->mAttribute_mEndOf_5F_while_5F_instruction ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_whileInstructionAST::getter_mEndOf_5F_while_5F_instruction (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOf_5F_while_5F_instruction ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                    Pointer class for @whileInstructionAST class                                     *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_whileInstructionAST::cPtr_whileInstructionAST (const GALGAS_expressionAST & in_mTestExpression,
                                                    const GALGAS_location & in_mEndOf_5F_test_5F_expression,
                                                    const GALGAS_instructionListAST & in_mWhileInstructionList,
                                                    const GALGAS_location & in_mEndOf_5F_while_5F_instruction
                                                    COMMA_LOCATION_ARGS) :
cPtr_instructionAST (THERE),
mAttribute_mTestExpression (in_mTestExpression),
mAttribute_mEndOf_5F_test_5F_expression (in_mEndOf_5F_test_5F_expression),
mAttribute_mWhileInstructionList (in_mWhileInstructionList),
mAttribute_mEndOf_5F_while_5F_instruction (in_mEndOf_5F_while_5F_instruction) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_whileInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_whileInstructionAST ;
}

void cPtr_whileInstructionAST::description (C_String & ioString,
                                            const int32_t inIndentation) const {
  ioString << "[@whileInstructionAST:" ;
  mAttribute_mTestExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mEndOf_5F_test_5F_expression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mWhileInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mEndOf_5F_while_5F_instruction.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_whileInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_whileInstructionAST (mAttribute_mTestExpression, mAttribute_mEndOf_5F_test_5F_expression, mAttribute_mWhileInstructionList, mAttribute_mEndOf_5F_while_5F_instruction COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @whileInstructionAST type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_whileInstructionAST ("whileInstructionAST",
                                            & kTypeDescriptor_GALGAS_instructionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_whileInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_whileInstructionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_whileInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_whileInstructionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_whileInstructionAST GALGAS_whileInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_whileInstructionAST result ;
  const GALGAS_whileInstructionAST * p = (const GALGAS_whileInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_whileInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("whileInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

#include "project_header.h"
#include "command_line_interface/F_mainForLIBPM.h"
#include "command_line_interface/F_Analyze_CLI_Options.h"
#include "utilities/F_DisplayException.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "galgas2/F_verbose_output.h"
#include "galgas2/cLexiqueIntrospection.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      print_tool_help_message                                                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void print_tool_help_message (void) {
  co << "Compiled with GALGAS revision NUMERO_REVISION_GALGAS\n" ;
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * kSourceFileExtensions [] = {
  "plm-target",
  "plm",
  NULL
} ;    

//---------------------------------------------------------------------------------------------------------------------*

static const char * kSourceFileHelpMessages [] = {
  "a target definition text file with the .plm-target extension",
  "a source text file with the .plm extension",
  NULL
} ;    

//---------------------------------------------------------------------------------------------------------------------*

const char * projectVersionString (void) {
  return "1.0.0" ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  Routine 'before'                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void routine_before (C_Compiler * inCompiler
                            COMMA_UNUSED_LOCATION_ARGS) {
  {
    GALGAS_filewrapper var_fw_1172 = GALGAS_filewrapper (gWrapperDirectory_0_targetTemplates) ;
    const enumGalgasBool test_0 = GALGAS_bool (gOption_plm_5F_options_listEmbeddedTargets.getter_value ()).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_stringlist var_embeddedFiles_1283 = var_fw_1172.getter_allTextFilePathes (SOURCE_FILE ("target-generation.galgas", 26)) ;
      inCompiler->printMessage (GALGAS_string ("Embedded targets:\n")  COMMA_SOURCE_FILE ("target-generation.galgas", 27)) ;
      cEnumerator_stringlist enumerator_1371 (var_embeddedFiles_1283, kEnumeration_up) ;
      while (enumerator_1371.hasCurrentObject ()) {
        const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_1371.current_mValue (HERE).getter_pathExtension (SOURCE_FILE ("target-generation.galgas", 29)).objectCompare (GALGAS_string ("plm-target"))).boolEnum () ;
        if (kBoolTrue == test_1) {
          inCompiler->printMessage (GALGAS_string ("  ").add_operation (enumerator_1371.current_mValue (HERE).getter_lastPathComponent (SOURCE_FILE ("target-generation.galgas", 30)).getter_stringByDeletingPathExtension (SOURCE_FILE ("target-generation.galgas", 30)), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 30)).add_operation (GALGAS_char (TO_UNICODE (10)).getter_string (SOURCE_FILE ("target-generation.galgas", 30)), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 30))  COMMA_SOURCE_FILE ("target-generation.galgas", 30)) ;
        }
        enumerator_1371.gotoNextObject () ;
      }
    }
    GALGAS_string var_path_1541 = GALGAS_string (gOption_plm_5F_options_extractEmbeddedTargets.getter_value ()) ;
    const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_path_1541.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_stringlist var_embeddedFiles_1636 = var_fw_1172.getter_allTextFilePathes (SOURCE_FILE ("target-generation.galgas", 36)) ;
      cEnumerator_stringlist enumerator_1690 (var_embeddedFiles_1636, kEnumeration_up) ;
      while (enumerator_1690.hasCurrentObject ()) {
        GALGAS_string var_filePath_1712 = var_path_1541.add_operation (enumerator_1690.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 38)) ;
        inCompiler->printMessage (GALGAS_string ("  ").add_operation (var_filePath_1712, inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 39)).add_operation (GALGAS_char (TO_UNICODE (10)).getter_string (SOURCE_FILE ("target-generation.galgas", 39)), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 39))  COMMA_SOURCE_FILE ("target-generation.galgas", 39)) ;
        GALGAS_string var_dir_1778 = var_filePath_1712.getter_stringByDeletingLastPathComponent (SOURCE_FILE ("target-generation.galgas", 40)) ;
        var_dir_1778.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 41)) ;
        GALGAS_string var_text_1870 = var_fw_1172.getter_textFileContentsAtPath (enumerator_1690.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 42)) ;
        GALGAS_bool joker_1962 ; // Joker input parameter
        var_text_1870.method_writeToFileWhenDifferentContents (var_filePath_1712, joker_1962, inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 43)) ;
        enumerator_1690.gotoNextObject () ;
      }
    }
  }
  {
    GALGAS_filewrapper var_fw_602 = GALGAS_filewrapper (gWrapperDirectory_0_embeddedSampleCode) ;
    const enumGalgasBool test_3 = GALGAS_bool (gOption_plm_5F_options_listEmbeddedSampleFiles.getter_value ()).boolEnum () ;
    if (kBoolTrue == test_3) {
      GALGAS_stringlist var_files_712 = var_fw_602.getter_allTextFilePathes (SOURCE_FILE ("embedded-sample-code.galgas", 16)) ;
      inCompiler->printMessage (GALGAS_string ("Embedded sample code:\n")  COMMA_SOURCE_FILE ("embedded-sample-code.galgas", 17)) ;
      cEnumerator_stringlist enumerator_796 (var_files_712, kEnumeration_up) ;
      while (enumerator_796.hasCurrentObject ()) {
        inCompiler->printMessage (GALGAS_string ("  ").add_operation (enumerator_796.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("embedded-sample-code.galgas", 19)).add_operation (GALGAS_char (TO_UNICODE (10)).getter_string (SOURCE_FILE ("embedded-sample-code.galgas", 19)), inCompiler COMMA_SOURCE_FILE ("embedded-sample-code.galgas", 19))  COMMA_SOURCE_FILE ("embedded-sample-code.galgas", 19)) ;
        enumerator_796.gotoNextObject () ;
      }
    }
    GALGAS_string var_path_854 = GALGAS_string (gOption_plm_5F_options_extractEmbeddedSampleFile.getter_value ()) ;
    const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, var_path_854.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_4) {
      const enumGalgasBool test_5 = var_fw_602.getter_fileExistsAtPath (var_path_854, inCompiler COMMA_SOURCE_FILE ("embedded-sample-code.galgas", 24)).boolEnum () ;
      if (kBoolTrue == test_5) {
        GALGAS_string var_text_985 = var_fw_602.getter_textFileContentsAtPath (var_path_854, inCompiler COMMA_SOURCE_FILE ("embedded-sample-code.galgas", 25)) ;
        GALGAS_string var_sourceName_1042 = var_path_854.getter_lastPathComponent (SOURCE_FILE ("embedded-sample-code.galgas", 26)) ;
        GALGAS_bool joker_1128 ; // Joker input parameter
        var_text_985.method_writeToFileWhenDifferentContents (var_sourceName_1042, joker_1128, inCompiler COMMA_SOURCE_FILE ("embedded-sample-code.galgas", 27)) ;
      }else if (kBoolFalse == test_5) {
        inCompiler->emitSemanticError (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("embedded-sample-code.galgas", 29)).getter_location (SOURCE_FILE ("embedded-sample-code.galgas", 29)), GALGAS_string ("there is no '").add_operation (var_path_854, inCompiler COMMA_SOURCE_FILE ("embedded-sample-code.galgas", 29)).add_operation (GALGAS_string ("' embedded file"), inCompiler COMMA_SOURCE_FILE ("embedded-sample-code.galgas", 29))  COMMA_SOURCE_FILE ("embedded-sample-code.galgas", 29)) ;
      }
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                   Routine 'after'                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void routine_after (C_Compiler * /* inCompiler */
                           COMMA_UNUSED_LOCATION_ARGS) {
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               Routine 'programRule_0'                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void routine_programRule_5F__30_ (const GALGAS_lstring /* constinArgument_inSourceFile */,
                                         C_Compiler * /* inCompiler */
                                         COMMA_UNUSED_LOCATION_ARGS) {
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               Routine 'programRule_1'                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void routine_programRule_5F__31_ (const GALGAS_lstring constinArgument_inSourceFile,
                                         C_Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, GALGAS_string (gOption_galgas_5F_builtin_5F_options_mode.getter_value ()).objectCompare (GALGAS_string::makeEmptyString ())).operator_and (GALGAS_bool (gOption_galgas_5F_builtin_5F_options_outputConcreteSyntaxTree.getter_value ()).operator_not (SOURCE_FILE ("program.galgas", 16)) COMMA_SOURCE_FILE ("program.galgas", 16)).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    routine_importFilesAndCompile (constinArgument_inSourceFile, inCompiler  COMMA_SOURCE_FILE ("program.galgas", 17)) ;
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      M A I N    F O R    L I B P M                                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int mainForLIBPM (int inArgc, const char * inArgv []) {
//--- Analyze Command Line Options
  TC_UniqueArray <C_String> sourceFilesArray ;
  F_Analyze_CLI_Options (inArgc, inArgv,
                         sourceFilesArray,
                         kSourceFileExtensions,
                         kSourceFileHelpMessages,
                         print_tool_help_message) ;
//---
  int returnCode = 0 ; // No error
//--- Set Execution mode
  C_String executionModeOptionErrorMessage ;
  setExecutionMode (executionModeOptionErrorMessage) ;
  if (executionModeOptionErrorMessage.length () > 0) {
    co << executionModeOptionErrorMessage ;
    returnCode = 1 ;
  }else{
  //--- Common lexique object
    C_Compiler * commonLexique = NULL ;
    macroMyNew (commonLexique, C_Compiler (NULL, "", "" COMMA_HERE)) ;
    try{
      routine_before (commonLexique COMMA_HERE) ;
      cLexiqueIntrospection::handleGetKeywordListOption (commonLexique) ;
      const bool verboseOptionOn = verboseOutput () ;
      for (int32_t i=0 ; i<sourceFilesArray.count () ; i++) {
        const C_String fileExtension = sourceFilesArray (i COMMA_HERE).pathExtension () ;
        const GALGAS_string sfp = GALGAS_string (sourceFilesArray (i COMMA_HERE)) ;
        const GALGAS_location location = commonLexique->here () ;
        const GALGAS_lstring sourceFilePath (sfp, location) ;
        int r = 0 ;
        if (fileExtension == "plm-target") {
          switch (executionMode ()) {
          case kExecutionModeNormal :
            routine_programRule_5F__30_ (sourceFilePath, commonLexique COMMA_HERE) ;
            break ;
          case kExecutionModeLexicalAnalysisOnly :
            cGrammar_plm_5F_target_5F_grammar::performOnlyLexicalAnalysis (commonLexique, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeSyntaxAnalysisOnly :
            cGrammar_plm_5F_target_5F_grammar::performOnlySyntaxAnalysis (commonLexique, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeIndexing :
            cGrammar_plm_5F_target_5F_grammar::performIndexing (commonLexique, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeLatex :
            cGrammar_plm_5F_target_5F_grammar::performOnlyLexicalAnalysis (commonLexique, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          }
        }else if (fileExtension == "plm") {
          switch (executionMode ()) {
          case kExecutionModeNormal :
            routine_programRule_5F__31_ (sourceFilePath, commonLexique COMMA_HERE) ;
            break ;
          case kExecutionModeLexicalAnalysisOnly :
            cGrammar_plm_5F_grammar::performOnlyLexicalAnalysis (commonLexique, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeSyntaxAnalysisOnly :
            cGrammar_plm_5F_grammar::performOnlySyntaxAnalysis (commonLexique, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeIndexing :
            cGrammar_plm_5F_grammar::performIndexing (commonLexique, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeLatex :
            cGrammar_plm_5F_grammar::performOnlyLexicalAnalysis (commonLexique, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          }
        }else{
          printf ("*** Error: unhandled extension for file '%s' ***\n", sourceFilesArray (i COMMA_HERE).cString (HERE)) ;
          r = 1 ;
        }
        if (r != 0) {
          returnCode = r ;
        }
      }
    //--- Error or warnings ?
      if (totalErrorCount () > 0) {
        returnCode = 1 ; // Error code
      }else if (totalWarningCount () > 0) {
        if (gOption_galgas_5F_builtin_5F_options_treat_5F_warnings_5F_as_5F_error.mValue) {
          returnCode = 1 ; // Error code
          if (verboseOptionOn) {
            printf ("** Note: warnings are treated as errors. **\n") ;
          }
        }
      }
    //--- Epilogue
      routine_after (commonLexique COMMA_HERE) ;
    //--- Display error and warnings count
      if (verboseOptionOn || (totalWarningCount () > 0) || (totalErrorCount () > 0)) {
        C_String message ;
        if (totalWarningCount () == 0) {
          message << "No warning" ;
        }else if (totalWarningCount () == 1) {
          message << "1 warning" ;
        }else{
          message << cStringWithSigned (totalWarningCount ()) << " warnings" ;
        }
        message << ", " ;
        if (totalErrorCount () == 0) {
          message << "no error" ;
        }else if (totalErrorCount () == 1) {
          message << "1 error" ;
        }else{
          message << cStringWithSigned (totalErrorCount ()) << " errors" ;
        }
        message << ".\n" ;
        ggs_printMessage (message COMMA_HERE) ;
      }
    }catch (const ::std:: exception & e) {
      F_default_display_exception (e) ;
      returnCode = 1 ; // Error code
    }catch (...) {
      printf ("**** Unknow exception ****\n") ;
      throw ;
    }
    macroDetachSharedObject (commonLexique) ;
  }
  return returnCode ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Abstract extension getter '@abstractDeclaration location'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_abstractDeclaration_location> gExtensionGetterTable_abstractDeclaration_location ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_location (const int32_t inClassIndex,
                                    enterExtensionGetter_abstractDeclaration_location inGetter) {
  gExtensionGetterTable_abstractDeclaration_location.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_abstractDeclaration_location (void) {
  gExtensionGetterTable_abstractDeclaration_location.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_abstractDeclaration_location (NULL,
                                                         freeExtensionGetter_abstractDeclaration_location) ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location callExtensionGetter_location (const cPtr_abstractDeclaration * inObject,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  GALGAS_location result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractDeclaration) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_abstractDeclaration_location f = NULL ;
    if (classIndex < gExtensionGetterTable_abstractDeclaration_location.count ()) {
      f = gExtensionGetterTable_abstractDeclaration_location (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_abstractDeclaration_location.count ()) {
           f = gExtensionGetterTable_abstractDeclaration_location (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_abstractDeclaration_location.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Abstract extension method '@abstractDeclaration addExtension'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_abstractDeclaration_addExtension> gExtensionMethodTable_abstractDeclaration_addExtension ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_addExtension (const int32_t inClassIndex,
                                        extensionMethodSignature_abstractDeclaration_addExtension inMethod) {
  gExtensionMethodTable_abstractDeclaration_addExtension.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_abstractDeclaration_addExtension (void) {
  gExtensionMethodTable_abstractDeclaration_addExtension.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractDeclaration_addExtension (NULL,
                                                             freeExtensionMethod_abstractDeclaration_addExtension) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_addExtension (const cPtr_abstractDeclaration * inObject,
                                       GALGAS_extensionDeclarationListAST & io_ioExtensionDeclarationListAST,
                                       GALGAS_abstractDeclaration & out_outNewDeclaration,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_outNewDeclaration.drop () ;
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractDeclaration) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_abstractDeclaration_addExtension f = NULL ;
    if (classIndex < gExtensionMethodTable_abstractDeclaration_addExtension.count ()) {
      f = gExtensionMethodTable_abstractDeclaration_addExtension (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_abstractDeclaration_addExtension.count ()) {
           f = gExtensionMethodTable_abstractDeclaration_addExtension (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_abstractDeclaration_addExtension.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioExtensionDeclarationListAST, out_outNewDeclaration, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Extension getter '@integerDeclaration typeName'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_integerDeclaration_typeName> gExtensionGetterTable_integerDeclaration_typeName ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_typeName (const int32_t inClassIndex,
                                    enterExtensionGetter_integerDeclaration_typeName inGetter) {
  gExtensionGetterTable_integerDeclaration_typeName.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string callExtensionGetter_typeName (const cPtr_integerDeclaration * inObject,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_integerDeclaration) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_integerDeclaration_typeName f = NULL ;
    if (classIndex < gExtensionGetterTable_integerDeclaration_typeName.count ()) {
      f = gExtensionGetterTable_integerDeclaration_typeName (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_integerDeclaration_typeName.count ()) {
           f = gExtensionGetterTable_integerDeclaration_typeName (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_integerDeclaration_typeName.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_integerDeclaration_typeName (const cPtr_integerDeclaration * inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outName ; // Returned variable
  const cPtr_integerDeclaration * object = inObject ;
  macroValidSharedObject (object, cPtr_integerDeclaration) ;
  GALGAS_string temp_0 ;
  const enumGalgasBool test_1 = object->mAttribute_mIsSigned.boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_string ("int") ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_string ("uint") ;
  }
  result_outName = temp_0.add_operation (object->mAttribute_mSize.getter_string (SOURCE_FILE ("type-integer.galgas", 19)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 19)) ;
//---
  return result_outName ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_integerDeclaration_typeName (void) {
  enterExtensionGetter_typeName (kTypeDescriptor_GALGAS_integerDeclaration.mSlotID,
                                 extensionGetter_integerDeclaration_typeName) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_integerDeclaration_typeName (void) {
  gExtensionGetterTable_integerDeclaration_typeName.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_integerDeclaration_typeName (defineExtensionGetter_integerDeclaration_typeName,
                                                        freeExtensionGetter_integerDeclaration_typeName) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Extension method '@controlRegisterDeclarationListAST noteTypesInPrecedenceGraph'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_noteTypesInPrecedenceGraph (const GALGAS_controlRegisterDeclarationListAST inObject,
                                                 GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_controlRegisterDeclarationListAST temp_0 = inObject ;
  cEnumerator_controlRegisterDeclarationListAST enumerator_6822 (temp_0, kEnumeration_up) ;
  while (enumerator_6822.hasCurrentObject ()) {
    GALGAS_lstring var_typeName_6842 = GALGAS_lstring::constructor_new (GALGAS_string ("$").add_operation (enumerator_6822.current_mRegisterTypeName (HERE).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 187)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 187)), enumerator_6822.current_mRegisterTypeName (HERE).mAttribute_location  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 187)) ;
    {
    ioArgument_ioGraph.setter_noteNode (var_typeName_6842 COMMA_SOURCE_FILE ("declaration-control-register.galgas", 188)) ;
    }
    enumerator_6822.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Abstract extension method '@expressionAST addDependenceEdgeForStaticExpression'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_expressionAST_addDependenceEdgeForStaticExpression> gExtensionMethodTable_expressionAST_addDependenceEdgeForStaticExpression ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_addDependenceEdgeForStaticExpression (const int32_t inClassIndex,
                                                                extensionMethodSignature_expressionAST_addDependenceEdgeForStaticExpression inMethod) {
  gExtensionMethodTable_expressionAST_addDependenceEdgeForStaticExpression.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_expressionAST_addDependenceEdgeForStaticExpression (void) {
  gExtensionMethodTable_expressionAST_addDependenceEdgeForStaticExpression.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_expressionAST_addDependenceEdgeForStaticExpression (NULL,
                                                                               freeExtensionMethod_expressionAST_addDependenceEdgeForStaticExpression) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * inObject,
                                                               const GALGAS_lstring constin_inConstantName,
                                                               GALGAS_semanticTypePrecedenceGraph & io_ioGraph,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_expressionAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_expressionAST_addDependenceEdgeForStaticExpression f = NULL ;
    if (classIndex < gExtensionMethodTable_expressionAST_addDependenceEdgeForStaticExpression.count ()) {
      f = gExtensionMethodTable_expressionAST_addDependenceEdgeForStaticExpression (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_expressionAST_addDependenceEdgeForStaticExpression.count ()) {
           f = gExtensionMethodTable_expressionAST_addDependenceEdgeForStaticExpression (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_expressionAST_addDependenceEdgeForStaticExpression.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inConstantName, io_ioGraph, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Extension method '@globalVarDeclarationList noteTypesInPrecedenceGraph'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_noteTypesInPrecedenceGraph (const GALGAS_globalVarDeclarationList inObject,
                                                 GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_globalVarDeclarationList temp_0 = inObject ;
  cEnumerator_globalVarDeclarationList enumerator_6087 (temp_0, kEnumeration_up) ;
  while (enumerator_6087.hasCurrentObject ()) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, enumerator_6087.current_mTypeName (HERE).mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_lstring var_typeName_6157 = GALGAS_lstring::constructor_new (GALGAS_string ("$").add_operation (enumerator_6087.current_mTypeName (HERE).getter_string (SOURCE_FILE ("declaration-global-variable.galgas", 187)), inCompiler COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 187)), enumerator_6087.current_mTypeName (HERE).mAttribute_location  COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 187)) ;
      {
      ioArgument_ioGraph.setter_noteNode (var_typeName_6157 COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 188)) ;
      }
    }
    enumerator_6087.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Extension method '@taskList noteTypesInPrecedenceGraph'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_noteTypesInPrecedenceGraph (const GALGAS_taskList inObject,
                                                 GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_taskList temp_0 = inObject ;
  cEnumerator_taskList enumerator_4434 (temp_0, kEnumeration_up) ;
  while (enumerator_4434.hasCurrentObject ()) {
    cEnumerator_taskVarListAST enumerator_4466 (enumerator_4434.current_mVarList (HERE), kEnumeration_up) ;
    while (enumerator_4466.hasCurrentObject ()) {
      callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) enumerator_4466.current (HERE).mAttribute_mVarInitExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 132)) ;
      const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, enumerator_4466.current (HERE).mAttribute_mVarTypeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_1) {
        GALGAS_lstring var_typeName_4622 = GALGAS_lstring::constructor_new (GALGAS_string ("$").add_operation (enumerator_4466.current (HERE).mAttribute_mVarTypeName.getter_string (SOURCE_FILE ("declaration-task.galgas", 134)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 134)), enumerator_4466.current (HERE).mAttribute_mVarTypeName.mAttribute_location  COMMA_SOURCE_FILE ("declaration-task.galgas", 134)) ;
        {
        ioArgument_ioGraph.setter_noteNode (var_typeName_4622 COMMA_SOURCE_FILE ("declaration-task.galgas", 135)) ;
        }
      }
      enumerator_4466.gotoNextObject () ;
    }
    cEnumerator_functionDeclarationListAST enumerator_4792 (enumerator_4434.current_mTaskProcList (HERE), kEnumeration_up) ;
    while (enumerator_4792.hasCurrentObject ()) {
      extensionMethod_noteInstructionListTypesInPrecedenceGraph (enumerator_4792.current (HERE).mAttribute_mFunctionInstructionList, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 139)) ;
      enumerator_4792.gotoNextObject () ;
    }
    cEnumerator_syncInstructionBranchList enumerator_4944 (enumerator_4434.current_mGuardedCommandList (HERE), kEnumeration_up) ;
    while (enumerator_4944.hasCurrentObject ()) {
      extensionMethod_noteInstructionListTypesInPrecedenceGraph (enumerator_4944.current (HERE).mAttribute_mInstructionList, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 142)) ;
      enumerator_4944.gotoNextObject () ;
    }
    enumerator_4434.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Extension method '@taskList enterInContext'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_enterInContext (const GALGAS_taskList inObject,
                                     GALGAS_semanticContext & ioArgument_ioContext,
                                     GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                     C_Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_taskList temp_0 = inObject ;
  cEnumerator_taskList enumerator_6165 (temp_0, kEnumeration_up) ;
  while (enumerator_6165.hasCurrentObject ()) {
    GALGAS_propertyList var_propertyList_6221 = GALGAS_propertyList::constructor_emptyList (SOURCE_FILE ("declaration-task.galgas", 172)) ;
    GALGAS_propertyMap var_propertyMap_6255 = GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("declaration-task.galgas", 173)) ;
    GALGAS_operandIRList var_initialValueList_6296 = GALGAS_operandIRList::constructor_emptyList (SOURCE_FILE ("declaration-task.galgas", 174)) ;
    GALGAS_namedObjectMap var_objectMap_6331 = GALGAS_namedObjectMap::constructor_emptyMap (SOURCE_FILE ("declaration-task.galgas", 175)) ;
    cEnumerator_taskVarListAST enumerator_6370 (enumerator_6165.current (HERE).mAttribute_mVarList, kEnumeration_up) ;
    while (enumerator_6370.hasCurrentObject ()) {
      extensionMethod_enterInContext (enumerator_6370.current (HERE), ioArgument_ioContext, ioArgument_ioGlobalLiteralStringMap, var_propertyList_6221, var_propertyMap_6255, var_objectMap_6331, var_initialValueList_6296, inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 177)) ;
      enumerator_6370.gotoNextObject () ;
    }
    {
    ioArgument_ioContext.mAttribute_mTypeMap.setter_insertType (enumerator_6165.current (HERE).mAttribute_mTaskName, GALGAS_string ("%").add_operation (GALGAS_string ("$").add_operation (enumerator_6165.current (HERE).mAttribute_mTaskName.getter_string (SOURCE_FILE ("declaration-task.galgas", 189)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 189)).getter_assemblerRepresentation (SOURCE_FILE ("declaration-task.galgas", 189)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 189)), GALGAS_typeKind::constructor_structure (var_objectMap_6331, var_propertyMap_6255, var_propertyList_6221  COMMA_SOURCE_FILE ("declaration-task.galgas", 190)), GALGAS_classConstantMap::constructor_emptyMap (SOURCE_FILE ("declaration-task.galgas", 191)), GALGAS_bool (false), GALGAS_bool (false), GALGAS_bool (false), GALGAS_bool (false), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-task.galgas", 196)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 187)) ;
    }
    GALGAS_unifiedTypeMap_2D_proxy var_taskType_7079 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.mAttribute_mTypeMap, enumerator_6165.current (HERE).mAttribute_mTaskName, inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 198)) ;
    ioArgument_ioContext.mAttribute_mGlobalTaskVariableList.addAssign_operation (enumerator_6165.current (HERE).mAttribute_mTaskName.mAttribute_string, enumerator_6165.current (HERE).mAttribute_mTaskName.mAttribute_string, GALGAS_objectIR::constructor_llvmStructureConstant (var_taskType_7079, var_initialValueList_6296  COMMA_SOURCE_FILE ("declaration-task.galgas", 202))  COMMA_SOURCE_FILE ("declaration-task.galgas", 199)) ;
    extensionMethod_enterFunctionInContext (enumerator_6165.current (HERE).mAttribute_mTaskProcList, GALGAS_string ("$").add_operation (enumerator_6165.current (HERE).mAttribute_mTaskName.getter_string (SOURCE_FILE ("declaration-task.galgas", 204)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 204)), ioArgument_ioContext, inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 204)) ;
    enumerator_6165.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Extension method '@taskList semanticAnalysis'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_semanticAnalysis (const GALGAS_taskList inObject,
                                       const GALGAS_semanticContext constinArgument_inContext,
                                       GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                       GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                       C_Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringset var_prioritySet_10815 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("declaration-task.galgas", 295)) ;
  const GALGAS_taskList temp_0 = inObject ;
  cEnumerator_taskList enumerator_10839 (temp_0, kEnumeration_up) ;
  while (enumerator_10839.hasCurrentObject ()) {
    extensionMethod_semanticAnalysis (enumerator_10839.current (HERE), constinArgument_inContext, ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 297)) ;
    GALGAS_string var_priorityString_11005 = enumerator_10839.current (HERE).mAttribute_mPriority.mAttribute_bigint.getter_string (SOURCE_FILE ("declaration-task.galgas", 302)) ;
    const enumGalgasBool test_1 = var_prioritySet_10815.getter_hasKey (var_priorityString_11005 COMMA_SOURCE_FILE ("declaration-task.galgas", 303)).boolEnum () ;
    if (kBoolTrue == test_1) {
      inCompiler->emitSemanticError (enumerator_10839.current (HERE).mAttribute_mPriority.getter_location (SOURCE_FILE ("declaration-task.galgas", 304)), GALGAS_string ("duplicate priority")  COMMA_SOURCE_FILE ("declaration-task.galgas", 304)) ;
    }
    var_prioritySet_10815.addAssign_operation (var_priorityString_11005  COMMA_SOURCE_FILE ("declaration-task.galgas", 306)) ;
    enumerator_10839.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Extension method '@taskMapIR generateCode'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_generateCode (const GALGAS_taskMapIR inObject,
                                   GALGAS_string & ioArgument_ioLLVMcode,
                                   const GALGAS_generationContext constinArgument_inGenerationContext,
                                   GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                   GALGAS__32_stringlist & ioArgument_ioServiceList,
                                   C_Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("Task self terminate service"), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 442)), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 442)) ;
  GALGAS_string var_selfTerminateImplementationName_16330 = function_llvmNameForServiceImplementation (function_llvmNameForTaskSelfTerminateService (inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 443)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 443)) ;
  GALGAS_string var_selfTerminateCallName_16435 = function_llvmNameForServiceCall (function_llvmNameForTaskSelfTerminateService (inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 444)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 444)) ;
  ioArgument_ioServiceList.addAssign_operation (var_selfTerminateCallName_16435, var_selfTerminateImplementationName_16330  COMMA_SOURCE_FILE ("declaration-task.galgas", 445)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("declare void @").add_operation (var_selfTerminateCallName_16435, inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 446)).add_operation (GALGAS_string (" () nounwind noreturn\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 446)), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 446)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("Task variables"), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 448)), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 448)) ;
  cEnumerator_globalTaskVariableList enumerator_16836 (constinArgument_inGenerationContext.mAttribute_mGlobalTaskVariableList, kEnumeration_up) ;
  while (enumerator_16836.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("@").add_operation (function_llvmNameForTaskGlobalVar (enumerator_16836.current_mTaskName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 450)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 450)), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 450)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" = internal global %"), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 451)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("$").add_operation (enumerator_16836.current_mTaskTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 452)).getter_assemblerRepresentation (SOURCE_FILE ("declaration-task.galgas", 452)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 452)), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 452)) ;
    GALGAS_string var_initialString_17032 = extensionGetter_llvmName (enumerator_16836.current_mInitialValue (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 453)) ;
    const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_initialString_17032.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("zeroinitializer"), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 455)) ;
    }else if (kBoolFalse == test_0) {
      ioArgument_ioLLVMcode.plusAssign_operation(var_initialString_17032, inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 457)) ;
    }
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 459)) ;
    enumerator_16836.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 461)) ;
  GALGAS_taskSortedListIR var_orderedTaskList_17295 = GALGAS_taskSortedListIR::constructor_emptySortedList (SOURCE_FILE ("declaration-task.galgas", 463)) ;
  const GALGAS_taskMapIR temp_1 = inObject ;
  cEnumerator_taskMapIR enumerator_17319 (temp_1, kEnumeration_up) ;
  while (enumerator_17319.hasCurrentObject ()) {
    var_orderedTaskList_17295.addAssign_operation (enumerator_17319.current (HERE).mAttribute_lkey.mAttribute_string, enumerator_17319.current (HERE).mAttribute_mPriority, enumerator_17319.current (HERE).mAttribute_mStackSize, enumerator_17319.current (HERE).mAttribute_mAllocaList, enumerator_17319.current (HERE).mAttribute_mInitInstructionListIR  COMMA_SOURCE_FILE ("declaration-task.galgas", 465)) ;
    enumerator_17319.gotoNextObject () ;
  }
  cEnumerator_taskSortedListIR enumerator_17522 (var_orderedTaskList_17295, kEnumeration_up) ;
  while (enumerator_17522.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("Task ").add_operation (enumerator_17522.current (HERE).mAttribute_mTaskName, inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 469)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 469)), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 469)) ;
    GALGAS_string var_assemblerTaskName_17614 = GALGAS_string ("$").add_operation (enumerator_17522.current (HERE).mAttribute_mTaskName, inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 470)).getter_assemblerRepresentation (SOURCE_FILE ("declaration-task.galgas", 470)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(function_stackNameForTask (enumerator_17522.current (HERE).mAttribute_mTaskName, inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 471)).add_operation (GALGAS_string (" = global ["), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 471)).add_operation (enumerator_17522.current (HERE).mAttribute_mStackSize.divide_operation (GALGAS_uint ((uint32_t) 4U).getter_bigint (SOURCE_FILE ("declaration-task.galgas", 471)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 471)).getter_string (SOURCE_FILE ("declaration-task.galgas", 471)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 471)).add_operation (GALGAS_string (" x i32] zeroinitializer\n"), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 471)), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 471)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 472)) ;
    GALGAS_string var_effectiveParameter_17836 = GALGAS_string ("(%").add_operation (var_assemblerTaskName_17614, inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 473)).add_operation (GALGAS_string (" * @"), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 473)).add_operation (function_llvmNameForTaskGlobalVar (enumerator_17522.current (HERE).mAttribute_mTaskName, inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 473)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 473)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 473)) ;
    GALGAS_string var_formalArgument_17946 = GALGAS_string ("(%").add_operation (var_assemblerTaskName_17614, inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 474)).add_operation (GALGAS_string (" * %self)"), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 474)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(function_llvmSeparatorLine (inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 475)), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 475)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 476)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal void ").add_operation (function_initNameForTaskType (enumerator_17522.current (HERE).mAttribute_mTaskName, inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 477)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 477)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 477)).add_operation (var_formalArgument_17946, inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 477)).add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 477)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 477)).add_operation (GALGAS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 477)), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 477)) ;
    cEnumerator_allocaList enumerator_18233 (enumerator_17522.current (HERE).mAttribute_mAllocaList, kEnumeration_up) ;
    while (enumerator_18233.hasCurrentObject ()) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (function_llvmNameForLocalVariable (enumerator_18233.current_mVarName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 479)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 479)).add_operation (GALGAS_string (" = alloca "), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 479)).add_operation (enumerator_18233.current_mType (HERE).getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 479)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 479)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 479)), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 479)) ;
      enumerator_18233.gotoNextObject () ;
    }
    extensionMethod_instructionListLLVMCode (enumerator_17522.current (HERE).mAttribute_mInitInstructionListIR, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 481)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 482)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
      "\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 483)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(function_llvmSeparatorLine (inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 484)), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 484)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 485)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal void ").add_operation (function_mainRoutineNameForTask (enumerator_17522.current (HERE).mAttribute_mTaskName, inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 486)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 486)).add_operation (GALGAS_string (" ()"), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 486)).add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 486)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 486)).add_operation (GALGAS_string ("noreturn {\n"), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 486)), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 486)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void ").add_operation (function_initNameForTaskType (enumerator_17522.current (HERE).mAttribute_mTaskName, inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 487)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 487)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 487)).add_operation (var_effectiveParameter_17836, inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 487)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 487)), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 487)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @").add_operation (function_llvmNameForFunction (GALGAS_string ("$").add_operation (enumerator_17522.current (HERE).mAttribute_mTaskName, inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 488)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 488)).add_operation (function_llvmNameForTaskLoopFunction (inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 488)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 488)).add_operation (GALGAS_string ("()"), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 488)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 488)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 488)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 488)).add_operation (var_effectiveParameter_17836, inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 488)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 488)), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 488)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @").add_operation (var_selfTerminateCallName_16435, inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 489)).add_operation (GALGAS_string (" ()\n"), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 489)), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 489)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  unreachable\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 490)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
      "\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 491)) ;
    enumerator_17522.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("Start tasks"), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 494)), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 494)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal void @start.tasks ()").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 495)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 495)).add_operation (GALGAS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 495)), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 495)) ;
  cEnumerator_taskSortedListIR enumerator_19312 (var_orderedTaskList_17295, kEnumeration_up) ;
  GALGAS_uint index_19288 ((uint32_t) 0) ;
  while (enumerator_19312.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (function_stackAddressForTask (enumerator_19312.current (HERE).mAttribute_mTaskName, inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 497)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 497)), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 497)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" = getelementptr inbounds [").add_operation (enumerator_19312.current (HERE).mAttribute_mStackSize.divide_operation (GALGAS_uint ((uint32_t) 4U).getter_bigint (SOURCE_FILE ("declaration-task.galgas", 498)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 498)).getter_string (SOURCE_FILE ("declaration-task.galgas", 498)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 498)).add_operation (GALGAS_string (" x i32], "), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 498)), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 498)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("[").add_operation (enumerator_19312.current (HERE).mAttribute_mStackSize.divide_operation (GALGAS_uint ((uint32_t) 4U).getter_bigint (SOURCE_FILE ("declaration-task.galgas", 499)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 499)).getter_string (SOURCE_FILE ("declaration-task.galgas", 499)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 499)).add_operation (GALGAS_string (" x i32]* "), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 499)).add_operation (function_stackNameForTask (enumerator_19312.current (HERE).mAttribute_mTaskName, inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 499)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 499)), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 499)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", i32 0, i32 0\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 500)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @kernel_create_task ("), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 501)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("i32 ").add_operation (index_19288.getter_string (SOURCE_FILE ("declaration-task.galgas", 502)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 502)), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 502)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", i32* ").add_operation (function_stackAddressForTask (enumerator_19312.current (HERE).mAttribute_mTaskName, inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 503)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 503)), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 503)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", i32 ").add_operation (enumerator_19312.current (HERE).mAttribute_mStackSize.getter_string (SOURCE_FILE ("declaration-task.galgas", 504)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 504)), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 504)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", void ()* ").add_operation (function_mainRoutineNameForTask (enumerator_19312.current (HERE).mAttribute_mTaskName, inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 505)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 505)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 505)), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 505)) ;
    enumerator_19312.gotoNextObject () ;
    index_19288.increment_operation (inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 496)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 507)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 508)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Extension method '@panicClauseListAST noteTypesInPrecedenceGraph'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_noteTypesInPrecedenceGraph (const GALGAS_panicClauseListAST inObject,
                                                 GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_panicClauseListAST temp_0 = inObject ;
  cEnumerator_panicClauseListAST enumerator_2111 (temp_0, kEnumeration_up) ;
  while (enumerator_2111.hasCurrentObject ()) {
    extensionMethod_noteInstructionListTypesInPrecedenceGraph (enumerator_2111.current_mPanicInstructionList (HERE), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("panic.galgas", 51)) ;
    enumerator_2111.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Extension method '@bootList noteTypesInPrecedenceGraph'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_noteTypesInPrecedenceGraph (const GALGAS_bootList inObject,
                                                 GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_bootList temp_0 = inObject ;
  cEnumerator_bootList enumerator_2020 (temp_0, kEnumeration_up) ;
  while (enumerator_2020.hasCurrentObject ()) {
    extensionMethod_noteInstructionListTypesInPrecedenceGraph (enumerator_2020.current_mInstructionList (HERE), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-boot.galgas", 49)) ;
    enumerator_2020.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootList_2D_element::GALGAS_bootList_2D_element (void) :
mAttribute_mBootLocation (),
mAttribute_mInstructionList (),
mAttribute_mEndOfBootLocation (),
mAttribute_mPriority (),
mAttribute_mPriorityLocation () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootList_2D_element::~ GALGAS_bootList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootList_2D_element::GALGAS_bootList_2D_element (const GALGAS_location & inOperand0,
                                                        const GALGAS_instructionListAST & inOperand1,
                                                        const GALGAS_location & inOperand2,
                                                        const GALGAS_bigint & inOperand3,
                                                        const GALGAS_location & inOperand4) :
mAttribute_mBootLocation (inOperand0),
mAttribute_mInstructionList (inOperand1),
mAttribute_mEndOfBootLocation (inOperand2),
mAttribute_mPriority (inOperand3),
mAttribute_mPriorityLocation (inOperand4) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootList_2D_element GALGAS_bootList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_bootList_2D_element (GALGAS_location::constructor_nowhere (HERE),
                                     GALGAS_instructionListAST::constructor_emptyList (HERE),
                                     GALGAS_location::constructor_nowhere (HERE),
                                     GALGAS_bigint::constructor_zero (HERE),
                                     GALGAS_location::constructor_nowhere (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootList_2D_element GALGAS_bootList_2D_element::constructor_new (const GALGAS_location & inOperand0,
                                                                        const GALGAS_instructionListAST & inOperand1,
                                                                        const GALGAS_location & inOperand2,
                                                                        const GALGAS_bigint & inOperand3,
                                                                        const GALGAS_location & inOperand4 
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bootList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_bootList_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_bootList_2D_element::objectCompare (const GALGAS_bootList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mBootLocation.objectCompare (inOperand.mAttribute_mBootLocation) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInstructionList.objectCompare (inOperand.mAttribute_mInstructionList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mEndOfBootLocation.objectCompare (inOperand.mAttribute_mEndOfBootLocation) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mPriority.objectCompare (inOperand.mAttribute_mPriority) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mPriorityLocation.objectCompare (inOperand.mAttribute_mPriorityLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_bootList_2D_element::isValid (void) const {
  return mAttribute_mBootLocation.isValid () && mAttribute_mInstructionList.isValid () && mAttribute_mEndOfBootLocation.isValid () && mAttribute_mPriority.isValid () && mAttribute_mPriorityLocation.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_bootList_2D_element::drop (void) {
  mAttribute_mBootLocation.drop () ;
  mAttribute_mInstructionList.drop () ;
  mAttribute_mEndOfBootLocation.drop () ;
  mAttribute_mPriority.drop () ;
  mAttribute_mPriorityLocation.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_bootList_2D_element::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "<struct @bootList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mBootLocation.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInstructionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mEndOfBootLocation.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mPriority.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mPriorityLocation.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_bootList_2D_element::getter_mBootLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBootLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST GALGAS_bootList_2D_element::getter_mInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_bootList_2D_element::getter_mEndOfBootLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfBootLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint GALGAS_bootList_2D_element::getter_mPriority (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPriority ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_bootList_2D_element::getter_mPriorityLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPriorityLocation ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @bootList-element type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_bootList_2D_element ("bootList-element",
                                            NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_bootList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bootList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_bootList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_bootList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootList_2D_element GALGAS_bootList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_bootList_2D_element result ;
  const GALGAS_bootList_2D_element * p = (const GALGAS_bootList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_bootList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bootList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Extension method '@initList noteTypesInPrecedenceGraph'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_noteTypesInPrecedenceGraph (const GALGAS_initList inObject,
                                                 GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_initList temp_0 = inObject ;
  cEnumerator_initList enumerator_2316 (temp_0, kEnumeration_up) ;
  while (enumerator_2316.hasCurrentObject ()) {
    extensionMethod_noteInstructionListTypesInPrecedenceGraph (enumerator_2316.current_mInstructionList (HERE), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 58)) ;
    enumerator_2316.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Extension method '@initListIR generateLLVMinitCode'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_generateLLVMinitCode (const GALGAS_initListIR inObject,
                                           GALGAS_string & ioArgument_ioLLVMcode,
                                           const GALGAS_routineMapIR constinArgument_inProcedureMapIR,
                                           const GALGAS_generationContext constinArgument_inGenerationContext,
                                           GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("Init"), inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 208)), inCompiler  COMMA_SOURCE_FILE ("declaration-init.galgas", 208)) ;
  const GALGAS_initListIR temp_0 = inObject ;
  cEnumerator_initListIR enumerator_8200 (temp_0, kEnumeration_up) ;
  while (enumerator_8200.hasCurrentObject ()) {
    GALGAS_bool var_generate_8222 ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_8200.current (HERE).mAttribute_mInitRequiredByProcList.getter_length (SOURCE_FILE ("declaration-init.galgas", 211)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_1) {
      var_generate_8222 = GALGAS_bool (true) ;
    }else if (kBoolFalse == test_1) {
      var_generate_8222 = GALGAS_bool (false) ;
      cEnumerator_lstringlist enumerator_8395 (enumerator_8200.current (HERE).mAttribute_mInitRequiredByProcList, kEnumeration_up) ;
      bool bool_2 = var_generate_8222.operator_not (SOURCE_FILE ("declaration-init.galgas", 215)).isValidAndTrue () ;
      if (enumerator_8395.hasCurrentObject () && bool_2) {
        while (enumerator_8395.hasCurrentObject () && bool_2) {
          var_generate_8222 = constinArgument_inProcedureMapIR.getter_hasKey (enumerator_8395.current_mValue (HERE).mAttribute_string COMMA_SOURCE_FILE ("declaration-init.galgas", 216)) ;
          enumerator_8395.gotoNextObject () ;
          if (enumerator_8395.hasCurrentObject ()) {
            bool_2 = var_generate_8222.operator_not (SOURCE_FILE ("declaration-init.galgas", 215)).isValidAndTrue () ;
          }
        }
      }
    }
    const enumGalgasBool test_3 = var_generate_8222.boolEnum () ;
    if (kBoolTrue == test_3) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal void @init.").add_operation (enumerator_8200.current (HERE).mAttribute_mPriority.getter_string (SOURCE_FILE ("declaration-init.galgas", 220)), inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 220)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 220)), inCompiler  COMMA_SOURCE_FILE ("declaration-init.galgas", 220)) ;
      const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, enumerator_8200.current (HERE).mAttribute_mSelfType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-init.galgas", 221)))).boolEnum () ;
      if (kBoolTrue == test_4) {
        ioArgument_ioLLVMcode.plusAssign_operation(enumerator_8200.current (HERE).mAttribute_mSelfType.getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 222)).add_operation (GALGAS_string (" * %self"), inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 222)), inCompiler  COMMA_SOURCE_FILE ("declaration-init.galgas", 222)) ;
      }
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 224)), inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 224)).add_operation (GALGAS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 224)), inCompiler  COMMA_SOURCE_FILE ("declaration-init.galgas", 224)) ;
      cEnumerator_allocaList enumerator_8820 (enumerator_8200.current (HERE).mAttribute_mAllocaList, kEnumeration_up) ;
      while (enumerator_8820.hasCurrentObject ()) {
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (function_llvmNameForLocalVariable (enumerator_8820.current_mVarName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 226)), inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 226)).add_operation (GALGAS_string (" = alloca "), inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 226)).add_operation (enumerator_8820.current_mType (HERE).getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 226)), inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 226)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 226)), inCompiler  COMMA_SOURCE_FILE ("declaration-init.galgas", 226)) ;
        enumerator_8820.gotoNextObject () ;
      }
      extensionMethod_instructionListLLVMCode (enumerator_8200.current (HERE).mAttribute_mInstructionListIR, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 228)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-init.galgas", 229)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
        "\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-init.galgas", 230)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(function_llvmSeparatorLine (inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 231)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 231)), inCompiler  COMMA_SOURCE_FILE ("declaration-init.galgas", 231)) ;
    }
    enumerator_8200.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal void @init ()").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 234)), inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 234)).add_operation (GALGAS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 234)), inCompiler  COMMA_SOURCE_FILE ("declaration-init.galgas", 234)) ;
  const GALGAS_initListIR temp_5 = inObject ;
  cEnumerator_initListIR enumerator_9280 (temp_5, kEnumeration_up) ;
  while (enumerator_9280.hasCurrentObject ()) {
    GALGAS_bool var_generate_9302 ;
    const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, enumerator_9280.current (HERE).mAttribute_mInitRequiredByProcList.getter_length (SOURCE_FILE ("declaration-init.galgas", 237)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_6) {
      var_generate_9302 = GALGAS_bool (true) ;
    }else if (kBoolFalse == test_6) {
      var_generate_9302 = GALGAS_bool (false) ;
      cEnumerator_lstringlist enumerator_9475 (enumerator_9280.current (HERE).mAttribute_mInitRequiredByProcList, kEnumeration_up) ;
      bool bool_7 = var_generate_9302.operator_not (SOURCE_FILE ("declaration-init.galgas", 241)).isValidAndTrue () ;
      if (enumerator_9475.hasCurrentObject () && bool_7) {
        while (enumerator_9475.hasCurrentObject () && bool_7) {
          var_generate_9302 = constinArgument_inProcedureMapIR.getter_hasKey (enumerator_9475.current_mValue (HERE).mAttribute_string COMMA_SOURCE_FILE ("declaration-init.galgas", 242)) ;
          enumerator_9475.gotoNextObject () ;
          if (enumerator_9475.hasCurrentObject ()) {
            bool_7 = var_generate_9302.operator_not (SOURCE_FILE ("declaration-init.galgas", 241)).isValidAndTrue () ;
          }
        }
      }
    }
    const enumGalgasBool test_8 = var_generate_9302.boolEnum () ;
    if (kBoolTrue == test_8) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @init.").add_operation (enumerator_9280.current (HERE).mAttribute_mPriority.getter_string (SOURCE_FILE ("declaration-init.galgas", 246)), inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 246)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 246)), inCompiler  COMMA_SOURCE_FILE ("declaration-init.galgas", 246)) ;
      const enumGalgasBool test_9 = GALGAS_bool (kIsNotEqual, enumerator_9280.current (HERE).mAttribute_mSelfType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-init.galgas", 247)))).boolEnum () ;
      if (kBoolTrue == test_9) {
        ioArgument_ioLLVMcode.plusAssign_operation(enumerator_9280.current (HERE).mAttribute_mSelfType.getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 248)).add_operation (GALGAS_string (" * @"), inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 248)).add_operation (function_llvmNameForGlobalVariable (enumerator_9280.current (HERE).mAttribute_mGlobalVariable, inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 248)), inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 248)), inCompiler  COMMA_SOURCE_FILE ("declaration-init.galgas", 248)) ;
      }
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-init.galgas", 250)) ;
    }
    enumerator_9280.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-init.galgas", 253)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-init.galgas", 254)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Extension Getter '@procFormalArgumentPassingMode formalPassingModeString'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string extensionGetter_formalPassingModeString (const GALGAS_procFormalArgumentPassingMode & inObject,
                                                       C_Compiler * /* inCompiler */
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_procFormalArgumentPassingMode temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
    break ;
  case GALGAS_procFormalArgumentPassingMode::kEnum_input:
    {
      result_outResult = GALGAS_string ("\?") ;
    }
    break ;
  case GALGAS_procFormalArgumentPassingMode::kEnum_output:
    {
      result_outResult = GALGAS_string ("!") ;
    }
    break ;
  case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
    {
      result_outResult = GALGAS_string ("\?!") ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Extension Getter '@procFormalArgumentPassingMode requiredActualPassingModeForSelector'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string extensionGetter_requiredActualPassingModeForSelector (const GALGAS_procFormalArgumentPassingMode & inObject,
                                                                    GALGAS_string inArgument_inSelector,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_procFormalArgumentPassingMode temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
    break ;
  case GALGAS_procFormalArgumentPassingMode::kEnum_input:
    {
      result_outResult = GALGAS_string ("!") ;
    }
    break ;
  case GALGAS_procFormalArgumentPassingMode::kEnum_output:
    {
      result_outResult = GALGAS_string ("\?") ;
    }
    break ;
  case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
    {
      result_outResult = GALGAS_string ("!\?") ;
    }
    break ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, inArgument_inSelector.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_1) {
    result_outResult.plusAssign_operation(inArgument_inSelector.add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 52)), inCompiler  COMMA_SOURCE_FILE ("declaration-func.galgas", 52)) ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Extension method '@functionDeclarationListAST noteTypesInPrecedenceGraph'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_noteTypesInPrecedenceGraph (const GALGAS_functionDeclarationListAST inObject,
                                                 GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_functionDeclarationListAST temp_0 = inObject ;
  cEnumerator_functionDeclarationListAST enumerator_5959 (temp_0, kEnumeration_up) ;
  while (enumerator_5959.hasCurrentObject ()) {
    cEnumerator_procFormalArgumentList enumerator_6032 (enumerator_5959.current_mFunctionFormalArgumentList (HERE), kEnumeration_up) ;
    while (enumerator_6032.hasCurrentObject ()) {
      GALGAS_lstring var_typeName_6054 = GALGAS_lstring::constructor_new (GALGAS_string ("$").add_operation (enumerator_6032.current_mFormalArgumentTypeName (HERE).getter_string (SOURCE_FILE ("declaration-func.galgas", 178)), inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 178)), enumerator_6032.current_mFormalArgumentTypeName (HERE).mAttribute_location  COMMA_SOURCE_FILE ("declaration-func.galgas", 178)) ;
      {
      ioArgument_ioGraph.setter_noteNode (var_typeName_6054 COMMA_SOURCE_FILE ("declaration-func.galgas", 179)) ;
      }
      enumerator_6032.gotoNextObject () ;
    }
    extensionMethod_noteInstructionListTypesInPrecedenceGraph (enumerator_5959.current_mFunctionInstructionList (HERE), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 181)) ;
    enumerator_5959.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Extension method '@functionDeclarationListAST enterFunctionInContext'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_enterFunctionInContext (const GALGAS_functionDeclarationListAST inObject,
                                             const GALGAS_string constinArgument_inSelfTypeName,
                                             GALGAS_semanticContext & ioArgument_ioContext,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_functionDeclarationListAST temp_0 = inObject ;
  cEnumerator_functionDeclarationListAST enumerator_6802 (temp_0, kEnumeration_up) ;
  while (enumerator_6802.hasCurrentObject ()) {
    GALGAS_lstring temp_1 ;
    const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, constinArgument_inSelfTypeName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_2) {
      temp_1 = enumerator_6802.current (HERE).mAttribute_mFunctionName ;
    }else if (kBoolFalse == test_2) {
      temp_1 = GALGAS_lstring::constructor_new (constinArgument_inSelfTypeName.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 198)).add_operation (enumerator_6802.current (HERE).mAttribute_mFunctionName.getter_string (SOURCE_FILE ("declaration-func.galgas", 198)), inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 198)), enumerator_6802.current (HERE).mAttribute_mFunctionName.mAttribute_location  COMMA_SOURCE_FILE ("declaration-func.galgas", 198)) ;
    }
    GALGAS_lstring var_routineMangledName_6849 = temp_1 ;
    var_routineMangledName_6849.mAttribute_string.plusAssign_operation(GALGAS_string ("("), inCompiler  COMMA_SOURCE_FILE ("declaration-func.galgas", 200)) ;
    GALGAS_procedureSignature var_signature_7101 = GALGAS_procedureSignature::constructor_emptyList (SOURCE_FILE ("declaration-func.galgas", 201)) ;
    cEnumerator_procFormalArgumentList enumerator_7217 (enumerator_6802.current (HERE).mAttribute_mFunctionFormalArgumentList, kEnumeration_up) ;
    while (enumerator_7217.hasCurrentObject ()) {
      GALGAS_unifiedTypeMap_2D_proxy var_typeProxy_7240 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.mAttribute_mTypeMap, enumerator_7217.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("declaration-func.galgas", 203)) ;
      var_signature_7101.addAssign_operation (enumerator_7217.current_mFormalArgumentPassingMode (HERE), enumerator_7217.current_mSelector (HERE).mAttribute_string, var_typeProxy_7240  COMMA_SOURCE_FILE ("declaration-func.galgas", 204)) ;
      var_routineMangledName_6849.mAttribute_string.plusAssign_operation(extensionGetter_formalPassingModeString (enumerator_7217.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 205)).add_operation (enumerator_7217.current_mSelector (HERE).getter_string (SOURCE_FILE ("declaration-func.galgas", 205)), inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 205)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 205)), inCompiler  COMMA_SOURCE_FILE ("declaration-func.galgas", 205)) ;
      enumerator_7217.gotoNextObject () ;
    }
    var_routineMangledName_6849.mAttribute_string.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("declaration-func.galgas", 207)) ;
    GALGAS_unifiedTypeMap_2D_proxy temp_3 ;
    const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, enumerator_6802.current (HERE).mAttribute_mFunctionReturnTypeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_4) {
      temp_3 = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-func.galgas", 210)) ;
    }else if (kBoolFalse == test_4) {
      temp_3 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.mAttribute_mTypeMap, enumerator_6802.current (HERE).mAttribute_mFunctionReturnTypeName, inCompiler  COMMA_SOURCE_FILE ("declaration-func.galgas", 212)) ;
    }
    GALGAS_unifiedTypeMap_2D_proxy var_returnType_7581 = temp_3 ;
    GALGAS_modeMap var_procedureModeMap_7829 = GALGAS_modeMap::constructor_emptyMap (SOURCE_FILE ("declaration-func.galgas", 215)) ;
    cEnumerator_lstringlist enumerator_7876 (enumerator_6802.current (HERE).mAttribute_mFunctionModeList, kEnumeration_up) ;
    while (enumerator_7876.hasCurrentObject ()) {
      {
      var_procedureModeMap_7829.setter_insertKey (enumerator_7876.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 217)) ;
      }
      enumerator_7876.gotoNextObject () ;
    }
    GALGAS_bool var_weakProcedure_7973 = GALGAS_bool (false) ;
    GALGAS_bool var_canMutateProperties_8009 = GALGAS_bool (false) ;
    GALGAS_bool var_canAccessProperties_8045 = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_8109 (enumerator_6802.current (HERE).mAttribute_mFunctionAttributeList, kEnumeration_up) ;
    bool bool_5 = var_weakProcedure_7973.operator_not (SOURCE_FILE ("declaration-func.galgas", 223)).isValidAndTrue () ;
    if (enumerator_8109.hasCurrentObject () && bool_5) {
      while (enumerator_8109.hasCurrentObject () && bool_5) {
        const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, enumerator_8109.current_mValue (HERE).mAttribute_string.objectCompare (function_weakAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 224)))).boolEnum () ;
        if (kBoolTrue == test_6) {
          var_weakProcedure_7973 = GALGAS_bool (true) ;
        }
        const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, enumerator_8109.current_mValue (HERE).mAttribute_string.objectCompare (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 227)))).boolEnum () ;
        if (kBoolTrue == test_7) {
          var_canMutateProperties_8009 = GALGAS_bool (true) ;
        }
        const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, enumerator_8109.current_mValue (HERE).mAttribute_string.objectCompare (function_userAccessAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 230)))).boolEnum () ;
        if (kBoolTrue == test_8) {
          var_canAccessProperties_8045 = GALGAS_bool (true) ;
          GALGAS_bool test_9 = var_canAccessProperties_8045 ;
          if (kBoolTrue == test_9.boolEnum ()) {
            test_9 = var_procedureModeMap_7829.getter_hasKey (function_userModeName (inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 232)) COMMA_SOURCE_FILE ("declaration-func.galgas", 232)).operator_not (SOURCE_FILE ("declaration-func.galgas", 232)) ;
          }
          const enumGalgasBool test_10 = test_9.boolEnum () ;
          if (kBoolTrue == test_10) {
            inCompiler->emitSemanticError (enumerator_8109.current_mValue (HERE).getter_location (SOURCE_FILE ("declaration-func.galgas", 233)), GALGAS_string ("useless @").add_operation (enumerator_8109.current_mValue (HERE).getter_string (SOURCE_FILE ("declaration-func.galgas", 233)), inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 233)).add_operation (GALGAS_string (" attribute: function is never executed in `"), inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 233)).add_operation (function_userModeName (inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 233)), inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 233)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 233))  COMMA_SOURCE_FILE ("declaration-func.galgas", 233)) ;
          }
        }
        enumerator_8109.gotoNextObject () ;
        if (enumerator_8109.hasCurrentObject ()) {
          bool_5 = var_weakProcedure_7973.operator_not (SOURCE_FILE ("declaration-func.galgas", 223)).isValidAndTrue () ;
        }
      }
    }
    const enumGalgasBool test_11 = var_procedureModeMap_7829.getter_hasKey (function_userModeName (inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 237)) COMMA_SOURCE_FILE ("declaration-func.galgas", 237)).operator_not (SOURCE_FILE ("declaration-func.galgas", 237)).boolEnum () ;
    if (kBoolTrue == test_11) {
      var_canAccessProperties_8045 = GALGAS_bool (true) ;
    }
    const enumGalgasBool test_12 = ioArgument_ioContext.mAttribute_mRoutineMapForContext.getter_hasKey (var_routineMangledName_6849.mAttribute_string COMMA_SOURCE_FILE ("declaration-func.galgas", 241)).boolEnum () ;
    if (kBoolTrue == test_12) {
      GALGAS_bool var_weak_8881 = ioArgument_ioContext.mAttribute_mRoutineMapForContext.getter_mWeakForKey (var_routineMangledName_6849.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 242)) ;
      GALGAS_bool test_13 = var_weakProcedure_7973 ;
      if (kBoolTrue == test_13.boolEnum ()) {
        test_13 = var_weak_8881.operator_not (SOURCE_FILE ("declaration-func.galgas", 243)) ;
      }
      const enumGalgasBool test_14 = test_13.boolEnum () ;
      if (kBoolTrue == test_14) {
      }else if (kBoolFalse == test_14) {
        GALGAS_bool test_15 = var_weakProcedure_7973 ;
        if (kBoolTrue == test_15.boolEnum ()) {
          test_15 = var_weak_8881 ;
        }
        const enumGalgasBool test_16 = test_15.boolEnum () ;
        if (kBoolTrue == test_16) {
          inCompiler->emitSemanticError (enumerator_6802.current (HERE).mAttribute_mFunctionName.getter_location (SOURCE_FILE ("declaration-func.galgas", 246)), GALGAS_string ("this weak procedure overrides a weak procedure")  COMMA_SOURCE_FILE ("declaration-func.galgas", 246)) ;
        }else if (kBoolFalse == test_16) {
          GALGAS_bool test_17 = var_weakProcedure_7973.operator_not (SOURCE_FILE ("declaration-func.galgas", 247)) ;
          if (kBoolTrue == test_17.boolEnum ()) {
            test_17 = var_weak_8881 ;
          }
          const enumGalgasBool test_18 = test_17.boolEnum () ;
          if (kBoolTrue == test_18) {
            {
            GALGAS_lstring joker_9290_10 ; // Joker input parameter
            GALGAS_bool joker_9290_9 ; // Joker input parameter
            GALGAS_modeMap joker_9290_8 ; // Joker input parameter
            GALGAS_procedureSignature joker_9290_7 ; // Joker input parameter
            GALGAS_routineKind joker_9290_6 ; // Joker input parameter
            GALGAS_bool joker_9290_5 ; // Joker input parameter
            GALGAS_unifiedTypeMap_2D_proxy joker_9290_4 ; // Joker input parameter
            GALGAS_bool joker_9290_3 ; // Joker input parameter
            GALGAS_bool joker_9290_2 ; // Joker input parameter
            GALGAS_bool joker_9290_1 ; // Joker input parameter
            ioArgument_ioContext.mAttribute_mRoutineMapForContext.setter_removeKey (var_routineMangledName_6849, joker_9290_10, joker_9290_9, joker_9290_8, joker_9290_7, joker_9290_6, joker_9290_5, joker_9290_4, joker_9290_3, joker_9290_2, joker_9290_1, inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 248)) ;
            }
            {
            ioArgument_ioContext.mAttribute_mRoutineMapForContext.setter_insertKey (var_routineMangledName_6849, var_routineMangledName_6849, enumerator_6802.current (HERE).mAttribute_mPublicFunction, var_procedureModeMap_7829, var_signature_7101, GALGAS_routineKind::constructor_function (SOURCE_FILE ("declaration-func.galgas", 255)), var_weakProcedure_7973, var_returnType_7581, GALGAS_bool (false), var_canMutateProperties_8009, var_canAccessProperties_8045, inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 249)) ;
            }
          }else if (kBoolFalse == test_18) {
            {
            ioArgument_ioContext.mAttribute_mRoutineMapForContext.setter_insertKey (var_routineMangledName_6849, var_routineMangledName_6849, enumerator_6802.current (HERE).mAttribute_mPublicFunction, var_procedureModeMap_7829, var_signature_7101, GALGAS_routineKind::constructor_function (SOURCE_FILE ("declaration-func.galgas", 269)), var_weakProcedure_7973, var_returnType_7581, GALGAS_bool (false), var_canMutateProperties_8009, var_canAccessProperties_8045, inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 263)) ;
            }
          }
        }
      }
    }else if (kBoolFalse == test_12) {
      {
      ioArgument_ioContext.mAttribute_mRoutineMapForContext.setter_insertKey (var_routineMangledName_6849, var_routineMangledName_6849, enumerator_6802.current (HERE).mAttribute_mPublicFunction, var_procedureModeMap_7829, var_signature_7101, GALGAS_routineKind::constructor_function (SOURCE_FILE ("declaration-func.galgas", 284)), var_weakProcedure_7973, var_returnType_7581, GALGAS_bool (false), var_canMutateProperties_8009, var_canAccessProperties_8045, inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 278)) ;
      }
    }
    enumerator_6802.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Extension method '@functionDeclarationListAST procedureSemanticAnalysis'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_procedureSemanticAnalysis (const GALGAS_functionDeclarationListAST inObject,
                                                GALGAS_unifiedTypeMap_2D_proxy inArgument_inReceiverType,
                                                const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                C_Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_functionDeclarationListAST temp_0 = inObject ;
  cEnumerator_functionDeclarationListAST enumerator_11308 (temp_0, kEnumeration_up) ;
  while (enumerator_11308.hasCurrentObject ()) {
    GALGAS_bool var_warnIfUnused_11332 = GALGAS_bool (true) ;
    GALGAS_bool var_globalProcedure_11363 = GALGAS_bool (false) ;
    GALGAS_bool var_weakProcedure_11393 = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_11457 (enumerator_11308.current (HERE).mAttribute_mFunctionAttributeList, kEnumeration_up) ;
    while (enumerator_11457.hasCurrentObject ()) {
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_11457.current_mValue (HERE).mAttribute_string.objectCompare (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 310)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        const enumGalgasBool test_2 = var_warnIfUnused_11332.operator_not (SOURCE_FILE ("declaration-func.galgas", 311)).boolEnum () ;
        if (kBoolTrue == test_2) {
          inCompiler->emitSemanticError (enumerator_11457.current_mValue (HERE).getter_location (SOURCE_FILE ("declaration-func.galgas", 312)), GALGAS_string ("duplicated @").add_operation (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 312)), inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 312)).add_operation (GALGAS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 312))  COMMA_SOURCE_FILE ("declaration-func.galgas", 312)) ;
        }
        var_warnIfUnused_11332 = GALGAS_bool (false) ;
      }else if (kBoolFalse == test_1) {
        const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_11457.current_mValue (HERE).mAttribute_string.objectCompare (function_globalAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 315)))).boolEnum () ;
        if (kBoolTrue == test_3) {
          const enumGalgasBool test_4 = var_globalProcedure_11363.boolEnum () ;
          if (kBoolTrue == test_4) {
            inCompiler->emitSemanticError (enumerator_11457.current_mValue (HERE).getter_location (SOURCE_FILE ("declaration-func.galgas", 317)), GALGAS_string ("duplicated @").add_operation (function_globalAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 317)), inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 317)).add_operation (GALGAS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 317))  COMMA_SOURCE_FILE ("declaration-func.galgas", 317)) ;
          }
          var_globalProcedure_11363 = GALGAS_bool (true) ;
        }else if (kBoolFalse == test_3) {
          const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, enumerator_11457.current_mValue (HERE).mAttribute_string.objectCompare (function_weakAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 320)))).boolEnum () ;
          if (kBoolTrue == test_5) {
            const enumGalgasBool test_6 = var_weakProcedure_11393.boolEnum () ;
            if (kBoolTrue == test_6) {
              inCompiler->emitSemanticError (enumerator_11457.current_mValue (HERE).getter_location (SOURCE_FILE ("declaration-func.galgas", 322)), GALGAS_string ("duplicated @").add_operation (function_weakAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 322)), inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 322)).add_operation (GALGAS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 322))  COMMA_SOURCE_FILE ("declaration-func.galgas", 322)) ;
            }
            var_weakProcedure_11393 = GALGAS_bool (true) ;
          }else if (kBoolFalse == test_5) {
            inCompiler->emitSemanticError (enumerator_11457.current_mValue (HERE).getter_location (SOURCE_FILE ("declaration-func.galgas", 326)), GALGAS_string ("unknown attribute; available attributes are @").add_operation (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 327)), inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 326)).add_operation (GALGAS_string (", @"), inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 327)).add_operation (function_weakAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 327)), inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 327)).add_operation (GALGAS_string (", @"), inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 327)).add_operation (function_globalAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 327)), inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 327))  COMMA_SOURCE_FILE ("declaration-func.galgas", 326)) ;
          }
        }
      }
      enumerator_11457.gotoNextObject () ;
    }
    {
    routine_routineSemanticAnalysis (inArgument_inReceiverType, GALGAS_routineKind::constructor_function (SOURCE_FILE ("declaration-func.galgas", 332)), enumerator_11308.current (HERE).mAttribute_mFunctionModeList, enumerator_11308.current (HERE).mAttribute_mFunctionName, enumerator_11308.current (HERE).mAttribute_mFunctionFormalArgumentList, enumerator_11308.current (HERE).mAttribute_mFunctionReturnTypeName, enumerator_11308.current (HERE).mAttribute_mFunctionInstructionList, enumerator_11308.current (HERE).mAttribute_mEndOfFunctionDeclaration, GALGAS_bool (true), GALGAS_bool (true), var_warnIfUnused_11332, var_globalProcedure_11363, var_weakProcedure_11393, GALGAS_accessKind::constructor_readWriteAccess (SOURCE_FILE ("declaration-func.galgas", 344)), constinArgument_inSemanticContext, ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct, inCompiler  COMMA_SOURCE_FILE ("declaration-func.galgas", 330)) ;
    }
    enumerator_11308.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Extension method '@externProcedureDeclarationListAST noteTypesInPrecedenceGraph'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_noteTypesInPrecedenceGraph (const GALGAS_externProcedureDeclarationListAST inObject,
                                                 GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_externProcedureDeclarationListAST temp_0 = inObject ;
  cEnumerator_externProcedureDeclarationListAST enumerator_2307 (temp_0, kEnumeration_up) ;
  while (enumerator_2307.hasCurrentObject ()) {
    cEnumerator_procFormalArgumentList enumerator_2376 (enumerator_2307.current_mProcFormalArgumentList (HERE), kEnumeration_up) ;
    while (enumerator_2376.hasCurrentObject ()) {
      GALGAS_lstring var_typeName_2398 = GALGAS_lstring::constructor_new (GALGAS_string ("$").add_operation (enumerator_2376.current_mFormalArgumentTypeName (HERE).getter_string (SOURCE_FILE ("declaration-extern-proc.galgas", 53)), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 53)), enumerator_2376.current_mFormalArgumentTypeName (HERE).mAttribute_location  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 53)) ;
      {
      ioArgument_ioGraph.setter_noteNode (var_typeName_2398 COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 54)) ;
      }
      enumerator_2376.gotoNextObject () ;
    }
    enumerator_2307.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Extension method '@externProcedureDeclarationListAST enterExternProcInContext'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_enterExternProcInContext (const GALGAS_externProcedureDeclarationListAST inObject,
                                               GALGAS_semanticContext & ioArgument_ioContext,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_externProcedureDeclarationListAST temp_0 = inObject ;
  cEnumerator_externProcedureDeclarationListAST enumerator_3034 (temp_0, kEnumeration_up) ;
  while (enumerator_3034.hasCurrentObject ()) {
    extensionMethod_enterExternProcInContext (enumerator_3034.current (HERE), ioArgument_ioContext, inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 67)) ;
    enumerator_3034.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Extension method '@externProcedureDeclarationListAST externProcedureSemanticAnalysis'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_externProcedureSemanticAnalysis (const GALGAS_externProcedureDeclarationListAST inObject,
                                                      const GALGAS_semanticContext constinArgument_inContext,
                                                      GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                      GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_externProcedureDeclarationListAST temp_0 = inObject ;
  cEnumerator_externProcedureDeclarationListAST enumerator_5252 (temp_0, kEnumeration_up) ;
  while (enumerator_5252.hasCurrentObject ()) {
    extensionMethod_externProcedureSemanticAnalysis (enumerator_5252.current (HERE), constinArgument_inContext, ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 122)) ;
    enumerator_5252.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Extension method '@externProcedureMapIR llvmPrototypeGeneration'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_llvmPrototypeGeneration (const GALGAS_externProcedureMapIR inObject,
                                              GALGAS_string & ioArgument_ioLLVMcode,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_externProcedureMapIR temp_0 = inObject ;
  cEnumerator_externProcedureMapIR enumerator_8401 (temp_0, kEnumeration_up) ;
  while (enumerator_8401.hasCurrentObject ()) {
    extensionMethod_llvmPrototypeGeneration (enumerator_8401.current (HERE), ioArgument_ioLLVMcode, inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 209)) ;
    enumerator_8401.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Extension method '@isrDeclarationListAST enterInContext'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_enterInContext (const GALGAS_isrDeclarationListAST inObject,
                                     GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                     C_Compiler * /* inCompiler */
                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_isrDeclarationListAST temp_0 = inObject ;
  cEnumerator_isrDeclarationListAST enumerator_2258 (temp_0, kEnumeration_up) ;
  while (enumerator_2258.hasCurrentObject ()) {
    ioArgument_ioSemanticContext.mAttribute_mDefinedInterruptSet.addAssign_operation (enumerator_2258.current (HERE).mAttribute_mISRName.mAttribute_string  COMMA_SOURCE_FILE ("declaration-isr.galgas", 54)) ;
    enumerator_2258.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Extension method '@isrDeclarationListAST isrSemanticAnalysis'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_isrSemanticAnalysis (const GALGAS_isrDeclarationListAST inObject,
                                          const GALGAS_semanticContext constinArgument_inSemanticContext,
                                          GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                          GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                          C_Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_isrDeclarationListAST temp_0 = inObject ;
  cEnumerator_isrDeclarationListAST enumerator_2946 (temp_0, kEnumeration_up) ;
  while (enumerator_2946.hasCurrentObject ()) {
    GALGAS_bool var_xtrAttribute_2996 = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_3049 (enumerator_2946.current (HERE).mAttribute_mISRAttributeList, kEnumeration_up) ;
    while (enumerator_3049.hasCurrentObject ()) {
      const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, enumerator_3049.current_mValue (HERE).mAttribute_string.objectCompare (GALGAS_string ("xtr"))).boolEnum () ;
      if (kBoolTrue == test_1) {
        inCompiler->emitSemanticError (enumerator_3049.current_mValue (HERE).getter_location (SOURCE_FILE ("declaration-isr.galgas", 72)), GALGAS_string ("only @xtr attribute is allowed here")  COMMA_SOURCE_FILE ("declaration-isr.galgas", 72)) ;
      }else if (kBoolFalse == test_1) {
        const enumGalgasBool test_2 = var_xtrAttribute_2996.boolEnum () ;
        if (kBoolTrue == test_2) {
          inCompiler->emitSemanticError (enumerator_3049.current_mValue (HERE).getter_location (SOURCE_FILE ("declaration-isr.galgas", 74)), GALGAS_string ("duplicate @xtr attribute")  COMMA_SOURCE_FILE ("declaration-isr.galgas", 74)) ;
        }else if (kBoolFalse == test_2) {
          var_xtrAttribute_2996 = GALGAS_bool (true) ;
        }
      }
      enumerator_3049.gotoNextObject () ;
    }
    GALGAS_stringset temp_3 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("declaration-isr.galgas", 80)) ;
    GALGAS_string temp_4 ;
    const enumGalgasBool test_5 = var_xtrAttribute_2996.boolEnum () ;
    if (kBoolTrue == test_5) {
      temp_4 = function_serviceModeName (inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 80)) ;
    }else if (kBoolFalse == test_5) {
      temp_4 = function_sectionModeName (inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 80)) ;
    }
    temp_3.addAssign_operation (temp_4  COMMA_SOURCE_FILE ("declaration-isr.galgas", 80)) ;
    GALGAS_stringset var_modeSet_3336 = temp_3 ;
    GALGAS_lstring var_routineNameForInvocationGraph_3471 = function_interruptNameForInvocationGraph (enumerator_2946.current (HERE).mAttribute_mISRName, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 82)) ;
    const enumGalgasBool test_6 = ioArgument_ioTemporaries.mAttribute_mSubprogramInvocationGraph.getter_isNodeDefined (var_routineNameForInvocationGraph_3471.mAttribute_string COMMA_SOURCE_FILE ("declaration-isr.galgas", 83)).operator_not (SOURCE_FILE ("declaration-isr.galgas", 83)).boolEnum () ;
    if (kBoolTrue == test_6) {
      {
      ioArgument_ioTemporaries.mAttribute_mSubprogramInvocationGraph.setter_addNode (var_routineNameForInvocationGraph_3471, var_routineNameForInvocationGraph_3471, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 84)) ;
      }
    }
    GALGAS_variableMap var_variableMap_4091 ;
    GALGAS_namedObjectMap var_namedObjectMap_4129 ;
    {
    routine_initialVariableMap (var_routineNameForInvocationGraph_3471.mAttribute_string, constinArgument_inSemanticContext, GALGAS_bool (false), GALGAS_accessKind::constructor_readWriteAccess (SOURCE_FILE ("declaration-isr.galgas", 94)), GALGAS_bool (false), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-isr.galgas", 96)), var_variableMap_4091, var_namedObjectMap_4129, inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 90)) ;
    }
    GALGAS_unifiedTypeMap_2D_proxy temp_7 ;
    const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, enumerator_2946.current (HERE).mAttribute_mSelfTypeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_8) {
      temp_7 = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-isr.galgas", 102)) ;
    }else if (kBoolFalse == test_8) {
      temp_7 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_2946.current (HERE).mAttribute_mSelfTypeName, inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 104)) ;
    }
    GALGAS_unifiedTypeMap_2D_proxy var_selfType_4169 = temp_7 ;
    GALGAS_allocaList var_allocaList_4406 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("declaration-isr.galgas", 107)) ;
    GALGAS_instructionListIR var_instructionGenerationList_4460 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("declaration-isr.galgas", 108)) ;
    extensionMethod_analyzeRoutineInstructionList (enumerator_2946.current (HERE).mAttribute_mISRInstructionList, var_selfType_4169, GALGAS_bool (true), GALGAS_bool (true), var_routineNameForInvocationGraph_3471, constinArgument_inSemanticContext, var_modeSet_3336, var_modeSet_3336.getter_hasKey (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 116)) COMMA_SOURCE_FILE ("declaration-isr.galgas", 116)).operator_not (SOURCE_FILE ("declaration-isr.galgas", 116)), ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct.mAttribute_mStaticStringMap, var_variableMap_4091, var_allocaList_4406, var_instructionGenerationList_4460, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 109)) ;
    var_variableMap_4091.method_checkAutomatonStates (enumerator_2946.current (HERE).mAttribute_mEndOfISRDeclaration, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 125)) ;
    GALGAS_interruptionPanicCode joker_5260 ; // Joker input parameter
    constinArgument_inSemanticContext.mAttribute_mAvailableInterruptMap.method_searchKey (enumerator_2946.current (HERE).mAttribute_mISRName, joker_5260, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 128)) ;
    {
    ioArgument_ioIntermediateCodeStruct.mAttribute_mInterruptMapIR.setter_insertKey (enumerator_2946.current (HERE).mAttribute_mISRName, var_selfType_4169, enumerator_2946.current (HERE).mAttribute_mGlobalVariableName, var_allocaList_4406, var_instructionGenerationList_4460, var_xtrAttribute_2996, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 129)) ;
    }
    enumerator_2946.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Extension method '@interruptMapIR interruptCodeGeneration'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_interruptCodeGeneration (const GALGAS_interruptMapIR inObject,
                                              GALGAS_string & ioArgument_ioLLVMcode,
                                              GALGAS_string & ioArgument_ioAScode,
                                              const GALGAS_string constinArgument_inUndefinedInterruptString,
                                              const GALGAS_string constinArgument_inXTRInterruptHandlerString,
                                              const GALGAS_generationContext constinArgument_inGenerationContext,
                                              GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringset var_definedInterrupts_6570 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("declaration-isr.galgas", 161)) ;
  const GALGAS_interruptMapIR temp_0 = inObject ;
  cEnumerator_interruptMapIR enumerator_6599 (temp_0, kEnumeration_up) ;
  while (enumerator_6599.hasCurrentObject ()) {
    var_definedInterrupts_6570.addAssign_operation (enumerator_6599.current (HERE).mAttribute_lkey.mAttribute_string  COMMA_SOURCE_FILE ("declaration-isr.galgas", 163)) ;
    GALGAS_string temp_1 ;
    const enumGalgasBool test_2 = enumerator_6599.current (HERE).mAttribute_mXTR.boolEnum () ;
    if (kBoolTrue == test_2) {
      temp_1 = function_llvmNameForInterrupt (enumerator_6599.current (HERE).mAttribute_lkey, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 165)).mAttribute_string ;
    }else if (kBoolFalse == test_2) {
      temp_1 = function_llvmNameForISR (enumerator_6599.current (HERE).mAttribute_lkey.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 167)) ;
    }
    GALGAS_string var_interruptImplementationName_6686 = temp_1 ;
    ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (var_interruptImplementationName_6686, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 169)), inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 169)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define void @").add_operation (var_interruptImplementationName_6686, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 170)).add_operation (GALGAS_string (" ()"), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 170)).add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 170)), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 170)).add_operation (GALGAS_string (" {\n"), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 170)), inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 170)) ;
    cEnumerator_allocaList enumerator_7063 (enumerator_6599.current (HERE).mAttribute_mAllocaList, kEnumeration_up) ;
    while (enumerator_7063.hasCurrentObject ()) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (function_llvmNameForLocalVariable (enumerator_7063.current_mVarName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 173)), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 173)).add_operation (GALGAS_string (" = alloca "), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 173)).add_operation (enumerator_7063.current_mType (HERE).getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 173)), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 173)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 173)), inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 173)) ;
      enumerator_7063.gotoNextObject () ;
    }
    const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, enumerator_6599.current (HERE).mAttribute_mSelfType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-isr.galgas", 176)))).boolEnum () ;
    if (kBoolTrue == test_3) {
      GALGAS_string var_varName_7261 = function_llvmNameForGlobalVariable (enumerator_6599.current (HERE).mAttribute_mGlobalVariableName, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 177)) ;
      GALGAS_string var_typeName_7341 = enumerator_6599.current (HERE).mAttribute_mSelfType.getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 178)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %self = getelementptr inbounds ").add_operation (var_typeName_7341, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 179)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 179)).add_operation (var_typeName_7341, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 179)).add_operation (GALGAS_string (" * @"), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 179)).add_operation (var_varName_7261, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 179)), inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 179)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", i32 0 ; Perform %self = @").add_operation (var_varName_7261, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 180)).add_operation (GALGAS_string (" \n"), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 180)), inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 180)) ;
    }
    extensionMethod_instructionListLLVMCode (enumerator_6599.current (HERE).mAttribute_mInstructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 183)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 185)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
      "\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 186)) ;
    const enumGalgasBool test_4 = enumerator_6599.current (HERE).mAttribute_mXTR.boolEnum () ;
    if (kBoolTrue == test_4) {
      GALGAS_string var_interruptHandlerName_7876 = function_llvmNameForInterrupt (enumerator_6599.current (HERE).mAttribute_lkey, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 189)).mAttribute_string ;
      GALGAS_string var_isrName_7941 = function_llvmNameForISR (enumerator_6599.current (HERE).mAttribute_lkey.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 190)) ;
      GALGAS_string var_s_31__7995 = constinArgument_inXTRInterruptHandlerString.getter_stringByReplacingStringByString (GALGAS_string ("!ISR!"), var_isrName_7941, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 191)) ;
      GALGAS_string var_s_32__8089 = var_s_31__7995.getter_stringByReplacingStringByString (GALGAS_string ("!HANDLER!"), var_interruptHandlerName_7876, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 192)) ;
      ioArgument_ioAScode.plusAssign_operation(var_s_32__8089, inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 193)) ;
    }
    enumerator_6599.gotoNextObject () ;
  }
  cEnumerator_availableInterruptMap enumerator_8318 (constinArgument_inGenerationContext.mAttribute_mAvailableInterruptMap, kEnumeration_up) ;
  while (enumerator_8318.hasCurrentObject ()) {
    const enumGalgasBool test_5 = var_definedInterrupts_6570.getter_hasKey (enumerator_8318.current_lkey (HERE).mAttribute_string COMMA_SOURCE_FILE ("declaration-isr.galgas", 198)).operator_not (SOURCE_FILE ("declaration-isr.galgas", 198)).boolEnum () ;
    if (kBoolTrue == test_5) {
      switch (enumerator_8318.current_mInterruptionPanicCode (HERE).enumValue ()) {
      case GALGAS_interruptionPanicCode::kNotBuilt:
        break ;
      case GALGAS_interruptionPanicCode::kEnum_noPanicCode:
        {
          GALGAS_string var_s_8439 = constinArgument_inUndefinedInterruptString.getter_stringByReplacingStringByString (GALGAS_string ("!ISR!"), function_llvmNameForISR (enumerator_8318.current_lkey (HERE).mAttribute_string, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 201)), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 201)) ;
          ioArgument_ioAScode.plusAssign_operation(var_s_8439, inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 202)) ;
        }
        break ;
      case GALGAS_interruptionPanicCode::kEnum_panicCode:
        {
          const cEnumAssociatedValues_interruptionPanicCode_panicCode * extractPtr_9258 = (const cEnumAssociatedValues_interruptionPanicCode_panicCode *) (enumerator_8318.current_mInterruptionPanicCode (HERE).unsafePointer ()) ;
          const GALGAS_lbigint extractedValue_value = extractPtr_9258->mAssociatedValue0 ;
          const enumGalgasBool test_6 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).boolEnum () ;
          if (kBoolTrue == test_6) {
            GALGAS_string var_s_8681 = constinArgument_inUndefinedInterruptString.getter_stringByReplacingStringByString (GALGAS_string ("!ISR!"), function_llvmNameForISR (enumerator_8318.current_lkey (HERE).mAttribute_string, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 205)), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 205)) ;
            ioArgument_ioAScode.plusAssign_operation(var_s_8681, inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 206)) ;
          }else if (kBoolFalse == test_6) {
            GALGAS_string var_name_8840 = function_llvmNameForISR (enumerator_8318.current_lkey (HERE).mAttribute_string, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 208)) ;
            ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("Panic code for ").add_operation (var_name_8840, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 209)), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 209)), inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 209)) ;
            ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define void @").add_operation (var_name_8840, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 210)).add_operation (GALGAS_string (" ()"), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 210)).add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 210)), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 210)).add_operation (GALGAS_string (" noreturn {\n"), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 210)), inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 210)) ;
            ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @panic.isr (").add_operation (constinArgument_inGenerationContext.mAttribute_mPanicCodeLLVMType, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 211)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 211)).add_operation (extractedValue_value.mAttribute_bigint.getter_string (SOURCE_FILE ("declaration-isr.galgas", 211)), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 211)).add_operation (GALGAS_string (") noreturn \n"), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 211)), inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 211)) ;
            ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  unreachable\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 212)) ;
            ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
              "\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 213)) ;
          }
        }
        break ;
      }
    }
    enumerator_8318.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Extension method '@sectionDeclarationListAST noteSectionTypesInPrecedenceGraph'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_noteSectionTypesInPrecedenceGraph (const GALGAS_sectionDeclarationListAST inObject,
                                                        GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                        C_Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_sectionDeclarationListAST temp_0 = inObject ;
  cEnumerator_sectionDeclarationListAST enumerator_2598 (temp_0, kEnumeration_up) ;
  while (enumerator_2598.hasCurrentObject ()) {
    cEnumerator_procFormalArgumentList enumerator_2670 (enumerator_2598.current_mSectionFormalArgumentList (HERE), kEnumeration_up) ;
    while (enumerator_2670.hasCurrentObject ()) {
      GALGAS_lstring var_typeName_2692 = GALGAS_lstring::constructor_new (GALGAS_string ("$").add_operation (enumerator_2670.current_mFormalArgumentTypeName (HERE).getter_string (SOURCE_FILE ("declaration-section.galgas", 72)), inCompiler COMMA_SOURCE_FILE ("declaration-section.galgas", 72)), enumerator_2670.current_mFormalArgumentTypeName (HERE).mAttribute_location  COMMA_SOURCE_FILE ("declaration-section.galgas", 72)) ;
      {
      ioArgument_ioGraph.setter_noteNode (var_typeName_2692 COMMA_SOURCE_FILE ("declaration-section.galgas", 73)) ;
      }
      enumerator_2670.gotoNextObject () ;
    }
    extensionMethod_noteInstructionListTypesInPrecedenceGraph (enumerator_2598.current_mSectionInstructionList (HERE), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-section.galgas", 75)) ;
    enumerator_2598.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Extension method '@sectionDeclarationListAST enterInContext'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_enterInContext (const GALGAS_sectionDeclarationListAST inObject,
                                     const GALGAS_string constinArgument_inReceiverTypeName,
                                     GALGAS_semanticContext & ioArgument_ioContext,
                                     C_Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_sectionDeclarationListAST temp_0 = inObject ;
  cEnumerator_sectionDeclarationListAST enumerator_3431 (temp_0, kEnumeration_up) ;
  while (enumerator_3431.hasCurrentObject ()) {
    GALGAS_lstring temp_1 ;
    const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, constinArgument_inReceiverTypeName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_2) {
      temp_1 = enumerator_3431.current (HERE).mAttribute_mSectionName ;
    }else if (kBoolFalse == test_2) {
      temp_1 = GALGAS_lstring::constructor_new (constinArgument_inReceiverTypeName.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-section.galgas", 92)).add_operation (enumerator_3431.current (HERE).mAttribute_mSectionName.getter_string (SOURCE_FILE ("declaration-section.galgas", 92)), inCompiler COMMA_SOURCE_FILE ("declaration-section.galgas", 92)), enumerator_3431.current (HERE).mAttribute_mSectionName.mAttribute_location  COMMA_SOURCE_FILE ("declaration-section.galgas", 92)) ;
    }
    GALGAS_lstring var_routineMangledName_3478 = temp_1 ;
    GALGAS_procedureSignature var_signature_3692 = GALGAS_procedureSignature::constructor_emptyList (SOURCE_FILE ("declaration-section.galgas", 94)) ;
    var_routineMangledName_3478.mAttribute_string.plusAssign_operation(GALGAS_string ("("), inCompiler  COMMA_SOURCE_FILE ("declaration-section.galgas", 95)) ;
    cEnumerator_procFormalArgumentList enumerator_3842 (enumerator_3431.current (HERE).mAttribute_mSectionFormalArgumentList, kEnumeration_up) ;
    while (enumerator_3842.hasCurrentObject ()) {
      GALGAS_unifiedTypeMap_2D_proxy var_typeProxy_3865 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.mAttribute_mTypeMap, enumerator_3842.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("declaration-section.galgas", 97)) ;
      var_signature_3692.addAssign_operation (enumerator_3842.current_mFormalArgumentPassingMode (HERE), enumerator_3842.current_mSelector (HERE).mAttribute_string, var_typeProxy_3865  COMMA_SOURCE_FILE ("declaration-section.galgas", 98)) ;
      var_routineMangledName_3478.mAttribute_string.plusAssign_operation(extensionGetter_formalPassingModeString (enumerator_3842.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-section.galgas", 99)).add_operation (enumerator_3842.current_mSelector (HERE).getter_string (SOURCE_FILE ("declaration-section.galgas", 99)), inCompiler COMMA_SOURCE_FILE ("declaration-section.galgas", 99)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("declaration-section.galgas", 99)), inCompiler  COMMA_SOURCE_FILE ("declaration-section.galgas", 99)) ;
      enumerator_3842.gotoNextObject () ;
    }
    var_routineMangledName_3478.mAttribute_string.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("declaration-section.galgas", 101)) ;
    GALGAS_unifiedTypeMap_2D_proxy temp_3 ;
    const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, enumerator_3431.current (HERE).mAttribute_mReturnTypeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_4) {
      temp_3 = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-section.galgas", 103)) ;
    }else if (kBoolFalse == test_4) {
      temp_3 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.mAttribute_mTypeMap, enumerator_3431.current (HERE).mAttribute_mReturnTypeName, inCompiler  COMMA_SOURCE_FILE ("declaration-section.galgas", 105)) ;
    }
    GALGAS_unifiedTypeMap_2D_proxy var_returnType_4187 = temp_3 ;
    GALGAS_bool var_mutating_4404 = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_4465 (enumerator_3431.current (HERE).mAttribute_mSectionAttributeList, kEnumeration_up) ;
    while (enumerator_4465.hasCurrentObject ()) {
      const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, enumerator_4465.current_mValue (HERE).mAttribute_string.objectCompare (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-section.galgas", 110)))).boolEnum () ;
      if (kBoolTrue == test_5) {
        var_mutating_4404 = GALGAS_bool (true) ;
      }
      enumerator_4465.gotoNextObject () ;
    }
    {
    GALGAS_modeMap temp_6 = GALGAS_modeMap::constructor_emptyMap (SOURCE_FILE ("declaration-section.galgas", 119)) ;
    temp_6.addAssign_operation (function_userModeName (inCompiler COMMA_SOURCE_FILE ("declaration-section.galgas", 119)).getter_nowhere (SOURCE_FILE ("declaration-section.galgas", 119)), inCompiler  COMMA_SOURCE_FILE ("declaration-section.galgas", 119)) ;
    ioArgument_ioContext.mAttribute_mRoutineMapForContext.setter_insertKey (var_routineMangledName_3478, var_routineMangledName_3478, enumerator_3431.current (HERE).mAttribute_mPublic, temp_6, var_signature_3692, GALGAS_routineKind::constructor_section (SOURCE_FILE ("declaration-section.galgas", 121)), GALGAS_bool (false), var_returnType_4187, GALGAS_bool (false), var_mutating_4404, GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("declaration-section.galgas", 115)) ;
    }
    enumerator_3431.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Extension method '@sectionDeclarationListAST sectionSemanticAnalysis'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_sectionSemanticAnalysis (const GALGAS_sectionDeclarationListAST inObject,
                                              GALGAS_unifiedTypeMap_2D_proxy inArgument_inReceiverType,
                                              const GALGAS_semanticContext constinArgument_inSemanticContext,
                                              GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                              GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_sectionDeclarationListAST temp_0 = inObject ;
  cEnumerator_sectionDeclarationListAST enumerator_5668 (temp_0, kEnumeration_up) ;
  while (enumerator_5668.hasCurrentObject ()) {
    GALGAS_bool var_mutating_5688 = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_5749 (enumerator_5668.current (HERE).mAttribute_mSectionAttributeList, kEnumeration_up) ;
    while (enumerator_5749.hasCurrentObject ()) {
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_5749.current_mValue (HERE).mAttribute_string.objectCompare (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-section.galgas", 144)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        const enumGalgasBool test_2 = var_mutating_5688.boolEnum () ;
        if (kBoolTrue == test_2) {
          inCompiler->emitSemanticError (enumerator_5749.current_mValue (HERE).getter_location (SOURCE_FILE ("declaration-section.galgas", 146)), GALGAS_string ("duplicated @").add_operation (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-section.galgas", 146)), inCompiler COMMA_SOURCE_FILE ("declaration-section.galgas", 146)).add_operation (GALGAS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("declaration-section.galgas", 146))  COMMA_SOURCE_FILE ("declaration-section.galgas", 146)) ;
        }
        var_mutating_5688 = GALGAS_bool (true) ;
      }else if (kBoolFalse == test_1) {
        inCompiler->emitSemanticError (enumerator_5749.current_mValue (HERE).getter_location (SOURCE_FILE ("declaration-section.galgas", 150)), GALGAS_string ("unknown attribute; available attribute is @").add_operation (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-section.galgas", 150)), inCompiler COMMA_SOURCE_FILE ("declaration-section.galgas", 150))  COMMA_SOURCE_FILE ("declaration-section.galgas", 150)) ;
      }
      enumerator_5749.gotoNextObject () ;
    }
    {
    GALGAS_lstringlist temp_3 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("declaration-section.galgas", 156)) ;
    temp_3.addAssign_operation (GALGAS_lstring::constructor_new (function_sectionModeName (inCompiler COMMA_SOURCE_FILE ("declaration-section.galgas", 156)), enumerator_5668.current (HERE).mAttribute_mSectionName.mAttribute_location  COMMA_SOURCE_FILE ("declaration-section.galgas", 156))  COMMA_SOURCE_FILE ("declaration-section.galgas", 156)) ;
    routine_routineSemanticAnalysis (inArgument_inReceiverType, GALGAS_routineKind::constructor_section (SOURCE_FILE ("declaration-section.galgas", 155)), temp_3, enumerator_5668.current (HERE).mAttribute_mSectionName, enumerator_5668.current (HERE).mAttribute_mSectionFormalArgumentList, enumerator_5668.current (HERE).mAttribute_mReturnTypeName, enumerator_5668.current (HERE).mAttribute_mSectionInstructionList, enumerator_5668.current (HERE).mAttribute_mEndOfSectionLocation, GALGAS_bool (true), var_mutating_5688, GALGAS_bool (true), GALGAS_bool (true), GALGAS_bool (false), GALGAS_accessKind::constructor_readWriteAccess (SOURCE_FILE ("declaration-section.galgas", 167)), constinArgument_inSemanticContext, ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct, inCompiler  COMMA_SOURCE_FILE ("declaration-section.galgas", 153)) ;
    }
    enumerator_5668.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Extension method '@serviceDeclarationListAST noteServiceTypesInPrecedenceGraph'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_noteServiceTypesInPrecedenceGraph (const GALGAS_serviceDeclarationListAST inObject,
                                                        GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                        C_Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_serviceDeclarationListAST temp_0 = inObject ;
  cEnumerator_serviceDeclarationListAST enumerator_2563 (temp_0, kEnumeration_up) ;
  while (enumerator_2563.hasCurrentObject ()) {
    cEnumerator_procFormalArgumentList enumerator_2635 (enumerator_2563.current_mServiceFormalArgumentList (HERE), kEnumeration_up) ;
    while (enumerator_2635.hasCurrentObject ()) {
      GALGAS_lstring var_typeName_2657 = GALGAS_lstring::constructor_new (GALGAS_string ("$").add_operation (enumerator_2635.current_mFormalArgumentTypeName (HERE).getter_string (SOURCE_FILE ("declaration-service.galgas", 71)), inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 71)), enumerator_2635.current_mFormalArgumentTypeName (HERE).mAttribute_location  COMMA_SOURCE_FILE ("declaration-service.galgas", 71)) ;
      {
      ioArgument_ioGraph.setter_noteNode (var_typeName_2657 COMMA_SOURCE_FILE ("declaration-service.galgas", 72)) ;
      }
      enumerator_2635.gotoNextObject () ;
    }
    extensionMethod_noteInstructionListTypesInPrecedenceGraph (enumerator_2563.current_mServiceInstructionList (HERE), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 74)) ;
    enumerator_2563.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Extension method '@serviceDeclarationListAST enterInContext'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_enterInContext (const GALGAS_serviceDeclarationListAST inObject,
                                     const GALGAS_string constinArgument_inReceiverTypeName,
                                     GALGAS_semanticContext & ioArgument_ioContext,
                                     C_Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_serviceDeclarationListAST temp_0 = inObject ;
  cEnumerator_serviceDeclarationListAST enumerator_3396 (temp_0, kEnumeration_up) ;
  while (enumerator_3396.hasCurrentObject ()) {
    GALGAS_lstring temp_1 ;
    const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, constinArgument_inReceiverTypeName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_2) {
      temp_1 = enumerator_3396.current (HERE).mAttribute_mServiceName ;
    }else if (kBoolFalse == test_2) {
      temp_1 = GALGAS_lstring::constructor_new (constinArgument_inReceiverTypeName.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 91)).add_operation (enumerator_3396.current (HERE).mAttribute_mServiceName.getter_string (SOURCE_FILE ("declaration-service.galgas", 91)), inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 91)), enumerator_3396.current (HERE).mAttribute_mServiceName.mAttribute_location  COMMA_SOURCE_FILE ("declaration-service.galgas", 91)) ;
    }
    GALGAS_lstring var_routineMangledName_3443 = temp_1 ;
    GALGAS_procedureSignature var_signature_3657 = GALGAS_procedureSignature::constructor_emptyList (SOURCE_FILE ("declaration-service.galgas", 93)) ;
    var_routineMangledName_3443.mAttribute_string.plusAssign_operation(GALGAS_string ("("), inCompiler  COMMA_SOURCE_FILE ("declaration-service.galgas", 94)) ;
    cEnumerator_procFormalArgumentList enumerator_3807 (enumerator_3396.current (HERE).mAttribute_mServiceFormalArgumentList, kEnumeration_up) ;
    while (enumerator_3807.hasCurrentObject ()) {
      GALGAS_unifiedTypeMap_2D_proxy var_typeProxy_3830 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.mAttribute_mTypeMap, enumerator_3807.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("declaration-service.galgas", 96)) ;
      var_signature_3657.addAssign_operation (enumerator_3807.current_mFormalArgumentPassingMode (HERE), enumerator_3807.current_mSelector (HERE).mAttribute_string, var_typeProxy_3830  COMMA_SOURCE_FILE ("declaration-service.galgas", 97)) ;
      var_routineMangledName_3443.mAttribute_string.plusAssign_operation(extensionGetter_formalPassingModeString (enumerator_3807.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 98)).add_operation (enumerator_3807.current_mSelector (HERE).getter_string (SOURCE_FILE ("declaration-service.galgas", 98)), inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 98)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 98)), inCompiler  COMMA_SOURCE_FILE ("declaration-service.galgas", 98)) ;
      enumerator_3807.gotoNextObject () ;
    }
    var_routineMangledName_3443.mAttribute_string.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("declaration-service.galgas", 100)) ;
    GALGAS_modeMap temp_3 = GALGAS_modeMap::constructor_emptyMap (SOURCE_FILE ("declaration-service.galgas", 102)) ;
    temp_3.addAssign_operation (function_userModeName (inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 102)).getter_nowhere (SOURCE_FILE ("declaration-service.galgas", 102)), inCompiler  COMMA_SOURCE_FILE ("declaration-service.galgas", 102)) ;
    temp_3.addAssign_operation (function_serviceModeName (inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 102)).getter_nowhere (SOURCE_FILE ("declaration-service.galgas", 102)), inCompiler  COMMA_SOURCE_FILE ("declaration-service.galgas", 102)) ;
    temp_3.addAssign_operation (function_kernelModeName (inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 102)).getter_nowhere (SOURCE_FILE ("declaration-service.galgas", 102)), inCompiler  COMMA_SOURCE_FILE ("declaration-service.galgas", 102)) ;
    GALGAS_modeMap var_modeMap_4174 = temp_3 ;
    GALGAS_unifiedTypeMap_2D_proxy temp_4 ;
    const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, enumerator_3396.current (HERE).mAttribute_mReturnTypeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_5) {
      temp_4 = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-service.galgas", 105)) ;
    }else if (kBoolFalse == test_5) {
      temp_4 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.mAttribute_mTypeMap, enumerator_3396.current (HERE).mAttribute_mReturnTypeName, inCompiler  COMMA_SOURCE_FILE ("declaration-service.galgas", 107)) ;
    }
    GALGAS_unifiedTypeMap_2D_proxy var_returnType_4309 = temp_4 ;
    {
    ioArgument_ioContext.mAttribute_mRoutineMapForContext.setter_insertKey (var_routineMangledName_3443, var_routineMangledName_3443, enumerator_3396.current (HERE).mAttribute_mPublic, var_modeMap_4174, var_signature_3657, GALGAS_routineKind::constructor_service (SOURCE_FILE ("declaration-service.galgas", 115)), GALGAS_bool (false), var_returnType_4309, GALGAS_bool (false), GALGAS_bool (true), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 109)) ;
    }
    enumerator_3396.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Extension method '@serviceDeclarationListAST serviceSemanticAnalysis'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_serviceSemanticAnalysis (const GALGAS_serviceDeclarationListAST inObject,
                                              GALGAS_unifiedTypeMap_2D_proxy inArgument_inReceiverType,
                                              const GALGAS_semanticContext constinArgument_inSemanticContext,
                                              GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                              GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_serviceDeclarationListAST temp_0 = inObject ;
  cEnumerator_serviceDeclarationListAST enumerator_5534 (temp_0, kEnumeration_up) ;
  while (enumerator_5534.hasCurrentObject ()) {
    GALGAS_bool var_warnIfUnused_5558 = GALGAS_bool (true) ;
    cEnumerator_lstringlist enumerator_5618 (enumerator_5534.current (HERE).mAttribute_mServiceAttributeList, kEnumeration_up) ;
    while (enumerator_5618.hasCurrentObject ()) {
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_5618.current_mValue (HERE).mAttribute_string.objectCompare (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 138)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        const enumGalgasBool test_2 = var_warnIfUnused_5558.operator_not (SOURCE_FILE ("declaration-service.galgas", 139)).boolEnum () ;
        if (kBoolTrue == test_2) {
          inCompiler->emitSemanticError (enumerator_5618.current_mValue (HERE).getter_location (SOURCE_FILE ("declaration-service.galgas", 140)), GALGAS_string ("duplicate @").add_operation (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 140)), inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 140)).add_operation (GALGAS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 140))  COMMA_SOURCE_FILE ("declaration-service.galgas", 140)) ;
        }
        var_warnIfUnused_5558 = GALGAS_bool (false) ;
      }else if (kBoolFalse == test_1) {
        inCompiler->emitSemanticError (enumerator_5618.current_mValue (HERE).getter_location (SOURCE_FILE ("declaration-service.galgas", 144)), GALGAS_string ("unknown attribute; available attribute is @").add_operation (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 144)), inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 144))  COMMA_SOURCE_FILE ("declaration-service.galgas", 144)) ;
      }
      enumerator_5618.gotoNextObject () ;
    }
    {
    GALGAS_lstringlist temp_3 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("declaration-service.galgas", 150)) ;
    temp_3.addAssign_operation (function_serviceModeName (inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 150)).getter_nowhere (SOURCE_FILE ("declaration-service.galgas", 150))  COMMA_SOURCE_FILE ("declaration-service.galgas", 150)) ;
    temp_3.addAssign_operation (function_kernelModeName (inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 150)).getter_nowhere (SOURCE_FILE ("declaration-service.galgas", 150))  COMMA_SOURCE_FILE ("declaration-service.galgas", 150)) ;
    routine_routineSemanticAnalysis (inArgument_inReceiverType, GALGAS_routineKind::constructor_service (SOURCE_FILE ("declaration-service.galgas", 149)), temp_3, enumerator_5534.current (HERE).mAttribute_mServiceName, enumerator_5534.current (HERE).mAttribute_mServiceFormalArgumentList, enumerator_5534.current (HERE).mAttribute_mReturnTypeName, enumerator_5534.current (HERE).mAttribute_mServiceInstructionList, enumerator_5534.current (HERE).mAttribute_mEndOfServiceLocation, GALGAS_bool (true), GALGAS_bool (true), var_warnIfUnused_5558, GALGAS_bool (true), GALGAS_bool (false), GALGAS_accessKind::constructor_readWriteAccess (SOURCE_FILE ("declaration-service.galgas", 161)), constinArgument_inSemanticContext, ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct, inCompiler  COMMA_SOURCE_FILE ("declaration-service.galgas", 147)) ;
    }
    enumerator_5534.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Extension method '@routineMapIR serviceCodeGeneration'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_serviceCodeGeneration (const GALGAS_routineMapIR inObject,
                                            GALGAS_string & ioArgument_ioLLVMcode,
                                            GALGAS__32_stringlist & ioArgument_ioServiceList,
                                            C_Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_routineMapIR temp_0 = inObject ;
  cEnumerator_routineMapIR enumerator_7138 (temp_0, kEnumeration_up) ;
  while (enumerator_7138.hasCurrentObject ()) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_7138.current (HERE).mAttribute_mKind.objectCompare (GALGAS_routineKind::constructor_service (SOURCE_FILE ("declaration-service.galgas", 178)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_string var_serviceImplementationName_7215 = function_llvmNameForServiceImplementation (enumerator_7138.current (HERE).mAttribute_mRoutineNameForGeneration.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 179)) ;
      GALGAS_string var_serviceCallName_7320 = function_llvmNameForServiceCall (enumerator_7138.current (HERE).mAttribute_mRoutineNameForGeneration.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 180)) ;
      ioArgument_ioServiceList.addAssign_operation (var_serviceCallName_7320, var_serviceImplementationName_7215  COMMA_SOURCE_FILE ("declaration-service.galgas", 181)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (var_serviceImplementationName_7215, inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 182)), inCompiler  COMMA_SOURCE_FILE ("declaration-service.galgas", 182)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("declare"), inCompiler  COMMA_SOURCE_FILE ("declaration-service.galgas", 183)) ;
      const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_7138.current (HERE).mAttribute_mReturnType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-service.galgas", 184)))).boolEnum () ;
      if (kBoolTrue == test_2) {
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" void"), inCompiler  COMMA_SOURCE_FILE ("declaration-service.galgas", 185)) ;
      }else if (kBoolFalse == test_2) {
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ").add_operation (enumerator_7138.current (HERE).mAttribute_mReturnType.getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 187)), inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 187)), inCompiler  COMMA_SOURCE_FILE ("declaration-service.galgas", 187)) ;
      }
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" @").add_operation (function_llvmNameForServiceCall (enumerator_7138.current (HERE).mAttribute_lkey.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 189)), inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 189)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 189)), inCompiler  COMMA_SOURCE_FILE ("declaration-service.galgas", 189)) ;
      GALGAS_string var_typeName_7808 = enumerator_7138.current (HERE).mAttribute_lkey.mAttribute_string.getter_stringByDeletingPathExtension (SOURCE_FILE ("declaration-service.galgas", 190)) ;
      GALGAS_bool var_first_7878 = GALGAS_bool (kIsEqual, var_typeName_7808.objectCompare (GALGAS_string::makeEmptyString ())) ;
      const enumGalgasBool test_3 = var_first_7878.operator_not (SOURCE_FILE ("declaration-service.galgas", 192)).boolEnum () ;
      if (kBoolTrue == test_3) {
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("%").add_operation (var_typeName_7808.getter_assemblerRepresentation (SOURCE_FILE ("declaration-service.galgas", 193)), inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 193)).add_operation (GALGAS_string (" * %self"), inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 193)), inCompiler  COMMA_SOURCE_FILE ("declaration-service.galgas", 193)) ;
      }
      cEnumerator_procFormalArgumentListForGeneration enumerator_8064 (enumerator_7138.current (HERE).mAttribute_mFormalArgumentListForGeneration, kEnumeration_up) ;
      while (enumerator_8064.hasCurrentObject ()) {
        const enumGalgasBool test_4 = var_first_7878.boolEnum () ;
        if (kBoolTrue == test_4) {
          var_first_7878 = GALGAS_bool (false) ;
        }else if (kBoolFalse == test_4) {
          ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-service.galgas", 196)) ;
        }
        switch (enumerator_8064.current_mFormalArgumentKind (HERE).enumValue ()) {
        case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
          break ;
        case GALGAS_procFormalArgumentPassingMode::kEnum_input:
          {
            ioArgument_ioLLVMcode.plusAssign_operation(enumerator_8064.current_mFormalArgumentType (HERE).getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 199)).add_operation (GALGAS_string (" %in."), inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 199)).add_operation (enumerator_8064.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 199)), inCompiler  COMMA_SOURCE_FILE ("declaration-service.galgas", 199)) ;
          }
          break ;
        case GALGAS_procFormalArgumentPassingMode::kEnum_output:
          {
            ioArgument_ioLLVMcode.plusAssign_operation(enumerator_8064.current_mFormalArgumentType (HERE).getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 201)).add_operation (GALGAS_string (" * %"), inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 201)).add_operation (function_llvmNameForLocalVariable (enumerator_8064.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 201)), inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 201)), inCompiler  COMMA_SOURCE_FILE ("declaration-service.galgas", 201)) ;
          }
          break ;
        case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
          {
            ioArgument_ioLLVMcode.plusAssign_operation(enumerator_8064.current_mFormalArgumentType (HERE).getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 203)).add_operation (GALGAS_string (" * %"), inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 203)).add_operation (function_llvmNameForLocalVariable (enumerator_8064.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 203)), inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 203)), inCompiler  COMMA_SOURCE_FILE ("declaration-service.galgas", 203)) ;
          }
          break ;
        }
        enumerator_8064.gotoNextObject () ;
      }
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 206)), inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 206)).add_operation (GALGAS_string ("\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 206)), inCompiler  COMMA_SOURCE_FILE ("declaration-service.galgas", 206)) ;
    }
    enumerator_7138.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Extension method '@primitiveDeclarationListAST notePrimitiveTypesInPrecedenceGraph'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_notePrimitiveTypesInPrecedenceGraph (const GALGAS_primitiveDeclarationListAST inObject,
                                                          GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_primitiveDeclarationListAST temp_0 = inObject ;
  cEnumerator_primitiveDeclarationListAST enumerator_2604 (temp_0, kEnumeration_up) ;
  while (enumerator_2604.hasCurrentObject ()) {
    cEnumerator_procFormalArgumentList enumerator_2678 (enumerator_2604.current_mPrimitiveFormalArgumentList (HERE), kEnumeration_up) ;
    while (enumerator_2678.hasCurrentObject ()) {
      GALGAS_lstring var_typeName_2700 = GALGAS_lstring::constructor_new (GALGAS_string ("$").add_operation (enumerator_2678.current_mFormalArgumentTypeName (HERE).getter_string (SOURCE_FILE ("declaration-primitive.galgas", 71)), inCompiler COMMA_SOURCE_FILE ("declaration-primitive.galgas", 71)), enumerator_2678.current_mFormalArgumentTypeName (HERE).mAttribute_location  COMMA_SOURCE_FILE ("declaration-primitive.galgas", 71)) ;
      {
      ioArgument_ioGraph.setter_noteNode (var_typeName_2700 COMMA_SOURCE_FILE ("declaration-primitive.galgas", 72)) ;
      }
      enumerator_2678.gotoNextObject () ;
    }
    extensionMethod_noteInstructionListTypesInPrecedenceGraph (enumerator_2604.current_mPrimitiveInstructionList (HERE), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-primitive.galgas", 74)) ;
    enumerator_2604.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Extension method '@primitiveDeclarationListAST enterInContext'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_enterInContext (const GALGAS_primitiveDeclarationListAST inObject,
                                     const GALGAS_string constinArgument_inReceiverTypeName,
                                     GALGAS_semanticContext & ioArgument_ioContext,
                                     C_Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_primitiveDeclarationListAST temp_0 = inObject ;
  cEnumerator_primitiveDeclarationListAST enumerator_3445 (temp_0, kEnumeration_up) ;
  while (enumerator_3445.hasCurrentObject ()) {
    GALGAS_lstring temp_1 ;
    const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, constinArgument_inReceiverTypeName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_2) {
      temp_1 = enumerator_3445.current (HERE).mAttribute_mPrimitiveName ;
    }else if (kBoolFalse == test_2) {
      temp_1 = GALGAS_lstring::constructor_new (constinArgument_inReceiverTypeName.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-primitive.galgas", 91)).add_operation (enumerator_3445.current (HERE).mAttribute_mPrimitiveName.getter_string (SOURCE_FILE ("declaration-primitive.galgas", 91)), inCompiler COMMA_SOURCE_FILE ("declaration-primitive.galgas", 91)), enumerator_3445.current (HERE).mAttribute_mPrimitiveName.mAttribute_location  COMMA_SOURCE_FILE ("declaration-primitive.galgas", 91)) ;
    }
    GALGAS_lstring var_routineMangledName_3492 = temp_1 ;
    GALGAS_procedureSignature var_signature_3718 = GALGAS_procedureSignature::constructor_emptyList (SOURCE_FILE ("declaration-primitive.galgas", 93)) ;
    var_routineMangledName_3492.mAttribute_string.plusAssign_operation(GALGAS_string ("("), inCompiler  COMMA_SOURCE_FILE ("declaration-primitive.galgas", 94)) ;
    cEnumerator_procFormalArgumentList enumerator_3872 (enumerator_3445.current (HERE).mAttribute_mPrimitiveFormalArgumentList, kEnumeration_up) ;
    while (enumerator_3872.hasCurrentObject ()) {
      GALGAS_unifiedTypeMap_2D_proxy var_typeProxy_3895 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.mAttribute_mTypeMap, enumerator_3872.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("declaration-primitive.galgas", 96)) ;
      var_signature_3718.addAssign_operation (enumerator_3872.current_mFormalArgumentPassingMode (HERE), enumerator_3872.current_mSelector (HERE).mAttribute_string, var_typeProxy_3895  COMMA_SOURCE_FILE ("declaration-primitive.galgas", 97)) ;
      var_routineMangledName_3492.mAttribute_string.plusAssign_operation(extensionGetter_formalPassingModeString (enumerator_3872.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-primitive.galgas", 98)).add_operation (enumerator_3872.current_mSelector (HERE).getter_string (SOURCE_FILE ("declaration-primitive.galgas", 98)), inCompiler COMMA_SOURCE_FILE ("declaration-primitive.galgas", 98)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("declaration-primitive.galgas", 98)), inCompiler  COMMA_SOURCE_FILE ("declaration-primitive.galgas", 98)) ;
      enumerator_3872.gotoNextObject () ;
    }
    var_routineMangledName_3492.mAttribute_string.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("declaration-primitive.galgas", 100)) ;
    GALGAS_modeMap temp_3 = GALGAS_modeMap::constructor_emptyMap (SOURCE_FILE ("declaration-primitive.galgas", 102)) ;
    temp_3.addAssign_operation (function_userModeName (inCompiler COMMA_SOURCE_FILE ("declaration-primitive.galgas", 102)).getter_nowhere (SOURCE_FILE ("declaration-primitive.galgas", 102)), inCompiler  COMMA_SOURCE_FILE ("declaration-primitive.galgas", 102)) ;
    temp_3.addAssign_operation (function_kernelModeName (inCompiler COMMA_SOURCE_FILE ("declaration-primitive.galgas", 102)).getter_nowhere (SOURCE_FILE ("declaration-primitive.galgas", 102)), inCompiler  COMMA_SOURCE_FILE ("declaration-primitive.galgas", 102)) ;
    GALGAS_modeMap var_modeMap_4235 = temp_3 ;
    GALGAS_unifiedTypeMap_2D_proxy temp_4 ;
    const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, enumerator_3445.current (HERE).mAttribute_mReturnTypeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_5) {
      temp_4 = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-primitive.galgas", 105)) ;
    }else if (kBoolFalse == test_5) {
      temp_4 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.mAttribute_mTypeMap, enumerator_3445.current (HERE).mAttribute_mReturnTypeName, inCompiler  COMMA_SOURCE_FILE ("declaration-primitive.galgas", 107)) ;
    }
    GALGAS_unifiedTypeMap_2D_proxy var_returnType_4339 = temp_4 ;
    {
    ioArgument_ioContext.mAttribute_mRoutineMapForContext.setter_insertKey (var_routineMangledName_3492, var_routineMangledName_3492, enumerator_3445.current (HERE).mAttribute_mPublic, var_modeMap_4235, var_signature_3718, GALGAS_routineKind::constructor_primitive (SOURCE_FILE ("declaration-primitive.galgas", 115)), GALGAS_bool (false), var_returnType_4339, GALGAS_bool (false), GALGAS_bool (true), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("declaration-primitive.galgas", 109)) ;
    }
    enumerator_3445.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Extension method '@primitiveDeclarationListAST primitiveSemanticAnalysis'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_primitiveSemanticAnalysis (const GALGAS_primitiveDeclarationListAST inObject,
                                                GALGAS_unifiedTypeMap_2D_proxy inArgument_inReceiverType,
                                                const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                C_Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_primitiveDeclarationListAST temp_0 = inObject ;
  cEnumerator_primitiveDeclarationListAST enumerator_5578 (temp_0, kEnumeration_up) ;
  while (enumerator_5578.hasCurrentObject ()) {
    GALGAS_bool var_warnIfUnused_5602 = GALGAS_bool (true) ;
    cEnumerator_lstringlist enumerator_5670 (enumerator_5578.current (HERE).mAttribute_mPrimitiveNameAttributeList, kEnumeration_up) ;
    while (enumerator_5670.hasCurrentObject ()) {
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_5670.current_mValue (HERE).mAttribute_string.objectCompare (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-primitive.galgas", 138)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        const enumGalgasBool test_2 = var_warnIfUnused_5602.operator_not (SOURCE_FILE ("declaration-primitive.galgas", 139)).boolEnum () ;
        if (kBoolTrue == test_2) {
          inCompiler->emitSemanticError (enumerator_5670.current_mValue (HERE).getter_location (SOURCE_FILE ("declaration-primitive.galgas", 140)), GALGAS_string ("duplicate @").add_operation (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-primitive.galgas", 140)), inCompiler COMMA_SOURCE_FILE ("declaration-primitive.galgas", 140)).add_operation (GALGAS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("declaration-primitive.galgas", 140))  COMMA_SOURCE_FILE ("declaration-primitive.galgas", 140)) ;
        }
        var_warnIfUnused_5602 = GALGAS_bool (false) ;
      }else if (kBoolFalse == test_1) {
        inCompiler->emitSemanticError (enumerator_5670.current_mValue (HERE).getter_location (SOURCE_FILE ("declaration-primitive.galgas", 144)), GALGAS_string ("unknown attribute; available attribute is @").add_operation (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-primitive.galgas", 144)), inCompiler COMMA_SOURCE_FILE ("declaration-primitive.galgas", 144))  COMMA_SOURCE_FILE ("declaration-primitive.galgas", 144)) ;
      }
      enumerator_5670.gotoNextObject () ;
    }
    {
    GALGAS_lstringlist temp_3 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("declaration-primitive.galgas", 150)) ;
    temp_3.addAssign_operation (function_kernelModeName (inCompiler COMMA_SOURCE_FILE ("declaration-primitive.galgas", 150)).getter_nowhere (SOURCE_FILE ("declaration-primitive.galgas", 150))  COMMA_SOURCE_FILE ("declaration-primitive.galgas", 150)) ;
    routine_routineSemanticAnalysis (inArgument_inReceiverType, GALGAS_routineKind::constructor_primitive (SOURCE_FILE ("declaration-primitive.galgas", 149)), temp_3, enumerator_5578.current (HERE).mAttribute_mPrimitiveName, enumerator_5578.current (HERE).mAttribute_mPrimitiveFormalArgumentList, enumerator_5578.current (HERE).mAttribute_mReturnTypeName, enumerator_5578.current (HERE).mAttribute_mPrimitiveInstructionList, enumerator_5578.current (HERE).mAttribute_mEndOfPrimitiveDeclaration, GALGAS_bool (true), GALGAS_bool (true), var_warnIfUnused_5602, GALGAS_bool (true), GALGAS_bool (false), GALGAS_accessKind::constructor_readWriteAccess (SOURCE_FILE ("declaration-primitive.galgas", 161)), constinArgument_inSemanticContext, ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct, inCompiler  COMMA_SOURCE_FILE ("declaration-primitive.galgas", 147)) ;
    }
    enumerator_5578.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Extension method '@routineMapIR primitiveCodeGeneration'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_primitiveCodeGeneration (const GALGAS_routineMapIR inObject,
                                              GALGAS_string & ioArgument_ioLLVMcode,
                                              GALGAS__32_stringlist & ioArgument_ioServiceList,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_routineMapIR temp_0 = inObject ;
  cEnumerator_routineMapIR enumerator_7186 (temp_0, kEnumeration_up) ;
  while (enumerator_7186.hasCurrentObject ()) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_7186.current (HERE).mAttribute_mKind.objectCompare (GALGAS_routineKind::constructor_primitive (SOURCE_FILE ("declaration-primitive.galgas", 178)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_string var_primitiveImplementationName_7269 = function_llvmNameForPrimitiveImplementation (enumerator_7186.current (HERE).mAttribute_mRoutineNameForGeneration.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("declaration-primitive.galgas", 179)) ;
      GALGAS_string var_primitiveCallName_7380 = function_llvmNameForPrimitiveCall (enumerator_7186.current (HERE).mAttribute_mRoutineNameForGeneration.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("declaration-primitive.galgas", 180)) ;
      ioArgument_ioServiceList.addAssign_operation (var_primitiveCallName_7380, var_primitiveImplementationName_7269  COMMA_SOURCE_FILE ("declaration-primitive.galgas", 181)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (var_primitiveImplementationName_7269, inCompiler COMMA_SOURCE_FILE ("declaration-primitive.galgas", 182)), inCompiler  COMMA_SOURCE_FILE ("declaration-primitive.galgas", 182)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("declare"), inCompiler  COMMA_SOURCE_FILE ("declaration-primitive.galgas", 183)) ;
      const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_7186.current (HERE).mAttribute_mReturnType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-primitive.galgas", 184)))).boolEnum () ;
      if (kBoolTrue == test_2) {
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" void"), inCompiler  COMMA_SOURCE_FILE ("declaration-primitive.galgas", 185)) ;
      }else if (kBoolFalse == test_2) {
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ").add_operation (enumerator_7186.current (HERE).mAttribute_mReturnType.getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("declaration-primitive.galgas", 187)), inCompiler COMMA_SOURCE_FILE ("declaration-primitive.galgas", 187)), inCompiler  COMMA_SOURCE_FILE ("declaration-primitive.galgas", 187)) ;
      }
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" @").add_operation (var_primitiveCallName_7380, inCompiler COMMA_SOURCE_FILE ("declaration-primitive.galgas", 189)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("declaration-primitive.galgas", 189)), inCompiler  COMMA_SOURCE_FILE ("declaration-primitive.galgas", 189)) ;
      GALGAS_string var_typeName_7854 = enumerator_7186.current (HERE).mAttribute_lkey.mAttribute_string.getter_stringByDeletingPathExtension (SOURCE_FILE ("declaration-primitive.galgas", 190)) ;
      GALGAS_bool var_first_7926 = GALGAS_bool (kIsEqual, var_typeName_7854.objectCompare (GALGAS_string::makeEmptyString ())) ;
      const enumGalgasBool test_3 = var_first_7926.operator_not (SOURCE_FILE ("declaration-primitive.galgas", 192)).boolEnum () ;
      if (kBoolTrue == test_3) {
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("%").add_operation (var_typeName_7854.getter_assemblerRepresentation (SOURCE_FILE ("declaration-primitive.galgas", 193)), inCompiler COMMA_SOURCE_FILE ("declaration-primitive.galgas", 193)).add_operation (GALGAS_string (" * %self"), inCompiler COMMA_SOURCE_FILE ("declaration-primitive.galgas", 193)), inCompiler  COMMA_SOURCE_FILE ("declaration-primitive.galgas", 193)) ;
      }
      cEnumerator_procFormalArgumentListForGeneration enumerator_8114 (enumerator_7186.current (HERE).mAttribute_mFormalArgumentListForGeneration, kEnumeration_up) ;
      while (enumerator_8114.hasCurrentObject ()) {
        const enumGalgasBool test_4 = var_first_7926.boolEnum () ;
        if (kBoolTrue == test_4) {
          var_first_7926 = GALGAS_bool (false) ;
        }else if (kBoolFalse == test_4) {
          ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-primitive.galgas", 196)) ;
        }
        switch (enumerator_8114.current_mFormalArgumentKind (HERE).enumValue ()) {
        case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
          break ;
        case GALGAS_procFormalArgumentPassingMode::kEnum_input:
          {
            ioArgument_ioLLVMcode.plusAssign_operation(enumerator_8114.current_mFormalArgumentType (HERE).getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("declaration-primitive.galgas", 199)).add_operation (GALGAS_string (" %in."), inCompiler COMMA_SOURCE_FILE ("declaration-primitive.galgas", 199)).add_operation (enumerator_8114.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-primitive.galgas", 199)), inCompiler  COMMA_SOURCE_FILE ("declaration-primitive.galgas", 199)) ;
          }
          break ;
        case GALGAS_procFormalArgumentPassingMode::kEnum_output:
          {
            ioArgument_ioLLVMcode.plusAssign_operation(enumerator_8114.current_mFormalArgumentType (HERE).getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("declaration-primitive.galgas", 201)).add_operation (GALGAS_string (" * %"), inCompiler COMMA_SOURCE_FILE ("declaration-primitive.galgas", 201)).add_operation (function_llvmNameForLocalVariable (enumerator_8114.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-primitive.galgas", 201)), inCompiler COMMA_SOURCE_FILE ("declaration-primitive.galgas", 201)), inCompiler  COMMA_SOURCE_FILE ("declaration-primitive.galgas", 201)) ;
          }
          break ;
        case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
          {
            ioArgument_ioLLVMcode.plusAssign_operation(enumerator_8114.current_mFormalArgumentType (HERE).getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("declaration-primitive.galgas", 203)).add_operation (GALGAS_string (" * %"), inCompiler COMMA_SOURCE_FILE ("declaration-primitive.galgas", 203)).add_operation (function_llvmNameForLocalVariable (enumerator_8114.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-primitive.galgas", 203)), inCompiler COMMA_SOURCE_FILE ("declaration-primitive.galgas", 203)), inCompiler  COMMA_SOURCE_FILE ("declaration-primitive.galgas", 203)) ;
          }
          break ;
        }
        enumerator_8114.gotoNextObject () ;
      }
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("declaration-primitive.galgas", 206)), inCompiler COMMA_SOURCE_FILE ("declaration-primitive.galgas", 206)).add_operation (GALGAS_string ("\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("declaration-primitive.galgas", 206)), inCompiler  COMMA_SOURCE_FILE ("declaration-primitive.galgas", 206)) ;
    }
    enumerator_7186.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Extension method '@guardDeclarationListAST noteTypesInPrecedenceGraph'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_noteTypesInPrecedenceGraph (const GALGAS_guardDeclarationListAST inObject,
                                                 GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_guardDeclarationListAST temp_0 = inObject ;
  cEnumerator_guardDeclarationListAST enumerator_2743 (temp_0, kEnumeration_up) ;
  while (enumerator_2743.hasCurrentObject ()) {
    cEnumerator_procFormalArgumentList enumerator_2813 (enumerator_2743.current_mGuardFormalArgumentList (HERE), kEnumeration_up) ;
    while (enumerator_2813.hasCurrentObject ()) {
      GALGAS_lstring var_typeName_2835 = GALGAS_lstring::constructor_new (GALGAS_string ("$").add_operation (enumerator_2813.current_mFormalArgumentTypeName (HERE).getter_string (SOURCE_FILE ("declaration-guard.galgas", 83)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 83)), enumerator_2813.current_mFormalArgumentTypeName (HERE).mAttribute_location  COMMA_SOURCE_FILE ("declaration-guard.galgas", 83)) ;
      {
      ioArgument_ioGraph.setter_noteNode (var_typeName_2835 COMMA_SOURCE_FILE ("declaration-guard.galgas", 84)) ;
      }
      enumerator_2813.gotoNextObject () ;
    }
    extensionMethod_noteInstructionListTypesInPrecedenceGraph (enumerator_2743.current_mGuardInstructionList (HERE), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 86)) ;
    enumerator_2743.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Extension method '@guardDeclarationListAST enterInContext'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_enterInContext (const GALGAS_guardDeclarationListAST inObject,
                                     const GALGAS_string constinArgument_inReceiverTypeName,
                                     GALGAS_semanticContext & ioArgument_ioContext,
                                     C_Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_guardDeclarationListAST temp_0 = inObject ;
  cEnumerator_guardDeclarationListAST enumerator_3568 (temp_0, kEnumeration_up) ;
  while (enumerator_3568.hasCurrentObject ()) {
    GALGAS_lstring temp_1 ;
    const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, constinArgument_inReceiverTypeName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_2) {
      temp_1 = enumerator_3568.current (HERE).mAttribute_mGuardName ;
    }else if (kBoolFalse == test_2) {
      temp_1 = GALGAS_lstring::constructor_new (constinArgument_inReceiverTypeName.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 103)).add_operation (enumerator_3568.current (HERE).mAttribute_mGuardName.getter_string (SOURCE_FILE ("declaration-guard.galgas", 103)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 103)), enumerator_3568.current (HERE).mAttribute_mGuardName.mAttribute_location  COMMA_SOURCE_FILE ("declaration-guard.galgas", 103)) ;
    }
    GALGAS_lstring var_guardMangledName_3613 = temp_1 ;
    var_guardMangledName_3613.mAttribute_string.plusAssign_operation(GALGAS_string ("("), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 105)) ;
    GALGAS_procedureSignature var_signature_3850 = GALGAS_procedureSignature::constructor_emptyList (SOURCE_FILE ("declaration-guard.galgas", 106)) ;
    cEnumerator_procFormalArgumentList enumerator_3959 (enumerator_3568.current (HERE).mAttribute_mGuardFormalArgumentList, kEnumeration_up) ;
    while (enumerator_3959.hasCurrentObject ()) {
      GALGAS_unifiedTypeMap_2D_proxy var_typeProxy_3982 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.mAttribute_mTypeMap, enumerator_3959.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 108)) ;
      var_signature_3850.addAssign_operation (enumerator_3959.current_mFormalArgumentPassingMode (HERE), enumerator_3959.current_mSelector (HERE).mAttribute_string, var_typeProxy_3982  COMMA_SOURCE_FILE ("declaration-guard.galgas", 109)) ;
      var_guardMangledName_3613.mAttribute_string.plusAssign_operation(extensionGetter_formalPassingModeString (enumerator_3959.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 110)).add_operation (enumerator_3959.current_mSelector (HERE).getter_string (SOURCE_FILE ("declaration-guard.galgas", 110)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 110)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 110)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 110)) ;
      enumerator_3959.gotoNextObject () ;
    }
    var_guardMangledName_3613.mAttribute_string.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 112)) ;
    {
    ioArgument_ioContext.mAttribute_mGuardMapForContext.setter_insertKey (var_guardMangledName_3613, enumerator_3568.current (HERE).mAttribute_mIsPublic, var_signature_3850, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 114)) ;
    }
    enumerator_3568.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Extension method '@guardDeclarationListAST guardSemanticAnalysis'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_guardSemanticAnalysis (const GALGAS_guardDeclarationListAST inObject,
                                            GALGAS_unifiedTypeMap_2D_proxy inArgument_inReceiverType,
                                            const GALGAS_semanticContext constinArgument_inSemanticContext,
                                            GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                            GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                            C_Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_guardDeclarationListAST temp_0 = inObject ;
  cEnumerator_guardDeclarationListAST enumerator_5099 (temp_0, kEnumeration_up) ;
  while (enumerator_5099.hasCurrentObject ()) {
    GALGAS_bool var_warnIfUnused_5123 = GALGAS_bool (true) ;
    cEnumerator_lstringlist enumerator_5179 (enumerator_5099.current (HERE).mAttribute_mGuardAttributeList, kEnumeration_up) ;
    while (enumerator_5179.hasCurrentObject ()) {
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_5179.current_mValue (HERE).mAttribute_string.objectCompare (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 135)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        const enumGalgasBool test_2 = var_warnIfUnused_5123.operator_not (SOURCE_FILE ("declaration-guard.galgas", 136)).boolEnum () ;
        if (kBoolTrue == test_2) {
          inCompiler->emitSemanticError (enumerator_5179.current_mValue (HERE).getter_location (SOURCE_FILE ("declaration-guard.galgas", 137)), GALGAS_string ("duplicate @").add_operation (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 137)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 137)).add_operation (GALGAS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 137))  COMMA_SOURCE_FILE ("declaration-guard.galgas", 137)) ;
        }
        var_warnIfUnused_5123 = GALGAS_bool (false) ;
      }else if (kBoolFalse == test_1) {
        inCompiler->emitSemanticError (enumerator_5179.current_mValue (HERE).getter_location (SOURCE_FILE ("declaration-guard.galgas", 141)), GALGAS_string ("unknown attribute; available attribute is @").add_operation (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 141)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 141))  COMMA_SOURCE_FILE ("declaration-guard.galgas", 141)) ;
      }
      enumerator_5179.gotoNextObject () ;
    }
    {
    routine_guardSemanticAnalysis (inArgument_inReceiverType, enumerator_5099.current (HERE).mAttribute_mGuardName, enumerator_5099.current (HERE).mAttribute_mGuardFormalArgumentList, enumerator_5099.current (HERE).mAttribute_mGuardKind, enumerator_5099.current (HERE).mAttribute_mGuardInstructionList, enumerator_5099.current (HERE).mAttribute_mEndOfGuardDeclaration, var_warnIfUnused_5123, constinArgument_inSemanticContext, ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct, inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 144)) ;
    }
    enumerator_5099.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Extension method '@guardMapIR guardCodeGeneration'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_guardCodeGeneration (const GALGAS_guardMapIR inObject,
                                          GALGAS_string & ioArgument_ioLLVMcode,
                                          GALGAS__32_stringlist & ioArgument_ioServiceList,
                                          const GALGAS_generationContext constinArgument_inGenerationContext,
                                          GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                          C_Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_guardMapIR temp_0 = inObject ;
  cEnumerator_guardMapIR enumerator_18430 (temp_0, kEnumeration_up) ;
  while (enumerator_18430.hasCurrentObject ()) {
    switch (enumerator_18430.current (HERE).mAttribute_mGuardKindGenerationIR.enumValue ()) {
    case GALGAS_guardKindGenerationIR::kNotBuilt:
      break ;
    case GALGAS_guardKindGenerationIR::kEnum_convenienceGuard:
      {
      }
      break ;
    case GALGAS_guardKindGenerationIR::kEnum_baseGuard:
      {
        GALGAS_string var_guardImplementationName_18566 = function_llvmNameForGuardImplementation (enumerator_18430.current (HERE).mAttribute_lkey.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 480)) ;
        GALGAS_string var_guardCallName_18644 = function_llvmNameForGuardCall (enumerator_18430.current (HERE).mAttribute_lkey.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 481)) ;
        ioArgument_ioServiceList.addAssign_operation (var_guardCallName_18644, var_guardImplementationName_18566  COMMA_SOURCE_FILE ("declaration-guard.galgas", 482)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (var_guardImplementationName_18566, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 483)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 483)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("declare i1 @").add_operation (var_guardCallName_18644, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 484)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 484)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 484)) ;
        GALGAS_string var_typeName_18892 = enumerator_18430.current (HERE).mAttribute_lkey.mAttribute_string.getter_stringByDeletingPathExtension (SOURCE_FILE ("declaration-guard.galgas", 485)) ;
        GALGAS_bool var_first_18960 = GALGAS_bool (kIsEqual, var_typeName_18892.objectCompare (GALGAS_string::makeEmptyString ())) ;
        const enumGalgasBool test_1 = var_first_18960.operator_not (SOURCE_FILE ("declaration-guard.galgas", 487)).boolEnum () ;
        if (kBoolTrue == test_1) {
          ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("%").add_operation (var_typeName_18892.getter_assemblerRepresentation (SOURCE_FILE ("declaration-guard.galgas", 488)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 488)).add_operation (GALGAS_string (" * %self"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 488)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 488)) ;
        }
        cEnumerator_procFormalArgumentListForGeneration enumerator_19144 (enumerator_18430.current (HERE).mAttribute_mFormalArgumentListForGeneration, kEnumeration_up) ;
        while (enumerator_19144.hasCurrentObject ()) {
          const enumGalgasBool test_2 = var_first_18960.boolEnum () ;
          if (kBoolTrue == test_2) {
            var_first_18960 = GALGAS_bool (false) ;
          }else if (kBoolFalse == test_2) {
            ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 491)) ;
          }
          switch (enumerator_19144.current_mFormalArgumentKind (HERE).enumValue ()) {
          case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
            break ;
          case GALGAS_procFormalArgumentPassingMode::kEnum_input:
            {
              ioArgument_ioLLVMcode.plusAssign_operation(enumerator_19144.current_mFormalArgumentType (HERE).getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 494)).add_operation (GALGAS_string (" %in."), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 494)).add_operation (enumerator_19144.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 494)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 494)) ;
            }
            break ;
          case GALGAS_procFormalArgumentPassingMode::kEnum_output:
            {
              ioArgument_ioLLVMcode.plusAssign_operation(enumerator_19144.current_mFormalArgumentType (HERE).getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 496)).add_operation (GALGAS_string (" * %"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 496)).add_operation (function_llvmNameForLocalVariable (enumerator_19144.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 496)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 496)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 496)) ;
            }
            break ;
          case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
            {
              ioArgument_ioLLVMcode.plusAssign_operation(enumerator_19144.current_mFormalArgumentType (HERE).getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 498)).add_operation (GALGAS_string (" * %"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 498)).add_operation (function_llvmNameForLocalVariable (enumerator_19144.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 498)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 498)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 498)) ;
            }
            break ;
          }
          enumerator_19144.gotoNextObject () ;
        }
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 501)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 501)).add_operation (GALGAS_string ("\n"
          "\n"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 501)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 501)) ;
      }
      break ;
    }
    extensionMethod_llvmCodeGeneration (enumerator_18430.current (HERE), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 503)) ;
    enumerator_18430.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Abstract extension method '@expressionAST noteExpressionTypesInPrecedenceGraph'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_expressionAST_noteExpressionTypesInPrecedenceGraph> gExtensionMethodTable_expressionAST_noteExpressionTypesInPrecedenceGraph ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_noteExpressionTypesInPrecedenceGraph (const int32_t inClassIndex,
                                                                extensionMethodSignature_expressionAST_noteExpressionTypesInPrecedenceGraph inMethod) {
  gExtensionMethodTable_expressionAST_noteExpressionTypesInPrecedenceGraph.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_expressionAST_noteExpressionTypesInPrecedenceGraph (void) {
  gExtensionMethodTable_expressionAST_noteExpressionTypesInPrecedenceGraph.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_expressionAST_noteExpressionTypesInPrecedenceGraph (NULL,
                                                                               freeExtensionMethod_expressionAST_noteExpressionTypesInPrecedenceGraph) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_noteExpressionTypesInPrecedenceGraph (const cPtr_expressionAST * inObject,
                                                               GALGAS_semanticTypePrecedenceGraph & io_ioGraph,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_expressionAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_expressionAST_noteExpressionTypesInPrecedenceGraph f = NULL ;
    if (classIndex < gExtensionMethodTable_expressionAST_noteExpressionTypesInPrecedenceGraph.count ()) {
      f = gExtensionMethodTable_expressionAST_noteExpressionTypesInPrecedenceGraph (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_expressionAST_noteExpressionTypesInPrecedenceGraph.count ()) {
           f = gExtensionMethodTable_expressionAST_noteExpressionTypesInPrecedenceGraph (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_expressionAST_noteExpressionTypesInPrecedenceGraph.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioGraph, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Abstract extension method '@expressionAST analyzeExpression'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_expressionAST_analyzeExpression> gExtensionMethodTable_expressionAST_analyzeExpression ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_analyzeExpression (const int32_t inClassIndex,
                                             extensionMethodSignature_expressionAST_analyzeExpression inMethod) {
  gExtensionMethodTable_expressionAST_analyzeExpression.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_expressionAST_analyzeExpression (void) {
  gExtensionMethodTable_expressionAST_analyzeExpression.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_expressionAST_analyzeExpression (NULL,
                                                            freeExtensionMethod_expressionAST_analyzeExpression) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_analyzeExpression (const cPtr_expressionAST * inObject,
                                            const GALGAS_unifiedTypeMap_2D_proxy constin_inSelfType,
                                            const GALGAS_bool constin_inDirectAccessToPropertiesAllowed,
                                            const GALGAS_bool constin_inGuard,
                                            const GALGAS_lstring constin_inCallerNameForInvocationGraph,
                                            const GALGAS_unifiedTypeMap_2D_proxy constin_inTargetType,
                                            const GALGAS_semanticContext constin_inContext,
                                            const GALGAS_stringset constin_inModes,
                                            const GALGAS_bool constin_inAllowPanic,
                                            GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                            GALGAS_staticStringMap & io_ioGlobalLiteralStringMap,
                                            GALGAS_variableMap & io_ioVariableMap,
                                            GALGAS_allocaList & io_ioAllocaList,
                                            GALGAS_instructionListIR & io_ioInstructionGenerationList,
                                            GALGAS_objectIR & out_outResult,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_outResult.drop () ;
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_expressionAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_expressionAST_analyzeExpression f = NULL ;
    if (classIndex < gExtensionMethodTable_expressionAST_analyzeExpression.count ()) {
      f = gExtensionMethodTable_expressionAST_analyzeExpression (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_expressionAST_analyzeExpression.count ()) {
           f = gExtensionMethodTable_expressionAST_analyzeExpression (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_expressionAST_analyzeExpression.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inSelfType, constin_inDirectAccessToPropertiesAllowed, constin_inGuard, constin_inCallerNameForInvocationGraph, constin_inTargetType, constin_inContext, constin_inModes, constin_inAllowPanic, io_ioTemporaries, io_ioGlobalLiteralStringMap, io_ioVariableMap, io_ioAllocaList, io_ioInstructionGenerationList, out_outResult, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Extension method '@expressionAST analyzeStaticExpression'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_expressionAST_analyzeStaticExpression> gExtensionMethodTable_expressionAST_analyzeStaticExpression ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_analyzeStaticExpression (const int32_t inClassIndex,
                                                   extensionMethodSignature_expressionAST_analyzeStaticExpression inMethod) {
  gExtensionMethodTable_expressionAST_analyzeStaticExpression.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_analyzeStaticExpression (const cPtr_expressionAST * inObject,
                                                  const GALGAS_location constin_inErrorLocation,
                                                  const GALGAS_semanticContext constin_inContext,
                                                  GALGAS_staticStringMap & io_ioGlobalLiteralStringMap,
                                                  GALGAS_objectIR & out_outResult,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  out_outResult.drop () ;
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_expressionAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_expressionAST_analyzeStaticExpression f = NULL ;
    if (classIndex < gExtensionMethodTable_expressionAST_analyzeStaticExpression.count ()) {
      f = gExtensionMethodTable_expressionAST_analyzeStaticExpression (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_expressionAST_analyzeStaticExpression.count ()) {
           f = gExtensionMethodTable_expressionAST_analyzeStaticExpression (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_expressionAST_analyzeStaticExpression.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inErrorLocation, constin_inContext, io_ioGlobalLiteralStringMap, out_outResult, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_expressionAST_analyzeStaticExpression (const cPtr_expressionAST * inObject,
                                                                   const GALGAS_location constinArgument_inErrorLocation,
                                                                   const GALGAS_semanticContext constinArgument_inContext,
                                                                   GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                   GALGAS_objectIR & outArgument_outResult,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_expressionAST * object = inObject ;
  macroValidSharedObject (object, cPtr_expressionAST) ;
  GALGAS_instructionListIR var_instructionGenerationList_14279 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("expression-operator-priority.galgas", 456)) ;
  GALGAS_allocaList var_allocaList_14309 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("expression-operator-priority.galgas", 457)) ;
  GALGAS_semanticTemporariesStruct joker_14580 = GALGAS_semanticTemporariesStruct::constructor_default (SOURCE_FILE ("expression-operator-priority.galgas", 467)) ;
  GALGAS_variableMap joker_14647 = GALGAS_variableMap::constructor_emptyMap (SOURCE_FILE ("expression-operator-priority.galgas", 469)) ;
  const GALGAS_expressionAST temp_0 = object ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) temp_0.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("expression-operator-priority.galgas", 459)), GALGAS_bool (false), GALGAS_bool (false), GALGAS_string ("compiler").getter_nowhere (SOURCE_FILE ("expression-operator-priority.galgas", 462)), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("expression-operator-priority.galgas", 463)), constinArgument_inContext, GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("expression-operator-priority.galgas", 465)), GALGAS_bool (false), joker_14580, ioArgument_ioGlobalLiteralStringMap, joker_14647, var_allocaList_14309, var_instructionGenerationList_14279, outArgument_outResult, inCompiler COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 458)) ;
  GALGAS_bool test_1 = GALGAS_bool (kIsStrictSup, var_allocaList_14309.getter_length (SOURCE_FILE ("expression-operator-priority.galgas", 474)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  if (kBoolTrue != test_1.boolEnum ()) {
    test_1 = GALGAS_bool (kIsStrictSup, var_instructionGenerationList_14279.getter_length (SOURCE_FILE ("expression-operator-priority.galgas", 474)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  }
  GALGAS_bool test_2 = test_1 ;
  if (kBoolTrue != test_2.boolEnum ()) {
    test_2 = extensionGetter_isStatic (outArgument_outResult, inCompiler COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 474)).operator_not (SOURCE_FILE ("expression-operator-priority.galgas", 474)) ;
  }
  const enumGalgasBool test_3 = test_2.boolEnum () ;
  if (kBoolTrue == test_3) {
    inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("this expression should be a static expression")  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 475)) ;
    outArgument_outResult.drop () ; // Release error dropped variable
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_expressionAST_analyzeStaticExpression (void) {
  enterExtensionMethod_analyzeStaticExpression (kTypeDescriptor_GALGAS_expressionAST.mSlotID,
                                                extensionMethod_expressionAST_analyzeStaticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_expressionAST_analyzeStaticExpression (void) {
  gExtensionMethodTable_expressionAST_analyzeStaticExpression.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_expressionAST_analyzeStaticExpression (defineExtensionMethod_expressionAST_analyzeStaticExpression,
                                                                  freeExtensionMethod_expressionAST_analyzeStaticExpression) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Abstract extension method '@instructionAST noteInstructionTypesInPrecedenceGraph'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_instructionAST_noteInstructionTypesInPrecedenceGraph> gExtensionMethodTable_instructionAST_noteInstructionTypesInPrecedenceGraph ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_noteInstructionTypesInPrecedenceGraph (const int32_t inClassIndex,
                                                                 extensionMethodSignature_instructionAST_noteInstructionTypesInPrecedenceGraph inMethod) {
  gExtensionMethodTable_instructionAST_noteInstructionTypesInPrecedenceGraph.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_instructionAST_noteInstructionTypesInPrecedenceGraph (void) {
  gExtensionMethodTable_instructionAST_noteInstructionTypesInPrecedenceGraph.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_instructionAST_noteInstructionTypesInPrecedenceGraph (NULL,
                                                                                 freeExtensionMethod_instructionAST_noteInstructionTypesInPrecedenceGraph) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * inObject,
                                                                GALGAS_semanticTypePrecedenceGraph & io_ioGraph,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_instructionAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_instructionAST_noteInstructionTypesInPrecedenceGraph f = NULL ;
    if (classIndex < gExtensionMethodTable_instructionAST_noteInstructionTypesInPrecedenceGraph.count ()) {
      f = gExtensionMethodTable_instructionAST_noteInstructionTypesInPrecedenceGraph (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_instructionAST_noteInstructionTypesInPrecedenceGraph.count ()) {
           f = gExtensionMethodTable_instructionAST_noteInstructionTypesInPrecedenceGraph (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_instructionAST_noteInstructionTypesInPrecedenceGraph.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioGraph, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Extension method '@instructionListAST noteInstructionListTypesInPrecedenceGraph'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_noteInstructionListTypesInPrecedenceGraph (const GALGAS_instructionListAST inObject,
                                                                GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_instructionListAST temp_0 = inObject ;
  cEnumerator_instructionListAST enumerator_2210 (temp_0, kEnumeration_up) ;
  while (enumerator_2210.hasCurrentObject ()) {
    callExtensionMethod_noteInstructionTypesInPrecedenceGraph ((const cPtr_instructionAST *) enumerator_2210.current_mInstruction (HERE).ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instructionList.galgas", 49)) ;
    enumerator_2210.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Abstract extension method '@instructionAST analyze'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_instructionAST_analyze> gExtensionMethodTable_instructionAST_analyze ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_analyze (const int32_t inClassIndex,
                                   extensionMethodSignature_instructionAST_analyze inMethod) {
  gExtensionMethodTable_instructionAST_analyze.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_instructionAST_analyze (void) {
  gExtensionMethodTable_instructionAST_analyze.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_instructionAST_analyze (NULL,
                                                   freeExtensionMethod_instructionAST_analyze) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_analyze (const cPtr_instructionAST * inObject,
                                  const GALGAS_unifiedTypeMap_2D_proxy constin_inSelfType,
                                  const GALGAS_bool constin_inRoutineCanMutateProperties,
                                  const GALGAS_bool constin_inDirectAccessToPropertiesAllowed,
                                  const GALGAS_lstring constin_inCallerNameForInvocationGraph,
                                  const GALGAS_semanticContext constin_inContext,
                                  const GALGAS_stringset constin_inModeSet,
                                  const GALGAS_bool constin_inAllowPanic,
                                  GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                  GALGAS_staticStringMap & io_ioGlobalLiteralStringMap,
                                  GALGAS_variableMap & io_ioVariableMap,
                                  GALGAS_allocaList & io_ioAllocaList,
                                  GALGAS_instructionListIR & io_ioInstructionGenerationList,
                                  C_Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_instructionAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_instructionAST_analyze f = NULL ;
    if (classIndex < gExtensionMethodTable_instructionAST_analyze.count ()) {
      f = gExtensionMethodTable_instructionAST_analyze (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_instructionAST_analyze.count ()) {
           f = gExtensionMethodTable_instructionAST_analyze (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_instructionAST_analyze.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inSelfType, constin_inRoutineCanMutateProperties, constin_inDirectAccessToPropertiesAllowed, constin_inCallerNameForInvocationGraph, constin_inContext, constin_inModeSet, constin_inAllowPanic, io_ioTemporaries, io_ioGlobalLiteralStringMap, io_ioVariableMap, io_ioAllocaList, io_ioInstructionGenerationList, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Extension method '@instructionListAST analyzeBranchInstructionList'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_analyzeBranchInstructionList (const GALGAS_instructionListAST inObject,
                                                   const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                                   const GALGAS_bool constinArgument_inRoutineCanMutateProperties,
                                                   const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                                   const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                   GALGAS_location inArgument_inEndOfInstructionList,
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
  {
  ioArgument_ioVariableMap.setter_openBranch (inCompiler COMMA_SOURCE_FILE ("instructionList.galgas", 89)) ;
  }
  const GALGAS_instructionListAST temp_0 = inObject ;
  cEnumerator_instructionListAST enumerator_4281 (temp_0, kEnumeration_up) ;
  while (enumerator_4281.hasCurrentObject ()) {
    {
    extensionSetter_appendSourceLineComment (ioArgument_ioInstructionGenerationList, enumerator_4281.current_mInstructionLocation (HERE), inCompiler COMMA_SOURCE_FILE ("instructionList.galgas", 91)) ;
    }
    callExtensionMethod_analyze ((const cPtr_instructionAST *) enumerator_4281.current_mInstruction (HERE).ptr (), constinArgument_inSelfType, constinArgument_inRoutineCanMutateProperties, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowPanic, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, inCompiler COMMA_SOURCE_FILE ("instructionList.galgas", 92)) ;
    enumerator_4281.gotoNextObject () ;
  }
  {
  ioArgument_ioVariableMap.setter_closeBranch (inArgument_inEndOfInstructionList, inCompiler COMMA_SOURCE_FILE ("instructionList.galgas", 109)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Extension method '@instructionListAST analyzeRoutineInstructionList'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_analyzeRoutineInstructionList (const GALGAS_instructionListAST inObject,
                                                    const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                                    const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                                    const GALGAS_bool constinArgument_inRoutineCanMutateProperties,
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
  const GALGAS_instructionListAST temp_0 = inObject ;
  cEnumerator_instructionListAST enumerator_5856 (temp_0, kEnumeration_up) ;
  while (enumerator_5856.hasCurrentObject ()) {
    {
    extensionSetter_appendSourceLineComment (ioArgument_ioInstructionGenerationList, enumerator_5856.current_mInstructionLocation (HERE), inCompiler COMMA_SOURCE_FILE ("instructionList.galgas", 129)) ;
    }
    callExtensionMethod_analyze ((const cPtr_instructionAST *) enumerator_5856.current_mInstruction (HERE).ptr (), constinArgument_inSelfType, constinArgument_inRoutineCanMutateProperties, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowPanic, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, inCompiler COMMA_SOURCE_FILE ("instructionList.galgas", 130)) ;
    enumerator_5856.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Extension method '@instructionListIR instructionListLLVMCode'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_instructionListLLVMCode (const GALGAS_instructionListIR inObject,
                                              GALGAS_string & ioArgument_ioLLVMcode,
                                              const GALGAS_generationContext constinArgument_inGenerationContext,
                                              GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_instructionListIR temp_0 = inObject ;
  cEnumerator_instructionListIR enumerator_7019 (temp_0, kEnumeration_up) ;
  while (enumerator_7019.hasCurrentObject ()) {
    callExtensionMethod_llvmInstructionCode ((const cPtr_abstractInstructionIR *) enumerator_7019.current_mInstructionGeneration (HERE).ptr (), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instructionList.galgas", 157)) ;
    enumerator_7019.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Abstract extension method '@abstractDeclaration enterInPrecedenceGraph'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_abstractDeclaration_enterInPrecedenceGraph> gExtensionMethodTable_abstractDeclaration_enterInPrecedenceGraph ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_enterInPrecedenceGraph (const int32_t inClassIndex,
                                                  extensionMethodSignature_abstractDeclaration_enterInPrecedenceGraph inMethod) {
  gExtensionMethodTable_abstractDeclaration_enterInPrecedenceGraph.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_abstractDeclaration_enterInPrecedenceGraph (void) {
  gExtensionMethodTable_abstractDeclaration_enterInPrecedenceGraph.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractDeclaration_enterInPrecedenceGraph (NULL,
                                                                       freeExtensionMethod_abstractDeclaration_enterInPrecedenceGraph) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_enterInPrecedenceGraph (const cPtr_abstractDeclaration * inObject,
                                                 GALGAS_semanticTypePrecedenceGraph & io_ioGraph,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractDeclaration) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_abstractDeclaration_enterInPrecedenceGraph f = NULL ;
    if (classIndex < gExtensionMethodTable_abstractDeclaration_enterInPrecedenceGraph.count ()) {
      f = gExtensionMethodTable_abstractDeclaration_enterInPrecedenceGraph (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_abstractDeclaration_enterInPrecedenceGraph.count ()) {
           f = gExtensionMethodTable_abstractDeclaration_enterInPrecedenceGraph (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_abstractDeclaration_enterInPrecedenceGraph.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioGraph, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Abstract extension getter '@abstractDeclaration keyRepresentationForErrorSignaling'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_abstractDeclaration_keyRepresentationForErrorSignaling> gExtensionGetterTable_abstractDeclaration_keyRepresentationForErrorSignaling ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_keyRepresentationForErrorSignaling (const int32_t inClassIndex,
                                                              enterExtensionGetter_abstractDeclaration_keyRepresentationForErrorSignaling inGetter) {
  gExtensionGetterTable_abstractDeclaration_keyRepresentationForErrorSignaling.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_abstractDeclaration_keyRepresentationForErrorSignaling (void) {
  gExtensionGetterTable_abstractDeclaration_keyRepresentationForErrorSignaling.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_abstractDeclaration_keyRepresentationForErrorSignaling (NULL,
                                                                                   freeExtensionGetter_abstractDeclaration_keyRepresentationForErrorSignaling) ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string callExtensionGetter_keyRepresentationForErrorSignaling (const cPtr_abstractDeclaration * inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractDeclaration) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_abstractDeclaration_keyRepresentationForErrorSignaling f = NULL ;
    if (classIndex < gExtensionGetterTable_abstractDeclaration_keyRepresentationForErrorSignaling.count ()) {
      f = gExtensionGetterTable_abstractDeclaration_keyRepresentationForErrorSignaling (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_abstractDeclaration_keyRepresentationForErrorSignaling.count ()) {
           f = gExtensionGetterTable_abstractDeclaration_keyRepresentationForErrorSignaling (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_abstractDeclaration_keyRepresentationForErrorSignaling.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Extension method '@sectionDeclarationListAST noteTypesInPrecedenceGraph'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_noteTypesInPrecedenceGraph (const GALGAS_sectionDeclarationListAST inObject,
                                                 GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_sectionDeclarationListAST temp_0 = inObject ;
  cEnumerator_sectionDeclarationListAST enumerator_2374 (temp_0, kEnumeration_up) ;
  while (enumerator_2374.hasCurrentObject ()) {
    cEnumerator_procFormalArgumentList enumerator_2446 (enumerator_2374.current_mSectionFormalArgumentList (HERE), kEnumeration_up) ;
    while (enumerator_2446.hasCurrentObject ()) {
      GALGAS_lstring var_typeName_2468 = GALGAS_lstring::constructor_new (GALGAS_string ("$").add_operation (enumerator_2446.current_mFormalArgumentTypeName (HERE).getter_string (SOURCE_FILE ("context-routines.galgas", 53)), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 53)), enumerator_2446.current_mFormalArgumentTypeName (HERE).mAttribute_location  COMMA_SOURCE_FILE ("context-routines.galgas", 53)) ;
      {
      ioArgument_ioGraph.setter_noteNode (var_typeName_2468 COMMA_SOURCE_FILE ("context-routines.galgas", 54)) ;
      }
      enumerator_2446.gotoNextObject () ;
    }
    extensionMethod_noteInstructionListTypesInPrecedenceGraph (enumerator_2374.current_mSectionInstructionList (HERE), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 56)) ;
    enumerator_2374.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Extension method '@staticStringMap findOrAddStaticString'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionSetter_findOrAddStaticString (GALGAS_staticStringMap & ioObject,
                                            GALGAS_string inArgument_inString,
                                            GALGAS_uint & outArgument_outIndex,
                                            C_Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outIndex.drop () ; // Release 'out' argument
  const GALGAS_staticStringMap temp_0 = ioObject ;
  const enumGalgasBool test_1 = temp_0.getter_hasKey (inArgument_inString COMMA_SOURCE_FILE ("context.galgas", 47)).boolEnum () ;
  if (kBoolTrue == test_1) {
    const GALGAS_staticStringMap temp_2 = ioObject ;
    temp_2.method_searchKey (inArgument_inString.getter_nowhere (SOURCE_FILE ("context.galgas", 48)), outArgument_outIndex, inCompiler COMMA_SOURCE_FILE ("context.galgas", 48)) ;
  }else if (kBoolFalse == test_1) {
    const GALGAS_staticStringMap temp_3 = ioObject ;
    outArgument_outIndex = temp_3.getter_count (SOURCE_FILE ("context.galgas", 50)) ;
    {
    ioObject.setter_insertKey (inArgument_inString.getter_nowhere (SOURCE_FILE ("context.galgas", 51)), outArgument_outIndex, inCompiler COMMA_SOURCE_FILE ("context.galgas", 51)) ;
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Abstract extension method '@abstractDeclaration enterInContext'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_abstractDeclaration_enterInContext> gExtensionMethodTable_abstractDeclaration_enterInContext ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_enterInContext (const int32_t inClassIndex,
                                          extensionMethodSignature_abstractDeclaration_enterInContext inMethod) {
  gExtensionMethodTable_abstractDeclaration_enterInContext.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_abstractDeclaration_enterInContext (void) {
  gExtensionMethodTable_abstractDeclaration_enterInContext.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractDeclaration_enterInContext (NULL,
                                                               freeExtensionMethod_abstractDeclaration_enterInContext) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_enterInContext (const cPtr_abstractDeclaration * inObject,
                                         const GALGAS_functionDeclarationListAST constin_inProcedureListAST,
                                         GALGAS_semanticContext & io_ioContext,
                                         GALGAS_staticStringMap & io_ioGlobalLiteralStringMap,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractDeclaration) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_abstractDeclaration_enterInContext f = NULL ;
    if (classIndex < gExtensionMethodTable_abstractDeclaration_enterInContext.count ()) {
      f = gExtensionMethodTable_abstractDeclaration_enterInContext (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_abstractDeclaration_enterInContext.count ()) {
           f = gExtensionMethodTable_abstractDeclaration_enterInContext (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_abstractDeclaration_enterInContext.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inProcedureListAST, io_ioContext, io_ioGlobalLiteralStringMap, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Abstract extension method '@abstractDeclaration enterRoutinesInContext'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_abstractDeclaration_enterRoutinesInContext> gExtensionMethodTable_abstractDeclaration_enterRoutinesInContext ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_enterRoutinesInContext (const int32_t inClassIndex,
                                                  extensionMethodSignature_abstractDeclaration_enterRoutinesInContext inMethod) {
  gExtensionMethodTable_abstractDeclaration_enterRoutinesInContext.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_abstractDeclaration_enterRoutinesInContext (void) {
  gExtensionMethodTable_abstractDeclaration_enterRoutinesInContext.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractDeclaration_enterRoutinesInContext (NULL,
                                                                       freeExtensionMethod_abstractDeclaration_enterRoutinesInContext) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_enterRoutinesInContext (const cPtr_abstractDeclaration * inObject,
                                                 const GALGAS_functionDeclarationListAST constin_inProcedureListAST,
                                                 GALGAS_semanticContext & io_ioContext,
                                                 GALGAS_staticStringMap & io_ioGlobalLiteralStringMap,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractDeclaration) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_abstractDeclaration_enterRoutinesInContext f = NULL ;
    if (classIndex < gExtensionMethodTable_abstractDeclaration_enterRoutinesInContext.count ()) {
      f = gExtensionMethodTable_abstractDeclaration_enterRoutinesInContext (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_abstractDeclaration_enterRoutinesInContext.count ()) {
           f = gExtensionMethodTable_abstractDeclaration_enterRoutinesInContext (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_abstractDeclaration_enterRoutinesInContext.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inProcedureListAST, io_ioContext, io_ioGlobalLiteralStringMap, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Abstract extension method '@abstractDeclaration semanticAnalysis'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_abstractDeclaration_semanticAnalysis> gExtensionMethodTable_abstractDeclaration_semanticAnalysis ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_semanticAnalysis (const int32_t inClassIndex,
                                            extensionMethodSignature_abstractDeclaration_semanticAnalysis inMethod) {
  gExtensionMethodTable_abstractDeclaration_semanticAnalysis.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_abstractDeclaration_semanticAnalysis (void) {
  gExtensionMethodTable_abstractDeclaration_semanticAnalysis.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractDeclaration_semanticAnalysis (NULL,
                                                                 freeExtensionMethod_abstractDeclaration_semanticAnalysis) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_semanticAnalysis (const cPtr_abstractDeclaration * inObject,
                                           const GALGAS_semanticContext constin_inContext,
                                           GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                           GALGAS_intermediateCodeStruct & io_ioIntermediateCodeStruct,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractDeclaration) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_abstractDeclaration_semanticAnalysis f = NULL ;
    if (classIndex < gExtensionMethodTable_abstractDeclaration_semanticAnalysis.count ()) {
      f = gExtensionMethodTable_abstractDeclaration_semanticAnalysis (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_abstractDeclaration_semanticAnalysis.count ()) {
           f = gExtensionMethodTable_abstractDeclaration_semanticAnalysis (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_abstractDeclaration_semanticAnalysis.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inContext, io_ioTemporaries, io_ioIntermediateCodeStruct, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Extension method '@routineMapIR llvmCodeGeneration'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_llvmCodeGeneration (const GALGAS_routineMapIR inObject,
                                         GALGAS_string & ioArgument_ioLLVMcode,
                                         GALGAS_string & ioArgument_ioAssemblerCode,
                                         const GALGAS_generationContext constinArgument_inGenerationContext,
                                         GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                         C_Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_routineMapIR temp_0 = inObject ;
  cEnumerator_routineMapIR enumerator_8918 (temp_0, kEnumeration_up) ;
  while (enumerator_8918.hasCurrentObject ()) {
    extensionMethod_llvmCodeGeneration (enumerator_8918.current (HERE), ioArgument_ioLLVMcode, ioArgument_ioAssemblerCode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 235)) ;
    enumerator_8918.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Extension method '@instructionListIR appendExtend'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionSetter_appendExtend (GALGAS_instructionListIR & ioObject,
                                   const GALGAS_objectIR constinArgument_inResult,
                                   const GALGAS_objectIR constinArgument_inSource,
                                   C_Compiler * /* inCompiler */
                                   COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.addAssign_operation (GALGAS_extendIR::constructor_new (constinArgument_inResult, constinArgument_inSource  COMMA_SOURCE_FILE ("intermediate-extend.galgas", 6))  COMMA_SOURCE_FILE ("intermediate-extend.galgas", 6)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Extension method '@instructionListIR appendTrunc'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionSetter_appendTrunc (GALGAS_instructionListIR & ioObject,
                                  const GALGAS_objectIR constinArgument_inResult,
                                  const GALGAS_objectIR constinArgument_inSource,
                                  C_Compiler * /* inCompiler */
                                  COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.addAssign_operation (GALGAS_truncIR::constructor_new (constinArgument_inResult, constinArgument_inSource  COMMA_SOURCE_FILE ("intermediate-trunc.galgas", 6))  COMMA_SOURCE_FILE ("intermediate-trunc.galgas", 6)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Extension method '@instructionListIR appendShiftLeft'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionSetter_appendShiftLeft (GALGAS_instructionListIR & ioObject,
                                      const GALGAS_objectIR constinArgument_inResult,
                                      const GALGAS_objectIR constinArgument_inSource,
                                      const GALGAS_uint constinArgument_inShiftAmount,
                                      C_Compiler * /* inCompiler */
                                      COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.addAssign_operation (GALGAS_leftShiftIR::constructor_new (constinArgument_inResult, constinArgument_inSource, constinArgument_inShiftAmount  COMMA_SOURCE_FILE ("intermediate-shift-left.galgas", 7))  COMMA_SOURCE_FILE ("intermediate-shift-left.galgas", 7)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Extension method '@instructionListIR appendBinaryOperation'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionSetter_appendBinaryOperation (GALGAS_instructionListIR & ioObject,
                                            const GALGAS_objectIR constinArgument_inTarget,
                                            const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inOperandType,
                                            const GALGAS_location constinArgument_inLocation,
                                            const GALGAS_objectIR constinArgument_inLeft,
                                            const GALGAS_llvmBinaryOperation constinArgument_inOperation,
                                            const GALGAS_objectIR constinArgument_inRight,
                                            C_Compiler * /* inCompiler */
                                            COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.addAssign_operation (GALGAS_binaryOperationIR::constructor_new (constinArgument_inTarget, constinArgument_inOperandType, constinArgument_inLeft, constinArgument_inOperation, constinArgument_inRight, constinArgument_inLocation  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 51))  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 51)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Extension method '@instructionListIR appendShortCircuitAndOperation'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionSetter_appendShortCircuitAndOperation (GALGAS_instructionListIR & ioObject,
                                                     const GALGAS_objectIR constinArgument_inTargetOperand,
                                                     const GALGAS_objectIR constinArgument_inLeftOperand,
                                                     const GALGAS_instructionListIR constinArgument_inLeftInstructionList,
                                                     const GALGAS_objectIR constinArgument_inRightOperand,
                                                     const GALGAS_instructionListIR constinArgument_inRightInstructionList,
                                                     const GALGAS_location constinArgument_inLocation,
                                                     C_Compiler * /* inCompiler */
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.addAssign_operation (GALGAS_shortCircuitAndOperationIR::constructor_new (constinArgument_inTargetOperand, constinArgument_inLeftOperand, constinArgument_inLeftInstructionList, constinArgument_inRightOperand, constinArgument_inRightInstructionList, constinArgument_inLocation  COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 11))  COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 11)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Extension method '@instructionListIR appendComputeVolatileRegisterAddressWithSubscript'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionSetter_appendComputeVolatileRegisterAddressWithSubscript (GALGAS_instructionListIR & ioObject,
                                                                        const GALGAS_objectIR constinArgument_inTarget,
                                                                        const GALGAS_objectIR constinArgument_inIndexResult,
                                                                        const GALGAS_bigint constinArgument_inAddress,
                                                                        const GALGAS_bigint constinArgument_inElementArraySize,
                                                                        C_Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.addAssign_operation (GALGAS_ComputeRegisterAddressWithSubscriptIR::constructor_new (constinArgument_inTarget, constinArgument_inIndexResult, constinArgument_inAddress, constinArgument_inElementArraySize  COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 8))  COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 8)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Extension method '@instructionListIR appendLoadVolatileRegisterWithSubscript'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionSetter_appendLoadVolatileRegisterWithSubscript (GALGAS_instructionListIR & ioObject,
                                                              const GALGAS_objectIR constinArgument_inTargetValue,
                                                              const GALGAS_objectIR constinArgument_inIndexResult,
                                                              const GALGAS_bigint constinArgument_inAddress,
                                                              const GALGAS_bigint constinArgument_inElementArraySize,
                                                              C_Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.addAssign_operation (GALGAS_loadRegisterWithSubscriptIR::constructor_new (constinArgument_inTargetValue, constinArgument_inIndexResult, constinArgument_inAddress, constinArgument_inElementArraySize  COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 64))  COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 64)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Extension method '@instructionListIR appendLoadVolatileRegister'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionSetter_appendLoadVolatileRegister (GALGAS_instructionListIR & ioObject,
                                                 const GALGAS_objectIR constinArgument_inTargetValue,
                                                 const GALGAS_bigint constinArgument_inAddress,
                                                 C_Compiler * /* inCompiler */
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.addAssign_operation (GALGAS_loadRegisterIR::constructor_new (constinArgument_inTargetValue, constinArgument_inAddress  COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 6))  COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 6)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Extension method '@instructionListIR appendLoadGlobalVariable'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionSetter_appendLoadGlobalVariable (GALGAS_instructionListIR & ioObject,
                                               const GALGAS_objectIR constinArgument_inTargetValue,
                                               const GALGAS_string constinArgument_inRegisterName,
                                               GALGAS_bool inArgument_inIsVolatile,
                                               C_Compiler * /* inCompiler */
                                               COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.addAssign_operation (GALGAS_loadGlobalVariableIR::constructor_new (constinArgument_inTargetValue, constinArgument_inRegisterName, inArgument_inIsVolatile  COMMA_SOURCE_FILE ("intermediate-load-global-variable.galgas", 7))  COMMA_SOURCE_FILE ("intermediate-load-global-variable.galgas", 7)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Extension method '@instructionListIR appendLoadLocalVariable'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionSetter_appendLoadLocalVariable (GALGAS_instructionListIR & ioObject,
                                              const GALGAS_objectIR constinArgument_inTargetValue,
                                              const GALGAS_string constinArgument_inVariableName,
                                              const GALGAS_bool constinArgument_inVolatile,
                                              C_Compiler * /* inCompiler */
                                              COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.addAssign_operation (GALGAS_loadLocalVariableIR::constructor_new (constinArgument_inTargetValue, constinArgument_inVariableName, constinArgument_inVolatile  COMMA_SOURCE_FILE ("intermediate-load-local-variable.galgas", 7))  COMMA_SOURCE_FILE ("intermediate-load-local-variable.galgas", 7)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Extension method '@instructionListIR appendLoadFromTemporaryReference'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionSetter_appendLoadFromTemporaryReference (GALGAS_instructionListIR & ioObject,
                                                       const GALGAS_objectIR constinArgument_inTargetValue,
                                                       const GALGAS_string constinArgument_inLLVMName,
                                                       const GALGAS_bool constinArgument_inVolatile,
                                                       C_Compiler * /* inCompiler */
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.addAssign_operation (GALGAS_loadFromTemporaryReferenceIR::constructor_new (constinArgument_inTargetValue, constinArgument_inLLVMName, constinArgument_inVolatile  COMMA_SOURCE_FILE ("intermediate-load-local-variable.galgas", 48))  COMMA_SOURCE_FILE ("intermediate-load-local-variable.galgas", 48)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Extension method '@instructionListIR appendLoadTaskVariable'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionSetter_appendLoadTaskVariable (GALGAS_instructionListIR & ioObject,
                                             const GALGAS_objectIR constinArgument_inTargetValue,
                                             const GALGAS_string constinArgument_inTaskName,
                                             const GALGAS_string constinArgument_inVariableName,
                                             C_Compiler * /* inCompiler */
                                             COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.addAssign_operation (GALGAS_loadTaskVariableIR::constructor_new (constinArgument_inTargetValue, constinArgument_inTaskName, constinArgument_inVariableName  COMMA_SOURCE_FILE ("intermediate-load-task-variable.galgas", 7))  COMMA_SOURCE_FILE ("intermediate-load-task-variable.galgas", 7)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Extension method '@instructionListIR appendStoreVolatileRegister'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionSetter_appendStoreVolatileRegister (GALGAS_instructionListIR & ioObject,
                                                  const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inTargetVarType,
                                                  const GALGAS_bigint constinArgument_inAddress,
                                                  const GALGAS_objectIR constinArgument_inSourceValue,
                                                  C_Compiler * /* inCompiler */
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.addAssign_operation (GALGAS_storeVolatileIR::constructor_new (constinArgument_inTargetVarType, constinArgument_inAddress, constinArgument_inSourceValue  COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 7))  COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 7)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Extension method '@instructionListIR appendStoreVolatileRegisterIndirect'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionSetter_appendStoreVolatileRegisterIndirect (GALGAS_instructionListIR & ioObject,
                                                          const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inTargetVarType,
                                                          const GALGAS_string constinArgument_inLLVMName,
                                                          const GALGAS_objectIR constinArgument_inSourceValue,
                                                          C_Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.addAssign_operation (GALGAS_storeVolatileIndirectIR::constructor_new (constinArgument_inTargetVarType, constinArgument_inLLVMName, constinArgument_inSourceValue  COMMA_SOURCE_FILE ("intermediate-store-volatile-register-indirect.galgas", 7))  COMMA_SOURCE_FILE ("intermediate-store-volatile-register-indirect.galgas", 7)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Extension method '@instructionListIR appendStoreGlobalVariable'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionSetter_appendStoreGlobalVariable (GALGAS_instructionListIR & ioObject,
                                                const GALGAS_string constinArgument_inGlobalVarName,
                                                const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inTargetVarType,
                                                const GALGAS_objectIR constinArgument_inSourceValue,
                                                const GALGAS_bool constinArgument_inIsVolatile,
                                                C_Compiler * /* inCompiler */
                                                COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.addAssign_operation (GALGAS_storeGlobalVariableIR::constructor_new (constinArgument_inGlobalVarName, constinArgument_inTargetVarType, constinArgument_inSourceValue, constinArgument_inIsVolatile  COMMA_SOURCE_FILE ("intermediate-store-global-variable.galgas", 8))  COMMA_SOURCE_FILE ("intermediate-store-global-variable.galgas", 8)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Extension method '@instructionListIR appendStoreTaskVariable'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionSetter_appendStoreTaskVariable (GALGAS_instructionListIR & ioObject,
                                              const GALGAS_string constinArgument_inTaskName,
                                              const GALGAS_string constinArgument_inVarName,
                                              const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inTargetVarType,
                                              const GALGAS_objectIR constinArgument_inSourceValue,
                                              C_Compiler * /* inCompiler */
                                              COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.addAssign_operation (GALGAS_storeTaskVariableIR::constructor_new (constinArgument_inTaskName, constinArgument_inVarName, constinArgument_inTargetVarType, constinArgument_inSourceValue  COMMA_SOURCE_FILE ("intermediate-store-task-variable.galgas", 8))  COMMA_SOURCE_FILE ("intermediate-store-task-variable.galgas", 8)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Extension method '@instructionListIR appendStoreLocalVariable'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionSetter_appendStoreLocalVariable (GALGAS_instructionListIR & ioObject,
                                               const GALGAS_string constinArgument_inLocalVarName,
                                               const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inTargetVarType,
                                               const GALGAS_objectIR constinArgument_inSourceValue,
                                               C_Compiler * /* inCompiler */
                                               COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.addAssign_operation (GALGAS_storeLocalVariableIR::constructor_new (constinArgument_inLocalVarName, constinArgument_inTargetVarType, constinArgument_inSourceValue  COMMA_SOURCE_FILE ("intermediate-store-local-variable.galgas", 7))  COMMA_SOURCE_FILE ("intermediate-store-local-variable.galgas", 7)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Extension method '@instructionListIR appendStoreTemporaryReference'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionSetter_appendStoreTemporaryReference (GALGAS_instructionListIR & ioObject,
                                                    const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inTargetVarType,
                                                    const GALGAS_string constinArgument_inLLVMName,
                                                    const GALGAS_objectIR constinArgument_inSourceValue,
                                                    const GALGAS_bool constinArgument_inVolatile,
                                                    C_Compiler * /* inCompiler */
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.addAssign_operation (GALGAS_storeFromTemporaryReferenceIR::constructor_new (constinArgument_inTargetVarType, constinArgument_inLLVMName, constinArgument_inSourceValue, constinArgument_inVolatile  COMMA_SOURCE_FILE ("intermediate-store-local-variable.galgas", 47))  COMMA_SOURCE_FILE ("intermediate-store-local-variable.galgas", 47)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Extension method '@instructionListIR appendStoreFromReference'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionSetter_appendStoreFromReference (GALGAS_instructionListIR & ioObject,
                                               const GALGAS_objectIR constinArgument_inTargetReference,
                                               const GALGAS_location constinArgument_inErrorLocation,
                                               const GALGAS_objectIR constinArgument_inValue,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  switch (constinArgument_inTargetReference.enumValue ()) {
  case GALGAS_objectIR::kNotBuilt:
    break ;
  case GALGAS_objectIR::kEnum_selfObject:
    {
      inCompiler->emitSemanticError (extensionGetter_location (constinArgument_inTargetReference, inCompiler COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 11)), GALGAS_string ("<<@instructionListIR appendStoreFromReference selfObject>>")  COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 11)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_globalVariableReference:
    {
      const cEnumAssociatedValues_objectIR_globalVariableReference * extractPtr_747 = (const cEnumAssociatedValues_objectIR_globalVariableReference *) (constinArgument_inTargetReference.unsafePointer ()) ;
      const GALGAS_unifiedTypeMap_2D_proxy extractedValue_type = extractPtr_747->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_plmName = extractPtr_747->mAssociatedValue1 ;
      {
      extensionSetter_appendStoreGlobalVariable (ioObject, extractedValue_plmName.getter_string (SOURCE_FILE ("intermediate-load-store.galgas", 16)), extractedValue_type, constinArgument_inValue, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 16)) ;
      }
    }
    break ;
  case GALGAS_objectIR::kEnum_localVariableReference:
    {
      const cEnumAssociatedValues_objectIR_localVariableReference * extractPtr_878 = (const cEnumAssociatedValues_objectIR_localVariableReference *) (constinArgument_inTargetReference.unsafePointer ()) ;
      const GALGAS_unifiedTypeMap_2D_proxy extractedValue_type = extractPtr_878->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_plmName = extractPtr_878->mAssociatedValue1 ;
      {
      extensionSetter_appendStoreLocalVariable (ioObject, extractedValue_plmName.getter_string (SOURCE_FILE ("intermediate-load-store.galgas", 18)), extractedValue_type, constinArgument_inValue, inCompiler COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 18)) ;
      }
    }
    break ;
  case GALGAS_objectIR::kEnum_temporaryReference:
    {
      const cEnumAssociatedValues_objectIR_temporaryReference * extractPtr_1048 = (const cEnumAssociatedValues_objectIR_temporaryReference *) (constinArgument_inTargetReference.unsafePointer ()) ;
      const GALGAS_unifiedTypeMap_2D_proxy extractedValue_type = extractPtr_1048->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_llvmName = extractPtr_1048->mAssociatedValue1 ;
      const GALGAS_bool extractedValue_volatile = extractPtr_1048->mAssociatedValue3 ;
      {
      extensionSetter_appendStoreTemporaryReference (ioObject, extractedValue_type, extractedValue_llvmName.getter_string (SOURCE_FILE ("intermediate-load-store.galgas", 20)), constinArgument_inValue, extractedValue_volatile, inCompiler COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 20)) ;
      }
    }
    break ;
  case GALGAS_objectIR::kEnum_registerReference:
    {
      const cEnumAssociatedValues_objectIR_registerReference * extractPtr_1278 = (const cEnumAssociatedValues_objectIR_registerReference *) (constinArgument_inTargetReference.unsafePointer ()) ;
      const GALGAS_unifiedTypeMap_2D_proxy extractedValue_type = extractPtr_1278->mAssociatedValue0 ;
      const GALGAS_bigint extractedValue_address = extractPtr_1278->mAssociatedValue4 ;
      const GALGAS_uint extractedValue_arraySize = extractPtr_1278->mAssociatedValue6 ;
      const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, extractedValue_arraySize.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_0) {
        inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("register array requires subscripting")  COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 23)) ;
      }
      {
      extensionSetter_appendStoreVolatileRegister (ioObject, extractedValue_type, extractedValue_address, constinArgument_inValue, inCompiler COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 25)) ;
      }
    }
    break ;
  case GALGAS_objectIR::kEnum_property:
    {
      inCompiler->emitSemanticError (extensionGetter_location (constinArgument_inTargetReference, inCompiler COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 28)), GALGAS_string ("<<@instructionListIR llvmGlobalObjectValue property>>")  COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 28)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmTemporaryValue:
    {
      const cEnumAssociatedValues_objectIR_llvmTemporaryValue * extractPtr_1567 = (const cEnumAssociatedValues_objectIR_llvmTemporaryValue *) (constinArgument_inTargetReference.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_llvmName = extractPtr_1567->mAssociatedValue1 ;
      inCompiler->emitSemanticError (extractedValue_llvmName.getter_location (SOURCE_FILE ("intermediate-load-store.galgas", 31)), GALGAS_string ("<<@instructionListIR llvmGlobalObjectValue llvmTemporaryValue>>")  COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 31)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_literalInteger:
    {
      inCompiler->emitSemanticError (extensionGetter_location (constinArgument_inTargetReference, inCompiler COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 33)), GALGAS_string ("<<@instructionListIR llvmGlobalObjectValue literalInteger>>")  COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 33)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmStructureConstant:
    {
      inCompiler->emitSemanticError (extensionGetter_location (constinArgument_inTargetReference, inCompiler COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 35)), GALGAS_string ("<<@instructionListIR llvmGlobalObjectValue llvmStructureConstant>>")  COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 35)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_literalString:
    {
      inCompiler->emitSemanticError (extensionGetter_location (constinArgument_inTargetReference, inCompiler COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 37)), GALGAS_string ("<<@instructionListIR llvmGlobalObjectValue literalString>>")  COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 37)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_zero:
    {
      inCompiler->emitSemanticError (extensionGetter_location (constinArgument_inTargetReference, inCompiler COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 39)), GALGAS_string ("<<@instructionListIR llvmGlobalObjectValue zero>>")  COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 39)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_possibleFunction:
    {
      inCompiler->emitSemanticError (extensionGetter_location (constinArgument_inTargetReference, inCompiler COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 41)), GALGAS_string ("<<@instructionListIR llvmGlobalObjectValue possibleFunction>>")  COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 41)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_null:
    {
      inCompiler->emitSemanticError (extensionGetter_location (constinArgument_inTargetReference, inCompiler COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 43)), GALGAS_string ("<<@instructionListIR llvmGlobalObjectValue null>>")  COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 43)) ;
    }
    break ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Extension method '@instructionListIR appendLoadFromReference'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionSetter_appendLoadFromReference (GALGAS_instructionListIR & ioObject,
                                              GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                              const GALGAS_objectIR constinArgument_inSource,
                                              const GALGAS_location constinArgument_inErrorLocation,
                                              GALGAS_objectIR & outArgument_outResultingValue,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outResultingValue.drop () ; // Release 'out' argument
  switch (constinArgument_inSource.enumValue ()) {
  case GALGAS_objectIR::kNotBuilt:
    break ;
  case GALGAS_objectIR::kEnum_null:
    {
      inCompiler->emitSemanticError (GALGAS_location::constructor_nowhere (SOURCE_FILE ("intermediate-load-store.galgas", 57)), GALGAS_string ("<<@instructionListIR appendLoadFromReference null>>")  COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 57)) ;
      outArgument_outResultingValue.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_objectIR::kEnum_possibleFunction:
    {
      const cEnumAssociatedValues_objectIR_possibleFunction * extractPtr_2936 = (const cEnumAssociatedValues_objectIR_possibleFunction *) (constinArgument_inSource.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_functionName = extractPtr_2936->mAssociatedValue1 ;
      inCompiler->emitSemanticError (extractedValue_functionName.getter_location (SOURCE_FILE ("intermediate-load-store.galgas", 59)), GALGAS_string ("<<@instructionListIR appendLoadFromReference possibleFunction>>")  COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 59)) ;
      outArgument_outResultingValue.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_objectIR::kEnum_selfObject:
    {
      outArgument_outResultingValue = constinArgument_inSource ;
    }
    break ;
  case GALGAS_objectIR::kEnum_globalVariableReference:
    {
      const cEnumAssociatedValues_objectIR_globalVariableReference * extractPtr_3259 = (const cEnumAssociatedValues_objectIR_globalVariableReference *) (constinArgument_inSource.unsafePointer ()) ;
      const GALGAS_unifiedTypeMap_2D_proxy extractedValue_type = extractPtr_3259->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_name = extractPtr_3259->mAssociatedValue1 ;
      {
      routine_getNewTempVariable (extractedValue_type, extractedValue_name.getter_location (SOURCE_FILE ("intermediate-load-store.galgas", 64)), ioArgument_ioTemporaries, outArgument_outResultingValue, inCompiler  COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 64)) ;
      }
      {
      extensionSetter_appendLoadGlobalVariable (ioObject, outArgument_outResultingValue, extractedValue_name.getter_string (SOURCE_FILE ("intermediate-load-store.galgas", 67)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 65)) ;
      }
    }
    break ;
  case GALGAS_objectIR::kEnum_localVariableReference:
    {
      const cEnumAssociatedValues_objectIR_localVariableReference * extractPtr_3489 = (const cEnumAssociatedValues_objectIR_localVariableReference *) (constinArgument_inSource.unsafePointer ()) ;
      const GALGAS_unifiedTypeMap_2D_proxy extractedValue_type = extractPtr_3489->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_name = extractPtr_3489->mAssociatedValue1 ;
      {
      routine_getNewTempVariable (extractedValue_type, extractedValue_name.getter_location (SOURCE_FILE ("intermediate-load-store.galgas", 71)), ioArgument_ioTemporaries, outArgument_outResultingValue, inCompiler  COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 71)) ;
      }
      {
      extensionSetter_appendLoadLocalVariable (ioObject, outArgument_outResultingValue, extractedValue_name.getter_string (SOURCE_FILE ("intermediate-load-store.galgas", 74)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 72)) ;
      }
    }
    break ;
  case GALGAS_objectIR::kEnum_temporaryReference:
    {
      const cEnumAssociatedValues_objectIR_temporaryReference * extractPtr_3750 = (const cEnumAssociatedValues_objectIR_temporaryReference *) (constinArgument_inSource.unsafePointer ()) ;
      const GALGAS_unifiedTypeMap_2D_proxy extractedValue_type = extractPtr_3750->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_llvmName = extractPtr_3750->mAssociatedValue1 ;
      const GALGAS_bool extractedValue_volatile = extractPtr_3750->mAssociatedValue3 ;
      {
      routine_getNewTempVariable (extractedValue_type, extractedValue_llvmName.getter_location (SOURCE_FILE ("intermediate-load-store.galgas", 78)), ioArgument_ioTemporaries, outArgument_outResultingValue, inCompiler  COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 78)) ;
      }
      {
      extensionSetter_appendLoadFromTemporaryReference (ioObject, outArgument_outResultingValue, extractedValue_llvmName.getter_string (SOURCE_FILE ("intermediate-load-store.galgas", 81)), extractedValue_volatile, inCompiler COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 79)) ;
      }
    }
    break ;
  case GALGAS_objectIR::kEnum_registerReference:
    {
      const cEnumAssociatedValues_objectIR_registerReference * extractPtr_4130 = (const cEnumAssociatedValues_objectIR_registerReference *) (constinArgument_inSource.unsafePointer ()) ;
      const GALGAS_unifiedTypeMap_2D_proxy extractedValue_type = extractPtr_4130->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_registerName = extractPtr_4130->mAssociatedValue1 ;
      const GALGAS_bigint extractedValue_address = extractPtr_4130->mAssociatedValue4 ;
      const GALGAS_uint extractedValue_arraySize = extractPtr_4130->mAssociatedValue6 ;
      const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, extractedValue_arraySize.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_0) {
        inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("register array requires subscripting")  COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 86)) ;
        outArgument_outResultingValue.drop () ; // Release error dropped variable
      }else if (kBoolFalse == test_0) {
        {
        routine_getNewTempVariable (extractedValue_type, extractedValue_registerName.getter_location (SOURCE_FILE ("intermediate-load-store.galgas", 88)), ioArgument_ioTemporaries, outArgument_outResultingValue, inCompiler  COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 88)) ;
        }
        {
        extensionSetter_appendLoadVolatileRegister (ioObject, outArgument_outResultingValue, extractedValue_address, inCompiler COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 89)) ;
        }
      }
    }
    break ;
  case GALGAS_objectIR::kEnum_property:
    {
      const cEnumAssociatedValues_objectIR_property * extractPtr_4382 = (const cEnumAssociatedValues_objectIR_property *) (constinArgument_inSource.unsafePointer ()) ;
      const GALGAS_unifiedTypeMap_2D_proxy extractedValue_type = extractPtr_4382->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_plmName = extractPtr_4382->mAssociatedValue1 ;
      const GALGAS_uint extractedValue_index = extractPtr_4382->mAssociatedValue2 ;
      {
      routine_getNewTempVariable (extractedValue_type, extractedValue_plmName.getter_location (SOURCE_FILE ("intermediate-load-store.galgas", 96)), ioArgument_ioTemporaries, outArgument_outResultingValue, inCompiler  COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 96)) ;
      }
      {
      extensionSetter_appendGetPropertyReference (ioObject, outArgument_outResultingValue, constinArgument_inSource, extractedValue_plmName.getter_string (SOURCE_FILE ("intermediate-load-store.galgas", 100)), extractedValue_index.getter_string (SOURCE_FILE ("intermediate-load-store.galgas", 101)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 97)) ;
      }
    }
    break ;
  case GALGAS_objectIR::kEnum_literalInteger:
    {
      outArgument_outResultingValue = constinArgument_inSource ;
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmTemporaryValue:
    {
      outArgument_outResultingValue = constinArgument_inSource ;
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmStructureConstant:
    {
      outArgument_outResultingValue = constinArgument_inSource ;
    }
    break ;
  case GALGAS_objectIR::kEnum_literalString:
    {
      outArgument_outResultingValue = constinArgument_inSource ;
    }
    break ;
  case GALGAS_objectIR::kEnum_zero:
    {
      outArgument_outResultingValue = constinArgument_inSource ;
    }
    break ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Extension method '@instructionListIR appendLoadStructureConstant'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionSetter_appendLoadStructureConstant (GALGAS_instructionListIR & ioObject,
                                                  const GALGAS_objectIR constinArgument_inTargetValue,
                                                  const GALGAS_string constinArgument_inTypeName,
                                                  C_Compiler * /* inCompiler */
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.addAssign_operation (GALGAS_loadStructureConstantIR::constructor_new (constinArgument_inTargetValue, constinArgument_inTypeName  COMMA_SOURCE_FILE ("intermediate-load-structure-constant.galgas", 6))  COMMA_SOURCE_FILE ("intermediate-load-structure-constant.galgas", 6)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Extension method '@instructionListIR appendGetPropertyReference'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionSetter_appendGetPropertyReference (GALGAS_instructionListIR & ioObject,
                                                 const GALGAS_objectIR constinArgument_inTarget,
                                                 const GALGAS_objectIR constinArgument_inSource,
                                                 const GALGAS_string constinArgument_inPLMname,
                                                 const GALGAS_string constinArgument_inPropertyIndex,
                                                 C_Compiler * /* inCompiler */
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.addAssign_operation (GALGAS_getPropertyReferenceIR::constructor_new (constinArgument_inTarget, constinArgument_inSource, constinArgument_inPLMname, constinArgument_inPropertyIndex  COMMA_SOURCE_FILE ("intermediate-get-element-ptr.galgas", 8))  COMMA_SOURCE_FILE ("intermediate-get-element-ptr.galgas", 8)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Extension method '@instructionListIR appendPropertyReferenceFromSelf'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionSetter_appendPropertyReferenceFromSelf (GALGAS_instructionListIR & ioObject,
                                                      const GALGAS_objectIR constinArgument_inTarget,
                                                      const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                                      const GALGAS_string constinArgument_inPropertyName,
                                                      const GALGAS_uint constinArgument_inPropertyIndex,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, constinArgument_inSelfType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("intermediate-get-element-ptr-from-self.galgas", 9)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (GALGAS_location::constructor_nowhere (SOURCE_FILE ("intermediate-get-element-ptr-from-self.galgas", 10)), GALGAS_string ("<<INTERNAL ERROR>>")  COMMA_SOURCE_FILE ("intermediate-get-element-ptr-from-self.galgas", 10)) ;
  }
  ioObject.addAssign_operation (GALGAS_getPropertyReferenceFromSelfIR::constructor_new (constinArgument_inTarget, constinArgument_inSelfType, constinArgument_inPropertyName, constinArgument_inPropertyIndex  COMMA_SOURCE_FILE ("intermediate-get-element-ptr-from-self.galgas", 12))  COMMA_SOURCE_FILE ("intermediate-get-element-ptr-from-self.galgas", 12)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Extension method '@instructionListIR appendSelectOperation'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionSetter_appendSelectOperation (GALGAS_instructionListIR & ioObject,
                                            const GALGAS_objectIR constinArgument_inTargetValue,
                                            const GALGAS_objectIR constinArgument_in_5F_if_5F_variable,
                                            const GALGAS_objectIR constinArgument_in_5F_then_5F_variable,
                                            const GALGAS_objectIR constinArgument_in_5F_else_5F_variable,
                                            C_Compiler * /* inCompiler */
                                            COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.addAssign_operation (GALGAS_selectInstructionIR::constructor_new (constinArgument_inTargetValue, constinArgument_in_5F_if_5F_variable, constinArgument_in_5F_then_5F_variable, constinArgument_in_5F_else_5F_variable  COMMA_SOURCE_FILE ("intermediate-select-instruction.galgas", 8))  COMMA_SOURCE_FILE ("intermediate-select-instruction.galgas", 8)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Extension method '@instructionListIR testArrayIndex'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionSetter_testArrayIndex (GALGAS_instructionListIR & ioObject,
                                     const GALGAS_objectIR constinArgument_inIndex,
                                     const GALGAS_location constinArgument_inErrorLocation,
                                     const GALGAS_bigint constinArgument_inSize,
                                     GALGAS_bool & outArgument_outGeneratePanicInstruction,
                                     C_Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outGeneratePanicInstruction.drop () ; // Release 'out' argument
  GALGAS_bigint var_max_205 ;
  GALGAS_bool var_isUnsigned_230 ;
  GALGAS_bigint joker_191 ; // Joker input parameter
  GALGAS_uint joker_232_1 ; // Joker input parameter
  extensionGetter_kind (constinArgument_inIndex, inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 8)).method_integer (joker_191, var_max_205, var_isUnsigned_230, joker_232_1, inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 8)) ;
  GALGAS_bool test_0 = var_isUnsigned_230.operator_not (SOURCE_FILE ("intermediate-test-array-index.galgas", 9)) ;
  if (kBoolTrue != test_0.boolEnum ()) {
    test_0 = GALGAS_bool (kIsSupOrEqual, var_max_205.objectCompare (constinArgument_inSize)) ;
  }
  outArgument_outGeneratePanicInstruction = test_0 ;
  ioObject.addAssign_operation (GALGAS_testArrayIndexIR::constructor_new (constinArgument_inIndex, constinArgument_inErrorLocation, constinArgument_inSize  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 10))  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 10)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Extension method '@instructionListIR appendUpperBoundCheck'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionSetter_appendUpperBoundCheck (GALGAS_instructionListIR & ioObject,
                                            const GALGAS_objectIR constinArgument_inSource,
                                            const GALGAS_bigint constinArgument_inUpperBoundPlusOne,
                                            const GALGAS_uint constinArgument_inPanicCode,
                                            const GALGAS_location constinArgument_inLocation,
                                            C_Compiler * /* inCompiler */
                                            COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.addAssign_operation (GALGAS_upperBoundCheckIR::constructor_new (constinArgument_inSource, constinArgument_inUpperBoundPlusOne, constinArgument_inPanicCode, constinArgument_inLocation  COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 8))  COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 8)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Extension method '@instructionListIR appendSourceLineComment'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionSetter_appendSourceLineComment (GALGAS_instructionListIR & ioObject,
                                              const GALGAS_location constinArgument_inSourceLocation,
                                              C_Compiler * /* inCompiler */
                                              COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.addAssign_operation (GALGAS_sourceLocationIR::constructor_new (constinArgument_inSourceLocation  COMMA_SOURCE_FILE ("intermediate-comment-source-line.galgas", 3))  COMMA_SOURCE_FILE ("intermediate-comment-source-line.galgas", 3)) ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_accessibleEntities::GALGAS_accessibleEntities (void) :
mAttribute_mRoutineSet (),
mAttribute_mGuardSet (),
mAttribute_mSectionSet (),
mAttribute_mGlobalVariableSet (),
mAttribute_mTaskVariableSet () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_accessibleEntities::~ GALGAS_accessibleEntities (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_accessibleEntities::GALGAS_accessibleEntities (const GALGAS_stringset & inOperand0,
                                                      const GALGAS_stringset & inOperand1,
                                                      const GALGAS_stringset & inOperand2,
                                                      const GALGAS_stringset & inOperand3,
                                                      const GALGAS_stringset & inOperand4) :
mAttribute_mRoutineSet (inOperand0),
mAttribute_mGuardSet (inOperand1),
mAttribute_mSectionSet (inOperand2),
mAttribute_mGlobalVariableSet (inOperand3),
mAttribute_mTaskVariableSet (inOperand4) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_accessibleEntities GALGAS_accessibleEntities::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_accessibleEntities (GALGAS_stringset::constructor_emptySet (HERE),
                                    GALGAS_stringset::constructor_emptySet (HERE),
                                    GALGAS_stringset::constructor_emptySet (HERE),
                                    GALGAS_stringset::constructor_emptySet (HERE),
                                    GALGAS_stringset::constructor_emptySet (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_accessibleEntities GALGAS_accessibleEntities::constructor_new (const GALGAS_stringset & inOperand0,
                                                                      const GALGAS_stringset & inOperand1,
                                                                      const GALGAS_stringset & inOperand2,
                                                                      const GALGAS_stringset & inOperand3,
                                                                      const GALGAS_stringset & inOperand4 
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_accessibleEntities result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_accessibleEntities (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_accessibleEntities::objectCompare (const GALGAS_accessibleEntities & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mRoutineSet.objectCompare (inOperand.mAttribute_mRoutineSet) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mGuardSet.objectCompare (inOperand.mAttribute_mGuardSet) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSectionSet.objectCompare (inOperand.mAttribute_mSectionSet) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mGlobalVariableSet.objectCompare (inOperand.mAttribute_mGlobalVariableSet) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mTaskVariableSet.objectCompare (inOperand.mAttribute_mTaskVariableSet) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_accessibleEntities::isValid (void) const {
  return mAttribute_mRoutineSet.isValid () && mAttribute_mGuardSet.isValid () && mAttribute_mSectionSet.isValid () && mAttribute_mGlobalVariableSet.isValid () && mAttribute_mTaskVariableSet.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_accessibleEntities::drop (void) {
  mAttribute_mRoutineSet.drop () ;
  mAttribute_mGuardSet.drop () ;
  mAttribute_mSectionSet.drop () ;
  mAttribute_mGlobalVariableSet.drop () ;
  mAttribute_mTaskVariableSet.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_accessibleEntities::description (C_String & ioString,
                                             const int32_t inIndentation) const {
  ioString << "<struct @accessibleEntities:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mRoutineSet.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mGuardSet.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSectionSet.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mGlobalVariableSet.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mTaskVariableSet.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringset GALGAS_accessibleEntities::getter_mRoutineSet (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRoutineSet ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringset GALGAS_accessibleEntities::getter_mGuardSet (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mGuardSet ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringset GALGAS_accessibleEntities::getter_mSectionSet (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSectionSet ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringset GALGAS_accessibleEntities::getter_mGlobalVariableSet (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mGlobalVariableSet ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringset GALGAS_accessibleEntities::getter_mTaskVariableSet (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTaskVariableSet ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @accessibleEntities type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_accessibleEntities ("accessibleEntities",
                                           NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_accessibleEntities::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_accessibleEntities ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_accessibleEntities::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_accessibleEntities (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_accessibleEntities GALGAS_accessibleEntities::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_accessibleEntities result ;
  const GALGAS_accessibleEntities * p = (const GALGAS_accessibleEntities *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_accessibleEntities *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("accessibleEntities", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Abstract extension method '@abstractInstructionIR enterAccessibleEntities'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_abstractInstructionIR_enterAccessibleEntities> gExtensionMethodTable_abstractInstructionIR_enterAccessibleEntities ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_enterAccessibleEntities (const int32_t inClassIndex,
                                                   extensionMethodSignature_abstractInstructionIR_enterAccessibleEntities inMethod) {
  gExtensionMethodTable_abstractInstructionIR_enterAccessibleEntities.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_abstractInstructionIR_enterAccessibleEntities (void) {
  gExtensionMethodTable_abstractInstructionIR_enterAccessibleEntities.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractInstructionIR_enterAccessibleEntities (NULL,
                                                                          freeExtensionMethod_abstractInstructionIR_enterAccessibleEntities) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                  GALGAS_accessibleEntities & io_ioAccessibleEntities,
                                                  GALGAS_uint & io_ioMaxBranchOfOnInstructions,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractInstructionIR) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_abstractInstructionIR_enterAccessibleEntities f = NULL ;
    if (classIndex < gExtensionMethodTable_abstractInstructionIR_enterAccessibleEntities.count ()) {
      f = gExtensionMethodTable_abstractInstructionIR_enterAccessibleEntities (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_abstractInstructionIR_enterAccessibleEntities.count ()) {
           f = gExtensionMethodTable_abstractInstructionIR_enterAccessibleEntities (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_abstractInstructionIR_enterAccessibleEntities.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioAccessibleEntities, io_ioMaxBranchOfOnInstructions, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Extension method '@instructionListIR enterAccessibleEntities'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_enterAccessibleEntities (const GALGAS_instructionListIR inObject,
                                              GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                              GALGAS_uint & ioArgument_ioMaxBranchOfOnInstructions,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_instructionListIR temp_0 = inObject ;
  cEnumerator_instructionListIR enumerator_1321 (temp_0, kEnumeration_up) ;
  while (enumerator_1321.hasCurrentObject ()) {
    callExtensionMethod_enterAccessibleEntities ((const cPtr_abstractInstructionIR *) enumerator_1321.current_mInstructionGeneration (HERE).ptr (), ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 25)) ;
    enumerator_1321.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_generationAdds::GALGAS_generationAdds (void) :
mAttribute_mUniqueIndex (),
mAttribute_mExternFunctionDeclarationSet (),
mAttribute_mStaticStringMap (),
mAttribute_mUsesGuards () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_generationAdds::~ GALGAS_generationAdds (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_generationAdds::GALGAS_generationAdds (const GALGAS_uint & inOperand0,
                                              const GALGAS_stringset & inOperand1,
                                              const GALGAS_staticStringMap & inOperand2,
                                              const GALGAS_bool & inOperand3) :
mAttribute_mUniqueIndex (inOperand0),
mAttribute_mExternFunctionDeclarationSet (inOperand1),
mAttribute_mStaticStringMap (inOperand2),
mAttribute_mUsesGuards (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_generationAdds GALGAS_generationAdds::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_generationAdds (GALGAS_uint::constructor_default (HERE),
                                GALGAS_stringset::constructor_emptySet (HERE),
                                GALGAS_staticStringMap::constructor_emptyMap (HERE),
                                GALGAS_bool::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_generationAdds GALGAS_generationAdds::constructor_new (const GALGAS_uint & inOperand0,
                                                              const GALGAS_stringset & inOperand1,
                                                              const GALGAS_staticStringMap & inOperand2,
                                                              const GALGAS_bool & inOperand3 
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_generationAdds result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_generationAdds (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_generationAdds::objectCompare (const GALGAS_generationAdds & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mUniqueIndex.objectCompare (inOperand.mAttribute_mUniqueIndex) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mExternFunctionDeclarationSet.objectCompare (inOperand.mAttribute_mExternFunctionDeclarationSet) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mStaticStringMap.objectCompare (inOperand.mAttribute_mStaticStringMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mUsesGuards.objectCompare (inOperand.mAttribute_mUsesGuards) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_generationAdds::isValid (void) const {
  return mAttribute_mUniqueIndex.isValid () && mAttribute_mExternFunctionDeclarationSet.isValid () && mAttribute_mStaticStringMap.isValid () && mAttribute_mUsesGuards.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_generationAdds::drop (void) {
  mAttribute_mUniqueIndex.drop () ;
  mAttribute_mExternFunctionDeclarationSet.drop () ;
  mAttribute_mStaticStringMap.drop () ;
  mAttribute_mUsesGuards.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_generationAdds::description (C_String & ioString,
                                         const int32_t inIndentation) const {
  ioString << "<struct @generationAdds:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mUniqueIndex.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mExternFunctionDeclarationSet.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mStaticStringMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mUsesGuards.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_generationAdds::getter_mUniqueIndex (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mUniqueIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringset GALGAS_generationAdds::getter_mExternFunctionDeclarationSet (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExternFunctionDeclarationSet ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticStringMap GALGAS_generationAdds::getter_mStaticStringMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mStaticStringMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_generationAdds::getter_mUsesGuards (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mUsesGuards ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @generationAdds type                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_generationAdds ("generationAdds",
                                       NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_generationAdds::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_generationAdds ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_generationAdds::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_generationAdds (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_generationAdds GALGAS_generationAdds::extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_generationAdds result ;
  const GALGAS_generationAdds * p = (const GALGAS_generationAdds *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_generationAdds *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("generationAdds", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Abstract extension method '@abstractInstructionIR llvmInstructionCode'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_abstractInstructionIR_llvmInstructionCode> gExtensionMethodTable_abstractInstructionIR_llvmInstructionCode ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_llvmInstructionCode (const int32_t inClassIndex,
                                               extensionMethodSignature_abstractInstructionIR_llvmInstructionCode inMethod) {
  gExtensionMethodTable_abstractInstructionIR_llvmInstructionCode.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_abstractInstructionIR_llvmInstructionCode (void) {
  gExtensionMethodTable_abstractInstructionIR_llvmInstructionCode.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractInstructionIR_llvmInstructionCode (NULL,
                                                                      freeExtensionMethod_abstractInstructionIR_llvmInstructionCode) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                              GALGAS_string & io_ioLLVMcode,
                                              const GALGAS_generationContext constin_inGenerationContext,
                                              GALGAS_generationAdds & io_ioGenerationAdds,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractInstructionIR) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_abstractInstructionIR_llvmInstructionCode f = NULL ;
    if (classIndex < gExtensionMethodTable_abstractInstructionIR_llvmInstructionCode.count ()) {
      f = gExtensionMethodTable_abstractInstructionIR_llvmInstructionCode (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_abstractInstructionIR_llvmInstructionCode.count ()) {
           f = gExtensionMethodTable_abstractInstructionIR_llvmInstructionCode (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_abstractInstructionIR_llvmInstructionCode.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioLLVMcode, constin_inGenerationContext, io_ioGenerationAdds, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_generationContext::GALGAS_generationContext (void) :
mAttribute_mPanicCodeLLVMType (),
mAttribute_mPanicLineLLVMType (),
mAttribute_mGlobalTaskVariableList (),
mAttribute_mAvailableInterruptMap () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_generationContext::~ GALGAS_generationContext (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_generationContext::GALGAS_generationContext (const GALGAS_string & inOperand0,
                                                    const GALGAS_string & inOperand1,
                                                    const GALGAS_globalTaskVariableList & inOperand2,
                                                    const GALGAS_availableInterruptMap & inOperand3) :
mAttribute_mPanicCodeLLVMType (inOperand0),
mAttribute_mPanicLineLLVMType (inOperand1),
mAttribute_mGlobalTaskVariableList (inOperand2),
mAttribute_mAvailableInterruptMap (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_generationContext GALGAS_generationContext::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_generationContext (GALGAS_string::constructor_default (HERE),
                                   GALGAS_string::constructor_default (HERE),
                                   GALGAS_globalTaskVariableList::constructor_emptyList (HERE),
                                   GALGAS_availableInterruptMap::constructor_emptyMap (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_generationContext GALGAS_generationContext::constructor_new (const GALGAS_string & inOperand0,
                                                                    const GALGAS_string & inOperand1,
                                                                    const GALGAS_globalTaskVariableList & inOperand2,
                                                                    const GALGAS_availableInterruptMap & inOperand3 
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_generationContext result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_generationContext (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_generationContext::objectCompare (const GALGAS_generationContext & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mPanicCodeLLVMType.objectCompare (inOperand.mAttribute_mPanicCodeLLVMType) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mPanicLineLLVMType.objectCompare (inOperand.mAttribute_mPanicLineLLVMType) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mGlobalTaskVariableList.objectCompare (inOperand.mAttribute_mGlobalTaskVariableList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mAvailableInterruptMap.objectCompare (inOperand.mAttribute_mAvailableInterruptMap) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_generationContext::isValid (void) const {
  return mAttribute_mPanicCodeLLVMType.isValid () && mAttribute_mPanicLineLLVMType.isValid () && mAttribute_mGlobalTaskVariableList.isValid () && mAttribute_mAvailableInterruptMap.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_generationContext::drop (void) {
  mAttribute_mPanicCodeLLVMType.drop () ;
  mAttribute_mPanicLineLLVMType.drop () ;
  mAttribute_mGlobalTaskVariableList.drop () ;
  mAttribute_mAvailableInterruptMap.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_generationContext::description (C_String & ioString,
                                            const int32_t inIndentation) const {
  ioString << "<struct @generationContext:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mPanicCodeLLVMType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mPanicLineLLVMType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mGlobalTaskVariableList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mAvailableInterruptMap.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_generationContext::getter_mPanicCodeLLVMType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPanicCodeLLVMType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_generationContext::getter_mPanicLineLLVMType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPanicLineLLVMType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalTaskVariableList GALGAS_generationContext::getter_mGlobalTaskVariableList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mGlobalTaskVariableList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_availableInterruptMap GALGAS_generationContext::getter_mAvailableInterruptMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAvailableInterruptMap ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @generationContext type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_generationContext ("generationContext",
                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_generationContext::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_generationContext ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_generationContext::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_generationContext (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_generationContext GALGAS_generationContext::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_generationContext result ;
  const GALGAS_generationContext * p = (const GALGAS_generationContext *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_generationContext *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("generationContext", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_declarationListAST_2D_element::GALGAS_declarationListAST_2D_element (void) :
mAttribute_mDeclaration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_declarationListAST_2D_element::~ GALGAS_declarationListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_declarationListAST_2D_element::GALGAS_declarationListAST_2D_element (const GALGAS_abstractDeclaration & inOperand0) :
mAttribute_mDeclaration (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_declarationListAST_2D_element GALGAS_declarationListAST_2D_element::constructor_new (const GALGAS_abstractDeclaration & inOperand0 
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_declarationListAST_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_declarationListAST_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_declarationListAST_2D_element::objectCompare (const GALGAS_declarationListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mDeclaration.objectCompare (inOperand.mAttribute_mDeclaration) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_declarationListAST_2D_element::isValid (void) const {
  return mAttribute_mDeclaration.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_declarationListAST_2D_element::drop (void) {
  mAttribute_mDeclaration.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_declarationListAST_2D_element::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "<struct @declarationListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mDeclaration.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractDeclaration GALGAS_declarationListAST_2D_element::getter_mDeclaration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDeclaration ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @declarationListAST-element type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_declarationListAST_2D_element ("declarationListAST-element",
                                                      NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_declarationListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_declarationListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_declarationListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_declarationListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_declarationListAST_2D_element GALGAS_declarationListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_declarationListAST_2D_element result ;
  const GALGAS_declarationListAST_2D_element * p = (const GALGAS_declarationListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_declarationListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("declarationListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterFieldList_2D_element::GALGAS_controlRegisterFieldList_2D_element (void) :
mAttribute_mFieldBitCount (),
mAttribute_mFieldName () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterFieldList_2D_element::~ GALGAS_controlRegisterFieldList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterFieldList_2D_element::GALGAS_controlRegisterFieldList_2D_element (const GALGAS_uint & inOperand0,
                                                                                        const GALGAS_string & inOperand1) :
mAttribute_mFieldBitCount (inOperand0),
mAttribute_mFieldName (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterFieldList_2D_element GALGAS_controlRegisterFieldList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_controlRegisterFieldList_2D_element (GALGAS_uint::constructor_default (HERE),
                                                     GALGAS_string::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterFieldList_2D_element GALGAS_controlRegisterFieldList_2D_element::constructor_new (const GALGAS_uint & inOperand0,
                                                                                                        const GALGAS_string & inOperand1 
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_controlRegisterFieldList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_controlRegisterFieldList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_controlRegisterFieldList_2D_element::objectCompare (const GALGAS_controlRegisterFieldList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mFieldBitCount.objectCompare (inOperand.mAttribute_mFieldBitCount) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFieldName.objectCompare (inOperand.mAttribute_mFieldName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_controlRegisterFieldList_2D_element::isValid (void) const {
  return mAttribute_mFieldBitCount.isValid () && mAttribute_mFieldName.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_controlRegisterFieldList_2D_element::drop (void) {
  mAttribute_mFieldBitCount.drop () ;
  mAttribute_mFieldName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_controlRegisterFieldList_2D_element::description (C_String & ioString,
                                                              const int32_t inIndentation) const {
  ioString << "<struct @controlRegisterFieldList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mFieldBitCount.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFieldName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_controlRegisterFieldList_2D_element::getter_mFieldBitCount (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFieldBitCount ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_controlRegisterFieldList_2D_element::getter_mFieldName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFieldName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @controlRegisterFieldList-element type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_controlRegisterFieldList_2D_element ("controlRegisterFieldList-element",
                                                            NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_controlRegisterFieldList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterFieldList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_controlRegisterFieldList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_controlRegisterFieldList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterFieldList_2D_element GALGAS_controlRegisterFieldList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterFieldList_2D_element result ;
  const GALGAS_controlRegisterFieldList_2D_element * p = (const GALGAS_controlRegisterFieldList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_controlRegisterFieldList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterFieldList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskSortedListIR_2D_element::GALGAS_taskSortedListIR_2D_element (void) :
mAttribute_mTaskName (),
mAttribute_mPriority (),
mAttribute_mStackSize (),
mAttribute_mAllocaList (),
mAttribute_mInitInstructionListIR () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskSortedListIR_2D_element::~ GALGAS_taskSortedListIR_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskSortedListIR_2D_element::GALGAS_taskSortedListIR_2D_element (const GALGAS_string & inOperand0,
                                                                        const GALGAS_bigint & inOperand1,
                                                                        const GALGAS_bigint & inOperand2,
                                                                        const GALGAS_allocaList & inOperand3,
                                                                        const GALGAS_instructionListIR & inOperand4) :
mAttribute_mTaskName (inOperand0),
mAttribute_mPriority (inOperand1),
mAttribute_mStackSize (inOperand2),
mAttribute_mAllocaList (inOperand3),
mAttribute_mInitInstructionListIR (inOperand4) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskSortedListIR_2D_element GALGAS_taskSortedListIR_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_taskSortedListIR_2D_element (GALGAS_string::constructor_default (HERE),
                                             GALGAS_bigint::constructor_zero (HERE),
                                             GALGAS_bigint::constructor_zero (HERE),
                                             GALGAS_allocaList::constructor_emptyList (HERE),
                                             GALGAS_instructionListIR::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskSortedListIR_2D_element GALGAS_taskSortedListIR_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                        const GALGAS_bigint & inOperand1,
                                                                                        const GALGAS_bigint & inOperand2,
                                                                                        const GALGAS_allocaList & inOperand3,
                                                                                        const GALGAS_instructionListIR & inOperand4 
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_taskSortedListIR_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_taskSortedListIR_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_taskSortedListIR_2D_element::objectCompare (const GALGAS_taskSortedListIR_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mTaskName.objectCompare (inOperand.mAttribute_mTaskName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mPriority.objectCompare (inOperand.mAttribute_mPriority) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mStackSize.objectCompare (inOperand.mAttribute_mStackSize) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mAllocaList.objectCompare (inOperand.mAttribute_mAllocaList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInitInstructionListIR.objectCompare (inOperand.mAttribute_mInitInstructionListIR) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_taskSortedListIR_2D_element::isValid (void) const {
  return mAttribute_mTaskName.isValid () && mAttribute_mPriority.isValid () && mAttribute_mStackSize.isValid () && mAttribute_mAllocaList.isValid () && mAttribute_mInitInstructionListIR.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskSortedListIR_2D_element::drop (void) {
  mAttribute_mTaskName.drop () ;
  mAttribute_mPriority.drop () ;
  mAttribute_mStackSize.drop () ;
  mAttribute_mAllocaList.drop () ;
  mAttribute_mInitInstructionListIR.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskSortedListIR_2D_element::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "<struct @taskSortedListIR-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mTaskName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mPriority.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mStackSize.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mAllocaList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInitInstructionListIR.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_taskSortedListIR_2D_element::getter_mTaskName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTaskName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint GALGAS_taskSortedListIR_2D_element::getter_mPriority (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPriority ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint GALGAS_taskSortedListIR_2D_element::getter_mStackSize (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mStackSize ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allocaList GALGAS_taskSortedListIR_2D_element::getter_mAllocaList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAllocaList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR GALGAS_taskSortedListIR_2D_element::getter_mInitInstructionListIR (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInitInstructionListIR ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @taskSortedListIR-element type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_taskSortedListIR_2D_element ("taskSortedListIR-element",
                                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_taskSortedListIR_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_taskSortedListIR_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_taskSortedListIR_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_taskSortedListIR_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskSortedListIR_2D_element GALGAS_taskSortedListIR_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_taskSortedListIR_2D_element result ;
  const GALGAS_taskSortedListIR_2D_element * p = (const GALGAS_taskSortedListIR_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_taskSortedListIR_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("taskSortedListIR-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootListIR_2D_element::GALGAS_bootListIR_2D_element (void) :
mAttribute_mBootIndex (),
mAttribute_mInitLocation (),
mAttribute_mAllocaList (),
mAttribute_mInstructionListIR (),
mAttribute_mEndOfInitLocation () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootListIR_2D_element::~ GALGAS_bootListIR_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootListIR_2D_element::GALGAS_bootListIR_2D_element (const GALGAS_bigint & inOperand0,
                                                            const GALGAS_location & inOperand1,
                                                            const GALGAS_allocaList & inOperand2,
                                                            const GALGAS_instructionListIR & inOperand3,
                                                            const GALGAS_location & inOperand4) :
mAttribute_mBootIndex (inOperand0),
mAttribute_mInitLocation (inOperand1),
mAttribute_mAllocaList (inOperand2),
mAttribute_mInstructionListIR (inOperand3),
mAttribute_mEndOfInitLocation (inOperand4) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootListIR_2D_element GALGAS_bootListIR_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_bootListIR_2D_element (GALGAS_bigint::constructor_zero (HERE),
                                       GALGAS_location::constructor_nowhere (HERE),
                                       GALGAS_allocaList::constructor_emptyList (HERE),
                                       GALGAS_instructionListIR::constructor_emptyList (HERE),
                                       GALGAS_location::constructor_nowhere (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootListIR_2D_element GALGAS_bootListIR_2D_element::constructor_new (const GALGAS_bigint & inOperand0,
                                                                            const GALGAS_location & inOperand1,
                                                                            const GALGAS_allocaList & inOperand2,
                                                                            const GALGAS_instructionListIR & inOperand3,
                                                                            const GALGAS_location & inOperand4 
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bootListIR_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_bootListIR_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_bootListIR_2D_element::objectCompare (const GALGAS_bootListIR_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mBootIndex.objectCompare (inOperand.mAttribute_mBootIndex) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInitLocation.objectCompare (inOperand.mAttribute_mInitLocation) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mAllocaList.objectCompare (inOperand.mAttribute_mAllocaList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInstructionListIR.objectCompare (inOperand.mAttribute_mInstructionListIR) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mEndOfInitLocation.objectCompare (inOperand.mAttribute_mEndOfInitLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_bootListIR_2D_element::isValid (void) const {
  return mAttribute_mBootIndex.isValid () && mAttribute_mInitLocation.isValid () && mAttribute_mAllocaList.isValid () && mAttribute_mInstructionListIR.isValid () && mAttribute_mEndOfInitLocation.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_bootListIR_2D_element::drop (void) {
  mAttribute_mBootIndex.drop () ;
  mAttribute_mInitLocation.drop () ;
  mAttribute_mAllocaList.drop () ;
  mAttribute_mInstructionListIR.drop () ;
  mAttribute_mEndOfInitLocation.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_bootListIR_2D_element::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "<struct @bootListIR-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mBootIndex.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInitLocation.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mAllocaList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInstructionListIR.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mEndOfInitLocation.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint GALGAS_bootListIR_2D_element::getter_mBootIndex (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBootIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_bootListIR_2D_element::getter_mInitLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInitLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allocaList GALGAS_bootListIR_2D_element::getter_mAllocaList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAllocaList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR GALGAS_bootListIR_2D_element::getter_mInstructionListIR (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstructionListIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_bootListIR_2D_element::getter_mEndOfInitLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfInitLocation ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @bootListIR-element type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_bootListIR_2D_element ("bootListIR-element",
                                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_bootListIR_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bootListIR_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_bootListIR_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_bootListIR_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootListIR_2D_element GALGAS_bootListIR_2D_element::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_bootListIR_2D_element result ;
  const GALGAS_bootListIR_2D_element * p = (const GALGAS_bootListIR_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_bootListIR_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bootListIR-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST_2D_element::GALGAS_instructionListAST_2D_element (void) :
mAttribute_mInstructionLocation (),
mAttribute_mInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST_2D_element::~ GALGAS_instructionListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST_2D_element::GALGAS_instructionListAST_2D_element (const GALGAS_location & inOperand0,
                                                                            const GALGAS_instructionAST & inOperand1) :
mAttribute_mInstructionLocation (inOperand0),
mAttribute_mInstruction (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST_2D_element GALGAS_instructionListAST_2D_element::constructor_new (const GALGAS_location & inOperand0,
                                                                                            const GALGAS_instructionAST & inOperand1 
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_instructionListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_instructionListAST_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_instructionListAST_2D_element::objectCompare (const GALGAS_instructionListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mInstructionLocation.objectCompare (inOperand.mAttribute_mInstructionLocation) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInstruction.objectCompare (inOperand.mAttribute_mInstruction) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_instructionListAST_2D_element::isValid (void) const {
  return mAttribute_mInstructionLocation.isValid () && mAttribute_mInstruction.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_instructionListAST_2D_element::drop (void) {
  mAttribute_mInstructionLocation.drop () ;
  mAttribute_mInstruction.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_instructionListAST_2D_element::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "<struct @instructionListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInstruction.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_instructionListAST_2D_element::getter_mInstructionLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstructionLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionAST GALGAS_instructionListAST_2D_element::getter_mInstruction (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstruction ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @instructionListAST-element type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_instructionListAST_2D_element ("instructionListAST-element",
                                                      NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_instructionListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_instructionListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_instructionListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_instructionListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST_2D_element GALGAS_instructionListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_instructionListAST_2D_element result ;
  const GALGAS_instructionListAST_2D_element * p = (const GALGAS_instructionListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_instructionListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("instructionListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR_2D_element::GALGAS_instructionListIR_2D_element (void) :
mAttribute_mInstructionGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR_2D_element::~ GALGAS_instructionListIR_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR_2D_element::GALGAS_instructionListIR_2D_element (const GALGAS_abstractInstructionIR & inOperand0) :
mAttribute_mInstructionGeneration (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR_2D_element GALGAS_instructionListIR_2D_element::constructor_new (const GALGAS_abstractInstructionIR & inOperand0 
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_instructionListIR_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_instructionListIR_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_instructionListIR_2D_element::objectCompare (const GALGAS_instructionListIR_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mInstructionGeneration.objectCompare (inOperand.mAttribute_mInstructionGeneration) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_instructionListIR_2D_element::isValid (void) const {
  return mAttribute_mInstructionGeneration.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_instructionListIR_2D_element::drop (void) {
  mAttribute_mInstructionGeneration.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_instructionListIR_2D_element::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "<struct @instructionListIR-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mInstructionGeneration.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractInstructionIR GALGAS_instructionListIR_2D_element::getter_mInstructionGeneration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstructionGeneration ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @instructionListIR-element type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_instructionListIR_2D_element ("instructionListIR-element",
                                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_instructionListIR_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_instructionListIR_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_instructionListIR_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_instructionListIR_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR_2D_element GALGAS_instructionListIR_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_instructionListIR_2D_element result ;
  const GALGAS_instructionListIR_2D_element * p = (const GALGAS_instructionListIR_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_instructionListIR_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("instructionListIR-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ast::GALGAS_ast (void) :
mAttribute_mGlobalVarDeclarationList (),
mAttribute_mDeclarationList (),
mAttribute_mExtensionDeclarationListAST (),
mAttribute_mControlRegisterDeclarationListAST (),
mAttribute_mProcedureListAST (),
mAttribute_mRequiredProcList (),
mAttribute_mExternProcList (),
mAttribute_mISRDeclarationListAST (),
mAttribute_mSectionListAST (),
mAttribute_mServiceListAST (),
mAttribute_mPrimitiveListAST (),
mAttribute_mGuardListAST (),
mAttribute_mTargetList (),
mAttribute_mBootList (),
mAttribute_mInitList (),
mAttribute_mPanicClauses (),
mAttribute_mTaskList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ast::~ GALGAS_ast (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ast::GALGAS_ast (const GALGAS_globalVarDeclarationList & inOperand0,
                        const GALGAS_declarationListAST & inOperand1,
                        const GALGAS_extensionDeclarationListAST & inOperand2,
                        const GALGAS_controlRegisterDeclarationListAST & inOperand3,
                        const GALGAS_functionDeclarationListAST & inOperand4,
                        const GALGAS_requiredProcedureDeclarationListAST & inOperand5,
                        const GALGAS_externProcedureDeclarationListAST & inOperand6,
                        const GALGAS_isrDeclarationListAST & inOperand7,
                        const GALGAS_sectionDeclarationListAST & inOperand8,
                        const GALGAS_serviceDeclarationListAST & inOperand9,
                        const GALGAS_primitiveDeclarationListAST & inOperand10,
                        const GALGAS_guardDeclarationListAST & inOperand11,
                        const GALGAS_lstringlist & inOperand12,
                        const GALGAS_bootList & inOperand13,
                        const GALGAS_initList & inOperand14,
                        const GALGAS_panicClauseListAST & inOperand15,
                        const GALGAS_taskList & inOperand16) :
mAttribute_mGlobalVarDeclarationList (inOperand0),
mAttribute_mDeclarationList (inOperand1),
mAttribute_mExtensionDeclarationListAST (inOperand2),
mAttribute_mControlRegisterDeclarationListAST (inOperand3),
mAttribute_mProcedureListAST (inOperand4),
mAttribute_mRequiredProcList (inOperand5),
mAttribute_mExternProcList (inOperand6),
mAttribute_mISRDeclarationListAST (inOperand7),
mAttribute_mSectionListAST (inOperand8),
mAttribute_mServiceListAST (inOperand9),
mAttribute_mPrimitiveListAST (inOperand10),
mAttribute_mGuardListAST (inOperand11),
mAttribute_mTargetList (inOperand12),
mAttribute_mBootList (inOperand13),
mAttribute_mInitList (inOperand14),
mAttribute_mPanicClauses (inOperand15),
mAttribute_mTaskList (inOperand16) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ast GALGAS_ast::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_ast (GALGAS_globalVarDeclarationList::constructor_emptyList (HERE),
                     GALGAS_declarationListAST::constructor_emptyList (HERE),
                     GALGAS_extensionDeclarationListAST::constructor_emptyList (HERE),
                     GALGAS_controlRegisterDeclarationListAST::constructor_emptyList (HERE),
                     GALGAS_functionDeclarationListAST::constructor_emptyList (HERE),
                     GALGAS_requiredProcedureDeclarationListAST::constructor_emptyList (HERE),
                     GALGAS_externProcedureDeclarationListAST::constructor_emptyList (HERE),
                     GALGAS_isrDeclarationListAST::constructor_emptyList (HERE),
                     GALGAS_sectionDeclarationListAST::constructor_emptyList (HERE),
                     GALGAS_serviceDeclarationListAST::constructor_emptyList (HERE),
                     GALGAS_primitiveDeclarationListAST::constructor_emptyList (HERE),
                     GALGAS_guardDeclarationListAST::constructor_emptyList (HERE),
                     GALGAS_lstringlist::constructor_emptyList (HERE),
                     GALGAS_bootList::constructor_emptySortedList (HERE),
                     GALGAS_initList::constructor_emptySortedList (HERE),
                     GALGAS_panicClauseListAST::constructor_emptySortedList (HERE),
                     GALGAS_taskList::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ast GALGAS_ast::constructor_new (const GALGAS_globalVarDeclarationList & inOperand0,
                                        const GALGAS_declarationListAST & inOperand1,
                                        const GALGAS_extensionDeclarationListAST & inOperand2,
                                        const GALGAS_controlRegisterDeclarationListAST & inOperand3,
                                        const GALGAS_functionDeclarationListAST & inOperand4,
                                        const GALGAS_requiredProcedureDeclarationListAST & inOperand5,
                                        const GALGAS_externProcedureDeclarationListAST & inOperand6,
                                        const GALGAS_isrDeclarationListAST & inOperand7,
                                        const GALGAS_sectionDeclarationListAST & inOperand8,
                                        const GALGAS_serviceDeclarationListAST & inOperand9,
                                        const GALGAS_primitiveDeclarationListAST & inOperand10,
                                        const GALGAS_guardDeclarationListAST & inOperand11,
                                        const GALGAS_lstringlist & inOperand12,
                                        const GALGAS_bootList & inOperand13,
                                        const GALGAS_initList & inOperand14,
                                        const GALGAS_panicClauseListAST & inOperand15,
                                        const GALGAS_taskList & inOperand16 
                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_ast result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid () && inOperand10.isValid () && inOperand11.isValid () && inOperand12.isValid () && inOperand13.isValid () && inOperand14.isValid () && inOperand15.isValid () && inOperand16.isValid ()) {
    result = GALGAS_ast (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10, inOperand11, inOperand12, inOperand13, inOperand14, inOperand15, inOperand16) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_ast::objectCompare (const GALGAS_ast & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mGlobalVarDeclarationList.objectCompare (inOperand.mAttribute_mGlobalVarDeclarationList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mDeclarationList.objectCompare (inOperand.mAttribute_mDeclarationList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mExtensionDeclarationListAST.objectCompare (inOperand.mAttribute_mExtensionDeclarationListAST) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mControlRegisterDeclarationListAST.objectCompare (inOperand.mAttribute_mControlRegisterDeclarationListAST) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mProcedureListAST.objectCompare (inOperand.mAttribute_mProcedureListAST) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mRequiredProcList.objectCompare (inOperand.mAttribute_mRequiredProcList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mExternProcList.objectCompare (inOperand.mAttribute_mExternProcList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mISRDeclarationListAST.objectCompare (inOperand.mAttribute_mISRDeclarationListAST) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSectionListAST.objectCompare (inOperand.mAttribute_mSectionListAST) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mServiceListAST.objectCompare (inOperand.mAttribute_mServiceListAST) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mPrimitiveListAST.objectCompare (inOperand.mAttribute_mPrimitiveListAST) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mGuardListAST.objectCompare (inOperand.mAttribute_mGuardListAST) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mTargetList.objectCompare (inOperand.mAttribute_mTargetList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mBootList.objectCompare (inOperand.mAttribute_mBootList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInitList.objectCompare (inOperand.mAttribute_mInitList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mPanicClauses.objectCompare (inOperand.mAttribute_mPanicClauses) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mTaskList.objectCompare (inOperand.mAttribute_mTaskList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_ast::isValid (void) const {
  return mAttribute_mGlobalVarDeclarationList.isValid () && mAttribute_mDeclarationList.isValid () && mAttribute_mExtensionDeclarationListAST.isValid () && mAttribute_mControlRegisterDeclarationListAST.isValid () && mAttribute_mProcedureListAST.isValid () && mAttribute_mRequiredProcList.isValid () && mAttribute_mExternProcList.isValid () && mAttribute_mISRDeclarationListAST.isValid () && mAttribute_mSectionListAST.isValid () && mAttribute_mServiceListAST.isValid () && mAttribute_mPrimitiveListAST.isValid () && mAttribute_mGuardListAST.isValid () && mAttribute_mTargetList.isValid () && mAttribute_mBootList.isValid () && mAttribute_mInitList.isValid () && mAttribute_mPanicClauses.isValid () && mAttribute_mTaskList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_ast::drop (void) {
  mAttribute_mGlobalVarDeclarationList.drop () ;
  mAttribute_mDeclarationList.drop () ;
  mAttribute_mExtensionDeclarationListAST.drop () ;
  mAttribute_mControlRegisterDeclarationListAST.drop () ;
  mAttribute_mProcedureListAST.drop () ;
  mAttribute_mRequiredProcList.drop () ;
  mAttribute_mExternProcList.drop () ;
  mAttribute_mISRDeclarationListAST.drop () ;
  mAttribute_mSectionListAST.drop () ;
  mAttribute_mServiceListAST.drop () ;
  mAttribute_mPrimitiveListAST.drop () ;
  mAttribute_mGuardListAST.drop () ;
  mAttribute_mTargetList.drop () ;
  mAttribute_mBootList.drop () ;
  mAttribute_mInitList.drop () ;
  mAttribute_mPanicClauses.drop () ;
  mAttribute_mTaskList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_ast::description (C_String & ioString,
                              const int32_t inIndentation) const {
  ioString << "<struct @ast:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mGlobalVarDeclarationList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mDeclarationList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mExtensionDeclarationListAST.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mControlRegisterDeclarationListAST.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mProcedureListAST.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mRequiredProcList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mExternProcList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mISRDeclarationListAST.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSectionListAST.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mServiceListAST.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mPrimitiveListAST.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mGuardListAST.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mTargetList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mBootList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInitList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mPanicClauses.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mTaskList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalVarDeclarationList GALGAS_ast::getter_mGlobalVarDeclarationList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mGlobalVarDeclarationList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_declarationListAST GALGAS_ast::getter_mDeclarationList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDeclarationList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionDeclarationListAST GALGAS_ast::getter_mExtensionDeclarationListAST (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExtensionDeclarationListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterDeclarationListAST GALGAS_ast::getter_mControlRegisterDeclarationListAST (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mControlRegisterDeclarationListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionDeclarationListAST GALGAS_ast::getter_mProcedureListAST (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mProcedureListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_requiredProcedureDeclarationListAST GALGAS_ast::getter_mRequiredProcList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRequiredProcList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externProcedureDeclarationListAST GALGAS_ast::getter_mExternProcList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExternProcList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_isrDeclarationListAST GALGAS_ast::getter_mISRDeclarationListAST (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mISRDeclarationListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sectionDeclarationListAST GALGAS_ast::getter_mSectionListAST (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSectionListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_serviceDeclarationListAST GALGAS_ast::getter_mServiceListAST (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mServiceListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_primitiveDeclarationListAST GALGAS_ast::getter_mPrimitiveListAST (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPrimitiveListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardDeclarationListAST GALGAS_ast::getter_mGuardListAST (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mGuardListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_ast::getter_mTargetList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTargetList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootList GALGAS_ast::getter_mBootList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBootList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initList GALGAS_ast::getter_mInitList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInitList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_panicClauseListAST GALGAS_ast::getter_mPanicClauses (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPanicClauses ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskList GALGAS_ast::getter_mTaskList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTaskList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                      @ast type                                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ast ("ast",
                            NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_ast::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ast ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_ast::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ast (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ast GALGAS_ast::extractObject (const GALGAS_object & inObject,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  GALGAS_ast result ;
  const GALGAS_ast * p = (const GALGAS_ast *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_ast *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ast", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_targetParameters::GALGAS_targetParameters (void) :
mAttribute_mSystemStackSize (),
mAttribute_mStackedUserRegisterOnInterruptByteSize (),
mAttribute_mServicePushedRegisterByteSize (),
mAttribute_mSectionPushedRegisterByteSize () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_targetParameters::~ GALGAS_targetParameters (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_targetParameters::GALGAS_targetParameters (const GALGAS_lbigint & inOperand0,
                                                  const GALGAS_lbigint & inOperand1,
                                                  const GALGAS_lbigint & inOperand2,
                                                  const GALGAS_lbigint & inOperand3) :
mAttribute_mSystemStackSize (inOperand0),
mAttribute_mStackedUserRegisterOnInterruptByteSize (inOperand1),
mAttribute_mServicePushedRegisterByteSize (inOperand2),
mAttribute_mSectionPushedRegisterByteSize (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_targetParameters GALGAS_targetParameters::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_targetParameters (GALGAS_lbigint::constructor_default (HERE),
                                  GALGAS_lbigint::constructor_default (HERE),
                                  GALGAS_lbigint::constructor_default (HERE),
                                  GALGAS_lbigint::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_targetParameters GALGAS_targetParameters::constructor_new (const GALGAS_lbigint & inOperand0,
                                                                  const GALGAS_lbigint & inOperand1,
                                                                  const GALGAS_lbigint & inOperand2,
                                                                  const GALGAS_lbigint & inOperand3 
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_targetParameters result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_targetParameters (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_targetParameters::objectCompare (const GALGAS_targetParameters & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mSystemStackSize.objectCompare (inOperand.mAttribute_mSystemStackSize) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mStackedUserRegisterOnInterruptByteSize.objectCompare (inOperand.mAttribute_mStackedUserRegisterOnInterruptByteSize) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mServicePushedRegisterByteSize.objectCompare (inOperand.mAttribute_mServicePushedRegisterByteSize) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSectionPushedRegisterByteSize.objectCompare (inOperand.mAttribute_mSectionPushedRegisterByteSize) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_targetParameters::isValid (void) const {
  return mAttribute_mSystemStackSize.isValid () && mAttribute_mStackedUserRegisterOnInterruptByteSize.isValid () && mAttribute_mServicePushedRegisterByteSize.isValid () && mAttribute_mSectionPushedRegisterByteSize.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_targetParameters::drop (void) {
  mAttribute_mSystemStackSize.drop () ;
  mAttribute_mStackedUserRegisterOnInterruptByteSize.drop () ;
  mAttribute_mServicePushedRegisterByteSize.drop () ;
  mAttribute_mSectionPushedRegisterByteSize.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_targetParameters::description (C_String & ioString,
                                           const int32_t inIndentation) const {
  ioString << "<struct @targetParameters:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mSystemStackSize.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mStackedUserRegisterOnInterruptByteSize.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mServicePushedRegisterByteSize.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSectionPushedRegisterByteSize.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbigint GALGAS_targetParameters::getter_mSystemStackSize (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSystemStackSize ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbigint GALGAS_targetParameters::getter_mStackedUserRegisterOnInterruptByteSize (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mStackedUserRegisterOnInterruptByteSize ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbigint GALGAS_targetParameters::getter_mServicePushedRegisterByteSize (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mServicePushedRegisterByteSize ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbigint GALGAS_targetParameters::getter_mSectionPushedRegisterByteSize (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSectionPushedRegisterByteSize ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @targetParameters type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_targetParameters ("targetParameters",
                                         NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_targetParameters::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_targetParameters ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_targetParameters::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_targetParameters (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_targetParameters GALGAS_targetParameters::extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_targetParameters result ;
  const GALGAS_targetParameters * p = (const GALGAS_targetParameters *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_targetParameters *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("targetParameters", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Extension method '@structureDeclaration functionSemanticAnalysis'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_structureDeclaration_functionSemanticAnalysis> gExtensionMethodTable_structureDeclaration_functionSemanticAnalysis ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_functionSemanticAnalysis (const int32_t inClassIndex,
                                                    extensionMethodSignature_structureDeclaration_functionSemanticAnalysis inMethod) {
  gExtensionMethodTable_structureDeclaration_functionSemanticAnalysis.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_functionSemanticAnalysis (const cPtr_structureDeclaration * inObject,
                                                   const GALGAS_unifiedTypeMap_2D_proxy constin_inStructureType,
                                                   const GALGAS_semanticContext constin_inContext,
                                                   GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                                   GALGAS_intermediateCodeStruct & io_ioIntermediateCodeStruct,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_structureDeclaration) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_structureDeclaration_functionSemanticAnalysis f = NULL ;
    if (classIndex < gExtensionMethodTable_structureDeclaration_functionSemanticAnalysis.count ()) {
      f = gExtensionMethodTable_structureDeclaration_functionSemanticAnalysis (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_structureDeclaration_functionSemanticAnalysis.count ()) {
           f = gExtensionMethodTable_structureDeclaration_functionSemanticAnalysis (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_structureDeclaration_functionSemanticAnalysis.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inStructureType, constin_inContext, io_ioTemporaries, io_ioIntermediateCodeStruct, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_structureDeclaration_functionSemanticAnalysis (const cPtr_structureDeclaration * inObject,
                                                                           const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inStructureType,
                                                                           const GALGAS_semanticContext constinArgument_inContext,
                                                                           GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                           GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_structureDeclaration * object = inObject ;
  macroValidSharedObject (object, cPtr_structureDeclaration) ;
  cEnumerator_functionDeclarationListAST enumerator_16549 (object->mAttribute_mFunctionDeclarationListAST, kEnumeration_up) ;
  while (enumerator_16549.hasCurrentObject ()) {
    GALGAS_bool var_warnIfUnused_16573 = GALGAS_bool (true) ;
    GALGAS_bool var_mutating_16597 = GALGAS_bool (false) ;
    GALGAS_bool var_accessProperties_16630 = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_16693 (enumerator_16549.current (HERE).mAttribute_mFunctionAttributeList, kEnumeration_up) ;
    while (enumerator_16693.hasCurrentObject ()) {
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_16693.current_mValue (HERE).mAttribute_string.objectCompare (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 428)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        const enumGalgasBool test_1 = var_warnIfUnused_16573.operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 429)).boolEnum () ;
        if (kBoolTrue == test_1) {
          inCompiler->emitSemanticError (enumerator_16693.current_mValue (HERE).getter_location (SOURCE_FILE ("type-structure-declaration.galgas", 430)), GALGAS_string ("duplicated @").add_operation (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 430)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 430)).add_operation (GALGAS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 430))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 430)) ;
        }
        var_warnIfUnused_16573 = GALGAS_bool (false) ;
      }else if (kBoolFalse == test_0) {
        const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_16693.current_mValue (HERE).mAttribute_string.objectCompare (function_userAccessAttribute (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 433)))).boolEnum () ;
        if (kBoolTrue == test_2) {
          const enumGalgasBool test_3 = var_accessProperties_16630.boolEnum () ;
          if (kBoolTrue == test_3) {
            inCompiler->emitSemanticError (enumerator_16693.current_mValue (HERE).getter_location (SOURCE_FILE ("type-structure-declaration.galgas", 435)), GALGAS_string ("duplicated @").add_operation (function_userAccessAttribute (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 435)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 435)).add_operation (GALGAS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 435))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 435)) ;
          }
          var_accessProperties_16630 = GALGAS_bool (true) ;
        }else if (kBoolFalse == test_2) {
          const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, enumerator_16693.current_mValue (HERE).mAttribute_string.objectCompare (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 438)))).boolEnum () ;
          if (kBoolTrue == test_4) {
            const enumGalgasBool test_5 = var_mutating_16597.boolEnum () ;
            if (kBoolTrue == test_5) {
              inCompiler->emitSemanticError (enumerator_16693.current_mValue (HERE).getter_location (SOURCE_FILE ("type-structure-declaration.galgas", 440)), GALGAS_string ("duplicated @").add_operation (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 440)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 440)).add_operation (GALGAS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 440))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 440)) ;
            }
            var_mutating_16597 = GALGAS_bool (true) ;
          }else if (kBoolFalse == test_4) {
            inCompiler->emitSemanticError (enumerator_16693.current_mValue (HERE).getter_location (SOURCE_FILE ("type-structure-declaration.galgas", 444)), GALGAS_string ("unknown attribute; available attributes are @").add_operation (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 444)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 444)).add_operation (GALGAS_string (", @"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 444)).add_operation (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 445)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 445)).add_operation (GALGAS_string (" and @"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 445)).add_operation (function_userAccessAttribute (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 445)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 445))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 444)) ;
          }
        }
      }
      enumerator_16693.gotoNextObject () ;
    }
    GALGAS_stringset var_modeSet_17585 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-structure-declaration.galgas", 448)) ;
    cEnumerator_lstringlist enumerator_17635 (enumerator_16549.current (HERE).mAttribute_mFunctionModeList, kEnumeration_up) ;
    while (enumerator_17635.hasCurrentObject ()) {
      var_modeSet_17585.addAssign_operation (enumerator_17635.current_mValue (HERE).mAttribute_string  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 450)) ;
      enumerator_17635.gotoNextObject () ;
    }
    const enumGalgasBool test_6 = var_modeSet_17585.getter_hasKey (function_userModeName (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 452)) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 452)).operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 452)).boolEnum () ;
    if (kBoolTrue == test_6) {
      const enumGalgasBool test_7 = var_accessProperties_16630.boolEnum () ;
      if (kBoolTrue == test_7) {
        inCompiler->emitSemanticError (enumerator_16549.current (HERE).mAttribute_mFunctionName.getter_location (SOURCE_FILE ("type-structure-declaration.galgas", 454)), GALGAS_string ("useless @").add_operation (function_userAccessAttribute (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 454)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 454)).add_operation (GALGAS_string (" attribute: function is never executed in `"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 454)).add_operation (function_userModeName (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 455)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 455)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 455))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 454)) ;
      }
      var_accessProperties_16630 = GALGAS_bool (true) ;
    }
    {
    routine_routineSemanticAnalysis (constinArgument_inStructureType, GALGAS_routineKind::constructor_function (SOURCE_FILE ("type-structure-declaration.galgas", 461)), enumerator_16549.current (HERE).mAttribute_mFunctionModeList, enumerator_16549.current (HERE).mAttribute_mFunctionName, enumerator_16549.current (HERE).mAttribute_mFunctionFormalArgumentList, enumerator_16549.current (HERE).mAttribute_mFunctionReturnTypeName, enumerator_16549.current (HERE).mAttribute_mFunctionInstructionList, enumerator_16549.current (HERE).mAttribute_mEndOfFunctionDeclaration, var_accessProperties_16630, var_mutating_16597, var_warnIfUnused_16573, GALGAS_bool (false), GALGAS_bool (false), GALGAS_accessKind::constructor_readWriteAccess (SOURCE_FILE ("type-structure-declaration.galgas", 473)), constinArgument_inContext, ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct, inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 459)) ;
    }
    enumerator_16549.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_structureDeclaration_functionSemanticAnalysis (void) {
  enterExtensionMethod_functionSemanticAnalysis (kTypeDescriptor_GALGAS_structureDeclaration.mSlotID,
                                                 extensionMethod_structureDeclaration_functionSemanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_structureDeclaration_functionSemanticAnalysis (void) {
  gExtensionMethodTable_structureDeclaration_functionSemanticAnalysis.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_structureDeclaration_functionSemanticAnalysis (defineExtensionMethod_structureDeclaration_functionSemanticAnalysis,
                                                                          freeExtensionMethod_structureDeclaration_functionSemanticAnalysis) ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterDeclarationListAST_2D_element::GALGAS_controlRegisterDeclarationListAST_2D_element (void) :
mAttribute_mRegisterNameList (),
mAttribute_mRegisterTypeName (),
mAttribute_mRegisterBitSliceList (),
mAttribute_mRegisterBitSliceListLocation () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterDeclarationListAST_2D_element::~ GALGAS_controlRegisterDeclarationListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterDeclarationListAST_2D_element::GALGAS_controlRegisterDeclarationListAST_2D_element (const GALGAS_controlRegisterNameList & inOperand0,
                                                                                                          const GALGAS_lstring & inOperand1,
                                                                                                          const GALGAS_controlRegisterBitSliceList & inOperand2,
                                                                                                          const GALGAS_location & inOperand3) :
mAttribute_mRegisterNameList (inOperand0),
mAttribute_mRegisterTypeName (inOperand1),
mAttribute_mRegisterBitSliceList (inOperand2),
mAttribute_mRegisterBitSliceListLocation (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterDeclarationListAST_2D_element GALGAS_controlRegisterDeclarationListAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_controlRegisterDeclarationListAST_2D_element (GALGAS_controlRegisterNameList::constructor_emptyList (HERE),
                                                              GALGAS_lstring::constructor_default (HERE),
                                                              GALGAS_controlRegisterBitSliceList::constructor_emptyList (HERE),
                                                              GALGAS_location::constructor_nowhere (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterDeclarationListAST_2D_element GALGAS_controlRegisterDeclarationListAST_2D_element::constructor_new (const GALGAS_controlRegisterNameList & inOperand0,
                                                                                                                          const GALGAS_lstring & inOperand1,
                                                                                                                          const GALGAS_controlRegisterBitSliceList & inOperand2,
                                                                                                                          const GALGAS_location & inOperand3 
                                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_controlRegisterDeclarationListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_controlRegisterDeclarationListAST_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_controlRegisterDeclarationListAST_2D_element::objectCompare (const GALGAS_controlRegisterDeclarationListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mRegisterNameList.objectCompare (inOperand.mAttribute_mRegisterNameList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mRegisterTypeName.objectCompare (inOperand.mAttribute_mRegisterTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mRegisterBitSliceList.objectCompare (inOperand.mAttribute_mRegisterBitSliceList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mRegisterBitSliceListLocation.objectCompare (inOperand.mAttribute_mRegisterBitSliceListLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_controlRegisterDeclarationListAST_2D_element::isValid (void) const {
  return mAttribute_mRegisterNameList.isValid () && mAttribute_mRegisterTypeName.isValid () && mAttribute_mRegisterBitSliceList.isValid () && mAttribute_mRegisterBitSliceListLocation.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_controlRegisterDeclarationListAST_2D_element::drop (void) {
  mAttribute_mRegisterNameList.drop () ;
  mAttribute_mRegisterTypeName.drop () ;
  mAttribute_mRegisterBitSliceList.drop () ;
  mAttribute_mRegisterBitSliceListLocation.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_controlRegisterDeclarationListAST_2D_element::description (C_String & ioString,
                                                                       const int32_t inIndentation) const {
  ioString << "<struct @controlRegisterDeclarationListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mRegisterNameList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mRegisterTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mRegisterBitSliceList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mRegisterBitSliceListLocation.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterNameList GALGAS_controlRegisterDeclarationListAST_2D_element::getter_mRegisterNameList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegisterNameList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_controlRegisterDeclarationListAST_2D_element::getter_mRegisterTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegisterTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterBitSliceList GALGAS_controlRegisterDeclarationListAST_2D_element::getter_mRegisterBitSliceList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegisterBitSliceList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_controlRegisterDeclarationListAST_2D_element::getter_mRegisterBitSliceListLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegisterBitSliceListLocation ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @controlRegisterDeclarationListAST-element type                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_controlRegisterDeclarationListAST_2D_element ("controlRegisterDeclarationListAST-element",
                                                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_controlRegisterDeclarationListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterDeclarationListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_controlRegisterDeclarationListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_controlRegisterDeclarationListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterDeclarationListAST_2D_element GALGAS_controlRegisterDeclarationListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                        C_Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterDeclarationListAST_2D_element result ;
  const GALGAS_controlRegisterDeclarationListAST_2D_element * p = (const GALGAS_controlRegisterDeclarationListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_controlRegisterDeclarationListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterDeclarationListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Extension method '@controlRegisterDeclarationListAST-element buildControlRegisterSliceMap'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_buildControlRegisterSliceMap (const GALGAS_controlRegisterDeclarationListAST_2D_element inObject,
                                                   GALGAS_semanticContext & ioArgument_ioContext,
                                                   GALGAS_unifiedTypeMap_2D_proxy & ioArgument_ioRegisterType,
                                                   const GALGAS_uint constinArgument_inRegisterBitCount,
                                                   GALGAS_controlRegisterFieldMap & outArgument_outRegisterFieldMap,
                                                   GALGAS_sliceMap & outArgument_outRegisterBitSliceMap,
                                                   GALGAS_controlRegisterFieldList & outArgument_outControlRegisterFieldList,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outRegisterFieldMap.drop () ; // Release 'out' argument
  outArgument_outRegisterBitSliceMap.drop () ; // Release 'out' argument
  outArgument_outControlRegisterFieldList.drop () ; // Release 'out' argument
  GALGAS_classConstantMap var_classConstantMap_9354 = GALGAS_classConstantMap::constructor_emptyMap (SOURCE_FILE ("declaration-control-register.galgas", 243)) ;
  outArgument_outRegisterFieldMap = GALGAS_controlRegisterFieldMap::constructor_emptyMap (SOURCE_FILE ("declaration-control-register.galgas", 244)) ;
  outArgument_outRegisterBitSliceMap = GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("declaration-control-register.galgas", 245)) ;
  outArgument_outControlRegisterFieldList = GALGAS_controlRegisterFieldList::constructor_emptyList (SOURCE_FILE ("declaration-control-register.galgas", 246)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, inObject.mAttribute_mRegisterBitSliceList.getter_length (SOURCE_FILE ("declaration-control-register.galgas", 247)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_uint var_shiftCount_9538 = GALGAS_uint ((uint32_t) 0U) ;
    cEnumerator_controlRegisterBitSliceList enumerator_9580 (inObject.mAttribute_mRegisterBitSliceList, kEnumeration_down) ;
    while (enumerator_9580.hasCurrentObject ()) {
      switch (enumerator_9580.current_mRegisterBitSlice (HERE).enumValue ()) {
      case GALGAS_controlRegisterBitSlice::kNotBuilt:
        break ;
      case GALGAS_controlRegisterBitSlice::kEnum_unusedBits:
        {
          const cEnumAssociatedValues_controlRegisterBitSlice_unusedBits * extractPtr_9775 = (const cEnumAssociatedValues_controlRegisterBitSlice_unusedBits *) (enumerator_9580.current_mRegisterBitSlice (HERE).unsafePointer ()) ;
          const GALGAS_lbigint extractedValue_count = extractPtr_9775->mAssociatedValue0 ;
          var_shiftCount_9538 = var_shiftCount_9538.add_operation (extractedValue_count.mAttribute_bigint.getter_uint (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 252)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 252)) ;
          outArgument_outControlRegisterFieldList.addAssign_operation (extractedValue_count.mAttribute_bigint.getter_uint (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 253)), GALGAS_string ("\xE2""\x80""\x94""")  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 253)) ;
        }
        break ;
      case GALGAS_controlRegisterBitSlice::kEnum_namedBit:
        {
          const cEnumAssociatedValues_controlRegisterBitSlice_namedBit * extractPtr_10923 = (const cEnumAssociatedValues_controlRegisterBitSlice_namedBit *) (enumerator_9580.current_mRegisterBitSlice (HERE).unsafePointer ()) ;
          const GALGAS_lstring extractedValue_name = extractPtr_10923->mAssociatedValue0 ;
          const GALGAS_lbigint extractedValue_count = extractPtr_10923->mAssociatedValue1 ;
          GALGAS_uint var_bitCount_9849 = extractedValue_count.mAttribute_bigint.getter_uint (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 255)) ;
          const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_bitCount_9849.objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
          if (kBoolTrue == test_1) {
            {
            var_classConstantMap_9354.setter_insertKey (extractedValue_name, GALGAS_objectIR::constructor_literalInteger (ioArgument_ioRegisterType, GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 257)).left_shift_operation (var_shiftCount_9538 COMMA_SOURCE_FILE ("declaration-control-register.galgas", 257))  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 257)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 257)) ;
            }
          }
          outArgument_outControlRegisterFieldList.addAssign_operation (var_bitCount_9849, extractedValue_name.mAttribute_string  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 259)) ;
          {
          outArgument_outRegisterFieldMap.setter_insertKey (extractedValue_name, var_shiftCount_9538, var_bitCount_9849, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 260)) ;
          }
          GALGAS_sliceMap var_registerSubMap_10228 = GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("declaration-control-register.galgas", 265)) ;
          {
          var_registerSubMap_10228.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("shifted"), extractedValue_name.mAttribute_location  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 268)), GALGAS_llvmBinaryOperation::constructor_lshr (SOURCE_FILE ("declaration-control-register.galgas", 269)), var_shiftCount_9538.getter_bigint (SOURCE_FILE ("declaration-control-register.galgas", 270)), GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("declaration-control-register.galgas", 271)), ioArgument_ioRegisterType, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 267)) ;
          }
          {
          var_registerSubMap_10228.setter_insertKey (GALGAS_lstring::constructor_new (function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 276)), extractedValue_name.mAttribute_location  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 276)), GALGAS_llvmBinaryOperation::constructor_icmp_5F_ne (SOURCE_FILE ("declaration-control-register.galgas", 277)), GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 278)), GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("declaration-control-register.galgas", 279)), ioArgument_ioContext.mAttribute_mBooleanType, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 275)) ;
          }
          GALGAS_bigint var_mask_10686 = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 283)).left_shift_operation (var_bitCount_9849 COMMA_SOURCE_FILE ("declaration-control-register.galgas", 283)).substract_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 283)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 283)).left_shift_operation (var_shiftCount_9538 COMMA_SOURCE_FILE ("declaration-control-register.galgas", 283)) ;
          {
          outArgument_outRegisterBitSliceMap.setter_insertKey (extractedValue_name, GALGAS_llvmBinaryOperation::constructor_and (SOURCE_FILE ("declaration-control-register.galgas", 286)), var_mask_10686, var_registerSubMap_10228, ioArgument_ioRegisterType, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 284)) ;
          }
          var_shiftCount_9538 = var_shiftCount_9538.add_operation (var_bitCount_9849, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 291)) ;
        }
        break ;
      }
      enumerator_9580.gotoNextObject () ;
    }
    const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, constinArgument_inRegisterBitCount.objectCompare (var_shiftCount_9538)).boolEnum () ;
    if (kBoolTrue == test_2) {
      inCompiler->emitSemanticError (inObject.mAttribute_mRegisterBitSliceListLocation, GALGAS_string ("total bit slice count is ").add_operation (var_shiftCount_9538.getter_string (SOURCE_FILE ("declaration-control-register.galgas", 297)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 297)).add_operation (GALGAS_string (" (should be "), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 297)).add_operation (constinArgument_inRegisterBitCount.getter_string (SOURCE_FILE ("declaration-control-register.galgas", 297)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 297)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 297))  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 296)) ;
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Extension method '@controlRegisterDeclarationListAST-element enterControlRegistersInContext'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_enterControlRegistersInContext (const GALGAS_controlRegisterDeclarationListAST_2D_element inObject,
                                                     GALGAS_semanticContext & ioArgument_ioContext,
                                                     GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_proxy var_registerType_11550 ;
  GALGAS_uint var_registerBitCount_11581 ;
  const GALGAS_controlRegisterDeclarationListAST_2D_element temp_0 = inObject ;
  extensionMethod_controlRegisterType (temp_0, ioArgument_ioContext, var_registerType_11550, var_registerBitCount_11581, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 308)) ;
  GALGAS_controlRegisterFieldMap var_registerFieldMap_11749 ;
  GALGAS_sliceMap var_registerBitSliceMap_11778 ;
  GALGAS_controlRegisterFieldList var_controlRegisterFieldList_11812 ;
  const GALGAS_controlRegisterDeclarationListAST_2D_element temp_1 = inObject ;
  extensionMethod_buildControlRegisterSliceMap (temp_1, ioArgument_ioContext, var_registerType_11550, var_registerBitCount_11581, var_registerFieldMap_11749, var_registerBitSliceMap_11778, var_controlRegisterFieldList_11812, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 310)) ;
  GALGAS_bigint var_maxRegisterAddress_11878 = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 319)).left_shift_operation (ioArgument_ioContext.mAttribute_mPointerSize COMMA_SOURCE_FILE ("declaration-control-register.galgas", 319)).substract_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 319)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 319)) ;
  cEnumerator_controlRegisterNameList enumerator_11952 (inObject.mAttribute_mRegisterNameList, kEnumeration_up) ;
  while (enumerator_11952.hasCurrentObject ()) {
    GALGAS_bool var_isReadOnly_12000 = GALGAS_bool (false) ;
    GALGAS_bool var_isAccessibleInUserMode_12039 = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_12088 (enumerator_11952.current (HERE).mAttribute_mAttributeList, kEnumeration_up) ;
    while (enumerator_12088.hasCurrentObject ()) {
      const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_12088.current_mValue (HERE).mAttribute_string.objectCompare (GALGAS_string ("ro"))).boolEnum () ;
      if (kBoolTrue == test_2) {
        const enumGalgasBool test_3 = var_isReadOnly_12000.boolEnum () ;
        if (kBoolTrue == test_3) {
          inCompiler->emitSemanticError (enumerator_12088.current_mValue (HERE).getter_location (SOURCE_FILE ("declaration-control-register.galgas", 327)), GALGAS_string ("duplicated attribute")  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 327)) ;
        }else if (kBoolFalse == test_3) {
          var_isReadOnly_12000 = GALGAS_bool (true) ;
        }
      }else if (kBoolFalse == test_2) {
        const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, enumerator_12088.current_mValue (HERE).mAttribute_string.objectCompare (function_userModeName (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 331)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          const enumGalgasBool test_5 = var_isAccessibleInUserMode_12039.boolEnum () ;
          if (kBoolTrue == test_5) {
            inCompiler->emitSemanticError (enumerator_12088.current_mValue (HERE).getter_location (SOURCE_FILE ("declaration-control-register.galgas", 333)), GALGAS_string ("duplicated attribute")  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 333)) ;
          }else if (kBoolFalse == test_5) {
            var_isAccessibleInUserMode_12039 = GALGAS_bool (true) ;
          }
        }else if (kBoolFalse == test_4) {
          inCompiler->emitSemanticError (enumerator_12088.current_mValue (HERE).getter_location (SOURCE_FILE ("declaration-control-register.galgas", 338)), GALGAS_string ("only @ro (read only) and @user (accessible in `user mode) attributes are accepted here")  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 338)) ;
        }
      }
      enumerator_12088.gotoNextObject () ;
    }
    GALGAS_objectIR var_addressExpressionResult_12862 ;
    callExtensionMethod_analyzeStaticExpression ((const cPtr_expressionAST *) enumerator_11952.current (HERE).mAttribute_mRegisterAddress.ptr (), enumerator_11952.current (HERE).mAttribute_mRegisterAddressLocation, ioArgument_ioContext, ioArgument_ioGlobalLiteralStringMap, var_addressExpressionResult_12862, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 342)) ;
    GALGAS_bigint var_registerAddress_12896 ;
    const enumGalgasBool test_6 = var_addressExpressionResult_12862.getter_isLiteralInteger (SOURCE_FILE ("declaration-control-register.galgas", 349)).operator_not (SOURCE_FILE ("declaration-control-register.galgas", 349)).boolEnum () ;
    if (kBoolTrue == test_6) {
      inCompiler->emitSemanticError (enumerator_11952.current (HERE).mAttribute_mRegisterAddressLocation, GALGAS_string ("control register address is not a static integer expression")  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 350)) ;
      var_registerAddress_12896.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_6) {
      GALGAS_unifiedTypeMap_2D_proxy joker_13156_1 ; // Joker input parameter
      var_addressExpressionResult_12862.method_literalInteger (joker_13156_1, var_registerAddress_12896, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 354)) ;
      const enumGalgasBool test_7 = GALGAS_bool (kIsStrictSup, var_registerAddress_12896.objectCompare (var_maxRegisterAddress_11878)).boolEnum () ;
      if (kBoolTrue == test_7) {
        inCompiler->emitSemanticError (enumerator_11952.current (HERE).mAttribute_mRegisterAddressLocation, GALGAS_string ("register address should be lower or equal to ").add_operation (var_maxRegisterAddress_11878.getter_hexString (SOURCE_FILE ("declaration-control-register.galgas", 358)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 358))  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 357)) ;
      }
    }
    GALGAS_bigint var_arraySize_13441 ;
    GALGAS_uint var_elementArraySize_13468 ;
    switch (enumerator_11952.current (HERE).mAttribute_mControlRegisterKind.enumValue ()) {
    case GALGAS_controlRegisterKind::kNotBuilt:
      break ;
    case GALGAS_controlRegisterKind::kEnum_scalar:
      {
        var_arraySize_13441 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 365)) ;
        var_elementArraySize_13468 = GALGAS_uint ((uint32_t) 0U) ;
      }
      break ;
    case GALGAS_controlRegisterKind::kEnum_registerArray:
      {
        const cEnumAssociatedValues_controlRegisterKind_registerArray * extractPtr_15541 = (const cEnumAssociatedValues_controlRegisterKind_registerArray *) (enumerator_11952.current (HERE).mAttribute_mControlRegisterKind.unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_arraySizeExpression = extractPtr_15541->mAssociatedValue0 ;
        const GALGAS_location extractedValue_arraySizeLocation = extractPtr_15541->mAssociatedValue1 ;
        const GALGAS_expressionAST extractedValue_arrayElementSizeExpression = extractPtr_15541->mAssociatedValue2 ;
        const GALGAS_location extractedValue_arrayElementSizeLocation = extractPtr_15541->mAssociatedValue3 ;
        GALGAS_objectIR var_sizeExpressionResult_14035 ;
        callExtensionMethod_analyzeStaticExpression ((const cPtr_expressionAST *) extractedValue_arraySizeExpression.ptr (), extractedValue_arraySizeLocation, ioArgument_ioContext, ioArgument_ioGlobalLiteralStringMap, var_sizeExpressionResult_14035, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 370)) ;
        const enumGalgasBool test_8 = var_sizeExpressionResult_14035.getter_isLiteralInteger (SOURCE_FILE ("declaration-control-register.galgas", 376)).operator_not (SOURCE_FILE ("declaration-control-register.galgas", 376)).boolEnum () ;
        if (kBoolTrue == test_8) {
          inCompiler->emitSemanticError (extractedValue_arraySizeLocation, GALGAS_string ("control register address is not a static integer expression")  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 377)) ;
          var_arraySize_13441.drop () ; // Release error dropped variable
        }else if (kBoolFalse == test_8) {
          GALGAS_unifiedTypeMap_2D_proxy joker_14267_1 ; // Joker input parameter
          var_sizeExpressionResult_14035.method_literalInteger (joker_14267_1, var_arraySize_13441, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 379)) ;
          const enumGalgasBool test_9 = GALGAS_bool (kIsStrictInf, var_arraySize_13441.objectCompare (GALGAS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 380)))).boolEnum () ;
          if (kBoolTrue == test_9) {
            inCompiler->emitSemanticError (extractedValue_arraySizeLocation, GALGAS_string ("control register array size should be a static integer expression >= 2, equal to a power of 2")  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 381)) ;
            var_arraySize_13441.drop () ; // Release error dropped variable
          }else if (kBoolFalse == test_9) {
            GALGAS_uint var_powerOfTwoForArraySize_14536 = var_arraySize_13441.substract_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 385)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 385)).getter_bitCountForUnsignedRepresentation (SOURCE_FILE ("declaration-control-register.galgas", 385)) ;
            const enumGalgasBool test_10 = GALGAS_bool (kIsNotEqual, var_arraySize_13441.objectCompare (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 386)).left_shift_operation (var_powerOfTwoForArraySize_14536 COMMA_SOURCE_FILE ("declaration-control-register.galgas", 386)))).boolEnum () ;
            if (kBoolTrue == test_10) {
              inCompiler->emitSemanticError (extractedValue_arraySizeLocation, GALGAS_string ("control register array size should be a static integer expression >= 2, equal to a power of 2")  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 387)) ;
              var_arraySize_13441.drop () ; // Release error dropped variable
            }
          }
        }
        GALGAS_objectIR var_elementArraySizeExpressionResult_15155 ;
        callExtensionMethod_analyzeStaticExpression ((const cPtr_expressionAST *) extractedValue_arrayElementSizeExpression.ptr (), extractedValue_arrayElementSizeLocation, ioArgument_ioContext, ioArgument_ioGlobalLiteralStringMap, var_elementArraySizeExpressionResult_15155, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 394)) ;
        const enumGalgasBool test_11 = var_elementArraySizeExpressionResult_15155.getter_isLiteralInteger (SOURCE_FILE ("declaration-control-register.galgas", 400)).operator_not (SOURCE_FILE ("declaration-control-register.galgas", 400)).boolEnum () ;
        if (kBoolTrue == test_11) {
          inCompiler->emitSemanticError (extractedValue_arrayElementSizeLocation, GALGAS_string ("element size is not a static integer expression")  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 401)) ;
          var_elementArraySize_13468.drop () ; // Release error dropped variable
        }else if (kBoolFalse == test_11) {
          GALGAS_bigint var_elementArraySizeAsBigInt_15471 ;
          GALGAS_unifiedTypeMap_2D_proxy joker_15433_1 ; // Joker input parameter
          var_elementArraySizeExpressionResult_15155.method_literalInteger (joker_15433_1, var_elementArraySizeAsBigInt_15471, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 405)) ;
          var_elementArraySize_13468 = var_elementArraySizeAsBigInt_15471.getter_uint (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 406)) ;
        }
      }
      break ;
    }
    {
    ioArgument_ioContext.mAttribute_mControlRegisterMap.setter_insertKey (enumerator_11952.current (HERE).mAttribute_mRegisterName, var_registerType_11550, var_isReadOnly_12000, var_isAccessibleInUserMode_12039, var_registerBitSliceMap_11778, var_registerFieldMap_11749, var_registerAddress_12896, var_controlRegisterFieldList_11812, var_registerBitCount_11581, var_arraySize_13441.getter_uint (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 419)), var_elementArraySize_13468, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 409)) ;
    }
    enumerator_11952.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalVarDeclarationList_2D_element::GALGAS_globalVarDeclarationList_2D_element (void) :
mAttribute_mTypeName (),
mAttribute_mVarName (),
mAttribute_mSourceExpression (),
mAttribute_mAllowedProcList (),
mAttribute_mAllowedInitList (),
mAttribute_mAllowedPanicList (),
mAttribute_mAllowedGuardList (),
mAttribute_mAllowedISRList (),
mAttribute_mAllowedTaskList (),
mAttribute_mAllowedAccessToAll () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalVarDeclarationList_2D_element::~ GALGAS_globalVarDeclarationList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalVarDeclarationList_2D_element::GALGAS_globalVarDeclarationList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                        const GALGAS_lstring & inOperand1,
                                                                                        const GALGAS_expressionAST & inOperand2,
                                                                                        const GALGAS_allowedRoutineList & inOperand3,
                                                                                        const GALGAS_allowedInitList & inOperand4,
                                                                                        const GALGAS_allowedPanicList & inOperand5,
                                                                                        const GALGAS_allowedGuardList & inOperand6,
                                                                                        const GALGAS_allowedISRList & inOperand7,
                                                                                        const GALGAS_allowedTaskList & inOperand8,
                                                                                        const GALGAS_bool & inOperand9) :
mAttribute_mTypeName (inOperand0),
mAttribute_mVarName (inOperand1),
mAttribute_mSourceExpression (inOperand2),
mAttribute_mAllowedProcList (inOperand3),
mAttribute_mAllowedInitList (inOperand4),
mAttribute_mAllowedPanicList (inOperand5),
mAttribute_mAllowedGuardList (inOperand6),
mAttribute_mAllowedISRList (inOperand7),
mAttribute_mAllowedTaskList (inOperand8),
mAttribute_mAllowedAccessToAll (inOperand9) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalVarDeclarationList_2D_element GALGAS_globalVarDeclarationList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                        const GALGAS_lstring & inOperand1,
                                                                                                        const GALGAS_expressionAST & inOperand2,
                                                                                                        const GALGAS_allowedRoutineList & inOperand3,
                                                                                                        const GALGAS_allowedInitList & inOperand4,
                                                                                                        const GALGAS_allowedPanicList & inOperand5,
                                                                                                        const GALGAS_allowedGuardList & inOperand6,
                                                                                                        const GALGAS_allowedISRList & inOperand7,
                                                                                                        const GALGAS_allowedTaskList & inOperand8,
                                                                                                        const GALGAS_bool & inOperand9 
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_globalVarDeclarationList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid ()) {
    result = GALGAS_globalVarDeclarationList_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_globalVarDeclarationList_2D_element::objectCompare (const GALGAS_globalVarDeclarationList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mTypeName.objectCompare (inOperand.mAttribute_mTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mVarName.objectCompare (inOperand.mAttribute_mVarName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSourceExpression.objectCompare (inOperand.mAttribute_mSourceExpression) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mAllowedProcList.objectCompare (inOperand.mAttribute_mAllowedProcList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mAllowedInitList.objectCompare (inOperand.mAttribute_mAllowedInitList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mAllowedPanicList.objectCompare (inOperand.mAttribute_mAllowedPanicList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mAllowedGuardList.objectCompare (inOperand.mAttribute_mAllowedGuardList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mAllowedISRList.objectCompare (inOperand.mAttribute_mAllowedISRList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mAllowedTaskList.objectCompare (inOperand.mAttribute_mAllowedTaskList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mAllowedAccessToAll.objectCompare (inOperand.mAttribute_mAllowedAccessToAll) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_globalVarDeclarationList_2D_element::isValid (void) const {
  return mAttribute_mTypeName.isValid () && mAttribute_mVarName.isValid () && mAttribute_mSourceExpression.isValid () && mAttribute_mAllowedProcList.isValid () && mAttribute_mAllowedInitList.isValid () && mAttribute_mAllowedPanicList.isValid () && mAttribute_mAllowedGuardList.isValid () && mAttribute_mAllowedISRList.isValid () && mAttribute_mAllowedTaskList.isValid () && mAttribute_mAllowedAccessToAll.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_globalVarDeclarationList_2D_element::drop (void) {
  mAttribute_mTypeName.drop () ;
  mAttribute_mVarName.drop () ;
  mAttribute_mSourceExpression.drop () ;
  mAttribute_mAllowedProcList.drop () ;
  mAttribute_mAllowedInitList.drop () ;
  mAttribute_mAllowedPanicList.drop () ;
  mAttribute_mAllowedGuardList.drop () ;
  mAttribute_mAllowedISRList.drop () ;
  mAttribute_mAllowedTaskList.drop () ;
  mAttribute_mAllowedAccessToAll.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_globalVarDeclarationList_2D_element::description (C_String & ioString,
                                                              const int32_t inIndentation) const {
  ioString << "<struct @globalVarDeclarationList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mVarName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSourceExpression.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mAllowedProcList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mAllowedInitList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mAllowedPanicList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mAllowedGuardList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mAllowedISRList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mAllowedTaskList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mAllowedAccessToAll.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_globalVarDeclarationList_2D_element::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_globalVarDeclarationList_2D_element::getter_mVarName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mVarName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST GALGAS_globalVarDeclarationList_2D_element::getter_mSourceExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSourceExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedRoutineList GALGAS_globalVarDeclarationList_2D_element::getter_mAllowedProcList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAllowedProcList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedInitList GALGAS_globalVarDeclarationList_2D_element::getter_mAllowedInitList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAllowedInitList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedPanicList GALGAS_globalVarDeclarationList_2D_element::getter_mAllowedPanicList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAllowedPanicList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedGuardList GALGAS_globalVarDeclarationList_2D_element::getter_mAllowedGuardList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAllowedGuardList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedISRList GALGAS_globalVarDeclarationList_2D_element::getter_mAllowedISRList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAllowedISRList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedTaskList GALGAS_globalVarDeclarationList_2D_element::getter_mAllowedTaskList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAllowedTaskList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_globalVarDeclarationList_2D_element::getter_mAllowedAccessToAll (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAllowedAccessToAll ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @globalVarDeclarationList-element type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_globalVarDeclarationList_2D_element ("globalVarDeclarationList-element",
                                                            NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_globalVarDeclarationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_globalVarDeclarationList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_globalVarDeclarationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_globalVarDeclarationList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalVarDeclarationList_2D_element GALGAS_globalVarDeclarationList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_globalVarDeclarationList_2D_element result ;
  const GALGAS_globalVarDeclarationList_2D_element * p = (const GALGAS_globalVarDeclarationList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_globalVarDeclarationList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("globalVarDeclarationList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Extension method '@globalVarDeclarationList-element semanticAnalysis'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_semanticAnalysis (const GALGAS_globalVarDeclarationList_2D_element inObject,
                                       const GALGAS_semanticContext constinArgument_inContext,
                                       GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                       C_Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_proxy var_inferredType_14023 ;
  GALGAS_stringset var_executionModeSet_14066 ;
  GALGAS_allowedRoutineMap var_allowedProcedureMap_14120 ;
  GALGAS_allowedGuardMap var_allowedGuardMap_14168 ;
  GALGAS_allowedISRMap var_allowedISRMap_14212 ;
  GALGAS_allowedTaskMap var_allowedTaskMap_14258 ;
  GALGAS_objectIR var_expressionGeneratedCode_14305 ;
  GALGAS_bool var_isConstant_14343 ;
  GALGAS_bool joker_14368 ; // Joker input parameter
  constinArgument_inContext.mAttribute_mGlobalVariableMap.method_searchKey (inObject.mAttribute_mVarName, var_inferredType_14023, var_executionModeSet_14066, var_allowedProcedureMap_14120, var_allowedGuardMap_14168, var_allowedISRMap_14212, var_allowedTaskMap_14258, var_expressionGeneratedCode_14305, var_isConstant_14343, joker_14368, inCompiler COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 382)) ;
  {
  ioArgument_ioIntermediateCodeStruct.mAttribute_mGlobalVariableMap.setter_insertKey (inObject.mAttribute_mVarName, var_inferredType_14023, GALGAS_bool (kIsStrictSup, var_executionModeSet_14066.getter_count (SOURCE_FILE ("declaration-global-variable.galgas", 397)).objectCompare (GALGAS_uint ((uint32_t) 1U))), var_expressionGeneratedCode_14305, inCompiler COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 394)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalVariableMapIR_2D_element::GALGAS_globalVariableMapIR_2D_element (void) :
mAttribute_lkey (),
mAttribute_mType (),
mAttribute_mGenerateVolatile (),
mAttribute_mInitialValue () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalVariableMapIR_2D_element::~ GALGAS_globalVariableMapIR_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalVariableMapIR_2D_element::GALGAS_globalVariableMapIR_2D_element (const GALGAS_lstring & inOperand0,
                                                                              const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                              const GALGAS_bool & inOperand2,
                                                                              const GALGAS_objectIR & inOperand3) :
mAttribute_lkey (inOperand0),
mAttribute_mType (inOperand1),
mAttribute_mGenerateVolatile (inOperand2),
mAttribute_mInitialValue (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalVariableMapIR_2D_element GALGAS_globalVariableMapIR_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                              const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                                              const GALGAS_bool & inOperand2,
                                                                                              const GALGAS_objectIR & inOperand3 
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_globalVariableMapIR_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_globalVariableMapIR_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_globalVariableMapIR_2D_element::objectCompare (const GALGAS_globalVariableMapIR_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mType.objectCompare (inOperand.mAttribute_mType) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mGenerateVolatile.objectCompare (inOperand.mAttribute_mGenerateVolatile) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInitialValue.objectCompare (inOperand.mAttribute_mInitialValue) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_globalVariableMapIR_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mType.isValid () && mAttribute_mGenerateVolatile.isValid () && mAttribute_mInitialValue.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_globalVariableMapIR_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mType.drop () ;
  mAttribute_mGenerateVolatile.drop () ;
  mAttribute_mInitialValue.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_globalVariableMapIR_2D_element::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "<struct @globalVariableMapIR-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mGenerateVolatile.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInitialValue.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_globalVariableMapIR_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_globalVariableMapIR_2D_element::getter_mType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_globalVariableMapIR_2D_element::getter_mGenerateVolatile (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mGenerateVolatile ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_globalVariableMapIR_2D_element::getter_mInitialValue (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInitialValue ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @globalVariableMapIR-element type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_globalVariableMapIR_2D_element ("globalVariableMapIR-element",
                                                       NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_globalVariableMapIR_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_globalVariableMapIR_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_globalVariableMapIR_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_globalVariableMapIR_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalVariableMapIR_2D_element GALGAS_globalVariableMapIR_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_globalVariableMapIR_2D_element result ;
  const GALGAS_globalVariableMapIR_2D_element * p = (const GALGAS_globalVariableMapIR_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_globalVariableMapIR_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("globalVariableMapIR-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleListIR_2D_element::GALGAS_moduleListIR_2D_element (void) :
mAttribute_mModuleName (),
mAttribute_mType (),
mAttribute_mInitialValueList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleListIR_2D_element::~ GALGAS_moduleListIR_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleListIR_2D_element::GALGAS_moduleListIR_2D_element (const GALGAS_string & inOperand0,
                                                                const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                const GALGAS_operandIRList & inOperand2) :
mAttribute_mModuleName (inOperand0),
mAttribute_mType (inOperand1),
mAttribute_mInitialValueList (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleListIR_2D_element GALGAS_moduleListIR_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_moduleListIR_2D_element (GALGAS_string::constructor_default (HERE),
                                         GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                         GALGAS_operandIRList::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleListIR_2D_element GALGAS_moduleListIR_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                                const GALGAS_operandIRList & inOperand2 
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_moduleListIR_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_moduleListIR_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_moduleListIR_2D_element::objectCompare (const GALGAS_moduleListIR_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mModuleName.objectCompare (inOperand.mAttribute_mModuleName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mType.objectCompare (inOperand.mAttribute_mType) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInitialValueList.objectCompare (inOperand.mAttribute_mInitialValueList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_moduleListIR_2D_element::isValid (void) const {
  return mAttribute_mModuleName.isValid () && mAttribute_mType.isValid () && mAttribute_mInitialValueList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_moduleListIR_2D_element::drop (void) {
  mAttribute_mModuleName.drop () ;
  mAttribute_mType.drop () ;
  mAttribute_mInitialValueList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_moduleListIR_2D_element::description (C_String & ioString,
                                                  const int32_t inIndentation) const {
  ioString << "<struct @moduleListIR-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mModuleName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInitialValueList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_moduleListIR_2D_element::getter_mModuleName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mModuleName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_moduleListIR_2D_element::getter_mType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandIRList GALGAS_moduleListIR_2D_element::getter_mInitialValueList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInitialValueList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @moduleListIR-element type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_moduleListIR_2D_element ("moduleListIR-element",
                                                NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_moduleListIR_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_moduleListIR_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_moduleListIR_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_moduleListIR_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleListIR_2D_element GALGAS_moduleListIR_2D_element::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_moduleListIR_2D_element result ;
  const GALGAS_moduleListIR_2D_element * p = (const GALGAS_moduleListIR_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_moduleListIR_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("moduleListIR-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskVarListAST_2D_element::GALGAS_taskVarListAST_2D_element (void) :
mAttribute_mVarName (),
mAttribute_mVarTypeName (),
mAttribute_mVarInitExpression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskVarListAST_2D_element::~ GALGAS_taskVarListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskVarListAST_2D_element::GALGAS_taskVarListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                    const GALGAS_lstring & inOperand1,
                                                                    const GALGAS_expressionAST & inOperand2) :
mAttribute_mVarName (inOperand0),
mAttribute_mVarTypeName (inOperand1),
mAttribute_mVarInitExpression (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskVarListAST_2D_element GALGAS_taskVarListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                    const GALGAS_lstring & inOperand1,
                                                                                    const GALGAS_expressionAST & inOperand2 
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_taskVarListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_taskVarListAST_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_taskVarListAST_2D_element::objectCompare (const GALGAS_taskVarListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mVarName.objectCompare (inOperand.mAttribute_mVarName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mVarTypeName.objectCompare (inOperand.mAttribute_mVarTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mVarInitExpression.objectCompare (inOperand.mAttribute_mVarInitExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_taskVarListAST_2D_element::isValid (void) const {
  return mAttribute_mVarName.isValid () && mAttribute_mVarTypeName.isValid () && mAttribute_mVarInitExpression.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskVarListAST_2D_element::drop (void) {
  mAttribute_mVarName.drop () ;
  mAttribute_mVarTypeName.drop () ;
  mAttribute_mVarInitExpression.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskVarListAST_2D_element::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "<struct @taskVarListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mVarName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mVarTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mVarInitExpression.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_taskVarListAST_2D_element::getter_mVarName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mVarName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_taskVarListAST_2D_element::getter_mVarTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mVarTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST GALGAS_taskVarListAST_2D_element::getter_mVarInitExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mVarInitExpression ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @taskVarListAST-element type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_taskVarListAST_2D_element ("taskVarListAST-element",
                                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_taskVarListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_taskVarListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_taskVarListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_taskVarListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskVarListAST_2D_element GALGAS_taskVarListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_taskVarListAST_2D_element result ;
  const GALGAS_taskVarListAST_2D_element * p = (const GALGAS_taskVarListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_taskVarListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("taskVarListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskList_2D_element::GALGAS_taskList_2D_element (void) :
mAttribute_mTaskName (),
mAttribute_mPriority (),
mAttribute_mStackSize (),
mAttribute_mVarList (),
mAttribute_mTaskProcList (),
mAttribute_mTaskInitListAST (),
mAttribute_mGuardedCommandList (),
mAttribute_mEndOfTaskDeclaration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskList_2D_element::~ GALGAS_taskList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskList_2D_element::GALGAS_taskList_2D_element (const GALGAS_lstring & inOperand0,
                                                        const GALGAS_lbigint & inOperand1,
                                                        const GALGAS_lbigint & inOperand2,
                                                        const GALGAS_taskVarListAST & inOperand3,
                                                        const GALGAS_functionDeclarationListAST & inOperand4,
                                                        const GALGAS_taskInitListAST & inOperand5,
                                                        const GALGAS_syncInstructionBranchList & inOperand6,
                                                        const GALGAS_location & inOperand7) :
mAttribute_mTaskName (inOperand0),
mAttribute_mPriority (inOperand1),
mAttribute_mStackSize (inOperand2),
mAttribute_mVarList (inOperand3),
mAttribute_mTaskProcList (inOperand4),
mAttribute_mTaskInitListAST (inOperand5),
mAttribute_mGuardedCommandList (inOperand6),
mAttribute_mEndOfTaskDeclaration (inOperand7) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskList_2D_element GALGAS_taskList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_taskList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                     GALGAS_lbigint::constructor_default (HERE),
                                     GALGAS_lbigint::constructor_default (HERE),
                                     GALGAS_taskVarListAST::constructor_emptyList (HERE),
                                     GALGAS_functionDeclarationListAST::constructor_emptyList (HERE),
                                     GALGAS_taskInitListAST::constructor_emptyList (HERE),
                                     GALGAS_syncInstructionBranchList::constructor_emptyList (HERE),
                                     GALGAS_location::constructor_nowhere (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskList_2D_element GALGAS_taskList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                        const GALGAS_lbigint & inOperand1,
                                                                        const GALGAS_lbigint & inOperand2,
                                                                        const GALGAS_taskVarListAST & inOperand3,
                                                                        const GALGAS_functionDeclarationListAST & inOperand4,
                                                                        const GALGAS_taskInitListAST & inOperand5,
                                                                        const GALGAS_syncInstructionBranchList & inOperand6,
                                                                        const GALGAS_location & inOperand7 
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_taskList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid ()) {
    result = GALGAS_taskList_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_taskList_2D_element::objectCompare (const GALGAS_taskList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mTaskName.objectCompare (inOperand.mAttribute_mTaskName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mPriority.objectCompare (inOperand.mAttribute_mPriority) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mStackSize.objectCompare (inOperand.mAttribute_mStackSize) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mVarList.objectCompare (inOperand.mAttribute_mVarList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mTaskProcList.objectCompare (inOperand.mAttribute_mTaskProcList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mTaskInitListAST.objectCompare (inOperand.mAttribute_mTaskInitListAST) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mGuardedCommandList.objectCompare (inOperand.mAttribute_mGuardedCommandList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mEndOfTaskDeclaration.objectCompare (inOperand.mAttribute_mEndOfTaskDeclaration) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_taskList_2D_element::isValid (void) const {
  return mAttribute_mTaskName.isValid () && mAttribute_mPriority.isValid () && mAttribute_mStackSize.isValid () && mAttribute_mVarList.isValid () && mAttribute_mTaskProcList.isValid () && mAttribute_mTaskInitListAST.isValid () && mAttribute_mGuardedCommandList.isValid () && mAttribute_mEndOfTaskDeclaration.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskList_2D_element::drop (void) {
  mAttribute_mTaskName.drop () ;
  mAttribute_mPriority.drop () ;
  mAttribute_mStackSize.drop () ;
  mAttribute_mVarList.drop () ;
  mAttribute_mTaskProcList.drop () ;
  mAttribute_mTaskInitListAST.drop () ;
  mAttribute_mGuardedCommandList.drop () ;
  mAttribute_mEndOfTaskDeclaration.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskList_2D_element::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "<struct @taskList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mTaskName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mPriority.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mStackSize.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mVarList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mTaskProcList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mTaskInitListAST.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mGuardedCommandList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mEndOfTaskDeclaration.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_taskList_2D_element::getter_mTaskName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTaskName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbigint GALGAS_taskList_2D_element::getter_mPriority (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPriority ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbigint GALGAS_taskList_2D_element::getter_mStackSize (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mStackSize ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskVarListAST GALGAS_taskList_2D_element::getter_mVarList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mVarList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionDeclarationListAST GALGAS_taskList_2D_element::getter_mTaskProcList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTaskProcList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskInitListAST GALGAS_taskList_2D_element::getter_mTaskInitListAST (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTaskInitListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syncInstructionBranchList GALGAS_taskList_2D_element::getter_mGuardedCommandList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mGuardedCommandList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_taskList_2D_element::getter_mEndOfTaskDeclaration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfTaskDeclaration ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @taskList-element type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_taskList_2D_element ("taskList-element",
                                            NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_taskList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_taskList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_taskList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_taskList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskList_2D_element GALGAS_taskList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_taskList_2D_element result ;
  const GALGAS_taskList_2D_element * p = (const GALGAS_taskList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_taskList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("taskList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_panicClauseListAST_2D_element::GALGAS_panicClauseListAST_2D_element (void) :
mAttribute_mPanicClauseName (),
mAttribute_mPanicInstructionList (),
mAttribute_mEndOfPanicInstructions (),
mAttribute_mPriority (),
mAttribute_mLocationPriority () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_panicClauseListAST_2D_element::~ GALGAS_panicClauseListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_panicClauseListAST_2D_element::GALGAS_panicClauseListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                            const GALGAS_instructionListAST & inOperand1,
                                                                            const GALGAS_location & inOperand2,
                                                                            const GALGAS_lbigint & inOperand3,
                                                                            const GALGAS_location & inOperand4) :
mAttribute_mPanicClauseName (inOperand0),
mAttribute_mPanicInstructionList (inOperand1),
mAttribute_mEndOfPanicInstructions (inOperand2),
mAttribute_mPriority (inOperand3),
mAttribute_mLocationPriority (inOperand4) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_panicClauseListAST_2D_element GALGAS_panicClauseListAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_panicClauseListAST_2D_element (GALGAS_lstring::constructor_default (HERE),
                                               GALGAS_instructionListAST::constructor_emptyList (HERE),
                                               GALGAS_location::constructor_nowhere (HERE),
                                               GALGAS_lbigint::constructor_default (HERE),
                                               GALGAS_location::constructor_nowhere (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_panicClauseListAST_2D_element GALGAS_panicClauseListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                            const GALGAS_instructionListAST & inOperand1,
                                                                                            const GALGAS_location & inOperand2,
                                                                                            const GALGAS_lbigint & inOperand3,
                                                                                            const GALGAS_location & inOperand4 
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_panicClauseListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_panicClauseListAST_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_panicClauseListAST_2D_element::objectCompare (const GALGAS_panicClauseListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mPanicClauseName.objectCompare (inOperand.mAttribute_mPanicClauseName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mPanicInstructionList.objectCompare (inOperand.mAttribute_mPanicInstructionList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mEndOfPanicInstructions.objectCompare (inOperand.mAttribute_mEndOfPanicInstructions) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mPriority.objectCompare (inOperand.mAttribute_mPriority) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mLocationPriority.objectCompare (inOperand.mAttribute_mLocationPriority) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_panicClauseListAST_2D_element::isValid (void) const {
  return mAttribute_mPanicClauseName.isValid () && mAttribute_mPanicInstructionList.isValid () && mAttribute_mEndOfPanicInstructions.isValid () && mAttribute_mPriority.isValid () && mAttribute_mLocationPriority.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_panicClauseListAST_2D_element::drop (void) {
  mAttribute_mPanicClauseName.drop () ;
  mAttribute_mPanicInstructionList.drop () ;
  mAttribute_mEndOfPanicInstructions.drop () ;
  mAttribute_mPriority.drop () ;
  mAttribute_mLocationPriority.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_panicClauseListAST_2D_element::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "<struct @panicClauseListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mPanicClauseName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mPanicInstructionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mEndOfPanicInstructions.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mPriority.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mLocationPriority.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_panicClauseListAST_2D_element::getter_mPanicClauseName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPanicClauseName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST GALGAS_panicClauseListAST_2D_element::getter_mPanicInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPanicInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_panicClauseListAST_2D_element::getter_mEndOfPanicInstructions (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfPanicInstructions ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbigint GALGAS_panicClauseListAST_2D_element::getter_mPriority (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPriority ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_panicClauseListAST_2D_element::getter_mLocationPriority (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLocationPriority ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @panicClauseListAST-element type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_panicClauseListAST_2D_element ("panicClauseListAST-element",
                                                      NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_panicClauseListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_panicClauseListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_panicClauseListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_panicClauseListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_panicClauseListAST_2D_element GALGAS_panicClauseListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_panicClauseListAST_2D_element result ;
  const GALGAS_panicClauseListAST_2D_element * p = (const GALGAS_panicClauseListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_panicClauseListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("panicClauseListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Extension method '@panicClauseListAST-element panicSemanticAnalysis'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_panicSemanticAnalysis (const GALGAS_panicClauseListAST_2D_element inObject,
                                            const GALGAS_semanticContext constinArgument_inContext,
                                            GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                            GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                            C_Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  const enumGalgasBool test_0 = constinArgument_inContext.mAttribute_mModeMap.getter_hasKey (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 95)) COMMA_SOURCE_FILE ("panic.galgas", 95)).operator_not (SOURCE_FILE ("panic.galgas", 95)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (inObject.mAttribute_mPanicClauseName.getter_location (SOURCE_FILE ("panic.galgas", 96)), GALGAS_string ("the `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 96)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 96)).add_operation (GALGAS_string (" mode should be defined in order to use a panic clause"), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 96))  COMMA_SOURCE_FILE ("panic.galgas", 96)) ;
  }
  GALGAS_lstring var_routineNameForInvocationGraph_4606 = function_panicNameForInvocationGraph (inObject.mAttribute_mPanicClauseName.mAttribute_string, inObject.mAttribute_mPriority, inCompiler COMMA_SOURCE_FILE ("panic.galgas", 98)) ;
  GALGAS_variableMap var_variableMap_4955 ;
  GALGAS_namedObjectMap var_namedObjectMap_4991 ;
  {
  routine_initialVariableMap (var_routineNameForInvocationGraph_4606.mAttribute_string, constinArgument_inContext, GALGAS_bool (false), GALGAS_accessKind::constructor_readWriteAccess (SOURCE_FILE ("panic.galgas", 104)), GALGAS_bool (false), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("panic.galgas", 106)), var_variableMap_4955, var_namedObjectMap_4991, inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 100)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_StaticStringType_5057 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mAttribute_mTypeMap, function_staticStringTypeName (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 111)).getter_nowhere (SOURCE_FILE ("panic.galgas", 111)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 111)) ;
  GALGAS_lstring var_codeArg_5162 = GALGAS_lstring::constructor_new (GALGAS_string ("CODE"), inObject.mAttribute_mPanicClauseName.mAttribute_location  COMMA_SOURCE_FILE ("panic.galgas", 112)) ;
  {
  var_variableMap_4955.setter_insertUsedConstantInputFormalArgument (var_codeArg_5162, constinArgument_inContext.mAttribute_mPanicCodeType, GALGAS_bool (true), GALGAS_objectIR::constructor_localVariableReference (constinArgument_inContext.mAttribute_mPanicCodeType, var_codeArg_5162  COMMA_SOURCE_FILE ("panic.galgas", 117)), constinArgument_inContext.mAttribute_mPanicCodeType.getter_copyable (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 118)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 113)) ;
  }
  GALGAS_lstring var_fileArg_5543 = GALGAS_lstring::constructor_new (GALGAS_string ("FILE"), inObject.mAttribute_mPanicClauseName.mAttribute_location  COMMA_SOURCE_FILE ("panic.galgas", 121)) ;
  {
  var_variableMap_4955.setter_insertUsedConstantInputFormalArgument (var_fileArg_5543, var_StaticStringType_5057, GALGAS_bool (true), GALGAS_objectIR::constructor_localVariableReference (var_StaticStringType_5057, var_fileArg_5543  COMMA_SOURCE_FILE ("panic.galgas", 126)), var_StaticStringType_5057.getter_copyable (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 127)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 122)) ;
  }
  GALGAS_lstring var_lineArg_5900 = GALGAS_lstring::constructor_new (GALGAS_string ("LINE"), inObject.mAttribute_mPanicClauseName.mAttribute_location  COMMA_SOURCE_FILE ("panic.galgas", 130)) ;
  {
  var_variableMap_4955.setter_insertUsedConstantInputFormalArgument (var_lineArg_5900, constinArgument_inContext.mAttribute_mPanicLineType, GALGAS_bool (true), GALGAS_objectIR::constructor_localVariableReference (constinArgument_inContext.mAttribute_mPanicLineType, var_lineArg_5900  COMMA_SOURCE_FILE ("panic.galgas", 135)), constinArgument_inContext.mAttribute_mPanicLineType.getter_copyable (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 136)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 131)) ;
  }
  const enumGalgasBool test_1 = ioArgument_ioTemporaries.mAttribute_mSubprogramInvocationGraph.getter_isNodeDefined (var_routineNameForInvocationGraph_4606.mAttribute_string COMMA_SOURCE_FILE ("panic.galgas", 140)).operator_not (SOURCE_FILE ("panic.galgas", 140)).boolEnum () ;
  if (kBoolTrue == test_1) {
    {
    ioArgument_ioTemporaries.mAttribute_mSubprogramInvocationGraph.setter_addNode (var_routineNameForInvocationGraph_4606, var_routineNameForInvocationGraph_4606, inCompiler COMMA_SOURCE_FILE ("panic.galgas", 141)) ;
    }
  }
  GALGAS_instructionListIR var_instructionGenerationList_6600 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("panic.galgas", 147)) ;
  GALGAS_allocaList var_initAllocaList_6634 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("panic.galgas", 148)) ;
  GALGAS_stringset temp_2 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("panic.galgas", 155)) ;
  temp_2.addAssign_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 155))  COMMA_SOURCE_FILE ("panic.galgas", 155)) ;
  extensionMethod_analyzeRoutineInstructionList (inObject.mAttribute_mPanicInstructionList, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("panic.galgas", 150)), GALGAS_bool (false), GALGAS_bool (false), var_routineNameForInvocationGraph_4606, constinArgument_inContext, temp_2, GALGAS_bool (false), ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct.mAttribute_mStaticStringMap, var_variableMap_4955, var_initAllocaList_6634, var_instructionGenerationList_6600, inCompiler COMMA_SOURCE_FILE ("panic.galgas", 149)) ;
  var_variableMap_4955.method_checkAutomatonStates (inObject.mAttribute_mEndOfPanicInstructions, inCompiler COMMA_SOURCE_FILE ("panic.galgas", 165)) ;
  const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, inObject.mAttribute_mPanicClauseName.mAttribute_string.objectCompare (GALGAS_string ("setup"))).boolEnum () ;
  if (kBoolTrue == test_3) {
    {
    ioArgument_ioTemporaries.mAttribute_mPanicSetupRoutinePriorityMap.setter_insertSetupKey (GALGAS_lstring::constructor_new (inObject.mAttribute_mPriority.mAttribute_bigint.getter_string (SOURCE_FILE ("panic.galgas", 169)), inObject.mAttribute_mLocationPriority  COMMA_SOURCE_FILE ("panic.galgas", 169)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 169)) ;
    }
    ioArgument_ioIntermediateCodeStruct.mAttribute_mPanicSetupInstructionListIR.plusAssign_operation(var_instructionGenerationList_6600, inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 170)) ;
  }else if (kBoolFalse == test_3) {
    const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, inObject.mAttribute_mPanicClauseName.mAttribute_string.objectCompare (GALGAS_string ("loop"))).boolEnum () ;
    if (kBoolTrue == test_4) {
      {
      ioArgument_ioTemporaries.mAttribute_mPanicLoopRoutinePriorityMap.setter_insertLoopKey (GALGAS_lstring::constructor_new (inObject.mAttribute_mPriority.mAttribute_bigint.getter_string (SOURCE_FILE ("panic.galgas", 172)), inObject.mAttribute_mLocationPriority  COMMA_SOURCE_FILE ("panic.galgas", 172)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 172)) ;
      }
      ioArgument_ioIntermediateCodeStruct.mAttribute_mPanicLoopInstructionListIR.plusAssign_operation(var_instructionGenerationList_6600, inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 173)) ;
    }else if (kBoolFalse == test_4) {
      inCompiler->emitSemanticError (inObject.mAttribute_mPanicClauseName.getter_location (SOURCE_FILE ("panic.galgas", 175)), GALGAS_string ("panic routine name should be \"setup\" or \"loop\"")  COMMA_SOURCE_FILE ("panic.galgas", 175)) ;
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Extension method '@bootList-element bootSemanticAnalysis'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_bootSemanticAnalysis (const GALGAS_bootList_2D_element inObject,
                                           const GALGAS_semanticContext constinArgument_inContext,
                                           GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                           GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  const enumGalgasBool test_0 = constinArgument_inContext.mAttribute_mModeMap.getter_hasKey (function_bootModeName (inCompiler COMMA_SOURCE_FILE ("declaration-boot.galgas", 68)) COMMA_SOURCE_FILE ("declaration-boot.galgas", 68)).operator_not (SOURCE_FILE ("declaration-boot.galgas", 68)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (inObject.mAttribute_mBootLocation, GALGAS_string ("the `").add_operation (function_bootModeName (inCompiler COMMA_SOURCE_FILE ("declaration-boot.galgas", 69)), inCompiler COMMA_SOURCE_FILE ("declaration-boot.galgas", 69)).add_operation (GALGAS_string (" mode should be defined in order to use boot routines"), inCompiler COMMA_SOURCE_FILE ("declaration-boot.galgas", 69))  COMMA_SOURCE_FILE ("declaration-boot.galgas", 69)) ;
  }
  {
  ioArgument_ioTemporaries.mAttribute_mBootRoutinePriorityMap.setter_insertKey (GALGAS_lstring::constructor_new (inObject.mAttribute_mPriority.getter_string (SOURCE_FILE ("declaration-boot.galgas", 71)), inObject.mAttribute_mPriorityLocation  COMMA_SOURCE_FILE ("declaration-boot.galgas", 71)), inCompiler COMMA_SOURCE_FILE ("declaration-boot.galgas", 71)) ;
  }
  GALGAS_lstring var_routineNameForInvocationGraph_3250 = GALGAS_lstring::constructor_new (GALGAS_string ("boot ").add_operation (inObject.mAttribute_mPriority.getter_string (SOURCE_FILE ("declaration-boot.galgas", 73)), inCompiler COMMA_SOURCE_FILE ("declaration-boot.galgas", 73)), inObject.mAttribute_mPriorityLocation  COMMA_SOURCE_FILE ("declaration-boot.galgas", 73)) ;
  const enumGalgasBool test_1 = ioArgument_ioTemporaries.mAttribute_mSubprogramInvocationGraph.getter_isNodeDefined (var_routineNameForInvocationGraph_3250.mAttribute_string COMMA_SOURCE_FILE ("declaration-boot.galgas", 74)).operator_not (SOURCE_FILE ("declaration-boot.galgas", 74)).boolEnum () ;
  if (kBoolTrue == test_1) {
    {
    ioArgument_ioTemporaries.mAttribute_mSubprogramInvocationGraph.setter_addNode (var_routineNameForInvocationGraph_3250, var_routineNameForInvocationGraph_3250, inCompiler COMMA_SOURCE_FILE ("declaration-boot.galgas", 75)) ;
    }
  }
  GALGAS_variableMap var_variableMap_3840 ;
  GALGAS_namedObjectMap var_namedObjectMap_3876 ;
  {
  routine_initialVariableMap (var_routineNameForInvocationGraph_3250.mAttribute_string, constinArgument_inContext, GALGAS_bool (false), GALGAS_accessKind::constructor_readWriteAccess (SOURCE_FILE ("declaration-boot.galgas", 85)), GALGAS_bool (false), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-boot.galgas", 87)), var_variableMap_3840, var_namedObjectMap_3876, inCompiler  COMMA_SOURCE_FILE ("declaration-boot.galgas", 81)) ;
  }
  GALGAS_instructionListIR var_instructionGenerationList_3957 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("declaration-boot.galgas", 92)) ;
  GALGAS_allocaList var_bootAllocaList_3991 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("declaration-boot.galgas", 93)) ;
  GALGAS_stringset temp_2 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("declaration-boot.galgas", 100)) ;
  temp_2.addAssign_operation (function_bootModeName (inCompiler COMMA_SOURCE_FILE ("declaration-boot.galgas", 100))  COMMA_SOURCE_FILE ("declaration-boot.galgas", 100)) ;
  extensionMethod_analyzeRoutineInstructionList (inObject.mAttribute_mInstructionList, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-boot.galgas", 95)), GALGAS_bool (false), GALGAS_bool (false), var_routineNameForInvocationGraph_3250, constinArgument_inContext, temp_2, GALGAS_bool (false), ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct.mAttribute_mStaticStringMap, var_variableMap_3840, var_bootAllocaList_3991, var_instructionGenerationList_3957, inCompiler COMMA_SOURCE_FILE ("declaration-boot.galgas", 94)) ;
  var_variableMap_3840.method_checkAutomatonStates (inObject.mAttribute_mEndOfBootLocation, inCompiler COMMA_SOURCE_FILE ("declaration-boot.galgas", 110)) ;
  ioArgument_ioIntermediateCodeStruct.mAttribute_mBootList.addAssign_operation (inObject.mAttribute_mPriority, inObject.mAttribute_mBootLocation, var_bootAllocaList_3991, var_instructionGenerationList_3957, inObject.mAttribute_mEndOfBootLocation  COMMA_SOURCE_FILE ("declaration-boot.galgas", 113)) ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initList_2D_element::GALGAS_initList_2D_element (void) :
mAttribute_mInitLocation (),
mAttribute_mSelfTypeName (),
mAttribute_mGlobalVarName (),
mAttribute_mRequiredByProcList (),
mAttribute_mInstructionList (),
mAttribute_mEndOfInitLocation (),
mAttribute_mPriority () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initList_2D_element::~ GALGAS_initList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initList_2D_element::GALGAS_initList_2D_element (const GALGAS_location & inOperand0,
                                                        const GALGAS_lstring & inOperand1,
                                                        const GALGAS_string & inOperand2,
                                                        const GALGAS_lstringlist & inOperand3,
                                                        const GALGAS_instructionListAST & inOperand4,
                                                        const GALGAS_location & inOperand5,
                                                        const GALGAS_lbigint & inOperand6) :
mAttribute_mInitLocation (inOperand0),
mAttribute_mSelfTypeName (inOperand1),
mAttribute_mGlobalVarName (inOperand2),
mAttribute_mRequiredByProcList (inOperand3),
mAttribute_mInstructionList (inOperand4),
mAttribute_mEndOfInitLocation (inOperand5),
mAttribute_mPriority (inOperand6) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initList_2D_element GALGAS_initList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_initList_2D_element (GALGAS_location::constructor_nowhere (HERE),
                                     GALGAS_lstring::constructor_default (HERE),
                                     GALGAS_string::constructor_default (HERE),
                                     GALGAS_lstringlist::constructor_emptyList (HERE),
                                     GALGAS_instructionListAST::constructor_emptyList (HERE),
                                     GALGAS_location::constructor_nowhere (HERE),
                                     GALGAS_lbigint::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initList_2D_element GALGAS_initList_2D_element::constructor_new (const GALGAS_location & inOperand0,
                                                                        const GALGAS_lstring & inOperand1,
                                                                        const GALGAS_string & inOperand2,
                                                                        const GALGAS_lstringlist & inOperand3,
                                                                        const GALGAS_instructionListAST & inOperand4,
                                                                        const GALGAS_location & inOperand5,
                                                                        const GALGAS_lbigint & inOperand6 
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_initList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid ()) {
    result = GALGAS_initList_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_initList_2D_element::objectCompare (const GALGAS_initList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mInitLocation.objectCompare (inOperand.mAttribute_mInitLocation) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSelfTypeName.objectCompare (inOperand.mAttribute_mSelfTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mGlobalVarName.objectCompare (inOperand.mAttribute_mGlobalVarName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mRequiredByProcList.objectCompare (inOperand.mAttribute_mRequiredByProcList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInstructionList.objectCompare (inOperand.mAttribute_mInstructionList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mEndOfInitLocation.objectCompare (inOperand.mAttribute_mEndOfInitLocation) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mPriority.objectCompare (inOperand.mAttribute_mPriority) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_initList_2D_element::isValid (void) const {
  return mAttribute_mInitLocation.isValid () && mAttribute_mSelfTypeName.isValid () && mAttribute_mGlobalVarName.isValid () && mAttribute_mRequiredByProcList.isValid () && mAttribute_mInstructionList.isValid () && mAttribute_mEndOfInitLocation.isValid () && mAttribute_mPriority.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_initList_2D_element::drop (void) {
  mAttribute_mInitLocation.drop () ;
  mAttribute_mSelfTypeName.drop () ;
  mAttribute_mGlobalVarName.drop () ;
  mAttribute_mRequiredByProcList.drop () ;
  mAttribute_mInstructionList.drop () ;
  mAttribute_mEndOfInitLocation.drop () ;
  mAttribute_mPriority.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_initList_2D_element::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "<struct @initList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mInitLocation.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSelfTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mGlobalVarName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mRequiredByProcList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInstructionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mEndOfInitLocation.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mPriority.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_initList_2D_element::getter_mInitLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInitLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_initList_2D_element::getter_mSelfTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSelfTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_initList_2D_element::getter_mGlobalVarName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mGlobalVarName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_initList_2D_element::getter_mRequiredByProcList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRequiredByProcList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST GALGAS_initList_2D_element::getter_mInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_initList_2D_element::getter_mEndOfInitLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfInitLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbigint GALGAS_initList_2D_element::getter_mPriority (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPriority ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @initList-element type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_initList_2D_element ("initList-element",
                                            NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_initList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_initList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_initList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_initList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initList_2D_element GALGAS_initList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_initList_2D_element result ;
  const GALGAS_initList_2D_element * p = (const GALGAS_initList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_initList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("initList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Extension method '@initList-element initSemanticAnalysis'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_initSemanticAnalysis (const GALGAS_initList_2D_element inObject,
                                           const GALGAS_semanticContext constinArgument_inContext,
                                           GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                           GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_proxy temp_0 ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, inObject.mAttribute_mSelfTypeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-init.galgas", 95)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mAttribute_mTypeMap, inObject.mAttribute_mSelfTypeName, inCompiler  COMMA_SOURCE_FILE ("declaration-init.galgas", 97)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_selfType_4077 = temp_0 ;
  GALGAS_allocaList var_allocaList_4581 ;
  GALGAS_instructionListIR var_instructionGenerationList_4635 ;
  {
  GALGAS_stringset temp_2 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("declaration-init.galgas", 105)) ;
  temp_2.addAssign_operation (function_initModeName (inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 105))  COMMA_SOURCE_FILE ("declaration-init.galgas", 105)) ;
  routine_initSemanticAnalysis (constinArgument_inContext, ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct, var_selfType_4077, inObject.mAttribute_mPriority, temp_2, inObject.mAttribute_mRequiredByProcList, inObject.mAttribute_mInstructionList, inObject.mAttribute_mEndOfInitLocation, var_allocaList_4581, var_instructionGenerationList_4635, inCompiler  COMMA_SOURCE_FILE ("declaration-init.galgas", 99)) ;
  }
  ioArgument_ioIntermediateCodeStruct.mAttribute_mInitList.addAssign_operation (var_selfType_4077, inObject.mAttribute_mGlobalVarName, inObject.mAttribute_mRequiredByProcList, inObject.mAttribute_mPriority.mAttribute_bigint, var_allocaList_4581, var_instructionGenerationList_4635  COMMA_SOURCE_FILE ("declaration-init.galgas", 113)) ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externProcedureDeclarationListAST_2D_element::GALGAS_externProcedureDeclarationListAST_2D_element (void) :
mAttribute_mExternProcedureName (),
mAttribute_mProcedureModeList (),
mAttribute_mProcFormalArgumentList (),
mAttribute_mReturnTypeName (),
mAttribute_mRoutineNameForGeneration (),
mAttribute_mEndOfProcLocation () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externProcedureDeclarationListAST_2D_element::~ GALGAS_externProcedureDeclarationListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externProcedureDeclarationListAST_2D_element::GALGAS_externProcedureDeclarationListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                          const GALGAS_lstringlist & inOperand1,
                                                                                                          const GALGAS_procFormalArgumentList & inOperand2,
                                                                                                          const GALGAS_lstring & inOperand3,
                                                                                                          const GALGAS_lstring & inOperand4,
                                                                                                          const GALGAS_location & inOperand5) :
mAttribute_mExternProcedureName (inOperand0),
mAttribute_mProcedureModeList (inOperand1),
mAttribute_mProcFormalArgumentList (inOperand2),
mAttribute_mReturnTypeName (inOperand3),
mAttribute_mRoutineNameForGeneration (inOperand4),
mAttribute_mEndOfProcLocation (inOperand5) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externProcedureDeclarationListAST_2D_element GALGAS_externProcedureDeclarationListAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_externProcedureDeclarationListAST_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                              GALGAS_lstringlist::constructor_emptyList (HERE),
                                                              GALGAS_procFormalArgumentList::constructor_emptyList (HERE),
                                                              GALGAS_lstring::constructor_default (HERE),
                                                              GALGAS_lstring::constructor_default (HERE),
                                                              GALGAS_location::constructor_nowhere (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externProcedureDeclarationListAST_2D_element GALGAS_externProcedureDeclarationListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                          const GALGAS_lstringlist & inOperand1,
                                                                                                                          const GALGAS_procFormalArgumentList & inOperand2,
                                                                                                                          const GALGAS_lstring & inOperand3,
                                                                                                                          const GALGAS_lstring & inOperand4,
                                                                                                                          const GALGAS_location & inOperand5 
                                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_externProcedureDeclarationListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid ()) {
    result = GALGAS_externProcedureDeclarationListAST_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_externProcedureDeclarationListAST_2D_element::objectCompare (const GALGAS_externProcedureDeclarationListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mExternProcedureName.objectCompare (inOperand.mAttribute_mExternProcedureName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mProcedureModeList.objectCompare (inOperand.mAttribute_mProcedureModeList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mProcFormalArgumentList.objectCompare (inOperand.mAttribute_mProcFormalArgumentList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mReturnTypeName.objectCompare (inOperand.mAttribute_mReturnTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mRoutineNameForGeneration.objectCompare (inOperand.mAttribute_mRoutineNameForGeneration) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mEndOfProcLocation.objectCompare (inOperand.mAttribute_mEndOfProcLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_externProcedureDeclarationListAST_2D_element::isValid (void) const {
  return mAttribute_mExternProcedureName.isValid () && mAttribute_mProcedureModeList.isValid () && mAttribute_mProcFormalArgumentList.isValid () && mAttribute_mReturnTypeName.isValid () && mAttribute_mRoutineNameForGeneration.isValid () && mAttribute_mEndOfProcLocation.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externProcedureDeclarationListAST_2D_element::drop (void) {
  mAttribute_mExternProcedureName.drop () ;
  mAttribute_mProcedureModeList.drop () ;
  mAttribute_mProcFormalArgumentList.drop () ;
  mAttribute_mReturnTypeName.drop () ;
  mAttribute_mRoutineNameForGeneration.drop () ;
  mAttribute_mEndOfProcLocation.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externProcedureDeclarationListAST_2D_element::description (C_String & ioString,
                                                                       const int32_t inIndentation) const {
  ioString << "<struct @externProcedureDeclarationListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mExternProcedureName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mProcedureModeList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mProcFormalArgumentList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mReturnTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mRoutineNameForGeneration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mEndOfProcLocation.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_externProcedureDeclarationListAST_2D_element::getter_mExternProcedureName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExternProcedureName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_externProcedureDeclarationListAST_2D_element::getter_mProcedureModeList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mProcedureModeList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentList GALGAS_externProcedureDeclarationListAST_2D_element::getter_mProcFormalArgumentList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mProcFormalArgumentList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_externProcedureDeclarationListAST_2D_element::getter_mReturnTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mReturnTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_externProcedureDeclarationListAST_2D_element::getter_mRoutineNameForGeneration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRoutineNameForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_externProcedureDeclarationListAST_2D_element::getter_mEndOfProcLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfProcLocation ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @externProcedureDeclarationListAST-element type                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_externProcedureDeclarationListAST_2D_element ("externProcedureDeclarationListAST-element",
                                                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_externProcedureDeclarationListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externProcedureDeclarationListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_externProcedureDeclarationListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_externProcedureDeclarationListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externProcedureDeclarationListAST_2D_element GALGAS_externProcedureDeclarationListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                        C_Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_externProcedureDeclarationListAST_2D_element result ;
  const GALGAS_externProcedureDeclarationListAST_2D_element * p = (const GALGAS_externProcedureDeclarationListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_externProcedureDeclarationListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externProcedureDeclarationListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

