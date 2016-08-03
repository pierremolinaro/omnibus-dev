#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-8.h"


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
      cEnumerator_stringlist enumerator_1374 (var_embeddedFiles_1283, kEnumeration_up) ;
      while (enumerator_1374.hasCurrentObject ()) {
        const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_1374.current_mValue (HERE).getter_pathExtension (SOURCE_FILE ("target-generation.galgas", 29)).objectCompare (GALGAS_string ("plm-target"))).boolEnum () ;
        if (kBoolTrue == test_1) {
          inCompiler->printMessage (GALGAS_string ("  ").add_operation (enumerator_1374.current_mValue (HERE).getter_lastPathComponent (SOURCE_FILE ("target-generation.galgas", 30)).getter_stringByDeletingPathExtension (SOURCE_FILE ("target-generation.galgas", 30)), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 30)).add_operation (GALGAS_char (TO_UNICODE (10)).getter_string (SOURCE_FILE ("target-generation.galgas", 30)), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 30))  COMMA_SOURCE_FILE ("target-generation.galgas", 30)) ;
        }
        enumerator_1374.gotoNextObject () ;
      }
    }
    GALGAS_string var_path_1541 = GALGAS_string (gOption_plm_5F_options_extractEmbeddedTargets.getter_value ()) ;
    const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_path_1541.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_stringlist var_embeddedFiles_1636 = var_fw_1172.getter_allTextFilePathes (SOURCE_FILE ("target-generation.galgas", 36)) ;
      cEnumerator_stringlist enumerator_1693 (var_embeddedFiles_1636, kEnumeration_up) ;
      while (enumerator_1693.hasCurrentObject ()) {
        GALGAS_string var_filePath_1712 = var_path_1541.add_operation (enumerator_1693.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 38)) ;
        inCompiler->printMessage (GALGAS_string ("  ").add_operation (var_filePath_1712, inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 39)).add_operation (GALGAS_char (TO_UNICODE (10)).getter_string (SOURCE_FILE ("target-generation.galgas", 39)), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 39))  COMMA_SOURCE_FILE ("target-generation.galgas", 39)) ;
        GALGAS_string var_dir_1778 = var_filePath_1712.getter_stringByDeletingLastPathComponent (SOURCE_FILE ("target-generation.galgas", 40)) ;
        var_dir_1778.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 41)) ;
        GALGAS_string var_text_1870 = var_fw_1172.getter_textFileContentsAtPath (enumerator_1693.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 42)) ;
        GALGAS_bool joker_1962 ; // Joker input parameter
        var_text_1870.method_writeToFileWhenDifferentContents (var_filePath_1712, joker_1962, inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 43)) ;
        enumerator_1693.gotoNextObject () ;
      }
    }
  }
  {
    GALGAS_filewrapper var_fw_602 = GALGAS_filewrapper (gWrapperDirectory_0_embeddedSampleCode) ;
    const enumGalgasBool test_3 = GALGAS_bool (gOption_plm_5F_options_listEmbeddedSampleFiles.getter_value ()).boolEnum () ;
    if (kBoolTrue == test_3) {
      GALGAS_stringlist var_files_712 = var_fw_602.getter_allTextFilePathes (SOURCE_FILE ("embedded-sample-code.galgas", 16)) ;
      inCompiler->printMessage (GALGAS_string ("Embedded sample code:\n")  COMMA_SOURCE_FILE ("embedded-sample-code.galgas", 17)) ;
      cEnumerator_stringlist enumerator_799 (var_files_712, kEnumeration_up) ;
      while (enumerator_799.hasCurrentObject ()) {
        inCompiler->printMessage (GALGAS_string ("  ").add_operation (enumerator_799.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("embedded-sample-code.galgas", 19)).add_operation (GALGAS_char (TO_UNICODE (10)).getter_string (SOURCE_FILE ("embedded-sample-code.galgas", 19)), inCompiler COMMA_SOURCE_FILE ("embedded-sample-code.galgas", 19))  COMMA_SOURCE_FILE ("embedded-sample-code.galgas", 19)) ;
        enumerator_799.gotoNextObject () ;
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
  cEnumerator_controlRegisterDeclarationListAST enumerator_6825 (temp_0, kEnumeration_up) ;
  while (enumerator_6825.hasCurrentObject ()) {
    GALGAS_lstring var_typeName_6842 = GALGAS_lstring::constructor_new (GALGAS_string ("$").add_operation (enumerator_6825.current_mRegisterTypeName (HERE).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 187)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 187)), enumerator_6825.current_mRegisterTypeName (HERE).mAttribute_location  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 187)) ;
    {
    ioArgument_ioGraph.setter_noteNode (var_typeName_6842 COMMA_SOURCE_FILE ("declaration-control-register.galgas", 188)) ;
    }
    enumerator_6825.gotoNextObject () ;
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
  cEnumerator_globalVarDeclarationList enumerator_6090 (temp_0, kEnumeration_up) ;
  while (enumerator_6090.hasCurrentObject ()) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, enumerator_6090.current_mTypeName (HERE).mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_lstring var_typeName_6157 = GALGAS_lstring::constructor_new (GALGAS_string ("$").add_operation (enumerator_6090.current_mTypeName (HERE).getter_string (SOURCE_FILE ("declaration-global-variable.galgas", 187)), inCompiler COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 187)), enumerator_6090.current_mTypeName (HERE).mAttribute_location  COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 187)) ;
      {
      ioArgument_ioGraph.setter_noteNode (var_typeName_6157 COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 188)) ;
      }
    }
    enumerator_6090.gotoNextObject () ;
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
  cEnumerator_taskList enumerator_4437 (temp_0, kEnumeration_up) ;
  while (enumerator_4437.hasCurrentObject ()) {
    cEnumerator_taskVarListAST enumerator_4469 (enumerator_4437.current_mVarList (HERE), kEnumeration_up) ;
    while (enumerator_4469.hasCurrentObject ()) {
      callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) enumerator_4469.current (HERE).mAttribute_mVarInitExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 132)) ;
      const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, enumerator_4469.current (HERE).mAttribute_mVarTypeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_1) {
        GALGAS_lstring var_typeName_4622 = GALGAS_lstring::constructor_new (GALGAS_string ("$").add_operation (enumerator_4469.current (HERE).mAttribute_mVarTypeName.getter_string (SOURCE_FILE ("declaration-task.galgas", 134)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 134)), enumerator_4469.current (HERE).mAttribute_mVarTypeName.mAttribute_location  COMMA_SOURCE_FILE ("declaration-task.galgas", 134)) ;
        {
        ioArgument_ioGraph.setter_noteNode (var_typeName_4622 COMMA_SOURCE_FILE ("declaration-task.galgas", 135)) ;
        }
      }
      enumerator_4469.gotoNextObject () ;
    }
    cEnumerator_functionDeclarationListAST enumerator_4795 (enumerator_4437.current_mTaskProcList (HERE), kEnumeration_up) ;
    while (enumerator_4795.hasCurrentObject ()) {
      extensionMethod_noteInstructionListTypesInPrecedenceGraph (enumerator_4795.current (HERE).mAttribute_mFunctionInstructionList, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 139)) ;
      enumerator_4795.gotoNextObject () ;
    }
    cEnumerator_syncInstructionBranchList enumerator_4947 (enumerator_4437.current_mGuardedCommandList (HERE), kEnumeration_up) ;
    while (enumerator_4947.hasCurrentObject ()) {
      extensionMethod_noteInstructionListTypesInPrecedenceGraph (enumerator_4947.current (HERE).mAttribute_mInstructionList, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 142)) ;
      enumerator_4947.gotoNextObject () ;
    }
    enumerator_4437.gotoNextObject () ;
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
  cEnumerator_taskList enumerator_6168 (temp_0, kEnumeration_up) ;
  while (enumerator_6168.hasCurrentObject ()) {
    GALGAS_propertyList var_propertyList_6221 = GALGAS_propertyList::constructor_emptyList (SOURCE_FILE ("declaration-task.galgas", 172)) ;
    GALGAS_propertyMap var_propertyMap_6255 = GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("declaration-task.galgas", 173)) ;
    GALGAS_operandIRList var_initialValueList_6296 = GALGAS_operandIRList::constructor_emptyList (SOURCE_FILE ("declaration-task.galgas", 174)) ;
    cEnumerator_taskVarListAST enumerator_6338 (enumerator_6168.current (HERE).mAttribute_mVarList, kEnumeration_up) ;
    while (enumerator_6338.hasCurrentObject ()) {
      extensionMethod_enterInContext (enumerator_6338.current (HERE), ioArgument_ioContext, ioArgument_ioGlobalLiteralStringMap, var_propertyList_6221, var_propertyMap_6255, var_initialValueList_6296, inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 176)) ;
      enumerator_6338.gotoNextObject () ;
    }
    {
    ioArgument_ioContext.mAttribute_mTypeMap.setter_insertType (enumerator_6168.current (HERE).mAttribute_mTaskName, GALGAS_string ("%").add_operation (GALGAS_string ("$").add_operation (enumerator_6168.current (HERE).mAttribute_mTaskName.getter_string (SOURCE_FILE ("declaration-task.galgas", 187)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 187)).getter_assemblerRepresentation (SOURCE_FILE ("declaration-task.galgas", 187)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 187)), GALGAS_typeKind::constructor_structure (var_propertyMap_6255, var_propertyList_6221  COMMA_SOURCE_FILE ("declaration-task.galgas", 188)), GALGAS_classConstantMap::constructor_emptyMap (SOURCE_FILE ("declaration-task.galgas", 189)), GALGAS_bool (false), GALGAS_bool (false), GALGAS_bool (false), GALGAS_bool (false), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-task.galgas", 194)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 185)) ;
    }
    GALGAS_unifiedTypeMap_2D_proxy var_taskType_7002 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.mAttribute_mTypeMap, enumerator_6168.current (HERE).mAttribute_mTaskName, inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 196)) ;
    ioArgument_ioContext.mAttribute_mGlobalTaskVariableList.addAssign_operation (enumerator_6168.current (HERE).mAttribute_mTaskName.mAttribute_string, enumerator_6168.current (HERE).mAttribute_mTaskName.mAttribute_string, GALGAS_objectIR::constructor_llvmStructureConstant (var_taskType_7002, var_initialValueList_6296  COMMA_SOURCE_FILE ("declaration-task.galgas", 200))  COMMA_SOURCE_FILE ("declaration-task.galgas", 197)) ;
    extensionMethod_enterFunctionInContext (enumerator_6168.current (HERE).mAttribute_mTaskProcList, GALGAS_string ("$").add_operation (enumerator_6168.current (HERE).mAttribute_mTaskName.getter_string (SOURCE_FILE ("declaration-task.galgas", 202)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 202)), ioArgument_ioContext, inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 202)) ;
    enumerator_6168.gotoNextObject () ;
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
  GALGAS_stringset var_prioritySet_10539 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("declaration-task.galgas", 287)) ;
  const GALGAS_taskList temp_0 = inObject ;
  cEnumerator_taskList enumerator_10566 (temp_0, kEnumeration_up) ;
  while (enumerator_10566.hasCurrentObject ()) {
    extensionMethod_semanticAnalysis (enumerator_10566.current (HERE), constinArgument_inContext, ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 289)) ;
    GALGAS_string var_priorityString_10729 = enumerator_10566.current (HERE).mAttribute_mPriority.mAttribute_bigint.getter_string (SOURCE_FILE ("declaration-task.galgas", 294)) ;
    const enumGalgasBool test_1 = var_prioritySet_10539.getter_hasKey (var_priorityString_10729 COMMA_SOURCE_FILE ("declaration-task.galgas", 295)).boolEnum () ;
    if (kBoolTrue == test_1) {
      inCompiler->emitSemanticError (enumerator_10566.current (HERE).mAttribute_mPriority.getter_location (SOURCE_FILE ("declaration-task.galgas", 296)), GALGAS_string ("duplicate priority")  COMMA_SOURCE_FILE ("declaration-task.galgas", 296)) ;
    }
    var_prioritySet_10539.addAssign_operation (var_priorityString_10729  COMMA_SOURCE_FILE ("declaration-task.galgas", 298)) ;
    enumerator_10566.gotoNextObject () ;
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
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("Task self terminate service"), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 434)), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 434)) ;
  GALGAS_string var_selfTerminateImplementationName_16054 = function_llvmNameForServiceImplementation (function_llvmNameForTaskSelfTerminateService (inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 435)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 435)) ;
  GALGAS_string var_selfTerminateCallName_16159 = function_llvmNameForServiceCall (function_llvmNameForTaskSelfTerminateService (inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 436)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 436)) ;
  ioArgument_ioServiceList.addAssign_operation (var_selfTerminateCallName_16159, var_selfTerminateImplementationName_16054  COMMA_SOURCE_FILE ("declaration-task.galgas", 437)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("declare void @").add_operation (var_selfTerminateCallName_16159, inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 438)).add_operation (GALGAS_string (" () nounwind noreturn\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 438)), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 438)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("Task variables"), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 440)), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 440)) ;
  cEnumerator_globalTaskVariableList enumerator_16563 (constinArgument_inGenerationContext.mAttribute_mGlobalTaskVariableList, kEnumeration_up) ;
  while (enumerator_16563.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("@").add_operation (function_llvmNameForTaskGlobalVar (enumerator_16563.current_mTaskName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 442)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 442)), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 442)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" = internal global %"), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 443)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("$").add_operation (enumerator_16563.current_mTaskTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 444)).getter_assemblerRepresentation (SOURCE_FILE ("declaration-task.galgas", 444)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 444)), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 444)) ;
    GALGAS_string var_initialString_16756 = extensionGetter_llvmName (enumerator_16563.current_mInitialValue (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 445)) ;
    const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_initialString_16756.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("zeroinitializer"), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 447)) ;
    }else if (kBoolFalse == test_0) {
      ioArgument_ioLLVMcode.plusAssign_operation(var_initialString_16756, inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 449)) ;
    }
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 451)) ;
    enumerator_16563.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 453)) ;
  GALGAS_taskSortedListIR var_orderedTaskList_17019 = GALGAS_taskSortedListIR::constructor_emptySortedList (SOURCE_FILE ("declaration-task.galgas", 455)) ;
  const GALGAS_taskMapIR temp_1 = inObject ;
  cEnumerator_taskMapIR enumerator_17046 (temp_1, kEnumeration_up) ;
  while (enumerator_17046.hasCurrentObject ()) {
    var_orderedTaskList_17019.addAssign_operation (enumerator_17046.current (HERE).mAttribute_lkey.mAttribute_string, enumerator_17046.current (HERE).mAttribute_mPriority, enumerator_17046.current (HERE).mAttribute_mStackSize, enumerator_17046.current (HERE).mAttribute_mAllocaList, enumerator_17046.current (HERE).mAttribute_mInitInstructionListIR  COMMA_SOURCE_FILE ("declaration-task.galgas", 457)) ;
    enumerator_17046.gotoNextObject () ;
  }
  cEnumerator_taskSortedListIR enumerator_17249 (var_orderedTaskList_17019, kEnumeration_up) ;
  while (enumerator_17249.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("Task ").add_operation (enumerator_17249.current (HERE).mAttribute_mTaskName, inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 461)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 461)), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 461)) ;
    GALGAS_string var_assemblerTaskName_17338 = GALGAS_string ("$").add_operation (enumerator_17249.current (HERE).mAttribute_mTaskName, inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 462)).getter_assemblerRepresentation (SOURCE_FILE ("declaration-task.galgas", 462)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(function_stackNameForTask (enumerator_17249.current (HERE).mAttribute_mTaskName, inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 463)).add_operation (GALGAS_string (" = global ["), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 463)).add_operation (enumerator_17249.current (HERE).mAttribute_mStackSize.divide_operation (GALGAS_uint ((uint32_t) 4U).getter_bigint (SOURCE_FILE ("declaration-task.galgas", 463)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 463)).getter_string (SOURCE_FILE ("declaration-task.galgas", 463)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 463)).add_operation (GALGAS_string (" x i32] zeroinitializer\n"), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 463)), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 463)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 464)) ;
    GALGAS_string var_effectiveParameter_17560 = GALGAS_string ("(%").add_operation (var_assemblerTaskName_17338, inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 465)).add_operation (GALGAS_string (" * @"), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 465)).add_operation (function_llvmNameForTaskGlobalVar (enumerator_17249.current (HERE).mAttribute_mTaskName, inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 465)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 465)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 465)) ;
    GALGAS_string var_formalArgument_17670 = GALGAS_string ("(%").add_operation (var_assemblerTaskName_17338, inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 466)).add_operation (GALGAS_string (" * %self)"), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 466)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(function_llvmSeparatorLine (inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 467)), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 467)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 468)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal void ").add_operation (function_initNameForTaskType (enumerator_17249.current (HERE).mAttribute_mTaskName, inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 469)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 469)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 469)).add_operation (var_formalArgument_17670, inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 469)).add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 469)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 469)).add_operation (GALGAS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 469)), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 469)) ;
    cEnumerator_allocaList enumerator_17960 (enumerator_17249.current (HERE).mAttribute_mAllocaList, kEnumeration_up) ;
    while (enumerator_17960.hasCurrentObject ()) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (function_llvmNameForLocalVariable (enumerator_17960.current_mVarName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 471)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 471)).add_operation (GALGAS_string (" = alloca "), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 471)).add_operation (enumerator_17960.current_mType (HERE).getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 471)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 471)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 471)), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 471)) ;
      enumerator_17960.gotoNextObject () ;
    }
    extensionMethod_instructionListLLVMCode (enumerator_17249.current (HERE).mAttribute_mInitInstructionListIR, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 473)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 474)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
      "\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 475)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(function_llvmSeparatorLine (inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 476)), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 476)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 477)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal void ").add_operation (function_mainRoutineNameForTask (enumerator_17249.current (HERE).mAttribute_mTaskName, inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 478)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 478)).add_operation (GALGAS_string (" ()"), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 478)).add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 478)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 478)).add_operation (GALGAS_string ("noreturn {\n"), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 478)), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 478)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void ").add_operation (function_initNameForTaskType (enumerator_17249.current (HERE).mAttribute_mTaskName, inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 479)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 479)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 479)).add_operation (var_effectiveParameter_17560, inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 479)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 479)), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 479)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @").add_operation (function_llvmNameForFunction (GALGAS_string ("$").add_operation (enumerator_17249.current (HERE).mAttribute_mTaskName, inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 480)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 480)).add_operation (function_llvmNameForTaskLoopFunction (inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 480)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 480)).add_operation (GALGAS_string ("()"), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 480)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 480)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 480)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 480)).add_operation (var_effectiveParameter_17560, inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 480)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 480)), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 480)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @").add_operation (var_selfTerminateCallName_16159, inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 481)).add_operation (GALGAS_string (" ()\n"), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 481)), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 481)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  unreachable\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 482)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
      "\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 483)) ;
    enumerator_17249.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("Start tasks"), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 486)), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 486)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal void @start.tasks ()").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 487)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 487)).add_operation (GALGAS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 487)), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 487)) ;
  cEnumerator_taskSortedListIR enumerator_19039 (var_orderedTaskList_17019, kEnumeration_up) ;
  GALGAS_uint index_19017 ((uint32_t) 0) ;
  while (enumerator_19039.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (function_stackAddressForTask (enumerator_19039.current (HERE).mAttribute_mTaskName, inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 489)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 489)), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 489)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" = getelementptr inbounds [").add_operation (enumerator_19039.current (HERE).mAttribute_mStackSize.divide_operation (GALGAS_uint ((uint32_t) 4U).getter_bigint (SOURCE_FILE ("declaration-task.galgas", 490)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 490)).getter_string (SOURCE_FILE ("declaration-task.galgas", 490)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 490)).add_operation (GALGAS_string (" x i32], "), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 490)), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 490)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("[").add_operation (enumerator_19039.current (HERE).mAttribute_mStackSize.divide_operation (GALGAS_uint ((uint32_t) 4U).getter_bigint (SOURCE_FILE ("declaration-task.galgas", 491)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 491)).getter_string (SOURCE_FILE ("declaration-task.galgas", 491)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 491)).add_operation (GALGAS_string (" x i32]* "), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 491)).add_operation (function_stackNameForTask (enumerator_19039.current (HERE).mAttribute_mTaskName, inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 491)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 491)), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 491)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", i32 0, i32 0\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 492)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @kernel_create_task ("), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 493)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("i32 ").add_operation (index_19017.getter_string (SOURCE_FILE ("declaration-task.galgas", 494)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 494)), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 494)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", i32* ").add_operation (function_stackAddressForTask (enumerator_19039.current (HERE).mAttribute_mTaskName, inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 495)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 495)), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 495)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", i32 ").add_operation (enumerator_19039.current (HERE).mAttribute_mStackSize.getter_string (SOURCE_FILE ("declaration-task.galgas", 496)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 496)), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 496)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", void ()* ").add_operation (function_mainRoutineNameForTask (enumerator_19039.current (HERE).mAttribute_mTaskName, inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 497)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 497)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 497)), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 497)) ;
    enumerator_19039.gotoNextObject () ;
    index_19017.increment_operation (inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 488)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 499)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 500)) ;
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
  cEnumerator_panicClauseListAST enumerator_2114 (temp_0, kEnumeration_up) ;
  while (enumerator_2114.hasCurrentObject ()) {
    extensionMethod_noteInstructionListTypesInPrecedenceGraph (enumerator_2114.current_mPanicInstructionList (HERE), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("panic.galgas", 51)) ;
    enumerator_2114.gotoNextObject () ;
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
  cEnumerator_bootList enumerator_2023 (temp_0, kEnumeration_up) ;
  while (enumerator_2023.hasCurrentObject ()) {
    extensionMethod_noteInstructionListTypesInPrecedenceGraph (enumerator_2023.current_mInstructionList (HERE), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-boot.galgas", 49)) ;
    enumerator_2023.gotoNextObject () ;
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
  cEnumerator_initList enumerator_2319 (temp_0, kEnumeration_up) ;
  while (enumerator_2319.hasCurrentObject ()) {
    extensionMethod_noteInstructionListTypesInPrecedenceGraph (enumerator_2319.current_mInstructionList (HERE), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 58)) ;
    enumerator_2319.gotoNextObject () ;
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
  cEnumerator_initListIR enumerator_8167 (temp_0, kEnumeration_up) ;
  while (enumerator_8167.hasCurrentObject ()) {
    GALGAS_bool var_generate_8186 ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_8167.current (HERE).mAttribute_mInitRequiredByProcList.getter_length (SOURCE_FILE ("declaration-init.galgas", 210)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_1) {
      var_generate_8186 = GALGAS_bool (true) ;
    }else if (kBoolFalse == test_1) {
      var_generate_8186 = GALGAS_bool (false) ;
      cEnumerator_lstringlist enumerator_8365 (enumerator_8167.current (HERE).mAttribute_mInitRequiredByProcList, kEnumeration_up) ;
      bool bool_2 = var_generate_8186.operator_not (SOURCE_FILE ("declaration-init.galgas", 214)).isValidAndTrue () ;
      if (enumerator_8365.hasCurrentObject () && bool_2) {
        while (enumerator_8365.hasCurrentObject () && bool_2) {
          var_generate_8186 = constinArgument_inProcedureMapIR.getter_hasKey (enumerator_8365.current_mValue (HERE).mAttribute_string COMMA_SOURCE_FILE ("declaration-init.galgas", 215)) ;
          enumerator_8365.gotoNextObject () ;
          if (enumerator_8365.hasCurrentObject ()) {
            bool_2 = var_generate_8186.operator_not (SOURCE_FILE ("declaration-init.galgas", 214)).isValidAndTrue () ;
          }
        }
      }
    }
    const enumGalgasBool test_3 = var_generate_8186.boolEnum () ;
    if (kBoolTrue == test_3) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal void @init.").add_operation (enumerator_8167.current (HERE).mAttribute_mPriority.getter_string (SOURCE_FILE ("declaration-init.galgas", 219)), inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 219)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 219)), inCompiler  COMMA_SOURCE_FILE ("declaration-init.galgas", 219)) ;
      const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, enumerator_8167.current (HERE).mAttribute_mSelfType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-init.galgas", 220)))).boolEnum () ;
      if (kBoolTrue == test_4) {
        ioArgument_ioLLVMcode.plusAssign_operation(enumerator_8167.current (HERE).mAttribute_mSelfType.getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 221)).add_operation (GALGAS_string (" * %self"), inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 221)), inCompiler  COMMA_SOURCE_FILE ("declaration-init.galgas", 221)) ;
      }
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 223)), inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 223)).add_operation (GALGAS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 223)), inCompiler  COMMA_SOURCE_FILE ("declaration-init.galgas", 223)) ;
      cEnumerator_allocaList enumerator_8787 (enumerator_8167.current (HERE).mAttribute_mAllocaList, kEnumeration_up) ;
      while (enumerator_8787.hasCurrentObject ()) {
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (function_llvmNameForLocalVariable (enumerator_8787.current_mVarName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 225)), inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 225)).add_operation (GALGAS_string (" = alloca "), inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 225)).add_operation (enumerator_8787.current_mType (HERE).getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 225)), inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 225)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 225)), inCompiler  COMMA_SOURCE_FILE ("declaration-init.galgas", 225)) ;
        enumerator_8787.gotoNextObject () ;
      }
      extensionMethod_instructionListLLVMCode (enumerator_8167.current (HERE).mAttribute_mInstructionListIR, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 227)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-init.galgas", 228)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
        "\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-init.galgas", 229)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(function_llvmSeparatorLine (inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 230)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 230)), inCompiler  COMMA_SOURCE_FILE ("declaration-init.galgas", 230)) ;
    }
    enumerator_8167.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal void @init ()").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 233)), inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 233)).add_operation (GALGAS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 233)), inCompiler  COMMA_SOURCE_FILE ("declaration-init.galgas", 233)) ;
  const GALGAS_initListIR temp_5 = inObject ;
  cEnumerator_initListIR enumerator_9247 (temp_5, kEnumeration_up) ;
  while (enumerator_9247.hasCurrentObject ()) {
    GALGAS_bool var_generate_9266 ;
    const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, enumerator_9247.current (HERE).mAttribute_mInitRequiredByProcList.getter_length (SOURCE_FILE ("declaration-init.galgas", 236)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_6) {
      var_generate_9266 = GALGAS_bool (true) ;
    }else if (kBoolFalse == test_6) {
      var_generate_9266 = GALGAS_bool (false) ;
      cEnumerator_lstringlist enumerator_9445 (enumerator_9247.current (HERE).mAttribute_mInitRequiredByProcList, kEnumeration_up) ;
      bool bool_7 = var_generate_9266.operator_not (SOURCE_FILE ("declaration-init.galgas", 240)).isValidAndTrue () ;
      if (enumerator_9445.hasCurrentObject () && bool_7) {
        while (enumerator_9445.hasCurrentObject () && bool_7) {
          var_generate_9266 = constinArgument_inProcedureMapIR.getter_hasKey (enumerator_9445.current_mValue (HERE).mAttribute_string COMMA_SOURCE_FILE ("declaration-init.galgas", 241)) ;
          enumerator_9445.gotoNextObject () ;
          if (enumerator_9445.hasCurrentObject ()) {
            bool_7 = var_generate_9266.operator_not (SOURCE_FILE ("declaration-init.galgas", 240)).isValidAndTrue () ;
          }
        }
      }
    }
    const enumGalgasBool test_8 = var_generate_9266.boolEnum () ;
    if (kBoolTrue == test_8) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @init.").add_operation (enumerator_9247.current (HERE).mAttribute_mPriority.getter_string (SOURCE_FILE ("declaration-init.galgas", 245)), inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 245)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 245)), inCompiler  COMMA_SOURCE_FILE ("declaration-init.galgas", 245)) ;
      const enumGalgasBool test_9 = GALGAS_bool (kIsNotEqual, enumerator_9247.current (HERE).mAttribute_mSelfType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-init.galgas", 246)))).boolEnum () ;
      if (kBoolTrue == test_9) {
        ioArgument_ioLLVMcode.plusAssign_operation(enumerator_9247.current (HERE).mAttribute_mSelfType.getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 247)).add_operation (GALGAS_string (" * @"), inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 247)).add_operation (function_llvmNameForGlobalVariable (enumerator_9247.current (HERE).mAttribute_mGlobalVariable, inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 247)), inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 247)), inCompiler  COMMA_SOURCE_FILE ("declaration-init.galgas", 247)) ;
      }
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-init.galgas", 249)) ;
    }
    enumerator_9247.gotoNextObject () ;
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
  cEnumerator_functionDeclarationListAST enumerator_5962 (temp_0, kEnumeration_up) ;
  while (enumerator_5962.hasCurrentObject ()) {
    cEnumerator_procFormalArgumentList enumerator_6035 (enumerator_5962.current_mFunctionFormalArgumentList (HERE), kEnumeration_up) ;
    while (enumerator_6035.hasCurrentObject ()) {
      GALGAS_lstring var_typeName_6054 = GALGAS_lstring::constructor_new (GALGAS_string ("$").add_operation (enumerator_6035.current_mFormalArgumentTypeName (HERE).getter_string (SOURCE_FILE ("declaration-func.galgas", 178)), inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 178)), enumerator_6035.current_mFormalArgumentTypeName (HERE).mAttribute_location  COMMA_SOURCE_FILE ("declaration-func.galgas", 178)) ;
      {
      ioArgument_ioGraph.setter_noteNode (var_typeName_6054 COMMA_SOURCE_FILE ("declaration-func.galgas", 179)) ;
      }
      enumerator_6035.gotoNextObject () ;
    }
    extensionMethod_noteInstructionListTypesInPrecedenceGraph (enumerator_5962.current_mFunctionInstructionList (HERE), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 181)) ;
    enumerator_5962.gotoNextObject () ;
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
  cEnumerator_functionDeclarationListAST enumerator_6805 (temp_0, kEnumeration_up) ;
  while (enumerator_6805.hasCurrentObject ()) {
    GALGAS_lstring temp_1 ;
    const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, constinArgument_inSelfTypeName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_2) {
      temp_1 = enumerator_6805.current (HERE).mAttribute_mFunctionName ;
    }else if (kBoolFalse == test_2) {
      temp_1 = GALGAS_lstring::constructor_new (constinArgument_inSelfTypeName.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 198)).add_operation (enumerator_6805.current (HERE).mAttribute_mFunctionName.getter_string (SOURCE_FILE ("declaration-func.galgas", 198)), inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 198)), enumerator_6805.current (HERE).mAttribute_mFunctionName.mAttribute_location  COMMA_SOURCE_FILE ("declaration-func.galgas", 198)) ;
    }
    GALGAS_lstring var_routineMangledName_6849 = temp_1 ;
    var_routineMangledName_6849.mAttribute_string.plusAssign_operation(GALGAS_string ("("), inCompiler  COMMA_SOURCE_FILE ("declaration-func.galgas", 200)) ;
    GALGAS_procedureSignature var_signature_7101 = GALGAS_procedureSignature::constructor_emptyList (SOURCE_FILE ("declaration-func.galgas", 201)) ;
    cEnumerator_procFormalArgumentList enumerator_7220 (enumerator_6805.current (HERE).mAttribute_mFunctionFormalArgumentList, kEnumeration_up) ;
    while (enumerator_7220.hasCurrentObject ()) {
      GALGAS_unifiedTypeMap_2D_proxy var_typeProxy_7240 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.mAttribute_mTypeMap, enumerator_7220.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("declaration-func.galgas", 203)) ;
      var_signature_7101.addAssign_operation (enumerator_7220.current_mFormalArgumentPassingMode (HERE), enumerator_7220.current_mSelector (HERE).mAttribute_string, var_typeProxy_7240  COMMA_SOURCE_FILE ("declaration-func.galgas", 204)) ;
      var_routineMangledName_6849.mAttribute_string.plusAssign_operation(extensionGetter_formalPassingModeString (enumerator_7220.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 205)).add_operation (enumerator_7220.current_mSelector (HERE).getter_string (SOURCE_FILE ("declaration-func.galgas", 205)), inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 205)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 205)), inCompiler  COMMA_SOURCE_FILE ("declaration-func.galgas", 205)) ;
      enumerator_7220.gotoNextObject () ;
    }
    var_routineMangledName_6849.mAttribute_string.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("declaration-func.galgas", 207)) ;
    GALGAS_unifiedTypeMap_2D_proxy temp_3 ;
    const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, enumerator_6805.current (HERE).mAttribute_mFunctionReturnTypeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_4) {
      temp_3 = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-func.galgas", 210)) ;
    }else if (kBoolFalse == test_4) {
      temp_3 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.mAttribute_mTypeMap, enumerator_6805.current (HERE).mAttribute_mFunctionReturnTypeName, inCompiler  COMMA_SOURCE_FILE ("declaration-func.galgas", 212)) ;
    }
    GALGAS_unifiedTypeMap_2D_proxy var_returnType_7581 = temp_3 ;
    GALGAS_modeMap var_procedureModeMap_7829 = GALGAS_modeMap::constructor_emptyMap (SOURCE_FILE ("declaration-func.galgas", 215)) ;
    cEnumerator_lstringlist enumerator_7879 (enumerator_6805.current (HERE).mAttribute_mFunctionModeList, kEnumeration_up) ;
    while (enumerator_7879.hasCurrentObject ()) {
      {
      var_procedureModeMap_7829.setter_insertKey (enumerator_7879.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 217)) ;
      }
      enumerator_7879.gotoNextObject () ;
    }
    GALGAS_bool var_weakProcedure_7973 = GALGAS_bool (false) ;
    GALGAS_bool var_canMutateProperties_8009 = GALGAS_bool (false) ;
    GALGAS_bool var_canAccessProperties_8045 = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_8115 (enumerator_6805.current (HERE).mAttribute_mFunctionAttributeList, kEnumeration_up) ;
    bool bool_5 = var_weakProcedure_7973.operator_not (SOURCE_FILE ("declaration-func.galgas", 223)).isValidAndTrue () ;
    if (enumerator_8115.hasCurrentObject () && bool_5) {
      while (enumerator_8115.hasCurrentObject () && bool_5) {
        const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, enumerator_8115.current_mValue (HERE).mAttribute_string.objectCompare (function_weakAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 224)))).boolEnum () ;
        if (kBoolTrue == test_6) {
          var_weakProcedure_7973 = GALGAS_bool (true) ;
        }
        const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, enumerator_8115.current_mValue (HERE).mAttribute_string.objectCompare (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 227)))).boolEnum () ;
        if (kBoolTrue == test_7) {
          var_canMutateProperties_8009 = GALGAS_bool (true) ;
        }
        const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, enumerator_8115.current_mValue (HERE).mAttribute_string.objectCompare (function_userAccessAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 230)))).boolEnum () ;
        if (kBoolTrue == test_8) {
          var_canAccessProperties_8045 = GALGAS_bool (true) ;
          GALGAS_bool test_9 = var_canAccessProperties_8045 ;
          if (kBoolTrue == test_9.boolEnum ()) {
            test_9 = var_procedureModeMap_7829.getter_hasKey (function_userModeName (inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 232)) COMMA_SOURCE_FILE ("declaration-func.galgas", 232)).operator_not (SOURCE_FILE ("declaration-func.galgas", 232)) ;
          }
          const enumGalgasBool test_10 = test_9.boolEnum () ;
          if (kBoolTrue == test_10) {
            inCompiler->emitSemanticError (enumerator_8115.current_mValue (HERE).getter_location (SOURCE_FILE ("declaration-func.galgas", 233)), GALGAS_string ("useless @").add_operation (enumerator_8115.current_mValue (HERE).getter_string (SOURCE_FILE ("declaration-func.galgas", 233)), inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 233)).add_operation (GALGAS_string (" attribute: function is never executed in `"), inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 233)).add_operation (function_userModeName (inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 233)), inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 233)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 233))  COMMA_SOURCE_FILE ("declaration-func.galgas", 233)) ;
          }
        }
        enumerator_8115.gotoNextObject () ;
        if (enumerator_8115.hasCurrentObject ()) {
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
          inCompiler->emitSemanticError (enumerator_6805.current (HERE).mAttribute_mFunctionName.getter_location (SOURCE_FILE ("declaration-func.galgas", 246)), GALGAS_string ("this weak procedure overrides a weak procedure")  COMMA_SOURCE_FILE ("declaration-func.galgas", 246)) ;
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
            ioArgument_ioContext.mAttribute_mRoutineMapForContext.setter_insertKey (var_routineMangledName_6849, var_routineMangledName_6849, enumerator_6805.current (HERE).mAttribute_mPublicFunction, var_procedureModeMap_7829, var_signature_7101, GALGAS_routineKind::constructor_function (SOURCE_FILE ("declaration-func.galgas", 255)), var_weakProcedure_7973, var_returnType_7581, GALGAS_bool (false), var_canMutateProperties_8009, var_canAccessProperties_8045, inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 249)) ;
            }
          }else if (kBoolFalse == test_18) {
            {
            ioArgument_ioContext.mAttribute_mRoutineMapForContext.setter_insertKey (var_routineMangledName_6849, var_routineMangledName_6849, enumerator_6805.current (HERE).mAttribute_mPublicFunction, var_procedureModeMap_7829, var_signature_7101, GALGAS_routineKind::constructor_function (SOURCE_FILE ("declaration-func.galgas", 269)), var_weakProcedure_7973, var_returnType_7581, GALGAS_bool (false), var_canMutateProperties_8009, var_canAccessProperties_8045, inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 263)) ;
            }
          }
        }
      }
    }else if (kBoolFalse == test_12) {
      {
      ioArgument_ioContext.mAttribute_mRoutineMapForContext.setter_insertKey (var_routineMangledName_6849, var_routineMangledName_6849, enumerator_6805.current (HERE).mAttribute_mPublicFunction, var_procedureModeMap_7829, var_signature_7101, GALGAS_routineKind::constructor_function (SOURCE_FILE ("declaration-func.galgas", 284)), var_weakProcedure_7973, var_returnType_7581, GALGAS_bool (false), var_canMutateProperties_8009, var_canAccessProperties_8045, inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 278)) ;
      }
    }
    enumerator_6805.gotoNextObject () ;
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
  cEnumerator_functionDeclarationListAST enumerator_11311 (temp_0, kEnumeration_up) ;
  while (enumerator_11311.hasCurrentObject ()) {
    GALGAS_bool var_warnIfUnused_11332 = GALGAS_bool (true) ;
    GALGAS_bool var_globalProcedure_11363 = GALGAS_bool (false) ;
    GALGAS_bool var_weakProcedure_11393 = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_11460 (enumerator_11311.current (HERE).mAttribute_mFunctionAttributeList, kEnumeration_up) ;
    while (enumerator_11460.hasCurrentObject ()) {
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_11460.current_mValue (HERE).mAttribute_string.objectCompare (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 310)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        const enumGalgasBool test_2 = var_warnIfUnused_11332.operator_not (SOURCE_FILE ("declaration-func.galgas", 311)).boolEnum () ;
        if (kBoolTrue == test_2) {
          inCompiler->emitSemanticError (enumerator_11460.current_mValue (HERE).getter_location (SOURCE_FILE ("declaration-func.galgas", 312)), GALGAS_string ("duplicated @").add_operation (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 312)), inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 312)).add_operation (GALGAS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 312))  COMMA_SOURCE_FILE ("declaration-func.galgas", 312)) ;
        }
        var_warnIfUnused_11332 = GALGAS_bool (false) ;
      }else if (kBoolFalse == test_1) {
        const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_11460.current_mValue (HERE).mAttribute_string.objectCompare (function_globalAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 315)))).boolEnum () ;
        if (kBoolTrue == test_3) {
          const enumGalgasBool test_4 = var_globalProcedure_11363.boolEnum () ;
          if (kBoolTrue == test_4) {
            inCompiler->emitSemanticError (enumerator_11460.current_mValue (HERE).getter_location (SOURCE_FILE ("declaration-func.galgas", 317)), GALGAS_string ("duplicated @").add_operation (function_globalAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 317)), inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 317)).add_operation (GALGAS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 317))  COMMA_SOURCE_FILE ("declaration-func.galgas", 317)) ;
          }
          var_globalProcedure_11363 = GALGAS_bool (true) ;
        }else if (kBoolFalse == test_3) {
          const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, enumerator_11460.current_mValue (HERE).mAttribute_string.objectCompare (function_weakAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 320)))).boolEnum () ;
          if (kBoolTrue == test_5) {
            const enumGalgasBool test_6 = var_weakProcedure_11393.boolEnum () ;
            if (kBoolTrue == test_6) {
              inCompiler->emitSemanticError (enumerator_11460.current_mValue (HERE).getter_location (SOURCE_FILE ("declaration-func.galgas", 322)), GALGAS_string ("duplicated @").add_operation (function_weakAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 322)), inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 322)).add_operation (GALGAS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 322))  COMMA_SOURCE_FILE ("declaration-func.galgas", 322)) ;
            }
            var_weakProcedure_11393 = GALGAS_bool (true) ;
          }else if (kBoolFalse == test_5) {
            inCompiler->emitSemanticError (enumerator_11460.current_mValue (HERE).getter_location (SOURCE_FILE ("declaration-func.galgas", 326)), GALGAS_string ("unknown attribute; available attributes are @").add_operation (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 327)), inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 327)).add_operation (GALGAS_string (", @"), inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 327)).add_operation (function_weakAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 327)), inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 327)).add_operation (GALGAS_string (", @"), inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 327)).add_operation (function_globalAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 327)), inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 327))  COMMA_SOURCE_FILE ("declaration-func.galgas", 326)) ;
          }
        }
      }
      enumerator_11460.gotoNextObject () ;
    }
    {
    routine_routineSemanticAnalysis (inArgument_inReceiverType, GALGAS_routineKind::constructor_function (SOURCE_FILE ("declaration-func.galgas", 332)), enumerator_11311.current (HERE).mAttribute_mFunctionModeList, enumerator_11311.current (HERE).mAttribute_mFunctionName, enumerator_11311.current (HERE).mAttribute_mFunctionFormalArgumentList, enumerator_11311.current (HERE).mAttribute_mFunctionReturnTypeName, enumerator_11311.current (HERE).mAttribute_mFunctionInstructionList, enumerator_11311.current (HERE).mAttribute_mEndOfFunctionDeclaration, GALGAS_bool (true), GALGAS_bool (true), var_warnIfUnused_11332, var_globalProcedure_11363, var_weakProcedure_11393, GALGAS_accessKind::constructor_readWriteAccess (SOURCE_FILE ("declaration-func.galgas", 344)), constinArgument_inSemanticContext, ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct, inCompiler  COMMA_SOURCE_FILE ("declaration-func.galgas", 330)) ;
    }
    enumerator_11311.gotoNextObject () ;
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
  cEnumerator_externProcedureDeclarationListAST enumerator_2310 (temp_0, kEnumeration_up) ;
  while (enumerator_2310.hasCurrentObject ()) {
    cEnumerator_procFormalArgumentList enumerator_2379 (enumerator_2310.current_mProcFormalArgumentList (HERE), kEnumeration_up) ;
    while (enumerator_2379.hasCurrentObject ()) {
      GALGAS_lstring var_typeName_2398 = GALGAS_lstring::constructor_new (GALGAS_string ("$").add_operation (enumerator_2379.current_mFormalArgumentTypeName (HERE).getter_string (SOURCE_FILE ("declaration-extern-proc.galgas", 53)), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 53)), enumerator_2379.current_mFormalArgumentTypeName (HERE).mAttribute_location  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 53)) ;
      {
      ioArgument_ioGraph.setter_noteNode (var_typeName_2398 COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 54)) ;
      }
      enumerator_2379.gotoNextObject () ;
    }
    enumerator_2310.gotoNextObject () ;
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
  cEnumerator_externProcedureDeclarationListAST enumerator_3037 (temp_0, kEnumeration_up) ;
  while (enumerator_3037.hasCurrentObject ()) {
    extensionMethod_enterExternProcInContext (enumerator_3037.current (HERE), ioArgument_ioContext, inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 67)) ;
    enumerator_3037.gotoNextObject () ;
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
  cEnumerator_externProcedureDeclarationListAST enumerator_5255 (temp_0, kEnumeration_up) ;
  while (enumerator_5255.hasCurrentObject ()) {
    extensionMethod_externProcedureSemanticAnalysis (enumerator_5255.current (HERE), constinArgument_inContext, ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 122)) ;
    enumerator_5255.gotoNextObject () ;
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
  cEnumerator_externProcedureMapIR enumerator_8347 (temp_0, kEnumeration_up) ;
  while (enumerator_8347.hasCurrentObject ()) {
    extensionMethod_llvmPrototypeGeneration (enumerator_8347.current (HERE), ioArgument_ioLLVMcode, inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 207)) ;
    enumerator_8347.gotoNextObject () ;
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
  cEnumerator_isrDeclarationListAST enumerator_2261 (temp_0, kEnumeration_up) ;
  while (enumerator_2261.hasCurrentObject ()) {
    ioArgument_ioSemanticContext.mAttribute_mDefinedInterruptSet.addAssign_operation (enumerator_2261.current (HERE).mAttribute_mISRName.mAttribute_string  COMMA_SOURCE_FILE ("declaration-isr.galgas", 54)) ;
    enumerator_2261.gotoNextObject () ;
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
  cEnumerator_isrDeclarationListAST enumerator_2949 (temp_0, kEnumeration_up) ;
  while (enumerator_2949.hasCurrentObject ()) {
    GALGAS_bool var_xtrAttribute_2996 = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_3052 (enumerator_2949.current (HERE).mAttribute_mISRAttributeList, kEnumeration_up) ;
    while (enumerator_3052.hasCurrentObject ()) {
      const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, enumerator_3052.current_mValue (HERE).mAttribute_string.objectCompare (GALGAS_string ("xtr"))).boolEnum () ;
      if (kBoolTrue == test_1) {
        inCompiler->emitSemanticError (enumerator_3052.current_mValue (HERE).getter_location (SOURCE_FILE ("declaration-isr.galgas", 72)), GALGAS_string ("only @xtr attribute is allowed here")  COMMA_SOURCE_FILE ("declaration-isr.galgas", 72)) ;
      }else if (kBoolFalse == test_1) {
        const enumGalgasBool test_2 = var_xtrAttribute_2996.boolEnum () ;
        if (kBoolTrue == test_2) {
          inCompiler->emitSemanticError (enumerator_3052.current_mValue (HERE).getter_location (SOURCE_FILE ("declaration-isr.galgas", 74)), GALGAS_string ("duplicate @xtr attribute")  COMMA_SOURCE_FILE ("declaration-isr.galgas", 74)) ;
        }else if (kBoolFalse == test_2) {
          var_xtrAttribute_2996 = GALGAS_bool (true) ;
        }
      }
      enumerator_3052.gotoNextObject () ;
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
    GALGAS_lstring var_routineNameForInvocationGraph_3471 = function_interruptNameForInvocationGraph (enumerator_2949.current (HERE).mAttribute_mISRName, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 82)) ;
    const enumGalgasBool test_6 = ioArgument_ioTemporaries.mAttribute_mSubprogramInvocationGraph.getter_isNodeDefined (var_routineNameForInvocationGraph_3471.mAttribute_string COMMA_SOURCE_FILE ("declaration-isr.galgas", 83)).operator_not (SOURCE_FILE ("declaration-isr.galgas", 83)).boolEnum () ;
    if (kBoolTrue == test_6) {
      {
      ioArgument_ioTemporaries.mAttribute_mSubprogramInvocationGraph.setter_addNode (var_routineNameForInvocationGraph_3471, var_routineNameForInvocationGraph_3471, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 84)) ;
      }
    }
    GALGAS_variableMap var_variableMap_4091 ;
    {
    routine_initialVariableMap (var_routineNameForInvocationGraph_3471.mAttribute_string, constinArgument_inSemanticContext, GALGAS_bool (false), GALGAS_accessKind::constructor_readWriteAccess (SOURCE_FILE ("declaration-isr.galgas", 94)), GALGAS_bool (false), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-isr.galgas", 96)), var_variableMap_4091, inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 90)) ;
    }
    GALGAS_unifiedTypeMap_2D_proxy temp_7 ;
    const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, enumerator_2949.current (HERE).mAttribute_mSelfTypeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_8) {
      temp_7 = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-isr.galgas", 101)) ;
    }else if (kBoolFalse == test_8) {
      temp_7 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_2949.current (HERE).mAttribute_mSelfTypeName, inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 103)) ;
    }
    GALGAS_unifiedTypeMap_2D_proxy var_selfType_4131 = temp_7 ;
    GALGAS_allocaList var_allocaList_4368 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("declaration-isr.galgas", 106)) ;
    GALGAS_instructionListIR var_instructionGenerationList_4422 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("declaration-isr.galgas", 107)) ;
    extensionMethod_analyzeRoutineInstructionList (enumerator_2949.current (HERE).mAttribute_mISRInstructionList, var_selfType_4131, GALGAS_bool (true), GALGAS_bool (true), var_routineNameForInvocationGraph_3471, constinArgument_inSemanticContext, var_modeSet_3336, var_modeSet_3336.getter_hasKey (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 115)) COMMA_SOURCE_FILE ("declaration-isr.galgas", 115)).operator_not (SOURCE_FILE ("declaration-isr.galgas", 115)), ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct.mAttribute_mStaticStringMap, var_variableMap_4091, var_allocaList_4368, var_instructionGenerationList_4422, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 108)) ;
    var_variableMap_4091.method_checkAutomatonStates (enumerator_2949.current (HERE).mAttribute_mEndOfISRDeclaration, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 124)) ;
    GALGAS_interruptionPanicCode joker_5222 ; // Joker input parameter
    constinArgument_inSemanticContext.mAttribute_mAvailableInterruptMap.method_searchKey (enumerator_2949.current (HERE).mAttribute_mISRName, joker_5222, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 127)) ;
    {
    ioArgument_ioIntermediateCodeStruct.mAttribute_mInterruptMapIR.setter_insertKey (enumerator_2949.current (HERE).mAttribute_mISRName, var_selfType_4131, enumerator_2949.current (HERE).mAttribute_mGlobalVariableName, var_allocaList_4368, var_instructionGenerationList_4422, var_xtrAttribute_2996, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 128)) ;
    }
    enumerator_2949.gotoNextObject () ;
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
  GALGAS_stringset var_definedInterrupts_6532 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("declaration-isr.galgas", 160)) ;
  const GALGAS_interruptMapIR temp_0 = inObject ;
  cEnumerator_interruptMapIR enumerator_6564 (temp_0, kEnumeration_up) ;
  while (enumerator_6564.hasCurrentObject ()) {
    var_definedInterrupts_6532.addAssign_operation (enumerator_6564.current (HERE).mAttribute_lkey.mAttribute_string  COMMA_SOURCE_FILE ("declaration-isr.galgas", 162)) ;
    GALGAS_string temp_1 ;
    const enumGalgasBool test_2 = enumerator_6564.current (HERE).mAttribute_mXTR.boolEnum () ;
    if (kBoolTrue == test_2) {
      temp_1 = function_llvmNameForInterrupt (enumerator_6564.current (HERE).mAttribute_lkey, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 164)).mAttribute_string ;
    }else if (kBoolFalse == test_2) {
      temp_1 = function_llvmNameForISR (enumerator_6564.current (HERE).mAttribute_lkey.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 166)) ;
    }
    GALGAS_string var_interruptImplementationName_6648 = temp_1 ;
    ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (var_interruptImplementationName_6648, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 168)), inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 168)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define void @").add_operation (var_interruptImplementationName_6648, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 169)).add_operation (GALGAS_string (" ()"), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 169)).add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 169)), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 169)).add_operation (GALGAS_string (" {\n"), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 169)), inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 169)) ;
    cEnumerator_allocaList enumerator_7028 (enumerator_6564.current (HERE).mAttribute_mAllocaList, kEnumeration_up) ;
    while (enumerator_7028.hasCurrentObject ()) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (function_llvmNameForLocalVariable (enumerator_7028.current_mVarName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 172)), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 172)).add_operation (GALGAS_string (" = alloca "), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 172)).add_operation (enumerator_7028.current_mType (HERE).getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 172)), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 172)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 172)), inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 172)) ;
      enumerator_7028.gotoNextObject () ;
    }
    const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, enumerator_6564.current (HERE).mAttribute_mSelfType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-isr.galgas", 175)))).boolEnum () ;
    if (kBoolTrue == test_3) {
      GALGAS_string var_varName_7223 = function_llvmNameForGlobalVariable (enumerator_6564.current (HERE).mAttribute_mGlobalVariableName, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 176)) ;
      GALGAS_string var_typeName_7303 = enumerator_6564.current (HERE).mAttribute_mSelfType.getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 177)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %self = getelementptr inbounds ").add_operation (var_typeName_7303, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 178)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 178)).add_operation (var_typeName_7303, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 178)).add_operation (GALGAS_string (" * @"), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 178)).add_operation (var_varName_7223, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 178)), inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 178)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", i32 0 ; Perform %self = @").add_operation (var_varName_7223, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 179)).add_operation (GALGAS_string (" \n"), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 179)), inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 179)) ;
    }
    extensionMethod_instructionListLLVMCode (enumerator_6564.current (HERE).mAttribute_mInstructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 182)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 184)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
      "\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 185)) ;
    const enumGalgasBool test_4 = enumerator_6564.current (HERE).mAttribute_mXTR.boolEnum () ;
    if (kBoolTrue == test_4) {
      GALGAS_string var_interruptHandlerName_7838 = function_llvmNameForInterrupt (enumerator_6564.current (HERE).mAttribute_lkey, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 188)).mAttribute_string ;
      GALGAS_string var_isrName_7903 = function_llvmNameForISR (enumerator_6564.current (HERE).mAttribute_lkey.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 189)) ;
      GALGAS_string var_s_31__7957 = constinArgument_inXTRInterruptHandlerString.getter_stringByReplacingStringByString (GALGAS_string ("!ISR!"), var_isrName_7903, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 190)) ;
      GALGAS_string var_s_32__8051 = var_s_31__7957.getter_stringByReplacingStringByString (GALGAS_string ("!HANDLER!"), var_interruptHandlerName_7838, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 191)) ;
      ioArgument_ioAScode.plusAssign_operation(var_s_32__8051, inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 192)) ;
    }
    enumerator_6564.gotoNextObject () ;
  }
  cEnumerator_availableInterruptMap enumerator_8283 (constinArgument_inGenerationContext.mAttribute_mAvailableInterruptMap, kEnumeration_up) ;
  while (enumerator_8283.hasCurrentObject ()) {
    const enumGalgasBool test_5 = var_definedInterrupts_6532.getter_hasKey (enumerator_8283.current_lkey (HERE).mAttribute_string COMMA_SOURCE_FILE ("declaration-isr.galgas", 197)).operator_not (SOURCE_FILE ("declaration-isr.galgas", 197)).boolEnum () ;
    if (kBoolTrue == test_5) {
      switch (enumerator_8283.current_mInterruptionPanicCode (HERE).enumValue ()) {
      case GALGAS_interruptionPanicCode::kNotBuilt:
        break ;
      case GALGAS_interruptionPanicCode::kEnum_noPanicCode:
        {
          GALGAS_string var_s_8401 = constinArgument_inUndefinedInterruptString.getter_stringByReplacingStringByString (GALGAS_string ("!ISR!"), function_llvmNameForISR (enumerator_8283.current_lkey (HERE).mAttribute_string, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 200)), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 200)) ;
          ioArgument_ioAScode.plusAssign_operation(var_s_8401, inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 201)) ;
        }
        break ;
      case GALGAS_interruptionPanicCode::kEnum_panicCode:
        {
          const cEnumAssociatedValues_interruptionPanicCode_panicCode * extractPtr_9230 = (const cEnumAssociatedValues_interruptionPanicCode_panicCode *) (enumerator_8283.current_mInterruptionPanicCode (HERE).unsafePointer ()) ;
          const GALGAS_lbigint extractedValue_value = extractPtr_9230->mAssociatedValue0 ;
          const enumGalgasBool test_6 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).boolEnum () ;
          if (kBoolTrue == test_6) {
            GALGAS_string var_s_8643 = constinArgument_inUndefinedInterruptString.getter_stringByReplacingStringByString (GALGAS_string ("!ISR!"), function_llvmNameForISR (enumerator_8283.current_lkey (HERE).mAttribute_string, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 204)), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 204)) ;
            ioArgument_ioAScode.plusAssign_operation(var_s_8643, inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 205)) ;
          }else if (kBoolFalse == test_6) {
            GALGAS_string var_name_8802 = function_llvmNameForISR (enumerator_8283.current_lkey (HERE).mAttribute_string, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 207)) ;
            ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("Panic code for ").add_operation (var_name_8802, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 208)), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 208)), inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 208)) ;
            ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define void @").add_operation (var_name_8802, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 209)).add_operation (GALGAS_string (" ()"), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 209)).add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 209)), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 209)).add_operation (GALGAS_string (" noreturn {\n"), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 209)), inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 209)) ;
            ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @panic.isr (").add_operation (constinArgument_inGenerationContext.mAttribute_mPanicCodeLLVMType, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 210)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 210)).add_operation (extractedValue_value.mAttribute_bigint.getter_string (SOURCE_FILE ("declaration-isr.galgas", 210)), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 210)).add_operation (GALGAS_string (") noreturn \n"), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 210)), inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 210)) ;
            ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  unreachable\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 211)) ;
            ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
              "\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 212)) ;
          }
        }
        break ;
      }
    }
    enumerator_8283.gotoNextObject () ;
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
  cEnumerator_sectionDeclarationListAST enumerator_2601 (temp_0, kEnumeration_up) ;
  while (enumerator_2601.hasCurrentObject ()) {
    cEnumerator_procFormalArgumentList enumerator_2673 (enumerator_2601.current_mSectionFormalArgumentList (HERE), kEnumeration_up) ;
    while (enumerator_2673.hasCurrentObject ()) {
      GALGAS_lstring var_typeName_2692 = GALGAS_lstring::constructor_new (GALGAS_string ("$").add_operation (enumerator_2673.current_mFormalArgumentTypeName (HERE).getter_string (SOURCE_FILE ("declaration-section.galgas", 72)), inCompiler COMMA_SOURCE_FILE ("declaration-section.galgas", 72)), enumerator_2673.current_mFormalArgumentTypeName (HERE).mAttribute_location  COMMA_SOURCE_FILE ("declaration-section.galgas", 72)) ;
      {
      ioArgument_ioGraph.setter_noteNode (var_typeName_2692 COMMA_SOURCE_FILE ("declaration-section.galgas", 73)) ;
      }
      enumerator_2673.gotoNextObject () ;
    }
    extensionMethod_noteInstructionListTypesInPrecedenceGraph (enumerator_2601.current_mSectionInstructionList (HERE), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-section.galgas", 75)) ;
    enumerator_2601.gotoNextObject () ;
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
  cEnumerator_sectionDeclarationListAST enumerator_3434 (temp_0, kEnumeration_up) ;
  while (enumerator_3434.hasCurrentObject ()) {
    GALGAS_lstring temp_1 ;
    const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, constinArgument_inReceiverTypeName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_2) {
      temp_1 = enumerator_3434.current (HERE).mAttribute_mSectionName ;
    }else if (kBoolFalse == test_2) {
      temp_1 = GALGAS_lstring::constructor_new (constinArgument_inReceiverTypeName.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-section.galgas", 92)).add_operation (enumerator_3434.current (HERE).mAttribute_mSectionName.getter_string (SOURCE_FILE ("declaration-section.galgas", 92)), inCompiler COMMA_SOURCE_FILE ("declaration-section.galgas", 92)), enumerator_3434.current (HERE).mAttribute_mSectionName.mAttribute_location  COMMA_SOURCE_FILE ("declaration-section.galgas", 92)) ;
    }
    GALGAS_lstring var_routineMangledName_3478 = temp_1 ;
    GALGAS_procedureSignature var_signature_3692 = GALGAS_procedureSignature::constructor_emptyList (SOURCE_FILE ("declaration-section.galgas", 94)) ;
    var_routineMangledName_3478.mAttribute_string.plusAssign_operation(GALGAS_string ("("), inCompiler  COMMA_SOURCE_FILE ("declaration-section.galgas", 95)) ;
    cEnumerator_procFormalArgumentList enumerator_3845 (enumerator_3434.current (HERE).mAttribute_mSectionFormalArgumentList, kEnumeration_up) ;
    while (enumerator_3845.hasCurrentObject ()) {
      GALGAS_unifiedTypeMap_2D_proxy var_typeProxy_3865 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.mAttribute_mTypeMap, enumerator_3845.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("declaration-section.galgas", 97)) ;
      var_signature_3692.addAssign_operation (enumerator_3845.current_mFormalArgumentPassingMode (HERE), enumerator_3845.current_mSelector (HERE).mAttribute_string, var_typeProxy_3865  COMMA_SOURCE_FILE ("declaration-section.galgas", 98)) ;
      var_routineMangledName_3478.mAttribute_string.plusAssign_operation(extensionGetter_formalPassingModeString (enumerator_3845.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-section.galgas", 99)).add_operation (enumerator_3845.current_mSelector (HERE).getter_string (SOURCE_FILE ("declaration-section.galgas", 99)), inCompiler COMMA_SOURCE_FILE ("declaration-section.galgas", 99)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("declaration-section.galgas", 99)), inCompiler  COMMA_SOURCE_FILE ("declaration-section.galgas", 99)) ;
      enumerator_3845.gotoNextObject () ;
    }
    var_routineMangledName_3478.mAttribute_string.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("declaration-section.galgas", 101)) ;
    GALGAS_unifiedTypeMap_2D_proxy temp_3 ;
    const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, enumerator_3434.current (HERE).mAttribute_mReturnTypeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_4) {
      temp_3 = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-section.galgas", 103)) ;
    }else if (kBoolFalse == test_4) {
      temp_3 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.mAttribute_mTypeMap, enumerator_3434.current (HERE).mAttribute_mReturnTypeName, inCompiler  COMMA_SOURCE_FILE ("declaration-section.galgas", 105)) ;
    }
    GALGAS_unifiedTypeMap_2D_proxy var_returnType_4187 = temp_3 ;
    GALGAS_bool var_mutating_4404 = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_4468 (enumerator_3434.current (HERE).mAttribute_mSectionAttributeList, kEnumeration_up) ;
    while (enumerator_4468.hasCurrentObject ()) {
      const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, enumerator_4468.current_mValue (HERE).mAttribute_string.objectCompare (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-section.galgas", 110)))).boolEnum () ;
      if (kBoolTrue == test_5) {
        var_mutating_4404 = GALGAS_bool (true) ;
      }
      enumerator_4468.gotoNextObject () ;
    }
    {
    GALGAS_modeMap temp_6 = GALGAS_modeMap::constructor_emptyMap (SOURCE_FILE ("declaration-section.galgas", 119)) ;
    temp_6.addAssign_operation (function_userModeName (inCompiler COMMA_SOURCE_FILE ("declaration-section.galgas", 119)).getter_nowhere (SOURCE_FILE ("declaration-section.galgas", 119)), inCompiler  COMMA_SOURCE_FILE ("declaration-section.galgas", 119)) ;
    ioArgument_ioContext.mAttribute_mRoutineMapForContext.setter_insertKey (var_routineMangledName_3478, var_routineMangledName_3478, enumerator_3434.current (HERE).mAttribute_mPublic, temp_6, var_signature_3692, GALGAS_routineKind::constructor_section (SOURCE_FILE ("declaration-section.galgas", 121)), GALGAS_bool (false), var_returnType_4187, GALGAS_bool (false), var_mutating_4404, GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("declaration-section.galgas", 115)) ;
    }
    enumerator_3434.gotoNextObject () ;
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
  cEnumerator_sectionDeclarationListAST enumerator_5671 (temp_0, kEnumeration_up) ;
  while (enumerator_5671.hasCurrentObject ()) {
    GALGAS_bool var_mutating_5688 = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_5752 (enumerator_5671.current (HERE).mAttribute_mSectionAttributeList, kEnumeration_up) ;
    while (enumerator_5752.hasCurrentObject ()) {
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_5752.current_mValue (HERE).mAttribute_string.objectCompare (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-section.galgas", 144)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        const enumGalgasBool test_2 = var_mutating_5688.boolEnum () ;
        if (kBoolTrue == test_2) {
          inCompiler->emitSemanticError (enumerator_5752.current_mValue (HERE).getter_location (SOURCE_FILE ("declaration-section.galgas", 146)), GALGAS_string ("duplicated @").add_operation (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-section.galgas", 146)), inCompiler COMMA_SOURCE_FILE ("declaration-section.galgas", 146)).add_operation (GALGAS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("declaration-section.galgas", 146))  COMMA_SOURCE_FILE ("declaration-section.galgas", 146)) ;
        }
        var_mutating_5688 = GALGAS_bool (true) ;
      }else if (kBoolFalse == test_1) {
        inCompiler->emitSemanticError (enumerator_5752.current_mValue (HERE).getter_location (SOURCE_FILE ("declaration-section.galgas", 150)), GALGAS_string ("unknown attribute; available attribute is @").add_operation (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-section.galgas", 150)), inCompiler COMMA_SOURCE_FILE ("declaration-section.galgas", 150))  COMMA_SOURCE_FILE ("declaration-section.galgas", 150)) ;
      }
      enumerator_5752.gotoNextObject () ;
    }
    {
    GALGAS_lstringlist temp_3 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("declaration-section.galgas", 156)) ;
    temp_3.addAssign_operation (GALGAS_lstring::constructor_new (function_sectionModeName (inCompiler COMMA_SOURCE_FILE ("declaration-section.galgas", 156)), enumerator_5671.current (HERE).mAttribute_mSectionName.mAttribute_location  COMMA_SOURCE_FILE ("declaration-section.galgas", 156))  COMMA_SOURCE_FILE ("declaration-section.galgas", 156)) ;
    routine_routineSemanticAnalysis (inArgument_inReceiverType, GALGAS_routineKind::constructor_section (SOURCE_FILE ("declaration-section.galgas", 155)), temp_3, enumerator_5671.current (HERE).mAttribute_mSectionName, enumerator_5671.current (HERE).mAttribute_mSectionFormalArgumentList, enumerator_5671.current (HERE).mAttribute_mReturnTypeName, enumerator_5671.current (HERE).mAttribute_mSectionInstructionList, enumerator_5671.current (HERE).mAttribute_mEndOfSectionLocation, GALGAS_bool (true), var_mutating_5688, GALGAS_bool (true), GALGAS_bool (true), GALGAS_bool (false), GALGAS_accessKind::constructor_readWriteAccess (SOURCE_FILE ("declaration-section.galgas", 167)), constinArgument_inSemanticContext, ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct, inCompiler  COMMA_SOURCE_FILE ("declaration-section.galgas", 153)) ;
    }
    enumerator_5671.gotoNextObject () ;
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
  cEnumerator_serviceDeclarationListAST enumerator_2566 (temp_0, kEnumeration_up) ;
  while (enumerator_2566.hasCurrentObject ()) {
    cEnumerator_procFormalArgumentList enumerator_2638 (enumerator_2566.current_mServiceFormalArgumentList (HERE), kEnumeration_up) ;
    while (enumerator_2638.hasCurrentObject ()) {
      GALGAS_lstring var_typeName_2657 = GALGAS_lstring::constructor_new (GALGAS_string ("$").add_operation (enumerator_2638.current_mFormalArgumentTypeName (HERE).getter_string (SOURCE_FILE ("declaration-service.galgas", 71)), inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 71)), enumerator_2638.current_mFormalArgumentTypeName (HERE).mAttribute_location  COMMA_SOURCE_FILE ("declaration-service.galgas", 71)) ;
      {
      ioArgument_ioGraph.setter_noteNode (var_typeName_2657 COMMA_SOURCE_FILE ("declaration-service.galgas", 72)) ;
      }
      enumerator_2638.gotoNextObject () ;
    }
    extensionMethod_noteInstructionListTypesInPrecedenceGraph (enumerator_2566.current_mServiceInstructionList (HERE), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 74)) ;
    enumerator_2566.gotoNextObject () ;
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
  cEnumerator_serviceDeclarationListAST enumerator_3399 (temp_0, kEnumeration_up) ;
  while (enumerator_3399.hasCurrentObject ()) {
    GALGAS_lstring temp_1 ;
    const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, constinArgument_inReceiverTypeName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_2) {
      temp_1 = enumerator_3399.current (HERE).mAttribute_mServiceName ;
    }else if (kBoolFalse == test_2) {
      temp_1 = GALGAS_lstring::constructor_new (constinArgument_inReceiverTypeName.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 91)).add_operation (enumerator_3399.current (HERE).mAttribute_mServiceName.getter_string (SOURCE_FILE ("declaration-service.galgas", 91)), inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 91)), enumerator_3399.current (HERE).mAttribute_mServiceName.mAttribute_location  COMMA_SOURCE_FILE ("declaration-service.galgas", 91)) ;
    }
    GALGAS_lstring var_routineMangledName_3443 = temp_1 ;
    GALGAS_procedureSignature var_signature_3657 = GALGAS_procedureSignature::constructor_emptyList (SOURCE_FILE ("declaration-service.galgas", 93)) ;
    var_routineMangledName_3443.mAttribute_string.plusAssign_operation(GALGAS_string ("("), inCompiler  COMMA_SOURCE_FILE ("declaration-service.galgas", 94)) ;
    cEnumerator_procFormalArgumentList enumerator_3810 (enumerator_3399.current (HERE).mAttribute_mServiceFormalArgumentList, kEnumeration_up) ;
    while (enumerator_3810.hasCurrentObject ()) {
      GALGAS_unifiedTypeMap_2D_proxy var_typeProxy_3830 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.mAttribute_mTypeMap, enumerator_3810.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("declaration-service.galgas", 96)) ;
      var_signature_3657.addAssign_operation (enumerator_3810.current_mFormalArgumentPassingMode (HERE), enumerator_3810.current_mSelector (HERE).mAttribute_string, var_typeProxy_3830  COMMA_SOURCE_FILE ("declaration-service.galgas", 97)) ;
      var_routineMangledName_3443.mAttribute_string.plusAssign_operation(extensionGetter_formalPassingModeString (enumerator_3810.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 98)).add_operation (enumerator_3810.current_mSelector (HERE).getter_string (SOURCE_FILE ("declaration-service.galgas", 98)), inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 98)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 98)), inCompiler  COMMA_SOURCE_FILE ("declaration-service.galgas", 98)) ;
      enumerator_3810.gotoNextObject () ;
    }
    var_routineMangledName_3443.mAttribute_string.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("declaration-service.galgas", 100)) ;
    GALGAS_modeMap temp_3 = GALGAS_modeMap::constructor_emptyMap (SOURCE_FILE ("declaration-service.galgas", 102)) ;
    temp_3.addAssign_operation (function_userModeName (inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 102)).getter_nowhere (SOURCE_FILE ("declaration-service.galgas", 102)), inCompiler  COMMA_SOURCE_FILE ("declaration-service.galgas", 102)) ;
    temp_3.addAssign_operation (function_serviceModeName (inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 102)).getter_nowhere (SOURCE_FILE ("declaration-service.galgas", 102)), inCompiler  COMMA_SOURCE_FILE ("declaration-service.galgas", 102)) ;
    temp_3.addAssign_operation (function_kernelModeName (inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 102)).getter_nowhere (SOURCE_FILE ("declaration-service.galgas", 102)), inCompiler  COMMA_SOURCE_FILE ("declaration-service.galgas", 102)) ;
    GALGAS_modeMap var_modeMap_4174 = temp_3 ;
    GALGAS_unifiedTypeMap_2D_proxy temp_4 ;
    const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, enumerator_3399.current (HERE).mAttribute_mReturnTypeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_5) {
      temp_4 = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-service.galgas", 105)) ;
    }else if (kBoolFalse == test_5) {
      temp_4 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.mAttribute_mTypeMap, enumerator_3399.current (HERE).mAttribute_mReturnTypeName, inCompiler  COMMA_SOURCE_FILE ("declaration-service.galgas", 107)) ;
    }
    GALGAS_unifiedTypeMap_2D_proxy var_returnType_4309 = temp_4 ;
    {
    ioArgument_ioContext.mAttribute_mRoutineMapForContext.setter_insertKey (var_routineMangledName_3443, var_routineMangledName_3443, enumerator_3399.current (HERE).mAttribute_mPublic, var_modeMap_4174, var_signature_3657, GALGAS_routineKind::constructor_service (SOURCE_FILE ("declaration-service.galgas", 115)), GALGAS_bool (false), var_returnType_4309, GALGAS_bool (false), GALGAS_bool (true), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 109)) ;
    }
    enumerator_3399.gotoNextObject () ;
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
  cEnumerator_serviceDeclarationListAST enumerator_5537 (temp_0, kEnumeration_up) ;
  while (enumerator_5537.hasCurrentObject ()) {
    GALGAS_bool var_warnIfUnused_5558 = GALGAS_bool (true) ;
    cEnumerator_lstringlist enumerator_5621 (enumerator_5537.current (HERE).mAttribute_mServiceAttributeList, kEnumeration_up) ;
    while (enumerator_5621.hasCurrentObject ()) {
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_5621.current_mValue (HERE).mAttribute_string.objectCompare (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 138)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        const enumGalgasBool test_2 = var_warnIfUnused_5558.operator_not (SOURCE_FILE ("declaration-service.galgas", 139)).boolEnum () ;
        if (kBoolTrue == test_2) {
          inCompiler->emitSemanticError (enumerator_5621.current_mValue (HERE).getter_location (SOURCE_FILE ("declaration-service.galgas", 140)), GALGAS_string ("duplicate @").add_operation (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 140)), inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 140)).add_operation (GALGAS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 140))  COMMA_SOURCE_FILE ("declaration-service.galgas", 140)) ;
        }
        var_warnIfUnused_5558 = GALGAS_bool (false) ;
      }else if (kBoolFalse == test_1) {
        inCompiler->emitSemanticError (enumerator_5621.current_mValue (HERE).getter_location (SOURCE_FILE ("declaration-service.galgas", 144)), GALGAS_string ("unknown attribute; available attribute is @").add_operation (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 144)), inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 144))  COMMA_SOURCE_FILE ("declaration-service.galgas", 144)) ;
      }
      enumerator_5621.gotoNextObject () ;
    }
    {
    GALGAS_lstringlist temp_3 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("declaration-service.galgas", 150)) ;
    temp_3.addAssign_operation (function_serviceModeName (inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 150)).getter_nowhere (SOURCE_FILE ("declaration-service.galgas", 150))  COMMA_SOURCE_FILE ("declaration-service.galgas", 150)) ;
    temp_3.addAssign_operation (function_kernelModeName (inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 150)).getter_nowhere (SOURCE_FILE ("declaration-service.galgas", 150))  COMMA_SOURCE_FILE ("declaration-service.galgas", 150)) ;
    routine_routineSemanticAnalysis (inArgument_inReceiverType, GALGAS_routineKind::constructor_service (SOURCE_FILE ("declaration-service.galgas", 149)), temp_3, enumerator_5537.current (HERE).mAttribute_mServiceName, enumerator_5537.current (HERE).mAttribute_mServiceFormalArgumentList, enumerator_5537.current (HERE).mAttribute_mReturnTypeName, enumerator_5537.current (HERE).mAttribute_mServiceInstructionList, enumerator_5537.current (HERE).mAttribute_mEndOfServiceLocation, GALGAS_bool (true), GALGAS_bool (true), var_warnIfUnused_5558, GALGAS_bool (true), GALGAS_bool (false), GALGAS_accessKind::constructor_readWriteAccess (SOURCE_FILE ("declaration-service.galgas", 161)), constinArgument_inSemanticContext, ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct, inCompiler  COMMA_SOURCE_FILE ("declaration-service.galgas", 147)) ;
    }
    enumerator_5537.gotoNextObject () ;
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
  cEnumerator_routineMapIR enumerator_7141 (temp_0, kEnumeration_up) ;
  while (enumerator_7141.hasCurrentObject ()) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_7141.current (HERE).mAttribute_mKind.objectCompare (GALGAS_routineKind::constructor_service (SOURCE_FILE ("declaration-service.galgas", 178)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_string var_serviceImplementationName_7215 = function_llvmNameForServiceImplementation (enumerator_7141.current (HERE).mAttribute_mRoutineNameForGeneration.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 179)) ;
      GALGAS_string var_serviceCallName_7320 = function_llvmNameForServiceCall (enumerator_7141.current (HERE).mAttribute_mRoutineNameForGeneration.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 180)) ;
      ioArgument_ioServiceList.addAssign_operation (var_serviceCallName_7320, var_serviceImplementationName_7215  COMMA_SOURCE_FILE ("declaration-service.galgas", 181)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (var_serviceImplementationName_7215, inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 182)), inCompiler  COMMA_SOURCE_FILE ("declaration-service.galgas", 182)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("declare"), inCompiler  COMMA_SOURCE_FILE ("declaration-service.galgas", 183)) ;
      const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_7141.current (HERE).mAttribute_mReturnType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-service.galgas", 184)))).boolEnum () ;
      if (kBoolTrue == test_2) {
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" void"), inCompiler  COMMA_SOURCE_FILE ("declaration-service.galgas", 185)) ;
      }else if (kBoolFalse == test_2) {
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ").add_operation (enumerator_7141.current (HERE).mAttribute_mReturnType.getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 187)), inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 187)), inCompiler  COMMA_SOURCE_FILE ("declaration-service.galgas", 187)) ;
      }
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" @").add_operation (function_llvmNameForServiceCall (enumerator_7141.current (HERE).mAttribute_lkey.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 189)), inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 189)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 189)), inCompiler  COMMA_SOURCE_FILE ("declaration-service.galgas", 189)) ;
      GALGAS_string var_typeName_7808 = enumerator_7141.current (HERE).mAttribute_lkey.mAttribute_string.getter_stringByDeletingPathExtension (SOURCE_FILE ("declaration-service.galgas", 190)) ;
      GALGAS_bool var_first_7878 = GALGAS_bool (kIsEqual, var_typeName_7808.objectCompare (GALGAS_string::makeEmptyString ())) ;
      const enumGalgasBool test_3 = var_first_7878.operator_not (SOURCE_FILE ("declaration-service.galgas", 192)).boolEnum () ;
      if (kBoolTrue == test_3) {
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("%").add_operation (var_typeName_7808.getter_assemblerRepresentation (SOURCE_FILE ("declaration-service.galgas", 193)), inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 193)).add_operation (GALGAS_string (" * %self"), inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 193)), inCompiler  COMMA_SOURCE_FILE ("declaration-service.galgas", 193)) ;
      }
      cEnumerator_procFormalArgumentListForGeneration enumerator_8067 (enumerator_7141.current (HERE).mAttribute_mFormalArgumentListForGeneration, kEnumeration_up) ;
      while (enumerator_8067.hasCurrentObject ()) {
        const enumGalgasBool test_4 = var_first_7878.boolEnum () ;
        if (kBoolTrue == test_4) {
          var_first_7878 = GALGAS_bool (false) ;
        }else if (kBoolFalse == test_4) {
          ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-service.galgas", 196)) ;
        }
        switch (enumerator_8067.current_mFormalArgumentKind (HERE).enumValue ()) {
        case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
          break ;
        case GALGAS_procFormalArgumentPassingMode::kEnum_input:
          {
            ioArgument_ioLLVMcode.plusAssign_operation(enumerator_8067.current_mFormalArgumentType (HERE).getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 199)).add_operation (GALGAS_string (" %in."), inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 199)).add_operation (enumerator_8067.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 199)), inCompiler  COMMA_SOURCE_FILE ("declaration-service.galgas", 199)) ;
          }
          break ;
        case GALGAS_procFormalArgumentPassingMode::kEnum_output:
          {
            ioArgument_ioLLVMcode.plusAssign_operation(enumerator_8067.current_mFormalArgumentType (HERE).getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 201)).add_operation (GALGAS_string (" * %"), inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 201)).add_operation (function_llvmNameForLocalVariable (enumerator_8067.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 201)), inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 201)), inCompiler  COMMA_SOURCE_FILE ("declaration-service.galgas", 201)) ;
          }
          break ;
        case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
          {
            ioArgument_ioLLVMcode.plusAssign_operation(enumerator_8067.current_mFormalArgumentType (HERE).getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 203)).add_operation (GALGAS_string (" * %"), inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 203)).add_operation (function_llvmNameForLocalVariable (enumerator_8067.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 203)), inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 203)), inCompiler  COMMA_SOURCE_FILE ("declaration-service.galgas", 203)) ;
          }
          break ;
        }
        enumerator_8067.gotoNextObject () ;
      }
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 206)), inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 206)).add_operation (GALGAS_string ("\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 206)), inCompiler  COMMA_SOURCE_FILE ("declaration-service.galgas", 206)) ;
    }
    enumerator_7141.gotoNextObject () ;
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
  cEnumerator_primitiveDeclarationListAST enumerator_2607 (temp_0, kEnumeration_up) ;
  while (enumerator_2607.hasCurrentObject ()) {
    cEnumerator_procFormalArgumentList enumerator_2681 (enumerator_2607.current_mPrimitiveFormalArgumentList (HERE), kEnumeration_up) ;
    while (enumerator_2681.hasCurrentObject ()) {
      GALGAS_lstring var_typeName_2700 = GALGAS_lstring::constructor_new (GALGAS_string ("$").add_operation (enumerator_2681.current_mFormalArgumentTypeName (HERE).getter_string (SOURCE_FILE ("declaration-primitive.galgas", 71)), inCompiler COMMA_SOURCE_FILE ("declaration-primitive.galgas", 71)), enumerator_2681.current_mFormalArgumentTypeName (HERE).mAttribute_location  COMMA_SOURCE_FILE ("declaration-primitive.galgas", 71)) ;
      {
      ioArgument_ioGraph.setter_noteNode (var_typeName_2700 COMMA_SOURCE_FILE ("declaration-primitive.galgas", 72)) ;
      }
      enumerator_2681.gotoNextObject () ;
    }
    extensionMethod_noteInstructionListTypesInPrecedenceGraph (enumerator_2607.current_mPrimitiveInstructionList (HERE), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-primitive.galgas", 74)) ;
    enumerator_2607.gotoNextObject () ;
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
  cEnumerator_primitiveDeclarationListAST enumerator_3448 (temp_0, kEnumeration_up) ;
  while (enumerator_3448.hasCurrentObject ()) {
    GALGAS_lstring temp_1 ;
    const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, constinArgument_inReceiverTypeName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_2) {
      temp_1 = enumerator_3448.current (HERE).mAttribute_mPrimitiveName ;
    }else if (kBoolFalse == test_2) {
      temp_1 = GALGAS_lstring::constructor_new (constinArgument_inReceiverTypeName.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-primitive.galgas", 91)).add_operation (enumerator_3448.current (HERE).mAttribute_mPrimitiveName.getter_string (SOURCE_FILE ("declaration-primitive.galgas", 91)), inCompiler COMMA_SOURCE_FILE ("declaration-primitive.galgas", 91)), enumerator_3448.current (HERE).mAttribute_mPrimitiveName.mAttribute_location  COMMA_SOURCE_FILE ("declaration-primitive.galgas", 91)) ;
    }
    GALGAS_lstring var_routineMangledName_3492 = temp_1 ;
    GALGAS_procedureSignature var_signature_3718 = GALGAS_procedureSignature::constructor_emptyList (SOURCE_FILE ("declaration-primitive.galgas", 93)) ;
    var_routineMangledName_3492.mAttribute_string.plusAssign_operation(GALGAS_string ("("), inCompiler  COMMA_SOURCE_FILE ("declaration-primitive.galgas", 94)) ;
    cEnumerator_procFormalArgumentList enumerator_3875 (enumerator_3448.current (HERE).mAttribute_mPrimitiveFormalArgumentList, kEnumeration_up) ;
    while (enumerator_3875.hasCurrentObject ()) {
      GALGAS_unifiedTypeMap_2D_proxy var_typeProxy_3895 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.mAttribute_mTypeMap, enumerator_3875.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("declaration-primitive.galgas", 96)) ;
      var_signature_3718.addAssign_operation (enumerator_3875.current_mFormalArgumentPassingMode (HERE), enumerator_3875.current_mSelector (HERE).mAttribute_string, var_typeProxy_3895  COMMA_SOURCE_FILE ("declaration-primitive.galgas", 97)) ;
      var_routineMangledName_3492.mAttribute_string.plusAssign_operation(extensionGetter_formalPassingModeString (enumerator_3875.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-primitive.galgas", 98)).add_operation (enumerator_3875.current_mSelector (HERE).getter_string (SOURCE_FILE ("declaration-primitive.galgas", 98)), inCompiler COMMA_SOURCE_FILE ("declaration-primitive.galgas", 98)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("declaration-primitive.galgas", 98)), inCompiler  COMMA_SOURCE_FILE ("declaration-primitive.galgas", 98)) ;
      enumerator_3875.gotoNextObject () ;
    }
    var_routineMangledName_3492.mAttribute_string.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("declaration-primitive.galgas", 100)) ;
    GALGAS_modeMap temp_3 = GALGAS_modeMap::constructor_emptyMap (SOURCE_FILE ("declaration-primitive.galgas", 102)) ;
    temp_3.addAssign_operation (function_userModeName (inCompiler COMMA_SOURCE_FILE ("declaration-primitive.galgas", 102)).getter_nowhere (SOURCE_FILE ("declaration-primitive.galgas", 102)), inCompiler  COMMA_SOURCE_FILE ("declaration-primitive.galgas", 102)) ;
    temp_3.addAssign_operation (function_kernelModeName (inCompiler COMMA_SOURCE_FILE ("declaration-primitive.galgas", 102)).getter_nowhere (SOURCE_FILE ("declaration-primitive.galgas", 102)), inCompiler  COMMA_SOURCE_FILE ("declaration-primitive.galgas", 102)) ;
    GALGAS_modeMap var_modeMap_4235 = temp_3 ;
    GALGAS_unifiedTypeMap_2D_proxy temp_4 ;
    const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, enumerator_3448.current (HERE).mAttribute_mReturnTypeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_5) {
      temp_4 = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-primitive.galgas", 105)) ;
    }else if (kBoolFalse == test_5) {
      temp_4 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.mAttribute_mTypeMap, enumerator_3448.current (HERE).mAttribute_mReturnTypeName, inCompiler  COMMA_SOURCE_FILE ("declaration-primitive.galgas", 107)) ;
    }
    GALGAS_unifiedTypeMap_2D_proxy var_returnType_4339 = temp_4 ;
    {
    ioArgument_ioContext.mAttribute_mRoutineMapForContext.setter_insertKey (var_routineMangledName_3492, var_routineMangledName_3492, enumerator_3448.current (HERE).mAttribute_mPublic, var_modeMap_4235, var_signature_3718, GALGAS_routineKind::constructor_primitive (SOURCE_FILE ("declaration-primitive.galgas", 115)), GALGAS_bool (false), var_returnType_4339, GALGAS_bool (false), GALGAS_bool (true), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("declaration-primitive.galgas", 109)) ;
    }
    enumerator_3448.gotoNextObject () ;
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
  cEnumerator_primitiveDeclarationListAST enumerator_5581 (temp_0, kEnumeration_up) ;
  while (enumerator_5581.hasCurrentObject ()) {
    GALGAS_bool var_warnIfUnused_5602 = GALGAS_bool (true) ;
    cEnumerator_lstringlist enumerator_5673 (enumerator_5581.current (HERE).mAttribute_mPrimitiveNameAttributeList, kEnumeration_up) ;
    while (enumerator_5673.hasCurrentObject ()) {
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_5673.current_mValue (HERE).mAttribute_string.objectCompare (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-primitive.galgas", 138)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        const enumGalgasBool test_2 = var_warnIfUnused_5602.operator_not (SOURCE_FILE ("declaration-primitive.galgas", 139)).boolEnum () ;
        if (kBoolTrue == test_2) {
          inCompiler->emitSemanticError (enumerator_5673.current_mValue (HERE).getter_location (SOURCE_FILE ("declaration-primitive.galgas", 140)), GALGAS_string ("duplicate @").add_operation (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-primitive.galgas", 140)), inCompiler COMMA_SOURCE_FILE ("declaration-primitive.galgas", 140)).add_operation (GALGAS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("declaration-primitive.galgas", 140))  COMMA_SOURCE_FILE ("declaration-primitive.galgas", 140)) ;
        }
        var_warnIfUnused_5602 = GALGAS_bool (false) ;
      }else if (kBoolFalse == test_1) {
        inCompiler->emitSemanticError (enumerator_5673.current_mValue (HERE).getter_location (SOURCE_FILE ("declaration-primitive.galgas", 144)), GALGAS_string ("unknown attribute; available attribute is @").add_operation (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-primitive.galgas", 144)), inCompiler COMMA_SOURCE_FILE ("declaration-primitive.galgas", 144))  COMMA_SOURCE_FILE ("declaration-primitive.galgas", 144)) ;
      }
      enumerator_5673.gotoNextObject () ;
    }
    {
    GALGAS_lstringlist temp_3 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("declaration-primitive.galgas", 150)) ;
    temp_3.addAssign_operation (function_kernelModeName (inCompiler COMMA_SOURCE_FILE ("declaration-primitive.galgas", 150)).getter_nowhere (SOURCE_FILE ("declaration-primitive.galgas", 150))  COMMA_SOURCE_FILE ("declaration-primitive.galgas", 150)) ;
    routine_routineSemanticAnalysis (inArgument_inReceiverType, GALGAS_routineKind::constructor_primitive (SOURCE_FILE ("declaration-primitive.galgas", 149)), temp_3, enumerator_5581.current (HERE).mAttribute_mPrimitiveName, enumerator_5581.current (HERE).mAttribute_mPrimitiveFormalArgumentList, enumerator_5581.current (HERE).mAttribute_mReturnTypeName, enumerator_5581.current (HERE).mAttribute_mPrimitiveInstructionList, enumerator_5581.current (HERE).mAttribute_mEndOfPrimitiveDeclaration, GALGAS_bool (true), GALGAS_bool (true), var_warnIfUnused_5602, GALGAS_bool (true), GALGAS_bool (false), GALGAS_accessKind::constructor_readWriteAccess (SOURCE_FILE ("declaration-primitive.galgas", 161)), constinArgument_inSemanticContext, ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct, inCompiler  COMMA_SOURCE_FILE ("declaration-primitive.galgas", 147)) ;
    }
    enumerator_5581.gotoNextObject () ;
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
  cEnumerator_routineMapIR enumerator_7189 (temp_0, kEnumeration_up) ;
  while (enumerator_7189.hasCurrentObject ()) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_7189.current (HERE).mAttribute_mKind.objectCompare (GALGAS_routineKind::constructor_primitive (SOURCE_FILE ("declaration-primitive.galgas", 178)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_string var_primitiveImplementationName_7269 = function_llvmNameForPrimitiveImplementation (enumerator_7189.current (HERE).mAttribute_mRoutineNameForGeneration.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("declaration-primitive.galgas", 179)) ;
      GALGAS_string var_primitiveCallName_7380 = function_llvmNameForPrimitiveCall (enumerator_7189.current (HERE).mAttribute_mRoutineNameForGeneration.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("declaration-primitive.galgas", 180)) ;
      ioArgument_ioServiceList.addAssign_operation (var_primitiveCallName_7380, var_primitiveImplementationName_7269  COMMA_SOURCE_FILE ("declaration-primitive.galgas", 181)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (var_primitiveImplementationName_7269, inCompiler COMMA_SOURCE_FILE ("declaration-primitive.galgas", 182)), inCompiler  COMMA_SOURCE_FILE ("declaration-primitive.galgas", 182)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("declare"), inCompiler  COMMA_SOURCE_FILE ("declaration-primitive.galgas", 183)) ;
      const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_7189.current (HERE).mAttribute_mReturnType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-primitive.galgas", 184)))).boolEnum () ;
      if (kBoolTrue == test_2) {
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" void"), inCompiler  COMMA_SOURCE_FILE ("declaration-primitive.galgas", 185)) ;
      }else if (kBoolFalse == test_2) {
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ").add_operation (enumerator_7189.current (HERE).mAttribute_mReturnType.getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("declaration-primitive.galgas", 187)), inCompiler COMMA_SOURCE_FILE ("declaration-primitive.galgas", 187)), inCompiler  COMMA_SOURCE_FILE ("declaration-primitive.galgas", 187)) ;
      }
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" @").add_operation (var_primitiveCallName_7380, inCompiler COMMA_SOURCE_FILE ("declaration-primitive.galgas", 189)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("declaration-primitive.galgas", 189)), inCompiler  COMMA_SOURCE_FILE ("declaration-primitive.galgas", 189)) ;
      GALGAS_string var_typeName_7854 = enumerator_7189.current (HERE).mAttribute_lkey.mAttribute_string.getter_stringByDeletingPathExtension (SOURCE_FILE ("declaration-primitive.galgas", 190)) ;
      GALGAS_bool var_first_7926 = GALGAS_bool (kIsEqual, var_typeName_7854.objectCompare (GALGAS_string::makeEmptyString ())) ;
      const enumGalgasBool test_3 = var_first_7926.operator_not (SOURCE_FILE ("declaration-primitive.galgas", 192)).boolEnum () ;
      if (kBoolTrue == test_3) {
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("%").add_operation (var_typeName_7854.getter_assemblerRepresentation (SOURCE_FILE ("declaration-primitive.galgas", 193)), inCompiler COMMA_SOURCE_FILE ("declaration-primitive.galgas", 193)).add_operation (GALGAS_string (" * %self"), inCompiler COMMA_SOURCE_FILE ("declaration-primitive.galgas", 193)), inCompiler  COMMA_SOURCE_FILE ("declaration-primitive.galgas", 193)) ;
      }
      cEnumerator_procFormalArgumentListForGeneration enumerator_8117 (enumerator_7189.current (HERE).mAttribute_mFormalArgumentListForGeneration, kEnumeration_up) ;
      while (enumerator_8117.hasCurrentObject ()) {
        const enumGalgasBool test_4 = var_first_7926.boolEnum () ;
        if (kBoolTrue == test_4) {
          var_first_7926 = GALGAS_bool (false) ;
        }else if (kBoolFalse == test_4) {
          ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-primitive.galgas", 196)) ;
        }
        switch (enumerator_8117.current_mFormalArgumentKind (HERE).enumValue ()) {
        case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
          break ;
        case GALGAS_procFormalArgumentPassingMode::kEnum_input:
          {
            ioArgument_ioLLVMcode.plusAssign_operation(enumerator_8117.current_mFormalArgumentType (HERE).getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("declaration-primitive.galgas", 199)).add_operation (GALGAS_string (" %in."), inCompiler COMMA_SOURCE_FILE ("declaration-primitive.galgas", 199)).add_operation (enumerator_8117.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-primitive.galgas", 199)), inCompiler  COMMA_SOURCE_FILE ("declaration-primitive.galgas", 199)) ;
          }
          break ;
        case GALGAS_procFormalArgumentPassingMode::kEnum_output:
          {
            ioArgument_ioLLVMcode.plusAssign_operation(enumerator_8117.current_mFormalArgumentType (HERE).getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("declaration-primitive.galgas", 201)).add_operation (GALGAS_string (" * %"), inCompiler COMMA_SOURCE_FILE ("declaration-primitive.galgas", 201)).add_operation (function_llvmNameForLocalVariable (enumerator_8117.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-primitive.galgas", 201)), inCompiler COMMA_SOURCE_FILE ("declaration-primitive.galgas", 201)), inCompiler  COMMA_SOURCE_FILE ("declaration-primitive.galgas", 201)) ;
          }
          break ;
        case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
          {
            ioArgument_ioLLVMcode.plusAssign_operation(enumerator_8117.current_mFormalArgumentType (HERE).getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("declaration-primitive.galgas", 203)).add_operation (GALGAS_string (" * %"), inCompiler COMMA_SOURCE_FILE ("declaration-primitive.galgas", 203)).add_operation (function_llvmNameForLocalVariable (enumerator_8117.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-primitive.galgas", 203)), inCompiler COMMA_SOURCE_FILE ("declaration-primitive.galgas", 203)), inCompiler  COMMA_SOURCE_FILE ("declaration-primitive.galgas", 203)) ;
          }
          break ;
        }
        enumerator_8117.gotoNextObject () ;
      }
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("declaration-primitive.galgas", 206)), inCompiler COMMA_SOURCE_FILE ("declaration-primitive.galgas", 206)).add_operation (GALGAS_string ("\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("declaration-primitive.galgas", 206)), inCompiler  COMMA_SOURCE_FILE ("declaration-primitive.galgas", 206)) ;
    }
    enumerator_7189.gotoNextObject () ;
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
  cEnumerator_guardDeclarationListAST enumerator_2746 (temp_0, kEnumeration_up) ;
  while (enumerator_2746.hasCurrentObject ()) {
    cEnumerator_procFormalArgumentList enumerator_2816 (enumerator_2746.current_mGuardFormalArgumentList (HERE), kEnumeration_up) ;
    while (enumerator_2816.hasCurrentObject ()) {
      GALGAS_lstring var_typeName_2835 = GALGAS_lstring::constructor_new (GALGAS_string ("$").add_operation (enumerator_2816.current_mFormalArgumentTypeName (HERE).getter_string (SOURCE_FILE ("declaration-guard.galgas", 83)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 83)), enumerator_2816.current_mFormalArgumentTypeName (HERE).mAttribute_location  COMMA_SOURCE_FILE ("declaration-guard.galgas", 83)) ;
      {
      ioArgument_ioGraph.setter_noteNode (var_typeName_2835 COMMA_SOURCE_FILE ("declaration-guard.galgas", 84)) ;
      }
      enumerator_2816.gotoNextObject () ;
    }
    extensionMethod_noteInstructionListTypesInPrecedenceGraph (enumerator_2746.current_mGuardInstructionList (HERE), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 86)) ;
    enumerator_2746.gotoNextObject () ;
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
  cEnumerator_guardDeclarationListAST enumerator_3571 (temp_0, kEnumeration_up) ;
  while (enumerator_3571.hasCurrentObject ()) {
    GALGAS_lstring temp_1 ;
    const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, constinArgument_inReceiverTypeName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_2) {
      temp_1 = enumerator_3571.current (HERE).mAttribute_mGuardName ;
    }else if (kBoolFalse == test_2) {
      temp_1 = GALGAS_lstring::constructor_new (constinArgument_inReceiverTypeName.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 103)).add_operation (enumerator_3571.current (HERE).mAttribute_mGuardName.getter_string (SOURCE_FILE ("declaration-guard.galgas", 103)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 103)), enumerator_3571.current (HERE).mAttribute_mGuardName.mAttribute_location  COMMA_SOURCE_FILE ("declaration-guard.galgas", 103)) ;
    }
    GALGAS_lstring var_guardMangledName_3613 = temp_1 ;
    var_guardMangledName_3613.mAttribute_string.plusAssign_operation(GALGAS_string ("("), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 105)) ;
    GALGAS_procedureSignature var_signature_3850 = GALGAS_procedureSignature::constructor_emptyList (SOURCE_FILE ("declaration-guard.galgas", 106)) ;
    cEnumerator_procFormalArgumentList enumerator_3962 (enumerator_3571.current (HERE).mAttribute_mGuardFormalArgumentList, kEnumeration_up) ;
    while (enumerator_3962.hasCurrentObject ()) {
      GALGAS_unifiedTypeMap_2D_proxy var_typeProxy_3982 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.mAttribute_mTypeMap, enumerator_3962.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 108)) ;
      var_signature_3850.addAssign_operation (enumerator_3962.current_mFormalArgumentPassingMode (HERE), enumerator_3962.current_mSelector (HERE).mAttribute_string, var_typeProxy_3982  COMMA_SOURCE_FILE ("declaration-guard.galgas", 109)) ;
      var_guardMangledName_3613.mAttribute_string.plusAssign_operation(extensionGetter_formalPassingModeString (enumerator_3962.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 110)).add_operation (enumerator_3962.current_mSelector (HERE).getter_string (SOURCE_FILE ("declaration-guard.galgas", 110)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 110)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 110)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 110)) ;
      enumerator_3962.gotoNextObject () ;
    }
    var_guardMangledName_3613.mAttribute_string.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 112)) ;
    {
    ioArgument_ioContext.mAttribute_mGuardMapForContext.setter_insertKey (var_guardMangledName_3613, enumerator_3571.current (HERE).mAttribute_mIsPublic, var_signature_3850, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 114)) ;
    }
    enumerator_3571.gotoNextObject () ;
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
  cEnumerator_guardDeclarationListAST enumerator_5102 (temp_0, kEnumeration_up) ;
  while (enumerator_5102.hasCurrentObject ()) {
    GALGAS_bool var_warnIfUnused_5123 = GALGAS_bool (true) ;
    cEnumerator_lstringlist enumerator_5182 (enumerator_5102.current (HERE).mAttribute_mGuardAttributeList, kEnumeration_up) ;
    while (enumerator_5182.hasCurrentObject ()) {
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_5182.current_mValue (HERE).mAttribute_string.objectCompare (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 135)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        const enumGalgasBool test_2 = var_warnIfUnused_5123.operator_not (SOURCE_FILE ("declaration-guard.galgas", 136)).boolEnum () ;
        if (kBoolTrue == test_2) {
          inCompiler->emitSemanticError (enumerator_5182.current_mValue (HERE).getter_location (SOURCE_FILE ("declaration-guard.galgas", 137)), GALGAS_string ("duplicate @").add_operation (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 137)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 137)).add_operation (GALGAS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 137))  COMMA_SOURCE_FILE ("declaration-guard.galgas", 137)) ;
        }
        var_warnIfUnused_5123 = GALGAS_bool (false) ;
      }else if (kBoolFalse == test_1) {
        inCompiler->emitSemanticError (enumerator_5182.current_mValue (HERE).getter_location (SOURCE_FILE ("declaration-guard.galgas", 141)), GALGAS_string ("unknown attribute; available attribute is @").add_operation (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 141)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 141))  COMMA_SOURCE_FILE ("declaration-guard.galgas", 141)) ;
      }
      enumerator_5182.gotoNextObject () ;
    }
    {
    routine_guardSemanticAnalysis (inArgument_inReceiverType, enumerator_5102.current (HERE).mAttribute_mGuardName, enumerator_5102.current (HERE).mAttribute_mGuardFormalArgumentList, enumerator_5102.current (HERE).mAttribute_mGuardKind, enumerator_5102.current (HERE).mAttribute_mGuardInstructionList, enumerator_5102.current (HERE).mAttribute_mEndOfGuardDeclaration, var_warnIfUnused_5123, constinArgument_inSemanticContext, ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct, inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 144)) ;
    }
    enumerator_5102.gotoNextObject () ;
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
  cEnumerator_guardMapIR enumerator_18169 (temp_0, kEnumeration_up) ;
  while (enumerator_18169.hasCurrentObject ()) {
    switch (enumerator_18169.current (HERE).mAttribute_mGuardKindGenerationIR.enumValue ()) {
    case GALGAS_guardKindGenerationIR::kNotBuilt:
      break ;
    case GALGAS_guardKindGenerationIR::kEnum_convenienceGuard:
      {
      }
      break ;
    case GALGAS_guardKindGenerationIR::kEnum_baseGuard:
      {
        GALGAS_string var_guardImplementationName_18302 = function_llvmNameForGuardImplementation (enumerator_18169.current (HERE).mAttribute_lkey.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 472)) ;
        GALGAS_string var_guardCallName_18380 = function_llvmNameForGuardCall (enumerator_18169.current (HERE).mAttribute_lkey.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 473)) ;
        ioArgument_ioServiceList.addAssign_operation (var_guardCallName_18380, var_guardImplementationName_18302  COMMA_SOURCE_FILE ("declaration-guard.galgas", 474)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (var_guardImplementationName_18302, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 475)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 475)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("declare i1 @").add_operation (var_guardCallName_18380, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 476)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 476)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 476)) ;
        GALGAS_string var_typeName_18628 = enumerator_18169.current (HERE).mAttribute_lkey.mAttribute_string.getter_stringByDeletingPathExtension (SOURCE_FILE ("declaration-guard.galgas", 477)) ;
        GALGAS_bool var_first_18696 = GALGAS_bool (kIsEqual, var_typeName_18628.objectCompare (GALGAS_string::makeEmptyString ())) ;
        const enumGalgasBool test_1 = var_first_18696.operator_not (SOURCE_FILE ("declaration-guard.galgas", 479)).boolEnum () ;
        if (kBoolTrue == test_1) {
          ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("%").add_operation (var_typeName_18628.getter_assemblerRepresentation (SOURCE_FILE ("declaration-guard.galgas", 480)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 480)).add_operation (GALGAS_string (" * %self"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 480)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 480)) ;
        }
        cEnumerator_procFormalArgumentListForGeneration enumerator_18883 (enumerator_18169.current (HERE).mAttribute_mFormalArgumentListForGeneration, kEnumeration_up) ;
        while (enumerator_18883.hasCurrentObject ()) {
          const enumGalgasBool test_2 = var_first_18696.boolEnum () ;
          if (kBoolTrue == test_2) {
            var_first_18696 = GALGAS_bool (false) ;
          }else if (kBoolFalse == test_2) {
            ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 483)) ;
          }
          switch (enumerator_18883.current_mFormalArgumentKind (HERE).enumValue ()) {
          case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
            break ;
          case GALGAS_procFormalArgumentPassingMode::kEnum_input:
            {
              ioArgument_ioLLVMcode.plusAssign_operation(enumerator_18883.current_mFormalArgumentType (HERE).getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 486)).add_operation (GALGAS_string (" %in."), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 486)).add_operation (enumerator_18883.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 486)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 486)) ;
            }
            break ;
          case GALGAS_procFormalArgumentPassingMode::kEnum_output:
            {
              ioArgument_ioLLVMcode.plusAssign_operation(enumerator_18883.current_mFormalArgumentType (HERE).getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 488)).add_operation (GALGAS_string (" * %"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 488)).add_operation (function_llvmNameForLocalVariable (enumerator_18883.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 488)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 488)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 488)) ;
            }
            break ;
          case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
            {
              ioArgument_ioLLVMcode.plusAssign_operation(enumerator_18883.current_mFormalArgumentType (HERE).getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 490)).add_operation (GALGAS_string (" * %"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 490)).add_operation (function_llvmNameForLocalVariable (enumerator_18883.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 490)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 490)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 490)) ;
            }
            break ;
          }
          enumerator_18883.gotoNextObject () ;
        }
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 493)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 493)).add_operation (GALGAS_string ("\n"
          "\n"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 493)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 493)) ;
      }
      break ;
    }
    extensionMethod_llvmCodeGeneration (enumerator_18169.current (HERE), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 495)) ;
    enumerator_18169.gotoNextObject () ;
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
  cEnumerator_instructionListAST enumerator_2213 (temp_0, kEnumeration_up) ;
  while (enumerator_2213.hasCurrentObject ()) {
    callExtensionMethod_noteInstructionTypesInPrecedenceGraph ((const cPtr_instructionAST *) enumerator_2213.current_mInstruction (HERE).ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instructionList.galgas", 49)) ;
    enumerator_2213.gotoNextObject () ;
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
  cEnumerator_instructionListAST enumerator_4284 (temp_0, kEnumeration_up) ;
  while (enumerator_4284.hasCurrentObject ()) {
    {
    extensionSetter_appendSourceLineComment (ioArgument_ioInstructionGenerationList, enumerator_4284.current_mInstructionLocation (HERE), inCompiler COMMA_SOURCE_FILE ("instructionList.galgas", 91)) ;
    }
    callExtensionMethod_analyze ((const cPtr_instructionAST *) enumerator_4284.current_mInstruction (HERE).ptr (), constinArgument_inSelfType, constinArgument_inRoutineCanMutateProperties, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowPanic, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, inCompiler COMMA_SOURCE_FILE ("instructionList.galgas", 92)) ;
    enumerator_4284.gotoNextObject () ;
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
  cEnumerator_instructionListAST enumerator_5859 (temp_0, kEnumeration_up) ;
  while (enumerator_5859.hasCurrentObject ()) {
    {
    extensionSetter_appendSourceLineComment (ioArgument_ioInstructionGenerationList, enumerator_5859.current_mInstructionLocation (HERE), inCompiler COMMA_SOURCE_FILE ("instructionList.galgas", 129)) ;
    }
    callExtensionMethod_analyze ((const cPtr_instructionAST *) enumerator_5859.current_mInstruction (HERE).ptr (), constinArgument_inSelfType, constinArgument_inRoutineCanMutateProperties, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowPanic, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, inCompiler COMMA_SOURCE_FILE ("instructionList.galgas", 130)) ;
    enumerator_5859.gotoNextObject () ;
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
  cEnumerator_instructionListIR enumerator_7022 (temp_0, kEnumeration_up) ;
  while (enumerator_7022.hasCurrentObject ()) {
    callExtensionMethod_llvmInstructionCode ((const cPtr_abstractInstructionIR *) enumerator_7022.current_mInstructionGeneration (HERE).ptr (), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instructionList.galgas", 157)) ;
    enumerator_7022.gotoNextObject () ;
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
  cEnumerator_sectionDeclarationListAST enumerator_2377 (temp_0, kEnumeration_up) ;
  while (enumerator_2377.hasCurrentObject ()) {
    cEnumerator_procFormalArgumentList enumerator_2449 (enumerator_2377.current_mSectionFormalArgumentList (HERE), kEnumeration_up) ;
    while (enumerator_2449.hasCurrentObject ()) {
      GALGAS_lstring var_typeName_2468 = GALGAS_lstring::constructor_new (GALGAS_string ("$").add_operation (enumerator_2449.current_mFormalArgumentTypeName (HERE).getter_string (SOURCE_FILE ("context-routines.galgas", 53)), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 53)), enumerator_2449.current_mFormalArgumentTypeName (HERE).mAttribute_location  COMMA_SOURCE_FILE ("context-routines.galgas", 53)) ;
      {
      ioArgument_ioGraph.setter_noteNode (var_typeName_2468 COMMA_SOURCE_FILE ("context-routines.galgas", 54)) ;
      }
      enumerator_2449.gotoNextObject () ;
    }
    extensionMethod_noteInstructionListTypesInPrecedenceGraph (enumerator_2377.current_mSectionInstructionList (HERE), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 56)) ;
    enumerator_2377.gotoNextObject () ;
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
  cEnumerator_routineMapIR enumerator_8820 (temp_0, kEnumeration_up) ;
  while (enumerator_8820.hasCurrentObject ()) {
    extensionMethod_llvmCodeGeneration (enumerator_8820.current (HERE), ioArgument_ioLLVMcode, ioArgument_ioAssemblerCode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 232)) ;
    enumerator_8820.gotoNextObject () ;
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
      inCompiler->emitSemanticError (extensionGetter_location (constinArgument_inTargetReference, inCompiler COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 11)), GALGAS_string ("<<@instructionListIR appendStoreFromReference selfObject>>")  COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 11)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_globalVariableReference:
    {
      const cEnumAssociatedValues_objectIR_globalVariableReference * extractPtr_617 = (const cEnumAssociatedValues_objectIR_globalVariableReference *) (constinArgument_inTargetReference.unsafePointer ()) ;
      const GALGAS_unifiedTypeMap_2D_proxy extractedValue_type = extractPtr_617->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_plmName = extractPtr_617->mAssociatedValue1 ;
      {
      extensionSetter_appendStoreGlobalVariable (ioObject, extractedValue_plmName.getter_string (SOURCE_FILE ("intermediate-load-store.galgas", 14)), extractedValue_type, constinArgument_inValue, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 14)) ;
      }
    }
    break ;
  case GALGAS_objectIR::kEnum_localVariableReference:
    {
      const cEnumAssociatedValues_objectIR_localVariableReference * extractPtr_748 = (const cEnumAssociatedValues_objectIR_localVariableReference *) (constinArgument_inTargetReference.unsafePointer ()) ;
      const GALGAS_unifiedTypeMap_2D_proxy extractedValue_type = extractPtr_748->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_plmName = extractPtr_748->mAssociatedValue1 ;
      {
      extensionSetter_appendStoreLocalVariable (ioObject, extractedValue_plmName.getter_string (SOURCE_FILE ("intermediate-load-store.galgas", 16)), extractedValue_type, constinArgument_inValue, inCompiler COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 16)) ;
      }
    }
    break ;
  case GALGAS_objectIR::kEnum_temporaryReference:
    {
      const cEnumAssociatedValues_objectIR_temporaryReference * extractPtr_918 = (const cEnumAssociatedValues_objectIR_temporaryReference *) (constinArgument_inTargetReference.unsafePointer ()) ;
      const GALGAS_unifiedTypeMap_2D_proxy extractedValue_type = extractPtr_918->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_llvmName = extractPtr_918->mAssociatedValue1 ;
      const GALGAS_bool extractedValue_volatile = extractPtr_918->mAssociatedValue3 ;
      {
      extensionSetter_appendStoreTemporaryReference (ioObject, extractedValue_type, extractedValue_llvmName.getter_string (SOURCE_FILE ("intermediate-load-store.galgas", 18)), constinArgument_inValue, extractedValue_volatile, inCompiler COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 18)) ;
      }
    }
    break ;
  case GALGAS_objectIR::kEnum_registerReference:
    {
      const cEnumAssociatedValues_objectIR_registerReference * extractPtr_1172 = (const cEnumAssociatedValues_objectIR_registerReference *) (constinArgument_inTargetReference.unsafePointer ()) ;
      const GALGAS_unifiedTypeMap_2D_proxy extractedValue_type = extractPtr_1172->mAssociatedValue0 ;
      const GALGAS_bigint extractedValue_address = extractPtr_1172->mAssociatedValue4 ;
      const GALGAS_uint extractedValue_arraySize = extractPtr_1172->mAssociatedValue6 ;
      const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, extractedValue_arraySize.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_0) {
        inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("register array requires subscripting")  COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 21)) ;
      }
      {
      extensionSetter_appendStoreVolatileRegister (ioObject, extractedValue_type, extractedValue_address, constinArgument_inValue, inCompiler COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 23)) ;
      }
    }
    break ;
  case GALGAS_objectIR::kEnum_property:
    {
      inCompiler->emitSemanticError (extensionGetter_location (constinArgument_inTargetReference, inCompiler COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 26)), GALGAS_string ("<<@instructionListIR llvmGlobalObjectValue property>>")  COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 26)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmTemporaryValue:
    {
      const cEnumAssociatedValues_objectIR_llvmTemporaryValue * extractPtr_1437 = (const cEnumAssociatedValues_objectIR_llvmTemporaryValue *) (constinArgument_inTargetReference.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_llvmName = extractPtr_1437->mAssociatedValue1 ;
      inCompiler->emitSemanticError (extractedValue_llvmName.getter_location (SOURCE_FILE ("intermediate-load-store.galgas", 29)), GALGAS_string ("<<@instructionListIR llvmGlobalObjectValue llvmTemporaryValue>>")  COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 29)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_literalInteger:
    {
      inCompiler->emitSemanticError (extensionGetter_location (constinArgument_inTargetReference, inCompiler COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 31)), GALGAS_string ("<<@instructionListIR llvmGlobalObjectValue literalInteger>>")  COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 31)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmStructureConstant:
    {
      inCompiler->emitSemanticError (extensionGetter_location (constinArgument_inTargetReference, inCompiler COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 33)), GALGAS_string ("<<@instructionListIR llvmGlobalObjectValue llvmStructureConstant>>")  COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 33)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_literalString:
    {
      inCompiler->emitSemanticError (extensionGetter_location (constinArgument_inTargetReference, inCompiler COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 35)), GALGAS_string ("<<@instructionListIR llvmGlobalObjectValue literalString>>")  COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 35)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_zero:
    {
      inCompiler->emitSemanticError (extensionGetter_location (constinArgument_inTargetReference, inCompiler COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 37)), GALGAS_string ("<<@instructionListIR llvmGlobalObjectValue zero>>")  COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 37)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_possibleFunction:
    {
      inCompiler->emitSemanticError (extensionGetter_location (constinArgument_inTargetReference, inCompiler COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 39)), GALGAS_string ("<<@instructionListIR llvmGlobalObjectValue possibleFunction>>")  COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 39)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_null:
    {
      inCompiler->emitSemanticError (extensionGetter_location (constinArgument_inTargetReference, inCompiler COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 41)), GALGAS_string ("<<@instructionListIR llvmGlobalObjectValue null>>")  COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 41)) ;
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
      inCompiler->emitSemanticError (GALGAS_location::constructor_nowhere (SOURCE_FILE ("intermediate-load-store.galgas", 55)), GALGAS_string ("<<@instructionListIR appendLoadFromReference null>>")  COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 55)) ;
      outArgument_outResultingValue.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_objectIR::kEnum_possibleFunction:
    {
      const cEnumAssociatedValues_objectIR_possibleFunction * extractPtr_2806 = (const cEnumAssociatedValues_objectIR_possibleFunction *) (constinArgument_inSource.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_functionName = extractPtr_2806->mAssociatedValue1 ;
      inCompiler->emitSemanticError (extractedValue_functionName.getter_location (SOURCE_FILE ("intermediate-load-store.galgas", 57)), GALGAS_string ("<<@instructionListIR appendLoadFromReference possibleFunction>>")  COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 57)) ;
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
      const cEnumAssociatedValues_objectIR_globalVariableReference * extractPtr_3129 = (const cEnumAssociatedValues_objectIR_globalVariableReference *) (constinArgument_inSource.unsafePointer ()) ;
      const GALGAS_unifiedTypeMap_2D_proxy extractedValue_type = extractPtr_3129->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_name = extractPtr_3129->mAssociatedValue1 ;
      {
      routine_getNewTempVariable (extractedValue_type, extractedValue_name.getter_location (SOURCE_FILE ("intermediate-load-store.galgas", 62)), ioArgument_ioTemporaries, outArgument_outResultingValue, inCompiler  COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 62)) ;
      }
      {
      extensionSetter_appendLoadGlobalVariable (ioObject, outArgument_outResultingValue, extractedValue_name.getter_string (SOURCE_FILE ("intermediate-load-store.galgas", 66)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 63)) ;
      }
    }
    break ;
  case GALGAS_objectIR::kEnum_localVariableReference:
    {
      const cEnumAssociatedValues_objectIR_localVariableReference * extractPtr_3359 = (const cEnumAssociatedValues_objectIR_localVariableReference *) (constinArgument_inSource.unsafePointer ()) ;
      const GALGAS_unifiedTypeMap_2D_proxy extractedValue_type = extractPtr_3359->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_name = extractPtr_3359->mAssociatedValue1 ;
      {
      routine_getNewTempVariable (extractedValue_type, extractedValue_name.getter_location (SOURCE_FILE ("intermediate-load-store.galgas", 69)), ioArgument_ioTemporaries, outArgument_outResultingValue, inCompiler  COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 69)) ;
      }
      {
      extensionSetter_appendLoadLocalVariable (ioObject, outArgument_outResultingValue, extractedValue_name.getter_string (SOURCE_FILE ("intermediate-load-store.galgas", 73)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 70)) ;
      }
    }
    break ;
  case GALGAS_objectIR::kEnum_temporaryReference:
    {
      const cEnumAssociatedValues_objectIR_temporaryReference * extractPtr_3620 = (const cEnumAssociatedValues_objectIR_temporaryReference *) (constinArgument_inSource.unsafePointer ()) ;
      const GALGAS_unifiedTypeMap_2D_proxy extractedValue_type = extractPtr_3620->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_llvmName = extractPtr_3620->mAssociatedValue1 ;
      const GALGAS_bool extractedValue_volatile = extractPtr_3620->mAssociatedValue3 ;
      {
      routine_getNewTempVariable (extractedValue_type, extractedValue_llvmName.getter_location (SOURCE_FILE ("intermediate-load-store.galgas", 76)), ioArgument_ioTemporaries, outArgument_outResultingValue, inCompiler  COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 76)) ;
      }
      {
      extensionSetter_appendLoadFromTemporaryReference (ioObject, outArgument_outResultingValue, extractedValue_llvmName.getter_string (SOURCE_FILE ("intermediate-load-store.galgas", 80)), extractedValue_volatile, inCompiler COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 77)) ;
      }
    }
    break ;
  case GALGAS_objectIR::kEnum_registerReference:
    {
      const cEnumAssociatedValues_objectIR_registerReference * extractPtr_4024 = (const cEnumAssociatedValues_objectIR_registerReference *) (constinArgument_inSource.unsafePointer ()) ;
      const GALGAS_unifiedTypeMap_2D_proxy extractedValue_type = extractPtr_4024->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_registerName = extractPtr_4024->mAssociatedValue1 ;
      const GALGAS_bigint extractedValue_address = extractPtr_4024->mAssociatedValue4 ;
      const GALGAS_uint extractedValue_arraySize = extractPtr_4024->mAssociatedValue6 ;
      const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, extractedValue_arraySize.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_0) {
        inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("register array requires subscripting")  COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 84)) ;
        outArgument_outResultingValue.drop () ; // Release error dropped variable
      }else if (kBoolFalse == test_0) {
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
      const cEnumAssociatedValues_objectIR_property * extractPtr_4264 = (const cEnumAssociatedValues_objectIR_property *) (constinArgument_inSource.unsafePointer ()) ;
      const GALGAS_unifiedTypeMap_2D_proxy extractedValue_type = extractPtr_4264->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_plmName = extractPtr_4264->mAssociatedValue1 ;
      const GALGAS_uint extractedValue_index = extractPtr_4264->mAssociatedValue2 ;
      {
      routine_getNewTempVariable (extractedValue_type, extractedValue_plmName.getter_location (SOURCE_FILE ("intermediate-load-store.galgas", 94)), ioArgument_ioTemporaries, outArgument_outResultingValue, inCompiler  COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 94)) ;
      }
      {
      extensionSetter_appendGetPropertyReference (ioObject, outArgument_outResultingValue, constinArgument_inSource, extractedValue_plmName.getter_string (SOURCE_FILE ("intermediate-load-store.galgas", 99)), extractedValue_index.getter_string (SOURCE_FILE ("intermediate-load-store.galgas", 100)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 95)) ;
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
  cEnumerator_instructionListIR enumerator_1324 (temp_0, kEnumeration_up) ;
  while (enumerator_1324.hasCurrentObject ()) {
    callExtensionMethod_enterAccessibleEntities ((const cPtr_abstractInstructionIR *) enumerator_1324.current_mInstructionGeneration (HERE).ptr (), ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 25)) ;
    enumerator_1324.gotoNextObject () ;
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
  cEnumerator_functionDeclarationListAST enumerator_16207 (object->mAttribute_mFunctionDeclarationListAST, kEnumeration_up) ;
  while (enumerator_16207.hasCurrentObject ()) {
    GALGAS_bool var_warnIfUnused_16228 = GALGAS_bool (true) ;
    GALGAS_bool var_mutating_16252 = GALGAS_bool (false) ;
    GALGAS_bool var_accessProperties_16285 = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_16351 (enumerator_16207.current (HERE).mAttribute_mFunctionAttributeList, kEnumeration_up) ;
    while (enumerator_16351.hasCurrentObject ()) {
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_16351.current_mValue (HERE).mAttribute_string.objectCompare (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 419)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        const enumGalgasBool test_1 = var_warnIfUnused_16228.operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 420)).boolEnum () ;
        if (kBoolTrue == test_1) {
          inCompiler->emitSemanticError (enumerator_16351.current_mValue (HERE).getter_location (SOURCE_FILE ("type-structure-declaration.galgas", 421)), GALGAS_string ("duplicated @").add_operation (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 421)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 421)).add_operation (GALGAS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 421))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 421)) ;
        }
        var_warnIfUnused_16228 = GALGAS_bool (false) ;
      }else if (kBoolFalse == test_0) {
        const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_16351.current_mValue (HERE).mAttribute_string.objectCompare (function_userAccessAttribute (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 424)))).boolEnum () ;
        if (kBoolTrue == test_2) {
          const enumGalgasBool test_3 = var_accessProperties_16285.boolEnum () ;
          if (kBoolTrue == test_3) {
            inCompiler->emitSemanticError (enumerator_16351.current_mValue (HERE).getter_location (SOURCE_FILE ("type-structure-declaration.galgas", 426)), GALGAS_string ("duplicated @").add_operation (function_userAccessAttribute (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 426)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 426)).add_operation (GALGAS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 426))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 426)) ;
          }
          var_accessProperties_16285 = GALGAS_bool (true) ;
        }else if (kBoolFalse == test_2) {
          const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, enumerator_16351.current_mValue (HERE).mAttribute_string.objectCompare (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 429)))).boolEnum () ;
          if (kBoolTrue == test_4) {
            const enumGalgasBool test_5 = var_mutating_16252.boolEnum () ;
            if (kBoolTrue == test_5) {
              inCompiler->emitSemanticError (enumerator_16351.current_mValue (HERE).getter_location (SOURCE_FILE ("type-structure-declaration.galgas", 431)), GALGAS_string ("duplicated @").add_operation (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 431)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 431)).add_operation (GALGAS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 431))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 431)) ;
            }
            var_mutating_16252 = GALGAS_bool (true) ;
          }else if (kBoolFalse == test_4) {
            inCompiler->emitSemanticError (enumerator_16351.current_mValue (HERE).getter_location (SOURCE_FILE ("type-structure-declaration.galgas", 435)), GALGAS_string ("unknown attribute; available attributes are @").add_operation (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 435)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 435)).add_operation (GALGAS_string (", @"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 436)).add_operation (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 436)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 436)).add_operation (GALGAS_string (" and @"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 436)).add_operation (function_userAccessAttribute (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 436)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 436))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 435)) ;
          }
        }
      }
      enumerator_16351.gotoNextObject () ;
    }
    GALGAS_stringset var_modeSet_17240 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-structure-declaration.galgas", 439)) ;
    cEnumerator_lstringlist enumerator_17293 (enumerator_16207.current (HERE).mAttribute_mFunctionModeList, kEnumeration_up) ;
    while (enumerator_17293.hasCurrentObject ()) {
      var_modeSet_17240.addAssign_operation (enumerator_17293.current_mValue (HERE).mAttribute_string  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 441)) ;
      enumerator_17293.gotoNextObject () ;
    }
    const enumGalgasBool test_6 = var_modeSet_17240.getter_hasKey (function_userModeName (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 443)) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 443)).operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 443)).boolEnum () ;
    if (kBoolTrue == test_6) {
      const enumGalgasBool test_7 = var_accessProperties_16285.boolEnum () ;
      if (kBoolTrue == test_7) {
        inCompiler->emitSemanticError (enumerator_16207.current (HERE).mAttribute_mFunctionName.getter_location (SOURCE_FILE ("type-structure-declaration.galgas", 445)), GALGAS_string ("useless @").add_operation (function_userAccessAttribute (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 445)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 445)).add_operation (GALGAS_string (" attribute: function is never executed in `"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 446)).add_operation (function_userModeName (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 446)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 446)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 446))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 445)) ;
      }
      var_accessProperties_16285 = GALGAS_bool (true) ;
    }
    {
    routine_routineSemanticAnalysis (constinArgument_inStructureType, GALGAS_routineKind::constructor_function (SOURCE_FILE ("type-structure-declaration.galgas", 452)), enumerator_16207.current (HERE).mAttribute_mFunctionModeList, enumerator_16207.current (HERE).mAttribute_mFunctionName, enumerator_16207.current (HERE).mAttribute_mFunctionFormalArgumentList, enumerator_16207.current (HERE).mAttribute_mFunctionReturnTypeName, enumerator_16207.current (HERE).mAttribute_mFunctionInstructionList, enumerator_16207.current (HERE).mAttribute_mEndOfFunctionDeclaration, var_accessProperties_16285, var_mutating_16252, var_warnIfUnused_16228, GALGAS_bool (false), GALGAS_bool (false), GALGAS_accessKind::constructor_readWriteAccess (SOURCE_FILE ("type-structure-declaration.galgas", 464)), constinArgument_inContext, ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct, inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 450)) ;
    }
    enumerator_16207.gotoNextObject () ;
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
  GALGAS_classConstantMap var_classConstantMap_9353 = GALGAS_classConstantMap::constructor_emptyMap (SOURCE_FILE ("declaration-control-register.galgas", 243)) ;
  outArgument_outRegisterFieldMap = GALGAS_controlRegisterFieldMap::constructor_emptyMap (SOURCE_FILE ("declaration-control-register.galgas", 244)) ;
  outArgument_outRegisterBitSliceMap = GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("declaration-control-register.galgas", 245)) ;
  outArgument_outControlRegisterFieldList = GALGAS_controlRegisterFieldList::constructor_emptyList (SOURCE_FILE ("declaration-control-register.galgas", 246)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, inObject.mAttribute_mRegisterBitSliceList.getter_length (SOURCE_FILE ("declaration-control-register.galgas", 247)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_uint var_shiftCount_9537 = GALGAS_uint ((uint32_t) 0U) ;
    cEnumerator_controlRegisterBitSliceList enumerator_9582 (inObject.mAttribute_mRegisterBitSliceList, kEnumeration_down) ;
    while (enumerator_9582.hasCurrentObject ()) {
      switch (enumerator_9582.current_mRegisterBitSlice (HERE).enumValue ()) {
      case GALGAS_controlRegisterBitSlice::kNotBuilt:
        break ;
      case GALGAS_controlRegisterBitSlice::kEnum_unusedBits:
        {
          const cEnumAssociatedValues_controlRegisterBitSlice_unusedBits * extractPtr_9785 = (const cEnumAssociatedValues_controlRegisterBitSlice_unusedBits *) (enumerator_9582.current_mRegisterBitSlice (HERE).unsafePointer ()) ;
          const GALGAS_lbigint extractedValue_count = extractPtr_9785->mAssociatedValue0 ;
          var_shiftCount_9537 = var_shiftCount_9537.add_operation (extractedValue_count.mAttribute_bigint.getter_uint (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 252)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 252)) ;
          outArgument_outControlRegisterFieldList.addAssign_operation (extractedValue_count.mAttribute_bigint.getter_uint (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 253)), GALGAS_string ("\xE2""\x80""\x94""")  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 253)) ;
        }
        break ;
      case GALGAS_controlRegisterBitSlice::kEnum_namedBit:
        {
          const cEnumAssociatedValues_controlRegisterBitSlice_namedBit * extractPtr_10932 = (const cEnumAssociatedValues_controlRegisterBitSlice_namedBit *) (enumerator_9582.current_mRegisterBitSlice (HERE).unsafePointer ()) ;
          const GALGAS_lstring extractedValue_name = extractPtr_10932->mAssociatedValue0 ;
          const GALGAS_lbigint extractedValue_count = extractPtr_10932->mAssociatedValue1 ;
          GALGAS_uint var_bitCount_9848 = extractedValue_count.mAttribute_bigint.getter_uint (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 255)) ;
          const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_bitCount_9848.objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
          if (kBoolTrue == test_1) {
            {
            var_classConstantMap_9353.setter_insertKey (extractedValue_name, GALGAS_objectIR::constructor_literalInteger (ioArgument_ioRegisterType, GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 257)).left_shift_operation (var_shiftCount_9537 COMMA_SOURCE_FILE ("declaration-control-register.galgas", 257))  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 257)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 257)) ;
            }
          }
          outArgument_outControlRegisterFieldList.addAssign_operation (var_bitCount_9848, extractedValue_name.mAttribute_string  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 259)) ;
          {
          outArgument_outRegisterFieldMap.setter_insertKey (extractedValue_name, var_shiftCount_9537, var_bitCount_9848, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 260)) ;
          }
          GALGAS_sliceMap var_registerSubMap_10227 = GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("declaration-control-register.galgas", 265)) ;
          {
          var_registerSubMap_10227.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("shifted"), extractedValue_name.mAttribute_location  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 268)), GALGAS_llvmBinaryOperation::constructor_lshr (SOURCE_FILE ("declaration-control-register.galgas", 269)), var_shiftCount_9537.getter_bigint (SOURCE_FILE ("declaration-control-register.galgas", 270)), GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("declaration-control-register.galgas", 271)), ioArgument_ioRegisterType, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 267)) ;
          }
          {
          var_registerSubMap_10227.setter_insertKey (GALGAS_lstring::constructor_new (function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 276)), extractedValue_name.mAttribute_location  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 276)), GALGAS_llvmBinaryOperation::constructor_icmp_5F_ne (SOURCE_FILE ("declaration-control-register.galgas", 277)), GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 278)), GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("declaration-control-register.galgas", 279)), ioArgument_ioContext.mAttribute_mBooleanType, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 275)) ;
          }
          GALGAS_bigint var_mask_10685 = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 283)).left_shift_operation (var_bitCount_9848 COMMA_SOURCE_FILE ("declaration-control-register.galgas", 283)).substract_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 283)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 283)).left_shift_operation (var_shiftCount_9537 COMMA_SOURCE_FILE ("declaration-control-register.galgas", 283)) ;
          {
          outArgument_outRegisterBitSliceMap.setter_insertKey (extractedValue_name, GALGAS_llvmBinaryOperation::constructor_and (SOURCE_FILE ("declaration-control-register.galgas", 286)), var_mask_10685, var_registerSubMap_10227, ioArgument_ioRegisterType, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 284)) ;
          }
          var_shiftCount_9537 = var_shiftCount_9537.add_operation (var_bitCount_9848, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 291)) ;
        }
        break ;
      }
      enumerator_9582.gotoNextObject () ;
    }
    const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, constinArgument_inRegisterBitCount.objectCompare (var_shiftCount_9537)).boolEnum () ;
    if (kBoolTrue == test_2) {
      inCompiler->emitSemanticError (inObject.mAttribute_mRegisterBitSliceListLocation, GALGAS_string ("total bit slice count is ").add_operation (var_shiftCount_9537.getter_string (SOURCE_FILE ("declaration-control-register.galgas", 297)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 297)).add_operation (GALGAS_string (" (should be "), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 297)).add_operation (constinArgument_inRegisterBitCount.getter_string (SOURCE_FILE ("declaration-control-register.galgas", 297)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 297)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 297))  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 296)) ;
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
  GALGAS_unifiedTypeMap_2D_proxy var_registerType_11549 ;
  GALGAS_uint var_registerBitCount_11580 ;
  const GALGAS_controlRegisterDeclarationListAST_2D_element temp_0 = inObject ;
  extensionMethod_controlRegisterType (temp_0, ioArgument_ioContext, var_registerType_11549, var_registerBitCount_11580, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 308)) ;
  GALGAS_controlRegisterFieldMap var_registerFieldMap_11748 ;
  GALGAS_sliceMap var_registerBitSliceMap_11777 ;
  GALGAS_controlRegisterFieldList var_controlRegisterFieldList_11811 ;
  const GALGAS_controlRegisterDeclarationListAST_2D_element temp_1 = inObject ;
  extensionMethod_buildControlRegisterSliceMap (temp_1, ioArgument_ioContext, var_registerType_11549, var_registerBitCount_11580, var_registerFieldMap_11748, var_registerBitSliceMap_11777, var_controlRegisterFieldList_11811, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 310)) ;
  GALGAS_bigint var_maxRegisterAddress_11877 = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 319)).left_shift_operation (ioArgument_ioContext.mAttribute_mPointerSize COMMA_SOURCE_FILE ("declaration-control-register.galgas", 319)).substract_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 319)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 319)) ;
  cEnumerator_controlRegisterNameList enumerator_11954 (inObject.mAttribute_mRegisterNameList, kEnumeration_up) ;
  while (enumerator_11954.hasCurrentObject ()) {
    GALGAS_bool var_isReadOnly_11999 = GALGAS_bool (false) ;
    GALGAS_bool var_isAccessibleInUserMode_12038 = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_12090 (enumerator_11954.current (HERE).mAttribute_mAttributeList, kEnumeration_up) ;
    while (enumerator_12090.hasCurrentObject ()) {
      const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_12090.current_mValue (HERE).mAttribute_string.objectCompare (GALGAS_string ("ro"))).boolEnum () ;
      if (kBoolTrue == test_2) {
        const enumGalgasBool test_3 = var_isReadOnly_11999.boolEnum () ;
        if (kBoolTrue == test_3) {
          inCompiler->emitSemanticError (enumerator_12090.current_mValue (HERE).getter_location (SOURCE_FILE ("declaration-control-register.galgas", 327)), GALGAS_string ("duplicated attribute")  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 327)) ;
        }else if (kBoolFalse == test_3) {
          var_isReadOnly_11999 = GALGAS_bool (true) ;
        }
      }else if (kBoolFalse == test_2) {
        const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, enumerator_12090.current_mValue (HERE).mAttribute_string.objectCompare (function_userModeName (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 331)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          const enumGalgasBool test_5 = var_isAccessibleInUserMode_12038.boolEnum () ;
          if (kBoolTrue == test_5) {
            inCompiler->emitSemanticError (enumerator_12090.current_mValue (HERE).getter_location (SOURCE_FILE ("declaration-control-register.galgas", 333)), GALGAS_string ("duplicated attribute")  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 333)) ;
          }else if (kBoolFalse == test_5) {
            var_isAccessibleInUserMode_12038 = GALGAS_bool (true) ;
          }
        }else if (kBoolFalse == test_4) {
          inCompiler->emitSemanticError (enumerator_12090.current_mValue (HERE).getter_location (SOURCE_FILE ("declaration-control-register.galgas", 338)), GALGAS_string ("only @ro (read only) and @user (accessible in `user mode) attributes are accepted here")  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 338)) ;
        }
      }
      enumerator_12090.gotoNextObject () ;
    }
    GALGAS_objectIR var_addressExpressionResult_12861 ;
    callExtensionMethod_analyzeStaticExpression ((const cPtr_expressionAST *) enumerator_11954.current (HERE).mAttribute_mRegisterAddress.ptr (), enumerator_11954.current (HERE).mAttribute_mRegisterAddressLocation, ioArgument_ioContext, ioArgument_ioGlobalLiteralStringMap, var_addressExpressionResult_12861, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 342)) ;
    GALGAS_bigint var_registerAddress_12895 ;
    const enumGalgasBool test_6 = var_addressExpressionResult_12861.getter_isLiteralInteger (SOURCE_FILE ("declaration-control-register.galgas", 349)).operator_not (SOURCE_FILE ("declaration-control-register.galgas", 349)).boolEnum () ;
    if (kBoolTrue == test_6) {
      inCompiler->emitSemanticError (enumerator_11954.current (HERE).mAttribute_mRegisterAddressLocation, GALGAS_string ("control register address is not a static integer expression")  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 350)) ;
      var_registerAddress_12895.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_6) {
      GALGAS_unifiedTypeMap_2D_proxy joker_13155_1 ; // Joker input parameter
      var_addressExpressionResult_12861.method_literalInteger (joker_13155_1, var_registerAddress_12895, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 354)) ;
      const enumGalgasBool test_7 = GALGAS_bool (kIsStrictSup, var_registerAddress_12895.objectCompare (var_maxRegisterAddress_11877)).boolEnum () ;
      if (kBoolTrue == test_7) {
        inCompiler->emitSemanticError (enumerator_11954.current (HERE).mAttribute_mRegisterAddressLocation, GALGAS_string ("register address should be lower or equal to ").add_operation (var_maxRegisterAddress_11877.getter_hexString (SOURCE_FILE ("declaration-control-register.galgas", 358)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 358))  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 357)) ;
      }
    }
    GALGAS_bigint var_arraySize_13440 ;
    GALGAS_uint var_elementArraySize_13467 ;
    switch (enumerator_11954.current (HERE).mAttribute_mControlRegisterKind.enumValue ()) {
    case GALGAS_controlRegisterKind::kNotBuilt:
      break ;
    case GALGAS_controlRegisterKind::kEnum_scalar:
      {
        var_arraySize_13440 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 365)) ;
        var_elementArraySize_13467 = GALGAS_uint ((uint32_t) 0U) ;
      }
      break ;
    case GALGAS_controlRegisterKind::kEnum_registerArray:
      {
        const cEnumAssociatedValues_controlRegisterKind_registerArray * extractPtr_15548 = (const cEnumAssociatedValues_controlRegisterKind_registerArray *) (enumerator_11954.current (HERE).mAttribute_mControlRegisterKind.unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_arraySizeExpression = extractPtr_15548->mAssociatedValue0 ;
        const GALGAS_location extractedValue_arraySizeLocation = extractPtr_15548->mAssociatedValue1 ;
        const GALGAS_expressionAST extractedValue_arrayElementSizeExpression = extractPtr_15548->mAssociatedValue2 ;
        const GALGAS_location extractedValue_arrayElementSizeLocation = extractPtr_15548->mAssociatedValue3 ;
        GALGAS_objectIR var_sizeExpressionResult_14034 ;
        callExtensionMethod_analyzeStaticExpression ((const cPtr_expressionAST *) extractedValue_arraySizeExpression.ptr (), extractedValue_arraySizeLocation, ioArgument_ioContext, ioArgument_ioGlobalLiteralStringMap, var_sizeExpressionResult_14034, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 370)) ;
        const enumGalgasBool test_8 = var_sizeExpressionResult_14034.getter_isLiteralInteger (SOURCE_FILE ("declaration-control-register.galgas", 376)).operator_not (SOURCE_FILE ("declaration-control-register.galgas", 376)).boolEnum () ;
        if (kBoolTrue == test_8) {
          inCompiler->emitSemanticError (extractedValue_arraySizeLocation, GALGAS_string ("control register address is not a static integer expression")  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 377)) ;
          var_arraySize_13440.drop () ; // Release error dropped variable
        }else if (kBoolFalse == test_8) {
          GALGAS_unifiedTypeMap_2D_proxy joker_14266_1 ; // Joker input parameter
          var_sizeExpressionResult_14034.method_literalInteger (joker_14266_1, var_arraySize_13440, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 379)) ;
          const enumGalgasBool test_9 = GALGAS_bool (kIsStrictInf, var_arraySize_13440.objectCompare (GALGAS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 380)))).boolEnum () ;
          if (kBoolTrue == test_9) {
            inCompiler->emitSemanticError (extractedValue_arraySizeLocation, GALGAS_string ("control register array size should be a static integer expression >= 2, equal to a power of 2")  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 381)) ;
            var_arraySize_13440.drop () ; // Release error dropped variable
          }else if (kBoolFalse == test_9) {
            GALGAS_uint var_powerOfTwoForArraySize_14535 = var_arraySize_13440.substract_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 385)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 385)).getter_bitCountForUnsignedRepresentation (SOURCE_FILE ("declaration-control-register.galgas", 385)) ;
            const enumGalgasBool test_10 = GALGAS_bool (kIsNotEqual, var_arraySize_13440.objectCompare (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 386)).left_shift_operation (var_powerOfTwoForArraySize_14535 COMMA_SOURCE_FILE ("declaration-control-register.galgas", 386)))).boolEnum () ;
            if (kBoolTrue == test_10) {
              inCompiler->emitSemanticError (extractedValue_arraySizeLocation, GALGAS_string ("control register array size should be a static integer expression >= 2, equal to a power of 2")  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 387)) ;
              var_arraySize_13440.drop () ; // Release error dropped variable
            }
          }
        }
        GALGAS_objectIR var_elementArraySizeExpressionResult_15154 ;
        callExtensionMethod_analyzeStaticExpression ((const cPtr_expressionAST *) extractedValue_arrayElementSizeExpression.ptr (), extractedValue_arrayElementSizeLocation, ioArgument_ioContext, ioArgument_ioGlobalLiteralStringMap, var_elementArraySizeExpressionResult_15154, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 394)) ;
        const enumGalgasBool test_11 = var_elementArraySizeExpressionResult_15154.getter_isLiteralInteger (SOURCE_FILE ("declaration-control-register.galgas", 400)).operator_not (SOURCE_FILE ("declaration-control-register.galgas", 400)).boolEnum () ;
        if (kBoolTrue == test_11) {
          inCompiler->emitSemanticError (extractedValue_arrayElementSizeLocation, GALGAS_string ("element size is not a static integer expression")  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 401)) ;
          var_elementArraySize_13467.drop () ; // Release error dropped variable
        }else if (kBoolFalse == test_11) {
          GALGAS_bigint var_elementArraySizeAsBigInt_15470 ;
          GALGAS_unifiedTypeMap_2D_proxy joker_15432_1 ; // Joker input parameter
          var_elementArraySizeExpressionResult_15154.method_literalInteger (joker_15432_1, var_elementArraySizeAsBigInt_15470, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 405)) ;
          var_elementArraySize_13467 = var_elementArraySizeAsBigInt_15470.getter_uint (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 406)) ;
        }
      }
      break ;
    }
    {
    ioArgument_ioContext.mAttribute_mControlRegisterMap.setter_insertKey (enumerator_11954.current (HERE).mAttribute_mRegisterName, var_registerType_11549, var_isReadOnly_11999, var_isAccessibleInUserMode_12038, var_registerBitSliceMap_11777, var_registerFieldMap_11748, var_registerAddress_12895, var_controlRegisterFieldList_11811, var_registerBitCount_11580, var_arraySize_13440.getter_uint (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 419)), var_elementArraySize_13467, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 409)) ;
    }
    enumerator_11954.gotoNextObject () ;
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
  GALGAS_unifiedTypeMap_2D_proxy var_inferredType_13987 ;
  GALGAS_stringset var_executionModeSet_14030 ;
  GALGAS_allowedRoutineMap var_allowedProcedureMap_14084 ;
  GALGAS_allowedGuardMap var_allowedGuardMap_14132 ;
  GALGAS_allowedISRMap var_allowedISRMap_14176 ;
  GALGAS_allowedTaskMap var_allowedTaskMap_14222 ;
  GALGAS_objectIR var_expressionGeneratedCode_14269 ;
  GALGAS_bool var_isConstant_14307 ;
  GALGAS_bool joker_14332 ; // Joker input parameter
  constinArgument_inContext.mAttribute_mGlobalVariableMap.method_searchKey (inObject.mAttribute_mVarName, var_inferredType_13987, var_executionModeSet_14030, var_allowedProcedureMap_14084, var_allowedGuardMap_14132, var_allowedISRMap_14176, var_allowedTaskMap_14222, var_expressionGeneratedCode_14269, var_isConstant_14307, joker_14332, inCompiler COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 381)) ;
  {
  ioArgument_ioIntermediateCodeStruct.mAttribute_mGlobalVariableMap.setter_insertKey (inObject.mAttribute_mVarName, var_inferredType_13987, GALGAS_bool (kIsStrictSup, var_executionModeSet_14030.getter_count (SOURCE_FILE ("declaration-global-variable.galgas", 396)).objectCompare (GALGAS_uint ((uint32_t) 1U))), var_expressionGeneratedCode_14269, inCompiler COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 393)) ;
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
  {
  routine_initialVariableMap (var_routineNameForInvocationGraph_4606.mAttribute_string, constinArgument_inContext, GALGAS_bool (false), GALGAS_accessKind::constructor_readWriteAccess (SOURCE_FILE ("panic.galgas", 104)), GALGAS_bool (false), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("panic.galgas", 106)), var_variableMap_4955, inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 100)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_StaticStringType_5021 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mAttribute_mTypeMap, function_staticStringTypeName (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 110)).getter_nowhere (SOURCE_FILE ("panic.galgas", 110)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 110)) ;
  GALGAS_lstring var_codeArg_5126 = GALGAS_lstring::constructor_new (GALGAS_string ("CODE"), inObject.mAttribute_mPanicClauseName.mAttribute_location  COMMA_SOURCE_FILE ("panic.galgas", 111)) ;
  {
  var_variableMap_4955.setter_insertUsedConstantInputFormalArgument (var_codeArg_5126, constinArgument_inContext.mAttribute_mPanicCodeType, GALGAS_bool (true), GALGAS_objectIR::constructor_localVariableReference (constinArgument_inContext.mAttribute_mPanicCodeType, var_codeArg_5126  COMMA_SOURCE_FILE ("panic.galgas", 116)), constinArgument_inContext.mAttribute_mPanicCodeType.getter_copyable (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 117)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 112)) ;
  }
  GALGAS_lstring var_fileArg_5507 = GALGAS_lstring::constructor_new (GALGAS_string ("FILE"), inObject.mAttribute_mPanicClauseName.mAttribute_location  COMMA_SOURCE_FILE ("panic.galgas", 120)) ;
  {
  var_variableMap_4955.setter_insertUsedConstantInputFormalArgument (var_fileArg_5507, var_StaticStringType_5021, GALGAS_bool (true), GALGAS_objectIR::constructor_localVariableReference (var_StaticStringType_5021, var_fileArg_5507  COMMA_SOURCE_FILE ("panic.galgas", 125)), var_StaticStringType_5021.getter_copyable (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 126)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 121)) ;
  }
  GALGAS_lstring var_lineArg_5864 = GALGAS_lstring::constructor_new (GALGAS_string ("LINE"), inObject.mAttribute_mPanicClauseName.mAttribute_location  COMMA_SOURCE_FILE ("panic.galgas", 129)) ;
  {
  var_variableMap_4955.setter_insertUsedConstantInputFormalArgument (var_lineArg_5864, constinArgument_inContext.mAttribute_mPanicLineType, GALGAS_bool (true), GALGAS_objectIR::constructor_localVariableReference (constinArgument_inContext.mAttribute_mPanicLineType, var_lineArg_5864  COMMA_SOURCE_FILE ("panic.galgas", 134)), constinArgument_inContext.mAttribute_mPanicLineType.getter_copyable (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 135)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 130)) ;
  }
  const enumGalgasBool test_1 = ioArgument_ioTemporaries.mAttribute_mSubprogramInvocationGraph.getter_isNodeDefined (var_routineNameForInvocationGraph_4606.mAttribute_string COMMA_SOURCE_FILE ("panic.galgas", 139)).operator_not (SOURCE_FILE ("panic.galgas", 139)).boolEnum () ;
  if (kBoolTrue == test_1) {
    {
    ioArgument_ioTemporaries.mAttribute_mSubprogramInvocationGraph.setter_addNode (var_routineNameForInvocationGraph_4606, var_routineNameForInvocationGraph_4606, inCompiler COMMA_SOURCE_FILE ("panic.galgas", 140)) ;
    }
  }
  GALGAS_instructionListIR var_instructionGenerationList_6564 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("panic.galgas", 146)) ;
  GALGAS_allocaList var_initAllocaList_6598 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("panic.galgas", 147)) ;
  GALGAS_stringset temp_2 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("panic.galgas", 154)) ;
  temp_2.addAssign_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 154))  COMMA_SOURCE_FILE ("panic.galgas", 154)) ;
  extensionMethod_analyzeRoutineInstructionList (inObject.mAttribute_mPanicInstructionList, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("panic.galgas", 149)), GALGAS_bool (false), GALGAS_bool (false), var_routineNameForInvocationGraph_4606, constinArgument_inContext, temp_2, GALGAS_bool (false), ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct.mAttribute_mStaticStringMap, var_variableMap_4955, var_initAllocaList_6598, var_instructionGenerationList_6564, inCompiler COMMA_SOURCE_FILE ("panic.galgas", 148)) ;
  var_variableMap_4955.method_checkAutomatonStates (inObject.mAttribute_mEndOfPanicInstructions, inCompiler COMMA_SOURCE_FILE ("panic.galgas", 164)) ;
  const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, inObject.mAttribute_mPanicClauseName.mAttribute_string.objectCompare (GALGAS_string ("setup"))).boolEnum () ;
  if (kBoolTrue == test_3) {
    {
    ioArgument_ioTemporaries.mAttribute_mPanicSetupRoutinePriorityMap.setter_insertSetupKey (GALGAS_lstring::constructor_new (inObject.mAttribute_mPriority.mAttribute_bigint.getter_string (SOURCE_FILE ("panic.galgas", 168)), inObject.mAttribute_mLocationPriority  COMMA_SOURCE_FILE ("panic.galgas", 168)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 168)) ;
    }
    ioArgument_ioIntermediateCodeStruct.mAttribute_mPanicSetupInstructionListIR.plusAssign_operation(var_instructionGenerationList_6564, inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 169)) ;
  }else if (kBoolFalse == test_3) {
    const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, inObject.mAttribute_mPanicClauseName.mAttribute_string.objectCompare (GALGAS_string ("loop"))).boolEnum () ;
    if (kBoolTrue == test_4) {
      {
      ioArgument_ioTemporaries.mAttribute_mPanicLoopRoutinePriorityMap.setter_insertLoopKey (GALGAS_lstring::constructor_new (inObject.mAttribute_mPriority.mAttribute_bigint.getter_string (SOURCE_FILE ("panic.galgas", 171)), inObject.mAttribute_mLocationPriority  COMMA_SOURCE_FILE ("panic.galgas", 171)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 171)) ;
      }
      ioArgument_ioIntermediateCodeStruct.mAttribute_mPanicLoopInstructionListIR.plusAssign_operation(var_instructionGenerationList_6564, inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 172)) ;
    }else if (kBoolFalse == test_4) {
      inCompiler->emitSemanticError (inObject.mAttribute_mPanicClauseName.getter_location (SOURCE_FILE ("panic.galgas", 174)), GALGAS_string ("panic routine name should be \"setup\" or \"loop\"")  COMMA_SOURCE_FILE ("panic.galgas", 174)) ;
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
  {
  routine_initialVariableMap (var_routineNameForInvocationGraph_3250.mAttribute_string, constinArgument_inContext, GALGAS_bool (false), GALGAS_accessKind::constructor_readWriteAccess (SOURCE_FILE ("declaration-boot.galgas", 85)), GALGAS_bool (false), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-boot.galgas", 87)), var_variableMap_3840, inCompiler  COMMA_SOURCE_FILE ("declaration-boot.galgas", 81)) ;
  }
  GALGAS_instructionListIR var_instructionGenerationList_3921 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("declaration-boot.galgas", 91)) ;
  GALGAS_allocaList var_bootAllocaList_3955 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("declaration-boot.galgas", 92)) ;
  GALGAS_stringset temp_2 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("declaration-boot.galgas", 99)) ;
  temp_2.addAssign_operation (function_bootModeName (inCompiler COMMA_SOURCE_FILE ("declaration-boot.galgas", 99))  COMMA_SOURCE_FILE ("declaration-boot.galgas", 99)) ;
  extensionMethod_analyzeRoutineInstructionList (inObject.mAttribute_mInstructionList, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-boot.galgas", 94)), GALGAS_bool (false), GALGAS_bool (false), var_routineNameForInvocationGraph_3250, constinArgument_inContext, temp_2, GALGAS_bool (false), ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct.mAttribute_mStaticStringMap, var_variableMap_3840, var_bootAllocaList_3955, var_instructionGenerationList_3921, inCompiler COMMA_SOURCE_FILE ("declaration-boot.galgas", 93)) ;
  var_variableMap_3840.method_checkAutomatonStates (inObject.mAttribute_mEndOfBootLocation, inCompiler COMMA_SOURCE_FILE ("declaration-boot.galgas", 109)) ;
  ioArgument_ioIntermediateCodeStruct.mAttribute_mBootList.addAssign_operation (inObject.mAttribute_mPriority, inObject.mAttribute_mBootLocation, var_bootAllocaList_3955, var_instructionGenerationList_3921, inObject.mAttribute_mEndOfBootLocation  COMMA_SOURCE_FILE ("declaration-boot.galgas", 112)) ;
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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Extension method '@externProcedureDeclarationListAST-element externProcedureSemanticAnalysis'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_externProcedureSemanticAnalysis (const GALGAS_externProcedureDeclarationListAST_2D_element inObject,
                                                      const GALGAS_semanticContext constinArgument_inContext,
                                                      GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                      GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring var_routineMangledName_5849 = inObject.mAttribute_mExternProcedureName ;
  var_routineMangledName_5849.mAttribute_string.plusAssign_operation(GALGAS_string ("("), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 139)) ;
  cEnumerator_procFormalArgumentList enumerator_5970 (inObject.mAttribute_mProcFormalArgumentList, kEnumeration_up) ;
  while (enumerator_5970.hasCurrentObject ()) {
    var_routineMangledName_5849.mAttribute_string.plusAssign_operation(extensionGetter_formalPassingModeString (enumerator_5970.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 141)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 141)) ;
    var_routineMangledName_5849.mAttribute_string.plusAssign_operation(enumerator_5970.current_mSelector (HERE).mAttribute_string, inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 142)) ;
    var_routineMangledName_5849.mAttribute_string.plusAssign_operation(GALGAS_string (":"), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 143)) ;
    enumerator_5970.gotoNextObject () ;
  }
  var_routineMangledName_5849.mAttribute_string.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 145)) ;
  GALGAS_stringset var_procedureModeSet_6217 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("declaration-extern-proc.galgas", 147)) ;
  cEnumerator_lstringlist enumerator_6258 (inObject.mAttribute_mProcedureModeList, kEnumeration_up) ;
  while (enumerator_6258.hasCurrentObject ()) {
    constinArgument_inContext.mAttribute_mModeMap.method_searchKey (enumerator_6258.current (HERE).mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 149)) ;
    var_procedureModeSet_6217.addAssign_operation (enumerator_6258.current (HERE).mAttribute_mValue.mAttribute_string  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 150)) ;
    enumerator_6258.gotoNextObject () ;
  }
  GALGAS_variableMap var_variableMap_6663 ;
  {
  routine_initialVariableMap (var_routineMangledName_5849.mAttribute_string, constinArgument_inContext, var_procedureModeSet_6217.getter_hasKey (function_userModeName (inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 156)) COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 156)), GALGAS_accessKind::constructor_readWriteAccess (SOURCE_FILE ("declaration-extern-proc.galgas", 157)), GALGAS_bool (false), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-extern-proc.galgas", 159)), var_variableMap_6663, inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 153)) ;
  }
  GALGAS_procFormalArgumentListForGeneration var_formalArguments_6752 = GALGAS_procFormalArgumentListForGeneration::constructor_emptyList (SOURCE_FILE ("declaration-extern-proc.galgas", 163)) ;
  {
  routine_enterFormalArguments (constinArgument_inContext, inObject.mAttribute_mProcFormalArgumentList, var_variableMap_6663, var_formalArguments_6752, inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 164)) ;
  }
  const enumGalgasBool test_0 = ioArgument_ioTemporaries.mAttribute_mSubprogramInvocationGraph.getter_isNodeDefined (var_routineMangledName_5849.mAttribute_string COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 173)).operator_not (SOURCE_FILE ("declaration-extern-proc.galgas", 173)).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    ioArgument_ioTemporaries.mAttribute_mSubprogramInvocationGraph.setter_addNode (var_routineMangledName_5849, var_routineMangledName_5849, inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 174)) ;
    }
  }
  GALGAS_unifiedTypeMap_2D_proxy temp_1 ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, inObject.mAttribute_mReturnTypeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_2) {
    temp_1 = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-extern-proc.galgas", 181)) ;
  }else if (kBoolFalse == test_2) {
    temp_1 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mAttribute_mTypeMap, inObject.mAttribute_mReturnTypeName, inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 183)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_returnType_7212 = temp_1 ;
  {
  ioArgument_ioIntermediateCodeStruct.mAttribute_mExternProcedureMapIR.setter_insertKey (inObject.mAttribute_mRoutineNameForGeneration, var_formalArguments_6752, var_returnType_7212, inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 186)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externProcedureMapIR_2D_element::GALGAS_externProcedureMapIR_2D_element (void) :
mAttribute_lkey (),
mAttribute_mFormalArgumentListForGeneration (),
mAttribute_mReturnType () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externProcedureMapIR_2D_element::~ GALGAS_externProcedureMapIR_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externProcedureMapIR_2D_element::GALGAS_externProcedureMapIR_2D_element (const GALGAS_lstring & inOperand0,
                                                                                const GALGAS_procFormalArgumentListForGeneration & inOperand1,
                                                                                const GALGAS_unifiedTypeMap_2D_proxy & inOperand2) :
mAttribute_lkey (inOperand0),
mAttribute_mFormalArgumentListForGeneration (inOperand1),
mAttribute_mReturnType (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externProcedureMapIR_2D_element GALGAS_externProcedureMapIR_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_externProcedureMapIR_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                 GALGAS_procFormalArgumentListForGeneration::constructor_emptyList (HERE),
                                                 GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externProcedureMapIR_2D_element GALGAS_externProcedureMapIR_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                const GALGAS_procFormalArgumentListForGeneration & inOperand1,
                                                                                                const GALGAS_unifiedTypeMap_2D_proxy & inOperand2 
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_externProcedureMapIR_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_externProcedureMapIR_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_externProcedureMapIR_2D_element::objectCompare (const GALGAS_externProcedureMapIR_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFormalArgumentListForGeneration.objectCompare (inOperand.mAttribute_mFormalArgumentListForGeneration) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mReturnType.objectCompare (inOperand.mAttribute_mReturnType) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_externProcedureMapIR_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mFormalArgumentListForGeneration.isValid () && mAttribute_mReturnType.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externProcedureMapIR_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mFormalArgumentListForGeneration.drop () ;
  mAttribute_mReturnType.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externProcedureMapIR_2D_element::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "<struct @externProcedureMapIR-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFormalArgumentListForGeneration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mReturnType.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_externProcedureMapIR_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentListForGeneration GALGAS_externProcedureMapIR_2D_element::getter_mFormalArgumentListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormalArgumentListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_externProcedureMapIR_2D_element::getter_mReturnType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mReturnType ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @externProcedureMapIR-element type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_externProcedureMapIR_2D_element ("externProcedureMapIR-element",
                                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_externProcedureMapIR_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externProcedureMapIR_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_externProcedureMapIR_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_externProcedureMapIR_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externProcedureMapIR_2D_element GALGAS_externProcedureMapIR_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_externProcedureMapIR_2D_element result ;
  const GALGAS_externProcedureMapIR_2D_element * p = (const GALGAS_externProcedureMapIR_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_externProcedureMapIR_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externProcedureMapIR-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Extension method '@interruptMapIR enterAccessibleEntities'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_enterAccessibleEntities (const GALGAS_interruptMapIR inObject,
                                              GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                              GALGAS_uint & ioArgument_ioMaxBranchOfOnInstructions,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_interruptMapIR temp_0 = inObject ;
  cEnumerator_interruptMapIR enumerator_5956 (temp_0, kEnumeration_up) ;
  while (enumerator_5956.hasCurrentObject ()) {
    extensionMethod_enterAccessibleEntities (enumerator_5956.current (HERE).mAttribute_mInstructionGenerationList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 145)) ;
    enumerator_5956.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Extension method '@routineMapIR sectionCodeGeneration'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_sectionCodeGeneration (const GALGAS_routineMapIR inObject,
                                            GALGAS_string & ioArgument_ioLLVMcode,
                                            GALGAS__32_stringlist & ioArgument_ioSectionList,
                                            C_Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_routineMapIR temp_0 = inObject ;
  cEnumerator_routineMapIR enumerator_7234 (temp_0, kEnumeration_up) ;
  while (enumerator_7234.hasCurrentObject ()) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_7234.current (HERE).mAttribute_mKind.objectCompare (GALGAS_routineKind::constructor_section (SOURCE_FILE ("declaration-section.galgas", 184)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_string var_sectionCallName_7298 = function_llvmNameForSectionCall (enumerator_7234.current (HERE).mAttribute_mRoutineNameForGeneration.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("declaration-section.galgas", 185)) ;
      GALGAS_string var_sectionImplementationName_7403 = function_llvmNameForSectionImplementation (enumerator_7234.current (HERE).mAttribute_mRoutineNameForGeneration.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("declaration-section.galgas", 186)) ;
      ioArgument_ioSectionList.addAssign_operation (var_sectionCallName_7298, var_sectionImplementationName_7403  COMMA_SOURCE_FILE ("declaration-section.galgas", 187)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (var_sectionCallName_7298, inCompiler COMMA_SOURCE_FILE ("declaration-section.galgas", 188)), inCompiler  COMMA_SOURCE_FILE ("declaration-section.galgas", 188)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("declare"), inCompiler  COMMA_SOURCE_FILE ("declaration-section.galgas", 189)) ;
      const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_7234.current (HERE).mAttribute_mReturnType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-section.galgas", 190)))).boolEnum () ;
      if (kBoolTrue == test_2) {
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" void"), inCompiler  COMMA_SOURCE_FILE ("declaration-section.galgas", 191)) ;
      }else if (kBoolFalse == test_2) {
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ").add_operation (enumerator_7234.current (HERE).mAttribute_mReturnType.getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("declaration-section.galgas", 193)), inCompiler COMMA_SOURCE_FILE ("declaration-section.galgas", 193)), inCompiler  COMMA_SOURCE_FILE ("declaration-section.galgas", 193)) ;
      }
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" @").add_operation (var_sectionCallName_7298, inCompiler COMMA_SOURCE_FILE ("declaration-section.galgas", 195)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("declaration-section.galgas", 195)), inCompiler  COMMA_SOURCE_FILE ("declaration-section.galgas", 195)) ;
      cEnumerator_procFormalArgumentListForGeneration enumerator_7908 (enumerator_7234.current (HERE).mAttribute_mFormalArgumentListForGeneration, kEnumeration_up) ;
      while (enumerator_7908.hasCurrentObject ()) {
        switch (enumerator_7908.current_mFormalArgumentKind (HERE).enumValue ()) {
        case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
          break ;
        case GALGAS_procFormalArgumentPassingMode::kEnum_input:
          {
            ioArgument_ioLLVMcode.plusAssign_operation(enumerator_7908.current_mFormalArgumentType (HERE).getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("declaration-section.galgas", 200)).add_operation (GALGAS_string (" %in."), inCompiler COMMA_SOURCE_FILE ("declaration-section.galgas", 200)).add_operation (enumerator_7908.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-section.galgas", 200)), inCompiler  COMMA_SOURCE_FILE ("declaration-section.galgas", 200)) ;
          }
          break ;
        case GALGAS_procFormalArgumentPassingMode::kEnum_output:
          {
            ioArgument_ioLLVMcode.plusAssign_operation(enumerator_7908.current_mFormalArgumentType (HERE).getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("declaration-section.galgas", 202)).add_operation (GALGAS_string (" * %"), inCompiler COMMA_SOURCE_FILE ("declaration-section.galgas", 202)).add_operation (function_llvmNameForLocalVariable (enumerator_7908.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-section.galgas", 202)), inCompiler COMMA_SOURCE_FILE ("declaration-section.galgas", 202)), inCompiler  COMMA_SOURCE_FILE ("declaration-section.galgas", 202)) ;
          }
          break ;
        case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
          {
            ioArgument_ioLLVMcode.plusAssign_operation(enumerator_7908.current_mFormalArgumentType (HERE).getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("declaration-section.galgas", 204)).add_operation (GALGAS_string (" * %"), inCompiler COMMA_SOURCE_FILE ("declaration-section.galgas", 204)).add_operation (function_llvmNameForLocalVariable (enumerator_7908.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-section.galgas", 204)), inCompiler COMMA_SOURCE_FILE ("declaration-section.galgas", 204)), inCompiler  COMMA_SOURCE_FILE ("declaration-section.galgas", 204)) ;
          }
          break ;
        }
        if (enumerator_7908.hasNextObject ()) {
          ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-section.galgas", 207)) ;
        }
        enumerator_7908.gotoNextObject () ;
      }
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("declaration-section.galgas", 209)), inCompiler COMMA_SOURCE_FILE ("declaration-section.galgas", 209)).add_operation (GALGAS_string ("\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("declaration-section.galgas", 209)), inCompiler  COMMA_SOURCE_FILE ("declaration-section.galgas", 209)) ;
    }
    enumerator_7234.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardMapIR_2D_element::GALGAS_guardMapIR_2D_element (void) :
mAttribute_lkey (),
mAttribute_mFormalArgumentListForGeneration (),
mAttribute_mGuardKindGenerationIR (),
mAttribute_mAllocaList (),
mAttribute_mInstructionGenerationList (),
mAttribute_mWarnIfUnused () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardMapIR_2D_element::~ GALGAS_guardMapIR_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardMapIR_2D_element::GALGAS_guardMapIR_2D_element (const GALGAS_lstring & inOperand0,
                                                            const GALGAS_procFormalArgumentListForGeneration & inOperand1,
                                                            const GALGAS_guardKindGenerationIR & inOperand2,
                                                            const GALGAS_allocaList & inOperand3,
                                                            const GALGAS_instructionListIR & inOperand4,
                                                            const GALGAS_bool & inOperand5) :
mAttribute_lkey (inOperand0),
mAttribute_mFormalArgumentListForGeneration (inOperand1),
mAttribute_mGuardKindGenerationIR (inOperand2),
mAttribute_mAllocaList (inOperand3),
mAttribute_mInstructionGenerationList (inOperand4),
mAttribute_mWarnIfUnused (inOperand5) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardMapIR_2D_element GALGAS_guardMapIR_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                            const GALGAS_procFormalArgumentListForGeneration & inOperand1,
                                                                            const GALGAS_guardKindGenerationIR & inOperand2,
                                                                            const GALGAS_allocaList & inOperand3,
                                                                            const GALGAS_instructionListIR & inOperand4,
                                                                            const GALGAS_bool & inOperand5 
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_guardMapIR_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid ()) {
    result = GALGAS_guardMapIR_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_guardMapIR_2D_element::objectCompare (const GALGAS_guardMapIR_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFormalArgumentListForGeneration.objectCompare (inOperand.mAttribute_mFormalArgumentListForGeneration) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mGuardKindGenerationIR.objectCompare (inOperand.mAttribute_mGuardKindGenerationIR) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mAllocaList.objectCompare (inOperand.mAttribute_mAllocaList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInstructionGenerationList.objectCompare (inOperand.mAttribute_mInstructionGenerationList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mWarnIfUnused.objectCompare (inOperand.mAttribute_mWarnIfUnused) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_guardMapIR_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mFormalArgumentListForGeneration.isValid () && mAttribute_mGuardKindGenerationIR.isValid () && mAttribute_mAllocaList.isValid () && mAttribute_mInstructionGenerationList.isValid () && mAttribute_mWarnIfUnused.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guardMapIR_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mFormalArgumentListForGeneration.drop () ;
  mAttribute_mGuardKindGenerationIR.drop () ;
  mAttribute_mAllocaList.drop () ;
  mAttribute_mInstructionGenerationList.drop () ;
  mAttribute_mWarnIfUnused.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guardMapIR_2D_element::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "<struct @guardMapIR-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFormalArgumentListForGeneration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mGuardKindGenerationIR.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mAllocaList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInstructionGenerationList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mWarnIfUnused.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_guardMapIR_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentListForGeneration GALGAS_guardMapIR_2D_element::getter_mFormalArgumentListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormalArgumentListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardKindGenerationIR GALGAS_guardMapIR_2D_element::getter_mGuardKindGenerationIR (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mGuardKindGenerationIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allocaList GALGAS_guardMapIR_2D_element::getter_mAllocaList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAllocaList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR GALGAS_guardMapIR_2D_element::getter_mInstructionGenerationList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstructionGenerationList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_guardMapIR_2D_element::getter_mWarnIfUnused (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mWarnIfUnused ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @guardMapIR-element type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_guardMapIR_2D_element ("guardMapIR-element",
                                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_guardMapIR_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guardMapIR_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_guardMapIR_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_guardMapIR_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardMapIR_2D_element GALGAS_guardMapIR_2D_element::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_guardMapIR_2D_element result ;
  const GALGAS_guardMapIR_2D_element * p = (const GALGAS_guardMapIR_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_guardMapIR_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("guardMapIR-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Extension method '@guardMapIR-element enterAccessibleEntities'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_enterAccessibleEntities (const GALGAS_guardMapIR_2D_element inObject,
                                              GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                              GALGAS_uint & ioArgument_ioMaxBranchOfOnInstructions,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  extensionMethod_enterAccessibleEntities (inObject.mAttribute_mInstructionGenerationList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 614)) ;
  switch (inObject.mAttribute_mGuardKindGenerationIR.enumValue ()) {
  case GALGAS_guardKindGenerationIR::kNotBuilt:
    break ;
  case GALGAS_guardKindGenerationIR::kEnum_baseGuard:
    {
    }
    break ;
  case GALGAS_guardKindGenerationIR::kEnum_convenienceGuard:
    {
      const cEnumAssociatedValues_guardKindGenerationIR_convenienceGuard * extractPtr_25271 = (const cEnumAssociatedValues_guardKindGenerationIR_convenienceGuard *) (inObject.mAttribute_mGuardKindGenerationIR.unsafePointer ()) ;
      const GALGAS_instructionListIR extractedValue_baseGuardInstructionGenerationList = extractPtr_25271->mAssociatedValue1 ;
      const GALGAS_string extractedValue_baseGuardMangledName = extractPtr_25271->mAssociatedValue2 ;
      extensionMethod_enterAccessibleEntities (extractedValue_baseGuardInstructionGenerationList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 618)) ;
      ioArgument_ioAccessibleEntities.mAttribute_mGuardSet.addAssign_operation (extractedValue_baseGuardMangledName  COMMA_SOURCE_FILE ("declaration-guard.galgas", 619)) ;
    }
    break ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Extension method '@infixOperatorMap checkBinaryOperationWith'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_checkBinaryOperationWith (const GALGAS_infixOperatorMap inObject,
                                               const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inLeftType,
                                               const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inRightType,
                                               const GALGAS_location constinArgument_inOperatorLocation,
                                               GALGAS_unifiedTypeMap_2D_proxy & outArgument_outResultType,
                                               GALGAS_infixOperatorDescription & outArgument_outOperation,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outResultType.drop () ; // Release 'out' argument
  outArgument_outOperation.drop () ; // Release 'out' argument
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, constinArgument_inLeftType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("expression-infix-operators.galgas", 96)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("left type is null")  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 97)) ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, constinArgument_inRightType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("expression-infix-operators.galgas", 99)))).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("right type is null")  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 100)) ;
  }
  GALGAS_lstring var_lkey_4350 = function_combineTypeNamesForInfixOperator (constinArgument_inLeftType.getter_key (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 102)), constinArgument_inRightType.getter_key (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 102)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 102)) ;
  const GALGAS_infixOperatorMap temp_2 = inObject ;
  const enumGalgasBool test_3 = temp_2.getter_hasKey (var_lkey_4350.mAttribute_string COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 103)).boolEnum () ;
  if (kBoolTrue == test_3) {
    const GALGAS_infixOperatorMap temp_4 = inObject ;
    temp_4.method_searchKey (var_lkey_4350, outArgument_outResultType, outArgument_outOperation, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 104)) ;
  }else if (kBoolFalse == test_3) {
    inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("infix operation between $").add_operation (constinArgument_inLeftType.getter_key (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 107)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 107)).add_operation (GALGAS_string (" and $"), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 107)).add_operation (constinArgument_inRightType.getter_key (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 107)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 107)).add_operation (GALGAS_string (" is not defined"), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 107))  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 106)) ;
    outArgument_outResultType.drop () ; // Release error dropped variable
    outArgument_outOperation.drop () ; // Release error dropped variable
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Abstract extension method '@infixOperatorDescription generateInfixOperatorCode'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_infixOperatorDescription_generateInfixOperatorCode> gExtensionMethodTable_infixOperatorDescription_generateInfixOperatorCode ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_generateInfixOperatorCode (const int32_t inClassIndex,
                                                     extensionMethodSignature_infixOperatorDescription_generateInfixOperatorCode inMethod) {
  gExtensionMethodTable_infixOperatorDescription_generateInfixOperatorCode.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_infixOperatorDescription_generateInfixOperatorCode (void) {
  gExtensionMethodTable_infixOperatorDescription_generateInfixOperatorCode.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_infixOperatorDescription_generateInfixOperatorCode (NULL,
                                                                               freeExtensionMethod_infixOperatorDescription_generateInfixOperatorCode) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_generateInfixOperatorCode (const cPtr_infixOperatorDescription * inObject,
                                                    GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                                    GALGAS_instructionListIR & io_ioInstructionGenerationList,
                                                    const GALGAS_objectIR constin_inLeftOperand,
                                                    const GALGAS_location constin_inOperatorLocation,
                                                    const GALGAS_objectIR constin_inRightOperand,
                                                    const GALGAS_unifiedTypeMap_2D_proxy constin_inResultType,
                                                    GALGAS_objectIR & out_outResultValue,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_outResultValue.drop () ;
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_infixOperatorDescription) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_infixOperatorDescription_generateInfixOperatorCode f = NULL ;
    if (classIndex < gExtensionMethodTable_infixOperatorDescription_generateInfixOperatorCode.count ()) {
      f = gExtensionMethodTable_infixOperatorDescription_generateInfixOperatorCode (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_infixOperatorDescription_generateInfixOperatorCode.count ()) {
           f = gExtensionMethodTable_infixOperatorDescription_generateInfixOperatorCode (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_infixOperatorDescription_generateInfixOperatorCode.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioTemporaries, io_ioInstructionGenerationList, constin_inLeftOperand, constin_inOperatorLocation, constin_inRightOperand, constin_inResultType, out_outResultValue, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Extension getter '@infixOperatorDescription performStaticOperation'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_infixOperatorDescription_performStaticOperation> gExtensionGetterTable_infixOperatorDescription_performStaticOperation ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_performStaticOperation (const int32_t inClassIndex,
                                                  enterExtensionGetter_infixOperatorDescription_performStaticOperation inGetter) {
  gExtensionGetterTable_infixOperatorDescription_performStaticOperation.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint callExtensionGetter_performStaticOperation (const cPtr_infixOperatorDescription * inObject,
                                                          const GALGAS_bigint & in_inLeft,
                                                          const GALGAS_bigint & in_inRight,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GALGAS_bigint result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_infixOperatorDescription) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_infixOperatorDescription_performStaticOperation f = NULL ;
    if (classIndex < gExtensionGetterTable_infixOperatorDescription_performStaticOperation.count ()) {
      f = gExtensionGetterTable_infixOperatorDescription_performStaticOperation (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_infixOperatorDescription_performStaticOperation.count ()) {
           f = gExtensionGetterTable_infixOperatorDescription_performStaticOperation (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_infixOperatorDescription_performStaticOperation.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_inLeft, in_inRight, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bigint extensionGetter_infixOperatorDescription_performStaticOperation (const cPtr_infixOperatorDescription * inObject,
                                                                                      const GALGAS_bigint & constinArgument_inLeft,
                                                                                      const GALGAS_bigint & constinArgument_inRight,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_outResult ; // Returned variable
  const cPtr_infixOperatorDescription * object = inObject ;
  macroValidSharedObject (object, cPtr_infixOperatorDescription) ;
  switch (object->mAttribute_mOperator.enumValue ()) {
  case GALGAS_llvmBinaryOperation::kNotBuilt:
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_addNoOVF:
    {
      result_outResult = constinArgument_inLeft.add_operation (constinArgument_inRight, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 379)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_subNoOVF:
    {
      result_outResult = constinArgument_inLeft.substract_operation (constinArgument_inRight, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 380)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_mulNoOVF:
    {
      result_outResult = constinArgument_inLeft.multiply_operation (constinArgument_inRight, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 381)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_udivNoOVF:
    {
      result_outResult = constinArgument_inLeft.divide_operation (constinArgument_inRight, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 382)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_sdivNoOVF:
    {
      result_outResult = constinArgument_inLeft.divide_operation (constinArgument_inRight, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 383)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_uremNoOVF:
    {
      result_outResult = constinArgument_inLeft.modulo_operation (constinArgument_inRight, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 384)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_sremNoOVF:
    {
      result_outResult = constinArgument_inLeft.modulo_operation (constinArgument_inRight, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 385)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_uaddOVF:
    {
      result_outResult = constinArgument_inLeft.add_operation (constinArgument_inRight, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 387)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_saddOVF:
    {
      result_outResult = constinArgument_inLeft.add_operation (constinArgument_inRight, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 388)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_usubOVF:
    {
      result_outResult = constinArgument_inLeft.substract_operation (constinArgument_inRight, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 389)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_ssubOVF:
    {
      result_outResult = constinArgument_inLeft.substract_operation (constinArgument_inRight, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 390)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_umulOVF:
    {
      result_outResult = constinArgument_inLeft.multiply_operation (constinArgument_inRight, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 391)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_smulOVF:
    {
      result_outResult = constinArgument_inLeft.multiply_operation (constinArgument_inRight, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 392)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_udivOVF:
    {
      result_outResult = constinArgument_inLeft.divide_operation (constinArgument_inRight, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 393)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_sdivOVF:
    {
      result_outResult = constinArgument_inLeft.divide_operation (constinArgument_inRight, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 394)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_uremOVF:
    {
      result_outResult = constinArgument_inLeft.modulo_operation (constinArgument_inRight, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 395)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_sremOVF:
    {
      result_outResult = constinArgument_inLeft.modulo_operation (constinArgument_inRight, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 396)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_and:
    {
      result_outResult = constinArgument_inLeft.operator_and (constinArgument_inRight COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 398)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_ior:
    {
      result_outResult = constinArgument_inLeft.operator_or (constinArgument_inRight COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 399)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_xor:
    {
      result_outResult = constinArgument_inLeft.operator_xor (constinArgument_inRight COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 400)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_shl:
    {
      result_outResult = constinArgument_inLeft.left_shift_operation (constinArgument_inRight.getter_uint (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 401)) COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 401)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_ashr:
    {
      result_outResult = constinArgument_inLeft.right_shift_operation (constinArgument_inRight.getter_uint (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 402)) COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 402)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_lshr:
    {
      result_outResult = constinArgument_inLeft.right_shift_operation (constinArgument_inRight.getter_uint (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 403)) COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 403)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_eq:
    {
      result_outResult = GALGAS_bool (kIsEqual, constinArgument_inLeft.objectCompare (constinArgument_inRight)).getter_bigint (SOURCE_FILE ("expression-infix-operators.galgas", 405)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_ne:
    {
      result_outResult = GALGAS_bool (kIsNotEqual, constinArgument_inLeft.objectCompare (constinArgument_inRight)).getter_bigint (SOURCE_FILE ("expression-infix-operators.galgas", 406)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_ult:
    {
      result_outResult = GALGAS_bool (kIsStrictInf, constinArgument_inLeft.objectCompare (constinArgument_inRight)).getter_bigint (SOURCE_FILE ("expression-infix-operators.galgas", 407)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_ule:
    {
      result_outResult = GALGAS_bool (kIsInfOrEqual, constinArgument_inLeft.objectCompare (constinArgument_inRight)).getter_bigint (SOURCE_FILE ("expression-infix-operators.galgas", 408)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_ugt:
    {
      result_outResult = GALGAS_bool (kIsStrictSup, constinArgument_inLeft.objectCompare (constinArgument_inRight)).getter_bigint (SOURCE_FILE ("expression-infix-operators.galgas", 409)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_uge:
    {
      result_outResult = GALGAS_bool (kIsSupOrEqual, constinArgument_inLeft.objectCompare (constinArgument_inRight)).getter_bigint (SOURCE_FILE ("expression-infix-operators.galgas", 410)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_slt:
    {
      result_outResult = GALGAS_bool (kIsStrictInf, constinArgument_inLeft.objectCompare (constinArgument_inRight)).getter_bigint (SOURCE_FILE ("expression-infix-operators.galgas", 411)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_sle:
    {
      result_outResult = GALGAS_bool (kIsInfOrEqual, constinArgument_inLeft.objectCompare (constinArgument_inRight)).getter_bigint (SOURCE_FILE ("expression-infix-operators.galgas", 412)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_sgt:
    {
      result_outResult = GALGAS_bool (kIsStrictSup, constinArgument_inLeft.objectCompare (constinArgument_inRight)).getter_bigint (SOURCE_FILE ("expression-infix-operators.galgas", 413)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_sge:
    {
      result_outResult = GALGAS_bool (kIsSupOrEqual, constinArgument_inLeft.objectCompare (constinArgument_inRight)).getter_bigint (SOURCE_FILE ("expression-infix-operators.galgas", 414)) ;
    }
    break ;
  }
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_infixOperatorDescription_performStaticOperation (void) {
  enterExtensionGetter_performStaticOperation (kTypeDescriptor_GALGAS_infixOperatorDescription.mSlotID,
                                               extensionGetter_infixOperatorDescription_performStaticOperation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_infixOperatorDescription_performStaticOperation (void) {
  gExtensionGetterTable_infixOperatorDescription_performStaticOperation.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_infixOperatorDescription_performStaticOperation (defineExtensionGetter_infixOperatorDescription_performStaticOperation,
                                                                            freeExtensionGetter_infixOperatorDescription_performStaticOperation) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Extension Getter '@effectiveParameterPassingModeAST matchingFormalArgument'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string extensionGetter_matchingFormalArgument (const GALGAS_effectiveParameterPassingModeAST & inObject,
                                                      C_Compiler * /* inCompiler */
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_effectiveParameterPassingModeAST temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_effectiveParameterPassingModeAST::kNotBuilt:
    break ;
  case GALGAS_effectiveParameterPassingModeAST::kEnum_input:
    {
      result_outResult = GALGAS_string ("!") ;
    }
    break ;
  case GALGAS_effectiveParameterPassingModeAST::kEnum_inputWithType:
    {
      result_outResult = GALGAS_string ("!") ;
    }
    break ;
  case GALGAS_effectiveParameterPassingModeAST::kEnum_output:
    {
      result_outResult = GALGAS_string ("\?") ;
    }
    break ;
  case GALGAS_effectiveParameterPassingModeAST::kEnum_outputInput:
    {
      result_outResult = GALGAS_string ("\?!") ;
    }
    break ;
  case GALGAS_effectiveParameterPassingModeAST::kEnum_outputInputSelfVariable:
    {
      result_outResult = GALGAS_string ("\?!") ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*

GALGAS_assignmentTargetAST::GALGAS_assignmentTargetAST (void) :
mAttribute_mSelfAccess (),
mAttribute_mIdentifier (),
mAttribute_mAccessList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_assignmentTargetAST::~ GALGAS_assignmentTargetAST (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_assignmentTargetAST::GALGAS_assignmentTargetAST (const GALGAS_assignmentSelfAccessAST & inOperand0,
                                                        const GALGAS_lstring & inOperand1,
                                                        const GALGAS_accessInAssignmentListAST & inOperand2) :
mAttribute_mSelfAccess (inOperand0),
mAttribute_mIdentifier (inOperand1),
mAttribute_mAccessList (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_assignmentTargetAST GALGAS_assignmentTargetAST::constructor_new (const GALGAS_assignmentSelfAccessAST & inOperand0,
                                                                        const GALGAS_lstring & inOperand1,
                                                                        const GALGAS_accessInAssignmentListAST & inOperand2 
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_assignmentTargetAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_assignmentTargetAST (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_assignmentTargetAST::objectCompare (const GALGAS_assignmentTargetAST & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mSelfAccess.objectCompare (inOperand.mAttribute_mSelfAccess) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mIdentifier.objectCompare (inOperand.mAttribute_mIdentifier) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mAccessList.objectCompare (inOperand.mAttribute_mAccessList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_assignmentTargetAST::isValid (void) const {
  return mAttribute_mSelfAccess.isValid () && mAttribute_mIdentifier.isValid () && mAttribute_mAccessList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_assignmentTargetAST::drop (void) {
  mAttribute_mSelfAccess.drop () ;
  mAttribute_mIdentifier.drop () ;
  mAttribute_mAccessList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_assignmentTargetAST::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "<struct @assignmentTargetAST:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mSelfAccess.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mIdentifier.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mAccessList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_assignmentSelfAccessAST GALGAS_assignmentTargetAST::getter_mSelfAccess (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSelfAccess ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_assignmentTargetAST::getter_mIdentifier (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIdentifier ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_accessInAssignmentListAST GALGAS_assignmentTargetAST::getter_mAccessList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAccessList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @assignmentTargetAST type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_assignmentTargetAST ("assignmentTargetAST",
                                            NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_assignmentTargetAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assignmentTargetAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_assignmentTargetAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_assignmentTargetAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_assignmentTargetAST GALGAS_assignmentTargetAST::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_assignmentTargetAST result ;
  const GALGAS_assignmentTargetAST * p = (const GALGAS_assignmentTargetAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_assignmentTargetAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("assignmentTargetAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

