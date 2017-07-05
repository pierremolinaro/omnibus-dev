#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-7.h"


//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_forInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_forInstructionAST * p = (const cPtr_forInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_forInstructionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mVarName.objectCompare (p->mProperty_mVarName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIteratedObject.objectCompare (p->mProperty_mIteratedObject) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mWhileExpression.objectCompare (p->mProperty_mWhileExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOf_5F_whileExpression.objectCompare (p->mProperty_mEndOf_5F_whileExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mStaticWhileExpression.objectCompare (p->mProperty_mStaticWhileExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mDoInstructionList.objectCompare (p->mProperty_mDoInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOf_5F_for_5F_instruction.objectCompare (p->mProperty_mEndOf_5F_for_5F_instruction) ;
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

GALGAS_forInstructionAST GALGAS_forInstructionAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                    const GALGAS_lstring & inAttribute_mVarName,
                                                                    const GALGAS_lstring & inAttribute_mIteratedObject,
                                                                    const GALGAS_expressionAST & inAttribute_mWhileExpression,
                                                                    const GALGAS_location & inAttribute_mEndOf_5F_whileExpression,
                                                                    const GALGAS_bool & inAttribute_mStaticWhileExpression,
                                                                    const GALGAS_instructionListAST & inAttribute_mDoInstructionList,
                                                                    const GALGAS_location & inAttribute_mEndOf_5F_for_5F_instruction
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_forInstructionAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mVarName.isValid () && inAttribute_mIteratedObject.isValid () && inAttribute_mWhileExpression.isValid () && inAttribute_mEndOf_5F_whileExpression.isValid () && inAttribute_mStaticWhileExpression.isValid () && inAttribute_mDoInstructionList.isValid () && inAttribute_mEndOf_5F_for_5F_instruction.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_forInstructionAST (inAttribute_mInstructionLocation, inAttribute_mVarName, inAttribute_mIteratedObject, inAttribute_mWhileExpression, inAttribute_mEndOf_5F_whileExpression, inAttribute_mStaticWhileExpression, inAttribute_mDoInstructionList, inAttribute_mEndOf_5F_for_5F_instruction COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_forInstructionAST::getter_mVarName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_forInstructionAST * p = (const cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    result = p->mProperty_mVarName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_forInstructionAST::getter_mVarName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mVarName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_forInstructionAST::getter_mIteratedObject (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_forInstructionAST * p = (const cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    result = p->mProperty_mIteratedObject ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_forInstructionAST::getter_mIteratedObject (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIteratedObject ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST GALGAS_forInstructionAST::getter_mWhileExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_forInstructionAST * p = (const cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    result = p->mProperty_mWhileExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST cPtr_forInstructionAST::getter_mWhileExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mWhileExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_forInstructionAST::getter_mEndOf_5F_whileExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_forInstructionAST * p = (const cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    result = p->mProperty_mEndOf_5F_whileExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_forInstructionAST::getter_mEndOf_5F_whileExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOf_5F_whileExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_forInstructionAST::getter_mStaticWhileExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_forInstructionAST * p = (const cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    result = p->mProperty_mStaticWhileExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_forInstructionAST::getter_mStaticWhileExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mStaticWhileExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST GALGAS_forInstructionAST::getter_mDoInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_instructionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_forInstructionAST * p = (const cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    result = p->mProperty_mDoInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST cPtr_forInstructionAST::getter_mDoInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDoInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_forInstructionAST::getter_mEndOf_5F_for_5F_instruction (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_forInstructionAST * p = (const cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    result = p->mProperty_mEndOf_5F_for_5F_instruction ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_forInstructionAST::getter_mEndOf_5F_for_5F_instruction (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOf_5F_for_5F_instruction ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                     Pointer class for @forInstructionAST class                                      *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_forInstructionAST::cPtr_forInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                const GALGAS_lstring & in_mVarName,
                                                const GALGAS_lstring & in_mIteratedObject,
                                                const GALGAS_expressionAST & in_mWhileExpression,
                                                const GALGAS_location & in_mEndOf_5F_whileExpression,
                                                const GALGAS_bool & in_mStaticWhileExpression,
                                                const GALGAS_instructionListAST & in_mDoInstructionList,
                                                const GALGAS_location & in_mEndOf_5F_for_5F_instruction
                                                COMMA_LOCATION_ARGS) :
cPtr_instructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mVarName (in_mVarName),
mProperty_mIteratedObject (in_mIteratedObject),
mProperty_mWhileExpression (in_mWhileExpression),
mProperty_mEndOf_5F_whileExpression (in_mEndOf_5F_whileExpression),
mProperty_mStaticWhileExpression (in_mStaticWhileExpression),
mProperty_mDoInstructionList (in_mDoInstructionList),
mProperty_mEndOf_5F_for_5F_instruction (in_mEndOf_5F_for_5F_instruction) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_forInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forInstructionAST ;
}

void cPtr_forInstructionAST::description (C_String & ioString,
                                          const int32_t inIndentation) const {
  ioString << "[@forInstructionAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mVarName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mIteratedObject.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mWhileExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOf_5F_whileExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mStaticWhileExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mDoInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOf_5F_for_5F_instruction.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_forInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_forInstructionAST (mProperty_mInstructionLocation, mProperty_mVarName, mProperty_mIteratedObject, mProperty_mWhileExpression, mProperty_mEndOf_5F_whileExpression, mProperty_mStaticWhileExpression, mProperty_mDoInstructionList, mProperty_mEndOf_5F_for_5F_instruction COMMA_THERE)) ;
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

typeComparisonResult cPtr_forInstructionSE::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_forInstructionSE * p = (const cPtr_forInstructionSE *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_forInstructionSE) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mVarName.objectCompare (p->mProperty_mVarName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIteratedObject.objectCompare (p->mProperty_mIteratedObject) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mWhileExpression.objectCompare (p->mProperty_mWhileExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOf_5F_whileExpression.objectCompare (p->mProperty_mEndOf_5F_whileExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mStaticWhileExpression.objectCompare (p->mProperty_mStaticWhileExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mDoInstructionList.objectCompare (p->mProperty_mDoInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOf_5F_for_5F_instruction.objectCompare (p->mProperty_mEndOf_5F_for_5F_instruction) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_forInstructionSE::objectCompare (const GALGAS_forInstructionSE & inOperand) const {
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

GALGAS_forInstructionSE::GALGAS_forInstructionSE (void) :
GALGAS_instructionSE () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_forInstructionSE::GALGAS_forInstructionSE (const cPtr_forInstructionSE * inSourcePtr) :
GALGAS_instructionSE (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_forInstructionSE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_forInstructionSE GALGAS_forInstructionSE::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                  const GALGAS_lstring & inAttribute_mVarName,
                                                                  const GALGAS_lstring & inAttribute_mIteratedObject,
                                                                  const GALGAS_expressionSE & inAttribute_mWhileExpression,
                                                                  const GALGAS_location & inAttribute_mEndOf_5F_whileExpression,
                                                                  const GALGAS_bool & inAttribute_mStaticWhileExpression,
                                                                  const GALGAS_instructionListSE & inAttribute_mDoInstructionList,
                                                                  const GALGAS_location & inAttribute_mEndOf_5F_for_5F_instruction
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_forInstructionSE result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mVarName.isValid () && inAttribute_mIteratedObject.isValid () && inAttribute_mWhileExpression.isValid () && inAttribute_mEndOf_5F_whileExpression.isValid () && inAttribute_mStaticWhileExpression.isValid () && inAttribute_mDoInstructionList.isValid () && inAttribute_mEndOf_5F_for_5F_instruction.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_forInstructionSE (inAttribute_mInstructionLocation, inAttribute_mVarName, inAttribute_mIteratedObject, inAttribute_mWhileExpression, inAttribute_mEndOf_5F_whileExpression, inAttribute_mStaticWhileExpression, inAttribute_mDoInstructionList, inAttribute_mEndOf_5F_for_5F_instruction COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_forInstructionSE::getter_mVarName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_forInstructionSE * p = (const cPtr_forInstructionSE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionSE) ;
    result = p->mProperty_mVarName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_forInstructionSE::getter_mVarName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mVarName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_forInstructionSE::getter_mIteratedObject (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_forInstructionSE * p = (const cPtr_forInstructionSE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionSE) ;
    result = p->mProperty_mIteratedObject ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_forInstructionSE::getter_mIteratedObject (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIteratedObject ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionSE GALGAS_forInstructionSE::getter_mWhileExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expressionSE result ;
  if (NULL != mObjectPtr) {
    const cPtr_forInstructionSE * p = (const cPtr_forInstructionSE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionSE) ;
    result = p->mProperty_mWhileExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionSE cPtr_forInstructionSE::getter_mWhileExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mWhileExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_forInstructionSE::getter_mEndOf_5F_whileExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_forInstructionSE * p = (const cPtr_forInstructionSE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionSE) ;
    result = p->mProperty_mEndOf_5F_whileExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_forInstructionSE::getter_mEndOf_5F_whileExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOf_5F_whileExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_forInstructionSE::getter_mStaticWhileExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_forInstructionSE * p = (const cPtr_forInstructionSE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionSE) ;
    result = p->mProperty_mStaticWhileExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_forInstructionSE::getter_mStaticWhileExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mStaticWhileExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListSE GALGAS_forInstructionSE::getter_mDoInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_instructionListSE result ;
  if (NULL != mObjectPtr) {
    const cPtr_forInstructionSE * p = (const cPtr_forInstructionSE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionSE) ;
    result = p->mProperty_mDoInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListSE cPtr_forInstructionSE::getter_mDoInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDoInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_forInstructionSE::getter_mEndOf_5F_for_5F_instruction (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_forInstructionSE * p = (const cPtr_forInstructionSE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionSE) ;
    result = p->mProperty_mEndOf_5F_for_5F_instruction ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_forInstructionSE::getter_mEndOf_5F_for_5F_instruction (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOf_5F_for_5F_instruction ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                      Pointer class for @forInstructionSE class                                      *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_forInstructionSE::cPtr_forInstructionSE (const GALGAS_location & in_mInstructionLocation,
                                              const GALGAS_lstring & in_mVarName,
                                              const GALGAS_lstring & in_mIteratedObject,
                                              const GALGAS_expressionSE & in_mWhileExpression,
                                              const GALGAS_location & in_mEndOf_5F_whileExpression,
                                              const GALGAS_bool & in_mStaticWhileExpression,
                                              const GALGAS_instructionListSE & in_mDoInstructionList,
                                              const GALGAS_location & in_mEndOf_5F_for_5F_instruction
                                              COMMA_LOCATION_ARGS) :
cPtr_instructionSE (in_mInstructionLocation COMMA_THERE),
mProperty_mVarName (in_mVarName),
mProperty_mIteratedObject (in_mIteratedObject),
mProperty_mWhileExpression (in_mWhileExpression),
mProperty_mEndOf_5F_whileExpression (in_mEndOf_5F_whileExpression),
mProperty_mStaticWhileExpression (in_mStaticWhileExpression),
mProperty_mDoInstructionList (in_mDoInstructionList),
mProperty_mEndOf_5F_for_5F_instruction (in_mEndOf_5F_for_5F_instruction) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_forInstructionSE::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forInstructionSE ;
}

void cPtr_forInstructionSE::description (C_String & ioString,
                                         const int32_t inIndentation) const {
  ioString << "[@forInstructionSE:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mVarName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mIteratedObject.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mWhileExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOf_5F_whileExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mStaticWhileExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mDoInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOf_5F_for_5F_instruction.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_forInstructionSE::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_forInstructionSE (mProperty_mInstructionLocation, mProperty_mVarName, mProperty_mIteratedObject, mProperty_mWhileExpression, mProperty_mEndOf_5F_whileExpression, mProperty_mStaticWhileExpression, mProperty_mDoInstructionList, mProperty_mEndOf_5F_for_5F_instruction COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @forInstructionSE type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_forInstructionSE ("forInstructionSE",
                                         & kTypeDescriptor_GALGAS_instructionSE) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_forInstructionSE::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forInstructionSE ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_forInstructionSE::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_forInstructionSE (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_forInstructionSE GALGAS_forInstructionSE::extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_forInstructionSE result ;
  const GALGAS_forInstructionSE * p = (const GALGAS_forInstructionSE *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_forInstructionSE *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("forInstructionSE", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_forInstructionOnArrayIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_forInstructionOnArrayIR * p = (const cPtr_forInstructionOnArrayIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_forInstructionOnArrayIR) ;
  if (kOperandEqual == result) {
    result = mProperty_mEnumeratedValueName.objectCompare (p->mProperty_mEnumeratedValueName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIteratedObjectName.objectCompare (p->mProperty_mIteratedObjectName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIteratedObject.objectCompare (p->mProperty_mIteratedObject) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mWhileInstructionList.objectCompare (p->mProperty_mWhileInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mWhileExpressionResult.objectCompare (p->mProperty_mWhileExpressionResult) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mDoInstructionList.objectCompare (p->mProperty_mDoInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mElementType.objectCompare (p->mProperty_mElementType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mArraySize.objectCompare (p->mProperty_mArraySize) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInvokedFunctionSet.objectCompare (p->mProperty_mInvokedFunctionSet) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_forInstructionOnArrayIR::objectCompare (const GALGAS_forInstructionOnArrayIR & inOperand) const {
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

GALGAS_forInstructionOnArrayIR::GALGAS_forInstructionOnArrayIR (void) :
GALGAS_abstractInstructionIR () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_forInstructionOnArrayIR::GALGAS_forInstructionOnArrayIR (const cPtr_forInstructionOnArrayIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_forInstructionOnArrayIR) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_forInstructionOnArrayIR GALGAS_forInstructionOnArrayIR::constructor_new (const GALGAS_string & inAttribute_mEnumeratedValueName,
                                                                                const GALGAS_lstring & inAttribute_mIteratedObjectName,
                                                                                const GALGAS_objectIR & inAttribute_mIteratedObject,
                                                                                const GALGAS_instructionListIR & inAttribute_mWhileInstructionList,
                                                                                const GALGAS_objectIR & inAttribute_mWhileExpressionResult,
                                                                                const GALGAS_instructionListIR & inAttribute_mDoInstructionList,
                                                                                const GALGAS_PLMType & inAttribute_mElementType,
                                                                                const GALGAS_uint & inAttribute_mArraySize,
                                                                                const GALGAS_stringset & inAttribute_mInvokedFunctionSet
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_forInstructionOnArrayIR result ;
  if (inAttribute_mEnumeratedValueName.isValid () && inAttribute_mIteratedObjectName.isValid () && inAttribute_mIteratedObject.isValid () && inAttribute_mWhileInstructionList.isValid () && inAttribute_mWhileExpressionResult.isValid () && inAttribute_mDoInstructionList.isValid () && inAttribute_mElementType.isValid () && inAttribute_mArraySize.isValid () && inAttribute_mInvokedFunctionSet.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_forInstructionOnArrayIR (inAttribute_mEnumeratedValueName, inAttribute_mIteratedObjectName, inAttribute_mIteratedObject, inAttribute_mWhileInstructionList, inAttribute_mWhileExpressionResult, inAttribute_mDoInstructionList, inAttribute_mElementType, inAttribute_mArraySize, inAttribute_mInvokedFunctionSet COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_forInstructionOnArrayIR::getter_mEnumeratedValueName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_forInstructionOnArrayIR * p = (const cPtr_forInstructionOnArrayIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnArrayIR) ;
    result = p->mProperty_mEnumeratedValueName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_forInstructionOnArrayIR::getter_mEnumeratedValueName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEnumeratedValueName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_forInstructionOnArrayIR::getter_mIteratedObjectName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_forInstructionOnArrayIR * p = (const cPtr_forInstructionOnArrayIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnArrayIR) ;
    result = p->mProperty_mIteratedObjectName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_forInstructionOnArrayIR::getter_mIteratedObjectName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIteratedObjectName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_forInstructionOnArrayIR::getter_mIteratedObject (UNUSED_LOCATION_ARGS) const {
  GALGAS_objectIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_forInstructionOnArrayIR * p = (const cPtr_forInstructionOnArrayIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnArrayIR) ;
    result = p->mProperty_mIteratedObject ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR cPtr_forInstructionOnArrayIR::getter_mIteratedObject (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIteratedObject ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR GALGAS_forInstructionOnArrayIR::getter_mWhileInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_instructionListIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_forInstructionOnArrayIR * p = (const cPtr_forInstructionOnArrayIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnArrayIR) ;
    result = p->mProperty_mWhileInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR cPtr_forInstructionOnArrayIR::getter_mWhileInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mWhileInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_forInstructionOnArrayIR::getter_mWhileExpressionResult (UNUSED_LOCATION_ARGS) const {
  GALGAS_objectIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_forInstructionOnArrayIR * p = (const cPtr_forInstructionOnArrayIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnArrayIR) ;
    result = p->mProperty_mWhileExpressionResult ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR cPtr_forInstructionOnArrayIR::getter_mWhileExpressionResult (UNUSED_LOCATION_ARGS) const {
  return mProperty_mWhileExpressionResult ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR GALGAS_forInstructionOnArrayIR::getter_mDoInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_instructionListIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_forInstructionOnArrayIR * p = (const cPtr_forInstructionOnArrayIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnArrayIR) ;
    result = p->mProperty_mDoInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR cPtr_forInstructionOnArrayIR::getter_mDoInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDoInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMType GALGAS_forInstructionOnArrayIR::getter_mElementType (UNUSED_LOCATION_ARGS) const {
  GALGAS_PLMType result ;
  if (NULL != mObjectPtr) {
    const cPtr_forInstructionOnArrayIR * p = (const cPtr_forInstructionOnArrayIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnArrayIR) ;
    result = p->mProperty_mElementType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMType cPtr_forInstructionOnArrayIR::getter_mElementType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mElementType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_forInstructionOnArrayIR::getter_mArraySize (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_forInstructionOnArrayIR * p = (const cPtr_forInstructionOnArrayIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnArrayIR) ;
    result = p->mProperty_mArraySize ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cPtr_forInstructionOnArrayIR::getter_mArraySize (UNUSED_LOCATION_ARGS) const {
  return mProperty_mArraySize ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringset GALGAS_forInstructionOnArrayIR::getter_mInvokedFunctionSet (UNUSED_LOCATION_ARGS) const {
  GALGAS_stringset result ;
  if (NULL != mObjectPtr) {
    const cPtr_forInstructionOnArrayIR * p = (const cPtr_forInstructionOnArrayIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnArrayIR) ;
    result = p->mProperty_mInvokedFunctionSet ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringset cPtr_forInstructionOnArrayIR::getter_mInvokedFunctionSet (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInvokedFunctionSet ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                  Pointer class for @forInstructionOnArrayIR class                                   *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_forInstructionOnArrayIR::cPtr_forInstructionOnArrayIR (const GALGAS_string & in_mEnumeratedValueName,
                                                            const GALGAS_lstring & in_mIteratedObjectName,
                                                            const GALGAS_objectIR & in_mIteratedObject,
                                                            const GALGAS_instructionListIR & in_mWhileInstructionList,
                                                            const GALGAS_objectIR & in_mWhileExpressionResult,
                                                            const GALGAS_instructionListIR & in_mDoInstructionList,
                                                            const GALGAS_PLMType & in_mElementType,
                                                            const GALGAS_uint & in_mArraySize,
                                                            const GALGAS_stringset & in_mInvokedFunctionSet
                                                            COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mEnumeratedValueName (in_mEnumeratedValueName),
mProperty_mIteratedObjectName (in_mIteratedObjectName),
mProperty_mIteratedObject (in_mIteratedObject),
mProperty_mWhileInstructionList (in_mWhileInstructionList),
mProperty_mWhileExpressionResult (in_mWhileExpressionResult),
mProperty_mDoInstructionList (in_mDoInstructionList),
mProperty_mElementType (in_mElementType),
mProperty_mArraySize (in_mArraySize),
mProperty_mInvokedFunctionSet (in_mInvokedFunctionSet) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_forInstructionOnArrayIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forInstructionOnArrayIR ;
}

void cPtr_forInstructionOnArrayIR::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "[@forInstructionOnArrayIR:" ;
  mProperty_mEnumeratedValueName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mIteratedObjectName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mIteratedObject.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mWhileInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mWhileExpressionResult.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mDoInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mElementType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mArraySize.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mInvokedFunctionSet.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_forInstructionOnArrayIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_forInstructionOnArrayIR (mProperty_mEnumeratedValueName, mProperty_mIteratedObjectName, mProperty_mIteratedObject, mProperty_mWhileInstructionList, mProperty_mWhileExpressionResult, mProperty_mDoInstructionList, mProperty_mElementType, mProperty_mArraySize, mProperty_mInvokedFunctionSet COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @forInstructionOnArrayIR type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_forInstructionOnArrayIR ("forInstructionOnArrayIR",
                                                & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_forInstructionOnArrayIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forInstructionOnArrayIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_forInstructionOnArrayIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_forInstructionOnArrayIR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_forInstructionOnArrayIR GALGAS_forInstructionOnArrayIR::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_forInstructionOnArrayIR result ;
  const GALGAS_forInstructionOnArrayIR * p = (const GALGAS_forInstructionOnArrayIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_forInstructionOnArrayIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("forInstructionOnArrayIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

typeComparisonResult cPtr_forLowerUpperBoundInstructionSE::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_forLowerUpperBoundInstructionSE * p = (const cPtr_forLowerUpperBoundInstructionSE *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionSE) ;
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


typeComparisonResult GALGAS_forLowerUpperBoundInstructionSE::objectCompare (const GALGAS_forLowerUpperBoundInstructionSE & inOperand) const {
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

GALGAS_forLowerUpperBoundInstructionSE::GALGAS_forLowerUpperBoundInstructionSE (void) :
GALGAS_instructionSE () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_forLowerUpperBoundInstructionSE::GALGAS_forLowerUpperBoundInstructionSE (const cPtr_forLowerUpperBoundInstructionSE * inSourcePtr) :
GALGAS_instructionSE (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_forLowerUpperBoundInstructionSE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_forLowerUpperBoundInstructionSE GALGAS_forLowerUpperBoundInstructionSE::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                const GALGAS_lstring & inAttribute_mVarName,
                                                                                                const GALGAS_lstring & inAttribute_mTypeName,
                                                                                                const GALGAS_expressionSE & inAttribute_mLowerBoundExpression,
                                                                                                const GALGAS_location & inAttribute_mEndOf_5F_lowerBoundExpression_5F_instruction,
                                                                                                const GALGAS_expressionSE & inAttribute_mUpperBoundExpression,
                                                                                                const GALGAS_location & inAttribute_mEndOf_5F_upperBoundExpression_5F_instruction,
                                                                                                const GALGAS_instructionListSE & inAttribute_mDoInstructionList,
                                                                                                const GALGAS_location & inAttribute_mEndOf_5F_do_5F_instruction
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_forLowerUpperBoundInstructionSE result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mVarName.isValid () && inAttribute_mTypeName.isValid () && inAttribute_mLowerBoundExpression.isValid () && inAttribute_mEndOf_5F_lowerBoundExpression_5F_instruction.isValid () && inAttribute_mUpperBoundExpression.isValid () && inAttribute_mEndOf_5F_upperBoundExpression_5F_instruction.isValid () && inAttribute_mDoInstructionList.isValid () && inAttribute_mEndOf_5F_do_5F_instruction.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_forLowerUpperBoundInstructionSE (inAttribute_mInstructionLocation, inAttribute_mVarName, inAttribute_mTypeName, inAttribute_mLowerBoundExpression, inAttribute_mEndOf_5F_lowerBoundExpression_5F_instruction, inAttribute_mUpperBoundExpression, inAttribute_mEndOf_5F_upperBoundExpression_5F_instruction, inAttribute_mDoInstructionList, inAttribute_mEndOf_5F_do_5F_instruction COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_forLowerUpperBoundInstructionSE::getter_mVarName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_forLowerUpperBoundInstructionSE * p = (const cPtr_forLowerUpperBoundInstructionSE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionSE) ;
    result = p->mProperty_mVarName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_forLowerUpperBoundInstructionSE::getter_mVarName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mVarName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_forLowerUpperBoundInstructionSE::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_forLowerUpperBoundInstructionSE * p = (const cPtr_forLowerUpperBoundInstructionSE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionSE) ;
    result = p->mProperty_mTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_forLowerUpperBoundInstructionSE::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionSE GALGAS_forLowerUpperBoundInstructionSE::getter_mLowerBoundExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expressionSE result ;
  if (NULL != mObjectPtr) {
    const cPtr_forLowerUpperBoundInstructionSE * p = (const cPtr_forLowerUpperBoundInstructionSE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionSE) ;
    result = p->mProperty_mLowerBoundExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionSE cPtr_forLowerUpperBoundInstructionSE::getter_mLowerBoundExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLowerBoundExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_forLowerUpperBoundInstructionSE::getter_mEndOf_5F_lowerBoundExpression_5F_instruction (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_forLowerUpperBoundInstructionSE * p = (const cPtr_forLowerUpperBoundInstructionSE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionSE) ;
    result = p->mProperty_mEndOf_5F_lowerBoundExpression_5F_instruction ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_forLowerUpperBoundInstructionSE::getter_mEndOf_5F_lowerBoundExpression_5F_instruction (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOf_5F_lowerBoundExpression_5F_instruction ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionSE GALGAS_forLowerUpperBoundInstructionSE::getter_mUpperBoundExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expressionSE result ;
  if (NULL != mObjectPtr) {
    const cPtr_forLowerUpperBoundInstructionSE * p = (const cPtr_forLowerUpperBoundInstructionSE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionSE) ;
    result = p->mProperty_mUpperBoundExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionSE cPtr_forLowerUpperBoundInstructionSE::getter_mUpperBoundExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mUpperBoundExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_forLowerUpperBoundInstructionSE::getter_mEndOf_5F_upperBoundExpression_5F_instruction (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_forLowerUpperBoundInstructionSE * p = (const cPtr_forLowerUpperBoundInstructionSE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionSE) ;
    result = p->mProperty_mEndOf_5F_upperBoundExpression_5F_instruction ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_forLowerUpperBoundInstructionSE::getter_mEndOf_5F_upperBoundExpression_5F_instruction (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOf_5F_upperBoundExpression_5F_instruction ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListSE GALGAS_forLowerUpperBoundInstructionSE::getter_mDoInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_instructionListSE result ;
  if (NULL != mObjectPtr) {
    const cPtr_forLowerUpperBoundInstructionSE * p = (const cPtr_forLowerUpperBoundInstructionSE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionSE) ;
    result = p->mProperty_mDoInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListSE cPtr_forLowerUpperBoundInstructionSE::getter_mDoInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDoInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_forLowerUpperBoundInstructionSE::getter_mEndOf_5F_do_5F_instruction (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_forLowerUpperBoundInstructionSE * p = (const cPtr_forLowerUpperBoundInstructionSE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionSE) ;
    result = p->mProperty_mEndOf_5F_do_5F_instruction ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_forLowerUpperBoundInstructionSE::getter_mEndOf_5F_do_5F_instruction (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOf_5F_do_5F_instruction ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                              Pointer class for @forLowerUpperBoundInstructionSE class                               *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_forLowerUpperBoundInstructionSE::cPtr_forLowerUpperBoundInstructionSE (const GALGAS_location & in_mInstructionLocation,
                                                                            const GALGAS_lstring & in_mVarName,
                                                                            const GALGAS_lstring & in_mTypeName,
                                                                            const GALGAS_expressionSE & in_mLowerBoundExpression,
                                                                            const GALGAS_location & in_mEndOf_5F_lowerBoundExpression_5F_instruction,
                                                                            const GALGAS_expressionSE & in_mUpperBoundExpression,
                                                                            const GALGAS_location & in_mEndOf_5F_upperBoundExpression_5F_instruction,
                                                                            const GALGAS_instructionListSE & in_mDoInstructionList,
                                                                            const GALGAS_location & in_mEndOf_5F_do_5F_instruction
                                                                            COMMA_LOCATION_ARGS) :
cPtr_instructionSE (in_mInstructionLocation COMMA_THERE),
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

const C_galgas_type_descriptor * cPtr_forLowerUpperBoundInstructionSE::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forLowerUpperBoundInstructionSE ;
}

void cPtr_forLowerUpperBoundInstructionSE::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "[@forLowerUpperBoundInstructionSE:" ;
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

acPtr_class * cPtr_forLowerUpperBoundInstructionSE::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_forLowerUpperBoundInstructionSE (mProperty_mInstructionLocation, mProperty_mVarName, mProperty_mTypeName, mProperty_mLowerBoundExpression, mProperty_mEndOf_5F_lowerBoundExpression_5F_instruction, mProperty_mUpperBoundExpression, mProperty_mEndOf_5F_upperBoundExpression_5F_instruction, mProperty_mDoInstructionList, mProperty_mEndOf_5F_do_5F_instruction COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @forLowerUpperBoundInstructionSE type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_forLowerUpperBoundInstructionSE ("forLowerUpperBoundInstructionSE",
                                                        & kTypeDescriptor_GALGAS_instructionSE) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_forLowerUpperBoundInstructionSE::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forLowerUpperBoundInstructionSE ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_forLowerUpperBoundInstructionSE::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_forLowerUpperBoundInstructionSE (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_forLowerUpperBoundInstructionSE GALGAS_forLowerUpperBoundInstructionSE::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_forLowerUpperBoundInstructionSE result ;
  const GALGAS_forLowerUpperBoundInstructionSE * p = (const GALGAS_forLowerUpperBoundInstructionSE *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_forLowerUpperBoundInstructionSE *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("forLowerUpperBoundInstructionSE", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_complexCallNoSelfInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_complexCallNoSelfInstructionAST * p = (const cPtr_complexCallNoSelfInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_complexCallNoSelfInstructionAST) ;
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
    result = mProperty_mAssignmentTargetAST.objectCompare (p->mProperty_mAssignmentTargetAST) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_complexCallNoSelfInstructionAST::objectCompare (const GALGAS_complexCallNoSelfInstructionAST & inOperand) const {
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

GALGAS_complexCallNoSelfInstructionAST::GALGAS_complexCallNoSelfInstructionAST (void) :
GALGAS_callInstructionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_complexCallNoSelfInstructionAST GALGAS_complexCallNoSelfInstructionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_complexCallNoSelfInstructionAST::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                                  GALGAS_effectiveArgumentListAST::constructor_emptyList (HERE),
                                                                  GALGAS_location::constructor_nowhere (HERE),
                                                                  GALGAS_LValueNoSelfAST::constructor_default (HERE)
                                                                  COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_complexCallNoSelfInstructionAST::GALGAS_complexCallNoSelfInstructionAST (const cPtr_complexCallNoSelfInstructionAST * inSourcePtr) :
GALGAS_callInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_complexCallNoSelfInstructionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_complexCallNoSelfInstructionAST GALGAS_complexCallNoSelfInstructionAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                const GALGAS_effectiveArgumentListAST & inAttribute_mArguments,
                                                                                                const GALGAS_location & inAttribute_mEndOfArguments,
                                                                                                const GALGAS_LValueNoSelfAST & inAttribute_mAssignmentTargetAST
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_complexCallNoSelfInstructionAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mArguments.isValid () && inAttribute_mEndOfArguments.isValid () && inAttribute_mAssignmentTargetAST.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_complexCallNoSelfInstructionAST (inAttribute_mInstructionLocation, inAttribute_mArguments, inAttribute_mEndOfArguments, inAttribute_mAssignmentTargetAST COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_LValueNoSelfAST GALGAS_complexCallNoSelfInstructionAST::getter_mAssignmentTargetAST (UNUSED_LOCATION_ARGS) const {
  GALGAS_LValueNoSelfAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_complexCallNoSelfInstructionAST * p = (const cPtr_complexCallNoSelfInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_complexCallNoSelfInstructionAST) ;
    result = p->mProperty_mAssignmentTargetAST ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_LValueNoSelfAST cPtr_complexCallNoSelfInstructionAST::getter_mAssignmentTargetAST (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAssignmentTargetAST ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                              Pointer class for @complexCallNoSelfInstructionAST class                               *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_complexCallNoSelfInstructionAST::cPtr_complexCallNoSelfInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                                            const GALGAS_effectiveArgumentListAST & in_mArguments,
                                                                            const GALGAS_location & in_mEndOfArguments,
                                                                            const GALGAS_LValueNoSelfAST & in_mAssignmentTargetAST
                                                                            COMMA_LOCATION_ARGS) :
cPtr_callInstructionAST (in_mInstructionLocation, in_mArguments, in_mEndOfArguments COMMA_THERE),
mProperty_mAssignmentTargetAST (in_mAssignmentTargetAST) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_complexCallNoSelfInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_complexCallNoSelfInstructionAST ;
}

void cPtr_complexCallNoSelfInstructionAST::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "[@complexCallNoSelfInstructionAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mArguments.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOfArguments.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mAssignmentTargetAST.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_complexCallNoSelfInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_complexCallNoSelfInstructionAST (mProperty_mInstructionLocation, mProperty_mArguments, mProperty_mEndOfArguments, mProperty_mAssignmentTargetAST COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @complexCallNoSelfInstructionAST type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_complexCallNoSelfInstructionAST ("complexCallNoSelfInstructionAST",
                                                        & kTypeDescriptor_GALGAS_callInstructionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_complexCallNoSelfInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_complexCallNoSelfInstructionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_complexCallNoSelfInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_complexCallNoSelfInstructionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_complexCallNoSelfInstructionAST GALGAS_complexCallNoSelfInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_complexCallNoSelfInstructionAST result ;
  const GALGAS_complexCallNoSelfInstructionAST * p = (const GALGAS_complexCallNoSelfInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_complexCallNoSelfInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("complexCallNoSelfInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_complexCallSelfInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_complexCallSelfInstructionAST * p = (const cPtr_complexCallSelfInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_complexCallSelfInstructionAST) ;
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
    result = mProperty_mAssignmentTargetAST.objectCompare (p->mProperty_mAssignmentTargetAST) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_complexCallSelfInstructionAST::objectCompare (const GALGAS_complexCallSelfInstructionAST & inOperand) const {
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

GALGAS_complexCallSelfInstructionAST::GALGAS_complexCallSelfInstructionAST (void) :
GALGAS_callInstructionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_complexCallSelfInstructionAST GALGAS_complexCallSelfInstructionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_complexCallSelfInstructionAST::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                                GALGAS_effectiveArgumentListAST::constructor_emptyList (HERE),
                                                                GALGAS_location::constructor_nowhere (HERE),
                                                                GALGAS_LValueSelfAST::constructor_default (HERE)
                                                                COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_complexCallSelfInstructionAST::GALGAS_complexCallSelfInstructionAST (const cPtr_complexCallSelfInstructionAST * inSourcePtr) :
GALGAS_callInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_complexCallSelfInstructionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_complexCallSelfInstructionAST GALGAS_complexCallSelfInstructionAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                            const GALGAS_effectiveArgumentListAST & inAttribute_mArguments,
                                                                                            const GALGAS_location & inAttribute_mEndOfArguments,
                                                                                            const GALGAS_LValueSelfAST & inAttribute_mAssignmentTargetAST
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_complexCallSelfInstructionAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mArguments.isValid () && inAttribute_mEndOfArguments.isValid () && inAttribute_mAssignmentTargetAST.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_complexCallSelfInstructionAST (inAttribute_mInstructionLocation, inAttribute_mArguments, inAttribute_mEndOfArguments, inAttribute_mAssignmentTargetAST COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_LValueSelfAST GALGAS_complexCallSelfInstructionAST::getter_mAssignmentTargetAST (UNUSED_LOCATION_ARGS) const {
  GALGAS_LValueSelfAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_complexCallSelfInstructionAST * p = (const cPtr_complexCallSelfInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_complexCallSelfInstructionAST) ;
    result = p->mProperty_mAssignmentTargetAST ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_LValueSelfAST cPtr_complexCallSelfInstructionAST::getter_mAssignmentTargetAST (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAssignmentTargetAST ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                               Pointer class for @complexCallSelfInstructionAST class                                *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_complexCallSelfInstructionAST::cPtr_complexCallSelfInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                                        const GALGAS_effectiveArgumentListAST & in_mArguments,
                                                                        const GALGAS_location & in_mEndOfArguments,
                                                                        const GALGAS_LValueSelfAST & in_mAssignmentTargetAST
                                                                        COMMA_LOCATION_ARGS) :
cPtr_callInstructionAST (in_mInstructionLocation, in_mArguments, in_mEndOfArguments COMMA_THERE),
mProperty_mAssignmentTargetAST (in_mAssignmentTargetAST) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_complexCallSelfInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_complexCallSelfInstructionAST ;
}

void cPtr_complexCallSelfInstructionAST::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "[@complexCallSelfInstructionAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mArguments.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOfArguments.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mAssignmentTargetAST.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_complexCallSelfInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_complexCallSelfInstructionAST (mProperty_mInstructionLocation, mProperty_mArguments, mProperty_mEndOfArguments, mProperty_mAssignmentTargetAST COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @complexCallSelfInstructionAST type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_complexCallSelfInstructionAST ("complexCallSelfInstructionAST",
                                                      & kTypeDescriptor_GALGAS_callInstructionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_complexCallSelfInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_complexCallSelfInstructionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_complexCallSelfInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_complexCallSelfInstructionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_complexCallSelfInstructionAST GALGAS_complexCallSelfInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_complexCallSelfInstructionAST result ;
  const GALGAS_complexCallSelfInstructionAST * p = (const GALGAS_complexCallSelfInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_complexCallSelfInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("complexCallSelfInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_simpleCallInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_simpleCallInstructionAST * p = (const cPtr_simpleCallInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_simpleCallInstructionAST) ;
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


typeComparisonResult GALGAS_simpleCallInstructionAST::objectCompare (const GALGAS_simpleCallInstructionAST & inOperand) const {
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

GALGAS_simpleCallInstructionAST::GALGAS_simpleCallInstructionAST (void) :
GALGAS_callInstructionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_simpleCallInstructionAST GALGAS_simpleCallInstructionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_simpleCallInstructionAST::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                           GALGAS_effectiveArgumentListAST::constructor_emptyList (HERE),
                                                           GALGAS_location::constructor_nowhere (HERE),
                                                           GALGAS_lstring::constructor_default (HERE)
                                                           COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_simpleCallInstructionAST::GALGAS_simpleCallInstructionAST (const cPtr_simpleCallInstructionAST * inSourcePtr) :
GALGAS_callInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_simpleCallInstructionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_simpleCallInstructionAST GALGAS_simpleCallInstructionAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                  const GALGAS_effectiveArgumentListAST & inAttribute_mArguments,
                                                                                  const GALGAS_location & inAttribute_mEndOfArguments,
                                                                                  const GALGAS_lstring & inAttribute_mSandAloneRoutineName
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_simpleCallInstructionAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mArguments.isValid () && inAttribute_mEndOfArguments.isValid () && inAttribute_mSandAloneRoutineName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_simpleCallInstructionAST (inAttribute_mInstructionLocation, inAttribute_mArguments, inAttribute_mEndOfArguments, inAttribute_mSandAloneRoutineName COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_simpleCallInstructionAST::getter_mSandAloneRoutineName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_simpleCallInstructionAST * p = (const cPtr_simpleCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_simpleCallInstructionAST) ;
    result = p->mProperty_mSandAloneRoutineName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_simpleCallInstructionAST::getter_mSandAloneRoutineName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSandAloneRoutineName ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                  Pointer class for @simpleCallInstructionAST class                                  *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_simpleCallInstructionAST::cPtr_simpleCallInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                              const GALGAS_effectiveArgumentListAST & in_mArguments,
                                                              const GALGAS_location & in_mEndOfArguments,
                                                              const GALGAS_lstring & in_mSandAloneRoutineName
                                                              COMMA_LOCATION_ARGS) :
cPtr_callInstructionAST (in_mInstructionLocation, in_mArguments, in_mEndOfArguments COMMA_THERE),
mProperty_mSandAloneRoutineName (in_mSandAloneRoutineName) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_simpleCallInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_simpleCallInstructionAST ;
}

void cPtr_simpleCallInstructionAST::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "[@simpleCallInstructionAST:" ;
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

acPtr_class * cPtr_simpleCallInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_simpleCallInstructionAST (mProperty_mInstructionLocation, mProperty_mArguments, mProperty_mEndOfArguments, mProperty_mSandAloneRoutineName COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @simpleCallInstructionAST type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_simpleCallInstructionAST ("simpleCallInstructionAST",
                                                 & kTypeDescriptor_GALGAS_callInstructionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_simpleCallInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_simpleCallInstructionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_simpleCallInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_simpleCallInstructionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_simpleCallInstructionAST GALGAS_simpleCallInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_simpleCallInstructionAST result ;
  const GALGAS_simpleCallInstructionAST * p = (const GALGAS_simpleCallInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_simpleCallInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("simpleCallInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_simpleCallInstructionSE::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_simpleCallInstructionSE * p = (const cPtr_simpleCallInstructionSE *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_simpleCallInstructionSE) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSandAloneRoutineName.objectCompare (p->mProperty_mSandAloneRoutineName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mArguments.objectCompare (p->mProperty_mArguments) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfArguments.objectCompare (p->mProperty_mEndOfArguments) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_simpleCallInstructionSE::objectCompare (const GALGAS_simpleCallInstructionSE & inOperand) const {
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

GALGAS_simpleCallInstructionSE::GALGAS_simpleCallInstructionSE (void) :
GALGAS_instructionSE () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_simpleCallInstructionSE GALGAS_simpleCallInstructionSE::constructor_default (LOCATION_ARGS) {
  return GALGAS_simpleCallInstructionSE::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                          GALGAS_lstring::constructor_default (HERE),
                                                          GALGAS_effectiveArgumentListAST::constructor_emptyList (HERE),
                                                          GALGAS_location::constructor_nowhere (HERE)
                                                          COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_simpleCallInstructionSE::GALGAS_simpleCallInstructionSE (const cPtr_simpleCallInstructionSE * inSourcePtr) :
GALGAS_instructionSE (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_simpleCallInstructionSE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_simpleCallInstructionSE GALGAS_simpleCallInstructionSE::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                const GALGAS_lstring & inAttribute_mSandAloneRoutineName,
                                                                                const GALGAS_effectiveArgumentListAST & inAttribute_mArguments,
                                                                                const GALGAS_location & inAttribute_mEndOfArguments
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_simpleCallInstructionSE result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mSandAloneRoutineName.isValid () && inAttribute_mArguments.isValid () && inAttribute_mEndOfArguments.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_simpleCallInstructionSE (inAttribute_mInstructionLocation, inAttribute_mSandAloneRoutineName, inAttribute_mArguments, inAttribute_mEndOfArguments COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_simpleCallInstructionSE::getter_mSandAloneRoutineName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_simpleCallInstructionSE * p = (const cPtr_simpleCallInstructionSE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_simpleCallInstructionSE) ;
    result = p->mProperty_mSandAloneRoutineName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_simpleCallInstructionSE::getter_mSandAloneRoutineName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSandAloneRoutineName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_effectiveArgumentListAST GALGAS_simpleCallInstructionSE::getter_mArguments (UNUSED_LOCATION_ARGS) const {
  GALGAS_effectiveArgumentListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_simpleCallInstructionSE * p = (const cPtr_simpleCallInstructionSE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_simpleCallInstructionSE) ;
    result = p->mProperty_mArguments ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_effectiveArgumentListAST cPtr_simpleCallInstructionSE::getter_mArguments (UNUSED_LOCATION_ARGS) const {
  return mProperty_mArguments ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_simpleCallInstructionSE::getter_mEndOfArguments (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_simpleCallInstructionSE * p = (const cPtr_simpleCallInstructionSE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_simpleCallInstructionSE) ;
    result = p->mProperty_mEndOfArguments ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_simpleCallInstructionSE::getter_mEndOfArguments (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOfArguments ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                  Pointer class for @simpleCallInstructionSE class                                   *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_simpleCallInstructionSE::cPtr_simpleCallInstructionSE (const GALGAS_location & in_mInstructionLocation,
                                                            const GALGAS_lstring & in_mSandAloneRoutineName,
                                                            const GALGAS_effectiveArgumentListAST & in_mArguments,
                                                            const GALGAS_location & in_mEndOfArguments
                                                            COMMA_LOCATION_ARGS) :
cPtr_instructionSE (in_mInstructionLocation COMMA_THERE),
mProperty_mSandAloneRoutineName (in_mSandAloneRoutineName),
mProperty_mArguments (in_mArguments),
mProperty_mEndOfArguments (in_mEndOfArguments) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_simpleCallInstructionSE::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_simpleCallInstructionSE ;
}

void cPtr_simpleCallInstructionSE::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "[@simpleCallInstructionSE:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSandAloneRoutineName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mArguments.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOfArguments.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_simpleCallInstructionSE::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_simpleCallInstructionSE (mProperty_mInstructionLocation, mProperty_mSandAloneRoutineName, mProperty_mArguments, mProperty_mEndOfArguments COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @simpleCallInstructionSE type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_simpleCallInstructionSE ("simpleCallInstructionSE",
                                                & kTypeDescriptor_GALGAS_instructionSE) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_simpleCallInstructionSE::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_simpleCallInstructionSE ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_simpleCallInstructionSE::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_simpleCallInstructionSE (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_simpleCallInstructionSE GALGAS_simpleCallInstructionSE::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_simpleCallInstructionSE result ;
  const GALGAS_simpleCallInstructionSE * p = (const GALGAS_simpleCallInstructionSE *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_simpleCallInstructionSE *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("simpleCallInstructionSE", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_complexSelfPropertyCallInstructionSE::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_complexSelfPropertyCallInstructionSE * p = (const cPtr_complexSelfPropertyCallInstructionSE *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_complexSelfPropertyCallInstructionSE) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPropertyName.objectCompare (p->mProperty_mPropertyName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAccessList.objectCompare (p->mProperty_mAccessList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mArguments.objectCompare (p->mProperty_mArguments) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfArguments.objectCompare (p->mProperty_mEndOfArguments) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_complexSelfPropertyCallInstructionSE::objectCompare (const GALGAS_complexSelfPropertyCallInstructionSE & inOperand) const {
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

GALGAS_complexSelfPropertyCallInstructionSE::GALGAS_complexSelfPropertyCallInstructionSE (void) :
GALGAS_instructionSE () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_complexSelfPropertyCallInstructionSE GALGAS_complexSelfPropertyCallInstructionSE::constructor_default (LOCATION_ARGS) {
  return GALGAS_complexSelfPropertyCallInstructionSE::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                                       GALGAS_lstring::constructor_default (HERE),
                                                                       GALGAS_accessInAssignmentListSE::constructor_emptyList (HERE),
                                                                       GALGAS_effectiveArgumentListAST::constructor_emptyList (HERE),
                                                                       GALGAS_location::constructor_nowhere (HERE)
                                                                       COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_complexSelfPropertyCallInstructionSE::GALGAS_complexSelfPropertyCallInstructionSE (const cPtr_complexSelfPropertyCallInstructionSE * inSourcePtr) :
GALGAS_instructionSE (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_complexSelfPropertyCallInstructionSE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_complexSelfPropertyCallInstructionSE GALGAS_complexSelfPropertyCallInstructionSE::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                          const GALGAS_lstring & inAttribute_mPropertyName,
                                                                                                          const GALGAS_accessInAssignmentListSE & inAttribute_mAccessList,
                                                                                                          const GALGAS_effectiveArgumentListAST & inAttribute_mArguments,
                                                                                                          const GALGAS_location & inAttribute_mEndOfArguments
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_complexSelfPropertyCallInstructionSE result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mPropertyName.isValid () && inAttribute_mAccessList.isValid () && inAttribute_mArguments.isValid () && inAttribute_mEndOfArguments.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_complexSelfPropertyCallInstructionSE (inAttribute_mInstructionLocation, inAttribute_mPropertyName, inAttribute_mAccessList, inAttribute_mArguments, inAttribute_mEndOfArguments COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_complexSelfPropertyCallInstructionSE::getter_mPropertyName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_complexSelfPropertyCallInstructionSE * p = (const cPtr_complexSelfPropertyCallInstructionSE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_complexSelfPropertyCallInstructionSE) ;
    result = p->mProperty_mPropertyName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_complexSelfPropertyCallInstructionSE::getter_mPropertyName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPropertyName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_accessInAssignmentListSE GALGAS_complexSelfPropertyCallInstructionSE::getter_mAccessList (UNUSED_LOCATION_ARGS) const {
  GALGAS_accessInAssignmentListSE result ;
  if (NULL != mObjectPtr) {
    const cPtr_complexSelfPropertyCallInstructionSE * p = (const cPtr_complexSelfPropertyCallInstructionSE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_complexSelfPropertyCallInstructionSE) ;
    result = p->mProperty_mAccessList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_accessInAssignmentListSE cPtr_complexSelfPropertyCallInstructionSE::getter_mAccessList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAccessList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_effectiveArgumentListAST GALGAS_complexSelfPropertyCallInstructionSE::getter_mArguments (UNUSED_LOCATION_ARGS) const {
  GALGAS_effectiveArgumentListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_complexSelfPropertyCallInstructionSE * p = (const cPtr_complexSelfPropertyCallInstructionSE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_complexSelfPropertyCallInstructionSE) ;
    result = p->mProperty_mArguments ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_effectiveArgumentListAST cPtr_complexSelfPropertyCallInstructionSE::getter_mArguments (UNUSED_LOCATION_ARGS) const {
  return mProperty_mArguments ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_complexSelfPropertyCallInstructionSE::getter_mEndOfArguments (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_complexSelfPropertyCallInstructionSE * p = (const cPtr_complexSelfPropertyCallInstructionSE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_complexSelfPropertyCallInstructionSE) ;
    result = p->mProperty_mEndOfArguments ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_complexSelfPropertyCallInstructionSE::getter_mEndOfArguments (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOfArguments ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                            Pointer class for @complexSelfPropertyCallInstructionSE class                            *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_complexSelfPropertyCallInstructionSE::cPtr_complexSelfPropertyCallInstructionSE (const GALGAS_location & in_mInstructionLocation,
                                                                                      const GALGAS_lstring & in_mPropertyName,
                                                                                      const GALGAS_accessInAssignmentListSE & in_mAccessList,
                                                                                      const GALGAS_effectiveArgumentListAST & in_mArguments,
                                                                                      const GALGAS_location & in_mEndOfArguments
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_instructionSE (in_mInstructionLocation COMMA_THERE),
mProperty_mPropertyName (in_mPropertyName),
mProperty_mAccessList (in_mAccessList),
mProperty_mArguments (in_mArguments),
mProperty_mEndOfArguments (in_mEndOfArguments) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_complexSelfPropertyCallInstructionSE::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_complexSelfPropertyCallInstructionSE ;
}

void cPtr_complexSelfPropertyCallInstructionSE::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "[@complexSelfPropertyCallInstructionSE:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mPropertyName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mAccessList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mArguments.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOfArguments.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_complexSelfPropertyCallInstructionSE::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_complexSelfPropertyCallInstructionSE (mProperty_mInstructionLocation, mProperty_mPropertyName, mProperty_mAccessList, mProperty_mArguments, mProperty_mEndOfArguments COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @complexSelfPropertyCallInstructionSE type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_complexSelfPropertyCallInstructionSE ("complexSelfPropertyCallInstructionSE",
                                                             & kTypeDescriptor_GALGAS_instructionSE) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_complexSelfPropertyCallInstructionSE::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_complexSelfPropertyCallInstructionSE ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_complexSelfPropertyCallInstructionSE::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_complexSelfPropertyCallInstructionSE (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_complexSelfPropertyCallInstructionSE GALGAS_complexSelfPropertyCallInstructionSE::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_complexSelfPropertyCallInstructionSE result ;
  const GALGAS_complexSelfPropertyCallInstructionSE * p = (const GALGAS_complexSelfPropertyCallInstructionSE *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_complexSelfPropertyCallInstructionSE *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("complexSelfPropertyCallInstructionSE", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_complexCallInstructionSE::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_complexCallInstructionSE * p = (const cPtr_complexCallInstructionSE *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_complexCallInstructionSE) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIdentifier.objectCompare (p->mProperty_mIdentifier) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAccessList.objectCompare (p->mProperty_mAccessList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mArguments.objectCompare (p->mProperty_mArguments) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfArguments.objectCompare (p->mProperty_mEndOfArguments) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_complexCallInstructionSE::objectCompare (const GALGAS_complexCallInstructionSE & inOperand) const {
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

GALGAS_complexCallInstructionSE::GALGAS_complexCallInstructionSE (void) :
GALGAS_instructionSE () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_complexCallInstructionSE GALGAS_complexCallInstructionSE::constructor_default (LOCATION_ARGS) {
  return GALGAS_complexCallInstructionSE::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                           GALGAS_lstring::constructor_default (HERE),
                                                           GALGAS_accessInAssignmentListSE::constructor_emptyList (HERE),
                                                           GALGAS_effectiveArgumentListAST::constructor_emptyList (HERE),
                                                           GALGAS_location::constructor_nowhere (HERE)
                                                           COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_complexCallInstructionSE::GALGAS_complexCallInstructionSE (const cPtr_complexCallInstructionSE * inSourcePtr) :
GALGAS_instructionSE (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_complexCallInstructionSE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_complexCallInstructionSE GALGAS_complexCallInstructionSE::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                  const GALGAS_lstring & inAttribute_mIdentifier,
                                                                                  const GALGAS_accessInAssignmentListSE & inAttribute_mAccessList,
                                                                                  const GALGAS_effectiveArgumentListAST & inAttribute_mArguments,
                                                                                  const GALGAS_location & inAttribute_mEndOfArguments
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_complexCallInstructionSE result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mIdentifier.isValid () && inAttribute_mAccessList.isValid () && inAttribute_mArguments.isValid () && inAttribute_mEndOfArguments.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_complexCallInstructionSE (inAttribute_mInstructionLocation, inAttribute_mIdentifier, inAttribute_mAccessList, inAttribute_mArguments, inAttribute_mEndOfArguments COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_complexCallInstructionSE::getter_mIdentifier (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_complexCallInstructionSE * p = (const cPtr_complexCallInstructionSE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_complexCallInstructionSE) ;
    result = p->mProperty_mIdentifier ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_complexCallInstructionSE::getter_mIdentifier (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIdentifier ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_accessInAssignmentListSE GALGAS_complexCallInstructionSE::getter_mAccessList (UNUSED_LOCATION_ARGS) const {
  GALGAS_accessInAssignmentListSE result ;
  if (NULL != mObjectPtr) {
    const cPtr_complexCallInstructionSE * p = (const cPtr_complexCallInstructionSE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_complexCallInstructionSE) ;
    result = p->mProperty_mAccessList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_accessInAssignmentListSE cPtr_complexCallInstructionSE::getter_mAccessList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAccessList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_effectiveArgumentListAST GALGAS_complexCallInstructionSE::getter_mArguments (UNUSED_LOCATION_ARGS) const {
  GALGAS_effectiveArgumentListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_complexCallInstructionSE * p = (const cPtr_complexCallInstructionSE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_complexCallInstructionSE) ;
    result = p->mProperty_mArguments ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_effectiveArgumentListAST cPtr_complexCallInstructionSE::getter_mArguments (UNUSED_LOCATION_ARGS) const {
  return mProperty_mArguments ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_complexCallInstructionSE::getter_mEndOfArguments (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_complexCallInstructionSE * p = (const cPtr_complexCallInstructionSE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_complexCallInstructionSE) ;
    result = p->mProperty_mEndOfArguments ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_complexCallInstructionSE::getter_mEndOfArguments (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOfArguments ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                  Pointer class for @complexCallInstructionSE class                                  *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_complexCallInstructionSE::cPtr_complexCallInstructionSE (const GALGAS_location & in_mInstructionLocation,
                                                              const GALGAS_lstring & in_mIdentifier,
                                                              const GALGAS_accessInAssignmentListSE & in_mAccessList,
                                                              const GALGAS_effectiveArgumentListAST & in_mArguments,
                                                              const GALGAS_location & in_mEndOfArguments
                                                              COMMA_LOCATION_ARGS) :
cPtr_instructionSE (in_mInstructionLocation COMMA_THERE),
mProperty_mIdentifier (in_mIdentifier),
mProperty_mAccessList (in_mAccessList),
mProperty_mArguments (in_mArguments),
mProperty_mEndOfArguments (in_mEndOfArguments) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_complexCallInstructionSE::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_complexCallInstructionSE ;
}

void cPtr_complexCallInstructionSE::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "[@complexCallInstructionSE:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mIdentifier.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mAccessList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mArguments.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOfArguments.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_complexCallInstructionSE::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_complexCallInstructionSE (mProperty_mInstructionLocation, mProperty_mIdentifier, mProperty_mAccessList, mProperty_mArguments, mProperty_mEndOfArguments COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @complexCallInstructionSE type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_complexCallInstructionSE ("complexCallInstructionSE",
                                                 & kTypeDescriptor_GALGAS_instructionSE) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_complexCallInstructionSE::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_complexCallInstructionSE ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_complexCallInstructionSE::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_complexCallInstructionSE (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_complexCallInstructionSE GALGAS_complexCallInstructionSE::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_complexCallInstructionSE result ;
  const GALGAS_complexCallInstructionSE * p = (const GALGAS_complexCallInstructionSE *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_complexCallInstructionSE *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("complexCallInstructionSE", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Extension method '@LValueSelfAST solveEntitiesForComplexCallInstruction'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_solveEntitiesForComplexCallInstruction (const GALGAS_LValueSelfAST inObject,
                                                             const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                             const GALGAS_location constinArgument_inInstructionLocation,
                                                             const GALGAS_effectiveArgumentListAST constinArgument_inArguments,
                                                             const GALGAS_location constinArgument_inEndOfArguments,
                                                             GALGAS_instructionListSE & ioArgument_ioInstructionListSE,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_accessInAssignmentListSE var_accessList_7776 = GALGAS_accessInAssignmentListSE::constructor_emptyList (SOURCE_FILE ("instruction-procedure-call.galgas", 173)) ;
  cEnumerator_accessInAssignmentListAST enumerator_7811 (inObject.mProperty_mAccessList, kENUMERATION_UP) ;
  while (enumerator_7811.hasCurrentObject ()) {
    switch (enumerator_7811.current_mAccess (HERE).enumValue ()) {
    case GALGAS_accessInAssignmentAST::kNotBuilt:
      break ;
    case GALGAS_accessInAssignmentAST::kEnum_property:
      {
        const cEnumAssociatedValues_accessInAssignmentAST_property * extractPtr_7903 = (const cEnumAssociatedValues_accessInAssignmentAST_property *) (enumerator_7811.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_name = extractPtr_7903->mAssociatedValue0 ;
        var_accessList_7776.addAssign_operation (GALGAS_accessInAssignmentSE::constructor_property (extractedValue_name  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 177))  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 177)) ;
      }
      break ;
    case GALGAS_accessInAssignmentAST::kEnum_arrayAccess:
      {
        const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess * extractPtr_8090 = (const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess *) (enumerator_7811.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_indexAST = extractPtr_8090->mAssociatedValue0 ;
        const GALGAS_location extractedValue_endOfIndex = extractPtr_8090->mAssociatedValue1 ;
        GALGAS_expressionSE var_index_8016 ;
        callExtensionMethod_solveEntities ((const cPtr_expressionAST *) extractedValue_indexAST.ptr (), constinArgument_inSemanticContext, var_index_8016, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 179)) ;
        var_accessList_7776.addAssign_operation (GALGAS_accessInAssignmentSE::constructor_arrayAccess (var_index_8016, extractedValue_endOfIndex  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 180))  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 180)) ;
      }
      break ;
    }
    enumerator_7811.gotoNextObject () ;
  }
  ioArgument_ioInstructionListSE.addAssign_operation (GALGAS_complexSelfPropertyCallInstructionSE::constructor_new (constinArgument_inInstructionLocation, inObject.mProperty_mIdentifier, var_accessList_7776, constinArgument_inArguments, constinArgument_inEndOfArguments  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 183))  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 183)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Extension method '@LValueNoSelfAST solveEntitiesForComplexCallInstructionEX'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_solveEntitiesForComplexCallInstructionEX (const GALGAS_LValueNoSelfAST inObject,
                                                               const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                               const GALGAS_location constinArgument_inInstructionLocation,
                                                               const GALGAS_effectiveArgumentListAST constinArgument_inArguments,
                                                               const GALGAS_location constinArgument_inEndOfArguments,
                                                               GALGAS_instructionListSE & ioArgument_ioInstructionListSE,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_accessInAssignmentListSE var_accessList_9711 = GALGAS_accessInAssignmentListSE::constructor_emptyList (SOURCE_FILE ("instruction-procedure-call.galgas", 224)) ;
  cEnumerator_accessInAssignmentListAST enumerator_9746 (inObject.mProperty_mAccessList, kENUMERATION_UP) ;
  while (enumerator_9746.hasCurrentObject ()) {
    switch (enumerator_9746.current_mAccess (HERE).enumValue ()) {
    case GALGAS_accessInAssignmentAST::kNotBuilt:
      break ;
    case GALGAS_accessInAssignmentAST::kEnum_property:
      {
        const cEnumAssociatedValues_accessInAssignmentAST_property * extractPtr_9838 = (const cEnumAssociatedValues_accessInAssignmentAST_property *) (enumerator_9746.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_name = extractPtr_9838->mAssociatedValue0 ;
        var_accessList_9711.addAssign_operation (GALGAS_accessInAssignmentSE::constructor_property (extractedValue_name  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 228))  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 228)) ;
      }
      break ;
    case GALGAS_accessInAssignmentAST::kEnum_arrayAccess:
      {
        const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess * extractPtr_10025 = (const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess *) (enumerator_9746.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_indexAST = extractPtr_10025->mAssociatedValue0 ;
        const GALGAS_location extractedValue_endOfIndex = extractPtr_10025->mAssociatedValue1 ;
        GALGAS_expressionSE var_index_9951 ;
        callExtensionMethod_solveEntities ((const cPtr_expressionAST *) extractedValue_indexAST.ptr (), constinArgument_inSemanticContext, var_index_9951, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 230)) ;
        var_accessList_9711.addAssign_operation (GALGAS_accessInAssignmentSE::constructor_arrayAccess (var_index_9951, extractedValue_endOfIndex  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 231))  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 231)) ;
      }
      break ;
    }
    enumerator_9746.gotoNextObject () ;
  }
  const enumGalgasBool test_0 = constinArgument_inSemanticContext.getter_mControlRegisterMap (HERE).getter_hasKey (inObject.mProperty_mIdentifier.getter_string (SOURCE_FILE ("instruction-procedure-call.galgas", 234)) COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 234)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (inObject.mProperty_mIdentifier.getter_location (SOURCE_FILE ("instruction-procedure-call.galgas", 235)), GALGAS_string ("control register is used as a function"), fixItArray1  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 235)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = constinArgument_inSemanticContext.getter_mGlobalVariableMap (HERE).getter_hasKey (inObject.mProperty_mIdentifier.getter_string (SOURCE_FILE ("instruction-procedure-call.galgas", 236)) COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 236)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (inObject.mProperty_mIdentifier.getter_location (SOURCE_FILE ("instruction-procedure-call.galgas", 237)), GALGAS_string ("global variable is used as a function"), fixItArray3  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 237)) ;
    }else if (kBoolFalse == test_2) {
      const enumGalgasBool test_4 = constinArgument_inSemanticContext.getter_mGlobalConstantMap (HERE).getter_hasKey (inObject.mProperty_mIdentifier.getter_string (SOURCE_FILE ("instruction-procedure-call.galgas", 238)) COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 238)).boolEnum () ;
      if (kBoolTrue == test_4) {
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (inObject.mProperty_mIdentifier.getter_location (SOURCE_FILE ("instruction-procedure-call.galgas", 239)), GALGAS_string ("constant is used as a function"), fixItArray5  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 239)) ;
      }else if (kBoolFalse == test_4) {
        ioArgument_ioInstructionListSE.addAssign_operation (GALGAS_complexCallInstructionSE::constructor_new (constinArgument_inInstructionLocation, inObject.mProperty_mIdentifier, var_accessList_9711, constinArgument_inArguments, constinArgument_inEndOfArguments  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 241))  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 241)) ;
      }
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Extension method '@LValueNoSelfAST analyzeTargetForRoutineCall'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_analyzeTargetForRoutineCall (const GALGAS_LValueNoSelfAST inObject,
                                                  const GALGAS_PLMType constinArgument_inSelfType,
                                                  const GALGAS_targetAccessKind constinArgument_inSelfAccessKind,
                                                  const GALGAS_bool /* constinArgument_inRoutineCanMutateProperties */,
                                                  const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                                  const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                  const GALGAS_semanticContext constinArgument_inContext,
                                                  const GALGAS_mode constinArgument_inCurrentMode,
                                                  GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                  GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                  GALGAS_unifiedSymbolMapEx & ioArgument_ioVariableMap,
                                                  GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                  GALGAS_allocaList & ioArgument_ioAllocaList,
                                                  GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                  GALGAS_objectIR & outArgument_outCurrentObject,
                                                  GALGAS_string & outArgument_outGlobalVariableReceiverName,
                                                  C_Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outCurrentObject.drop () ; // Release 'out' argument
  outArgument_outGlobalVariableReceiverName.drop () ; // Release 'out' argument
  const enumGalgasBool test_0 = ioArgument_ioVariableMap.getter_hasKey (inObject.mProperty_mIdentifier.getter_string (SOURCE_FILE ("instruction-procedure-call.galgas", 312)) COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 312)).boolEnum () ;
  if (kBoolTrue == test_0) {
    switch (constinArgument_inSelfAccessKind.enumValue ()) {
    case GALGAS_targetAccessKind::kNotBuilt:
      break ;
    case GALGAS_targetAccessKind::kEnum_read:
      {
        {
        GALGAS_PLMType joker_13518_2 ; // Joker input parameter
        GALGAS_bool joker_13518_1 ; // Joker input parameter
        GALGAS_bool joker_13549_2 ; // Joker input parameter
        GALGAS_bool joker_13549_1 ; // Joker input parameter
        ioArgument_ioVariableMap.setter_searchForReadAccess (inObject.mProperty_mIdentifier, joker_13518_2, joker_13518_1, outArgument_outCurrentObject, joker_13549_2, joker_13549_1, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 315)) ;
        }
      }
      break ;
    case GALGAS_targetAccessKind::kEnum_write:
      {
        {
        GALGAS_PLMType joker_13633_2 ; // Joker input parameter
        GALGAS_bool joker_13633_1 ; // Joker input parameter
        GALGAS_bool joker_13664_2 ; // Joker input parameter
        GALGAS_bool joker_13664_1 ; // Joker input parameter
        ioArgument_ioVariableMap.setter_searchForWriteAccess (inObject.mProperty_mIdentifier, joker_13633_2, joker_13633_1, outArgument_outCurrentObject, joker_13664_2, joker_13664_1, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 317)) ;
        }
      }
      break ;
    case GALGAS_targetAccessKind::kEnum_readWrite:
      {
        {
        GALGAS_PLMType joker_13756_2 ; // Joker input parameter
        GALGAS_bool joker_13756_1 ; // Joker input parameter
        GALGAS_bool joker_13787_2 ; // Joker input parameter
        GALGAS_bool joker_13787_1 ; // Joker input parameter
        ioArgument_ioVariableMap.setter_searchForReadWriteAccess (inObject.mProperty_mIdentifier, joker_13756_2, joker_13756_1, outArgument_outCurrentObject, joker_13787_2, joker_13787_1, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 319)) ;
        }
      }
      break ;
    }
    GALGAS_string temp_1 ;
    const enumGalgasBool test_2 = outArgument_outCurrentObject.getter_isGlobalVariableReference (SOURCE_FILE ("instruction-procedure-call.galgas", 321)).boolEnum () ;
    if (kBoolTrue == test_2) {
      temp_1 = inObject.mProperty_mIdentifier.getter_string (HERE) ;
    }else if (kBoolFalse == test_2) {
      temp_1 = GALGAS_string::makeEmptyString () ;
    }
    outArgument_outGlobalVariableReceiverName = temp_1 ;
  }else if (kBoolFalse == test_0) {
    outArgument_outCurrentObject = GALGAS_objectIR::constructor_possibleFunction (GALGAS_objectIR::constructor_null (SOURCE_FILE ("instruction-procedure-call.galgas", 323)), inObject.mProperty_mIdentifier  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 323)) ;
    outArgument_outGlobalVariableReceiverName = GALGAS_string::makeEmptyString () ;
  }
  const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, inObject.mProperty_mAccessList.getter_length (SOURCE_FILE ("instruction-procedure-call.galgas", 327)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_3) {
    {
    ioArgument_ioUniversalMap.insulate (HERE) ;
    cPtr_universalPropertyAndRoutineMapForContext * ptr_14182 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
    callExtensionSetter_searchValuedObjectForWriteAccess ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_14182, inObject.mProperty_mIdentifier, outArgument_outCurrentObject, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 328)) ;
    }
  }else if (kBoolFalse == test_3) {
    cEnumerator_accessInAssignmentListAST enumerator_14286 (inObject.mProperty_mAccessList, kENUMERATION_UP) ;
    while (enumerator_14286.hasCurrentObject ()) {
      switch (enumerator_14286.current_mAccess (HERE).enumValue ()) {
      case GALGAS_accessInAssignmentAST::kNotBuilt:
        break ;
      case GALGAS_accessInAssignmentAST::kEnum_property:
        {
          const cEnumAssociatedValues_accessInAssignmentAST_property * extractPtr_14518 = (const cEnumAssociatedValues_accessInAssignmentAST_property *) (enumerator_14286.current_mAccess (HERE).unsafePointer ()) ;
          const GALGAS_lstring extractedValue_propertyName = extractPtr_14518->mAssociatedValue0 ;
          {
          routine_handlePropertyAccessInAssignment (outArgument_outCurrentObject, extractedValue_propertyName, ioArgument_ioTemporaries, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 333)) ;
          }
        }
        break ;
      case GALGAS_accessInAssignmentAST::kEnum_arrayAccess:
        {
          const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess * extractPtr_15219 = (const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess *) (enumerator_14286.current_mAccess (HERE).unsafePointer ()) ;
          const GALGAS_expressionAST extractedValue_indexExpression = extractPtr_15219->mAssociatedValue0 ;
          const GALGAS_location extractedValue_endOfExpression = extractPtr_15219->mAssociatedValue1 ;
          {
          routine_handleSubscriptInAssignmentAndExpression (constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, extractedValue_indexExpression, extractedValue_endOfExpression, ioArgument_ioInstructionGenerationList, outArgument_outCurrentObject, inCompiler  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 340)) ;
          }
        }
        break ;
      }
      enumerator_14286.gotoNextObject () ;
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Extension method '@LValueSelfAST analyzeTargetForRoutineCall'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_analyzeTargetForRoutineCall (const GALGAS_LValueSelfAST inObject,
                                                  const GALGAS_PLMType constinArgument_inSelfType,
                                                  const GALGAS_targetAccessKind /* constinArgument_inSelfAccessKind */,
                                                  const GALGAS_bool /* constinArgument_inRoutineCanMutateProperties */,
                                                  const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                                  const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                  const GALGAS_semanticContext constinArgument_inContext,
                                                  const GALGAS_mode constinArgument_inCurrentMode,
                                                  GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                  GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                  GALGAS_unifiedSymbolMapEx & ioArgument_ioVariableMap,
                                                  GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                  GALGAS_allocaList & ioArgument_ioAllocaList,
                                                  GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                  GALGAS_objectIR & outArgument_outCurrentObject,
                                                  GALGAS_string & outArgument_outGlobalVariableReceiverName,
                                                  C_Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outCurrentObject.drop () ; // Release 'out' argument
  outArgument_outGlobalVariableReceiverName.drop () ; // Release 'out' argument
  outArgument_outGlobalVariableReceiverName = GALGAS_string::makeEmptyString () ;
  const enumGalgasBool test_0 = constinArgument_inSelfType.getter_isStructure (SOURCE_FILE ("instruction-procedure-call.galgas", 383)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_propertyMap var_structureObjectMap_16484 ;
    GALGAS_universalPropertyAndRoutineMapForContext var_universalMap_16522 ;
    GALGAS_lstring joker_16447 ; // Joker input parameter
    GALGAS_propertyList joker_16524_3 ; // Joker input parameter
    GALGAS_uint joker_16524_2 ; // Joker input parameter
    GALGAS_string joker_16524_1 ; // Joker input parameter
    constinArgument_inSelfType.method_structure (joker_16447, var_structureObjectMap_16484, var_universalMap_16522, joker_16524_3, joker_16524_2, joker_16524_1, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 384)) ;
    const enumGalgasBool test_1 = var_structureObjectMap_16484.getter_hasKey (inObject.mProperty_mIdentifier.getter_string (SOURCE_FILE ("instruction-procedure-call.galgas", 386)) COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 386)).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_objectIR var_object_16734 ;
      GALGAS_bool joker_16713 ; // Joker input parameter
      var_structureObjectMap_16484.method_searchKey (inObject.mProperty_mIdentifier, joker_16713, var_object_16734, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 387)) ;
      {
      routine_handleSelfAccessInAssignment (constinArgument_inSelfType, var_object_16734, ioArgument_ioTemporaries, ioArgument_ioInstructionGenerationList, outArgument_outCurrentObject, inCompiler  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 392)) ;
      }
    }else if (kBoolFalse == test_1) {
      outArgument_outCurrentObject = GALGAS_objectIR::constructor_possibleFunction (GALGAS_objectIR::constructor_selfObject (constinArgument_inSelfType  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 400)), inObject.mProperty_mIdentifier  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 400)) ;
    }
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (inObject.mProperty_mIdentifier.getter_location (SOURCE_FILE ("instruction-procedure-call.galgas", 403)), GALGAS_string ("'self' should be a structure instance"), fixItArray2  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 403)) ;
    outArgument_outCurrentObject.drop () ; // Release error dropped variable
    outArgument_outGlobalVariableReceiverName.drop () ; // Release error dropped variable
  }
  cEnumerator_accessInAssignmentListAST enumerator_17251 (inObject.mProperty_mAccessList, kENUMERATION_UP) ;
  while (enumerator_17251.hasCurrentObject ()) {
    switch (enumerator_17251.current_mAccess (HERE).enumValue ()) {
    case GALGAS_accessInAssignmentAST::kNotBuilt:
      break ;
    case GALGAS_accessInAssignmentAST::kEnum_property:
      {
        const cEnumAssociatedValues_accessInAssignmentAST_property * extractPtr_17467 = (const cEnumAssociatedValues_accessInAssignmentAST_property *) (enumerator_17251.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_propertyName = extractPtr_17467->mAssociatedValue0 ;
        {
        routine_handlePropertyAccessInAssignment (outArgument_outCurrentObject, extractedValue_propertyName, ioArgument_ioTemporaries, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 409)) ;
        }
      }
      break ;
    case GALGAS_accessInAssignmentAST::kEnum_arrayAccess:
      {
        const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess * extractPtr_18132 = (const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess *) (enumerator_17251.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_indexExpression = extractPtr_18132->mAssociatedValue0 ;
        const GALGAS_location extractedValue_endOfExpression = extractPtr_18132->mAssociatedValue1 ;
        {
        routine_handleSubscriptInAssignmentAndExpression (constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, extractedValue_indexExpression, extractedValue_endOfExpression, ioArgument_ioInstructionGenerationList, outArgument_outCurrentObject, inCompiler  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 416)) ;
        }
      }
      break ;
    }
    enumerator_17251.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Extension method '@LValueNoSelfAST noteInstructionTypesInPrecedenceGraph'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_noteInstructionTypesInPrecedenceGraph (const GALGAS_LValueNoSelfAST inObject,
                                                            GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                            C_Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_accessInAssignmentListAST enumerator_2738 (inObject.mProperty_mAccessList, kENUMERATION_UP) ;
  while (enumerator_2738.hasCurrentObject ()) {
    switch (enumerator_2738.current_mAccess (HERE).enumValue ()) {
    case GALGAS_accessInAssignmentAST::kNotBuilt:
      break ;
    case GALGAS_accessInAssignmentAST::kEnum_property:
      {
      }
      break ;
    case GALGAS_accessInAssignmentAST::kEnum_arrayAccess:
      {
        const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess * extractPtr_2912 = (const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess *) (enumerator_2738.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_indexExpression = extractPtr_2912->mAssociatedValue0 ;
        callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) extractedValue_indexExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("lvalue-without-self.galgas", 66)) ;
      }
      break ;
    }
    enumerator_2738.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Extension method '@LValueNoSelfAST solveEntitiesForLValueNoSelf'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_solveEntitiesForLValueNoSelf (const GALGAS_LValueNoSelfAST inObject,
                                                   const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                   GALGAS_LValueWithoutSelfSE & outArgument_outLValueSE,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outLValueSE.drop () ; // Release 'out' argument
  GALGAS_accessInAssignmentListSE var_accessList_3903 = GALGAS_accessInAssignmentListSE::constructor_emptyList (SOURCE_FILE ("lvalue-without-self.galgas", 88)) ;
  cEnumerator_accessInAssignmentListAST enumerator_3938 (inObject.mProperty_mAccessList, kENUMERATION_UP) ;
  while (enumerator_3938.hasCurrentObject ()) {
    switch (enumerator_3938.current_mAccess (HERE).enumValue ()) {
    case GALGAS_accessInAssignmentAST::kNotBuilt:
      break ;
    case GALGAS_accessInAssignmentAST::kEnum_property:
      {
        const cEnumAssociatedValues_accessInAssignmentAST_property * extractPtr_4030 = (const cEnumAssociatedValues_accessInAssignmentAST_property *) (enumerator_3938.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_name = extractPtr_4030->mAssociatedValue0 ;
        var_accessList_3903.addAssign_operation (GALGAS_accessInAssignmentSE::constructor_property (extractedValue_name  COMMA_SOURCE_FILE ("lvalue-without-self.galgas", 92))  COMMA_SOURCE_FILE ("lvalue-without-self.galgas", 92)) ;
      }
      break ;
    case GALGAS_accessInAssignmentAST::kEnum_arrayAccess:
      {
        const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess * extractPtr_4217 = (const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess *) (enumerator_3938.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_indexAST = extractPtr_4217->mAssociatedValue0 ;
        const GALGAS_location extractedValue_endOfIndex = extractPtr_4217->mAssociatedValue1 ;
        GALGAS_expressionSE var_index_4143 ;
        callExtensionMethod_solveEntities ((const cPtr_expressionAST *) extractedValue_indexAST.ptr (), constinArgument_inSemanticContext, var_index_4143, inCompiler COMMA_SOURCE_FILE ("lvalue-without-self.galgas", 94)) ;
        var_accessList_3903.addAssign_operation (GALGAS_accessInAssignmentSE::constructor_arrayAccess (var_index_4143, extractedValue_endOfIndex  COMMA_SOURCE_FILE ("lvalue-without-self.galgas", 95))  COMMA_SOURCE_FILE ("lvalue-without-self.galgas", 95)) ;
      }
      break ;
    }
    enumerator_3938.gotoNextObject () ;
  }
  const enumGalgasBool test_0 = constinArgument_inSemanticContext.getter_mControlRegisterMap (HERE).getter_hasKey (inObject.mProperty_mIdentifier.getter_string (SOURCE_FILE ("lvalue-without-self.galgas", 98)) COMMA_SOURCE_FILE ("lvalue-without-self.galgas", 98)).boolEnum () ;
  if (kBoolTrue == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_accessList_3903.getter_length (SOURCE_FILE ("lvalue-without-self.galgas", 99)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_1) {
      outArgument_outLValueSE = GALGAS_LValueWithoutSelfSE::constructor_register (inObject.mProperty_mIdentifier  COMMA_SOURCE_FILE ("lvalue-without-self.galgas", 100)) ;
    }else if (kBoolFalse == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (inObject.mProperty_mIdentifier.getter_location (SOURCE_FILE ("lvalue-without-self.galgas", 102)), GALGAS_string ("control register slices cannot be written"), fixItArray2  COMMA_SOURCE_FILE ("lvalue-without-self.galgas", 102)) ;
      outArgument_outLValueSE.drop () ; // Release error dropped variable
    }
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_3 = constinArgument_inSemanticContext.getter_mGlobalVariableMap (HERE).getter_hasKey (inObject.mProperty_mIdentifier.getter_string (SOURCE_FILE ("lvalue-without-self.galgas", 104)) COMMA_SOURCE_FILE ("lvalue-without-self.galgas", 104)).boolEnum () ;
    if (kBoolTrue == test_3) {
      outArgument_outLValueSE = GALGAS_LValueWithoutSelfSE::constructor_globalVariable (inObject.mProperty_mIdentifier, var_accessList_3903  COMMA_SOURCE_FILE ("lvalue-without-self.galgas", 105)) ;
    }else if (kBoolFalse == test_3) {
      const enumGalgasBool test_4 = constinArgument_inSemanticContext.getter_mGlobalConstantMap (HERE).getter_hasKey (inObject.mProperty_mIdentifier.getter_string (SOURCE_FILE ("lvalue-without-self.galgas", 106)) COMMA_SOURCE_FILE ("lvalue-without-self.galgas", 106)).boolEnum () ;
      if (kBoolTrue == test_4) {
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (inObject.mProperty_mIdentifier.getter_location (SOURCE_FILE ("lvalue-without-self.galgas", 107)), GALGAS_string ("a constant cannot be assigned"), fixItArray5  COMMA_SOURCE_FILE ("lvalue-without-self.galgas", 107)) ;
        outArgument_outLValueSE.drop () ; // Release error dropped variable
      }else if (kBoolFalse == test_4) {
        const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, var_accessList_3903.getter_length (SOURCE_FILE ("lvalue-without-self.galgas", 108)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_6) {
          outArgument_outLValueSE = GALGAS_LValueWithoutSelfSE::constructor_localVariableOrStandAloneProcedure (inObject.mProperty_mIdentifier  COMMA_SOURCE_FILE ("lvalue-without-self.galgas", 109)) ;
        }else if (kBoolFalse == test_6) {
          outArgument_outLValueSE = GALGAS_LValueWithoutSelfSE::constructor_localVariable (inObject.mProperty_mIdentifier, var_accessList_3903  COMMA_SOURCE_FILE ("lvalue-without-self.galgas", 111)) ;
        }
      }
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Extension method '@LValueNoSelfAST analyzeAssignmentTarget'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_analyzeAssignmentTarget (const GALGAS_LValueNoSelfAST inObject,
                                              const GALGAS_PLMType constinArgument_inSelfType,
                                              const GALGAS_targetAccessKind constinArgument_inSelfAccessKind,
                                              const GALGAS_bool /* constinArgument_inRoutineCanMutateProperties */,
                                              const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                              const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                              const GALGAS_semanticContext constinArgument_inContext,
                                              const GALGAS_mode constinArgument_inCurrentMode,
                                              GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                              GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                              GALGAS_unifiedSymbolMapEx & ioArgument_ioVariableMap,
                                              GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                              GALGAS_allocaList & ioArgument_ioAllocaList,
                                              GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                              GALGAS_objectIR & outArgument_outCurrentObject,
                                              GALGAS_string & outArgument_outGlobalVariableReceiverName,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outCurrentObject.drop () ; // Release 'out' argument
  outArgument_outGlobalVariableReceiverName.drop () ; // Release 'out' argument
  const enumGalgasBool test_0 = ioArgument_ioVariableMap.getter_hasKey (inObject.mProperty_mIdentifier.getter_string (SOURCE_FILE ("lvalue-without-self.galgas", 145)) COMMA_SOURCE_FILE ("lvalue-without-self.galgas", 145)).boolEnum () ;
  if (kBoolTrue == test_0) {
    switch (constinArgument_inSelfAccessKind.enumValue ()) {
    case GALGAS_targetAccessKind::kNotBuilt:
      break ;
    case GALGAS_targetAccessKind::kEnum_read:
      {
        {
        GALGAS_PLMType joker_6741_2 ; // Joker input parameter
        GALGAS_bool joker_6741_1 ; // Joker input parameter
        GALGAS_bool joker_6772_2 ; // Joker input parameter
        GALGAS_bool joker_6772_1 ; // Joker input parameter
        ioArgument_ioVariableMap.setter_searchForReadAccess (inObject.mProperty_mIdentifier, joker_6741_2, joker_6741_1, outArgument_outCurrentObject, joker_6772_2, joker_6772_1, inCompiler COMMA_SOURCE_FILE ("lvalue-without-self.galgas", 148)) ;
        }
      }
      break ;
    case GALGAS_targetAccessKind::kEnum_write:
      {
        {
        GALGAS_PLMType joker_6856_2 ; // Joker input parameter
        GALGAS_bool joker_6856_1 ; // Joker input parameter
        GALGAS_bool joker_6887_2 ; // Joker input parameter
        GALGAS_bool joker_6887_1 ; // Joker input parameter
        ioArgument_ioVariableMap.setter_searchForWriteAccess (inObject.mProperty_mIdentifier, joker_6856_2, joker_6856_1, outArgument_outCurrentObject, joker_6887_2, joker_6887_1, inCompiler COMMA_SOURCE_FILE ("lvalue-without-self.galgas", 150)) ;
        }
      }
      break ;
    case GALGAS_targetAccessKind::kEnum_readWrite:
      {
        {
        GALGAS_PLMType joker_6979_2 ; // Joker input parameter
        GALGAS_bool joker_6979_1 ; // Joker input parameter
        GALGAS_bool joker_7010_2 ; // Joker input parameter
        GALGAS_bool joker_7010_1 ; // Joker input parameter
        ioArgument_ioVariableMap.setter_searchForReadWriteAccess (inObject.mProperty_mIdentifier, joker_6979_2, joker_6979_1, outArgument_outCurrentObject, joker_7010_2, joker_7010_1, inCompiler COMMA_SOURCE_FILE ("lvalue-without-self.galgas", 152)) ;
        }
      }
      break ;
    }
    GALGAS_string temp_1 ;
    const enumGalgasBool test_2 = outArgument_outCurrentObject.getter_isGlobalVariableReference (SOURCE_FILE ("lvalue-without-self.galgas", 154)).boolEnum () ;
    if (kBoolTrue == test_2) {
      temp_1 = inObject.mProperty_mIdentifier.getter_string (HERE) ;
    }else if (kBoolFalse == test_2) {
      temp_1 = GALGAS_string::makeEmptyString () ;
    }
    outArgument_outGlobalVariableReceiverName = temp_1 ;
  }else if (kBoolFalse == test_0) {
    outArgument_outCurrentObject = GALGAS_objectIR::constructor_possibleFunction (GALGAS_objectIR::constructor_null (SOURCE_FILE ("lvalue-without-self.galgas", 156)), inObject.mProperty_mIdentifier  COMMA_SOURCE_FILE ("lvalue-without-self.galgas", 156)) ;
    outArgument_outGlobalVariableReceiverName = GALGAS_string::makeEmptyString () ;
  }
  const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, inObject.mProperty_mAccessList.getter_length (SOURCE_FILE ("lvalue-without-self.galgas", 160)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_3) {
    switch (constinArgument_inSelfAccessKind.enumValue ()) {
    case GALGAS_targetAccessKind::kNotBuilt:
      break ;
    case GALGAS_targetAccessKind::kEnum_read:
      {
        {
        ioArgument_ioUniversalMap.insulate (HERE) ;
        cPtr_universalPropertyAndRoutineMapForContext * ptr_7451 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
        callExtensionSetter_searchValuedObjectForWriteAccess ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_7451, inObject.mProperty_mIdentifier, outArgument_outCurrentObject, inCompiler COMMA_SOURCE_FILE ("lvalue-without-self.galgas", 163)) ;
        }
      }
      break ;
    case GALGAS_targetAccessKind::kEnum_write:
      {
        {
        ioArgument_ioUniversalMap.insulate (HERE) ;
        cPtr_universalPropertyAndRoutineMapForContext * ptr_7557 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
        callExtensionSetter_searchValuedObjectForWriteAccess ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_7557, inObject.mProperty_mIdentifier, outArgument_outCurrentObject, inCompiler COMMA_SOURCE_FILE ("lvalue-without-self.galgas", 165)) ;
        }
      }
      break ;
    case GALGAS_targetAccessKind::kEnum_readWrite:
      {
        {
        ioArgument_ioUniversalMap.insulate (HERE) ;
        cPtr_universalPropertyAndRoutineMapForContext * ptr_7667 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
        callExtensionSetter_searchValuedObjectForReadWriteAccess ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_7667, inObject.mProperty_mIdentifier, outArgument_outCurrentObject, inCompiler COMMA_SOURCE_FILE ("lvalue-without-self.galgas", 167)) ;
        }
      }
      break ;
    }
  }else if (kBoolFalse == test_3) {
    cEnumerator_accessInAssignmentListAST enumerator_7783 (inObject.mProperty_mAccessList, kENUMERATION_UP) ;
    while (enumerator_7783.hasCurrentObject ()) {
      switch (enumerator_7783.current_mAccess (HERE).enumValue ()) {
      case GALGAS_accessInAssignmentAST::kNotBuilt:
        break ;
      case GALGAS_accessInAssignmentAST::kEnum_property:
        {
          const cEnumAssociatedValues_accessInAssignmentAST_property * extractPtr_8015 = (const cEnumAssociatedValues_accessInAssignmentAST_property *) (enumerator_7783.current_mAccess (HERE).unsafePointer ()) ;
          const GALGAS_lstring extractedValue_propertyName = extractPtr_8015->mAssociatedValue0 ;
          {
          routine_handlePropertyAccessInAssignment (outArgument_outCurrentObject, extractedValue_propertyName, ioArgument_ioTemporaries, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("lvalue-without-self.galgas", 173)) ;
          }
        }
        break ;
      case GALGAS_accessInAssignmentAST::kEnum_arrayAccess:
        {
          const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess * extractPtr_8716 = (const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess *) (enumerator_7783.current_mAccess (HERE).unsafePointer ()) ;
          const GALGAS_expressionAST extractedValue_indexExpression = extractPtr_8716->mAssociatedValue0 ;
          const GALGAS_location extractedValue_endOfExpression = extractPtr_8716->mAssociatedValue1 ;
          {
          routine_handleSubscriptInAssignmentAndExpression (constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, extractedValue_indexExpression, extractedValue_endOfExpression, ioArgument_ioInstructionGenerationList, outArgument_outCurrentObject, inCompiler  COMMA_SOURCE_FILE ("lvalue-without-self.galgas", 180)) ;
          }
        }
        break ;
      }
      enumerator_7783.gotoNextObject () ;
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Extension method '@LValueSelfAST noteInstructionTypesInPrecedenceGraph'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_noteInstructionTypesInPrecedenceGraph (const GALGAS_LValueSelfAST inObject,
                                                            GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                            C_Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_accessInAssignmentListAST enumerator_2284 (inObject.mProperty_mAccessList, kENUMERATION_UP) ;
  while (enumerator_2284.hasCurrentObject ()) {
    switch (enumerator_2284.current_mAccess (HERE).enumValue ()) {
    case GALGAS_accessInAssignmentAST::kNotBuilt:
      break ;
    case GALGAS_accessInAssignmentAST::kEnum_property:
      {
      }
      break ;
    case GALGAS_accessInAssignmentAST::kEnum_arrayAccess:
      {
        const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess * extractPtr_2458 = (const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess *) (enumerator_2284.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_indexExpression = extractPtr_2458->mAssociatedValue0 ;
        callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) extractedValue_indexExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("lvalue-with-self.galgas", 56)) ;
      }
      break ;
    }
    enumerator_2284.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Extension method '@LValueSelfAST analyzeAssignmentTarget'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_analyzeAssignmentTarget (const GALGAS_LValueSelfAST inObject,
                                              const GALGAS_PLMType constinArgument_inSelfType,
                                              const GALGAS_targetAccessKind /* constinArgument_inSelfAccessKind */,
                                              const GALGAS_bool /* constinArgument_inRoutineCanMutateProperties */,
                                              const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                              const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                              const GALGAS_semanticContext constinArgument_inContext,
                                              const GALGAS_mode constinArgument_inCurrentMode,
                                              GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                              GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                              GALGAS_unifiedSymbolMapEx & ioArgument_ioVariableMap,
                                              GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                              GALGAS_allocaList & ioArgument_ioAllocaList,
                                              GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                              GALGAS_objectIR & outArgument_outCurrentObject,
                                              GALGAS_string & outArgument_outGlobalVariableReceiverName,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outCurrentObject.drop () ; // Release 'out' argument
  outArgument_outGlobalVariableReceiverName.drop () ; // Release 'out' argument
  outArgument_outGlobalVariableReceiverName = GALGAS_string::makeEmptyString () ;
  const enumGalgasBool test_0 = constinArgument_inSelfType.getter_isStructure (SOURCE_FILE ("lvalue-with-self.galgas", 84)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_propertyMap var_structureObjectMap_3951 ;
    GALGAS_universalPropertyAndRoutineMapForContext var_universalMap_3989 ;
    GALGAS_lstring joker_3914 ; // Joker input parameter
    GALGAS_propertyList joker_3991_3 ; // Joker input parameter
    GALGAS_uint joker_3991_2 ; // Joker input parameter
    GALGAS_string joker_3991_1 ; // Joker input parameter
    constinArgument_inSelfType.method_structure (joker_3914, var_structureObjectMap_3951, var_universalMap_3989, joker_3991_3, joker_3991_2, joker_3991_1, inCompiler COMMA_SOURCE_FILE ("lvalue-with-self.galgas", 85)) ;
    const enumGalgasBool test_1 = var_structureObjectMap_3951.getter_hasKey (inObject.mProperty_mIdentifier.getter_string (SOURCE_FILE ("lvalue-with-self.galgas", 87)) COMMA_SOURCE_FILE ("lvalue-with-self.galgas", 87)).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_objectIR var_object_4201 ;
      GALGAS_bool joker_4180 ; // Joker input parameter
      var_structureObjectMap_3951.method_searchKey (inObject.mProperty_mIdentifier, joker_4180, var_object_4201, inCompiler COMMA_SOURCE_FILE ("lvalue-with-self.galgas", 88)) ;
      {
      routine_handleSelfAccessInAssignment (constinArgument_inSelfType, var_object_4201, ioArgument_ioTemporaries, ioArgument_ioInstructionGenerationList, outArgument_outCurrentObject, inCompiler  COMMA_SOURCE_FILE ("lvalue-with-self.galgas", 93)) ;
      }
    }else if (kBoolFalse == test_1) {
      outArgument_outCurrentObject = GALGAS_objectIR::constructor_possibleFunction (GALGAS_objectIR::constructor_selfObject (constinArgument_inSelfType  COMMA_SOURCE_FILE ("lvalue-with-self.galgas", 101)), inObject.mProperty_mIdentifier  COMMA_SOURCE_FILE ("lvalue-with-self.galgas", 101)) ;
    }
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (inObject.mProperty_mIdentifier.getter_location (SOURCE_FILE ("lvalue-with-self.galgas", 104)), GALGAS_string ("'self' should be a structure instance"), fixItArray2  COMMA_SOURCE_FILE ("lvalue-with-self.galgas", 104)) ;
    outArgument_outCurrentObject.drop () ; // Release error dropped variable
    outArgument_outGlobalVariableReceiverName.drop () ; // Release error dropped variable
  }
  cEnumerator_accessInAssignmentListAST enumerator_4718 (inObject.mProperty_mAccessList, kENUMERATION_UP) ;
  while (enumerator_4718.hasCurrentObject ()) {
    switch (enumerator_4718.current_mAccess (HERE).enumValue ()) {
    case GALGAS_accessInAssignmentAST::kNotBuilt:
      break ;
    case GALGAS_accessInAssignmentAST::kEnum_property:
      {
        const cEnumAssociatedValues_accessInAssignmentAST_property * extractPtr_4934 = (const cEnumAssociatedValues_accessInAssignmentAST_property *) (enumerator_4718.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_propertyName = extractPtr_4934->mAssociatedValue0 ;
        {
        routine_handlePropertyAccessInAssignment (outArgument_outCurrentObject, extractedValue_propertyName, ioArgument_ioTemporaries, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("lvalue-with-self.galgas", 110)) ;
        }
      }
      break ;
    case GALGAS_accessInAssignmentAST::kEnum_arrayAccess:
      {
        const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess * extractPtr_5599 = (const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess *) (enumerator_4718.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_indexExpression = extractPtr_5599->mAssociatedValue0 ;
        const GALGAS_location extractedValue_endOfExpression = extractPtr_5599->mAssociatedValue1 ;
        {
        routine_handleSubscriptInAssignmentAndExpression (constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, extractedValue_indexExpression, extractedValue_endOfExpression, ioArgument_ioInstructionGenerationList, outArgument_outCurrentObject, inCompiler  COMMA_SOURCE_FILE ("lvalue-with-self.galgas", 117)) ;
        }
      }
      break ;
    }
    enumerator_4718.gotoNextObject () ;
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
mProperty_mCanMutateProperties (),
mProperty_mRoutineCallingScheme () {
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
                                                    const GALGAS_bool & inOperand6,
                                                    const GALGAS_routineCallingSheme & inOperand7) :
mProperty_mIsPublic (inOperand0),
mProperty_mExported (inOperand1),
mProperty_mRoutineKind (inOperand2),
mProperty_mSignature (inOperand3),
mProperty_mReturnTypeProxy (inOperand4),
mProperty_mCanAccessProperties (inOperand5),
mProperty_mCanMutateProperties (inOperand6),
mProperty_mRoutineCallingScheme (inOperand7) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineDescriptor GALGAS_routineDescriptor::constructor_new (const GALGAS_bool & inOperand0,
                                                                    const GALGAS_bool & inOperand1,
                                                                    const GALGAS_routineKind & inOperand2,
                                                                    const GALGAS_routineTypedSignature & inOperand3,
                                                                    const GALGAS_unifiedTypeMap_2D_proxy & inOperand4,
                                                                    const GALGAS_bool & inOperand5,
                                                                    const GALGAS_bool & inOperand6,
                                                                    const GALGAS_routineCallingSheme & inOperand7 
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_routineDescriptor result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid ()) {
    result = GALGAS_routineDescriptor (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7) ;
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
  if (result == kOperandEqual) {
    result = mProperty_mRoutineCallingScheme.objectCompare (inOperand.mProperty_mRoutineCallingScheme) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_routineDescriptor::isValid (void) const {
  return mProperty_mIsPublic.isValid () && mProperty_mExported.isValid () && mProperty_mRoutineKind.isValid () && mProperty_mSignature.isValid () && mProperty_mReturnTypeProxy.isValid () && mProperty_mCanAccessProperties.isValid () && mProperty_mCanMutateProperties.isValid () && mProperty_mRoutineCallingScheme.isValid () ;
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
  mProperty_mRoutineCallingScheme.drop () ;
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
    ioString << ", " ;
    mProperty_mRoutineCallingScheme.description (ioString, inIndentation+1) ;
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

GALGAS_routineCallingSheme GALGAS_routineDescriptor::getter_mRoutineCallingScheme (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRoutineCallingScheme ;
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
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_universalPropertyAndRoutineMapForContext::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_universalPropertyAndRoutineMapForContext * p = (const cPtr_universalPropertyAndRoutineMapForContext *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_universalPropertyAndRoutineMapForContext) ;
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


typeComparisonResult GALGAS_universalPropertyAndRoutineMapForContext::objectCompare (const GALGAS_universalPropertyAndRoutineMapForContext & inOperand) const {
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

GALGAS_universalPropertyAndRoutineMapForContext::GALGAS_universalPropertyAndRoutineMapForContext (void) :
AC_GALGAS_class (true) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_universalPropertyAndRoutineMapForContext GALGAS_universalPropertyAndRoutineMapForContext::constructor_default (LOCATION_ARGS) {
  return GALGAS_universalPropertyAndRoutineMapForContext::constructor_new (GALGAS_internalUniversalPropertyAndRoutineMapForContext::constructor_emptyMap (HERE),
                                                                           GALGAS_scopeStack::constructor_emptyList (HERE),
                                                                           GALGAS_lstringlist::constructor_emptyList (HERE)
                                                                           COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_universalPropertyAndRoutineMapForContext::GALGAS_universalPropertyAndRoutineMapForContext (const cPtr_universalPropertyAndRoutineMapForContext * inSourcePtr) :
AC_GALGAS_class (inSourcePtr, true) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_universalPropertyAndRoutineMapForContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_universalPropertyAndRoutineMapForContext GALGAS_universalPropertyAndRoutineMapForContext::constructor_new (const GALGAS_internalUniversalPropertyAndRoutineMapForContext & inAttribute_mInternalPropertyAndRoutineMapForContext,
                                                                                                                  const GALGAS_scopeStack & inAttribute_mScopeStack,
                                                                                                                  const GALGAS_lstringlist & inAttribute_mLocalObjectList
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_universalPropertyAndRoutineMapForContext result ;
  if (inAttribute_mInternalPropertyAndRoutineMapForContext.isValid () && inAttribute_mScopeStack.isValid () && inAttribute_mLocalObjectList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_universalPropertyAndRoutineMapForContext (inAttribute_mInternalPropertyAndRoutineMapForContext, inAttribute_mScopeStack, inAttribute_mLocalObjectList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_internalUniversalPropertyAndRoutineMapForContext GALGAS_universalPropertyAndRoutineMapForContext::getter_mInternalPropertyAndRoutineMapForContext (UNUSED_LOCATION_ARGS) const {
  GALGAS_internalUniversalPropertyAndRoutineMapForContext result ;
  if (NULL != mObjectPtr) {
    const cPtr_universalPropertyAndRoutineMapForContext * p = (const cPtr_universalPropertyAndRoutineMapForContext *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_universalPropertyAndRoutineMapForContext) ;
    result = p->mProperty_mInternalPropertyAndRoutineMapForContext ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_internalUniversalPropertyAndRoutineMapForContext cPtr_universalPropertyAndRoutineMapForContext::getter_mInternalPropertyAndRoutineMapForContext (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInternalPropertyAndRoutineMapForContext ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_scopeStack GALGAS_universalPropertyAndRoutineMapForContext::getter_mScopeStack (UNUSED_LOCATION_ARGS) const {
  GALGAS_scopeStack result ;
  if (NULL != mObjectPtr) {
    const cPtr_universalPropertyAndRoutineMapForContext * p = (const cPtr_universalPropertyAndRoutineMapForContext *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_universalPropertyAndRoutineMapForContext) ;
    result = p->mProperty_mScopeStack ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_scopeStack cPtr_universalPropertyAndRoutineMapForContext::getter_mScopeStack (UNUSED_LOCATION_ARGS) const {
  return mProperty_mScopeStack ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_universalPropertyAndRoutineMapForContext::getter_mLocalObjectList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_universalPropertyAndRoutineMapForContext * p = (const cPtr_universalPropertyAndRoutineMapForContext *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_universalPropertyAndRoutineMapForContext) ;
    result = p->mProperty_mLocalObjectList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist cPtr_universalPropertyAndRoutineMapForContext::getter_mLocalObjectList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLocalObjectList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                          Pointer class for @universalPropertyAndRoutineMapForContext class                          *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_universalPropertyAndRoutineMapForContext::cPtr_universalPropertyAndRoutineMapForContext (const GALGAS_internalUniversalPropertyAndRoutineMapForContext & in_mInternalPropertyAndRoutineMapForContext,
                                                                                              const GALGAS_scopeStack & in_mScopeStack,
                                                                                              const GALGAS_lstringlist & in_mLocalObjectList
                                                                                              COMMA_LOCATION_ARGS) :
acPtr_class (THERE),
mProperty_mInternalPropertyAndRoutineMapForContext (in_mInternalPropertyAndRoutineMapForContext),
mProperty_mScopeStack (in_mScopeStack),
mProperty_mLocalObjectList (in_mLocalObjectList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_universalPropertyAndRoutineMapForContext::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_universalPropertyAndRoutineMapForContext ;
}

void cPtr_universalPropertyAndRoutineMapForContext::description (C_String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString << "[@universalPropertyAndRoutineMapForContext:" ;
  mProperty_mInternalPropertyAndRoutineMapForContext.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mScopeStack.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLocalObjectList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_universalPropertyAndRoutineMapForContext::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_universalPropertyAndRoutineMapForContext (mProperty_mInternalPropertyAndRoutineMapForContext, mProperty_mScopeStack, mProperty_mLocalObjectList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @universalPropertyAndRoutineMapForContext type                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_universalPropertyAndRoutineMapForContext ("universalPropertyAndRoutineMapForContext",
                                                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_universalPropertyAndRoutineMapForContext::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_universalPropertyAndRoutineMapForContext ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_universalPropertyAndRoutineMapForContext::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_universalPropertyAndRoutineMapForContext (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_universalPropertyAndRoutineMapForContext GALGAS_universalPropertyAndRoutineMapForContext::extractObject (const GALGAS_object & inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_universalPropertyAndRoutineMapForContext result ;
  const GALGAS_universalPropertyAndRoutineMapForContext * p = (const GALGAS_universalPropertyAndRoutineMapForContext *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_universalPropertyAndRoutineMapForContext *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("universalPropertyAndRoutineMapForContext", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Extension setter '@universalPropertyAndRoutineMapForContext insertRoutine'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionSetterSignature_universalPropertyAndRoutineMapForContext_insertRoutine> gExtensionModifierTable_universalPropertyAndRoutineMapForContext_insertRoutine ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_insertRoutine (const int32_t inClassIndex,
                                         extensionSetterSignature_universalPropertyAndRoutineMapForContext_insertRoutine inModifier) {
  gExtensionModifierTable_universalPropertyAndRoutineMapForContext_insertRoutine.forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_insertRoutine (cPtr_universalPropertyAndRoutineMapForContext * inObject,
                                        const GALGAS_lstring constin_inRoutineName,
                                        const GALGAS_lstring constin_inArgumentSignature,
                                        const GALGAS_lstring constin_inLLVMInvocationRoutineName,
                                        const GALGAS_routineDescriptor constin_inDescriptor,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find setter
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_universalPropertyAndRoutineMapForContext) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_universalPropertyAndRoutineMapForContext_insertRoutine f = NULL ;
    if (classIndex < gExtensionModifierTable_universalPropertyAndRoutineMapForContext_insertRoutine.count ()) {
      f = gExtensionModifierTable_universalPropertyAndRoutineMapForContext_insertRoutine (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionModifierTable_universalPropertyAndRoutineMapForContext_insertRoutine.count ()) {
           f = gExtensionModifierTable_universalPropertyAndRoutineMapForContext_insertRoutine (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_universalPropertyAndRoutineMapForContext_insertRoutine.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    f (inObject, constin_inRoutineName, constin_inArgumentSignature, constin_inLLVMInvocationRoutineName, constin_inDescriptor, inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionSetter_universalPropertyAndRoutineMapForContext_insertRoutine (cPtr_universalPropertyAndRoutineMapForContext * inObject,
                                                                                    const GALGAS_lstring constinArgument_inRoutineName,
                                                                                    const GALGAS_lstring constinArgument_inArgumentSignature,
                                                                                    const GALGAS_lstring constinArgument_inLLVMInvocationRoutineName,
                                                                                    const GALGAS_routineDescriptor constinArgument_inDescriptor,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_universalPropertyAndRoutineMapForContext * object = inObject ;
  macroValidSharedObject (object, cPtr_universalPropertyAndRoutineMapForContext) ;
  cMapElement_internalUniversalPropertyAndRoutineMapForContext * objectArray_1444 = (cMapElement_internalUniversalPropertyAndRoutineMapForContext *) object->mProperty_mInternalPropertyAndRoutineMapForContext.readWriteAccessForWithInstruction (inCompiler, constinArgument_inRoutineName.getter_string (HERE)  COMMA_SOURCE_FILE ("universal-map.galgas", 26)) ;
  if (NULL != objectArray_1444) {
      macroValidSharedObject (objectArray_1444, cMapElement_internalUniversalPropertyAndRoutineMapForContext) ;
    {
    objectArray_1444->mProperty_mRoutineSignatureMapForContext.setter_insertKey (constinArgument_inArgumentSignature, constinArgument_inLLVMInvocationRoutineName, constinArgument_inDescriptor, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 27)) ;
    }
  }else{
    GALGAS_routineSignatureMapForContext var_routineSignatureMapForContext_1722 = GALGAS_routineSignatureMapForContext::constructor_emptyMap (SOURCE_FILE ("universal-map.galgas", 33)) ;
    {
    var_routineSignatureMapForContext_1722.setter_insertKey (constinArgument_inArgumentSignature, constinArgument_inLLVMInvocationRoutineName, constinArgument_inDescriptor, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 34)) ;
    }
    {
    object->mProperty_mInternalPropertyAndRoutineMapForContext.setter_insertKey (constinArgument_inRoutineName, GALGAS_valuedObjectState::constructor_noValue (SOURCE_FILE ("universal-map.galgas", 41)), GALGAS_bool (false), GALGAS_possibleValuedObject::constructor_undefined (SOURCE_FILE ("universal-map.galgas", 43)), var_routineSignatureMapForContext_1722, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 39)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionSetter_universalPropertyAndRoutineMapForContext_insertRoutine (void) {
  enterExtensionSetter_insertRoutine (kTypeDescriptor_GALGAS_universalPropertyAndRoutineMapForContext.mSlotID,
                                      extensionSetter_universalPropertyAndRoutineMapForContext_insertRoutine) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionModifier_universalPropertyAndRoutineMapForContext_insertRoutine (void) {
  gExtensionModifierTable_universalPropertyAndRoutineMapForContext_insertRoutine.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_universalPropertyAndRoutineMapForContext_insertRoutine (defineExtensionSetter_universalPropertyAndRoutineMapForContext_insertRoutine,
                                                                                   freeExtensionModifier_universalPropertyAndRoutineMapForContext_insertRoutine) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Extension setter '@universalPropertyAndRoutineMapForContext insertProperty'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionSetterSignature_universalPropertyAndRoutineMapForContext_insertProperty> gExtensionModifierTable_universalPropertyAndRoutineMapForContext_insertProperty ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_insertProperty (const int32_t inClassIndex,
                                          extensionSetterSignature_universalPropertyAndRoutineMapForContext_insertProperty inModifier) {
  gExtensionModifierTable_universalPropertyAndRoutineMapForContext_insertProperty.forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_insertProperty (cPtr_universalPropertyAndRoutineMapForContext * inObject,
                                         const GALGAS_lstring constin_inPropertyName,
                                         const GALGAS_bool constin_inIsPublic,
                                         const GALGAS_objectIR constin_inObjectIR,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find setter
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_universalPropertyAndRoutineMapForContext) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_universalPropertyAndRoutineMapForContext_insertProperty f = NULL ;
    if (classIndex < gExtensionModifierTable_universalPropertyAndRoutineMapForContext_insertProperty.count ()) {
      f = gExtensionModifierTable_universalPropertyAndRoutineMapForContext_insertProperty (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionModifierTable_universalPropertyAndRoutineMapForContext_insertProperty.count ()) {
           f = gExtensionModifierTable_universalPropertyAndRoutineMapForContext_insertProperty (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_universalPropertyAndRoutineMapForContext_insertProperty.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    f (inObject, constin_inPropertyName, constin_inIsPublic, constin_inObjectIR, inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionSetter_universalPropertyAndRoutineMapForContext_insertProperty (cPtr_universalPropertyAndRoutineMapForContext * inObject,
                                                                                     const GALGAS_lstring constinArgument_inPropertyName,
                                                                                     const GALGAS_bool constinArgument_inIsPublic,
                                                                                     const GALGAS_objectIR constinArgument_inObjectIR,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_universalPropertyAndRoutineMapForContext * object = inObject ;
  macroValidSharedObject (object, cPtr_universalPropertyAndRoutineMapForContext) ;
  GALGAS_possibleValuedObject var_newValue_2333 = GALGAS_possibleValuedObject::constructor_property (constinArgument_inIsPublic, constinArgument_inObjectIR  COMMA_SOURCE_FILE ("universal-map.galgas", 56)) ;
  cMapElement_internalUniversalPropertyAndRoutineMapForContext * objectArray_2417 = (cMapElement_internalUniversalPropertyAndRoutineMapForContext *) object->mProperty_mInternalPropertyAndRoutineMapForContext.readWriteAccessForWithInstruction (inCompiler, constinArgument_inPropertyName.getter_string (HERE)  COMMA_SOURCE_FILE ("universal-map.galgas", 57)) ;
  if (NULL != objectArray_2417) {
      macroValidSharedObject (objectArray_2417, cMapElement_internalUniversalPropertyAndRoutineMapForContext) ;
    const enumGalgasBool test_0 = objectArray_2417->mProperty_mPossibleValuedObject.getter_isUndefined (SOURCE_FILE ("universal-map.galgas", 58)).boolEnum () ;
    if (kBoolTrue == test_0) {
      objectArray_2417->mProperty_mPossibleValuedObject = var_newValue_2333 ;
    }else if (kBoolFalse == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inPropertyName.getter_location (SOURCE_FILE ("universal-map.galgas", 61)), GALGAS_string ("object already defined in this context"), fixItArray1  COMMA_SOURCE_FILE ("universal-map.galgas", 61)) ;
    }
  }else{
    {
    object->mProperty_mInternalPropertyAndRoutineMapForContext.setter_insertKey (constinArgument_inPropertyName, GALGAS_valuedObjectState::constructor_noValue (SOURCE_FILE ("universal-map.galgas", 66)), GALGAS_bool (false), var_newValue_2333, GALGAS_routineSignatureMapForContext::constructor_emptyMap (SOURCE_FILE ("universal-map.galgas", 69)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 64)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionSetter_universalPropertyAndRoutineMapForContext_insertProperty (void) {
  enterExtensionSetter_insertProperty (kTypeDescriptor_GALGAS_universalPropertyAndRoutineMapForContext.mSlotID,
                                       extensionSetter_universalPropertyAndRoutineMapForContext_insertProperty) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionModifier_universalPropertyAndRoutineMapForContext_insertProperty (void) {
  gExtensionModifierTable_universalPropertyAndRoutineMapForContext_insertProperty.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_universalPropertyAndRoutineMapForContext_insertProperty (defineExtensionSetter_universalPropertyAndRoutineMapForContext_insertProperty,
                                                                                    freeExtensionModifier_universalPropertyAndRoutineMapForContext_insertProperty) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Extension setter '@universalPropertyAndRoutineMapForContext insertModule'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionSetterSignature_universalPropertyAndRoutineMapForContext_insertModule> gExtensionModifierTable_universalPropertyAndRoutineMapForContext_insertModule ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_insertModule (const int32_t inClassIndex,
                                        extensionSetterSignature_universalPropertyAndRoutineMapForContext_insertModule inModifier) {
  gExtensionModifierTable_universalPropertyAndRoutineMapForContext_insertModule.forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_insertModule (cPtr_universalPropertyAndRoutineMapForContext * inObject,
                                       const GALGAS_lstring constin_inModuleName,
                                       const GALGAS_PLMType constin_inModuleType,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find setter
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_universalPropertyAndRoutineMapForContext) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_universalPropertyAndRoutineMapForContext_insertModule f = NULL ;
    if (classIndex < gExtensionModifierTable_universalPropertyAndRoutineMapForContext_insertModule.count ()) {
      f = gExtensionModifierTable_universalPropertyAndRoutineMapForContext_insertModule (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionModifierTable_universalPropertyAndRoutineMapForContext_insertModule.count ()) {
           f = gExtensionModifierTable_universalPropertyAndRoutineMapForContext_insertModule (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_universalPropertyAndRoutineMapForContext_insertModule.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    f (inObject, constin_inModuleName, constin_inModuleType, inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionSetter_universalPropertyAndRoutineMapForContext_insertModule (cPtr_universalPropertyAndRoutineMapForContext * inObject,
                                                                                   const GALGAS_lstring constinArgument_inModuleName,
                                                                                   const GALGAS_PLMType constinArgument_inModuleType,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_universalPropertyAndRoutineMapForContext * object = inObject ;
  macroValidSharedObject (object, cPtr_universalPropertyAndRoutineMapForContext) ;
  GALGAS_possibleValuedObject var_newValue_3098 = GALGAS_possibleValuedObject::constructor_module (constinArgument_inModuleType  COMMA_SOURCE_FILE ("universal-map.galgas", 80)) ;
  cMapElement_internalUniversalPropertyAndRoutineMapForContext * objectArray_3157 = (cMapElement_internalUniversalPropertyAndRoutineMapForContext *) object->mProperty_mInternalPropertyAndRoutineMapForContext.readWriteAccessForWithInstruction (inCompiler, constinArgument_inModuleName.getter_string (HERE)  COMMA_SOURCE_FILE ("universal-map.galgas", 81)) ;
  if (NULL != objectArray_3157) {
      macroValidSharedObject (objectArray_3157, cMapElement_internalUniversalPropertyAndRoutineMapForContext) ;
    const enumGalgasBool test_0 = objectArray_3157->mProperty_mPossibleValuedObject.getter_isUndefined (SOURCE_FILE ("universal-map.galgas", 82)).boolEnum () ;
    if (kBoolTrue == test_0) {
      objectArray_3157->mProperty_mPossibleValuedObject = var_newValue_3098 ;
    }else if (kBoolFalse == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inModuleName.getter_location (SOURCE_FILE ("universal-map.galgas", 85)), GALGAS_string ("object already defined in this context"), fixItArray1  COMMA_SOURCE_FILE ("universal-map.galgas", 85)) ;
    }
  }else{
    {
    object->mProperty_mInternalPropertyAndRoutineMapForContext.setter_insertKey (constinArgument_inModuleName, GALGAS_valuedObjectState::constructor_noValue (SOURCE_FILE ("universal-map.galgas", 90)), GALGAS_bool (false), var_newValue_3098, GALGAS_routineSignatureMapForContext::constructor_emptyMap (SOURCE_FILE ("universal-map.galgas", 93)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 88)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionSetter_universalPropertyAndRoutineMapForContext_insertModule (void) {
  enterExtensionSetter_insertModule (kTypeDescriptor_GALGAS_universalPropertyAndRoutineMapForContext.mSlotID,
                                     extensionSetter_universalPropertyAndRoutineMapForContext_insertModule) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionModifier_universalPropertyAndRoutineMapForContext_insertModule (void) {
  gExtensionModifierTable_universalPropertyAndRoutineMapForContext_insertModule.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_universalPropertyAndRoutineMapForContext_insertModule (defineExtensionSetter_universalPropertyAndRoutineMapForContext_insertModule,
                                                                                  freeExtensionModifier_universalPropertyAndRoutineMapForContext_insertModule) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Extension setter '@universalPropertyAndRoutineMapForContext insertRegister'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionSetterSignature_universalPropertyAndRoutineMapForContext_insertRegister> gExtensionModifierTable_universalPropertyAndRoutineMapForContext_insertRegister ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_insertRegister (const int32_t inClassIndex,
                                          extensionSetterSignature_universalPropertyAndRoutineMapForContext_insertRegister inModifier) {
  gExtensionModifierTable_universalPropertyAndRoutineMapForContext_insertRegister.forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_insertRegister (cPtr_universalPropertyAndRoutineMapForContext * inObject,
                                         const GALGAS_lstring constin_inRegisterName,
                                         const GALGAS_bool constin_inReadable,
                                         const GALGAS_bool constin_inWritable,
                                         const GALGAS_objectIR constin_inRegisterObjectIR,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find setter
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_universalPropertyAndRoutineMapForContext) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_universalPropertyAndRoutineMapForContext_insertRegister f = NULL ;
    if (classIndex < gExtensionModifierTable_universalPropertyAndRoutineMapForContext_insertRegister.count ()) {
      f = gExtensionModifierTable_universalPropertyAndRoutineMapForContext_insertRegister (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionModifierTable_universalPropertyAndRoutineMapForContext_insertRegister.count ()) {
           f = gExtensionModifierTable_universalPropertyAndRoutineMapForContext_insertRegister (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_universalPropertyAndRoutineMapForContext_insertRegister.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    f (inObject, constin_inRegisterName, constin_inReadable, constin_inWritable, constin_inRegisterObjectIR, inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionSetter_universalPropertyAndRoutineMapForContext_insertRegister (cPtr_universalPropertyAndRoutineMapForContext * inObject,
                                                                                     const GALGAS_lstring constinArgument_inRegisterName,
                                                                                     const GALGAS_bool constinArgument_inReadable,
                                                                                     const GALGAS_bool constinArgument_inWritable,
                                                                                     const GALGAS_objectIR constinArgument_inRegisterObjectIR,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_universalPropertyAndRoutineMapForContext * object = inObject ;
  macroValidSharedObject (object, cPtr_universalPropertyAndRoutineMapForContext) ;
  GALGAS_possibleValuedObject var_newValue_3909 = GALGAS_possibleValuedObject::constructor_register (constinArgument_inReadable, constinArgument_inWritable, constinArgument_inRegisterObjectIR  COMMA_SOURCE_FILE ("universal-map.galgas", 106)) ;
  cMapElement_internalUniversalPropertyAndRoutineMapForContext * objectArray_4038 = (cMapElement_internalUniversalPropertyAndRoutineMapForContext *) object->mProperty_mInternalPropertyAndRoutineMapForContext.readWriteAccessForWithInstruction (inCompiler, constinArgument_inRegisterName.getter_string (HERE)  COMMA_SOURCE_FILE ("universal-map.galgas", 111)) ;
  if (NULL != objectArray_4038) {
      macroValidSharedObject (objectArray_4038, cMapElement_internalUniversalPropertyAndRoutineMapForContext) ;
    const enumGalgasBool test_0 = objectArray_4038->mProperty_mPossibleValuedObject.getter_isUndefined (SOURCE_FILE ("universal-map.galgas", 112)).boolEnum () ;
    if (kBoolTrue == test_0) {
      objectArray_4038->mProperty_mPossibleValuedObject = var_newValue_3909 ;
    }else if (kBoolFalse == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterName.getter_location (SOURCE_FILE ("universal-map.galgas", 115)), GALGAS_string ("object already defined in this context"), fixItArray1  COMMA_SOURCE_FILE ("universal-map.galgas", 115)) ;
    }
  }else{
    {
    object->mProperty_mInternalPropertyAndRoutineMapForContext.setter_insertKey (constinArgument_inRegisterName, GALGAS_valuedObjectState::constructor_noValue (SOURCE_FILE ("universal-map.galgas", 120)), GALGAS_bool (false), var_newValue_3909, GALGAS_routineSignatureMapForContext::constructor_emptyMap (SOURCE_FILE ("universal-map.galgas", 123)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 118)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionSetter_universalPropertyAndRoutineMapForContext_insertRegister (void) {
  enterExtensionSetter_insertRegister (kTypeDescriptor_GALGAS_universalPropertyAndRoutineMapForContext.mSlotID,
                                       extensionSetter_universalPropertyAndRoutineMapForContext_insertRegister) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionModifier_universalPropertyAndRoutineMapForContext_insertRegister (void) {
  gExtensionModifierTable_universalPropertyAndRoutineMapForContext_insertRegister.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_universalPropertyAndRoutineMapForContext_insertRegister (defineExtensionSetter_universalPropertyAndRoutineMapForContext_insertRegister,
                                                                                    freeExtensionModifier_universalPropertyAndRoutineMapForContext_insertRegister) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Extension setter '@universalPropertyAndRoutineMapForContext insertGlobalConstant'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionSetterSignature_universalPropertyAndRoutineMapForContext_insertGlobalConstant> gExtensionModifierTable_universalPropertyAndRoutineMapForContext_insertGlobalConstant ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_insertGlobalConstant (const int32_t inClassIndex,
                                                extensionSetterSignature_universalPropertyAndRoutineMapForContext_insertGlobalConstant inModifier) {
  gExtensionModifierTable_universalPropertyAndRoutineMapForContext_insertGlobalConstant.forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_insertGlobalConstant (cPtr_universalPropertyAndRoutineMapForContext * inObject,
                                               const GALGAS_lstring constin_inConstantName,
                                               const GALGAS_objectIR constin_inConstantObjectIR,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find setter
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_universalPropertyAndRoutineMapForContext) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_universalPropertyAndRoutineMapForContext_insertGlobalConstant f = NULL ;
    if (classIndex < gExtensionModifierTable_universalPropertyAndRoutineMapForContext_insertGlobalConstant.count ()) {
      f = gExtensionModifierTable_universalPropertyAndRoutineMapForContext_insertGlobalConstant (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionModifierTable_universalPropertyAndRoutineMapForContext_insertGlobalConstant.count ()) {
           f = gExtensionModifierTable_universalPropertyAndRoutineMapForContext_insertGlobalConstant (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_universalPropertyAndRoutineMapForContext_insertGlobalConstant.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    f (inObject, constin_inConstantName, constin_inConstantObjectIR, inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionSetter_universalPropertyAndRoutineMapForContext_insertGlobalConstant (cPtr_universalPropertyAndRoutineMapForContext * inObject,
                                                                                           const GALGAS_lstring constinArgument_inConstantName,
                                                                                           const GALGAS_objectIR constinArgument_inConstantObjectIR,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_universalPropertyAndRoutineMapForContext * object = inObject ;
  macroValidSharedObject (object, cPtr_universalPropertyAndRoutineMapForContext) ;
  GALGAS_possibleValuedObject var_newValue_4736 = GALGAS_possibleValuedObject::constructor_globalConstant (constinArgument_inConstantObjectIR  COMMA_SOURCE_FILE ("universal-map.galgas", 134)) ;
  cMapElement_internalUniversalPropertyAndRoutineMapForContext * objectArray_4813 = (cMapElement_internalUniversalPropertyAndRoutineMapForContext *) object->mProperty_mInternalPropertyAndRoutineMapForContext.readWriteAccessForWithInstruction (inCompiler, constinArgument_inConstantName.getter_string (HERE)  COMMA_SOURCE_FILE ("universal-map.galgas", 135)) ;
  if (NULL != objectArray_4813) {
      macroValidSharedObject (objectArray_4813, cMapElement_internalUniversalPropertyAndRoutineMapForContext) ;
    const enumGalgasBool test_0 = objectArray_4813->mProperty_mPossibleValuedObject.getter_isUndefined (SOURCE_FILE ("universal-map.galgas", 136)).boolEnum () ;
    if (kBoolTrue == test_0) {
      objectArray_4813->mProperty_mPossibleValuedObject = var_newValue_4736 ;
    }else if (kBoolFalse == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inConstantName.getter_location (SOURCE_FILE ("universal-map.galgas", 139)), GALGAS_string ("object already defined in this context"), fixItArray1  COMMA_SOURCE_FILE ("universal-map.galgas", 139)) ;
    }
  }else{
    {
    object->mProperty_mInternalPropertyAndRoutineMapForContext.setter_insertKey (constinArgument_inConstantName, GALGAS_valuedObjectState::constructor_noValue (SOURCE_FILE ("universal-map.galgas", 144)), GALGAS_bool (false), var_newValue_4736, GALGAS_routineSignatureMapForContext::constructor_emptyMap (SOURCE_FILE ("universal-map.galgas", 147)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 142)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionSetter_universalPropertyAndRoutineMapForContext_insertGlobalConstant (void) {
  enterExtensionSetter_insertGlobalConstant (kTypeDescriptor_GALGAS_universalPropertyAndRoutineMapForContext.mSlotID,
                                             extensionSetter_universalPropertyAndRoutineMapForContext_insertGlobalConstant) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionModifier_universalPropertyAndRoutineMapForContext_insertGlobalConstant (void) {
  gExtensionModifierTable_universalPropertyAndRoutineMapForContext_insertGlobalConstant.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_universalPropertyAndRoutineMapForContext_insertGlobalConstant (defineExtensionSetter_universalPropertyAndRoutineMapForContext_insertGlobalConstant,
                                                                                          freeExtensionModifier_universalPropertyAndRoutineMapForContext_insertGlobalConstant) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Extension setter '@universalPropertyAndRoutineMapForContext insertLocalConstant'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionSetterSignature_universalPropertyAndRoutineMapForContext_insertLocalConstant> gExtensionModifierTable_universalPropertyAndRoutineMapForContext_insertLocalConstant ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_insertLocalConstant (const int32_t inClassIndex,
                                               extensionSetterSignature_universalPropertyAndRoutineMapForContext_insertLocalConstant inModifier) {
  gExtensionModifierTable_universalPropertyAndRoutineMapForContext_insertLocalConstant.forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_insertLocalConstant (cPtr_universalPropertyAndRoutineMapForContext * inObject,
                                              const GALGAS_lstring constin_inLocalConstantName,
                                              const GALGAS_objectIR constin_inConstantObjectIR,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find setter
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_universalPropertyAndRoutineMapForContext) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_universalPropertyAndRoutineMapForContext_insertLocalConstant f = NULL ;
    if (classIndex < gExtensionModifierTable_universalPropertyAndRoutineMapForContext_insertLocalConstant.count ()) {
      f = gExtensionModifierTable_universalPropertyAndRoutineMapForContext_insertLocalConstant (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionModifierTable_universalPropertyAndRoutineMapForContext_insertLocalConstant.count ()) {
           f = gExtensionModifierTable_universalPropertyAndRoutineMapForContext_insertLocalConstant (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_universalPropertyAndRoutineMapForContext_insertLocalConstant.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    f (inObject, constin_inLocalConstantName, constin_inConstantObjectIR, inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionSetter_universalPropertyAndRoutineMapForContext_insertLocalConstant (cPtr_universalPropertyAndRoutineMapForContext * inObject,
                                                                                          const GALGAS_lstring constinArgument_inLocalConstantName,
                                                                                          const GALGAS_objectIR constinArgument_inConstantObjectIR,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_universalPropertyAndRoutineMapForContext * object = inObject ;
  macroValidSharedObject (object, cPtr_universalPropertyAndRoutineMapForContext) ;
  GALGAS_possibleValuedObject var_newValue_5515 = GALGAS_possibleValuedObject::constructor_localConstant (constinArgument_inConstantObjectIR  COMMA_SOURCE_FILE ("universal-map.galgas", 158)) ;
  cMapElement_internalUniversalPropertyAndRoutineMapForContext * objectArray_5591 = (cMapElement_internalUniversalPropertyAndRoutineMapForContext *) object->mProperty_mInternalPropertyAndRoutineMapForContext.readWriteAccessForWithInstruction (inCompiler, constinArgument_inLocalConstantName.getter_string (HERE)  COMMA_SOURCE_FILE ("universal-map.galgas", 159)) ;
  if (NULL != objectArray_5591) {
      macroValidSharedObject (objectArray_5591, cMapElement_internalUniversalPropertyAndRoutineMapForContext) ;
    const enumGalgasBool test_0 = objectArray_5591->mProperty_mPossibleValuedObject.getter_isUndefined (SOURCE_FILE ("universal-map.galgas", 160)).boolEnum () ;
    if (kBoolTrue == test_0) {
      objectArray_5591->mProperty_mObjectState = GALGAS_valuedObjectState::constructor_hasUnreadValue (SOURCE_FILE ("universal-map.galgas", 161)) ;
      objectArray_5591->mProperty_mPossibleValuedObject = var_newValue_5515 ;
    }else if (kBoolFalse == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inLocalConstantName.getter_location (SOURCE_FILE ("universal-map.galgas", 164)), GALGAS_string ("object already defined in this context"), fixItArray1  COMMA_SOURCE_FILE ("universal-map.galgas", 164)) ;
    }
  }else{
    {
    object->mProperty_mInternalPropertyAndRoutineMapForContext.setter_insertKey (constinArgument_inLocalConstantName, GALGAS_valuedObjectState::constructor_hasUnreadValue (SOURCE_FILE ("universal-map.galgas", 169)), GALGAS_bool (false), var_newValue_5515, GALGAS_routineSignatureMapForContext::constructor_emptyMap (SOURCE_FILE ("universal-map.galgas", 172)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 167)) ;
    }
  }
  object->mProperty_mLocalObjectList.addAssign_operation (constinArgument_inLocalConstantName  COMMA_SOURCE_FILE ("universal-map.galgas", 175)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionSetter_universalPropertyAndRoutineMapForContext_insertLocalConstant (void) {
  enterExtensionSetter_insertLocalConstant (kTypeDescriptor_GALGAS_universalPropertyAndRoutineMapForContext.mSlotID,
                                            extensionSetter_universalPropertyAndRoutineMapForContext_insertLocalConstant) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionModifier_universalPropertyAndRoutineMapForContext_insertLocalConstant (void) {
  gExtensionModifierTable_universalPropertyAndRoutineMapForContext_insertLocalConstant.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_universalPropertyAndRoutineMapForContext_insertLocalConstant (defineExtensionSetter_universalPropertyAndRoutineMapForContext_insertLocalConstant,
                                                                                         freeExtensionModifier_universalPropertyAndRoutineMapForContext_insertLocalConstant) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Extension setter '@universalPropertyAndRoutineMapForContext insertUsedLocalConstant'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionSetterSignature_universalPropertyAndRoutineMapForContext_insertUsedLocalConstant> gExtensionModifierTable_universalPropertyAndRoutineMapForContext_insertUsedLocalConstant ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_insertUsedLocalConstant (const int32_t inClassIndex,
                                                   extensionSetterSignature_universalPropertyAndRoutineMapForContext_insertUsedLocalConstant inModifier) {
  gExtensionModifierTable_universalPropertyAndRoutineMapForContext_insertUsedLocalConstant.forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_insertUsedLocalConstant (cPtr_universalPropertyAndRoutineMapForContext * inObject,
                                                  const GALGAS_lstring constin_inLocalConstantName,
                                                  const GALGAS_objectIR constin_inConstantObjectIR,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find setter
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_universalPropertyAndRoutineMapForContext) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_universalPropertyAndRoutineMapForContext_insertUsedLocalConstant f = NULL ;
    if (classIndex < gExtensionModifierTable_universalPropertyAndRoutineMapForContext_insertUsedLocalConstant.count ()) {
      f = gExtensionModifierTable_universalPropertyAndRoutineMapForContext_insertUsedLocalConstant (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionModifierTable_universalPropertyAndRoutineMapForContext_insertUsedLocalConstant.count ()) {
           f = gExtensionModifierTable_universalPropertyAndRoutineMapForContext_insertUsedLocalConstant (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_universalPropertyAndRoutineMapForContext_insertUsedLocalConstant.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    f (inObject, constin_inLocalConstantName, constin_inConstantObjectIR, inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionSetter_universalPropertyAndRoutineMapForContext_insertUsedLocalConstant (cPtr_universalPropertyAndRoutineMapForContext * inObject,
                                                                                              const GALGAS_lstring constinArgument_inLocalConstantName,
                                                                                              const GALGAS_objectIR constinArgument_inConstantObjectIR,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_universalPropertyAndRoutineMapForContext * object = inObject ;
  macroValidSharedObject (object, cPtr_universalPropertyAndRoutineMapForContext) ;
  GALGAS_possibleValuedObject var_newValue_6399 = GALGAS_possibleValuedObject::constructor_localConstant (constinArgument_inConstantObjectIR  COMMA_SOURCE_FILE ("universal-map.galgas", 184)) ;
  cMapElement_internalUniversalPropertyAndRoutineMapForContext * objectArray_6475 = (cMapElement_internalUniversalPropertyAndRoutineMapForContext *) object->mProperty_mInternalPropertyAndRoutineMapForContext.readWriteAccessForWithInstruction (inCompiler, constinArgument_inLocalConstantName.getter_string (HERE)  COMMA_SOURCE_FILE ("universal-map.galgas", 185)) ;
  if (NULL != objectArray_6475) {
      macroValidSharedObject (objectArray_6475, cMapElement_internalUniversalPropertyAndRoutineMapForContext) ;
    const enumGalgasBool test_0 = objectArray_6475->mProperty_mPossibleValuedObject.getter_isUndefined (SOURCE_FILE ("universal-map.galgas", 186)).boolEnum () ;
    if (kBoolTrue == test_0) {
      objectArray_6475->mProperty_mObjectState = GALGAS_valuedObjectState::constructor_hasReadValue (SOURCE_FILE ("universal-map.galgas", 187)) ;
      objectArray_6475->mProperty_mPossibleValuedObject = var_newValue_6399 ;
    }else if (kBoolFalse == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inLocalConstantName.getter_location (SOURCE_FILE ("universal-map.galgas", 190)), GALGAS_string ("object already defined in this context"), fixItArray1  COMMA_SOURCE_FILE ("universal-map.galgas", 190)) ;
    }
  }else{
    {
    object->mProperty_mInternalPropertyAndRoutineMapForContext.setter_insertKey (constinArgument_inLocalConstantName, GALGAS_valuedObjectState::constructor_hasReadValue (SOURCE_FILE ("universal-map.galgas", 195)), GALGAS_bool (false), var_newValue_6399, GALGAS_routineSignatureMapForContext::constructor_emptyMap (SOURCE_FILE ("universal-map.galgas", 198)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 193)) ;
    }
  }
  object->mProperty_mLocalObjectList.addAssign_operation (constinArgument_inLocalConstantName  COMMA_SOURCE_FILE ("universal-map.galgas", 201)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionSetter_universalPropertyAndRoutineMapForContext_insertUsedLocalConstant (void) {
  enterExtensionSetter_insertUsedLocalConstant (kTypeDescriptor_GALGAS_universalPropertyAndRoutineMapForContext.mSlotID,
                                                extensionSetter_universalPropertyAndRoutineMapForContext_insertUsedLocalConstant) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionModifier_universalPropertyAndRoutineMapForContext_insertUsedLocalConstant (void) {
  gExtensionModifierTable_universalPropertyAndRoutineMapForContext_insertUsedLocalConstant.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_universalPropertyAndRoutineMapForContext_insertUsedLocalConstant (defineExtensionSetter_universalPropertyAndRoutineMapForContext_insertUsedLocalConstant,
                                                                                             freeExtensionModifier_universalPropertyAndRoutineMapForContext_insertUsedLocalConstant) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Extension setter '@universalPropertyAndRoutineMapForContext insertGlobalVariable'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionSetterSignature_universalPropertyAndRoutineMapForContext_insertGlobalVariable> gExtensionModifierTable_universalPropertyAndRoutineMapForContext_insertGlobalVariable ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_insertGlobalVariable (const int32_t inClassIndex,
                                                extensionSetterSignature_universalPropertyAndRoutineMapForContext_insertGlobalVariable inModifier) {
  gExtensionModifierTable_universalPropertyAndRoutineMapForContext_insertGlobalVariable.forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_insertGlobalVariable (cPtr_universalPropertyAndRoutineMapForContext * inObject,
                                               const GALGAS_lstring constin_inGlobalVariableName,
                                               const GALGAS_objectIR constin_inObjectIR,
                                               const GALGAS_bool constin_inWritable,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find setter
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_universalPropertyAndRoutineMapForContext) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_universalPropertyAndRoutineMapForContext_insertGlobalVariable f = NULL ;
    if (classIndex < gExtensionModifierTable_universalPropertyAndRoutineMapForContext_insertGlobalVariable.count ()) {
      f = gExtensionModifierTable_universalPropertyAndRoutineMapForContext_insertGlobalVariable (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionModifierTable_universalPropertyAndRoutineMapForContext_insertGlobalVariable.count ()) {
           f = gExtensionModifierTable_universalPropertyAndRoutineMapForContext_insertGlobalVariable (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_universalPropertyAndRoutineMapForContext_insertGlobalVariable.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    f (inObject, constin_inGlobalVariableName, constin_inObjectIR, constin_inWritable, inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionSetter_universalPropertyAndRoutineMapForContext_insertGlobalVariable (cPtr_universalPropertyAndRoutineMapForContext * inObject,
                                                                                           const GALGAS_lstring constinArgument_inGlobalVariableName,
                                                                                           const GALGAS_objectIR constinArgument_inObjectIR,
                                                                                           const GALGAS_bool constinArgument_inWritable,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_universalPropertyAndRoutineMapForContext * object = inObject ;
  macroValidSharedObject (object, cPtr_universalPropertyAndRoutineMapForContext) ;
  GALGAS_possibleValuedObject var_newValue_7293 = GALGAS_possibleValuedObject::constructor_globalVariableReference (constinArgument_inWritable, constinArgument_inObjectIR  COMMA_SOURCE_FILE ("universal-map.galgas", 211)) ;
  cMapElement_internalUniversalPropertyAndRoutineMapForContext * objectArray_7392 = (cMapElement_internalUniversalPropertyAndRoutineMapForContext *) object->mProperty_mInternalPropertyAndRoutineMapForContext.readWriteAccessForWithInstruction (inCompiler, constinArgument_inGlobalVariableName.getter_string (HERE)  COMMA_SOURCE_FILE ("universal-map.galgas", 212)) ;
  if (NULL != objectArray_7392) {
      macroValidSharedObject (objectArray_7392, cMapElement_internalUniversalPropertyAndRoutineMapForContext) ;
    const enumGalgasBool test_0 = objectArray_7392->mProperty_mPossibleValuedObject.getter_isUndefined (SOURCE_FILE ("universal-map.galgas", 213)).boolEnum () ;
    if (kBoolTrue == test_0) {
      objectArray_7392->mProperty_mPossibleValuedObject = var_newValue_7293 ;
    }else if (kBoolFalse == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inGlobalVariableName.getter_location (SOURCE_FILE ("universal-map.galgas", 216)), GALGAS_string ("object already defined in this context"), fixItArray1  COMMA_SOURCE_FILE ("universal-map.galgas", 216)) ;
    }
  }else{
    {
    object->mProperty_mInternalPropertyAndRoutineMapForContext.setter_insertKey (constinArgument_inGlobalVariableName, GALGAS_valuedObjectState::constructor_noValue (SOURCE_FILE ("universal-map.galgas", 221)), GALGAS_bool (false), var_newValue_7293, GALGAS_routineSignatureMapForContext::constructor_emptyMap (SOURCE_FILE ("universal-map.galgas", 224)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 219)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionSetter_universalPropertyAndRoutineMapForContext_insertGlobalVariable (void) {
  enterExtensionSetter_insertGlobalVariable (kTypeDescriptor_GALGAS_universalPropertyAndRoutineMapForContext.mSlotID,
                                             extensionSetter_universalPropertyAndRoutineMapForContext_insertGlobalVariable) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionModifier_universalPropertyAndRoutineMapForContext_insertGlobalVariable (void) {
  gExtensionModifierTable_universalPropertyAndRoutineMapForContext_insertGlobalVariable.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_universalPropertyAndRoutineMapForContext_insertGlobalVariable (defineExtensionSetter_universalPropertyAndRoutineMapForContext_insertGlobalVariable,
                                                                                          freeExtensionModifier_universalPropertyAndRoutineMapForContext_insertGlobalVariable) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Extension setter '@universalPropertyAndRoutineMapForContext insertLocalVariable'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionSetterSignature_universalPropertyAndRoutineMapForContext_insertLocalVariable> gExtensionModifierTable_universalPropertyAndRoutineMapForContext_insertLocalVariable ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_insertLocalVariable (const int32_t inClassIndex,
                                               extensionSetterSignature_universalPropertyAndRoutineMapForContext_insertLocalVariable inModifier) {
  gExtensionModifierTable_universalPropertyAndRoutineMapForContext_insertLocalVariable.forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_insertLocalVariable (cPtr_universalPropertyAndRoutineMapForContext * inObject,
                                              const GALGAS_lstring constin_inLocalVariableName,
                                              const GALGAS_objectIR constin_inObjectIR,
                                              const GALGAS_valuedObjectState constin_inVariableInitialState,
                                              const GALGAS_bool constin_inObjectShouldBeValuedAtEndOfScope,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find setter
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_universalPropertyAndRoutineMapForContext) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_universalPropertyAndRoutineMapForContext_insertLocalVariable f = NULL ;
    if (classIndex < gExtensionModifierTable_universalPropertyAndRoutineMapForContext_insertLocalVariable.count ()) {
      f = gExtensionModifierTable_universalPropertyAndRoutineMapForContext_insertLocalVariable (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionModifierTable_universalPropertyAndRoutineMapForContext_insertLocalVariable.count ()) {
           f = gExtensionModifierTable_universalPropertyAndRoutineMapForContext_insertLocalVariable (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_universalPropertyAndRoutineMapForContext_insertLocalVariable.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    f (inObject, constin_inLocalVariableName, constin_inObjectIR, constin_inVariableInitialState, constin_inObjectShouldBeValuedAtEndOfScope, inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionSetter_universalPropertyAndRoutineMapForContext_insertLocalVariable (cPtr_universalPropertyAndRoutineMapForContext * inObject,
                                                                                          const GALGAS_lstring constinArgument_inLocalVariableName,
                                                                                          const GALGAS_objectIR constinArgument_inObjectIR,
                                                                                          const GALGAS_valuedObjectState constinArgument_inVariableInitialState,
                                                                                          const GALGAS_bool constinArgument_inObjectShouldBeValuedAtEndOfScope,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_universalPropertyAndRoutineMapForContext * object = inObject ;
  macroValidSharedObject (object, cPtr_universalPropertyAndRoutineMapForContext) ;
  GALGAS_possibleValuedObject var_newValue_8201 = GALGAS_possibleValuedObject::constructor_localVariableReference (constinArgument_inObjectIR  COMMA_SOURCE_FILE ("universal-map.galgas", 237)) ;
  cMapElement_internalUniversalPropertyAndRoutineMapForContext * objectArray_8278 = (cMapElement_internalUniversalPropertyAndRoutineMapForContext *) object->mProperty_mInternalPropertyAndRoutineMapForContext.readWriteAccessForWithInstruction (inCompiler, constinArgument_inLocalVariableName.getter_string (HERE)  COMMA_SOURCE_FILE ("universal-map.galgas", 238)) ;
  if (NULL != objectArray_8278) {
      macroValidSharedObject (objectArray_8278, cMapElement_internalUniversalPropertyAndRoutineMapForContext) ;
    const enumGalgasBool test_0 = objectArray_8278->mProperty_mPossibleValuedObject.getter_isUndefined (SOURCE_FILE ("universal-map.galgas", 239)).boolEnum () ;
    if (kBoolTrue == test_0) {
      objectArray_8278->mProperty_mObjectState = constinArgument_inVariableInitialState ;
      objectArray_8278->mProperty_mObjectShouldBeValuedAtEndOfScope = constinArgument_inObjectShouldBeValuedAtEndOfScope ;
      objectArray_8278->mProperty_mPossibleValuedObject = var_newValue_8201 ;
    }else if (kBoolFalse == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inLocalVariableName.getter_location (SOURCE_FILE ("universal-map.galgas", 244)), GALGAS_string ("object already defined in this context"), fixItArray1  COMMA_SOURCE_FILE ("universal-map.galgas", 244)) ;
    }
  }else{
    {
    object->mProperty_mInternalPropertyAndRoutineMapForContext.setter_insertKey (constinArgument_inLocalVariableName, constinArgument_inVariableInitialState, constinArgument_inObjectShouldBeValuedAtEndOfScope, var_newValue_8201, GALGAS_routineSignatureMapForContext::constructor_emptyMap (SOURCE_FILE ("universal-map.galgas", 252)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 247)) ;
    }
  }
  object->mProperty_mLocalObjectList.addAssign_operation (constinArgument_inLocalVariableName  COMMA_SOURCE_FILE ("universal-map.galgas", 255)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionSetter_universalPropertyAndRoutineMapForContext_insertLocalVariable (void) {
  enterExtensionSetter_insertLocalVariable (kTypeDescriptor_GALGAS_universalPropertyAndRoutineMapForContext.mSlotID,
                                            extensionSetter_universalPropertyAndRoutineMapForContext_insertLocalVariable) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionModifier_universalPropertyAndRoutineMapForContext_insertLocalVariable (void) {
  gExtensionModifierTable_universalPropertyAndRoutineMapForContext_insertLocalVariable.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_universalPropertyAndRoutineMapForContext_insertLocalVariable (defineExtensionSetter_universalPropertyAndRoutineMapForContext_insertLocalVariable,
                                                                                         freeExtensionModifier_universalPropertyAndRoutineMapForContext_insertLocalVariable) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Extension setter '@universalPropertyAndRoutineMapForContext searchValuedObjectForReadAccess'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionSetterSignature_universalPropertyAndRoutineMapForContext_searchValuedObjectForReadAccess> gExtensionModifierTable_universalPropertyAndRoutineMapForContext_searchValuedObjectForReadAccess ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_searchValuedObjectForReadAccess (const int32_t inClassIndex,
                                                           extensionSetterSignature_universalPropertyAndRoutineMapForContext_searchValuedObjectForReadAccess inModifier) {
  gExtensionModifierTable_universalPropertyAndRoutineMapForContext_searchValuedObjectForReadAccess.forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_searchValuedObjectForReadAccess (cPtr_universalPropertyAndRoutineMapForContext * inObject,
                                                          const GALGAS_lstring constin_inValuedObjectName,
                                                          GALGAS_objectIR & out_outObjectIR,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_outObjectIR.drop () ;
//--- Find setter
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_universalPropertyAndRoutineMapForContext) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_universalPropertyAndRoutineMapForContext_searchValuedObjectForReadAccess f = NULL ;
    if (classIndex < gExtensionModifierTable_universalPropertyAndRoutineMapForContext_searchValuedObjectForReadAccess.count ()) {
      f = gExtensionModifierTable_universalPropertyAndRoutineMapForContext_searchValuedObjectForReadAccess (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionModifierTable_universalPropertyAndRoutineMapForContext_searchValuedObjectForReadAccess.count ()) {
           f = gExtensionModifierTable_universalPropertyAndRoutineMapForContext_searchValuedObjectForReadAccess (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_universalPropertyAndRoutineMapForContext_searchValuedObjectForReadAccess.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    f (inObject, constin_inValuedObjectName, out_outObjectIR, inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionSetter_universalPropertyAndRoutineMapForContext_searchValuedObjectForReadAccess (cPtr_universalPropertyAndRoutineMapForContext * inObject,
                                                                                                      const GALGAS_lstring constinArgument_inValuedObjectName,
                                                                                                      GALGAS_objectIR & outArgument_outObjectIR,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_universalPropertyAndRoutineMapForContext * object = inObject ;
  macroValidSharedObject (object, cPtr_universalPropertyAndRoutineMapForContext) ;
  GALGAS_valuedObjectState var_valueState_9416 ;
  GALGAS_possibleValuedObject var_property_9433 ;
  GALGAS_bool joker_9418 ; // Joker input parameter
  GALGAS_routineSignatureMapForContext joker_9435 ; // Joker input parameter
  object->mProperty_mInternalPropertyAndRoutineMapForContext.method_searchKey (constinArgument_inValuedObjectName, var_valueState_9416, joker_9418, var_property_9433, joker_9435, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 266)) ;
  switch (var_property_9433.enumValue ()) {
  case GALGAS_possibleValuedObject::kNotBuilt:
    break ;
  case GALGAS_possibleValuedObject::kEnum_undefined:
    {
      TC_Array <C_FixItDescription> fixItArray0 ;
      inCompiler->emitSemanticError (constinArgument_inValuedObjectName.getter_location (SOURCE_FILE ("universal-map.galgas", 269)), GALGAS_string ("undefined in this context"), fixItArray0  COMMA_SOURCE_FILE ("universal-map.galgas", 269)) ;
      outArgument_outObjectIR.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_possibleValuedObject::kEnum_property:
    {
      const cEnumAssociatedValues_possibleValuedObject_property * extractPtr_9635 = (const cEnumAssociatedValues_possibleValuedObject_property *) (var_property_9433.unsafePointer ()) ;
      const GALGAS_bool extractedValue_isPublic = extractPtr_9635->mAssociatedValue0 ;
      const GALGAS_objectIR extractedValue_objectIR = extractPtr_9635->mAssociatedValue1 ;
      outArgument_outObjectIR = extractedValue_objectIR ;
    }
    break ;
  case GALGAS_possibleValuedObject::kEnum_module:
    {
      const cEnumAssociatedValues_possibleValuedObject_module * extractPtr_9751 = (const cEnumAssociatedValues_possibleValuedObject_module *) (var_property_9433.unsafePointer ()) ;
      const GALGAS_PLMType extractedValue_type = extractPtr_9751->mAssociatedValue0 ;
      outArgument_outObjectIR = GALGAS_objectIR::constructor_globalVariableReference (extractedValue_type, constinArgument_inValuedObjectName  COMMA_SOURCE_FILE ("universal-map.galgas", 273)) ;
    }
    break ;
  case GALGAS_possibleValuedObject::kEnum_register:
    {
      const cEnumAssociatedValues_possibleValuedObject_register * extractPtr_9821 = (const cEnumAssociatedValues_possibleValuedObject_register *) (var_property_9433.unsafePointer ()) ;
      const GALGAS_objectIR extractedValue_objectIR = extractPtr_9821->mAssociatedValue2 ;
      outArgument_outObjectIR = extractedValue_objectIR ;
    }
    break ;
  case GALGAS_possibleValuedObject::kEnum_globalConstant:
    {
      const cEnumAssociatedValues_possibleValuedObject_globalConstant * extractPtr_9893 = (const cEnumAssociatedValues_possibleValuedObject_globalConstant *) (var_property_9433.unsafePointer ()) ;
      const GALGAS_objectIR extractedValue_objectIR = extractPtr_9893->mAssociatedValue0 ;
      outArgument_outObjectIR = extractedValue_objectIR ;
    }
    break ;
  case GALGAS_possibleValuedObject::kEnum_localConstant:
    {
      const cEnumAssociatedValues_possibleValuedObject_localConstant * extractPtr_10122 = (const cEnumAssociatedValues_possibleValuedObject_localConstant *) (var_property_9433.unsafePointer ()) ;
      const GALGAS_objectIR extractedValue_objectIR = extractPtr_10122->mAssociatedValue0 ;
      outArgument_outObjectIR = extractedValue_objectIR ;
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_valueState_9416.objectCompare (GALGAS_valuedObjectState::constructor_hasUnreadValue (SOURCE_FILE ("universal-map.galgas", 280)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        {
        object->mProperty_mInternalPropertyAndRoutineMapForContext.setter_setMObjectStateForKey (GALGAS_valuedObjectState::constructor_hasReadValue (SOURCE_FILE ("universal-map.galgas", 281)), constinArgument_inValuedObjectName.getter_string (SOURCE_FILE ("universal-map.galgas", 281)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 281)) ;
        }
      }
    }
    break ;
  case GALGAS_possibleValuedObject::kEnum_globalVariableReference:
    {
      const cEnumAssociatedValues_possibleValuedObject_globalVariableReference * extractPtr_10205 = (const cEnumAssociatedValues_possibleValuedObject_globalVariableReference *) (var_property_9433.unsafePointer ()) ;
      const GALGAS_objectIR extractedValue_objectIR = extractPtr_10205->mAssociatedValue1 ;
      outArgument_outObjectIR = extractedValue_objectIR ;
    }
    break ;
  case GALGAS_possibleValuedObject::kEnum_localVariableReference:
    {
      const cEnumAssociatedValues_possibleValuedObject_localVariableReference * extractPtr_10615 = (const cEnumAssociatedValues_possibleValuedObject_localVariableReference *) (var_property_9433.unsafePointer ()) ;
      const GALGAS_objectIR extractedValue_objectIR = extractPtr_10615->mAssociatedValue0 ;
      switch (var_valueState_9416.enumValue ()) {
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
          outArgument_outObjectIR = extractedValue_objectIR ;
        }
        break ;
      case GALGAS_valuedObjectState::kEnum_hasReadValue:
        {
          outArgument_outObjectIR = extractedValue_objectIR ;
        }
        break ;
      }
    }
    break ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionSetter_universalPropertyAndRoutineMapForContext_searchValuedObjectForReadAccess (void) {
  enterExtensionSetter_searchValuedObjectForReadAccess (kTypeDescriptor_GALGAS_universalPropertyAndRoutineMapForContext.mSlotID,
                                                        extensionSetter_universalPropertyAndRoutineMapForContext_searchValuedObjectForReadAccess) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionModifier_universalPropertyAndRoutineMapForContext_searchValuedObjectForReadAccess (void) {
  gExtensionModifierTable_universalPropertyAndRoutineMapForContext_searchValuedObjectForReadAccess.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_universalPropertyAndRoutineMapForContext_searchValuedObjectForReadAccess (defineExtensionSetter_universalPropertyAndRoutineMapForContext_searchValuedObjectForReadAccess,
                                                                                                     freeExtensionModifier_universalPropertyAndRoutineMapForContext_searchValuedObjectForReadAccess) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Extension setter '@universalPropertyAndRoutineMapForContext searchValuedObjectForWriteAccess'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionSetterSignature_universalPropertyAndRoutineMapForContext_searchValuedObjectForWriteAccess> gExtensionModifierTable_universalPropertyAndRoutineMapForContext_searchValuedObjectForWriteAccess ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_searchValuedObjectForWriteAccess (const int32_t inClassIndex,
                                                            extensionSetterSignature_universalPropertyAndRoutineMapForContext_searchValuedObjectForWriteAccess inModifier) {
  gExtensionModifierTable_universalPropertyAndRoutineMapForContext_searchValuedObjectForWriteAccess.forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_searchValuedObjectForWriteAccess (cPtr_universalPropertyAndRoutineMapForContext * inObject,
                                                           const GALGAS_lstring constin_inValuedObjectName,
                                                           GALGAS_objectIR & out_outObjectIR,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_outObjectIR.drop () ;
//--- Find setter
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_universalPropertyAndRoutineMapForContext) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_universalPropertyAndRoutineMapForContext_searchValuedObjectForWriteAccess f = NULL ;
    if (classIndex < gExtensionModifierTable_universalPropertyAndRoutineMapForContext_searchValuedObjectForWriteAccess.count ()) {
      f = gExtensionModifierTable_universalPropertyAndRoutineMapForContext_searchValuedObjectForWriteAccess (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionModifierTable_universalPropertyAndRoutineMapForContext_searchValuedObjectForWriteAccess.count ()) {
           f = gExtensionModifierTable_universalPropertyAndRoutineMapForContext_searchValuedObjectForWriteAccess (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_universalPropertyAndRoutineMapForContext_searchValuedObjectForWriteAccess.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    f (inObject, constin_inValuedObjectName, out_outObjectIR, inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionSetter_universalPropertyAndRoutineMapForContext_searchValuedObjectForWriteAccess (cPtr_universalPropertyAndRoutineMapForContext * inObject,
                                                                                                       const GALGAS_lstring constinArgument_inValuedObjectName,
                                                                                                       GALGAS_objectIR & outArgument_outObjectIR,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_universalPropertyAndRoutineMapForContext * object = inObject ;
  macroValidSharedObject (object, cPtr_universalPropertyAndRoutineMapForContext) ;
  GALGAS_valuedObjectState var_valueState_10980 ;
  GALGAS_possibleValuedObject var_property_10997 ;
  GALGAS_bool joker_10982 ; // Joker input parameter
  GALGAS_routineSignatureMapForContext joker_10999 ; // Joker input parameter
  object->mProperty_mInternalPropertyAndRoutineMapForContext.method_searchKey (constinArgument_inValuedObjectName, var_valueState_10980, joker_10982, var_property_10997, joker_10999, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 304)) ;
  switch (var_property_10997.enumValue ()) {
  case GALGAS_possibleValuedObject::kNotBuilt:
    break ;
  case GALGAS_possibleValuedObject::kEnum_undefined:
    {
      TC_Array <C_FixItDescription> fixItArray0 ;
      inCompiler->emitSemanticError (constinArgument_inValuedObjectName.getter_location (SOURCE_FILE ("universal-map.galgas", 307)), GALGAS_string ("undefined in this context"), fixItArray0  COMMA_SOURCE_FILE ("universal-map.galgas", 307)) ;
      outArgument_outObjectIR.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_possibleValuedObject::kEnum_property:
    {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inValuedObjectName.getter_location (SOURCE_FILE ("universal-map.galgas", 309)), GALGAS_string ("a property cannot be written"), fixItArray1  COMMA_SOURCE_FILE ("universal-map.galgas", 309)) ;
      outArgument_outObjectIR.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_possibleValuedObject::kEnum_module:
    {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inValuedObjectName.getter_location (SOURCE_FILE ("universal-map.galgas", 311)), GALGAS_string ("a module cannot be written"), fixItArray2  COMMA_SOURCE_FILE ("universal-map.galgas", 311)) ;
      outArgument_outObjectIR.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_possibleValuedObject::kEnum_register:
    {
      const cEnumAssociatedValues_possibleValuedObject_register * extractPtr_11508 = (const cEnumAssociatedValues_possibleValuedObject_register *) (var_property_10997.unsafePointer ()) ;
      const GALGAS_bool extractedValue_writable = extractPtr_11508->mAssociatedValue1 ;
      const GALGAS_objectIR extractedValue_objectIR = extractPtr_11508->mAssociatedValue2 ;
      const enumGalgasBool test_3 = extractedValue_writable.boolEnum () ;
      if (kBoolTrue == test_3) {
        outArgument_outObjectIR = extractedValue_objectIR ;
      }else if (kBoolFalse == test_3) {
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (constinArgument_inValuedObjectName.getter_location (SOURCE_FILE ("universal-map.galgas", 316)), GALGAS_string ("the register cannot be written"), fixItArray4  COMMA_SOURCE_FILE ("universal-map.galgas", 316)) ;
        outArgument_outObjectIR.drop () ; // Release error dropped variable
      }
    }
    break ;
  case GALGAS_possibleValuedObject::kEnum_globalConstant:
    {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (constinArgument_inValuedObjectName.getter_location (SOURCE_FILE ("universal-map.galgas", 319)), GALGAS_string ("a constant cannot be written"), fixItArray5  COMMA_SOURCE_FILE ("universal-map.galgas", 319)) ;
      outArgument_outObjectIR.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_possibleValuedObject::kEnum_localConstant:
    {
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (constinArgument_inValuedObjectName.getter_location (SOURCE_FILE ("universal-map.galgas", 321)), GALGAS_string ("a constant cannot be written"), fixItArray6  COMMA_SOURCE_FILE ("universal-map.galgas", 321)) ;
      outArgument_outObjectIR.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_possibleValuedObject::kEnum_globalVariableReference:
    {
      const cEnumAssociatedValues_possibleValuedObject_globalVariableReference * extractPtr_11936 = (const cEnumAssociatedValues_possibleValuedObject_globalVariableReference *) (var_property_10997.unsafePointer ()) ;
      const GALGAS_bool extractedValue_writable = extractPtr_11936->mAssociatedValue0 ;
      const GALGAS_objectIR extractedValue_objectIR = extractPtr_11936->mAssociatedValue1 ;
      const enumGalgasBool test_7 = extractedValue_writable.boolEnum () ;
      if (kBoolTrue == test_7) {
        outArgument_outObjectIR = extractedValue_objectIR ;
      }else if (kBoolFalse == test_7) {
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (constinArgument_inValuedObjectName.getter_location (SOURCE_FILE ("universal-map.galgas", 326)), GALGAS_string ("a global variable cannot be written"), fixItArray8  COMMA_SOURCE_FILE ("universal-map.galgas", 326)) ;
        outArgument_outObjectIR.drop () ; // Release error dropped variable
      }
    }
    break ;
  case GALGAS_possibleValuedObject::kEnum_localVariableReference:
    {
      const cEnumAssociatedValues_possibleValuedObject_localVariableReference * extractPtr_12315 = (const cEnumAssociatedValues_possibleValuedObject_localVariableReference *) (var_property_10997.unsafePointer ()) ;
      const GALGAS_objectIR extractedValue_objectIR = extractPtr_12315->mAssociatedValue0 ;
      outArgument_outObjectIR = extractedValue_objectIR ;
      switch (var_valueState_10980.enumValue ()) {
      case GALGAS_valuedObjectState::kNotBuilt:
        break ;
      case GALGAS_valuedObjectState::kEnum_noValue:
      case GALGAS_valuedObjectState::kEnum_hasReadValue:
        {
          {
          object->mProperty_mInternalPropertyAndRoutineMapForContext.setter_setMObjectStateForKey (GALGAS_valuedObjectState::constructor_hasUnreadValue (SOURCE_FILE ("universal-map.galgas", 332)), constinArgument_inValuedObjectName.getter_string (SOURCE_FILE ("universal-map.galgas", 332)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 332)) ;
          }
        }
        break ;
      case GALGAS_valuedObjectState::kEnum_hasUnreadValue:
        {
          TC_Array <C_FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticWarning (constinArgument_inValuedObjectName.getter_location (SOURCE_FILE ("universal-map.galgas", 334)), GALGAS_string ("previous '").add_operation (constinArgument_inValuedObjectName.getter_string (SOURCE_FILE ("universal-map.galgas", 334)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 334)).add_operation (GALGAS_string ("' value has not been read"), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 334)), fixItArray9  COMMA_SOURCE_FILE ("universal-map.galgas", 334)) ;
        }
        break ;
      }
    }
    break ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionSetter_universalPropertyAndRoutineMapForContext_searchValuedObjectForWriteAccess (void) {
  enterExtensionSetter_searchValuedObjectForWriteAccess (kTypeDescriptor_GALGAS_universalPropertyAndRoutineMapForContext.mSlotID,
                                                         extensionSetter_universalPropertyAndRoutineMapForContext_searchValuedObjectForWriteAccess) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionModifier_universalPropertyAndRoutineMapForContext_searchValuedObjectForWriteAccess (void) {
  gExtensionModifierTable_universalPropertyAndRoutineMapForContext_searchValuedObjectForWriteAccess.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_universalPropertyAndRoutineMapForContext_searchValuedObjectForWriteAccess (defineExtensionSetter_universalPropertyAndRoutineMapForContext_searchValuedObjectForWriteAccess,
                                                                                                      freeExtensionModifier_universalPropertyAndRoutineMapForContext_searchValuedObjectForWriteAccess) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Extension setter '@universalPropertyAndRoutineMapForContext searchValuedObjectForReadWriteAccess'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionSetterSignature_universalPropertyAndRoutineMapForContext_searchValuedObjectForReadWriteAccess> gExtensionModifierTable_universalPropertyAndRoutineMapForContext_searchValuedObjectForReadWriteAccess ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_searchValuedObjectForReadWriteAccess (const int32_t inClassIndex,
                                                                extensionSetterSignature_universalPropertyAndRoutineMapForContext_searchValuedObjectForReadWriteAccess inModifier) {
  gExtensionModifierTable_universalPropertyAndRoutineMapForContext_searchValuedObjectForReadWriteAccess.forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_searchValuedObjectForReadWriteAccess (cPtr_universalPropertyAndRoutineMapForContext * inObject,
                                                               const GALGAS_lstring constin_inValuedObjectName,
                                                               GALGAS_objectIR & out_outObjectIR,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_outObjectIR.drop () ;
//--- Find setter
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_universalPropertyAndRoutineMapForContext) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_universalPropertyAndRoutineMapForContext_searchValuedObjectForReadWriteAccess f = NULL ;
    if (classIndex < gExtensionModifierTable_universalPropertyAndRoutineMapForContext_searchValuedObjectForReadWriteAccess.count ()) {
      f = gExtensionModifierTable_universalPropertyAndRoutineMapForContext_searchValuedObjectForReadWriteAccess (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionModifierTable_universalPropertyAndRoutineMapForContext_searchValuedObjectForReadWriteAccess.count ()) {
           f = gExtensionModifierTable_universalPropertyAndRoutineMapForContext_searchValuedObjectForReadWriteAccess (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_universalPropertyAndRoutineMapForContext_searchValuedObjectForReadWriteAccess.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    f (inObject, constin_inValuedObjectName, out_outObjectIR, inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionSetter_universalPropertyAndRoutineMapForContext_searchValuedObjectForReadWriteAccess (cPtr_universalPropertyAndRoutineMapForContext * inObject,
                                                                                                           const GALGAS_lstring constinArgument_inValuedObjectName,
                                                                                                           GALGAS_objectIR & outArgument_outObjectIR,
                                                                                                           C_Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_universalPropertyAndRoutineMapForContext * object = inObject ;
  macroValidSharedObject (object, cPtr_universalPropertyAndRoutineMapForContext) ;
  GALGAS_valuedObjectState var_valueState_12684 ;
  GALGAS_possibleValuedObject var_property_12701 ;
  GALGAS_bool joker_12686 ; // Joker input parameter
  GALGAS_routineSignatureMapForContext joker_12703 ; // Joker input parameter
  object->mProperty_mInternalPropertyAndRoutineMapForContext.method_searchKey (constinArgument_inValuedObjectName, var_valueState_12684, joker_12686, var_property_12701, joker_12703, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 345)) ;
  switch (var_property_12701.enumValue ()) {
  case GALGAS_possibleValuedObject::kNotBuilt:
    break ;
  case GALGAS_possibleValuedObject::kEnum_undefined:
    {
      TC_Array <C_FixItDescription> fixItArray0 ;
      inCompiler->emitSemanticError (constinArgument_inValuedObjectName.getter_location (SOURCE_FILE ("universal-map.galgas", 348)), GALGAS_string ("undefined in this context"), fixItArray0  COMMA_SOURCE_FILE ("universal-map.galgas", 348)) ;
      outArgument_outObjectIR.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_possibleValuedObject::kEnum_property:
    {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inValuedObjectName.getter_location (SOURCE_FILE ("universal-map.galgas", 350)), GALGAS_string ("a property cannot be written"), fixItArray1  COMMA_SOURCE_FILE ("universal-map.galgas", 350)) ;
      outArgument_outObjectIR.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_possibleValuedObject::kEnum_module:
    {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inValuedObjectName.getter_location (SOURCE_FILE ("universal-map.galgas", 352)), GALGAS_string ("a module cannot be written"), fixItArray2  COMMA_SOURCE_FILE ("universal-map.galgas", 352)) ;
      outArgument_outObjectIR.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_possibleValuedObject::kEnum_register:
    {
      const cEnumAssociatedValues_possibleValuedObject_register * extractPtr_13341 = (const cEnumAssociatedValues_possibleValuedObject_register *) (var_property_12701.unsafePointer ()) ;
      const GALGAS_bool extractedValue_readable = extractPtr_13341->mAssociatedValue0 ;
      const GALGAS_bool extractedValue_writable = extractPtr_13341->mAssociatedValue1 ;
      const GALGAS_objectIR extractedValue_objectIR = extractPtr_13341->mAssociatedValue2 ;
      const enumGalgasBool test_3 = extractedValue_writable.operator_and (extractedValue_readable COMMA_SOURCE_FILE ("universal-map.galgas", 354)).boolEnum () ;
      if (kBoolTrue == test_3) {
        outArgument_outObjectIR = extractedValue_objectIR ;
      }else if (kBoolFalse == test_3) {
        const enumGalgasBool test_4 = extractedValue_readable.operator_not (SOURCE_FILE ("universal-map.galgas", 356)).boolEnum () ;
        if (kBoolTrue == test_4) {
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (constinArgument_inValuedObjectName.getter_location (SOURCE_FILE ("universal-map.galgas", 357)), GALGAS_string ("the register cannot be read"), fixItArray5  COMMA_SOURCE_FILE ("universal-map.galgas", 357)) ;
          outArgument_outObjectIR.drop () ; // Release error dropped variable
        }else if (kBoolFalse == test_4) {
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (constinArgument_inValuedObjectName.getter_location (SOURCE_FILE ("universal-map.galgas", 359)), GALGAS_string ("the register cannot be written"), fixItArray6  COMMA_SOURCE_FILE ("universal-map.galgas", 359)) ;
          outArgument_outObjectIR.drop () ; // Release error dropped variable
        }
      }
    }
    break ;
  case GALGAS_possibleValuedObject::kEnum_globalConstant:
    {
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (constinArgument_inValuedObjectName.getter_location (SOURCE_FILE ("universal-map.galgas", 362)), GALGAS_string ("a constant cannot be written"), fixItArray7  COMMA_SOURCE_FILE ("universal-map.galgas", 362)) ;
      outArgument_outObjectIR.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_possibleValuedObject::kEnum_localConstant:
    {
      TC_Array <C_FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (constinArgument_inValuedObjectName.getter_location (SOURCE_FILE ("universal-map.galgas", 364)), GALGAS_string ("a constant cannot be written"), fixItArray8  COMMA_SOURCE_FILE ("universal-map.galgas", 364)) ;
      outArgument_outObjectIR.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_possibleValuedObject::kEnum_globalVariableReference:
    {
      const cEnumAssociatedValues_possibleValuedObject_globalVariableReference * extractPtr_13769 = (const cEnumAssociatedValues_possibleValuedObject_globalVariableReference *) (var_property_12701.unsafePointer ()) ;
      const GALGAS_bool extractedValue_writable = extractPtr_13769->mAssociatedValue0 ;
      const GALGAS_objectIR extractedValue_objectIR = extractPtr_13769->mAssociatedValue1 ;
      const enumGalgasBool test_9 = extractedValue_writable.boolEnum () ;
      if (kBoolTrue == test_9) {
        outArgument_outObjectIR = extractedValue_objectIR ;
      }else if (kBoolFalse == test_9) {
        TC_Array <C_FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticError (constinArgument_inValuedObjectName.getter_location (SOURCE_FILE ("universal-map.galgas", 369)), GALGAS_string ("a global variable cannot be written"), fixItArray10  COMMA_SOURCE_FILE ("universal-map.galgas", 369)) ;
        outArgument_outObjectIR.drop () ; // Release error dropped variable
      }
    }
    break ;
  case GALGAS_possibleValuedObject::kEnum_localVariableReference:
    {
      const cEnumAssociatedValues_possibleValuedObject_localVariableReference * extractPtr_14159 = (const cEnumAssociatedValues_possibleValuedObject_localVariableReference *) (var_property_12701.unsafePointer ()) ;
      const GALGAS_objectIR extractedValue_objectIR = extractPtr_14159->mAssociatedValue0 ;
      switch (var_valueState_12684.enumValue ()) {
      case GALGAS_valuedObjectState::kNotBuilt:
        break ;
      case GALGAS_valuedObjectState::kEnum_noValue:
        {
          TC_Array <C_FixItDescription> fixItArray11 ;
          inCompiler->emitSemanticError (constinArgument_inValuedObjectName.getter_location (SOURCE_FILE ("universal-map.galgas", 374)), GALGAS_string ("object has no value"), fixItArray11  COMMA_SOURCE_FILE ("universal-map.galgas", 374)) ;
          outArgument_outObjectIR.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_valuedObjectState::kEnum_hasUnreadValue:
        {
          outArgument_outObjectIR = extractedValue_objectIR ;
        }
        break ;
      case GALGAS_valuedObjectState::kEnum_hasReadValue:
        {
          {
          object->mProperty_mInternalPropertyAndRoutineMapForContext.setter_setMObjectStateForKey (GALGAS_valuedObjectState::constructor_hasUnreadValue (SOURCE_FILE ("universal-map.galgas", 378)), constinArgument_inValuedObjectName.getter_string (SOURCE_FILE ("universal-map.galgas", 378)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 378)) ;
          }
          outArgument_outObjectIR = extractedValue_objectIR ;
        }
        break ;
      }
    }
    break ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionSetter_universalPropertyAndRoutineMapForContext_searchValuedObjectForReadWriteAccess (void) {
  enterExtensionSetter_searchValuedObjectForReadWriteAccess (kTypeDescriptor_GALGAS_universalPropertyAndRoutineMapForContext.mSlotID,
                                                             extensionSetter_universalPropertyAndRoutineMapForContext_searchValuedObjectForReadWriteAccess) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionModifier_universalPropertyAndRoutineMapForContext_searchValuedObjectForReadWriteAccess (void) {
  gExtensionModifierTable_universalPropertyAndRoutineMapForContext_searchValuedObjectForReadWriteAccess.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_universalPropertyAndRoutineMapForContext_searchValuedObjectForReadWriteAccess (defineExtensionSetter_universalPropertyAndRoutineMapForContext_searchValuedObjectForReadWriteAccess,
                                                                                                          freeExtensionModifier_universalPropertyAndRoutineMapForContext_searchValuedObjectForReadWriteAccess) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Extension method '@universalPropertyAndRoutineMapForContext searchRoutine'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_universalPropertyAndRoutineMapForContext_searchRoutine> gExtensionMethodTable_universalPropertyAndRoutineMapForContext_searchRoutine ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_searchRoutine (const int32_t inClassIndex,
                                         extensionMethodSignature_universalPropertyAndRoutineMapForContext_searchRoutine inMethod) {
  gExtensionMethodTable_universalPropertyAndRoutineMapForContext_searchRoutine.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_searchRoutine (const cPtr_universalPropertyAndRoutineMapForContext * inObject,
                                        const GALGAS_lstring constin_inRoutineName,
                                        const GALGAS_lstring constin_inArgumentSignature,
                                        GALGAS_lstring & out_outLLVMInvocationRoutineName,
                                        GALGAS_routineDescriptor & out_outDescriptor,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  out_outLLVMInvocationRoutineName.drop () ;
  out_outDescriptor.drop () ;
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_universalPropertyAndRoutineMapForContext) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_universalPropertyAndRoutineMapForContext_searchRoutine f = NULL ;
    if (classIndex < gExtensionMethodTable_universalPropertyAndRoutineMapForContext_searchRoutine.count ()) {
      f = gExtensionMethodTable_universalPropertyAndRoutineMapForContext_searchRoutine (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_universalPropertyAndRoutineMapForContext_searchRoutine.count ()) {
           f = gExtensionMethodTable_universalPropertyAndRoutineMapForContext_searchRoutine (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_universalPropertyAndRoutineMapForContext_searchRoutine.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inRoutineName, constin_inArgumentSignature, out_outLLVMInvocationRoutineName, out_outDescriptor, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_universalPropertyAndRoutineMapForContext_searchRoutine (const cPtr_universalPropertyAndRoutineMapForContext * inObject,
                                                                                    const GALGAS_lstring constinArgument_inRoutineName,
                                                                                    const GALGAS_lstring constinArgument_inArgumentSignature,
                                                                                    GALGAS_lstring & outArgument_outLLVMInvocationRoutineName,
                                                                                    GALGAS_routineDescriptor & outArgument_outDescriptor,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_universalPropertyAndRoutineMapForContext * object = inObject ;
  macroValidSharedObject (object, cPtr_universalPropertyAndRoutineMapForContext) ;
  GALGAS_routineSignatureMapForContext var_routineMap_14618 ;
  GALGAS_valuedObjectState joker_14569_3 ; // Joker input parameter
  GALGAS_bool joker_14569_2 ; // Joker input parameter
  GALGAS_possibleValuedObject joker_14569_1 ; // Joker input parameter
  object->mProperty_mInternalPropertyAndRoutineMapForContext.method_searchKey (constinArgument_inRoutineName, joker_14569_3, joker_14569_2, joker_14569_1, var_routineMap_14618, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 392)) ;
  var_routineMap_14618.method_searchKey (constinArgument_inArgumentSignature, outArgument_outLLVMInvocationRoutineName, outArgument_outDescriptor, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 393)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_universalPropertyAndRoutineMapForContext_searchRoutine (void) {
  enterExtensionMethod_searchRoutine (kTypeDescriptor_GALGAS_universalPropertyAndRoutineMapForContext.mSlotID,
                                      extensionMethod_universalPropertyAndRoutineMapForContext_searchRoutine) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_universalPropertyAndRoutineMapForContext_searchRoutine (void) {
  gExtensionMethodTable_universalPropertyAndRoutineMapForContext_searchRoutine.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_universalPropertyAndRoutineMapForContext_searchRoutine (defineExtensionMethod_universalPropertyAndRoutineMapForContext_searchRoutine,
                                                                                   freeExtensionMethod_universalPropertyAndRoutineMapForContext_searchRoutine) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Extension method '@universalPropertyAndRoutineMapForContext checkLocalVariableFinalState'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_universalPropertyAndRoutineMapForContext_checkLocalVariableFinalState> gExtensionMethodTable_universalPropertyAndRoutineMapForContext_checkLocalVariableFinalState ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_checkLocalVariableFinalState (const int32_t inClassIndex,
                                                        extensionMethodSignature_universalPropertyAndRoutineMapForContext_checkLocalVariableFinalState inMethod) {
  gExtensionMethodTable_universalPropertyAndRoutineMapForContext_checkLocalVariableFinalState.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_checkLocalVariableFinalState (const cPtr_universalPropertyAndRoutineMapForContext * inObject,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_universalPropertyAndRoutineMapForContext) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_universalPropertyAndRoutineMapForContext_checkLocalVariableFinalState f = NULL ;
    if (classIndex < gExtensionMethodTable_universalPropertyAndRoutineMapForContext_checkLocalVariableFinalState.count ()) {
      f = gExtensionMethodTable_universalPropertyAndRoutineMapForContext_checkLocalVariableFinalState (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_universalPropertyAndRoutineMapForContext_checkLocalVariableFinalState.count ()) {
           f = gExtensionMethodTable_universalPropertyAndRoutineMapForContext_checkLocalVariableFinalState (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_universalPropertyAndRoutineMapForContext_checkLocalVariableFinalState.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_universalPropertyAndRoutineMapForContext_checkLocalVariableFinalState (const cPtr_universalPropertyAndRoutineMapForContext * inObject,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_universalPropertyAndRoutineMapForContext * object = inObject ;
  macroValidSharedObject (object, cPtr_universalPropertyAndRoutineMapForContext) ;
  cEnumerator_internalUniversalPropertyAndRoutineMapForContext enumerator_15110 (object->mProperty_mInternalPropertyAndRoutineMapForContext, kENUMERATION_UP) ;
  while (enumerator_15110.hasCurrentObject ()) {
    switch (enumerator_15110.current (HERE).getter_mPossibleValuedObject (HERE).enumValue ()) {
    case GALGAS_possibleValuedObject::kNotBuilt:
      break ;
    case GALGAS_possibleValuedObject::kEnum_undefined:
      {
      }
      break ;
    case GALGAS_possibleValuedObject::kEnum_property:
      {
      }
      break ;
    case GALGAS_possibleValuedObject::kEnum_module:
      {
      }
      break ;
    case GALGAS_possibleValuedObject::kEnum_register:
      {
      }
      break ;
    case GALGAS_possibleValuedObject::kEnum_globalConstant:
      {
      }
      break ;
    case GALGAS_possibleValuedObject::kEnum_localConstant:
      {
        const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_15110.current (HERE).getter_mObjectState (HERE).objectCompare (GALGAS_valuedObjectState::constructor_hasUnreadValue (SOURCE_FILE ("universal-map.galgas", 409)))).boolEnum () ;
        if (kBoolTrue == test_0) {
          TC_Array <C_FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticWarning (enumerator_15110.current (HERE).getter_lkey (HERE).getter_location (SOURCE_FILE ("universal-map.galgas", 410)), GALGAS_string ("'").add_operation (enumerator_15110.current (HERE).getter_lkey (HERE).getter_string (SOURCE_FILE ("universal-map.galgas", 410)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 410)).add_operation (GALGAS_string ("' is never read"), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 410)), fixItArray1  COMMA_SOURCE_FILE ("universal-map.galgas", 410)) ;
        }
      }
      break ;
    case GALGAS_possibleValuedObject::kEnum_globalVariableReference:
      {
      }
      break ;
    case GALGAS_possibleValuedObject::kEnum_localVariableReference:
      {
        GALGAS_bool test_2 = GALGAS_bool (kIsEqual, enumerator_15110.current (HERE).getter_mObjectState (HERE).objectCompare (GALGAS_valuedObjectState::constructor_noValue (SOURCE_FILE ("universal-map.galgas", 414)))) ;
        if (kBoolTrue == test_2.boolEnum ()) {
          test_2 = enumerator_15110.current (HERE).getter_mObjectShouldBeValuedAtEndOfScope (HERE) ;
        }
        const enumGalgasBool test_3 = test_2.boolEnum () ;
        if (kBoolTrue == test_3) {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticWarning (enumerator_15110.current (HERE).getter_lkey (HERE).getter_location (SOURCE_FILE ("universal-map.galgas", 415)), GALGAS_string ("'").add_operation (enumerator_15110.current (HERE).getter_lkey (HERE).getter_string (SOURCE_FILE ("universal-map.galgas", 415)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 415)).add_operation (GALGAS_string ("' should be valued at the end of routine"), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 415)), fixItArray4  COMMA_SOURCE_FILE ("universal-map.galgas", 415)) ;
        }
      }
      break ;
    }
    enumerator_15110.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_universalPropertyAndRoutineMapForContext_checkLocalVariableFinalState (void) {
  enterExtensionMethod_checkLocalVariableFinalState (kTypeDescriptor_GALGAS_universalPropertyAndRoutineMapForContext.mSlotID,
                                                     extensionMethod_universalPropertyAndRoutineMapForContext_checkLocalVariableFinalState) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_universalPropertyAndRoutineMapForContext_checkLocalVariableFinalState (void) {
  gExtensionMethodTable_universalPropertyAndRoutineMapForContext_checkLocalVariableFinalState.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_universalPropertyAndRoutineMapForContext_checkLocalVariableFinalState (defineExtensionMethod_universalPropertyAndRoutineMapForContext_checkLocalVariableFinalState,
                                                                                                  freeExtensionMethod_universalPropertyAndRoutineMapForContext_checkLocalVariableFinalState) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Extension setter '@universalPropertyAndRoutineMapForContext openOverrideForSelectBlock'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionSetterSignature_universalPropertyAndRoutineMapForContext_openOverrideForSelectBlock> gExtensionModifierTable_universalPropertyAndRoutineMapForContext_openOverrideForSelectBlock ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_openOverrideForSelectBlock (const int32_t inClassIndex,
                                                      extensionSetterSignature_universalPropertyAndRoutineMapForContext_openOverrideForSelectBlock inModifier) {
  gExtensionModifierTable_universalPropertyAndRoutineMapForContext_openOverrideForSelectBlock.forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_openOverrideForSelectBlock (cPtr_universalPropertyAndRoutineMapForContext * inObject,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find setter
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_universalPropertyAndRoutineMapForContext) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_universalPropertyAndRoutineMapForContext_openOverrideForSelectBlock f = NULL ;
    if (classIndex < gExtensionModifierTable_universalPropertyAndRoutineMapForContext_openOverrideForSelectBlock.count ()) {
      f = gExtensionModifierTable_universalPropertyAndRoutineMapForContext_openOverrideForSelectBlock (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionModifierTable_universalPropertyAndRoutineMapForContext_openOverrideForSelectBlock.count ()) {
           f = gExtensionModifierTable_universalPropertyAndRoutineMapForContext_openOverrideForSelectBlock (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_universalPropertyAndRoutineMapForContext_openOverrideForSelectBlock.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    f (inObject, inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionSetter_universalPropertyAndRoutineMapForContext_openOverrideForSelectBlock (cPtr_universalPropertyAndRoutineMapForContext * inObject,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_universalPropertyAndRoutineMapForContext * object = inObject ;
  macroValidSharedObject (object, cPtr_universalPropertyAndRoutineMapForContext) ;
  GALGAS_referenceStateMap var_initialStateMap_15960 = GALGAS_referenceStateMap::constructor_emptyMap (SOURCE_FILE ("universal-map.galgas", 424)) ;
  cEnumerator_internalUniversalPropertyAndRoutineMapForContext enumerator_16021 (object->mProperty_mInternalPropertyAndRoutineMapForContext, kENUMERATION_UP) ;
  while (enumerator_16021.hasCurrentObject ()) {
    switch (enumerator_16021.current (HERE).getter_mPossibleValuedObject (HERE).enumValue ()) {
    case GALGAS_possibleValuedObject::kNotBuilt:
      break ;
    case GALGAS_possibleValuedObject::kEnum_undefined:
      {
      }
      break ;
    case GALGAS_possibleValuedObject::kEnum_property:
      {
      }
      break ;
    case GALGAS_possibleValuedObject::kEnum_module:
      {
      }
      break ;
    case GALGAS_possibleValuedObject::kEnum_register:
      {
      }
      break ;
    case GALGAS_possibleValuedObject::kEnum_globalConstant:
      {
      }
      break ;
    case GALGAS_possibleValuedObject::kEnum_localConstant:
      {
        {
        var_initialStateMap_15960.setter_insertKey (enumerator_16021.current (HERE).getter_lkey (HERE), enumerator_16021.current (HERE).getter_mObjectState (HERE), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 433)) ;
        }
      }
      break ;
    case GALGAS_possibleValuedObject::kEnum_globalVariableReference:
      {
      }
      break ;
    case GALGAS_possibleValuedObject::kEnum_localVariableReference:
      {
        {
        var_initialStateMap_15960.setter_insertKey (enumerator_16021.current (HERE).getter_lkey (HERE), enumerator_16021.current (HERE).getter_mObjectState (HERE), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 436)) ;
        }
      }
      break ;
    }
    enumerator_16021.gotoNextObject () ;
  }
  object->mProperty_mScopeStack.addAssign_operation (GALGAS_scopeKind::constructor_selectScope (SOURCE_FILE ("universal-map.galgas", 439)), GALGAS_bool (true), var_initialStateMap_15960, GALGAS_referenceStateMap::constructor_emptyMap (SOURCE_FILE ("universal-map.galgas", 439)), object->mProperty_mLocalObjectList  COMMA_SOURCE_FILE ("universal-map.galgas", 439)) ;
  object->mProperty_mLocalObjectList = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("universal-map.galgas", 440)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionSetter_universalPropertyAndRoutineMapForContext_openOverrideForSelectBlock (void) {
  enterExtensionSetter_openOverrideForSelectBlock (kTypeDescriptor_GALGAS_universalPropertyAndRoutineMapForContext.mSlotID,
                                                   extensionSetter_universalPropertyAndRoutineMapForContext_openOverrideForSelectBlock) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionModifier_universalPropertyAndRoutineMapForContext_openOverrideForSelectBlock (void) {
  gExtensionModifierTable_universalPropertyAndRoutineMapForContext_openOverrideForSelectBlock.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_universalPropertyAndRoutineMapForContext_openOverrideForSelectBlock (defineExtensionSetter_universalPropertyAndRoutineMapForContext_openOverrideForSelectBlock,
                                                                                                freeExtensionModifier_universalPropertyAndRoutineMapForContext_openOverrideForSelectBlock) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Extension setter '@universalPropertyAndRoutineMapForContext openOverrideForRepeatBlock'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionSetterSignature_universalPropertyAndRoutineMapForContext_openOverrideForRepeatBlock> gExtensionModifierTable_universalPropertyAndRoutineMapForContext_openOverrideForRepeatBlock ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_openOverrideForRepeatBlock (const int32_t inClassIndex,
                                                      extensionSetterSignature_universalPropertyAndRoutineMapForContext_openOverrideForRepeatBlock inModifier) {
  gExtensionModifierTable_universalPropertyAndRoutineMapForContext_openOverrideForRepeatBlock.forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_openOverrideForRepeatBlock (cPtr_universalPropertyAndRoutineMapForContext * inObject,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find setter
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_universalPropertyAndRoutineMapForContext) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_universalPropertyAndRoutineMapForContext_openOverrideForRepeatBlock f = NULL ;
    if (classIndex < gExtensionModifierTable_universalPropertyAndRoutineMapForContext_openOverrideForRepeatBlock.count ()) {
      f = gExtensionModifierTable_universalPropertyAndRoutineMapForContext_openOverrideForRepeatBlock (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionModifierTable_universalPropertyAndRoutineMapForContext_openOverrideForRepeatBlock.count ()) {
           f = gExtensionModifierTable_universalPropertyAndRoutineMapForContext_openOverrideForRepeatBlock (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_universalPropertyAndRoutineMapForContext_openOverrideForRepeatBlock.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    f (inObject, inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionSetter_universalPropertyAndRoutineMapForContext_openOverrideForRepeatBlock (cPtr_universalPropertyAndRoutineMapForContext * inObject,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_universalPropertyAndRoutineMapForContext * object = inObject ;
  macroValidSharedObject (object, cPtr_universalPropertyAndRoutineMapForContext) ;
  GALGAS_referenceStateMap var_initialStateMap_16788 = GALGAS_referenceStateMap::constructor_emptyMap (SOURCE_FILE ("universal-map.galgas", 446)) ;
  cEnumerator_internalUniversalPropertyAndRoutineMapForContext enumerator_16849 (object->mProperty_mInternalPropertyAndRoutineMapForContext, kENUMERATION_UP) ;
  while (enumerator_16849.hasCurrentObject ()) {
    switch (enumerator_16849.current (HERE).getter_mPossibleValuedObject (HERE).enumValue ()) {
    case GALGAS_possibleValuedObject::kNotBuilt:
      break ;
    case GALGAS_possibleValuedObject::kEnum_undefined:
      {
      }
      break ;
    case GALGAS_possibleValuedObject::kEnum_property:
      {
      }
      break ;
    case GALGAS_possibleValuedObject::kEnum_module:
      {
      }
      break ;
    case GALGAS_possibleValuedObject::kEnum_register:
      {
      }
      break ;
    case GALGAS_possibleValuedObject::kEnum_globalConstant:
      {
      }
      break ;
    case GALGAS_possibleValuedObject::kEnum_localConstant:
      {
        {
        var_initialStateMap_16788.setter_insertKey (enumerator_16849.current (HERE).getter_lkey (HERE), enumerator_16849.current (HERE).getter_mObjectState (HERE), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 455)) ;
        }
      }
      break ;
    case GALGAS_possibleValuedObject::kEnum_globalVariableReference:
      {
      }
      break ;
    case GALGAS_possibleValuedObject::kEnum_localVariableReference:
      {
        {
        var_initialStateMap_16788.setter_insertKey (enumerator_16849.current (HERE).getter_lkey (HERE), enumerator_16849.current (HERE).getter_mObjectState (HERE), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 458)) ;
        }
      }
      break ;
    }
    enumerator_16849.gotoNextObject () ;
  }
  object->mProperty_mScopeStack.addAssign_operation (GALGAS_scopeKind::constructor_repeatScope (SOURCE_FILE ("universal-map.galgas", 461)), GALGAS_bool (true), var_initialStateMap_16788, GALGAS_referenceStateMap::constructor_emptyMap (SOURCE_FILE ("universal-map.galgas", 461)), object->mProperty_mLocalObjectList  COMMA_SOURCE_FILE ("universal-map.galgas", 461)) ;
  object->mProperty_mLocalObjectList = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("universal-map.galgas", 462)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionSetter_universalPropertyAndRoutineMapForContext_openOverrideForRepeatBlock (void) {
  enterExtensionSetter_openOverrideForRepeatBlock (kTypeDescriptor_GALGAS_universalPropertyAndRoutineMapForContext.mSlotID,
                                                   extensionSetter_universalPropertyAndRoutineMapForContext_openOverrideForRepeatBlock) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionModifier_universalPropertyAndRoutineMapForContext_openOverrideForRepeatBlock (void) {
  gExtensionModifierTable_universalPropertyAndRoutineMapForContext_openOverrideForRepeatBlock.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_universalPropertyAndRoutineMapForContext_openOverrideForRepeatBlock (defineExtensionSetter_universalPropertyAndRoutineMapForContext_openOverrideForRepeatBlock,
                                                                                                freeExtensionModifier_universalPropertyAndRoutineMapForContext_openOverrideForRepeatBlock) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Extension setter '@universalPropertyAndRoutineMapForContext openBranch'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionSetterSignature_universalPropertyAndRoutineMapForContext_openBranch> gExtensionModifierTable_universalPropertyAndRoutineMapForContext_openBranch ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_openBranch (const int32_t inClassIndex,
                                      extensionSetterSignature_universalPropertyAndRoutineMapForContext_openBranch inModifier) {
  gExtensionModifierTable_universalPropertyAndRoutineMapForContext_openBranch.forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_openBranch (cPtr_universalPropertyAndRoutineMapForContext * inObject,
                                     C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find setter
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_universalPropertyAndRoutineMapForContext) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_universalPropertyAndRoutineMapForContext_openBranch f = NULL ;
    if (classIndex < gExtensionModifierTable_universalPropertyAndRoutineMapForContext_openBranch.count ()) {
      f = gExtensionModifierTable_universalPropertyAndRoutineMapForContext_openBranch (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionModifierTable_universalPropertyAndRoutineMapForContext_openBranch.count ()) {
           f = gExtensionModifierTable_universalPropertyAndRoutineMapForContext_openBranch (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_universalPropertyAndRoutineMapForContext_openBranch.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    f (inObject, inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionSetter_universalPropertyAndRoutineMapForContext_openBranch (cPtr_universalPropertyAndRoutineMapForContext * inObject,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_universalPropertyAndRoutineMapForContext * object = inObject ;
  macroValidSharedObject (object, cPtr_universalPropertyAndRoutineMapForContext) ;
  GALGAS_referenceStateMap var_initialStateMap_17611 ;
  GALGAS_scopeKind joker_17586 ; // Joker input parameter
  GALGAS_bool joker_17589 ; // Joker input parameter
  GALGAS_referenceStateMap joker_17613_2 ; // Joker input parameter
  GALGAS_lstringlist joker_17613_1 ; // Joker input parameter
  object->mProperty_mScopeStack.method_last (joker_17586, joker_17589, var_initialStateMap_17611, joker_17613_2, joker_17613_1, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 468)) ;
  cEnumerator_referenceStateMap enumerator_17659 (var_initialStateMap_17611, kENUMERATION_UP) ;
  while (enumerator_17659.hasCurrentObject ()) {
    {
    object->mProperty_mInternalPropertyAndRoutineMapForContext.setter_setMObjectStateForKey (enumerator_17659.current_mState (HERE), enumerator_17659.current_lkey (HERE).getter_string (SOURCE_FILE ("universal-map.galgas", 470)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 470)) ;
    }
    enumerator_17659.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionSetter_universalPropertyAndRoutineMapForContext_openBranch (void) {
  enterExtensionSetter_openBranch (kTypeDescriptor_GALGAS_universalPropertyAndRoutineMapForContext.mSlotID,
                                   extensionSetter_universalPropertyAndRoutineMapForContext_openBranch) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionModifier_universalPropertyAndRoutineMapForContext_openBranch (void) {
  gExtensionModifierTable_universalPropertyAndRoutineMapForContext_openBranch.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_universalPropertyAndRoutineMapForContext_openBranch (defineExtensionSetter_universalPropertyAndRoutineMapForContext_openBranch,
                                                                                freeExtensionModifier_universalPropertyAndRoutineMapForContext_openBranch) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Extension setter '@universalPropertyAndRoutineMapForContext closeBranch'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionSetterSignature_universalPropertyAndRoutineMapForContext_closeBranch> gExtensionModifierTable_universalPropertyAndRoutineMapForContext_closeBranch ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_closeBranch (const int32_t inClassIndex,
                                       extensionSetterSignature_universalPropertyAndRoutineMapForContext_closeBranch inModifier) {
  gExtensionModifierTable_universalPropertyAndRoutineMapForContext_closeBranch.forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_closeBranch (cPtr_universalPropertyAndRoutineMapForContext * inObject,
                                      const GALGAS_location constin_inErrorLocation,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find setter
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_universalPropertyAndRoutineMapForContext) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_universalPropertyAndRoutineMapForContext_closeBranch f = NULL ;
    if (classIndex < gExtensionModifierTable_universalPropertyAndRoutineMapForContext_closeBranch.count ()) {
      f = gExtensionModifierTable_universalPropertyAndRoutineMapForContext_closeBranch (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionModifierTable_universalPropertyAndRoutineMapForContext_closeBranch.count ()) {
           f = gExtensionModifierTable_universalPropertyAndRoutineMapForContext_closeBranch (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_universalPropertyAndRoutineMapForContext_closeBranch.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    f (inObject, constin_inErrorLocation, inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionSetter_universalPropertyAndRoutineMapForContext_closeBranch (cPtr_universalPropertyAndRoutineMapForContext * inObject,
                                                                                  const GALGAS_location constinArgument_inErrorLocation,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_universalPropertyAndRoutineMapForContext * object = inObject ;
  macroValidSharedObject (object, cPtr_universalPropertyAndRoutineMapForContext) ;
  GALGAS_scopeKind var_scopeKind_18016 ;
  GALGAS_bool var_firstBranch_18033 ;
  GALGAS_referenceStateMap var_initialStateMap_18054 ;
  GALGAS_referenceStateMap var_referenceStateMap_18077 ;
  GALGAS_lstringlist var_localObjectList_18098 ;
  {
  object->mProperty_mScopeStack.setter_popLast (var_scopeKind_18016, var_firstBranch_18033, var_initialStateMap_18054, var_referenceStateMap_18077, var_localObjectList_18098, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 477)) ;
  }
  const enumGalgasBool test_0 = var_firstBranch_18033.boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_referenceStateMap var_newReferenceStateMap_18165 = GALGAS_referenceStateMap::constructor_emptyMap (SOURCE_FILE ("universal-map.galgas", 479)) ;
    cEnumerator_internalUniversalPropertyAndRoutineMapForContext enumerator_18228 (object->mProperty_mInternalPropertyAndRoutineMapForContext, kENUMERATION_UP) ;
    while (enumerator_18228.hasCurrentObject ()) {
      switch (enumerator_18228.current (HERE).getter_mPossibleValuedObject (HERE).enumValue ()) {
      case GALGAS_possibleValuedObject::kNotBuilt:
        break ;
      case GALGAS_possibleValuedObject::kEnum_undefined:
        {
        }
        break ;
      case GALGAS_possibleValuedObject::kEnum_property:
        {
        }
        break ;
      case GALGAS_possibleValuedObject::kEnum_module:
        {
        }
        break ;
      case GALGAS_possibleValuedObject::kEnum_register:
        {
        }
        break ;
      case GALGAS_possibleValuedObject::kEnum_globalConstant:
        {
        }
        break ;
      case GALGAS_possibleValuedObject::kEnum_localConstant:
        {
          {
          var_newReferenceStateMap_18165.setter_insertKey (enumerator_18228.current (HERE).getter_lkey (HERE), enumerator_18228.current (HERE).getter_mObjectState (HERE), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 488)) ;
          }
        }
        break ;
      case GALGAS_possibleValuedObject::kEnum_globalVariableReference:
        {
        }
        break ;
      case GALGAS_possibleValuedObject::kEnum_localVariableReference:
        {
          {
          var_newReferenceStateMap_18165.setter_insertKey (enumerator_18228.current (HERE).getter_lkey (HERE), enumerator_18228.current (HERE).getter_mObjectState (HERE), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 491)) ;
          }
        }
        break ;
      }
      enumerator_18228.gotoNextObject () ;
    }
    object->mProperty_mScopeStack.addAssign_operation (var_scopeKind_18016, GALGAS_bool (false), var_initialStateMap_18054, var_newReferenceStateMap_18165, var_localObjectList_18098  COMMA_SOURCE_FILE ("universal-map.galgas", 494)) ;
  }else if (kBoolFalse == test_0) {
    switch (var_scopeKind_18016.enumValue ()) {
    case GALGAS_scopeKind::kNotBuilt:
      break ;
    case GALGAS_scopeKind::kEnum_selectScope:
      {
        cEnumerator_referenceStateMap enumerator_18888 (var_referenceStateMap_18077, kENUMERATION_UP) ;
        while (enumerator_18888.hasCurrentObject ()) {
          GALGAS_valuedObjectState var_currentObjectState_18981 ;
          GALGAS_bool joker_18983_3 ; // Joker input parameter
          GALGAS_possibleValuedObject joker_18983_2 ; // Joker input parameter
          GALGAS_routineSignatureMapForContext joker_18983_1 ; // Joker input parameter
          object->mProperty_mInternalPropertyAndRoutineMapForContext.method_searchKey (enumerator_18888.current_lkey (HERE), var_currentObjectState_18981, joker_18983_3, joker_18983_2, joker_18983_1, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 499)) ;
          const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_18888.current_mState (HERE).objectCompare (var_currentObjectState_18981)).boolEnum () ;
          if (kBoolTrue == test_1) {
          }else if (kBoolFalse == test_1) {
            const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_currentObjectState_18981.objectCompare (GALGAS_valuedObjectState::constructor_hasUnreadValue (SOURCE_FILE ("universal-map.galgas", 501)))).operator_and (GALGAS_bool (kIsEqual, enumerator_18888.current_mState (HERE).objectCompare (GALGAS_valuedObjectState::constructor_hasReadValue (SOURCE_FILE ("universal-map.galgas", 501)))) COMMA_SOURCE_FILE ("universal-map.galgas", 501)).boolEnum () ;
            if (kBoolTrue == test_2) {
            }else if (kBoolFalse == test_2) {
              const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, var_currentObjectState_18981.objectCompare (GALGAS_valuedObjectState::constructor_hasReadValue (SOURCE_FILE ("universal-map.galgas", 502)))).operator_and (GALGAS_bool (kIsEqual, enumerator_18888.current_mState (HERE).objectCompare (GALGAS_valuedObjectState::constructor_hasUnreadValue (SOURCE_FILE ("universal-map.galgas", 502)))) COMMA_SOURCE_FILE ("universal-map.galgas", 502)).boolEnum () ;
              if (kBoolTrue == test_3) {
                {
                var_referenceStateMap_18077.setter_setMStateForKey (GALGAS_valuedObjectState::constructor_hasReadValue (SOURCE_FILE ("universal-map.galgas", 503)), enumerator_18888.current_lkey (HERE).getter_string (SOURCE_FILE ("universal-map.galgas", 503)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 503)) ;
                }
              }else if (kBoolFalse == test_3) {
                TC_Array <C_FixItDescription> fixItArray4 ;
                inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("invalid state for object '").add_operation (enumerator_18888.current_lkey (HERE).getter_string (SOURCE_FILE ("universal-map.galgas", 506)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 506)).add_operation (GALGAS_string ("': found "), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 506)).add_operation (extensionGetter_string (var_currentObjectState_18981, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 506)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 506)).add_operation (GALGAS_string (", required "), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 506)).add_operation (extensionGetter_string (enumerator_18888.current_mState (HERE), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 506)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 506)), fixItArray4  COMMA_SOURCE_FILE ("universal-map.galgas", 505)) ;
              }
            }
          }
          enumerator_18888.gotoNextObject () ;
        }
        object->mProperty_mScopeStack.addAssign_operation (var_scopeKind_18016, GALGAS_bool (false), var_initialStateMap_18054, var_referenceStateMap_18077, var_localObjectList_18098  COMMA_SOURCE_FILE ("universal-map.galgas", 509)) ;
      }
      break ;
    case GALGAS_scopeKind::kEnum_repeatScope:
      {
        cEnumerator_referenceStateMap enumerator_19684 (var_referenceStateMap_18077, kENUMERATION_UP) ;
        while (enumerator_19684.hasCurrentObject ()) {
          GALGAS_valuedObjectState var_currentObjectState_19777 ;
          GALGAS_bool joker_19779_3 ; // Joker input parameter
          GALGAS_possibleValuedObject joker_19779_2 ; // Joker input parameter
          GALGAS_routineSignatureMapForContext joker_19779_1 ; // Joker input parameter
          object->mProperty_mInternalPropertyAndRoutineMapForContext.method_searchKey (enumerator_19684.current_lkey (HERE), var_currentObjectState_19777, joker_19779_3, joker_19779_2, joker_19779_1, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 512)) ;
          const enumGalgasBool test_5 = GALGAS_bool (kIsNotEqual, enumerator_19684.current_mState (HERE).objectCompare (var_currentObjectState_19777)).boolEnum () ;
          if (kBoolTrue == test_5) {
            TC_Array <C_FixItDescription> fixItArray6 ;
            inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("invalid state for object '").add_operation (enumerator_19684.current_lkey (HERE).getter_string (SOURCE_FILE ("universal-map.galgas", 515)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 515)).add_operation (GALGAS_string ("': found "), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 515)).add_operation (extensionGetter_string (var_currentObjectState_19777, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 515)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 515)).add_operation (GALGAS_string (", required "), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 515)).add_operation (extensionGetter_string (enumerator_19684.current_mState (HERE), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 515)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 515)), fixItArray6  COMMA_SOURCE_FILE ("universal-map.galgas", 514)) ;
          }
          enumerator_19684.gotoNextObject () ;
        }
        object->mProperty_mScopeStack.addAssign_operation (var_scopeKind_18016, GALGAS_bool (false), var_initialStateMap_18054, var_referenceStateMap_18077, var_localObjectList_18098  COMMA_SOURCE_FILE ("universal-map.galgas", 518)) ;
      }
      break ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionSetter_universalPropertyAndRoutineMapForContext_closeBranch (void) {
  enterExtensionSetter_closeBranch (kTypeDescriptor_GALGAS_universalPropertyAndRoutineMapForContext.mSlotID,
                                    extensionSetter_universalPropertyAndRoutineMapForContext_closeBranch) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionModifier_universalPropertyAndRoutineMapForContext_closeBranch (void) {
  gExtensionModifierTable_universalPropertyAndRoutineMapForContext_closeBranch.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_universalPropertyAndRoutineMapForContext_closeBranch (defineExtensionSetter_universalPropertyAndRoutineMapForContext_closeBranch,
                                                                                 freeExtensionModifier_universalPropertyAndRoutineMapForContext_closeBranch) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Extension setter '@universalPropertyAndRoutineMapForContext closeOverride'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionSetterSignature_universalPropertyAndRoutineMapForContext_closeOverride> gExtensionModifierTable_universalPropertyAndRoutineMapForContext_closeOverride ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_closeOverride (const int32_t inClassIndex,
                                         extensionSetterSignature_universalPropertyAndRoutineMapForContext_closeOverride inModifier) {
  gExtensionModifierTable_universalPropertyAndRoutineMapForContext_closeOverride.forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_closeOverride (cPtr_universalPropertyAndRoutineMapForContext * inObject,
                                        const GALGAS_location constin_inErrorLocation,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find setter
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_universalPropertyAndRoutineMapForContext) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_universalPropertyAndRoutineMapForContext_closeOverride f = NULL ;
    if (classIndex < gExtensionModifierTable_universalPropertyAndRoutineMapForContext_closeOverride.count ()) {
      f = gExtensionModifierTable_universalPropertyAndRoutineMapForContext_closeOverride (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionModifierTable_universalPropertyAndRoutineMapForContext_closeOverride.count ()) {
           f = gExtensionModifierTable_universalPropertyAndRoutineMapForContext_closeOverride (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_universalPropertyAndRoutineMapForContext_closeOverride.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    f (inObject, constin_inErrorLocation, inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionSetter_universalPropertyAndRoutineMapForContext_closeOverride (cPtr_universalPropertyAndRoutineMapForContext * inObject,
                                                                                    const GALGAS_location constinArgument_inErrorLocation,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_universalPropertyAndRoutineMapForContext * object = inObject ;
  macroValidSharedObject (object, cPtr_universalPropertyAndRoutineMapForContext) ;
  GALGAS_referenceStateMap var_referenceStateMap_20385 ;
  GALGAS_lstringlist var_localObjectList_20406 ;
  {
  GALGAS_scopeKind joker_20355 ; // Joker input parameter
  GALGAS_bool joker_20358 ; // Joker input parameter
  GALGAS_referenceStateMap joker_20361 ; // Joker input parameter
  object->mProperty_mScopeStack.setter_popLast (joker_20355, joker_20358, joker_20361, var_referenceStateMap_20385, var_localObjectList_20406, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 526)) ;
  }
  cEnumerator_referenceStateMap enumerator_20484 (var_referenceStateMap_20385, kENUMERATION_UP) ;
  while (enumerator_20484.hasCurrentObject ()) {
    {
    object->mProperty_mInternalPropertyAndRoutineMapForContext.setter_setMObjectStateForKey (enumerator_20484.current_mState (HERE), enumerator_20484.current_lkey (HERE).getter_string (SOURCE_FILE ("universal-map.galgas", 529)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 529)) ;
    }
    enumerator_20484.gotoNextObject () ;
  }
  cEnumerator_lstringlist enumerator_20671 (object->mProperty_mLocalObjectList, kENUMERATION_UP) ;
  while (enumerator_20671.hasCurrentObject ()) {
    GALGAS_valuedObjectState var_currentObjectState_20760 ;
    GALGAS_bool var_objectShouldBeValuedAtEndOfScope_20798 ;
    GALGAS_possibleValuedObject var_possibleValuedObject_20824 ;
    GALGAS_routineSignatureMapForContext joker_20826 ; // Joker input parameter
    object->mProperty_mInternalPropertyAndRoutineMapForContext.method_searchKey (enumerator_20671.current_mValue (HERE), var_currentObjectState_20760, var_objectShouldBeValuedAtEndOfScope_20798, var_possibleValuedObject_20824, joker_20826, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 533)) ;
    switch (var_possibleValuedObject_20824.enumValue ()) {
    case GALGAS_possibleValuedObject::kNotBuilt:
      break ;
    case GALGAS_possibleValuedObject::kEnum_undefined:
      {
      }
      break ;
    case GALGAS_possibleValuedObject::kEnum_property:
      {
      }
      break ;
    case GALGAS_possibleValuedObject::kEnum_module:
      {
      }
      break ;
    case GALGAS_possibleValuedObject::kEnum_register:
      {
      }
      break ;
    case GALGAS_possibleValuedObject::kEnum_globalConstant:
      {
      }
      break ;
    case GALGAS_possibleValuedObject::kEnum_localConstant:
      {
        const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_currentObjectState_20760.objectCompare (GALGAS_valuedObjectState::constructor_hasUnreadValue (SOURCE_FILE ("universal-map.galgas", 541)))).boolEnum () ;
        if (kBoolTrue == test_0) {
          TC_Array <C_FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticWarning (constinArgument_inErrorLocation, GALGAS_string ("'").add_operation (enumerator_20671.current_mValue (HERE).getter_string (SOURCE_FILE ("universal-map.galgas", 542)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 542)).add_operation (GALGAS_string ("' is never read"), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 542)), fixItArray1  COMMA_SOURCE_FILE ("universal-map.galgas", 542)) ;
        }
      }
      break ;
    case GALGAS_possibleValuedObject::kEnum_globalVariableReference:
      {
      }
      break ;
    case GALGAS_possibleValuedObject::kEnum_localVariableReference:
      {
        GALGAS_bool test_2 = GALGAS_bool (kIsEqual, var_currentObjectState_20760.objectCompare (GALGAS_valuedObjectState::constructor_noValue (SOURCE_FILE ("universal-map.galgas", 546)))) ;
        if (kBoolTrue == test_2.boolEnum ()) {
          test_2 = var_objectShouldBeValuedAtEndOfScope_20798 ;
        }
        const enumGalgasBool test_3 = test_2.boolEnum () ;
        if (kBoolTrue == test_3) {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticWarning (constinArgument_inErrorLocation, GALGAS_string ("'").add_operation (enumerator_20671.current_mValue (HERE).getter_string (SOURCE_FILE ("universal-map.galgas", 547)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 547)).add_operation (GALGAS_string ("' should be valued at the end of routine"), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 547)), fixItArray4  COMMA_SOURCE_FILE ("universal-map.galgas", 547)) ;
        }
      }
      break ;
    }
    enumerator_20671.gotoNextObject () ;
  }
  cEnumerator_lstringlist enumerator_21523 (object->mProperty_mLocalObjectList, kENUMERATION_UP) ;
  while (enumerator_21523.hasCurrentObject ()) {
    {
    object->mProperty_mInternalPropertyAndRoutineMapForContext.setter_setMPossibleValuedObjectForKey (GALGAS_possibleValuedObject::constructor_undefined (SOURCE_FILE ("universal-map.galgas", 553)), enumerator_21523.current_mValue (HERE).getter_string (SOURCE_FILE ("universal-map.galgas", 553)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 553)) ;
    }
    enumerator_21523.gotoNextObject () ;
  }
  object->mProperty_mLocalObjectList = var_localObjectList_20406 ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionSetter_universalPropertyAndRoutineMapForContext_closeOverride (void) {
  enterExtensionSetter_closeOverride (kTypeDescriptor_GALGAS_universalPropertyAndRoutineMapForContext.mSlotID,
                                      extensionSetter_universalPropertyAndRoutineMapForContext_closeOverride) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionModifier_universalPropertyAndRoutineMapForContext_closeOverride (void) {
  gExtensionModifierTable_universalPropertyAndRoutineMapForContext_closeOverride.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_universalPropertyAndRoutineMapForContext_closeOverride (defineExtensionSetter_universalPropertyAndRoutineMapForContext_closeOverride,
                                                                                   freeExtensionModifier_universalPropertyAndRoutineMapForContext_closeOverride) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Extension Getter '@unifiedTypeMap-proxy equatable'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool extensionGetter_equatable (const GALGAS_unifiedTypeMap_2D_proxy & inObject,
                                       C_Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  const GALGAS_unifiedTypeMap_2D_proxy temp_0 = inObject ;
  result_result = extensionGetter_equatable (temp_0.getter_type (inCompiler COMMA_SOURCE_FILE ("types.galgas", 44)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 44)) ;
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
  result_result = extensionGetter_instanciable (temp_0.getter_type (inCompiler COMMA_SOURCE_FILE ("types.galgas", 77)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 77)) ;
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
  result_result = extensionGetter_copyable (temp_0.getter_type (inCompiler COMMA_SOURCE_FILE ("types.galgas", 110)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 110)) ;
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
mProperty_mStaticArrayMap () {
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
                                                                    const GALGAS_staticArrayMap & inOperand6) :
mProperty_mTemporaryIndex (inOperand0),
mProperty_mPanicSetupRoutinePriorityMap (inOperand1),
mProperty_mPanicLoopRoutinePriorityMap (inOperand2),
mProperty_mInitRoutinePriorityMap (inOperand3),
mProperty_mBootRoutinePriorityMap (inOperand4),
mProperty_mSubprogramInvocationGraph (inOperand5),
mProperty_mStaticArrayMap (inOperand6) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticTemporariesStruct GALGAS_semanticTemporariesStruct::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_semanticTemporariesStruct (GALGAS_uint::constructor_default (HERE),
                                           GALGAS_panicRoutinePriorityMap::constructor_emptyMap (HERE),
                                           GALGAS_panicRoutinePriorityMap::constructor_emptyMap (HERE),
                                           GALGAS_initRoutinePriorityMap::constructor_emptyMap (HERE),
                                           GALGAS_bootRoutinePriorityMap::constructor_emptyMap (HERE),
                                           GALGAS_subprogramInvocationGraph::constructor_emptyGraph (HERE),
                                           GALGAS_staticArrayMap::constructor_emptyMap (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticTemporariesStruct GALGAS_semanticTemporariesStruct::constructor_new (const GALGAS_uint & inOperand0,
                                                                                    const GALGAS_panicRoutinePriorityMap & inOperand1,
                                                                                    const GALGAS_panicRoutinePriorityMap & inOperand2,
                                                                                    const GALGAS_initRoutinePriorityMap & inOperand3,
                                                                                    const GALGAS_bootRoutinePriorityMap & inOperand4,
                                                                                    const GALGAS_subprogramInvocationGraph & inOperand5,
                                                                                    const GALGAS_staticArrayMap & inOperand6 
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
    result = mProperty_mStaticArrayMap.objectCompare (inOperand.mProperty_mStaticArrayMap) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_semanticTemporariesStruct::isValid (void) const {
  return mProperty_mTemporaryIndex.isValid () && mProperty_mPanicSetupRoutinePriorityMap.isValid () && mProperty_mPanicLoopRoutinePriorityMap.isValid () && mProperty_mInitRoutinePriorityMap.isValid () && mProperty_mBootRoutinePriorityMap.isValid () && mProperty_mSubprogramInvocationGraph.isValid () && mProperty_mStaticArrayMap.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticTemporariesStruct::drop (void) {
  mProperty_mTemporaryIndex.drop () ;
  mProperty_mPanicSetupRoutinePriorityMap.drop () ;
  mProperty_mPanicLoopRoutinePriorityMap.drop () ;
  mProperty_mInitRoutinePriorityMap.drop () ;
  mProperty_mBootRoutinePriorityMap.drop () ;
  mProperty_mSubprogramInvocationGraph.drop () ;
  mProperty_mStaticArrayMap.drop () ;
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
    mProperty_mStaticArrayMap.description (ioString, inIndentation+1) ;
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

GALGAS_staticArrayMap GALGAS_semanticTemporariesStruct::getter_mStaticArrayMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mStaticArrayMap ;
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

GALGAS_constantMap_2D_element::GALGAS_constantMap_2D_element (void) :
mProperty_lkey (),
mProperty_mIndex (),
mProperty_mClassTypeName () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constantMap_2D_element::~ GALGAS_constantMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constantMap_2D_element::GALGAS_constantMap_2D_element (const GALGAS_lstring & inOperand0,
                                                              const GALGAS_bigint & inOperand1,
                                                              const GALGAS_lstring & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mIndex (inOperand1),
mProperty_mClassTypeName (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constantMap_2D_element GALGAS_constantMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_constantMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                        GALGAS_bigint::constructor_zero (HERE),
                                        GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constantMap_2D_element GALGAS_constantMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                              const GALGAS_bigint & inOperand1,
                                                                              const GALGAS_lstring & inOperand2 
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_constantMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_constantMap_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_constantMap_2D_element::objectCompare (const GALGAS_constantMap_2D_element & inOperand) const {
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

bool GALGAS_constantMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mIndex.isValid () && mProperty_mClassTypeName.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_constantMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mIndex.drop () ;
  mProperty_mClassTypeName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_constantMap_2D_element::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "<struct @constantMap-element:" ;
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

GALGAS_lstring GALGAS_constantMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint GALGAS_constantMap_2D_element::getter_mIndex (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_constantMap_2D_element::getter_mClassTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mClassTypeName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @constantMap-element type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_constantMap_2D_element ("constantMap-element",
                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_constantMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constantMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_constantMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_constantMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constantMap_2D_element GALGAS_constantMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_constantMap_2D_element result ;
  const GALGAS_constantMap_2D_element * p = (const GALGAS_constantMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_constantMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("constantMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structurePropertyListAST_2D_element::GALGAS_structurePropertyListAST_2D_element (void) :
mProperty_mPropertyName (),
mProperty_mIsPublic (),
mProperty_mPropertyTypeName (),
mProperty_mInitialisation () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structurePropertyListAST_2D_element::~ GALGAS_structurePropertyListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structurePropertyListAST_2D_element::GALGAS_structurePropertyListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                        const GALGAS_bool & inOperand1,
                                                                                        const GALGAS_lstring & inOperand2,
                                                                                        const GALGAS_structurePropertyInitOptionalExpressionAST & inOperand3) :
mProperty_mPropertyName (inOperand0),
mProperty_mIsPublic (inOperand1),
mProperty_mPropertyTypeName (inOperand2),
mProperty_mInitialisation (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structurePropertyListAST_2D_element GALGAS_structurePropertyListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                        const GALGAS_bool & inOperand1,
                                                                                                        const GALGAS_lstring & inOperand2,
                                                                                                        const GALGAS_structurePropertyInitOptionalExpressionAST & inOperand3 
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
    result = mProperty_mPropertyName.objectCompare (inOperand.mProperty_mPropertyName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mIsPublic.objectCompare (inOperand.mProperty_mIsPublic) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mPropertyTypeName.objectCompare (inOperand.mProperty_mPropertyTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mInitialisation.objectCompare (inOperand.mProperty_mInitialisation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_structurePropertyListAST_2D_element::isValid (void) const {
  return mProperty_mPropertyName.isValid () && mProperty_mIsPublic.isValid () && mProperty_mPropertyTypeName.isValid () && mProperty_mInitialisation.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_structurePropertyListAST_2D_element::drop (void) {
  mProperty_mPropertyName.drop () ;
  mProperty_mIsPublic.drop () ;
  mProperty_mPropertyTypeName.drop () ;
  mProperty_mInitialisation.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_structurePropertyListAST_2D_element::description (C_String & ioString,
                                                              const int32_t inIndentation) const {
  ioString << "<struct @structurePropertyListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mPropertyName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mIsPublic.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mPropertyTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mInitialisation.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_structurePropertyListAST_2D_element::getter_mPropertyName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPropertyName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_structurePropertyListAST_2D_element::getter_mIsPublic (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIsPublic ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_structurePropertyListAST_2D_element::getter_mPropertyTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPropertyTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structurePropertyInitOptionalExpressionAST GALGAS_structurePropertyListAST_2D_element::getter_mInitialisation (UNUSED_LOCATION_ARGS) const {
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
mProperty_mTypeName (),
mProperty_mOptionalExpression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_modulePropertyListAST_2D_element::~ GALGAS_modulePropertyListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_modulePropertyListAST_2D_element::GALGAS_modulePropertyListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                  const GALGAS_lstring & inOperand1,
                                                                                  const GALGAS_structurePropertyInitOptionalExpressionAST & inOperand2) :
mProperty_mPropertyName (inOperand0),
mProperty_mTypeName (inOperand1),
mProperty_mOptionalExpression (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_modulePropertyListAST_2D_element GALGAS_modulePropertyListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                  const GALGAS_lstring & inOperand1,
                                                                                                  const GALGAS_structurePropertyInitOptionalExpressionAST & inOperand2 
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_modulePropertyListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_modulePropertyListAST_2D_element (inOperand0, inOperand1, inOperand2) ;
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
    result = mProperty_mTypeName.objectCompare (inOperand.mProperty_mTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mOptionalExpression.objectCompare (inOperand.mProperty_mOptionalExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_modulePropertyListAST_2D_element::isValid (void) const {
  return mProperty_mPropertyName.isValid () && mProperty_mTypeName.isValid () && mProperty_mOptionalExpression.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_modulePropertyListAST_2D_element::drop (void) {
  mProperty_mPropertyName.drop () ;
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
                                                          const GALGAS_PLMType & inOperand1,
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

GALGAS_taskMapIR_2D_element GALGAS_taskMapIR_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                          const GALGAS_PLMType & inOperand1,
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

GALGAS_functionCallEffectiveParameterListAST_2D_element::GALGAS_functionCallEffectiveParameterListAST_2D_element (void) :
mProperty_mSelector (),
mProperty_mExpression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionCallEffectiveParameterListAST_2D_element::~ GALGAS_functionCallEffectiveParameterListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionCallEffectiveParameterListAST_2D_element::GALGAS_functionCallEffectiveParameterListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                                  const GALGAS_expressionAST & inOperand1) :
mProperty_mSelector (inOperand0),
mProperty_mExpression (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionCallEffectiveParameterListAST_2D_element GALGAS_functionCallEffectiveParameterListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                                  const GALGAS_expressionAST & inOperand1 
                                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_functionCallEffectiveParameterListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_functionCallEffectiveParameterListAST_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_functionCallEffectiveParameterListAST_2D_element::objectCompare (const GALGAS_functionCallEffectiveParameterListAST_2D_element & inOperand) const {
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

bool GALGAS_functionCallEffectiveParameterListAST_2D_element::isValid (void) const {
  return mProperty_mSelector.isValid () && mProperty_mExpression.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_functionCallEffectiveParameterListAST_2D_element::drop (void) {
  mProperty_mSelector.drop () ;
  mProperty_mExpression.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_functionCallEffectiveParameterListAST_2D_element::description (C_String & ioString,
                                                                           const int32_t inIndentation) const {
  ioString << "<struct @functionCallEffectiveParameterListAST-element:" ;
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

GALGAS_lstring GALGAS_functionCallEffectiveParameterListAST_2D_element::getter_mSelector (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSelector ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST GALGAS_functionCallEffectiveParameterListAST_2D_element::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExpression ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 @functionCallEffectiveParameterListAST-element type                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_functionCallEffectiveParameterListAST_2D_element ("functionCallEffectiveParameterListAST-element",
                                                                         NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_functionCallEffectiveParameterListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionCallEffectiveParameterListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_functionCallEffectiveParameterListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_functionCallEffectiveParameterListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionCallEffectiveParameterListAST_2D_element GALGAS_functionCallEffectiveParameterListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                C_Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_functionCallEffectiveParameterListAST_2D_element result ;
  const GALGAS_functionCallEffectiveParameterListAST_2D_element * p = (const GALGAS_functionCallEffectiveParameterListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_functionCallEffectiveParameterListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("functionCallEffectiveParameterListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionCallEffectiveParameterListSE_2D_element::GALGAS_functionCallEffectiveParameterListSE_2D_element (void) :
mProperty_mSelector (),
mProperty_mExpression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionCallEffectiveParameterListSE_2D_element::~ GALGAS_functionCallEffectiveParameterListSE_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionCallEffectiveParameterListSE_2D_element::GALGAS_functionCallEffectiveParameterListSE_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                                const GALGAS_expressionSE & inOperand1) :
mProperty_mSelector (inOperand0),
mProperty_mExpression (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionCallEffectiveParameterListSE_2D_element GALGAS_functionCallEffectiveParameterListSE_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                                const GALGAS_expressionSE & inOperand1 
                                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_functionCallEffectiveParameterListSE_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_functionCallEffectiveParameterListSE_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_functionCallEffectiveParameterListSE_2D_element::objectCompare (const GALGAS_functionCallEffectiveParameterListSE_2D_element & inOperand) const {
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

bool GALGAS_functionCallEffectiveParameterListSE_2D_element::isValid (void) const {
  return mProperty_mSelector.isValid () && mProperty_mExpression.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_functionCallEffectiveParameterListSE_2D_element::drop (void) {
  mProperty_mSelector.drop () ;
  mProperty_mExpression.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_functionCallEffectiveParameterListSE_2D_element::description (C_String & ioString,
                                                                          const int32_t inIndentation) const {
  ioString << "<struct @functionCallEffectiveParameterListSE-element:" ;
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

GALGAS_lstring GALGAS_functionCallEffectiveParameterListSE_2D_element::getter_mSelector (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSelector ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionSE GALGAS_functionCallEffectiveParameterListSE_2D_element::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExpression ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 @functionCallEffectiveParameterListSE-element type                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_functionCallEffectiveParameterListSE_2D_element ("functionCallEffectiveParameterListSE-element",
                                                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_functionCallEffectiveParameterListSE_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionCallEffectiveParameterListSE_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_functionCallEffectiveParameterListSE_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_functionCallEffectiveParameterListSE_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionCallEffectiveParameterListSE_2D_element GALGAS_functionCallEffectiveParameterListSE_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                              C_Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_functionCallEffectiveParameterListSE_2D_element result ;
  const GALGAS_functionCallEffectiveParameterListSE_2D_element * p = (const GALGAS_functionCallEffectiveParameterListSE_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_functionCallEffectiveParameterListSE_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("functionCallEffectiveParameterListSE-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

GALGAS_registerIntegerFieldListSE_2D_element::GALGAS_registerIntegerFieldListSE_2D_element (void) :
mProperty_mFieldName (),
mProperty_mExpression (),
mProperty_mExpressionLocation () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerIntegerFieldListSE_2D_element::~ GALGAS_registerIntegerFieldListSE_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerIntegerFieldListSE_2D_element::GALGAS_registerIntegerFieldListSE_2D_element (const GALGAS_lstring & inOperand0,
                                                                                            const GALGAS_expressionSE & inOperand1,
                                                                                            const GALGAS_location & inOperand2) :
mProperty_mFieldName (inOperand0),
mProperty_mExpression (inOperand1),
mProperty_mExpressionLocation (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerIntegerFieldListSE_2D_element GALGAS_registerIntegerFieldListSE_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                            const GALGAS_expressionSE & inOperand1,
                                                                                                            const GALGAS_location & inOperand2 
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_registerIntegerFieldListSE_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_registerIntegerFieldListSE_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_registerIntegerFieldListSE_2D_element::objectCompare (const GALGAS_registerIntegerFieldListSE_2D_element & inOperand) const {
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

bool GALGAS_registerIntegerFieldListSE_2D_element::isValid (void) const {
  return mProperty_mFieldName.isValid () && mProperty_mExpression.isValid () && mProperty_mExpressionLocation.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_registerIntegerFieldListSE_2D_element::drop (void) {
  mProperty_mFieldName.drop () ;
  mProperty_mExpression.drop () ;
  mProperty_mExpressionLocation.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_registerIntegerFieldListSE_2D_element::description (C_String & ioString,
                                                                const int32_t inIndentation) const {
  ioString << "<struct @registerIntegerFieldListSE-element:" ;
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

GALGAS_lstring GALGAS_registerIntegerFieldListSE_2D_element::getter_mFieldName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFieldName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionSE GALGAS_registerIntegerFieldListSE_2D_element::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_registerIntegerFieldListSE_2D_element::getter_mExpressionLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExpressionLocation ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @registerIntegerFieldListSE-element type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_registerIntegerFieldListSE_2D_element ("registerIntegerFieldListSE-element",
                                                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_registerIntegerFieldListSE_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_registerIntegerFieldListSE_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_registerIntegerFieldListSE_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_registerIntegerFieldListSE_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerIntegerFieldListSE_2D_element GALGAS_registerIntegerFieldListSE_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_registerIntegerFieldListSE_2D_element result ;
  const GALGAS_registerIntegerFieldListSE_2D_element * p = (const GALGAS_registerIntegerFieldListSE_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_registerIntegerFieldListSE_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("registerIntegerFieldListSE-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
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
                                                                                            const GALGAS_PLMType & inOperand2) :
mProperty_mEffectiveParameterPassingMode (inOperand0),
mProperty_mSelector (inOperand1),
mProperty_mParameterType (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procEffectiveParameterList_2D_element GALGAS_procEffectiveParameterList_2D_element::constructor_new (const GALGAS_effectiveArgumentPassingModeAST & inOperand0,
                                                                                                            const GALGAS_lstring & inOperand1,
                                                                                                            const GALGAS_PLMType & inOperand2 
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

GALGAS_PLMType GALGAS_procEffectiveParameterList_2D_element::getter_mParameterType (UNUSED_LOCATION_ARGS) const {
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

GALGAS_routineTypedSignature_2D_element::GALGAS_routineTypedSignature_2D_element (void) :
mProperty_mFormalArgumentPassingMode (),
mProperty_mSelector (),
mProperty_mTypeProxy () {
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
mProperty_mTypeProxy (inOperand2) {
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
    result = mProperty_mTypeProxy.objectCompare (inOperand.mProperty_mTypeProxy) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_routineTypedSignature_2D_element::isValid (void) const {
  return mProperty_mFormalArgumentPassingMode.isValid () && mProperty_mSelector.isValid () && mProperty_mTypeProxy.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineTypedSignature_2D_element::drop (void) {
  mProperty_mFormalArgumentPassingMode.drop () ;
  mProperty_mSelector.drop () ;
  mProperty_mTypeProxy.drop () ;
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
    mProperty_mTypeProxy.description (ioString, inIndentation+1) ;
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

GALGAS_unifiedTypeMap_2D_proxy GALGAS_routineTypedSignature_2D_element::getter_mTypeProxy (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTypeProxy ;
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

