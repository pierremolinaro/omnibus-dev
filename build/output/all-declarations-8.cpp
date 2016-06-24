#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-8.h"


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



typeComparisonResult GALGAS_abstractCallInstructionAST::objectCompare (const GALGAS_abstractCallInstructionAST & inOperand) const {
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

GALGAS_abstractCallInstructionAST::GALGAS_abstractCallInstructionAST (void) :
GALGAS_instructionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractCallInstructionAST::GALGAS_abstractCallInstructionAST (const cPtr_abstractCallInstructionAST * inSourcePtr) :
GALGAS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractCallInstructionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_effectiveParameterListAST GALGAS_abstractCallInstructionAST::getter_mEffectiveParameterList (UNUSED_LOCATION_ARGS) const {
  GALGAS_effectiveParameterListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_abstractCallInstructionAST * p = (const cPtr_abstractCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractCallInstructionAST) ;
    result = p->mAttribute_mEffectiveParameterList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_effectiveParameterListAST cPtr_abstractCallInstructionAST::getter_mEffectiveParameterList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEffectiveParameterList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                 Pointer class for @abstractCallInstructionAST class                                 *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_abstractCallInstructionAST::cPtr_abstractCallInstructionAST (const GALGAS_effectiveParameterListAST & in_mEffectiveParameterList
                                                                  COMMA_LOCATION_ARGS) :
cPtr_instructionAST (THERE),
mAttribute_mEffectiveParameterList (in_mEffectiveParameterList) {
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @abstractCallInstructionAST type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_abstractCallInstructionAST ("abstractCallInstructionAST",
                                                   & kTypeDescriptor_GALGAS_instructionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_abstractCallInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractCallInstructionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_abstractCallInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractCallInstructionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractCallInstructionAST GALGAS_abstractCallInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_abstractCallInstructionAST result ;
  const GALGAS_abstractCallInstructionAST * p = (const GALGAS_abstractCallInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_abstractCallInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractCallInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_remoteRoutineCallInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_remoteRoutineCallInstructionAST * p = (const cPtr_remoteRoutineCallInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_remoteRoutineCallInstructionAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mEffectiveParameterList.objectCompare (p->mAttribute_mEffectiveParameterList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mAccessList.objectCompare (p->mAttribute_mAccessList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_remoteRoutineCallInstructionAST::objectCompare (const GALGAS_remoteRoutineCallInstructionAST & inOperand) const {
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

GALGAS_remoteRoutineCallInstructionAST::GALGAS_remoteRoutineCallInstructionAST (void) :
GALGAS_abstractCallInstructionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_remoteRoutineCallInstructionAST GALGAS_remoteRoutineCallInstructionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_remoteRoutineCallInstructionAST::constructor_new (GALGAS_effectiveParameterListAST::constructor_emptyList (HERE),
                                                                  GALGAS_accessList::constructor_emptyList (HERE)
                                                                  COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_remoteRoutineCallInstructionAST::GALGAS_remoteRoutineCallInstructionAST (const cPtr_remoteRoutineCallInstructionAST * inSourcePtr) :
GALGAS_abstractCallInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_remoteRoutineCallInstructionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_remoteRoutineCallInstructionAST GALGAS_remoteRoutineCallInstructionAST::constructor_new (const GALGAS_effectiveParameterListAST & inAttribute_mEffectiveParameterList,
                                                                                                const GALGAS_accessList & inAttribute_mAccessList
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_remoteRoutineCallInstructionAST result ;
  if (inAttribute_mEffectiveParameterList.isValid () && inAttribute_mAccessList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_remoteRoutineCallInstructionAST (inAttribute_mEffectiveParameterList, inAttribute_mAccessList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_accessList GALGAS_remoteRoutineCallInstructionAST::getter_mAccessList (UNUSED_LOCATION_ARGS) const {
  GALGAS_accessList result ;
  if (NULL != mObjectPtr) {
    const cPtr_remoteRoutineCallInstructionAST * p = (const cPtr_remoteRoutineCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_remoteRoutineCallInstructionAST) ;
    result = p->mAttribute_mAccessList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_accessList cPtr_remoteRoutineCallInstructionAST::getter_mAccessList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAccessList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                              Pointer class for @remoteRoutineCallInstructionAST class                               *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_remoteRoutineCallInstructionAST::cPtr_remoteRoutineCallInstructionAST (const GALGAS_effectiveParameterListAST & in_mEffectiveParameterList,
                                                                            const GALGAS_accessList & in_mAccessList
                                                                            COMMA_LOCATION_ARGS) :
cPtr_abstractCallInstructionAST (in_mEffectiveParameterList COMMA_THERE),
mAttribute_mAccessList (in_mAccessList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_remoteRoutineCallInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_remoteRoutineCallInstructionAST ;
}

void cPtr_remoteRoutineCallInstructionAST::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "[@remoteRoutineCallInstructionAST:" ;
  mAttribute_mEffectiveParameterList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mAccessList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_remoteRoutineCallInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_remoteRoutineCallInstructionAST (mAttribute_mEffectiveParameterList, mAttribute_mAccessList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @remoteRoutineCallInstructionAST type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_remoteRoutineCallInstructionAST ("remoteRoutineCallInstructionAST",
                                                        & kTypeDescriptor_GALGAS_abstractCallInstructionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_remoteRoutineCallInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_remoteRoutineCallInstructionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_remoteRoutineCallInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_remoteRoutineCallInstructionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_remoteRoutineCallInstructionAST GALGAS_remoteRoutineCallInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_remoteRoutineCallInstructionAST result ;
  const GALGAS_remoteRoutineCallInstructionAST * p = (const GALGAS_remoteRoutineCallInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_remoteRoutineCallInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("remoteRoutineCallInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_unifiedSelfCallInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_unifiedSelfCallInstructionAST * p = (const cPtr_unifiedSelfCallInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_unifiedSelfCallInstructionAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mEffectiveParameterList.objectCompare (p->mAttribute_mEffectiveParameterList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSelfLocation.objectCompare (p->mAttribute_mSelfLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mFieldList.objectCompare (p->mAttribute_mFieldList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_unifiedSelfCallInstructionAST::objectCompare (const GALGAS_unifiedSelfCallInstructionAST & inOperand) const {
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

GALGAS_unifiedSelfCallInstructionAST::GALGAS_unifiedSelfCallInstructionAST (void) :
GALGAS_abstractCallInstructionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedSelfCallInstructionAST GALGAS_unifiedSelfCallInstructionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_unifiedSelfCallInstructionAST::constructor_new (GALGAS_effectiveParameterListAST::constructor_emptyList (HERE),
                                                                GALGAS_location::constructor_nowhere (HERE),
                                                                GALGAS_fieldList::constructor_emptyList (HERE)
                                                                COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedSelfCallInstructionAST::GALGAS_unifiedSelfCallInstructionAST (const cPtr_unifiedSelfCallInstructionAST * inSourcePtr) :
GALGAS_abstractCallInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_unifiedSelfCallInstructionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedSelfCallInstructionAST GALGAS_unifiedSelfCallInstructionAST::constructor_new (const GALGAS_effectiveParameterListAST & inAttribute_mEffectiveParameterList,
                                                                                            const GALGAS_location & inAttribute_mSelfLocation,
                                                                                            const GALGAS_fieldList & inAttribute_mFieldList
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_unifiedSelfCallInstructionAST result ;
  if (inAttribute_mEffectiveParameterList.isValid () && inAttribute_mSelfLocation.isValid () && inAttribute_mFieldList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_unifiedSelfCallInstructionAST (inAttribute_mEffectiveParameterList, inAttribute_mSelfLocation, inAttribute_mFieldList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_unifiedSelfCallInstructionAST::getter_mSelfLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_unifiedSelfCallInstructionAST * p = (const cPtr_unifiedSelfCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_unifiedSelfCallInstructionAST) ;
    result = p->mAttribute_mSelfLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_unifiedSelfCallInstructionAST::getter_mSelfLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSelfLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_fieldList GALGAS_unifiedSelfCallInstructionAST::getter_mFieldList (UNUSED_LOCATION_ARGS) const {
  GALGAS_fieldList result ;
  if (NULL != mObjectPtr) {
    const cPtr_unifiedSelfCallInstructionAST * p = (const cPtr_unifiedSelfCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_unifiedSelfCallInstructionAST) ;
    result = p->mAttribute_mFieldList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_fieldList cPtr_unifiedSelfCallInstructionAST::getter_mFieldList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFieldList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                               Pointer class for @unifiedSelfCallInstructionAST class                                *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_unifiedSelfCallInstructionAST::cPtr_unifiedSelfCallInstructionAST (const GALGAS_effectiveParameterListAST & in_mEffectiveParameterList,
                                                                        const GALGAS_location & in_mSelfLocation,
                                                                        const GALGAS_fieldList & in_mFieldList
                                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractCallInstructionAST (in_mEffectiveParameterList COMMA_THERE),
mAttribute_mSelfLocation (in_mSelfLocation),
mAttribute_mFieldList (in_mFieldList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_unifiedSelfCallInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unifiedSelfCallInstructionAST ;
}

void cPtr_unifiedSelfCallInstructionAST::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "[@unifiedSelfCallInstructionAST:" ;
  mAttribute_mEffectiveParameterList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mSelfLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mFieldList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_unifiedSelfCallInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_unifiedSelfCallInstructionAST (mAttribute_mEffectiveParameterList, mAttribute_mSelfLocation, mAttribute_mFieldList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @unifiedSelfCallInstructionAST type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_unifiedSelfCallInstructionAST ("unifiedSelfCallInstructionAST",
                                                      & kTypeDescriptor_GALGAS_abstractCallInstructionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_unifiedSelfCallInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unifiedSelfCallInstructionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_unifiedSelfCallInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_unifiedSelfCallInstructionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedSelfCallInstructionAST GALGAS_unifiedSelfCallInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_unifiedSelfCallInstructionAST result ;
  const GALGAS_unifiedSelfCallInstructionAST * p = (const GALGAS_unifiedSelfCallInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_unifiedSelfCallInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("unifiedSelfCallInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

typeComparisonResult cPtr_selfVarAssignmentInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_selfVarAssignmentInstructionAST * p = (const cPtr_selfVarAssignmentInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_selfVarAssignmentInstructionAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mSelfLocation.objectCompare (p->mAttribute_mSelfLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mFieldList.objectCompare (p->mAttribute_mFieldList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSourceExpression.objectCompare (p->mAttribute_mSourceExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_selfVarAssignmentInstructionAST::objectCompare (const GALGAS_selfVarAssignmentInstructionAST & inOperand) const {
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

GALGAS_selfVarAssignmentInstructionAST::GALGAS_selfVarAssignmentInstructionAST (void) :
GALGAS_instructionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_selfVarAssignmentInstructionAST::GALGAS_selfVarAssignmentInstructionAST (const cPtr_selfVarAssignmentInstructionAST * inSourcePtr) :
GALGAS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_selfVarAssignmentInstructionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_selfVarAssignmentInstructionAST GALGAS_selfVarAssignmentInstructionAST::constructor_new (const GALGAS_location & inAttribute_mSelfLocation,
                                                                                                const GALGAS_fieldList & inAttribute_mFieldList,
                                                                                                const GALGAS_expressionAST & inAttribute_mSourceExpression
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_selfVarAssignmentInstructionAST result ;
  if (inAttribute_mSelfLocation.isValid () && inAttribute_mFieldList.isValid () && inAttribute_mSourceExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_selfVarAssignmentInstructionAST (inAttribute_mSelfLocation, inAttribute_mFieldList, inAttribute_mSourceExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_selfVarAssignmentInstructionAST::getter_mSelfLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_selfVarAssignmentInstructionAST * p = (const cPtr_selfVarAssignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selfVarAssignmentInstructionAST) ;
    result = p->mAttribute_mSelfLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_selfVarAssignmentInstructionAST::getter_mSelfLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSelfLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_fieldList GALGAS_selfVarAssignmentInstructionAST::getter_mFieldList (UNUSED_LOCATION_ARGS) const {
  GALGAS_fieldList result ;
  if (NULL != mObjectPtr) {
    const cPtr_selfVarAssignmentInstructionAST * p = (const cPtr_selfVarAssignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selfVarAssignmentInstructionAST) ;
    result = p->mAttribute_mFieldList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_fieldList cPtr_selfVarAssignmentInstructionAST::getter_mFieldList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFieldList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST GALGAS_selfVarAssignmentInstructionAST::getter_mSourceExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_selfVarAssignmentInstructionAST * p = (const cPtr_selfVarAssignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selfVarAssignmentInstructionAST) ;
    result = p->mAttribute_mSourceExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST cPtr_selfVarAssignmentInstructionAST::getter_mSourceExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSourceExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                              Pointer class for @selfVarAssignmentInstructionAST class                               *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_selfVarAssignmentInstructionAST::cPtr_selfVarAssignmentInstructionAST (const GALGAS_location & in_mSelfLocation,
                                                                            const GALGAS_fieldList & in_mFieldList,
                                                                            const GALGAS_expressionAST & in_mSourceExpression
                                                                            COMMA_LOCATION_ARGS) :
cPtr_instructionAST (THERE),
mAttribute_mSelfLocation (in_mSelfLocation),
mAttribute_mFieldList (in_mFieldList),
mAttribute_mSourceExpression (in_mSourceExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_selfVarAssignmentInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfVarAssignmentInstructionAST ;
}

void cPtr_selfVarAssignmentInstructionAST::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "[@selfVarAssignmentInstructionAST:" ;
  mAttribute_mSelfLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mFieldList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mSourceExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_selfVarAssignmentInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_selfVarAssignmentInstructionAST (mAttribute_mSelfLocation, mAttribute_mFieldList, mAttribute_mSourceExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @selfVarAssignmentInstructionAST type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_selfVarAssignmentInstructionAST ("selfVarAssignmentInstructionAST",
                                                        & kTypeDescriptor_GALGAS_instructionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_selfVarAssignmentInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfVarAssignmentInstructionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_selfVarAssignmentInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_selfVarAssignmentInstructionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_selfVarAssignmentInstructionAST GALGAS_selfVarAssignmentInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_selfVarAssignmentInstructionAST result ;
  const GALGAS_selfVarAssignmentInstructionAST * p = (const GALGAS_selfVarAssignmentInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_selfVarAssignmentInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selfVarAssignmentInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_selfVarOperatorAssignInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_selfVarOperatorAssignInstructionAST * p = (const cPtr_selfVarOperatorAssignInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_selfVarOperatorAssignInstructionAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mSelfLocation.objectCompare (p->mAttribute_mSelfLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mFieldList.objectCompare (p->mAttribute_mFieldList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mOperator.objectCompare (p->mAttribute_mOperator) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mOperatorLocation.objectCompare (p->mAttribute_mOperatorLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSourceExpression.objectCompare (p->mAttribute_mSourceExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_selfVarOperatorAssignInstructionAST::objectCompare (const GALGAS_selfVarOperatorAssignInstructionAST & inOperand) const {
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

GALGAS_selfVarOperatorAssignInstructionAST::GALGAS_selfVarOperatorAssignInstructionAST (void) :
GALGAS_instructionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_selfVarOperatorAssignInstructionAST::GALGAS_selfVarOperatorAssignInstructionAST (const cPtr_selfVarOperatorAssignInstructionAST * inSourcePtr) :
GALGAS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_selfVarOperatorAssignInstructionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_selfVarOperatorAssignInstructionAST GALGAS_selfVarOperatorAssignInstructionAST::constructor_new (const GALGAS_location & inAttribute_mSelfLocation,
                                                                                                        const GALGAS_fieldList & inAttribute_mFieldList,
                                                                                                        const GALGAS_operatorAssignKind & inAttribute_mOperator,
                                                                                                        const GALGAS_location & inAttribute_mOperatorLocation,
                                                                                                        const GALGAS_expressionAST & inAttribute_mSourceExpression
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_selfVarOperatorAssignInstructionAST result ;
  if (inAttribute_mSelfLocation.isValid () && inAttribute_mFieldList.isValid () && inAttribute_mOperator.isValid () && inAttribute_mOperatorLocation.isValid () && inAttribute_mSourceExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_selfVarOperatorAssignInstructionAST (inAttribute_mSelfLocation, inAttribute_mFieldList, inAttribute_mOperator, inAttribute_mOperatorLocation, inAttribute_mSourceExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_selfVarOperatorAssignInstructionAST::getter_mSelfLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_selfVarOperatorAssignInstructionAST * p = (const cPtr_selfVarOperatorAssignInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selfVarOperatorAssignInstructionAST) ;
    result = p->mAttribute_mSelfLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_selfVarOperatorAssignInstructionAST::getter_mSelfLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSelfLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_fieldList GALGAS_selfVarOperatorAssignInstructionAST::getter_mFieldList (UNUSED_LOCATION_ARGS) const {
  GALGAS_fieldList result ;
  if (NULL != mObjectPtr) {
    const cPtr_selfVarOperatorAssignInstructionAST * p = (const cPtr_selfVarOperatorAssignInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selfVarOperatorAssignInstructionAST) ;
    result = p->mAttribute_mFieldList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_fieldList cPtr_selfVarOperatorAssignInstructionAST::getter_mFieldList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFieldList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operatorAssignKind GALGAS_selfVarOperatorAssignInstructionAST::getter_mOperator (UNUSED_LOCATION_ARGS) const {
  GALGAS_operatorAssignKind result ;
  if (NULL != mObjectPtr) {
    const cPtr_selfVarOperatorAssignInstructionAST * p = (const cPtr_selfVarOperatorAssignInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selfVarOperatorAssignInstructionAST) ;
    result = p->mAttribute_mOperator ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operatorAssignKind cPtr_selfVarOperatorAssignInstructionAST::getter_mOperator (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOperator ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_selfVarOperatorAssignInstructionAST::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_selfVarOperatorAssignInstructionAST * p = (const cPtr_selfVarOperatorAssignInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selfVarOperatorAssignInstructionAST) ;
    result = p->mAttribute_mOperatorLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_selfVarOperatorAssignInstructionAST::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOperatorLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST GALGAS_selfVarOperatorAssignInstructionAST::getter_mSourceExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_selfVarOperatorAssignInstructionAST * p = (const cPtr_selfVarOperatorAssignInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selfVarOperatorAssignInstructionAST) ;
    result = p->mAttribute_mSourceExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST cPtr_selfVarOperatorAssignInstructionAST::getter_mSourceExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSourceExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                            Pointer class for @selfVarOperatorAssignInstructionAST class                             *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_selfVarOperatorAssignInstructionAST::cPtr_selfVarOperatorAssignInstructionAST (const GALGAS_location & in_mSelfLocation,
                                                                                    const GALGAS_fieldList & in_mFieldList,
                                                                                    const GALGAS_operatorAssignKind & in_mOperator,
                                                                                    const GALGAS_location & in_mOperatorLocation,
                                                                                    const GALGAS_expressionAST & in_mSourceExpression
                                                                                    COMMA_LOCATION_ARGS) :
cPtr_instructionAST (THERE),
mAttribute_mSelfLocation (in_mSelfLocation),
mAttribute_mFieldList (in_mFieldList),
mAttribute_mOperator (in_mOperator),
mAttribute_mOperatorLocation (in_mOperatorLocation),
mAttribute_mSourceExpression (in_mSourceExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_selfVarOperatorAssignInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfVarOperatorAssignInstructionAST ;
}

void cPtr_selfVarOperatorAssignInstructionAST::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "[@selfVarOperatorAssignInstructionAST:" ;
  mAttribute_mSelfLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mFieldList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mOperator.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mSourceExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_selfVarOperatorAssignInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_selfVarOperatorAssignInstructionAST (mAttribute_mSelfLocation, mAttribute_mFieldList, mAttribute_mOperator, mAttribute_mOperatorLocation, mAttribute_mSourceExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @selfVarOperatorAssignInstructionAST type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_selfVarOperatorAssignInstructionAST ("selfVarOperatorAssignInstructionAST",
                                                            & kTypeDescriptor_GALGAS_instructionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_selfVarOperatorAssignInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfVarOperatorAssignInstructionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_selfVarOperatorAssignInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_selfVarOperatorAssignInstructionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_selfVarOperatorAssignInstructionAST GALGAS_selfVarOperatorAssignInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_selfVarOperatorAssignInstructionAST result ;
  const GALGAS_selfVarOperatorAssignInstructionAST * p = (const GALGAS_selfVarOperatorAssignInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_selfVarOperatorAssignInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selfVarOperatorAssignInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
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
    result = mAttribute_mAccessList.objectCompare (p->mAttribute_mAccessList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mTargetErrorLocation.objectCompare (p->mAttribute_mTargetErrorLocation) ;
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

GALGAS_varAssignmentInstructionAST GALGAS_varAssignmentInstructionAST::constructor_new (const GALGAS_accessList & inAttribute_mAccessList,
                                                                                        const GALGAS_location & inAttribute_mTargetErrorLocation,
                                                                                        const GALGAS_expressionAST & inAttribute_mSourceExpression
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_varAssignmentInstructionAST result ;
  if (inAttribute_mAccessList.isValid () && inAttribute_mTargetErrorLocation.isValid () && inAttribute_mSourceExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_varAssignmentInstructionAST (inAttribute_mAccessList, inAttribute_mTargetErrorLocation, inAttribute_mSourceExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_accessList GALGAS_varAssignmentInstructionAST::getter_mAccessList (UNUSED_LOCATION_ARGS) const {
  GALGAS_accessList result ;
  if (NULL != mObjectPtr) {
    const cPtr_varAssignmentInstructionAST * p = (const cPtr_varAssignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varAssignmentInstructionAST) ;
    result = p->mAttribute_mAccessList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_accessList cPtr_varAssignmentInstructionAST::getter_mAccessList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAccessList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_varAssignmentInstructionAST::getter_mTargetErrorLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_varAssignmentInstructionAST * p = (const cPtr_varAssignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varAssignmentInstructionAST) ;
    result = p->mAttribute_mTargetErrorLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_varAssignmentInstructionAST::getter_mTargetErrorLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTargetErrorLocation ;
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

cPtr_varAssignmentInstructionAST::cPtr_varAssignmentInstructionAST (const GALGAS_accessList & in_mAccessList,
                                                                    const GALGAS_location & in_mTargetErrorLocation,
                                                                    const GALGAS_expressionAST & in_mSourceExpression
                                                                    COMMA_LOCATION_ARGS) :
cPtr_instructionAST (THERE),
mAttribute_mAccessList (in_mAccessList),
mAttribute_mTargetErrorLocation (in_mTargetErrorLocation),
mAttribute_mSourceExpression (in_mSourceExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_varAssignmentInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varAssignmentInstructionAST ;
}

void cPtr_varAssignmentInstructionAST::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "[@varAssignmentInstructionAST:" ;
  mAttribute_mAccessList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mTargetErrorLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mSourceExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_varAssignmentInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_varAssignmentInstructionAST (mAttribute_mAccessList, mAttribute_mTargetErrorLocation, mAttribute_mSourceExpression COMMA_THERE)) ;
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
    result = mAttribute_mAccessList.objectCompare (p->mAttribute_mAccessList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mTargetErrorLocation.objectCompare (p->mAttribute_mTargetErrorLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSourceExpression.objectCompare (p->mAttribute_mSourceExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mOperator.objectCompare (p->mAttribute_mOperator) ;
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

GALGAS_varOperatorAssignInstructionAST GALGAS_varOperatorAssignInstructionAST::constructor_new (const GALGAS_accessList & inAttribute_mAccessList,
                                                                                                const GALGAS_location & inAttribute_mTargetErrorLocation,
                                                                                                const GALGAS_expressionAST & inAttribute_mSourceExpression,
                                                                                                const GALGAS_operatorAssignKind & inAttribute_mOperator
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_varOperatorAssignInstructionAST result ;
  if (inAttribute_mAccessList.isValid () && inAttribute_mTargetErrorLocation.isValid () && inAttribute_mSourceExpression.isValid () && inAttribute_mOperator.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_varOperatorAssignInstructionAST (inAttribute_mAccessList, inAttribute_mTargetErrorLocation, inAttribute_mSourceExpression, inAttribute_mOperator COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_accessList GALGAS_varOperatorAssignInstructionAST::getter_mAccessList (UNUSED_LOCATION_ARGS) const {
  GALGAS_accessList result ;
  if (NULL != mObjectPtr) {
    const cPtr_varOperatorAssignInstructionAST * p = (const cPtr_varOperatorAssignInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varOperatorAssignInstructionAST) ;
    result = p->mAttribute_mAccessList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_accessList cPtr_varOperatorAssignInstructionAST::getter_mAccessList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAccessList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_varOperatorAssignInstructionAST::getter_mTargetErrorLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_varOperatorAssignInstructionAST * p = (const cPtr_varOperatorAssignInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varOperatorAssignInstructionAST) ;
    result = p->mAttribute_mTargetErrorLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_varOperatorAssignInstructionAST::getter_mTargetErrorLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTargetErrorLocation ;
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

GALGAS_operatorAssignKind GALGAS_varOperatorAssignInstructionAST::getter_mOperator (UNUSED_LOCATION_ARGS) const {
  GALGAS_operatorAssignKind result ;
  if (NULL != mObjectPtr) {
    const cPtr_varOperatorAssignInstructionAST * p = (const cPtr_varOperatorAssignInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varOperatorAssignInstructionAST) ;
    result = p->mAttribute_mOperator ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operatorAssignKind cPtr_varOperatorAssignInstructionAST::getter_mOperator (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOperator ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                              Pointer class for @varOperatorAssignInstructionAST class                               *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_varOperatorAssignInstructionAST::cPtr_varOperatorAssignInstructionAST (const GALGAS_accessList & in_mAccessList,
                                                                            const GALGAS_location & in_mTargetErrorLocation,
                                                                            const GALGAS_expressionAST & in_mSourceExpression,
                                                                            const GALGAS_operatorAssignKind & in_mOperator
                                                                            COMMA_LOCATION_ARGS) :
cPtr_instructionAST (THERE),
mAttribute_mAccessList (in_mAccessList),
mAttribute_mTargetErrorLocation (in_mTargetErrorLocation),
mAttribute_mSourceExpression (in_mSourceExpression),
mAttribute_mOperator (in_mOperator) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_varOperatorAssignInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varOperatorAssignInstructionAST ;
}

void cPtr_varOperatorAssignInstructionAST::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "[@varOperatorAssignInstructionAST:" ;
  mAttribute_mAccessList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mTargetErrorLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mSourceExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mOperator.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_varOperatorAssignInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_varOperatorAssignInstructionAST (mAttribute_mAccessList, mAttribute_mTargetErrorLocation, mAttribute_mSourceExpression, mAttribute_mOperator COMMA_THERE)) ;
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
        GALGAS_location location_6 (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("embedded-sample-code.galgas", 29)).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_6, GALGAS_string ("there is no '").add_operation (var_path_854, inCompiler COMMA_SOURCE_FILE ("embedded-sample-code.galgas", 29)).add_operation (GALGAS_string ("' embedded file"), inCompiler COMMA_SOURCE_FILE ("embedded-sample-code.galgas", 29))  COMMA_SOURCE_FILE ("embedded-sample-code.galgas", 29)) ;
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
  cEnumerator_controlRegisterDeclarationListAST enumerator_5397 (temp_0, kEnumeration_up) ;
  while (enumerator_5397.hasCurrentObject ()) {
    GALGAS_lstring var_typeName_5417 = GALGAS_lstring::constructor_new (GALGAS_string ("$").add_operation (enumerator_5397.current_mRegisterTypeName (HERE).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 141)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 141)), enumerator_5397.current_mRegisterTypeName (HERE).mAttribute_location  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 141)) ;
    {
    ioArgument_ioGraph.setter_noteNode (var_typeName_5417 COMMA_SOURCE_FILE ("declaration-control-register.galgas", 142)) ;
    }
    enumerator_5397.gotoNextObject () ;
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
    cEnumerator_taskVarListAST enumerator_6335 (enumerator_6165.current (HERE).mAttribute_mVarList, kEnumeration_up) ;
    while (enumerator_6335.hasCurrentObject ()) {
      extensionMethod_enterInContext (enumerator_6335.current (HERE), ioArgument_ioContext, ioArgument_ioGlobalLiteralStringMap, var_propertyList_6221, var_propertyMap_6255, var_initialValueList_6296, inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 176)) ;
      enumerator_6335.gotoNextObject () ;
    }
    {
    ioArgument_ioContext.mAttribute_mTypeMap.setter_insertType (enumerator_6165.current (HERE).mAttribute_mTaskName, GALGAS_string ("%").add_operation (GALGAS_string ("$").add_operation (enumerator_6165.current (HERE).mAttribute_mTaskName.getter_string (SOURCE_FILE ("declaration-task.galgas", 187)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 187)).getter_assemblerRepresentation (SOURCE_FILE ("declaration-task.galgas", 187)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 187)), GALGAS_typeKind::constructor_structure (var_propertyMap_6255, var_propertyList_6221  COMMA_SOURCE_FILE ("declaration-task.galgas", 188)), GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("declaration-task.galgas", 189)), GALGAS_bool (false), GALGAS_bool (false), GALGAS_bool (false), GALGAS_bool (false), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-task.galgas", 194)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 185)) ;
    }
    ioArgument_ioContext.mAttribute_mGlobalTaskVariableList.addAssign_operation (enumerator_6165.current (HERE).mAttribute_mTaskName.mAttribute_string, enumerator_6165.current (HERE).mAttribute_mTaskName.mAttribute_string, GALGAS_valueIR::constructor_llvmStructureConstant (var_initialValueList_6296  COMMA_SOURCE_FILE ("declaration-task.galgas", 196))  COMMA_SOURCE_FILE ("declaration-task.galgas", 196)) ;
    extensionMethod_enterInContext (enumerator_6165.current (HERE).mAttribute_mTaskProcList, GALGAS_string ("$").add_operation (enumerator_6165.current (HERE).mAttribute_mTaskName.getter_string (SOURCE_FILE ("declaration-task.galgas", 198)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 198)), ioArgument_ioContext, inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 198)) ;
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
  GALGAS_stringset var_prioritySet_10313 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("declaration-task.galgas", 275)) ;
  const GALGAS_taskList temp_0 = inObject ;
  cEnumerator_taskList enumerator_10337 (temp_0, kEnumeration_up) ;
  while (enumerator_10337.hasCurrentObject ()) {
    extensionMethod_semanticAnalysis (enumerator_10337.current (HERE), constinArgument_inContext, ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 277)) ;
    GALGAS_string var_priorityString_10503 = enumerator_10337.current (HERE).mAttribute_mPriority.mAttribute_bigint.getter_string (SOURCE_FILE ("declaration-task.galgas", 282)) ;
    const enumGalgasBool test_1 = var_prioritySet_10313.getter_hasKey (var_priorityString_10503 COMMA_SOURCE_FILE ("declaration-task.galgas", 283)).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_location location_2 (enumerator_10337.current (HERE).mAttribute_mPriority.getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_2, GALGAS_string ("duplicate priority")  COMMA_SOURCE_FILE ("declaration-task.galgas", 284)) ;
    }
    var_prioritySet_10313.addAssign_operation (var_priorityString_10503  COMMA_SOURCE_FILE ("declaration-task.galgas", 286)) ;
    enumerator_10337.gotoNextObject () ;
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
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("Task self terminate service"), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 422)), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 422)) ;
  GALGAS_string var_selfTerminateImplementationName_15828 = function_llvmNameForServiceImplementation (function_llvmNameForTaskSelfTerminateService (inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 423)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 423)) ;
  GALGAS_string var_selfTerminateCallName_15933 = function_llvmNameForServiceCall (function_llvmNameForTaskSelfTerminateService (inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 424)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 424)) ;
  ioArgument_ioServiceList.addAssign_operation (var_selfTerminateCallName_15933, var_selfTerminateImplementationName_15828  COMMA_SOURCE_FILE ("declaration-task.galgas", 425)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("declare void @").add_operation (var_selfTerminateCallName_15933, inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 426)).add_operation (GALGAS_string (" () nounwind noreturn\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 426)), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 426)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("Task variables"), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 428)), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 428)) ;
  cEnumerator_globalTaskVariableList enumerator_16334 (constinArgument_inGenerationContext.mAttribute_mGlobalTaskVariableList, kEnumeration_up) ;
  while (enumerator_16334.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("@").add_operation (function_llvmNameForTaskGlobalVar (enumerator_16334.current_mTaskName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 430)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 430)), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 430)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" = internal global %"), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 431)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("$").add_operation (enumerator_16334.current_mTaskTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 432)).getter_assemblerRepresentation (SOURCE_FILE ("declaration-task.galgas", 432)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 432)), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 432)) ;
    GALGAS_string var_initialString_16530 = extensionGetter_llvmName (enumerator_16334.current_mInitialValue (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 433)) ;
    const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_initialString_16530.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("zeroinitializer"), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 435)) ;
    }else if (kBoolFalse == test_0) {
      ioArgument_ioLLVMcode.plusAssign_operation(var_initialString_16530, inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 437)) ;
    }
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 439)) ;
    enumerator_16334.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 441)) ;
  GALGAS_taskSortedListIR var_orderedTaskList_16793 = GALGAS_taskSortedListIR::constructor_emptySortedList (SOURCE_FILE ("declaration-task.galgas", 443)) ;
  const GALGAS_taskMapIR temp_1 = inObject ;
  cEnumerator_taskMapIR enumerator_16817 (temp_1, kEnumeration_up) ;
  while (enumerator_16817.hasCurrentObject ()) {
    var_orderedTaskList_16793.addAssign_operation (enumerator_16817.current (HERE).mAttribute_lkey.mAttribute_string, enumerator_16817.current (HERE).mAttribute_mPriority, enumerator_16817.current (HERE).mAttribute_mStackSize, enumerator_16817.current (HERE).mAttribute_mAllocaList, enumerator_16817.current (HERE).mAttribute_mInitInstructionListIR  COMMA_SOURCE_FILE ("declaration-task.galgas", 445)) ;
    enumerator_16817.gotoNextObject () ;
  }
  cEnumerator_taskSortedListIR enumerator_17020 (var_orderedTaskList_16793, kEnumeration_up) ;
  while (enumerator_17020.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("Task ").add_operation (enumerator_17020.current (HERE).mAttribute_mTaskName, inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 449)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 449)), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 449)) ;
    GALGAS_string var_assemblerTaskName_17112 = GALGAS_string ("$").add_operation (enumerator_17020.current (HERE).mAttribute_mTaskName, inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 450)).getter_assemblerRepresentation (SOURCE_FILE ("declaration-task.galgas", 450)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(function_stackNameForTask (enumerator_17020.current (HERE).mAttribute_mTaskName, inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 451)).add_operation (GALGAS_string (" = global ["), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 451)).add_operation (enumerator_17020.current (HERE).mAttribute_mStackSize.divide_operation (GALGAS_uint ((uint32_t) 4U).getter_bigint (SOURCE_FILE ("declaration-task.galgas", 451)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 451)).getter_string (SOURCE_FILE ("declaration-task.galgas", 451)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 451)).add_operation (GALGAS_string (" x i32] zeroinitializer\n"), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 451)), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 451)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 452)) ;
    GALGAS_string var_effectiveParameter_17334 = GALGAS_string ("(%").add_operation (var_assemblerTaskName_17112, inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 453)).add_operation (GALGAS_string (" * @"), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 453)).add_operation (function_llvmNameForTaskGlobalVar (enumerator_17020.current (HERE).mAttribute_mTaskName, inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 453)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 453)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 453)) ;
    GALGAS_string var_formalArgument_17444 = GALGAS_string ("(%").add_operation (var_assemblerTaskName_17112, inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 454)).add_operation (GALGAS_string (" * %self)"), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 454)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(function_llvmSeparatorLine (inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 455)), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 455)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 456)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal void ").add_operation (function_initNameForTaskType (enumerator_17020.current (HERE).mAttribute_mTaskName, inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 457)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 457)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 457)).add_operation (var_formalArgument_17444, inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 457)).add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 457)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 457)).add_operation (GALGAS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 457)), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 457)) ;
    cEnumerator_allocaList enumerator_17731 (enumerator_17020.current (HERE).mAttribute_mAllocaList, kEnumeration_up) ;
    while (enumerator_17731.hasCurrentObject ()) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (function_llvmNameForLocalVariable (enumerator_17731.current_mVarName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 459)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 459)).add_operation (GALGAS_string (" = alloca "), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 459)).add_operation (enumerator_17731.current_mType (HERE).getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 459)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 459)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 459)), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 459)) ;
      enumerator_17731.gotoNextObject () ;
    }
    extensionMethod_instructionListLLVMCode (enumerator_17020.current (HERE).mAttribute_mInitInstructionListIR, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 461)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 462)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
      "\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 463)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(function_llvmSeparatorLine (inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 464)), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 464)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 465)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal void ").add_operation (function_mainRoutineNameForTask (enumerator_17020.current (HERE).mAttribute_mTaskName, inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 466)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 466)).add_operation (GALGAS_string (" ()"), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 466)).add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 466)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 466)).add_operation (GALGAS_string ("noreturn {\n"), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 466)), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 466)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void ").add_operation (function_initNameForTaskType (enumerator_17020.current (HERE).mAttribute_mTaskName, inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 467)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 467)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 467)).add_operation (var_effectiveParameter_17334, inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 467)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 467)), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 467)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @").add_operation (function_llvmNameForFunction (GALGAS_string ("$").add_operation (enumerator_17020.current (HERE).mAttribute_mTaskName, inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 468)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 468)).add_operation (function_llvmNameForTaskLoopFunction (inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 468)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 468)).add_operation (GALGAS_string ("()"), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 468)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 468)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 468)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 468)).add_operation (var_effectiveParameter_17334, inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 468)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 468)), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 468)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @").add_operation (var_selfTerminateCallName_15933, inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 469)).add_operation (GALGAS_string (" ()\n"), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 469)), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 469)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  unreachable\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 470)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
      "\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 471)) ;
    enumerator_17020.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("Start tasks"), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 474)), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 474)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal void @start.tasks ()").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 475)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 475)).add_operation (GALGAS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 475)), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 475)) ;
  cEnumerator_taskSortedListIR enumerator_18810 (var_orderedTaskList_16793, kEnumeration_up) ;
  GALGAS_uint index_18786 ((uint32_t) 0) ;
  while (enumerator_18810.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (function_stackAddressForTask (enumerator_18810.current (HERE).mAttribute_mTaskName, inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 477)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 477)), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 477)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" = getelementptr inbounds [").add_operation (enumerator_18810.current (HERE).mAttribute_mStackSize.divide_operation (GALGAS_uint ((uint32_t) 4U).getter_bigint (SOURCE_FILE ("declaration-task.galgas", 478)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 478)).getter_string (SOURCE_FILE ("declaration-task.galgas", 478)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 478)).add_operation (GALGAS_string (" x i32], "), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 478)), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 478)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("[").add_operation (enumerator_18810.current (HERE).mAttribute_mStackSize.divide_operation (GALGAS_uint ((uint32_t) 4U).getter_bigint (SOURCE_FILE ("declaration-task.galgas", 479)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 479)).getter_string (SOURCE_FILE ("declaration-task.galgas", 479)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 479)).add_operation (GALGAS_string (" x i32]* "), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 479)).add_operation (function_stackNameForTask (enumerator_18810.current (HERE).mAttribute_mTaskName, inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 479)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 479)), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 479)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", i32 0, i32 0\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 480)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @kernel_create_task ("), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 481)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("i32 ").add_operation (index_18786.getter_string (SOURCE_FILE ("declaration-task.galgas", 482)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 482)), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 482)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", i32* ").add_operation (function_stackAddressForTask (enumerator_18810.current (HERE).mAttribute_mTaskName, inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 483)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 483)), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 483)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", i32 ").add_operation (enumerator_18810.current (HERE).mAttribute_mStackSize.getter_string (SOURCE_FILE ("declaration-task.galgas", 484)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 484)), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 484)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", void ()* ").add_operation (function_mainRoutineNameForTask (enumerator_18810.current (HERE).mAttribute_mTaskName, inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 485)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 485)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 485)), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 485)) ;
    enumerator_18810.gotoNextObject () ;
    index_18786.increment_operation (inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 476)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 487)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 488)) ;
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
  cEnumerator_initList enumerator_2310 (temp_0, kEnumeration_up) ;
  while (enumerator_2310.hasCurrentObject ()) {
    extensionMethod_noteInstructionListTypesInPrecedenceGraph (enumerator_2310.current_mInstructionList (HERE), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 58)) ;
    enumerator_2310.gotoNextObject () ;
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
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("Init"), inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 207)), inCompiler  COMMA_SOURCE_FILE ("declaration-init.galgas", 207)) ;
  const GALGAS_initListIR temp_0 = inObject ;
  cEnumerator_initListIR enumerator_8230 (temp_0, kEnumeration_up) ;
  while (enumerator_8230.hasCurrentObject ()) {
    GALGAS_bool var_generate_8252 ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_8230.current (HERE).mAttribute_mInitRequiredByProcList.getter_length (SOURCE_FILE ("declaration-init.galgas", 210)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_1) {
      var_generate_8252 = GALGAS_bool (true) ;
    }else if (kBoolFalse == test_1) {
      var_generate_8252 = GALGAS_bool (false) ;
      cEnumerator__32_lstringlist enumerator_8424 (enumerator_8230.current (HERE).mAttribute_mInitRequiredByProcList, kEnumeration_up) ;
      bool bool_2 = var_generate_8252.operator_not (SOURCE_FILE ("declaration-init.galgas", 214)).isValidAndTrue () ;
      if (enumerator_8424.hasCurrentObject () && bool_2) {
        while (enumerator_8424.hasCurrentObject () && bool_2) {
          var_generate_8252 = constinArgument_inProcedureMapIR.getter_hasKey (GALGAS_string ("$").add_operation (enumerator_8424.current_mValue_30_ (HERE).getter_string (SOURCE_FILE ("declaration-init.galgas", 215)), inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 215)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 215)).add_operation (enumerator_8424.current_mValue_31_ (HERE).mAttribute_string, inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 215)) COMMA_SOURCE_FILE ("declaration-init.galgas", 215)) ;
          enumerator_8424.gotoNextObject () ;
          if (enumerator_8424.hasCurrentObject ()) {
            bool_2 = var_generate_8252.operator_not (SOURCE_FILE ("declaration-init.galgas", 214)).isValidAndTrue () ;
          }
        }
      }
    }
    const enumGalgasBool test_3 = var_generate_8252.boolEnum () ;
    if (kBoolTrue == test_3) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal void @init.").add_operation (enumerator_8230.current (HERE).mAttribute_mPriority.getter_string (SOURCE_FILE ("declaration-init.galgas", 219)), inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 219)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 219)), inCompiler  COMMA_SOURCE_FILE ("declaration-init.galgas", 219)) ;
      const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, enumerator_8230.current (HERE).mAttribute_mSelfType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-init.galgas", 220)))).boolEnum () ;
      if (kBoolTrue == test_4) {
        ioArgument_ioLLVMcode.plusAssign_operation(enumerator_8230.current (HERE).mAttribute_mSelfType.getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 221)).add_operation (GALGAS_string (" * %self"), inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 221)), inCompiler  COMMA_SOURCE_FILE ("declaration-init.galgas", 221)) ;
      }
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 223)), inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 223)).add_operation (GALGAS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 223)), inCompiler  COMMA_SOURCE_FILE ("declaration-init.galgas", 223)) ;
      cEnumerator_allocaList enumerator_8862 (enumerator_8230.current (HERE).mAttribute_mAllocaList, kEnumeration_up) ;
      while (enumerator_8862.hasCurrentObject ()) {
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (function_llvmNameForLocalVariable (enumerator_8862.current_mVarName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 225)), inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 225)).add_operation (GALGAS_string (" = alloca "), inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 225)).add_operation (enumerator_8862.current_mType (HERE).getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 225)), inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 225)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 225)), inCompiler  COMMA_SOURCE_FILE ("declaration-init.galgas", 225)) ;
        enumerator_8862.gotoNextObject () ;
      }
      extensionMethod_instructionListLLVMCode (enumerator_8230.current (HERE).mAttribute_mInstructionListIR, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 227)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-init.galgas", 228)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
        "\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-init.galgas", 229)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(function_llvmSeparatorLine (inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 230)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 230)), inCompiler  COMMA_SOURCE_FILE ("declaration-init.galgas", 230)) ;
    }
    enumerator_8230.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal void @init ()").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 233)), inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 233)).add_operation (GALGAS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 233)), inCompiler  COMMA_SOURCE_FILE ("declaration-init.galgas", 233)) ;
  const GALGAS_initListIR temp_5 = inObject ;
  cEnumerator_initListIR enumerator_9322 (temp_5, kEnumeration_up) ;
  while (enumerator_9322.hasCurrentObject ()) {
    GALGAS_bool var_generate_9344 ;
    const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, enumerator_9322.current (HERE).mAttribute_mInitRequiredByProcList.getter_length (SOURCE_FILE ("declaration-init.galgas", 236)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_6) {
      var_generate_9344 = GALGAS_bool (true) ;
    }else if (kBoolFalse == test_6) {
      var_generate_9344 = GALGAS_bool (false) ;
      cEnumerator__32_lstringlist enumerator_9516 (enumerator_9322.current (HERE).mAttribute_mInitRequiredByProcList, kEnumeration_up) ;
      bool bool_7 = var_generate_9344.operator_not (SOURCE_FILE ("declaration-init.galgas", 240)).isValidAndTrue () ;
      if (enumerator_9516.hasCurrentObject () && bool_7) {
        while (enumerator_9516.hasCurrentObject () && bool_7) {
          var_generate_9344 = constinArgument_inProcedureMapIR.getter_hasKey (GALGAS_string ("$").add_operation (enumerator_9516.current_mValue_30_ (HERE).getter_string (SOURCE_FILE ("declaration-init.galgas", 241)), inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 241)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 241)).add_operation (enumerator_9516.current_mValue_31_ (HERE).mAttribute_string, inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 241)) COMMA_SOURCE_FILE ("declaration-init.galgas", 241)) ;
          enumerator_9516.gotoNextObject () ;
          if (enumerator_9516.hasCurrentObject ()) {
            bool_7 = var_generate_9344.operator_not (SOURCE_FILE ("declaration-init.galgas", 240)).isValidAndTrue () ;
          }
        }
      }
    }
    const enumGalgasBool test_8 = var_generate_9344.boolEnum () ;
    if (kBoolTrue == test_8) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @init.").add_operation (enumerator_9322.current (HERE).mAttribute_mPriority.getter_string (SOURCE_FILE ("declaration-init.galgas", 245)), inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 245)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 245)), inCompiler  COMMA_SOURCE_FILE ("declaration-init.galgas", 245)) ;
      const enumGalgasBool test_9 = GALGAS_bool (kIsNotEqual, enumerator_9322.current (HERE).mAttribute_mSelfType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-init.galgas", 246)))).boolEnum () ;
      if (kBoolTrue == test_9) {
        ioArgument_ioLLVMcode.plusAssign_operation(enumerator_9322.current (HERE).mAttribute_mSelfType.getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 247)).add_operation (GALGAS_string (" * @"), inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 247)).add_operation (function_llvmNameForGlobalVariable (enumerator_9322.current (HERE).mAttribute_mGlobalVariable, inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 247)), inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 247)), inCompiler  COMMA_SOURCE_FILE ("declaration-init.galgas", 247)) ;
      }
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-init.galgas", 249)) ;
    }
    enumerator_9322.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-init.galgas", 252)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-init.galgas", 253)) ;
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
//                            Extension method '@functionDeclarationListAST enterInContext'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_enterInContext (const GALGAS_functionDeclarationListAST inObject,
                                     const GALGAS_string constinArgument_inSelfTypeName,
                                     GALGAS_semanticContext & ioArgument_ioContext,
                                     C_Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_functionDeclarationListAST temp_0 = inObject ;
  cEnumerator_functionDeclarationListAST enumerator_6794 (temp_0, kEnumeration_up) ;
  while (enumerator_6794.hasCurrentObject ()) {
    GALGAS_string var_mangledArguments_6839 = GALGAS_string ("(") ;
    GALGAS_procedureSignature var_signature_6879 = GALGAS_procedureSignature::constructor_emptyList (SOURCE_FILE ("declaration-func.galgas", 196)) ;
    cEnumerator_procFormalArgumentList enumerator_6995 (enumerator_6794.current (HERE).mAttribute_mFunctionFormalArgumentList, kEnumeration_up) ;
    while (enumerator_6995.hasCurrentObject ()) {
      GALGAS_unifiedTypeMap_2D_proxy var_typeProxy_7018 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.mAttribute_mTypeMap, enumerator_6995.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("declaration-func.galgas", 198)) ;
      var_signature_6879.addAssign_operation (enumerator_6995.current_mFormalArgumentPassingMode (HERE), enumerator_6995.current_mSelector (HERE).mAttribute_string, var_typeProxy_7018  COMMA_SOURCE_FILE ("declaration-func.galgas", 199)) ;
      var_mangledArguments_6839.plusAssign_operation(extensionGetter_formalPassingModeString (enumerator_6995.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 200)).add_operation (enumerator_6995.current_mSelector (HERE).getter_string (SOURCE_FILE ("declaration-func.galgas", 200)), inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 200)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 200)), inCompiler  COMMA_SOURCE_FILE ("declaration-func.galgas", 200)) ;
      enumerator_6995.gotoNextObject () ;
    }
    var_mangledArguments_6839.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("declaration-func.galgas", 202)) ;
    GALGAS_unifiedTypeMap_2D_proxy temp_1 ;
    const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_6794.current (HERE).mAttribute_mFunctionReturnTypeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_2) {
      temp_1 = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-func.galgas", 205)) ;
    }else if (kBoolFalse == test_2) {
      temp_1 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.mAttribute_mTypeMap, enumerator_6794.current (HERE).mAttribute_mFunctionReturnTypeName, inCompiler  COMMA_SOURCE_FILE ("declaration-func.galgas", 207)) ;
    }
    GALGAS_unifiedTypeMap_2D_proxy var_returnType_7341 = temp_1 ;
    GALGAS_modeMap var_procedureModeMap_7589 = GALGAS_modeMap::constructor_emptyMap (SOURCE_FILE ("declaration-func.galgas", 210)) ;
    cEnumerator_lstringlist enumerator_7636 (enumerator_6794.current (HERE).mAttribute_mFunctionModeList, kEnumeration_up) ;
    while (enumerator_7636.hasCurrentObject ()) {
      {
      var_procedureModeMap_7589.setter_insertKey (enumerator_7636.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 212)) ;
      }
      enumerator_7636.gotoNextObject () ;
    }
    GALGAS_bool var_weakProcedure_7733 = GALGAS_bool (false) ;
    GALGAS_bool var_canMutateProperties_7769 = GALGAS_bool (false) ;
    GALGAS_bool var_canAccessProperties_7805 = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_7869 (enumerator_6794.current (HERE).mAttribute_mFunctionAttributeList, kEnumeration_up) ;
    bool bool_3 = var_weakProcedure_7733.operator_not (SOURCE_FILE ("declaration-func.galgas", 218)).isValidAndTrue () ;
    if (enumerator_7869.hasCurrentObject () && bool_3) {
      while (enumerator_7869.hasCurrentObject () && bool_3) {
        const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, enumerator_7869.current_mValue (HERE).mAttribute_string.objectCompare (function_weakAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 219)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          var_weakProcedure_7733 = GALGAS_bool (true) ;
        }
        const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, enumerator_7869.current_mValue (HERE).mAttribute_string.objectCompare (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 222)))).boolEnum () ;
        if (kBoolTrue == test_5) {
          var_canMutateProperties_7769 = GALGAS_bool (true) ;
        }
        const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, enumerator_7869.current_mValue (HERE).mAttribute_string.objectCompare (function_userAccessAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 225)))).boolEnum () ;
        if (kBoolTrue == test_6) {
          var_canAccessProperties_7805 = GALGAS_bool (true) ;
          GALGAS_bool test_7 = var_canAccessProperties_7805 ;
          if (kBoolTrue == test_7.boolEnum ()) {
            test_7 = var_procedureModeMap_7589.getter_hasKey (function_userModeName (inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 227)) COMMA_SOURCE_FILE ("declaration-func.galgas", 227)).operator_not (SOURCE_FILE ("declaration-func.galgas", 227)) ;
          }
          const enumGalgasBool test_8 = test_7.boolEnum () ;
          if (kBoolTrue == test_8) {
            GALGAS_location location_9 (enumerator_7869.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
            inCompiler->emitSemanticError (location_9, GALGAS_string ("useless @").add_operation (enumerator_7869.current_mValue (HERE).getter_string (SOURCE_FILE ("declaration-func.galgas", 228)), inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 228)).add_operation (GALGAS_string (" attribute: function is never executed in `"), inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 228)).add_operation (function_userModeName (inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 228)), inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 228)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 228))  COMMA_SOURCE_FILE ("declaration-func.galgas", 228)) ;
          }
        }
        enumerator_7869.gotoNextObject () ;
        if (enumerator_7869.hasCurrentObject ()) {
          bool_3 = var_weakProcedure_7733.operator_not (SOURCE_FILE ("declaration-func.galgas", 218)).isValidAndTrue () ;
        }
      }
    }
    const enumGalgasBool test_10 = var_procedureModeMap_7589.getter_hasKey (function_userModeName (inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 232)) COMMA_SOURCE_FILE ("declaration-func.galgas", 232)).operator_not (SOURCE_FILE ("declaration-func.galgas", 232)).boolEnum () ;
    if (kBoolTrue == test_10) {
      var_canAccessProperties_7805 = GALGAS_bool (true) ;
    }
    GALGAS_lstring var_routineMangledName_8573 = GALGAS_lstring::constructor_new (constinArgument_inSelfTypeName.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 237)).add_operation (enumerator_6794.current (HERE).mAttribute_mFunctionName.getter_string (SOURCE_FILE ("declaration-func.galgas", 237)), inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 237)).add_operation (var_mangledArguments_6839, inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 237)), enumerator_6794.current (HERE).mAttribute_mFunctionName.mAttribute_location  COMMA_SOURCE_FILE ("declaration-func.galgas", 236)) ;
    const enumGalgasBool test_11 = ioArgument_ioContext.mAttribute_mRoutineMapForContext.getter_hasKey (var_routineMangledName_8573.mAttribute_string COMMA_SOURCE_FILE ("declaration-func.galgas", 240)).boolEnum () ;
    if (kBoolTrue == test_11) {
      GALGAS_bool var_weak_8804 = ioArgument_ioContext.mAttribute_mRoutineMapForContext.getter_mWeakForKey (var_routineMangledName_8573.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 241)) ;
      GALGAS_bool test_12 = var_weakProcedure_7733 ;
      if (kBoolTrue == test_12.boolEnum ()) {
        test_12 = var_weak_8804.operator_not (SOURCE_FILE ("declaration-func.galgas", 242)) ;
      }
      const enumGalgasBool test_13 = test_12.boolEnum () ;
      if (kBoolTrue == test_13) {
      }else if (kBoolFalse == test_13) {
        GALGAS_bool test_14 = var_weakProcedure_7733 ;
        if (kBoolTrue == test_14.boolEnum ()) {
          test_14 = var_weak_8804 ;
        }
        const enumGalgasBool test_15 = test_14.boolEnum () ;
        if (kBoolTrue == test_15) {
          GALGAS_location location_16 (enumerator_6794.current (HERE).mAttribute_mFunctionName.getter_location (HERE)) ; // Implicit use of 'location' getter
          inCompiler->emitSemanticError (location_16, GALGAS_string ("this weak procedure overrides a weak procedure")  COMMA_SOURCE_FILE ("declaration-func.galgas", 245)) ;
        }else if (kBoolFalse == test_15) {
          GALGAS_bool test_17 = var_weakProcedure_7733.operator_not (SOURCE_FILE ("declaration-func.galgas", 246)) ;
          if (kBoolTrue == test_17.boolEnum ()) {
            test_17 = var_weak_8804 ;
          }
          const enumGalgasBool test_18 = test_17.boolEnum () ;
          if (kBoolTrue == test_18) {
            {
            GALGAS_lstring joker_9213_10 ; // Joker input parameter
            GALGAS_bool joker_9213_9 ; // Joker input parameter
            GALGAS_modeMap joker_9213_8 ; // Joker input parameter
            GALGAS_procedureSignature joker_9213_7 ; // Joker input parameter
            GALGAS_routineKind joker_9213_6 ; // Joker input parameter
            GALGAS_bool joker_9213_5 ; // Joker input parameter
            GALGAS_unifiedTypeMap_2D_proxy joker_9213_4 ; // Joker input parameter
            GALGAS_bool joker_9213_3 ; // Joker input parameter
            GALGAS_bool joker_9213_2 ; // Joker input parameter
            GALGAS_bool joker_9213_1 ; // Joker input parameter
            ioArgument_ioContext.mAttribute_mRoutineMapForContext.setter_removeKey (var_routineMangledName_8573, joker_9213_10, joker_9213_9, joker_9213_8, joker_9213_7, joker_9213_6, joker_9213_5, joker_9213_4, joker_9213_3, joker_9213_2, joker_9213_1, inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 247)) ;
            }
            {
            ioArgument_ioContext.mAttribute_mRoutineMapForContext.setter_insertKey (var_routineMangledName_8573, var_routineMangledName_8573, enumerator_6794.current (HERE).mAttribute_mPublicFunction, var_procedureModeMap_7589, var_signature_6879, GALGAS_routineKind::constructor_function (SOURCE_FILE ("declaration-func.galgas", 254)), var_weakProcedure_7733, var_returnType_7341, GALGAS_bool (false), var_canMutateProperties_7769, var_canAccessProperties_7805, inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 248)) ;
            }
          }else if (kBoolFalse == test_18) {
            {
            ioArgument_ioContext.mAttribute_mRoutineMapForContext.setter_insertKey (var_routineMangledName_8573, var_routineMangledName_8573, enumerator_6794.current (HERE).mAttribute_mPublicFunction, var_procedureModeMap_7589, var_signature_6879, GALGAS_routineKind::constructor_function (SOURCE_FILE ("declaration-func.galgas", 268)), var_weakProcedure_7733, var_returnType_7341, GALGAS_bool (false), var_canMutateProperties_7769, var_canAccessProperties_7805, inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 262)) ;
            }
          }
        }
      }
    }else if (kBoolFalse == test_11) {
      {
      ioArgument_ioContext.mAttribute_mRoutineMapForContext.setter_insertKey (var_routineMangledName_8573, var_routineMangledName_8573, enumerator_6794.current (HERE).mAttribute_mPublicFunction, var_procedureModeMap_7589, var_signature_6879, GALGAS_routineKind::constructor_function (SOURCE_FILE ("declaration-func.galgas", 283)), var_weakProcedure_7733, var_returnType_7341, GALGAS_bool (false), var_canMutateProperties_7769, var_canAccessProperties_7805, inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 277)) ;
      }
    }
    enumerator_6794.gotoNextObject () ;
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
  cEnumerator_functionDeclarationListAST enumerator_11231 (temp_0, kEnumeration_up) ;
  while (enumerator_11231.hasCurrentObject ()) {
    GALGAS_bool var_warnIfUnused_11255 = GALGAS_bool (true) ;
    GALGAS_bool var_globalProcedure_11286 = GALGAS_bool (false) ;
    GALGAS_bool var_weakProcedure_11316 = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_11380 (enumerator_11231.current (HERE).mAttribute_mFunctionAttributeList, kEnumeration_up) ;
    while (enumerator_11380.hasCurrentObject ()) {
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_11380.current_mValue (HERE).mAttribute_string.objectCompare (function_noWarningIfUnusedAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 309)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        const enumGalgasBool test_2 = var_warnIfUnused_11255.operator_not (SOURCE_FILE ("declaration-func.galgas", 310)).boolEnum () ;
        if (kBoolTrue == test_2) {
          GALGAS_location location_3 (enumerator_11380.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
          inCompiler->emitSemanticError (location_3, GALGAS_string ("duplicated @").add_operation (function_noWarningIfUnusedAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 311)), inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 311)).add_operation (GALGAS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 311))  COMMA_SOURCE_FILE ("declaration-func.galgas", 311)) ;
        }
        var_warnIfUnused_11255 = GALGAS_bool (false) ;
      }else if (kBoolFalse == test_1) {
        const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, enumerator_11380.current_mValue (HERE).mAttribute_string.objectCompare (function_globalAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 314)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          const enumGalgasBool test_5 = var_globalProcedure_11286.boolEnum () ;
          if (kBoolTrue == test_5) {
            GALGAS_location location_6 (enumerator_11380.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
            inCompiler->emitSemanticError (location_6, GALGAS_string ("duplicated @").add_operation (function_globalAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 316)), inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 316)).add_operation (GALGAS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 316))  COMMA_SOURCE_FILE ("declaration-func.galgas", 316)) ;
          }
          var_globalProcedure_11286 = GALGAS_bool (true) ;
        }else if (kBoolFalse == test_4) {
          const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, enumerator_11380.current_mValue (HERE).mAttribute_string.objectCompare (function_weakAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 319)))).boolEnum () ;
          if (kBoolTrue == test_7) {
            const enumGalgasBool test_8 = var_weakProcedure_11316.boolEnum () ;
            if (kBoolTrue == test_8) {
              GALGAS_location location_9 (enumerator_11380.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
              inCompiler->emitSemanticError (location_9, GALGAS_string ("duplicated @").add_operation (function_weakAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 321)), inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 321)).add_operation (GALGAS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 321))  COMMA_SOURCE_FILE ("declaration-func.galgas", 321)) ;
            }
            var_weakProcedure_11316 = GALGAS_bool (true) ;
          }else if (kBoolFalse == test_7) {
            GALGAS_location location_10 (enumerator_11380.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
            inCompiler->emitSemanticError (location_10, GALGAS_string ("unknown attribute; available attributes are @").add_operation (function_noWarningIfUnusedAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 326)), inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 325)).add_operation (GALGAS_string (", @"), inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 326)).add_operation (function_weakAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 326)), inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 326)).add_operation (GALGAS_string (", @"), inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 326)).add_operation (function_globalAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 326)), inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 326))  COMMA_SOURCE_FILE ("declaration-func.galgas", 325)) ;
          }
        }
      }
      enumerator_11380.gotoNextObject () ;
    }
    {
    routine_routineSemanticAnalysis (inArgument_inReceiverType, GALGAS_routineKind::constructor_function (SOURCE_FILE ("declaration-func.galgas", 331)), enumerator_11231.current (HERE).mAttribute_mFunctionModeList, enumerator_11231.current (HERE).mAttribute_mFunctionName, enumerator_11231.current (HERE).mAttribute_mFunctionFormalArgumentList, enumerator_11231.current (HERE).mAttribute_mFunctionReturnTypeName, enumerator_11231.current (HERE).mAttribute_mFunctionInstructionList, enumerator_11231.current (HERE).mAttribute_mEndOfFunctionDeclaration, GALGAS_bool (true), GALGAS_bool (true), var_warnIfUnused_11255, var_globalProcedure_11286, var_weakProcedure_11316, GALGAS_accessKind::constructor_readWriteAccess (SOURCE_FILE ("declaration-func.galgas", 343)), constinArgument_inSemanticContext, ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct, inCompiler  COMMA_SOURCE_FILE ("declaration-func.galgas", 329)) ;
    }
    enumerator_11231.gotoNextObject () ;
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
  cEnumerator_externProcedureDeclarationListAST enumerator_2291 (temp_0, kEnumeration_up) ;
  while (enumerator_2291.hasCurrentObject ()) {
    cEnumerator_procFormalArgumentList enumerator_2360 (enumerator_2291.current_mProcFormalArgumentList (HERE), kEnumeration_up) ;
    while (enumerator_2360.hasCurrentObject ()) {
      GALGAS_lstring var_typeName_2382 = GALGAS_lstring::constructor_new (GALGAS_string ("$").add_operation (enumerator_2360.current_mFormalArgumentTypeName (HERE).getter_string (SOURCE_FILE ("declaration-extern-proc.galgas", 53)), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 53)), enumerator_2360.current_mFormalArgumentTypeName (HERE).mAttribute_location  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 53)) ;
      {
      ioArgument_ioGraph.setter_noteNode (var_typeName_2382 COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 54)) ;
      }
      enumerator_2360.gotoNextObject () ;
    }
    enumerator_2291.gotoNextObject () ;
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
  cEnumerator_externProcedureDeclarationListAST enumerator_3018 (temp_0, kEnumeration_up) ;
  while (enumerator_3018.hasCurrentObject ()) {
    extensionMethod_enterExternProcInContext (enumerator_3018.current (HERE), ioArgument_ioContext, inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 67)) ;
    enumerator_3018.gotoNextObject () ;
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
  cEnumerator_externProcedureDeclarationListAST enumerator_5275 (temp_0, kEnumeration_up) ;
  while (enumerator_5275.hasCurrentObject ()) {
    extensionMethod_externProcedureSemanticAnalysis (enumerator_5275.current (HERE), constinArgument_inContext, ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 121)) ;
    enumerator_5275.gotoNextObject () ;
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
  cEnumerator_externProcedureMapIR enumerator_8109 (temp_0, kEnumeration_up) ;
  while (enumerator_8109.hasCurrentObject ()) {
    extensionMethod_llvmPrototypeGeneration (enumerator_8109.current (HERE), ioArgument_ioLLVMcode, inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 197)) ;
    enumerator_8109.gotoNextObject () ;
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
        GALGAS_location location_2 (enumerator_3049.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_2, GALGAS_string ("only @xtr attribute is allowed here")  COMMA_SOURCE_FILE ("declaration-isr.galgas", 72)) ;
      }else if (kBoolFalse == test_1) {
        const enumGalgasBool test_3 = var_xtrAttribute_2996.boolEnum () ;
        if (kBoolTrue == test_3) {
          GALGAS_location location_4 (enumerator_3049.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
          inCompiler->emitSemanticError (location_4, GALGAS_string ("duplicate @xtr attribute")  COMMA_SOURCE_FILE ("declaration-isr.galgas", 74)) ;
        }else if (kBoolFalse == test_3) {
          var_xtrAttribute_2996 = GALGAS_bool (true) ;
        }
      }
      enumerator_3049.gotoNextObject () ;
    }
    GALGAS_stringset temp_5 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("declaration-isr.galgas", 80)) ;
    GALGAS_string temp_6 ;
    const enumGalgasBool test_7 = var_xtrAttribute_2996.boolEnum () ;
    if (kBoolTrue == test_7) {
      temp_6 = function_serviceModeName (inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 80)) ;
    }else if (kBoolFalse == test_7) {
      temp_6 = function_sectionModeName (inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 80)) ;
    }
    temp_5.addAssign_operation (temp_6  COMMA_SOURCE_FILE ("declaration-isr.galgas", 80)) ;
    GALGAS_stringset var_modeSet_3336 = temp_5 ;
    GALGAS_lstring var_routineNameForInvocationGraph_3471 = function_interruptNameForInvocationGraph (enumerator_2946.current (HERE).mAttribute_mISRName, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 82)) ;
    const enumGalgasBool test_8 = ioArgument_ioTemporaries.mAttribute_mSubprogramInvocationGraph.getter_isNodeDefined (var_routineNameForInvocationGraph_3471.mAttribute_string COMMA_SOURCE_FILE ("declaration-isr.galgas", 83)).operator_not (SOURCE_FILE ("declaration-isr.galgas", 83)).boolEnum () ;
    if (kBoolTrue == test_8) {
      {
      ioArgument_ioTemporaries.mAttribute_mSubprogramInvocationGraph.setter_addNode (var_routineNameForInvocationGraph_3471, var_routineNameForInvocationGraph_3471, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 84)) ;
      }
    }
    GALGAS_variableMap var_variableMap_3833 = function_initialVariableMap (var_routineNameForInvocationGraph_3471.mAttribute_string, constinArgument_inSemanticContext, GALGAS_bool (false), GALGAS_accessKind::constructor_readWriteAccess (SOURCE_FILE ("declaration-isr.galgas", 94)), GALGAS_bool (false), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-isr.galgas", 96)), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 90)) ;
    GALGAS_unifiedTypeMap_2D_proxy temp_9 ;
    const enumGalgasBool test_10 = GALGAS_bool (kIsEqual, enumerator_2946.current (HERE).mAttribute_mSelfTypeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_10) {
      temp_9 = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-isr.galgas", 100)) ;
    }else if (kBoolFalse == test_10) {
      temp_9 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_2946.current (HERE).mAttribute_mSelfTypeName, inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 102)) ;
    }
    GALGAS_unifiedTypeMap_2D_proxy var_selfType_4126 = temp_9 ;
    GALGAS_allocaList var_allocaList_4363 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("declaration-isr.galgas", 105)) ;
    GALGAS_instructionListIR var_instructionGenerationList_4417 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("declaration-isr.galgas", 106)) ;
    extensionMethod_analyzeRoutineInstructionList (enumerator_2946.current (HERE).mAttribute_mISRInstructionList, var_selfType_4126, GALGAS_bool (true), GALGAS_bool (true), var_routineNameForInvocationGraph_3471, constinArgument_inSemanticContext, var_modeSet_3336, var_modeSet_3336.getter_hasKey (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 114)) COMMA_SOURCE_FILE ("declaration-isr.galgas", 114)).operator_not (SOURCE_FILE ("declaration-isr.galgas", 114)), ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct.mAttribute_mStaticStringMap, var_variableMap_3833, var_allocaList_4363, var_instructionGenerationList_4417, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 107)) ;
    extensionMethod_deinitTopLevelVariables (var_variableMap_3833, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 122)) ;
    var_variableMap_3833.method_checkAutomatonStates (enumerator_2946.current (HERE).mAttribute_mEndOfISRDeclaration, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 123)) ;
    GALGAS_interruptionPanicCode joker_5216 ; // Joker input parameter
    constinArgument_inSemanticContext.mAttribute_mAvailableInterruptMap.method_searchKey (enumerator_2946.current (HERE).mAttribute_mISRName, joker_5216, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 126)) ;
    {
    ioArgument_ioIntermediateCodeStruct.mAttribute_mInterruptMapIR.setter_insertKey (enumerator_2946.current (HERE).mAttribute_mISRName, var_selfType_4126, enumerator_2946.current (HERE).mAttribute_mGlobalVariableName, var_allocaList_4363, var_instructionGenerationList_4417, var_xtrAttribute_2996, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 127)) ;
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
  GALGAS_stringset var_definedInterrupts_6526 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("declaration-isr.galgas", 159)) ;
  const GALGAS_interruptMapIR temp_0 = inObject ;
  cEnumerator_interruptMapIR enumerator_6555 (temp_0, kEnumeration_up) ;
  while (enumerator_6555.hasCurrentObject ()) {
    var_definedInterrupts_6526.addAssign_operation (enumerator_6555.current (HERE).mAttribute_lkey.mAttribute_string  COMMA_SOURCE_FILE ("declaration-isr.galgas", 161)) ;
    GALGAS_string temp_1 ;
    const enumGalgasBool test_2 = enumerator_6555.current (HERE).mAttribute_mXTR.boolEnum () ;
    if (kBoolTrue == test_2) {
      temp_1 = function_llvmNameForInterrupt (enumerator_6555.current (HERE).mAttribute_lkey, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 163)).mAttribute_string ;
    }else if (kBoolFalse == test_2) {
      temp_1 = function_llvmNameForISR (enumerator_6555.current (HERE).mAttribute_lkey.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 165)) ;
    }
    GALGAS_string var_interruptImplementationName_6642 = temp_1 ;
    ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (var_interruptImplementationName_6642, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 167)), inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 167)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define void @").add_operation (var_interruptImplementationName_6642, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 168)).add_operation (GALGAS_string (" ()"), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 168)).add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 168)), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 168)).add_operation (GALGAS_string (" {\n"), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 168)), inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 168)) ;
    cEnumerator_allocaList enumerator_7019 (enumerator_6555.current (HERE).mAttribute_mAllocaList, kEnumeration_up) ;
    while (enumerator_7019.hasCurrentObject ()) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (function_llvmNameForLocalVariable (enumerator_7019.current_mVarName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 171)), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 171)).add_operation (GALGAS_string (" = alloca "), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 171)).add_operation (enumerator_7019.current_mType (HERE).getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 171)), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 171)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 171)), inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 171)) ;
      enumerator_7019.gotoNextObject () ;
    }
    const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, enumerator_6555.current (HERE).mAttribute_mSelfType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-isr.galgas", 174)))).boolEnum () ;
    if (kBoolTrue == test_3) {
      GALGAS_string var_varName_7217 = function_llvmNameForGlobalVariable (enumerator_6555.current (HERE).mAttribute_mGlobalVariableName, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 175)) ;
      GALGAS_string var_typeName_7297 = enumerator_6555.current (HERE).mAttribute_mSelfType.getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 176)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %self = getelementptr inbounds ").add_operation (var_typeName_7297, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 177)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 177)).add_operation (var_typeName_7297, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 177)).add_operation (GALGAS_string (" * @"), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 177)).add_operation (var_varName_7217, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 177)), inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 177)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", i32 0 ; Perform %self = @").add_operation (var_varName_7217, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 178)).add_operation (GALGAS_string (" \n"), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 178)), inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 178)) ;
    }
    extensionMethod_instructionListLLVMCode (enumerator_6555.current (HERE).mAttribute_mInstructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 181)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 183)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
      "\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 184)) ;
    const enumGalgasBool test_4 = enumerator_6555.current (HERE).mAttribute_mXTR.boolEnum () ;
    if (kBoolTrue == test_4) {
      GALGAS_string var_interruptHandlerName_7832 = function_llvmNameForInterrupt (enumerator_6555.current (HERE).mAttribute_lkey, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 187)).mAttribute_string ;
      GALGAS_string var_isrName_7897 = function_llvmNameForISR (enumerator_6555.current (HERE).mAttribute_lkey.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 188)) ;
      GALGAS_string var_s_31__7951 = constinArgument_inXTRInterruptHandlerString.getter_stringByReplacingStringByString (GALGAS_string ("!ISR!"), var_isrName_7897, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 189)) ;
      GALGAS_string var_s_32__8045 = var_s_31__7951.getter_stringByReplacingStringByString (GALGAS_string ("!HANDLER!"), var_interruptHandlerName_7832, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 190)) ;
      ioArgument_ioAScode.plusAssign_operation(var_s_32__8045, inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 191)) ;
    }
    enumerator_6555.gotoNextObject () ;
  }
  cEnumerator_availableInterruptMap enumerator_8274 (constinArgument_inGenerationContext.mAttribute_mAvailableInterruptMap, kEnumeration_up) ;
  while (enumerator_8274.hasCurrentObject ()) {
    const enumGalgasBool test_5 = var_definedInterrupts_6526.getter_hasKey (enumerator_8274.current_lkey (HERE).mAttribute_string COMMA_SOURCE_FILE ("declaration-isr.galgas", 196)).operator_not (SOURCE_FILE ("declaration-isr.galgas", 196)).boolEnum () ;
    if (kBoolTrue == test_5) {
      switch (enumerator_8274.current_mInterruptionPanicCode (HERE).enumValue ()) {
      case GALGAS_interruptionPanicCode::kNotBuilt:
        break ;
      case GALGAS_interruptionPanicCode::kEnum_noPanicCode:
        {
          GALGAS_string var_s_8395 = constinArgument_inUndefinedInterruptString.getter_stringByReplacingStringByString (GALGAS_string ("!ISR!"), function_llvmNameForISR (enumerator_8274.current_lkey (HERE).mAttribute_string, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 199)), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 199)) ;
          ioArgument_ioAScode.plusAssign_operation(var_s_8395, inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 200)) ;
        }
        break ;
      case GALGAS_interruptionPanicCode::kEnum_panicCode:
        {
          const cEnumAssociatedValues_interruptionPanicCode_panicCode * extractPtr_9214 = (const cEnumAssociatedValues_interruptionPanicCode_panicCode *) (enumerator_8274.current_mInterruptionPanicCode (HERE).unsafePointer ()) ;
          const GALGAS_lbigint extractedValue_value = extractPtr_9214->mAssociatedValue0 ;
          const enumGalgasBool test_6 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).boolEnum () ;
          if (kBoolTrue == test_6) {
            GALGAS_string var_s_8637 = constinArgument_inUndefinedInterruptString.getter_stringByReplacingStringByString (GALGAS_string ("!ISR!"), function_llvmNameForISR (enumerator_8274.current_lkey (HERE).mAttribute_string, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 203)), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 203)) ;
            ioArgument_ioAScode.plusAssign_operation(var_s_8637, inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 204)) ;
          }else if (kBoolFalse == test_6) {
            GALGAS_string var_name_8796 = function_llvmNameForISR (enumerator_8274.current_lkey (HERE).mAttribute_string, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 206)) ;
            ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("Panic code for ").add_operation (var_name_8796, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 207)), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 207)), inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 207)) ;
            ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define void @").add_operation (var_name_8796, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 208)).add_operation (GALGAS_string (" ()"), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 208)).add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 208)), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 208)).add_operation (GALGAS_string (" noreturn {\n"), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 208)), inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 208)) ;
            ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @panic.isr (").add_operation (constinArgument_inGenerationContext.mAttribute_mPanicCodeLLVMType, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 209)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 209)).add_operation (extractedValue_value.mAttribute_bigint.getter_string (SOURCE_FILE ("declaration-isr.galgas", 209)), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 209)).add_operation (GALGAS_string (") noreturn \n"), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 209)), inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 209)) ;
            ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  unreachable\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 210)) ;
            ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
              "\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 211)) ;
          }
        }
        break ;
      }
    }
    enumerator_8274.gotoNextObject () ;
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
    GALGAS_procedureSignature var_signature_3485 = GALGAS_procedureSignature::constructor_emptyList (SOURCE_FILE ("declaration-section.galgas", 89)) ;
    GALGAS_string var_mangledArguments_3515 = GALGAS_string ("(") ;
    cEnumerator_procFormalArgumentList enumerator_3629 (enumerator_3431.current (HERE).mAttribute_mSectionFormalArgumentList, kEnumeration_up) ;
    while (enumerator_3629.hasCurrentObject ()) {
      GALGAS_unifiedTypeMap_2D_proxy var_typeProxy_3652 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.mAttribute_mTypeMap, enumerator_3629.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("declaration-section.galgas", 92)) ;
      var_signature_3485.addAssign_operation (enumerator_3629.current_mFormalArgumentPassingMode (HERE), enumerator_3629.current_mSelector (HERE).mAttribute_string, var_typeProxy_3652  COMMA_SOURCE_FILE ("declaration-section.galgas", 93)) ;
      var_mangledArguments_3515.plusAssign_operation(extensionGetter_formalPassingModeString (enumerator_3629.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-section.galgas", 94)).add_operation (enumerator_3629.current_mSelector (HERE).getter_string (SOURCE_FILE ("declaration-section.galgas", 94)), inCompiler COMMA_SOURCE_FILE ("declaration-section.galgas", 94)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("declaration-section.galgas", 94)), inCompiler  COMMA_SOURCE_FILE ("declaration-section.galgas", 94)) ;
      enumerator_3629.gotoNextObject () ;
    }
    var_mangledArguments_3515.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("declaration-section.galgas", 96)) ;
    GALGAS_unifiedTypeMap_2D_proxy temp_1 ;
    const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_3431.current (HERE).mAttribute_mReturnTypeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_2) {
      temp_1 = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-section.galgas", 98)) ;
    }else if (kBoolFalse == test_2) {
      temp_1 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.mAttribute_mTypeMap, enumerator_3431.current (HERE).mAttribute_mReturnTypeName, inCompiler  COMMA_SOURCE_FILE ("declaration-section.galgas", 100)) ;
    }
    GALGAS_unifiedTypeMap_2D_proxy var_returnType_3956 = temp_1 ;
    GALGAS_bool var_mutating_4173 = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_4234 (enumerator_3431.current (HERE).mAttribute_mSectionAttributeList, kEnumeration_up) ;
    while (enumerator_4234.hasCurrentObject ()) {
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_4234.current_mValue (HERE).mAttribute_string.objectCompare (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-section.galgas", 105)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        var_mutating_4173 = GALGAS_bool (true) ;
      }
      enumerator_4234.gotoNextObject () ;
    }
    {
    GALGAS_modeMap temp_4 = GALGAS_modeMap::constructor_emptyMap (SOURCE_FILE ("declaration-section.galgas", 114)) ;
    temp_4.addAssign_operation (function_userModeName (inCompiler COMMA_SOURCE_FILE ("declaration-section.galgas", 114)).getter_nowhere (SOURCE_FILE ("declaration-section.galgas", 114)), inCompiler  COMMA_SOURCE_FILE ("declaration-section.galgas", 114)) ;
    ioArgument_ioContext.mAttribute_mRoutineMapForContext.setter_insertKey (GALGAS_lstring::constructor_new (constinArgument_inReceiverTypeName.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-section.galgas", 111)).add_operation (enumerator_3431.current (HERE).mAttribute_mSectionName.getter_string (SOURCE_FILE ("declaration-section.galgas", 111)), inCompiler COMMA_SOURCE_FILE ("declaration-section.galgas", 111)).add_operation (var_mangledArguments_3515, inCompiler COMMA_SOURCE_FILE ("declaration-section.galgas", 111)), enumerator_3431.current (HERE).mAttribute_mSectionName.mAttribute_location  COMMA_SOURCE_FILE ("declaration-section.galgas", 111)), GALGAS_lstring::constructor_new (constinArgument_inReceiverTypeName.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-section.galgas", 112)).add_operation (enumerator_3431.current (HERE).mAttribute_mSectionName.getter_string (SOURCE_FILE ("declaration-section.galgas", 112)), inCompiler COMMA_SOURCE_FILE ("declaration-section.galgas", 112)).add_operation (var_mangledArguments_3515, inCompiler COMMA_SOURCE_FILE ("declaration-section.galgas", 112)), enumerator_3431.current (HERE).mAttribute_mSectionName.mAttribute_location  COMMA_SOURCE_FILE ("declaration-section.galgas", 112)), enumerator_3431.current (HERE).mAttribute_mPublic, temp_4, var_signature_3485, GALGAS_routineKind::constructor_section (SOURCE_FILE ("declaration-section.galgas", 116)), GALGAS_bool (false), var_returnType_3956, GALGAS_bool (false), var_mutating_4173, GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("declaration-section.galgas", 110)) ;
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
  cEnumerator_sectionDeclarationListAST enumerator_5627 (temp_0, kEnumeration_up) ;
  while (enumerator_5627.hasCurrentObject ()) {
    GALGAS_bool var_mutating_5647 = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_5708 (enumerator_5627.current (HERE).mAttribute_mSectionAttributeList, kEnumeration_up) ;
    while (enumerator_5708.hasCurrentObject ()) {
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_5708.current_mValue (HERE).mAttribute_string.objectCompare (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-section.galgas", 139)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        const enumGalgasBool test_2 = var_mutating_5647.boolEnum () ;
        if (kBoolTrue == test_2) {
          GALGAS_location location_3 (enumerator_5708.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
          inCompiler->emitSemanticError (location_3, GALGAS_string ("duplicated @").add_operation (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-section.galgas", 141)), inCompiler COMMA_SOURCE_FILE ("declaration-section.galgas", 141)).add_operation (GALGAS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("declaration-section.galgas", 141))  COMMA_SOURCE_FILE ("declaration-section.galgas", 141)) ;
        }
        var_mutating_5647 = GALGAS_bool (true) ;
      }else if (kBoolFalse == test_1) {
        GALGAS_location location_4 (enumerator_5708.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_4, GALGAS_string ("unknown attribute; available attribute is @").add_operation (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-section.galgas", 145)), inCompiler COMMA_SOURCE_FILE ("declaration-section.galgas", 145))  COMMA_SOURCE_FILE ("declaration-section.galgas", 145)) ;
      }
      enumerator_5708.gotoNextObject () ;
    }
    {
    GALGAS_lstringlist temp_5 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("declaration-section.galgas", 151)) ;
    temp_5.addAssign_operation (GALGAS_lstring::constructor_new (function_sectionModeName (inCompiler COMMA_SOURCE_FILE ("declaration-section.galgas", 151)), enumerator_5627.current (HERE).mAttribute_mSectionName.mAttribute_location  COMMA_SOURCE_FILE ("declaration-section.galgas", 151))  COMMA_SOURCE_FILE ("declaration-section.galgas", 151)) ;
    routine_routineSemanticAnalysis (inArgument_inReceiverType, GALGAS_routineKind::constructor_section (SOURCE_FILE ("declaration-section.galgas", 150)), temp_5, enumerator_5627.current (HERE).mAttribute_mSectionName, enumerator_5627.current (HERE).mAttribute_mSectionFormalArgumentList, enumerator_5627.current (HERE).mAttribute_mReturnTypeName, enumerator_5627.current (HERE).mAttribute_mSectionInstructionList, enumerator_5627.current (HERE).mAttribute_mEndOfSectionLocation, GALGAS_bool (true), var_mutating_5647, GALGAS_bool (true), GALGAS_bool (true), GALGAS_bool (false), GALGAS_accessKind::constructor_readWriteAccess (SOURCE_FILE ("declaration-section.galgas", 162)), constinArgument_inSemanticContext, ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct, inCompiler  COMMA_SOURCE_FILE ("declaration-section.galgas", 148)) ;
    }
    enumerator_5627.gotoNextObject () ;
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
    GALGAS_procedureSignature var_signature_3450 = GALGAS_procedureSignature::constructor_emptyList (SOURCE_FILE ("declaration-service.galgas", 88)) ;
    GALGAS_string var_mangledArguments_3480 = GALGAS_string ("(") ;
    cEnumerator_procFormalArgumentList enumerator_3594 (enumerator_3396.current (HERE).mAttribute_mServiceFormalArgumentList, kEnumeration_up) ;
    while (enumerator_3594.hasCurrentObject ()) {
      GALGAS_unifiedTypeMap_2D_proxy var_typeProxy_3617 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.mAttribute_mTypeMap, enumerator_3594.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("declaration-service.galgas", 91)) ;
      var_signature_3450.addAssign_operation (enumerator_3594.current_mFormalArgumentPassingMode (HERE), enumerator_3594.current_mSelector (HERE).mAttribute_string, var_typeProxy_3617  COMMA_SOURCE_FILE ("declaration-service.galgas", 92)) ;
      var_mangledArguments_3480.plusAssign_operation(extensionGetter_formalPassingModeString (enumerator_3594.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 93)).add_operation (enumerator_3594.current_mSelector (HERE).getter_string (SOURCE_FILE ("declaration-service.galgas", 93)), inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 93)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 93)), inCompiler  COMMA_SOURCE_FILE ("declaration-service.galgas", 93)) ;
      enumerator_3594.gotoNextObject () ;
    }
    var_mangledArguments_3480.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("declaration-service.galgas", 95)) ;
    GALGAS_modeMap temp_1 = GALGAS_modeMap::constructor_emptyMap (SOURCE_FILE ("declaration-service.galgas", 97)) ;
    temp_1.addAssign_operation (function_userModeName (inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 97)).getter_nowhere (SOURCE_FILE ("declaration-service.galgas", 97)), inCompiler  COMMA_SOURCE_FILE ("declaration-service.galgas", 97)) ;
    temp_1.addAssign_operation (function_serviceModeName (inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 97)).getter_nowhere (SOURCE_FILE ("declaration-service.galgas", 97)), inCompiler  COMMA_SOURCE_FILE ("declaration-service.galgas", 97)) ;
    temp_1.addAssign_operation (function_kernelModeName (inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 97)).getter_nowhere (SOURCE_FILE ("declaration-service.galgas", 97)), inCompiler  COMMA_SOURCE_FILE ("declaration-service.galgas", 97)) ;
    GALGAS_modeMap var_modeMap_3943 = temp_1 ;
    GALGAS_unifiedTypeMap_2D_proxy temp_2 ;
    const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_3396.current (HERE).mAttribute_mReturnTypeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_3) {
      temp_2 = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-service.galgas", 100)) ;
    }else if (kBoolFalse == test_3) {
      temp_2 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.mAttribute_mTypeMap, enumerator_3396.current (HERE).mAttribute_mReturnTypeName, inCompiler  COMMA_SOURCE_FILE ("declaration-service.galgas", 102)) ;
    }
    GALGAS_unifiedTypeMap_2D_proxy var_returnType_4078 = temp_2 ;
    {
    ioArgument_ioContext.mAttribute_mRoutineMapForContext.setter_insertKey (GALGAS_lstring::constructor_new (constinArgument_inReceiverTypeName.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 105)).add_operation (enumerator_3396.current (HERE).mAttribute_mServiceName.getter_string (SOURCE_FILE ("declaration-service.galgas", 105)), inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 105)).add_operation (var_mangledArguments_3480, inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 105)), enumerator_3396.current (HERE).mAttribute_mServiceName.mAttribute_location  COMMA_SOURCE_FILE ("declaration-service.galgas", 105)), GALGAS_lstring::constructor_new (constinArgument_inReceiverTypeName.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 106)).add_operation (enumerator_3396.current (HERE).mAttribute_mServiceName.getter_string (SOURCE_FILE ("declaration-service.galgas", 106)), inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 106)).add_operation (var_mangledArguments_3480, inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 106)), enumerator_3396.current (HERE).mAttribute_mServiceName.mAttribute_location  COMMA_SOURCE_FILE ("declaration-service.galgas", 106)), enumerator_3396.current (HERE).mAttribute_mPublic, var_modeMap_3943, var_signature_3450, GALGAS_routineKind::constructor_service (SOURCE_FILE ("declaration-service.galgas", 110)), GALGAS_bool (false), var_returnType_4078, GALGAS_bool (false), GALGAS_bool (true), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 104)) ;
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
  cEnumerator_serviceDeclarationListAST enumerator_5493 (temp_0, kEnumeration_up) ;
  while (enumerator_5493.hasCurrentObject ()) {
    GALGAS_bool var_warnIfUnused_5517 = GALGAS_bool (true) ;
    cEnumerator_lstringlist enumerator_5577 (enumerator_5493.current (HERE).mAttribute_mServiceAttributeList, kEnumeration_up) ;
    while (enumerator_5577.hasCurrentObject ()) {
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_5577.current_mValue (HERE).mAttribute_string.objectCompare (function_noWarningIfUnusedAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 133)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        const enumGalgasBool test_2 = var_warnIfUnused_5517.operator_not (SOURCE_FILE ("declaration-service.galgas", 134)).boolEnum () ;
        if (kBoolTrue == test_2) {
          GALGAS_location location_3 (enumerator_5577.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
          inCompiler->emitSemanticError (location_3, GALGAS_string ("duplicate @").add_operation (function_noWarningIfUnusedAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 135)), inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 135)).add_operation (GALGAS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 135))  COMMA_SOURCE_FILE ("declaration-service.galgas", 135)) ;
        }
        var_warnIfUnused_5517 = GALGAS_bool (false) ;
      }else if (kBoolFalse == test_1) {
        GALGAS_location location_4 (enumerator_5577.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_4, GALGAS_string ("unknown attribute; available attribute is @").add_operation (function_noWarningIfUnusedAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 139)), inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 139))  COMMA_SOURCE_FILE ("declaration-service.galgas", 139)) ;
      }
      enumerator_5577.gotoNextObject () ;
    }
    {
    GALGAS_lstringlist temp_5 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("declaration-service.galgas", 145)) ;
    temp_5.addAssign_operation (function_serviceModeName (inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 145)).getter_nowhere (SOURCE_FILE ("declaration-service.galgas", 145))  COMMA_SOURCE_FILE ("declaration-service.galgas", 145)) ;
    temp_5.addAssign_operation (function_kernelModeName (inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 145)).getter_nowhere (SOURCE_FILE ("declaration-service.galgas", 145))  COMMA_SOURCE_FILE ("declaration-service.galgas", 145)) ;
    routine_routineSemanticAnalysis (inArgument_inReceiverType, GALGAS_routineKind::constructor_service (SOURCE_FILE ("declaration-service.galgas", 144)), temp_5, enumerator_5493.current (HERE).mAttribute_mServiceName, enumerator_5493.current (HERE).mAttribute_mServiceFormalArgumentList, enumerator_5493.current (HERE).mAttribute_mReturnTypeName, enumerator_5493.current (HERE).mAttribute_mServiceInstructionList, enumerator_5493.current (HERE).mAttribute_mEndOfServiceLocation, GALGAS_bool (true), GALGAS_bool (true), var_warnIfUnused_5517, GALGAS_bool (true), GALGAS_bool (false), GALGAS_accessKind::constructor_readWriteAccess (SOURCE_FILE ("declaration-service.galgas", 156)), constinArgument_inSemanticContext, ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct, inCompiler  COMMA_SOURCE_FILE ("declaration-service.galgas", 142)) ;
    }
    enumerator_5493.gotoNextObject () ;
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
  cEnumerator_routineMapIR enumerator_7103 (temp_0, kEnumeration_up) ;
  while (enumerator_7103.hasCurrentObject ()) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_7103.current (HERE).mAttribute_mKind.objectCompare (GALGAS_routineKind::constructor_service (SOURCE_FILE ("declaration-service.galgas", 173)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_string var_serviceImplementationName_7180 = function_llvmNameForServiceImplementation (enumerator_7103.current (HERE).mAttribute_mRoutineNameForGeneration.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 174)) ;
      GALGAS_string var_serviceCallName_7285 = function_llvmNameForServiceCall (enumerator_7103.current (HERE).mAttribute_mRoutineNameForGeneration.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 175)) ;
      ioArgument_ioServiceList.addAssign_operation (var_serviceCallName_7285, var_serviceImplementationName_7180  COMMA_SOURCE_FILE ("declaration-service.galgas", 176)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (var_serviceImplementationName_7180, inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 177)), inCompiler  COMMA_SOURCE_FILE ("declaration-service.galgas", 177)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("declare"), inCompiler  COMMA_SOURCE_FILE ("declaration-service.galgas", 178)) ;
      const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_7103.current (HERE).mAttribute_mReturnType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-service.galgas", 179)))).boolEnum () ;
      if (kBoolTrue == test_2) {
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" void"), inCompiler  COMMA_SOURCE_FILE ("declaration-service.galgas", 180)) ;
      }else if (kBoolFalse == test_2) {
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ").add_operation (enumerator_7103.current (HERE).mAttribute_mReturnType.getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 182)), inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 182)), inCompiler  COMMA_SOURCE_FILE ("declaration-service.galgas", 182)) ;
      }
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" @").add_operation (function_llvmNameForServiceCall (enumerator_7103.current (HERE).mAttribute_lkey.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 184)), inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 184)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 184)), inCompiler  COMMA_SOURCE_FILE ("declaration-service.galgas", 184)) ;
      GALGAS_string var_typeName_7773 = enumerator_7103.current (HERE).mAttribute_lkey.mAttribute_string.getter_stringByDeletingPathExtension (SOURCE_FILE ("declaration-service.galgas", 185)) ;
      GALGAS_bool var_first_7843 = GALGAS_bool (kIsEqual, var_typeName_7773.objectCompare (GALGAS_string::makeEmptyString ())) ;
      const enumGalgasBool test_3 = var_first_7843.operator_not (SOURCE_FILE ("declaration-service.galgas", 187)).boolEnum () ;
      if (kBoolTrue == test_3) {
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("%").add_operation (var_typeName_7773.getter_assemblerRepresentation (SOURCE_FILE ("declaration-service.galgas", 188)), inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 188)).add_operation (GALGAS_string (" * %self"), inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 188)), inCompiler  COMMA_SOURCE_FILE ("declaration-service.galgas", 188)) ;
      }
      cEnumerator_procFormalArgumentListForGeneration enumerator_8029 (enumerator_7103.current (HERE).mAttribute_mFormalArgumentListForGeneration, kEnumeration_up) ;
      while (enumerator_8029.hasCurrentObject ()) {
        const enumGalgasBool test_4 = var_first_7843.boolEnum () ;
        if (kBoolTrue == test_4) {
          var_first_7843 = GALGAS_bool (false) ;
        }else if (kBoolFalse == test_4) {
          ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-service.galgas", 191)) ;
        }
        switch (enumerator_8029.current_mFormalArgumentKind (HERE).enumValue ()) {
        case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
          break ;
        case GALGAS_procFormalArgumentPassingMode::kEnum_input:
          {
            ioArgument_ioLLVMcode.plusAssign_operation(enumerator_8029.current_mFormalArgumentType (HERE).getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 194)).add_operation (GALGAS_string (" %in."), inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 194)).add_operation (enumerator_8029.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 194)), inCompiler  COMMA_SOURCE_FILE ("declaration-service.galgas", 194)) ;
          }
          break ;
        case GALGAS_procFormalArgumentPassingMode::kEnum_output:
          {
            ioArgument_ioLLVMcode.plusAssign_operation(enumerator_8029.current_mFormalArgumentType (HERE).getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 196)).add_operation (GALGAS_string (" * %"), inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 196)).add_operation (enumerator_8029.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 196)), inCompiler  COMMA_SOURCE_FILE ("declaration-service.galgas", 196)) ;
          }
          break ;
        case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
          {
            ioArgument_ioLLVMcode.plusAssign_operation(enumerator_8029.current_mFormalArgumentType (HERE).getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 198)).add_operation (GALGAS_string (" * %"), inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 198)).add_operation (enumerator_8029.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 198)), inCompiler  COMMA_SOURCE_FILE ("declaration-service.galgas", 198)) ;
          }
          break ;
        }
        enumerator_8029.gotoNextObject () ;
      }
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 201)), inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 201)).add_operation (GALGAS_string ("\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 201)), inCompiler  COMMA_SOURCE_FILE ("declaration-service.galgas", 201)) ;
    }
    enumerator_7103.gotoNextObject () ;
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
    GALGAS_procedureSignature var_signature_3499 = GALGAS_procedureSignature::constructor_emptyList (SOURCE_FILE ("declaration-primitive.galgas", 88)) ;
    GALGAS_string var_mangledArguments_3529 = GALGAS_string ("(") ;
    cEnumerator_procFormalArgumentList enumerator_3647 (enumerator_3445.current (HERE).mAttribute_mPrimitiveFormalArgumentList, kEnumeration_up) ;
    while (enumerator_3647.hasCurrentObject ()) {
      GALGAS_unifiedTypeMap_2D_proxy var_typeProxy_3670 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.mAttribute_mTypeMap, enumerator_3647.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("declaration-primitive.galgas", 91)) ;
      var_signature_3499.addAssign_operation (enumerator_3647.current_mFormalArgumentPassingMode (HERE), enumerator_3647.current_mSelector (HERE).mAttribute_string, var_typeProxy_3670  COMMA_SOURCE_FILE ("declaration-primitive.galgas", 92)) ;
      var_mangledArguments_3529.plusAssign_operation(extensionGetter_formalPassingModeString (enumerator_3647.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-primitive.galgas", 93)).add_operation (enumerator_3647.current_mSelector (HERE).getter_string (SOURCE_FILE ("declaration-primitive.galgas", 93)), inCompiler COMMA_SOURCE_FILE ("declaration-primitive.galgas", 93)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("declaration-primitive.galgas", 93)), inCompiler  COMMA_SOURCE_FILE ("declaration-primitive.galgas", 93)) ;
      enumerator_3647.gotoNextObject () ;
    }
    var_mangledArguments_3529.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("declaration-primitive.galgas", 95)) ;
    GALGAS_modeMap temp_1 = GALGAS_modeMap::constructor_emptyMap (SOURCE_FILE ("declaration-primitive.galgas", 97)) ;
    temp_1.addAssign_operation (function_userModeName (inCompiler COMMA_SOURCE_FILE ("declaration-primitive.galgas", 97)).getter_nowhere (SOURCE_FILE ("declaration-primitive.galgas", 97)), inCompiler  COMMA_SOURCE_FILE ("declaration-primitive.galgas", 97)) ;
    temp_1.addAssign_operation (function_kernelModeName (inCompiler COMMA_SOURCE_FILE ("declaration-primitive.galgas", 97)).getter_nowhere (SOURCE_FILE ("declaration-primitive.galgas", 97)), inCompiler  COMMA_SOURCE_FILE ("declaration-primitive.galgas", 97)) ;
    GALGAS_modeMap var_modeMap_3992 = temp_1 ;
    GALGAS_unifiedTypeMap_2D_proxy temp_2 ;
    const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_3445.current (HERE).mAttribute_mReturnTypeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_3) {
      temp_2 = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-primitive.galgas", 100)) ;
    }else if (kBoolFalse == test_3) {
      temp_2 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.mAttribute_mTypeMap, enumerator_3445.current (HERE).mAttribute_mReturnTypeName, inCompiler  COMMA_SOURCE_FILE ("declaration-primitive.galgas", 102)) ;
    }
    GALGAS_unifiedTypeMap_2D_proxy var_returnType_4096 = temp_2 ;
    {
    ioArgument_ioContext.mAttribute_mRoutineMapForContext.setter_insertKey (GALGAS_lstring::constructor_new (constinArgument_inReceiverTypeName.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-primitive.galgas", 105)).add_operation (enumerator_3445.current (HERE).mAttribute_mPrimitiveName.getter_string (SOURCE_FILE ("declaration-primitive.galgas", 105)), inCompiler COMMA_SOURCE_FILE ("declaration-primitive.galgas", 105)).add_operation (var_mangledArguments_3529, inCompiler COMMA_SOURCE_FILE ("declaration-primitive.galgas", 105)), enumerator_3445.current (HERE).mAttribute_mPrimitiveName.mAttribute_location  COMMA_SOURCE_FILE ("declaration-primitive.galgas", 105)), GALGAS_lstring::constructor_new (constinArgument_inReceiverTypeName.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-primitive.galgas", 106)).add_operation (enumerator_3445.current (HERE).mAttribute_mPrimitiveName.getter_string (SOURCE_FILE ("declaration-primitive.galgas", 106)), inCompiler COMMA_SOURCE_FILE ("declaration-primitive.galgas", 106)).add_operation (var_mangledArguments_3529, inCompiler COMMA_SOURCE_FILE ("declaration-primitive.galgas", 106)), enumerator_3445.current (HERE).mAttribute_mPrimitiveName.mAttribute_location  COMMA_SOURCE_FILE ("declaration-primitive.galgas", 106)), enumerator_3445.current (HERE).mAttribute_mPublic, var_modeMap_3992, var_signature_3499, GALGAS_routineKind::constructor_primitive (SOURCE_FILE ("declaration-primitive.galgas", 110)), GALGAS_bool (false), var_returnType_4096, GALGAS_bool (false), GALGAS_bool (true), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("declaration-primitive.galgas", 104)) ;
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
  cEnumerator_primitiveDeclarationListAST enumerator_5541 (temp_0, kEnumeration_up) ;
  while (enumerator_5541.hasCurrentObject ()) {
    GALGAS_bool var_warnIfUnused_5565 = GALGAS_bool (true) ;
    cEnumerator_lstringlist enumerator_5633 (enumerator_5541.current (HERE).mAttribute_mPrimitiveNameAttributeList, kEnumeration_up) ;
    while (enumerator_5633.hasCurrentObject ()) {
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_5633.current_mValue (HERE).mAttribute_string.objectCompare (function_noWarningIfUnusedAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-primitive.galgas", 133)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        const enumGalgasBool test_2 = var_warnIfUnused_5565.operator_not (SOURCE_FILE ("declaration-primitive.galgas", 134)).boolEnum () ;
        if (kBoolTrue == test_2) {
          GALGAS_location location_3 (enumerator_5633.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
          inCompiler->emitSemanticError (location_3, GALGAS_string ("duplicate @").add_operation (function_noWarningIfUnusedAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-primitive.galgas", 135)), inCompiler COMMA_SOURCE_FILE ("declaration-primitive.galgas", 135)).add_operation (GALGAS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("declaration-primitive.galgas", 135))  COMMA_SOURCE_FILE ("declaration-primitive.galgas", 135)) ;
        }
        var_warnIfUnused_5565 = GALGAS_bool (false) ;
      }else if (kBoolFalse == test_1) {
        GALGAS_location location_4 (enumerator_5633.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_4, GALGAS_string ("unknown attribute; available attribute is @").add_operation (function_noWarningIfUnusedAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-primitive.galgas", 139)), inCompiler COMMA_SOURCE_FILE ("declaration-primitive.galgas", 139))  COMMA_SOURCE_FILE ("declaration-primitive.galgas", 139)) ;
      }
      enumerator_5633.gotoNextObject () ;
    }
    {
    GALGAS_lstringlist temp_5 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("declaration-primitive.galgas", 145)) ;
    temp_5.addAssign_operation (function_kernelModeName (inCompiler COMMA_SOURCE_FILE ("declaration-primitive.galgas", 145)).getter_nowhere (SOURCE_FILE ("declaration-primitive.galgas", 145))  COMMA_SOURCE_FILE ("declaration-primitive.galgas", 145)) ;
    routine_routineSemanticAnalysis (inArgument_inReceiverType, GALGAS_routineKind::constructor_primitive (SOURCE_FILE ("declaration-primitive.galgas", 144)), temp_5, enumerator_5541.current (HERE).mAttribute_mPrimitiveName, enumerator_5541.current (HERE).mAttribute_mPrimitiveFormalArgumentList, enumerator_5541.current (HERE).mAttribute_mReturnTypeName, enumerator_5541.current (HERE).mAttribute_mPrimitiveInstructionList, enumerator_5541.current (HERE).mAttribute_mEndOfPrimitiveDeclaration, GALGAS_bool (true), GALGAS_bool (true), var_warnIfUnused_5565, GALGAS_bool (true), GALGAS_bool (false), GALGAS_accessKind::constructor_readWriteAccess (SOURCE_FILE ("declaration-primitive.galgas", 156)), constinArgument_inSemanticContext, ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct, inCompiler  COMMA_SOURCE_FILE ("declaration-primitive.galgas", 142)) ;
    }
    enumerator_5541.gotoNextObject () ;
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
  cEnumerator_routineMapIR enumerator_7155 (temp_0, kEnumeration_up) ;
  while (enumerator_7155.hasCurrentObject ()) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_7155.current (HERE).mAttribute_mKind.objectCompare (GALGAS_routineKind::constructor_primitive (SOURCE_FILE ("declaration-primitive.galgas", 173)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_string var_primitiveImplementationName_7238 = function_llvmNameForPrimitiveImplementation (enumerator_7155.current (HERE).mAttribute_mRoutineNameForGeneration.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("declaration-primitive.galgas", 174)) ;
      GALGAS_string var_primitiveCallName_7349 = function_llvmNameForPrimitiveCall (enumerator_7155.current (HERE).mAttribute_mRoutineNameForGeneration.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("declaration-primitive.galgas", 175)) ;
      ioArgument_ioServiceList.addAssign_operation (var_primitiveCallName_7349, var_primitiveImplementationName_7238  COMMA_SOURCE_FILE ("declaration-primitive.galgas", 176)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (var_primitiveImplementationName_7238, inCompiler COMMA_SOURCE_FILE ("declaration-primitive.galgas", 177)), inCompiler  COMMA_SOURCE_FILE ("declaration-primitive.galgas", 177)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("declare"), inCompiler  COMMA_SOURCE_FILE ("declaration-primitive.galgas", 178)) ;
      const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_7155.current (HERE).mAttribute_mReturnType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-primitive.galgas", 179)))).boolEnum () ;
      if (kBoolTrue == test_2) {
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" void"), inCompiler  COMMA_SOURCE_FILE ("declaration-primitive.galgas", 180)) ;
      }else if (kBoolFalse == test_2) {
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ").add_operation (enumerator_7155.current (HERE).mAttribute_mReturnType.getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("declaration-primitive.galgas", 182)), inCompiler COMMA_SOURCE_FILE ("declaration-primitive.galgas", 182)), inCompiler  COMMA_SOURCE_FILE ("declaration-primitive.galgas", 182)) ;
      }
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" @").add_operation (var_primitiveCallName_7349, inCompiler COMMA_SOURCE_FILE ("declaration-primitive.galgas", 184)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("declaration-primitive.galgas", 184)), inCompiler  COMMA_SOURCE_FILE ("declaration-primitive.galgas", 184)) ;
      GALGAS_string var_typeName_7823 = enumerator_7155.current (HERE).mAttribute_lkey.mAttribute_string.getter_stringByDeletingPathExtension (SOURCE_FILE ("declaration-primitive.galgas", 185)) ;
      GALGAS_bool var_first_7895 = GALGAS_bool (kIsEqual, var_typeName_7823.objectCompare (GALGAS_string::makeEmptyString ())) ;
      const enumGalgasBool test_3 = var_first_7895.operator_not (SOURCE_FILE ("declaration-primitive.galgas", 187)).boolEnum () ;
      if (kBoolTrue == test_3) {
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("%").add_operation (var_typeName_7823.getter_assemblerRepresentation (SOURCE_FILE ("declaration-primitive.galgas", 188)), inCompiler COMMA_SOURCE_FILE ("declaration-primitive.galgas", 188)).add_operation (GALGAS_string (" * %self"), inCompiler COMMA_SOURCE_FILE ("declaration-primitive.galgas", 188)), inCompiler  COMMA_SOURCE_FILE ("declaration-primitive.galgas", 188)) ;
      }
      cEnumerator_procFormalArgumentListForGeneration enumerator_8083 (enumerator_7155.current (HERE).mAttribute_mFormalArgumentListForGeneration, kEnumeration_up) ;
      while (enumerator_8083.hasCurrentObject ()) {
        const enumGalgasBool test_4 = var_first_7895.boolEnum () ;
        if (kBoolTrue == test_4) {
          var_first_7895 = GALGAS_bool (false) ;
        }else if (kBoolFalse == test_4) {
          ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-primitive.galgas", 191)) ;
        }
        switch (enumerator_8083.current_mFormalArgumentKind (HERE).enumValue ()) {
        case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
          break ;
        case GALGAS_procFormalArgumentPassingMode::kEnum_input:
          {
            ioArgument_ioLLVMcode.plusAssign_operation(enumerator_8083.current_mFormalArgumentType (HERE).getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("declaration-primitive.galgas", 194)).add_operation (GALGAS_string (" %in."), inCompiler COMMA_SOURCE_FILE ("declaration-primitive.galgas", 194)).add_operation (enumerator_8083.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-primitive.galgas", 194)), inCompiler  COMMA_SOURCE_FILE ("declaration-primitive.galgas", 194)) ;
          }
          break ;
        case GALGAS_procFormalArgumentPassingMode::kEnum_output:
          {
            ioArgument_ioLLVMcode.plusAssign_operation(enumerator_8083.current_mFormalArgumentType (HERE).getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("declaration-primitive.galgas", 196)).add_operation (GALGAS_string (" * %"), inCompiler COMMA_SOURCE_FILE ("declaration-primitive.galgas", 196)).add_operation (enumerator_8083.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-primitive.galgas", 196)), inCompiler  COMMA_SOURCE_FILE ("declaration-primitive.galgas", 196)) ;
          }
          break ;
        case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
          {
            ioArgument_ioLLVMcode.plusAssign_operation(enumerator_8083.current_mFormalArgumentType (HERE).getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("declaration-primitive.galgas", 198)).add_operation (GALGAS_string (" * %"), inCompiler COMMA_SOURCE_FILE ("declaration-primitive.galgas", 198)).add_operation (enumerator_8083.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-primitive.galgas", 198)), inCompiler  COMMA_SOURCE_FILE ("declaration-primitive.galgas", 198)) ;
          }
          break ;
        }
        enumerator_8083.gotoNextObject () ;
      }
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("declaration-primitive.galgas", 201)), inCompiler COMMA_SOURCE_FILE ("declaration-primitive.galgas", 201)).add_operation (GALGAS_string ("\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("declaration-primitive.galgas", 201)), inCompiler  COMMA_SOURCE_FILE ("declaration-primitive.galgas", 201)) ;
    }
    enumerator_7155.gotoNextObject () ;
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
  cEnumerator_guardDeclarationListAST enumerator_2809 (temp_0, kEnumeration_up) ;
  while (enumerator_2809.hasCurrentObject ()) {
    cEnumerator_procFormalArgumentList enumerator_2879 (enumerator_2809.current_mGuardFormalArgumentList (HERE), kEnumeration_up) ;
    while (enumerator_2879.hasCurrentObject ()) {
      GALGAS_lstring var_typeName_2901 = GALGAS_lstring::constructor_new (GALGAS_string ("$").add_operation (enumerator_2879.current_mFormalArgumentTypeName (HERE).getter_string (SOURCE_FILE ("declaration-guard.galgas", 83)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 83)), enumerator_2879.current_mFormalArgumentTypeName (HERE).mAttribute_location  COMMA_SOURCE_FILE ("declaration-guard.galgas", 83)) ;
      {
      ioArgument_ioGraph.setter_noteNode (var_typeName_2901 COMMA_SOURCE_FILE ("declaration-guard.galgas", 84)) ;
      }
      enumerator_2879.gotoNextObject () ;
    }
    extensionMethod_noteInstructionListTypesInPrecedenceGraph (enumerator_2809.current_mGuardInstructionList (HERE), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 86)) ;
    enumerator_2809.gotoNextObject () ;
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
  cEnumerator_guardDeclarationListAST enumerator_3634 (temp_0, kEnumeration_up) ;
  while (enumerator_3634.hasCurrentObject ()) {
    GALGAS_procedureSignature var_signature_3688 = GALGAS_procedureSignature::constructor_emptyList (SOURCE_FILE ("declaration-guard.galgas", 100)) ;
    cEnumerator_procFormalArgumentList enumerator_3797 (enumerator_3634.current (HERE).mAttribute_mGuardFormalArgumentList, kEnumeration_up) ;
    while (enumerator_3797.hasCurrentObject ()) {
      GALGAS_unifiedTypeMap_2D_proxy var_typeProxy_3820 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.mAttribute_mTypeMap, enumerator_3797.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 102)) ;
      var_signature_3688.addAssign_operation (enumerator_3797.current_mFormalArgumentPassingMode (HERE), enumerator_3797.current_mSelector (HERE).mAttribute_string, var_typeProxy_3820  COMMA_SOURCE_FILE ("declaration-guard.galgas", 103)) ;
      enumerator_3797.gotoNextObject () ;
    }
    {
    ioArgument_ioContext.mAttribute_mGuardMapForContext.setter_insertKey (GALGAS_lstring::constructor_new (constinArgument_inReceiverTypeName.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 107)).add_operation (enumerator_3634.current (HERE).mAttribute_mGuardName.getter_string (SOURCE_FILE ("declaration-guard.galgas", 107)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 107)), enumerator_3634.current (HERE).mAttribute_mGuardName.mAttribute_location  COMMA_SOURCE_FILE ("declaration-guard.galgas", 107)), enumerator_3634.current (HERE).mAttribute_mIsPublic, var_signature_3688, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 106)) ;
    }
    enumerator_3634.gotoNextObject () ;
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
  cEnumerator_guardDeclarationListAST enumerator_4870 (temp_0, kEnumeration_up) ;
  while (enumerator_4870.hasCurrentObject ()) {
    GALGAS_bool var_warnIfUnused_4894 = GALGAS_bool (true) ;
    cEnumerator_lstringlist enumerator_4950 (enumerator_4870.current (HERE).mAttribute_mGuardAttributeList, kEnumeration_up) ;
    while (enumerator_4950.hasCurrentObject ()) {
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_4950.current_mValue (HERE).mAttribute_string.objectCompare (function_noWarningIfUnusedAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 127)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        const enumGalgasBool test_2 = var_warnIfUnused_4894.operator_not (SOURCE_FILE ("declaration-guard.galgas", 128)).boolEnum () ;
        if (kBoolTrue == test_2) {
          GALGAS_location location_3 (enumerator_4950.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
          inCompiler->emitSemanticError (location_3, GALGAS_string ("duplicate @").add_operation (function_noWarningIfUnusedAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 129)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 129)).add_operation (GALGAS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 129))  COMMA_SOURCE_FILE ("declaration-guard.galgas", 129)) ;
        }
        var_warnIfUnused_4894 = GALGAS_bool (false) ;
      }else if (kBoolFalse == test_1) {
        GALGAS_location location_4 (enumerator_4950.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_4, GALGAS_string ("unknown attribute; available attribute is @").add_operation (function_noWarningIfUnusedAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 133)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 133))  COMMA_SOURCE_FILE ("declaration-guard.galgas", 133)) ;
      }
      enumerator_4950.gotoNextObject () ;
    }
    {
    routine_guardSemanticAnalysis (inArgument_inReceiverType, enumerator_4870.current (HERE).mAttribute_mGuardName, enumerator_4870.current (HERE).mAttribute_mGuardFormalArgumentList, enumerator_4870.current (HERE).mAttribute_mGuardKind, enumerator_4870.current (HERE).mAttribute_mGuardInstructionList, enumerator_4870.current (HERE).mAttribute_mEndOfGuardDeclaration, var_warnIfUnused_4894, constinArgument_inSemanticContext, ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct, inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 136)) ;
    }
    enumerator_4870.gotoNextObject () ;
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
  cEnumerator_guardMapIR enumerator_24158 (temp_0, kEnumeration_up) ;
  while (enumerator_24158.hasCurrentObject ()) {
    switch (enumerator_24158.current (HERE).mAttribute_mGuardKindGenerationIR.enumValue ()) {
    case GALGAS_guardKindGenerationIR::kNotBuilt:
      break ;
    case GALGAS_guardKindGenerationIR::kEnum_convenienceGuard:
      {
      }
      break ;
    case GALGAS_guardKindGenerationIR::kEnum_baseGuard:
      {
        GALGAS_string var_guardImplementationName_24294 = function_llvmNameForGuardImplementation (enumerator_24158.current (HERE).mAttribute_lkey.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 598)) ;
        GALGAS_string var_guardCallName_24372 = function_llvmNameForGuardCall (enumerator_24158.current (HERE).mAttribute_lkey.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 599)) ;
        ioArgument_ioServiceList.addAssign_operation (var_guardCallName_24372, var_guardImplementationName_24294  COMMA_SOURCE_FILE ("declaration-guard.galgas", 600)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (var_guardImplementationName_24294, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 601)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 601)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("declare i1 @").add_operation (var_guardCallName_24372, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 602)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 602)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 602)) ;
        GALGAS_string var_typeName_24620 = enumerator_24158.current (HERE).mAttribute_lkey.mAttribute_string.getter_stringByDeletingPathExtension (SOURCE_FILE ("declaration-guard.galgas", 603)) ;
        GALGAS_bool var_first_24688 = GALGAS_bool (kIsEqual, var_typeName_24620.objectCompare (GALGAS_string::makeEmptyString ())) ;
        const enumGalgasBool test_1 = var_first_24688.operator_not (SOURCE_FILE ("declaration-guard.galgas", 605)).boolEnum () ;
        if (kBoolTrue == test_1) {
          ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("%").add_operation (var_typeName_24620.getter_assemblerRepresentation (SOURCE_FILE ("declaration-guard.galgas", 606)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 606)).add_operation (GALGAS_string (" * %self"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 606)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 606)) ;
        }
        cEnumerator_procFormalArgumentListForGeneration enumerator_24872 (enumerator_24158.current (HERE).mAttribute_mFormalArgumentListForGeneration, kEnumeration_up) ;
        while (enumerator_24872.hasCurrentObject ()) {
          const enumGalgasBool test_2 = var_first_24688.boolEnum () ;
          if (kBoolTrue == test_2) {
            var_first_24688 = GALGAS_bool (false) ;
          }else if (kBoolFalse == test_2) {
            ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 609)) ;
          }
          switch (enumerator_24872.current_mFormalArgumentKind (HERE).enumValue ()) {
          case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
            break ;
          case GALGAS_procFormalArgumentPassingMode::kEnum_input:
            {
              ioArgument_ioLLVMcode.plusAssign_operation(enumerator_24872.current_mFormalArgumentType (HERE).getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 612)).add_operation (GALGAS_string (" %in."), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 612)).add_operation (enumerator_24872.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 612)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 612)) ;
            }
            break ;
          case GALGAS_procFormalArgumentPassingMode::kEnum_output:
            {
              ioArgument_ioLLVMcode.plusAssign_operation(enumerator_24872.current_mFormalArgumentType (HERE).getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 614)).add_operation (GALGAS_string (" * %"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 614)).add_operation (enumerator_24872.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 614)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 614)) ;
            }
            break ;
          case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
            {
              ioArgument_ioLLVMcode.plusAssign_operation(enumerator_24872.current_mFormalArgumentType (HERE).getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 616)).add_operation (GALGAS_string (" * %"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 616)).add_operation (enumerator_24872.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 616)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 616)) ;
            }
            break ;
          }
          enumerator_24872.gotoNextObject () ;
        }
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 619)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 619)).add_operation (GALGAS_string ("\n"
          "\n"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 619)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 619)) ;
      }
      break ;
    }
    extensionMethod_llvmCodeGeneration (enumerator_24158.current (HERE), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 621)) ;
    enumerator_24158.gotoNextObject () ;
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
                                            GALGAS_operandIR & out_outResult,
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
//                         Extension method '@accessList addDependenceEdgeForStaticExpression'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_addDependenceEdgeForStaticExpression (const GALGAS_accessList inObject,
                                                           const GALGAS_lstring constinArgument_inConstantName,
                                                           GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                           C_Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_accessList temp_0 = inObject ;
  cEnumerator_accessList enumerator_2111 (temp_0, kEnumeration_up) ;
  while (enumerator_2111.hasCurrentObject ()) {
    switch (enumerator_2111.current_mArrayAccess (HERE).enumValue ()) {
    case GALGAS_arrayElementAccess::kNotBuilt:
      break ;
    case GALGAS_arrayElementAccess::kEnum_noAccess:
      {
      }
      break ;
    case GALGAS_arrayElementAccess::kEnum_access:
      {
        const cEnumAssociatedValues_arrayElementAccess_access * extractPtr_2297 = (const cEnumAssociatedValues_arrayElementAccess_access *) (enumerator_2111.current_mArrayAccess (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_indexExpression = extractPtr_2297->mAssociatedValue0 ;
        callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) extractedValue_indexExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("rule-access.galgas", 53)) ;
      }
      break ;
    }
    enumerator_2111.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Extension method '@accessList noteExpressionTypesInPrecedenceGraph'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_noteExpressionTypesInPrecedenceGraph (const GALGAS_accessList inObject,
                                                           GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                           C_Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_accessList temp_0 = inObject ;
  cEnumerator_accessList enumerator_2813 (temp_0, kEnumeration_up) ;
  while (enumerator_2813.hasCurrentObject ()) {
    switch (enumerator_2813.current_mArrayAccess (HERE).enumValue ()) {
    case GALGAS_arrayElementAccess::kNotBuilt:
      break ;
    case GALGAS_arrayElementAccess::kEnum_noAccess:
      {
      }
      break ;
    case GALGAS_arrayElementAccess::kEnum_access:
      {
        const cEnumAssociatedValues_arrayElementAccess_access * extractPtr_2983 = (const cEnumAssociatedValues_arrayElementAccess_access *) (enumerator_2813.current_mArrayAccess (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_indexExpression = extractPtr_2983->mAssociatedValue0 ;
        callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) extractedValue_indexExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("rule-access.galgas", 67)) ;
      }
      break ;
    }
    enumerator_2813.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Extension method '@fieldList addDependenceEdgeForStaticExpression'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_addDependenceEdgeForStaticExpression (const GALGAS_fieldList inObject,
                                                           const GALGAS_lstring constinArgument_inConstantName,
                                                           GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                           C_Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_fieldList temp_0 = inObject ;
  cEnumerator_fieldList enumerator_2345 (temp_0, kEnumeration_up) ;
  while (enumerator_2345.hasCurrentObject ()) {
    switch (enumerator_2345.current_mArrayAccess (HERE).enumValue ()) {
    case GALGAS_arrayElementAccess::kNotBuilt:
      break ;
    case GALGAS_arrayElementAccess::kEnum_noAccess:
      {
      }
      break ;
    case GALGAS_arrayElementAccess::kEnum_access:
      {
        const cEnumAssociatedValues_arrayElementAccess_access * extractPtr_2531 = (const cEnumAssociatedValues_arrayElementAccess_access *) (enumerator_2345.current_mArrayAccess (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_indexExpression = extractPtr_2531->mAssociatedValue0 ;
        callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) extractedValue_indexExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("rule-self-access.galgas", 61)) ;
      }
      break ;
    }
    enumerator_2345.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Extension method '@fieldList noteExpressionTypesInPrecedenceGraph'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_noteExpressionTypesInPrecedenceGraph (const GALGAS_fieldList inObject,
                                                           GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                           C_Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_fieldList temp_0 = inObject ;
  cEnumerator_fieldList enumerator_3046 (temp_0, kEnumeration_up) ;
  while (enumerator_3046.hasCurrentObject ()) {
    switch (enumerator_3046.current_mArrayAccess (HERE).enumValue ()) {
    case GALGAS_arrayElementAccess::kNotBuilt:
      break ;
    case GALGAS_arrayElementAccess::kEnum_noAccess:
      {
      }
      break ;
    case GALGAS_arrayElementAccess::kEnum_access:
      {
        const cEnumAssociatedValues_arrayElementAccess_access * extractPtr_3216 = (const cEnumAssociatedValues_arrayElementAccess_access *) (enumerator_3046.current_mArrayAccess (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_indexExpression = extractPtr_3216->mAssociatedValue0 ;
        callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) extractedValue_indexExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("rule-self-access.galgas", 75)) ;
      }
      break ;
    }
    enumerator_3046.gotoNextObject () ;
  }
}


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
  extensionMethod_deinitTopLevelVariables (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instructionList.galgas", 108)) ;
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
  cEnumerator_instructionListAST enumerator_5855 (temp_0, kEnumeration_up) ;
  while (enumerator_5855.hasCurrentObject ()) {
    {
    extensionSetter_appendSourceLineComment (ioArgument_ioInstructionGenerationList, enumerator_5855.current_mInstructionLocation (HERE), inCompiler COMMA_SOURCE_FILE ("instructionList.galgas", 129)) ;
    }
    callExtensionMethod_analyze ((const cPtr_instructionAST *) enumerator_5855.current_mInstruction (HERE).ptr (), constinArgument_inSelfType, constinArgument_inRoutineCanMutateProperties, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowPanic, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, inCompiler COMMA_SOURCE_FILE ("instructionList.galgas", 130)) ;
    enumerator_5855.gotoNextObject () ;
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
  cEnumerator_instructionListIR enumerator_7018 (temp_0, kEnumeration_up) ;
  while (enumerator_7018.hasCurrentObject ()) {
    callExtensionMethod_llvmInstructionCode ((const cPtr_abstractInstructionIR *) enumerator_7018.current_mInstructionGeneration (HERE).ptr (), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instructionList.galgas", 157)) ;
    enumerator_7018.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Extension method '@variableMap deinitTopLevelVariables'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_deinitTopLevelVariables (const GALGAS_variableMap /* inObject */,
                                              C_Compiler * /* inCompiler */
                                              COMMA_UNUSED_LOCATION_ARGS) {
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
  const enumGalgasBool test_1 = temp_0.getter_hasKey (inArgument_inString COMMA_SOURCE_FILE ("context.galgas", 48)).boolEnum () ;
  if (kBoolTrue == test_1) {
    const GALGAS_staticStringMap temp_2 = ioObject ;
    temp_2.method_searchKey (inArgument_inString.getter_nowhere (SOURCE_FILE ("context.galgas", 49)), outArgument_outIndex, inCompiler COMMA_SOURCE_FILE ("context.galgas", 49)) ;
  }else if (kBoolFalse == test_1) {
    const GALGAS_staticStringMap temp_3 = ioObject ;
    outArgument_outIndex = temp_3.getter_count (SOURCE_FILE ("context.galgas", 51)) ;
    {
    ioObject.setter_insertKey (inArgument_inString.getter_nowhere (SOURCE_FILE ("context.galgas", 52)), outArgument_outIndex, inCompiler COMMA_SOURCE_FILE ("context.galgas", 52)) ;
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
  cEnumerator_routineMapIR enumerator_9580 (temp_0, kEnumeration_up) ;
  while (enumerator_9580.hasCurrentObject ()) {
    extensionMethod_llvmCodeGeneration (enumerator_9580.current (HERE), ioArgument_ioLLVMcode, ioArgument_ioAssemblerCode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 239)) ;
    enumerator_9580.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Extension Getter '@valueIR llvmName'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string extensionGetter_llvmName (const GALGAS_valueIR & inObject,
                                        C_Compiler * inCompiler
                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_valueIR temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_valueIR::kNotBuilt:
    break ;
  case GALGAS_valueIR::kEnum_zero:
    {
      result_outResult = GALGAS_string ("zeroinitializer") ;
    }
    break ;
  case GALGAS_valueIR::kEnum_selfObject:
    {
      result_outResult = GALGAS_string ("%self") ;
    }
    break ;
  case GALGAS_valueIR::kEnum_literalInteger:
    {
      const cEnumAssociatedValues_valueIR_literalInteger * extractPtr_1182 = (const cEnumAssociatedValues_valueIR_literalInteger *) (temp_0.unsafePointer ()) ;
      const GALGAS_bigint extractedValue_value = extractPtr_1182->mAssociatedValue0 ;
      result_outResult = extractedValue_value.getter_string (SOURCE_FILE ("intermediate-value-representation.galgas", 30)) ;
    }
    break ;
  case GALGAS_valueIR::kEnum_llvmLocalObject:
    {
      const cEnumAssociatedValues_valueIR_llvmLocalObject * extractPtr_1245 = (const cEnumAssociatedValues_valueIR_llvmLocalObject *) (temp_0.unsafePointer ()) ;
      const GALGAS_string extractedValue_name = extractPtr_1245->mAssociatedValue0 ;
      result_outResult = GALGAS_string ("%").add_operation (extractedValue_name, inCompiler COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 31)) ;
    }
    break ;
  case GALGAS_valueIR::kEnum_llvmGlobalObject:
    {
      const cEnumAssociatedValues_valueIR_llvmGlobalObject * extractPtr_1309 = (const cEnumAssociatedValues_valueIR_llvmGlobalObject *) (temp_0.unsafePointer ()) ;
      const GALGAS_string extractedValue_name = extractPtr_1309->mAssociatedValue0 ;
      result_outResult = GALGAS_string ("@").add_operation (extractedValue_name, inCompiler COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 32)) ;
    }
    break ;
  case GALGAS_valueIR::kEnum_llvmStructureConstant:
    {
      const cEnumAssociatedValues_valueIR_llvmStructureConstant * extractPtr_1557 = (const cEnumAssociatedValues_valueIR_llvmStructureConstant *) (temp_0.unsafePointer ()) ;
      const GALGAS_operandIRList extractedValue_inValues = extractPtr_1557->mAssociatedValue0 ;
      result_outResult = GALGAS_string ("{") ;
      cEnumerator_operandIRList enumerator_1409 (extractedValue_inValues, kEnumeration_up) ;
      while (enumerator_1409.hasCurrentObject ()) {
        result_outResult.plusAssign_operation(enumerator_1409.current_mOperand (HERE).mAttribute_mType.getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 36)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 36)).add_operation (extensionGetter_llvmName (enumerator_1409.current_mOperand (HERE).mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 36)), inCompiler COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 36)), inCompiler  COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 36)) ;
        if (enumerator_1409.hasNextObject ()) {
          result_outResult.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 37)) ;
        }
        enumerator_1409.gotoNextObject () ;
      }
      result_outResult.plusAssign_operation(GALGAS_string ("}"), inCompiler  COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 39)) ;
    }
    break ;
  case GALGAS_valueIR::kEnum_literalString:
    {
      const cEnumAssociatedValues_valueIR_literalString * extractPtr_1801 = (const cEnumAssociatedValues_valueIR_literalString *) (temp_0.unsafePointer ()) ;
      const GALGAS_uint extractedValue_size = extractPtr_1801->mAssociatedValue0 ;
      const GALGAS_uint extractedValue_index = extractPtr_1801->mAssociatedValue1 ;
      GALGAS_string var_sizeStr_1622 = extractedValue_size.getter_string (SOURCE_FILE ("intermediate-value-representation.galgas", 41)) ;
      result_outResult = GALGAS_string ("getelementptr inbounds ([").add_operation (var_sizeStr_1622, inCompiler COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 42)).add_operation (GALGAS_string (" x i8], ["), inCompiler COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 42)).add_operation (var_sizeStr_1622, inCompiler COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 42)).add_operation (GALGAS_string (" x i8]* "), inCompiler COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 42)) ;
      result_outResult.plusAssign_operation(function_literalCharacterArrayName (extractedValue_index, inCompiler COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 43)).add_operation (GALGAS_string (", i32 0, i32 0)"), inCompiler COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 43)), inCompiler  COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 43)) ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Extension Getter '@valueIR name'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string extensionGetter_name (const GALGAS_valueIR & inObject,
                                    C_Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_valueIR temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_valueIR::kNotBuilt:
    break ;
  case GALGAS_valueIR::kEnum_zero:
    {
      result_outResult = GALGAS_string ("zeroinitializer") ;
    }
    break ;
  case GALGAS_valueIR::kEnum_selfObject:
    {
      result_outResult = GALGAS_string ("self") ;
    }
    break ;
  case GALGAS_valueIR::kEnum_literalInteger:
    {
      const cEnumAssociatedValues_valueIR_literalInteger * extractPtr_2140 = (const cEnumAssociatedValues_valueIR_literalInteger *) (temp_0.unsafePointer ()) ;
      const GALGAS_bigint extractedValue_value = extractPtr_2140->mAssociatedValue0 ;
      result_outResult = extractedValue_value.getter_string (SOURCE_FILE ("intermediate-value-representation.galgas", 53)) ;
    }
    break ;
  case GALGAS_valueIR::kEnum_llvmLocalObject:
    {
      const cEnumAssociatedValues_valueIR_llvmLocalObject * extractPtr_2197 = (const cEnumAssociatedValues_valueIR_llvmLocalObject *) (temp_0.unsafePointer ()) ;
      const GALGAS_string extractedValue_name = extractPtr_2197->mAssociatedValue0 ;
      result_outResult = extractedValue_name ;
    }
    break ;
  case GALGAS_valueIR::kEnum_llvmGlobalObject:
    {
      const cEnumAssociatedValues_valueIR_llvmGlobalObject * extractPtr_2255 = (const cEnumAssociatedValues_valueIR_llvmGlobalObject *) (temp_0.unsafePointer ()) ;
      const GALGAS_string extractedValue_name = extractPtr_2255->mAssociatedValue0 ;
      result_outResult = extractedValue_name ;
    }
    break ;
  case GALGAS_valueIR::kEnum_llvmStructureConstant:
    {
      result_outResult = GALGAS_string ("{...}") ;
    }
    break ;
  case GALGAS_valueIR::kEnum_literalString:
    {
      const cEnumAssociatedValues_valueIR_literalString * extractPtr_2389 = (const cEnumAssociatedValues_valueIR_literalString *) (temp_0.unsafePointer ()) ;
      const GALGAS_uint extractedValue_index = extractPtr_2389->mAssociatedValue1 ;
      result_outResult = function_literalStringName (extractedValue_index, inCompiler COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 57)) ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Extension Getter '@valueIR isStatic'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool extensionGetter_isStatic (const GALGAS_valueIR & inObject,
                                      C_Compiler * /* inCompiler */
                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  const GALGAS_valueIR temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_valueIR::kNotBuilt:
    break ;
  case GALGAS_valueIR::kEnum_zero:
    {
      result_outResult = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_valueIR::kEnum_selfObject:
    {
      result_outResult = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_valueIR::kEnum_literalInteger:
    {
      result_outResult = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_valueIR::kEnum_llvmLocalObject:
    {
      result_outResult = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_valueIR::kEnum_llvmGlobalObject:
    {
      result_outResult = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_valueIR::kEnum_llvmStructureConstant:
    {
      result_outResult = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_valueIR::kEnum_literalString:
    {
      result_outResult = GALGAS_bool (true) ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Extension method '@instructionListIR appendExtend'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionSetter_appendExtend (GALGAS_instructionListIR & ioObject,
                                   const GALGAS_operandIR constinArgument_inResult,
                                   const GALGAS_operandIR constinArgument_inSource,
                                   C_Compiler * /* inCompiler */
                                   COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.addAssign_operation (GALGAS_extendIR::constructor_new (constinArgument_inResult, constinArgument_inSource  COMMA_SOURCE_FILE ("intermediate-extend.galgas", 6))  COMMA_SOURCE_FILE ("intermediate-extend.galgas", 6)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Extension method '@instructionListIR appendBinaryOperation'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionSetter_appendBinaryOperation (GALGAS_instructionListIR & ioObject,
                                            const GALGAS_valueIR constinArgument_inTarget,
                                            const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inOperandType,
                                            const GALGAS_location constinArgument_inLocation,
                                            const GALGAS_valueIR constinArgument_inLeft,
                                            const GALGAS_llvmBinaryOperation constinArgument_inOperation,
                                            const GALGAS_valueIR constinArgument_inRight,
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
                                                     const GALGAS_operandIR constinArgument_inTargetOperand,
                                                     const GALGAS_operandIR constinArgument_inLeftOperand,
                                                     const GALGAS_instructionListIR constinArgument_inLeftInstructionList,
                                                     const GALGAS_operandIR constinArgument_inRightOperand,
                                                     const GALGAS_instructionListIR constinArgument_inRightInstructionList,
                                                     const GALGAS_location constinArgument_inLocation,
                                                     C_Compiler * /* inCompiler */
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.addAssign_operation (GALGAS_shortCircuitAndOperationIR::constructor_new (constinArgument_inTargetOperand, constinArgument_inLeftOperand, constinArgument_inLeftInstructionList, constinArgument_inRightOperand, constinArgument_inRightInstructionList, constinArgument_inLocation  COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 11))  COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 11)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Extension method '@instructionListIR appendLoadVolatileRegister'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionSetter_appendLoadVolatileRegister (GALGAS_instructionListIR & ioObject,
                                                 const GALGAS_operandIR constinArgument_inTargetValue,
                                                 const GALGAS_string constinArgument_inRegisterName,
                                                 const GALGAS_bigint constinArgument_inAddress,
                                                 C_Compiler * /* inCompiler */
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.addAssign_operation (GALGAS_loadRegisterIR::constructor_new (constinArgument_inTargetValue, constinArgument_inRegisterName, constinArgument_inAddress  COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 7))  COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 7)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Extension method '@instructionListIR appendLoadGlobalVariable'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionSetter_appendLoadGlobalVariable (GALGAS_instructionListIR & ioObject,
                                               const GALGAS_operandIR constinArgument_inTargetValue,
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
                                              const GALGAS_operandIR constinArgument_inTargetValue,
                                              const GALGAS_string constinArgument_inVariableName,
                                              C_Compiler * /* inCompiler */
                                              COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.addAssign_operation (GALGAS_loadLocalVariableIR::constructor_new (constinArgument_inTargetValue, constinArgument_inVariableName  COMMA_SOURCE_FILE ("intermediate-load-local-variable.galgas", 6))  COMMA_SOURCE_FILE ("intermediate-load-local-variable.galgas", 6)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Extension method '@instructionListIR appendLoadTaskVariable'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionSetter_appendLoadTaskVariable (GALGAS_instructionListIR & ioObject,
                                             const GALGAS_operandIR constinArgument_inTargetValue,
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
                                                  const GALGAS_string constinArgument_inRegisterName,
                                                  const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inTargetVarType,
                                                  const GALGAS_bigint constinArgument_inAddress,
                                                  const GALGAS_operandIR constinArgument_inSourceValue,
                                                  C_Compiler * /* inCompiler */
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.addAssign_operation (GALGAS_storeVolatileIR::constructor_new (constinArgument_inRegisterName, constinArgument_inTargetVarType, constinArgument_inAddress, constinArgument_inSourceValue  COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 8))  COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 8)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Extension method '@instructionListIR appendStoreGlobalVariable'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionSetter_appendStoreGlobalVariable (GALGAS_instructionListIR & ioObject,
                                                const GALGAS_string constinArgument_inGlobalVarName,
                                                const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inTargetVarType,
                                                const GALGAS_operandIR constinArgument_inSourceValue,
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
                                              const GALGAS_operandIR constinArgument_inSourceValue,
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
                                               const GALGAS_operandIR constinArgument_inSourceValue,
                                               C_Compiler * /* inCompiler */
                                               COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.addAssign_operation (GALGAS_storeLocalVariableIR::constructor_new (constinArgument_inLocalVarName, constinArgument_inTargetVarType, constinArgument_inSourceValue  COMMA_SOURCE_FILE ("intermediate-store-local-variable.galgas", 7))  COMMA_SOURCE_FILE ("intermediate-store-local-variable.galgas", 7)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Extension method '@instructionListIR appendLoadFromMemory'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionSetter_appendLoadFromMemory (GALGAS_instructionListIR & ioObject,
                                           GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                           const GALGAS_objectInMemoryIR constinArgument_inSource,
                                           GALGAS_operandIR & outArgument_outResultingValue,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outResultingValue.drop () ; // Release 'out' argument
  switch (constinArgument_inSource.enumValue ()) {
  case GALGAS_objectInMemoryIR::kNotBuilt:
    break ;
  case GALGAS_objectInMemoryIR::kEnum_register:
    {
      const cEnumAssociatedValues_objectInMemoryIR_register * extractPtr_425 = (const cEnumAssociatedValues_objectInMemoryIR_register *) (constinArgument_inSource.unsafePointer ()) ;
      const GALGAS_unifiedTypeMap_2D_proxy extractedValue_type = extractPtr_425->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_name = extractPtr_425->mAssociatedValue1 ;
      const GALGAS_bigint extractedValue_address = extractPtr_425->mAssociatedValue2 ;
      {
      routine_getNewTempVariable (extractedValue_type, ioArgument_ioTemporaries, outArgument_outResultingValue, inCompiler  COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 8)) ;
      }
      {
      extensionSetter_appendLoadVolatileRegister (ioObject, outArgument_outResultingValue, extractedValue_name.mAttribute_string, extractedValue_address, inCompiler COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 9)) ;
      }
    }
    break ;
  case GALGAS_objectInMemoryIR::kEnum_globalVariable:
    {
      const cEnumAssociatedValues_objectInMemoryIR_globalVariable * extractPtr_681 = (const cEnumAssociatedValues_objectInMemoryIR_globalVariable *) (constinArgument_inSource.unsafePointer ()) ;
      const GALGAS_unifiedTypeMap_2D_proxy extractedValue_type = extractPtr_681->mAssociatedValue0 ;
      const GALGAS_string extractedValue_name = extractPtr_681->mAssociatedValue1 ;
      const GALGAS_bool extractedValue_isVolatile = extractPtr_681->mAssociatedValue2 ;
      {
      routine_getNewTempVariable (extractedValue_type, ioArgument_ioTemporaries, outArgument_outResultingValue, inCompiler  COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 15)) ;
      }
      {
      extensionSetter_appendLoadGlobalVariable (ioObject, outArgument_outResultingValue, extractedValue_name, extractedValue_isVolatile, inCompiler COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 16)) ;
      }
    }
    break ;
  case GALGAS_objectInMemoryIR::kEnum_localValue:
    {
      const cEnumAssociatedValues_objectInMemoryIR_localValue * extractPtr_888 = (const cEnumAssociatedValues_objectInMemoryIR_localValue *) (constinArgument_inSource.unsafePointer ()) ;
      const GALGAS_unifiedTypeMap_2D_proxy extractedValue_type = extractPtr_888->mAssociatedValue0 ;
      const GALGAS_string extractedValue_name = extractPtr_888->mAssociatedValue1 ;
      {
      routine_getNewTempVariable (extractedValue_type, ioArgument_ioTemporaries, outArgument_outResultingValue, inCompiler  COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 22)) ;
      }
      {
      extensionSetter_appendLoadLocalVariable (ioObject, outArgument_outResultingValue, extractedValue_name, inCompiler COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 23)) ;
      }
    }
    break ;
  case GALGAS_objectInMemoryIR::kEnum_globalConstant:
    {
      const cEnumAssociatedValues_objectInMemoryIR_globalConstant * extractPtr_981 = (const cEnumAssociatedValues_objectInMemoryIR_globalConstant *) (constinArgument_inSource.unsafePointer ()) ;
      const GALGAS_operandIR extractedValue_value = extractPtr_981->mAssociatedValue0 ;
      const GALGAS_string extractedValue_name = extractPtr_981->mAssociatedValue1 ;
      outArgument_outResultingValue = extractedValue_value ;
    }
    break ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Extension method '@instructionListIR appendStoreInMemory'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionSetter_appendStoreInMemory (GALGAS_instructionListIR & ioObject,
                                          const GALGAS_objectInMemoryIR constinArgument_inTargetPtr,
                                          const GALGAS_operandIR constinArgument_inValue,
                                          C_Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  switch (constinArgument_inTargetPtr.enumValue ()) {
  case GALGAS_objectInMemoryIR::kNotBuilt:
    break ;
  case GALGAS_objectInMemoryIR::kEnum_register:
    {
      const cEnumAssociatedValues_objectInMemoryIR_register * extractPtr_1417 = (const cEnumAssociatedValues_objectInMemoryIR_register *) (constinArgument_inTargetPtr.unsafePointer ()) ;
      const GALGAS_unifiedTypeMap_2D_proxy extractedValue_type = extractPtr_1417->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_registerName = extractPtr_1417->mAssociatedValue1 ;
      const GALGAS_bigint extractedValue_address = extractPtr_1417->mAssociatedValue2 ;
      {
      extensionSetter_appendStoreVolatileRegister (ioObject, extractedValue_registerName.mAttribute_string, extractedValue_type, extractedValue_address, constinArgument_inValue, inCompiler COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 40)) ;
      }
    }
    break ;
  case GALGAS_objectInMemoryIR::kEnum_globalVariable:
    {
      const cEnumAssociatedValues_objectInMemoryIR_globalVariable * extractPtr_1581 = (const cEnumAssociatedValues_objectInMemoryIR_globalVariable *) (constinArgument_inTargetPtr.unsafePointer ()) ;
      const GALGAS_unifiedTypeMap_2D_proxy extractedValue_type = extractPtr_1581->mAssociatedValue0 ;
      const GALGAS_string extractedValue_name = extractPtr_1581->mAssociatedValue1 ;
      const GALGAS_bool extractedValue_isVolatile = extractPtr_1581->mAssociatedValue2 ;
      {
      extensionSetter_appendStoreGlobalVariable (ioObject, extractedValue_name, extractedValue_type, constinArgument_inValue, extractedValue_isVolatile, inCompiler COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 42)) ;
      }
    }
    break ;
  case GALGAS_objectInMemoryIR::kEnum_localValue:
    {
      const cEnumAssociatedValues_objectInMemoryIR_localValue * extractPtr_1702 = (const cEnumAssociatedValues_objectInMemoryIR_localValue *) (constinArgument_inTargetPtr.unsafePointer ()) ;
      const GALGAS_unifiedTypeMap_2D_proxy extractedValue_type = extractPtr_1702->mAssociatedValue0 ;
      const GALGAS_string extractedValue_name = extractPtr_1702->mAssociatedValue1 ;
      {
      extensionSetter_appendStoreLocalVariable (ioObject, extractedValue_name, extractedValue_type, constinArgument_inValue, inCompiler COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 44)) ;
      }
    }
    break ;
  case GALGAS_objectInMemoryIR::kEnum_globalConstant:
    {
      inCompiler->emitSemanticError (GALGAS_location::constructor_nowhere (SOURCE_FILE ("intermediate-load-store.galgas", 46)), GALGAS_string ("<<@objectInMemoryIR storeInMemory globalConstant>>")  COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 46)) ;
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
                                                  const GALGAS_operandIR constinArgument_inTargetValue,
                                                  const GALGAS_string constinArgument_inTypeName,
                                                  C_Compiler * /* inCompiler */
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.addAssign_operation (GALGAS_loadStructureConstantIR::constructor_new (constinArgument_inTargetValue, constinArgument_inTypeName  COMMA_SOURCE_FILE ("intermediate-load-structure-constant.galgas", 6))  COMMA_SOURCE_FILE ("intermediate-load-structure-constant.galgas", 6)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Extension method '@instructionListIR appendGetElementPtr'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionSetter_appendGetElementPtr (GALGAS_instructionListIR & ioObject,
                                          const GALGAS_objectInMemoryIR constinArgument_inTarget,
                                          const GALGAS_objectInMemoryIR constinArgument_inSource,
                                          const GALGAS_elementPtrList constinArgument_inElementList,
                                          C_Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, constinArgument_inElementList.getter_length (SOURCE_FILE ("intermediate-get-element-ptr.galgas", 7)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (GALGAS_location::constructor_nowhere (SOURCE_FILE ("intermediate-get-element-ptr.galgas", 8)), GALGAS_string ("<<INTERNAL ERROR:inElementList is empty>>")  COMMA_SOURCE_FILE ("intermediate-get-element-ptr.galgas", 8)) ;
  }
  ioObject.addAssign_operation (GALGAS_getElementPtrIR::constructor_new (constinArgument_inTarget, constinArgument_inSource, constinArgument_inElementList  COMMA_SOURCE_FILE ("intermediate-get-element-ptr.galgas", 10))  COMMA_SOURCE_FILE ("intermediate-get-element-ptr.galgas", 10)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Extension method '@instructionListIR appendGetElementPtrFromSelf'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionSetter_appendGetElementPtrFromSelf (GALGAS_instructionListIR & ioObject,
                                                  const GALGAS_objectInMemoryIR constinArgument_inTarget,
                                                  const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                                  const GALGAS_elementPtrList constinArgument_inElementList,
                                                  C_Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, constinArgument_inSelfType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("intermediate-get-element-ptr-from-self.galgas", 22)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (GALGAS_location::constructor_nowhere (SOURCE_FILE ("intermediate-get-element-ptr-from-self.galgas", 23)), GALGAS_string ("<<INTERNAL ERROR>>")  COMMA_SOURCE_FILE ("intermediate-get-element-ptr-from-self.galgas", 23)) ;
  }
  ioObject.addAssign_operation (GALGAS_getElementPtrFromSelfIR::constructor_new (constinArgument_inTarget, constinArgument_inSelfType, constinArgument_inElementList  COMMA_SOURCE_FILE ("intermediate-get-element-ptr-from-self.galgas", 25))  COMMA_SOURCE_FILE ("intermediate-get-element-ptr-from-self.galgas", 25)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Extension method '@instructionListIR appendSelectOperation'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionSetter_appendSelectOperation (GALGAS_instructionListIR & ioObject,
                                            const GALGAS_operandIR constinArgument_inTargetValue,
                                            const GALGAS_operandIR constinArgument_in_5F_if_5F_variable,
                                            const GALGAS_operandIR constinArgument_in_5F_then_5F_variable,
                                            const GALGAS_operandIR constinArgument_in_5F_else_5F_variable,
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
                                     const GALGAS_operandIR constinArgument_inIndex,
                                     const GALGAS_location constinArgument_inErrorLocation,
                                     const GALGAS_bigint constinArgument_inSize,
                                     GALGAS_bool & outArgument_outGeneratePanicInstruction,
                                     C_Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outGeneratePanicInstruction.drop () ; // Release 'out' argument
  GALGAS_bigint var_max_212 ;
  GALGAS_bool var_isUnsigned_237 ;
  GALGAS_bigint joker_198 ; // Joker input parameter
  GALGAS_uint joker_248 ; // Joker input parameter
  constinArgument_inIndex.mAttribute_mType.getter_kind (inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 8)).method_integer (joker_198, var_max_212, var_isUnsigned_237, joker_248, inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 8)) ;
  GALGAS_bool test_0 = var_isUnsigned_237.operator_not (SOURCE_FILE ("intermediate-test-array-index.galgas", 9)) ;
  if (kBoolTrue != test_0.boolEnum ()) {
    test_0 = GALGAS_bool (kIsSupOrEqual, var_max_212.objectCompare (constinArgument_inSize)) ;
  }
  outArgument_outGeneratePanicInstruction = test_0 ;
  ioObject.addAssign_operation (GALGAS_testArrayIndexIR::constructor_new (constinArgument_inIndex, constinArgument_inErrorLocation, constinArgument_inSize  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 10))  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 10)) ;
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
mAttribute_mAccessibleRegisterSet (),
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
                                                      const GALGAS_stringset & inOperand4,
                                                      const GALGAS_stringset & inOperand5) :
mAttribute_mAccessibleRegisterSet (inOperand0),
mAttribute_mRoutineSet (inOperand1),
mAttribute_mGuardSet (inOperand2),
mAttribute_mSectionSet (inOperand3),
mAttribute_mGlobalVariableSet (inOperand4),
mAttribute_mTaskVariableSet (inOperand5) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_accessibleEntities GALGAS_accessibleEntities::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_accessibleEntities (GALGAS_stringset::constructor_emptySet (HERE),
                                    GALGAS_stringset::constructor_emptySet (HERE),
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
                                                                      const GALGAS_stringset & inOperand4,
                                                                      const GALGAS_stringset & inOperand5 
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_accessibleEntities result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid ()) {
    result = GALGAS_accessibleEntities (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_accessibleEntities::objectCompare (const GALGAS_accessibleEntities & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mAccessibleRegisterSet.objectCompare (inOperand.mAttribute_mAccessibleRegisterSet) ;
  }
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
  return mAttribute_mAccessibleRegisterSet.isValid () && mAttribute_mRoutineSet.isValid () && mAttribute_mGuardSet.isValid () && mAttribute_mSectionSet.isValid () && mAttribute_mGlobalVariableSet.isValid () && mAttribute_mTaskVariableSet.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_accessibleEntities::drop (void) {
  mAttribute_mAccessibleRegisterSet.drop () ;
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
    mAttribute_mAccessibleRegisterSet.description (ioString, inIndentation+1) ;
    ioString << ", " ;
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

GALGAS_stringset GALGAS_accessibleEntities::getter_mAccessibleRegisterSet (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAccessibleRegisterSet ;
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
  cEnumerator_instructionListIR enumerator_1934 (temp_0, kEnumeration_up) ;
  while (enumerator_1934.hasCurrentObject ()) {
    callExtensionMethod_enterAccessibleEntities ((const cPtr_abstractInstructionIR *) enumerator_1934.current_mInstructionGeneration (HERE).ptr (), ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 40)) ;
    enumerator_1934.gotoNextObject () ;
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
mAttribute_mInitLocation (),
mAttribute_mAllocaList (),
mAttribute_mInstructionListIR (),
mAttribute_mEndOfInitLocation () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootListIR_2D_element::~ GALGAS_bootListIR_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootListIR_2D_element::GALGAS_bootListIR_2D_element (const GALGAS_location & inOperand0,
                                                            const GALGAS_allocaList & inOperand1,
                                                            const GALGAS_instructionListIR & inOperand2,
                                                            const GALGAS_location & inOperand3) :
mAttribute_mInitLocation (inOperand0),
mAttribute_mAllocaList (inOperand1),
mAttribute_mInstructionListIR (inOperand2),
mAttribute_mEndOfInitLocation (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootListIR_2D_element GALGAS_bootListIR_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_bootListIR_2D_element (GALGAS_location::constructor_nowhere (HERE),
                                       GALGAS_allocaList::constructor_emptyList (HERE),
                                       GALGAS_instructionListIR::constructor_emptyList (HERE),
                                       GALGAS_location::constructor_nowhere (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootListIR_2D_element GALGAS_bootListIR_2D_element::constructor_new (const GALGAS_location & inOperand0,
                                                                            const GALGAS_allocaList & inOperand1,
                                                                            const GALGAS_instructionListIR & inOperand2,
                                                                            const GALGAS_location & inOperand3 
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bootListIR_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_bootListIR_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_bootListIR_2D_element::objectCompare (const GALGAS_bootListIR_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
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
  return mAttribute_mInitLocation.isValid () && mAttribute_mAllocaList.isValid () && mAttribute_mInstructionListIR.isValid () && mAttribute_mEndOfInitLocation.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_bootListIR_2D_element::drop (void) {
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

GALGAS_globalTaskVariableList_2D_element::GALGAS_globalTaskVariableList_2D_element (void) :
mAttribute_mTaskName (),
mAttribute_mTaskTypeName (),
mAttribute_mInitialValue () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalTaskVariableList_2D_element::~ GALGAS_globalTaskVariableList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalTaskVariableList_2D_element::GALGAS_globalTaskVariableList_2D_element (const GALGAS_string & inOperand0,
                                                                                    const GALGAS_string & inOperand1,
                                                                                    const GALGAS_valueIR & inOperand2) :
mAttribute_mTaskName (inOperand0),
mAttribute_mTaskTypeName (inOperand1),
mAttribute_mInitialValue (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalTaskVariableList_2D_element GALGAS_globalTaskVariableList_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                    const GALGAS_string & inOperand1,
                                                                                                    const GALGAS_valueIR & inOperand2 
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
    result = mAttribute_mTaskName.objectCompare (inOperand.mAttribute_mTaskName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mTaskTypeName.objectCompare (inOperand.mAttribute_mTaskTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInitialValue.objectCompare (inOperand.mAttribute_mInitialValue) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_globalTaskVariableList_2D_element::isValid (void) const {
  return mAttribute_mTaskName.isValid () && mAttribute_mTaskTypeName.isValid () && mAttribute_mInitialValue.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_globalTaskVariableList_2D_element::drop (void) {
  mAttribute_mTaskName.drop () ;
  mAttribute_mTaskTypeName.drop () ;
  mAttribute_mInitialValue.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_globalTaskVariableList_2D_element::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "<struct @globalTaskVariableList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mTaskName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mTaskTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInitialValue.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_globalTaskVariableList_2D_element::getter_mTaskName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTaskName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_globalTaskVariableList_2D_element::getter_mTaskTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTaskTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_valueIR GALGAS_globalTaskVariableList_2D_element::getter_mInitialValue (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInitialValue ;
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

GALGAS_operandIR::GALGAS_operandIR (void) :
mAttribute_mType (),
mAttribute_mValue () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandIR::~ GALGAS_operandIR (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandIR::GALGAS_operandIR (const GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                    const GALGAS_valueIR & inOperand1) :
mAttribute_mType (inOperand0),
mAttribute_mValue (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandIR GALGAS_operandIR::constructor_new (const GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                    const GALGAS_valueIR & inOperand1 
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_operandIR result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_operandIR (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_operandIR::objectCompare (const GALGAS_operandIR & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mType.objectCompare (inOperand.mAttribute_mType) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mValue.objectCompare (inOperand.mAttribute_mValue) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_operandIR::isValid (void) const {
  return mAttribute_mType.isValid () && mAttribute_mValue.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_operandIR::drop (void) {
  mAttribute_mType.drop () ;
  mAttribute_mValue.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_operandIR::description (C_String & ioString,
                                    const int32_t inIndentation) const {
  ioString << "<struct @operandIR:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mValue.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_operandIR::getter_mType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_valueIR GALGAS_operandIR::getter_mValue (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mValue ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                   @operandIR type                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_operandIR ("operandIR",
                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_operandIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_operandIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_operandIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_operandIR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandIR GALGAS_operandIR::extractObject (const GALGAS_object & inObject,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  GALGAS_operandIR result ;
  const GALGAS_operandIR * p = (const GALGAS_operandIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_operandIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("operandIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
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
  cEnumerator_functionDeclarationListAST enumerator_15882 (object->mAttribute_mFunctionDeclarationListAST, kEnumeration_up) ;
  while (enumerator_15882.hasCurrentObject ()) {
    GALGAS_bool var_warnIfUnused_15906 = GALGAS_bool (true) ;
    GALGAS_bool var_mutating_15930 = GALGAS_bool (false) ;
    GALGAS_bool var_accessProperties_15963 = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_16026 (enumerator_15882.current (HERE).mAttribute_mFunctionAttributeList, kEnumeration_up) ;
    while (enumerator_16026.hasCurrentObject ()) {
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_16026.current_mValue (HERE).mAttribute_string.objectCompare (function_noWarningIfUnusedAttribute (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 409)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        const enumGalgasBool test_1 = var_warnIfUnused_15906.operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 410)).boolEnum () ;
        if (kBoolTrue == test_1) {
          GALGAS_location location_2 (enumerator_16026.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
          inCompiler->emitSemanticError (location_2, GALGAS_string ("duplicated @").add_operation (function_noWarningIfUnusedAttribute (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 411)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 411)).add_operation (GALGAS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 411))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 411)) ;
        }
        var_warnIfUnused_15906 = GALGAS_bool (false) ;
      }else if (kBoolFalse == test_0) {
        const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_16026.current_mValue (HERE).mAttribute_string.objectCompare (function_userAccessAttribute (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 414)))).boolEnum () ;
        if (kBoolTrue == test_3) {
          const enumGalgasBool test_4 = var_accessProperties_15963.boolEnum () ;
          if (kBoolTrue == test_4) {
            GALGAS_location location_5 (enumerator_16026.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
            inCompiler->emitSemanticError (location_5, GALGAS_string ("duplicated @").add_operation (function_userAccessAttribute (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 416)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 416)).add_operation (GALGAS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 416))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 416)) ;
          }
          var_accessProperties_15963 = GALGAS_bool (true) ;
        }else if (kBoolFalse == test_3) {
          const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, enumerator_16026.current_mValue (HERE).mAttribute_string.objectCompare (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 419)))).boolEnum () ;
          if (kBoolTrue == test_6) {
            const enumGalgasBool test_7 = var_mutating_15930.boolEnum () ;
            if (kBoolTrue == test_7) {
              GALGAS_location location_8 (enumerator_16026.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
              inCompiler->emitSemanticError (location_8, GALGAS_string ("duplicated @").add_operation (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 421)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 421)).add_operation (GALGAS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 421))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 421)) ;
            }
            var_mutating_15930 = GALGAS_bool (true) ;
          }else if (kBoolFalse == test_6) {
            GALGAS_location location_9 (enumerator_16026.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
            inCompiler->emitSemanticError (location_9, GALGAS_string ("unknown attribute; available attributes are @").add_operation (function_noWarningIfUnusedAttribute (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 425)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 425)).add_operation (GALGAS_string (", @"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 425)).add_operation (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 426)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 426)).add_operation (GALGAS_string (" and @"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 426)).add_operation (function_userAccessAttribute (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 426)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 426))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 425)) ;
          }
        }
      }
      enumerator_16026.gotoNextObject () ;
    }
    GALGAS_stringset var_modeSet_16924 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-structure-declaration.galgas", 429)) ;
    cEnumerator_lstringlist enumerator_16974 (enumerator_15882.current (HERE).mAttribute_mFunctionModeList, kEnumeration_up) ;
    while (enumerator_16974.hasCurrentObject ()) {
      var_modeSet_16924.addAssign_operation (enumerator_16974.current_mValue (HERE).mAttribute_string  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 431)) ;
      enumerator_16974.gotoNextObject () ;
    }
    const enumGalgasBool test_10 = var_modeSet_16924.getter_hasKey (function_userModeName (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 433)) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 433)).operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 433)).boolEnum () ;
    if (kBoolTrue == test_10) {
      const enumGalgasBool test_11 = var_accessProperties_15963.boolEnum () ;
      if (kBoolTrue == test_11) {
        GALGAS_location location_12 (enumerator_15882.current (HERE).mAttribute_mFunctionName.getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_12, GALGAS_string ("useless @").add_operation (function_userAccessAttribute (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 435)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 435)).add_operation (GALGAS_string (" attribute: function is never executed in `"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 435)).add_operation (function_userModeName (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 436)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 436)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 436))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 435)) ;
      }
      var_accessProperties_15963 = GALGAS_bool (true) ;
    }
    {
    routine_routineSemanticAnalysis (constinArgument_inStructureType, GALGAS_routineKind::constructor_function (SOURCE_FILE ("type-structure-declaration.galgas", 442)), enumerator_15882.current (HERE).mAttribute_mFunctionModeList, enumerator_15882.current (HERE).mAttribute_mFunctionName, enumerator_15882.current (HERE).mAttribute_mFunctionFormalArgumentList, enumerator_15882.current (HERE).mAttribute_mFunctionReturnTypeName, enumerator_15882.current (HERE).mAttribute_mFunctionInstructionList, enumerator_15882.current (HERE).mAttribute_mEndOfFunctionDeclaration, var_accessProperties_15963, var_mutating_15930, var_warnIfUnused_15906, GALGAS_bool (false), GALGAS_bool (false), GALGAS_accessKind::constructor_readWriteAccess (SOURCE_FILE ("type-structure-declaration.galgas", 454)), constinArgument_inContext, ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct, inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 440)) ;
    }
    enumerator_15882.gotoNextObject () ;
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
  GALGAS_unifiedTypeMap_2D_proxy var_inferredType_14496 ;
  GALGAS_stringset var_executionModeSet_14539 ;
  GALGAS_allowedRoutineMap var_allowedProcedureMap_14593 ;
  GALGAS_allowedGuardMap var_allowedGuardMap_14641 ;
  GALGAS_allowedISRMap var_allowedISRMap_14685 ;
  GALGAS_allowedTaskMap var_allowedTaskMap_14731 ;
  GALGAS_valueIR var_expressionGeneratedCode_14778 ;
  GALGAS_bool var_isConstant_14816 ;
  GALGAS_bool joker_14841 ; // Joker input parameter
  constinArgument_inContext.mAttribute_mGlobalVariableMap.method_searchKey (inObject.mAttribute_mVarName, var_inferredType_14496, var_executionModeSet_14539, var_allowedProcedureMap_14593, var_allowedGuardMap_14641, var_allowedISRMap_14685, var_allowedTaskMap_14731, var_expressionGeneratedCode_14778, var_isConstant_14816, joker_14841, inCompiler COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 383)) ;
  {
  ioArgument_ioIntermediateCodeStruct.mAttribute_mGlobalVariableMap.setter_insertKey (inObject.mAttribute_mVarName, var_inferredType_14496, GALGAS_bool (kIsStrictSup, var_executionModeSet_14539.getter_count (SOURCE_FILE ("declaration-global-variable.galgas", 398)).objectCompare (GALGAS_uint ((uint32_t) 1U))), var_expressionGeneratedCode_14778, inCompiler COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 395)) ;
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
                                                                              const GALGAS_valueIR & inOperand3) :
mAttribute_lkey (inOperand0),
mAttribute_mType (inOperand1),
mAttribute_mGenerateVolatile (inOperand2),
mAttribute_mInitialValue (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalVariableMapIR_2D_element GALGAS_globalVariableMapIR_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                              const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                                              const GALGAS_bool & inOperand2,
                                                                                              const GALGAS_valueIR & inOperand3 
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

GALGAS_valueIR GALGAS_globalVariableMapIR_2D_element::getter_mInitialValue (UNUSED_LOCATION_ARGS) const {
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
    GALGAS_location location_1 (inObject.mAttribute_mPanicClauseName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_1, GALGAS_string ("the `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 96)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 96)).add_operation (GALGAS_string (" mode should be defined in order to use a panic clause"), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 96))  COMMA_SOURCE_FILE ("panic.galgas", 96)) ;
  }
  GALGAS_lstring var_routineNameForInvocationGraph_4606 = function_panicNameForInvocationGraph (inObject.mAttribute_mPanicClauseName.mAttribute_string, inObject.mAttribute_mPriority, inCompiler COMMA_SOURCE_FILE ("panic.galgas", 98)) ;
  GALGAS_variableMap var_variableMap_4719 = function_initialVariableMap (var_routineNameForInvocationGraph_4606.mAttribute_string, constinArgument_inContext, GALGAS_bool (false), GALGAS_accessKind::constructor_readWriteAccess (SOURCE_FILE ("panic.galgas", 104)), GALGAS_bool (false), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("panic.galgas", 106)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 100)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_StaticStringType_5018 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mAttribute_mTypeMap, function_staticStringTypeName (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 109)).getter_nowhere (SOURCE_FILE ("panic.galgas", 109)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 109)) ;
  GALGAS_lstring var_codeArg_5123 = GALGAS_lstring::constructor_new (GALGAS_string ("CODE"), inObject.mAttribute_mPanicClauseName.mAttribute_location  COMMA_SOURCE_FILE ("panic.galgas", 110)) ;
  {
  var_variableMap_4719.setter_insertUsedConstantInputFormalArgument (var_codeArg_5123, constinArgument_inContext.mAttribute_mPanicCodeType, GALGAS_bool (true), GALGAS_objectInMemoryIR::constructor_localValue (constinArgument_inContext.mAttribute_mPanicCodeType, var_codeArg_5123.mAttribute_string  COMMA_SOURCE_FILE ("panic.galgas", 115)), constinArgument_inContext.mAttribute_mPanicCodeType.getter_copyable (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 116)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 111)) ;
  }
  GALGAS_lstring var_fileArg_5500 = GALGAS_lstring::constructor_new (GALGAS_string ("FILE"), inObject.mAttribute_mPanicClauseName.mAttribute_location  COMMA_SOURCE_FILE ("panic.galgas", 119)) ;
  {
  var_variableMap_4719.setter_insertUsedConstantInputFormalArgument (var_fileArg_5500, var_StaticStringType_5018, GALGAS_bool (true), GALGAS_objectInMemoryIR::constructor_localValue (var_StaticStringType_5018, var_fileArg_5500.mAttribute_string  COMMA_SOURCE_FILE ("panic.galgas", 124)), var_StaticStringType_5018.getter_copyable (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 125)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 120)) ;
  }
  GALGAS_lstring var_lineArg_5853 = GALGAS_lstring::constructor_new (GALGAS_string ("LINE"), inObject.mAttribute_mPanicClauseName.mAttribute_location  COMMA_SOURCE_FILE ("panic.galgas", 128)) ;
  {
  var_variableMap_4719.setter_insertUsedConstantInputFormalArgument (var_lineArg_5853, constinArgument_inContext.mAttribute_mPanicLineType, GALGAS_bool (true), GALGAS_objectInMemoryIR::constructor_localValue (constinArgument_inContext.mAttribute_mPanicLineType, var_lineArg_5853.mAttribute_string  COMMA_SOURCE_FILE ("panic.galgas", 133)), constinArgument_inContext.mAttribute_mPanicLineType.getter_copyable (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 134)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 129)) ;
  }
  const enumGalgasBool test_2 = ioArgument_ioTemporaries.mAttribute_mSubprogramInvocationGraph.getter_isNodeDefined (var_routineNameForInvocationGraph_4606.mAttribute_string COMMA_SOURCE_FILE ("panic.galgas", 138)).operator_not (SOURCE_FILE ("panic.galgas", 138)).boolEnum () ;
  if (kBoolTrue == test_2) {
    {
    ioArgument_ioTemporaries.mAttribute_mSubprogramInvocationGraph.setter_addNode (var_routineNameForInvocationGraph_4606, var_routineNameForInvocationGraph_4606, inCompiler COMMA_SOURCE_FILE ("panic.galgas", 139)) ;
    }
  }
  GALGAS_instructionListIR var_instructionGenerationList_6549 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("panic.galgas", 145)) ;
  GALGAS_allocaList var_initAllocaList_6583 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("panic.galgas", 146)) ;
  GALGAS_stringset temp_3 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("panic.galgas", 153)) ;
  temp_3.addAssign_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 153))  COMMA_SOURCE_FILE ("panic.galgas", 153)) ;
  extensionMethod_analyzeRoutineInstructionList (inObject.mAttribute_mPanicInstructionList, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("panic.galgas", 148)), GALGAS_bool (false), GALGAS_bool (false), var_routineNameForInvocationGraph_4606, constinArgument_inContext, temp_3, GALGAS_bool (false), ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct.mAttribute_mStaticStringMap, var_variableMap_4719, var_initAllocaList_6583, var_instructionGenerationList_6549, inCompiler COMMA_SOURCE_FILE ("panic.galgas", 147)) ;
  extensionMethod_deinitTopLevelVariables (var_variableMap_4719, inCompiler COMMA_SOURCE_FILE ("panic.galgas", 162)) ;
  var_variableMap_4719.method_checkAutomatonStates (inObject.mAttribute_mEndOfPanicInstructions, inCompiler COMMA_SOURCE_FILE ("panic.galgas", 163)) ;
  const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, inObject.mAttribute_mPanicClauseName.mAttribute_string.objectCompare (GALGAS_string ("setup"))).boolEnum () ;
  if (kBoolTrue == test_4) {
    {
    ioArgument_ioTemporaries.mAttribute_mPanicSetupRoutinePriorityMap.setter_insertSetupKey (GALGAS_lstring::constructor_new (inObject.mAttribute_mPriority.mAttribute_bigint.getter_string (SOURCE_FILE ("panic.galgas", 167)), inObject.mAttribute_mLocationPriority  COMMA_SOURCE_FILE ("panic.galgas", 167)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 167)) ;
    }
    ioArgument_ioIntermediateCodeStruct.mAttribute_mPanicSetupInstructionListIR.plusAssign_operation(var_instructionGenerationList_6549, inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 168)) ;
  }else if (kBoolFalse == test_4) {
    const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, inObject.mAttribute_mPanicClauseName.mAttribute_string.objectCompare (GALGAS_string ("loop"))).boolEnum () ;
    if (kBoolTrue == test_5) {
      {
      ioArgument_ioTemporaries.mAttribute_mPanicLoopRoutinePriorityMap.setter_insertLoopKey (GALGAS_lstring::constructor_new (inObject.mAttribute_mPriority.mAttribute_bigint.getter_string (SOURCE_FILE ("panic.galgas", 170)), inObject.mAttribute_mLocationPriority  COMMA_SOURCE_FILE ("panic.galgas", 170)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 170)) ;
      }
      ioArgument_ioIntermediateCodeStruct.mAttribute_mPanicLoopInstructionListIR.plusAssign_operation(var_instructionGenerationList_6549, inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 171)) ;
    }else if (kBoolFalse == test_5) {
      GALGAS_location location_6 (inObject.mAttribute_mPanicClauseName.getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_6, GALGAS_string ("panic routine name should be \"setup\" or \"loop\"")  COMMA_SOURCE_FILE ("panic.galgas", 173)) ;
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
  GALGAS_variableMap var_variableMap_3604 = function_initialVariableMap (var_routineNameForInvocationGraph_3250.mAttribute_string, constinArgument_inContext, GALGAS_bool (false), GALGAS_accessKind::constructor_readWriteAccess (SOURCE_FILE ("declaration-boot.galgas", 85)), GALGAS_bool (false), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-boot.galgas", 87)), inCompiler COMMA_SOURCE_FILE ("declaration-boot.galgas", 81)) ;
  GALGAS_instructionListIR var_instructionGenerationList_3918 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("declaration-boot.galgas", 90)) ;
  GALGAS_allocaList var_bootAllocaList_3952 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("declaration-boot.galgas", 91)) ;
  GALGAS_stringset temp_2 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("declaration-boot.galgas", 98)) ;
  temp_2.addAssign_operation (function_bootModeName (inCompiler COMMA_SOURCE_FILE ("declaration-boot.galgas", 98))  COMMA_SOURCE_FILE ("declaration-boot.galgas", 98)) ;
  extensionMethod_analyzeRoutineInstructionList (inObject.mAttribute_mInstructionList, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-boot.galgas", 93)), GALGAS_bool (false), GALGAS_bool (false), var_routineNameForInvocationGraph_3250, constinArgument_inContext, temp_2, GALGAS_bool (true), ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct.mAttribute_mStaticStringMap, var_variableMap_3604, var_bootAllocaList_3952, var_instructionGenerationList_3918, inCompiler COMMA_SOURCE_FILE ("declaration-boot.galgas", 92)) ;
  extensionMethod_deinitTopLevelVariables (var_variableMap_3604, inCompiler COMMA_SOURCE_FILE ("declaration-boot.galgas", 107)) ;
  var_variableMap_3604.method_checkAutomatonStates (inObject.mAttribute_mEndOfBootLocation, inCompiler COMMA_SOURCE_FILE ("declaration-boot.galgas", 108)) ;
  ioArgument_ioIntermediateCodeStruct.mAttribute_mBootList.addAssign_operation (inObject.mAttribute_mBootLocation, var_bootAllocaList_3952, var_instructionGenerationList_3918, inObject.mAttribute_mEndOfBootLocation  COMMA_SOURCE_FILE ("declaration-boot.galgas", 111)) ;
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
                                                        const GALGAS__32_lstringlist & inOperand3,
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
                                     GALGAS__32_lstringlist::constructor_emptyList (HERE),
                                     GALGAS_instructionListAST::constructor_emptyList (HERE),
                                     GALGAS_location::constructor_nowhere (HERE),
                                     GALGAS_lbigint::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initList_2D_element GALGAS_initList_2D_element::constructor_new (const GALGAS_location & inOperand0,
                                                                        const GALGAS_lstring & inOperand1,
                                                                        const GALGAS_string & inOperand2,
                                                                        const GALGAS__32_lstringlist & inOperand3,
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

GALGAS__32_lstringlist GALGAS_initList_2D_element::getter_mRequiredByProcList (UNUSED_LOCATION_ARGS) const {
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
  GALGAS_unifiedTypeMap_2D_proxy var_selfType_4071 = temp_0 ;
  GALGAS_allocaList var_allocaList_4575 ;
  GALGAS_instructionListIR var_instructionGenerationList_4629 ;
  {
  GALGAS_stringset temp_2 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("declaration-init.galgas", 105)) ;
  temp_2.addAssign_operation (function_initModeName (inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 105))  COMMA_SOURCE_FILE ("declaration-init.galgas", 105)) ;
  routine_initSemanticAnalysis (constinArgument_inContext, ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct, var_selfType_4071, inObject.mAttribute_mPriority, temp_2, inObject.mAttribute_mRequiredByProcList, inObject.mAttribute_mInstructionList, inObject.mAttribute_mEndOfInitLocation, var_allocaList_4575, var_instructionGenerationList_4629, inCompiler  COMMA_SOURCE_FILE ("declaration-init.galgas", 99)) ;
  }
  ioArgument_ioIntermediateCodeStruct.mAttribute_mInitList.addAssign_operation (var_selfType_4071, inObject.mAttribute_mGlobalVarName, inObject.mAttribute_mRequiredByProcList, inObject.mAttribute_mPriority.mAttribute_bigint, var_allocaList_4575, var_instructionGenerationList_4629  COMMA_SOURCE_FILE ("declaration-init.galgas", 113)) ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externProcedureDeclarationListAST_2D_element::GALGAS_externProcedureDeclarationListAST_2D_element (void) :
mAttribute_mExternProcedureName (),
mAttribute_mProcedureModeList (),
mAttribute_mProcFormalArgumentList (),
mAttribute_mReturnTypeName (),
mAttribute_mLLVMName (),
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
mAttribute_mLLVMName (inOperand4),
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
    result = mAttribute_mLLVMName.objectCompare (inOperand.mAttribute_mLLVMName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mEndOfProcLocation.objectCompare (inOperand.mAttribute_mEndOfProcLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_externProcedureDeclarationListAST_2D_element::isValid (void) const {
  return mAttribute_mExternProcedureName.isValid () && mAttribute_mProcedureModeList.isValid () && mAttribute_mProcFormalArgumentList.isValid () && mAttribute_mReturnTypeName.isValid () && mAttribute_mLLVMName.isValid () && mAttribute_mEndOfProcLocation.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externProcedureDeclarationListAST_2D_element::drop (void) {
  mAttribute_mExternProcedureName.drop () ;
  mAttribute_mProcedureModeList.drop () ;
  mAttribute_mProcFormalArgumentList.drop () ;
  mAttribute_mReturnTypeName.drop () ;
  mAttribute_mLLVMName.drop () ;
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
    mAttribute_mLLVMName.description (ioString, inIndentation+1) ;
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

GALGAS_lstring GALGAS_externProcedureDeclarationListAST_2D_element::getter_mLLVMName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLLVMName ;
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

