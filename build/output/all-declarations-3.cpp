#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-3.h"


//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_panicInstructionIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_panicInstructionIR * p = (const cPtr_panicInstructionIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_panicInstructionIR) ;
  if (kOperandEqual == result) {
    result = mAttribute_mThrowLocation.objectCompare (p->mAttribute_mThrowLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mPanicCode.objectCompare (p->mAttribute_mPanicCode) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_panicInstructionIR::objectCompare (const GALGAS_panicInstructionIR & inOperand) const {
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

GALGAS_panicInstructionIR::GALGAS_panicInstructionIR (void) :
GALGAS_abstractInstructionIR () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_panicInstructionIR GALGAS_panicInstructionIR::constructor_default (LOCATION_ARGS) {
  return GALGAS_panicInstructionIR::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                     GALGAS_bigint::constructor_zero (HERE)
                                                     COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_panicInstructionIR::GALGAS_panicInstructionIR (const cPtr_panicInstructionIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_panicInstructionIR) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_panicInstructionIR GALGAS_panicInstructionIR::constructor_new (const GALGAS_location & inAttribute_mThrowLocation,
                                                                      const GALGAS_bigint & inAttribute_mPanicCode
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_panicInstructionIR result ;
  if (inAttribute_mThrowLocation.isValid () && inAttribute_mPanicCode.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_panicInstructionIR (inAttribute_mThrowLocation, inAttribute_mPanicCode COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_panicInstructionIR::getter_mThrowLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_panicInstructionIR * p = (const cPtr_panicInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_panicInstructionIR) ;
    result = p->mAttribute_mThrowLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_panicInstructionIR::getter_mThrowLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mThrowLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint GALGAS_panicInstructionIR::getter_mPanicCode (UNUSED_LOCATION_ARGS) const {
  GALGAS_bigint result ;
  if (NULL != mObjectPtr) {
    const cPtr_panicInstructionIR * p = (const cPtr_panicInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_panicInstructionIR) ;
    result = p->mAttribute_mPanicCode ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint cPtr_panicInstructionIR::getter_mPanicCode (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPanicCode ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                     Pointer class for @panicInstructionIR class                                     *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_panicInstructionIR::cPtr_panicInstructionIR (const GALGAS_location & in_mThrowLocation,
                                                  const GALGAS_bigint & in_mPanicCode
                                                  COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mAttribute_mThrowLocation (in_mThrowLocation),
mAttribute_mPanicCode (in_mPanicCode) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_panicInstructionIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_panicInstructionIR ;
}

void cPtr_panicInstructionIR::description (C_String & ioString,
                                           const int32_t inIndentation) const {
  ioString << "[@panicInstructionIR:" ;
  mAttribute_mThrowLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mPanicCode.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_panicInstructionIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_panicInstructionIR (mAttribute_mThrowLocation, mAttribute_mPanicCode COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @panicInstructionIR type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_panicInstructionIR ("panicInstructionIR",
                                           & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_panicInstructionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_panicInstructionIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_panicInstructionIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_panicInstructionIR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_panicInstructionIR GALGAS_panicInstructionIR::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_panicInstructionIR result ;
  const GALGAS_panicInstructionIR * p = (const GALGAS_panicInstructionIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_panicInstructionIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("panicInstructionIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
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
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_syncInstructionIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_syncInstructionIR * p = (const cPtr_syncInstructionIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_syncInstructionIR) ;
  if (kOperandEqual == result) {
    result = mAttribute_mSelectInstructionLocation.objectCompare (p->mAttribute_mSelectInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mOnInstructionBranchListIR.objectCompare (p->mAttribute_mOnInstructionBranchListIR) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_syncInstructionIR::objectCompare (const GALGAS_syncInstructionIR & inOperand) const {
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

GALGAS_syncInstructionIR::GALGAS_syncInstructionIR (void) :
GALGAS_abstractInstructionIR () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syncInstructionIR GALGAS_syncInstructionIR::constructor_default (LOCATION_ARGS) {
  return GALGAS_syncInstructionIR::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                    GALGAS_syncInstructionBranchListIR::constructor_emptyList (HERE)
                                                    COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syncInstructionIR::GALGAS_syncInstructionIR (const cPtr_syncInstructionIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_syncInstructionIR) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syncInstructionIR GALGAS_syncInstructionIR::constructor_new (const GALGAS_location & inAttribute_mSelectInstructionLocation,
                                                                    const GALGAS_syncInstructionBranchListIR & inAttribute_mOnInstructionBranchListIR
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_syncInstructionIR result ;
  if (inAttribute_mSelectInstructionLocation.isValid () && inAttribute_mOnInstructionBranchListIR.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_syncInstructionIR (inAttribute_mSelectInstructionLocation, inAttribute_mOnInstructionBranchListIR COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_syncInstructionIR::getter_mSelectInstructionLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_syncInstructionIR * p = (const cPtr_syncInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syncInstructionIR) ;
    result = p->mAttribute_mSelectInstructionLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_syncInstructionIR::getter_mSelectInstructionLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSelectInstructionLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syncInstructionBranchListIR GALGAS_syncInstructionIR::getter_mOnInstructionBranchListIR (UNUSED_LOCATION_ARGS) const {
  GALGAS_syncInstructionBranchListIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_syncInstructionIR * p = (const cPtr_syncInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syncInstructionIR) ;
    result = p->mAttribute_mOnInstructionBranchListIR ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syncInstructionBranchListIR cPtr_syncInstructionIR::getter_mOnInstructionBranchListIR (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOnInstructionBranchListIR ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                     Pointer class for @syncInstructionIR class                                      *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_syncInstructionIR::cPtr_syncInstructionIR (const GALGAS_location & in_mSelectInstructionLocation,
                                                const GALGAS_syncInstructionBranchListIR & in_mOnInstructionBranchListIR
                                                COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mAttribute_mSelectInstructionLocation (in_mSelectInstructionLocation),
mAttribute_mOnInstructionBranchListIR (in_mOnInstructionBranchListIR) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_syncInstructionIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syncInstructionIR ;
}

void cPtr_syncInstructionIR::description (C_String & ioString,
                                          const int32_t inIndentation) const {
  ioString << "[@syncInstructionIR:" ;
  mAttribute_mSelectInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mOnInstructionBranchListIR.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_syncInstructionIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_syncInstructionIR (mAttribute_mSelectInstructionLocation, mAttribute_mOnInstructionBranchListIR COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @syncInstructionIR type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_syncInstructionIR ("syncInstructionIR",
                                          & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_syncInstructionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syncInstructionIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_syncInstructionIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_syncInstructionIR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syncInstructionIR GALGAS_syncInstructionIR::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_syncInstructionIR result ;
  const GALGAS_syncInstructionIR * p = (const GALGAS_syncInstructionIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_syncInstructionIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syncInstructionIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
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
//                                     Class for element of '@switchCaseList' list                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_switchCaseList : public cCollectionElement {
  public : GALGAS_switchCaseList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_switchCaseList (const GALGAS_lstringlist & in_mCaseIdentifiers,
                                              const GALGAS_instructionListAST & in_mCaseInstructionList
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

cCollectionElement_switchCaseList::cCollectionElement_switchCaseList (const GALGAS_lstringlist & in_mCaseIdentifiers,
                                                                      const GALGAS_instructionListAST & in_mCaseInstructionList
                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mCaseIdentifiers, in_mCaseInstructionList) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_switchCaseList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_switchCaseList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_switchCaseList (mObject.mAttribute_mCaseIdentifiers, mObject.mAttribute_mCaseInstructionList COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_switchCaseList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mCaseIdentifiers" ":" ;
  mObject.mAttribute_mCaseIdentifiers.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mCaseInstructionList" ":" ;
  mObject.mAttribute_mCaseInstructionList.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_switchCaseList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_switchCaseList * operand = (cCollectionElement_switchCaseList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_switchCaseList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_switchCaseList::GALGAS_switchCaseList (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_switchCaseList::GALGAS_switchCaseList (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_switchCaseList GALGAS_switchCaseList::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_switchCaseList result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_switchCaseList GALGAS_switchCaseList::constructor_listWithValue (const GALGAS_lstringlist & inOperand0,
                                                                        const GALGAS_instructionListAST & inOperand1
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_switchCaseList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_switchCaseList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_switchCaseList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                       const GALGAS_lstringlist & in_mCaseIdentifiers,
                                                       const GALGAS_instructionListAST & in_mCaseInstructionList
                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_switchCaseList * p = NULL ;
  macroMyNew (p, cCollectionElement_switchCaseList (in_mCaseIdentifiers,
                                                    in_mCaseInstructionList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_switchCaseList::addAssign_operation (const GALGAS_lstringlist & inOperand0,
                                                 const GALGAS_instructionListAST & inOperand1
                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_switchCaseList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_switchCaseList::setter_insertAtIndex (const GALGAS_lstringlist inOperand0,
                                                  const GALGAS_instructionListAST inOperand1,
                                                  const GALGAS_uint inInsertionIndex,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_switchCaseList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_switchCaseList::setter_removeAtIndex (GALGAS_lstringlist & outOperand0,
                                                  GALGAS_instructionListAST & outOperand1,
                                                  const GALGAS_uint inRemoveIndex,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_switchCaseList * p = (cCollectionElement_switchCaseList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_switchCaseList) ;
      outOperand0 = p->mObject.mAttribute_mCaseIdentifiers ;
      outOperand1 = p->mObject.mAttribute_mCaseInstructionList ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_switchCaseList::setter_popFirst (GALGAS_lstringlist & outOperand0,
                                             GALGAS_instructionListAST & outOperand1,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_switchCaseList * p = (cCollectionElement_switchCaseList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_switchCaseList) ;
    outOperand0 = p->mObject.mAttribute_mCaseIdentifiers ;
    outOperand1 = p->mObject.mAttribute_mCaseInstructionList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_switchCaseList::setter_popLast (GALGAS_lstringlist & outOperand0,
                                            GALGAS_instructionListAST & outOperand1,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_switchCaseList * p = (cCollectionElement_switchCaseList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_switchCaseList) ;
    outOperand0 = p->mObject.mAttribute_mCaseIdentifiers ;
    outOperand1 = p->mObject.mAttribute_mCaseInstructionList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_switchCaseList::method_first (GALGAS_lstringlist & outOperand0,
                                          GALGAS_instructionListAST & outOperand1,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_switchCaseList * p = (cCollectionElement_switchCaseList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_switchCaseList) ;
    outOperand0 = p->mObject.mAttribute_mCaseIdentifiers ;
    outOperand1 = p->mObject.mAttribute_mCaseInstructionList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_switchCaseList::method_last (GALGAS_lstringlist & outOperand0,
                                         GALGAS_instructionListAST & outOperand1,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_switchCaseList * p = (cCollectionElement_switchCaseList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_switchCaseList) ;
    outOperand0 = p->mObject.mAttribute_mCaseIdentifiers ;
    outOperand1 = p->mObject.mAttribute_mCaseInstructionList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_switchCaseList GALGAS_switchCaseList::add_operation (const GALGAS_switchCaseList & inOperand,
                                                            C_Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_switchCaseList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_switchCaseList GALGAS_switchCaseList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_switchCaseList result = GALGAS_switchCaseList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_switchCaseList GALGAS_switchCaseList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_switchCaseList result = GALGAS_switchCaseList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_switchCaseList GALGAS_switchCaseList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_switchCaseList result = GALGAS_switchCaseList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_switchCaseList::plusAssign_operation (const GALGAS_switchCaseList inOperand,
                                                  C_Compiler * /* inCompiler */
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_switchCaseList::getter_mCaseIdentifiersAtIndex (const GALGAS_uint & inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_switchCaseList * p = (cCollectionElement_switchCaseList *) attributes.ptr () ;
  GALGAS_lstringlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_switchCaseList) ;
    result = p->mObject.mAttribute_mCaseIdentifiers ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST GALGAS_switchCaseList::getter_mCaseInstructionListAtIndex (const GALGAS_uint & inIndex,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_switchCaseList * p = (cCollectionElement_switchCaseList *) attributes.ptr () ;
  GALGAS_instructionListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_switchCaseList) ;
    result = p->mObject.mAttribute_mCaseInstructionList ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_switchCaseList::cEnumerator_switchCaseList (const GALGAS_switchCaseList & inEnumeratedObject,
                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_switchCaseList_2D_element cEnumerator_switchCaseList::current (LOCATION_ARGS) const {
  const cCollectionElement_switchCaseList * p = (const cCollectionElement_switchCaseList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_switchCaseList) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist cEnumerator_switchCaseList::current_mCaseIdentifiers (LOCATION_ARGS) const {
  const cCollectionElement_switchCaseList * p = (const cCollectionElement_switchCaseList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_switchCaseList) ;
  return p->mObject.mAttribute_mCaseIdentifiers ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST cEnumerator_switchCaseList::current_mCaseInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_switchCaseList * p = (const cCollectionElement_switchCaseList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_switchCaseList) ;
  return p->mObject.mAttribute_mCaseInstructionList ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @switchCaseList type                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_switchCaseList ("switchCaseList",
                                       NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_switchCaseList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_switchCaseList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_switchCaseList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_switchCaseList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_switchCaseList GALGAS_switchCaseList::extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_switchCaseList result ;
  const GALGAS_switchCaseList * p = (const GALGAS_switchCaseList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_switchCaseList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("switchCaseList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_switchInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_switchInstructionAST * p = (const cPtr_switchInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_switchInstructionAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mSwitchExpression.objectCompare (p->mAttribute_mSwitchExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mEndOf_5F_test_5F_expression.objectCompare (p->mAttribute_mEndOf_5F_test_5F_expression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSwitchCaseList.objectCompare (p->mAttribute_mSwitchCaseList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mEndOf_5F_while_5F_instruction.objectCompare (p->mAttribute_mEndOf_5F_while_5F_instruction) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_switchInstructionAST::objectCompare (const GALGAS_switchInstructionAST & inOperand) const {
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

GALGAS_switchInstructionAST::GALGAS_switchInstructionAST (void) :
GALGAS_instructionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_switchInstructionAST::GALGAS_switchInstructionAST (const cPtr_switchInstructionAST * inSourcePtr) :
GALGAS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_switchInstructionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_switchInstructionAST GALGAS_switchInstructionAST::constructor_new (const GALGAS_expressionAST & inAttribute_mSwitchExpression,
                                                                          const GALGAS_location & inAttribute_mEndOf_5F_test_5F_expression,
                                                                          const GALGAS_switchCaseList & inAttribute_mSwitchCaseList,
                                                                          const GALGAS_location & inAttribute_mEndOf_5F_while_5F_instruction
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_switchInstructionAST result ;
  if (inAttribute_mSwitchExpression.isValid () && inAttribute_mEndOf_5F_test_5F_expression.isValid () && inAttribute_mSwitchCaseList.isValid () && inAttribute_mEndOf_5F_while_5F_instruction.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_switchInstructionAST (inAttribute_mSwitchExpression, inAttribute_mEndOf_5F_test_5F_expression, inAttribute_mSwitchCaseList, inAttribute_mEndOf_5F_while_5F_instruction COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST GALGAS_switchInstructionAST::getter_mSwitchExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_switchInstructionAST * p = (const cPtr_switchInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionAST) ;
    result = p->mAttribute_mSwitchExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST cPtr_switchInstructionAST::getter_mSwitchExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSwitchExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_switchInstructionAST::getter_mEndOf_5F_test_5F_expression (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_switchInstructionAST * p = (const cPtr_switchInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionAST) ;
    result = p->mAttribute_mEndOf_5F_test_5F_expression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_switchInstructionAST::getter_mEndOf_5F_test_5F_expression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOf_5F_test_5F_expression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_switchCaseList GALGAS_switchInstructionAST::getter_mSwitchCaseList (UNUSED_LOCATION_ARGS) const {
  GALGAS_switchCaseList result ;
  if (NULL != mObjectPtr) {
    const cPtr_switchInstructionAST * p = (const cPtr_switchInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionAST) ;
    result = p->mAttribute_mSwitchCaseList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_switchCaseList cPtr_switchInstructionAST::getter_mSwitchCaseList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSwitchCaseList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_switchInstructionAST::getter_mEndOf_5F_while_5F_instruction (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_switchInstructionAST * p = (const cPtr_switchInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionAST) ;
    result = p->mAttribute_mEndOf_5F_while_5F_instruction ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_switchInstructionAST::getter_mEndOf_5F_while_5F_instruction (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOf_5F_while_5F_instruction ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                    Pointer class for @switchInstructionAST class                                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_switchInstructionAST::cPtr_switchInstructionAST (const GALGAS_expressionAST & in_mSwitchExpression,
                                                      const GALGAS_location & in_mEndOf_5F_test_5F_expression,
                                                      const GALGAS_switchCaseList & in_mSwitchCaseList,
                                                      const GALGAS_location & in_mEndOf_5F_while_5F_instruction
                                                      COMMA_LOCATION_ARGS) :
cPtr_instructionAST (THERE),
mAttribute_mSwitchExpression (in_mSwitchExpression),
mAttribute_mEndOf_5F_test_5F_expression (in_mEndOf_5F_test_5F_expression),
mAttribute_mSwitchCaseList (in_mSwitchCaseList),
mAttribute_mEndOf_5F_while_5F_instruction (in_mEndOf_5F_while_5F_instruction) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_switchInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_switchInstructionAST ;
}

void cPtr_switchInstructionAST::description (C_String & ioString,
                                             const int32_t inIndentation) const {
  ioString << "[@switchInstructionAST:" ;
  mAttribute_mSwitchExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mEndOf_5F_test_5F_expression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mSwitchCaseList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mEndOf_5F_while_5F_instruction.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_switchInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_switchInstructionAST (mAttribute_mSwitchExpression, mAttribute_mEndOf_5F_test_5F_expression, mAttribute_mSwitchCaseList, mAttribute_mEndOf_5F_while_5F_instruction COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @switchInstructionAST type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_switchInstructionAST ("switchInstructionAST",
                                             & kTypeDescriptor_GALGAS_instructionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_switchInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_switchInstructionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_switchInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_switchInstructionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_switchInstructionAST GALGAS_switchInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_switchInstructionAST result ;
  const GALGAS_switchInstructionAST * p = (const GALGAS_switchInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_switchInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("switchInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Class for element of '@switchCaseListIR' list                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_switchCaseListIR : public cCollectionElement {
  public : GALGAS_switchCaseListIR_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_switchCaseListIR (const GALGAS_uintlist & in_mCaseIdentifierIndexes,
                                                const GALGAS_instructionListIR & in_mCaseInstructionList
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

cCollectionElement_switchCaseListIR::cCollectionElement_switchCaseListIR (const GALGAS_uintlist & in_mCaseIdentifierIndexes,
                                                                          const GALGAS_instructionListIR & in_mCaseInstructionList
                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mCaseIdentifierIndexes, in_mCaseInstructionList) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_switchCaseListIR::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_switchCaseListIR::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_switchCaseListIR (mObject.mAttribute_mCaseIdentifierIndexes, mObject.mAttribute_mCaseInstructionList COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_switchCaseListIR::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mCaseIdentifierIndexes" ":" ;
  mObject.mAttribute_mCaseIdentifierIndexes.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mCaseInstructionList" ":" ;
  mObject.mAttribute_mCaseInstructionList.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_switchCaseListIR::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_switchCaseListIR * operand = (cCollectionElement_switchCaseListIR *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_switchCaseListIR) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_switchCaseListIR::GALGAS_switchCaseListIR (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_switchCaseListIR::GALGAS_switchCaseListIR (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_switchCaseListIR GALGAS_switchCaseListIR::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_switchCaseListIR result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_switchCaseListIR GALGAS_switchCaseListIR::constructor_listWithValue (const GALGAS_uintlist & inOperand0,
                                                                            const GALGAS_instructionListIR & inOperand1
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_switchCaseListIR result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_switchCaseListIR::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_switchCaseListIR::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                         const GALGAS_uintlist & in_mCaseIdentifierIndexes,
                                                         const GALGAS_instructionListIR & in_mCaseInstructionList
                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_switchCaseListIR * p = NULL ;
  macroMyNew (p, cCollectionElement_switchCaseListIR (in_mCaseIdentifierIndexes,
                                                      in_mCaseInstructionList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_switchCaseListIR::addAssign_operation (const GALGAS_uintlist & inOperand0,
                                                   const GALGAS_instructionListIR & inOperand1
                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_switchCaseListIR (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_switchCaseListIR::setter_insertAtIndex (const GALGAS_uintlist inOperand0,
                                                    const GALGAS_instructionListIR inOperand1,
                                                    const GALGAS_uint inInsertionIndex,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_switchCaseListIR (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_switchCaseListIR::setter_removeAtIndex (GALGAS_uintlist & outOperand0,
                                                    GALGAS_instructionListIR & outOperand1,
                                                    const GALGAS_uint inRemoveIndex,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_switchCaseListIR * p = (cCollectionElement_switchCaseListIR *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_switchCaseListIR) ;
      outOperand0 = p->mObject.mAttribute_mCaseIdentifierIndexes ;
      outOperand1 = p->mObject.mAttribute_mCaseInstructionList ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_switchCaseListIR::setter_popFirst (GALGAS_uintlist & outOperand0,
                                               GALGAS_instructionListIR & outOperand1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_switchCaseListIR * p = (cCollectionElement_switchCaseListIR *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_switchCaseListIR) ;
    outOperand0 = p->mObject.mAttribute_mCaseIdentifierIndexes ;
    outOperand1 = p->mObject.mAttribute_mCaseInstructionList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_switchCaseListIR::setter_popLast (GALGAS_uintlist & outOperand0,
                                              GALGAS_instructionListIR & outOperand1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_switchCaseListIR * p = (cCollectionElement_switchCaseListIR *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_switchCaseListIR) ;
    outOperand0 = p->mObject.mAttribute_mCaseIdentifierIndexes ;
    outOperand1 = p->mObject.mAttribute_mCaseInstructionList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_switchCaseListIR::method_first (GALGAS_uintlist & outOperand0,
                                            GALGAS_instructionListIR & outOperand1,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_switchCaseListIR * p = (cCollectionElement_switchCaseListIR *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_switchCaseListIR) ;
    outOperand0 = p->mObject.mAttribute_mCaseIdentifierIndexes ;
    outOperand1 = p->mObject.mAttribute_mCaseInstructionList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_switchCaseListIR::method_last (GALGAS_uintlist & outOperand0,
                                           GALGAS_instructionListIR & outOperand1,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_switchCaseListIR * p = (cCollectionElement_switchCaseListIR *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_switchCaseListIR) ;
    outOperand0 = p->mObject.mAttribute_mCaseIdentifierIndexes ;
    outOperand1 = p->mObject.mAttribute_mCaseInstructionList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_switchCaseListIR GALGAS_switchCaseListIR::add_operation (const GALGAS_switchCaseListIR & inOperand,
                                                                C_Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_switchCaseListIR result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_switchCaseListIR GALGAS_switchCaseListIR::getter_subListWithRange (const GALGAS_range & inRange,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_switchCaseListIR result = GALGAS_switchCaseListIR::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_switchCaseListIR GALGAS_switchCaseListIR::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_switchCaseListIR result = GALGAS_switchCaseListIR::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_switchCaseListIR GALGAS_switchCaseListIR::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_switchCaseListIR result = GALGAS_switchCaseListIR::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_switchCaseListIR::plusAssign_operation (const GALGAS_switchCaseListIR inOperand,
                                                    C_Compiler * /* inCompiler */
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uintlist GALGAS_switchCaseListIR::getter_mCaseIdentifierIndexesAtIndex (const GALGAS_uint & inIndex,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_switchCaseListIR * p = (cCollectionElement_switchCaseListIR *) attributes.ptr () ;
  GALGAS_uintlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_switchCaseListIR) ;
    result = p->mObject.mAttribute_mCaseIdentifierIndexes ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR GALGAS_switchCaseListIR::getter_mCaseInstructionListAtIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_switchCaseListIR * p = (cCollectionElement_switchCaseListIR *) attributes.ptr () ;
  GALGAS_instructionListIR result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_switchCaseListIR) ;
    result = p->mObject.mAttribute_mCaseInstructionList ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_switchCaseListIR::cEnumerator_switchCaseListIR (const GALGAS_switchCaseListIR & inEnumeratedObject,
                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_switchCaseListIR_2D_element cEnumerator_switchCaseListIR::current (LOCATION_ARGS) const {
  const cCollectionElement_switchCaseListIR * p = (const cCollectionElement_switchCaseListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_switchCaseListIR) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uintlist cEnumerator_switchCaseListIR::current_mCaseIdentifierIndexes (LOCATION_ARGS) const {
  const cCollectionElement_switchCaseListIR * p = (const cCollectionElement_switchCaseListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_switchCaseListIR) ;
  return p->mObject.mAttribute_mCaseIdentifierIndexes ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR cEnumerator_switchCaseListIR::current_mCaseInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_switchCaseListIR * p = (const cCollectionElement_switchCaseListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_switchCaseListIR) ;
  return p->mObject.mAttribute_mCaseInstructionList ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @switchCaseListIR type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_switchCaseListIR ("switchCaseListIR",
                                         NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_switchCaseListIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_switchCaseListIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_switchCaseListIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_switchCaseListIR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_switchCaseListIR GALGAS_switchCaseListIR::extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_switchCaseListIR result ;
  const GALGAS_switchCaseListIR * p = (const GALGAS_switchCaseListIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_switchCaseListIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("switchCaseListIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_assignmentSelfAccessAST_selfAccess::cEnumAssociatedValues_assignmentSelfAccessAST_selfAccess (const GALGAS_location & inAssociatedValue0
                                                                                                                    COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_assignmentSelfAccessAST_selfAccess::description (C_String & ioString,
                                                                            const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_assignmentSelfAccessAST_selfAccess::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_assignmentSelfAccessAST_selfAccess * ptr = dynamic_cast<const cEnumAssociatedValues_assignmentSelfAccessAST_selfAccess *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_assignmentSelfAccessAST::GALGAS_assignmentSelfAccessAST (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_assignmentSelfAccessAST GALGAS_assignmentSelfAccessAST::constructor_noSelfAccess (UNUSED_LOCATION_ARGS) {
  GALGAS_assignmentSelfAccessAST result ;
  result.mEnum = kEnum_noSelfAccess ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_assignmentSelfAccessAST GALGAS_assignmentSelfAccessAST::constructor_selfAccess (const GALGAS_location & inAssociatedValue0
                                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_assignmentSelfAccessAST result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_selfAccess ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_assignmentSelfAccessAST_selfAccess (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_assignmentSelfAccessAST::method_selfAccess (GALGAS_location & outAssociatedValue0,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_selfAccess) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @assignmentSelfAccessAST selfAccess invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_assignmentSelfAccessAST_selfAccess * ptr = (const cEnumAssociatedValues_assignmentSelfAccessAST_selfAccess *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * gEnumNameArrayFor_assignmentSelfAccessAST [3] = {
  "(not built)",
  "noSelfAccess",
  "selfAccess"
} ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_assignmentSelfAccessAST::getter_isNoSelfAccess (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_noSelfAccess == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_assignmentSelfAccessAST::getter_isSelfAccess (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_selfAccess == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_assignmentSelfAccessAST::description (C_String & ioString,
                                                  const int32_t inIndentation) const {
  ioString << "<enum @assignmentSelfAccessAST: " << gEnumNameArrayFor_assignmentSelfAccessAST [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_assignmentSelfAccessAST::objectCompare (const GALGAS_assignmentSelfAccessAST & inOperand) const {
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
//                                            @assignmentSelfAccessAST type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_assignmentSelfAccessAST ("assignmentSelfAccessAST",
                                                NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_assignmentSelfAccessAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assignmentSelfAccessAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_assignmentSelfAccessAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_assignmentSelfAccessAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_assignmentSelfAccessAST GALGAS_assignmentSelfAccessAST::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_assignmentSelfAccessAST result ;
  const GALGAS_assignmentSelfAccessAST * p = (const GALGAS_assignmentSelfAccessAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_assignmentSelfAccessAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("assignmentSelfAccessAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Class for element of '@accessInAssignmentListAST' list                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_accessInAssignmentListAST : public cCollectionElement {
  public : GALGAS_accessInAssignmentListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_accessInAssignmentListAST (const GALGAS_accessInAssignmentAST & in_mAccess
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

cCollectionElement_accessInAssignmentListAST::cCollectionElement_accessInAssignmentListAST (const GALGAS_accessInAssignmentAST & in_mAccess
                                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mAccess) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_accessInAssignmentListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_accessInAssignmentListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_accessInAssignmentListAST (mObject.mAttribute_mAccess COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_accessInAssignmentListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAccess" ":" ;
  mObject.mAttribute_mAccess.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_accessInAssignmentListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_accessInAssignmentListAST * operand = (cCollectionElement_accessInAssignmentListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_accessInAssignmentListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_accessInAssignmentListAST::GALGAS_accessInAssignmentListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_accessInAssignmentListAST::GALGAS_accessInAssignmentListAST (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_accessInAssignmentListAST GALGAS_accessInAssignmentListAST::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_accessInAssignmentListAST result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_accessInAssignmentListAST GALGAS_accessInAssignmentListAST::constructor_listWithValue (const GALGAS_accessInAssignmentAST & inOperand0
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_accessInAssignmentListAST result ;
  if (inOperand0.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_accessInAssignmentListAST::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_accessInAssignmentListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                  const GALGAS_accessInAssignmentAST & in_mAccess
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_accessInAssignmentListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_accessInAssignmentListAST (in_mAccess COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_accessInAssignmentListAST::addAssign_operation (const GALGAS_accessInAssignmentAST & inOperand0
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_accessInAssignmentListAST (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_accessInAssignmentListAST::setter_insertAtIndex (const GALGAS_accessInAssignmentAST inOperand0,
                                                             const GALGAS_uint inInsertionIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_accessInAssignmentListAST (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_accessInAssignmentListAST::setter_removeAtIndex (GALGAS_accessInAssignmentAST & outOperand0,
                                                             const GALGAS_uint inRemoveIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_accessInAssignmentListAST * p = (cCollectionElement_accessInAssignmentListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_accessInAssignmentListAST) ;
      outOperand0 = p->mObject.mAttribute_mAccess ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_accessInAssignmentListAST::setter_popFirst (GALGAS_accessInAssignmentAST & outOperand0,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_accessInAssignmentListAST * p = (cCollectionElement_accessInAssignmentListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_accessInAssignmentListAST) ;
    outOperand0 = p->mObject.mAttribute_mAccess ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_accessInAssignmentListAST::setter_popLast (GALGAS_accessInAssignmentAST & outOperand0,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_accessInAssignmentListAST * p = (cCollectionElement_accessInAssignmentListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_accessInAssignmentListAST) ;
    outOperand0 = p->mObject.mAttribute_mAccess ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_accessInAssignmentListAST::method_first (GALGAS_accessInAssignmentAST & outOperand0,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_accessInAssignmentListAST * p = (cCollectionElement_accessInAssignmentListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_accessInAssignmentListAST) ;
    outOperand0 = p->mObject.mAttribute_mAccess ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_accessInAssignmentListAST::method_last (GALGAS_accessInAssignmentAST & outOperand0,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_accessInAssignmentListAST * p = (cCollectionElement_accessInAssignmentListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_accessInAssignmentListAST) ;
    outOperand0 = p->mObject.mAttribute_mAccess ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_accessInAssignmentListAST GALGAS_accessInAssignmentListAST::add_operation (const GALGAS_accessInAssignmentListAST & inOperand,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_accessInAssignmentListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_accessInAssignmentListAST GALGAS_accessInAssignmentListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_accessInAssignmentListAST result = GALGAS_accessInAssignmentListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_accessInAssignmentListAST GALGAS_accessInAssignmentListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_accessInAssignmentListAST result = GALGAS_accessInAssignmentListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_accessInAssignmentListAST GALGAS_accessInAssignmentListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_accessInAssignmentListAST result = GALGAS_accessInAssignmentListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_accessInAssignmentListAST::plusAssign_operation (const GALGAS_accessInAssignmentListAST inOperand,
                                                             C_Compiler * /* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_accessInAssignmentAST GALGAS_accessInAssignmentListAST::getter_mAccessAtIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_accessInAssignmentListAST * p = (cCollectionElement_accessInAssignmentListAST *) attributes.ptr () ;
  GALGAS_accessInAssignmentAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_accessInAssignmentListAST) ;
    result = p->mObject.mAttribute_mAccess ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_accessInAssignmentListAST::cEnumerator_accessInAssignmentListAST (const GALGAS_accessInAssignmentListAST & inEnumeratedObject,
                                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_accessInAssignmentListAST_2D_element cEnumerator_accessInAssignmentListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_accessInAssignmentListAST * p = (const cCollectionElement_accessInAssignmentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_accessInAssignmentListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_accessInAssignmentAST cEnumerator_accessInAssignmentListAST::current_mAccess (LOCATION_ARGS) const {
  const cCollectionElement_accessInAssignmentListAST * p = (const cCollectionElement_accessInAssignmentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_accessInAssignmentListAST) ;
  return p->mObject.mAttribute_mAccess ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @accessInAssignmentListAST type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_accessInAssignmentListAST ("accessInAssignmentListAST",
                                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_accessInAssignmentListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_accessInAssignmentListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_accessInAssignmentListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_accessInAssignmentListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_accessInAssignmentListAST GALGAS_accessInAssignmentListAST::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_accessInAssignmentListAST result ;
  const GALGAS_accessInAssignmentListAST * p = (const GALGAS_accessInAssignmentListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_accessInAssignmentListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("accessInAssignmentListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_targetAccessKind::GALGAS_targetAccessKind (void) :
mEnum (kNotBuilt) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_targetAccessKind GALGAS_targetAccessKind::constructor_read (UNUSED_LOCATION_ARGS) {
  GALGAS_targetAccessKind result ;
  result.mEnum = kEnum_read ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_targetAccessKind GALGAS_targetAccessKind::constructor_write (UNUSED_LOCATION_ARGS) {
  GALGAS_targetAccessKind result ;
  result.mEnum = kEnum_write ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_targetAccessKind GALGAS_targetAccessKind::constructor_readWrite (UNUSED_LOCATION_ARGS) {
  GALGAS_targetAccessKind result ;
  result.mEnum = kEnum_readWrite ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * gEnumNameArrayFor_targetAccessKind [4] = {
  "(not built)",
  "read",
  "write",
  "readWrite"
} ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_targetAccessKind::getter_isRead (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_read == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_targetAccessKind::getter_isWrite (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_write == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_targetAccessKind::getter_isReadWrite (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_readWrite == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_targetAccessKind::description (C_String & ioString,
                                           const int32_t /* inIndentation */) const {
  ioString << "<enum @targetAccessKind: " << gEnumNameArrayFor_targetAccessKind [mEnum] ;
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_targetAccessKind::objectCompare (const GALGAS_targetAccessKind & inOperand) const {
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
//                                               @targetAccessKind type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_targetAccessKind ("targetAccessKind",
                                         NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_targetAccessKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_targetAccessKind ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_targetAccessKind::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_targetAccessKind (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_targetAccessKind GALGAS_targetAccessKind::extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_targetAccessKind result ;
  const GALGAS_targetAccessKind * p = (const GALGAS_targetAccessKind *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_targetAccessKind *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("targetAccessKind", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_variableMap::cMapElement_variableMap (const GALGAS_lstring & inKey,
                                                  const GALGAS_unifiedTypeMap_2D_proxy & in_type,
                                                  const GALGAS_bool & in_readAccessAllowed,
                                                  const GALGAS_objectIR & in_objectIR,
                                                  const GALGAS_bool & in_copyable,
                                                  const GALGAS_bool & in_canBeUsedAsInputParameter
                                                  COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_type (in_type),
mAttribute_readAccessAllowed (in_readAccessAllowed),
mAttribute_objectIR (in_objectIR),
mAttribute_copyable (in_copyable),
mAttribute_canBeUsedAsInputParameter (in_canBeUsedAsInputParameter) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_variableMap::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_type.isValid () && mAttribute_readAccessAllowed.isValid () && mAttribute_objectIR.isValid () && mAttribute_copyable.isValid () && mAttribute_canBeUsedAsInputParameter.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_variableMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_variableMap (mAttribute_lkey, mAttribute_type, mAttribute_readAccessAllowed, mAttribute_objectIR, mAttribute_copyable, mAttribute_canBeUsedAsInputParameter COMMA_HERE)) ;
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
  ioString << "objectIR" ":" ;
  mAttribute_objectIR.description (ioString, inIndentation) ;
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
    result = mAttribute_objectIR.objectCompare (operand->mAttribute_objectIR) ;
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
//  Map automaton states                                                                                               *
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
//  Map automaton state names                                                                                          *
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
//  Map automaton actions                                                                                              *
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
//  Map automaton transitions                                                                                          *
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
  {kMapState_variableMap_module /* 1 */, kMapAutomatonNoIssue, ""}, // for action 'readAccess', (index 0)
  {kMapState_variableMap_module /* 1 */, kMapAutomatonIssueError, "a module cannot be written"}, // for action 'writeAccess', (index 1)
  {kMapState_variableMap_module /* 1 */, kMapAutomatonNoIssue, ""}, // for action 'readWriteAccess', (index 2)
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
//  Map automaton final state issues                                                                                   *
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
                                                                   GALGAS_objectIR inArgument2,
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
                                              GALGAS_objectIR inArgument2,
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
                                                         GALGAS_objectIR inArgument2,
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
                                                       GALGAS_objectIR inArgument2,
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
                                                         GALGAS_objectIR inArgument2,
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
                                                GALGAS_objectIR inArgument2,
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
                                                    GALGAS_objectIR inArgument2,
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
                                                           GALGAS_objectIR inArgument2,
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
                                                                           GALGAS_objectIR inArgument2,
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
                                                                   GALGAS_objectIR inArgument2,
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
                                                                       GALGAS_objectIR inArgument2,
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
                                                                                   GALGAS_objectIR inArgument2,
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
                                                            GALGAS_objectIR inArgument2,
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
                                                                 GALGAS_objectIR inArgument2,
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
                                                                                 GALGAS_objectIR inArgument2,
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
                                                     GALGAS_objectIR & outArgument2,
                                                     GALGAS_bool & outArgument3,
                                                     GALGAS_bool & outArgument4,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  const cMapElement_variableMap * p = (const cMapElement_variableMap *) performSearch (inKey,
                                                                                         inCompiler,
                                                                                         kMapAction_variableMap_readAccess,
                                                                                         kMapTransitions_variableMap,
                                                                                         kMapActionCount_variableMap,
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
    outArgument2 = p->mAttribute_objectIR ;
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
                                                      GALGAS_objectIR & outArgument2,
                                                      GALGAS_bool & outArgument3,
                                                      GALGAS_bool & outArgument4,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  const cMapElement_variableMap * p = (const cMapElement_variableMap *) performSearch (inKey,
                                                                                         inCompiler,
                                                                                         kMapAction_variableMap_writeAccess,
                                                                                         kMapTransitions_variableMap,
                                                                                         kMapActionCount_variableMap,
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
    outArgument2 = p->mAttribute_objectIR ;
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
                                                          GALGAS_objectIR & outArgument2,
                                                          GALGAS_bool & outArgument3,
                                                          GALGAS_bool & outArgument4,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  const cMapElement_variableMap * p = (const cMapElement_variableMap *) performSearch (inKey,
                                                                                         inCompiler,
                                                                                         kMapAction_variableMap_readWriteAccess,
                                                                                         kMapTransitions_variableMap,
                                                                                         kMapActionCount_variableMap,
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
    outArgument2 = p->mAttribute_objectIR ;
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
                                                     GALGAS_objectIR & outArgument2,
                                                     GALGAS_bool & outArgument3,
                                                     GALGAS_bool & outArgument4,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  const cMapElement_variableMap * p = (const cMapElement_variableMap *) performSearch (inKey,
                                                                                         inCompiler,
                                                                                         kMapAction_variableMap_dropAccess,
                                                                                         kMapTransitions_variableMap,
                                                                                         kMapActionCount_variableMap,
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
    outArgument2 = p->mAttribute_objectIR ;
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
                                                             GALGAS_objectIR & outArgument2,
                                                             GALGAS_bool & outArgument3,
                                                             GALGAS_bool & outArgument4,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  const cMapElement_variableMap * p = (const cMapElement_variableMap *) performSearch (inKey,
                                                                                         inCompiler,
                                                                                         kMapAction_variableMap_constMethodCall,
                                                                                         kMapTransitions_variableMap,
                                                                                         kMapActionCount_variableMap,
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
    outArgument2 = p->mAttribute_objectIR ;
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
                                                     GALGAS_objectIR & outArgument2,
                                                     GALGAS_bool & outArgument3,
                                                     GALGAS_bool & outArgument4,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  const cMapElement_variableMap * p = (const cMapElement_variableMap *) performSearch (inKey,
                                                                                         inCompiler,
                                                                                         kMapAction_variableMap_methodCall,
                                                                                         kMapTransitions_variableMap,
                                                                                         kMapActionCount_variableMap,
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
    outArgument2 = p->mAttribute_objectIR ;
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
                                               GALGAS_objectIR & outArgument2,
                                               GALGAS_bool & outArgument3,
                                               GALGAS_bool & outArgument4,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  const cMapElement_variableMap * p = (const cMapElement_variableMap *) performSearch (inKey,
                                                                                         inCompiler,
                                                                                         kMapAction_variableMap_neutralAccess,
                                                                                         kMapTransitions_variableMap,
                                                                                         kMapActionCount_variableMap,
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
    outArgument2 = p->mAttribute_objectIR ;
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

GALGAS_objectIR GALGAS_variableMap::getter_objectIRForKey (const GALGAS_string & inKey,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_variableMap * p = (const cMapElement_variableMap *) attributes ;
  GALGAS_objectIR result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_variableMap) ;
    result = p->mAttribute_objectIR ;
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

void GALGAS_variableMap::setter_setObjectIRForKey (GALGAS_objectIR inAttributeValue,
                                                   GALGAS_string inKey,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_variableMap * p = (cMapElement_variableMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_variableMap) ;
    p->mAttribute_objectIR = inAttributeValue ;
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

GALGAS_objectIR cEnumerator_variableMap::current_objectIR (LOCATION_ARGS) const {
  const cMapElement_variableMap * p = (const cMapElement_variableMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_variableMap) ;
  return p->mAttribute_objectIR ;
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

GALGAS_objectIR GALGAS_variableMap_2D_proxy::getter_objectIR (C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_objectIR result ;
  const cMapElement_variableMap * p = (const cMapElement_variableMap *) getAttributeListPointer (inCompiler, "objectIR" COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_variableMap) ;
    result = p->mAttribute_objectIR;
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

GALGAS_lstringlist GALGAS_semanticTypePrecedenceGraph::getter_accessibleNodesFrom (const GALGAS_lstringlist & inStartKeyList,
                                                                                   const GALGAS_stringset & inNodesToExclude,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  GALGAS_semanticTypePrecedenceGraph resultingGraph ;
  subGraph (resultingGraph,
            inStartKeyList,
            inNodesToExclude,
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

cMapElement_routineMapForContext::cMapElement_routineMapForContext (const GALGAS_lstring & inKey,
                                                                    const GALGAS_lstring & in_mRoutineLLVMName,
                                                                    const GALGAS_bool & in_mIsPublic,
                                                                    const GALGAS_bool & in_mGlobal,
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
mAttribute_mGlobal (in_mGlobal),
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
  return mAttribute_lkey.isValid () && mAttribute_mRoutineLLVMName.isValid () && mAttribute_mIsPublic.isValid () && mAttribute_mGlobal.isValid () && mAttribute_mModeMap.isValid () && mAttribute_mSignature.isValid () && mAttribute_mRoutineKind.isValid () && mAttribute_mWeak.isValid () && mAttribute_mReturnType.isValid () && mAttribute_mAppendFileAndLineArgumentForPanicLocation.isValid () && mAttribute_mCanAccessProperties.isValid () && mAttribute_mCanMutateProperties.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_routineMapForContext::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_routineMapForContext (mAttribute_lkey, mAttribute_mRoutineLLVMName, mAttribute_mIsPublic, mAttribute_mGlobal, mAttribute_mModeMap, mAttribute_mSignature, mAttribute_mRoutineKind, mAttribute_mWeak, mAttribute_mReturnType, mAttribute_mAppendFileAndLineArgumentForPanicLocation, mAttribute_mCanAccessProperties, mAttribute_mCanMutateProperties COMMA_HERE)) ;
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
  ioString << "mGlobal" ":" ;
  mAttribute_mGlobal.description (ioString, inIndentation) ;
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
    result = mAttribute_mGlobal.objectCompare (operand->mAttribute_mGlobal) ;
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
                                                       const GALGAS_bool & inArgument2,
                                                       const GALGAS_modeMap & inArgument3,
                                                       const GALGAS_procedureSignature & inArgument4,
                                                       const GALGAS_routineKind & inArgument5,
                                                       const GALGAS_bool & inArgument6,
                                                       const GALGAS_unifiedTypeMap_2D_proxy & inArgument7,
                                                       const GALGAS_bool & inArgument8,
                                                       const GALGAS_bool & inArgument9,
                                                       const GALGAS_bool & inArgument10,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  cMapElement_routineMapForContext * p = NULL ;
  macroMyNew (p, cMapElement_routineMapForContext (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4, inArgument5, inArgument6, inArgument7, inArgument8, inArgument9, inArgument10 COMMA_HERE)) ;
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
                                                    GALGAS_bool inArgument2,
                                                    GALGAS_modeMap inArgument3,
                                                    GALGAS_procedureSignature inArgument4,
                                                    GALGAS_routineKind inArgument5,
                                                    GALGAS_bool inArgument6,
                                                    GALGAS_unifiedTypeMap_2D_proxy inArgument7,
                                                    GALGAS_bool inArgument8,
                                                    GALGAS_bool inArgument9,
                                                    GALGAS_bool inArgument10,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  cMapElement_routineMapForContext * p = NULL ;
  macroMyNew (p, cMapElement_routineMapForContext (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4, inArgument5, inArgument6, inArgument7, inArgument8, inArgument9, inArgument10 COMMA_HERE)) ;
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
                                                    GALGAS_bool & outArgument2,
                                                    GALGAS_modeMap & outArgument3,
                                                    GALGAS_procedureSignature & outArgument4,
                                                    GALGAS_routineKind & outArgument5,
                                                    GALGAS_bool & outArgument6,
                                                    GALGAS_unifiedTypeMap_2D_proxy & outArgument7,
                                                    GALGAS_bool & outArgument8,
                                                    GALGAS_bool & outArgument9,
                                                    GALGAS_bool & outArgument10,
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
    outArgument10.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_routineMapForContext) ;
    outArgument0 = p->mAttribute_mRoutineLLVMName ;
    outArgument1 = p->mAttribute_mIsPublic ;
    outArgument2 = p->mAttribute_mGlobal ;
    outArgument3 = p->mAttribute_mModeMap ;
    outArgument4 = p->mAttribute_mSignature ;
    outArgument5 = p->mAttribute_mRoutineKind ;
    outArgument6 = p->mAttribute_mWeak ;
    outArgument7 = p->mAttribute_mReturnType ;
    outArgument8 = p->mAttribute_mAppendFileAndLineArgumentForPanicLocation ;
    outArgument9 = p->mAttribute_mCanAccessProperties ;
    outArgument10 = p->mAttribute_mCanMutateProperties ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineMapForContext::setter_removeKey (GALGAS_lstring inKey,
                                                    GALGAS_lstring & outArgument0,
                                                    GALGAS_bool & outArgument1,
                                                    GALGAS_bool & outArgument2,
                                                    GALGAS_modeMap & outArgument3,
                                                    GALGAS_procedureSignature & outArgument4,
                                                    GALGAS_routineKind & outArgument5,
                                                    GALGAS_bool & outArgument6,
                                                    GALGAS_unifiedTypeMap_2D_proxy & outArgument7,
                                                    GALGAS_bool & outArgument8,
                                                    GALGAS_bool & outArgument9,
                                                    GALGAS_bool & outArgument10,
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
    outArgument2 = p->mAttribute_mGlobal ;
    outArgument3 = p->mAttribute_mModeMap ;
    outArgument4 = p->mAttribute_mSignature ;
    outArgument5 = p->mAttribute_mRoutineKind ;
    outArgument6 = p->mAttribute_mWeak ;
    outArgument7 = p->mAttribute_mReturnType ;
    outArgument8 = p->mAttribute_mAppendFileAndLineArgumentForPanicLocation ;
    outArgument9 = p->mAttribute_mCanAccessProperties ;
    outArgument10 = p->mAttribute_mCanMutateProperties ;
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

GALGAS_bool GALGAS_routineMapForContext::getter_mGlobalForKey (const GALGAS_string & inKey,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_routineMapForContext * p = (const cMapElement_routineMapForContext *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_routineMapForContext) ;
    result = p->mAttribute_mGlobal ;
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

void GALGAS_routineMapForContext::setter_setMGlobalForKey (GALGAS_bool inAttributeValue,
                                                           GALGAS_string inKey,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_routineMapForContext * p = (cMapElement_routineMapForContext *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_routineMapForContext) ;
    p->mAttribute_mGlobal = inAttributeValue ;
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
  return GALGAS_routineMapForContext_2D_element (p->mAttribute_lkey, p->mAttribute_mRoutineLLVMName, p->mAttribute_mIsPublic, p->mAttribute_mGlobal, p->mAttribute_mModeMap, p->mAttribute_mSignature, p->mAttribute_mRoutineKind, p->mAttribute_mWeak, p->mAttribute_mReturnType, p->mAttribute_mAppendFileAndLineArgumentForPanicLocation, p->mAttribute_mCanAccessProperties, p->mAttribute_mCanMutateProperties) ;
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

GALGAS_bool cEnumerator_routineMapForContext::current_mGlobal (LOCATION_ARGS) const {
  const cMapElement_routineMapForContext * p = (const cMapElement_routineMapForContext *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_routineMapForContext) ;
  return p->mAttribute_mGlobal ;
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
//                                                                                                                     *
//                      Extension method '@sectionDeclarationListAST noteTypesInPrecedenceGraph'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_noteTypesInPrecedenceGraph (const GALGAS_sectionDeclarationListAST inObject,
                                                 GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_sectionDeclarationListAST temp_0 = inObject ;
  cEnumerator_sectionDeclarationListAST enumerator_2390 (temp_0, kEnumeration_up) ;
  while (enumerator_2390.hasCurrentObject ()) {
    cEnumerator_procFormalArgumentList enumerator_2462 (enumerator_2390.current_mSectionFormalArgumentList (HERE), kEnumeration_up) ;
    while (enumerator_2462.hasCurrentObject ()) {
      GALGAS_lstring var_typeName_2484 = GALGAS_lstring::constructor_new (GALGAS_string ("$").add_operation (enumerator_2462.current_mFormalArgumentTypeName (HERE).getter_string (SOURCE_FILE ("context-routines.galgas", 54)), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 54)), enumerator_2462.current_mFormalArgumentTypeName (HERE).mAttribute_location  COMMA_SOURCE_FILE ("context-routines.galgas", 54)) ;
      {
      ioArgument_ioGraph.setter_noteNode (var_typeName_2484 COMMA_SOURCE_FILE ("context-routines.galgas", 55)) ;
      }
      enumerator_2462.gotoNextObject () ;
    }
    extensionMethod_noteInstructionListTypesInPrecedenceGraph (enumerator_2390.current_mSectionInstructionList (HERE), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 57)) ;
    enumerator_2390.gotoNextObject () ;
  }
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

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_staticStringMap::cMapElement_staticStringMap (const GALGAS_lstring & inKey,
                                                          const GALGAS_uint & in_mIndex
                                                          COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mIndex (in_mIndex) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_staticStringMap::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mIndex.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_staticStringMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_staticStringMap (mAttribute_lkey, mAttribute_mIndex COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_staticStringMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIndex" ":" ;
  mAttribute_mIndex.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_staticStringMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_staticStringMap * operand = (cMapElement_staticStringMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mIndex.objectCompare (operand->mAttribute_mIndex) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticStringMap::GALGAS_staticStringMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticStringMap::GALGAS_staticStringMap (const GALGAS_staticStringMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticStringMap & GALGAS_staticStringMap::operator = (const GALGAS_staticStringMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticStringMap GALGAS_staticStringMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_staticStringMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticStringMap GALGAS_staticStringMap::constructor_mapWithMapToOverride (const GALGAS_staticStringMap & inMapToOverride
                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_staticStringMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticStringMap GALGAS_staticStringMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  GALGAS_staticStringMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_staticStringMap_searchKey = "-- internal error --" ;

//---------------------------------------------------------------------------------------------------------------------*

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
    outArgument0 = p->mAttribute_mIndex ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_staticStringMap::getter_mIndexForKey (const GALGAS_string & inKey,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_staticStringMap * p = (const cMapElement_staticStringMap *) attributes ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_staticStringMap) ;
    result = p->mAttribute_mIndex ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_staticStringMap::setter_setMIndexForKey (GALGAS_uint inAttributeValue,
                                                     GALGAS_string inKey,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_staticStringMap * p = (cMapElement_staticStringMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_staticStringMap) ;
    p->mAttribute_mIndex = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_staticStringMap * GALGAS_staticStringMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                         const GALGAS_string & inKey
                                                                                         COMMA_LOCATION_ARGS) {
  cMapElement_staticStringMap * result = (cMapElement_staticStringMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_staticStringMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_staticStringMap::cEnumerator_staticStringMap (const GALGAS_staticStringMap & inEnumeratedObject,
                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticStringMap_2D_element cEnumerator_staticStringMap::current (LOCATION_ARGS) const {
  const cMapElement_staticStringMap * p = (const cMapElement_staticStringMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_staticStringMap) ;
  return GALGAS_staticStringMap_2D_element (p->mAttribute_lkey, p->mAttribute_mIndex) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_staticStringMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cEnumerator_staticStringMap::current_mIndex (LOCATION_ARGS) const {
  const cMapElement_staticStringMap * p = (const cMapElement_staticStringMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_staticStringMap) ;
  return p->mAttribute_mIndex ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @staticStringMap type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_staticStringMap ("staticStringMap",
                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_staticStringMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_staticStringMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_staticStringMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_staticStringMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

cMapElement_globalConstantMap::cMapElement_globalConstantMap (const GALGAS_lstring & inKey,
                                                              const GALGAS_objectIR & in_mValue
                                                              COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mValue (in_mValue) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_globalConstantMap::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mValue.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_globalConstantMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_globalConstantMap (mAttribute_lkey, mAttribute_mValue COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_globalConstantMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mValue" ":" ;
  mAttribute_mValue.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_globalConstantMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_globalConstantMap * operand = (cMapElement_globalConstantMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mValue.objectCompare (operand->mAttribute_mValue) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalConstantMap::GALGAS_globalConstantMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalConstantMap::GALGAS_globalConstantMap (const GALGAS_globalConstantMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalConstantMap & GALGAS_globalConstantMap::operator = (const GALGAS_globalConstantMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalConstantMap GALGAS_globalConstantMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_globalConstantMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalConstantMap GALGAS_globalConstantMap::constructor_mapWithMapToOverride (const GALGAS_globalConstantMap & inMapToOverride
                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_globalConstantMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalConstantMap GALGAS_globalConstantMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  GALGAS_globalConstantMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_globalConstantMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                    const GALGAS_objectIR & inArgument0,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  cMapElement_globalConstantMap * p = NULL ;
  macroMyNew (p, cMapElement_globalConstantMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@globalConstantMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_globalConstantMap::setter_insertKey (GALGAS_lstring inKey,
                                                 GALGAS_objectIR inArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  cMapElement_globalConstantMap * p = NULL ;
  macroMyNew (p, cMapElement_globalConstantMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' constant is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_globalConstantMap_searchKey = "there is no '%K' constant" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_globalConstantMap::method_searchKey (GALGAS_lstring inKey,
                                                 GALGAS_objectIR & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  const cMapElement_globalConstantMap * p = (const cMapElement_globalConstantMap *) performSearch (inKey,
                                                                                                     inCompiler,
                                                                                                     kSearchErrorMessage_globalConstantMap_searchKey
                                                                                                     COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_globalConstantMap) ;
    outArgument0 = p->mAttribute_mValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_globalConstantMap::getter_mValueForKey (const GALGAS_string & inKey,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_globalConstantMap * p = (const cMapElement_globalConstantMap *) attributes ;
  GALGAS_objectIR result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_globalConstantMap) ;
    result = p->mAttribute_mValue ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_globalConstantMap::setter_setMValueForKey (GALGAS_objectIR inAttributeValue,
                                                       GALGAS_string inKey,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_globalConstantMap * p = (cMapElement_globalConstantMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_globalConstantMap) ;
    p->mAttribute_mValue = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_globalConstantMap * GALGAS_globalConstantMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                             const GALGAS_string & inKey
                                                                                             COMMA_LOCATION_ARGS) {
  cMapElement_globalConstantMap * result = (cMapElement_globalConstantMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_globalConstantMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_globalConstantMap::cEnumerator_globalConstantMap (const GALGAS_globalConstantMap & inEnumeratedObject,
                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalConstantMap_2D_element cEnumerator_globalConstantMap::current (LOCATION_ARGS) const {
  const cMapElement_globalConstantMap * p = (const cMapElement_globalConstantMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_globalConstantMap) ;
  return GALGAS_globalConstantMap_2D_element (p->mAttribute_lkey, p->mAttribute_mValue) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_globalConstantMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR cEnumerator_globalConstantMap::current_mValue (LOCATION_ARGS) const {
  const cMapElement_globalConstantMap * p = (const cMapElement_globalConstantMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_globalConstantMap) ;
  return p->mAttribute_mValue ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @globalConstantMap type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_globalConstantMap ("globalConstantMap",
                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_globalConstantMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_globalConstantMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_globalConstantMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_globalConstantMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalConstantMap GALGAS_globalConstantMap::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_globalConstantMap result ;
  const GALGAS_globalConstantMap * p = (const GALGAS_globalConstantMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_globalConstantMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("globalConstantMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_allowedGuardMap::cMapElement_allowedGuardMap (const GALGAS_lstring & inKey
                                                          COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_allowedGuardMap::isValid (void) const {
  return mAttribute_lkey.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_allowedGuardMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_allowedGuardMap (mAttribute_lkey COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_allowedGuardMap::description (C_String & /* ioString */, const int32_t /* inIndentation */) const {
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_allowedGuardMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_allowedGuardMap * operand = (cMapElement_allowedGuardMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedGuardMap::GALGAS_allowedGuardMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedGuardMap::GALGAS_allowedGuardMap (const GALGAS_allowedGuardMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedGuardMap & GALGAS_allowedGuardMap::operator = (const GALGAS_allowedGuardMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedGuardMap GALGAS_allowedGuardMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_allowedGuardMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedGuardMap GALGAS_allowedGuardMap::constructor_mapWithMapToOverride (const GALGAS_allowedGuardMap & inMapToOverride
                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_allowedGuardMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedGuardMap GALGAS_allowedGuardMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  GALGAS_allowedGuardMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allowedGuardMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cMapElement_allowedGuardMap * p = NULL ;
  macroMyNew (p, cMapElement_allowedGuardMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@allowedGuardMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allowedGuardMap::setter_insertKey (GALGAS_lstring inKey,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  cMapElement_allowedGuardMap * p = NULL ;
  macroMyNew (p, cMapElement_allowedGuardMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' guard is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_allowedGuardMap_searchKey = "there is no '%K' guard" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allowedGuardMap::method_searchKey (GALGAS_lstring inKey,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  const cMapElement_allowedGuardMap * p = (const cMapElement_allowedGuardMap *) performSearch (inKey,
                                                                                                 inCompiler,
                                                                                                 kSearchErrorMessage_allowedGuardMap_searchKey
                                                                                                 COMMA_THERE) ;
  if (NULL == p) {
  }else{
    macroValidSharedObject (p, cMapElement_allowedGuardMap) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_allowedGuardMap * GALGAS_allowedGuardMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                         const GALGAS_string & inKey
                                                                                         COMMA_LOCATION_ARGS) {
  cMapElement_allowedGuardMap * result = (cMapElement_allowedGuardMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_allowedGuardMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_allowedGuardMap::cEnumerator_allowedGuardMap (const GALGAS_allowedGuardMap & inEnumeratedObject,
                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedGuardMap_2D_element cEnumerator_allowedGuardMap::current (LOCATION_ARGS) const {
  const cMapElement_allowedGuardMap * p = (const cMapElement_allowedGuardMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_allowedGuardMap) ;
  return GALGAS_allowedGuardMap_2D_element (p->mAttribute_lkey) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_allowedGuardMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @allowedGuardMap type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_allowedGuardMap ("allowedGuardMap",
                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_allowedGuardMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_allowedGuardMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_allowedGuardMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_allowedGuardMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedGuardMap GALGAS_allowedGuardMap::extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_allowedGuardMap result ;
  const GALGAS_allowedGuardMap * p = (const GALGAS_allowedGuardMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_allowedGuardMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("allowedGuardMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_globalVariableMap::cMapElement_globalVariableMap (const GALGAS_lstring & inKey,
                                                              const GALGAS_unifiedTypeMap_2D_proxy & in_type,
                                                              const GALGAS_stringset & in_executionModeSet,
                                                              const GALGAS_allowedRoutineMap & in_allowedRoutineMap,
                                                              const GALGAS_allowedGuardMap & in_allowedGuardMap,
                                                              const GALGAS_allowedISRMap & in_allowedISRMap,
                                                              const GALGAS_allowedTaskMap & in_allowedTaskMap,
                                                              const GALGAS_objectIR & in_initialValue,
                                                              const GALGAS_bool & in_isConstant,
                                                              const GALGAS_bool & in_allowedAccessToAll
                                                              COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_type (in_type),
mAttribute_executionModeSet (in_executionModeSet),
mAttribute_allowedRoutineMap (in_allowedRoutineMap),
mAttribute_allowedGuardMap (in_allowedGuardMap),
mAttribute_allowedISRMap (in_allowedISRMap),
mAttribute_allowedTaskMap (in_allowedTaskMap),
mAttribute_initialValue (in_initialValue),
mAttribute_isConstant (in_isConstant),
mAttribute_allowedAccessToAll (in_allowedAccessToAll) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_globalVariableMap::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_type.isValid () && mAttribute_executionModeSet.isValid () && mAttribute_allowedRoutineMap.isValid () && mAttribute_allowedGuardMap.isValid () && mAttribute_allowedISRMap.isValid () && mAttribute_allowedTaskMap.isValid () && mAttribute_initialValue.isValid () && mAttribute_isConstant.isValid () && mAttribute_allowedAccessToAll.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_globalVariableMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_globalVariableMap (mAttribute_lkey, mAttribute_type, mAttribute_executionModeSet, mAttribute_allowedRoutineMap, mAttribute_allowedGuardMap, mAttribute_allowedISRMap, mAttribute_allowedTaskMap, mAttribute_initialValue, mAttribute_isConstant, mAttribute_allowedAccessToAll COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_globalVariableMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "type" ":" ;
  mAttribute_type.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "executionModeSet" ":" ;
  mAttribute_executionModeSet.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "allowedRoutineMap" ":" ;
  mAttribute_allowedRoutineMap.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "allowedGuardMap" ":" ;
  mAttribute_allowedGuardMap.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "allowedISRMap" ":" ;
  mAttribute_allowedISRMap.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "allowedTaskMap" ":" ;
  mAttribute_allowedTaskMap.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "initialValue" ":" ;
  mAttribute_initialValue.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "isConstant" ":" ;
  mAttribute_isConstant.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "allowedAccessToAll" ":" ;
  mAttribute_allowedAccessToAll.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_globalVariableMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_globalVariableMap * operand = (cMapElement_globalVariableMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_type.objectCompare (operand->mAttribute_type) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_executionModeSet.objectCompare (operand->mAttribute_executionModeSet) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_allowedRoutineMap.objectCompare (operand->mAttribute_allowedRoutineMap) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_allowedGuardMap.objectCompare (operand->mAttribute_allowedGuardMap) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_allowedISRMap.objectCompare (operand->mAttribute_allowedISRMap) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_allowedTaskMap.objectCompare (operand->mAttribute_allowedTaskMap) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_initialValue.objectCompare (operand->mAttribute_initialValue) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_isConstant.objectCompare (operand->mAttribute_isConstant) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_allowedAccessToAll.objectCompare (operand->mAttribute_allowedAccessToAll) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalVariableMap::GALGAS_globalVariableMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalVariableMap::GALGAS_globalVariableMap (const GALGAS_globalVariableMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalVariableMap & GALGAS_globalVariableMap::operator = (const GALGAS_globalVariableMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalVariableMap GALGAS_globalVariableMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_globalVariableMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalVariableMap GALGAS_globalVariableMap::constructor_mapWithMapToOverride (const GALGAS_globalVariableMap & inMapToOverride
                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_globalVariableMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalVariableMap GALGAS_globalVariableMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  GALGAS_globalVariableMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_globalVariableMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                    const GALGAS_unifiedTypeMap_2D_proxy & inArgument0,
                                                    const GALGAS_stringset & inArgument1,
                                                    const GALGAS_allowedRoutineMap & inArgument2,
                                                    const GALGAS_allowedGuardMap & inArgument3,
                                                    const GALGAS_allowedISRMap & inArgument4,
                                                    const GALGAS_allowedTaskMap & inArgument5,
                                                    const GALGAS_objectIR & inArgument6,
                                                    const GALGAS_bool & inArgument7,
                                                    const GALGAS_bool & inArgument8,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  cMapElement_globalVariableMap * p = NULL ;
  macroMyNew (p, cMapElement_globalVariableMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4, inArgument5, inArgument6, inArgument7, inArgument8 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@globalVariableMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_globalVariableMap::setter_insertKey (GALGAS_lstring inKey,
                                                 GALGAS_unifiedTypeMap_2D_proxy inArgument0,
                                                 GALGAS_stringset inArgument1,
                                                 GALGAS_allowedRoutineMap inArgument2,
                                                 GALGAS_allowedGuardMap inArgument3,
                                                 GALGAS_allowedISRMap inArgument4,
                                                 GALGAS_allowedTaskMap inArgument5,
                                                 GALGAS_objectIR inArgument6,
                                                 GALGAS_bool inArgument7,
                                                 GALGAS_bool inArgument8,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  cMapElement_globalVariableMap * p = NULL ;
  macroMyNew (p, cMapElement_globalVariableMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4, inArgument5, inArgument6, inArgument7, inArgument8 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' global variable is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_globalVariableMap_searchKey = "there is no '%K' global variable" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_globalVariableMap::method_searchKey (GALGAS_lstring inKey,
                                                 GALGAS_unifiedTypeMap_2D_proxy & outArgument0,
                                                 GALGAS_stringset & outArgument1,
                                                 GALGAS_allowedRoutineMap & outArgument2,
                                                 GALGAS_allowedGuardMap & outArgument3,
                                                 GALGAS_allowedISRMap & outArgument4,
                                                 GALGAS_allowedTaskMap & outArgument5,
                                                 GALGAS_objectIR & outArgument6,
                                                 GALGAS_bool & outArgument7,
                                                 GALGAS_bool & outArgument8,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  const cMapElement_globalVariableMap * p = (const cMapElement_globalVariableMap *) performSearch (inKey,
                                                                                                     inCompiler,
                                                                                                     kSearchErrorMessage_globalVariableMap_searchKey
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
  }else{
    macroValidSharedObject (p, cMapElement_globalVariableMap) ;
    outArgument0 = p->mAttribute_type ;
    outArgument1 = p->mAttribute_executionModeSet ;
    outArgument2 = p->mAttribute_allowedRoutineMap ;
    outArgument3 = p->mAttribute_allowedGuardMap ;
    outArgument4 = p->mAttribute_allowedISRMap ;
    outArgument5 = p->mAttribute_allowedTaskMap ;
    outArgument6 = p->mAttribute_initialValue ;
    outArgument7 = p->mAttribute_isConstant ;
    outArgument8 = p->mAttribute_allowedAccessToAll ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_globalVariableMap::getter_typeForKey (const GALGAS_string & inKey,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_globalVariableMap * p = (const cMapElement_globalVariableMap *) attributes ;
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_globalVariableMap) ;
    result = p->mAttribute_type ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringset GALGAS_globalVariableMap::getter_executionModeSetForKey (const GALGAS_string & inKey,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_globalVariableMap * p = (const cMapElement_globalVariableMap *) attributes ;
  GALGAS_stringset result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_globalVariableMap) ;
    result = p->mAttribute_executionModeSet ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedRoutineMap GALGAS_globalVariableMap::getter_allowedRoutineMapForKey (const GALGAS_string & inKey,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_globalVariableMap * p = (const cMapElement_globalVariableMap *) attributes ;
  GALGAS_allowedRoutineMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_globalVariableMap) ;
    result = p->mAttribute_allowedRoutineMap ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedGuardMap GALGAS_globalVariableMap::getter_allowedGuardMapForKey (const GALGAS_string & inKey,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_globalVariableMap * p = (const cMapElement_globalVariableMap *) attributes ;
  GALGAS_allowedGuardMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_globalVariableMap) ;
    result = p->mAttribute_allowedGuardMap ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedISRMap GALGAS_globalVariableMap::getter_allowedISRMapForKey (const GALGAS_string & inKey,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_globalVariableMap * p = (const cMapElement_globalVariableMap *) attributes ;
  GALGAS_allowedISRMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_globalVariableMap) ;
    result = p->mAttribute_allowedISRMap ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedTaskMap GALGAS_globalVariableMap::getter_allowedTaskMapForKey (const GALGAS_string & inKey,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_globalVariableMap * p = (const cMapElement_globalVariableMap *) attributes ;
  GALGAS_allowedTaskMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_globalVariableMap) ;
    result = p->mAttribute_allowedTaskMap ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_globalVariableMap::getter_initialValueForKey (const GALGAS_string & inKey,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_globalVariableMap * p = (const cMapElement_globalVariableMap *) attributes ;
  GALGAS_objectIR result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_globalVariableMap) ;
    result = p->mAttribute_initialValue ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_globalVariableMap::getter_isConstantForKey (const GALGAS_string & inKey,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_globalVariableMap * p = (const cMapElement_globalVariableMap *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_globalVariableMap) ;
    result = p->mAttribute_isConstant ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_globalVariableMap::getter_allowedAccessToAllForKey (const GALGAS_string & inKey,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_globalVariableMap * p = (const cMapElement_globalVariableMap *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_globalVariableMap) ;
    result = p->mAttribute_allowedAccessToAll ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_globalVariableMap::setter_setTypeForKey (GALGAS_unifiedTypeMap_2D_proxy inAttributeValue,
                                                     GALGAS_string inKey,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_globalVariableMap * p = (cMapElement_globalVariableMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_globalVariableMap) ;
    p->mAttribute_type = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_globalVariableMap::setter_setExecutionModeSetForKey (GALGAS_stringset inAttributeValue,
                                                                 GALGAS_string inKey,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_globalVariableMap * p = (cMapElement_globalVariableMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_globalVariableMap) ;
    p->mAttribute_executionModeSet = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_globalVariableMap::setter_setAllowedRoutineMapForKey (GALGAS_allowedRoutineMap inAttributeValue,
                                                                  GALGAS_string inKey,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_globalVariableMap * p = (cMapElement_globalVariableMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_globalVariableMap) ;
    p->mAttribute_allowedRoutineMap = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_globalVariableMap::setter_setAllowedGuardMapForKey (GALGAS_allowedGuardMap inAttributeValue,
                                                                GALGAS_string inKey,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_globalVariableMap * p = (cMapElement_globalVariableMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_globalVariableMap) ;
    p->mAttribute_allowedGuardMap = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_globalVariableMap::setter_setAllowedISRMapForKey (GALGAS_allowedISRMap inAttributeValue,
                                                              GALGAS_string inKey,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_globalVariableMap * p = (cMapElement_globalVariableMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_globalVariableMap) ;
    p->mAttribute_allowedISRMap = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_globalVariableMap::setter_setAllowedTaskMapForKey (GALGAS_allowedTaskMap inAttributeValue,
                                                               GALGAS_string inKey,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_globalVariableMap * p = (cMapElement_globalVariableMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_globalVariableMap) ;
    p->mAttribute_allowedTaskMap = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_globalVariableMap::setter_setInitialValueForKey (GALGAS_objectIR inAttributeValue,
                                                             GALGAS_string inKey,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_globalVariableMap * p = (cMapElement_globalVariableMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_globalVariableMap) ;
    p->mAttribute_initialValue = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_globalVariableMap::setter_setIsConstantForKey (GALGAS_bool inAttributeValue,
                                                           GALGAS_string inKey,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_globalVariableMap * p = (cMapElement_globalVariableMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_globalVariableMap) ;
    p->mAttribute_isConstant = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_globalVariableMap::setter_setAllowedAccessToAllForKey (GALGAS_bool inAttributeValue,
                                                                   GALGAS_string inKey,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_globalVariableMap * p = (cMapElement_globalVariableMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_globalVariableMap) ;
    p->mAttribute_allowedAccessToAll = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_globalVariableMap * GALGAS_globalVariableMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                             const GALGAS_string & inKey
                                                                                             COMMA_LOCATION_ARGS) {
  cMapElement_globalVariableMap * result = (cMapElement_globalVariableMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_globalVariableMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_globalVariableMap::cEnumerator_globalVariableMap (const GALGAS_globalVariableMap & inEnumeratedObject,
                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalVariableMap_2D_element cEnumerator_globalVariableMap::current (LOCATION_ARGS) const {
  const cMapElement_globalVariableMap * p = (const cMapElement_globalVariableMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_globalVariableMap) ;
  return GALGAS_globalVariableMap_2D_element (p->mAttribute_lkey, p->mAttribute_type, p->mAttribute_executionModeSet, p->mAttribute_allowedRoutineMap, p->mAttribute_allowedGuardMap, p->mAttribute_allowedISRMap, p->mAttribute_allowedTaskMap, p->mAttribute_initialValue, p->mAttribute_isConstant, p->mAttribute_allowedAccessToAll) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_globalVariableMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cEnumerator_globalVariableMap::current_type (LOCATION_ARGS) const {
  const cMapElement_globalVariableMap * p = (const cMapElement_globalVariableMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_globalVariableMap) ;
  return p->mAttribute_type ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringset cEnumerator_globalVariableMap::current_executionModeSet (LOCATION_ARGS) const {
  const cMapElement_globalVariableMap * p = (const cMapElement_globalVariableMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_globalVariableMap) ;
  return p->mAttribute_executionModeSet ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedRoutineMap cEnumerator_globalVariableMap::current_allowedRoutineMap (LOCATION_ARGS) const {
  const cMapElement_globalVariableMap * p = (const cMapElement_globalVariableMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_globalVariableMap) ;
  return p->mAttribute_allowedRoutineMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedGuardMap cEnumerator_globalVariableMap::current_allowedGuardMap (LOCATION_ARGS) const {
  const cMapElement_globalVariableMap * p = (const cMapElement_globalVariableMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_globalVariableMap) ;
  return p->mAttribute_allowedGuardMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedISRMap cEnumerator_globalVariableMap::current_allowedISRMap (LOCATION_ARGS) const {
  const cMapElement_globalVariableMap * p = (const cMapElement_globalVariableMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_globalVariableMap) ;
  return p->mAttribute_allowedISRMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedTaskMap cEnumerator_globalVariableMap::current_allowedTaskMap (LOCATION_ARGS) const {
  const cMapElement_globalVariableMap * p = (const cMapElement_globalVariableMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_globalVariableMap) ;
  return p->mAttribute_allowedTaskMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR cEnumerator_globalVariableMap::current_initialValue (LOCATION_ARGS) const {
  const cMapElement_globalVariableMap * p = (const cMapElement_globalVariableMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_globalVariableMap) ;
  return p->mAttribute_initialValue ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_globalVariableMap::current_isConstant (LOCATION_ARGS) const {
  const cMapElement_globalVariableMap * p = (const cMapElement_globalVariableMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_globalVariableMap) ;
  return p->mAttribute_isConstant ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_globalVariableMap::current_allowedAccessToAll (LOCATION_ARGS) const {
  const cMapElement_globalVariableMap * p = (const cMapElement_globalVariableMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_globalVariableMap) ;
  return p->mAttribute_allowedAccessToAll ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @globalVariableMap type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_globalVariableMap ("globalVariableMap",
                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_globalVariableMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_globalVariableMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_globalVariableMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_globalVariableMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalVariableMap GALGAS_globalVariableMap::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_globalVariableMap result ;
  const GALGAS_globalVariableMap * p = (const GALGAS_globalVariableMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_globalVariableMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("globalVariableMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_unifiedTypeMap::cMapElement_unifiedTypeMap (const GALGAS_lstring & inKey,
                                                        const GALGAS_string & in_llvmTypeName,
                                                        const GALGAS_typeKind & in_kind,
                                                        const GALGAS_classConstantMap & in_classConstantMap,
                                                        const GALGAS_bool & in_instantiable,
                                                        const GALGAS_bool & in_copyable,
                                                        const GALGAS_bool & in_equatable,
                                                        const GALGAS_bool & in_comparable,
                                                        const GALGAS_unifiedTypeMap_2D_proxy & in_enumerationType
                                                        COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_llvmTypeName (in_llvmTypeName),
mAttribute_kind (in_kind),
mAttribute_classConstantMap (in_classConstantMap),
mAttribute_instantiable (in_instantiable),
mAttribute_copyable (in_copyable),
mAttribute_equatable (in_equatable),
mAttribute_comparable (in_comparable),
mAttribute_enumerationType (in_enumerationType) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_unifiedTypeMap::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_llvmTypeName.isValid () && mAttribute_kind.isValid () && mAttribute_classConstantMap.isValid () && mAttribute_instantiable.isValid () && mAttribute_copyable.isValid () && mAttribute_equatable.isValid () && mAttribute_comparable.isValid () && mAttribute_enumerationType.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_unifiedTypeMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_unifiedTypeMap (mAttribute_lkey, mAttribute_llvmTypeName, mAttribute_kind, mAttribute_classConstantMap, mAttribute_instantiable, mAttribute_copyable, mAttribute_equatable, mAttribute_comparable, mAttribute_enumerationType COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_unifiedTypeMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "llvmTypeName" ":" ;
  mAttribute_llvmTypeName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "kind" ":" ;
  mAttribute_kind.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "classConstantMap" ":" ;
  mAttribute_classConstantMap.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "instantiable" ":" ;
  mAttribute_instantiable.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "copyable" ":" ;
  mAttribute_copyable.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "equatable" ":" ;
  mAttribute_equatable.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "comparable" ":" ;
  mAttribute_comparable.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "enumerationType" ":" ;
  mAttribute_enumerationType.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_unifiedTypeMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_unifiedTypeMap * operand = (cMapElement_unifiedTypeMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_llvmTypeName.objectCompare (operand->mAttribute_llvmTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_kind.objectCompare (operand->mAttribute_kind) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_classConstantMap.objectCompare (operand->mAttribute_classConstantMap) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_instantiable.objectCompare (operand->mAttribute_instantiable) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_copyable.objectCompare (operand->mAttribute_copyable) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_equatable.objectCompare (operand->mAttribute_equatable) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_comparable.objectCompare (operand->mAttribute_comparable) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_enumerationType.objectCompare (operand->mAttribute_enumerationType) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap::GALGAS_unifiedTypeMap (void) :
AC_GALGAS_uniqueMap (kMapAutomatonNoIssue, "") {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap::GALGAS_unifiedTypeMap (const GALGAS_unifiedTypeMap & inSource) :
AC_GALGAS_uniqueMap (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap & GALGAS_unifiedTypeMap::operator = (const GALGAS_unifiedTypeMap & inSource) {
  * ((AC_GALGAS_uniqueMap *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap GALGAS_unifiedTypeMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_unifiedTypeMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//  Map automaton states                                                                                               *
//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*
//  Map automaton state names                                                                                          *
//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*
//  Map automaton actions                                                                                              *
//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*
//  Map automaton transitions                                                                                          *
//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*
//  Map automaton final state issues                                                                                   *
//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMap::setter_insertType (GALGAS_lstring inKey,
                                               GALGAS_string inArgument0,
                                               GALGAS_typeKind inArgument1,
                                               GALGAS_classConstantMap inArgument2,
                                               GALGAS_bool inArgument3,
                                               GALGAS_bool inArgument4,
                                               GALGAS_bool inArgument5,
                                               GALGAS_bool inArgument6,
                                               GALGAS_unifiedTypeMap_2D_proxy inArgument7,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  cMapElement_unifiedTypeMap * p = NULL ;
  macroMyNew (p, cMapElement_unifiedTypeMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4, inArgument5, inArgument6, inArgument7 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' type is already declared in %L" ;
  insertInSharedMap (attributes,
                     inCompiler,
                     0,
                     NULL,
                     kInsertErrorMessage
                     COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_unifiedTypeMap_searchKey = "there is no '%K' type" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMap::method_searchKey (GALGAS_lstring inKey,
                                              GALGAS_string & outArgument0,
                                              GALGAS_typeKind & outArgument1,
                                              GALGAS_classConstantMap & outArgument2,
                                              GALGAS_bool & outArgument3,
                                              GALGAS_bool & outArgument4,
                                              GALGAS_bool & outArgument5,
                                              GALGAS_bool & outArgument6,
                                              GALGAS_unifiedTypeMap_2D_proxy & outArgument7,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) performSearch (inKey,
                                                                                               inCompiler,
                                                                                               kSearchErrorMessage_unifiedTypeMap_searchKey
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
  }else{
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    outArgument0 = p->mAttribute_llvmTypeName ;
    outArgument1 = p->mAttribute_kind ;
    outArgument2 = p->mAttribute_classConstantMap ;
    outArgument3 = p->mAttribute_instantiable ;
    outArgument4 = p->mAttribute_copyable ;
    outArgument5 = p->mAttribute_equatable ;
    outArgument6 = p->mAttribute_comparable ;
    outArgument7 = p->mAttribute_enumerationType ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_unifiedTypeMap::getter_llvmTypeNameForKey (const GALGAS_string & inKey,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) attributes ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mAttribute_llvmTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKind GALGAS_unifiedTypeMap::getter_kindForKey (const GALGAS_string & inKey,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) attributes ;
  GALGAS_typeKind result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mAttribute_kind ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_classConstantMap GALGAS_unifiedTypeMap::getter_classConstantMapForKey (const GALGAS_string & inKey,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) attributes ;
  GALGAS_classConstantMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mAttribute_classConstantMap ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_unifiedTypeMap::getter_instantiableForKey (const GALGAS_string & inKey,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mAttribute_instantiable ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_unifiedTypeMap::getter_copyableForKey (const GALGAS_string & inKey,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mAttribute_copyable ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_unifiedTypeMap::getter_equatableForKey (const GALGAS_string & inKey,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mAttribute_equatable ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_unifiedTypeMap::getter_comparableForKey (const GALGAS_string & inKey,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mAttribute_comparable ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_unifiedTypeMap::getter_enumerationTypeForKey (const GALGAS_string & inKey,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) attributes ;
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mAttribute_enumerationType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMap::setter_setLlvmTypeNameForKey (GALGAS_string inAttributeValue,
                                                          GALGAS_string inKey,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_unifiedTypeMap * p = (cMapElement_unifiedTypeMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    p->mAttribute_llvmTypeName = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMap::setter_setKindForKey (GALGAS_typeKind inAttributeValue,
                                                  GALGAS_string inKey,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_unifiedTypeMap * p = (cMapElement_unifiedTypeMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    p->mAttribute_kind = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMap::setter_setClassConstantMapForKey (GALGAS_classConstantMap inAttributeValue,
                                                              GALGAS_string inKey,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_unifiedTypeMap * p = (cMapElement_unifiedTypeMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    p->mAttribute_classConstantMap = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMap::setter_setInstantiableForKey (GALGAS_bool inAttributeValue,
                                                          GALGAS_string inKey,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_unifiedTypeMap * p = (cMapElement_unifiedTypeMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    p->mAttribute_instantiable = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMap::setter_setCopyableForKey (GALGAS_bool inAttributeValue,
                                                      GALGAS_string inKey,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_unifiedTypeMap * p = (cMapElement_unifiedTypeMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    p->mAttribute_copyable = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMap::setter_setEquatableForKey (GALGAS_bool inAttributeValue,
                                                       GALGAS_string inKey,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_unifiedTypeMap * p = (cMapElement_unifiedTypeMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    p->mAttribute_equatable = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMap::setter_setComparableForKey (GALGAS_bool inAttributeValue,
                                                        GALGAS_string inKey,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_unifiedTypeMap * p = (cMapElement_unifiedTypeMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    p->mAttribute_comparable = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMap::setter_setEnumerationTypeForKey (GALGAS_unifiedTypeMap_2D_proxy inAttributeValue,
                                                             GALGAS_string inKey,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_unifiedTypeMap * p = (cMapElement_unifiedTypeMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    p->mAttribute_enumerationType = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_unifiedTypeMap * GALGAS_unifiedTypeMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                       const GALGAS_string & inKey
                                                                                       COMMA_LOCATION_ARGS) {
  cMapElement_unifiedTypeMap * result = (cMapElement_unifiedTypeMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_unifiedTypeMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_unifiedTypeMap::cEnumerator_unifiedTypeMap (const GALGAS_unifiedTypeMap & inEnumeratedObject,
                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_unifiedTypeMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_unifiedTypeMap::current_llvmTypeName (LOCATION_ARGS) const {
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
  return p->mAttribute_llvmTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKind cEnumerator_unifiedTypeMap::current_kind (LOCATION_ARGS) const {
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
  return p->mAttribute_kind ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_classConstantMap cEnumerator_unifiedTypeMap::current_classConstantMap (LOCATION_ARGS) const {
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
  return p->mAttribute_classConstantMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_unifiedTypeMap::current_instantiable (LOCATION_ARGS) const {
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
  return p->mAttribute_instantiable ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_unifiedTypeMap::current_copyable (LOCATION_ARGS) const {
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
  return p->mAttribute_copyable ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_unifiedTypeMap::current_equatable (LOCATION_ARGS) const {
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
  return p->mAttribute_equatable ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_unifiedTypeMap::current_comparable (LOCATION_ARGS) const {
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
  return p->mAttribute_comparable ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cEnumerator_unifiedTypeMap::current_enumerationType (LOCATION_ARGS) const {
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
  return p->mAttribute_enumerationType ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @unifiedTypeMap type                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_unifiedTypeMap ("unifiedTypeMap",
                                       NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_unifiedTypeMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unifiedTypeMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_unifiedTypeMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_unifiedTypeMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap GALGAS_unifiedTypeMap::extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap result ;
  const GALGAS_unifiedTypeMap * p = (const GALGAS_unifiedTypeMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_unifiedTypeMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("unifiedTypeMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_classConstantMap::cMapElement_classConstantMap (const GALGAS_lstring & inKey,
                                                            const GALGAS_objectIR & in_mValue
                                                            COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mValue (in_mValue) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_classConstantMap::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mValue.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_classConstantMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_classConstantMap (mAttribute_lkey, mAttribute_mValue COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_classConstantMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mValue" ":" ;
  mAttribute_mValue.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_classConstantMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_classConstantMap * operand = (cMapElement_classConstantMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mValue.objectCompare (operand->mAttribute_mValue) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_classConstantMap::GALGAS_classConstantMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_classConstantMap::GALGAS_classConstantMap (const GALGAS_classConstantMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_classConstantMap & GALGAS_classConstantMap::operator = (const GALGAS_classConstantMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_classConstantMap GALGAS_classConstantMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_classConstantMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_classConstantMap GALGAS_classConstantMap::constructor_mapWithMapToOverride (const GALGAS_classConstantMap & inMapToOverride
                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_classConstantMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_classConstantMap GALGAS_classConstantMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  GALGAS_classConstantMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_classConstantMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                   const GALGAS_objectIR & inArgument0,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  cMapElement_classConstantMap * p = NULL ;
  macroMyNew (p, cMapElement_classConstantMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@classConstantMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_classConstantMap::setter_insertKey (GALGAS_lstring inKey,
                                                GALGAS_objectIR inArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  cMapElement_classConstantMap * p = NULL ;
  macroMyNew (p, cMapElement_classConstantMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' class constant is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_classConstantMap_searchKey = "there is no '%K' class constant" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_classConstantMap::method_searchKey (GALGAS_lstring inKey,
                                                GALGAS_objectIR & outArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  const cMapElement_classConstantMap * p = (const cMapElement_classConstantMap *) performSearch (inKey,
                                                                                                   inCompiler,
                                                                                                   kSearchErrorMessage_classConstantMap_searchKey
                                                                                                   COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_classConstantMap) ;
    outArgument0 = p->mAttribute_mValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_classConstantMap::getter_mValueForKey (const GALGAS_string & inKey,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_classConstantMap * p = (const cMapElement_classConstantMap *) attributes ;
  GALGAS_objectIR result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_classConstantMap) ;
    result = p->mAttribute_mValue ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_classConstantMap::setter_setMValueForKey (GALGAS_objectIR inAttributeValue,
                                                      GALGAS_string inKey,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_classConstantMap * p = (cMapElement_classConstantMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_classConstantMap) ;
    p->mAttribute_mValue = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_classConstantMap * GALGAS_classConstantMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                           const GALGAS_string & inKey
                                                                                           COMMA_LOCATION_ARGS) {
  cMapElement_classConstantMap * result = (cMapElement_classConstantMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_classConstantMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_classConstantMap::cEnumerator_classConstantMap (const GALGAS_classConstantMap & inEnumeratedObject,
                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_classConstantMap_2D_element cEnumerator_classConstantMap::current (LOCATION_ARGS) const {
  const cMapElement_classConstantMap * p = (const cMapElement_classConstantMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_classConstantMap) ;
  return GALGAS_classConstantMap_2D_element (p->mAttribute_lkey, p->mAttribute_mValue) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_classConstantMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR cEnumerator_classConstantMap::current_mValue (LOCATION_ARGS) const {
  const cMapElement_classConstantMap * p = (const cMapElement_classConstantMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_classConstantMap) ;
  return p->mAttribute_mValue ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @classConstantMap type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_classConstantMap ("classConstantMap",
                                         NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_classConstantMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classConstantMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_classConstantMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_classConstantMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_classConstantMap GALGAS_classConstantMap::extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_classConstantMap result ;
  const GALGAS_classConstantMap * p = (const GALGAS_classConstantMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_classConstantMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("classConstantMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Class for element of '@operandList' list                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_operandList : public cCollectionElement {
  public : GALGAS_operandList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_operandList (const GALGAS_objectIR & in_mOperand
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

cCollectionElement_operandList::cCollectionElement_operandList (const GALGAS_objectIR & in_mOperand
                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mOperand) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_operandList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_operandList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_operandList (mObject.mAttribute_mOperand COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_operandList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOperand" ":" ;
  mObject.mAttribute_mOperand.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_operandList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_operandList * operand = (cCollectionElement_operandList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_operandList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandList::GALGAS_operandList (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandList::GALGAS_operandList (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandList GALGAS_operandList::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_operandList result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandList GALGAS_operandList::constructor_listWithValue (const GALGAS_objectIR & inOperand0
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_operandList result ;
  if (inOperand0.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_operandList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_operandList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                    const GALGAS_objectIR & in_mOperand
                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_operandList * p = NULL ;
  macroMyNew (p, cCollectionElement_operandList (in_mOperand COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_operandList::addAssign_operation (const GALGAS_objectIR & inOperand0
                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_operandList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_operandList::setter_insertAtIndex (const GALGAS_objectIR inOperand0,
                                               const GALGAS_uint inInsertionIndex,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_operandList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_operandList::setter_removeAtIndex (GALGAS_objectIR & outOperand0,
                                               const GALGAS_uint inRemoveIndex,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_operandList * p = (cCollectionElement_operandList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_operandList) ;
      outOperand0 = p->mObject.mAttribute_mOperand ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_operandList::setter_popFirst (GALGAS_objectIR & outOperand0,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_operandList * p = (cCollectionElement_operandList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_operandList) ;
    outOperand0 = p->mObject.mAttribute_mOperand ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_operandList::setter_popLast (GALGAS_objectIR & outOperand0,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_operandList * p = (cCollectionElement_operandList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_operandList) ;
    outOperand0 = p->mObject.mAttribute_mOperand ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_operandList::method_first (GALGAS_objectIR & outOperand0,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_operandList * p = (cCollectionElement_operandList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_operandList) ;
    outOperand0 = p->mObject.mAttribute_mOperand ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_operandList::method_last (GALGAS_objectIR & outOperand0,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_operandList * p = (cCollectionElement_operandList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_operandList) ;
    outOperand0 = p->mObject.mAttribute_mOperand ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandList GALGAS_operandList::add_operation (const GALGAS_operandList & inOperand,
                                                      C_Compiler * /* inCompiler */
                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_operandList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandList GALGAS_operandList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_operandList result = GALGAS_operandList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandList GALGAS_operandList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_operandList result = GALGAS_operandList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandList GALGAS_operandList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_operandList result = GALGAS_operandList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_operandList::plusAssign_operation (const GALGAS_operandList inOperand,
                                               C_Compiler * /* inCompiler */
                                               COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_operandList::getter_mOperandAtIndex (const GALGAS_uint & inIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_operandList * p = (cCollectionElement_operandList *) attributes.ptr () ;
  GALGAS_objectIR result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_operandList) ;
    result = p->mObject.mAttribute_mOperand ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_operandList::cEnumerator_operandList (const GALGAS_operandList & inEnumeratedObject,
                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandList_2D_element cEnumerator_operandList::current (LOCATION_ARGS) const {
  const cCollectionElement_operandList * p = (const cCollectionElement_operandList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_operandList) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR cEnumerator_operandList::current_mOperand (LOCATION_ARGS) const {
  const cCollectionElement_operandList * p = (const cCollectionElement_operandList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_operandList) ;
  return p->mObject.mAttribute_mOperand ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  @operandList type                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_operandList ("operandList",
                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_operandList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_operandList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_operandList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_operandList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandList GALGAS_operandList::extractObject (const GALGAS_object & inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GALGAS_operandList result ;
  const GALGAS_operandList * p = (const GALGAS_operandList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_operandList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("operandList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_constructorValue_simple::cEnumAssociatedValues_constructorValue_simple (const GALGAS_bigint & inAssociatedValue0
                                                                                              COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_constructorValue_simple::description (C_String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_constructorValue_simple::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_constructorValue_simple * ptr = dynamic_cast<const cEnumAssociatedValues_constructorValue_simple *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_constructorValue_structure::cEnumAssociatedValues_constructorValue_structure (const GALGAS_constructorSignature & inAssociatedValue0,
                                                                                                    const GALGAS_sortedOperandIRList & inAssociatedValue1
                                                                                                    COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_constructorValue_structure::description (C_String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_constructorValue_structure::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_constructorValue_structure * ptr = dynamic_cast<const cEnumAssociatedValues_constructorValue_structure *> (inOperand) ;
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

GALGAS_constructorValue::GALGAS_constructorValue (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorValue GALGAS_constructorValue::constructor_zero (UNUSED_LOCATION_ARGS) {
  GALGAS_constructorValue result ;
  result.mEnum = kEnum_zero ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorValue GALGAS_constructorValue::constructor_simple (const GALGAS_bigint & inAssociatedValue0
                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_constructorValue result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_simple ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_constructorValue_simple (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorValue GALGAS_constructorValue::constructor_structure (const GALGAS_constructorSignature & inAssociatedValue0,
                                                                        const GALGAS_sortedOperandIRList & inAssociatedValue1
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_constructorValue result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_structure ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_constructorValue_structure (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_constructorValue::method_simple (GALGAS_bigint & outAssociatedValue0,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_simple) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @constructorValue simple invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_constructorValue_simple * ptr = (const cEnumAssociatedValues_constructorValue_simple *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_constructorValue::method_structure (GALGAS_constructorSignature & outAssociatedValue0,
                                                GALGAS_sortedOperandIRList & outAssociatedValue1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_structure) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    C_String s ;
    s << "method @constructorValue structure invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_constructorValue_structure * ptr = (const cEnumAssociatedValues_constructorValue_structure *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * gEnumNameArrayFor_constructorValue [4] = {
  "(not built)",
  "zero",
  "simple",
  "structure"
} ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_constructorValue::getter_isZero (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_zero == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_constructorValue::getter_isSimple (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_simple == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_constructorValue::getter_isStructure (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_structure == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_constructorValue::description (C_String & ioString,
                                           const int32_t inIndentation) const {
  ioString << "<enum @constructorValue: " << gEnumNameArrayFor_constructorValue [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_constructorValue::objectCompare (const GALGAS_constructorValue & inOperand) const {
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
//                                               @constructorValue type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_constructorValue ("constructorValue",
                                         NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_constructorValue::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constructorValue ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_constructorValue::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_constructorValue (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorValue GALGAS_constructorValue::extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_constructorValue result ;
  const GALGAS_constructorValue * p = (const GALGAS_constructorValue *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_constructorValue *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("constructorValue", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_constructorMap::cMapElement_constructorMap (const GALGAS_lstring & inKey,
                                                        const GALGAS_constructorValue & in_mInitValue
                                                        COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mInitValue (in_mInitValue) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_constructorMap::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mInitValue.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_constructorMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_constructorMap (mAttribute_lkey, mAttribute_mInitValue COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_constructorMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInitValue" ":" ;
  mAttribute_mInitValue.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_constructorMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_constructorMap * operand = (cMapElement_constructorMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInitValue.objectCompare (operand->mAttribute_mInitValue) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorMap::GALGAS_constructorMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorMap::GALGAS_constructorMap (const GALGAS_constructorMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorMap & GALGAS_constructorMap::operator = (const GALGAS_constructorMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorMap GALGAS_constructorMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_constructorMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorMap GALGAS_constructorMap::constructor_mapWithMapToOverride (const GALGAS_constructorMap & inMapToOverride
                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_constructorMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorMap GALGAS_constructorMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  GALGAS_constructorMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_constructorMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                 const GALGAS_constructorValue & inArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  cMapElement_constructorMap * p = NULL ;
  macroMyNew (p, cMapElement_constructorMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@constructorMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_constructorMap::setter_insertKey (GALGAS_lstring inKey,
                                              GALGAS_constructorValue inArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  cMapElement_constructorMap * p = NULL ;
  macroMyNew (p, cMapElement_constructorMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "-- internal error --" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_constructorMap_searchKey = "-- internal error --" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_constructorMap::method_searchKey (GALGAS_lstring inKey,
                                              GALGAS_constructorValue & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  const cMapElement_constructorMap * p = (const cMapElement_constructorMap *) performSearch (inKey,
                                                                                               inCompiler,
                                                                                               kSearchErrorMessage_constructorMap_searchKey
                                                                                               COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_constructorMap) ;
    outArgument0 = p->mAttribute_mInitValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorValue GALGAS_constructorMap::getter_mInitValueForKey (const GALGAS_string & inKey,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_constructorMap * p = (const cMapElement_constructorMap *) attributes ;
  GALGAS_constructorValue result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_constructorMap) ;
    result = p->mAttribute_mInitValue ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_constructorMap::setter_setMInitValueForKey (GALGAS_constructorValue inAttributeValue,
                                                        GALGAS_string inKey,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_constructorMap * p = (cMapElement_constructorMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_constructorMap) ;
    p->mAttribute_mInitValue = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_constructorMap * GALGAS_constructorMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                       const GALGAS_string & inKey
                                                                                       COMMA_LOCATION_ARGS) {
  cMapElement_constructorMap * result = (cMapElement_constructorMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_constructorMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_constructorMap::cEnumerator_constructorMap (const GALGAS_constructorMap & inEnumeratedObject,
                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorMap_2D_element cEnumerator_constructorMap::current (LOCATION_ARGS) const {
  const cMapElement_constructorMap * p = (const cMapElement_constructorMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_constructorMap) ;
  return GALGAS_constructorMap_2D_element (p->mAttribute_lkey, p->mAttribute_mInitValue) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_constructorMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorValue cEnumerator_constructorMap::current_mInitValue (LOCATION_ARGS) const {
  const cMapElement_constructorMap * p = (const cMapElement_constructorMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_constructorMap) ;
  return p->mAttribute_mInitValue ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @constructorMap type                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_constructorMap ("constructorMap",
                                       NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_constructorMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constructorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_constructorMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_constructorMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorMap GALGAS_constructorMap::extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_constructorMap result ;
  const GALGAS_constructorMap * p = (const GALGAS_constructorMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_constructorMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("constructorMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_availableInterruptMap::cMapElement_availableInterruptMap (const GALGAS_lstring & inKey,
                                                                      const GALGAS_interruptionPanicCode & in_mInterruptionPanicCode
                                                                      COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mInterruptionPanicCode (in_mInterruptionPanicCode) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_availableInterruptMap::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mInterruptionPanicCode.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_availableInterruptMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_availableInterruptMap (mAttribute_lkey, mAttribute_mInterruptionPanicCode COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_availableInterruptMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInterruptionPanicCode" ":" ;
  mAttribute_mInterruptionPanicCode.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_availableInterruptMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_availableInterruptMap * operand = (cMapElement_availableInterruptMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInterruptionPanicCode.objectCompare (operand->mAttribute_mInterruptionPanicCode) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_availableInterruptMap::GALGAS_availableInterruptMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_availableInterruptMap::GALGAS_availableInterruptMap (const GALGAS_availableInterruptMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_availableInterruptMap & GALGAS_availableInterruptMap::operator = (const GALGAS_availableInterruptMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_availableInterruptMap GALGAS_availableInterruptMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_availableInterruptMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_availableInterruptMap GALGAS_availableInterruptMap::constructor_mapWithMapToOverride (const GALGAS_availableInterruptMap & inMapToOverride
                                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_availableInterruptMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_availableInterruptMap GALGAS_availableInterruptMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  GALGAS_availableInterruptMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_availableInterruptMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                        const GALGAS_interruptionPanicCode & inArgument0,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  cMapElement_availableInterruptMap * p = NULL ;
  macroMyNew (p, cMapElement_availableInterruptMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@availableInterruptMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_availableInterruptMap::setter_insertKey (GALGAS_lstring inKey,
                                                     GALGAS_interruptionPanicCode inArgument0,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  cMapElement_availableInterruptMap * p = NULL ;
  macroMyNew (p, cMapElement_availableInterruptMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "interrupt '%K' is already defined" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_availableInterruptMap_searchKey = "interrupt '%K' is not defined" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_availableInterruptMap::method_searchKey (GALGAS_lstring inKey,
                                                     GALGAS_interruptionPanicCode & outArgument0,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  const cMapElement_availableInterruptMap * p = (const cMapElement_availableInterruptMap *) performSearch (inKey,
                                                                                                             inCompiler,
                                                                                                             kSearchErrorMessage_availableInterruptMap_searchKey
                                                                                                             COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_availableInterruptMap) ;
    outArgument0 = p->mAttribute_mInterruptionPanicCode ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_interruptionPanicCode GALGAS_availableInterruptMap::getter_mInterruptionPanicCodeForKey (const GALGAS_string & inKey,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_availableInterruptMap * p = (const cMapElement_availableInterruptMap *) attributes ;
  GALGAS_interruptionPanicCode result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_availableInterruptMap) ;
    result = p->mAttribute_mInterruptionPanicCode ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_availableInterruptMap::setter_setMInterruptionPanicCodeForKey (GALGAS_interruptionPanicCode inAttributeValue,
                                                                           GALGAS_string inKey,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_availableInterruptMap * p = (cMapElement_availableInterruptMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_availableInterruptMap) ;
    p->mAttribute_mInterruptionPanicCode = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_availableInterruptMap * GALGAS_availableInterruptMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                     const GALGAS_string & inKey
                                                                                                     COMMA_LOCATION_ARGS) {
  cMapElement_availableInterruptMap * result = (cMapElement_availableInterruptMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_availableInterruptMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_availableInterruptMap::cEnumerator_availableInterruptMap (const GALGAS_availableInterruptMap & inEnumeratedObject,
                                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_availableInterruptMap_2D_element cEnumerator_availableInterruptMap::current (LOCATION_ARGS) const {
  const cMapElement_availableInterruptMap * p = (const cMapElement_availableInterruptMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_availableInterruptMap) ;
  return GALGAS_availableInterruptMap_2D_element (p->mAttribute_lkey, p->mAttribute_mInterruptionPanicCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_availableInterruptMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_interruptionPanicCode cEnumerator_availableInterruptMap::current_mInterruptionPanicCode (LOCATION_ARGS) const {
  const cMapElement_availableInterruptMap * p = (const cMapElement_availableInterruptMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_availableInterruptMap) ;
  return p->mAttribute_mInterruptionPanicCode ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @availableInterruptMap type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_availableInterruptMap ("availableInterruptMap",
                                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_availableInterruptMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_availableInterruptMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_availableInterruptMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_availableInterruptMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_availableInterruptMap GALGAS_availableInterruptMap::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_availableInterruptMap result ;
  const GALGAS_availableInterruptMap * p = (const GALGAS_availableInterruptMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_availableInterruptMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("availableInterruptMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Class for element of '@globalTaskVariableList' list                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_globalTaskVariableList : public cCollectionElement {
  public : GALGAS_globalTaskVariableList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_globalTaskVariableList (const GALGAS_string & in_mTaskName,
                                                      const GALGAS_string & in_mTaskTypeName,
                                                      const GALGAS_objectIR & in_mInitialValue
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

cCollectionElement_globalTaskVariableList::cCollectionElement_globalTaskVariableList (const GALGAS_string & in_mTaskName,
                                                                                      const GALGAS_string & in_mTaskTypeName,
                                                                                      const GALGAS_objectIR & in_mInitialValue
                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mTaskName, in_mTaskTypeName, in_mInitialValue) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_globalTaskVariableList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_globalTaskVariableList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_globalTaskVariableList (mObject.mAttribute_mTaskName, mObject.mAttribute_mTaskTypeName, mObject.mAttribute_mInitialValue COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_globalTaskVariableList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTaskName" ":" ;
  mObject.mAttribute_mTaskName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTaskTypeName" ":" ;
  mObject.mAttribute_mTaskTypeName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInitialValue" ":" ;
  mObject.mAttribute_mInitialValue.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_globalTaskVariableList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_globalTaskVariableList * operand = (cCollectionElement_globalTaskVariableList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_globalTaskVariableList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalTaskVariableList::GALGAS_globalTaskVariableList (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalTaskVariableList::GALGAS_globalTaskVariableList (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalTaskVariableList GALGAS_globalTaskVariableList::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_globalTaskVariableList result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalTaskVariableList GALGAS_globalTaskVariableList::constructor_listWithValue (const GALGAS_string & inOperand0,
                                                                                        const GALGAS_string & inOperand1,
                                                                                        const GALGAS_objectIR & inOperand2
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_globalTaskVariableList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_globalTaskVariableList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_globalTaskVariableList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                               const GALGAS_string & in_mTaskName,
                                                               const GALGAS_string & in_mTaskTypeName,
                                                               const GALGAS_objectIR & in_mInitialValue
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_globalTaskVariableList * p = NULL ;
  macroMyNew (p, cCollectionElement_globalTaskVariableList (in_mTaskName,
                                                            in_mTaskTypeName,
                                                            in_mInitialValue COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_globalTaskVariableList::addAssign_operation (const GALGAS_string & inOperand0,
                                                         const GALGAS_string & inOperand1,
                                                         const GALGAS_objectIR & inOperand2
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_globalTaskVariableList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_globalTaskVariableList::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                          const GALGAS_string inOperand1,
                                                          const GALGAS_objectIR inOperand2,
                                                          const GALGAS_uint inInsertionIndex,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_globalTaskVariableList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_globalTaskVariableList::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                          GALGAS_string & outOperand1,
                                                          GALGAS_objectIR & outOperand2,
                                                          const GALGAS_uint inRemoveIndex,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_globalTaskVariableList * p = (cCollectionElement_globalTaskVariableList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_globalTaskVariableList) ;
      outOperand0 = p->mObject.mAttribute_mTaskName ;
      outOperand1 = p->mObject.mAttribute_mTaskTypeName ;
      outOperand2 = p->mObject.mAttribute_mInitialValue ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_globalTaskVariableList::setter_popFirst (GALGAS_string & outOperand0,
                                                     GALGAS_string & outOperand1,
                                                     GALGAS_objectIR & outOperand2,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_globalTaskVariableList * p = (cCollectionElement_globalTaskVariableList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_globalTaskVariableList) ;
    outOperand0 = p->mObject.mAttribute_mTaskName ;
    outOperand1 = p->mObject.mAttribute_mTaskTypeName ;
    outOperand2 = p->mObject.mAttribute_mInitialValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_globalTaskVariableList::setter_popLast (GALGAS_string & outOperand0,
                                                    GALGAS_string & outOperand1,
                                                    GALGAS_objectIR & outOperand2,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_globalTaskVariableList * p = (cCollectionElement_globalTaskVariableList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_globalTaskVariableList) ;
    outOperand0 = p->mObject.mAttribute_mTaskName ;
    outOperand1 = p->mObject.mAttribute_mTaskTypeName ;
    outOperand2 = p->mObject.mAttribute_mInitialValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_globalTaskVariableList::method_first (GALGAS_string & outOperand0,
                                                  GALGAS_string & outOperand1,
                                                  GALGAS_objectIR & outOperand2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_globalTaskVariableList * p = (cCollectionElement_globalTaskVariableList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_globalTaskVariableList) ;
    outOperand0 = p->mObject.mAttribute_mTaskName ;
    outOperand1 = p->mObject.mAttribute_mTaskTypeName ;
    outOperand2 = p->mObject.mAttribute_mInitialValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_globalTaskVariableList::method_last (GALGAS_string & outOperand0,
                                                 GALGAS_string & outOperand1,
                                                 GALGAS_objectIR & outOperand2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_globalTaskVariableList * p = (cCollectionElement_globalTaskVariableList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_globalTaskVariableList) ;
    outOperand0 = p->mObject.mAttribute_mTaskName ;
    outOperand1 = p->mObject.mAttribute_mTaskTypeName ;
    outOperand2 = p->mObject.mAttribute_mInitialValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalTaskVariableList GALGAS_globalTaskVariableList::add_operation (const GALGAS_globalTaskVariableList & inOperand,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_globalTaskVariableList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalTaskVariableList GALGAS_globalTaskVariableList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_globalTaskVariableList result = GALGAS_globalTaskVariableList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalTaskVariableList GALGAS_globalTaskVariableList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_globalTaskVariableList result = GALGAS_globalTaskVariableList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalTaskVariableList GALGAS_globalTaskVariableList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_globalTaskVariableList result = GALGAS_globalTaskVariableList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_globalTaskVariableList::plusAssign_operation (const GALGAS_globalTaskVariableList inOperand,
                                                          C_Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_globalTaskVariableList::getter_mTaskNameAtIndex (const GALGAS_uint & inIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_globalTaskVariableList * p = (cCollectionElement_globalTaskVariableList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_globalTaskVariableList) ;
    result = p->mObject.mAttribute_mTaskName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_globalTaskVariableList::getter_mTaskTypeNameAtIndex (const GALGAS_uint & inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_globalTaskVariableList * p = (cCollectionElement_globalTaskVariableList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_globalTaskVariableList) ;
    result = p->mObject.mAttribute_mTaskTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_globalTaskVariableList::getter_mInitialValueAtIndex (const GALGAS_uint & inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_globalTaskVariableList * p = (cCollectionElement_globalTaskVariableList *) attributes.ptr () ;
  GALGAS_objectIR result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_globalTaskVariableList) ;
    result = p->mObject.mAttribute_mInitialValue ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_globalTaskVariableList::cEnumerator_globalTaskVariableList (const GALGAS_globalTaskVariableList & inEnumeratedObject,
                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalTaskVariableList_2D_element cEnumerator_globalTaskVariableList::current (LOCATION_ARGS) const {
  const cCollectionElement_globalTaskVariableList * p = (const cCollectionElement_globalTaskVariableList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_globalTaskVariableList) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_globalTaskVariableList::current_mTaskName (LOCATION_ARGS) const {
  const cCollectionElement_globalTaskVariableList * p = (const cCollectionElement_globalTaskVariableList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_globalTaskVariableList) ;
  return p->mObject.mAttribute_mTaskName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_globalTaskVariableList::current_mTaskTypeName (LOCATION_ARGS) const {
  const cCollectionElement_globalTaskVariableList * p = (const cCollectionElement_globalTaskVariableList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_globalTaskVariableList) ;
  return p->mObject.mAttribute_mTaskTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR cEnumerator_globalTaskVariableList::current_mInitialValue (LOCATION_ARGS) const {
  const cCollectionElement_globalTaskVariableList * p = (const cCollectionElement_globalTaskVariableList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_globalTaskVariableList) ;
  return p->mObject.mAttribute_mInitialValue ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @globalTaskVariableList type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_globalTaskVariableList ("globalTaskVariableList",
                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_globalTaskVariableList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_globalTaskVariableList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_globalTaskVariableList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_globalTaskVariableList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalTaskVariableList GALGAS_globalTaskVariableList::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_globalTaskVariableList result ;
  const GALGAS_globalTaskVariableList * p = (const GALGAS_globalTaskVariableList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_globalTaskVariableList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("globalTaskVariableList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
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
//                                         '@subprogramInvocationGraph' graph                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_subprogramInvocationGraph::GALGAS_subprogramInvocationGraph (void) :
AC_GALGAS_graph () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_subprogramInvocationGraph GALGAS_subprogramInvocationGraph::constructor_emptyGraph (LOCATION_ARGS) {
  GALGAS_subprogramInvocationGraph result ;
  result.makeNewEmptyGraph (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_subprogramInvocationGraph::setter_addNode (GALGAS_lstring inKey,
                                                       GALGAS_lstring inArgument_0,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  GALGAS_lstringlist::makeAttributesFromObjects (attributes, inArgument_0 COMMA_THERE) ;
  const char * kErrorMessage = "the '%K' subprogram is already declared at %L" ;
  internalAddNode (inKey, kErrorMessage, attributes, inCompiler COMMA_THERE) ;
}


//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_subprogramInvocationGraph::method_topologicalSort (GALGAS_lstringlist & outSortedList,
                                                               GALGAS_lstringlist & outSortedKeyList,
                                                               GALGAS_lstringlist & outUnsortedList,
                                                               GALGAS_lstringlist & outUnsortedKeyList,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  cSharedList * sortedList = NULL ;
  cSharedList * unsortedList = NULL ;
  internalTopologicalSort (sortedList, outSortedKeyList, unsortedList, outUnsortedKeyList, inCompiler COMMA_THERE) ;
  outSortedList = GALGAS_lstringlist (sortedList) ;
  outUnsortedList = GALGAS_lstringlist (unsortedList) ;
  GALGAS_lstringlist::detachSharedList (sortedList) ;
  GALGAS_lstringlist::detachSharedList (unsortedList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_subprogramInvocationGraph::method_depthFirstTopologicalSort (GALGAS_lstringlist & outSortedList,
                                                                         GALGAS_lstringlist & outSortedKeyList,
                                                                         GALGAS_lstringlist & outUnsortedList,
                                                                         GALGAS_lstringlist & outUnsortedKeyList,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  cSharedList * sortedList = NULL ;
  cSharedList * unsortedList = NULL ;
  internalDepthFirstTopologicalSort (sortedList, outSortedKeyList, unsortedList, outUnsortedKeyList, inCompiler COMMA_THERE) ;
  outSortedList = GALGAS_lstringlist (sortedList) ;
  outUnsortedList = GALGAS_lstringlist (unsortedList) ;
  GALGAS_lstringlist::detachSharedList (sortedList) ;
  GALGAS_lstringlist::detachSharedList (unsortedList) ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_subprogramInvocationGraph GALGAS_subprogramInvocationGraph::getter_reversedGraph (LOCATION_ARGS) const {
  GALGAS_subprogramInvocationGraph result ;
  result.reversedGraphFromGraph (*this COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_subprogramInvocationGraph::method_circularities (GALGAS_lstringlist & outInfoList,
                                                             GALGAS_lstringlist & outKeyList
                                                             COMMA_LOCATION_ARGS) const {
  cSharedList * infoList = NULL ;
  internalFindCircularities (infoList, outKeyList COMMA_THERE) ;
  outInfoList = GALGAS_lstringlist (infoList) ;
  GALGAS_lstringlist::detachSharedList (infoList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_subprogramInvocationGraph::method_nodesWithNoSuccessor (GALGAS_lstringlist & outInfoList,
                                                                    GALGAS_lstringlist & outKeyList
                                                                    COMMA_LOCATION_ARGS) const {
  cSharedList * infoList = NULL ;
  internalNodesWithNoSuccessor (infoList, outKeyList COMMA_THERE) ;
  outInfoList = GALGAS_lstringlist (infoList) ;
  GALGAS_lstringlist::detachSharedList (infoList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_subprogramInvocationGraph::method_nodesWithNoPredecessor (GALGAS_lstringlist & outInfoList,
                                                                      GALGAS_lstringlist & outKeyList
                                                                      COMMA_LOCATION_ARGS) const {
  cSharedList * infoList = NULL ;
  internalNodesWithNoPredecessor (infoList, outKeyList COMMA_THERE) ;
  outInfoList = GALGAS_lstringlist (infoList) ;
  GALGAS_lstringlist::detachSharedList (infoList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_subprogramInvocationGraph GALGAS_subprogramInvocationGraph::getter_subgraphFromNodes (const GALGAS_lstringlist & inStartKeyList,
                                                                                             const GALGAS_stringset & inKeysToExclude,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  GALGAS_subprogramInvocationGraph result ;
  subGraph (result, inStartKeyList, inKeysToExclude, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_subprogramInvocationGraph::getter_accessibleNodesFrom (const GALGAS_lstringlist & inStartKeyList,
                                                                                 const GALGAS_stringset & inNodesToExclude,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  GALGAS_subprogramInvocationGraph resultingGraph ;
  subGraph (resultingGraph,
            inStartKeyList,
            inNodesToExclude,
            inCompiler
            COMMA_THERE) ;
  if (resultingGraph.isValid ()) {
    result = resultingGraph.getter_lkeyList (THERE) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @subprogramInvocationGraph type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_subprogramInvocationGraph ("subprogramInvocationGraph",
                                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_subprogramInvocationGraph::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_subprogramInvocationGraph ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_subprogramInvocationGraph::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_subprogramInvocationGraph (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_subprogramInvocationGraph GALGAS_subprogramInvocationGraph::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_subprogramInvocationGraph result ;
  const GALGAS_subprogramInvocationGraph * p = (const GALGAS_subprogramInvocationGraph *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_subprogramInvocationGraph *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("subprogramInvocationGraph", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_accessKind::GALGAS_accessKind (void) :
mEnum (kNotBuilt) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_accessKind GALGAS_accessKind::constructor_noAccess (UNUSED_LOCATION_ARGS) {
  GALGAS_accessKind result ;
  result.mEnum = kEnum_noAccess ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_accessKind GALGAS_accessKind::constructor_readAccess (UNUSED_LOCATION_ARGS) {
  GALGAS_accessKind result ;
  result.mEnum = kEnum_readAccess ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_accessKind GALGAS_accessKind::constructor_readWriteAccess (UNUSED_LOCATION_ARGS) {
  GALGAS_accessKind result ;
  result.mEnum = kEnum_readWriteAccess ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * gEnumNameArrayFor_accessKind [4] = {
  "(not built)",
  "noAccess",
  "readAccess",
  "readWriteAccess"
} ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_accessKind::getter_isNoAccess (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_noAccess == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_accessKind::getter_isReadAccess (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_readAccess == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_accessKind::getter_isReadWriteAccess (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_readWriteAccess == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_accessKind::description (C_String & ioString,
                                     const int32_t /* inIndentation */) const {
  ioString << "<enum @accessKind: " << gEnumNameArrayFor_accessKind [mEnum] ;
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_accessKind::objectCompare (const GALGAS_accessKind & inOperand) const {
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
//                                                  @accessKind type                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_accessKind ("accessKind",
                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_accessKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_accessKind ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_accessKind::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_accessKind (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_accessKind GALGAS_accessKind::extractObject (const GALGAS_object & inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  GALGAS_accessKind result ;
  const GALGAS_accessKind * p = (const GALGAS_accessKind *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_accessKind *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("accessKind", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
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
  cEnumerator_routineMapIR enumerator_8817 (temp_0, kEnumeration_up) ;
  while (enumerator_8817.hasCurrentObject ()) {
    extensionMethod_llvmCodeGeneration (enumerator_8817.current (HERE), ioArgument_ioLLVMcode, ioArgument_ioAssemblerCode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 232)) ;
    enumerator_8817.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*

cMapElement_globalVariableMapIR::cMapElement_globalVariableMapIR (const GALGAS_lstring & inKey,
                                                                  const GALGAS_unifiedTypeMap_2D_proxy & in_mType,
                                                                  const GALGAS_bool & in_mGenerateVolatile,
                                                                  const GALGAS_objectIR & in_mInitialValue
                                                                  COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mType (in_mType),
mAttribute_mGenerateVolatile (in_mGenerateVolatile),
mAttribute_mInitialValue (in_mInitialValue) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_globalVariableMapIR::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mType.isValid () && mAttribute_mGenerateVolatile.isValid () && mAttribute_mInitialValue.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_globalVariableMapIR::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_globalVariableMapIR (mAttribute_lkey, mAttribute_mType, mAttribute_mGenerateVolatile, mAttribute_mInitialValue COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_globalVariableMapIR::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mType" ":" ;
  mAttribute_mType.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mGenerateVolatile" ":" ;
  mAttribute_mGenerateVolatile.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInitialValue" ":" ;
  mAttribute_mInitialValue.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_globalVariableMapIR::compare (const cCollectionElement * inOperand) const {
  cMapElement_globalVariableMapIR * operand = (cMapElement_globalVariableMapIR *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mType.objectCompare (operand->mAttribute_mType) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mGenerateVolatile.objectCompare (operand->mAttribute_mGenerateVolatile) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mInitialValue.objectCompare (operand->mAttribute_mInitialValue) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalVariableMapIR::GALGAS_globalVariableMapIR (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalVariableMapIR::GALGAS_globalVariableMapIR (const GALGAS_globalVariableMapIR & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalVariableMapIR & GALGAS_globalVariableMapIR::operator = (const GALGAS_globalVariableMapIR & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalVariableMapIR GALGAS_globalVariableMapIR::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_globalVariableMapIR result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalVariableMapIR GALGAS_globalVariableMapIR::constructor_mapWithMapToOverride (const GALGAS_globalVariableMapIR & inMapToOverride
                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_globalVariableMapIR result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalVariableMapIR GALGAS_globalVariableMapIR::getter_overriddenMap (C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  GALGAS_globalVariableMapIR result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_globalVariableMapIR::addAssign_operation (const GALGAS_lstring & inKey,
                                                      const GALGAS_unifiedTypeMap_2D_proxy & inArgument0,
                                                      const GALGAS_bool & inArgument1,
                                                      const GALGAS_objectIR & inArgument2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  cMapElement_globalVariableMapIR * p = NULL ;
  macroMyNew (p, cMapElement_globalVariableMapIR (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@globalVariableMapIR insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_globalVariableMapIR::setter_insertKey (GALGAS_lstring inKey,
                                                   GALGAS_unifiedTypeMap_2D_proxy inArgument0,
                                                   GALGAS_bool inArgument1,
                                                   GALGAS_objectIR inArgument2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  cMapElement_globalVariableMapIR * p = NULL ;
  macroMyNew (p, cMapElement_globalVariableMapIR (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "** internal error **" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_globalVariableMapIR_searchKey = "** internal error **" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_globalVariableMapIR::method_searchKey (GALGAS_lstring inKey,
                                                   GALGAS_unifiedTypeMap_2D_proxy & outArgument0,
                                                   GALGAS_bool & outArgument1,
                                                   GALGAS_objectIR & outArgument2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  const cMapElement_globalVariableMapIR * p = (const cMapElement_globalVariableMapIR *) performSearch (inKey,
                                                                                                         inCompiler,
                                                                                                         kSearchErrorMessage_globalVariableMapIR_searchKey
                                                                                                         COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_globalVariableMapIR) ;
    outArgument0 = p->mAttribute_mType ;
    outArgument1 = p->mAttribute_mGenerateVolatile ;
    outArgument2 = p->mAttribute_mInitialValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_globalVariableMapIR::getter_mTypeForKey (const GALGAS_string & inKey,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_globalVariableMapIR * p = (const cMapElement_globalVariableMapIR *) attributes ;
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_globalVariableMapIR) ;
    result = p->mAttribute_mType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_globalVariableMapIR::getter_mGenerateVolatileForKey (const GALGAS_string & inKey,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_globalVariableMapIR * p = (const cMapElement_globalVariableMapIR *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_globalVariableMapIR) ;
    result = p->mAttribute_mGenerateVolatile ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_globalVariableMapIR::getter_mInitialValueForKey (const GALGAS_string & inKey,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_globalVariableMapIR * p = (const cMapElement_globalVariableMapIR *) attributes ;
  GALGAS_objectIR result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_globalVariableMapIR) ;
    result = p->mAttribute_mInitialValue ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_globalVariableMapIR::setter_setMTypeForKey (GALGAS_unifiedTypeMap_2D_proxy inAttributeValue,
                                                        GALGAS_string inKey,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_globalVariableMapIR * p = (cMapElement_globalVariableMapIR *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_globalVariableMapIR) ;
    p->mAttribute_mType = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_globalVariableMapIR::setter_setMGenerateVolatileForKey (GALGAS_bool inAttributeValue,
                                                                    GALGAS_string inKey,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_globalVariableMapIR * p = (cMapElement_globalVariableMapIR *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_globalVariableMapIR) ;
    p->mAttribute_mGenerateVolatile = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_globalVariableMapIR::setter_setMInitialValueForKey (GALGAS_objectIR inAttributeValue,
                                                                GALGAS_string inKey,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_globalVariableMapIR * p = (cMapElement_globalVariableMapIR *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_globalVariableMapIR) ;
    p->mAttribute_mInitialValue = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_globalVariableMapIR * GALGAS_globalVariableMapIR::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                 const GALGAS_string & inKey
                                                                                                 COMMA_LOCATION_ARGS) {
  cMapElement_globalVariableMapIR * result = (cMapElement_globalVariableMapIR *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_globalVariableMapIR) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_globalVariableMapIR::cEnumerator_globalVariableMapIR (const GALGAS_globalVariableMapIR & inEnumeratedObject,
                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalVariableMapIR_2D_element cEnumerator_globalVariableMapIR::current (LOCATION_ARGS) const {
  const cMapElement_globalVariableMapIR * p = (const cMapElement_globalVariableMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_globalVariableMapIR) ;
  return GALGAS_globalVariableMapIR_2D_element (p->mAttribute_lkey, p->mAttribute_mType, p->mAttribute_mGenerateVolatile, p->mAttribute_mInitialValue) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_globalVariableMapIR::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cEnumerator_globalVariableMapIR::current_mType (LOCATION_ARGS) const {
  const cMapElement_globalVariableMapIR * p = (const cMapElement_globalVariableMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_globalVariableMapIR) ;
  return p->mAttribute_mType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_globalVariableMapIR::current_mGenerateVolatile (LOCATION_ARGS) const {
  const cMapElement_globalVariableMapIR * p = (const cMapElement_globalVariableMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_globalVariableMapIR) ;
  return p->mAttribute_mGenerateVolatile ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR cEnumerator_globalVariableMapIR::current_mInitialValue (LOCATION_ARGS) const {
  const cMapElement_globalVariableMapIR * p = (const cMapElement_globalVariableMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_globalVariableMapIR) ;
  return p->mAttribute_mInitialValue ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @globalVariableMapIR type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_globalVariableMapIR ("globalVariableMapIR",
                                            NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_globalVariableMapIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_globalVariableMapIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_globalVariableMapIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_globalVariableMapIR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalVariableMapIR GALGAS_globalVariableMapIR::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_globalVariableMapIR result ;
  const GALGAS_globalVariableMapIR * p = (const GALGAS_globalVariableMapIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_globalVariableMapIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("globalVariableMapIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_globalConstantMapIR::cMapElement_globalConstantMapIR (const GALGAS_lstring & inKey,
                                                                  const GALGAS_unifiedTypeMap_2D_proxy & in_mType,
                                                                  const GALGAS_objectIR & in_mSourceExpression
                                                                  COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mType (in_mType),
mAttribute_mSourceExpression (in_mSourceExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_globalConstantMapIR::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mType.isValid () && mAttribute_mSourceExpression.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_globalConstantMapIR::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_globalConstantMapIR (mAttribute_lkey, mAttribute_mType, mAttribute_mSourceExpression COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_globalConstantMapIR::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mType" ":" ;
  mAttribute_mType.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSourceExpression" ":" ;
  mAttribute_mSourceExpression.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_globalConstantMapIR::compare (const cCollectionElement * inOperand) const {
  cMapElement_globalConstantMapIR * operand = (cMapElement_globalConstantMapIR *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mType.objectCompare (operand->mAttribute_mType) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSourceExpression.objectCompare (operand->mAttribute_mSourceExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalConstantMapIR::GALGAS_globalConstantMapIR (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalConstantMapIR::GALGAS_globalConstantMapIR (const GALGAS_globalConstantMapIR & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalConstantMapIR & GALGAS_globalConstantMapIR::operator = (const GALGAS_globalConstantMapIR & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalConstantMapIR GALGAS_globalConstantMapIR::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_globalConstantMapIR result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalConstantMapIR GALGAS_globalConstantMapIR::constructor_mapWithMapToOverride (const GALGAS_globalConstantMapIR & inMapToOverride
                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_globalConstantMapIR result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalConstantMapIR GALGAS_globalConstantMapIR::getter_overriddenMap (C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  GALGAS_globalConstantMapIR result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_globalConstantMapIR::addAssign_operation (const GALGAS_lstring & inKey,
                                                      const GALGAS_unifiedTypeMap_2D_proxy & inArgument0,
                                                      const GALGAS_objectIR & inArgument1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  cMapElement_globalConstantMapIR * p = NULL ;
  macroMyNew (p, cMapElement_globalConstantMapIR (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@globalConstantMapIR insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_globalConstantMapIR::setter_insertKey (GALGAS_lstring inKey,
                                                   GALGAS_unifiedTypeMap_2D_proxy inArgument0,
                                                   GALGAS_objectIR inArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  cMapElement_globalConstantMapIR * p = NULL ;
  macroMyNew (p, cMapElement_globalConstantMapIR (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "** internal error **" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_globalConstantMapIR_searchKey = "** internal error **" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_globalConstantMapIR::method_searchKey (GALGAS_lstring inKey,
                                                   GALGAS_unifiedTypeMap_2D_proxy & outArgument0,
                                                   GALGAS_objectIR & outArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  const cMapElement_globalConstantMapIR * p = (const cMapElement_globalConstantMapIR *) performSearch (inKey,
                                                                                                         inCompiler,
                                                                                                         kSearchErrorMessage_globalConstantMapIR_searchKey
                                                                                                         COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_globalConstantMapIR) ;
    outArgument0 = p->mAttribute_mType ;
    outArgument1 = p->mAttribute_mSourceExpression ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_globalConstantMapIR::getter_mTypeForKey (const GALGAS_string & inKey,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_globalConstantMapIR * p = (const cMapElement_globalConstantMapIR *) attributes ;
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_globalConstantMapIR) ;
    result = p->mAttribute_mType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_globalConstantMapIR::getter_mSourceExpressionForKey (const GALGAS_string & inKey,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_globalConstantMapIR * p = (const cMapElement_globalConstantMapIR *) attributes ;
  GALGAS_objectIR result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_globalConstantMapIR) ;
    result = p->mAttribute_mSourceExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_globalConstantMapIR::setter_setMTypeForKey (GALGAS_unifiedTypeMap_2D_proxy inAttributeValue,
                                                        GALGAS_string inKey,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_globalConstantMapIR * p = (cMapElement_globalConstantMapIR *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_globalConstantMapIR) ;
    p->mAttribute_mType = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_globalConstantMapIR::setter_setMSourceExpressionForKey (GALGAS_objectIR inAttributeValue,
                                                                    GALGAS_string inKey,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_globalConstantMapIR * p = (cMapElement_globalConstantMapIR *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_globalConstantMapIR) ;
    p->mAttribute_mSourceExpression = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_globalConstantMapIR * GALGAS_globalConstantMapIR::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                 const GALGAS_string & inKey
                                                                                                 COMMA_LOCATION_ARGS) {
  cMapElement_globalConstantMapIR * result = (cMapElement_globalConstantMapIR *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_globalConstantMapIR) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_globalConstantMapIR::cEnumerator_globalConstantMapIR (const GALGAS_globalConstantMapIR & inEnumeratedObject,
                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalConstantMapIR_2D_element cEnumerator_globalConstantMapIR::current (LOCATION_ARGS) const {
  const cMapElement_globalConstantMapIR * p = (const cMapElement_globalConstantMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_globalConstantMapIR) ;
  return GALGAS_globalConstantMapIR_2D_element (p->mAttribute_lkey, p->mAttribute_mType, p->mAttribute_mSourceExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_globalConstantMapIR::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cEnumerator_globalConstantMapIR::current_mType (LOCATION_ARGS) const {
  const cMapElement_globalConstantMapIR * p = (const cMapElement_globalConstantMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_globalConstantMapIR) ;
  return p->mAttribute_mType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR cEnumerator_globalConstantMapIR::current_mSourceExpression (LOCATION_ARGS) const {
  const cMapElement_globalConstantMapIR * p = (const cMapElement_globalConstantMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_globalConstantMapIR) ;
  return p->mAttribute_mSourceExpression ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @globalConstantMapIR type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_globalConstantMapIR ("globalConstantMapIR",
                                            NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_globalConstantMapIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_globalConstantMapIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_globalConstantMapIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_globalConstantMapIR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalConstantMapIR GALGAS_globalConstantMapIR::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_globalConstantMapIR result ;
  const GALGAS_globalConstantMapIR * p = (const GALGAS_globalConstantMapIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_globalConstantMapIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("globalConstantMapIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
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
  ioObject.addAssign_operation (GALGAS_loadFromTemporaryReferenceIR::constructor_new (constinArgument_inTargetValue, constinArgument_inLLVMName, constinArgument_inVolatile  COMMA_SOURCE_FILE ("intermediate-load-from-temporary-reference.galgas", 7))  COMMA_SOURCE_FILE ("intermediate-load-from-temporary-reference.galgas", 7)) ;
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
  ioObject.addAssign_operation (GALGAS_storeFromTemporaryReferenceIR::constructor_new (constinArgument_inTargetVarType, constinArgument_inLLVMName, constinArgument_inSourceValue, constinArgument_inVolatile  COMMA_SOURCE_FILE ("intermediate-store-to-temporary-reference.galgas", 9))  COMMA_SOURCE_FILE ("intermediate-store-to-temporary-reference.galgas", 9)) ;
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
      TC_Array <C_FixItDescription> fixItArray0 ;
      inCompiler->emitSemanticError (extensionGetter_location (constinArgument_inTargetReference, inCompiler COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 11)), GALGAS_string ("<<@instructionListIR appendStoreFromReference selfObject>>"), fixItArray0  COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 11)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_globalVariableReference:
    {
      const cEnumAssociatedValues_objectIR_globalVariableReference * extractPtr_610 = (const cEnumAssociatedValues_objectIR_globalVariableReference *) (constinArgument_inTargetReference.unsafePointer ()) ;
      const GALGAS_unifiedTypeMap_2D_proxy extractedValue_type = extractPtr_610->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_plmName = extractPtr_610->mAssociatedValue1 ;
      {
      extensionSetter_appendStoreGlobalVariable (ioObject, extractedValue_plmName.getter_string (SOURCE_FILE ("intermediate-load-store.galgas", 14)), extractedValue_type, constinArgument_inValue, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 14)) ;
      }
    }
    break ;
  case GALGAS_objectIR::kEnum_localVariableReference:
    {
      const cEnumAssociatedValues_objectIR_localVariableReference * extractPtr_741 = (const cEnumAssociatedValues_objectIR_localVariableReference *) (constinArgument_inTargetReference.unsafePointer ()) ;
      const GALGAS_unifiedTypeMap_2D_proxy extractedValue_type = extractPtr_741->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_plmName = extractPtr_741->mAssociatedValue1 ;
      {
      extensionSetter_appendStoreLocalVariable (ioObject, extractedValue_plmName.getter_string (SOURCE_FILE ("intermediate-load-store.galgas", 16)), extractedValue_type, constinArgument_inValue, inCompiler COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 16)) ;
      }
    }
    break ;
  case GALGAS_objectIR::kEnum_temporaryReference:
    {
      const cEnumAssociatedValues_objectIR_temporaryReference * extractPtr_911 = (const cEnumAssociatedValues_objectIR_temporaryReference *) (constinArgument_inTargetReference.unsafePointer ()) ;
      const GALGAS_unifiedTypeMap_2D_proxy extractedValue_type = extractPtr_911->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_llvmName = extractPtr_911->mAssociatedValue1 ;
      const GALGAS_bool extractedValue_volatile = extractPtr_911->mAssociatedValue3 ;
      {
      extensionSetter_appendStoreTemporaryReference (ioObject, extractedValue_type, extractedValue_llvmName.getter_string (SOURCE_FILE ("intermediate-load-store.galgas", 18)), constinArgument_inValue, extractedValue_volatile, inCompiler COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 18)) ;
      }
    }
    break ;
  case GALGAS_objectIR::kEnum_registerReference:
    {
      const cEnumAssociatedValues_objectIR_registerReference * extractPtr_1141 = (const cEnumAssociatedValues_objectIR_registerReference *) (constinArgument_inTargetReference.unsafePointer ()) ;
      const GALGAS_unifiedTypeMap_2D_proxy extractedValue_type = extractPtr_1141->mAssociatedValue0 ;
      const GALGAS_bigint extractedValue_address = extractPtr_1141->mAssociatedValue4 ;
      const GALGAS_uint extractedValue_arraySize = extractPtr_1141->mAssociatedValue6 ;
      const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, extractedValue_arraySize.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_1) {
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("register array requires subscripting"), fixItArray2  COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 21)) ;
      }
      {
      extensionSetter_appendStoreVolatileRegister (ioObject, extractedValue_type, extractedValue_address, constinArgument_inValue, inCompiler COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 23)) ;
      }
    }
    break ;
  case GALGAS_objectIR::kEnum_property:
    {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (extensionGetter_location (constinArgument_inTargetReference, inCompiler COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 26)), GALGAS_string ("<<@instructionListIR llvmGlobalObjectValue property>>"), fixItArray3  COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 26)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmTemporaryValue:
    {
      const cEnumAssociatedValues_objectIR_llvmTemporaryValue * extractPtr_1430 = (const cEnumAssociatedValues_objectIR_llvmTemporaryValue *) (constinArgument_inTargetReference.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_llvmName = extractPtr_1430->mAssociatedValue1 ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (extractedValue_llvmName.getter_location (SOURCE_FILE ("intermediate-load-store.galgas", 29)), GALGAS_string ("<<@instructionListIR llvmGlobalObjectValue llvmTemporaryValue>>"), fixItArray4  COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 29)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_literalInteger:
    {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (extensionGetter_location (constinArgument_inTargetReference, inCompiler COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 31)), GALGAS_string ("<<@instructionListIR llvmGlobalObjectValue literalInteger>>"), fixItArray5  COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 31)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmStructureConstant:
    {
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (extensionGetter_location (constinArgument_inTargetReference, inCompiler COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 33)), GALGAS_string ("<<@instructionListIR llvmGlobalObjectValue llvmStructureConstant>>"), fixItArray6  COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 33)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_literalString:
    {
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (extensionGetter_location (constinArgument_inTargetReference, inCompiler COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 35)), GALGAS_string ("<<@instructionListIR llvmGlobalObjectValue literalString>>"), fixItArray7  COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 35)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_zero:
    {
      TC_Array <C_FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (extensionGetter_location (constinArgument_inTargetReference, inCompiler COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 37)), GALGAS_string ("<<@instructionListIR llvmGlobalObjectValue zero>>"), fixItArray8  COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 37)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_possibleFunction:
    {
      TC_Array <C_FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (extensionGetter_location (constinArgument_inTargetReference, inCompiler COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 39)), GALGAS_string ("<<@instructionListIR llvmGlobalObjectValue possibleFunction>>"), fixItArray9  COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 39)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_null:
    {
      TC_Array <C_FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (extensionGetter_location (constinArgument_inTargetReference, inCompiler COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 41)), GALGAS_string ("<<@instructionListIR llvmGlobalObjectValue null>>"), fixItArray10  COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 41)) ;
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
      TC_Array <C_FixItDescription> fixItArray0 ;
      inCompiler->emitSemanticError (GALGAS_location::constructor_nowhere (SOURCE_FILE ("intermediate-load-store.galgas", 55)), GALGAS_string ("<<@instructionListIR appendLoadFromReference null>>"), fixItArray0  COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 55)) ;
      outArgument_outResultingValue.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_objectIR::kEnum_possibleFunction:
    {
      const cEnumAssociatedValues_objectIR_possibleFunction * extractPtr_2799 = (const cEnumAssociatedValues_objectIR_possibleFunction *) (constinArgument_inSource.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_functionName = extractPtr_2799->mAssociatedValue1 ;
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (extractedValue_functionName.getter_location (SOURCE_FILE ("intermediate-load-store.galgas", 57)), GALGAS_string ("<<@instructionListIR appendLoadFromReference possibleFunction>>"), fixItArray1  COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 57)) ;
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
      const cEnumAssociatedValues_objectIR_globalVariableReference * extractPtr_3122 = (const cEnumAssociatedValues_objectIR_globalVariableReference *) (constinArgument_inSource.unsafePointer ()) ;
      const GALGAS_unifiedTypeMap_2D_proxy extractedValue_type = extractPtr_3122->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_name = extractPtr_3122->mAssociatedValue1 ;
      {
      routine_getNewTempVariable (extractedValue_type, extractedValue_name.getter_location (SOURCE_FILE ("intermediate-load-store.galgas", 62)), ioArgument_ioTemporaries, outArgument_outResultingValue, inCompiler  COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 62)) ;
      }
      {
      extensionSetter_appendLoadGlobalVariable (ioObject, outArgument_outResultingValue, extractedValue_name.getter_string (SOURCE_FILE ("intermediate-load-store.galgas", 65)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 63)) ;
      }
    }
    break ;
  case GALGAS_objectIR::kEnum_localVariableReference:
    {
      const cEnumAssociatedValues_objectIR_localVariableReference * extractPtr_3352 = (const cEnumAssociatedValues_objectIR_localVariableReference *) (constinArgument_inSource.unsafePointer ()) ;
      const GALGAS_unifiedTypeMap_2D_proxy extractedValue_type = extractPtr_3352->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_name = extractPtr_3352->mAssociatedValue1 ;
      {
      routine_getNewTempVariable (extractedValue_type, extractedValue_name.getter_location (SOURCE_FILE ("intermediate-load-store.galgas", 69)), ioArgument_ioTemporaries, outArgument_outResultingValue, inCompiler  COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 69)) ;
      }
      {
      extensionSetter_appendLoadLocalVariable (ioObject, outArgument_outResultingValue, extractedValue_name.getter_string (SOURCE_FILE ("intermediate-load-store.galgas", 72)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 70)) ;
      }
    }
    break ;
  case GALGAS_objectIR::kEnum_temporaryReference:
    {
      const cEnumAssociatedValues_objectIR_temporaryReference * extractPtr_3613 = (const cEnumAssociatedValues_objectIR_temporaryReference *) (constinArgument_inSource.unsafePointer ()) ;
      const GALGAS_unifiedTypeMap_2D_proxy extractedValue_type = extractPtr_3613->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_llvmName = extractPtr_3613->mAssociatedValue1 ;
      const GALGAS_bool extractedValue_volatile = extractPtr_3613->mAssociatedValue3 ;
      {
      routine_getNewTempVariable (extractedValue_type, extractedValue_llvmName.getter_location (SOURCE_FILE ("intermediate-load-store.galgas", 76)), ioArgument_ioTemporaries, outArgument_outResultingValue, inCompiler  COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 76)) ;
      }
      {
      extensionSetter_appendLoadFromTemporaryReference (ioObject, outArgument_outResultingValue, extractedValue_llvmName.getter_string (SOURCE_FILE ("intermediate-load-store.galgas", 79)), extractedValue_volatile, inCompiler COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 77)) ;
      }
    }
    break ;
  case GALGAS_objectIR::kEnum_registerReference:
    {
      const cEnumAssociatedValues_objectIR_registerReference * extractPtr_3993 = (const cEnumAssociatedValues_objectIR_registerReference *) (constinArgument_inSource.unsafePointer ()) ;
      const GALGAS_unifiedTypeMap_2D_proxy extractedValue_type = extractPtr_3993->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_registerName = extractPtr_3993->mAssociatedValue1 ;
      const GALGAS_bigint extractedValue_address = extractPtr_3993->mAssociatedValue4 ;
      const GALGAS_uint extractedValue_arraySize = extractPtr_3993->mAssociatedValue6 ;
      const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, extractedValue_arraySize.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("register array requires subscripting"), fixItArray3  COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 84)) ;
        outArgument_outResultingValue.drop () ; // Release error dropped variable
      }else if (kBoolFalse == test_2) {
        {
        routine_getNewTempVariable (extractedValue_type, extractedValue_registerName.getter_location (SOURCE_FILE ("intermediate-load-store.galgas", 86)), ioArgument_ioTemporaries, outArgument_outResultingValue, inCompiler  COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 86)) ;
        }
        {
        extensionSetter_appendLoadVolatileRegister (ioObject, outArgument_outResultingValue, extractedValue_address, inCompiler COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 87)) ;
        }
      }
    }
    break ;
  case GALGAS_objectIR::kEnum_property:
    {
      const cEnumAssociatedValues_objectIR_property * extractPtr_4245 = (const cEnumAssociatedValues_objectIR_property *) (constinArgument_inSource.unsafePointer ()) ;
      const GALGAS_unifiedTypeMap_2D_proxy extractedValue_type = extractPtr_4245->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_plmName = extractPtr_4245->mAssociatedValue1 ;
      const GALGAS_uint extractedValue_index = extractPtr_4245->mAssociatedValue2 ;
      {
      routine_getNewTempVariable (extractedValue_type, extractedValue_plmName.getter_location (SOURCE_FILE ("intermediate-load-store.galgas", 94)), ioArgument_ioTemporaries, outArgument_outResultingValue, inCompiler  COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 94)) ;
      }
      {
      extensionSetter_appendGetPropertyReference (ioObject, outArgument_outResultingValue, constinArgument_inSource, extractedValue_plmName.getter_string (SOURCE_FILE ("intermediate-load-store.galgas", 98)), extractedValue_index.getter_string (SOURCE_FILE ("intermediate-load-store.galgas", 99)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 95)) ;
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
  ioObject.addAssign_operation (GALGAS_getPropertyReferenceIR::constructor_new (constinArgument_inTarget, constinArgument_inSource, constinArgument_inPLMname, constinArgument_inPropertyIndex  COMMA_SOURCE_FILE ("intermediate-get-property-reference.galgas", 8))  COMMA_SOURCE_FILE ("intermediate-get-property-reference.galgas", 8)) ;
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
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (GALGAS_location::constructor_nowhere (SOURCE_FILE ("intermediate-get-element-ptr-from-self.galgas", 10)), GALGAS_string ("<<INTERNAL ERROR>>"), fixItArray1  COMMA_SOURCE_FILE ("intermediate-get-element-ptr-from-self.galgas", 10)) ;
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
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_sourceLocationIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_sourceLocationIR * p = (const cPtr_sourceLocationIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_sourceLocationIR) ;
  if (kOperandEqual == result) {
    result = mAttribute_mSourceLocation.objectCompare (p->mAttribute_mSourceLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_sourceLocationIR::objectCompare (const GALGAS_sourceLocationIR & inOperand) const {
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

GALGAS_sourceLocationIR::GALGAS_sourceLocationIR (void) :
GALGAS_abstractInstructionIR () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sourceLocationIR GALGAS_sourceLocationIR::constructor_default (LOCATION_ARGS) {
  return GALGAS_sourceLocationIR::constructor_new (GALGAS_location::constructor_nowhere (HERE)
                                                   COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sourceLocationIR::GALGAS_sourceLocationIR (const cPtr_sourceLocationIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_sourceLocationIR) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sourceLocationIR GALGAS_sourceLocationIR::constructor_new (const GALGAS_location & inAttribute_mSourceLocation
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_sourceLocationIR result ;
  if (inAttribute_mSourceLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_sourceLocationIR (inAttribute_mSourceLocation COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_sourceLocationIR::getter_mSourceLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_sourceLocationIR * p = (const cPtr_sourceLocationIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sourceLocationIR) ;
    result = p->mAttribute_mSourceLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_sourceLocationIR::getter_mSourceLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSourceLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                      Pointer class for @sourceLocationIR class                                      *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_sourceLocationIR::cPtr_sourceLocationIR (const GALGAS_location & in_mSourceLocation
                                              COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mAttribute_mSourceLocation (in_mSourceLocation) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_sourceLocationIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sourceLocationIR ;
}

void cPtr_sourceLocationIR::description (C_String & ioString,
                                         const int32_t inIndentation) const {
  ioString << "[@sourceLocationIR:" ;
  mAttribute_mSourceLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_sourceLocationIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_sourceLocationIR (mAttribute_mSourceLocation COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @sourceLocationIR type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_sourceLocationIR ("sourceLocationIR",
                                         & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_sourceLocationIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sourceLocationIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_sourceLocationIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sourceLocationIR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sourceLocationIR GALGAS_sourceLocationIR::extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_sourceLocationIR result ;
  const GALGAS_sourceLocationIR * p = (const GALGAS_sourceLocationIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_sourceLocationIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sourceLocationIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

