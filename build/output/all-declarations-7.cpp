#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-7.h"


//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_forLowerUpperBoundInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_forLowerUpperBoundInstructionAST * p = (const cPtr_forLowerUpperBoundInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mVarName.objectCompare (p->mProperty_mVarName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTypeName.objectCompare (p->mProperty_mTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLowerBoundExpression.objectCompare (p->mProperty_mLowerBoundExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOf_5F_lowerBoundExpression_5F_instruction.objectCompare (p->mProperty_mEndOf_5F_lowerBoundExpression_5F_instruction) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mUpperBoundExpression.objectCompare (p->mProperty_mUpperBoundExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOf_5F_upperBoundExpression_5F_instruction.objectCompare (p->mProperty_mEndOf_5F_upperBoundExpression_5F_instruction) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mDoInstructionList.objectCompare (p->mProperty_mDoInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOf_5F_do_5F_instruction.objectCompare (p->mProperty_mEndOf_5F_do_5F_instruction) ;
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

GALGAS_forLowerUpperBoundInstructionAST GALGAS_forLowerUpperBoundInstructionAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                  const GALGAS_lstring & inAttribute_mVarName,
                                                                                                  const GALGAS_lstring & inAttribute_mTypeName,
                                                                                                  const GALGAS_expressionAST & inAttribute_mLowerBoundExpression,
                                                                                                  const GALGAS_location & inAttribute_mEndOf_5F_lowerBoundExpression_5F_instruction,
                                                                                                  const GALGAS_expressionAST & inAttribute_mUpperBoundExpression,
                                                                                                  const GALGAS_location & inAttribute_mEndOf_5F_upperBoundExpression_5F_instruction,
                                                                                                  const GALGAS_instructionListAST & inAttribute_mDoInstructionList,
                                                                                                  const GALGAS_location & inAttribute_mEndOf_5F_do_5F_instruction
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_forLowerUpperBoundInstructionAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mVarName.isValid () && inAttribute_mTypeName.isValid () && inAttribute_mLowerBoundExpression.isValid () && inAttribute_mEndOf_5F_lowerBoundExpression_5F_instruction.isValid () && inAttribute_mUpperBoundExpression.isValid () && inAttribute_mEndOf_5F_upperBoundExpression_5F_instruction.isValid () && inAttribute_mDoInstructionList.isValid () && inAttribute_mEndOf_5F_do_5F_instruction.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_forLowerUpperBoundInstructionAST (inAttribute_mInstructionLocation, inAttribute_mVarName, inAttribute_mTypeName, inAttribute_mLowerBoundExpression, inAttribute_mEndOf_5F_lowerBoundExpression_5F_instruction, inAttribute_mUpperBoundExpression, inAttribute_mEndOf_5F_upperBoundExpression_5F_instruction, inAttribute_mDoInstructionList, inAttribute_mEndOf_5F_do_5F_instruction COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_forLowerUpperBoundInstructionAST::getter_mVarName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_forLowerUpperBoundInstructionAST * p = (const cPtr_forLowerUpperBoundInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionAST) ;
    result = p->mProperty_mVarName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_forLowerUpperBoundInstructionAST::getter_mVarName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mVarName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_forLowerUpperBoundInstructionAST::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_forLowerUpperBoundInstructionAST * p = (const cPtr_forLowerUpperBoundInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionAST) ;
    result = p->mProperty_mTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_forLowerUpperBoundInstructionAST::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST GALGAS_forLowerUpperBoundInstructionAST::getter_mLowerBoundExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_forLowerUpperBoundInstructionAST * p = (const cPtr_forLowerUpperBoundInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionAST) ;
    result = p->mProperty_mLowerBoundExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST cPtr_forLowerUpperBoundInstructionAST::getter_mLowerBoundExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLowerBoundExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_forLowerUpperBoundInstructionAST::getter_mEndOf_5F_lowerBoundExpression_5F_instruction (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_forLowerUpperBoundInstructionAST * p = (const cPtr_forLowerUpperBoundInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionAST) ;
    result = p->mProperty_mEndOf_5F_lowerBoundExpression_5F_instruction ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_forLowerUpperBoundInstructionAST::getter_mEndOf_5F_lowerBoundExpression_5F_instruction (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOf_5F_lowerBoundExpression_5F_instruction ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST GALGAS_forLowerUpperBoundInstructionAST::getter_mUpperBoundExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_forLowerUpperBoundInstructionAST * p = (const cPtr_forLowerUpperBoundInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionAST) ;
    result = p->mProperty_mUpperBoundExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST cPtr_forLowerUpperBoundInstructionAST::getter_mUpperBoundExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mUpperBoundExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_forLowerUpperBoundInstructionAST::getter_mEndOf_5F_upperBoundExpression_5F_instruction (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_forLowerUpperBoundInstructionAST * p = (const cPtr_forLowerUpperBoundInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionAST) ;
    result = p->mProperty_mEndOf_5F_upperBoundExpression_5F_instruction ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_forLowerUpperBoundInstructionAST::getter_mEndOf_5F_upperBoundExpression_5F_instruction (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOf_5F_upperBoundExpression_5F_instruction ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST GALGAS_forLowerUpperBoundInstructionAST::getter_mDoInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_instructionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_forLowerUpperBoundInstructionAST * p = (const cPtr_forLowerUpperBoundInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionAST) ;
    result = p->mProperty_mDoInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST cPtr_forLowerUpperBoundInstructionAST::getter_mDoInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDoInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_forLowerUpperBoundInstructionAST::getter_mEndOf_5F_do_5F_instruction (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_forLowerUpperBoundInstructionAST * p = (const cPtr_forLowerUpperBoundInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionAST) ;
    result = p->mProperty_mEndOf_5F_do_5F_instruction ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_forLowerUpperBoundInstructionAST::getter_mEndOf_5F_do_5F_instruction (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOf_5F_do_5F_instruction ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                              Pointer class for @forLowerUpperBoundInstructionAST class                              *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_forLowerUpperBoundInstructionAST::cPtr_forLowerUpperBoundInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                                              const GALGAS_lstring & in_mVarName,
                                                                              const GALGAS_lstring & in_mTypeName,
                                                                              const GALGAS_expressionAST & in_mLowerBoundExpression,
                                                                              const GALGAS_location & in_mEndOf_5F_lowerBoundExpression_5F_instruction,
                                                                              const GALGAS_expressionAST & in_mUpperBoundExpression,
                                                                              const GALGAS_location & in_mEndOf_5F_upperBoundExpression_5F_instruction,
                                                                              const GALGAS_instructionListAST & in_mDoInstructionList,
                                                                              const GALGAS_location & in_mEndOf_5F_do_5F_instruction
                                                                              COMMA_LOCATION_ARGS) :
cPtr_instructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mVarName (in_mVarName),
mProperty_mTypeName (in_mTypeName),
mProperty_mLowerBoundExpression (in_mLowerBoundExpression),
mProperty_mEndOf_5F_lowerBoundExpression_5F_instruction (in_mEndOf_5F_lowerBoundExpression_5F_instruction),
mProperty_mUpperBoundExpression (in_mUpperBoundExpression),
mProperty_mEndOf_5F_upperBoundExpression_5F_instruction (in_mEndOf_5F_upperBoundExpression_5F_instruction),
mProperty_mDoInstructionList (in_mDoInstructionList),
mProperty_mEndOf_5F_do_5F_instruction (in_mEndOf_5F_do_5F_instruction) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_forLowerUpperBoundInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forLowerUpperBoundInstructionAST ;
}

void cPtr_forLowerUpperBoundInstructionAST::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "[@forLowerUpperBoundInstructionAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mVarName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLowerBoundExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOf_5F_lowerBoundExpression_5F_instruction.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mUpperBoundExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOf_5F_upperBoundExpression_5F_instruction.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mDoInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOf_5F_do_5F_instruction.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_forLowerUpperBoundInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_forLowerUpperBoundInstructionAST (mProperty_mInstructionLocation, mProperty_mVarName, mProperty_mTypeName, mProperty_mLowerBoundExpression, mProperty_mEndOf_5F_lowerBoundExpression_5F_instruction, mProperty_mUpperBoundExpression, mProperty_mEndOf_5F_upperBoundExpression_5F_instruction, mProperty_mDoInstructionList, mProperty_mEndOf_5F_do_5F_instruction COMMA_THERE)) ;
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

typeComparisonResult cPtr_forLowerUpperBoundInstructionIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_forLowerUpperBoundInstructionIR * p = (const cPtr_forLowerUpperBoundInstructionIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionIR) ;
  if (kOperandEqual == result) {
    result = mProperty_mVarName.objectCompare (p->mProperty_mVarName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mType.objectCompare (p->mProperty_mType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mUnsigned.objectCompare (p->mProperty_mUnsigned) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLocation.objectCompare (p->mProperty_mLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLowerExpressionResult.objectCompare (p->mProperty_mLowerExpressionResult) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mUpperExpressionResult.objectCompare (p->mProperty_mUpperExpressionResult) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInstructionList.objectCompare (p->mProperty_mInstructionList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_forLowerUpperBoundInstructionIR::objectCompare (const GALGAS_forLowerUpperBoundInstructionIR & inOperand) const {
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

GALGAS_forLowerUpperBoundInstructionIR::GALGAS_forLowerUpperBoundInstructionIR (void) :
GALGAS_abstractInstructionIR () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_forLowerUpperBoundInstructionIR::GALGAS_forLowerUpperBoundInstructionIR (const cPtr_forLowerUpperBoundInstructionIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_forLowerUpperBoundInstructionIR) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_forLowerUpperBoundInstructionIR GALGAS_forLowerUpperBoundInstructionIR::constructor_new (const GALGAS_string & inAttribute_mVarName,
                                                                                                const GALGAS_PLMType & inAttribute_mType,
                                                                                                const GALGAS_bool & inAttribute_mUnsigned,
                                                                                                const GALGAS_location & inAttribute_mLocation,
                                                                                                const GALGAS_objectIR & inAttribute_mLowerExpressionResult,
                                                                                                const GALGAS_objectIR & inAttribute_mUpperExpressionResult,
                                                                                                const GALGAS_instructionListIR & inAttribute_mInstructionList
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_forLowerUpperBoundInstructionIR result ;
  if (inAttribute_mVarName.isValid () && inAttribute_mType.isValid () && inAttribute_mUnsigned.isValid () && inAttribute_mLocation.isValid () && inAttribute_mLowerExpressionResult.isValid () && inAttribute_mUpperExpressionResult.isValid () && inAttribute_mInstructionList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_forLowerUpperBoundInstructionIR (inAttribute_mVarName, inAttribute_mType, inAttribute_mUnsigned, inAttribute_mLocation, inAttribute_mLowerExpressionResult, inAttribute_mUpperExpressionResult, inAttribute_mInstructionList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_forLowerUpperBoundInstructionIR::getter_mVarName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_forLowerUpperBoundInstructionIR * p = (const cPtr_forLowerUpperBoundInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionIR) ;
    result = p->mProperty_mVarName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_forLowerUpperBoundInstructionIR::getter_mVarName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mVarName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMType GALGAS_forLowerUpperBoundInstructionIR::getter_mType (UNUSED_LOCATION_ARGS) const {
  GALGAS_PLMType result ;
  if (NULL != mObjectPtr) {
    const cPtr_forLowerUpperBoundInstructionIR * p = (const cPtr_forLowerUpperBoundInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionIR) ;
    result = p->mProperty_mType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMType cPtr_forLowerUpperBoundInstructionIR::getter_mType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_forLowerUpperBoundInstructionIR::getter_mUnsigned (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_forLowerUpperBoundInstructionIR * p = (const cPtr_forLowerUpperBoundInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionIR) ;
    result = p->mProperty_mUnsigned ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_forLowerUpperBoundInstructionIR::getter_mUnsigned (UNUSED_LOCATION_ARGS) const {
  return mProperty_mUnsigned ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_forLowerUpperBoundInstructionIR::getter_mLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_forLowerUpperBoundInstructionIR * p = (const cPtr_forLowerUpperBoundInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionIR) ;
    result = p->mProperty_mLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_forLowerUpperBoundInstructionIR::getter_mLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_forLowerUpperBoundInstructionIR::getter_mLowerExpressionResult (UNUSED_LOCATION_ARGS) const {
  GALGAS_objectIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_forLowerUpperBoundInstructionIR * p = (const cPtr_forLowerUpperBoundInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionIR) ;
    result = p->mProperty_mLowerExpressionResult ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR cPtr_forLowerUpperBoundInstructionIR::getter_mLowerExpressionResult (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLowerExpressionResult ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_forLowerUpperBoundInstructionIR::getter_mUpperExpressionResult (UNUSED_LOCATION_ARGS) const {
  GALGAS_objectIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_forLowerUpperBoundInstructionIR * p = (const cPtr_forLowerUpperBoundInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionIR) ;
    result = p->mProperty_mUpperExpressionResult ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR cPtr_forLowerUpperBoundInstructionIR::getter_mUpperExpressionResult (UNUSED_LOCATION_ARGS) const {
  return mProperty_mUpperExpressionResult ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR GALGAS_forLowerUpperBoundInstructionIR::getter_mInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_instructionListIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_forLowerUpperBoundInstructionIR * p = (const cPtr_forLowerUpperBoundInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionIR) ;
    result = p->mProperty_mInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR cPtr_forLowerUpperBoundInstructionIR::getter_mInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                              Pointer class for @forLowerUpperBoundInstructionIR class                               *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_forLowerUpperBoundInstructionIR::cPtr_forLowerUpperBoundInstructionIR (const GALGAS_string & in_mVarName,
                                                                            const GALGAS_PLMType & in_mType,
                                                                            const GALGAS_bool & in_mUnsigned,
                                                                            const GALGAS_location & in_mLocation,
                                                                            const GALGAS_objectIR & in_mLowerExpressionResult,
                                                                            const GALGAS_objectIR & in_mUpperExpressionResult,
                                                                            const GALGAS_instructionListIR & in_mInstructionList
                                                                            COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mVarName (in_mVarName),
mProperty_mType (in_mType),
mProperty_mUnsigned (in_mUnsigned),
mProperty_mLocation (in_mLocation),
mProperty_mLowerExpressionResult (in_mLowerExpressionResult),
mProperty_mUpperExpressionResult (in_mUpperExpressionResult),
mProperty_mInstructionList (in_mInstructionList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_forLowerUpperBoundInstructionIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forLowerUpperBoundInstructionIR ;
}

void cPtr_forLowerUpperBoundInstructionIR::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "[@forLowerUpperBoundInstructionIR:" ;
  mProperty_mVarName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mUnsigned.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLowerExpressionResult.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mUpperExpressionResult.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_forLowerUpperBoundInstructionIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_forLowerUpperBoundInstructionIR (mProperty_mVarName, mProperty_mType, mProperty_mUnsigned, mProperty_mLocation, mProperty_mLowerExpressionResult, mProperty_mUpperExpressionResult, mProperty_mInstructionList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @forLowerUpperBoundInstructionIR type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_forLowerUpperBoundInstructionIR ("forLowerUpperBoundInstructionIR",
                                                        & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_forLowerUpperBoundInstructionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forLowerUpperBoundInstructionIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_forLowerUpperBoundInstructionIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_forLowerUpperBoundInstructionIR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_forLowerUpperBoundInstructionIR GALGAS_forLowerUpperBoundInstructionIR::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_forLowerUpperBoundInstructionIR result ;
  const GALGAS_forLowerUpperBoundInstructionIR * p = (const GALGAS_forLowerUpperBoundInstructionIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_forLowerUpperBoundInstructionIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("forLowerUpperBoundInstructionIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_standAloneProcedureCallInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_standAloneProcedureCallInstructionAST * p = (const cPtr_standAloneProcedureCallInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_standAloneProcedureCallInstructionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mArguments.objectCompare (p->mProperty_mArguments) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfArguments.objectCompare (p->mProperty_mEndOfArguments) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSandAloneRoutineName.objectCompare (p->mProperty_mSandAloneRoutineName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_standAloneProcedureCallInstructionAST::objectCompare (const GALGAS_standAloneProcedureCallInstructionAST & inOperand) const {
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

GALGAS_standAloneProcedureCallInstructionAST::GALGAS_standAloneProcedureCallInstructionAST (void) :
GALGAS_callInstructionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_standAloneProcedureCallInstructionAST GALGAS_standAloneProcedureCallInstructionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_standAloneProcedureCallInstructionAST::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                                        GALGAS_effectiveArgumentListAST::constructor_emptyList (HERE),
                                                                        GALGAS_location::constructor_nowhere (HERE),
                                                                        GALGAS_lstring::constructor_default (HERE)
                                                                        COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_standAloneProcedureCallInstructionAST::GALGAS_standAloneProcedureCallInstructionAST (const cPtr_standAloneProcedureCallInstructionAST * inSourcePtr) :
GALGAS_callInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_standAloneProcedureCallInstructionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_standAloneProcedureCallInstructionAST GALGAS_standAloneProcedureCallInstructionAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                            const GALGAS_effectiveArgumentListAST & inAttribute_mArguments,
                                                                                                            const GALGAS_location & inAttribute_mEndOfArguments,
                                                                                                            const GALGAS_lstring & inAttribute_mSandAloneRoutineName
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_standAloneProcedureCallInstructionAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mArguments.isValid () && inAttribute_mEndOfArguments.isValid () && inAttribute_mSandAloneRoutineName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_standAloneProcedureCallInstructionAST (inAttribute_mInstructionLocation, inAttribute_mArguments, inAttribute_mEndOfArguments, inAttribute_mSandAloneRoutineName COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_standAloneProcedureCallInstructionAST::getter_mSandAloneRoutineName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_standAloneProcedureCallInstructionAST * p = (const cPtr_standAloneProcedureCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_standAloneProcedureCallInstructionAST) ;
    result = p->mProperty_mSandAloneRoutineName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_standAloneProcedureCallInstructionAST::getter_mSandAloneRoutineName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSandAloneRoutineName ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                           Pointer class for @standAloneProcedureCallInstructionAST class                            *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_standAloneProcedureCallInstructionAST::cPtr_standAloneProcedureCallInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                                                        const GALGAS_effectiveArgumentListAST & in_mArguments,
                                                                                        const GALGAS_location & in_mEndOfArguments,
                                                                                        const GALGAS_lstring & in_mSandAloneRoutineName
                                                                                        COMMA_LOCATION_ARGS) :
cPtr_callInstructionAST (in_mInstructionLocation, in_mArguments, in_mEndOfArguments COMMA_THERE),
mProperty_mSandAloneRoutineName (in_mSandAloneRoutineName) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_standAloneProcedureCallInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_standAloneProcedureCallInstructionAST ;
}

void cPtr_standAloneProcedureCallInstructionAST::description (C_String & ioString,
                                                              const int32_t inIndentation) const {
  ioString << "[@standAloneProcedureCallInstructionAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mArguments.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOfArguments.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSandAloneRoutineName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_standAloneProcedureCallInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_standAloneProcedureCallInstructionAST (mProperty_mInstructionLocation, mProperty_mArguments, mProperty_mEndOfArguments, mProperty_mSandAloneRoutineName COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @standAloneProcedureCallInstructionAST type                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_standAloneProcedureCallInstructionAST ("standAloneProcedureCallInstructionAST",
                                                              & kTypeDescriptor_GALGAS_callInstructionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_standAloneProcedureCallInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_standAloneProcedureCallInstructionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_standAloneProcedureCallInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_standAloneProcedureCallInstructionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_standAloneProcedureCallInstructionAST GALGAS_standAloneProcedureCallInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_standAloneProcedureCallInstructionAST result ;
  const GALGAS_standAloneProcedureCallInstructionAST * p = (const GALGAS_standAloneProcedureCallInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_standAloneProcedureCallInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("standAloneProcedureCallInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_procedureCallInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_procedureCallInstructionAST * p = (const cPtr_procedureCallInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_procedureCallInstructionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mArguments.objectCompare (p->mProperty_mArguments) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfArguments.objectCompare (p->mProperty_mEndOfArguments) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIdentifier.objectCompare (p->mProperty_mIdentifier) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAccessList.objectCompare (p->mProperty_mAccessList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_procedureCallInstructionAST::objectCompare (const GALGAS_procedureCallInstructionAST & inOperand) const {
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

GALGAS_procedureCallInstructionAST::GALGAS_procedureCallInstructionAST (void) :
GALGAS_callInstructionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procedureCallInstructionAST GALGAS_procedureCallInstructionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_procedureCallInstructionAST::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                              GALGAS_effectiveArgumentListAST::constructor_emptyList (HERE),
                                                              GALGAS_location::constructor_nowhere (HERE),
                                                              GALGAS_lstring::constructor_default (HERE),
                                                              GALGAS_accessInAssignmentListAST::constructor_emptyList (HERE)
                                                              COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procedureCallInstructionAST::GALGAS_procedureCallInstructionAST (const cPtr_procedureCallInstructionAST * inSourcePtr) :
GALGAS_callInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_procedureCallInstructionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procedureCallInstructionAST GALGAS_procedureCallInstructionAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                        const GALGAS_effectiveArgumentListAST & inAttribute_mArguments,
                                                                                        const GALGAS_location & inAttribute_mEndOfArguments,
                                                                                        const GALGAS_lstring & inAttribute_mIdentifier,
                                                                                        const GALGAS_accessInAssignmentListAST & inAttribute_mAccessList
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_procedureCallInstructionAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mArguments.isValid () && inAttribute_mEndOfArguments.isValid () && inAttribute_mIdentifier.isValid () && inAttribute_mAccessList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_procedureCallInstructionAST (inAttribute_mInstructionLocation, inAttribute_mArguments, inAttribute_mEndOfArguments, inAttribute_mIdentifier, inAttribute_mAccessList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_procedureCallInstructionAST::getter_mIdentifier (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_procedureCallInstructionAST * p = (const cPtr_procedureCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_procedureCallInstructionAST) ;
    result = p->mProperty_mIdentifier ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_procedureCallInstructionAST::getter_mIdentifier (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIdentifier ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_accessInAssignmentListAST GALGAS_procedureCallInstructionAST::getter_mAccessList (UNUSED_LOCATION_ARGS) const {
  GALGAS_accessInAssignmentListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_procedureCallInstructionAST * p = (const cPtr_procedureCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_procedureCallInstructionAST) ;
    result = p->mProperty_mAccessList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_accessInAssignmentListAST cPtr_procedureCallInstructionAST::getter_mAccessList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAccessList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                Pointer class for @procedureCallInstructionAST class                                 *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_procedureCallInstructionAST::cPtr_procedureCallInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                                    const GALGAS_effectiveArgumentListAST & in_mArguments,
                                                                    const GALGAS_location & in_mEndOfArguments,
                                                                    const GALGAS_lstring & in_mIdentifier,
                                                                    const GALGAS_accessInAssignmentListAST & in_mAccessList
                                                                    COMMA_LOCATION_ARGS) :
cPtr_callInstructionAST (in_mInstructionLocation, in_mArguments, in_mEndOfArguments COMMA_THERE),
mProperty_mIdentifier (in_mIdentifier),
mProperty_mAccessList (in_mAccessList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_procedureCallInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procedureCallInstructionAST ;
}

void cPtr_procedureCallInstructionAST::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "[@procedureCallInstructionAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mArguments.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOfArguments.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mIdentifier.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mAccessList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_procedureCallInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_procedureCallInstructionAST (mProperty_mInstructionLocation, mProperty_mArguments, mProperty_mEndOfArguments, mProperty_mIdentifier, mProperty_mAccessList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @procedureCallInstructionAST type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_procedureCallInstructionAST ("procedureCallInstructionAST",
                                                    & kTypeDescriptor_GALGAS_callInstructionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_procedureCallInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procedureCallInstructionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_procedureCallInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_procedureCallInstructionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procedureCallInstructionAST GALGAS_procedureCallInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_procedureCallInstructionAST result ;
  const GALGAS_procedureCallInstructionAST * p = (const GALGAS_procedureCallInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_procedureCallInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("procedureCallInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Extension Getter '@effectiveArgumentPassingModeAST passingModeForActualSelector'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string extensionGetter_passingModeForActualSelector (const GALGAS_effectiveArgumentPassingModeAST & inObject,
                                                            const GALGAS_lstring & constinArgument_inSelector,
                                                            C_Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_effectiveArgumentPassingModeAST temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_effectiveArgumentPassingModeAST::kNotBuilt:
    break ;
  case GALGAS_effectiveArgumentPassingModeAST::kEnum_input:
    {
      result_result = GALGAS_string ("\?") ;
    }
    break ;
  case GALGAS_effectiveArgumentPassingModeAST::kEnum_inputWithType:
    {
      result_result = GALGAS_string ("\?") ;
    }
    break ;
  case GALGAS_effectiveArgumentPassingModeAST::kEnum_output:
    {
      result_result = GALGAS_string ("!") ;
    }
    break ;
  case GALGAS_effectiveArgumentPassingModeAST::kEnum_outputInput:
    {
      result_result = GALGAS_string ("!\?") ;
    }
    break ;
  case GALGAS_effectiveArgumentPassingModeAST::kEnum_outputInputSelfVariable:
    {
      result_result = GALGAS_string ("!\?") ;
    }
    break ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, constinArgument_inSelector.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_1) {
    result_result.plusAssign_operation(constinArgument_inSelector.getter_string (HERE).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 125)), inCompiler  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 125)) ;
  }
//---
  return result_result ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Extension method '@LValueAST noteInstructionTypesInPrecedenceGraph'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_noteInstructionTypesInPrecedenceGraph (const GALGAS_LValueAST inObject,
                                                            GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                            C_Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_accessInAssignmentListAST enumerator_2663 (inObject.mProperty_mAccessList, kENUMERATION_UP) ;
  while (enumerator_2663.hasCurrentObject ()) {
    switch (enumerator_2663.current_mAccess (HERE).enumValue ()) {
    case GALGAS_accessInAssignmentAST::kNotBuilt:
      break ;
    case GALGAS_accessInAssignmentAST::kEnum_property:
      {
      }
      break ;
    case GALGAS_accessInAssignmentAST::kEnum_arrayAccess:
      {
        const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess * extractPtr_2837 = (const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess *) (enumerator_2663.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_indexExpression = extractPtr_2837->mAssociatedValue0 ;
        callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) extractedValue_indexExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 70)) ;
      }
      break ;
    }
    enumerator_2663.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Extension method '@LValueAST type'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_type (const GALGAS_LValueAST inObject,
                           const GALGAS_PLMType constinArgument_inSelfType,
                           const GALGAS_universalValuedObjectMapForContext constinArgument_inUniversalMap,
                           GALGAS_PLMType & outArgument_outType,
                           C_Compiler * inCompiler
                           COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outType.drop () ; // Release 'out' argument
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, inObject.mProperty_mIdentifier.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outType = constinArgument_inSelfType ;
  }else if (kBoolFalse == test_0) {
    callExtensionMethod_searchValuedObjectType ((const cPtr_universalValuedObjectMapForContext *) constinArgument_inUniversalMap.ptr (), inObject.mProperty_mIdentifier, outArgument_outType, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 108)) ;
  }
  cEnumerator_accessInAssignmentListAST enumerator_4300 (inObject.mProperty_mAccessList, kENUMERATION_UP) ;
  while (enumerator_4300.hasCurrentObject ()) {
    switch (enumerator_4300.current_mAccess (HERE).enumValue ()) {
    case GALGAS_accessInAssignmentAST::kNotBuilt:
      break ;
    case GALGAS_accessInAssignmentAST::kEnum_property:
      {
        const cEnumAssociatedValues_accessInAssignmentAST_property * extractPtr_4758 = (const cEnumAssociatedValues_accessInAssignmentAST_property *) (enumerator_4300.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_propertyName = extractPtr_4758->mAssociatedValue0 ;
        GALGAS_propertyMap var_propertyMap_4400 = outArgument_outType.getter_mPropertyMap (HERE) ;
        GALGAS_propertyAccessKind var_accessKind_4485 ;
        GALGAS_bool joker_4468 ; // Joker input parameter
        var_propertyMap_4400.method_searchKey (extractedValue_propertyName, joker_4468, var_accessKind_4485, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 114)) ;
        switch (var_accessKind_4485.enumValue ()) {
        case GALGAS_propertyAccessKind::kNotBuilt:
          break ;
        case GALGAS_propertyAccessKind::kEnum_constantProperty:
          {
            const cEnumAssociatedValues_propertyAccessKind_constantProperty * extractPtr_4579 = (const cEnumAssociatedValues_propertyAccessKind_constantProperty *) (var_accessKind_4485.unsafePointer ()) ;
            const GALGAS_objectIR extractedValue_value = extractPtr_4579->mAssociatedValue0 ;
            outArgument_outType = extensionGetter_type (extractedValue_value, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 117)) ;
          }
          break ;
        case GALGAS_propertyAccessKind::kEnum_indexed:
          {
            const cEnumAssociatedValues_propertyAccessKind_indexed * extractPtr_4633 = (const cEnumAssociatedValues_propertyAccessKind_indexed *) (var_accessKind_4485.unsafePointer ()) ;
            const GALGAS_PLMType extractedValue_type = extractPtr_4633->mAssociatedValue0 ;
            outArgument_outType = extractedValue_type ;
          }
          break ;
        case GALGAS_propertyAccessKind::kEnum_nonVirtualMethod:
          {
            TC_Array <C_FixItDescription> fixItArray1 ;
            inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("lvalue.galgas", 121)), GALGAS_string ("a method cannot be used in this context"), fixItArray1  COMMA_SOURCE_FILE ("lvalue.galgas", 121)) ;
            outArgument_outType.drop () ; // Release error dropped variable
          }
          break ;
        }
      }
      break ;
    case GALGAS_accessInAssignmentAST::kEnum_arrayAccess:
      {
        const enumGalgasBool test_2 = outArgument_outType.getter_mKind (SOURCE_FILE ("lvalue.galgas", 124)).getter_isArrayType (SOURCE_FILE ("lvalue.galgas", 124)).boolEnum () ;
        if (kBoolTrue == test_2) {
          GALGAS_bigint joker_4889_1 ; // Joker input parameter
          outArgument_outType.getter_mKind (SOURCE_FILE ("lvalue.galgas", 125)).method_arrayType (outArgument_outType, joker_4889_1, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 125)) ;
        }
      }
      break ;
    }
    enumerator_4300.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Extension method '@LValueAST analyzeLValue'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_analyzeLValue (const GALGAS_LValueAST inObject,
                                    const GALGAS_PLMType constinArgument_inSelfType,
                                    const GALGAS_bool /* constinArgument_inRoutineCanMutateProperties */,
                                    const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                    const GALGAS_semanticContext constinArgument_inContext,
                                    const GALGAS_mode constinArgument_inCurrentMode,
                                    GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                    GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                    GALGAS_universalValuedObjectMapForContext & ioArgument_ioUniversalMap,
                                    GALGAS_allocaList & ioArgument_ioAllocaList,
                                    GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                    GALGAS_LValueRepresentation & outArgument_outInternalRepresentation,
                                    C_Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInternalRepresentation.drop () ; // Release 'out' argument
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, inObject.mProperty_mIdentifier.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, constinArgument_inSelfType.getter_mKind (SOURCE_FILE ("lvalue.galgas", 147)).objectCompare (GALGAS_typeKind::constructor_void (SOURCE_FILE ("lvalue.galgas", 147)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (inObject.mProperty_mIdentifier.getter_location (SOURCE_FILE ("lvalue.galgas", 148)), GALGAS_string ("self is not available in this context"), fixItArray2  COMMA_SOURCE_FILE ("lvalue.galgas", 148)) ;
      outArgument_outInternalRepresentation.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_1) {
      {
      routine_analyzeSelfAssignmentTarget (constinArgument_inSelfType, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, inObject.mProperty_mIdentifier.getter_location (HERE), inObject.mProperty_mAccessList, outArgument_outInternalRepresentation, inCompiler  COMMA_SOURCE_FILE ("lvalue.galgas", 150)) ;
      }
    }
  }else if (kBoolFalse == test_0) {
    GALGAS_valuedObject var_entity_6447 ;
    callExtensionMethod_searchEntity ((const cPtr_universalValuedObjectMapForContext *) ioArgument_ioUniversalMap.ptr (), inObject.mProperty_mIdentifier, var_entity_6447, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 166)) ;
    switch (var_entity_6447.enumValue ()) {
    case GALGAS_valuedObject::kNotBuilt:
      break ;
    case GALGAS_valuedObject::kEnum_module:
      {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (inObject.mProperty_mIdentifier.getter_location (SOURCE_FILE ("lvalue.galgas", 169)), GALGAS_string ("a module cannot be written"), fixItArray3  COMMA_SOURCE_FILE ("lvalue.galgas", 169)) ;
        outArgument_outInternalRepresentation.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_valuedObject::kEnum_register:
      {
        const cEnumAssociatedValues_valuedObject_register * extractPtr_7540 = (const cEnumAssociatedValues_valuedObject_register *) (var_entity_6447.unsafePointer ()) ;
        const GALGAS_bool extractedValue_writable = extractPtr_7540->mAssociatedValue1 ;
        const GALGAS_PLMType extractedValue_registerType = extractPtr_7540->mAssociatedValue2 ;
        const GALGAS_bigint extractedValue_registerAddress = extractPtr_7540->mAssociatedValue3 ;
        const GALGAS_uint extractedValue_arraySize = extractPtr_7540->mAssociatedValue5 ;
        const GALGAS_uint extractedValue_elementSize = extractPtr_7540->mAssociatedValue6 ;
        const enumGalgasBool test_4 = extractedValue_writable.operator_not (SOURCE_FILE ("lvalue.galgas", 171)).boolEnum () ;
        if (kBoolTrue == test_4) {
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (inObject.mProperty_mIdentifier.getter_location (SOURCE_FILE ("lvalue.galgas", 172)), GALGAS_string ("the control register is not writable in this context"), fixItArray5  COMMA_SOURCE_FILE ("lvalue.galgas", 172)) ;
          outArgument_outInternalRepresentation.drop () ; // Release error dropped variable
        }else if (kBoolFalse == test_4) {
          {
          routine_analyzeControlRegisterInLValue (constinArgument_inSelfType, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, inObject.mProperty_mIdentifier, extractedValue_registerType, extractedValue_registerAddress.getter_uint (inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 186)), extractedValue_arraySize, extractedValue_elementSize, inObject.mProperty_mAccessList, outArgument_outInternalRepresentation, inCompiler  COMMA_SOURCE_FILE ("lvalue.galgas", 174)) ;
          }
        }
      }
      break ;
    case GALGAS_valuedObject::kEnum_globalConstant:
      {
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (inObject.mProperty_mIdentifier.getter_location (SOURCE_FILE ("lvalue.galgas", 194)), GALGAS_string ("a global constant cannot be written"), fixItArray6  COMMA_SOURCE_FILE ("lvalue.galgas", 194)) ;
        outArgument_outInternalRepresentation.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_valuedObject::kEnum_localConstant:
      {
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (inObject.mProperty_mIdentifier.getter_location (SOURCE_FILE ("lvalue.galgas", 196)), GALGAS_string ("a local constant cannot be written"), fixItArray7  COMMA_SOURCE_FILE ("lvalue.galgas", 196)) ;
        outArgument_outInternalRepresentation.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_valuedObject::kEnum_globalVariable:
      {
        const cEnumAssociatedValues_valuedObject_globalVariable * extractPtr_8719 = (const cEnumAssociatedValues_valuedObject_globalVariable *) (var_entity_6447.unsafePointer ()) ;
        const GALGAS_bool extractedValue_writable = extractPtr_8719->mAssociatedValue0 ;
        const GALGAS_PLMType extractedValue_variableType = extractPtr_8719->mAssociatedValue1 ;
        const enumGalgasBool test_8 = extractedValue_writable.operator_not (SOURCE_FILE ("lvalue.galgas", 198)).boolEnum () ;
        if (kBoolTrue == test_8) {
          TC_Array <C_FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (inObject.mProperty_mIdentifier.getter_location (SOURCE_FILE ("lvalue.galgas", 199)), GALGAS_string ("a global variable cannot be written in this context"), fixItArray9  COMMA_SOURCE_FILE ("lvalue.galgas", 199)) ;
          outArgument_outInternalRepresentation.drop () ; // Release error dropped variable
        }else if (kBoolFalse == test_8) {
          {
          extensionSetter_appendNoteGlobalVariableAccess (ioArgument_ioInstructionGenerationList, inObject.mProperty_mIdentifier.getter_string (SOURCE_FILE ("lvalue.galgas", 201)), inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 201)) ;
          }
          {
          routine_analyzeVariableInLValue (constinArgument_inSelfType, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, inObject.mProperty_mIdentifier, function_llvmNameForGlobalVariable (inObject.mProperty_mIdentifier.getter_string (SOURCE_FILE ("lvalue.galgas", 213)), inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 213)), extractedValue_variableType, inObject.mProperty_mAccessList, outArgument_outInternalRepresentation, inCompiler  COMMA_SOURCE_FILE ("lvalue.galgas", 202)) ;
          }
        }
      }
      break ;
    case GALGAS_valuedObject::kEnum_localVariable:
      {
        const cEnumAssociatedValues_valuedObject_localVariable * extractPtr_9377 = (const cEnumAssociatedValues_valuedObject_localVariable *) (var_entity_6447.unsafePointer ()) ;
        const GALGAS_PLMType extractedValue_variableType = extractPtr_9377->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_plmName = extractPtr_9377->mAssociatedValue1 ;
        {
        routine_analyzeVariableInLValue (constinArgument_inSelfType, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, inObject.mProperty_mIdentifier, function_llvmNameForLocalVariable (extractedValue_plmName.getter_string (SOURCE_FILE ("lvalue.galgas", 231)), inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 231)), extractedValue_variableType, inObject.mProperty_mAccessList, outArgument_outInternalRepresentation, inCompiler  COMMA_SOURCE_FILE ("lvalue.galgas", 220)) ;
        }
      }
      break ;
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineDescriptor::GALGAS_routineDescriptor (void) :
mProperty_mIsPublic (),
mProperty_mExported (),
mProperty_mRoutineKind (),
mProperty_mSignature (),
mProperty_mReturnTypeProxy (),
mProperty_mCanAccessProperties (),
mProperty_mCanMutateProperties () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineDescriptor::~ GALGAS_routineDescriptor (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineDescriptor::GALGAS_routineDescriptor (const GALGAS_bool & inOperand0,
                                                    const GALGAS_bool & inOperand1,
                                                    const GALGAS_routineKind & inOperand2,
                                                    const GALGAS_routineTypedSignature & inOperand3,
                                                    const GALGAS_unifiedTypeMap_2D_proxy & inOperand4,
                                                    const GALGAS_bool & inOperand5,
                                                    const GALGAS_bool & inOperand6) :
mProperty_mIsPublic (inOperand0),
mProperty_mExported (inOperand1),
mProperty_mRoutineKind (inOperand2),
mProperty_mSignature (inOperand3),
mProperty_mReturnTypeProxy (inOperand4),
mProperty_mCanAccessProperties (inOperand5),
mProperty_mCanMutateProperties (inOperand6) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineDescriptor GALGAS_routineDescriptor::constructor_new (const GALGAS_bool & inOperand0,
                                                                    const GALGAS_bool & inOperand1,
                                                                    const GALGAS_routineKind & inOperand2,
                                                                    const GALGAS_routineTypedSignature & inOperand3,
                                                                    const GALGAS_unifiedTypeMap_2D_proxy & inOperand4,
                                                                    const GALGAS_bool & inOperand5,
                                                                    const GALGAS_bool & inOperand6 
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_routineDescriptor result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid ()) {
    result = GALGAS_routineDescriptor (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_routineDescriptor::objectCompare (const GALGAS_routineDescriptor & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mIsPublic.objectCompare (inOperand.mProperty_mIsPublic) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mExported.objectCompare (inOperand.mProperty_mExported) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mRoutineKind.objectCompare (inOperand.mProperty_mRoutineKind) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSignature.objectCompare (inOperand.mProperty_mSignature) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mReturnTypeProxy.objectCompare (inOperand.mProperty_mReturnTypeProxy) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mCanAccessProperties.objectCompare (inOperand.mProperty_mCanAccessProperties) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mCanMutateProperties.objectCompare (inOperand.mProperty_mCanMutateProperties) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_routineDescriptor::isValid (void) const {
  return mProperty_mIsPublic.isValid () && mProperty_mExported.isValid () && mProperty_mRoutineKind.isValid () && mProperty_mSignature.isValid () && mProperty_mReturnTypeProxy.isValid () && mProperty_mCanAccessProperties.isValid () && mProperty_mCanMutateProperties.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineDescriptor::drop (void) {
  mProperty_mIsPublic.drop () ;
  mProperty_mExported.drop () ;
  mProperty_mRoutineKind.drop () ;
  mProperty_mSignature.drop () ;
  mProperty_mReturnTypeProxy.drop () ;
  mProperty_mCanAccessProperties.drop () ;
  mProperty_mCanMutateProperties.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineDescriptor::description (C_String & ioString,
                                            const int32_t inIndentation) const {
  ioString << "<struct @routineDescriptor:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mIsPublic.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mExported.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mRoutineKind.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSignature.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mReturnTypeProxy.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mCanAccessProperties.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mCanMutateProperties.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_routineDescriptor::getter_mIsPublic (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIsPublic ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_routineDescriptor::getter_mExported (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExported ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineKind GALGAS_routineDescriptor::getter_mRoutineKind (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRoutineKind ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineTypedSignature GALGAS_routineDescriptor::getter_mSignature (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSignature ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_routineDescriptor::getter_mReturnTypeProxy (UNUSED_LOCATION_ARGS) const {
  return mProperty_mReturnTypeProxy ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_routineDescriptor::getter_mCanAccessProperties (UNUSED_LOCATION_ARGS) const {
  return mProperty_mCanAccessProperties ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_routineDescriptor::getter_mCanMutateProperties (UNUSED_LOCATION_ARGS) const {
  return mProperty_mCanMutateProperties ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @routineDescriptor type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_routineDescriptor ("routineDescriptor",
                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_routineDescriptor::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineDescriptor ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_routineDescriptor::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_routineDescriptor (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineDescriptor GALGAS_routineDescriptor::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_routineDescriptor result ;
  const GALGAS_routineDescriptor * p = (const GALGAS_routineDescriptor *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_routineDescriptor *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineDescriptor", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineMapForContext::GALGAS_routineMapForContext (void) :
mProperty_mInternalRoutineMap () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineMapForContext::~ GALGAS_routineMapForContext (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineMapForContext::GALGAS_routineMapForContext (const GALGAS_internalRoutineMapForContext & inOperand0) :
mProperty_mInternalRoutineMap (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineMapForContext GALGAS_routineMapForContext::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_routineMapForContext (GALGAS_internalRoutineMapForContext::constructor_emptyMap (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineMapForContext GALGAS_routineMapForContext::constructor_new (const GALGAS_internalRoutineMapForContext & inOperand0 
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_routineMapForContext result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_routineMapForContext (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_routineMapForContext::objectCompare (const GALGAS_routineMapForContext & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mInternalRoutineMap.objectCompare (inOperand.mProperty_mInternalRoutineMap) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_routineMapForContext::isValid (void) const {
  return mProperty_mInternalRoutineMap.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineMapForContext::drop (void) {
  mProperty_mInternalRoutineMap.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineMapForContext::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "<struct @routineMapForContext:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mInternalRoutineMap.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_internalRoutineMapForContext GALGAS_routineMapForContext::getter_mInternalRoutineMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInternalRoutineMap ;
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
//                                                                                                                     *
//                               Extension method '@routineMapForContext insertRoutine'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionSetter_insertRoutine (GALGAS_routineMapForContext & ioObject,
                                    const GALGAS_lstring constinArgument_inRoutineName,
                                    const GALGAS_lstring constinArgument_inArgumentSignature,
                                    const GALGAS_lstring constinArgument_inRoutineLLVMName,
                                    const GALGAS_routineDescriptor constinArgument_inDescriptor,
                                    C_Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  cMapElement_internalRoutineMapForContext * objectArray_2124 = (cMapElement_internalRoutineMapForContext *) ioObject.mProperty_mInternalRoutineMap.readWriteAccessForWithInstruction (inCompiler, constinArgument_inRoutineName.getter_string (HERE)  COMMA_SOURCE_FILE ("routine-map.galgas", 43)) ;
  if (NULL != objectArray_2124) {
      macroValidSharedObject (objectArray_2124, cMapElement_internalRoutineMapForContext) ;
    {
    objectArray_2124->mProperty_mRoutineArgumentSignatureMapForContext.setter_insertKey (constinArgument_inArgumentSignature, constinArgument_inRoutineLLVMName, constinArgument_inDescriptor, inCompiler COMMA_SOURCE_FILE ("routine-map.galgas", 44)) ;
    }
  }else{
    GALGAS_routineArgumentSignatureMapForContext var_routineArgumentSignatureMapForContext_2395 = GALGAS_routineArgumentSignatureMapForContext::constructor_emptyMap (SOURCE_FILE ("routine-map.galgas", 50)) ;
    {
    var_routineArgumentSignatureMapForContext_2395.setter_insertKey (constinArgument_inArgumentSignature, constinArgument_inRoutineLLVMName, constinArgument_inDescriptor, inCompiler COMMA_SOURCE_FILE ("routine-map.galgas", 51)) ;
    }
    {
    ioObject.mProperty_mInternalRoutineMap.setter_insertKey (constinArgument_inRoutineName, var_routineArgumentSignatureMapForContext_2395, inCompiler COMMA_SOURCE_FILE ("routine-map.galgas", 56)) ;
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Extension method '@routineMapForContext searchKey'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_searchKey (const GALGAS_routineMapForContext inObject,
                                const GALGAS_lstring constinArgument_inRoutineName,
                                const GALGAS_lstring constinArgument_inArgumentSignature,
                                GALGAS_lstring & outArgument_outRoutineLLVMName,
                                GALGAS_routineDescriptor & outArgument_outDescriptor,
                                GALGAS_location & outArgument_outKeyLocation,
                                C_Compiler * inCompiler
                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outRoutineLLVMName.drop () ; // Release 'out' argument
  outArgument_outDescriptor.drop () ; // Release 'out' argument
  outArgument_outKeyLocation.drop () ; // Release 'out' argument
  GALGAS_routineArgumentSignatureMapForContext var_routineArgumentSignatureMapForContext_3187 ;
  inObject.mProperty_mInternalRoutineMap.method_searchKey (constinArgument_inRoutineName, var_routineArgumentSignatureMapForContext_3187, inCompiler COMMA_SOURCE_FILE ("routine-map.galgas", 71)) ;
  var_routineArgumentSignatureMapForContext_3187.method_searchKey (constinArgument_inArgumentSignature, outArgument_outRoutineLLVMName, outArgument_outDescriptor, outArgument_outKeyLocation, inCompiler COMMA_SOURCE_FILE ("routine-map.galgas", 72)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Extension Getter '@routineMapForContext hasKey'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool extensionGetter_hasKey (const GALGAS_routineMapForContext & inObject,
                                    const GALGAS_lstring & constinArgument_inRoutineName,
                                    const GALGAS_lstring & constinArgument_inArgumentSignature,
                                    C_Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  result_result = inObject.mProperty_mInternalRoutineMap.getter_hasKey (constinArgument_inRoutineName.getter_string (SOURCE_FILE ("routine-map.galgas", 78)) COMMA_SOURCE_FILE ("routine-map.galgas", 78)) ;
  const enumGalgasBool test_0 = result_result.boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_routineArgumentSignatureMapForContext var_routineArgumentSignatureMapForContext_3711 ;
    inObject.mProperty_mInternalRoutineMap.method_searchKey (constinArgument_inRoutineName, var_routineArgumentSignatureMapForContext_3711, inCompiler COMMA_SOURCE_FILE ("routine-map.galgas", 80)) ;
    result_result = var_routineArgumentSignatureMapForContext_3711.getter_hasKey (constinArgument_inArgumentSignature.getter_string (SOURCE_FILE ("routine-map.galgas", 81)) COMMA_SOURCE_FILE ("routine-map.galgas", 81)) ;
  }
//---
  return result_result ;
}




//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_universalValuedObjectMapForContext::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_universalValuedObjectMapForContext * p = (const cPtr_universalValuedObjectMapForContext *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_universalValuedObjectMapForContext) ;
  if (kOperandEqual == result) {
    result = mProperty_mInternalPropertyAndRoutineMapForContext.objectCompare (p->mProperty_mInternalPropertyAndRoutineMapForContext) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mScopeStack.objectCompare (p->mProperty_mScopeStack) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLocalObjectList.objectCompare (p->mProperty_mLocalObjectList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_universalValuedObjectMapForContext::objectCompare (const GALGAS_universalValuedObjectMapForContext & inOperand) const {
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

GALGAS_universalValuedObjectMapForContext::GALGAS_universalValuedObjectMapForContext (void) :
AC_GALGAS_class (true) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_universalValuedObjectMapForContext GALGAS_universalValuedObjectMapForContext::constructor_default (LOCATION_ARGS) {
  return GALGAS_universalValuedObjectMapForContext::constructor_new (GALGAS_internalValuedObjectMapMapForContext::constructor_emptyMap (HERE),
                                                                     GALGAS_scopeStack::constructor_emptyList (HERE),
                                                                     GALGAS_lstringlist::constructor_emptyList (HERE)
                                                                     COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_universalValuedObjectMapForContext::GALGAS_universalValuedObjectMapForContext (const cPtr_universalValuedObjectMapForContext * inSourcePtr) :
AC_GALGAS_class (inSourcePtr, true) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_universalValuedObjectMapForContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_universalValuedObjectMapForContext GALGAS_universalValuedObjectMapForContext::constructor_new (const GALGAS_internalValuedObjectMapMapForContext & inAttribute_mInternalPropertyAndRoutineMapForContext,
                                                                                                      const GALGAS_scopeStack & inAttribute_mScopeStack,
                                                                                                      const GALGAS_lstringlist & inAttribute_mLocalObjectList
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_universalValuedObjectMapForContext result ;
  if (inAttribute_mInternalPropertyAndRoutineMapForContext.isValid () && inAttribute_mScopeStack.isValid () && inAttribute_mLocalObjectList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_universalValuedObjectMapForContext (inAttribute_mInternalPropertyAndRoutineMapForContext, inAttribute_mScopeStack, inAttribute_mLocalObjectList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_internalValuedObjectMapMapForContext GALGAS_universalValuedObjectMapForContext::getter_mInternalPropertyAndRoutineMapForContext (UNUSED_LOCATION_ARGS) const {
  GALGAS_internalValuedObjectMapMapForContext result ;
  if (NULL != mObjectPtr) {
    const cPtr_universalValuedObjectMapForContext * p = (const cPtr_universalValuedObjectMapForContext *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_universalValuedObjectMapForContext) ;
    result = p->mProperty_mInternalPropertyAndRoutineMapForContext ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_internalValuedObjectMapMapForContext cPtr_universalValuedObjectMapForContext::getter_mInternalPropertyAndRoutineMapForContext (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInternalPropertyAndRoutineMapForContext ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_scopeStack GALGAS_universalValuedObjectMapForContext::getter_mScopeStack (UNUSED_LOCATION_ARGS) const {
  GALGAS_scopeStack result ;
  if (NULL != mObjectPtr) {
    const cPtr_universalValuedObjectMapForContext * p = (const cPtr_universalValuedObjectMapForContext *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_universalValuedObjectMapForContext) ;
    result = p->mProperty_mScopeStack ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_scopeStack cPtr_universalValuedObjectMapForContext::getter_mScopeStack (UNUSED_LOCATION_ARGS) const {
  return mProperty_mScopeStack ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_universalValuedObjectMapForContext::getter_mLocalObjectList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_universalValuedObjectMapForContext * p = (const cPtr_universalValuedObjectMapForContext *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_universalValuedObjectMapForContext) ;
    result = p->mProperty_mLocalObjectList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist cPtr_universalValuedObjectMapForContext::getter_mLocalObjectList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLocalObjectList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                             Pointer class for @universalValuedObjectMapForContext class                             *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_universalValuedObjectMapForContext::cPtr_universalValuedObjectMapForContext (const GALGAS_internalValuedObjectMapMapForContext & in_mInternalPropertyAndRoutineMapForContext,
                                                                                  const GALGAS_scopeStack & in_mScopeStack,
                                                                                  const GALGAS_lstringlist & in_mLocalObjectList
                                                                                  COMMA_LOCATION_ARGS) :
acPtr_class (THERE),
mProperty_mInternalPropertyAndRoutineMapForContext (in_mInternalPropertyAndRoutineMapForContext),
mProperty_mScopeStack (in_mScopeStack),
mProperty_mLocalObjectList (in_mLocalObjectList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_universalValuedObjectMapForContext::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_universalValuedObjectMapForContext ;
}

void cPtr_universalValuedObjectMapForContext::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "[@universalValuedObjectMapForContext:" ;
  mProperty_mInternalPropertyAndRoutineMapForContext.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mScopeStack.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLocalObjectList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_universalValuedObjectMapForContext::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_universalValuedObjectMapForContext (mProperty_mInternalPropertyAndRoutineMapForContext, mProperty_mScopeStack, mProperty_mLocalObjectList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @universalValuedObjectMapForContext type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_universalValuedObjectMapForContext ("universalValuedObjectMapForContext",
                                                           NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_universalValuedObjectMapForContext::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_universalValuedObjectMapForContext ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_universalValuedObjectMapForContext::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_universalValuedObjectMapForContext (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_universalValuedObjectMapForContext GALGAS_universalValuedObjectMapForContext::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_universalValuedObjectMapForContext result ;
  const GALGAS_universalValuedObjectMapForContext * p = (const GALGAS_universalValuedObjectMapForContext *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_universalValuedObjectMapForContext *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("universalValuedObjectMapForContext", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Extension setter '@universalValuedObjectMapForContext insertModule'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionSetterSignature_universalValuedObjectMapForContext_insertModule> gExtensionModifierTable_universalValuedObjectMapForContext_insertModule ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_insertModule (const int32_t inClassIndex,
                                        extensionSetterSignature_universalValuedObjectMapForContext_insertModule inModifier) {
  gExtensionModifierTable_universalValuedObjectMapForContext_insertModule.forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_insertModule (cPtr_universalValuedObjectMapForContext * inObject,
                                       const GALGAS_lstring constin_inModuleName,
                                       const GALGAS_PLMType constin_inModuleType,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find setter
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_universalValuedObjectMapForContext) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_universalValuedObjectMapForContext_insertModule f = NULL ;
    if (classIndex < gExtensionModifierTable_universalValuedObjectMapForContext_insertModule.count ()) {
      f = gExtensionModifierTable_universalValuedObjectMapForContext_insertModule (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionModifierTable_universalValuedObjectMapForContext_insertModule.count ()) {
           f = gExtensionModifierTable_universalValuedObjectMapForContext_insertModule (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_universalValuedObjectMapForContext_insertModule.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    f (inObject, constin_inModuleName, constin_inModuleType, inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionSetter_universalValuedObjectMapForContext_insertModule (cPtr_universalValuedObjectMapForContext * inObject,
                                                                             const GALGAS_lstring constinArgument_inModuleName,
                                                                             const GALGAS_PLMType constinArgument_inModuleType,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_universalValuedObjectMapForContext * object = inObject ;
  macroValidSharedObject (object, cPtr_universalValuedObjectMapForContext) ;
  GALGAS_valuedObject var_newValue_1012 = GALGAS_valuedObject::constructor_module (constinArgument_inModuleType  COMMA_SOURCE_FILE ("universal-map.galgas", 22)) ;
  {
  object->mProperty_mInternalPropertyAndRoutineMapForContext.setter_insertKey (constinArgument_inModuleName, GALGAS_valuedObjectState::constructor_noValue (SOURCE_FILE ("universal-map.galgas", 25)), GALGAS_bool (false), var_newValue_1012, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 23)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionSetter_universalValuedObjectMapForContext_insertModule (void) {
  enterExtensionSetter_insertModule (kTypeDescriptor_GALGAS_universalValuedObjectMapForContext.mSlotID,
                                     extensionSetter_universalValuedObjectMapForContext_insertModule) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionModifier_universalValuedObjectMapForContext_insertModule (void) {
  gExtensionModifierTable_universalValuedObjectMapForContext_insertModule.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_universalValuedObjectMapForContext_insertModule (defineExtensionSetter_universalValuedObjectMapForContext_insertModule,
                                                                            freeExtensionModifier_universalValuedObjectMapForContext_insertModule) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Extension setter '@universalValuedObjectMapForContext insertRegister'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionSetterSignature_universalValuedObjectMapForContext_insertRegister> gExtensionModifierTable_universalValuedObjectMapForContext_insertRegister ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_insertRegister (const int32_t inClassIndex,
                                          extensionSetterSignature_universalValuedObjectMapForContext_insertRegister inModifier) {
  gExtensionModifierTable_universalValuedObjectMapForContext_insertRegister.forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_insertRegister (cPtr_universalValuedObjectMapForContext * inObject,
                                         const GALGAS_lstring constin_inRegisterName,
                                         const GALGAS_bool constin_inReadable,
                                         const GALGAS_bool constin_inWritable,
                                         const GALGAS_PLMType constin_inType,
                                         const GALGAS_bigint constin_inAddress,
                                         const GALGAS_sliceMap constin_inSliceMap,
                                         const GALGAS_uint constin_inArraySize,
                                         const GALGAS_uint constin_inElementSize,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find setter
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_universalValuedObjectMapForContext) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_universalValuedObjectMapForContext_insertRegister f = NULL ;
    if (classIndex < gExtensionModifierTable_universalValuedObjectMapForContext_insertRegister.count ()) {
      f = gExtensionModifierTable_universalValuedObjectMapForContext_insertRegister (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionModifierTable_universalValuedObjectMapForContext_insertRegister.count ()) {
           f = gExtensionModifierTable_universalValuedObjectMapForContext_insertRegister (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_universalValuedObjectMapForContext_insertRegister.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    f (inObject, constin_inRegisterName, constin_inReadable, constin_inWritable, constin_inType, constin_inAddress, constin_inSliceMap, constin_inArraySize, constin_inElementSize, inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionSetter_universalValuedObjectMapForContext_insertRegister (cPtr_universalValuedObjectMapForContext * inObject,
                                                                               const GALGAS_lstring constinArgument_inRegisterName,
                                                                               const GALGAS_bool constinArgument_inReadable,
                                                                               const GALGAS_bool constinArgument_inWritable,
                                                                               const GALGAS_PLMType constinArgument_inType,
                                                                               const GALGAS_bigint constinArgument_inAddress,
                                                                               const GALGAS_sliceMap constinArgument_inSliceMap,
                                                                               const GALGAS_uint constinArgument_inArraySize,
                                                                               const GALGAS_uint constinArgument_inElementSize,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_universalValuedObjectMapForContext * object = inObject ;
  macroValidSharedObject (object, cPtr_universalValuedObjectMapForContext) ;
  GALGAS_valuedObject var_newValue_1662 = GALGAS_valuedObject::constructor_register (constinArgument_inReadable, constinArgument_inWritable, constinArgument_inType, constinArgument_inAddress, constinArgument_inSliceMap, constinArgument_inArraySize, constinArgument_inElementSize  COMMA_SOURCE_FILE ("universal-map.galgas", 43)) ;
  {
  object->mProperty_mInternalPropertyAndRoutineMapForContext.setter_insertKey (constinArgument_inRegisterName, GALGAS_valuedObjectState::constructor_noValue (SOURCE_FILE ("universal-map.galgas", 54)), GALGAS_bool (false), var_newValue_1662, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 52)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionSetter_universalValuedObjectMapForContext_insertRegister (void) {
  enterExtensionSetter_insertRegister (kTypeDescriptor_GALGAS_universalValuedObjectMapForContext.mSlotID,
                                       extensionSetter_universalValuedObjectMapForContext_insertRegister) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionModifier_universalValuedObjectMapForContext_insertRegister (void) {
  gExtensionModifierTable_universalValuedObjectMapForContext_insertRegister.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_universalValuedObjectMapForContext_insertRegister (defineExtensionSetter_universalValuedObjectMapForContext_insertRegister,
                                                                              freeExtensionModifier_universalValuedObjectMapForContext_insertRegister) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Extension setter '@universalValuedObjectMapForContext insertGlobalConstant'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionSetterSignature_universalValuedObjectMapForContext_insertGlobalConstant> gExtensionModifierTable_universalValuedObjectMapForContext_insertGlobalConstant ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_insertGlobalConstant (const int32_t inClassIndex,
                                                extensionSetterSignature_universalValuedObjectMapForContext_insertGlobalConstant inModifier) {
  gExtensionModifierTable_universalValuedObjectMapForContext_insertGlobalConstant.forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_insertGlobalConstant (cPtr_universalValuedObjectMapForContext * inObject,
                                               const GALGAS_lstring constin_inConstantName,
                                               const GALGAS_objectIR constin_inConstantObjectIR,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find setter
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_universalValuedObjectMapForContext) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_universalValuedObjectMapForContext_insertGlobalConstant f = NULL ;
    if (classIndex < gExtensionModifierTable_universalValuedObjectMapForContext_insertGlobalConstant.count ()) {
      f = gExtensionModifierTable_universalValuedObjectMapForContext_insertGlobalConstant (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionModifierTable_universalValuedObjectMapForContext_insertGlobalConstant.count ()) {
           f = gExtensionModifierTable_universalValuedObjectMapForContext_insertGlobalConstant (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_universalValuedObjectMapForContext_insertGlobalConstant.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    f (inObject, constin_inConstantName, constin_inConstantObjectIR, inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionSetter_universalValuedObjectMapForContext_insertGlobalConstant (cPtr_universalValuedObjectMapForContext * inObject,
                                                                                     const GALGAS_lstring constinArgument_inConstantName,
                                                                                     const GALGAS_objectIR constinArgument_inConstantObjectIR,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_universalValuedObjectMapForContext * object = inObject ;
  macroValidSharedObject (object, cPtr_universalValuedObjectMapForContext) ;
  GALGAS_valuedObject var_newValue_2278 = GALGAS_valuedObject::constructor_globalConstant (constinArgument_inConstantObjectIR  COMMA_SOURCE_FILE ("universal-map.galgas", 66)) ;
  {
  object->mProperty_mInternalPropertyAndRoutineMapForContext.setter_insertKey (constinArgument_inConstantName, GALGAS_valuedObjectState::constructor_noValue (SOURCE_FILE ("universal-map.galgas", 69)), GALGAS_bool (false), var_newValue_2278, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 67)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionSetter_universalValuedObjectMapForContext_insertGlobalConstant (void) {
  enterExtensionSetter_insertGlobalConstant (kTypeDescriptor_GALGAS_universalValuedObjectMapForContext.mSlotID,
                                             extensionSetter_universalValuedObjectMapForContext_insertGlobalConstant) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionModifier_universalValuedObjectMapForContext_insertGlobalConstant (void) {
  gExtensionModifierTable_universalValuedObjectMapForContext_insertGlobalConstant.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_universalValuedObjectMapForContext_insertGlobalConstant (defineExtensionSetter_universalValuedObjectMapForContext_insertGlobalConstant,
                                                                                    freeExtensionModifier_universalValuedObjectMapForContext_insertGlobalConstant) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Extension setter '@universalValuedObjectMapForContext insertLocalConstant'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionSetterSignature_universalValuedObjectMapForContext_insertLocalConstant> gExtensionModifierTable_universalValuedObjectMapForContext_insertLocalConstant ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_insertLocalConstant (const int32_t inClassIndex,
                                               extensionSetterSignature_universalValuedObjectMapForContext_insertLocalConstant inModifier) {
  gExtensionModifierTable_universalValuedObjectMapForContext_insertLocalConstant.forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_insertLocalConstant (cPtr_universalValuedObjectMapForContext * inObject,
                                              const GALGAS_lstring constin_inLocalConstantName,
                                              const GALGAS_PLMType constin_inType,
                                              const GALGAS_lstring constin_inPLMConstantName,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find setter
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_universalValuedObjectMapForContext) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_universalValuedObjectMapForContext_insertLocalConstant f = NULL ;
    if (classIndex < gExtensionModifierTable_universalValuedObjectMapForContext_insertLocalConstant.count ()) {
      f = gExtensionModifierTable_universalValuedObjectMapForContext_insertLocalConstant (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionModifierTable_universalValuedObjectMapForContext_insertLocalConstant.count ()) {
           f = gExtensionModifierTable_universalValuedObjectMapForContext_insertLocalConstant (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_universalValuedObjectMapForContext_insertLocalConstant.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    f (inObject, constin_inLocalConstantName, constin_inType, constin_inPLMConstantName, inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionSetter_universalValuedObjectMapForContext_insertLocalConstant (cPtr_universalValuedObjectMapForContext * inObject,
                                                                                    const GALGAS_lstring constinArgument_inLocalConstantName,
                                                                                    const GALGAS_PLMType constinArgument_inType,
                                                                                    const GALGAS_lstring constinArgument_inPLMConstantName,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_universalValuedObjectMapForContext * object = inObject ;
  macroValidSharedObject (object, cPtr_universalValuedObjectMapForContext) ;
  GALGAS_valuedObject var_newValue_2757 = GALGAS_valuedObject::constructor_localConstant (constinArgument_inType, constinArgument_inPLMConstantName  COMMA_SOURCE_FILE ("universal-map.galgas", 82)) ;
  {
  object->mProperty_mInternalPropertyAndRoutineMapForContext.setter_insertKey (constinArgument_inLocalConstantName, GALGAS_valuedObjectState::constructor_hasUnreadValue (SOURCE_FILE ("universal-map.galgas", 85)), GALGAS_bool (false), var_newValue_2757, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 83)) ;
  }
  object->mProperty_mLocalObjectList.addAssign_operation (constinArgument_inLocalConstantName  COMMA_SOURCE_FILE ("universal-map.galgas", 89)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionSetter_universalValuedObjectMapForContext_insertLocalConstant (void) {
  enterExtensionSetter_insertLocalConstant (kTypeDescriptor_GALGAS_universalValuedObjectMapForContext.mSlotID,
                                            extensionSetter_universalValuedObjectMapForContext_insertLocalConstant) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionModifier_universalValuedObjectMapForContext_insertLocalConstant (void) {
  gExtensionModifierTable_universalValuedObjectMapForContext_insertLocalConstant.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_universalValuedObjectMapForContext_insertLocalConstant (defineExtensionSetter_universalValuedObjectMapForContext_insertLocalConstant,
                                                                                   freeExtensionModifier_universalValuedObjectMapForContext_insertLocalConstant) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Extension setter '@universalValuedObjectMapForContext insertUsedLocalConstant'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionSetterSignature_universalValuedObjectMapForContext_insertUsedLocalConstant> gExtensionModifierTable_universalValuedObjectMapForContext_insertUsedLocalConstant ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_insertUsedLocalConstant (const int32_t inClassIndex,
                                                   extensionSetterSignature_universalValuedObjectMapForContext_insertUsedLocalConstant inModifier) {
  gExtensionModifierTable_universalValuedObjectMapForContext_insertUsedLocalConstant.forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_insertUsedLocalConstant (cPtr_universalValuedObjectMapForContext * inObject,
                                                  const GALGAS_lstring constin_inLocalConstantName,
                                                  const GALGAS_PLMType constin_inType,
                                                  const GALGAS_lstring constin_inPLMConstantName,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find setter
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_universalValuedObjectMapForContext) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_universalValuedObjectMapForContext_insertUsedLocalConstant f = NULL ;
    if (classIndex < gExtensionModifierTable_universalValuedObjectMapForContext_insertUsedLocalConstant.count ()) {
      f = gExtensionModifierTable_universalValuedObjectMapForContext_insertUsedLocalConstant (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionModifierTable_universalValuedObjectMapForContext_insertUsedLocalConstant.count ()) {
           f = gExtensionModifierTable_universalValuedObjectMapForContext_insertUsedLocalConstant (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_universalValuedObjectMapForContext_insertUsedLocalConstant.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    f (inObject, constin_inLocalConstantName, constin_inType, constin_inPLMConstantName, inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionSetter_universalValuedObjectMapForContext_insertUsedLocalConstant (cPtr_universalValuedObjectMapForContext * inObject,
                                                                                        const GALGAS_lstring constinArgument_inLocalConstantName,
                                                                                        const GALGAS_PLMType constinArgument_inType,
                                                                                        const GALGAS_lstring constinArgument_inPLMConstantName,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_universalValuedObjectMapForContext * object = inObject ;
  macroValidSharedObject (object, cPtr_universalValuedObjectMapForContext) ;
  GALGAS_valuedObject var_newValue_3305 = GALGAS_valuedObject::constructor_localConstant (constinArgument_inType, constinArgument_inPLMConstantName  COMMA_SOURCE_FILE ("universal-map.galgas", 99)) ;
  {
  object->mProperty_mInternalPropertyAndRoutineMapForContext.setter_insertKey (constinArgument_inLocalConstantName, GALGAS_valuedObjectState::constructor_hasReadValue (SOURCE_FILE ("universal-map.galgas", 102)), GALGAS_bool (false), var_newValue_3305, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 100)) ;
  }
  object->mProperty_mLocalObjectList.addAssign_operation (constinArgument_inLocalConstantName  COMMA_SOURCE_FILE ("universal-map.galgas", 106)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionSetter_universalValuedObjectMapForContext_insertUsedLocalConstant (void) {
  enterExtensionSetter_insertUsedLocalConstant (kTypeDescriptor_GALGAS_universalValuedObjectMapForContext.mSlotID,
                                                extensionSetter_universalValuedObjectMapForContext_insertUsedLocalConstant) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionModifier_universalValuedObjectMapForContext_insertUsedLocalConstant (void) {
  gExtensionModifierTable_universalValuedObjectMapForContext_insertUsedLocalConstant.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_universalValuedObjectMapForContext_insertUsedLocalConstant (defineExtensionSetter_universalValuedObjectMapForContext_insertUsedLocalConstant,
                                                                                       freeExtensionModifier_universalValuedObjectMapForContext_insertUsedLocalConstant) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Extension setter '@universalValuedObjectMapForContext insertGlobalVariable'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionSetterSignature_universalValuedObjectMapForContext_insertGlobalVariable> gExtensionModifierTable_universalValuedObjectMapForContext_insertGlobalVariable ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_insertGlobalVariable (const int32_t inClassIndex,
                                                extensionSetterSignature_universalValuedObjectMapForContext_insertGlobalVariable inModifier) {
  gExtensionModifierTable_universalValuedObjectMapForContext_insertGlobalVariable.forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_insertGlobalVariable (cPtr_universalValuedObjectMapForContext * inObject,
                                               const GALGAS_lstring constin_inGlobalVariableName,
                                               const GALGAS_PLMType constin_inType,
                                               const GALGAS_bool constin_inWritable,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find setter
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_universalValuedObjectMapForContext) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_universalValuedObjectMapForContext_insertGlobalVariable f = NULL ;
    if (classIndex < gExtensionModifierTable_universalValuedObjectMapForContext_insertGlobalVariable.count ()) {
      f = gExtensionModifierTable_universalValuedObjectMapForContext_insertGlobalVariable (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionModifierTable_universalValuedObjectMapForContext_insertGlobalVariable.count ()) {
           f = gExtensionModifierTable_universalValuedObjectMapForContext_insertGlobalVariable (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_universalValuedObjectMapForContext_insertGlobalVariable.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    f (inObject, constin_inGlobalVariableName, constin_inType, constin_inWritable, inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionSetter_universalValuedObjectMapForContext_insertGlobalVariable (cPtr_universalValuedObjectMapForContext * inObject,
                                                                                     const GALGAS_lstring constinArgument_inGlobalVariableName,
                                                                                     const GALGAS_PLMType constinArgument_inType,
                                                                                     const GALGAS_bool constinArgument_inWritable,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_universalValuedObjectMapForContext * object = inObject ;
  macroValidSharedObject (object, cPtr_universalValuedObjectMapForContext) ;
  GALGAS_valuedObject var_newValue_3839 = GALGAS_valuedObject::constructor_globalVariable (constinArgument_inWritable, constinArgument_inType  COMMA_SOURCE_FILE ("universal-map.galgas", 116)) ;
  {
  object->mProperty_mInternalPropertyAndRoutineMapForContext.setter_insertKey (constinArgument_inGlobalVariableName, GALGAS_valuedObjectState::constructor_noValue (SOURCE_FILE ("universal-map.galgas", 119)), GALGAS_bool (false), var_newValue_3839, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 117)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionSetter_universalValuedObjectMapForContext_insertGlobalVariable (void) {
  enterExtensionSetter_insertGlobalVariable (kTypeDescriptor_GALGAS_universalValuedObjectMapForContext.mSlotID,
                                             extensionSetter_universalValuedObjectMapForContext_insertGlobalVariable) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionModifier_universalValuedObjectMapForContext_insertGlobalVariable (void) {
  gExtensionModifierTable_universalValuedObjectMapForContext_insertGlobalVariable.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_universalValuedObjectMapForContext_insertGlobalVariable (defineExtensionSetter_universalValuedObjectMapForContext_insertGlobalVariable,
                                                                                    freeExtensionModifier_universalValuedObjectMapForContext_insertGlobalVariable) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Extension setter '@universalValuedObjectMapForContext insertLocalVariable'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionSetterSignature_universalValuedObjectMapForContext_insertLocalVariable> gExtensionModifierTable_universalValuedObjectMapForContext_insertLocalVariable ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_insertLocalVariable (const int32_t inClassIndex,
                                               extensionSetterSignature_universalValuedObjectMapForContext_insertLocalVariable inModifier) {
  gExtensionModifierTable_universalValuedObjectMapForContext_insertLocalVariable.forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_insertLocalVariable (cPtr_universalValuedObjectMapForContext * inObject,
                                              const GALGAS_lstring constin_inLocalVariableName,
                                              const GALGAS_PLMType constin_inType,
                                              const GALGAS_lstring constin_inPLMName,
                                              const GALGAS_valuedObjectState constin_inVariableInitialState,
                                              const GALGAS_bool constin_inObjectShouldBeValuedAtEndOfScope,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find setter
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_universalValuedObjectMapForContext) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_universalValuedObjectMapForContext_insertLocalVariable f = NULL ;
    if (classIndex < gExtensionModifierTable_universalValuedObjectMapForContext_insertLocalVariable.count ()) {
      f = gExtensionModifierTable_universalValuedObjectMapForContext_insertLocalVariable (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionModifierTable_universalValuedObjectMapForContext_insertLocalVariable.count ()) {
           f = gExtensionModifierTable_universalValuedObjectMapForContext_insertLocalVariable (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_universalValuedObjectMapForContext_insertLocalVariable.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    f (inObject, constin_inLocalVariableName, constin_inType, constin_inPLMName, constin_inVariableInitialState, constin_inObjectShouldBeValuedAtEndOfScope, inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionSetter_universalValuedObjectMapForContext_insertLocalVariable (cPtr_universalValuedObjectMapForContext * inObject,
                                                                                    const GALGAS_lstring constinArgument_inLocalVariableName,
                                                                                    const GALGAS_PLMType constinArgument_inType,
                                                                                    const GALGAS_lstring constinArgument_inPLMName,
                                                                                    const GALGAS_valuedObjectState constinArgument_inVariableInitialState,
                                                                                    const GALGAS_bool constinArgument_inObjectShouldBeValuedAtEndOfScope,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_universalValuedObjectMapForContext * object = inObject ;
  macroValidSharedObject (object, cPtr_universalValuedObjectMapForContext) ;
  GALGAS_valuedObject var_newValue_4418 = GALGAS_valuedObject::constructor_localVariable (constinArgument_inType, constinArgument_inPLMName  COMMA_SOURCE_FILE ("universal-map.galgas", 134)) ;
  {
  object->mProperty_mInternalPropertyAndRoutineMapForContext.setter_insertKey (constinArgument_inLocalVariableName, constinArgument_inVariableInitialState, constinArgument_inObjectShouldBeValuedAtEndOfScope, var_newValue_4418, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 135)) ;
  }
  object->mProperty_mLocalObjectList.addAssign_operation (constinArgument_inLocalVariableName  COMMA_SOURCE_FILE ("universal-map.galgas", 141)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionSetter_universalValuedObjectMapForContext_insertLocalVariable (void) {
  enterExtensionSetter_insertLocalVariable (kTypeDescriptor_GALGAS_universalValuedObjectMapForContext.mSlotID,
                                            extensionSetter_universalValuedObjectMapForContext_insertLocalVariable) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionModifier_universalValuedObjectMapForContext_insertLocalVariable (void) {
  gExtensionModifierTable_universalValuedObjectMapForContext_insertLocalVariable.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_universalValuedObjectMapForContext_insertLocalVariable (defineExtensionSetter_universalValuedObjectMapForContext_insertLocalVariable,
                                                                                   freeExtensionModifier_universalValuedObjectMapForContext_insertLocalVariable) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Extension method '@universalValuedObjectMapForContext searchEntity'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_universalValuedObjectMapForContext_searchEntity> gExtensionMethodTable_universalValuedObjectMapForContext_searchEntity ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_searchEntity (const int32_t inClassIndex,
                                        extensionMethodSignature_universalValuedObjectMapForContext_searchEntity inMethod) {
  gExtensionMethodTable_universalValuedObjectMapForContext_searchEntity.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_searchEntity (const cPtr_universalValuedObjectMapForContext * inObject,
                                       const GALGAS_lstring constin_inValuedObjectName,
                                       GALGAS_valuedObject & out_outEntity,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
  out_outEntity.drop () ;
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_universalValuedObjectMapForContext) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_universalValuedObjectMapForContext_searchEntity f = NULL ;
    if (classIndex < gExtensionMethodTable_universalValuedObjectMapForContext_searchEntity.count ()) {
      f = gExtensionMethodTable_universalValuedObjectMapForContext_searchEntity (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_universalValuedObjectMapForContext_searchEntity.count ()) {
           f = gExtensionMethodTable_universalValuedObjectMapForContext_searchEntity (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_universalValuedObjectMapForContext_searchEntity.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inValuedObjectName, out_outEntity, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_universalValuedObjectMapForContext_searchEntity (const cPtr_universalValuedObjectMapForContext * inObject,
                                                                             const GALGAS_lstring constinArgument_inValuedObjectName,
                                                                             GALGAS_valuedObject & outArgument_outEntity,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_universalValuedObjectMapForContext * object = inObject ;
  macroValidSharedObject (object, cPtr_universalValuedObjectMapForContext) ;
  GALGAS_valuedObjectState joker_5152_2 ; // Joker input parameter
  GALGAS_bool joker_5152_1 ; // Joker input parameter
  object->mProperty_mInternalPropertyAndRoutineMapForContext.method_searchKey (constinArgument_inValuedObjectName, joker_5152_2, joker_5152_1, outArgument_outEntity, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 152)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_universalValuedObjectMapForContext_searchEntity (void) {
  enterExtensionMethod_searchEntity (kTypeDescriptor_GALGAS_universalValuedObjectMapForContext.mSlotID,
                                     extensionMethod_universalValuedObjectMapForContext_searchEntity) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_universalValuedObjectMapForContext_searchEntity (void) {
  gExtensionMethodTable_universalValuedObjectMapForContext_searchEntity.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_universalValuedObjectMapForContext_searchEntity (defineExtensionMethod_universalValuedObjectMapForContext_searchEntity,
                                                                            freeExtensionMethod_universalValuedObjectMapForContext_searchEntity) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Extension method '@universalValuedObjectMapForContext searchValuedObject'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_universalValuedObjectMapForContext_searchValuedObject> gExtensionMethodTable_universalValuedObjectMapForContext_searchValuedObject ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_searchValuedObject (const int32_t inClassIndex,
                                              extensionMethodSignature_universalValuedObjectMapForContext_searchValuedObject inMethod) {
  gExtensionMethodTable_universalValuedObjectMapForContext_searchValuedObject.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_searchValuedObject (const cPtr_universalValuedObjectMapForContext * inObject,
                                             const GALGAS_lstring constin_inValuedObjectName,
                                             GALGAS_objectIR & out_outObjectIR,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  out_outObjectIR.drop () ;
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_universalValuedObjectMapForContext) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_universalValuedObjectMapForContext_searchValuedObject f = NULL ;
    if (classIndex < gExtensionMethodTable_universalValuedObjectMapForContext_searchValuedObject.count ()) {
      f = gExtensionMethodTable_universalValuedObjectMapForContext_searchValuedObject (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_universalValuedObjectMapForContext_searchValuedObject.count ()) {
           f = gExtensionMethodTable_universalValuedObjectMapForContext_searchValuedObject (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_universalValuedObjectMapForContext_searchValuedObject.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inValuedObjectName, out_outObjectIR, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_universalValuedObjectMapForContext_searchValuedObject (const cPtr_universalValuedObjectMapForContext * inObject,
                                                                                   const GALGAS_lstring constinArgument_inValuedObjectName,
                                                                                   GALGAS_objectIR & outArgument_outObjectIR,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_universalValuedObjectMapForContext * object = inObject ;
  macroValidSharedObject (object, cPtr_universalValuedObjectMapForContext) ;
  GALGAS_valuedObject var_entity_5505 ;
  GALGAS_valuedObjectState joker_5491_2 ; // Joker input parameter
  GALGAS_bool joker_5491_1 ; // Joker input parameter
  object->mProperty_mInternalPropertyAndRoutineMapForContext.method_searchKey (constinArgument_inValuedObjectName, joker_5491_2, joker_5491_1, var_entity_5505, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 161)) ;
  switch (var_entity_5505.enumValue ()) {
  case GALGAS_valuedObject::kNotBuilt:
    break ;
  case GALGAS_valuedObject::kEnum_module:
    {
      const cEnumAssociatedValues_valuedObject_module * extractPtr_5654 = (const cEnumAssociatedValues_valuedObject_module *) (var_entity_5505.unsafePointer ()) ;
      const GALGAS_PLMType extractedValue_type = extractPtr_5654->mAssociatedValue0 ;
      outArgument_outObjectIR = GALGAS_objectIR::constructor_reference (extractedValue_type, function_llvmNameForGlobalVariable (constinArgument_inValuedObjectName.getter_string (SOURCE_FILE ("universal-map.galgas", 164)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 164))  COMMA_SOURCE_FILE ("universal-map.galgas", 164)) ;
    }
    break ;
  case GALGAS_valuedObject::kEnum_register:
    {
      TC_Array <C_FixItDescription> fixItArray0 ;
      inCompiler->emitSemanticError (constinArgument_inValuedObjectName.getter_location (SOURCE_FILE ("universal-map.galgas", 166)), GALGAS_string ("control register \?"), fixItArray0  COMMA_SOURCE_FILE ("universal-map.galgas", 166)) ;
      outArgument_outObjectIR.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_valuedObject::kEnum_globalConstant:
    {
      const cEnumAssociatedValues_valuedObject_globalConstant * extractPtr_5826 = (const cEnumAssociatedValues_valuedObject_globalConstant *) (var_entity_5505.unsafePointer ()) ;
      const GALGAS_objectIR extractedValue_objectIR = extractPtr_5826->mAssociatedValue0 ;
      outArgument_outObjectIR = extractedValue_objectIR ;
    }
    break ;
  case GALGAS_valuedObject::kEnum_localConstant:
    {
      const cEnumAssociatedValues_valuedObject_localConstant * extractPtr_5979 = (const cEnumAssociatedValues_valuedObject_localConstant *) (var_entity_5505.unsafePointer ()) ;
      const GALGAS_PLMType extractedValue_type = extractPtr_5979->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_plmName = extractPtr_5979->mAssociatedValue1 ;
      outArgument_outObjectIR = GALGAS_objectIR::constructor_reference (extractedValue_type, function_llvmNameForLocalVariable (extractedValue_plmName.getter_string (SOURCE_FILE ("universal-map.galgas", 170)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 170))  COMMA_SOURCE_FILE ("universal-map.galgas", 170)) ;
    }
    break ;
  case GALGAS_valuedObject::kEnum_globalVariable:
    {
      const cEnumAssociatedValues_valuedObject_globalVariable * extractPtr_6121 = (const cEnumAssociatedValues_valuedObject_globalVariable *) (var_entity_5505.unsafePointer ()) ;
      const GALGAS_PLMType extractedValue_type = extractPtr_6121->mAssociatedValue1 ;
      outArgument_outObjectIR = GALGAS_objectIR::constructor_reference (extractedValue_type, function_llvmNameForGlobalVariable (constinArgument_inValuedObjectName.getter_string (SOURCE_FILE ("universal-map.galgas", 172)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 172))  COMMA_SOURCE_FILE ("universal-map.galgas", 172)) ;
    }
    break ;
  case GALGAS_valuedObject::kEnum_localVariable:
    {
      const cEnumAssociatedValues_valuedObject_localVariable * extractPtr_6274 = (const cEnumAssociatedValues_valuedObject_localVariable *) (var_entity_5505.unsafePointer ()) ;
      const GALGAS_PLMType extractedValue_type = extractPtr_6274->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_plmName = extractPtr_6274->mAssociatedValue1 ;
      outArgument_outObjectIR = GALGAS_objectIR::constructor_reference (extractedValue_type, function_llvmNameForLocalVariable (extractedValue_plmName.getter_string (SOURCE_FILE ("universal-map.galgas", 174)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 174))  COMMA_SOURCE_FILE ("universal-map.galgas", 174)) ;
    }
    break ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_universalValuedObjectMapForContext_searchValuedObject (void) {
  enterExtensionMethod_searchValuedObject (kTypeDescriptor_GALGAS_universalValuedObjectMapForContext.mSlotID,
                                           extensionMethod_universalValuedObjectMapForContext_searchValuedObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_universalValuedObjectMapForContext_searchValuedObject (void) {
  gExtensionMethodTable_universalValuedObjectMapForContext_searchValuedObject.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_universalValuedObjectMapForContext_searchValuedObject (defineExtensionMethod_universalValuedObjectMapForContext_searchValuedObject,
                                                                                  freeExtensionMethod_universalValuedObjectMapForContext_searchValuedObject) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Extension setter '@universalValuedObjectMapForContext readAccess'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionSetterSignature_universalValuedObjectMapForContext_readAccess> gExtensionModifierTable_universalValuedObjectMapForContext_readAccess ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_readAccess (const int32_t inClassIndex,
                                      extensionSetterSignature_universalValuedObjectMapForContext_readAccess inModifier) {
  gExtensionModifierTable_universalValuedObjectMapForContext_readAccess.forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_readAccess (cPtr_universalValuedObjectMapForContext * inObject,
                                     const GALGAS_lstring constin_inValuedObjectName,
                                     C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find setter
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_universalValuedObjectMapForContext) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_universalValuedObjectMapForContext_readAccess f = NULL ;
    if (classIndex < gExtensionModifierTable_universalValuedObjectMapForContext_readAccess.count ()) {
      f = gExtensionModifierTable_universalValuedObjectMapForContext_readAccess (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionModifierTable_universalValuedObjectMapForContext_readAccess.count ()) {
           f = gExtensionModifierTable_universalValuedObjectMapForContext_readAccess (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_universalValuedObjectMapForContext_readAccess.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    f (inObject, constin_inValuedObjectName, inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionSetter_universalValuedObjectMapForContext_readAccess (cPtr_universalValuedObjectMapForContext * inObject,
                                                                           const GALGAS_lstring constinArgument_inValuedObjectName,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_universalValuedObjectMapForContext * object = inObject ;
  macroValidSharedObject (object, cPtr_universalValuedObjectMapForContext) ;
  GALGAS_valuedObjectState var_valueState_6584 ;
  GALGAS_valuedObject var_property_6601 ;
  GALGAS_bool joker_6586 ; // Joker input parameter
  object->mProperty_mInternalPropertyAndRoutineMapForContext.method_searchKey (constinArgument_inValuedObjectName, var_valueState_6584, joker_6586, var_property_6601, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 181)) ;
  switch (var_property_6601.enumValue ()) {
  case GALGAS_valuedObject::kNotBuilt:
    break ;
  case GALGAS_valuedObject::kEnum_module:
    {
    }
    break ;
  case GALGAS_valuedObject::kEnum_register:
    {
    }
    break ;
  case GALGAS_valuedObject::kEnum_globalConstant:
    {
    }
    break ;
  case GALGAS_valuedObject::kEnum_localConstant:
    {
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_valueState_6584.objectCompare (GALGAS_valuedObjectState::constructor_hasUnreadValue (SOURCE_FILE ("universal-map.galgas", 187)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        {
        object->mProperty_mInternalPropertyAndRoutineMapForContext.setter_setMObjectStateForKey (GALGAS_valuedObjectState::constructor_hasReadValue (SOURCE_FILE ("universal-map.galgas", 188)), constinArgument_inValuedObjectName.getter_string (SOURCE_FILE ("universal-map.galgas", 188)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 188)) ;
        }
      }
    }
    break ;
  case GALGAS_valuedObject::kEnum_globalVariable:
    {
    }
    break ;
  case GALGAS_valuedObject::kEnum_localVariable:
    {
      switch (var_valueState_6584.enumValue ()) {
      case GALGAS_valuedObjectState::kNotBuilt:
        break ;
      case GALGAS_valuedObjectState::kEnum_noValue:
        {
          TC_Array <C_FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (constinArgument_inValuedObjectName.getter_location (SOURCE_FILE ("universal-map.galgas", 194)), GALGAS_string ("'").add_operation (constinArgument_inValuedObjectName.getter_string (SOURCE_FILE ("universal-map.galgas", 194)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 194)).add_operation (GALGAS_string ("' has no value"), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 194)), fixItArray1  COMMA_SOURCE_FILE ("universal-map.galgas", 194)) ;
        }
        break ;
      case GALGAS_valuedObjectState::kEnum_hasUnreadValue:
        {
          {
          object->mProperty_mInternalPropertyAndRoutineMapForContext.setter_setMObjectStateForKey (GALGAS_valuedObjectState::constructor_hasReadValue (SOURCE_FILE ("universal-map.galgas", 196)), constinArgument_inValuedObjectName.getter_string (SOURCE_FILE ("universal-map.galgas", 196)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 196)) ;
          }
        }
        break ;
      case GALGAS_valuedObjectState::kEnum_hasReadValue:
        {
        }
        break ;
      }
    }
    break ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionSetter_universalValuedObjectMapForContext_readAccess (void) {
  enterExtensionSetter_readAccess (kTypeDescriptor_GALGAS_universalValuedObjectMapForContext.mSlotID,
                                   extensionSetter_universalValuedObjectMapForContext_readAccess) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionModifier_universalValuedObjectMapForContext_readAccess (void) {
  gExtensionModifierTable_universalValuedObjectMapForContext_readAccess.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_universalValuedObjectMapForContext_readAccess (defineExtensionSetter_universalValuedObjectMapForContext_readAccess,
                                                                          freeExtensionModifier_universalValuedObjectMapForContext_readAccess) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Extension setter '@universalValuedObjectMapForContext searchValuedObjectForReadAccess'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionSetterSignature_universalValuedObjectMapForContext_searchValuedObjectForReadAccess> gExtensionModifierTable_universalValuedObjectMapForContext_searchValuedObjectForReadAccess ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_searchValuedObjectForReadAccess (const int32_t inClassIndex,
                                                           extensionSetterSignature_universalValuedObjectMapForContext_searchValuedObjectForReadAccess inModifier) {
  gExtensionModifierTable_universalValuedObjectMapForContext_searchValuedObjectForReadAccess.forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_searchValuedObjectForReadAccess (cPtr_universalValuedObjectMapForContext * inObject,
                                                          const GALGAS_lstring constin_inValuedObjectName,
                                                          GALGAS_objectIR & out_outObjectIR,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_outObjectIR.drop () ;
//--- Find setter
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_universalValuedObjectMapForContext) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_universalValuedObjectMapForContext_searchValuedObjectForReadAccess f = NULL ;
    if (classIndex < gExtensionModifierTable_universalValuedObjectMapForContext_searchValuedObjectForReadAccess.count ()) {
      f = gExtensionModifierTable_universalValuedObjectMapForContext_searchValuedObjectForReadAccess (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionModifierTable_universalValuedObjectMapForContext_searchValuedObjectForReadAccess.count ()) {
           f = gExtensionModifierTable_universalValuedObjectMapForContext_searchValuedObjectForReadAccess (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_universalValuedObjectMapForContext_searchValuedObjectForReadAccess.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    f (inObject, constin_inValuedObjectName, out_outObjectIR, inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionSetter_universalValuedObjectMapForContext_searchValuedObjectForReadAccess (cPtr_universalValuedObjectMapForContext * inObject,
                                                                                                const GALGAS_lstring constinArgument_inValuedObjectName,
                                                                                                GALGAS_objectIR & outArgument_outObjectIR,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_universalValuedObjectMapForContext * object = inObject ;
  macroValidSharedObject (object, cPtr_universalValuedObjectMapForContext) ;
  GALGAS_valuedObjectState var_valueState_10204 ;
  GALGAS_valuedObject var_property_10221 ;
  GALGAS_bool joker_10206 ; // Joker input parameter
  object->mProperty_mInternalPropertyAndRoutineMapForContext.method_searchKey (constinArgument_inValuedObjectName, var_valueState_10204, joker_10206, var_property_10221, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 270)) ;
  switch (var_property_10221.enumValue ()) {
  case GALGAS_valuedObject::kNotBuilt:
    break ;
  case GALGAS_valuedObject::kEnum_module:
    {
      const cEnumAssociatedValues_valuedObject_module * extractPtr_10372 = (const cEnumAssociatedValues_valuedObject_module *) (var_property_10221.unsafePointer ()) ;
      const GALGAS_PLMType extractedValue_type = extractPtr_10372->mAssociatedValue0 ;
      outArgument_outObjectIR = GALGAS_objectIR::constructor_reference (extractedValue_type, function_llvmNameForGlobalVariable (constinArgument_inValuedObjectName.getter_string (SOURCE_FILE ("universal-map.galgas", 273)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 273))  COMMA_SOURCE_FILE ("universal-map.galgas", 273)) ;
    }
    break ;
  case GALGAS_valuedObject::kEnum_register:
    {
      TC_Array <C_FixItDescription> fixItArray0 ;
      inCompiler->emitSemanticError (constinArgument_inValuedObjectName.getter_location (SOURCE_FILE ("universal-map.galgas", 275)), GALGAS_string ("control register \?\?"), fixItArray0  COMMA_SOURCE_FILE ("universal-map.galgas", 275)) ;
      outArgument_outObjectIR.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_valuedObject::kEnum_globalConstant:
    {
      const cEnumAssociatedValues_valuedObject_globalConstant * extractPtr_10545 = (const cEnumAssociatedValues_valuedObject_globalConstant *) (var_property_10221.unsafePointer ()) ;
      const GALGAS_objectIR extractedValue_objectIR = extractPtr_10545->mAssociatedValue0 ;
      outArgument_outObjectIR = extractedValue_objectIR ;
    }
    break ;
  case GALGAS_valuedObject::kEnum_localConstant:
    {
      const cEnumAssociatedValues_valuedObject_localConstant * extractPtr_10856 = (const cEnumAssociatedValues_valuedObject_localConstant *) (var_property_10221.unsafePointer ()) ;
      const GALGAS_PLMType extractedValue_type = extractPtr_10856->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_plmName = extractPtr_10856->mAssociatedValue1 ;
      outArgument_outObjectIR = GALGAS_objectIR::constructor_reference (extractedValue_type, function_llvmNameForLocalVariable (extractedValue_plmName.getter_string (SOURCE_FILE ("universal-map.galgas", 279)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 279))  COMMA_SOURCE_FILE ("universal-map.galgas", 279)) ;
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_valueState_10204.objectCompare (GALGAS_valuedObjectState::constructor_hasUnreadValue (SOURCE_FILE ("universal-map.galgas", 280)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        {
        object->mProperty_mInternalPropertyAndRoutineMapForContext.setter_setMObjectStateForKey (GALGAS_valuedObjectState::constructor_hasReadValue (SOURCE_FILE ("universal-map.galgas", 281)), constinArgument_inValuedObjectName.getter_string (SOURCE_FILE ("universal-map.galgas", 281)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 281)) ;
        }
      }
    }
    break ;
  case GALGAS_valuedObject::kEnum_globalVariable:
    {
      const cEnumAssociatedValues_valuedObject_globalVariable * extractPtr_11007 = (const cEnumAssociatedValues_valuedObject_globalVariable *) (var_property_10221.unsafePointer ()) ;
      const GALGAS_PLMType extractedValue_type = extractPtr_11007->mAssociatedValue1 ;
      outArgument_outObjectIR = GALGAS_objectIR::constructor_reference (extractedValue_type, function_llvmNameForGlobalVariable (constinArgument_inValuedObjectName.getter_string (SOURCE_FILE ("universal-map.galgas", 284)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 284))  COMMA_SOURCE_FILE ("universal-map.galgas", 284)) ;
    }
    break ;
  case GALGAS_valuedObject::kEnum_localVariable:
    {
      const cEnumAssociatedValues_valuedObject_localVariable * extractPtr_11560 = (const cEnumAssociatedValues_valuedObject_localVariable *) (var_property_10221.unsafePointer ()) ;
      const GALGAS_PLMType extractedValue_type = extractPtr_11560->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_plmName = extractPtr_11560->mAssociatedValue1 ;
      switch (var_valueState_10204.enumValue ()) {
      case GALGAS_valuedObjectState::kNotBuilt:
        break ;
      case GALGAS_valuedObjectState::kEnum_noValue:
        {
          TC_Array <C_FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (constinArgument_inValuedObjectName.getter_location (SOURCE_FILE ("universal-map.galgas", 288)), GALGAS_string ("'").add_operation (constinArgument_inValuedObjectName.getter_string (SOURCE_FILE ("universal-map.galgas", 288)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 288)).add_operation (GALGAS_string ("' has no value"), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 288)), fixItArray2  COMMA_SOURCE_FILE ("universal-map.galgas", 288)) ;
          outArgument_outObjectIR.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_valuedObjectState::kEnum_hasUnreadValue:
        {
          {
          object->mProperty_mInternalPropertyAndRoutineMapForContext.setter_setMObjectStateForKey (GALGAS_valuedObjectState::constructor_hasReadValue (SOURCE_FILE ("universal-map.galgas", 290)), constinArgument_inValuedObjectName.getter_string (SOURCE_FILE ("universal-map.galgas", 290)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 290)) ;
          }
          outArgument_outObjectIR = GALGAS_objectIR::constructor_reference (extractedValue_type, function_llvmNameForLocalVariable (extractedValue_plmName.getter_string (SOURCE_FILE ("universal-map.galgas", 291)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 291))  COMMA_SOURCE_FILE ("universal-map.galgas", 291)) ;
        }
        break ;
      case GALGAS_valuedObjectState::kEnum_hasReadValue:
        {
          outArgument_outObjectIR = GALGAS_objectIR::constructor_reference (extractedValue_type, function_llvmNameForLocalVariable (extractedValue_plmName.getter_string (SOURCE_FILE ("universal-map.galgas", 293)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 293))  COMMA_SOURCE_FILE ("universal-map.galgas", 293)) ;
        }
        break ;
      }
    }
    break ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionSetter_universalValuedObjectMapForContext_searchValuedObjectForReadAccess (void) {
  enterExtensionSetter_searchValuedObjectForReadAccess (kTypeDescriptor_GALGAS_universalValuedObjectMapForContext.mSlotID,
                                                        extensionSetter_universalValuedObjectMapForContext_searchValuedObjectForReadAccess) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionModifier_universalValuedObjectMapForContext_searchValuedObjectForReadAccess (void) {
  gExtensionModifierTable_universalValuedObjectMapForContext_searchValuedObjectForReadAccess.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_universalValuedObjectMapForContext_searchValuedObjectForReadAccess (defineExtensionSetter_universalValuedObjectMapForContext_searchValuedObjectForReadAccess,
                                                                                               freeExtensionModifier_universalValuedObjectMapForContext_searchValuedObjectForReadAccess) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Extension setter '@universalValuedObjectMapForContext searchValuedObjectForWriteAccess'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionSetterSignature_universalValuedObjectMapForContext_searchValuedObjectForWriteAccess> gExtensionModifierTable_universalValuedObjectMapForContext_searchValuedObjectForWriteAccess ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_searchValuedObjectForWriteAccess (const int32_t inClassIndex,
                                                            extensionSetterSignature_universalValuedObjectMapForContext_searchValuedObjectForWriteAccess inModifier) {
  gExtensionModifierTable_universalValuedObjectMapForContext_searchValuedObjectForWriteAccess.forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_searchValuedObjectForWriteAccess (cPtr_universalValuedObjectMapForContext * inObject,
                                                           const GALGAS_lstring constin_inValuedObjectName,
                                                           GALGAS_objectIR & out_outObjectIR,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_outObjectIR.drop () ;
//--- Find setter
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_universalValuedObjectMapForContext) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_universalValuedObjectMapForContext_searchValuedObjectForWriteAccess f = NULL ;
    if (classIndex < gExtensionModifierTable_universalValuedObjectMapForContext_searchValuedObjectForWriteAccess.count ()) {
      f = gExtensionModifierTable_universalValuedObjectMapForContext_searchValuedObjectForWriteAccess (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionModifierTable_universalValuedObjectMapForContext_searchValuedObjectForWriteAccess.count ()) {
           f = gExtensionModifierTable_universalValuedObjectMapForContext_searchValuedObjectForWriteAccess (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_universalValuedObjectMapForContext_searchValuedObjectForWriteAccess.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    f (inObject, constin_inValuedObjectName, out_outObjectIR, inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionSetter_universalValuedObjectMapForContext_searchValuedObjectForWriteAccess (cPtr_universalValuedObjectMapForContext * inObject,
                                                                                                 const GALGAS_lstring constinArgument_inValuedObjectName,
                                                                                                 GALGAS_objectIR & outArgument_outObjectIR,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_universalValuedObjectMapForContext * object = inObject ;
  macroValidSharedObject (object, cPtr_universalValuedObjectMapForContext) ;
  GALGAS_valuedObjectState var_valueState_11919 ;
  GALGAS_valuedObject var_property_11936 ;
  GALGAS_bool joker_11921 ; // Joker input parameter
  object->mProperty_mInternalPropertyAndRoutineMapForContext.method_searchKey (constinArgument_inValuedObjectName, var_valueState_11919, joker_11921, var_property_11936, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 304)) ;
  switch (var_property_11936.enumValue ()) {
  case GALGAS_valuedObject::kNotBuilt:
    break ;
  case GALGAS_valuedObject::kEnum_module:
    {
      TC_Array <C_FixItDescription> fixItArray0 ;
      inCompiler->emitSemanticError (constinArgument_inValuedObjectName.getter_location (SOURCE_FILE ("universal-map.galgas", 307)), GALGAS_string ("a module cannot be written"), fixItArray0  COMMA_SOURCE_FILE ("universal-map.galgas", 307)) ;
      outArgument_outObjectIR.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_valuedObject::kEnum_register:
    {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inValuedObjectName.getter_location (SOURCE_FILE ("universal-map.galgas", 309)), GALGAS_string ("control register \?\?\?"), fixItArray1  COMMA_SOURCE_FILE ("universal-map.galgas", 309)) ;
      outArgument_outObjectIR.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_valuedObject::kEnum_globalConstant:
    {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inValuedObjectName.getter_location (SOURCE_FILE ("universal-map.galgas", 311)), GALGAS_string ("a constant cannot be written"), fixItArray2  COMMA_SOURCE_FILE ("universal-map.galgas", 311)) ;
      outArgument_outObjectIR.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_valuedObject::kEnum_localConstant:
    {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inValuedObjectName.getter_location (SOURCE_FILE ("universal-map.galgas", 313)), GALGAS_string ("a constant cannot be written"), fixItArray3  COMMA_SOURCE_FILE ("universal-map.galgas", 313)) ;
      outArgument_outObjectIR.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_valuedObject::kEnum_globalVariable:
    {
      const cEnumAssociatedValues_valuedObject_globalVariable * extractPtr_12649 = (const cEnumAssociatedValues_valuedObject_globalVariable *) (var_property_11936.unsafePointer ()) ;
      const GALGAS_bool extractedValue_writable = extractPtr_12649->mAssociatedValue0 ;
      const GALGAS_PLMType extractedValue_type = extractPtr_12649->mAssociatedValue1 ;
      const enumGalgasBool test_4 = extractedValue_writable.boolEnum () ;
      if (kBoolTrue == test_4) {
        outArgument_outObjectIR = GALGAS_objectIR::constructor_reference (extractedValue_type, function_llvmNameForGlobalVariable (constinArgument_inValuedObjectName.getter_string (SOURCE_FILE ("universal-map.galgas", 316)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 316))  COMMA_SOURCE_FILE ("universal-map.galgas", 316)) ;
      }else if (kBoolFalse == test_4) {
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (constinArgument_inValuedObjectName.getter_location (SOURCE_FILE ("universal-map.galgas", 318)), GALGAS_string ("a global variable cannot be written"), fixItArray5  COMMA_SOURCE_FILE ("universal-map.galgas", 318)) ;
        outArgument_outObjectIR.drop () ; // Release error dropped variable
      }
    }
    break ;
  case GALGAS_valuedObject::kEnum_localVariable:
    {
      const cEnumAssociatedValues_valuedObject_localVariable * extractPtr_13101 = (const cEnumAssociatedValues_valuedObject_localVariable *) (var_property_11936.unsafePointer ()) ;
      const GALGAS_PLMType extractedValue_type = extractPtr_13101->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_plmName = extractPtr_13101->mAssociatedValue1 ;
      outArgument_outObjectIR = GALGAS_objectIR::constructor_reference (extractedValue_type, function_llvmNameForLocalVariable (extractedValue_plmName.getter_string (SOURCE_FILE ("universal-map.galgas", 321)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 321))  COMMA_SOURCE_FILE ("universal-map.galgas", 321)) ;
      switch (var_valueState_11919.enumValue ()) {
      case GALGAS_valuedObjectState::kNotBuilt:
        break ;
      case GALGAS_valuedObjectState::kEnum_noValue:
      case GALGAS_valuedObjectState::kEnum_hasReadValue:
        {
          {
          object->mProperty_mInternalPropertyAndRoutineMapForContext.setter_setMObjectStateForKey (GALGAS_valuedObjectState::constructor_hasUnreadValue (SOURCE_FILE ("universal-map.galgas", 324)), constinArgument_inValuedObjectName.getter_string (SOURCE_FILE ("universal-map.galgas", 324)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 324)) ;
          }
        }
        break ;
      case GALGAS_valuedObjectState::kEnum_hasUnreadValue:
        {
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticWarning (constinArgument_inValuedObjectName.getter_location (SOURCE_FILE ("universal-map.galgas", 326)), GALGAS_string ("previous '").add_operation (constinArgument_inValuedObjectName.getter_string (SOURCE_FILE ("universal-map.galgas", 326)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 326)).add_operation (GALGAS_string ("' value has not been read"), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 326)), fixItArray6  COMMA_SOURCE_FILE ("universal-map.galgas", 326)) ;
        }
        break ;
      }
    }
    break ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionSetter_universalValuedObjectMapForContext_searchValuedObjectForWriteAccess (void) {
  enterExtensionSetter_searchValuedObjectForWriteAccess (kTypeDescriptor_GALGAS_universalValuedObjectMapForContext.mSlotID,
                                                         extensionSetter_universalValuedObjectMapForContext_searchValuedObjectForWriteAccess) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionModifier_universalValuedObjectMapForContext_searchValuedObjectForWriteAccess (void) {
  gExtensionModifierTable_universalValuedObjectMapForContext_searchValuedObjectForWriteAccess.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_universalValuedObjectMapForContext_searchValuedObjectForWriteAccess (defineExtensionSetter_universalValuedObjectMapForContext_searchValuedObjectForWriteAccess,
                                                                                                freeExtensionModifier_universalValuedObjectMapForContext_searchValuedObjectForWriteAccess) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Extension setter '@universalValuedObjectMapForContext searchValuedObjectForReadWriteAccess'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionSetterSignature_universalValuedObjectMapForContext_searchValuedObjectForReadWriteAccess> gExtensionModifierTable_universalValuedObjectMapForContext_searchValuedObjectForReadWriteAccess ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_searchValuedObjectForReadWriteAccess (const int32_t inClassIndex,
                                                                extensionSetterSignature_universalValuedObjectMapForContext_searchValuedObjectForReadWriteAccess inModifier) {
  gExtensionModifierTable_universalValuedObjectMapForContext_searchValuedObjectForReadWriteAccess.forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_searchValuedObjectForReadWriteAccess (cPtr_universalValuedObjectMapForContext * inObject,
                                                               const GALGAS_lstring constin_inValuedObjectName,
                                                               GALGAS_objectIR & out_outObjectIR,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_outObjectIR.drop () ;
//--- Find setter
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_universalValuedObjectMapForContext) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_universalValuedObjectMapForContext_searchValuedObjectForReadWriteAccess f = NULL ;
    if (classIndex < gExtensionModifierTable_universalValuedObjectMapForContext_searchValuedObjectForReadWriteAccess.count ()) {
      f = gExtensionModifierTable_universalValuedObjectMapForContext_searchValuedObjectForReadWriteAccess (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionModifierTable_universalValuedObjectMapForContext_searchValuedObjectForReadWriteAccess.count ()) {
           f = gExtensionModifierTable_universalValuedObjectMapForContext_searchValuedObjectForReadWriteAccess (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_universalValuedObjectMapForContext_searchValuedObjectForReadWriteAccess.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    f (inObject, constin_inValuedObjectName, out_outObjectIR, inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionSetter_universalValuedObjectMapForContext_searchValuedObjectForReadWriteAccess (cPtr_universalValuedObjectMapForContext * inObject,
                                                                                                     const GALGAS_lstring constinArgument_inValuedObjectName,
                                                                                                     GALGAS_objectIR & outArgument_outObjectIR,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_universalValuedObjectMapForContext * object = inObject ;
  macroValidSharedObject (object, cPtr_universalValuedObjectMapForContext) ;
  GALGAS_valuedObjectState var_valueState_13464 ;
  GALGAS_valuedObject var_property_13481 ;
  GALGAS_bool joker_13466 ; // Joker input parameter
  object->mProperty_mInternalPropertyAndRoutineMapForContext.method_searchKey (constinArgument_inValuedObjectName, var_valueState_13464, joker_13466, var_property_13481, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 337)) ;
  switch (var_property_13481.enumValue ()) {
  case GALGAS_valuedObject::kNotBuilt:
    break ;
  case GALGAS_valuedObject::kEnum_module:
    {
      TC_Array <C_FixItDescription> fixItArray0 ;
      inCompiler->emitSemanticError (constinArgument_inValuedObjectName.getter_location (SOURCE_FILE ("universal-map.galgas", 340)), GALGAS_string ("a module cannot be written"), fixItArray0  COMMA_SOURCE_FILE ("universal-map.galgas", 340)) ;
      outArgument_outObjectIR.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_valuedObject::kEnum_register:
    {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inValuedObjectName.getter_location (SOURCE_FILE ("universal-map.galgas", 342)), GALGAS_string ("control register \?\?\?\?"), fixItArray1  COMMA_SOURCE_FILE ("universal-map.galgas", 342)) ;
      outArgument_outObjectIR.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_valuedObject::kEnum_globalConstant:
    {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inValuedObjectName.getter_location (SOURCE_FILE ("universal-map.galgas", 344)), GALGAS_string ("a constant cannot be written"), fixItArray2  COMMA_SOURCE_FILE ("universal-map.galgas", 344)) ;
      outArgument_outObjectIR.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_valuedObject::kEnum_localConstant:
    {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inValuedObjectName.getter_location (SOURCE_FILE ("universal-map.galgas", 346)), GALGAS_string ("a constant cannot be written"), fixItArray3  COMMA_SOURCE_FILE ("universal-map.galgas", 346)) ;
      outArgument_outObjectIR.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_valuedObject::kEnum_globalVariable:
    {
      const cEnumAssociatedValues_valuedObject_globalVariable * extractPtr_14195 = (const cEnumAssociatedValues_valuedObject_globalVariable *) (var_property_13481.unsafePointer ()) ;
      const GALGAS_bool extractedValue_writable = extractPtr_14195->mAssociatedValue0 ;
      const GALGAS_PLMType extractedValue_type = extractPtr_14195->mAssociatedValue1 ;
      const enumGalgasBool test_4 = extractedValue_writable.boolEnum () ;
      if (kBoolTrue == test_4) {
        outArgument_outObjectIR = GALGAS_objectIR::constructor_reference (extractedValue_type, function_llvmNameForGlobalVariable (constinArgument_inValuedObjectName.getter_string (SOURCE_FILE ("universal-map.galgas", 349)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 349))  COMMA_SOURCE_FILE ("universal-map.galgas", 349)) ;
      }else if (kBoolFalse == test_4) {
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (constinArgument_inValuedObjectName.getter_location (SOURCE_FILE ("universal-map.galgas", 351)), GALGAS_string ("a global variable cannot be written"), fixItArray5  COMMA_SOURCE_FILE ("universal-map.galgas", 351)) ;
        outArgument_outObjectIR.drop () ; // Release error dropped variable
      }
    }
    break ;
  case GALGAS_valuedObject::kEnum_localVariable:
    {
      const cEnumAssociatedValues_valuedObject_localVariable * extractPtr_14728 = (const cEnumAssociatedValues_valuedObject_localVariable *) (var_property_13481.unsafePointer ()) ;
      const GALGAS_PLMType extractedValue_type = extractPtr_14728->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_plmName = extractPtr_14728->mAssociatedValue1 ;
      switch (var_valueState_13464.enumValue ()) {
      case GALGAS_valuedObjectState::kNotBuilt:
        break ;
      case GALGAS_valuedObjectState::kEnum_noValue:
        {
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (constinArgument_inValuedObjectName.getter_location (SOURCE_FILE ("universal-map.galgas", 356)), GALGAS_string ("object has no value"), fixItArray6  COMMA_SOURCE_FILE ("universal-map.galgas", 356)) ;
          outArgument_outObjectIR.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_valuedObjectState::kEnum_hasUnreadValue:
        {
          outArgument_outObjectIR = GALGAS_objectIR::constructor_reference (extractedValue_type, function_llvmNameForLocalVariable (extractedValue_plmName.getter_string (SOURCE_FILE ("universal-map.galgas", 358)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 358))  COMMA_SOURCE_FILE ("universal-map.galgas", 358)) ;
        }
        break ;
      case GALGAS_valuedObjectState::kEnum_hasReadValue:
        {
          {
          object->mProperty_mInternalPropertyAndRoutineMapForContext.setter_setMObjectStateForKey (GALGAS_valuedObjectState::constructor_hasUnreadValue (SOURCE_FILE ("universal-map.galgas", 360)), constinArgument_inValuedObjectName.getter_string (SOURCE_FILE ("universal-map.galgas", 360)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 360)) ;
          }
          outArgument_outObjectIR = GALGAS_objectIR::constructor_reference (extractedValue_type, function_llvmNameForLocalVariable (extractedValue_plmName.getter_string (SOURCE_FILE ("universal-map.galgas", 361)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 361))  COMMA_SOURCE_FILE ("universal-map.galgas", 361)) ;
        }
        break ;
      }
    }
    break ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionSetter_universalValuedObjectMapForContext_searchValuedObjectForReadWriteAccess (void) {
  enterExtensionSetter_searchValuedObjectForReadWriteAccess (kTypeDescriptor_GALGAS_universalValuedObjectMapForContext.mSlotID,
                                                             extensionSetter_universalValuedObjectMapForContext_searchValuedObjectForReadWriteAccess) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionModifier_universalValuedObjectMapForContext_searchValuedObjectForReadWriteAccess (void) {
  gExtensionModifierTable_universalValuedObjectMapForContext_searchValuedObjectForReadWriteAccess.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_universalValuedObjectMapForContext_searchValuedObjectForReadWriteAccess (defineExtensionSetter_universalValuedObjectMapForContext_searchValuedObjectForReadWriteAccess,
                                                                                                    freeExtensionModifier_universalValuedObjectMapForContext_searchValuedObjectForReadWriteAccess) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Extension method '@universalValuedObjectMapForContext searchValuedObjectType'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_universalValuedObjectMapForContext_searchValuedObjectType> gExtensionMethodTable_universalValuedObjectMapForContext_searchValuedObjectType ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_searchValuedObjectType (const int32_t inClassIndex,
                                                  extensionMethodSignature_universalValuedObjectMapForContext_searchValuedObjectType inMethod) {
  gExtensionMethodTable_universalValuedObjectMapForContext_searchValuedObjectType.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_searchValuedObjectType (const cPtr_universalValuedObjectMapForContext * inObject,
                                                 const GALGAS_lstring constin_inValuedObjectName,
                                                 GALGAS_PLMType & out_outType,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  out_outType.drop () ;
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_universalValuedObjectMapForContext) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_universalValuedObjectMapForContext_searchValuedObjectType f = NULL ;
    if (classIndex < gExtensionMethodTable_universalValuedObjectMapForContext_searchValuedObjectType.count ()) {
      f = gExtensionMethodTable_universalValuedObjectMapForContext_searchValuedObjectType (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_universalValuedObjectMapForContext_searchValuedObjectType.count ()) {
           f = gExtensionMethodTable_universalValuedObjectMapForContext_searchValuedObjectType (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_universalValuedObjectMapForContext_searchValuedObjectType.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inValuedObjectName, out_outType, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_universalValuedObjectMapForContext_searchValuedObjectType (const cPtr_universalValuedObjectMapForContext * inObject,
                                                                                       const GALGAS_lstring constinArgument_inValuedObjectName,
                                                                                       GALGAS_PLMType & outArgument_outType,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_universalValuedObjectMapForContext * object = inObject ;
  macroValidSharedObject (object, cPtr_universalValuedObjectMapForContext) ;
  GALGAS_valuedObject var_property_15074 ;
  GALGAS_valuedObjectState joker_15058_2 ; // Joker input parameter
  GALGAS_bool joker_15058_1 ; // Joker input parameter
  object->mProperty_mInternalPropertyAndRoutineMapForContext.method_searchKey (constinArgument_inValuedObjectName, joker_15058_2, joker_15058_1, var_property_15074, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 372)) ;
  switch (var_property_15074.enumValue ()) {
  case GALGAS_valuedObject::kNotBuilt:
    break ;
  case GALGAS_valuedObject::kEnum_module:
    {
      TC_Array <C_FixItDescription> fixItArray0 ;
      inCompiler->emitSemanticError (constinArgument_inValuedObjectName.getter_location (SOURCE_FILE ("universal-map.galgas", 375)), GALGAS_string ("undefined in this context"), fixItArray0  COMMA_SOURCE_FILE ("universal-map.galgas", 375)) ;
      outArgument_outType.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_valuedObject::kEnum_register:
    {
      const cEnumAssociatedValues_valuedObject_register * extractPtr_15247 = (const cEnumAssociatedValues_valuedObject_register *) (var_property_15074.unsafePointer ()) ;
      const GALGAS_PLMType extractedValue_type = extractPtr_15247->mAssociatedValue2 ;
      outArgument_outType = extractedValue_type ;
    }
    break ;
  case GALGAS_valuedObject::kEnum_globalConstant:
    {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inValuedObjectName.getter_location (SOURCE_FILE ("universal-map.galgas", 379)), GALGAS_string ("undefined in this context"), fixItArray1  COMMA_SOURCE_FILE ("universal-map.galgas", 379)) ;
      outArgument_outType.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_valuedObject::kEnum_localConstant:
    {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inValuedObjectName.getter_location (SOURCE_FILE ("universal-map.galgas", 381)), GALGAS_string ("undefined in this context"), fixItArray2  COMMA_SOURCE_FILE ("universal-map.galgas", 381)) ;
      outArgument_outType.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_valuedObject::kEnum_globalVariable:
    {
      const cEnumAssociatedValues_valuedObject_globalVariable * extractPtr_15503 = (const cEnumAssociatedValues_valuedObject_globalVariable *) (var_property_15074.unsafePointer ()) ;
      const GALGAS_PLMType extractedValue_type = extractPtr_15503->mAssociatedValue1 ;
      outArgument_outType = extractedValue_type ;
    }
    break ;
  case GALGAS_valuedObject::kEnum_localVariable:
    {
      const cEnumAssociatedValues_valuedObject_localVariable * extractPtr_15563 = (const cEnumAssociatedValues_valuedObject_localVariable *) (var_property_15074.unsafePointer ()) ;
      const GALGAS_PLMType extractedValue_type = extractPtr_15563->mAssociatedValue0 ;
      outArgument_outType = extractedValue_type ;
    }
    break ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_universalValuedObjectMapForContext_searchValuedObjectType (void) {
  enterExtensionMethod_searchValuedObjectType (kTypeDescriptor_GALGAS_universalValuedObjectMapForContext.mSlotID,
                                               extensionMethod_universalValuedObjectMapForContext_searchValuedObjectType) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_universalValuedObjectMapForContext_searchValuedObjectType (void) {
  gExtensionMethodTable_universalValuedObjectMapForContext_searchValuedObjectType.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_universalValuedObjectMapForContext_searchValuedObjectType (defineExtensionMethod_universalValuedObjectMapForContext_searchValuedObjectType,
                                                                                      freeExtensionMethod_universalValuedObjectMapForContext_searchValuedObjectType) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Extension method '@universalValuedObjectMapForContext checkLocalVariableFinalState'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_universalValuedObjectMapForContext_checkLocalVariableFinalState> gExtensionMethodTable_universalValuedObjectMapForContext_checkLocalVariableFinalState ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_checkLocalVariableFinalState (const int32_t inClassIndex,
                                                        extensionMethodSignature_universalValuedObjectMapForContext_checkLocalVariableFinalState inMethod) {
  gExtensionMethodTable_universalValuedObjectMapForContext_checkLocalVariableFinalState.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_checkLocalVariableFinalState (const cPtr_universalValuedObjectMapForContext * inObject,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_universalValuedObjectMapForContext) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_universalValuedObjectMapForContext_checkLocalVariableFinalState f = NULL ;
    if (classIndex < gExtensionMethodTable_universalValuedObjectMapForContext_checkLocalVariableFinalState.count ()) {
      f = gExtensionMethodTable_universalValuedObjectMapForContext_checkLocalVariableFinalState (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_universalValuedObjectMapForContext_checkLocalVariableFinalState.count ()) {
           f = gExtensionMethodTable_universalValuedObjectMapForContext_checkLocalVariableFinalState (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_universalValuedObjectMapForContext_checkLocalVariableFinalState.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_universalValuedObjectMapForContext_checkLocalVariableFinalState (const cPtr_universalValuedObjectMapForContext * inObject,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_universalValuedObjectMapForContext * object = inObject ;
  macroValidSharedObject (object, cPtr_universalValuedObjectMapForContext) ;
  cEnumerator_internalValuedObjectMapMapForContext enumerator_15963 (object->mProperty_mInternalPropertyAndRoutineMapForContext, kENUMERATION_UP) ;
  while (enumerator_15963.hasCurrentObject ()) {
    switch (enumerator_15963.current (HERE).getter_mPossibleValuedObject (HERE).enumValue ()) {
    case GALGAS_valuedObject::kNotBuilt:
      break ;
    case GALGAS_valuedObject::kEnum_module:
      {
      }
      break ;
    case GALGAS_valuedObject::kEnum_register:
      {
      }
      break ;
    case GALGAS_valuedObject::kEnum_globalConstant:
      {
      }
      break ;
    case GALGAS_valuedObject::kEnum_localConstant:
      {
        const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_15963.current (HERE).getter_mObjectState (HERE).objectCompare (GALGAS_valuedObjectState::constructor_hasUnreadValue (SOURCE_FILE ("universal-map.galgas", 400)))).boolEnum () ;
        if (kBoolTrue == test_0) {
          TC_Array <C_FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticWarning (enumerator_15963.current (HERE).getter_lkey (HERE).getter_location (SOURCE_FILE ("universal-map.galgas", 401)), GALGAS_string ("'").add_operation (enumerator_15963.current (HERE).getter_lkey (HERE).getter_string (SOURCE_FILE ("universal-map.galgas", 401)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 401)).add_operation (GALGAS_string ("' is never read"), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 401)), fixItArray1  COMMA_SOURCE_FILE ("universal-map.galgas", 401)) ;
        }
      }
      break ;
    case GALGAS_valuedObject::kEnum_globalVariable:
      {
      }
      break ;
    case GALGAS_valuedObject::kEnum_localVariable:
      {
        GALGAS_bool test_2 = GALGAS_bool (kIsEqual, enumerator_15963.current (HERE).getter_mObjectState (HERE).objectCompare (GALGAS_valuedObjectState::constructor_noValue (SOURCE_FILE ("universal-map.galgas", 405)))) ;
        if (kBoolTrue == test_2.boolEnum ()) {
          test_2 = enumerator_15963.current (HERE).getter_mObjectShouldBeValuedAtEndOfScope (HERE) ;
        }
        const enumGalgasBool test_3 = test_2.boolEnum () ;
        if (kBoolTrue == test_3) {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (enumerator_15963.current (HERE).getter_lkey (HERE).getter_location (SOURCE_FILE ("universal-map.galgas", 406)), GALGAS_string ("'").add_operation (enumerator_15963.current (HERE).getter_lkey (HERE).getter_string (SOURCE_FILE ("universal-map.galgas", 406)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 406)).add_operation (GALGAS_string ("' should be valued at the end of routine"), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 406)), fixItArray4  COMMA_SOURCE_FILE ("universal-map.galgas", 406)) ;
        }
      }
      break ;
    }
    enumerator_15963.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_universalValuedObjectMapForContext_checkLocalVariableFinalState (void) {
  enterExtensionMethod_checkLocalVariableFinalState (kTypeDescriptor_GALGAS_universalValuedObjectMapForContext.mSlotID,
                                                     extensionMethod_universalValuedObjectMapForContext_checkLocalVariableFinalState) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_universalValuedObjectMapForContext_checkLocalVariableFinalState (void) {
  gExtensionMethodTable_universalValuedObjectMapForContext_checkLocalVariableFinalState.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_universalValuedObjectMapForContext_checkLocalVariableFinalState (defineExtensionMethod_universalValuedObjectMapForContext_checkLocalVariableFinalState,
                                                                                            freeExtensionMethod_universalValuedObjectMapForContext_checkLocalVariableFinalState) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Extension setter '@universalValuedObjectMapForContext openOverrideForSelectBlock'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionSetterSignature_universalValuedObjectMapForContext_openOverrideForSelectBlock> gExtensionModifierTable_universalValuedObjectMapForContext_openOverrideForSelectBlock ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_openOverrideForSelectBlock (const int32_t inClassIndex,
                                                      extensionSetterSignature_universalValuedObjectMapForContext_openOverrideForSelectBlock inModifier) {
  gExtensionModifierTable_universalValuedObjectMapForContext_openOverrideForSelectBlock.forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_openOverrideForSelectBlock (cPtr_universalValuedObjectMapForContext * inObject,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find setter
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_universalValuedObjectMapForContext) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_universalValuedObjectMapForContext_openOverrideForSelectBlock f = NULL ;
    if (classIndex < gExtensionModifierTable_universalValuedObjectMapForContext_openOverrideForSelectBlock.count ()) {
      f = gExtensionModifierTable_universalValuedObjectMapForContext_openOverrideForSelectBlock (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionModifierTable_universalValuedObjectMapForContext_openOverrideForSelectBlock.count ()) {
           f = gExtensionModifierTable_universalValuedObjectMapForContext_openOverrideForSelectBlock (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_universalValuedObjectMapForContext_openOverrideForSelectBlock.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    f (inObject, inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionSetter_universalValuedObjectMapForContext_openOverrideForSelectBlock (cPtr_universalValuedObjectMapForContext * inObject,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_universalValuedObjectMapForContext * object = inObject ;
  macroValidSharedObject (object, cPtr_universalValuedObjectMapForContext) ;
  GALGAS_referenceStateMap var_initialStateMap_16751 = GALGAS_referenceStateMap::constructor_emptyMap (SOURCE_FILE ("universal-map.galgas", 415)) ;
  cEnumerator_internalValuedObjectMapMapForContext enumerator_16812 (object->mProperty_mInternalPropertyAndRoutineMapForContext, kENUMERATION_UP) ;
  while (enumerator_16812.hasCurrentObject ()) {
    switch (enumerator_16812.current (HERE).getter_mPossibleValuedObject (HERE).enumValue ()) {
    case GALGAS_valuedObject::kNotBuilt:
      break ;
    case GALGAS_valuedObject::kEnum_module:
      {
      }
      break ;
    case GALGAS_valuedObject::kEnum_register:
      {
      }
      break ;
    case GALGAS_valuedObject::kEnum_globalConstant:
      {
      }
      break ;
    case GALGAS_valuedObject::kEnum_localConstant:
      {
        {
        var_initialStateMap_16751.setter_insertKey (enumerator_16812.current (HERE).getter_lkey (HERE), enumerator_16812.current (HERE).getter_mObjectState (HERE), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 422)) ;
        }
      }
      break ;
    case GALGAS_valuedObject::kEnum_globalVariable:
      {
      }
      break ;
    case GALGAS_valuedObject::kEnum_localVariable:
      {
        {
        var_initialStateMap_16751.setter_insertKey (enumerator_16812.current (HERE).getter_lkey (HERE), enumerator_16812.current (HERE).getter_mObjectState (HERE), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 425)) ;
        }
      }
      break ;
    }
    enumerator_16812.gotoNextObject () ;
  }
  object->mProperty_mScopeStack.addAssign_operation (GALGAS_scopeKind::constructor_selectScope (SOURCE_FILE ("universal-map.galgas", 428)), GALGAS_bool (true), var_initialStateMap_16751, GALGAS_referenceStateMap::constructor_emptyMap (SOURCE_FILE ("universal-map.galgas", 428)), object->mProperty_mLocalObjectList  COMMA_SOURCE_FILE ("universal-map.galgas", 428)) ;
  object->mProperty_mLocalObjectList = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("universal-map.galgas", 429)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionSetter_universalValuedObjectMapForContext_openOverrideForSelectBlock (void) {
  enterExtensionSetter_openOverrideForSelectBlock (kTypeDescriptor_GALGAS_universalValuedObjectMapForContext.mSlotID,
                                                   extensionSetter_universalValuedObjectMapForContext_openOverrideForSelectBlock) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionModifier_universalValuedObjectMapForContext_openOverrideForSelectBlock (void) {
  gExtensionModifierTable_universalValuedObjectMapForContext_openOverrideForSelectBlock.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_universalValuedObjectMapForContext_openOverrideForSelectBlock (defineExtensionSetter_universalValuedObjectMapForContext_openOverrideForSelectBlock,
                                                                                          freeExtensionModifier_universalValuedObjectMapForContext_openOverrideForSelectBlock) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Extension setter '@universalValuedObjectMapForContext openOverrideForRepeatBlock'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionSetterSignature_universalValuedObjectMapForContext_openOverrideForRepeatBlock> gExtensionModifierTable_universalValuedObjectMapForContext_openOverrideForRepeatBlock ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_openOverrideForRepeatBlock (const int32_t inClassIndex,
                                                      extensionSetterSignature_universalValuedObjectMapForContext_openOverrideForRepeatBlock inModifier) {
  gExtensionModifierTable_universalValuedObjectMapForContext_openOverrideForRepeatBlock.forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_openOverrideForRepeatBlock (cPtr_universalValuedObjectMapForContext * inObject,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find setter
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_universalValuedObjectMapForContext) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_universalValuedObjectMapForContext_openOverrideForRepeatBlock f = NULL ;
    if (classIndex < gExtensionModifierTable_universalValuedObjectMapForContext_openOverrideForRepeatBlock.count ()) {
      f = gExtensionModifierTable_universalValuedObjectMapForContext_openOverrideForRepeatBlock (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionModifierTable_universalValuedObjectMapForContext_openOverrideForRepeatBlock.count ()) {
           f = gExtensionModifierTable_universalValuedObjectMapForContext_openOverrideForRepeatBlock (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_universalValuedObjectMapForContext_openOverrideForRepeatBlock.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    f (inObject, inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionSetter_universalValuedObjectMapForContext_openOverrideForRepeatBlock (cPtr_universalValuedObjectMapForContext * inObject,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_universalValuedObjectMapForContext * object = inObject ;
  macroValidSharedObject (object, cPtr_universalValuedObjectMapForContext) ;
  GALGAS_referenceStateMap var_initialStateMap_17519 = GALGAS_referenceStateMap::constructor_emptyMap (SOURCE_FILE ("universal-map.galgas", 435)) ;
  cEnumerator_internalValuedObjectMapMapForContext enumerator_17580 (object->mProperty_mInternalPropertyAndRoutineMapForContext, kENUMERATION_UP) ;
  while (enumerator_17580.hasCurrentObject ()) {
    switch (enumerator_17580.current (HERE).getter_mPossibleValuedObject (HERE).enumValue ()) {
    case GALGAS_valuedObject::kNotBuilt:
      break ;
    case GALGAS_valuedObject::kEnum_module:
      {
      }
      break ;
    case GALGAS_valuedObject::kEnum_register:
      {
      }
      break ;
    case GALGAS_valuedObject::kEnum_globalConstant:
      {
      }
      break ;
    case GALGAS_valuedObject::kEnum_localConstant:
      {
        {
        var_initialStateMap_17519.setter_insertKey (enumerator_17580.current (HERE).getter_lkey (HERE), enumerator_17580.current (HERE).getter_mObjectState (HERE), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 442)) ;
        }
      }
      break ;
    case GALGAS_valuedObject::kEnum_globalVariable:
      {
      }
      break ;
    case GALGAS_valuedObject::kEnum_localVariable:
      {
        {
        var_initialStateMap_17519.setter_insertKey (enumerator_17580.current (HERE).getter_lkey (HERE), enumerator_17580.current (HERE).getter_mObjectState (HERE), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 445)) ;
        }
      }
      break ;
    }
    enumerator_17580.gotoNextObject () ;
  }
  object->mProperty_mScopeStack.addAssign_operation (GALGAS_scopeKind::constructor_repeatScope (SOURCE_FILE ("universal-map.galgas", 448)), GALGAS_bool (true), var_initialStateMap_17519, GALGAS_referenceStateMap::constructor_emptyMap (SOURCE_FILE ("universal-map.galgas", 448)), object->mProperty_mLocalObjectList  COMMA_SOURCE_FILE ("universal-map.galgas", 448)) ;
  object->mProperty_mLocalObjectList = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("universal-map.galgas", 449)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionSetter_universalValuedObjectMapForContext_openOverrideForRepeatBlock (void) {
  enterExtensionSetter_openOverrideForRepeatBlock (kTypeDescriptor_GALGAS_universalValuedObjectMapForContext.mSlotID,
                                                   extensionSetter_universalValuedObjectMapForContext_openOverrideForRepeatBlock) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionModifier_universalValuedObjectMapForContext_openOverrideForRepeatBlock (void) {
  gExtensionModifierTable_universalValuedObjectMapForContext_openOverrideForRepeatBlock.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_universalValuedObjectMapForContext_openOverrideForRepeatBlock (defineExtensionSetter_universalValuedObjectMapForContext_openOverrideForRepeatBlock,
                                                                                          freeExtensionModifier_universalValuedObjectMapForContext_openOverrideForRepeatBlock) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Extension setter '@universalValuedObjectMapForContext openBranch'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionSetterSignature_universalValuedObjectMapForContext_openBranch> gExtensionModifierTable_universalValuedObjectMapForContext_openBranch ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_openBranch (const int32_t inClassIndex,
                                      extensionSetterSignature_universalValuedObjectMapForContext_openBranch inModifier) {
  gExtensionModifierTable_universalValuedObjectMapForContext_openBranch.forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_openBranch (cPtr_universalValuedObjectMapForContext * inObject,
                                     C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find setter
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_universalValuedObjectMapForContext) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_universalValuedObjectMapForContext_openBranch f = NULL ;
    if (classIndex < gExtensionModifierTable_universalValuedObjectMapForContext_openBranch.count ()) {
      f = gExtensionModifierTable_universalValuedObjectMapForContext_openBranch (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionModifierTable_universalValuedObjectMapForContext_openBranch.count ()) {
           f = gExtensionModifierTable_universalValuedObjectMapForContext_openBranch (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_universalValuedObjectMapForContext_openBranch.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    f (inObject, inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionSetter_universalValuedObjectMapForContext_openBranch (cPtr_universalValuedObjectMapForContext * inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_universalValuedObjectMapForContext * object = inObject ;
  macroValidSharedObject (object, cPtr_universalValuedObjectMapForContext) ;
  GALGAS_referenceStateMap var_initialStateMap_18282 ;
  GALGAS_scopeKind joker_18257 ; // Joker input parameter
  GALGAS_bool joker_18260 ; // Joker input parameter
  GALGAS_referenceStateMap joker_18284_2 ; // Joker input parameter
  GALGAS_lstringlist joker_18284_1 ; // Joker input parameter
  object->mProperty_mScopeStack.method_last (joker_18257, joker_18260, var_initialStateMap_18282, joker_18284_2, joker_18284_1, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 455)) ;
  cEnumerator_referenceStateMap enumerator_18330 (var_initialStateMap_18282, kENUMERATION_UP) ;
  while (enumerator_18330.hasCurrentObject ()) {
    {
    object->mProperty_mInternalPropertyAndRoutineMapForContext.setter_setMObjectStateForKey (enumerator_18330.current_mState (HERE), enumerator_18330.current_lkey (HERE).getter_string (SOURCE_FILE ("universal-map.galgas", 457)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 457)) ;
    }
    enumerator_18330.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionSetter_universalValuedObjectMapForContext_openBranch (void) {
  enterExtensionSetter_openBranch (kTypeDescriptor_GALGAS_universalValuedObjectMapForContext.mSlotID,
                                   extensionSetter_universalValuedObjectMapForContext_openBranch) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionModifier_universalValuedObjectMapForContext_openBranch (void) {
  gExtensionModifierTable_universalValuedObjectMapForContext_openBranch.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_universalValuedObjectMapForContext_openBranch (defineExtensionSetter_universalValuedObjectMapForContext_openBranch,
                                                                          freeExtensionModifier_universalValuedObjectMapForContext_openBranch) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Extension setter '@universalValuedObjectMapForContext closeBranch'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionSetterSignature_universalValuedObjectMapForContext_closeBranch> gExtensionModifierTable_universalValuedObjectMapForContext_closeBranch ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_closeBranch (const int32_t inClassIndex,
                                       extensionSetterSignature_universalValuedObjectMapForContext_closeBranch inModifier) {
  gExtensionModifierTable_universalValuedObjectMapForContext_closeBranch.forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_closeBranch (cPtr_universalValuedObjectMapForContext * inObject,
                                      const GALGAS_location constin_inErrorLocation,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find setter
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_universalValuedObjectMapForContext) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_universalValuedObjectMapForContext_closeBranch f = NULL ;
    if (classIndex < gExtensionModifierTable_universalValuedObjectMapForContext_closeBranch.count ()) {
      f = gExtensionModifierTable_universalValuedObjectMapForContext_closeBranch (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionModifierTable_universalValuedObjectMapForContext_closeBranch.count ()) {
           f = gExtensionModifierTable_universalValuedObjectMapForContext_closeBranch (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_universalValuedObjectMapForContext_closeBranch.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    f (inObject, constin_inErrorLocation, inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionSetter_universalValuedObjectMapForContext_closeBranch (cPtr_universalValuedObjectMapForContext * inObject,
                                                                            const GALGAS_location constinArgument_inErrorLocation,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_universalValuedObjectMapForContext * object = inObject ;
  macroValidSharedObject (object, cPtr_universalValuedObjectMapForContext) ;
  GALGAS_scopeKind var_scopeKind_18681 ;
  GALGAS_bool var_firstBranch_18698 ;
  GALGAS_referenceStateMap var_initialStateMap_18719 ;
  GALGAS_referenceStateMap var_referenceStateMap_18742 ;
  GALGAS_lstringlist var_localObjectList_18763 ;
  {
  object->mProperty_mScopeStack.setter_popLast (var_scopeKind_18681, var_firstBranch_18698, var_initialStateMap_18719, var_referenceStateMap_18742, var_localObjectList_18763, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 464)) ;
  }
  const enumGalgasBool test_0 = var_firstBranch_18698.boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_referenceStateMap var_newReferenceStateMap_18830 = GALGAS_referenceStateMap::constructor_emptyMap (SOURCE_FILE ("universal-map.galgas", 466)) ;
    cEnumerator_internalValuedObjectMapMapForContext enumerator_18893 (object->mProperty_mInternalPropertyAndRoutineMapForContext, kENUMERATION_UP) ;
    while (enumerator_18893.hasCurrentObject ()) {
      switch (enumerator_18893.current (HERE).getter_mPossibleValuedObject (HERE).enumValue ()) {
      case GALGAS_valuedObject::kNotBuilt:
        break ;
      case GALGAS_valuedObject::kEnum_module:
        {
        }
        break ;
      case GALGAS_valuedObject::kEnum_register:
        {
        }
        break ;
      case GALGAS_valuedObject::kEnum_globalConstant:
        {
        }
        break ;
      case GALGAS_valuedObject::kEnum_localConstant:
        {
          {
          var_newReferenceStateMap_18830.setter_insertKey (enumerator_18893.current (HERE).getter_lkey (HERE), enumerator_18893.current (HERE).getter_mObjectState (HERE), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 473)) ;
          }
        }
        break ;
      case GALGAS_valuedObject::kEnum_globalVariable:
        {
        }
        break ;
      case GALGAS_valuedObject::kEnum_localVariable:
        {
          {
          var_newReferenceStateMap_18830.setter_insertKey (enumerator_18893.current (HERE).getter_lkey (HERE), enumerator_18893.current (HERE).getter_mObjectState (HERE), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 476)) ;
          }
        }
        break ;
      }
      enumerator_18893.gotoNextObject () ;
    }
    object->mProperty_mScopeStack.addAssign_operation (var_scopeKind_18681, GALGAS_bool (false), var_initialStateMap_18719, var_newReferenceStateMap_18830, var_localObjectList_18763  COMMA_SOURCE_FILE ("universal-map.galgas", 479)) ;
  }else if (kBoolFalse == test_0) {
    switch (var_scopeKind_18681.enumValue ()) {
    case GALGAS_scopeKind::kNotBuilt:
      break ;
    case GALGAS_scopeKind::kEnum_selectScope:
      {
        cEnumerator_referenceStateMap enumerator_19495 (var_referenceStateMap_18742, kENUMERATION_UP) ;
        while (enumerator_19495.hasCurrentObject ()) {
          GALGAS_valuedObjectState var_currentObjectState_19588 ;
          GALGAS_bool joker_19590_2 ; // Joker input parameter
          GALGAS_valuedObject joker_19590_1 ; // Joker input parameter
          object->mProperty_mInternalPropertyAndRoutineMapForContext.method_searchKey (enumerator_19495.current_lkey (HERE), var_currentObjectState_19588, joker_19590_2, joker_19590_1, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 484)) ;
          const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_19495.current_mState (HERE).objectCompare (var_currentObjectState_19588)).boolEnum () ;
          if (kBoolTrue == test_1) {
          }else if (kBoolFalse == test_1) {
            const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_currentObjectState_19588.objectCompare (GALGAS_valuedObjectState::constructor_hasUnreadValue (SOURCE_FILE ("universal-map.galgas", 486)))).operator_and (GALGAS_bool (kIsEqual, enumerator_19495.current_mState (HERE).objectCompare (GALGAS_valuedObjectState::constructor_hasReadValue (SOURCE_FILE ("universal-map.galgas", 486)))) COMMA_SOURCE_FILE ("universal-map.galgas", 486)).boolEnum () ;
            if (kBoolTrue == test_2) {
            }else if (kBoolFalse == test_2) {
              const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, var_currentObjectState_19588.objectCompare (GALGAS_valuedObjectState::constructor_hasReadValue (SOURCE_FILE ("universal-map.galgas", 487)))).operator_and (GALGAS_bool (kIsEqual, enumerator_19495.current_mState (HERE).objectCompare (GALGAS_valuedObjectState::constructor_hasUnreadValue (SOURCE_FILE ("universal-map.galgas", 487)))) COMMA_SOURCE_FILE ("universal-map.galgas", 487)).boolEnum () ;
              if (kBoolTrue == test_3) {
                {
                var_referenceStateMap_18742.setter_setMStateForKey (GALGAS_valuedObjectState::constructor_hasReadValue (SOURCE_FILE ("universal-map.galgas", 488)), enumerator_19495.current_lkey (HERE).getter_string (SOURCE_FILE ("universal-map.galgas", 488)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 488)) ;
                }
              }else if (kBoolFalse == test_3) {
                TC_Array <C_FixItDescription> fixItArray4 ;
                inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("invalid state for object '").add_operation (enumerator_19495.current_lkey (HERE).getter_string (SOURCE_FILE ("universal-map.galgas", 491)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 491)).add_operation (GALGAS_string ("': found "), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 491)).add_operation (extensionGetter_string (var_currentObjectState_19588, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 491)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 491)).add_operation (GALGAS_string (", required "), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 491)).add_operation (extensionGetter_string (enumerator_19495.current_mState (HERE), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 491)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 491)), fixItArray4  COMMA_SOURCE_FILE ("universal-map.galgas", 490)) ;
              }
            }
          }
          enumerator_19495.gotoNextObject () ;
        }
        object->mProperty_mScopeStack.addAssign_operation (var_scopeKind_18681, GALGAS_bool (false), var_initialStateMap_18719, var_referenceStateMap_18742, var_localObjectList_18763  COMMA_SOURCE_FILE ("universal-map.galgas", 494)) ;
      }
      break ;
    case GALGAS_scopeKind::kEnum_repeatScope:
      {
        cEnumerator_referenceStateMap enumerator_20291 (var_referenceStateMap_18742, kENUMERATION_UP) ;
        while (enumerator_20291.hasCurrentObject ()) {
          GALGAS_valuedObjectState var_currentObjectState_20384 ;
          GALGAS_bool joker_20386_2 ; // Joker input parameter
          GALGAS_valuedObject joker_20386_1 ; // Joker input parameter
          object->mProperty_mInternalPropertyAndRoutineMapForContext.method_searchKey (enumerator_20291.current_lkey (HERE), var_currentObjectState_20384, joker_20386_2, joker_20386_1, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 497)) ;
          const enumGalgasBool test_5 = GALGAS_bool (kIsNotEqual, enumerator_20291.current_mState (HERE).objectCompare (var_currentObjectState_20384)).boolEnum () ;
          if (kBoolTrue == test_5) {
            TC_Array <C_FixItDescription> fixItArray6 ;
            inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("invalid state for object '").add_operation (enumerator_20291.current_lkey (HERE).getter_string (SOURCE_FILE ("universal-map.galgas", 500)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 500)).add_operation (GALGAS_string ("': found "), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 500)).add_operation (extensionGetter_string (var_currentObjectState_20384, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 500)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 500)).add_operation (GALGAS_string (", required "), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 500)).add_operation (extensionGetter_string (enumerator_20291.current_mState (HERE), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 500)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 500)), fixItArray6  COMMA_SOURCE_FILE ("universal-map.galgas", 499)) ;
          }
          enumerator_20291.gotoNextObject () ;
        }
        object->mProperty_mScopeStack.addAssign_operation (var_scopeKind_18681, GALGAS_bool (false), var_initialStateMap_18719, var_referenceStateMap_18742, var_localObjectList_18763  COMMA_SOURCE_FILE ("universal-map.galgas", 503)) ;
      }
      break ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionSetter_universalValuedObjectMapForContext_closeBranch (void) {
  enterExtensionSetter_closeBranch (kTypeDescriptor_GALGAS_universalValuedObjectMapForContext.mSlotID,
                                    extensionSetter_universalValuedObjectMapForContext_closeBranch) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionModifier_universalValuedObjectMapForContext_closeBranch (void) {
  gExtensionModifierTable_universalValuedObjectMapForContext_closeBranch.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_universalValuedObjectMapForContext_closeBranch (defineExtensionSetter_universalValuedObjectMapForContext_closeBranch,
                                                                           freeExtensionModifier_universalValuedObjectMapForContext_closeBranch) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Extension setter '@universalValuedObjectMapForContext closeOverride'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionSetterSignature_universalValuedObjectMapForContext_closeOverride> gExtensionModifierTable_universalValuedObjectMapForContext_closeOverride ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_closeOverride (const int32_t inClassIndex,
                                         extensionSetterSignature_universalValuedObjectMapForContext_closeOverride inModifier) {
  gExtensionModifierTable_universalValuedObjectMapForContext_closeOverride.forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_closeOverride (cPtr_universalValuedObjectMapForContext * inObject,
                                        const GALGAS_location constin_inErrorLocation,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find setter
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_universalValuedObjectMapForContext) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_universalValuedObjectMapForContext_closeOverride f = NULL ;
    if (classIndex < gExtensionModifierTable_universalValuedObjectMapForContext_closeOverride.count ()) {
      f = gExtensionModifierTable_universalValuedObjectMapForContext_closeOverride (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionModifierTable_universalValuedObjectMapForContext_closeOverride.count ()) {
           f = gExtensionModifierTable_universalValuedObjectMapForContext_closeOverride (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_universalValuedObjectMapForContext_closeOverride.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    f (inObject, constin_inErrorLocation, inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionSetter_universalValuedObjectMapForContext_closeOverride (cPtr_universalValuedObjectMapForContext * inObject,
                                                                              const GALGAS_location constinArgument_inErrorLocation,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_universalValuedObjectMapForContext * object = inObject ;
  macroValidSharedObject (object, cPtr_universalValuedObjectMapForContext) ;
  GALGAS_referenceStateMap var_referenceStateMap_20986 ;
  GALGAS_lstringlist var_localObjectList_21007 ;
  {
  GALGAS_scopeKind joker_20956 ; // Joker input parameter
  GALGAS_bool joker_20959 ; // Joker input parameter
  GALGAS_referenceStateMap joker_20962 ; // Joker input parameter
  object->mProperty_mScopeStack.setter_popLast (joker_20956, joker_20959, joker_20962, var_referenceStateMap_20986, var_localObjectList_21007, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 511)) ;
  }
  cEnumerator_referenceStateMap enumerator_21085 (var_referenceStateMap_20986, kENUMERATION_UP) ;
  while (enumerator_21085.hasCurrentObject ()) {
    {
    object->mProperty_mInternalPropertyAndRoutineMapForContext.setter_setMObjectStateForKey (enumerator_21085.current_mState (HERE), enumerator_21085.current_lkey (HERE).getter_string (SOURCE_FILE ("universal-map.galgas", 514)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 514)) ;
    }
    enumerator_21085.gotoNextObject () ;
  }
  cEnumerator_lstringlist enumerator_21272 (object->mProperty_mLocalObjectList, kENUMERATION_UP) ;
  while (enumerator_21272.hasCurrentObject ()) {
    GALGAS_valuedObjectState var_currentObjectState_21373 ;
    GALGAS_bool var_objectShouldBeValuedAtEndOfScope_21417 ;
    GALGAS_valuedObject var_possibleValuedObject_21449 ;
    object->mProperty_mInternalPropertyAndRoutineMapForContext.method_searchKey (enumerator_21272.current_mValue (HERE), var_currentObjectState_21373, var_objectShouldBeValuedAtEndOfScope_21417, var_possibleValuedObject_21449, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 518)) ;
    switch (var_possibleValuedObject_21449.enumValue ()) {
    case GALGAS_valuedObject::kNotBuilt:
      break ;
    case GALGAS_valuedObject::kEnum_module:
      {
      }
      break ;
    case GALGAS_valuedObject::kEnum_register:
      {
      }
      break ;
    case GALGAS_valuedObject::kEnum_globalConstant:
      {
      }
      break ;
    case GALGAS_valuedObject::kEnum_localConstant:
      {
        const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_currentObjectState_21373.objectCompare (GALGAS_valuedObjectState::constructor_hasUnreadValue (SOURCE_FILE ("universal-map.galgas", 529)))).boolEnum () ;
        if (kBoolTrue == test_0) {
          TC_Array <C_FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticWarning (constinArgument_inErrorLocation, GALGAS_string ("'").add_operation (enumerator_21272.current_mValue (HERE).getter_string (SOURCE_FILE ("universal-map.galgas", 530)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 530)).add_operation (GALGAS_string ("' is never read"), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 530)), fixItArray1  COMMA_SOURCE_FILE ("universal-map.galgas", 530)) ;
        }
      }
      break ;
    case GALGAS_valuedObject::kEnum_globalVariable:
      {
      }
      break ;
    case GALGAS_valuedObject::kEnum_localVariable:
      {
        GALGAS_bool test_2 = GALGAS_bool (kIsEqual, var_currentObjectState_21373.objectCompare (GALGAS_valuedObjectState::constructor_noValue (SOURCE_FILE ("universal-map.galgas", 534)))) ;
        if (kBoolTrue == test_2.boolEnum ()) {
          test_2 = var_objectShouldBeValuedAtEndOfScope_21417 ;
        }
        const enumGalgasBool test_3 = test_2.boolEnum () ;
        if (kBoolTrue == test_3) {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("'").add_operation (enumerator_21272.current_mValue (HERE).getter_string (SOURCE_FILE ("universal-map.galgas", 535)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 535)).add_operation (GALGAS_string ("' should be valued at the end of routine"), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 535)), fixItArray4  COMMA_SOURCE_FILE ("universal-map.galgas", 535)) ;
        }
      }
      break ;
    }
    enumerator_21272.gotoNextObject () ;
  }
  cEnumerator_lstringlist enumerator_22055 (object->mProperty_mLocalObjectList, kENUMERATION_UP) ;
  while (enumerator_22055.hasCurrentObject ()) {
    {
    GALGAS_valuedObjectState joker_22124_3 ; // Joker input parameter
    GALGAS_bool joker_22124_2 ; // Joker input parameter
    GALGAS_valuedObject joker_22124_1 ; // Joker input parameter
    object->mProperty_mInternalPropertyAndRoutineMapForContext.setter_removeKey (enumerator_22055.current_mValue (HERE), joker_22124_3, joker_22124_2, joker_22124_1, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 541)) ;
    }
    enumerator_22055.gotoNextObject () ;
  }
  object->mProperty_mLocalObjectList = var_localObjectList_21007 ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionSetter_universalValuedObjectMapForContext_closeOverride (void) {
  enterExtensionSetter_closeOverride (kTypeDescriptor_GALGAS_universalValuedObjectMapForContext.mSlotID,
                                      extensionSetter_universalValuedObjectMapForContext_closeOverride) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionModifier_universalValuedObjectMapForContext_closeOverride (void) {
  gExtensionModifierTable_universalValuedObjectMapForContext_closeOverride.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_universalValuedObjectMapForContext_closeOverride (defineExtensionSetter_universalValuedObjectMapForContext_closeOverride,
                                                                             freeExtensionModifier_universalValuedObjectMapForContext_closeOverride) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Extension Getter '@PLMType equatable'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool extensionGetter_equatable (const GALGAS_PLMType & inObject,
                                       C_Compiler * /* inCompiler */
                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  result_result = inObject.mProperty_mAttributes.getter_equatable (SOURCE_FILE ("types.galgas", 85)) ;
//---
  return result_result ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Extension Getter '@unifiedTypeMap-proxy instanciable'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool extensionGetter_instanciable (const GALGAS_unifiedTypeMap_2D_proxy & inObject,
                                          C_Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  const GALGAS_unifiedTypeMap_2D_proxy temp_0 = inObject ;
  result_result = extensionGetter_instanciable (temp_0.getter_type (inCompiler COMMA_SOURCE_FILE ("types.galgas", 91)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 91)) ;
//---
  return result_result ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Extension Getter '@PLMType instanciable'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool extensionGetter_instanciable (const GALGAS_PLMType & inObject,
                                          C_Compiler * /* inCompiler */
                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  result_result = inObject.mProperty_mAttributes.getter_instanciable (SOURCE_FILE ("types.galgas", 97)) ;
//---
  return result_result ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Extension Getter '@unifiedTypeMap-proxy copyable'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool extensionGetter_copyable (const GALGAS_unifiedTypeMap_2D_proxy & inObject,
                                      C_Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  const GALGAS_unifiedTypeMap_2D_proxy temp_0 = inObject ;
  result_result = extensionGetter_copyable (temp_0.getter_type (inCompiler COMMA_SOURCE_FILE ("types.galgas", 103)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 103)) ;
//---
  return result_result ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Extension Getter '@PLMType copyable'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool extensionGetter_copyable (const GALGAS_PLMType & inObject,
                                      C_Compiler * /* inCompiler */
                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  result_result = inObject.mProperty_mAttributes.getter_copyable (SOURCE_FILE ("types.galgas", 109)) ;
//---
  return result_result ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Extension Getter '@PLMType llvmTypeName'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string extensionGetter_llvmTypeName (const GALGAS_PLMType & inObject,
                                            C_Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_PLMType temp_0 = inObject ;
  switch (temp_0.getter_mKind (SOURCE_FILE ("types.galgas", 115)).enumValue ()) {
  case GALGAS_typeKind::kNotBuilt:
    break ;
  case GALGAS_typeKind::kEnum_void:
    {
      result_result = GALGAS_string ("void") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_boolean:
    {
      result_result = GALGAS_string ("i1") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_literalString:
    {
      result_result = GALGAS_string ("i8*") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_enumeration:
    {
      const cEnumAssociatedValues_typeKind_enumeration * extractPtr_4392 = (const cEnumAssociatedValues_typeKind_enumeration *) (temp_0.getter_mKind (SOURCE_FILE ("types.galgas", 115)).unsafePointer ()) ;
      const GALGAS_uint extractedValue_bitCount = extractPtr_4392->mAssociatedValue0 ;
      result_result = GALGAS_string ("i").add_operation (extractedValue_bitCount.getter_string (SOURCE_FILE ("types.galgas", 123)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 123)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_structure:
    {
      result_result = GALGAS_string ("%").add_operation (function_llvmTypeNameFromPLMname (inObject.mProperty_mPLMTypeName.getter_nowhere (SOURCE_FILE ("types.galgas", 125)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 125)).getter_string (HERE).getter_assemblerRepresentation (SOURCE_FILE ("types.galgas", 125)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 125)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_integer:
    {
      const cEnumAssociatedValues_typeKind_integer * extractPtr_4580 = (const cEnumAssociatedValues_typeKind_integer *) (temp_0.getter_mKind (SOURCE_FILE ("types.galgas", 115)).unsafePointer ()) ;
      const GALGAS_uint extractedValue_bitCount = extractPtr_4580->mAssociatedValue3 ;
      result_result = GALGAS_string ("i").add_operation (extractedValue_bitCount.getter_string (SOURCE_FILE ("types.galgas", 127)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 127)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_staticInteger:
    {
      result_result = GALGAS_string ("\xE2""\x80""\x94""") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_opaque:
    {
      const cEnumAssociatedValues_typeKind_opaque * extractPtr_4683 = (const cEnumAssociatedValues_typeKind_opaque *) (temp_0.getter_mKind (SOURCE_FILE ("types.galgas", 115)).unsafePointer ()) ;
      const GALGAS_bigint extractedValue_bitCount = extractPtr_4683->mAssociatedValue0 ;
      result_result = GALGAS_string ("i").add_operation (extractedValue_bitCount.getter_string (SOURCE_FILE ("types.galgas", 131)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 131)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_arrayType:
    {
      result_result = GALGAS_string ("%").add_operation (function_llvmTypeNameFromPLMname (inObject.mProperty_mPLMTypeName.getter_nowhere (SOURCE_FILE ("types.galgas", 133)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 133)).getter_string (HERE).getter_assemblerRepresentation (SOURCE_FILE ("types.galgas", 133)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 133)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_function:
    {
      const cEnumAssociatedValues_typeKind_function * extractPtr_5287 = (const cEnumAssociatedValues_typeKind_function *) (temp_0.getter_mKind (SOURCE_FILE ("types.galgas", 115)).unsafePointer ()) ;
      const GALGAS_routineDescriptor extractedValue_descriptor = extractPtr_5287->mAssociatedValue0 ;
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, extractedValue_descriptor.getter_mReturnTypeProxy (HERE).objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("types.galgas", 135)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        result_result = GALGAS_string ("void") ;
      }else if (kBoolFalse == test_1) {
        result_result = extensionGetter_llvmTypeName (extractedValue_descriptor.getter_mReturnTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("types.galgas", 138)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 138)) ;
      }
      result_result.plusAssign_operation(GALGAS_string ("("), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 140)) ;
      cEnumerator_routineTypedSignature enumerator_5060 (extractedValue_descriptor.getter_mSignature (HERE), kENUMERATION_UP) ;
      while (enumerator_5060.hasCurrentObject ()) {
        result_result.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_5060.current_mTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("types.galgas", 143)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 143)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 143)) ;
        switch (enumerator_5060.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
        case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
          break ;
        case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
        case GALGAS_procFormalArgumentPassingMode::kEnum_output:
          {
            result_result.plusAssign_operation(GALGAS_string ("*"), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 145)) ;
          }
          break ;
        case GALGAS_procFormalArgumentPassingMode::kEnum_input:
          {
          }
          break ;
        }
        if (enumerator_5060.hasNextObject ()) {
          result_result.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 148)) ;
        }
        enumerator_5060.gotoNextObject () ;
      }
      result_result.plusAssign_operation(GALGAS_string (")*"), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 150)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_pointer:
    {
      const cEnumAssociatedValues_typeKind_pointer * extractPtr_5356 = (const cEnumAssociatedValues_typeKind_pointer *) (temp_0.getter_mKind (SOURCE_FILE ("types.galgas", 115)).unsafePointer ()) ;
      const GALGAS_PLMType extractedValue_pointee = extractPtr_5356->mAssociatedValue0 ;
      result_result = extensionGetter_llvmTypeName (extractedValue_pointee, inCompiler COMMA_SOURCE_FILE ("types.galgas", 152)).add_operation (GALGAS_string ("*"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 152)) ;
    }
    break ;
  }
//---
  return result_result ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Extension Getter '@PLMType descriptionForHTMLFile'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string extensionGetter_descriptionForHTMLFile (const GALGAS_PLMType & inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_PLMType temp_0 = inObject ;
  switch (temp_0.getter_mKind (SOURCE_FILE ("types.galgas", 159)).enumValue ()) {
  case GALGAS_typeKind::kNotBuilt:
    break ;
  case GALGAS_typeKind::kEnum_void:
    {
      result_result = GALGAS_string ("Void") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_boolean:
    {
      result_result = GALGAS_string ("Boolean") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_literalString:
    {
      result_result = GALGAS_string ("Literal String") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_enumeration:
    {
      result_result = GALGAS_string ("Enumeration") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_structure:
    {
      result_result = GALGAS_string ("Structure") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_integer:
    {
      const cEnumAssociatedValues_typeKind_integer * extractPtr_5999 = (const cEnumAssociatedValues_typeKind_integer *) (temp_0.getter_mKind (SOURCE_FILE ("types.galgas", 159)).unsafePointer ()) ;
      const GALGAS_bool extractedValue_unsigned = extractPtr_5999->mAssociatedValue2 ;
      const GALGAS_uint extractedValue_bitCount = extractPtr_5999->mAssociatedValue3 ;
      GALGAS_string temp_1 ;
      const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, extractedValue_bitCount.objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
      if (kBoolTrue == test_2) {
        temp_1 = GALGAS_string ("s") ;
      }else if (kBoolFalse == test_2) {
        temp_1 = GALGAS_string::makeEmptyString () ;
      }
      GALGAS_string temp_3 ;
      const enumGalgasBool test_4 = extractedValue_unsigned.boolEnum () ;
      if (kBoolTrue == test_4) {
        temp_3 = GALGAS_string ("unsigned") ;
      }else if (kBoolFalse == test_4) {
        temp_3 = GALGAS_string ("signed") ;
      }
      result_result = GALGAS_string ("Integer (").add_operation (extractedValue_bitCount.getter_string (SOURCE_FILE ("types.galgas", 171)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 171)).add_operation (GALGAS_string (" bit"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 171)).add_operation (temp_1, inCompiler COMMA_SOURCE_FILE ("types.galgas", 171)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 171)).add_operation (temp_3, inCompiler COMMA_SOURCE_FILE ("types.galgas", 172)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 172)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_staticInteger:
    {
      result_result = GALGAS_string ("Static Integer") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_opaque:
    {
      const cEnumAssociatedValues_typeKind_opaque * extractPtr_6133 = (const cEnumAssociatedValues_typeKind_opaque *) (temp_0.getter_mKind (SOURCE_FILE ("types.galgas", 159)).unsafePointer ()) ;
      const GALGAS_bigint extractedValue_bitCount = extractPtr_6133->mAssociatedValue0 ;
      result_result = GALGAS_string ("Opaque (").add_operation (extractedValue_bitCount.getter_string (SOURCE_FILE ("types.galgas", 176)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 176)).add_operation (GALGAS_string (" bits)"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 176)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_arrayType:
    {
      result_result = GALGAS_string ("Array") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_function:
    {
      result_result = GALGAS_string ("Function") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_pointer:
    {
      const cEnumAssociatedValues_typeKind_pointer * extractPtr_6304 = (const cEnumAssociatedValues_typeKind_pointer *) (temp_0.getter_mKind (SOURCE_FILE ("types.galgas", 159)).unsafePointer ()) ;
      const GALGAS_PLMType extractedValue_pointee = extractPtr_6304->mAssociatedValue0 ;
      result_result = GALGAS_string ("Pointer to ").add_operation (extensionGetter_llvmTypeName (extractedValue_pointee, inCompiler COMMA_SOURCE_FILE ("types.galgas", 182)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 182)) ;
    }
    break ;
  }
//---
  return result_result ;
}




//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticTemporariesStruct::GALGAS_semanticTemporariesStruct (void) :
mProperty_mTemporaryIndex (),
mProperty_mPanicSetupRoutinePriorityMap (),
mProperty_mPanicLoopRoutinePriorityMap (),
mProperty_mInitRoutinePriorityMap (),
mProperty_mBootRoutinePriorityMap (),
mProperty_mSubprogramInvocationGraph (),
mProperty_mStaticArrayMapForTemporaries () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticTemporariesStruct::~ GALGAS_semanticTemporariesStruct (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticTemporariesStruct::GALGAS_semanticTemporariesStruct (const GALGAS_uint & inOperand0,
                                                                    const GALGAS_panicRoutinePriorityMap & inOperand1,
                                                                    const GALGAS_panicRoutinePriorityMap & inOperand2,
                                                                    const GALGAS_initRoutinePriorityMap & inOperand3,
                                                                    const GALGAS_bootRoutinePriorityMap & inOperand4,
                                                                    const GALGAS_subprogramInvocationGraph & inOperand5,
                                                                    const GALGAS_staticListInvokedFunctionSetMap & inOperand6) :
mProperty_mTemporaryIndex (inOperand0),
mProperty_mPanicSetupRoutinePriorityMap (inOperand1),
mProperty_mPanicLoopRoutinePriorityMap (inOperand2),
mProperty_mInitRoutinePriorityMap (inOperand3),
mProperty_mBootRoutinePriorityMap (inOperand4),
mProperty_mSubprogramInvocationGraph (inOperand5),
mProperty_mStaticArrayMapForTemporaries (inOperand6) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticTemporariesStruct GALGAS_semanticTemporariesStruct::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_semanticTemporariesStruct (GALGAS_uint::constructor_default (HERE),
                                           GALGAS_panicRoutinePriorityMap::constructor_emptyMap (HERE),
                                           GALGAS_panicRoutinePriorityMap::constructor_emptyMap (HERE),
                                           GALGAS_initRoutinePriorityMap::constructor_emptyMap (HERE),
                                           GALGAS_bootRoutinePriorityMap::constructor_emptyMap (HERE),
                                           GALGAS_subprogramInvocationGraph::constructor_emptyGraph (HERE),
                                           GALGAS_staticListInvokedFunctionSetMap::constructor_emptyMap (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticTemporariesStruct GALGAS_semanticTemporariesStruct::constructor_new (const GALGAS_uint & inOperand0,
                                                                                    const GALGAS_panicRoutinePriorityMap & inOperand1,
                                                                                    const GALGAS_panicRoutinePriorityMap & inOperand2,
                                                                                    const GALGAS_initRoutinePriorityMap & inOperand3,
                                                                                    const GALGAS_bootRoutinePriorityMap & inOperand4,
                                                                                    const GALGAS_subprogramInvocationGraph & inOperand5,
                                                                                    const GALGAS_staticListInvokedFunctionSetMap & inOperand6 
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticTemporariesStruct result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid ()) {
    result = GALGAS_semanticTemporariesStruct (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_semanticTemporariesStruct::objectCompare (const GALGAS_semanticTemporariesStruct & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mTemporaryIndex.objectCompare (inOperand.mProperty_mTemporaryIndex) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mPanicSetupRoutinePriorityMap.objectCompare (inOperand.mProperty_mPanicSetupRoutinePriorityMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mPanicLoopRoutinePriorityMap.objectCompare (inOperand.mProperty_mPanicLoopRoutinePriorityMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mInitRoutinePriorityMap.objectCompare (inOperand.mProperty_mInitRoutinePriorityMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBootRoutinePriorityMap.objectCompare (inOperand.mProperty_mBootRoutinePriorityMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSubprogramInvocationGraph.objectCompare (inOperand.mProperty_mSubprogramInvocationGraph) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mStaticArrayMapForTemporaries.objectCompare (inOperand.mProperty_mStaticArrayMapForTemporaries) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_semanticTemporariesStruct::isValid (void) const {
  return mProperty_mTemporaryIndex.isValid () && mProperty_mPanicSetupRoutinePriorityMap.isValid () && mProperty_mPanicLoopRoutinePriorityMap.isValid () && mProperty_mInitRoutinePriorityMap.isValid () && mProperty_mBootRoutinePriorityMap.isValid () && mProperty_mSubprogramInvocationGraph.isValid () && mProperty_mStaticArrayMapForTemporaries.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticTemporariesStruct::drop (void) {
  mProperty_mTemporaryIndex.drop () ;
  mProperty_mPanicSetupRoutinePriorityMap.drop () ;
  mProperty_mPanicLoopRoutinePriorityMap.drop () ;
  mProperty_mInitRoutinePriorityMap.drop () ;
  mProperty_mBootRoutinePriorityMap.drop () ;
  mProperty_mSubprogramInvocationGraph.drop () ;
  mProperty_mStaticArrayMapForTemporaries.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticTemporariesStruct::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "<struct @semanticTemporariesStruct:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mTemporaryIndex.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mPanicSetupRoutinePriorityMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mPanicLoopRoutinePriorityMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mInitRoutinePriorityMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBootRoutinePriorityMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSubprogramInvocationGraph.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mStaticArrayMapForTemporaries.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_semanticTemporariesStruct::getter_mTemporaryIndex (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTemporaryIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_panicRoutinePriorityMap GALGAS_semanticTemporariesStruct::getter_mPanicSetupRoutinePriorityMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPanicSetupRoutinePriorityMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_panicRoutinePriorityMap GALGAS_semanticTemporariesStruct::getter_mPanicLoopRoutinePriorityMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPanicLoopRoutinePriorityMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initRoutinePriorityMap GALGAS_semanticTemporariesStruct::getter_mInitRoutinePriorityMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInitRoutinePriorityMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootRoutinePriorityMap GALGAS_semanticTemporariesStruct::getter_mBootRoutinePriorityMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBootRoutinePriorityMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_subprogramInvocationGraph GALGAS_semanticTemporariesStruct::getter_mSubprogramInvocationGraph (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSubprogramInvocationGraph ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticListInvokedFunctionSetMap GALGAS_semanticTemporariesStruct::getter_mStaticArrayMapForTemporaries (UNUSED_LOCATION_ARGS) const {
  return mProperty_mStaticArrayMapForTemporaries ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @semanticTemporariesStruct type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_semanticTemporariesStruct ("semanticTemporariesStruct",
                                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_semanticTemporariesStruct::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticTemporariesStruct ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_semanticTemporariesStruct::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_semanticTemporariesStruct (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticTemporariesStruct GALGAS_semanticTemporariesStruct::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_semanticTemporariesStruct result ;
  const GALGAS_semanticTemporariesStruct * p = (const GALGAS_semanticTemporariesStruct *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_semanticTemporariesStruct *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticTemporariesStruct", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Extension method '@semanticTemporariesStruct newTempLLVMVar'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionSetter_newTempLLVMVar (GALGAS_semanticTemporariesStruct & ioObject,
                                     GALGAS_string & outArgument_outTempLLVMVar,
                                     C_Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outTempLLVMVar.drop () ; // Release 'out' argument
  outArgument_outTempLLVMVar = GALGAS_string ("%temp.").add_operation (ioObject.mProperty_mTemporaryIndex.getter_string (SOURCE_FILE ("semantic-analysis.galgas", 62)), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 62)) ;
  ioObject.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 63)) ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineMapIR_2D_element::GALGAS_routineMapIR_2D_element (void) :
mProperty_lkey (),
mProperty_mReceiverType (),
mProperty_mRoutineNameForGeneration (),
mProperty_mFormalArgumentListForGeneration (),
mProperty_mAllocaList (),
mProperty_mInstructionGenerationList (),
mProperty_mIsRequired (),
mProperty_mWarnIfUnused (),
mProperty_mGlobal (),
mProperty_mKind (),
mProperty_mReturnType (),
mProperty_mAppendFileAndLineArgumentForPanicLocation () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineMapIR_2D_element::~ GALGAS_routineMapIR_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineMapIR_2D_element::GALGAS_routineMapIR_2D_element (const GALGAS_lstring & inOperand0,
                                                                const GALGAS_PLMType & inOperand1,
                                                                const GALGAS_lstring & inOperand2,
                                                                const GALGAS_routineFormalArgumentListForGeneration & inOperand3,
                                                                const GALGAS_allocaList & inOperand4,
                                                                const GALGAS_instructionListIR & inOperand5,
                                                                const GALGAS_bool & inOperand6,
                                                                const GALGAS_bool & inOperand7,
                                                                const GALGAS_bool & inOperand8,
                                                                const GALGAS_routineKind & inOperand9,
                                                                const GALGAS_PLMType & inOperand10,
                                                                const GALGAS_bool & inOperand11) :
mProperty_lkey (inOperand0),
mProperty_mReceiverType (inOperand1),
mProperty_mRoutineNameForGeneration (inOperand2),
mProperty_mFormalArgumentListForGeneration (inOperand3),
mProperty_mAllocaList (inOperand4),
mProperty_mInstructionGenerationList (inOperand5),
mProperty_mIsRequired (inOperand6),
mProperty_mWarnIfUnused (inOperand7),
mProperty_mGlobal (inOperand8),
mProperty_mKind (inOperand9),
mProperty_mReturnType (inOperand10),
mProperty_mAppendFileAndLineArgumentForPanicLocation (inOperand11) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineMapIR_2D_element GALGAS_routineMapIR_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                const GALGAS_PLMType & inOperand1,
                                                                                const GALGAS_lstring & inOperand2,
                                                                                const GALGAS_routineFormalArgumentListForGeneration & inOperand3,
                                                                                const GALGAS_allocaList & inOperand4,
                                                                                const GALGAS_instructionListIR & inOperand5,
                                                                                const GALGAS_bool & inOperand6,
                                                                                const GALGAS_bool & inOperand7,
                                                                                const GALGAS_bool & inOperand8,
                                                                                const GALGAS_routineKind & inOperand9,
                                                                                const GALGAS_PLMType & inOperand10,
                                                                                const GALGAS_bool & inOperand11 
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_routineMapIR_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid () && inOperand10.isValid () && inOperand11.isValid ()) {
    result = GALGAS_routineMapIR_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10, inOperand11) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_routineMapIR_2D_element::objectCompare (const GALGAS_routineMapIR_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mReceiverType.objectCompare (inOperand.mProperty_mReceiverType) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mRoutineNameForGeneration.objectCompare (inOperand.mProperty_mRoutineNameForGeneration) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFormalArgumentListForGeneration.objectCompare (inOperand.mProperty_mFormalArgumentListForGeneration) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mAllocaList.objectCompare (inOperand.mProperty_mAllocaList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mInstructionGenerationList.objectCompare (inOperand.mProperty_mInstructionGenerationList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mIsRequired.objectCompare (inOperand.mProperty_mIsRequired) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mWarnIfUnused.objectCompare (inOperand.mProperty_mWarnIfUnused) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mGlobal.objectCompare (inOperand.mProperty_mGlobal) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mKind.objectCompare (inOperand.mProperty_mKind) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mReturnType.objectCompare (inOperand.mProperty_mReturnType) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mAppendFileAndLineArgumentForPanicLocation.objectCompare (inOperand.mProperty_mAppendFileAndLineArgumentForPanicLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_routineMapIR_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mReceiverType.isValid () && mProperty_mRoutineNameForGeneration.isValid () && mProperty_mFormalArgumentListForGeneration.isValid () && mProperty_mAllocaList.isValid () && mProperty_mInstructionGenerationList.isValid () && mProperty_mIsRequired.isValid () && mProperty_mWarnIfUnused.isValid () && mProperty_mGlobal.isValid () && mProperty_mKind.isValid () && mProperty_mReturnType.isValid () && mProperty_mAppendFileAndLineArgumentForPanicLocation.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineMapIR_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mReceiverType.drop () ;
  mProperty_mRoutineNameForGeneration.drop () ;
  mProperty_mFormalArgumentListForGeneration.drop () ;
  mProperty_mAllocaList.drop () ;
  mProperty_mInstructionGenerationList.drop () ;
  mProperty_mIsRequired.drop () ;
  mProperty_mWarnIfUnused.drop () ;
  mProperty_mGlobal.drop () ;
  mProperty_mKind.drop () ;
  mProperty_mReturnType.drop () ;
  mProperty_mAppendFileAndLineArgumentForPanicLocation.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineMapIR_2D_element::description (C_String & ioString,
                                                  const int32_t inIndentation) const {
  ioString << "<struct @routineMapIR-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mReceiverType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mRoutineNameForGeneration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFormalArgumentListForGeneration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mAllocaList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mInstructionGenerationList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mIsRequired.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mWarnIfUnused.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mGlobal.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mKind.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mReturnType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mAppendFileAndLineArgumentForPanicLocation.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_routineMapIR_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMType GALGAS_routineMapIR_2D_element::getter_mReceiverType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mReceiverType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_routineMapIR_2D_element::getter_mRoutineNameForGeneration (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRoutineNameForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineFormalArgumentListForGeneration GALGAS_routineMapIR_2D_element::getter_mFormalArgumentListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFormalArgumentListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allocaList GALGAS_routineMapIR_2D_element::getter_mAllocaList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAllocaList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR GALGAS_routineMapIR_2D_element::getter_mInstructionGenerationList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInstructionGenerationList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_routineMapIR_2D_element::getter_mIsRequired (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIsRequired ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_routineMapIR_2D_element::getter_mWarnIfUnused (UNUSED_LOCATION_ARGS) const {
  return mProperty_mWarnIfUnused ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_routineMapIR_2D_element::getter_mGlobal (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGlobal ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineKind GALGAS_routineMapIR_2D_element::getter_mKind (UNUSED_LOCATION_ARGS) const {
  return mProperty_mKind ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMType GALGAS_routineMapIR_2D_element::getter_mReturnType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mReturnType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_routineMapIR_2D_element::getter_mAppendFileAndLineArgumentForPanicLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAppendFileAndLineArgumentForPanicLocation ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @routineMapIR-element type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_routineMapIR_2D_element ("routineMapIR-element",
                                                NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_routineMapIR_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineMapIR_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_routineMapIR_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_routineMapIR_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineMapIR_2D_element GALGAS_routineMapIR_2D_element::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_routineMapIR_2D_element result ;
  const GALGAS_routineMapIR_2D_element * p = (const GALGAS_routineMapIR_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_routineMapIR_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineMapIR-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_binaryOperationIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_binaryOperationIR * p = (const cPtr_binaryOperationIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_binaryOperationIR) ;
  if (kOperandEqual == result) {
    result = mProperty_mTarget.objectCompare (p->mProperty_mTarget) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOperandType.objectCompare (p->mProperty_mOperandType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLeft.objectCompare (p->mProperty_mLeft) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOperation.objectCompare (p->mProperty_mOperation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRight.objectCompare (p->mProperty_mRight) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLocation.objectCompare (p->mProperty_mLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_binaryOperationIR::objectCompare (const GALGAS_binaryOperationIR & inOperand) const {
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

GALGAS_binaryOperationIR::GALGAS_binaryOperationIR (void) :
GALGAS_abstractInstructionIR () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_binaryOperationIR::GALGAS_binaryOperationIR (const cPtr_binaryOperationIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_binaryOperationIR) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_binaryOperationIR GALGAS_binaryOperationIR::constructor_new (const GALGAS_objectIR & inAttribute_mTarget,
                                                                    const GALGAS_PLMType & inAttribute_mOperandType,
                                                                    const GALGAS_objectIR & inAttribute_mLeft,
                                                                    const GALGAS_llvmBinaryOperation & inAttribute_mOperation,
                                                                    const GALGAS_objectIR & inAttribute_mRight,
                                                                    const GALGAS_location & inAttribute_mLocation
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_binaryOperationIR result ;
  if (inAttribute_mTarget.isValid () && inAttribute_mOperandType.isValid () && inAttribute_mLeft.isValid () && inAttribute_mOperation.isValid () && inAttribute_mRight.isValid () && inAttribute_mLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_binaryOperationIR (inAttribute_mTarget, inAttribute_mOperandType, inAttribute_mLeft, inAttribute_mOperation, inAttribute_mRight, inAttribute_mLocation COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_binaryOperationIR::getter_mTarget (UNUSED_LOCATION_ARGS) const {
  GALGAS_objectIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_binaryOperationIR * p = (const cPtr_binaryOperationIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_binaryOperationIR) ;
    result = p->mProperty_mTarget ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR cPtr_binaryOperationIR::getter_mTarget (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTarget ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMType GALGAS_binaryOperationIR::getter_mOperandType (UNUSED_LOCATION_ARGS) const {
  GALGAS_PLMType result ;
  if (NULL != mObjectPtr) {
    const cPtr_binaryOperationIR * p = (const cPtr_binaryOperationIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_binaryOperationIR) ;
    result = p->mProperty_mOperandType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMType cPtr_binaryOperationIR::getter_mOperandType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOperandType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_binaryOperationIR::getter_mLeft (UNUSED_LOCATION_ARGS) const {
  GALGAS_objectIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_binaryOperationIR * p = (const cPtr_binaryOperationIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_binaryOperationIR) ;
    result = p->mProperty_mLeft ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR cPtr_binaryOperationIR::getter_mLeft (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLeft ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_llvmBinaryOperation GALGAS_binaryOperationIR::getter_mOperation (UNUSED_LOCATION_ARGS) const {
  GALGAS_llvmBinaryOperation result ;
  if (NULL != mObjectPtr) {
    const cPtr_binaryOperationIR * p = (const cPtr_binaryOperationIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_binaryOperationIR) ;
    result = p->mProperty_mOperation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_llvmBinaryOperation cPtr_binaryOperationIR::getter_mOperation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOperation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_binaryOperationIR::getter_mRight (UNUSED_LOCATION_ARGS) const {
  GALGAS_objectIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_binaryOperationIR * p = (const cPtr_binaryOperationIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_binaryOperationIR) ;
    result = p->mProperty_mRight ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR cPtr_binaryOperationIR::getter_mRight (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRight ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_binaryOperationIR::getter_mLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_binaryOperationIR * p = (const cPtr_binaryOperationIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_binaryOperationIR) ;
    result = p->mProperty_mLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_binaryOperationIR::getter_mLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                     Pointer class for @binaryOperationIR class                                      *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_binaryOperationIR::cPtr_binaryOperationIR (const GALGAS_objectIR & in_mTarget,
                                                const GALGAS_PLMType & in_mOperandType,
                                                const GALGAS_objectIR & in_mLeft,
                                                const GALGAS_llvmBinaryOperation & in_mOperation,
                                                const GALGAS_objectIR & in_mRight,
                                                const GALGAS_location & in_mLocation
                                                COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mTarget (in_mTarget),
mProperty_mOperandType (in_mOperandType),
mProperty_mLeft (in_mLeft),
mProperty_mOperation (in_mOperation),
mProperty_mRight (in_mRight),
mProperty_mLocation (in_mLocation) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_binaryOperationIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_binaryOperationIR ;
}

void cPtr_binaryOperationIR::description (C_String & ioString,
                                          const int32_t inIndentation) const {
  ioString << "[@binaryOperationIR:" ;
  mProperty_mTarget.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOperandType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLeft.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOperation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRight.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_binaryOperationIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_binaryOperationIR (mProperty_mTarget, mProperty_mOperandType, mProperty_mLeft, mProperty_mOperation, mProperty_mRight, mProperty_mLocation COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @binaryOperationIR type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_binaryOperationIR ("binaryOperationIR",
                                          & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_binaryOperationIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_binaryOperationIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_binaryOperationIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_binaryOperationIR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_binaryOperationIR GALGAS_binaryOperationIR::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_binaryOperationIR result ;
  const GALGAS_binaryOperationIR * p = (const GALGAS_binaryOperationIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_binaryOperationIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("binaryOperationIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Extension method '@binaryOperationIR enterCodeForOverflowOperation'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_binaryOperationIR_enterCodeForOverflowOperation> gExtensionMethodTable_binaryOperationIR_enterCodeForOverflowOperation ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_enterCodeForOverflowOperation (const int32_t inClassIndex,
                                                         extensionMethodSignature_binaryOperationIR_enterCodeForOverflowOperation inMethod) {
  gExtensionMethodTable_binaryOperationIR_enterCodeForOverflowOperation.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_enterCodeForOverflowOperation (const cPtr_binaryOperationIR * inObject,
                                                        const GALGAS_string constin_inOperation,
                                                        const GALGAS_bigint constin_inPanicCode,
                                                        GALGAS_string & io_ioLLVMcode,
                                                        const GALGAS_generationContext constin_inGenerationContext,
                                                        GALGAS_generationAdds & io_ioGenerationAdds,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_binaryOperationIR) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_binaryOperationIR_enterCodeForOverflowOperation f = NULL ;
    if (classIndex < gExtensionMethodTable_binaryOperationIR_enterCodeForOverflowOperation.count ()) {
      f = gExtensionMethodTable_binaryOperationIR_enterCodeForOverflowOperation (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_binaryOperationIR_enterCodeForOverflowOperation.count ()) {
           f = gExtensionMethodTable_binaryOperationIR_enterCodeForOverflowOperation (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_binaryOperationIR_enterCodeForOverflowOperation.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inOperation, constin_inPanicCode, io_ioLLVMcode, constin_inGenerationContext, io_ioGenerationAdds, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_binaryOperationIR_enterCodeForOverflowOperation (const cPtr_binaryOperationIR * inObject,
                                                                             const GALGAS_string constinArgument_inOperation,
                                                                             const GALGAS_bigint constinArgument_inPanicCode,
                                                                             GALGAS_string & ioArgument_ioLLVMcode,
                                                                             const GALGAS_generationContext constinArgument_inGenerationContext,
                                                                             GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_binaryOperationIR * object = inObject ;
  macroValidSharedObject (object, cPtr_binaryOperationIR) ;
  GALGAS_uint var_staticStringIndex_2079 ;
  {
  extensionSetter_findOrAddStaticString (ioArgument_ioGenerationAdds.mProperty_mStaticStringMap, object->mProperty_mLocation.getter_file (inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 83)).getter_lastPathComponent (SOURCE_FILE ("intermediate-binary-operation.galgas", 83)).getter_stringByDeletingPathExtension (SOURCE_FILE ("intermediate-binary-operation.galgas", 83)), var_staticStringIndex_2079, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 82)) ;
  }
  GALGAS_string var_llvmType_2098 = extensionGetter_llvmTypeName (object->mProperty_mOperandType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 86)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 87)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 87)).add_operation (GALGAS_string (".r = call {"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 87)).add_operation (var_llvmType_2098, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 87)).add_operation (GALGAS_string (", i1} @llvm."), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 87)).add_operation (constinArgument_inOperation, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 87)).add_operation (GALGAS_string (".with.overflow."), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 87)).add_operation (var_llvmType_2098, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 87)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 87)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" (").add_operation (var_llvmType_2098, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 88)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 88)).add_operation (extensionGetter_llvmName (object->mProperty_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 88)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 88)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 88)).add_operation (var_llvmType_2098, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 88)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 88)).add_operation (extensionGetter_llvmName (object->mProperty_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 88)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 88)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 88)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 88)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 89)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 89)).add_operation (GALGAS_string (".hasOvf = extractvalue {"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 89)).add_operation (var_llvmType_2098, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 89)).add_operation (GALGAS_string (", i1} "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 89)).add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 89)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 89)).add_operation (GALGAS_string (".r, 1\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 89)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 89)) ;
  GALGAS_string var_labelName_2510 = GALGAS_string ("label.").add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("intermediate-binary-operation.galgas", 90)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 90)) ;
  ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 91)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 92)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 92)).add_operation (GALGAS_string (".hasOvf, label %"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 92)).add_operation (var_labelName_2510, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 92)).add_operation (GALGAS_string (".ovf, label %"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 92)).add_operation (var_labelName_2510, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 92)).add_operation (GALGAS_string (".noovf\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 92)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 92)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelName_2510.add_operation (GALGAS_string (".ovf:\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 93)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 93)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @raise.panic.").add_operation (var_staticStringIndex_2079.getter_string (SOURCE_FILE ("intermediate-binary-operation.galgas", 94)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 94)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 94)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 94)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(constinArgument_inGenerationContext.getter_mPanicLineLLVMType (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 95)).add_operation (object->mProperty_mLocation.getter_line (inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 95)).getter_string (SOURCE_FILE ("intermediate-binary-operation.galgas", 95)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 95)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 95)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 95)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(constinArgument_inGenerationContext.getter_mPanicCodeLLVMType (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 96)).add_operation (constinArgument_inPanicCode.getter_string (SOURCE_FILE ("intermediate-binary-operation.galgas", 96)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 96)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 96)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 96)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  unreachable\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 97)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelName_2510.add_operation (GALGAS_string (".noovf:\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 98)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 98)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 99)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 99)).add_operation (GALGAS_string (" = extractvalue {"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 99)).add_operation (var_llvmType_2098, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 99)).add_operation (GALGAS_string (", i1} "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 99)).add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 99)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 99)).add_operation (GALGAS_string (".r, 0\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 99)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 99)) ;
  ioArgument_ioGenerationAdds.mProperty_mExternFunctionDeclarationSet.addAssign_operation (GALGAS_string ("declare {").add_operation (var_llvmType_2098, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 100)).add_operation (GALGAS_string (", i1} @llvm."), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 100)).add_operation (constinArgument_inOperation, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 100)).add_operation (GALGAS_string (".with.overflow."), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 100)).add_operation (var_llvmType_2098, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 100)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 101)).add_operation (var_llvmType_2098, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 101)).add_operation (GALGAS_string (" %a, "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 101)).add_operation (var_llvmType_2098, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 101)).add_operation (GALGAS_string (" %b)"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 101))  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 100)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_binaryOperationIR_enterCodeForOverflowOperation (void) {
  enterExtensionMethod_enterCodeForOverflowOperation (kTypeDescriptor_GALGAS_binaryOperationIR.mSlotID,
                                                      extensionMethod_binaryOperationIR_enterCodeForOverflowOperation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_binaryOperationIR_enterCodeForOverflowOperation (void) {
  gExtensionMethodTable_binaryOperationIR_enterCodeForOverflowOperation.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_binaryOperationIR_enterCodeForOverflowOperation (defineExtensionMethod_binaryOperationIR_enterCodeForOverflowOperation,
                                                                            freeExtensionMethod_binaryOperationIR_enterCodeForOverflowOperation) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Extension method '@binaryOperationIR enterCodeForDivisionWithZeroDivisorPanic'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_binaryOperationIR_enterCodeForDivisionWithZeroDivisorPanic> gExtensionMethodTable_binaryOperationIR_enterCodeForDivisionWithZeroDivisorPanic ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_enterCodeForDivisionWithZeroDivisorPanic (const int32_t inClassIndex,
                                                                    extensionMethodSignature_binaryOperationIR_enterCodeForDivisionWithZeroDivisorPanic inMethod) {
  gExtensionMethodTable_binaryOperationIR_enterCodeForDivisionWithZeroDivisorPanic.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_enterCodeForDivisionWithZeroDivisorPanic (const cPtr_binaryOperationIR * inObject,
                                                                   const GALGAS_string constin_inOperation,
                                                                   const GALGAS_bigint constin_inPanicCode,
                                                                   GALGAS_string & io_ioLLVMcode,
                                                                   const GALGAS_generationContext constin_inGenerationContext,
                                                                   GALGAS_generationAdds & io_ioGenerationAdds,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_binaryOperationIR) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_binaryOperationIR_enterCodeForDivisionWithZeroDivisorPanic f = NULL ;
    if (classIndex < gExtensionMethodTable_binaryOperationIR_enterCodeForDivisionWithZeroDivisorPanic.count ()) {
      f = gExtensionMethodTable_binaryOperationIR_enterCodeForDivisionWithZeroDivisorPanic (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_binaryOperationIR_enterCodeForDivisionWithZeroDivisorPanic.count ()) {
           f = gExtensionMethodTable_binaryOperationIR_enterCodeForDivisionWithZeroDivisorPanic (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_binaryOperationIR_enterCodeForDivisionWithZeroDivisorPanic.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inOperation, constin_inPanicCode, io_ioLLVMcode, constin_inGenerationContext, io_ioGenerationAdds, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_binaryOperationIR_enterCodeForDivisionWithZeroDivisorPanic (const cPtr_binaryOperationIR * inObject,
                                                                                        const GALGAS_string constinArgument_inOperation,
                                                                                        const GALGAS_bigint constinArgument_inPanicCode,
                                                                                        GALGAS_string & ioArgument_ioLLVMcode,
                                                                                        const GALGAS_generationContext constinArgument_inGenerationContext,
                                                                                        GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_binaryOperationIR * object = inObject ;
  macroValidSharedObject (object, cPtr_binaryOperationIR) ;
  GALGAS_uint var_staticStringIndex_3896 ;
  {
  extensionSetter_findOrAddStaticString (ioArgument_ioGenerationAdds.mProperty_mStaticStringMap, object->mProperty_mLocation.getter_file (inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 114)).getter_lastPathComponent (SOURCE_FILE ("intermediate-binary-operation.galgas", 114)).getter_stringByDeletingPathExtension (SOURCE_FILE ("intermediate-binary-operation.galgas", 114)), var_staticStringIndex_3896, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 113)) ;
  }
  GALGAS_string var_llvmType_3915 = extensionGetter_llvmTypeName (object->mProperty_mOperandType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 117)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 118)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 118)).add_operation (GALGAS_string (".isZero = icmp eq "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 118)).add_operation (var_llvmType_3915, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 118)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 118)).add_operation (extensionGetter_llvmName (object->mProperty_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 118)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 118)).add_operation (GALGAS_string (", 0\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 118)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 118)) ;
  GALGAS_string var_labelName_4072 = GALGAS_string ("label.").add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("intermediate-binary-operation.galgas", 119)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 119)) ;
  ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 120)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (extensionGetter_llvmName (object->mProperty_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 121)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 121)).add_operation (GALGAS_string (".isZero, label %"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 121)).add_operation (var_labelName_4072, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 121)).add_operation (GALGAS_string (".divideByZero, label %"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 121)).add_operation (var_labelName_4072, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 121)).add_operation (GALGAS_string (".ok\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 121)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 121)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelName_4072.add_operation (GALGAS_string (".divideByZero:\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 122)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 122)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @raise.panic.").add_operation (var_staticStringIndex_3896.getter_string (SOURCE_FILE ("intermediate-binary-operation.galgas", 123)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 123)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 123)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 123)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(constinArgument_inGenerationContext.getter_mPanicLineLLVMType (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 124)).add_operation (object->mProperty_mLocation.getter_line (inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 124)).getter_string (SOURCE_FILE ("intermediate-binary-operation.galgas", 124)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 124)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 124)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 124)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(constinArgument_inGenerationContext.getter_mPanicCodeLLVMType (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 125)).add_operation (constinArgument_inPanicCode.getter_string (SOURCE_FILE ("intermediate-binary-operation.galgas", 125)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 125)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 125)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 125)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  unreachable\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 126)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelName_4072.add_operation (GALGAS_string (".ok:\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 127)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 127)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 128)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 128)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 128)).add_operation (constinArgument_inOperation, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 128)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 128)).add_operation (var_llvmType_3915, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 128)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 128)).add_operation (extensionGetter_llvmName (object->mProperty_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 128)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 128)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 128)).add_operation (extensionGetter_llvmName (object->mProperty_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 128)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 128)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 128)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 128)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_binaryOperationIR_enterCodeForDivisionWithZeroDivisorPanic (void) {
  enterExtensionMethod_enterCodeForDivisionWithZeroDivisorPanic (kTypeDescriptor_GALGAS_binaryOperationIR.mSlotID,
                                                                 extensionMethod_binaryOperationIR_enterCodeForDivisionWithZeroDivisorPanic) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_binaryOperationIR_enterCodeForDivisionWithZeroDivisorPanic (void) {
  gExtensionMethodTable_binaryOperationIR_enterCodeForDivisionWithZeroDivisorPanic.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_binaryOperationIR_enterCodeForDivisionWithZeroDivisorPanic (defineExtensionMethod_binaryOperationIR_enterCodeForDivisionWithZeroDivisorPanic,
                                                                                       freeExtensionMethod_binaryOperationIR_enterCodeForDivisionWithZeroDivisorPanic) ;

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_storeToUniversalReferenceIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_storeToUniversalReferenceIR * p = (const cPtr_storeToUniversalReferenceIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_storeToUniversalReferenceIR) ;
  if (kOperandEqual == result) {
    result = mProperty_mLLVMTargetVarName.objectCompare (p->mProperty_mLLVMTargetVarName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTargetVarType.objectCompare (p->mProperty_mTargetVarType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSourceValue.objectCompare (p->mProperty_mSourceValue) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_storeToUniversalReferenceIR::objectCompare (const GALGAS_storeToUniversalReferenceIR & inOperand) const {
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

GALGAS_storeToUniversalReferenceIR::GALGAS_storeToUniversalReferenceIR (void) :
GALGAS_abstractInstructionIR () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_storeToUniversalReferenceIR::GALGAS_storeToUniversalReferenceIR (const cPtr_storeToUniversalReferenceIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_storeToUniversalReferenceIR) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_storeToUniversalReferenceIR GALGAS_storeToUniversalReferenceIR::constructor_new (const GALGAS_string & inAttribute_mLLVMTargetVarName,
                                                                                        const GALGAS_PLMType & inAttribute_mTargetVarType,
                                                                                        const GALGAS_objectIR & inAttribute_mSourceValue
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_storeToUniversalReferenceIR result ;
  if (inAttribute_mLLVMTargetVarName.isValid () && inAttribute_mTargetVarType.isValid () && inAttribute_mSourceValue.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_storeToUniversalReferenceIR (inAttribute_mLLVMTargetVarName, inAttribute_mTargetVarType, inAttribute_mSourceValue COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_storeToUniversalReferenceIR::getter_mLLVMTargetVarName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_storeToUniversalReferenceIR * p = (const cPtr_storeToUniversalReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeToUniversalReferenceIR) ;
    result = p->mProperty_mLLVMTargetVarName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_storeToUniversalReferenceIR::getter_mLLVMTargetVarName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLLVMTargetVarName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMType GALGAS_storeToUniversalReferenceIR::getter_mTargetVarType (UNUSED_LOCATION_ARGS) const {
  GALGAS_PLMType result ;
  if (NULL != mObjectPtr) {
    const cPtr_storeToUniversalReferenceIR * p = (const cPtr_storeToUniversalReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeToUniversalReferenceIR) ;
    result = p->mProperty_mTargetVarType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMType cPtr_storeToUniversalReferenceIR::getter_mTargetVarType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTargetVarType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_storeToUniversalReferenceIR::getter_mSourceValue (UNUSED_LOCATION_ARGS) const {
  GALGAS_objectIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_storeToUniversalReferenceIR * p = (const cPtr_storeToUniversalReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeToUniversalReferenceIR) ;
    result = p->mProperty_mSourceValue ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR cPtr_storeToUniversalReferenceIR::getter_mSourceValue (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSourceValue ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                Pointer class for @storeToUniversalReferenceIR class                                 *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_storeToUniversalReferenceIR::cPtr_storeToUniversalReferenceIR (const GALGAS_string & in_mLLVMTargetVarName,
                                                                    const GALGAS_PLMType & in_mTargetVarType,
                                                                    const GALGAS_objectIR & in_mSourceValue
                                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mLLVMTargetVarName (in_mLLVMTargetVarName),
mProperty_mTargetVarType (in_mTargetVarType),
mProperty_mSourceValue (in_mSourceValue) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_storeToUniversalReferenceIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_storeToUniversalReferenceIR ;
}

void cPtr_storeToUniversalReferenceIR::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "[@storeToUniversalReferenceIR:" ;
  mProperty_mLLVMTargetVarName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTargetVarType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSourceValue.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_storeToUniversalReferenceIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_storeToUniversalReferenceIR (mProperty_mLLVMTargetVarName, mProperty_mTargetVarType, mProperty_mSourceValue COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @storeToUniversalReferenceIR type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_storeToUniversalReferenceIR ("storeToUniversalReferenceIR",
                                                    & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_storeToUniversalReferenceIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_storeToUniversalReferenceIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_storeToUniversalReferenceIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_storeToUniversalReferenceIR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_storeToUniversalReferenceIR GALGAS_storeToUniversalReferenceIR::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_storeToUniversalReferenceIR result ;
  const GALGAS_storeToUniversalReferenceIR * p = (const GALGAS_storeToUniversalReferenceIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_storeToUniversalReferenceIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("storeToUniversalReferenceIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_storeIndirectVolatileIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_storeIndirectVolatileIR * p = (const cPtr_storeIndirectVolatileIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_storeIndirectVolatileIR) ;
  if (kOperandEqual == result) {
    result = mProperty_mTargetVarType.objectCompare (p->mProperty_mTargetVarType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLLVMName.objectCompare (p->mProperty_mLLVMName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSourceValue.objectCompare (p->mProperty_mSourceValue) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_storeIndirectVolatileIR::objectCompare (const GALGAS_storeIndirectVolatileIR & inOperand) const {
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

GALGAS_storeIndirectVolatileIR::GALGAS_storeIndirectVolatileIR (void) :
GALGAS_abstractInstructionIR () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_storeIndirectVolatileIR::GALGAS_storeIndirectVolatileIR (const cPtr_storeIndirectVolatileIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_storeIndirectVolatileIR) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_storeIndirectVolatileIR GALGAS_storeIndirectVolatileIR::constructor_new (const GALGAS_PLMType & inAttribute_mTargetVarType,
                                                                                const GALGAS_string & inAttribute_mLLVMName,
                                                                                const GALGAS_objectIR & inAttribute_mSourceValue
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_storeIndirectVolatileIR result ;
  if (inAttribute_mTargetVarType.isValid () && inAttribute_mLLVMName.isValid () && inAttribute_mSourceValue.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_storeIndirectVolatileIR (inAttribute_mTargetVarType, inAttribute_mLLVMName, inAttribute_mSourceValue COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMType GALGAS_storeIndirectVolatileIR::getter_mTargetVarType (UNUSED_LOCATION_ARGS) const {
  GALGAS_PLMType result ;
  if (NULL != mObjectPtr) {
    const cPtr_storeIndirectVolatileIR * p = (const cPtr_storeIndirectVolatileIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeIndirectVolatileIR) ;
    result = p->mProperty_mTargetVarType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMType cPtr_storeIndirectVolatileIR::getter_mTargetVarType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTargetVarType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_storeIndirectVolatileIR::getter_mLLVMName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_storeIndirectVolatileIR * p = (const cPtr_storeIndirectVolatileIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeIndirectVolatileIR) ;
    result = p->mProperty_mLLVMName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_storeIndirectVolatileIR::getter_mLLVMName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLLVMName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_storeIndirectVolatileIR::getter_mSourceValue (UNUSED_LOCATION_ARGS) const {
  GALGAS_objectIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_storeIndirectVolatileIR * p = (const cPtr_storeIndirectVolatileIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeIndirectVolatileIR) ;
    result = p->mProperty_mSourceValue ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR cPtr_storeIndirectVolatileIR::getter_mSourceValue (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSourceValue ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                  Pointer class for @storeIndirectVolatileIR class                                   *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_storeIndirectVolatileIR::cPtr_storeIndirectVolatileIR (const GALGAS_PLMType & in_mTargetVarType,
                                                            const GALGAS_string & in_mLLVMName,
                                                            const GALGAS_objectIR & in_mSourceValue
                                                            COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mTargetVarType (in_mTargetVarType),
mProperty_mLLVMName (in_mLLVMName),
mProperty_mSourceValue (in_mSourceValue) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_storeIndirectVolatileIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_storeIndirectVolatileIR ;
}

void cPtr_storeIndirectVolatileIR::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "[@storeIndirectVolatileIR:" ;
  mProperty_mTargetVarType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLLVMName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSourceValue.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_storeIndirectVolatileIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_storeIndirectVolatileIR (mProperty_mTargetVarType, mProperty_mLLVMName, mProperty_mSourceValue COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @storeIndirectVolatileIR type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_storeIndirectVolatileIR ("storeIndirectVolatileIR",
                                                & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_storeIndirectVolatileIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_storeIndirectVolatileIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_storeIndirectVolatileIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_storeIndirectVolatileIR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_storeIndirectVolatileIR GALGAS_storeIndirectVolatileIR::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_storeIndirectVolatileIR result ;
  const GALGAS_storeIndirectVolatileIR * p = (const GALGAS_storeIndirectVolatileIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_storeIndirectVolatileIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("storeIndirectVolatileIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_storeVolatileIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_storeVolatileIR * p = (const cPtr_storeVolatileIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_storeVolatileIR) ;
  if (kOperandEqual == result) {
    result = mProperty_mTargetVarType.objectCompare (p->mProperty_mTargetVarType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAddress.objectCompare (p->mProperty_mAddress) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSourceValue.objectCompare (p->mProperty_mSourceValue) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_storeVolatileIR::objectCompare (const GALGAS_storeVolatileIR & inOperand) const {
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

GALGAS_storeVolatileIR::GALGAS_storeVolatileIR (void) :
GALGAS_abstractInstructionIR () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_storeVolatileIR::GALGAS_storeVolatileIR (const cPtr_storeVolatileIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_storeVolatileIR) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_storeVolatileIR GALGAS_storeVolatileIR::constructor_new (const GALGAS_PLMType & inAttribute_mTargetVarType,
                                                                const GALGAS_bigint & inAttribute_mAddress,
                                                                const GALGAS_objectIR & inAttribute_mSourceValue
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_storeVolatileIR result ;
  if (inAttribute_mTargetVarType.isValid () && inAttribute_mAddress.isValid () && inAttribute_mSourceValue.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_storeVolatileIR (inAttribute_mTargetVarType, inAttribute_mAddress, inAttribute_mSourceValue COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMType GALGAS_storeVolatileIR::getter_mTargetVarType (UNUSED_LOCATION_ARGS) const {
  GALGAS_PLMType result ;
  if (NULL != mObjectPtr) {
    const cPtr_storeVolatileIR * p = (const cPtr_storeVolatileIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeVolatileIR) ;
    result = p->mProperty_mTargetVarType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMType cPtr_storeVolatileIR::getter_mTargetVarType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTargetVarType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint GALGAS_storeVolatileIR::getter_mAddress (UNUSED_LOCATION_ARGS) const {
  GALGAS_bigint result ;
  if (NULL != mObjectPtr) {
    const cPtr_storeVolatileIR * p = (const cPtr_storeVolatileIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeVolatileIR) ;
    result = p->mProperty_mAddress ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint cPtr_storeVolatileIR::getter_mAddress (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAddress ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_storeVolatileIR::getter_mSourceValue (UNUSED_LOCATION_ARGS) const {
  GALGAS_objectIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_storeVolatileIR * p = (const cPtr_storeVolatileIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeVolatileIR) ;
    result = p->mProperty_mSourceValue ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR cPtr_storeVolatileIR::getter_mSourceValue (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSourceValue ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                      Pointer class for @storeVolatileIR class                                       *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_storeVolatileIR::cPtr_storeVolatileIR (const GALGAS_PLMType & in_mTargetVarType,
                                            const GALGAS_bigint & in_mAddress,
                                            const GALGAS_objectIR & in_mSourceValue
                                            COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mTargetVarType (in_mTargetVarType),
mProperty_mAddress (in_mAddress),
mProperty_mSourceValue (in_mSourceValue) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_storeVolatileIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_storeVolatileIR ;
}

void cPtr_storeVolatileIR::description (C_String & ioString,
                                        const int32_t inIndentation) const {
  ioString << "[@storeVolatileIR:" ;
  mProperty_mTargetVarType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mAddress.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSourceValue.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_storeVolatileIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_storeVolatileIR (mProperty_mTargetVarType, mProperty_mAddress, mProperty_mSourceValue COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @storeVolatileIR type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_storeVolatileIR ("storeVolatileIR",
                                        & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_storeVolatileIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_storeVolatileIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_storeVolatileIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_storeVolatileIR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_storeVolatileIR GALGAS_storeVolatileIR::extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_storeVolatileIR result ;
  const GALGAS_storeVolatileIR * p = (const GALGAS_storeVolatileIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_storeVolatileIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("storeVolatileIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_storeLocalVariableIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_storeLocalVariableIR * p = (const cPtr_storeLocalVariableIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_storeLocalVariableIR) ;
  if (kOperandEqual == result) {
    result = mProperty_mLocalVarName.objectCompare (p->mProperty_mLocalVarName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTargetVarType.objectCompare (p->mProperty_mTargetVarType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSourceValue.objectCompare (p->mProperty_mSourceValue) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_storeLocalVariableIR::objectCompare (const GALGAS_storeLocalVariableIR & inOperand) const {
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

GALGAS_storeLocalVariableIR::GALGAS_storeLocalVariableIR (void) :
GALGAS_abstractInstructionIR () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_storeLocalVariableIR::GALGAS_storeLocalVariableIR (const cPtr_storeLocalVariableIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_storeLocalVariableIR) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_storeLocalVariableIR GALGAS_storeLocalVariableIR::constructor_new (const GALGAS_string & inAttribute_mLocalVarName,
                                                                          const GALGAS_PLMType & inAttribute_mTargetVarType,
                                                                          const GALGAS_objectIR & inAttribute_mSourceValue
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_storeLocalVariableIR result ;
  if (inAttribute_mLocalVarName.isValid () && inAttribute_mTargetVarType.isValid () && inAttribute_mSourceValue.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_storeLocalVariableIR (inAttribute_mLocalVarName, inAttribute_mTargetVarType, inAttribute_mSourceValue COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_storeLocalVariableIR::getter_mLocalVarName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_storeLocalVariableIR * p = (const cPtr_storeLocalVariableIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeLocalVariableIR) ;
    result = p->mProperty_mLocalVarName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_storeLocalVariableIR::getter_mLocalVarName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLocalVarName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMType GALGAS_storeLocalVariableIR::getter_mTargetVarType (UNUSED_LOCATION_ARGS) const {
  GALGAS_PLMType result ;
  if (NULL != mObjectPtr) {
    const cPtr_storeLocalVariableIR * p = (const cPtr_storeLocalVariableIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeLocalVariableIR) ;
    result = p->mProperty_mTargetVarType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMType cPtr_storeLocalVariableIR::getter_mTargetVarType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTargetVarType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_storeLocalVariableIR::getter_mSourceValue (UNUSED_LOCATION_ARGS) const {
  GALGAS_objectIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_storeLocalVariableIR * p = (const cPtr_storeLocalVariableIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeLocalVariableIR) ;
    result = p->mProperty_mSourceValue ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR cPtr_storeLocalVariableIR::getter_mSourceValue (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSourceValue ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                    Pointer class for @storeLocalVariableIR class                                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_storeLocalVariableIR::cPtr_storeLocalVariableIR (const GALGAS_string & in_mLocalVarName,
                                                      const GALGAS_PLMType & in_mTargetVarType,
                                                      const GALGAS_objectIR & in_mSourceValue
                                                      COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mLocalVarName (in_mLocalVarName),
mProperty_mTargetVarType (in_mTargetVarType),
mProperty_mSourceValue (in_mSourceValue) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_storeLocalVariableIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_storeLocalVariableIR ;
}

void cPtr_storeLocalVariableIR::description (C_String & ioString,
                                             const int32_t inIndentation) const {
  ioString << "[@storeLocalVariableIR:" ;
  mProperty_mLocalVarName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTargetVarType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSourceValue.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_storeLocalVariableIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_storeLocalVariableIR (mProperty_mLocalVarName, mProperty_mTargetVarType, mProperty_mSourceValue COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @storeLocalVariableIR type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_storeLocalVariableIR ("storeLocalVariableIR",
                                             & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_storeLocalVariableIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_storeLocalVariableIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_storeLocalVariableIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_storeLocalVariableIR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_storeLocalVariableIR GALGAS_storeLocalVariableIR::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_storeLocalVariableIR result ;
  const GALGAS_storeLocalVariableIR * p = (const GALGAS_storeLocalVariableIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_storeLocalVariableIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("storeLocalVariableIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_storeFromTemporaryReferenceIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_storeFromTemporaryReferenceIR * p = (const cPtr_storeFromTemporaryReferenceIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_storeFromTemporaryReferenceIR) ;
  if (kOperandEqual == result) {
    result = mProperty_mTargetVarType.objectCompare (p->mProperty_mTargetVarType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLLVMName.objectCompare (p->mProperty_mLLVMName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSourceValue.objectCompare (p->mProperty_mSourceValue) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_storeFromTemporaryReferenceIR::objectCompare (const GALGAS_storeFromTemporaryReferenceIR & inOperand) const {
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

GALGAS_storeFromTemporaryReferenceIR::GALGAS_storeFromTemporaryReferenceIR (void) :
GALGAS_abstractInstructionIR () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_storeFromTemporaryReferenceIR::GALGAS_storeFromTemporaryReferenceIR (const cPtr_storeFromTemporaryReferenceIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_storeFromTemporaryReferenceIR) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_storeFromTemporaryReferenceIR GALGAS_storeFromTemporaryReferenceIR::constructor_new (const GALGAS_PLMType & inAttribute_mTargetVarType,
                                                                                            const GALGAS_string & inAttribute_mLLVMName,
                                                                                            const GALGAS_objectIR & inAttribute_mSourceValue
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_storeFromTemporaryReferenceIR result ;
  if (inAttribute_mTargetVarType.isValid () && inAttribute_mLLVMName.isValid () && inAttribute_mSourceValue.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_storeFromTemporaryReferenceIR (inAttribute_mTargetVarType, inAttribute_mLLVMName, inAttribute_mSourceValue COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMType GALGAS_storeFromTemporaryReferenceIR::getter_mTargetVarType (UNUSED_LOCATION_ARGS) const {
  GALGAS_PLMType result ;
  if (NULL != mObjectPtr) {
    const cPtr_storeFromTemporaryReferenceIR * p = (const cPtr_storeFromTemporaryReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeFromTemporaryReferenceIR) ;
    result = p->mProperty_mTargetVarType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMType cPtr_storeFromTemporaryReferenceIR::getter_mTargetVarType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTargetVarType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_storeFromTemporaryReferenceIR::getter_mLLVMName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_storeFromTemporaryReferenceIR * p = (const cPtr_storeFromTemporaryReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeFromTemporaryReferenceIR) ;
    result = p->mProperty_mLLVMName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_storeFromTemporaryReferenceIR::getter_mLLVMName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLLVMName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_storeFromTemporaryReferenceIR::getter_mSourceValue (UNUSED_LOCATION_ARGS) const {
  GALGAS_objectIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_storeFromTemporaryReferenceIR * p = (const cPtr_storeFromTemporaryReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeFromTemporaryReferenceIR) ;
    result = p->mProperty_mSourceValue ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR cPtr_storeFromTemporaryReferenceIR::getter_mSourceValue (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSourceValue ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                               Pointer class for @storeFromTemporaryReferenceIR class                                *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_storeFromTemporaryReferenceIR::cPtr_storeFromTemporaryReferenceIR (const GALGAS_PLMType & in_mTargetVarType,
                                                                        const GALGAS_string & in_mLLVMName,
                                                                        const GALGAS_objectIR & in_mSourceValue
                                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mTargetVarType (in_mTargetVarType),
mProperty_mLLVMName (in_mLLVMName),
mProperty_mSourceValue (in_mSourceValue) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_storeFromTemporaryReferenceIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_storeFromTemporaryReferenceIR ;
}

void cPtr_storeFromTemporaryReferenceIR::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "[@storeFromTemporaryReferenceIR:" ;
  mProperty_mTargetVarType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLLVMName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSourceValue.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_storeFromTemporaryReferenceIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_storeFromTemporaryReferenceIR (mProperty_mTargetVarType, mProperty_mLLVMName, mProperty_mSourceValue COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @storeFromTemporaryReferenceIR type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_storeFromTemporaryReferenceIR ("storeFromTemporaryReferenceIR",
                                                      & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_storeFromTemporaryReferenceIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_storeFromTemporaryReferenceIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_storeFromTemporaryReferenceIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_storeFromTemporaryReferenceIR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_storeFromTemporaryReferenceIR GALGAS_storeFromTemporaryReferenceIR::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_storeFromTemporaryReferenceIR result ;
  const GALGAS_storeFromTemporaryReferenceIR * p = (const GALGAS_storeFromTemporaryReferenceIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_storeFromTemporaryReferenceIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("storeFromTemporaryReferenceIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_staticRoutineCallIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_staticRoutineCallIR * p = (const cPtr_staticRoutineCallIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_staticRoutineCallIR) ;
  if (kOperandEqual == result) {
    result = mProperty_mGlobalVariableName.objectCompare (p->mProperty_mGlobalVariableName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mResult.objectCompare (p->mProperty_mResult) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mFunctionMangledName.objectCompare (p->mProperty_mFunctionMangledName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mFunctionNameForGeneration.objectCompare (p->mProperty_mFunctionNameForGeneration) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mKind.objectCompare (p->mProperty_mKind) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mArgumentList.objectCompare (p->mProperty_mArgumentList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_staticRoutineCallIR::objectCompare (const GALGAS_staticRoutineCallIR & inOperand) const {
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

GALGAS_staticRoutineCallIR::GALGAS_staticRoutineCallIR (void) :
GALGAS_abstractInstructionIR () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticRoutineCallIR::GALGAS_staticRoutineCallIR (const cPtr_staticRoutineCallIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_staticRoutineCallIR) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticRoutineCallIR GALGAS_staticRoutineCallIR::constructor_new (const GALGAS_string & inAttribute_mGlobalVariableName,
                                                                        const GALGAS_objectIR & inAttribute_mResult,
                                                                        const GALGAS_lstring & inAttribute_mFunctionMangledName,
                                                                        const GALGAS_lstring & inAttribute_mFunctionNameForGeneration,
                                                                        const GALGAS_calleeKindIR & inAttribute_mKind,
                                                                        const GALGAS_procCallEffectiveParameterListIR & inAttribute_mArgumentList
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_staticRoutineCallIR result ;
  if (inAttribute_mGlobalVariableName.isValid () && inAttribute_mResult.isValid () && inAttribute_mFunctionMangledName.isValid () && inAttribute_mFunctionNameForGeneration.isValid () && inAttribute_mKind.isValid () && inAttribute_mArgumentList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_staticRoutineCallIR (inAttribute_mGlobalVariableName, inAttribute_mResult, inAttribute_mFunctionMangledName, inAttribute_mFunctionNameForGeneration, inAttribute_mKind, inAttribute_mArgumentList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_staticRoutineCallIR::getter_mGlobalVariableName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_staticRoutineCallIR * p = (const cPtr_staticRoutineCallIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_staticRoutineCallIR) ;
    result = p->mProperty_mGlobalVariableName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_staticRoutineCallIR::getter_mGlobalVariableName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGlobalVariableName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_staticRoutineCallIR::getter_mResult (UNUSED_LOCATION_ARGS) const {
  GALGAS_objectIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_staticRoutineCallIR * p = (const cPtr_staticRoutineCallIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_staticRoutineCallIR) ;
    result = p->mProperty_mResult ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR cPtr_staticRoutineCallIR::getter_mResult (UNUSED_LOCATION_ARGS) const {
  return mProperty_mResult ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_staticRoutineCallIR::getter_mFunctionMangledName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_staticRoutineCallIR * p = (const cPtr_staticRoutineCallIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_staticRoutineCallIR) ;
    result = p->mProperty_mFunctionMangledName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_staticRoutineCallIR::getter_mFunctionMangledName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFunctionMangledName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_staticRoutineCallIR::getter_mFunctionNameForGeneration (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_staticRoutineCallIR * p = (const cPtr_staticRoutineCallIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_staticRoutineCallIR) ;
    result = p->mProperty_mFunctionNameForGeneration ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_staticRoutineCallIR::getter_mFunctionNameForGeneration (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFunctionNameForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_calleeKindIR GALGAS_staticRoutineCallIR::getter_mKind (UNUSED_LOCATION_ARGS) const {
  GALGAS_calleeKindIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_staticRoutineCallIR * p = (const cPtr_staticRoutineCallIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_staticRoutineCallIR) ;
    result = p->mProperty_mKind ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_calleeKindIR cPtr_staticRoutineCallIR::getter_mKind (UNUSED_LOCATION_ARGS) const {
  return mProperty_mKind ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procCallEffectiveParameterListIR GALGAS_staticRoutineCallIR::getter_mArgumentList (UNUSED_LOCATION_ARGS) const {
  GALGAS_procCallEffectiveParameterListIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_staticRoutineCallIR * p = (const cPtr_staticRoutineCallIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_staticRoutineCallIR) ;
    result = p->mProperty_mArgumentList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procCallEffectiveParameterListIR cPtr_staticRoutineCallIR::getter_mArgumentList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mArgumentList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                    Pointer class for @staticRoutineCallIR class                                     *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_staticRoutineCallIR::cPtr_staticRoutineCallIR (const GALGAS_string & in_mGlobalVariableName,
                                                    const GALGAS_objectIR & in_mResult,
                                                    const GALGAS_lstring & in_mFunctionMangledName,
                                                    const GALGAS_lstring & in_mFunctionNameForGeneration,
                                                    const GALGAS_calleeKindIR & in_mKind,
                                                    const GALGAS_procCallEffectiveParameterListIR & in_mArgumentList
                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mGlobalVariableName (in_mGlobalVariableName),
mProperty_mResult (in_mResult),
mProperty_mFunctionMangledName (in_mFunctionMangledName),
mProperty_mFunctionNameForGeneration (in_mFunctionNameForGeneration),
mProperty_mKind (in_mKind),
mProperty_mArgumentList (in_mArgumentList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_staticRoutineCallIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_staticRoutineCallIR ;
}

void cPtr_staticRoutineCallIR::description (C_String & ioString,
                                            const int32_t inIndentation) const {
  ioString << "[@staticRoutineCallIR:" ;
  mProperty_mGlobalVariableName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mResult.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mFunctionMangledName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mFunctionNameForGeneration.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mKind.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mArgumentList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_staticRoutineCallIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_staticRoutineCallIR (mProperty_mGlobalVariableName, mProperty_mResult, mProperty_mFunctionMangledName, mProperty_mFunctionNameForGeneration, mProperty_mKind, mProperty_mArgumentList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @staticRoutineCallIR type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_staticRoutineCallIR ("staticRoutineCallIR",
                                            & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_staticRoutineCallIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_staticRoutineCallIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_staticRoutineCallIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_staticRoutineCallIR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticRoutineCallIR GALGAS_staticRoutineCallIR::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_staticRoutineCallIR result ;
  const GALGAS_staticRoutineCallIR * p = (const GALGAS_staticRoutineCallIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_staticRoutineCallIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("staticRoutineCallIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_indirectRoutineCallIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_indirectRoutineCallIR * p = (const cPtr_indirectRoutineCallIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_indirectRoutineCallIR) ;
  if (kOperandEqual == result) {
    result = mProperty_mFunctionPointer.objectCompare (p->mProperty_mFunctionPointer) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mFunctionType.objectCompare (p->mProperty_mFunctionType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mResult.objectCompare (p->mProperty_mResult) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mArgumentList.objectCompare (p->mProperty_mArgumentList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_indirectRoutineCallIR::objectCompare (const GALGAS_indirectRoutineCallIR & inOperand) const {
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

GALGAS_indirectRoutineCallIR::GALGAS_indirectRoutineCallIR (void) :
GALGAS_abstractInstructionIR () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_indirectRoutineCallIR::GALGAS_indirectRoutineCallIR (const cPtr_indirectRoutineCallIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_indirectRoutineCallIR) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_indirectRoutineCallIR GALGAS_indirectRoutineCallIR::constructor_new (const GALGAS_objectIR & inAttribute_mFunctionPointer,
                                                                            const GALGAS_PLMType & inAttribute_mFunctionType,
                                                                            const GALGAS_objectIR & inAttribute_mResult,
                                                                            const GALGAS_procCallEffectiveParameterListIR & inAttribute_mArgumentList
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_indirectRoutineCallIR result ;
  if (inAttribute_mFunctionPointer.isValid () && inAttribute_mFunctionType.isValid () && inAttribute_mResult.isValid () && inAttribute_mArgumentList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_indirectRoutineCallIR (inAttribute_mFunctionPointer, inAttribute_mFunctionType, inAttribute_mResult, inAttribute_mArgumentList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_indirectRoutineCallIR::getter_mFunctionPointer (UNUSED_LOCATION_ARGS) const {
  GALGAS_objectIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_indirectRoutineCallIR * p = (const cPtr_indirectRoutineCallIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_indirectRoutineCallIR) ;
    result = p->mProperty_mFunctionPointer ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR cPtr_indirectRoutineCallIR::getter_mFunctionPointer (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFunctionPointer ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMType GALGAS_indirectRoutineCallIR::getter_mFunctionType (UNUSED_LOCATION_ARGS) const {
  GALGAS_PLMType result ;
  if (NULL != mObjectPtr) {
    const cPtr_indirectRoutineCallIR * p = (const cPtr_indirectRoutineCallIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_indirectRoutineCallIR) ;
    result = p->mProperty_mFunctionType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMType cPtr_indirectRoutineCallIR::getter_mFunctionType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFunctionType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_indirectRoutineCallIR::getter_mResult (UNUSED_LOCATION_ARGS) const {
  GALGAS_objectIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_indirectRoutineCallIR * p = (const cPtr_indirectRoutineCallIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_indirectRoutineCallIR) ;
    result = p->mProperty_mResult ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR cPtr_indirectRoutineCallIR::getter_mResult (UNUSED_LOCATION_ARGS) const {
  return mProperty_mResult ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procCallEffectiveParameterListIR GALGAS_indirectRoutineCallIR::getter_mArgumentList (UNUSED_LOCATION_ARGS) const {
  GALGAS_procCallEffectiveParameterListIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_indirectRoutineCallIR * p = (const cPtr_indirectRoutineCallIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_indirectRoutineCallIR) ;
    result = p->mProperty_mArgumentList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procCallEffectiveParameterListIR cPtr_indirectRoutineCallIR::getter_mArgumentList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mArgumentList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                   Pointer class for @indirectRoutineCallIR class                                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_indirectRoutineCallIR::cPtr_indirectRoutineCallIR (const GALGAS_objectIR & in_mFunctionPointer,
                                                        const GALGAS_PLMType & in_mFunctionType,
                                                        const GALGAS_objectIR & in_mResult,
                                                        const GALGAS_procCallEffectiveParameterListIR & in_mArgumentList
                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mFunctionPointer (in_mFunctionPointer),
mProperty_mFunctionType (in_mFunctionType),
mProperty_mResult (in_mResult),
mProperty_mArgumentList (in_mArgumentList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_indirectRoutineCallIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_indirectRoutineCallIR ;
}

void cPtr_indirectRoutineCallIR::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "[@indirectRoutineCallIR:" ;
  mProperty_mFunctionPointer.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mFunctionType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mResult.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mArgumentList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_indirectRoutineCallIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_indirectRoutineCallIR (mProperty_mFunctionPointer, mProperty_mFunctionType, mProperty_mResult, mProperty_mArgumentList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @indirectRoutineCallIR type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_indirectRoutineCallIR ("indirectRoutineCallIR",
                                              & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_indirectRoutineCallIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_indirectRoutineCallIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_indirectRoutineCallIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_indirectRoutineCallIR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_indirectRoutineCallIR GALGAS_indirectRoutineCallIR::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_indirectRoutineCallIR result ;
  const GALGAS_indirectRoutineCallIR * p = (const GALGAS_indirectRoutineCallIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_indirectRoutineCallIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("indirectRoutineCallIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_copyFromReferencesIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_copyFromReferencesIR * p = (const cPtr_copyFromReferencesIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_copyFromReferencesIR) ;
  if (kOperandEqual == result) {
    result = mProperty_mType.objectCompare (p->mProperty_mType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTargetLLVMName.objectCompare (p->mProperty_mTargetLLVMName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSourceLLVMName.objectCompare (p->mProperty_mSourceLLVMName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_copyFromReferencesIR::objectCompare (const GALGAS_copyFromReferencesIR & inOperand) const {
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

GALGAS_copyFromReferencesIR::GALGAS_copyFromReferencesIR (void) :
GALGAS_abstractInstructionIR () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_copyFromReferencesIR::GALGAS_copyFromReferencesIR (const cPtr_copyFromReferencesIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_copyFromReferencesIR) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_copyFromReferencesIR GALGAS_copyFromReferencesIR::constructor_new (const GALGAS_PLMType & inAttribute_mType,
                                                                          const GALGAS_string & inAttribute_mTargetLLVMName,
                                                                          const GALGAS_string & inAttribute_mSourceLLVMName
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_copyFromReferencesIR result ;
  if (inAttribute_mType.isValid () && inAttribute_mTargetLLVMName.isValid () && inAttribute_mSourceLLVMName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_copyFromReferencesIR (inAttribute_mType, inAttribute_mTargetLLVMName, inAttribute_mSourceLLVMName COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMType GALGAS_copyFromReferencesIR::getter_mType (UNUSED_LOCATION_ARGS) const {
  GALGAS_PLMType result ;
  if (NULL != mObjectPtr) {
    const cPtr_copyFromReferencesIR * p = (const cPtr_copyFromReferencesIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_copyFromReferencesIR) ;
    result = p->mProperty_mType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMType cPtr_copyFromReferencesIR::getter_mType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_copyFromReferencesIR::getter_mTargetLLVMName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_copyFromReferencesIR * p = (const cPtr_copyFromReferencesIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_copyFromReferencesIR) ;
    result = p->mProperty_mTargetLLVMName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_copyFromReferencesIR::getter_mTargetLLVMName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTargetLLVMName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_copyFromReferencesIR::getter_mSourceLLVMName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_copyFromReferencesIR * p = (const cPtr_copyFromReferencesIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_copyFromReferencesIR) ;
    result = p->mProperty_mSourceLLVMName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_copyFromReferencesIR::getter_mSourceLLVMName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSourceLLVMName ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                    Pointer class for @copyFromReferencesIR class                                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_copyFromReferencesIR::cPtr_copyFromReferencesIR (const GALGAS_PLMType & in_mType,
                                                      const GALGAS_string & in_mTargetLLVMName,
                                                      const GALGAS_string & in_mSourceLLVMName
                                                      COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mType (in_mType),
mProperty_mTargetLLVMName (in_mTargetLLVMName),
mProperty_mSourceLLVMName (in_mSourceLLVMName) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_copyFromReferencesIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_copyFromReferencesIR ;
}

void cPtr_copyFromReferencesIR::description (C_String & ioString,
                                             const int32_t inIndentation) const {
  ioString << "[@copyFromReferencesIR:" ;
  mProperty_mType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTargetLLVMName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSourceLLVMName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_copyFromReferencesIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_copyFromReferencesIR (mProperty_mType, mProperty_mTargetLLVMName, mProperty_mSourceLLVMName COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @copyFromReferencesIR type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_copyFromReferencesIR ("copyFromReferencesIR",
                                             & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_copyFromReferencesIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_copyFromReferencesIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_copyFromReferencesIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_copyFromReferencesIR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_copyFromReferencesIR GALGAS_copyFromReferencesIR::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_copyFromReferencesIR result ;
  const GALGAS_copyFromReferencesIR * p = (const GALGAS_copyFromReferencesIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_copyFromReferencesIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("copyFromReferencesIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Extension method '@PLMType generateCopyRoutine'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_generateCopyRoutine (const GALGAS_PLMType inObject,
                                          GALGAS_string & ioArgument_ioLLVMCode,
                                          C_Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  const enumGalgasBool test_0 = inObject.mProperty_mAttributes.getter_generateAssignmentRoutine (SOURCE_FILE ("intermediate-copy-from-references.galgas", 77)).boolEnum () ;
  if (kBoolTrue == test_0) {
    const GALGAS_PLMType temp_1 = inObject ;
    GALGAS_string var_typeName_3270 = extensionGetter_llvmTypeName (temp_1, inCompiler COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 78)) ;
    ioArgument_ioLLVMCode.plusAssign_operation(function_llvmSeparatorLine (inCompiler COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 79)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 79)), inCompiler  COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 79)) ;
    const GALGAS_PLMType temp_2 = inObject ;
    ioArgument_ioLLVMCode.plusAssign_operation(GALGAS_string ("define internal void @plm.assign.").add_operation (temp_2.getter_mPLMTypeName (HERE).getter_identifierRepresentation (SOURCE_FILE ("intermediate-copy-from-references.galgas", 80)), inCompiler COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 80)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 80)).add_operation (var_typeName_3270, inCompiler COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 81)).add_operation (GALGAS_string (" * %inTarget, "), inCompiler COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 81)).add_operation (var_typeName_3270, inCompiler COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 81)).add_operation (GALGAS_string ("* %inSource) nounwind optsize {\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 81)), inCompiler  COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 80)) ;
    ioArgument_ioLLVMCode.plusAssign_operation(GALGAS_string ("entry:\n"), inCompiler  COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 82)) ;
    ioArgument_ioLLVMCode.plusAssign_operation(GALGAS_string ("  %sizeAsPtr = getelementptr inbounds ").add_operation (var_typeName_3270, inCompiler COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 83)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 83)).add_operation (var_typeName_3270, inCompiler COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 83)).add_operation (GALGAS_string ("* null, i32 1\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 83)), inCompiler  COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 83)) ;
    ioArgument_ioLLVMCode.plusAssign_operation(GALGAS_string ("  %size = ptrtoint ").add_operation (var_typeName_3270, inCompiler COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 84)).add_operation (GALGAS_string ("* %sizeAsPtr to i32\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 84)), inCompiler  COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 84)) ;
    ioArgument_ioLLVMCode.plusAssign_operation(GALGAS_string ("  %useLoadStore = icmp ule i32 %size, 12\n"), inCompiler  COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 85)) ;
    ioArgument_ioLLVMCode.plusAssign_operation(GALGAS_string ("  br i1 %useLoadStore, label %loadStore, label %copyBytesOrCopyWords\n"), inCompiler  COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 86)) ;
    ioArgument_ioLLVMCode.plusAssign_operation(GALGAS_string ("loadStore: ; Perform copy using load - store\n"), inCompiler  COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 87)) ;
    ioArgument_ioLLVMCode.plusAssign_operation(GALGAS_string ("  %v = load ").add_operation (var_typeName_3270, inCompiler COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 88)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 88)).add_operation (var_typeName_3270, inCompiler COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 88)).add_operation (GALGAS_string ("* %inSource\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 88)), inCompiler  COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 88)) ;
    ioArgument_ioLLVMCode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_typeName_3270, inCompiler COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 89)).add_operation (GALGAS_string (" %v, "), inCompiler COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 89)).add_operation (var_typeName_3270, inCompiler COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 89)).add_operation (GALGAS_string ("* %inTarget\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 89)), inCompiler  COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 89)) ;
    ioArgument_ioLLVMCode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 90)) ;
    ioArgument_ioLLVMCode.plusAssign_operation(GALGAS_string ("copyBytesOrCopyWords:\n"), inCompiler  COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 91)) ;
    ioArgument_ioLLVMCode.plusAssign_operation(GALGAS_string ("  %sizeAnd3 = and i32 %size, 3\n"), inCompiler  COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 92)) ;
    ioArgument_ioLLVMCode.plusAssign_operation(GALGAS_string ("  %sizeIsMutipleOf4 = icmp eq i32 %sizeAnd3, 0\n"), inCompiler  COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 93)) ;
    ioArgument_ioLLVMCode.plusAssign_operation(GALGAS_string ("  br i1 %sizeIsMutipleOf4, label %testTarget, label %copyBytes\n"), inCompiler  COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 94)) ;
    ioArgument_ioLLVMCode.plusAssign_operation(GALGAS_string ("testTarget:\n"), inCompiler  COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 95)) ;
    ioArgument_ioLLVMCode.plusAssign_operation(GALGAS_string ("  %targetAsUnsigned = ptrtoint ").add_operation (var_typeName_3270, inCompiler COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 96)).add_operation (GALGAS_string ("* %inTarget to i32\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 96)), inCompiler  COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 96)) ;
    ioArgument_ioLLVMCode.plusAssign_operation(GALGAS_string ("  %targetAsUnsignedAnd3 = and i32 %targetAsUnsigned, 3\n"), inCompiler  COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 97)) ;
    ioArgument_ioLLVMCode.plusAssign_operation(GALGAS_string ("  %targetAsUnsignedIsMutipleOf4 = icmp eq  i32%targetAsUnsignedAnd3, 0\n"), inCompiler  COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 98)) ;
    ioArgument_ioLLVMCode.plusAssign_operation(GALGAS_string ("  br i1 %targetAsUnsignedIsMutipleOf4, label %testSource, label %copyBytes\n"), inCompiler  COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 99)) ;
    ioArgument_ioLLVMCode.plusAssign_operation(GALGAS_string ("testSource:\n"), inCompiler  COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 100)) ;
    ioArgument_ioLLVMCode.plusAssign_operation(GALGAS_string ("  %sourceAsUnsigned = ptrtoint ").add_operation (var_typeName_3270, inCompiler COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 101)).add_operation (GALGAS_string ("* %inSource to i32\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 101)), inCompiler  COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 101)) ;
    ioArgument_ioLLVMCode.plusAssign_operation(GALGAS_string ("  %sourceAsUnsignedAnd3 = and i32 %sourceAsUnsigned, 3\n"), inCompiler  COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 102)) ;
    ioArgument_ioLLVMCode.plusAssign_operation(GALGAS_string ("  %sourceAsUnsignedIsMutipleOf4 = icmp eq i32 %sourceAsUnsignedAnd3, 0\n"), inCompiler  COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 103)) ;
    ioArgument_ioLLVMCode.plusAssign_operation(GALGAS_string ("  br i1 %targetAsUnsignedIsMutipleOf4, label %copyWords, label %copyBytes\n"), inCompiler  COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 104)) ;
    ioArgument_ioLLVMCode.plusAssign_operation(GALGAS_string ("copyWords:\n"), inCompiler  COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 105)) ;
    ioArgument_ioLLVMCode.plusAssign_operation(GALGAS_string ("  %target32 = bitcast ").add_operation (var_typeName_3270, inCompiler COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 106)).add_operation (GALGAS_string ("* %inTarget to i32*\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 106)), inCompiler  COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 106)) ;
    ioArgument_ioLLVMCode.plusAssign_operation(GALGAS_string ("  %source32 = bitcast ").add_operation (var_typeName_3270, inCompiler COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 107)).add_operation (GALGAS_string ("* %inSource to i32*\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 107)), inCompiler  COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 107)) ;
    ioArgument_ioLLVMCode.plusAssign_operation(GALGAS_string ("  %wordCount = udiv i32 %size, 4\n"), inCompiler  COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 108)) ;
    ioArgument_ioLLVMCode.plusAssign_operation(GALGAS_string ("  call void @copy.word.array (i32* %target32, i32* %source32, i32 %wordCount)\n"), inCompiler  COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 109)) ;
    ioArgument_ioLLVMCode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 110)) ;
    ioArgument_ioLLVMCode.plusAssign_operation(GALGAS_string ("copyBytes:\n"), inCompiler  COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 111)) ;
    ioArgument_ioLLVMCode.plusAssign_operation(GALGAS_string ("  %target8 = bitcast ").add_operation (var_typeName_3270, inCompiler COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 112)).add_operation (GALGAS_string ("* %inTarget to i8*\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 112)), inCompiler  COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 112)) ;
    ioArgument_ioLLVMCode.plusAssign_operation(GALGAS_string ("  %source8 = bitcast ").add_operation (var_typeName_3270, inCompiler COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 113)).add_operation (GALGAS_string ("* %inSource to i8*\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 113)), inCompiler  COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 113)) ;
    ioArgument_ioLLVMCode.plusAssign_operation(GALGAS_string ("  call void @copy.byte.array (i8* %target8, i8* %source8, i32 %size)\n"), inCompiler  COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 114)) ;
    ioArgument_ioLLVMCode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 115)) ;
    ioArgument_ioLLVMCode.plusAssign_operation(GALGAS_string ("}\n"
      "\n"), inCompiler  COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 116)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_getUniversalPropertyReferenceIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_getUniversalPropertyReferenceIR * p = (const cPtr_getUniversalPropertyReferenceIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_getUniversalPropertyReferenceIR) ;
  if (kOperandEqual == result) {
    result = mProperty_mType.objectCompare (p->mProperty_mType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLLVMName.objectCompare (p->mProperty_mLLVMName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mElementType.objectCompare (p->mProperty_mElementType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mElementLLVMName.objectCompare (p->mProperty_mElementLLVMName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPropertyIndex.objectCompare (p->mProperty_mPropertyIndex) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPropertyName.objectCompare (p->mProperty_mPropertyName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_getUniversalPropertyReferenceIR::objectCompare (const GALGAS_getUniversalPropertyReferenceIR & inOperand) const {
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

GALGAS_getUniversalPropertyReferenceIR::GALGAS_getUniversalPropertyReferenceIR (void) :
GALGAS_abstractInstructionIR () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_getUniversalPropertyReferenceIR::GALGAS_getUniversalPropertyReferenceIR (const cPtr_getUniversalPropertyReferenceIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_getUniversalPropertyReferenceIR) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_getUniversalPropertyReferenceIR GALGAS_getUniversalPropertyReferenceIR::constructor_new (const GALGAS_PLMType & inAttribute_mType,
                                                                                                const GALGAS_string & inAttribute_mLLVMName,
                                                                                                const GALGAS_PLMType & inAttribute_mElementType,
                                                                                                const GALGAS_string & inAttribute_mElementLLVMName,
                                                                                                const GALGAS_uint & inAttribute_mPropertyIndex,
                                                                                                const GALGAS_string & inAttribute_mPropertyName
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_getUniversalPropertyReferenceIR result ;
  if (inAttribute_mType.isValid () && inAttribute_mLLVMName.isValid () && inAttribute_mElementType.isValid () && inAttribute_mElementLLVMName.isValid () && inAttribute_mPropertyIndex.isValid () && inAttribute_mPropertyName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_getUniversalPropertyReferenceIR (inAttribute_mType, inAttribute_mLLVMName, inAttribute_mElementType, inAttribute_mElementLLVMName, inAttribute_mPropertyIndex, inAttribute_mPropertyName COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMType GALGAS_getUniversalPropertyReferenceIR::getter_mType (UNUSED_LOCATION_ARGS) const {
  GALGAS_PLMType result ;
  if (NULL != mObjectPtr) {
    const cPtr_getUniversalPropertyReferenceIR * p = (const cPtr_getUniversalPropertyReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getUniversalPropertyReferenceIR) ;
    result = p->mProperty_mType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMType cPtr_getUniversalPropertyReferenceIR::getter_mType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_getUniversalPropertyReferenceIR::getter_mLLVMName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_getUniversalPropertyReferenceIR * p = (const cPtr_getUniversalPropertyReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getUniversalPropertyReferenceIR) ;
    result = p->mProperty_mLLVMName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_getUniversalPropertyReferenceIR::getter_mLLVMName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLLVMName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMType GALGAS_getUniversalPropertyReferenceIR::getter_mElementType (UNUSED_LOCATION_ARGS) const {
  GALGAS_PLMType result ;
  if (NULL != mObjectPtr) {
    const cPtr_getUniversalPropertyReferenceIR * p = (const cPtr_getUniversalPropertyReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getUniversalPropertyReferenceIR) ;
    result = p->mProperty_mElementType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMType cPtr_getUniversalPropertyReferenceIR::getter_mElementType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mElementType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_getUniversalPropertyReferenceIR::getter_mElementLLVMName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_getUniversalPropertyReferenceIR * p = (const cPtr_getUniversalPropertyReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getUniversalPropertyReferenceIR) ;
    result = p->mProperty_mElementLLVMName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_getUniversalPropertyReferenceIR::getter_mElementLLVMName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mElementLLVMName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_getUniversalPropertyReferenceIR::getter_mPropertyIndex (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_getUniversalPropertyReferenceIR * p = (const cPtr_getUniversalPropertyReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getUniversalPropertyReferenceIR) ;
    result = p->mProperty_mPropertyIndex ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cPtr_getUniversalPropertyReferenceIR::getter_mPropertyIndex (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPropertyIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_getUniversalPropertyReferenceIR::getter_mPropertyName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_getUniversalPropertyReferenceIR * p = (const cPtr_getUniversalPropertyReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getUniversalPropertyReferenceIR) ;
    result = p->mProperty_mPropertyName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_getUniversalPropertyReferenceIR::getter_mPropertyName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPropertyName ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                              Pointer class for @getUniversalPropertyReferenceIR class                               *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_getUniversalPropertyReferenceIR::cPtr_getUniversalPropertyReferenceIR (const GALGAS_PLMType & in_mType,
                                                                            const GALGAS_string & in_mLLVMName,
                                                                            const GALGAS_PLMType & in_mElementType,
                                                                            const GALGAS_string & in_mElementLLVMName,
                                                                            const GALGAS_uint & in_mPropertyIndex,
                                                                            const GALGAS_string & in_mPropertyName
                                                                            COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mType (in_mType),
mProperty_mLLVMName (in_mLLVMName),
mProperty_mElementType (in_mElementType),
mProperty_mElementLLVMName (in_mElementLLVMName),
mProperty_mPropertyIndex (in_mPropertyIndex),
mProperty_mPropertyName (in_mPropertyName) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_getUniversalPropertyReferenceIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_getUniversalPropertyReferenceIR ;
}

void cPtr_getUniversalPropertyReferenceIR::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "[@getUniversalPropertyReferenceIR:" ;
  mProperty_mType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLLVMName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mElementType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mElementLLVMName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mPropertyIndex.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mPropertyName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_getUniversalPropertyReferenceIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_getUniversalPropertyReferenceIR (mProperty_mType, mProperty_mLLVMName, mProperty_mElementType, mProperty_mElementLLVMName, mProperty_mPropertyIndex, mProperty_mPropertyName COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @getUniversalPropertyReferenceIR type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_getUniversalPropertyReferenceIR ("getUniversalPropertyReferenceIR",
                                                        & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_getUniversalPropertyReferenceIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_getUniversalPropertyReferenceIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_getUniversalPropertyReferenceIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_getUniversalPropertyReferenceIR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_getUniversalPropertyReferenceIR GALGAS_getUniversalPropertyReferenceIR::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_getUniversalPropertyReferenceIR result ;
  const GALGAS_getUniversalPropertyReferenceIR * p = (const GALGAS_getUniversalPropertyReferenceIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_getUniversalPropertyReferenceIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("getUniversalPropertyReferenceIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_getUniversalArrayElementReferenceIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_getUniversalArrayElementReferenceIR * p = (const cPtr_getUniversalArrayElementReferenceIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_getUniversalArrayElementReferenceIR) ;
  if (kOperandEqual == result) {
    result = mProperty_mType.objectCompare (p->mProperty_mType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLLVMName.objectCompare (p->mProperty_mLLVMName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mElementType.objectCompare (p->mProperty_mElementType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mElementLLVMName.objectCompare (p->mProperty_mElementLLVMName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIndexIR.objectCompare (p->mProperty_mIndexIR) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_getUniversalArrayElementReferenceIR::objectCompare (const GALGAS_getUniversalArrayElementReferenceIR & inOperand) const {
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

GALGAS_getUniversalArrayElementReferenceIR::GALGAS_getUniversalArrayElementReferenceIR (void) :
GALGAS_abstractInstructionIR () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_getUniversalArrayElementReferenceIR::GALGAS_getUniversalArrayElementReferenceIR (const cPtr_getUniversalArrayElementReferenceIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_getUniversalArrayElementReferenceIR) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_getUniversalArrayElementReferenceIR GALGAS_getUniversalArrayElementReferenceIR::constructor_new (const GALGAS_PLMType & inAttribute_mType,
                                                                                                        const GALGAS_string & inAttribute_mLLVMName,
                                                                                                        const GALGAS_PLMType & inAttribute_mElementType,
                                                                                                        const GALGAS_string & inAttribute_mElementLLVMName,
                                                                                                        const GALGAS_objectIR & inAttribute_mIndexIR
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_getUniversalArrayElementReferenceIR result ;
  if (inAttribute_mType.isValid () && inAttribute_mLLVMName.isValid () && inAttribute_mElementType.isValid () && inAttribute_mElementLLVMName.isValid () && inAttribute_mIndexIR.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_getUniversalArrayElementReferenceIR (inAttribute_mType, inAttribute_mLLVMName, inAttribute_mElementType, inAttribute_mElementLLVMName, inAttribute_mIndexIR COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMType GALGAS_getUniversalArrayElementReferenceIR::getter_mType (UNUSED_LOCATION_ARGS) const {
  GALGAS_PLMType result ;
  if (NULL != mObjectPtr) {
    const cPtr_getUniversalArrayElementReferenceIR * p = (const cPtr_getUniversalArrayElementReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getUniversalArrayElementReferenceIR) ;
    result = p->mProperty_mType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMType cPtr_getUniversalArrayElementReferenceIR::getter_mType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_getUniversalArrayElementReferenceIR::getter_mLLVMName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_getUniversalArrayElementReferenceIR * p = (const cPtr_getUniversalArrayElementReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getUniversalArrayElementReferenceIR) ;
    result = p->mProperty_mLLVMName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_getUniversalArrayElementReferenceIR::getter_mLLVMName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLLVMName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMType GALGAS_getUniversalArrayElementReferenceIR::getter_mElementType (UNUSED_LOCATION_ARGS) const {
  GALGAS_PLMType result ;
  if (NULL != mObjectPtr) {
    const cPtr_getUniversalArrayElementReferenceIR * p = (const cPtr_getUniversalArrayElementReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getUniversalArrayElementReferenceIR) ;
    result = p->mProperty_mElementType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMType cPtr_getUniversalArrayElementReferenceIR::getter_mElementType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mElementType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_getUniversalArrayElementReferenceIR::getter_mElementLLVMName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_getUniversalArrayElementReferenceIR * p = (const cPtr_getUniversalArrayElementReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getUniversalArrayElementReferenceIR) ;
    result = p->mProperty_mElementLLVMName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_getUniversalArrayElementReferenceIR::getter_mElementLLVMName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mElementLLVMName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_getUniversalArrayElementReferenceIR::getter_mIndexIR (UNUSED_LOCATION_ARGS) const {
  GALGAS_objectIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_getUniversalArrayElementReferenceIR * p = (const cPtr_getUniversalArrayElementReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getUniversalArrayElementReferenceIR) ;
    result = p->mProperty_mIndexIR ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR cPtr_getUniversalArrayElementReferenceIR::getter_mIndexIR (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIndexIR ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                            Pointer class for @getUniversalArrayElementReferenceIR class                             *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_getUniversalArrayElementReferenceIR::cPtr_getUniversalArrayElementReferenceIR (const GALGAS_PLMType & in_mType,
                                                                                    const GALGAS_string & in_mLLVMName,
                                                                                    const GALGAS_PLMType & in_mElementType,
                                                                                    const GALGAS_string & in_mElementLLVMName,
                                                                                    const GALGAS_objectIR & in_mIndexIR
                                                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mType (in_mType),
mProperty_mLLVMName (in_mLLVMName),
mProperty_mElementType (in_mElementType),
mProperty_mElementLLVMName (in_mElementLLVMName),
mProperty_mIndexIR (in_mIndexIR) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_getUniversalArrayElementReferenceIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_getUniversalArrayElementReferenceIR ;
}

void cPtr_getUniversalArrayElementReferenceIR::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "[@getUniversalArrayElementReferenceIR:" ;
  mProperty_mType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLLVMName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mElementType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mElementLLVMName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mIndexIR.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_getUniversalArrayElementReferenceIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_getUniversalArrayElementReferenceIR (mProperty_mType, mProperty_mLLVMName, mProperty_mElementType, mProperty_mElementLLVMName, mProperty_mIndexIR COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @getUniversalArrayElementReferenceIR type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_getUniversalArrayElementReferenceIR ("getUniversalArrayElementReferenceIR",
                                                            & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_getUniversalArrayElementReferenceIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_getUniversalArrayElementReferenceIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_getUniversalArrayElementReferenceIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_getUniversalArrayElementReferenceIR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_getUniversalArrayElementReferenceIR GALGAS_getUniversalArrayElementReferenceIR::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_getUniversalArrayElementReferenceIR result ;
  const GALGAS_getUniversalArrayElementReferenceIR * p = (const GALGAS_getUniversalArrayElementReferenceIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_getUniversalArrayElementReferenceIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("getUniversalArrayElementReferenceIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

GALGAS_enumerationConstantList_2D_element::GALGAS_enumerationConstantList_2D_element (void) :
mProperty_mConstantName (),
mProperty_mConstantValue () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumerationConstantList_2D_element::~ GALGAS_enumerationConstantList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumerationConstantList_2D_element::GALGAS_enumerationConstantList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                      const GALGAS_bigint & inOperand1) :
mProperty_mConstantName (inOperand0),
mProperty_mConstantValue (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumerationConstantList_2D_element GALGAS_enumerationConstantList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_enumerationConstantList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                    GALGAS_bigint::constructor_zero (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumerationConstantList_2D_element GALGAS_enumerationConstantList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                      const GALGAS_bigint & inOperand1 
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_enumerationConstantList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_enumerationConstantList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_enumerationConstantList_2D_element::objectCompare (const GALGAS_enumerationConstantList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mConstantName.objectCompare (inOperand.mProperty_mConstantName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mConstantValue.objectCompare (inOperand.mProperty_mConstantValue) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_enumerationConstantList_2D_element::isValid (void) const {
  return mProperty_mConstantName.isValid () && mProperty_mConstantValue.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_enumerationConstantList_2D_element::drop (void) {
  mProperty_mConstantName.drop () ;
  mProperty_mConstantValue.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_enumerationConstantList_2D_element::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "<struct @enumerationConstantList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mConstantName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mConstantValue.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_enumerationConstantList_2D_element::getter_mConstantName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mConstantName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint GALGAS_enumerationConstantList_2D_element::getter_mConstantValue (UNUSED_LOCATION_ARGS) const {
  return mProperty_mConstantValue ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @enumerationConstantList-element type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_enumerationConstantList_2D_element ("enumerationConstantList-element",
                                                           NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_enumerationConstantList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumerationConstantList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_enumerationConstantList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumerationConstantList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumerationConstantList_2D_element GALGAS_enumerationConstantList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_enumerationConstantList_2D_element result ;
  const GALGAS_enumerationConstantList_2D_element * p = (const GALGAS_enumerationConstantList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_enumerationConstantList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumerationConstantList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_classConstantMap_2D_element::GALGAS_classConstantMap_2D_element (void) :
mProperty_lkey (),
mProperty_mIndex (),
mProperty_mClassTypeName () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_classConstantMap_2D_element::~ GALGAS_classConstantMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_classConstantMap_2D_element::GALGAS_classConstantMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                        const GALGAS_bigint & inOperand1,
                                                                        const GALGAS_lstring & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mIndex (inOperand1),
mProperty_mClassTypeName (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_classConstantMap_2D_element GALGAS_classConstantMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_classConstantMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                             GALGAS_bigint::constructor_zero (HERE),
                                             GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_classConstantMap_2D_element GALGAS_classConstantMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                        const GALGAS_bigint & inOperand1,
                                                                                        const GALGAS_lstring & inOperand2 
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_classConstantMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_classConstantMap_2D_element (inOperand0, inOperand1, inOperand2) ;
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
    result = mProperty_mIndex.objectCompare (inOperand.mProperty_mIndex) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mClassTypeName.objectCompare (inOperand.mProperty_mClassTypeName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_classConstantMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mIndex.isValid () && mProperty_mClassTypeName.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_classConstantMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mIndex.drop () ;
  mProperty_mClassTypeName.drop () ;
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
    mProperty_mIndex.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mClassTypeName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_classConstantMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint GALGAS_classConstantMap_2D_element::getter_mIndex (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_classConstantMap_2D_element::getter_mClassTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mClassTypeName ;
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

GALGAS_propertyList_2D_element::GALGAS_propertyList_2D_element (void) :
mProperty_mPropertyName (),
mProperty_mType () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyList_2D_element::~ GALGAS_propertyList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyList_2D_element::GALGAS_propertyList_2D_element (const GALGAS_string & inOperand0,
                                                                const GALGAS_PLMType & inOperand1) :
mProperty_mPropertyName (inOperand0),
mProperty_mType (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyList_2D_element GALGAS_propertyList_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                const GALGAS_PLMType & inOperand1 
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

GALGAS_PLMType GALGAS_propertyList_2D_element::getter_mType (UNUSED_LOCATION_ARGS) const {
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

GALGAS_controlRegisterList_2D_element::GALGAS_controlRegisterList_2D_element (void) :
mProperty_mRegisterName (),
mProperty_mControlRegisterKind (),
mProperty_mAttributeList (),
mProperty_mRegisterAddress (),
mProperty_mRegisterAddressLocation () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterList_2D_element::~ GALGAS_controlRegisterList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterList_2D_element::GALGAS_controlRegisterList_2D_element (const GALGAS_lstring & inOperand0,
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

GALGAS_controlRegisterList_2D_element GALGAS_controlRegisterList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                              const GALGAS_controlRegisterKind & inOperand1,
                                                                                              const GALGAS_lstringlist & inOperand2,
                                                                                              const GALGAS_expressionAST & inOperand3,
                                                                                              const GALGAS_location & inOperand4 
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_controlRegisterList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_controlRegisterList_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_controlRegisterList_2D_element::objectCompare (const GALGAS_controlRegisterList_2D_element & inOperand) const {
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

bool GALGAS_controlRegisterList_2D_element::isValid (void) const {
  return mProperty_mRegisterName.isValid () && mProperty_mControlRegisterKind.isValid () && mProperty_mAttributeList.isValid () && mProperty_mRegisterAddress.isValid () && mProperty_mRegisterAddressLocation.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_controlRegisterList_2D_element::drop (void) {
  mProperty_mRegisterName.drop () ;
  mProperty_mControlRegisterKind.drop () ;
  mProperty_mAttributeList.drop () ;
  mProperty_mRegisterAddress.drop () ;
  mProperty_mRegisterAddressLocation.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_controlRegisterList_2D_element::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "<struct @controlRegisterList-element:" ;
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

GALGAS_lstring GALGAS_controlRegisterList_2D_element::getter_mRegisterName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRegisterName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterKind GALGAS_controlRegisterList_2D_element::getter_mControlRegisterKind (UNUSED_LOCATION_ARGS) const {
  return mProperty_mControlRegisterKind ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_controlRegisterList_2D_element::getter_mAttributeList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAttributeList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST GALGAS_controlRegisterList_2D_element::getter_mRegisterAddress (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRegisterAddress ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_controlRegisterList_2D_element::getter_mRegisterAddressLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRegisterAddressLocation ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @controlRegisterList-element type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_controlRegisterList_2D_element ("controlRegisterList-element",
                                                       NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_controlRegisterList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_controlRegisterList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_controlRegisterList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterList_2D_element GALGAS_controlRegisterList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterList_2D_element result ;
  const GALGAS_controlRegisterList_2D_element * p = (const GALGAS_controlRegisterList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_controlRegisterList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
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
                                                        const GALGAS_PLMType & inOperand4) :
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
                                                                        const GALGAS_PLMType & inOperand4 
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

GALGAS_PLMType GALGAS_sliceMap_2D_element::getter_mResultType (UNUSED_LOCATION_ARGS) const {
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
                                                                            const GALGAS_PLMType & inOperand1,
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

GALGAS_controlRegisterMap_2D_element GALGAS_controlRegisterMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                            const GALGAS_PLMType & inOperand1,
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

GALGAS_PLMType GALGAS_controlRegisterMap_2D_element::getter_mType (UNUSED_LOCATION_ARGS) const {
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

GALGAS_modulePropertyListAST_2D_element::GALGAS_modulePropertyListAST_2D_element (void) :
mProperty_mPropertyName (),
mProperty_mIsConstant (),
mProperty_mTypeName (),
mProperty_mOptionalExpression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_modulePropertyListAST_2D_element::~ GALGAS_modulePropertyListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_modulePropertyListAST_2D_element::GALGAS_modulePropertyListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                  const GALGAS_bool & inOperand1,
                                                                                  const GALGAS_lstring & inOperand2,
                                                                                  const GALGAS_structurePropertyInitOptionalExpressionAST & inOperand3) :
mProperty_mPropertyName (inOperand0),
mProperty_mIsConstant (inOperand1),
mProperty_mTypeName (inOperand2),
mProperty_mOptionalExpression (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_modulePropertyListAST_2D_element GALGAS_modulePropertyListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                  const GALGAS_bool & inOperand1,
                                                                                                  const GALGAS_lstring & inOperand2,
                                                                                                  const GALGAS_structurePropertyInitOptionalExpressionAST & inOperand3 
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_modulePropertyListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_modulePropertyListAST_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_modulePropertyListAST_2D_element::objectCompare (const GALGAS_modulePropertyListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mPropertyName.objectCompare (inOperand.mProperty_mPropertyName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mIsConstant.objectCompare (inOperand.mProperty_mIsConstant) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mTypeName.objectCompare (inOperand.mProperty_mTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mOptionalExpression.objectCompare (inOperand.mProperty_mOptionalExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_modulePropertyListAST_2D_element::isValid (void) const {
  return mProperty_mPropertyName.isValid () && mProperty_mIsConstant.isValid () && mProperty_mTypeName.isValid () && mProperty_mOptionalExpression.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_modulePropertyListAST_2D_element::drop (void) {
  mProperty_mPropertyName.drop () ;
  mProperty_mIsConstant.drop () ;
  mProperty_mTypeName.drop () ;
  mProperty_mOptionalExpression.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_modulePropertyListAST_2D_element::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "<struct @modulePropertyListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mPropertyName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mIsConstant.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mOptionalExpression.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_modulePropertyListAST_2D_element::getter_mPropertyName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPropertyName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_modulePropertyListAST_2D_element::getter_mIsConstant (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIsConstant ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_modulePropertyListAST_2D_element::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structurePropertyInitOptionalExpressionAST GALGAS_modulePropertyListAST_2D_element::getter_mOptionalExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOptionalExpression ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @modulePropertyListAST-element type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_modulePropertyListAST_2D_element ("modulePropertyListAST-element",
                                                         NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_modulePropertyListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_modulePropertyListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_modulePropertyListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_modulePropertyListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_modulePropertyListAST_2D_element GALGAS_modulePropertyListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_modulePropertyListAST_2D_element result ;
  const GALGAS_modulePropertyListAST_2D_element * p = (const GALGAS_modulePropertyListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_modulePropertyListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("modulePropertyListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleDeclarationListAST_2D_element::GALGAS_moduleDeclarationListAST_2D_element (void) :
mProperty_mModule () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleDeclarationListAST_2D_element::~ GALGAS_moduleDeclarationListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleDeclarationListAST_2D_element::GALGAS_moduleDeclarationListAST_2D_element (const GALGAS_moduleDeclarationAST & inOperand0) :
mProperty_mModule (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleDeclarationListAST_2D_element GALGAS_moduleDeclarationListAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_moduleDeclarationListAST_2D_element (GALGAS_moduleDeclarationAST::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleDeclarationListAST_2D_element GALGAS_moduleDeclarationListAST_2D_element::constructor_new (const GALGAS_moduleDeclarationAST & inOperand0 
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_moduleDeclarationListAST_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_moduleDeclarationListAST_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_moduleDeclarationListAST_2D_element::objectCompare (const GALGAS_moduleDeclarationListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mModule.objectCompare (inOperand.mProperty_mModule) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_moduleDeclarationListAST_2D_element::isValid (void) const {
  return mProperty_mModule.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_moduleDeclarationListAST_2D_element::drop (void) {
  mProperty_mModule.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_moduleDeclarationListAST_2D_element::description (C_String & ioString,
                                                              const int32_t inIndentation) const {
  ioString << "<struct @moduleDeclarationListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mModule.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleDeclarationAST GALGAS_moduleDeclarationListAST_2D_element::getter_mModule (UNUSED_LOCATION_ARGS) const {
  return mProperty_mModule ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @moduleDeclarationListAST-element type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_moduleDeclarationListAST_2D_element ("moduleDeclarationListAST-element",
                                                            NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_moduleDeclarationListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_moduleDeclarationListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_moduleDeclarationListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_moduleDeclarationListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleDeclarationListAST_2D_element GALGAS_moduleDeclarationListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_moduleDeclarationListAST_2D_element result ;
  const GALGAS_moduleDeclarationListAST_2D_element * p = (const GALGAS_moduleDeclarationListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_moduleDeclarationListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("moduleDeclarationListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleInstanciationArgumentListAST_2D_element::GALGAS_moduleInstanciationArgumentListAST_2D_element (void) :
mProperty_mSelector (),
mProperty_mExpression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleInstanciationArgumentListAST_2D_element::~ GALGAS_moduleInstanciationArgumentListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleInstanciationArgumentListAST_2D_element::GALGAS_moduleInstanciationArgumentListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                            const GALGAS_expressionAST & inOperand1) :
mProperty_mSelector (inOperand0),
mProperty_mExpression (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleInstanciationArgumentListAST_2D_element GALGAS_moduleInstanciationArgumentListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                            const GALGAS_expressionAST & inOperand1 
                                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_moduleInstanciationArgumentListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_moduleInstanciationArgumentListAST_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_moduleInstanciationArgumentListAST_2D_element::objectCompare (const GALGAS_moduleInstanciationArgumentListAST_2D_element & inOperand) const {
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

bool GALGAS_moduleInstanciationArgumentListAST_2D_element::isValid (void) const {
  return mProperty_mSelector.isValid () && mProperty_mExpression.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_moduleInstanciationArgumentListAST_2D_element::drop (void) {
  mProperty_mSelector.drop () ;
  mProperty_mExpression.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_moduleInstanciationArgumentListAST_2D_element::description (C_String & ioString,
                                                                        const int32_t inIndentation) const {
  ioString << "<struct @moduleInstanciationArgumentListAST-element:" ;
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

GALGAS_lstring GALGAS_moduleInstanciationArgumentListAST_2D_element::getter_mSelector (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSelector ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST GALGAS_moduleInstanciationArgumentListAST_2D_element::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExpression ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  @moduleInstanciationArgumentListAST-element type                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_moduleInstanciationArgumentListAST_2D_element ("moduleInstanciationArgumentListAST-element",
                                                                      NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_moduleInstanciationArgumentListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_moduleInstanciationArgumentListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_moduleInstanciationArgumentListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_moduleInstanciationArgumentListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleInstanciationArgumentListAST_2D_element GALGAS_moduleInstanciationArgumentListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                          C_Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_moduleInstanciationArgumentListAST_2D_element result ;
  const GALGAS_moduleInstanciationArgumentListAST_2D_element * p = (const GALGAS_moduleInstanciationArgumentListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_moduleInstanciationArgumentListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("moduleInstanciationArgumentListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleInstanciationListAST_2D_element::GALGAS_moduleInstanciationListAST_2D_element (void) :
mProperty_mModuleName (),
mProperty_mModuleInstanciationArgumentList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleInstanciationListAST_2D_element::~ GALGAS_moduleInstanciationListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleInstanciationListAST_2D_element::GALGAS_moduleInstanciationListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                            const GALGAS_moduleInstanciationArgumentListAST & inOperand1) :
mProperty_mModuleName (inOperand0),
mProperty_mModuleInstanciationArgumentList (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleInstanciationListAST_2D_element GALGAS_moduleInstanciationListAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_moduleInstanciationListAST_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                       GALGAS_moduleInstanciationArgumentListAST::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleInstanciationListAST_2D_element GALGAS_moduleInstanciationListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                            const GALGAS_moduleInstanciationArgumentListAST & inOperand1 
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_moduleInstanciationListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_moduleInstanciationListAST_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_moduleInstanciationListAST_2D_element::objectCompare (const GALGAS_moduleInstanciationListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mModuleName.objectCompare (inOperand.mProperty_mModuleName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mModuleInstanciationArgumentList.objectCompare (inOperand.mProperty_mModuleInstanciationArgumentList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_moduleInstanciationListAST_2D_element::isValid (void) const {
  return mProperty_mModuleName.isValid () && mProperty_mModuleInstanciationArgumentList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_moduleInstanciationListAST_2D_element::drop (void) {
  mProperty_mModuleName.drop () ;
  mProperty_mModuleInstanciationArgumentList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_moduleInstanciationListAST_2D_element::description (C_String & ioString,
                                                                const int32_t inIndentation) const {
  ioString << "<struct @moduleInstanciationListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mModuleName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mModuleInstanciationArgumentList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_moduleInstanciationListAST_2D_element::getter_mModuleName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mModuleName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleInstanciationArgumentListAST GALGAS_moduleInstanciationListAST_2D_element::getter_mModuleInstanciationArgumentList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mModuleInstanciationArgumentList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @moduleInstanciationListAST-element type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_moduleInstanciationListAST_2D_element ("moduleInstanciationListAST-element",
                                                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_moduleInstanciationListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_moduleInstanciationListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_moduleInstanciationListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_moduleInstanciationListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleInstanciationListAST_2D_element GALGAS_moduleInstanciationListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_moduleInstanciationListAST_2D_element result ;
  const GALGAS_moduleInstanciationListAST_2D_element * p = (const GALGAS_moduleInstanciationListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_moduleInstanciationListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("moduleInstanciationListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleInstanciationArgumentMap_2D_element::GALGAS_moduleInstanciationArgumentMap_2D_element (void) :
mProperty_lkey (),
mProperty_mExpression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleInstanciationArgumentMap_2D_element::~ GALGAS_moduleInstanciationArgumentMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleInstanciationArgumentMap_2D_element::GALGAS_moduleInstanciationArgumentMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                    const GALGAS_expressionAST & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mExpression (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleInstanciationArgumentMap_2D_element GALGAS_moduleInstanciationArgumentMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                    const GALGAS_expressionAST & inOperand1 
                                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_moduleInstanciationArgumentMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_moduleInstanciationArgumentMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_moduleInstanciationArgumentMap_2D_element::objectCompare (const GALGAS_moduleInstanciationArgumentMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mExpression.objectCompare (inOperand.mProperty_mExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_moduleInstanciationArgumentMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mExpression.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_moduleInstanciationArgumentMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mExpression.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_moduleInstanciationArgumentMap_2D_element::description (C_String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString << "<struct @moduleInstanciationArgumentMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mExpression.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_moduleInstanciationArgumentMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST GALGAS_moduleInstanciationArgumentMap_2D_element::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExpression ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @moduleInstanciationArgumentMap-element type                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_moduleInstanciationArgumentMap_2D_element ("moduleInstanciationArgumentMap-element",
                                                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_moduleInstanciationArgumentMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_moduleInstanciationArgumentMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_moduleInstanciationArgumentMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_moduleInstanciationArgumentMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleInstanciationArgumentMap_2D_element GALGAS_moduleInstanciationArgumentMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_moduleInstanciationArgumentMap_2D_element result ;
  const GALGAS_moduleInstanciationArgumentMap_2D_element * p = (const GALGAS_moduleInstanciationArgumentMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_moduleInstanciationArgumentMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("moduleInstanciationArgumentMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instanciedModuleMap_2D_element::GALGAS_instanciedModuleMap_2D_element (void) :
mProperty_lkey (),
mProperty_mModuleInstanciationArgumentMap () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instanciedModuleMap_2D_element::~ GALGAS_instanciedModuleMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instanciedModuleMap_2D_element::GALGAS_instanciedModuleMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                              const GALGAS_moduleInstanciationArgumentMap & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mModuleInstanciationArgumentMap (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instanciedModuleMap_2D_element GALGAS_instanciedModuleMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_instanciedModuleMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                GALGAS_moduleInstanciationArgumentMap::constructor_emptyMap (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instanciedModuleMap_2D_element GALGAS_instanciedModuleMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                              const GALGAS_moduleInstanciationArgumentMap & inOperand1 
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_instanciedModuleMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_instanciedModuleMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_instanciedModuleMap_2D_element::objectCompare (const GALGAS_instanciedModuleMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mModuleInstanciationArgumentMap.objectCompare (inOperand.mProperty_mModuleInstanciationArgumentMap) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_instanciedModuleMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mModuleInstanciationArgumentMap.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_instanciedModuleMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mModuleInstanciationArgumentMap.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_instanciedModuleMap_2D_element::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "<struct @instanciedModuleMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mModuleInstanciationArgumentMap.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_instanciedModuleMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleInstanciationArgumentMap GALGAS_instanciedModuleMap_2D_element::getter_mModuleInstanciationArgumentMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mModuleInstanciationArgumentMap ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @instanciedModuleMap-element type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_instanciedModuleMap_2D_element ("instanciedModuleMap-element",
                                                       NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_instanciedModuleMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_instanciedModuleMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_instanciedModuleMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_instanciedModuleMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instanciedModuleMap_2D_element GALGAS_instanciedModuleMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_instanciedModuleMap_2D_element result ;
  const GALGAS_instanciedModuleMap_2D_element * p = (const GALGAS_instanciedModuleMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_instanciedModuleMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("instanciedModuleMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

GALGAS_staticListPropertyListAST_2D_element::GALGAS_staticListPropertyListAST_2D_element (void) :
mProperty_mPropertyName (),
mProperty_mPropertyType () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticListPropertyListAST_2D_element::~ GALGAS_staticListPropertyListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticListPropertyListAST_2D_element::GALGAS_staticListPropertyListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                          const GALGAS_staticListPropertyTypeAST & inOperand1) :
mProperty_mPropertyName (inOperand0),
mProperty_mPropertyType (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticListPropertyListAST_2D_element GALGAS_staticListPropertyListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                          const GALGAS_staticListPropertyTypeAST & inOperand1 
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_staticListPropertyListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_staticListPropertyListAST_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_staticListPropertyListAST_2D_element::objectCompare (const GALGAS_staticListPropertyListAST_2D_element & inOperand) const {
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

bool GALGAS_staticListPropertyListAST_2D_element::isValid (void) const {
  return mProperty_mPropertyName.isValid () && mProperty_mPropertyType.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_staticListPropertyListAST_2D_element::drop (void) {
  mProperty_mPropertyName.drop () ;
  mProperty_mPropertyType.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_staticListPropertyListAST_2D_element::description (C_String & ioString,
                                                               const int32_t inIndentation) const {
  ioString << "<struct @staticListPropertyListAST-element:" ;
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

GALGAS_lstring GALGAS_staticListPropertyListAST_2D_element::getter_mPropertyName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPropertyName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticListPropertyTypeAST GALGAS_staticListPropertyListAST_2D_element::getter_mPropertyType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPropertyType ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @staticListPropertyListAST-element type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_staticListPropertyListAST_2D_element ("staticListPropertyListAST-element",
                                                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_staticListPropertyListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_staticListPropertyListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_staticListPropertyListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_staticListPropertyListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticListPropertyListAST_2D_element GALGAS_staticListPropertyListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_staticListPropertyListAST_2D_element result ;
  const GALGAS_staticListPropertyListAST_2D_element * p = (const GALGAS_staticListPropertyListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_staticListPropertyListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("staticListPropertyListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extendStaticArrayDeclarationAST_2D_element::GALGAS_extendStaticArrayDeclarationAST_2D_element (void) :
mProperty_mStaticListName (),
mProperty_mExpressions () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extendStaticArrayDeclarationAST_2D_element::~ GALGAS_extendStaticArrayDeclarationAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extendStaticArrayDeclarationAST_2D_element::GALGAS_extendStaticArrayDeclarationAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                      const GALGAS_extendStaticListElementListAST & inOperand1) :
mProperty_mStaticListName (inOperand0),
mProperty_mExpressions (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extendStaticArrayDeclarationAST_2D_element GALGAS_extendStaticArrayDeclarationAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_extendStaticArrayDeclarationAST_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                            GALGAS_extendStaticListElementListAST::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extendStaticArrayDeclarationAST_2D_element GALGAS_extendStaticArrayDeclarationAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                      const GALGAS_extendStaticListElementListAST & inOperand1 
                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_extendStaticArrayDeclarationAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_extendStaticArrayDeclarationAST_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_extendStaticArrayDeclarationAST_2D_element::objectCompare (const GALGAS_extendStaticArrayDeclarationAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mStaticListName.objectCompare (inOperand.mProperty_mStaticListName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mExpressions.objectCompare (inOperand.mProperty_mExpressions) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_extendStaticArrayDeclarationAST_2D_element::isValid (void) const {
  return mProperty_mStaticListName.isValid () && mProperty_mExpressions.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_extendStaticArrayDeclarationAST_2D_element::drop (void) {
  mProperty_mStaticListName.drop () ;
  mProperty_mExpressions.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_extendStaticArrayDeclarationAST_2D_element::description (C_String & ioString,
                                                                     const int32_t inIndentation) const {
  ioString << "<struct @extendStaticArrayDeclarationAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mStaticListName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mExpressions.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_extendStaticArrayDeclarationAST_2D_element::getter_mStaticListName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mStaticListName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extendStaticListElementListAST GALGAS_extendStaticArrayDeclarationAST_2D_element::getter_mExpressions (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExpressions ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @extendStaticArrayDeclarationAST-element type                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_extendStaticArrayDeclarationAST_2D_element ("extendStaticArrayDeclarationAST-element",
                                                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_extendStaticArrayDeclarationAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extendStaticArrayDeclarationAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_extendStaticArrayDeclarationAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_extendStaticArrayDeclarationAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extendStaticArrayDeclarationAST_2D_element GALGAS_extendStaticArrayDeclarationAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_extendStaticArrayDeclarationAST_2D_element result ;
  const GALGAS_extendStaticArrayDeclarationAST_2D_element * p = (const GALGAS_extendStaticArrayDeclarationAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_extendStaticArrayDeclarationAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extendStaticArrayDeclarationAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticlistMap_2D_element::GALGAS_staticlistMap_2D_element (void) :
mProperty_lkey (),
mProperty_mStaticListPropertyList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticlistMap_2D_element::~ GALGAS_staticlistMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticlistMap_2D_element::GALGAS_staticlistMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                  const GALGAS_propertyList & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mStaticListPropertyList (inOperand1) {
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
    result = mProperty_mStaticListPropertyList.objectCompare (inOperand.mProperty_mStaticListPropertyList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_staticlistMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mStaticListPropertyList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_staticlistMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mStaticListPropertyList.drop () ;
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
    mProperty_mStaticListPropertyList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_staticlistMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyList GALGAS_staticlistMap_2D_element::getter_mStaticListPropertyList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mStaticListPropertyList ;
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

GALGAS_staticListInitializationMap_2D_element::GALGAS_staticListInitializationMap_2D_element (void) :
mProperty_lkey (),
mProperty_mInitializationList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticListInitializationMap_2D_element::~ GALGAS_staticListInitializationMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticListInitializationMap_2D_element::GALGAS_staticListInitializationMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                              const GALGAS_stringlist & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mInitializationList (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticListInitializationMap_2D_element GALGAS_staticListInitializationMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_staticListInitializationMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                        GALGAS_stringlist::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticListInitializationMap_2D_element GALGAS_staticListInitializationMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                              const GALGAS_stringlist & inOperand1 
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_staticListInitializationMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_staticListInitializationMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_staticListInitializationMap_2D_element::objectCompare (const GALGAS_staticListInitializationMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mInitializationList.objectCompare (inOperand.mProperty_mInitializationList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_staticListInitializationMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mInitializationList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_staticListInitializationMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mInitializationList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_staticListInitializationMap_2D_element::description (C_String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString << "<struct @staticListInitializationMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mInitializationList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_staticListInitializationMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist GALGAS_staticListInitializationMap_2D_element::getter_mInitializationList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInitializationList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @staticListInitializationMap-element type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_staticListInitializationMap_2D_element ("staticListInitializationMap-element",
                                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_staticListInitializationMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_staticListInitializationMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_staticListInitializationMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_staticListInitializationMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticListInitializationMap_2D_element GALGAS_staticListInitializationMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_staticListInitializationMap_2D_element result ;
  const GALGAS_staticListInitializationMap_2D_element * p = (const GALGAS_staticListInitializationMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_staticListInitializationMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("staticListInitializationMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticListInvokedFunctionSetMap_2D_element::GALGAS_staticListInvokedFunctionSetMap_2D_element (void) :
mProperty_lkey (),
mProperty_mInvokedFunctionSet () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticListInvokedFunctionSetMap_2D_element::~ GALGAS_staticListInvokedFunctionSetMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticListInvokedFunctionSetMap_2D_element::GALGAS_staticListInvokedFunctionSetMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                      const GALGAS_stringset & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mInvokedFunctionSet (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticListInvokedFunctionSetMap_2D_element GALGAS_staticListInvokedFunctionSetMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_staticListInvokedFunctionSetMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                            GALGAS_stringset::constructor_emptySet (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticListInvokedFunctionSetMap_2D_element GALGAS_staticListInvokedFunctionSetMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                      const GALGAS_stringset & inOperand1 
                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_staticListInvokedFunctionSetMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_staticListInvokedFunctionSetMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_staticListInvokedFunctionSetMap_2D_element::objectCompare (const GALGAS_staticListInvokedFunctionSetMap_2D_element & inOperand) const {
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

bool GALGAS_staticListInvokedFunctionSetMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mInvokedFunctionSet.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_staticListInvokedFunctionSetMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mInvokedFunctionSet.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_staticListInvokedFunctionSetMap_2D_element::description (C_String & ioString,
                                                                     const int32_t inIndentation) const {
  ioString << "<struct @staticListInvokedFunctionSetMap-element:" ;
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

GALGAS_lstring GALGAS_staticListInvokedFunctionSetMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringset GALGAS_staticListInvokedFunctionSetMap_2D_element::getter_mInvokedFunctionSet (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInvokedFunctionSet ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @staticListInvokedFunctionSetMap-element type                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_staticListInvokedFunctionSetMap_2D_element ("staticListInvokedFunctionSetMap-element",
                                                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_staticListInvokedFunctionSetMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_staticListInvokedFunctionSetMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_staticListInvokedFunctionSetMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_staticListInvokedFunctionSetMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticListInvokedFunctionSetMap_2D_element GALGAS_staticListInvokedFunctionSetMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_staticListInvokedFunctionSetMap_2D_element result ;
  const GALGAS_staticListInvokedFunctionSetMap_2D_element * p = (const GALGAS_staticListInvokedFunctionSetMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_staticListInvokedFunctionSetMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("staticListInvokedFunctionSetMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskSetupListAST_2D_element::GALGAS_taskSetupListAST_2D_element (void) :
mProperty_mTaskSetupPriority (),
mProperty_mTaskSetupInstructionList (),
mProperty_mEndOfTaskSetupDeclaration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskSetupListAST_2D_element::~ GALGAS_taskSetupListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskSetupListAST_2D_element::GALGAS_taskSetupListAST_2D_element (const GALGAS_lbigint & inOperand0,
                                                                        const GALGAS_instructionListAST & inOperand1,
                                                                        const GALGAS_location & inOperand2) :
mProperty_mTaskSetupPriority (inOperand0),
mProperty_mTaskSetupInstructionList (inOperand1),
mProperty_mEndOfTaskSetupDeclaration (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskSetupListAST_2D_element GALGAS_taskSetupListAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_taskSetupListAST_2D_element (GALGAS_lbigint::constructor_default (HERE),
                                             GALGAS_instructionListAST::constructor_emptyList (HERE),
                                             GALGAS_location::constructor_nowhere (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskSetupListAST_2D_element GALGAS_taskSetupListAST_2D_element::constructor_new (const GALGAS_lbigint & inOperand0,
                                                                                        const GALGAS_instructionListAST & inOperand1,
                                                                                        const GALGAS_location & inOperand2 
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_taskSetupListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_taskSetupListAST_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_taskSetupListAST_2D_element::objectCompare (const GALGAS_taskSetupListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mTaskSetupPriority.objectCompare (inOperand.mProperty_mTaskSetupPriority) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mTaskSetupInstructionList.objectCompare (inOperand.mProperty_mTaskSetupInstructionList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mEndOfTaskSetupDeclaration.objectCompare (inOperand.mProperty_mEndOfTaskSetupDeclaration) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_taskSetupListAST_2D_element::isValid (void) const {
  return mProperty_mTaskSetupPriority.isValid () && mProperty_mTaskSetupInstructionList.isValid () && mProperty_mEndOfTaskSetupDeclaration.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskSetupListAST_2D_element::drop (void) {
  mProperty_mTaskSetupPriority.drop () ;
  mProperty_mTaskSetupInstructionList.drop () ;
  mProperty_mEndOfTaskSetupDeclaration.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskSetupListAST_2D_element::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "<struct @taskSetupListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mTaskSetupPriority.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mTaskSetupInstructionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mEndOfTaskSetupDeclaration.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbigint GALGAS_taskSetupListAST_2D_element::getter_mTaskSetupPriority (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTaskSetupPriority ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST GALGAS_taskSetupListAST_2D_element::getter_mTaskSetupInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTaskSetupInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_taskSetupListAST_2D_element::getter_mEndOfTaskSetupDeclaration (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOfTaskSetupDeclaration ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @taskSetupListAST-element type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_taskSetupListAST_2D_element ("taskSetupListAST-element",
                                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_taskSetupListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_taskSetupListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_taskSetupListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_taskSetupListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskSetupListAST_2D_element GALGAS_taskSetupListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_taskSetupListAST_2D_element result ;
  const GALGAS_taskSetupListAST_2D_element * p = (const GALGAS_taskSetupListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_taskSetupListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("taskSetupListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskSetupSortedListAST_2D_element::GALGAS_taskSetupSortedListAST_2D_element (void) :
mProperty_mTaskSetupPriority (),
mProperty_mTaskSetupInstructionList (),
mProperty_mEndOfTaskSetupDeclaration (),
mProperty_mSetupPriority () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskSetupSortedListAST_2D_element::~ GALGAS_taskSetupSortedListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskSetupSortedListAST_2D_element::GALGAS_taskSetupSortedListAST_2D_element (const GALGAS_lbigint & inOperand0,
                                                                                    const GALGAS_instructionListAST & inOperand1,
                                                                                    const GALGAS_location & inOperand2,
                                                                                    const GALGAS_bigint & inOperand3) :
mProperty_mTaskSetupPriority (inOperand0),
mProperty_mTaskSetupInstructionList (inOperand1),
mProperty_mEndOfTaskSetupDeclaration (inOperand2),
mProperty_mSetupPriority (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskSetupSortedListAST_2D_element GALGAS_taskSetupSortedListAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_taskSetupSortedListAST_2D_element (GALGAS_lbigint::constructor_default (HERE),
                                                   GALGAS_instructionListAST::constructor_emptyList (HERE),
                                                   GALGAS_location::constructor_nowhere (HERE),
                                                   GALGAS_bigint::constructor_zero (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskSetupSortedListAST_2D_element GALGAS_taskSetupSortedListAST_2D_element::constructor_new (const GALGAS_lbigint & inOperand0,
                                                                                                    const GALGAS_instructionListAST & inOperand1,
                                                                                                    const GALGAS_location & inOperand2,
                                                                                                    const GALGAS_bigint & inOperand3 
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_taskSetupSortedListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_taskSetupSortedListAST_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_taskSetupSortedListAST_2D_element::objectCompare (const GALGAS_taskSetupSortedListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mTaskSetupPriority.objectCompare (inOperand.mProperty_mTaskSetupPriority) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mTaskSetupInstructionList.objectCompare (inOperand.mProperty_mTaskSetupInstructionList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mEndOfTaskSetupDeclaration.objectCompare (inOperand.mProperty_mEndOfTaskSetupDeclaration) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSetupPriority.objectCompare (inOperand.mProperty_mSetupPriority) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_taskSetupSortedListAST_2D_element::isValid (void) const {
  return mProperty_mTaskSetupPriority.isValid () && mProperty_mTaskSetupInstructionList.isValid () && mProperty_mEndOfTaskSetupDeclaration.isValid () && mProperty_mSetupPriority.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskSetupSortedListAST_2D_element::drop (void) {
  mProperty_mTaskSetupPriority.drop () ;
  mProperty_mTaskSetupInstructionList.drop () ;
  mProperty_mEndOfTaskSetupDeclaration.drop () ;
  mProperty_mSetupPriority.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskSetupSortedListAST_2D_element::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "<struct @taskSetupSortedListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mTaskSetupPriority.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mTaskSetupInstructionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mEndOfTaskSetupDeclaration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSetupPriority.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbigint GALGAS_taskSetupSortedListAST_2D_element::getter_mTaskSetupPriority (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTaskSetupPriority ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST GALGAS_taskSetupSortedListAST_2D_element::getter_mTaskSetupInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTaskSetupInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_taskSetupSortedListAST_2D_element::getter_mEndOfTaskSetupDeclaration (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOfTaskSetupDeclaration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint GALGAS_taskSetupSortedListAST_2D_element::getter_mSetupPriority (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSetupPriority ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @taskSetupSortedListAST-element type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_taskSetupSortedListAST_2D_element ("taskSetupSortedListAST-element",
                                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_taskSetupSortedListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_taskSetupSortedListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_taskSetupSortedListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_taskSetupSortedListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskSetupSortedListAST_2D_element GALGAS_taskSetupSortedListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_taskSetupSortedListAST_2D_element result ;
  const GALGAS_taskSetupSortedListAST_2D_element * p = (const GALGAS_taskSetupSortedListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_taskSetupSortedListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("taskSetupSortedListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
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
mProperty_mInitInstructionListIR (),
mProperty_mTaskNameStringIndex () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskMapIR_2D_element::~ GALGAS_taskMapIR_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskMapIR_2D_element::GALGAS_taskMapIR_2D_element (const GALGAS_lstring & inOperand0,
                                                          const GALGAS_PLMType & inOperand1,
                                                          const GALGAS_bigint & inOperand2,
                                                          const GALGAS_bigint & inOperand3,
                                                          const GALGAS_allocaList & inOperand4,
                                                          const GALGAS_instructionListIR & inOperand5,
                                                          const GALGAS_uint & inOperand6) :
mProperty_lkey (inOperand0),
mProperty_mTaskType (inOperand1),
mProperty_mPriority (inOperand2),
mProperty_mStackSize (inOperand3),
mProperty_mAllocaList (inOperand4),
mProperty_mInitInstructionListIR (inOperand5),
mProperty_mTaskNameStringIndex (inOperand6) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskMapIR_2D_element GALGAS_taskMapIR_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                          const GALGAS_PLMType & inOperand1,
                                                                          const GALGAS_bigint & inOperand2,
                                                                          const GALGAS_bigint & inOperand3,
                                                                          const GALGAS_allocaList & inOperand4,
                                                                          const GALGAS_instructionListIR & inOperand5,
                                                                          const GALGAS_uint & inOperand6 
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_taskMapIR_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid ()) {
    result = GALGAS_taskMapIR_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6) ;
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
  if (result == kOperandEqual) {
    result = mProperty_mTaskNameStringIndex.objectCompare (inOperand.mProperty_mTaskNameStringIndex) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_taskMapIR_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mTaskType.isValid () && mProperty_mPriority.isValid () && mProperty_mStackSize.isValid () && mProperty_mAllocaList.isValid () && mProperty_mInitInstructionListIR.isValid () && mProperty_mTaskNameStringIndex.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskMapIR_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mTaskType.drop () ;
  mProperty_mPriority.drop () ;
  mProperty_mStackSize.drop () ;
  mProperty_mAllocaList.drop () ;
  mProperty_mInitInstructionListIR.drop () ;
  mProperty_mTaskNameStringIndex.drop () ;
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
    ioString << ", " ;
    mProperty_mTaskNameStringIndex.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_taskMapIR_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMType GALGAS_taskMapIR_2D_element::getter_mTaskType (UNUSED_LOCATION_ARGS) const {
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

GALGAS_uint GALGAS_taskMapIR_2D_element::getter_mTaskNameStringIndex (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTaskNameStringIndex ;
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
                                                                                                      const GALGAS_routineFormalArgumentListAST & inOperand4,
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
                                                                                                                      const GALGAS_routineFormalArgumentListAST & inOperand4,
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

GALGAS_routineFormalArgumentListAST GALGAS_systemRoutineDeclarationListAST_2D_element::getter_mFormalArgumentList (UNUSED_LOCATION_ARGS) const {
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

GALGAS_sectionIRlist_2D_element::GALGAS_sectionIRlist_2D_element (void) :
mProperty_mSectionCallName (),
mProperty_mSectionImplementationName (),
mProperty_mReceiverType (),
mProperty_mFormalArgumentListForGeneration (),
mProperty_mReturnType () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sectionIRlist_2D_element::~ GALGAS_sectionIRlist_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sectionIRlist_2D_element::GALGAS_sectionIRlist_2D_element (const GALGAS_string & inOperand0,
                                                                  const GALGAS_string & inOperand1,
                                                                  const GALGAS_PLMType & inOperand2,
                                                                  const GALGAS_routineFormalArgumentListForGeneration & inOperand3,
                                                                  const GALGAS_PLMType & inOperand4) :
mProperty_mSectionCallName (inOperand0),
mProperty_mSectionImplementationName (inOperand1),
mProperty_mReceiverType (inOperand2),
mProperty_mFormalArgumentListForGeneration (inOperand3),
mProperty_mReturnType (inOperand4) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sectionIRlist_2D_element GALGAS_sectionIRlist_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                  const GALGAS_string & inOperand1,
                                                                                  const GALGAS_PLMType & inOperand2,
                                                                                  const GALGAS_routineFormalArgumentListForGeneration & inOperand3,
                                                                                  const GALGAS_PLMType & inOperand4 
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_sectionIRlist_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_sectionIRlist_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_sectionIRlist_2D_element::objectCompare (const GALGAS_sectionIRlist_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mSectionCallName.objectCompare (inOperand.mProperty_mSectionCallName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSectionImplementationName.objectCompare (inOperand.mProperty_mSectionImplementationName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mReceiverType.objectCompare (inOperand.mProperty_mReceiverType) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFormalArgumentListForGeneration.objectCompare (inOperand.mProperty_mFormalArgumentListForGeneration) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mReturnType.objectCompare (inOperand.mProperty_mReturnType) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_sectionIRlist_2D_element::isValid (void) const {
  return mProperty_mSectionCallName.isValid () && mProperty_mSectionImplementationName.isValid () && mProperty_mReceiverType.isValid () && mProperty_mFormalArgumentListForGeneration.isValid () && mProperty_mReturnType.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_sectionIRlist_2D_element::drop (void) {
  mProperty_mSectionCallName.drop () ;
  mProperty_mSectionImplementationName.drop () ;
  mProperty_mReceiverType.drop () ;
  mProperty_mFormalArgumentListForGeneration.drop () ;
  mProperty_mReturnType.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_sectionIRlist_2D_element::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "<struct @sectionIRlist-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mSectionCallName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSectionImplementationName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mReceiverType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFormalArgumentListForGeneration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mReturnType.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_sectionIRlist_2D_element::getter_mSectionCallName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSectionCallName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_sectionIRlist_2D_element::getter_mSectionImplementationName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSectionImplementationName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMType GALGAS_sectionIRlist_2D_element::getter_mReceiverType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mReceiverType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineFormalArgumentListForGeneration GALGAS_sectionIRlist_2D_element::getter_mFormalArgumentListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFormalArgumentListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMType GALGAS_sectionIRlist_2D_element::getter_mReturnType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mReturnType ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @sectionIRlist-element type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_sectionIRlist_2D_element ("sectionIRlist-element",
                                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_sectionIRlist_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sectionIRlist_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_sectionIRlist_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sectionIRlist_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sectionIRlist_2D_element GALGAS_sectionIRlist_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_sectionIRlist_2D_element result ;
  const GALGAS_sectionIRlist_2D_element * p = (const GALGAS_sectionIRlist_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_sectionIRlist_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sectionIRlist-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

GALGAS_initListAST_2D_element::GALGAS_initListAST_2D_element (void) :
mProperty_mInit () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initListAST_2D_element::~ GALGAS_initListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initListAST_2D_element::GALGAS_initListAST_2D_element (const GALGAS_initAST & inOperand0) :
mProperty_mInit (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initListAST_2D_element GALGAS_initListAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_initListAST_2D_element (GALGAS_initAST::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initListAST_2D_element GALGAS_initListAST_2D_element::constructor_new (const GALGAS_initAST & inOperand0 
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_initListAST_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_initListAST_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_initListAST_2D_element::objectCompare (const GALGAS_initListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mInit.objectCompare (inOperand.mProperty_mInit) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_initListAST_2D_element::isValid (void) const {
  return mProperty_mInit.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_initListAST_2D_element::drop (void) {
  mProperty_mInit.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_initListAST_2D_element::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "<struct @initListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mInit.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initAST GALGAS_initListAST_2D_element::getter_mInit (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInit ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @initListAST-element type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_initListAST_2D_element ("initListAST-element",
                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_initListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_initListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_initListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_initListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initListAST_2D_element GALGAS_initListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_initListAST_2D_element result ;
  const GALGAS_initListAST_2D_element * p = (const GALGAS_initListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_initListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("initListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
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
mProperty_mPriority (),
mProperty_mAllocaList (),
mProperty_mInstructionListIR () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initListIR_2D_element::~ GALGAS_initListIR_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initListIR_2D_element::GALGAS_initListIR_2D_element (const GALGAS_PLMType & inOperand0,
                                                            const GALGAS_string & inOperand1,
                                                            const GALGAS_bigint & inOperand2,
                                                            const GALGAS_allocaList & inOperand3,
                                                            const GALGAS_instructionListIR & inOperand4) :
mProperty_mSelfType (inOperand0),
mProperty_mGlobalVariable (inOperand1),
mProperty_mPriority (inOperand2),
mProperty_mAllocaList (inOperand3),
mProperty_mInstructionListIR (inOperand4) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initListIR_2D_element GALGAS_initListIR_2D_element::constructor_new (const GALGAS_PLMType & inOperand0,
                                                                            const GALGAS_string & inOperand1,
                                                                            const GALGAS_bigint & inOperand2,
                                                                            const GALGAS_allocaList & inOperand3,
                                                                            const GALGAS_instructionListIR & inOperand4 
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_initListIR_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_initListIR_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
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
  return mProperty_mSelfType.isValid () && mProperty_mGlobalVariable.isValid () && mProperty_mPriority.isValid () && mProperty_mAllocaList.isValid () && mProperty_mInstructionListIR.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_initListIR_2D_element::drop (void) {
  mProperty_mSelfType.drop () ;
  mProperty_mGlobalVariable.drop () ;
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
    mProperty_mPriority.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mAllocaList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mInstructionListIR.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMType GALGAS_initListIR_2D_element::getter_mSelfType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSelfType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_initListIR_2D_element::getter_mGlobalVariable (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGlobalVariable ;
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
                                                                                            const GALGAS_routineFormalArgumentListAST & inOperand4,
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
                                                                                                            const GALGAS_routineFormalArgumentListAST & inOperand4,
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

GALGAS_routineFormalArgumentListAST GALGAS_functionDeclarationListAST_2D_element::getter_mFunctionFormalArgumentList (UNUSED_LOCATION_ARGS) const {
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

GALGAS_routineFormalArgumentListAST_2D_element::GALGAS_routineFormalArgumentListAST_2D_element (void) :
mProperty_mFormalArgumentPassingMode (),
mProperty_mSelector (),
mProperty_mFormalArgumentTypeName (),
mProperty_mFormalArgumentName () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineFormalArgumentListAST_2D_element::~ GALGAS_routineFormalArgumentListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineFormalArgumentListAST_2D_element::GALGAS_routineFormalArgumentListAST_2D_element (const GALGAS_procFormalArgumentPassingMode & inOperand0,
                                                                                                const GALGAS_lstring & inOperand1,
                                                                                                const GALGAS_lstring & inOperand2,
                                                                                                const GALGAS_lstring & inOperand3) :
mProperty_mFormalArgumentPassingMode (inOperand0),
mProperty_mSelector (inOperand1),
mProperty_mFormalArgumentTypeName (inOperand2),
mProperty_mFormalArgumentName (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineFormalArgumentListAST_2D_element GALGAS_routineFormalArgumentListAST_2D_element::constructor_new (const GALGAS_procFormalArgumentPassingMode & inOperand0,
                                                                                                                const GALGAS_lstring & inOperand1,
                                                                                                                const GALGAS_lstring & inOperand2,
                                                                                                                const GALGAS_lstring & inOperand3 
                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_routineFormalArgumentListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_routineFormalArgumentListAST_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_routineFormalArgumentListAST_2D_element::objectCompare (const GALGAS_routineFormalArgumentListAST_2D_element & inOperand) const {
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

bool GALGAS_routineFormalArgumentListAST_2D_element::isValid (void) const {
  return mProperty_mFormalArgumentPassingMode.isValid () && mProperty_mSelector.isValid () && mProperty_mFormalArgumentTypeName.isValid () && mProperty_mFormalArgumentName.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineFormalArgumentListAST_2D_element::drop (void) {
  mProperty_mFormalArgumentPassingMode.drop () ;
  mProperty_mSelector.drop () ;
  mProperty_mFormalArgumentTypeName.drop () ;
  mProperty_mFormalArgumentName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineFormalArgumentListAST_2D_element::description (C_String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString << "<struct @routineFormalArgumentListAST-element:" ;
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

GALGAS_procFormalArgumentPassingMode GALGAS_routineFormalArgumentListAST_2D_element::getter_mFormalArgumentPassingMode (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFormalArgumentPassingMode ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_routineFormalArgumentListAST_2D_element::getter_mSelector (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSelector ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_routineFormalArgumentListAST_2D_element::getter_mFormalArgumentTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFormalArgumentTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_routineFormalArgumentListAST_2D_element::getter_mFormalArgumentName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFormalArgumentName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @routineFormalArgumentListAST-element type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_routineFormalArgumentListAST_2D_element ("routineFormalArgumentListAST-element",
                                                                NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_routineFormalArgumentListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineFormalArgumentListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_routineFormalArgumentListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_routineFormalArgumentListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineFormalArgumentListAST_2D_element GALGAS_routineFormalArgumentListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_routineFormalArgumentListAST_2D_element result ;
  const GALGAS_routineFormalArgumentListAST_2D_element * p = (const GALGAS_routineFormalArgumentListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_routineFormalArgumentListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineFormalArgumentListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
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
                                                                                                              const GALGAS_routineFormalArgumentListAST & inOperand3,
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
                                                                                                                              const GALGAS_routineFormalArgumentListAST & inOperand3,
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

GALGAS_routineFormalArgumentListAST GALGAS_requiredProcedureDeclarationListAST_2D_element::getter_mFormalArgumentList (UNUSED_LOCATION_ARGS) const {
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
mProperty_mModuleName (),
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
                                                                                  const GALGAS_instructionListAST & inOperand3,
                                                                                  const GALGAS_location & inOperand4) :
mProperty_mISRName (inOperand0),
mProperty_mMode (inOperand1),
mProperty_mModuleName (inOperand2),
mProperty_mISRInstructionList (inOperand3),
mProperty_mEndOfISRDeclaration (inOperand4) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_isrDeclarationListAST_2D_element GALGAS_isrDeclarationListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                  const GALGAS_mode & inOperand1,
                                                                                                  const GALGAS_lstring & inOperand2,
                                                                                                  const GALGAS_instructionListAST & inOperand3,
                                                                                                  const GALGAS_location & inOperand4 
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_isrDeclarationListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_isrDeclarationListAST_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
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
    result = mProperty_mModuleName.objectCompare (inOperand.mProperty_mModuleName) ;
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
  return mProperty_mISRName.isValid () && mProperty_mMode.isValid () && mProperty_mModuleName.isValid () && mProperty_mISRInstructionList.isValid () && mProperty_mEndOfISRDeclaration.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_isrDeclarationListAST_2D_element::drop (void) {
  mProperty_mISRName.drop () ;
  mProperty_mMode.drop () ;
  mProperty_mModuleName.drop () ;
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
    mProperty_mModuleName.description (ioString, inIndentation+1) ;
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

GALGAS_lstring GALGAS_isrDeclarationListAST_2D_element::getter_mModuleName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mModuleName ;
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
                                                                                      const GALGAS_routineFormalArgumentListAST & inOperand3,
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
                                                                                                      const GALGAS_routineFormalArgumentListAST & inOperand3,
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

GALGAS_routineFormalArgumentListAST GALGAS_guardDeclarationListAST_2D_element::getter_mGuardFormalArgumentList (UNUSED_LOCATION_ARGS) const {
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

