#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-6.h"


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
    result = mAttribute_mTargetVarName.objectCompare (p->mAttribute_mTargetVarName) ;
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

GALGAS_varOperatorAssignInstructionAST GALGAS_varOperatorAssignInstructionAST::constructor_new (const GALGAS_lstring & inAttribute_mTargetVarName,
                                                                                                const GALGAS_expressionAST & inAttribute_mSourceExpression,
                                                                                                const GALGAS_operatorAssignKind & inAttribute_mOperator
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_varOperatorAssignInstructionAST result ;
  if (inAttribute_mTargetVarName.isValid () && inAttribute_mSourceExpression.isValid () && inAttribute_mOperator.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_varOperatorAssignInstructionAST (inAttribute_mTargetVarName, inAttribute_mSourceExpression, inAttribute_mOperator COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_varOperatorAssignInstructionAST::getter_mTargetVarName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_varOperatorAssignInstructionAST * p = (const cPtr_varOperatorAssignInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varOperatorAssignInstructionAST) ;
    result = p->mAttribute_mTargetVarName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_varOperatorAssignInstructionAST::getter_mTargetVarName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTargetVarName ;
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

cPtr_varOperatorAssignInstructionAST::cPtr_varOperatorAssignInstructionAST (const GALGAS_lstring & in_mTargetVarName,
                                                                            const GALGAS_expressionAST & in_mSourceExpression,
                                                                            const GALGAS_operatorAssignKind & in_mOperator
                                                                            COMMA_LOCATION_ARGS) :
cPtr_instructionAST (THERE),
mAttribute_mTargetVarName (in_mTargetVarName),
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
  mAttribute_mTargetVarName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mSourceExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mOperator.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_varOperatorAssignInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_varOperatorAssignInstructionAST (mAttribute_mTargetVarName, mAttribute_mSourceExpression, mAttribute_mOperator COMMA_THERE)) ;
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
    GALGAS_filewrapper var_fw = GALGAS_filewrapper (gWrapperDirectory_0_targetTemplates) ;
    const enumGalgasBool test_0 = GALGAS_bool (gOption_plm_5F_options_listEmbeddedTargets.getter_value ()).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_stringlist var_embeddedFiles = var_fw.getter_allTextFilePathes (SOURCE_FILE ("target-generation.galgas", 26)) ;
      inCompiler->printMessage (GALGAS_string ("Embedded targets:\n")  COMMA_SOURCE_FILE ("target-generation.galgas", 27)) ;
      cEnumerator_stringlist enumerator_1371 (var_embeddedFiles, kEnumeration_up) ;
      while (enumerator_1371.hasCurrentObject ()) {
        const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_1371.current_mValue (HERE).getter_pathExtension (SOURCE_FILE ("target-generation.galgas", 29)).objectCompare (GALGAS_string ("plm-target"))).boolEnum () ;
        if (kBoolTrue == test_1) {
          inCompiler->printMessage (GALGAS_string ("  ").add_operation (enumerator_1371.current_mValue (HERE).getter_lastPathComponent (SOURCE_FILE ("target-generation.galgas", 30)).getter_stringByDeletingPathExtension (SOURCE_FILE ("target-generation.galgas", 30)), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 30)).add_operation (GALGAS_char (TO_UNICODE (10)).getter_string (SOURCE_FILE ("target-generation.galgas", 30)), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 30))  COMMA_SOURCE_FILE ("target-generation.galgas", 30)) ;
        }
        enumerator_1371.gotoNextObject () ;
      }
    }
    GALGAS_string var_path = GALGAS_string (gOption_plm_5F_options_extractEmbeddedTargets.getter_value ()) ;
    const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_path.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_stringlist var_embeddedFiles = var_fw.getter_allTextFilePathes (SOURCE_FILE ("target-generation.galgas", 36)) ;
      cEnumerator_stringlist enumerator_1690 (var_embeddedFiles, kEnumeration_up) ;
      while (enumerator_1690.hasCurrentObject ()) {
        GALGAS_string var_filePath = var_path.add_operation (enumerator_1690.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 38)) ;
        inCompiler->printMessage (GALGAS_string ("  ").add_operation (var_filePath, inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 39)).add_operation (GALGAS_char (TO_UNICODE (10)).getter_string (SOURCE_FILE ("target-generation.galgas", 39)), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 39))  COMMA_SOURCE_FILE ("target-generation.galgas", 39)) ;
        GALGAS_string var_dir = var_filePath.getter_stringByDeletingLastPathComponent (SOURCE_FILE ("target-generation.galgas", 40)) ;
        var_dir.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 41)) ;
        GALGAS_string var_text = var_fw.getter_textFileContentsAtPath (enumerator_1690.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 42)) ;
        GALGAS_bool joker_1962 ; // Joker input parameter
        var_text.method_writeToFileWhenDifferentContents (var_filePath, joker_1962, inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 43)) ;
        enumerator_1690.gotoNextObject () ;
      }
    }
  }
  {
    GALGAS_filewrapper var_fw = GALGAS_filewrapper (gWrapperDirectory_0_embeddedSampleCode) ;
    const enumGalgasBool test_3 = GALGAS_bool (gOption_plm_5F_options_listEmbeddedSampleFiles.getter_value ()).boolEnum () ;
    if (kBoolTrue == test_3) {
      GALGAS_stringlist var_files = var_fw.getter_allTextFilePathes (SOURCE_FILE ("embedded-sample-code.galgas", 16)) ;
      inCompiler->printMessage (GALGAS_string ("Embedded sample code:\n")  COMMA_SOURCE_FILE ("embedded-sample-code.galgas", 17)) ;
      cEnumerator_stringlist enumerator_796 (var_files, kEnumeration_up) ;
      while (enumerator_796.hasCurrentObject ()) {
        inCompiler->printMessage (GALGAS_string ("  ").add_operation (enumerator_796.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("embedded-sample-code.galgas", 19)).add_operation (GALGAS_char (TO_UNICODE (10)).getter_string (SOURCE_FILE ("embedded-sample-code.galgas", 19)), inCompiler COMMA_SOURCE_FILE ("embedded-sample-code.galgas", 19))  COMMA_SOURCE_FILE ("embedded-sample-code.galgas", 19)) ;
        enumerator_796.gotoNextObject () ;
      }
    }
    GALGAS_string var_path = GALGAS_string (gOption_plm_5F_options_extractEmbeddedSampleFile.getter_value ()) ;
    const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, var_path.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_4) {
      const enumGalgasBool test_5 = var_fw.getter_fileExistsAtPath (var_path, inCompiler COMMA_SOURCE_FILE ("embedded-sample-code.galgas", 24)).boolEnum () ;
      if (kBoolTrue == test_5) {
        GALGAS_string var_text = var_fw.getter_textFileContentsAtPath (var_path, inCompiler COMMA_SOURCE_FILE ("embedded-sample-code.galgas", 25)) ;
        GALGAS_string var_sourceName = var_path.getter_lastPathComponent (SOURCE_FILE ("embedded-sample-code.galgas", 26)) ;
        GALGAS_bool joker_1128 ; // Joker input parameter
        var_text.method_writeToFileWhenDifferentContents (var_sourceName, joker_1128, inCompiler COMMA_SOURCE_FILE ("embedded-sample-code.galgas", 27)) ;
      }else if (kBoolFalse == test_5) {
        GALGAS_location location_6 (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("embedded-sample-code.galgas", 29)).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_6, GALGAS_string ("there is no '").add_operation (var_path, inCompiler COMMA_SOURCE_FILE ("embedded-sample-code.galgas", 29)).add_operation (GALGAS_string ("' embedded file"), inCompiler COMMA_SOURCE_FILE ("embedded-sample-code.galgas", 29))  COMMA_SOURCE_FILE ("embedded-sample-code.galgas", 29)) ;
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
        if (gOption_galgas_5F_builtin_5F_options_trace.mValue) {
          enableTraceWithPath (sourceFilesArray (i COMMA_HERE)) ;
        }
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
        closeTrace () ;
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
//                              Abstract category getter '@abstractDeclaration location'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryGetterSignature_abstractDeclaration_location> gCategoryGetterTable_abstractDeclaration_location ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryGetter_location (const int32_t inClassIndex,
                                   categoryGetterSignature_abstractDeclaration_location inGetter) {
  gCategoryGetterTable_abstractDeclaration_location.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryGetter_abstractDeclaration_location (void) {
  gCategoryGetterTable_abstractDeclaration_location.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_abstractDeclaration_location (NULL,
                                                         freeCategoryGetter_abstractDeclaration_location) ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location callCategoryGetter_location (const cPtr_abstractDeclaration * inObject,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  GALGAS_location result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractDeclaration) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryGetterSignature_abstractDeclaration_location f = NULL ;
    if (classIndex < gCategoryGetterTable_abstractDeclaration_location.count ()) {
      f = gCategoryGetterTable_abstractDeclaration_location (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryGetterTable_abstractDeclaration_location.count ()) {
           f = gCategoryGetterTable_abstractDeclaration_location (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryGetterTable_abstractDeclaration_location.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
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
//                            Abstract category method '@abstractDeclaration addExtension'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_abstractDeclaration_addExtension> gCategoryMethodTable_abstractDeclaration_addExtension ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_addExtension (const int32_t inClassIndex,
                                       categoryMethodSignature_abstractDeclaration_addExtension inMethod) {
  gCategoryMethodTable_abstractDeclaration_addExtension.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_abstractDeclaration_addExtension (void) {
  gCategoryMethodTable_abstractDeclaration_addExtension.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractDeclaration_addExtension (NULL,
                                                             freeCategoryMethod_abstractDeclaration_addExtension) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_addExtension (const cPtr_abstractDeclaration * inObject,
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
    categoryMethodSignature_abstractDeclaration_addExtension f = NULL ;
    if (classIndex < gCategoryMethodTable_abstractDeclaration_addExtension.count ()) {
      f = gCategoryMethodTable_abstractDeclaration_addExtension (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_abstractDeclaration_addExtension.count ()) {
           f = gCategoryMethodTable_abstractDeclaration_addExtension (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_abstractDeclaration_addExtension.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
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
//                       Category method '@globalVarDeclarationList noteTypesInPrecedenceGraph'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_noteTypesInPrecedenceGraph (const GALGAS_globalVarDeclarationList inObject,
                                                GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                C_Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_globalVarDeclarationList temp_0 = inObject ;
  cEnumerator_globalVarDeclarationList enumerator_4955 (temp_0, kEnumeration_up) ;
  while (enumerator_4955.hasCurrentObject ()) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, enumerator_4955.current_mTypeName (HERE).mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_lstring var_typeName = GALGAS_lstring::constructor_new (GALGAS_string ("$").add_operation (enumerator_4955.current_mTypeName (HERE).getter_string (SOURCE_FILE ("declaration-global-variable.galgas", 151)), inCompiler COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 151)), enumerator_4955.current_mTypeName (HERE).mAttribute_location  COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 151)) ;
      {
      ioArgument_ioGraph.setter_noteNode (var_typeName COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 152)) ;
      }
    }
    enumerator_4955.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Abstract category method '@expressionAST addDependenceEdgeForStaticExpression'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_expressionAST_addDependenceEdgeForStaticExpression> gCategoryMethodTable_expressionAST_addDependenceEdgeForStaticExpression ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_addDependenceEdgeForStaticExpression (const int32_t inClassIndex,
                                                               categoryMethodSignature_expressionAST_addDependenceEdgeForStaticExpression inMethod) {
  gCategoryMethodTable_expressionAST_addDependenceEdgeForStaticExpression.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_expressionAST_addDependenceEdgeForStaticExpression (void) {
  gCategoryMethodTable_expressionAST_addDependenceEdgeForStaticExpression.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_expressionAST_addDependenceEdgeForStaticExpression (NULL,
                                                                               freeCategoryMethod_expressionAST_addDependenceEdgeForStaticExpression) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * inObject,
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
    categoryMethodSignature_expressionAST_addDependenceEdgeForStaticExpression f = NULL ;
    if (classIndex < gCategoryMethodTable_expressionAST_addDependenceEdgeForStaticExpression.count ()) {
      f = gCategoryMethodTable_expressionAST_addDependenceEdgeForStaticExpression (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_expressionAST_addDependenceEdgeForStaticExpression.count ()) {
           f = gCategoryMethodTable_expressionAST_addDependenceEdgeForStaticExpression (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_expressionAST_addDependenceEdgeForStaticExpression.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
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
//                   Category method '@controlRegisterDeclarationListAST noteTypesInPrecedenceGraph'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_noteTypesInPrecedenceGraph (const GALGAS_controlRegisterDeclarationListAST inObject,
                                                GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                C_Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_controlRegisterDeclarationListAST temp_0 = inObject ;
  cEnumerator_controlRegisterDeclarationListAST enumerator_5397 (temp_0, kEnumeration_up) ;
  while (enumerator_5397.hasCurrentObject ()) {
    GALGAS_lstring var_typeName = GALGAS_lstring::constructor_new (GALGAS_string ("$").add_operation (enumerator_5397.current_mRegisterTypeName (HERE).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 141)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 141)), enumerator_5397.current_mRegisterTypeName (HERE).mAttribute_location  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 141)) ;
    {
    ioArgument_ioGraph.setter_noteNode (var_typeName COMMA_SOURCE_FILE ("declaration-control-register.galgas", 142)) ;
    }
    enumerator_5397.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Category method '@taskList noteTypesInPrecedenceGraph'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_noteTypesInPrecedenceGraph (const GALGAS_taskList inObject,
                                                GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                C_Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_taskList temp_0 = inObject ;
  cEnumerator_taskList enumerator_2991 (temp_0, kEnumeration_up) ;
  while (enumerator_2991.hasCurrentObject ()) {
    cEnumerator_taskVarListAST enumerator_3023 (enumerator_2991.current_mVarList (HERE), kEnumeration_up) ;
    while (enumerator_3023.hasCurrentObject ()) {
      callCategoryMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) enumerator_3023.current (HERE).mAttribute_mVarInitExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 85)) ;
      const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, enumerator_3023.current (HERE).mAttribute_mVarTypeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_1) {
        GALGAS_lstring var_typeName = GALGAS_lstring::constructor_new (GALGAS_string ("$").add_operation (enumerator_3023.current (HERE).mAttribute_mVarTypeName.getter_string (SOURCE_FILE ("declaration-task.galgas", 87)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 87)), enumerator_3023.current (HERE).mAttribute_mVarTypeName.mAttribute_location  COMMA_SOURCE_FILE ("declaration-task.galgas", 87)) ;
        {
        ioArgument_ioGraph.setter_noteNode (var_typeName COMMA_SOURCE_FILE ("declaration-task.galgas", 88)) ;
        }
      }
      enumerator_3023.gotoNextObject () ;
    }
    cEnumerator_procedureDeclarationListAST enumerator_3349 (enumerator_2991.current_mTaskProcList (HERE), kEnumeration_up) ;
    while (enumerator_3349.hasCurrentObject ()) {
      categoryMethod_noteInstructionListTypesInPrecedenceGraph (enumerator_3349.current (HERE).mAttribute_mProcedureInstructionList, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 92)) ;
      enumerator_3349.gotoNextObject () ;
    }
    enumerator_2991.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Category method '@taskList enterInContext'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_enterInContext (const GALGAS_taskList inObject,
                                    GALGAS_semanticContext & ioArgument_ioContext,
                                    GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                    C_Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_taskList temp_0 = inObject ;
  cEnumerator_taskList enumerator_4574 (temp_0, kEnumeration_up) ;
  while (enumerator_4574.hasCurrentObject ()) {
    GALGAS_propertyList var_propertyList = GALGAS_propertyList::constructor_emptyList (SOURCE_FILE ("declaration-task.galgas", 122)) ;
    GALGAS_propertyMap var_propertyMap = GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("declaration-task.galgas", 123)) ;
    GALGAS_operandIRList var_initialValueList = GALGAS_operandIRList::constructor_emptyList (SOURCE_FILE ("declaration-task.galgas", 124)) ;
    cEnumerator_taskVarListAST enumerator_4744 (enumerator_4574.current (HERE).mAttribute_mVarList, kEnumeration_up) ;
    while (enumerator_4744.hasCurrentObject ()) {
      categoryMethod_enterInContext (enumerator_4744.current (HERE), ioArgument_ioContext, ioArgument_ioGlobalLiteralStringMap, var_propertyList, var_propertyMap, var_initialValueList, inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 126)) ;
      enumerator_4744.gotoNextObject () ;
    }
    {
    ioArgument_ioContext.mAttribute_mTypeMap.setter_insertKey (enumerator_4574.current (HERE).mAttribute_mTaskName, GALGAS_string ("%$").add_operation (enumerator_4574.current (HERE).mAttribute_mTaskName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 137)), GALGAS_typeKind::constructor_structure (var_propertyMap, var_propertyList  COMMA_SOURCE_FILE ("declaration-task.galgas", 138)), GALGAS_typedConstantMap::constructor_emptyMap (SOURCE_FILE ("declaration-task.galgas", 139)), GALGAS_functionMap::constructor_emptyMap (SOURCE_FILE ("declaration-task.galgas", 140)), GALGAS_bool (false), GALGAS_bool (false), GALGAS_bool (false), GALGAS_bool (false), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-task.galgas", 145)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 135)) ;
    }
    ioArgument_ioContext.mAttribute_mGlobalTaskVariableList.addAssign_operation (enumerator_4574.current (HERE).mAttribute_mTaskName.mAttribute_string, enumerator_4574.current (HERE).mAttribute_mTaskName.mAttribute_string, GALGAS_valueIR::constructor_llvmStructureConstant (var_initialValueList  COMMA_SOURCE_FILE ("declaration-task.galgas", 147))  COMMA_SOURCE_FILE ("declaration-task.galgas", 147)) ;
    categoryMethod_enterInContext (enumerator_4574.current (HERE).mAttribute_mTaskProcList, GALGAS_string ("$").add_operation (enumerator_4574.current (HERE).mAttribute_mTaskName.getter_string (SOURCE_FILE ("declaration-task.galgas", 149)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 149)), ioArgument_ioContext, inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 149)) ;
    GALGAS_taskProcedureMap var_taskProcedureMap = GALGAS_taskProcedureMap::constructor_emptyMap (SOURCE_FILE ("declaration-task.galgas", 150)) ;
    cEnumerator_procedureDeclarationListAST enumerator_5730 (enumerator_4574.current (HERE).mAttribute_mTaskProcList, kEnumeration_up) ;
    while (enumerator_5730.hasCurrentObject ()) {
      {
      var_taskProcedureMap.setter_insertKey (enumerator_5730.current (HERE).mAttribute_mProcedureName, inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 152)) ;
      }
      enumerator_5730.gotoNextObject () ;
    }
    const enumGalgasBool test_1 = var_taskProcedureMap.getter_hasKey (GALGAS_string ("setup") COMMA_SOURCE_FILE ("declaration-task.galgas", 154)).operator_not (SOURCE_FILE ("declaration-task.galgas", 154)).boolEnum () ;
    if (kBoolTrue == test_1) {
      inCompiler->emitSemanticError (enumerator_4574.current (HERE).mAttribute_mEndOfTaskDeclaration, GALGAS_string ("a task should declare an 'setup' procedure")  COMMA_SOURCE_FILE ("declaration-task.galgas", 155)) ;
    }
    const enumGalgasBool test_2 = var_taskProcedureMap.getter_hasKey (GALGAS_string ("loop") COMMA_SOURCE_FILE ("declaration-task.galgas", 157)).operator_not (SOURCE_FILE ("declaration-task.galgas", 157)).boolEnum () ;
    if (kBoolTrue == test_2) {
      inCompiler->emitSemanticError (enumerator_4574.current (HERE).mAttribute_mEndOfTaskDeclaration, GALGAS_string ("a task should declare an 'loop' procedure")  COMMA_SOURCE_FILE ("declaration-task.galgas", 158)) ;
    }
    {
    ioArgument_ioContext.mAttribute_mTaskMap.setter_insertKey (enumerator_4574.current (HERE).mAttribute_mTaskName, var_taskProcedureMap, inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 160)) ;
    }
    enumerator_4574.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Category method '@taskList semanticAnalysis'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_semanticAnalysis (const GALGAS_taskList inObject,
                                      const GALGAS_semanticContext constinArgument_inContext,
                                      GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                      GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                      C_Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringset var_prioritySet = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("declaration-task.galgas", 226)) ;
  const GALGAS_taskList temp_0 = inObject ;
  cEnumerator_taskList enumerator_8829 (temp_0, kEnumeration_up) ;
  while (enumerator_8829.hasCurrentObject ()) {
    categoryMethod_semanticAnalysis (enumerator_8829.current (HERE), constinArgument_inContext, ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 228)) ;
    GALGAS_string var_priorityString = enumerator_8829.current (HERE).mAttribute_mPriority.mAttribute_bigint.getter_string (SOURCE_FILE ("declaration-task.galgas", 233)) ;
    const enumGalgasBool test_1 = var_prioritySet.getter_hasKey (var_priorityString COMMA_SOURCE_FILE ("declaration-task.galgas", 234)).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_location location_2 (enumerator_8829.current (HERE).mAttribute_mPriority.getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_2, GALGAS_string ("duplicate priority")  COMMA_SOURCE_FILE ("declaration-task.galgas", 235)) ;
    }
    var_prioritySet.addAssign_operation (var_priorityString  COMMA_SOURCE_FILE ("declaration-task.galgas", 237)) ;
    enumerator_8829.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Category method '@taskMapIR generateCode'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_generateCode (const GALGAS_taskMapIR inObject,
                                  GALGAS_string & ioArgument_ioLLVMcode,
                                  const GALGAS_generationContext constinArgument_inGenerationContext,
                                  GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                  C_Compiler * inCompiler
                                  COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("Task variables"), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 313)), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 313)) ;
  cEnumerator_globalTaskVariableList enumerator_11857 (constinArgument_inGenerationContext.mAttribute_mGlobalTaskVariableList, kEnumeration_up) ;
  while (enumerator_11857.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("@").add_operation (GALGAS_string ("task.var."), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 315)).add_operation (enumerator_11857.current_mTaskName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 315)), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 315)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" = internal global %$"), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 316)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(enumerator_11857.current_mTaskTypeName (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 317)), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 317)) ;
    GALGAS_string var_initialString = extensionGetter_llvmName (enumerator_11857.current_mInitialValue (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 318)) ;
    const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_initialString.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("zeroinitializer"), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 320)) ;
    }else if (kBoolFalse == test_0) {
      ioArgument_ioLLVMcode.plusAssign_operation(var_initialString, inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 322)) ;
    }
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 324)) ;
    enumerator_11857.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 326)) ;
  GALGAS_taskListIR var_orderedTaskList = GALGAS_taskListIR::constructor_emptySortedList (SOURCE_FILE ("declaration-task.galgas", 328)) ;
  const GALGAS_taskMapIR temp_1 = inObject ;
  cEnumerator_taskMapIR enumerator_12289 (temp_1, kEnumeration_up) ;
  while (enumerator_12289.hasCurrentObject ()) {
    var_orderedTaskList.addAssign_operation (enumerator_12289.current (HERE).mAttribute_lkey.mAttribute_string, enumerator_12289.current (HERE).mAttribute_mPriority, enumerator_12289.current (HERE).mAttribute_mStackSize  COMMA_SOURCE_FILE ("declaration-task.galgas", 330)) ;
    enumerator_12289.gotoNextObject () ;
  }
  cEnumerator_taskListIR enumerator_12444 (var_orderedTaskList, kEnumeration_up) ;
  while (enumerator_12444.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("Task ").add_operation (enumerator_12444.current (HERE).mAttribute_mTaskName, inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 334)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 334)), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 334)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(function_stackNameForTask (enumerator_12444.current (HERE).mAttribute_mTaskName, inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 335)).add_operation (GALGAS_string (" = global ["), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 335)).add_operation (enumerator_12444.current (HERE).mAttribute_mStackSize.divide_operation (GALGAS_uint ((uint32_t) 4U).getter_bigint (SOURCE_FILE ("declaration-task.galgas", 335)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 335)).getter_string (SOURCE_FILE ("declaration-task.galgas", 335)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 335)).add_operation (GALGAS_string (" x i32] zeroinitializer\n"), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 335)), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 335)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 336)) ;
    GALGAS_string var_argument = GALGAS_string ("(%$").add_operation (enumerator_12444.current (HERE).mAttribute_mTaskName, inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 337)).add_operation (GALGAS_string ("* @task.var."), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 337)).add_operation (enumerator_12444.current (HERE).mAttribute_mTaskName, inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 337)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 337)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(function_llvmSeparatorLine (inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 338)), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 338)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 339)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal void ").add_operation (function_mainRoutineNameForTask (enumerator_12444.current (HERE).mAttribute_mTaskName, inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 340)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 340)).add_operation (GALGAS_string (" () nounwind noreturn naked {\n"), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 340)), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 340)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @").add_operation (function_llvmNameForProcedure (GALGAS_string ("$").add_operation (enumerator_12444.current (HERE).mAttribute_mTaskName, inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 341)).add_operation (GALGAS_string (".setup"), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 341)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 341)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 341)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 341)).add_operation (var_argument, inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 341)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 341)), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 341)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %loop\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 342)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("loop:\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 343)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @").add_operation (function_llvmNameForProcedure (GALGAS_string ("$").add_operation (enumerator_12444.current (HERE).mAttribute_mTaskName, inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 344)).add_operation (GALGAS_string (".loop"), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 344)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 344)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 344)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 344)).add_operation (var_argument, inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 344)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 344)), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 344)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %loop\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 345)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
      "\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 346)) ;
    enumerator_12444.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("Start tasks"), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 349)), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 349)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal void @start.tasks () nounwind {\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 350)) ;
  cEnumerator_taskListIR enumerator_13455 (var_orderedTaskList, kEnumeration_up) ;
  GALGAS_uint index_13431 ((uint32_t) 0) ;
  while (enumerator_13455.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (function_stackAddressForTask (enumerator_13455.current (HERE).mAttribute_mTaskName, inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 352)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 352)), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 352)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" = getelementptr inbounds [").add_operation (enumerator_13455.current (HERE).mAttribute_mStackSize.divide_operation (GALGAS_uint ((uint32_t) 4U).getter_bigint (SOURCE_FILE ("declaration-task.galgas", 353)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 353)).getter_string (SOURCE_FILE ("declaration-task.galgas", 353)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 353)).add_operation (GALGAS_string (" x i32], "), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 353)), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 353)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("[").add_operation (enumerator_13455.current (HERE).mAttribute_mStackSize.divide_operation (GALGAS_uint ((uint32_t) 4U).getter_bigint (SOURCE_FILE ("declaration-task.galgas", 354)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 354)).getter_string (SOURCE_FILE ("declaration-task.galgas", 354)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 354)).add_operation (GALGAS_string (" x i32]* "), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 354)).add_operation (function_stackNameForTask (enumerator_13455.current (HERE).mAttribute_mTaskName, inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 354)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 354)), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 354)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", i32 0, i32 0\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 355)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @kernel_create_task ("), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 356)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("i32 ").add_operation (index_13431.getter_string (SOURCE_FILE ("declaration-task.galgas", 357)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 357)), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 357)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", i32* ").add_operation (function_stackAddressForTask (enumerator_13455.current (HERE).mAttribute_mTaskName, inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 358)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 358)), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 358)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", i32 ").add_operation (enumerator_13455.current (HERE).mAttribute_mStackSize.getter_string (SOURCE_FILE ("declaration-task.galgas", 359)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 359)), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 359)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", void ()* ").add_operation (function_mainRoutineNameForTask (enumerator_13455.current (HERE).mAttribute_mTaskName, inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 360)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 360)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 360)), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 360)) ;
    enumerator_13455.gotoNextObject () ;
    index_13431.increment_operation (inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 351)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 362)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 363)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Category method '@exceptionClauseListAST noteTypesInPrecedenceGraph'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_noteTypesInPrecedenceGraph (const GALGAS_exceptionClauseListAST inObject,
                                                GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                C_Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_exceptionClauseListAST temp_0 = inObject ;
  cEnumerator_exceptionClauseListAST enumerator_2718 (temp_0, kEnumeration_up) ;
  while (enumerator_2718.hasCurrentObject ()) {
    categoryMethod_noteInstructionListTypesInPrecedenceGraph (enumerator_2718.current_mExceptionInstructionList (HERE), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("panic.galgas", 69)) ;
    enumerator_2718.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Category method '@bootList noteTypesInPrecedenceGraph'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_noteTypesInPrecedenceGraph (const GALGAS_bootList inObject,
                                                GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                C_Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_bootList temp_0 = inObject ;
  cEnumerator_bootList enumerator_2020 (temp_0, kEnumeration_up) ;
  while (enumerator_2020.hasCurrentObject ()) {
    categoryMethod_noteInstructionListTypesInPrecedenceGraph (enumerator_2020.current_mInstructionList (HERE), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-boot.galgas", 49)) ;
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
//                               Category method '@initList noteTypesInPrecedenceGraph'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_noteTypesInPrecedenceGraph (const GALGAS_initList inObject,
                                                GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                C_Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_initList temp_0 = inObject ;
  cEnumerator_initList enumerator_2459 (temp_0, kEnumeration_up) ;
  while (enumerator_2459.hasCurrentObject ()) {
    categoryMethod_noteInstructionListTypesInPrecedenceGraph (enumerator_2459.current_mInstructionList (HERE), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 65)) ;
    enumerator_2459.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Category method '@initListIR generateLLVMinitCode'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_generateLLVMinitCode (const GALGAS_initListIR inObject,
                                          GALGAS_string & ioArgument_ioLLVMcode,
                                          const GALGAS_routineMapIR constinArgument_inProcedureMapIR,
                                          const GALGAS_generationContext constinArgument_inGenerationContext,
                                          GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                          C_Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("Init"), inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 174)), inCompiler  COMMA_SOURCE_FILE ("declaration-init.galgas", 174)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal void @init () nounwind {\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-init.galgas", 175)) ;
  const GALGAS_initListIR temp_0 = inObject ;
  cEnumerator_initListIR enumerator_7163 (temp_0, kEnumeration_up) ;
  while (enumerator_7163.hasCurrentObject ()) {
    GALGAS_bool var_generate ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_7163.current (HERE).mAttribute_mInitRequiredByProcList.getter_length (SOURCE_FILE ("declaration-init.galgas", 178)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_1) {
      var_generate = GALGAS_bool (true) ;
    }else if (kBoolFalse == test_1) {
      var_generate = GALGAS_bool (false) ;
      cEnumerator_initRequiredByProcList enumerator_7350 (enumerator_7163.current (HERE).mAttribute_mInitRequiredByProcList, kEnumeration_up) ;
      bool bool_2 = var_generate.operator_not (SOURCE_FILE ("declaration-init.galgas", 182)).isValidAndTrue () ;
      if (enumerator_7350.hasCurrentObject () && bool_2) {
        while (enumerator_7350.hasCurrentObject () && bool_2) {
          var_generate = constinArgument_inProcedureMapIR.getter_hasKey (GALGAS_string (".").add_operation (enumerator_7350.current_mProcName (HERE).mAttribute_string, inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 183)) COMMA_SOURCE_FILE ("declaration-init.galgas", 183)) ;
          enumerator_7350.gotoNextObject () ;
          if (enumerator_7350.hasCurrentObject ()) {
            bool_2 = var_generate.operator_not (SOURCE_FILE ("declaration-init.galgas", 182)).isValidAndTrue () ;
          }
        }
      }
    }
    const enumGalgasBool test_3 = var_generate.boolEnum () ;
    if (kBoolTrue == test_3) {
      categoryMethod_instructionListLLVMCode (enumerator_7163.current (HERE).mAttribute_mInstructionListIR, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 187)) ;
    }
    enumerator_7163.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-init.galgas", 190)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-init.galgas", 191)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Category Getter '@procFormalArgumentPassingMode requiredActualPassingModeForSelector'                *
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
    result_outResult.plusAssign_operation(inArgument_inSelector.add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("declaration-proc.galgas", 29)), inCompiler  COMMA_SOURCE_FILE ("declaration-proc.galgas", 29)) ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Category method '@procedureDeclarationListAST procedureSemanticAnalysis'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_procedureSemanticAnalysis (const GALGAS_procedureDeclarationListAST inObject,
                                               GALGAS_unifiedTypeMap_2D_proxy inArgument_inReceiverType,
                                               const GALGAS_semanticContext constinArgument_inSemanticContext,
                                               GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                               GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_procedureDeclarationListAST temp_0 = inObject ;
  cEnumerator_procedureDeclarationListAST enumerator_5472 (temp_0, kEnumeration_up) ;
  while (enumerator_5472.hasCurrentObject ()) {
    GALGAS_bool var_warnIfUnused = GALGAS_bool (true) ;
    GALGAS_bool var_globalProcedure = GALGAS_bool (false) ;
    GALGAS_bool var_weakProcedure = GALGAS_bool (false) ;
    GALGAS_bool var_nullOnNoException = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_5656 (enumerator_5472.current (HERE).mAttribute_mProcedureAttributeList, kEnumeration_up) ;
    while (enumerator_5656.hasCurrentObject ()) {
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_5656.current_mValue (HERE).mAttribute_string.objectCompare (function_noWarningIfUnusedAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-proc.galgas", 161)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        const enumGalgasBool test_2 = var_warnIfUnused.operator_not (SOURCE_FILE ("declaration-proc.galgas", 162)).boolEnum () ;
        if (kBoolTrue == test_2) {
          GALGAS_location location_3 (enumerator_5656.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
          inCompiler->emitSemanticError (location_3, GALGAS_string ("duplicate @").add_operation (function_noWarningIfUnusedAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-proc.galgas", 163)), inCompiler COMMA_SOURCE_FILE ("declaration-proc.galgas", 163)).add_operation (GALGAS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("declaration-proc.galgas", 163))  COMMA_SOURCE_FILE ("declaration-proc.galgas", 163)) ;
        }
        var_warnIfUnused = GALGAS_bool (false) ;
      }else if (kBoolFalse == test_1) {
        const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, enumerator_5656.current_mValue (HERE).mAttribute_string.objectCompare (function_globalAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-proc.galgas", 166)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          const enumGalgasBool test_5 = var_globalProcedure.boolEnum () ;
          if (kBoolTrue == test_5) {
            GALGAS_location location_6 (enumerator_5656.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
            inCompiler->emitSemanticError (location_6, GALGAS_string ("duplicate @").add_operation (function_globalAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-proc.galgas", 168)), inCompiler COMMA_SOURCE_FILE ("declaration-proc.galgas", 168)).add_operation (GALGAS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("declaration-proc.galgas", 168))  COMMA_SOURCE_FILE ("declaration-proc.galgas", 168)) ;
          }
          var_globalProcedure = GALGAS_bool (true) ;
        }else if (kBoolFalse == test_4) {
          const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, enumerator_5656.current_mValue (HERE).mAttribute_string.objectCompare (function_weakAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-proc.galgas", 171)))).boolEnum () ;
          if (kBoolTrue == test_7) {
            const enumGalgasBool test_8 = var_weakProcedure.boolEnum () ;
            if (kBoolTrue == test_8) {
              GALGAS_location location_9 (enumerator_5656.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
              inCompiler->emitSemanticError (location_9, GALGAS_string ("duplicate @").add_operation (function_weakAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-proc.galgas", 173)), inCompiler COMMA_SOURCE_FILE ("declaration-proc.galgas", 173)).add_operation (GALGAS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("declaration-proc.galgas", 173))  COMMA_SOURCE_FILE ("declaration-proc.galgas", 173)) ;
            }
            var_weakProcedure = GALGAS_bool (true) ;
          }else if (kBoolFalse == test_7) {
            const enumGalgasBool test_10 = GALGAS_bool (kIsEqual, enumerator_5656.current_mValue (HERE).mAttribute_string.objectCompare (function_nullWhenPanicDisabledAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-proc.galgas", 176)))).boolEnum () ;
            if (kBoolTrue == test_10) {
              const enumGalgasBool test_11 = var_nullOnNoException.boolEnum () ;
              if (kBoolTrue == test_11) {
                GALGAS_location location_12 (enumerator_5656.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
                inCompiler->emitSemanticError (location_12, GALGAS_string ("duplicate @").add_operation (function_nullWhenPanicDisabledAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-proc.galgas", 178)), inCompiler COMMA_SOURCE_FILE ("declaration-proc.galgas", 178)).add_operation (GALGAS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("declaration-proc.galgas", 178))  COMMA_SOURCE_FILE ("declaration-proc.galgas", 178)) ;
              }
              var_nullOnNoException = GALGAS_bool (true) ;
            }else if (kBoolFalse == test_10) {
              GALGAS_location location_13 (enumerator_5656.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
              inCompiler->emitSemanticError (location_13, GALGAS_string ("unknown attribute; available attributes are @").add_operation (function_noWarningIfUnusedAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-proc.galgas", 183)), inCompiler COMMA_SOURCE_FILE ("declaration-proc.galgas", 182)).add_operation (GALGAS_string (", @"), inCompiler COMMA_SOURCE_FILE ("declaration-proc.galgas", 183)).add_operation (function_weakAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-proc.galgas", 183)), inCompiler COMMA_SOURCE_FILE ("declaration-proc.galgas", 183)).add_operation (GALGAS_string (", @"), inCompiler COMMA_SOURCE_FILE ("declaration-proc.galgas", 183)).add_operation (function_globalAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-proc.galgas", 183)), inCompiler COMMA_SOURCE_FILE ("declaration-proc.galgas", 183))  COMMA_SOURCE_FILE ("declaration-proc.galgas", 182)) ;
            }
          }
        }
      }
      enumerator_5656.gotoNextObject () ;
    }
    {
    routine_routineSemanticAnalysis (inArgument_inReceiverType, GALGAS_routineKind::constructor_procedure (SOURCE_FILE ("declaration-proc.galgas", 188)), enumerator_5472.current (HERE).mAttribute_mProcedureModeList, enumerator_5472.current (HERE).mAttribute_mProcedureName, enumerator_5472.current (HERE).mAttribute_mProcedureFormalArgumentList, enumerator_5472.current (HERE).mAttribute_mProcedureInstructionList, enumerator_5472.current (HERE).mAttribute_mEndOfProcedureDeclaration, var_warnIfUnused, var_globalProcedure, var_weakProcedure, var_nullOnNoException, GALGAS_accessKind::constructor_readWriteAccess (SOURCE_FILE ("declaration-proc.galgas", 198)), constinArgument_inSemanticContext, ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct, inCompiler  COMMA_SOURCE_FILE ("declaration-proc.galgas", 186)) ;
    }
    enumerator_5472.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Category method '@functionDeclarationListAST noteTypesInPrecedenceGraph'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_noteTypesInPrecedenceGraph (const GALGAS_functionDeclarationListAST inObject,
                                                GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                C_Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_functionDeclarationListAST temp_0 = inObject ;
  cEnumerator_functionDeclarationListAST enumerator_3287 (temp_0, kEnumeration_up) ;
  while (enumerator_3287.hasCurrentObject ()) {
    cEnumerator_funcFormalArgumentList enumerator_3354 (enumerator_3287.current_mFuncFormalArgumentList (HERE), kEnumeration_up) ;
    while (enumerator_3354.hasCurrentObject ()) {
      GALGAS_lstring var_typeName = GALGAS_lstring::constructor_new (GALGAS_string ("$").add_operation (enumerator_3354.current_mFormalArgumentTypeName (HERE).getter_string (SOURCE_FILE ("declaration-func.galgas", 92)), inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 92)), enumerator_3354.current_mFormalArgumentTypeName (HERE).mAttribute_location  COMMA_SOURCE_FILE ("declaration-func.galgas", 92)) ;
      {
      ioArgument_ioGraph.setter_noteNode (var_typeName COMMA_SOURCE_FILE ("declaration-func.galgas", 93)) ;
      }
      enumerator_3354.gotoNextObject () ;
    }
    GALGAS_lstring var_resultTypeName = GALGAS_lstring::constructor_new (GALGAS_string ("$").add_operation (enumerator_3287.current_mResultTypeName (HERE).getter_string (SOURCE_FILE ("declaration-func.galgas", 95)), inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 95)), enumerator_3287.current_mResultTypeName (HERE).mAttribute_location  COMMA_SOURCE_FILE ("declaration-func.galgas", 95)) ;
    {
    ioArgument_ioGraph.setter_noteNode (var_resultTypeName COMMA_SOURCE_FILE ("declaration-func.galgas", 96)) ;
    }
    categoryMethod_noteInstructionListTypesInPrecedenceGraph (enumerator_3287.current_mInstructionList (HERE), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 97)) ;
    enumerator_3287.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Category method '@functionDeclarationListAST enterInContext'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_enterInContext (const GALGAS_functionDeclarationListAST inObject,
                                    GALGAS_semanticContext & ioArgument_ioContext,
                                    C_Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_functionDeclarationListAST temp_0 = inObject ;
  cEnumerator_functionDeclarationListAST enumerator_4765 (temp_0, kEnumeration_up) ;
  while (enumerator_4765.hasCurrentObject ()) {
    GALGAS_funcSignature var_signature = GALGAS_funcSignature::constructor_emptyList (SOURCE_FILE ("declaration-func.galgas", 125)) ;
    cEnumerator_funcFormalArgumentList enumerator_4890 (enumerator_4765.current_mFuncFormalArgumentList (HERE), kEnumeration_up) ;
    while (enumerator_4890.hasCurrentObject ()) {
      GALGAS_unifiedTypeMap_2D_proxy var_typeProxy = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.mAttribute_mTypeMap, enumerator_4890.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("declaration-func.galgas", 127)) ;
      var_signature.addAssign_operation (enumerator_4890.current_mSelector (HERE), var_typeProxy  COMMA_SOURCE_FILE ("declaration-func.galgas", 128)) ;
      enumerator_4890.gotoNextObject () ;
    }
    GALGAS_modeMap var_functionModeMap = GALGAS_modeMap::constructor_emptyMap (SOURCE_FILE ("declaration-func.galgas", 131)) ;
    cEnumerator_lstringlist enumerator_5123 (enumerator_4765.current_mFunctionModeList (HERE), kEnumeration_up) ;
    while (enumerator_5123.hasCurrentObject ()) {
      {
      var_functionModeMap.setter_insertKey (enumerator_5123.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 133)) ;
      }
      enumerator_5123.gotoNextObject () ;
    }
    GALGAS_unifiedTypeMap_2D_proxy var_resultType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.mAttribute_mTypeMap, enumerator_4765.current_mResultTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("declaration-func.galgas", 136)) ;
    {
    ioArgument_ioContext.mAttribute_mFunctionMap.setter_insertKey (enumerator_4765.current_mFunctionName (HERE), var_functionModeMap, var_signature, var_resultType, inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 138)) ;
    }
    enumerator_4765.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Category method '@externProcedureDeclarationListAST noteTypesInPrecedenceGraph'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_noteTypesInPrecedenceGraph (const GALGAS_externProcedureDeclarationListAST inObject,
                                                GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                C_Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_externProcedureDeclarationListAST temp_0 = inObject ;
  cEnumerator_externProcedureDeclarationListAST enumerator_2011 (temp_0, kEnumeration_up) ;
  while (enumerator_2011.hasCurrentObject ()) {
    cEnumerator_procFormalArgumentList enumerator_2080 (enumerator_2011.current_mProcFormalArgumentList (HERE), kEnumeration_up) ;
    while (enumerator_2080.hasCurrentObject ()) {
      GALGAS_lstring var_typeName = GALGAS_lstring::constructor_new (GALGAS_string ("$").add_operation (enumerator_2080.current_mFormalArgumentTypeName (HERE).getter_string (SOURCE_FILE ("declaration-extern-proc.galgas", 41)), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 41)), enumerator_2080.current_mFormalArgumentTypeName (HERE).mAttribute_location  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 41)) ;
      {
      ioArgument_ioGraph.setter_noteNode (var_typeName COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 42)) ;
      }
      enumerator_2080.gotoNextObject () ;
    }
    enumerator_2011.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Category method '@externProcedureDeclarationListAST enterExternProcInContext'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_enterExternProcInContext (const GALGAS_externProcedureDeclarationListAST inObject,
                                              GALGAS_semanticContext & ioArgument_ioContext,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_externProcedureDeclarationListAST temp_0 = inObject ;
  cEnumerator_externProcedureDeclarationListAST enumerator_2738 (temp_0, kEnumeration_up) ;
  while (enumerator_2738.hasCurrentObject ()) {
    categoryMethod_enterExternProcInContext (enumerator_2738.current (HERE), ioArgument_ioContext, inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 55)) ;
    enumerator_2738.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Category method '@externProcedureDeclarationListAST externProcedureSemanticAnalysis'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_externProcedureSemanticAnalysis (const GALGAS_externProcedureDeclarationListAST inObject,
                                                     const GALGAS_semanticContext constinArgument_inContext,
                                                     GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                     GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_externProcedureDeclarationListAST temp_0 = inObject ;
  cEnumerator_externProcedureDeclarationListAST enumerator_4400 (temp_0, kEnumeration_up) ;
  while (enumerator_4400.hasCurrentObject ()) {
    categoryMethod_externProcedureSemanticAnalysis (enumerator_4400.current (HERE), constinArgument_inContext, ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 95)) ;
    enumerator_4400.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Category method '@externProcedureMapIR llvmPrototypeGeneration'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_llvmPrototypeGeneration (const GALGAS_externProcedureMapIR inObject,
                                             GALGAS_string & ioArgument_ioLLVMcode,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_externProcedureMapIR temp_0 = inObject ;
  cEnumerator_externProcedureMapIR enumerator_6890 (temp_0, kEnumeration_up) ;
  while (enumerator_6890.hasCurrentObject ()) {
    categoryMethod_llvmPrototypeGeneration (enumerator_6890.current (HERE), ioArgument_ioLLVMcode, inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 159)) ;
    enumerator_6890.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Category method '@sectionDeclarationListAST sectionSemanticAnalysis'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_sectionSemanticAnalysis (const GALGAS_sectionDeclarationListAST inObject,
                                             const GALGAS_semanticContext constinArgument_inSemanticContext,
                                             GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                             GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_sectionDeclarationListAST temp_0 = inObject ;
  cEnumerator_sectionDeclarationListAST enumerator_3055 (temp_0, kEnumeration_up) ;
  while (enumerator_3055.hasCurrentObject ()) {
    {
    GALGAS_lstringlist temp_1 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("declaration-section.galgas", 73)) ;
    temp_1.addAssign_operation (GALGAS_lstring::constructor_new (function_sectionModeName (inCompiler COMMA_SOURCE_FILE ("declaration-section.galgas", 73)), enumerator_3055.current (HERE).mAttribute_mSectionName.mAttribute_location  COMMA_SOURCE_FILE ("declaration-section.galgas", 73))  COMMA_SOURCE_FILE ("declaration-section.galgas", 73)) ;
    routine_routineSemanticAnalysis (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-section.galgas", 71)), GALGAS_routineKind::constructor_section (SOURCE_FILE ("declaration-section.galgas", 72)), temp_1, enumerator_3055.current (HERE).mAttribute_mSectionName, enumerator_3055.current (HERE).mAttribute_mSectionFormalArgumentList, enumerator_3055.current (HERE).mAttribute_mSectionInstructionList, enumerator_3055.current (HERE).mAttribute_mEndOfSectionLocation, GALGAS_bool (true), GALGAS_bool (true), GALGAS_bool (false), GALGAS_bool (false), GALGAS_accessKind::constructor_readWriteAccess (SOURCE_FILE ("declaration-section.galgas", 82)), constinArgument_inSemanticContext, ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct, inCompiler  COMMA_SOURCE_FILE ("declaration-section.galgas", 70)) ;
    }
    enumerator_3055.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Category method '@serviceDeclarationListAST serviceSemanticAnalysis'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_serviceSemanticAnalysis (const GALGAS_serviceDeclarationListAST inObject,
                                             GALGAS_unifiedTypeMap_2D_proxy inArgument_inReceiverType,
                                             const GALGAS_semanticContext constinArgument_inSemanticContext,
                                             GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                             GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_serviceDeclarationListAST temp_0 = inObject ;
  cEnumerator_serviceDeclarationListAST enumerator_2542 (temp_0, kEnumeration_up) ;
  while (enumerator_2542.hasCurrentObject ()) {
    GALGAS_bool var_warnIfUnused = GALGAS_bool (true) ;
    cEnumerator_lstringlist enumerator_2626 (enumerator_2542.current (HERE).mAttribute_mServiceAttributeList, kEnumeration_up) ;
    while (enumerator_2626.hasCurrentObject ()) {
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_2626.current_mValue (HERE).mAttribute_string.objectCompare (function_noWarningIfUnusedAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 63)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        const enumGalgasBool test_2 = var_warnIfUnused.operator_not (SOURCE_FILE ("declaration-service.galgas", 64)).boolEnum () ;
        if (kBoolTrue == test_2) {
          GALGAS_location location_3 (enumerator_2626.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
          inCompiler->emitSemanticError (location_3, GALGAS_string ("duplicate @").add_operation (function_noWarningIfUnusedAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 65)), inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 65)).add_operation (GALGAS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 65))  COMMA_SOURCE_FILE ("declaration-service.galgas", 65)) ;
        }
        var_warnIfUnused = GALGAS_bool (false) ;
      }else if (kBoolFalse == test_1) {
        GALGAS_location location_4 (enumerator_2626.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_4, GALGAS_string ("unknown attribute; available attribute is @").add_operation (function_noWarningIfUnusedAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 69)), inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 69))  COMMA_SOURCE_FILE ("declaration-service.galgas", 69)) ;
      }
      enumerator_2626.gotoNextObject () ;
    }
    {
    GALGAS_lstringlist temp_5 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("declaration-service.galgas", 75)) ;
    temp_5.addAssign_operation (enumerator_2542.current (HERE).mAttribute_mServiceMode  COMMA_SOURCE_FILE ("declaration-service.galgas", 75)) ;
    routine_routineSemanticAnalysis (inArgument_inReceiverType, GALGAS_routineKind::constructor_service (SOURCE_FILE ("declaration-service.galgas", 74)), temp_5, enumerator_2542.current (HERE).mAttribute_mServiceName, enumerator_2542.current (HERE).mAttribute_mServiceFormalArgumentList, enumerator_2542.current (HERE).mAttribute_mServiceInstructionList, enumerator_2542.current (HERE).mAttribute_mEndOfServiceLocation, var_warnIfUnused, GALGAS_bool (true), GALGAS_bool (false), GALGAS_bool (false), GALGAS_accessKind::constructor_readWriteAccess (SOURCE_FILE ("declaration-service.galgas", 84)), constinArgument_inSemanticContext, ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct, inCompiler  COMMA_SOURCE_FILE ("declaration-service.galgas", 72)) ;
    }
    enumerator_2542.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Category method '@routineMapIR serviceCodeGeneration'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_serviceCodeGeneration (const GALGAS_routineMapIR inObject,
                                           const GALGAS_string constinArgument_inCurrentDirectory,
                                           const GALGAS_string constinArgument_inTargetName,
                                           GALGAS_string & ioArgument_ioLLVMcode,
                                           GALGAS_string & ioArgument_ioAssemblerCode,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_idx = GALGAS_uint ((uint32_t) 0U) ;
  const GALGAS_routineMapIR temp_0 = inObject ;
  cEnumerator_routineMapIR enumerator_4127 (temp_0, kEnumeration_up) ;
  while (enumerator_4127.hasCurrentObject ()) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_4127.current (HERE).mAttribute_mKind.objectCompare (GALGAS_routineKind::constructor_service (SOURCE_FILE ("declaration-service.galgas", 105)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_string var_name = function_llvmNameForServiceCall (enumerator_4127.current (HERE).mAttribute_lkey.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 106)) ;
      GALGAS_string var_s = function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/service-entry.s"), inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 107)), inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 107)) ;
      var_s = var_s.getter_stringByReplacingStringByString (GALGAS_string ("!ENTRY!"), var_name, inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 108)) ;
      var_s = var_s.getter_stringByReplacingStringByString (GALGAS_string ("!IDX!"), var_idx.getter_string (SOURCE_FILE ("declaration-service.galgas", 109)), inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 109)) ;
      ioArgument_ioAssemblerCode.plusAssign_operation(var_s, inCompiler  COMMA_SOURCE_FILE ("declaration-service.galgas", 110)) ;
      var_idx.plusAssign_operation(GALGAS_uint ((uint32_t) 1U), inCompiler  COMMA_SOURCE_FILE ("declaration-service.galgas", 111)) ;
    }
    enumerator_4127.gotoNextObject () ;
  }
  ioArgument_ioAssemblerCode.plusAssign_operation(function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/service-dispatcher-header.s"), inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 114)), inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 114)), inCompiler  COMMA_SOURCE_FILE ("declaration-service.galgas", 114)) ;
  var_idx = GALGAS_uint ((uint32_t) 0U) ;
  const GALGAS_routineMapIR temp_2 = inObject ;
  cEnumerator_routineMapIR enumerator_4679 (temp_2, kEnumeration_up) ;
  while (enumerator_4679.hasCurrentObject ()) {
    const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_4679.current (HERE).mAttribute_mKind.objectCompare (GALGAS_routineKind::constructor_service (SOURCE_FILE ("declaration-service.galgas", 117)))).boolEnum () ;
    if (kBoolTrue == test_3) {
      GALGAS_string var_serviceImplementationName = function_llvmNameForServiceImplementation (enumerator_4679.current (HERE).mAttribute_lkey.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 118)) ;
      GALGAS_string var_s = function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/service-dispatcher-entry.s"), inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 119)), inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 119)) ;
      var_s = var_s.getter_stringByReplacingStringByString (GALGAS_string ("!ENTRY!"), var_serviceImplementationName, inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 120)) ;
      var_s = var_s.getter_stringByReplacingStringByString (GALGAS_string ("!IDX!"), var_idx.getter_string (SOURCE_FILE ("declaration-service.galgas", 121)), inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 121)) ;
      ioArgument_ioAssemblerCode.plusAssign_operation(var_s, inCompiler  COMMA_SOURCE_FILE ("declaration-service.galgas", 122)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (var_serviceImplementationName, inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 123)), inCompiler  COMMA_SOURCE_FILE ("declaration-service.galgas", 123)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("declare void @").add_operation (function_llvmNameForServiceCall (enumerator_4679.current (HERE).mAttribute_lkey.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 124)), inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 124)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 124)), inCompiler  COMMA_SOURCE_FILE ("declaration-service.galgas", 124)) ;
      GALGAS_string var_typeName = enumerator_4679.current (HERE).mAttribute_lkey.mAttribute_string.getter_stringByDeletingPathExtension (SOURCE_FILE ("declaration-service.galgas", 125)) ;
      GALGAS_bool var_first = GALGAS_bool (kIsEqual, var_typeName.objectCompare (GALGAS_string::makeEmptyString ())) ;
      const enumGalgasBool test_4 = var_first.operator_not (SOURCE_FILE ("declaration-service.galgas", 127)).boolEnum () ;
      if (kBoolTrue == test_4) {
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("%").add_operation (var_typeName, inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 128)).add_operation (GALGAS_string ("* %self"), inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 128)), inCompiler  COMMA_SOURCE_FILE ("declaration-service.galgas", 128)) ;
      }
      cEnumerator_procFormalArgumentListForGeneration enumerator_5516 (enumerator_4679.current (HERE).mAttribute_mFormalArgumentListForGeneration, kEnumeration_up) ;
      while (enumerator_5516.hasCurrentObject ()) {
        const enumGalgasBool test_5 = var_first.boolEnum () ;
        if (kBoolTrue == test_5) {
          var_first = GALGAS_bool (false) ;
        }else if (kBoolFalse == test_5) {
          ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-service.galgas", 131)) ;
        }
        switch (enumerator_5516.current_mFormalArgumentKind (HERE).enumValue ()) {
        case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
          break ;
        case GALGAS_procFormalArgumentPassingMode::kEnum_input:
          {
            ioArgument_ioLLVMcode.plusAssign_operation(enumerator_5516.current_mFormalArgumentType (HERE).getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 134)).add_operation (GALGAS_string (" %in."), inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 134)).add_operation (enumerator_5516.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 134)), inCompiler  COMMA_SOURCE_FILE ("declaration-service.galgas", 134)) ;
          }
          break ;
        case GALGAS_procFormalArgumentPassingMode::kEnum_output:
          {
            ioArgument_ioLLVMcode.plusAssign_operation(enumerator_5516.current_mFormalArgumentType (HERE).getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 136)).add_operation (GALGAS_string ("* %"), inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 136)).add_operation (enumerator_5516.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 136)), inCompiler  COMMA_SOURCE_FILE ("declaration-service.galgas", 136)) ;
          }
          break ;
        case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
          {
            ioArgument_ioLLVMcode.plusAssign_operation(enumerator_5516.current_mFormalArgumentType (HERE).getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 138)).add_operation (GALGAS_string ("* %"), inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 138)).add_operation (enumerator_5516.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 138)), inCompiler  COMMA_SOURCE_FILE ("declaration-service.galgas", 138)) ;
          }
          break ;
        }
        enumerator_5516.gotoNextObject () ;
      }
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (") nounwind \n"
        "\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-service.galgas", 141)) ;
      var_idx.plusAssign_operation(GALGAS_uint ((uint32_t) 1U), inCompiler  COMMA_SOURCE_FILE ("declaration-service.galgas", 142)) ;
    }
    enumerator_4679.gotoNextObject () ;
  }
  ioArgument_ioAssemblerCode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-service.galgas", 145)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Abstract category method '@expressionAST noteExpressionTypesInPrecedenceGraph'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_expressionAST_noteExpressionTypesInPrecedenceGraph> gCategoryMethodTable_expressionAST_noteExpressionTypesInPrecedenceGraph ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_noteExpressionTypesInPrecedenceGraph (const int32_t inClassIndex,
                                                               categoryMethodSignature_expressionAST_noteExpressionTypesInPrecedenceGraph inMethod) {
  gCategoryMethodTable_expressionAST_noteExpressionTypesInPrecedenceGraph.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_expressionAST_noteExpressionTypesInPrecedenceGraph (void) {
  gCategoryMethodTable_expressionAST_noteExpressionTypesInPrecedenceGraph.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_expressionAST_noteExpressionTypesInPrecedenceGraph (NULL,
                                                                               freeCategoryMethod_expressionAST_noteExpressionTypesInPrecedenceGraph) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_noteExpressionTypesInPrecedenceGraph (const cPtr_expressionAST * inObject,
                                                              GALGAS_semanticTypePrecedenceGraph & io_ioGraph,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_expressionAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_expressionAST_noteExpressionTypesInPrecedenceGraph f = NULL ;
    if (classIndex < gCategoryMethodTable_expressionAST_noteExpressionTypesInPrecedenceGraph.count ()) {
      f = gCategoryMethodTable_expressionAST_noteExpressionTypesInPrecedenceGraph (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_expressionAST_noteExpressionTypesInPrecedenceGraph.count ()) {
           f = gCategoryMethodTable_expressionAST_noteExpressionTypesInPrecedenceGraph (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_expressionAST_noteExpressionTypesInPrecedenceGraph.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
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
//                             Abstract category method '@expressionAST analyzeExpression'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_expressionAST_analyzeExpression> gCategoryMethodTable_expressionAST_analyzeExpression ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_analyzeExpression (const int32_t inClassIndex,
                                            categoryMethodSignature_expressionAST_analyzeExpression inMethod) {
  gCategoryMethodTable_expressionAST_analyzeExpression.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_expressionAST_analyzeExpression (void) {
  gCategoryMethodTable_expressionAST_analyzeExpression.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_expressionAST_analyzeExpression (NULL,
                                                            freeCategoryMethod_expressionAST_analyzeExpression) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_analyzeExpression (const cPtr_expressionAST * inObject,
                                           const GALGAS_unifiedTypeMap_2D_proxy constin_inSelfType,
                                           const GALGAS_lstring constin_inRoutineNameForInvocationGraph,
                                           const GALGAS_unifiedTypeMap_2D_proxy constin_inTargetType,
                                           const GALGAS_semanticContext constin_inContext,
                                           const GALGAS_stringset constin_inModes,
                                           const GALGAS_bool constin_inAllowExceptions,
                                           GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                           GALGAS_staticStringMap & io_ioGlobalLiteralStringMap,
                                           GALGAS_variableMap & io_ioVariableMap,
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
    categoryMethodSignature_expressionAST_analyzeExpression f = NULL ;
    if (classIndex < gCategoryMethodTable_expressionAST_analyzeExpression.count ()) {
      f = gCategoryMethodTable_expressionAST_analyzeExpression (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_expressionAST_analyzeExpression.count ()) {
           f = gCategoryMethodTable_expressionAST_analyzeExpression (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_expressionAST_analyzeExpression.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inSelfType, constin_inRoutineNameForInvocationGraph, constin_inTargetType, constin_inContext, constin_inModes, constin_inAllowExceptions, io_ioTemporaries, io_ioGlobalLiteralStringMap, io_ioVariableMap, io_ioInstructionGenerationList, out_outResult, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Abstract category method '@instructionAST noteInstructionTypesInPrecedenceGraph'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_instructionAST_noteInstructionTypesInPrecedenceGraph> gCategoryMethodTable_instructionAST_noteInstructionTypesInPrecedenceGraph ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_noteInstructionTypesInPrecedenceGraph (const int32_t inClassIndex,
                                                                categoryMethodSignature_instructionAST_noteInstructionTypesInPrecedenceGraph inMethod) {
  gCategoryMethodTable_instructionAST_noteInstructionTypesInPrecedenceGraph.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_instructionAST_noteInstructionTypesInPrecedenceGraph (void) {
  gCategoryMethodTable_instructionAST_noteInstructionTypesInPrecedenceGraph.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_instructionAST_noteInstructionTypesInPrecedenceGraph (NULL,
                                                                                 freeCategoryMethod_instructionAST_noteInstructionTypesInPrecedenceGraph) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * inObject,
                                                               GALGAS_semanticTypePrecedenceGraph & io_ioGraph,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_instructionAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_instructionAST_noteInstructionTypesInPrecedenceGraph f = NULL ;
    if (classIndex < gCategoryMethodTable_instructionAST_noteInstructionTypesInPrecedenceGraph.count ()) {
      f = gCategoryMethodTable_instructionAST_noteInstructionTypesInPrecedenceGraph (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_instructionAST_noteInstructionTypesInPrecedenceGraph.count ()) {
           f = gCategoryMethodTable_instructionAST_noteInstructionTypesInPrecedenceGraph (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_instructionAST_noteInstructionTypesInPrecedenceGraph.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
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
//                   Category method '@instructionListAST noteInstructionListTypesInPrecedenceGraph'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_noteInstructionListTypesInPrecedenceGraph (const GALGAS_instructionListAST inObject,
                                                               GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_instructionListAST temp_0 = inObject ;
  cEnumerator_instructionListAST enumerator_2177 (temp_0, kEnumeration_up) ;
  while (enumerator_2177.hasCurrentObject ()) {
    callCategoryMethod_noteInstructionTypesInPrecedenceGraph ((const cPtr_instructionAST *) enumerator_2177.current_mInstruction (HERE).ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instructionList.galgas", 48)) ;
    enumerator_2177.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Abstract category method '@instructionAST analyze'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_instructionAST_analyze> gCategoryMethodTable_instructionAST_analyze ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_analyze (const int32_t inClassIndex,
                                  categoryMethodSignature_instructionAST_analyze inMethod) {
  gCategoryMethodTable_instructionAST_analyze.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_instructionAST_analyze (void) {
  gCategoryMethodTable_instructionAST_analyze.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_instructionAST_analyze (NULL,
                                                   freeCategoryMethod_instructionAST_analyze) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_analyze (const cPtr_instructionAST * inObject,
                                 const GALGAS_unifiedTypeMap_2D_proxy constin_inSelfType,
                                 const GALGAS_lstring constin_inRoutineNameForInvocationGraph,
                                 const GALGAS_semanticContext constin_inContext,
                                 const GALGAS_stringset constin_inModeSet,
                                 const GALGAS_bool constin_inAllowExceptions,
                                 GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                 GALGAS_staticStringMap & io_ioGlobalLiteralStringMap,
                                 GALGAS_variableMap & io_ioVariableMap,
                                 GALGAS_instructionListIR & io_ioInstructionGenerationList,
                                 C_Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_instructionAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_instructionAST_analyze f = NULL ;
    if (classIndex < gCategoryMethodTable_instructionAST_analyze.count ()) {
      f = gCategoryMethodTable_instructionAST_analyze (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_instructionAST_analyze.count ()) {
           f = gCategoryMethodTable_instructionAST_analyze (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_instructionAST_analyze.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inSelfType, constin_inRoutineNameForInvocationGraph, constin_inContext, constin_inModeSet, constin_inAllowExceptions, io_ioTemporaries, io_ioGlobalLiteralStringMap, io_ioVariableMap, io_ioInstructionGenerationList, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Category method '@instructionListAST analyzeBranchInstructionList'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_analyzeBranchInstructionList (const GALGAS_instructionListAST inObject,
                                                  const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                                  const GALGAS_lstring constinArgument_inRoutineNameForInvocationGraph,
                                                  GALGAS_location inArgument_inEndOfInstructionList,
                                                  const GALGAS_semanticContext constinArgument_inContext,
                                                  const GALGAS_stringset constinArgument_inModeSet,
                                                  const GALGAS_bool constinArgument_inAllowExceptions,
                                                  GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                  GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                  GALGAS_variableMap & ioArgument_ioVariableMap,
                                                  GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                  C_Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_ioVariableMap.setter_openBranch (inCompiler COMMA_SOURCE_FILE ("instructionList.galgas", 82)) ;
  }
  const GALGAS_instructionListAST temp_0 = inObject ;
  cEnumerator_instructionListAST enumerator_3912 (temp_0, kEnumeration_up) ;
  while (enumerator_3912.hasCurrentObject ()) {
    callCategoryMethod_analyze ((const cPtr_instructionAST *) enumerator_3912.current_mInstruction (HERE).ptr (), constinArgument_inSelfType, constinArgument_inRoutineNameForInvocationGraph, constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowExceptions, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioInstructionGenerationList, inCompiler COMMA_SOURCE_FILE ("instructionList.galgas", 84)) ;
    enumerator_3912.gotoNextObject () ;
  }
  {
  ioArgument_ioVariableMap.setter_closeBranch (inArgument_inEndOfInstructionList, inCompiler COMMA_SOURCE_FILE ("instructionList.galgas", 97)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Category method '@instructionListAST analyzeRoutineInstructionList'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_analyzeRoutineInstructionList (const GALGAS_instructionListAST inObject,
                                                   const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                                   const GALGAS_lstring constinArgument_inRoutineNameForInvocationGraph,
                                                   const GALGAS_semanticContext constinArgument_inContext,
                                                   const GALGAS_stringset constinArgument_inModeSet,
                                                   const GALGAS_bool constinArgument_inAllowExceptions,
                                                   GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                   GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                   GALGAS_variableMap & ioArgument_ioVariableMap,
                                                   GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_instructionListAST temp_0 = inObject ;
  cEnumerator_instructionListAST enumerator_5046 (temp_0, kEnumeration_up) ;
  while (enumerator_5046.hasCurrentObject ()) {
    callCategoryMethod_analyze ((const cPtr_instructionAST *) enumerator_5046.current_mInstruction (HERE).ptr (), constinArgument_inSelfType, constinArgument_inRoutineNameForInvocationGraph, constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowExceptions, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioInstructionGenerationList, inCompiler COMMA_SOURCE_FILE ("instructionList.galgas", 114)) ;
    enumerator_5046.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Category method '@instructionListIR instructionListLLVMCode'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_instructionListLLVMCode (const GALGAS_instructionListIR inObject,
                                             GALGAS_string & ioArgument_ioLLVMcode,
                                             const GALGAS_generationContext constinArgument_inGenerationContext,
                                             GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_instructionListIR temp_0 = inObject ;
  cEnumerator_instructionListIR enumerator_5979 (temp_0, kEnumeration_up) ;
  while (enumerator_5979.hasCurrentObject ()) {
    callCategoryMethod_llvmInstructionCode ((const cPtr_abstractInstructionIR *) enumerator_5979.current_mInstructionGeneration (HERE).ptr (), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instructionList.galgas", 138)) ;
    enumerator_5979.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Abstract category method '@abstractDeclaration enterInPrecedenceGraph'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_abstractDeclaration_enterInPrecedenceGraph> gCategoryMethodTable_abstractDeclaration_enterInPrecedenceGraph ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_enterInPrecedenceGraph (const int32_t inClassIndex,
                                                 categoryMethodSignature_abstractDeclaration_enterInPrecedenceGraph inMethod) {
  gCategoryMethodTable_abstractDeclaration_enterInPrecedenceGraph.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_abstractDeclaration_enterInPrecedenceGraph (void) {
  gCategoryMethodTable_abstractDeclaration_enterInPrecedenceGraph.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractDeclaration_enterInPrecedenceGraph (NULL,
                                                                       freeCategoryMethod_abstractDeclaration_enterInPrecedenceGraph) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_enterInPrecedenceGraph (const cPtr_abstractDeclaration * inObject,
                                                GALGAS_semanticTypePrecedenceGraph & io_ioGraph,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractDeclaration) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_abstractDeclaration_enterInPrecedenceGraph f = NULL ;
    if (classIndex < gCategoryMethodTable_abstractDeclaration_enterInPrecedenceGraph.count ()) {
      f = gCategoryMethodTable_abstractDeclaration_enterInPrecedenceGraph (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_abstractDeclaration_enterInPrecedenceGraph.count ()) {
           f = gCategoryMethodTable_abstractDeclaration_enterInPrecedenceGraph (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_abstractDeclaration_enterInPrecedenceGraph.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
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
//                 Abstract category getter '@abstractDeclaration keyRepresentationForErrorSignaling'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryGetterSignature_abstractDeclaration_keyRepresentationForErrorSignaling> gCategoryGetterTable_abstractDeclaration_keyRepresentationForErrorSignaling ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryGetter_keyRepresentationForErrorSignaling (const int32_t inClassIndex,
                                                             categoryGetterSignature_abstractDeclaration_keyRepresentationForErrorSignaling inGetter) {
  gCategoryGetterTable_abstractDeclaration_keyRepresentationForErrorSignaling.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryGetter_abstractDeclaration_keyRepresentationForErrorSignaling (void) {
  gCategoryGetterTable_abstractDeclaration_keyRepresentationForErrorSignaling.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_abstractDeclaration_keyRepresentationForErrorSignaling (NULL,
                                                                                   freeCategoryGetter_abstractDeclaration_keyRepresentationForErrorSignaling) ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string callCategoryGetter_keyRepresentationForErrorSignaling (const cPtr_abstractDeclaration * inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractDeclaration) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryGetterSignature_abstractDeclaration_keyRepresentationForErrorSignaling f = NULL ;
    if (classIndex < gCategoryGetterTable_abstractDeclaration_keyRepresentationForErrorSignaling.count ()) {
      f = gCategoryGetterTable_abstractDeclaration_keyRepresentationForErrorSignaling (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryGetterTable_abstractDeclaration_keyRepresentationForErrorSignaling.count ()) {
           f = gCategoryGetterTable_abstractDeclaration_keyRepresentationForErrorSignaling (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryGetterTable_abstractDeclaration_keyRepresentationForErrorSignaling.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
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
//                      Category method '@procedureDeclarationListAST noteTypesInPrecedenceGraph'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_noteTypesInPrecedenceGraph (const GALGAS_procedureDeclarationListAST inObject,
                                                GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                C_Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_procedureDeclarationListAST temp_0 = inObject ;
  cEnumerator_procedureDeclarationListAST enumerator_1708 (temp_0, kEnumeration_up) ;
  while (enumerator_1708.hasCurrentObject ()) {
    cEnumerator_procFormalArgumentList enumerator_1782 (enumerator_1708.current_mProcedureFormalArgumentList (HERE), kEnumeration_up) ;
    while (enumerator_1782.hasCurrentObject ()) {
      GALGAS_lstring var_typeName = GALGAS_lstring::constructor_new (GALGAS_string ("$").add_operation (enumerator_1782.current_mFormalArgumentTypeName (HERE).getter_string (SOURCE_FILE ("context-routines.galgas", 35)), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 35)), enumerator_1782.current_mFormalArgumentTypeName (HERE).mAttribute_location  COMMA_SOURCE_FILE ("context-routines.galgas", 35)) ;
      {
      ioArgument_ioGraph.setter_noteNode (var_typeName COMMA_SOURCE_FILE ("context-routines.galgas", 36)) ;
      }
      enumerator_1782.gotoNextObject () ;
    }
    categoryMethod_noteInstructionListTypesInPrecedenceGraph (enumerator_1708.current_mProcedureInstructionList (HERE), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 38)) ;
    enumerator_1708.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Category method '@serviceDeclarationListAST noteTypesInPrecedenceGraph'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_noteTypesInPrecedenceGraph (const GALGAS_serviceDeclarationListAST inObject,
                                                GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                C_Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_serviceDeclarationListAST temp_0 = inObject ;
  cEnumerator_serviceDeclarationListAST enumerator_2263 (temp_0, kEnumeration_up) ;
  while (enumerator_2263.hasCurrentObject ()) {
    cEnumerator_procFormalArgumentList enumerator_2335 (enumerator_2263.current_mServiceFormalArgumentList (HERE), kEnumeration_up) ;
    while (enumerator_2335.hasCurrentObject ()) {
      GALGAS_lstring var_typeName = GALGAS_lstring::constructor_new (GALGAS_string ("$").add_operation (enumerator_2335.current_mFormalArgumentTypeName (HERE).getter_string (SOURCE_FILE ("context-routines.galgas", 47)), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 47)), enumerator_2335.current_mFormalArgumentTypeName (HERE).mAttribute_location  COMMA_SOURCE_FILE ("context-routines.galgas", 47)) ;
      {
      ioArgument_ioGraph.setter_noteNode (var_typeName COMMA_SOURCE_FILE ("context-routines.galgas", 48)) ;
      }
      enumerator_2335.gotoNextObject () ;
    }
    categoryMethod_noteInstructionListTypesInPrecedenceGraph (enumerator_2263.current_mServiceInstructionList (HERE), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 50)) ;
    enumerator_2263.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Category method '@sectionDeclarationListAST noteTypesInPrecedenceGraph'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_noteTypesInPrecedenceGraph (const GALGAS_sectionDeclarationListAST inObject,
                                                GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                C_Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_sectionDeclarationListAST temp_0 = inObject ;
  cEnumerator_sectionDeclarationListAST enumerator_2814 (temp_0, kEnumeration_up) ;
  while (enumerator_2814.hasCurrentObject ()) {
    cEnumerator_procFormalArgumentList enumerator_2886 (enumerator_2814.current_mSectionFormalArgumentList (HERE), kEnumeration_up) ;
    while (enumerator_2886.hasCurrentObject ()) {
      GALGAS_lstring var_typeName = GALGAS_lstring::constructor_new (GALGAS_string ("$").add_operation (enumerator_2886.current_mFormalArgumentTypeName (HERE).getter_string (SOURCE_FILE ("context-routines.galgas", 59)), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 59)), enumerator_2886.current_mFormalArgumentTypeName (HERE).mAttribute_location  COMMA_SOURCE_FILE ("context-routines.galgas", 59)) ;
      {
      ioArgument_ioGraph.setter_noteNode (var_typeName COMMA_SOURCE_FILE ("context-routines.galgas", 60)) ;
      }
      enumerator_2886.gotoNextObject () ;
    }
    categoryMethod_noteInstructionListTypesInPrecedenceGraph (enumerator_2814.current_mSectionInstructionList (HERE), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 62)) ;
    enumerator_2814.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Category method '@procedureDeclarationListAST enterInContext'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_enterInContext (const GALGAS_procedureDeclarationListAST inObject,
                                    const GALGAS_string constinArgument_inSelfTypeName,
                                    GALGAS_semanticContext & ioArgument_ioContext,
                                    C_Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_procedureDeclarationListAST temp_0 = inObject ;
  cEnumerator_procedureDeclarationListAST enumerator_3910 (temp_0, kEnumeration_up) ;
  while (enumerator_3910.hasCurrentObject ()) {
    GALGAS_procedureSignature var_signature = GALGAS_procedureSignature::constructor_emptyList (SOURCE_FILE ("context-routines.galgas", 84)) ;
    cEnumerator_procFormalArgumentList enumerator_4081 (enumerator_3910.current (HERE).mAttribute_mProcedureFormalArgumentList, kEnumeration_up) ;
    while (enumerator_4081.hasCurrentObject ()) {
      GALGAS_unifiedTypeMap_2D_proxy var_typeProxy = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.mAttribute_mTypeMap, enumerator_4081.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 86)) ;
      var_signature.addAssign_operation (enumerator_4081.current_mFormalArgumentPassingMode (HERE), enumerator_4081.current_mSelector (HERE).mAttribute_string, var_typeProxy  COMMA_SOURCE_FILE ("context-routines.galgas", 87)) ;
      enumerator_4081.gotoNextObject () ;
    }
    GALGAS_modeMap var_procedureModeMap = GALGAS_modeMap::constructor_emptyMap (SOURCE_FILE ("context-routines.galgas", 90)) ;
    cEnumerator_lstringlist enumerator_4360 (enumerator_3910.current (HERE).mAttribute_mProcedureModeList, kEnumeration_up) ;
    while (enumerator_4360.hasCurrentObject ()) {
      {
      var_procedureModeMap.setter_insertKey (enumerator_4360.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 92)) ;
      }
      enumerator_4360.gotoNextObject () ;
    }
    GALGAS_bool var_weakProcedure = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_4529 (enumerator_3910.current (HERE).mAttribute_mProcedureAttributeList, kEnumeration_up) ;
    bool bool_1 = var_weakProcedure.operator_not (SOURCE_FILE ("context-routines.galgas", 96)).isValidAndTrue () ;
    if (enumerator_4529.hasCurrentObject () && bool_1) {
      while (enumerator_4529.hasCurrentObject () && bool_1) {
        var_weakProcedure = GALGAS_bool (kIsEqual, enumerator_4529.current_mValue (HERE).mAttribute_string.objectCompare (function_weakAttribute (inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 97)))) ;
        enumerator_4529.gotoNextObject () ;
        if (enumerator_4529.hasCurrentObject ()) {
          bool_1 = var_weakProcedure.operator_not (SOURCE_FILE ("context-routines.galgas", 96)).isValidAndTrue () ;
        }
      }
    }
    GALGAS_lstring var_lkey = GALGAS_lstring::constructor_new (constinArgument_inSelfTypeName.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 100)).add_operation (enumerator_3910.current (HERE).mAttribute_mProcedureName.getter_string (SOURCE_FILE ("context-routines.galgas", 100)), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 100)), enumerator_3910.current (HERE).mAttribute_mProcedureName.mAttribute_location  COMMA_SOURCE_FILE ("context-routines.galgas", 100)) ;
    const enumGalgasBool test_2 = ioArgument_ioContext.mAttribute_mRoutineMapForContext.getter_hasKey (var_lkey.mAttribute_string COMMA_SOURCE_FILE ("context-routines.galgas", 101)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_bool var_weak = ioArgument_ioContext.mAttribute_mRoutineMapForContext.getter_mWeakForKey (var_lkey.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 102)) ;
      GALGAS_bool test_3 = var_weakProcedure ;
      if (kBoolTrue == test_3.boolEnum ()) {
        test_3 = var_weak.operator_not (SOURCE_FILE ("context-routines.galgas", 103)) ;
      }
      const enumGalgasBool test_4 = test_3.boolEnum () ;
      if (kBoolTrue == test_4) {
      }else if (kBoolFalse == test_4) {
        GALGAS_bool test_5 = var_weakProcedure ;
        if (kBoolTrue == test_5.boolEnum ()) {
          test_5 = var_weak ;
        }
        const enumGalgasBool test_6 = test_5.boolEnum () ;
        if (kBoolTrue == test_6) {
          GALGAS_location location_7 (enumerator_3910.current (HERE).mAttribute_mProcedureName.getter_location (HERE)) ; // Implicit use of 'location' getter
          inCompiler->emitSemanticError (location_7, GALGAS_string ("this weak procedure overrides a weak procedure")  COMMA_SOURCE_FILE ("context-routines.galgas", 106)) ;
        }else if (kBoolFalse == test_6) {
          GALGAS_bool test_8 = var_weakProcedure.operator_not (SOURCE_FILE ("context-routines.galgas", 107)) ;
          if (kBoolTrue == test_8.boolEnum ()) {
            test_8 = var_weak ;
          }
          const enumGalgasBool test_9 = test_8.boolEnum () ;
          if (kBoolTrue == test_9) {
            {
            GALGAS_bool joker_5224_5 ; // Joker input parameter
            GALGAS_modeMap joker_5224_4 ; // Joker input parameter
            GALGAS_procedureSignature joker_5224_3 ; // Joker input parameter
            GALGAS_routineKind joker_5224_2 ; // Joker input parameter
            GALGAS_bool joker_5224_1 ; // Joker input parameter
            ioArgument_ioContext.mAttribute_mRoutineMapForContext.setter_removeKey (var_lkey, joker_5224_5, joker_5224_4, joker_5224_3, joker_5224_2, joker_5224_1, inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 108)) ;
            }
            {
            ioArgument_ioContext.mAttribute_mRoutineMapForContext.setter_insertKey (var_lkey, GALGAS_bool (false), var_procedureModeMap, var_signature, GALGAS_routineKind::constructor_procedure (SOURCE_FILE ("context-routines.galgas", 114)), var_weakProcedure, inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 109)) ;
            }
          }else if (kBoolFalse == test_9) {
            {
            ioArgument_ioContext.mAttribute_mRoutineMapForContext.setter_insertKey (var_lkey, GALGAS_bool (false), var_procedureModeMap, var_signature, GALGAS_routineKind::constructor_procedure (SOURCE_FILE ("context-routines.galgas", 123)), var_weakProcedure, inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 118)) ;
            }
          }
        }
      }
    }else if (kBoolFalse == test_2) {
      {
      ioArgument_ioContext.mAttribute_mRoutineMapForContext.setter_insertKey (var_lkey, GALGAS_bool (false), var_procedureModeMap, var_signature, GALGAS_routineKind::constructor_procedure (SOURCE_FILE ("context-routines.galgas", 133)), var_weakProcedure, inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 128)) ;
      }
    }
    enumerator_3910.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Category method '@serviceDeclarationListAST enterInContext'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_enterInContext (const GALGAS_serviceDeclarationListAST inObject,
                                    const GALGAS_string constinArgument_inReceiverTypeName,
                                    GALGAS_semanticContext & ioArgument_ioContext,
                                    C_Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_serviceDeclarationListAST temp_0 = inObject ;
  cEnumerator_serviceDeclarationListAST enumerator_6265 (temp_0, kEnumeration_up) ;
  while (enumerator_6265.hasCurrentObject ()) {
    GALGAS_procedureSignature var_signature = GALGAS_procedureSignature::constructor_emptyList (SOURCE_FILE ("context-routines.galgas", 148)) ;
    cEnumerator_procFormalArgumentList enumerator_6432 (enumerator_6265.current (HERE).mAttribute_mServiceFormalArgumentList, kEnumeration_up) ;
    while (enumerator_6432.hasCurrentObject ()) {
      GALGAS_unifiedTypeMap_2D_proxy var_typeProxy = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.mAttribute_mTypeMap, enumerator_6432.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 150)) ;
      var_signature.addAssign_operation (enumerator_6432.current_mFormalArgumentPassingMode (HERE), enumerator_6432.current_mSelector (HERE).mAttribute_string, var_typeProxy  COMMA_SOURCE_FILE ("context-routines.galgas", 151)) ;
      enumerator_6432.gotoNextObject () ;
    }
    {
    GALGAS_modeMap temp_1 = GALGAS_modeMap::constructor_emptyMap (SOURCE_FILE ("context-routines.galgas", 157)) ;
    temp_1.addAssign_operation (function_userModeName (inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 157)).getter_nowhere (SOURCE_FILE ("context-routines.galgas", 157)), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 157)) ;
    ioArgument_ioContext.mAttribute_mRoutineMapForContext.setter_insertKey (GALGAS_lstring::constructor_new (constinArgument_inReceiverTypeName.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 155)).add_operation (enumerator_6265.current (HERE).mAttribute_mServiceName.getter_string (SOURCE_FILE ("context-routines.galgas", 155)), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 155)), enumerator_6265.current (HERE).mAttribute_mServiceName.mAttribute_location  COMMA_SOURCE_FILE ("context-routines.galgas", 155)), GALGAS_bool (true), temp_1, var_signature, GALGAS_routineKind::constructor_service (SOURCE_FILE ("context-routines.galgas", 159)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 154)) ;
    }
    enumerator_6265.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Category method '@sectionDeclarationListAST enterInContext'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_enterInContext (const GALGAS_sectionDeclarationListAST inObject,
                                    const GALGAS_string constinArgument_inReceiverTypeName,
                                    GALGAS_semanticContext & ioArgument_ioContext,
                                    C_Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_sectionDeclarationListAST temp_0 = inObject ;
  cEnumerator_sectionDeclarationListAST enumerator_7222 (temp_0, kEnumeration_up) ;
  while (enumerator_7222.hasCurrentObject ()) {
    GALGAS_procedureSignature var_signature = GALGAS_procedureSignature::constructor_emptyList (SOURCE_FILE ("context-routines.galgas", 173)) ;
    cEnumerator_procFormalArgumentList enumerator_7389 (enumerator_7222.current (HERE).mAttribute_mSectionFormalArgumentList, kEnumeration_up) ;
    while (enumerator_7389.hasCurrentObject ()) {
      GALGAS_unifiedTypeMap_2D_proxy var_typeProxy = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.mAttribute_mTypeMap, enumerator_7389.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 175)) ;
      var_signature.addAssign_operation (enumerator_7389.current_mFormalArgumentPassingMode (HERE), enumerator_7389.current_mSelector (HERE).mAttribute_string, var_typeProxy  COMMA_SOURCE_FILE ("context-routines.galgas", 176)) ;
      enumerator_7389.gotoNextObject () ;
    }
    {
    GALGAS_modeMap temp_1 = GALGAS_modeMap::constructor_emptyMap (SOURCE_FILE ("context-routines.galgas", 182)) ;
    temp_1.addAssign_operation (function_userModeName (inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 182)).getter_nowhere (SOURCE_FILE ("context-routines.galgas", 182)), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 182)) ;
    ioArgument_ioContext.mAttribute_mRoutineMapForContext.setter_insertKey (GALGAS_lstring::constructor_new (constinArgument_inReceiverTypeName.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 180)).add_operation (enumerator_7222.current (HERE).mAttribute_mSectionName.getter_string (SOURCE_FILE ("context-routines.galgas", 180)), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 180)), enumerator_7222.current (HERE).mAttribute_mSectionName.mAttribute_location  COMMA_SOURCE_FILE ("context-routines.galgas", 180)), GALGAS_bool (true), temp_1, var_signature, GALGAS_routineKind::constructor_section (SOURCE_FILE ("context-routines.galgas", 184)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 179)) ;
    }
    enumerator_7222.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Category method '@staticStringMap findOrAddStaticString'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryModifier_findOrAddStaticString (GALGAS_staticStringMap & ioObject,
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
//                           Abstract category method '@abstractDeclaration enterInContext'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_abstractDeclaration_enterInContext> gCategoryMethodTable_abstractDeclaration_enterInContext ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_enterInContext (const int32_t inClassIndex,
                                         categoryMethodSignature_abstractDeclaration_enterInContext inMethod) {
  gCategoryMethodTable_abstractDeclaration_enterInContext.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_abstractDeclaration_enterInContext (void) {
  gCategoryMethodTable_abstractDeclaration_enterInContext.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractDeclaration_enterInContext (NULL,
                                                               freeCategoryMethod_abstractDeclaration_enterInContext) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_enterInContext (const cPtr_abstractDeclaration * inObject,
                                        const GALGAS_procedureDeclarationListAST constin_inProcedureListAST,
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
    categoryMethodSignature_abstractDeclaration_enterInContext f = NULL ;
    if (classIndex < gCategoryMethodTable_abstractDeclaration_enterInContext.count ()) {
      f = gCategoryMethodTable_abstractDeclaration_enterInContext (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_abstractDeclaration_enterInContext.count ()) {
           f = gCategoryMethodTable_abstractDeclaration_enterInContext (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_abstractDeclaration_enterInContext.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
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
//                          Abstract category method '@abstractDeclaration semanticAnalysis'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_abstractDeclaration_semanticAnalysis> gCategoryMethodTable_abstractDeclaration_semanticAnalysis ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_semanticAnalysis (const int32_t inClassIndex,
                                           categoryMethodSignature_abstractDeclaration_semanticAnalysis inMethod) {
  gCategoryMethodTable_abstractDeclaration_semanticAnalysis.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_abstractDeclaration_semanticAnalysis (void) {
  gCategoryMethodTable_abstractDeclaration_semanticAnalysis.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractDeclaration_semanticAnalysis (NULL,
                                                                 freeCategoryMethod_abstractDeclaration_semanticAnalysis) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_semanticAnalysis (const cPtr_abstractDeclaration * inObject,
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
    categoryMethodSignature_abstractDeclaration_semanticAnalysis f = NULL ;
    if (classIndex < gCategoryMethodTable_abstractDeclaration_semanticAnalysis.count ()) {
      f = gCategoryMethodTable_abstractDeclaration_semanticAnalysis (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_abstractDeclaration_semanticAnalysis.count ()) {
           f = gCategoryMethodTable_abstractDeclaration_semanticAnalysis (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_abstractDeclaration_semanticAnalysis.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
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
//                                 Category method '@routineMapIR llvmCodeGeneration'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_llvmCodeGeneration (const GALGAS_routineMapIR inObject,
                                        GALGAS_string & ioArgument_ioLLVMcode,
                                        GALGAS_string & ioArgument_ioAssemblerCode,
                                        const GALGAS_generationContext constinArgument_inGenerationContext,
                                        GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                        C_Compiler * inCompiler
                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_routineMapIR temp_0 = inObject ;
  cEnumerator_routineMapIR enumerator_8196 (temp_0, kEnumeration_up) ;
  while (enumerator_8196.hasCurrentObject ()) {
    categoryMethod_llvmCodeGeneration (enumerator_8196.current (HERE), ioArgument_ioLLVMcode, ioArgument_ioAssemblerCode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 209)) ;
    enumerator_8196.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Category method '@instructionListIR appendAlloca'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryModifier_appendAlloca (GALGAS_instructionListIR & ioObject,
                                    const GALGAS_string constinArgument_inLocalVariableName,
                                    const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inTargetVarType,
                                    C_Compiler * /* inCompiler */
                                    COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.addAssign_operation (GALGAS_allocaConstantIR::constructor_new (constinArgument_inLocalVariableName, constinArgument_inTargetVarType  COMMA_SOURCE_FILE ("intermediate-alloca.galgas", 6))  COMMA_SOURCE_FILE ("intermediate-alloca.galgas", 6)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Category method '@instructionListIR appendExtend'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryModifier_appendExtend (GALGAS_instructionListIR & ioObject,
                                    const GALGAS_operandIR constinArgument_inResult,
                                    const GALGAS_operandIR constinArgument_inSource,
                                    C_Compiler * /* inCompiler */
                                    COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.addAssign_operation (GALGAS_extendIR::constructor_new (constinArgument_inResult, constinArgument_inSource  COMMA_SOURCE_FILE ("intermediate-extend.galgas", 6))  COMMA_SOURCE_FILE ("intermediate-extend.galgas", 6)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Category method '@instructionListIR appendBinaryOperation'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryModifier_appendBinaryOperation (GALGAS_instructionListIR & ioObject,
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
//                         Category method '@instructionListIR appendShortCircuitAndOperation'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryModifier_appendShortCircuitAndOperation (GALGAS_instructionListIR & ioObject,
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
//                           Category method '@instructionListIR appendLoadVolatileRegister'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryModifier_appendLoadVolatileRegister (GALGAS_instructionListIR & ioObject,
                                                  const GALGAS_operandIR constinArgument_inTargetValue,
                                                  const GALGAS_string constinArgument_inRegisterName,
                                                  const GALGAS_bigint constinArgument_inAddress,
                                                  C_Compiler * /* inCompiler */
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.addAssign_operation (GALGAS_loadRegisterIR::constructor_new (constinArgument_inTargetValue, constinArgument_inRegisterName, constinArgument_inAddress  COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 7))  COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 7)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Category method '@instructionListIR appendLoadGlobalVariable'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryModifier_appendLoadGlobalVariable (GALGAS_instructionListIR & ioObject,
                                                const GALGAS_operandIR constinArgument_inTargetValue,
                                                const GALGAS_string constinArgument_inRegisterName,
                                                GALGAS_bool inArgument_inIsVolatile,
                                                C_Compiler * /* inCompiler */
                                                COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.addAssign_operation (GALGAS_loadGlobalVariableIR::constructor_new (constinArgument_inTargetValue, constinArgument_inRegisterName, inArgument_inIsVolatile  COMMA_SOURCE_FILE ("intermediate-load-global-variable.galgas", 7))  COMMA_SOURCE_FILE ("intermediate-load-global-variable.galgas", 7)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Category method '@instructionListIR appendLoadLocalVariable'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryModifier_appendLoadLocalVariable (GALGAS_instructionListIR & ioObject,
                                               const GALGAS_operandIR constinArgument_inTargetValue,
                                               const GALGAS_string constinArgument_inVariableName,
                                               C_Compiler * /* inCompiler */
                                               COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.addAssign_operation (GALGAS_loadLocalVariableIR::constructor_new (constinArgument_inTargetValue, constinArgument_inVariableName  COMMA_SOURCE_FILE ("intermediate-load-local-variable.galgas", 6))  COMMA_SOURCE_FILE ("intermediate-load-local-variable.galgas", 6)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Category method '@instructionListIR appendLoadTaskVariable'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryModifier_appendLoadTaskVariable (GALGAS_instructionListIR & ioObject,
                                              const GALGAS_operandIR constinArgument_inTargetValue,
                                              const GALGAS_string constinArgument_inTaskName,
                                              const GALGAS_string constinArgument_inVariableName,
                                              C_Compiler * /* inCompiler */
                                              COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.addAssign_operation (GALGAS_loadTaskVariableIR::constructor_new (constinArgument_inTargetValue, constinArgument_inTaskName, constinArgument_inVariableName  COMMA_SOURCE_FILE ("intermediate-load-task-variable.galgas", 7))  COMMA_SOURCE_FILE ("intermediate-load-task-variable.galgas", 7)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Category method '@instructionListIR appendStoreVolatileRegister'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryModifier_appendStoreVolatileRegister (GALGAS_instructionListIR & ioObject,
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
//                           Category method '@instructionListIR appendStoreGlobalVariable'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryModifier_appendStoreGlobalVariable (GALGAS_instructionListIR & ioObject,
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
//                            Category method '@instructionListIR appendStoreTaskVariable'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryModifier_appendStoreTaskVariable (GALGAS_instructionListIR & ioObject,
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
//                            Category method '@instructionListIR appendStoreLocalVariable'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryModifier_appendStoreLocalVariable (GALGAS_instructionListIR & ioObject,
                                                const GALGAS_string constinArgument_inLocalVarName,
                                                const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inTargetVarType,
                                                const GALGAS_operandIR constinArgument_inSourceValue,
                                                C_Compiler * /* inCompiler */
                                                COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.addAssign_operation (GALGAS_storeLocalVariableIR::constructor_new (constinArgument_inLocalVarName, constinArgument_inTargetVarType, constinArgument_inSourceValue  COMMA_SOURCE_FILE ("intermediate-store-local-variable.galgas", 7))  COMMA_SOURCE_FILE ("intermediate-store-local-variable.galgas", 7)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Category method '@instructionListIR appendLoadStructureConstant'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryModifier_appendLoadStructureConstant (GALGAS_instructionListIR & ioObject,
                                                   const GALGAS_operandIR constinArgument_inTargetValue,
                                                   const GALGAS_string constinArgument_inTypeName,
                                                   C_Compiler * /* inCompiler */
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.addAssign_operation (GALGAS_loadStructureConstantIR::constructor_new (constinArgument_inTargetValue, constinArgument_inTypeName  COMMA_SOURCE_FILE ("intermediate-load-structure-constant.galgas", 6))  COMMA_SOURCE_FILE ("intermediate-load-structure-constant.galgas", 6)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Category method '@instructionListIR appendGetElementPtr'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryModifier_appendGetElementPtr (GALGAS_instructionListIR & ioObject,
                                           const GALGAS_objectInMemoryIR constinArgument_inTarget,
                                           const GALGAS_objectInMemoryIR constinArgument_inSource,
                                           const GALGAS_uint constinArgument_inIndex,
                                           C_Compiler * /* inCompiler */
                                           COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.addAssign_operation (GALGAS_getElementPtrIR::constructor_new (constinArgument_inTarget, constinArgument_inSource, constinArgument_inIndex  COMMA_SOURCE_FILE ("intermediate-get-element-ptr.galgas", 7))  COMMA_SOURCE_FILE ("intermediate-get-element-ptr.galgas", 7)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Category method '@instructionListIR appendGetElementPtrFromSelf'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryModifier_appendGetElementPtrFromSelf (GALGAS_instructionListIR & ioObject,
                                                   const GALGAS_objectInMemoryIR constinArgument_inTarget,
                                                   const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                                   const GALGAS_uint constinArgument_inFieldIndex,
                                                   const GALGAS_string constinArgument_inFieldName,
                                                   C_Compiler * /* inCompiler */
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.addAssign_operation (GALGAS_getElementPtrFromSelfIR::constructor_new (constinArgument_inTarget, constinArgument_inSelfType, constinArgument_inFieldIndex, constinArgument_inFieldName  COMMA_SOURCE_FILE ("intermediate-get-element-ptr-from-self.galgas", 8))  COMMA_SOURCE_FILE ("intermediate-get-element-ptr-from-self.galgas", 8)) ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_accessibleEntities::GALGAS_accessibleEntities (void) :
mAttribute_mAccessibleRegisterSet (),
mAttribute_mRoutineSet (),
mAttribute_mFunctionSet (),
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
mAttribute_mFunctionSet (inOperand2),
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
    result = mAttribute_mFunctionSet.objectCompare (inOperand.mAttribute_mFunctionSet) ;
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
  return mAttribute_mAccessibleRegisterSet.isValid () && mAttribute_mRoutineSet.isValid () && mAttribute_mFunctionSet.isValid () && mAttribute_mSectionSet.isValid () && mAttribute_mGlobalVariableSet.isValid () && mAttribute_mTaskVariableSet.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_accessibleEntities::drop (void) {
  mAttribute_mAccessibleRegisterSet.drop () ;
  mAttribute_mRoutineSet.drop () ;
  mAttribute_mFunctionSet.drop () ;
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
    mAttribute_mFunctionSet.description (ioString, inIndentation+1) ;
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

GALGAS_stringset GALGAS_accessibleEntities::getter_mFunctionSet (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFunctionSet ;
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
//                      Abstract category method '@abstractInstructionIR enterAccessibleEntities'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_abstractInstructionIR_enterAccessibleEntities> gCategoryMethodTable_abstractInstructionIR_enterAccessibleEntities ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_enterAccessibleEntities (const int32_t inClassIndex,
                                                  categoryMethodSignature_abstractInstructionIR_enterAccessibleEntities inMethod) {
  gCategoryMethodTable_abstractInstructionIR_enterAccessibleEntities.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_abstractInstructionIR_enterAccessibleEntities (void) {
  gCategoryMethodTable_abstractInstructionIR_enterAccessibleEntities.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractInstructionIR_enterAccessibleEntities (NULL,
                                                                          freeCategoryMethod_abstractInstructionIR_enterAccessibleEntities) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                 GALGAS_accessibleEntities & io_ioAccessibleEntities,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractInstructionIR) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_abstractInstructionIR_enterAccessibleEntities f = NULL ;
    if (classIndex < gCategoryMethodTable_abstractInstructionIR_enterAccessibleEntities.count ()) {
      f = gCategoryMethodTable_abstractInstructionIR_enterAccessibleEntities (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_abstractInstructionIR_enterAccessibleEntities.count ()) {
           f = gCategoryMethodTable_abstractInstructionIR_enterAccessibleEntities (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_abstractInstructionIR_enterAccessibleEntities.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioAccessibleEntities, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Category method '@instructionListIR enterAccessibleEntities'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_enterAccessibleEntities (const GALGAS_instructionListIR inObject,
                                             GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_instructionListIR temp_0 = inObject ;
  cEnumerator_instructionListIR enumerator_1859 (temp_0, kEnumeration_up) ;
  while (enumerator_1859.hasCurrentObject ()) {
    callCategoryMethod_enterAccessibleEntities ((const cPtr_abstractInstructionIR *) enumerator_1859.current_mInstructionGeneration (HERE).ptr (), ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 38)) ;
    enumerator_1859.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_generationAdds::GALGAS_generationAdds (void) :
mAttribute_mIntrinsicsDeclarationSet (),
mAttribute_mStaticStringMap () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_generationAdds::~ GALGAS_generationAdds (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_generationAdds::GALGAS_generationAdds (const GALGAS_stringset & inOperand0,
                                              const GALGAS_staticStringMap & inOperand1) :
mAttribute_mIntrinsicsDeclarationSet (inOperand0),
mAttribute_mStaticStringMap (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_generationAdds GALGAS_generationAdds::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_generationAdds (GALGAS_stringset::constructor_emptySet (HERE),
                                GALGAS_staticStringMap::constructor_emptyMap (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_generationAdds GALGAS_generationAdds::constructor_new (const GALGAS_stringset & inOperand0,
                                                              const GALGAS_staticStringMap & inOperand1 
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_generationAdds result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_generationAdds (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_generationAdds::objectCompare (const GALGAS_generationAdds & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mIntrinsicsDeclarationSet.objectCompare (inOperand.mAttribute_mIntrinsicsDeclarationSet) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mStaticStringMap.objectCompare (inOperand.mAttribute_mStaticStringMap) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_generationAdds::isValid (void) const {
  return mAttribute_mIntrinsicsDeclarationSet.isValid () && mAttribute_mStaticStringMap.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_generationAdds::drop (void) {
  mAttribute_mIntrinsicsDeclarationSet.drop () ;
  mAttribute_mStaticStringMap.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_generationAdds::description (C_String & ioString,
                                         const int32_t inIndentation) const {
  ioString << "<struct @generationAdds:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mIntrinsicsDeclarationSet.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mStaticStringMap.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringset GALGAS_generationAdds::getter_mIntrinsicsDeclarationSet (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIntrinsicsDeclarationSet ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticStringMap GALGAS_generationAdds::getter_mStaticStringMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mStaticStringMap ;
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
//                        Abstract category method '@abstractInstructionIR llvmInstructionCode'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_abstractInstructionIR_llvmInstructionCode> gCategoryMethodTable_abstractInstructionIR_llvmInstructionCode ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_llvmInstructionCode (const int32_t inClassIndex,
                                              categoryMethodSignature_abstractInstructionIR_llvmInstructionCode inMethod) {
  gCategoryMethodTable_abstractInstructionIR_llvmInstructionCode.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_abstractInstructionIR_llvmInstructionCode (void) {
  gCategoryMethodTable_abstractInstructionIR_llvmInstructionCode.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractInstructionIR_llvmInstructionCode (NULL,
                                                                      freeCategoryMethod_abstractInstructionIR_llvmInstructionCode) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
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
    categoryMethodSignature_abstractInstructionIR_llvmInstructionCode f = NULL ;
    if (classIndex < gCategoryMethodTable_abstractInstructionIR_llvmInstructionCode.count ()) {
      f = gCategoryMethodTable_abstractInstructionIR_llvmInstructionCode (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_abstractInstructionIR_llvmInstructionCode.count ()) {
           f = gCategoryMethodTable_abstractInstructionIR_llvmInstructionCode (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_abstractInstructionIR_llvmInstructionCode.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
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
mAttribute_mExceptionCodeLLVMType (),
mAttribute_mExceptionLineLLVMType (),
mAttribute_mGlobalTaskVariableList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_generationContext::~ GALGAS_generationContext (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_generationContext::GALGAS_generationContext (const GALGAS_string & inOperand0,
                                                    const GALGAS_string & inOperand1,
                                                    const GALGAS_globalTaskVariableList & inOperand2) :
mAttribute_mExceptionCodeLLVMType (inOperand0),
mAttribute_mExceptionLineLLVMType (inOperand1),
mAttribute_mGlobalTaskVariableList (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_generationContext GALGAS_generationContext::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_generationContext (GALGAS_string::constructor_default (HERE),
                                   GALGAS_string::constructor_default (HERE),
                                   GALGAS_globalTaskVariableList::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_generationContext GALGAS_generationContext::constructor_new (const GALGAS_string & inOperand0,
                                                                    const GALGAS_string & inOperand1,
                                                                    const GALGAS_globalTaskVariableList & inOperand2 
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_generationContext result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_generationContext (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_generationContext::objectCompare (const GALGAS_generationContext & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mExceptionCodeLLVMType.objectCompare (inOperand.mAttribute_mExceptionCodeLLVMType) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mExceptionLineLLVMType.objectCompare (inOperand.mAttribute_mExceptionLineLLVMType) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mGlobalTaskVariableList.objectCompare (inOperand.mAttribute_mGlobalTaskVariableList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_generationContext::isValid (void) const {
  return mAttribute_mExceptionCodeLLVMType.isValid () && mAttribute_mExceptionLineLLVMType.isValid () && mAttribute_mGlobalTaskVariableList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_generationContext::drop (void) {
  mAttribute_mExceptionCodeLLVMType.drop () ;
  mAttribute_mExceptionLineLLVMType.drop () ;
  mAttribute_mGlobalTaskVariableList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_generationContext::description (C_String & ioString,
                                            const int32_t inIndentation) const {
  ioString << "<struct @generationContext:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mExceptionCodeLLVMType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mExceptionLineLLVMType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mGlobalTaskVariableList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_generationContext::getter_mExceptionCodeLLVMType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExceptionCodeLLVMType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_generationContext::getter_mExceptionLineLLVMType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExceptionLineLLVMType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalTaskVariableList GALGAS_generationContext::getter_mGlobalTaskVariableList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mGlobalTaskVariableList ;
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

GALGAS_taskListIR_2D_element::GALGAS_taskListIR_2D_element (void) :
mAttribute_mTaskName (),
mAttribute_mPriority (),
mAttribute_mStackSize () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskListIR_2D_element::~ GALGAS_taskListIR_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskListIR_2D_element::GALGAS_taskListIR_2D_element (const GALGAS_string & inOperand0,
                                                            const GALGAS_bigint & inOperand1,
                                                            const GALGAS_bigint & inOperand2) :
mAttribute_mTaskName (inOperand0),
mAttribute_mPriority (inOperand1),
mAttribute_mStackSize (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskListIR_2D_element GALGAS_taskListIR_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_taskListIR_2D_element (GALGAS_string::constructor_default (HERE),
                                       GALGAS_bigint::constructor_zero (HERE),
                                       GALGAS_bigint::constructor_zero (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskListIR_2D_element GALGAS_taskListIR_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                            const GALGAS_bigint & inOperand1,
                                                                            const GALGAS_bigint & inOperand2 
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_taskListIR_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_taskListIR_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_taskListIR_2D_element::objectCompare (const GALGAS_taskListIR_2D_element & inOperand) const {
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
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_taskListIR_2D_element::isValid (void) const {
  return mAttribute_mTaskName.isValid () && mAttribute_mPriority.isValid () && mAttribute_mStackSize.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskListIR_2D_element::drop (void) {
  mAttribute_mTaskName.drop () ;
  mAttribute_mPriority.drop () ;
  mAttribute_mStackSize.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskListIR_2D_element::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "<struct @taskListIR-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mTaskName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mPriority.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mStackSize.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_taskListIR_2D_element::getter_mTaskName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTaskName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint GALGAS_taskListIR_2D_element::getter_mPriority (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPriority ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint GALGAS_taskListIR_2D_element::getter_mStackSize (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mStackSize ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @taskListIR-element type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_taskListIR_2D_element ("taskListIR-element",
                                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_taskListIR_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_taskListIR_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_taskListIR_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_taskListIR_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskListIR_2D_element GALGAS_taskListIR_2D_element::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_taskListIR_2D_element result ;
  const GALGAS_taskListIR_2D_element * p = (const GALGAS_taskListIR_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_taskListIR_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("taskListIR-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootListIR_2D_element::GALGAS_bootListIR_2D_element (void) :
mAttribute_mInitLocation (),
mAttribute_mInstructionListIR (),
mAttribute_mEndOfInitLocation () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootListIR_2D_element::~ GALGAS_bootListIR_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootListIR_2D_element::GALGAS_bootListIR_2D_element (const GALGAS_location & inOperand0,
                                                            const GALGAS_instructionListIR & inOperand1,
                                                            const GALGAS_location & inOperand2) :
mAttribute_mInitLocation (inOperand0),
mAttribute_mInstructionListIR (inOperand1),
mAttribute_mEndOfInitLocation (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootListIR_2D_element GALGAS_bootListIR_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_bootListIR_2D_element (GALGAS_location::constructor_nowhere (HERE),
                                       GALGAS_instructionListIR::constructor_emptyList (HERE),
                                       GALGAS_location::constructor_nowhere (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootListIR_2D_element GALGAS_bootListIR_2D_element::constructor_new (const GALGAS_location & inOperand0,
                                                                            const GALGAS_instructionListIR & inOperand1,
                                                                            const GALGAS_location & inOperand2 
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bootListIR_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_bootListIR_2D_element (inOperand0, inOperand1, inOperand2) ;
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
    result = mAttribute_mInstructionListIR.objectCompare (inOperand.mAttribute_mInstructionListIR) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mEndOfInitLocation.objectCompare (inOperand.mAttribute_mEndOfInitLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_bootListIR_2D_element::isValid (void) const {
  return mAttribute_mInitLocation.isValid () && mAttribute_mInstructionListIR.isValid () && mAttribute_mEndOfInitLocation.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_bootListIR_2D_element::drop (void) {
  mAttribute_mInitLocation.drop () ;
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

GALGAS_initListIR_2D_element::GALGAS_initListIR_2D_element (void) :
mAttribute_mInitRequiredByProcList (),
mAttribute_mInitLocation (),
mAttribute_mInstructionListIR (),
mAttribute_mEndOfInitLocation () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initListIR_2D_element::~ GALGAS_initListIR_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initListIR_2D_element::GALGAS_initListIR_2D_element (const GALGAS_initRequiredByProcList & inOperand0,
                                                            const GALGAS_location & inOperand1,
                                                            const GALGAS_instructionListIR & inOperand2,
                                                            const GALGAS_location & inOperand3) :
mAttribute_mInitRequiredByProcList (inOperand0),
mAttribute_mInitLocation (inOperand1),
mAttribute_mInstructionListIR (inOperand2),
mAttribute_mEndOfInitLocation (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initListIR_2D_element GALGAS_initListIR_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_initListIR_2D_element (GALGAS_initRequiredByProcList::constructor_emptyList (HERE),
                                       GALGAS_location::constructor_nowhere (HERE),
                                       GALGAS_instructionListIR::constructor_emptyList (HERE),
                                       GALGAS_location::constructor_nowhere (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initListIR_2D_element GALGAS_initListIR_2D_element::constructor_new (const GALGAS_initRequiredByProcList & inOperand0,
                                                                            const GALGAS_location & inOperand1,
                                                                            const GALGAS_instructionListIR & inOperand2,
                                                                            const GALGAS_location & inOperand3 
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_initListIR_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_initListIR_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_initListIR_2D_element::objectCompare (const GALGAS_initListIR_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mInitRequiredByProcList.objectCompare (inOperand.mAttribute_mInitRequiredByProcList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInitLocation.objectCompare (inOperand.mAttribute_mInitLocation) ;
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

bool GALGAS_initListIR_2D_element::isValid (void) const {
  return mAttribute_mInitRequiredByProcList.isValid () && mAttribute_mInitLocation.isValid () && mAttribute_mInstructionListIR.isValid () && mAttribute_mEndOfInitLocation.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_initListIR_2D_element::drop (void) {
  mAttribute_mInitRequiredByProcList.drop () ;
  mAttribute_mInitLocation.drop () ;
  mAttribute_mInstructionListIR.drop () ;
  mAttribute_mEndOfInitLocation.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_initListIR_2D_element::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "<struct @initListIR-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mInitRequiredByProcList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInitLocation.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInstructionListIR.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mEndOfInitLocation.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initRequiredByProcList GALGAS_initListIR_2D_element::getter_mInitRequiredByProcList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInitRequiredByProcList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_initListIR_2D_element::getter_mInitLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInitLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR GALGAS_initListIR_2D_element::getter_mInstructionListIR (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstructionListIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_initListIR_2D_element::getter_mEndOfInitLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfInitLocation ;
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

GALGAS_instructionListAST_2D_element::GALGAS_instructionListAST_2D_element (void) :
mAttribute_mInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST_2D_element::~ GALGAS_instructionListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST_2D_element::GALGAS_instructionListAST_2D_element (const GALGAS_instructionAST & inOperand0) :
mAttribute_mInstruction (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST_2D_element GALGAS_instructionListAST_2D_element::constructor_new (const GALGAS_instructionAST & inOperand0 
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_instructionListAST_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_instructionListAST_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_instructionListAST_2D_element::objectCompare (const GALGAS_instructionListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mInstruction.objectCompare (inOperand.mAttribute_mInstruction) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_instructionListAST_2D_element::isValid (void) const {
  return mAttribute_mInstruction.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_instructionListAST_2D_element::drop (void) {
  mAttribute_mInstruction.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_instructionListAST_2D_element::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "<struct @instructionListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mInstruction.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
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
mAttribute_mFunctionListAST (),
mAttribute_mSectionListAST (),
mAttribute_mServiceListAST (),
mAttribute_mTargetList (),
mAttribute_mBootList (),
mAttribute_mInitList (),
mAttribute_mExceptionClauses (),
mAttribute_mExceptionTypes (),
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
                        const GALGAS_procedureDeclarationListAST & inOperand4,
                        const GALGAS_requiredProcedureDeclarationListAST & inOperand5,
                        const GALGAS_externProcedureDeclarationListAST & inOperand6,
                        const GALGAS_functionDeclarationListAST & inOperand7,
                        const GALGAS_sectionDeclarationListAST & inOperand8,
                        const GALGAS_serviceDeclarationListAST & inOperand9,
                        const GALGAS_lstringlist & inOperand10,
                        const GALGAS_bootList & inOperand11,
                        const GALGAS_initList & inOperand12,
                        const GALGAS_exceptionClauseListAST & inOperand13,
                        const GALGAS_exceptionTypesAST & inOperand14,
                        const GALGAS_taskList & inOperand15) :
mAttribute_mGlobalVarDeclarationList (inOperand0),
mAttribute_mDeclarationList (inOperand1),
mAttribute_mExtensionDeclarationListAST (inOperand2),
mAttribute_mControlRegisterDeclarationListAST (inOperand3),
mAttribute_mProcedureListAST (inOperand4),
mAttribute_mRequiredProcList (inOperand5),
mAttribute_mExternProcList (inOperand6),
mAttribute_mFunctionListAST (inOperand7),
mAttribute_mSectionListAST (inOperand8),
mAttribute_mServiceListAST (inOperand9),
mAttribute_mTargetList (inOperand10),
mAttribute_mBootList (inOperand11),
mAttribute_mInitList (inOperand12),
mAttribute_mExceptionClauses (inOperand13),
mAttribute_mExceptionTypes (inOperand14),
mAttribute_mTaskList (inOperand15) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ast GALGAS_ast::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_ast (GALGAS_globalVarDeclarationList::constructor_emptyList (HERE),
                     GALGAS_declarationListAST::constructor_emptyList (HERE),
                     GALGAS_extensionDeclarationListAST::constructor_emptyList (HERE),
                     GALGAS_controlRegisterDeclarationListAST::constructor_emptyList (HERE),
                     GALGAS_procedureDeclarationListAST::constructor_emptyList (HERE),
                     GALGAS_requiredProcedureDeclarationListAST::constructor_emptyList (HERE),
                     GALGAS_externProcedureDeclarationListAST::constructor_emptyList (HERE),
                     GALGAS_functionDeclarationListAST::constructor_emptyList (HERE),
                     GALGAS_sectionDeclarationListAST::constructor_emptyList (HERE),
                     GALGAS_serviceDeclarationListAST::constructor_emptyList (HERE),
                     GALGAS_lstringlist::constructor_emptyList (HERE),
                     GALGAS_bootList::constructor_emptySortedList (HERE),
                     GALGAS_initList::constructor_emptySortedList (HERE),
                     GALGAS_exceptionClauseListAST::constructor_emptySortedList (HERE),
                     GALGAS_exceptionTypesAST::constructor_emptyList (HERE),
                     GALGAS_taskList::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ast GALGAS_ast::constructor_new (const GALGAS_globalVarDeclarationList & inOperand0,
                                        const GALGAS_declarationListAST & inOperand1,
                                        const GALGAS_extensionDeclarationListAST & inOperand2,
                                        const GALGAS_controlRegisterDeclarationListAST & inOperand3,
                                        const GALGAS_procedureDeclarationListAST & inOperand4,
                                        const GALGAS_requiredProcedureDeclarationListAST & inOperand5,
                                        const GALGAS_externProcedureDeclarationListAST & inOperand6,
                                        const GALGAS_functionDeclarationListAST & inOperand7,
                                        const GALGAS_sectionDeclarationListAST & inOperand8,
                                        const GALGAS_serviceDeclarationListAST & inOperand9,
                                        const GALGAS_lstringlist & inOperand10,
                                        const GALGAS_bootList & inOperand11,
                                        const GALGAS_initList & inOperand12,
                                        const GALGAS_exceptionClauseListAST & inOperand13,
                                        const GALGAS_exceptionTypesAST & inOperand14,
                                        const GALGAS_taskList & inOperand15 
                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_ast result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid () && inOperand10.isValid () && inOperand11.isValid () && inOperand12.isValid () && inOperand13.isValid () && inOperand14.isValid () && inOperand15.isValid ()) {
    result = GALGAS_ast (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10, inOperand11, inOperand12, inOperand13, inOperand14, inOperand15) ;
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
    result = mAttribute_mFunctionListAST.objectCompare (inOperand.mAttribute_mFunctionListAST) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSectionListAST.objectCompare (inOperand.mAttribute_mSectionListAST) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mServiceListAST.objectCompare (inOperand.mAttribute_mServiceListAST) ;
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
    result = mAttribute_mExceptionClauses.objectCompare (inOperand.mAttribute_mExceptionClauses) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mExceptionTypes.objectCompare (inOperand.mAttribute_mExceptionTypes) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mTaskList.objectCompare (inOperand.mAttribute_mTaskList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_ast::isValid (void) const {
  return mAttribute_mGlobalVarDeclarationList.isValid () && mAttribute_mDeclarationList.isValid () && mAttribute_mExtensionDeclarationListAST.isValid () && mAttribute_mControlRegisterDeclarationListAST.isValid () && mAttribute_mProcedureListAST.isValid () && mAttribute_mRequiredProcList.isValid () && mAttribute_mExternProcList.isValid () && mAttribute_mFunctionListAST.isValid () && mAttribute_mSectionListAST.isValid () && mAttribute_mServiceListAST.isValid () && mAttribute_mTargetList.isValid () && mAttribute_mBootList.isValid () && mAttribute_mInitList.isValid () && mAttribute_mExceptionClauses.isValid () && mAttribute_mExceptionTypes.isValid () && mAttribute_mTaskList.isValid () ;
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
  mAttribute_mFunctionListAST.drop () ;
  mAttribute_mSectionListAST.drop () ;
  mAttribute_mServiceListAST.drop () ;
  mAttribute_mTargetList.drop () ;
  mAttribute_mBootList.drop () ;
  mAttribute_mInitList.drop () ;
  mAttribute_mExceptionClauses.drop () ;
  mAttribute_mExceptionTypes.drop () ;
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
    mAttribute_mFunctionListAST.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSectionListAST.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mServiceListAST.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mTargetList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mBootList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInitList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mExceptionClauses.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mExceptionTypes.description (ioString, inIndentation+1) ;
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

GALGAS_procedureDeclarationListAST GALGAS_ast::getter_mProcedureListAST (UNUSED_LOCATION_ARGS) const {
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

GALGAS_functionDeclarationListAST GALGAS_ast::getter_mFunctionListAST (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFunctionListAST ;
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

GALGAS_exceptionClauseListAST GALGAS_ast::getter_mExceptionClauses (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExceptionClauses ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_exceptionTypesAST GALGAS_ast::getter_mExceptionTypes (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExceptionTypes ;
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
//                                                                                                                     *
//                          Category method '@structureDeclaration functionSemanticAnalysis'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_structureDeclaration_functionSemanticAnalysis> gCategoryMethodTable_structureDeclaration_functionSemanticAnalysis ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_functionSemanticAnalysis (const int32_t inClassIndex,
                                                   categoryMethodSignature_structureDeclaration_functionSemanticAnalysis inMethod) {
  gCategoryMethodTable_structureDeclaration_functionSemanticAnalysis.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_functionSemanticAnalysis (const cPtr_structureDeclaration * inObject,
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
    categoryMethodSignature_structureDeclaration_functionSemanticAnalysis f = NULL ;
    if (classIndex < gCategoryMethodTable_structureDeclaration_functionSemanticAnalysis.count ()) {
      f = gCategoryMethodTable_structureDeclaration_functionSemanticAnalysis (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_structureDeclaration_functionSemanticAnalysis.count ()) {
           f = gCategoryMethodTable_structureDeclaration_functionSemanticAnalysis (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_structureDeclaration_functionSemanticAnalysis.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inStructureType, constin_inContext, io_ioTemporaries, io_ioIntermediateCodeStruct, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_structureDeclaration_functionSemanticAnalysis (const cPtr_structureDeclaration * inObject,
                                                                          const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inStructureType,
                                                                          const GALGAS_semanticContext constinArgument_inContext,
                                                                          GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                          GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_structureDeclaration * object = inObject ;
  macroValidSharedObject (object, cPtr_structureDeclaration) ;
  cEnumerator_functionDeclarationListAST enumerator_13135 (object->mAttribute_mFunctionDeclarationListAST, kEnumeration_up) ;
  while (enumerator_13135.hasCurrentObject ()) {
    GALGAS_stringset var_functionModeSet = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-structure-declaration.galgas", 332)) ;
    cEnumerator_lstringlist enumerator_13236 (enumerator_13135.current (HERE).mAttribute_mFunctionModeList, kEnumeration_up) ;
    while (enumerator_13236.hasCurrentObject ()) {
      constinArgument_inContext.mAttribute_mModeMap.method_searchKey (enumerator_13236.current (HERE).mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 334)) ;
      var_functionModeSet.addAssign_operation (enumerator_13236.current (HERE).mAttribute_mValue.mAttribute_string  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 335)) ;
      enumerator_13236.gotoNextObject () ;
    }
    GALGAS_bool var_warnIfUnused = GALGAS_bool (true) ;
    cEnumerator_lstringlist enumerator_13451 (enumerator_13135.current (HERE).mAttribute_mFunctionAttributeList, kEnumeration_up) ;
    while (enumerator_13451.hasCurrentObject ()) {
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_13451.current_mValue (HERE).mAttribute_string.objectCompare (function_noWarningIfUnusedAttribute (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 340)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        const enumGalgasBool test_1 = var_warnIfUnused.operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 341)).boolEnum () ;
        if (kBoolTrue == test_1) {
          GALGAS_location location_2 (enumerator_13451.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
          inCompiler->emitSemanticError (location_2, GALGAS_string ("duplicated attribute")  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 342)) ;
        }
        var_warnIfUnused = GALGAS_bool (false) ;
      }else if (kBoolFalse == test_0) {
        GALGAS_location location_3 (enumerator_13451.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_3, GALGAS_string ("unknown attribute")  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 346)) ;
      }
      enumerator_13451.gotoNextObject () ;
    }
    GALGAS_variableMap var_variableMap = function_initialVariableMap (function_funcNameForInvocationGraph (constinArgument_inStructureType, enumerator_13135.current (HERE).mAttribute_mFunctionName, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 351)).mAttribute_string, constinArgument_inContext, var_functionModeSet.getter_hasKey (GALGAS_string ("user") COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 353)), GALGAS_accessKind::constructor_readWriteAccess (SOURCE_FILE ("type-structure-declaration.galgas", 354)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 350)) ;
    {
    var_variableMap.setter_insertUsedLocalConstant (GALGAS_lstring::constructor_new (GALGAS_string ("self"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 359))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 359)), constinArgument_inStructureType, GALGAS_bool (true), GALGAS_objectInMemoryIR::constructor_localValue (constinArgument_inStructureType, GALGAS_string ("self")  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 362)), GALGAS_bool (true), GALGAS_controlRegisterBitSliceAccessMap::constructor_emptyMap (SOURCE_FILE ("type-structure-declaration.galgas", 364)), GALGAS_bool (false), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 358)) ;
    }
    GALGAS_lstring var_resultVarName = GALGAS_lstring::constructor_new (GALGAS_string ("result"), enumerator_13135.current (HERE).mAttribute_mResultTypeName.mAttribute_location  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 369)) ;
    GALGAS_unifiedTypeMap_2D_proxy var_resultType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mAttribute_mTypeMap, enumerator_13135.current (HERE).mAttribute_mResultTypeName, inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 370)) ;
    {
    var_variableMap.setter_insertOutputFormalArgument (var_resultVarName, var_resultType, GALGAS_bool (true), GALGAS_objectInMemoryIR::constructor_localValue (var_resultType, var_resultVarName.mAttribute_string  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 375)), GALGAS_bool (true), GALGAS_controlRegisterBitSliceAccessMap::constructor_emptyMap (SOURCE_FILE ("type-structure-declaration.galgas", 377)), GALGAS_bool (true), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 371)) ;
    }
    GALGAS_procFormalArgumentListForGeneration var_formalArguments = GALGAS_procFormalArgumentListForGeneration::constructor_emptyList (SOURCE_FILE ("type-structure-declaration.galgas", 382)) ;
    var_formalArguments.addAssign_operation (GALGAS_procFormalArgumentPassingMode::constructor_inputOutput (SOURCE_FILE ("type-structure-declaration.galgas", 383)), constinArgument_inStructureType, function_llvmNameForLocalVariable (GALGAS_string ("self"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 383))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 383)) ;
    cEnumerator_funcFormalArgumentList enumerator_15115 (enumerator_13135.current (HERE).mAttribute_mFuncFormalArgumentList, kEnumeration_up) ;
    while (enumerator_15115.hasCurrentObject ()) {
      GALGAS_unifiedTypeMap_2D_proxy var_typeProxy = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mAttribute_mTypeMap, enumerator_15115.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 385)) ;
      {
      var_variableMap.setter_insertConstantInputFormalArgument (enumerator_15115.current_mFormalArgumentName (HERE), var_typeProxy, GALGAS_bool (true), GALGAS_objectInMemoryIR::constructor_localValue (var_typeProxy, enumerator_15115.current_mFormalArgumentName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 390)), var_typeProxy.getter_copiable (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 391)), GALGAS_controlRegisterBitSliceAccessMap::constructor_emptyMap (SOURCE_FILE ("type-structure-declaration.galgas", 392)), GALGAS_bool (false), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 386)) ;
      }
      var_formalArguments.addAssign_operation (GALGAS_procFormalArgumentPassingMode::constructor_input (SOURCE_FILE ("type-structure-declaration.galgas", 396)), var_typeProxy, function_llvmNameForLocalVariable (enumerator_15115.current_mFormalArgumentName (HERE).mAttribute_string, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 396))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 396)) ;
      enumerator_15115.gotoNextObject () ;
    }
    GALGAS_lstring var_routineNameForInvocationGraph = function_funcNameForInvocationGraph (constinArgument_inStructureType, enumerator_13135.current (HERE).mAttribute_mFunctionName, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 399)) ;
    const enumGalgasBool test_4 = ioArgument_ioTemporaries.mAttribute_mSubprogramInvocationGraph.getter_isNodeDefined (var_routineNameForInvocationGraph.mAttribute_string COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 400)).operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 400)).boolEnum () ;
    if (kBoolTrue == test_4) {
      {
      ioArgument_ioTemporaries.mAttribute_mSubprogramInvocationGraph.setter_addNode (var_routineNameForInvocationGraph, var_routineNameForInvocationGraph, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 401)) ;
      }
    }
    GALGAS_instructionListIR var_instructionGenerationList = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("type-structure-declaration.galgas", 407)) ;
    categoryMethod_analyzeRoutineInstructionList (enumerator_13135.current (HERE).mAttribute_mInstructionList, constinArgument_inStructureType, var_routineNameForInvocationGraph, constinArgument_inContext, var_functionModeSet, var_functionModeSet.getter_hasKey (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 413)) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 413)).operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 413)), ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct.mAttribute_mStaticStringMap, var_variableMap, var_instructionGenerationList, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 408)) ;
    var_variableMap.method_checkAutomatonStates (enumerator_13135.current (HERE).mAttribute_mEndOfFuncLocation, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 420)) ;
    {
    ioArgument_ioIntermediateCodeStruct.mAttribute_mFunctionMapIR.setter_insertKey (GALGAS_lstring::constructor_new (object->mAttribute_mStructureName.mAttribute_string.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 423)).add_operation (enumerator_13135.current (HERE).mAttribute_mFunctionName.getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 423)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 423)), enumerator_13135.current (HERE).mAttribute_mFunctionName.mAttribute_location  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 423)), var_formalArguments, var_instructionGenerationList, var_resultType, var_resultVarName.mAttribute_string, var_warnIfUnused, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 422)) ;
    }
    enumerator_13135.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_structureDeclaration_functionSemanticAnalysis (void) {
  enterCategoryMethod_functionSemanticAnalysis (kTypeDescriptor_GALGAS_structureDeclaration.mSlotID,
                                                categoryMethod_structureDeclaration_functionSemanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_structureDeclaration_functionSemanticAnalysis (void) {
  gCategoryMethodTable_structureDeclaration_functionSemanticAnalysis.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_structureDeclaration_functionSemanticAnalysis (defineCategoryMethod_structureDeclaration_functionSemanticAnalysis,
                                                                          freeCategoryMethod_structureDeclaration_functionSemanticAnalysis) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Category method '@structureDeclaration procedureSemanticAnalysis'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_structureDeclaration_procedureSemanticAnalysis> gCategoryMethodTable_structureDeclaration_procedureSemanticAnalysis ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_procedureSemanticAnalysis (const int32_t inClassIndex,
                                                    categoryMethodSignature_structureDeclaration_procedureSemanticAnalysis inMethod) {
  gCategoryMethodTable_structureDeclaration_procedureSemanticAnalysis.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_procedureSemanticAnalysis (const cPtr_structureDeclaration * inObject,
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
    categoryMethodSignature_structureDeclaration_procedureSemanticAnalysis f = NULL ;
    if (classIndex < gCategoryMethodTable_structureDeclaration_procedureSemanticAnalysis.count ()) {
      f = gCategoryMethodTable_structureDeclaration_procedureSemanticAnalysis (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_structureDeclaration_procedureSemanticAnalysis.count ()) {
           f = gCategoryMethodTable_structureDeclaration_procedureSemanticAnalysis (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_structureDeclaration_procedureSemanticAnalysis.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inStructureType, constin_inContext, io_ioTemporaries, io_ioIntermediateCodeStruct, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_structureDeclaration_procedureSemanticAnalysis (const cPtr_structureDeclaration * inObject,
                                                                           const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inStructureType,
                                                                           const GALGAS_semanticContext constinArgument_inContext,
                                                                           GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                           GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_structureDeclaration * object = inObject ;
  macroValidSharedObject (object, cPtr_structureDeclaration) ;
  cEnumerator_procedureDeclarationListAST enumerator_17382 (object->mAttribute_mProcedureDeclarationListAST, kEnumeration_up) ;
  while (enumerator_17382.hasCurrentObject ()) {
    {
    routine_routineSemanticAnalysis (constinArgument_inStructureType, GALGAS_routineKind::constructor_procedure (SOURCE_FILE ("type-structure-declaration.galgas", 444)), enumerator_17382.current (HERE).mAttribute_mProcedureModeList, enumerator_17382.current (HERE).mAttribute_mProcedureName, enumerator_17382.current (HERE).mAttribute_mProcedureFormalArgumentList, enumerator_17382.current (HERE).mAttribute_mProcedureInstructionList, enumerator_17382.current (HERE).mAttribute_mEndOfProcedureDeclaration, GALGAS_bool (true), GALGAS_bool (false), GALGAS_bool (false), GALGAS_bool (false), GALGAS_accessKind::constructor_readWriteAccess (SOURCE_FILE ("type-structure-declaration.galgas", 454)), constinArgument_inContext, ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct, inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 442)) ;
    }
    enumerator_17382.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_structureDeclaration_procedureSemanticAnalysis (void) {
  enterCategoryMethod_procedureSemanticAnalysis (kTypeDescriptor_GALGAS_structureDeclaration.mSlotID,
                                                 categoryMethod_structureDeclaration_procedureSemanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_structureDeclaration_procedureSemanticAnalysis (void) {
  gCategoryMethodTable_structureDeclaration_procedureSemanticAnalysis.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_structureDeclaration_procedureSemanticAnalysis (defineCategoryMethod_structureDeclaration_procedureSemanticAnalysis,
                                                                           freeCategoryMethod_structureDeclaration_procedureSemanticAnalysis) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Category getter '@integerDeclaration typeName'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryGetterSignature_integerDeclaration_typeName> gCategoryGetterTable_integerDeclaration_typeName ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryGetter_typeName (const int32_t inClassIndex,
                                   categoryGetterSignature_integerDeclaration_typeName inGetter) {
  gCategoryGetterTable_integerDeclaration_typeName.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string callCategoryGetter_typeName (const cPtr_integerDeclaration * inObject,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_integerDeclaration) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryGetterSignature_integerDeclaration_typeName f = NULL ;
    if (classIndex < gCategoryGetterTable_integerDeclaration_typeName.count ()) {
      f = gCategoryGetterTable_integerDeclaration_typeName (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryGetterTable_integerDeclaration_typeName.count ()) {
           f = gCategoryGetterTable_integerDeclaration_typeName (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryGetterTable_integerDeclaration_typeName.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
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

static void defineCategoryGetter_integerDeclaration_typeName (void) {
  enterCategoryGetter_typeName (kTypeDescriptor_GALGAS_integerDeclaration.mSlotID,
                                extensionGetter_integerDeclaration_typeName) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryGetter_integerDeclaration_typeName (void) {
  gCategoryGetterTable_integerDeclaration_typeName.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_integerDeclaration_typeName (defineCategoryGetter_integerDeclaration_typeName,
                                                        freeCategoryGetter_integerDeclaration_typeName) ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalVarDeclarationList_2D_element::GALGAS_globalVarDeclarationList_2D_element (void) :
mAttribute_mTypeName (),
mAttribute_mVarName (),
mAttribute_mSourceExpression (),
mAttribute_mAllowedProcList (),
mAttribute_mAllowedInitList (),
mAttribute_mAllowedExceptionList (),
mAttribute_mAllowedFunctionList () {
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
                                                                                        const GALGAS_allowedExceptionList & inOperand5,
                                                                                        const GALGAS_allowedFunctionList & inOperand6) :
mAttribute_mTypeName (inOperand0),
mAttribute_mVarName (inOperand1),
mAttribute_mSourceExpression (inOperand2),
mAttribute_mAllowedProcList (inOperand3),
mAttribute_mAllowedInitList (inOperand4),
mAttribute_mAllowedExceptionList (inOperand5),
mAttribute_mAllowedFunctionList (inOperand6) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalVarDeclarationList_2D_element GALGAS_globalVarDeclarationList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                        const GALGAS_lstring & inOperand1,
                                                                                                        const GALGAS_expressionAST & inOperand2,
                                                                                                        const GALGAS_allowedRoutineList & inOperand3,
                                                                                                        const GALGAS_allowedInitList & inOperand4,
                                                                                                        const GALGAS_allowedExceptionList & inOperand5,
                                                                                                        const GALGAS_allowedFunctionList & inOperand6 
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_globalVarDeclarationList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid ()) {
    result = GALGAS_globalVarDeclarationList_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6) ;
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
    result = mAttribute_mAllowedExceptionList.objectCompare (inOperand.mAttribute_mAllowedExceptionList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mAllowedFunctionList.objectCompare (inOperand.mAttribute_mAllowedFunctionList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_globalVarDeclarationList_2D_element::isValid (void) const {
  return mAttribute_mTypeName.isValid () && mAttribute_mVarName.isValid () && mAttribute_mSourceExpression.isValid () && mAttribute_mAllowedProcList.isValid () && mAttribute_mAllowedInitList.isValid () && mAttribute_mAllowedExceptionList.isValid () && mAttribute_mAllowedFunctionList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_globalVarDeclarationList_2D_element::drop (void) {
  mAttribute_mTypeName.drop () ;
  mAttribute_mVarName.drop () ;
  mAttribute_mSourceExpression.drop () ;
  mAttribute_mAllowedProcList.drop () ;
  mAttribute_mAllowedInitList.drop () ;
  mAttribute_mAllowedExceptionList.drop () ;
  mAttribute_mAllowedFunctionList.drop () ;
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
    mAttribute_mAllowedExceptionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mAllowedFunctionList.description (ioString, inIndentation+1) ;
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

GALGAS_allowedExceptionList GALGAS_globalVarDeclarationList_2D_element::getter_mAllowedExceptionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAllowedExceptionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedFunctionList GALGAS_globalVarDeclarationList_2D_element::getter_mAllowedFunctionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAllowedFunctionList ;
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
//                        Category method '@globalVarDeclarationList-element semanticAnalysis'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_semanticAnalysis (const GALGAS_globalVarDeclarationList_2D_element inObject,
                                      const GALGAS_semanticContext constinArgument_inContext,
                                      GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                      C_Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_proxy var_inferredType ;
  GALGAS_stringset var_executionModeSet ;
  GALGAS_allowedRoutineMap var_allowedProcedureMap ;
  GALGAS_valueIR var_expressionGeneratedCode ;
  GALGAS_bool var_isConstant ;
  constinArgument_inContext.mAttribute_mGlobalVariableMap.method_searchKey (inObject.mAttribute_mVarName, var_inferredType, var_executionModeSet, var_allowedProcedureMap, var_expressionGeneratedCode, var_isConstant, inCompiler COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 299)) ;
  {
  ioArgument_ioIntermediateCodeStruct.mAttribute_mGlobalVariableMap.setter_insertKey (inObject.mAttribute_mVarName, var_inferredType, GALGAS_bool (kIsStrictSup, var_executionModeSet.getter_count (SOURCE_FILE ("declaration-global-variable.galgas", 310)).objectCompare (GALGAS_uint ((uint32_t) 1U))), var_expressionGeneratedCode, inCompiler COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 307)) ;
  }
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
                                                        const GALGAS_procedureDeclarationListAST & inOperand4,
                                                        const GALGAS_location & inOperand5) :
mAttribute_mTaskName (inOperand0),
mAttribute_mPriority (inOperand1),
mAttribute_mStackSize (inOperand2),
mAttribute_mVarList (inOperand3),
mAttribute_mTaskProcList (inOperand4),
mAttribute_mEndOfTaskDeclaration (inOperand5) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskList_2D_element GALGAS_taskList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_taskList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                     GALGAS_lbigint::constructor_default (HERE),
                                     GALGAS_lbigint::constructor_default (HERE),
                                     GALGAS_taskVarListAST::constructor_emptyList (HERE),
                                     GALGAS_procedureDeclarationListAST::constructor_emptyList (HERE),
                                     GALGAS_location::constructor_nowhere (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskList_2D_element GALGAS_taskList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                        const GALGAS_lbigint & inOperand1,
                                                                        const GALGAS_lbigint & inOperand2,
                                                                        const GALGAS_taskVarListAST & inOperand3,
                                                                        const GALGAS_procedureDeclarationListAST & inOperand4,
                                                                        const GALGAS_location & inOperand5 
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_taskList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid ()) {
    result = GALGAS_taskList_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5) ;
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
    result = mAttribute_mEndOfTaskDeclaration.objectCompare (inOperand.mAttribute_mEndOfTaskDeclaration) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_taskList_2D_element::isValid (void) const {
  return mAttribute_mTaskName.isValid () && mAttribute_mPriority.isValid () && mAttribute_mStackSize.isValid () && mAttribute_mVarList.isValid () && mAttribute_mTaskProcList.isValid () && mAttribute_mEndOfTaskDeclaration.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskList_2D_element::drop (void) {
  mAttribute_mTaskName.drop () ;
  mAttribute_mPriority.drop () ;
  mAttribute_mStackSize.drop () ;
  mAttribute_mVarList.drop () ;
  mAttribute_mTaskProcList.drop () ;
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

GALGAS_procedureDeclarationListAST GALGAS_taskList_2D_element::getter_mTaskProcList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTaskProcList ;
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

GALGAS_exceptionClauseListAST_2D_element::GALGAS_exceptionClauseListAST_2D_element (void) :
mAttribute_mExceptionClauseName (),
mAttribute_mExceptionInstructionList (),
mAttribute_mEndOfExceptionInstructions (),
mAttribute_mPriority (),
mAttribute_mLocationPriority () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_exceptionClauseListAST_2D_element::~ GALGAS_exceptionClauseListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_exceptionClauseListAST_2D_element::GALGAS_exceptionClauseListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                    const GALGAS_instructionListAST & inOperand1,
                                                                                    const GALGAS_location & inOperand2,
                                                                                    const GALGAS_lbigint & inOperand3,
                                                                                    const GALGAS_location & inOperand4) :
mAttribute_mExceptionClauseName (inOperand0),
mAttribute_mExceptionInstructionList (inOperand1),
mAttribute_mEndOfExceptionInstructions (inOperand2),
mAttribute_mPriority (inOperand3),
mAttribute_mLocationPriority (inOperand4) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_exceptionClauseListAST_2D_element GALGAS_exceptionClauseListAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_exceptionClauseListAST_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                   GALGAS_instructionListAST::constructor_emptyList (HERE),
                                                   GALGAS_location::constructor_nowhere (HERE),
                                                   GALGAS_lbigint::constructor_default (HERE),
                                                   GALGAS_location::constructor_nowhere (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_exceptionClauseListAST_2D_element GALGAS_exceptionClauseListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                    const GALGAS_instructionListAST & inOperand1,
                                                                                                    const GALGAS_location & inOperand2,
                                                                                                    const GALGAS_lbigint & inOperand3,
                                                                                                    const GALGAS_location & inOperand4 
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_exceptionClauseListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_exceptionClauseListAST_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_exceptionClauseListAST_2D_element::objectCompare (const GALGAS_exceptionClauseListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mExceptionClauseName.objectCompare (inOperand.mAttribute_mExceptionClauseName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mExceptionInstructionList.objectCompare (inOperand.mAttribute_mExceptionInstructionList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mEndOfExceptionInstructions.objectCompare (inOperand.mAttribute_mEndOfExceptionInstructions) ;
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

bool GALGAS_exceptionClauseListAST_2D_element::isValid (void) const {
  return mAttribute_mExceptionClauseName.isValid () && mAttribute_mExceptionInstructionList.isValid () && mAttribute_mEndOfExceptionInstructions.isValid () && mAttribute_mPriority.isValid () && mAttribute_mLocationPriority.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_exceptionClauseListAST_2D_element::drop (void) {
  mAttribute_mExceptionClauseName.drop () ;
  mAttribute_mExceptionInstructionList.drop () ;
  mAttribute_mEndOfExceptionInstructions.drop () ;
  mAttribute_mPriority.drop () ;
  mAttribute_mLocationPriority.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_exceptionClauseListAST_2D_element::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "<struct @exceptionClauseListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mExceptionClauseName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mExceptionInstructionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mEndOfExceptionInstructions.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mPriority.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mLocationPriority.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_exceptionClauseListAST_2D_element::getter_mExceptionClauseName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExceptionClauseName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST GALGAS_exceptionClauseListAST_2D_element::getter_mExceptionInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExceptionInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_exceptionClauseListAST_2D_element::getter_mEndOfExceptionInstructions (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfExceptionInstructions ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbigint GALGAS_exceptionClauseListAST_2D_element::getter_mPriority (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPriority ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_exceptionClauseListAST_2D_element::getter_mLocationPriority (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLocationPriority ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @exceptionClauseListAST-element type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_exceptionClauseListAST_2D_element ("exceptionClauseListAST-element",
                                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_exceptionClauseListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_exceptionClauseListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_exceptionClauseListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_exceptionClauseListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_exceptionClauseListAST_2D_element GALGAS_exceptionClauseListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_exceptionClauseListAST_2D_element result ;
  const GALGAS_exceptionClauseListAST_2D_element * p = (const GALGAS_exceptionClauseListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_exceptionClauseListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("exceptionClauseListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Category method '@exceptionClauseListAST-element exceptionSemanticAnalysis'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_exceptionSemanticAnalysis (const GALGAS_exceptionClauseListAST_2D_element inObject,
                                               const GALGAS_semanticContext constinArgument_inContext,
                                               GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                               GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  const enumGalgasBool test_0 = constinArgument_inContext.mAttribute_mModeMap.getter_hasKey (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 113)) COMMA_SOURCE_FILE ("panic.galgas", 113)).operator_not (SOURCE_FILE ("panic.galgas", 113)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (inObject.mAttribute_mExceptionClauseName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_1, GALGAS_string ("the `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 114)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 114)).add_operation (GALGAS_string (" mode should be defined in order to use a panic clause"), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 114))  COMMA_SOURCE_FILE ("panic.galgas", 114)) ;
  }
  GALGAS_lstring var_routineNameForInvocationGraph = function_exceptionNameForInvocationGraph (inObject.mAttribute_mExceptionClauseName.mAttribute_string, inObject.mAttribute_mPriority, inCompiler COMMA_SOURCE_FILE ("panic.galgas", 116)) ;
  GALGAS_variableMap var_variableMap = function_initialVariableMap (var_routineNameForInvocationGraph.mAttribute_string, constinArgument_inContext, GALGAS_bool (false), GALGAS_accessKind::constructor_readWriteAccess (SOURCE_FILE ("panic.galgas", 122)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 118)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_StaticStringType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mAttribute_mTypeMap, function_staticStringTypeName (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 126)).getter_nowhere (SOURCE_FILE ("panic.galgas", 126)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 126)) ;
  GALGAS_lstring var_codeArg = GALGAS_lstring::constructor_new (GALGAS_string ("CODE"), inObject.mAttribute_mExceptionClauseName.mAttribute_location  COMMA_SOURCE_FILE ("panic.galgas", 127)) ;
  {
  var_variableMap.setter_insertUsedConstantInputFormalArgument (var_codeArg, constinArgument_inContext.mAttribute_mExceptionCodeType, GALGAS_bool (true), GALGAS_objectInMemoryIR::constructor_localValue (constinArgument_inContext.mAttribute_mExceptionCodeType, var_codeArg.mAttribute_string  COMMA_SOURCE_FILE ("panic.galgas", 132)), constinArgument_inContext.mAttribute_mExceptionCodeType.getter_copiable (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 133)), GALGAS_controlRegisterBitSliceAccessMap::constructor_emptyMap (SOURCE_FILE ("panic.galgas", 134)), GALGAS_bool (false), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 128)) ;
  }
  GALGAS_lstring var_fileArg = GALGAS_lstring::constructor_new (GALGAS_string ("FILE"), inObject.mAttribute_mExceptionClauseName.mAttribute_location  COMMA_SOURCE_FILE ("panic.galgas", 138)) ;
  {
  var_variableMap.setter_insertUsedConstantInputFormalArgument (var_fileArg, var_StaticStringType, GALGAS_bool (true), GALGAS_objectInMemoryIR::constructor_localValue (var_StaticStringType, var_fileArg.mAttribute_string  COMMA_SOURCE_FILE ("panic.galgas", 143)), var_StaticStringType.getter_copiable (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 144)), GALGAS_controlRegisterBitSliceAccessMap::constructor_emptyMap (SOURCE_FILE ("panic.galgas", 145)), GALGAS_bool (false), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 139)) ;
  }
  GALGAS_lstring var_lineArg = GALGAS_lstring::constructor_new (GALGAS_string ("LINE"), inObject.mAttribute_mExceptionClauseName.mAttribute_location  COMMA_SOURCE_FILE ("panic.galgas", 149)) ;
  {
  var_variableMap.setter_insertUsedConstantInputFormalArgument (var_lineArg, constinArgument_inContext.mAttribute_mExceptionLineType, GALGAS_bool (true), GALGAS_objectInMemoryIR::constructor_localValue (constinArgument_inContext.mAttribute_mExceptionLineType, var_lineArg.mAttribute_string  COMMA_SOURCE_FILE ("panic.galgas", 154)), constinArgument_inContext.mAttribute_mExceptionLineType.getter_copiable (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 155)), GALGAS_controlRegisterBitSliceAccessMap::constructor_emptyMap (SOURCE_FILE ("panic.galgas", 156)), GALGAS_bool (false), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 150)) ;
  }
  const enumGalgasBool test_2 = ioArgument_ioTemporaries.mAttribute_mSubprogramInvocationGraph.getter_isNodeDefined (var_routineNameForInvocationGraph.mAttribute_string COMMA_SOURCE_FILE ("panic.galgas", 161)).operator_not (SOURCE_FILE ("panic.galgas", 161)).boolEnum () ;
  if (kBoolTrue == test_2) {
    {
    ioArgument_ioTemporaries.mAttribute_mSubprogramInvocationGraph.setter_addNode (var_routineNameForInvocationGraph, var_routineNameForInvocationGraph, inCompiler COMMA_SOURCE_FILE ("panic.galgas", 162)) ;
    }
  }
  GALGAS_instructionListIR var_instructionGenerationList = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("panic.galgas", 168)) ;
  GALGAS_stringset temp_3 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("panic.galgas", 173)) ;
  temp_3.addAssign_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 173))  COMMA_SOURCE_FILE ("panic.galgas", 173)) ;
  categoryMethod_analyzeRoutineInstructionList (inObject.mAttribute_mExceptionInstructionList, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("panic.galgas", 170)), var_routineNameForInvocationGraph, constinArgument_inContext, temp_3, GALGAS_bool (false), ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct.mAttribute_mStaticStringMap, var_variableMap, var_instructionGenerationList, inCompiler COMMA_SOURCE_FILE ("panic.galgas", 169)) ;
  var_variableMap.method_checkAutomatonStates (inObject.mAttribute_mEndOfExceptionInstructions, inCompiler COMMA_SOURCE_FILE ("panic.galgas", 181)) ;
  const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, inObject.mAttribute_mExceptionClauseName.mAttribute_string.objectCompare (GALGAS_string ("setup"))).boolEnum () ;
  if (kBoolTrue == test_4) {
    {
    ioArgument_ioTemporaries.mAttribute_mExceptionSetupRoutinePriorityMap.setter_insertSetupKey (GALGAS_lstring::constructor_new (inObject.mAttribute_mPriority.mAttribute_bigint.getter_string (SOURCE_FILE ("panic.galgas", 184)), inObject.mAttribute_mLocationPriority  COMMA_SOURCE_FILE ("panic.galgas", 184)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 184)) ;
    }
    ioArgument_ioIntermediateCodeStruct.mAttribute_mPanicSetupInstructionListIR.plusAssign_operation(var_instructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 185)) ;
  }else if (kBoolFalse == test_4) {
    const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, inObject.mAttribute_mExceptionClauseName.mAttribute_string.objectCompare (GALGAS_string ("loop"))).boolEnum () ;
    if (kBoolTrue == test_5) {
      {
      ioArgument_ioTemporaries.mAttribute_mExceptionLoopRoutinePriorityMap.setter_insertLoopKey (GALGAS_lstring::constructor_new (inObject.mAttribute_mPriority.mAttribute_bigint.getter_string (SOURCE_FILE ("panic.galgas", 187)), inObject.mAttribute_mLocationPriority  COMMA_SOURCE_FILE ("panic.galgas", 187)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 187)) ;
      }
      ioArgument_ioIntermediateCodeStruct.mAttribute_mPanicLoopInstructionListIR.plusAssign_operation(var_instructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 188)) ;
    }else if (kBoolFalse == test_5) {
      GALGAS_location location_6 (inObject.mAttribute_mExceptionClauseName.getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_6, GALGAS_string ("exception routine name should be \"setup\" or \"loop\"")  COMMA_SOURCE_FILE ("panic.galgas", 190)) ;
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Category method '@bootList-element bootSemanticAnalysis'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_bootSemanticAnalysis (const GALGAS_bootList_2D_element inObject,
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
  GALGAS_lstring var_routineNameForInvocationGraph = GALGAS_lstring::constructor_new (GALGAS_string ("boot ").add_operation (inObject.mAttribute_mPriority.getter_string (SOURCE_FILE ("declaration-boot.galgas", 73)), inCompiler COMMA_SOURCE_FILE ("declaration-boot.galgas", 73)), inObject.mAttribute_mPriorityLocation  COMMA_SOURCE_FILE ("declaration-boot.galgas", 73)) ;
  const enumGalgasBool test_1 = ioArgument_ioTemporaries.mAttribute_mSubprogramInvocationGraph.getter_isNodeDefined (var_routineNameForInvocationGraph.mAttribute_string COMMA_SOURCE_FILE ("declaration-boot.galgas", 74)).operator_not (SOURCE_FILE ("declaration-boot.galgas", 74)).boolEnum () ;
  if (kBoolTrue == test_1) {
    {
    ioArgument_ioTemporaries.mAttribute_mSubprogramInvocationGraph.setter_addNode (var_routineNameForInvocationGraph, var_routineNameForInvocationGraph, inCompiler COMMA_SOURCE_FILE ("declaration-boot.galgas", 75)) ;
    }
  }
  GALGAS_variableMap var_variableMap = function_initialVariableMap (var_routineNameForInvocationGraph.mAttribute_string, constinArgument_inContext, GALGAS_bool (false), GALGAS_accessKind::constructor_readWriteAccess (SOURCE_FILE ("declaration-boot.galgas", 85)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("declaration-boot.galgas", 81)) ;
  GALGAS_instructionListIR var_instructionGenerationList = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("declaration-boot.galgas", 89)) ;
  GALGAS_stringset temp_2 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("declaration-boot.galgas", 94)) ;
  temp_2.addAssign_operation (function_bootModeName (inCompiler COMMA_SOURCE_FILE ("declaration-boot.galgas", 94))  COMMA_SOURCE_FILE ("declaration-boot.galgas", 94)) ;
  categoryMethod_analyzeRoutineInstructionList (inObject.mAttribute_mInstructionList, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-boot.galgas", 91)), var_routineNameForInvocationGraph, constinArgument_inContext, temp_2, GALGAS_bool (true), ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct.mAttribute_mStaticStringMap, var_variableMap, var_instructionGenerationList, inCompiler COMMA_SOURCE_FILE ("declaration-boot.galgas", 90)) ;
  var_variableMap.method_checkAutomatonStates (inObject.mAttribute_mEndOfBootLocation, inCompiler COMMA_SOURCE_FILE ("declaration-boot.galgas", 102)) ;
  ioArgument_ioIntermediateCodeStruct.mAttribute_mBootList.addAssign_operation (inObject.mAttribute_mBootLocation, var_instructionGenerationList, inObject.mAttribute_mEndOfBootLocation  COMMA_SOURCE_FILE ("declaration-boot.galgas", 104)) ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initList_2D_element::GALGAS_initList_2D_element (void) :
mAttribute_mInitLocation (),
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
                                                        const GALGAS_initRequiredByProcList & inOperand1,
                                                        const GALGAS_instructionListAST & inOperand2,
                                                        const GALGAS_location & inOperand3,
                                                        const GALGAS_lbigint & inOperand4) :
mAttribute_mInitLocation (inOperand0),
mAttribute_mRequiredByProcList (inOperand1),
mAttribute_mInstructionList (inOperand2),
mAttribute_mEndOfInitLocation (inOperand3),
mAttribute_mPriority (inOperand4) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initList_2D_element GALGAS_initList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_initList_2D_element (GALGAS_location::constructor_nowhere (HERE),
                                     GALGAS_initRequiredByProcList::constructor_emptyList (HERE),
                                     GALGAS_instructionListAST::constructor_emptyList (HERE),
                                     GALGAS_location::constructor_nowhere (HERE),
                                     GALGAS_lbigint::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initList_2D_element GALGAS_initList_2D_element::constructor_new (const GALGAS_location & inOperand0,
                                                                        const GALGAS_initRequiredByProcList & inOperand1,
                                                                        const GALGAS_instructionListAST & inOperand2,
                                                                        const GALGAS_location & inOperand3,
                                                                        const GALGAS_lbigint & inOperand4 
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_initList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_initList_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
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
  return mAttribute_mInitLocation.isValid () && mAttribute_mRequiredByProcList.isValid () && mAttribute_mInstructionList.isValid () && mAttribute_mEndOfInitLocation.isValid () && mAttribute_mPriority.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_initList_2D_element::drop (void) {
  mAttribute_mInitLocation.drop () ;
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

GALGAS_initRequiredByProcList GALGAS_initList_2D_element::getter_mRequiredByProcList (UNUSED_LOCATION_ARGS) const {
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
//                              Category method '@initList-element initSemanticAnalysis'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_initSemanticAnalysis (const GALGAS_initList_2D_element inObject,
                                          const GALGAS_semanticContext constinArgument_inContext,
                                          GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                          GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                          C_Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  const enumGalgasBool test_0 = constinArgument_inContext.mAttribute_mModeMap.getter_hasKey (function_initModeName (inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 101)) COMMA_SOURCE_FILE ("declaration-init.galgas", 101)).operator_not (SOURCE_FILE ("declaration-init.galgas", 101)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (inObject.mAttribute_mInitLocation, GALGAS_string ("the `init mode should be defined in order to use init routines")  COMMA_SOURCE_FILE ("declaration-init.galgas", 102)) ;
  }
  {
  ioArgument_ioTemporaries.mAttribute_mInitRoutinePriorityMap.setter_insertKey (GALGAS_lstring::constructor_new (inObject.mAttribute_mPriority.mAttribute_bigint.getter_string (SOURCE_FILE ("declaration-init.galgas", 104)), inObject.mAttribute_mPriority.mAttribute_location  COMMA_SOURCE_FILE ("declaration-init.galgas", 104)), inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 104)) ;
  }
  cEnumerator_initRequiredByProcList enumerator_4570 (inObject.mAttribute_mRequiredByProcList, kEnumeration_up) ;
  while (enumerator_4570.hasCurrentObject ()) {
    GALGAS_lstring var_lkey = GALGAS_lstring::constructor_new (GALGAS_string (".").add_operation (enumerator_4570.current_mProcName (HERE).getter_string (SOURCE_FILE ("declaration-init.galgas", 107)), inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 107)), enumerator_4570.current_mProcName (HERE).mAttribute_location  COMMA_SOURCE_FILE ("declaration-init.galgas", 107)) ;
    GALGAS_bool joker_4693_5 ; // Joker input parameter
    GALGAS_modeMap joker_4693_4 ; // Joker input parameter
    GALGAS_procedureSignature joker_4693_3 ; // Joker input parameter
    GALGAS_routineKind joker_4693_2 ; // Joker input parameter
    GALGAS_bool joker_4693_1 ; // Joker input parameter
    constinArgument_inContext.mAttribute_mRoutineMapForContext.method_searchKey (var_lkey, joker_4693_5, joker_4693_4, joker_4693_3, joker_4693_2, joker_4693_1, inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 108)) ;
    enumerator_4570.gotoNextObject () ;
  }
  GALGAS_lstring var_routineNameForInvocationGraph = function_initNameForInvocationGraph (inObject.mAttribute_mPriority, inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 111)) ;
  const enumGalgasBool test_1 = ioArgument_ioTemporaries.mAttribute_mSubprogramInvocationGraph.getter_isNodeDefined (var_routineNameForInvocationGraph.mAttribute_string COMMA_SOURCE_FILE ("declaration-init.galgas", 112)).operator_not (SOURCE_FILE ("declaration-init.galgas", 112)).boolEnum () ;
  if (kBoolTrue == test_1) {
    {
    ioArgument_ioTemporaries.mAttribute_mSubprogramInvocationGraph.setter_addNode (var_routineNameForInvocationGraph, var_routineNameForInvocationGraph, inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 113)) ;
    }
  }
  cEnumerator_initRequiredByProcList enumerator_5099 (inObject.mAttribute_mRequiredByProcList, kEnumeration_up) ;
  while (enumerator_5099.hasCurrentObject ()) {
    {
    ioArgument_ioTemporaries.mAttribute_mSubprogramInvocationGraph.setter_addEdge (function_procNameForInvocationGraph (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-init.galgas", 120)), enumerator_5099.current_mProcName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 120)), var_routineNameForInvocationGraph COMMA_SOURCE_FILE ("declaration-init.galgas", 119)) ;
    }
    enumerator_5099.gotoNextObject () ;
  }
  GALGAS_variableMap var_variableMap = function_initialVariableMap (var_routineNameForInvocationGraph.mAttribute_string, constinArgument_inContext, GALGAS_bool (false), GALGAS_accessKind::constructor_readWriteAccess (SOURCE_FILE ("declaration-init.galgas", 129)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 125)) ;
  GALGAS_instructionListIR var_instructionGenerationList = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("declaration-init.galgas", 133)) ;
  GALGAS_stringset temp_2 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("declaration-init.galgas", 138)) ;
  temp_2.addAssign_operation (function_initModeName (inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 138))  COMMA_SOURCE_FILE ("declaration-init.galgas", 138)) ;
  categoryMethod_analyzeRoutineInstructionList (inObject.mAttribute_mInstructionList, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-init.galgas", 135)), var_routineNameForInvocationGraph, constinArgument_inContext, temp_2, GALGAS_bool (true), ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct.mAttribute_mStaticStringMap, var_variableMap, var_instructionGenerationList, inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 134)) ;
  var_variableMap.method_checkAutomatonStates (inObject.mAttribute_mEndOfInitLocation, inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 146)) ;
  ioArgument_ioIntermediateCodeStruct.mAttribute_mInitList.addAssign_operation (inObject.mAttribute_mRequiredByProcList, inObject.mAttribute_mInitLocation, var_instructionGenerationList, inObject.mAttribute_mEndOfInitLocation  COMMA_SOURCE_FILE ("declaration-init.galgas", 148)) ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionDeclarationListAST_2D_element::GALGAS_functionDeclarationListAST_2D_element (void) :
mAttribute_mFunctionName (),
mAttribute_mFunctionModeList (),
mAttribute_mFunctionAttributeList (),
mAttribute_mFuncFormalArgumentList (),
mAttribute_mResultTypeName (),
mAttribute_mInstructionList (),
mAttribute_mEndOfFuncLocation () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionDeclarationListAST_2D_element::~ GALGAS_functionDeclarationListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionDeclarationListAST_2D_element::GALGAS_functionDeclarationListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                            const GALGAS_lstringlist & inOperand1,
                                                                                            const GALGAS_lstringlist & inOperand2,
                                                                                            const GALGAS_funcFormalArgumentList & inOperand3,
                                                                                            const GALGAS_lstring & inOperand4,
                                                                                            const GALGAS_instructionListAST & inOperand5,
                                                                                            const GALGAS_location & inOperand6) :
mAttribute_mFunctionName (inOperand0),
mAttribute_mFunctionModeList (inOperand1),
mAttribute_mFunctionAttributeList (inOperand2),
mAttribute_mFuncFormalArgumentList (inOperand3),
mAttribute_mResultTypeName (inOperand4),
mAttribute_mInstructionList (inOperand5),
mAttribute_mEndOfFuncLocation (inOperand6) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionDeclarationListAST_2D_element GALGAS_functionDeclarationListAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_functionDeclarationListAST_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                       GALGAS_lstringlist::constructor_emptyList (HERE),
                                                       GALGAS_lstringlist::constructor_emptyList (HERE),
                                                       GALGAS_funcFormalArgumentList::constructor_emptyList (HERE),
                                                       GALGAS_lstring::constructor_default (HERE),
                                                       GALGAS_instructionListAST::constructor_emptyList (HERE),
                                                       GALGAS_location::constructor_nowhere (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionDeclarationListAST_2D_element GALGAS_functionDeclarationListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                            const GALGAS_lstringlist & inOperand1,
                                                                                                            const GALGAS_lstringlist & inOperand2,
                                                                                                            const GALGAS_funcFormalArgumentList & inOperand3,
                                                                                                            const GALGAS_lstring & inOperand4,
                                                                                                            const GALGAS_instructionListAST & inOperand5,
                                                                                                            const GALGAS_location & inOperand6 
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_functionDeclarationListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid ()) {
    result = GALGAS_functionDeclarationListAST_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_functionDeclarationListAST_2D_element::objectCompare (const GALGAS_functionDeclarationListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mFunctionName.objectCompare (inOperand.mAttribute_mFunctionName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFunctionModeList.objectCompare (inOperand.mAttribute_mFunctionModeList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFunctionAttributeList.objectCompare (inOperand.mAttribute_mFunctionAttributeList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFuncFormalArgumentList.objectCompare (inOperand.mAttribute_mFuncFormalArgumentList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mResultTypeName.objectCompare (inOperand.mAttribute_mResultTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInstructionList.objectCompare (inOperand.mAttribute_mInstructionList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mEndOfFuncLocation.objectCompare (inOperand.mAttribute_mEndOfFuncLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_functionDeclarationListAST_2D_element::isValid (void) const {
  return mAttribute_mFunctionName.isValid () && mAttribute_mFunctionModeList.isValid () && mAttribute_mFunctionAttributeList.isValid () && mAttribute_mFuncFormalArgumentList.isValid () && mAttribute_mResultTypeName.isValid () && mAttribute_mInstructionList.isValid () && mAttribute_mEndOfFuncLocation.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_functionDeclarationListAST_2D_element::drop (void) {
  mAttribute_mFunctionName.drop () ;
  mAttribute_mFunctionModeList.drop () ;
  mAttribute_mFunctionAttributeList.drop () ;
  mAttribute_mFuncFormalArgumentList.drop () ;
  mAttribute_mResultTypeName.drop () ;
  mAttribute_mInstructionList.drop () ;
  mAttribute_mEndOfFuncLocation.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_functionDeclarationListAST_2D_element::description (C_String & ioString,
                                                                const int32_t inIndentation) const {
  ioString << "<struct @functionDeclarationListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mFunctionName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFunctionModeList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFunctionAttributeList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFuncFormalArgumentList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mResultTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInstructionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mEndOfFuncLocation.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_functionDeclarationListAST_2D_element::getter_mFunctionName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFunctionName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_functionDeclarationListAST_2D_element::getter_mFunctionModeList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFunctionModeList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_functionDeclarationListAST_2D_element::getter_mFunctionAttributeList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFunctionAttributeList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_funcFormalArgumentList GALGAS_functionDeclarationListAST_2D_element::getter_mFuncFormalArgumentList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFuncFormalArgumentList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_functionDeclarationListAST_2D_element::getter_mResultTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mResultTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST GALGAS_functionDeclarationListAST_2D_element::getter_mInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_functionDeclarationListAST_2D_element::getter_mEndOfFuncLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfFuncLocation ;
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

GALGAS_functionMapIR_2D_element::GALGAS_functionMapIR_2D_element (void) :
mAttribute_lkey (),
mAttribute_mFormalArgumentListForGeneration (),
mAttribute_mInstructionGenerationList (),
mAttribute_mResultType (),
mAttribute_mResultVarName (),
mAttribute_mWarnIfUnused () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionMapIR_2D_element::~ GALGAS_functionMapIR_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionMapIR_2D_element::GALGAS_functionMapIR_2D_element (const GALGAS_lstring & inOperand0,
                                                                  const GALGAS_procFormalArgumentListForGeneration & inOperand1,
                                                                  const GALGAS_instructionListIR & inOperand2,
                                                                  const GALGAS_unifiedTypeMap_2D_proxy & inOperand3,
                                                                  const GALGAS_string & inOperand4,
                                                                  const GALGAS_bool & inOperand5) :
mAttribute_lkey (inOperand0),
mAttribute_mFormalArgumentListForGeneration (inOperand1),
mAttribute_mInstructionGenerationList (inOperand2),
mAttribute_mResultType (inOperand3),
mAttribute_mResultVarName (inOperand4),
mAttribute_mWarnIfUnused (inOperand5) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionMapIR_2D_element GALGAS_functionMapIR_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_functionMapIR_2D_element (GALGAS_lstring::constructor_default (HERE),
                                          GALGAS_procFormalArgumentListForGeneration::constructor_emptyList (HERE),
                                          GALGAS_instructionListIR::constructor_emptyList (HERE),
                                          GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                          GALGAS_string::constructor_default (HERE),
                                          GALGAS_bool::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionMapIR_2D_element GALGAS_functionMapIR_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                  const GALGAS_procFormalArgumentListForGeneration & inOperand1,
                                                                                  const GALGAS_instructionListIR & inOperand2,
                                                                                  const GALGAS_unifiedTypeMap_2D_proxy & inOperand3,
                                                                                  const GALGAS_string & inOperand4,
                                                                                  const GALGAS_bool & inOperand5 
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_functionMapIR_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid ()) {
    result = GALGAS_functionMapIR_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_functionMapIR_2D_element::objectCompare (const GALGAS_functionMapIR_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFormalArgumentListForGeneration.objectCompare (inOperand.mAttribute_mFormalArgumentListForGeneration) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInstructionGenerationList.objectCompare (inOperand.mAttribute_mInstructionGenerationList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mResultType.objectCompare (inOperand.mAttribute_mResultType) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mResultVarName.objectCompare (inOperand.mAttribute_mResultVarName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mWarnIfUnused.objectCompare (inOperand.mAttribute_mWarnIfUnused) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_functionMapIR_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mFormalArgumentListForGeneration.isValid () && mAttribute_mInstructionGenerationList.isValid () && mAttribute_mResultType.isValid () && mAttribute_mResultVarName.isValid () && mAttribute_mWarnIfUnused.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_functionMapIR_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mFormalArgumentListForGeneration.drop () ;
  mAttribute_mInstructionGenerationList.drop () ;
  mAttribute_mResultType.drop () ;
  mAttribute_mResultVarName.drop () ;
  mAttribute_mWarnIfUnused.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_functionMapIR_2D_element::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "<struct @functionMapIR-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFormalArgumentListForGeneration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInstructionGenerationList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mResultType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mResultVarName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mWarnIfUnused.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_functionMapIR_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentListForGeneration GALGAS_functionMapIR_2D_element::getter_mFormalArgumentListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormalArgumentListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR GALGAS_functionMapIR_2D_element::getter_mInstructionGenerationList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstructionGenerationList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_functionMapIR_2D_element::getter_mResultType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mResultType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_functionMapIR_2D_element::getter_mResultVarName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mResultVarName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_functionMapIR_2D_element::getter_mWarnIfUnused (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mWarnIfUnused ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @functionMapIR-element type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_functionMapIR_2D_element ("functionMapIR-element",
                                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_functionMapIR_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionMapIR_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_functionMapIR_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_functionMapIR_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionMapIR_2D_element GALGAS_functionMapIR_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_functionMapIR_2D_element result ;
  const GALGAS_functionMapIR_2D_element * p = (const GALGAS_functionMapIR_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_functionMapIR_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("functionMapIR-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externProcedureDeclarationListAST_2D_element::GALGAS_externProcedureDeclarationListAST_2D_element (void) :
mAttribute_mExternProcedureName (),
mAttribute_mProcedureModeList (),
mAttribute_mProcFormalArgumentList (),
mAttribute_mEndOfProcLocation () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externProcedureDeclarationListAST_2D_element::~ GALGAS_externProcedureDeclarationListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externProcedureDeclarationListAST_2D_element::GALGAS_externProcedureDeclarationListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                          const GALGAS_lstringlist & inOperand1,
                                                                                                          const GALGAS_procFormalArgumentList & inOperand2,
                                                                                                          const GALGAS_location & inOperand3) :
mAttribute_mExternProcedureName (inOperand0),
mAttribute_mProcedureModeList (inOperand1),
mAttribute_mProcFormalArgumentList (inOperand2),
mAttribute_mEndOfProcLocation (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externProcedureDeclarationListAST_2D_element GALGAS_externProcedureDeclarationListAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_externProcedureDeclarationListAST_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                              GALGAS_lstringlist::constructor_emptyList (HERE),
                                                              GALGAS_procFormalArgumentList::constructor_emptyList (HERE),
                                                              GALGAS_location::constructor_nowhere (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externProcedureDeclarationListAST_2D_element GALGAS_externProcedureDeclarationListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                          const GALGAS_lstringlist & inOperand1,
                                                                                                                          const GALGAS_procFormalArgumentList & inOperand2,
                                                                                                                          const GALGAS_location & inOperand3 
                                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_externProcedureDeclarationListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_externProcedureDeclarationListAST_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
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
    result = mAttribute_mEndOfProcLocation.objectCompare (inOperand.mAttribute_mEndOfProcLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_externProcedureDeclarationListAST_2D_element::isValid (void) const {
  return mAttribute_mExternProcedureName.isValid () && mAttribute_mProcedureModeList.isValid () && mAttribute_mProcFormalArgumentList.isValid () && mAttribute_mEndOfProcLocation.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externProcedureDeclarationListAST_2D_element::drop (void) {
  mAttribute_mExternProcedureName.drop () ;
  mAttribute_mProcedureModeList.drop () ;
  mAttribute_mProcFormalArgumentList.drop () ;
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
//            Category method '@externProcedureDeclarationListAST-element externProcedureSemanticAnalysis'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_externProcedureSemanticAnalysis (const GALGAS_externProcedureDeclarationListAST_2D_element inObject,
                                                     const GALGAS_semanticContext constinArgument_inContext,
                                                     GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                     GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringset var_procedureModeSet = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("declaration-extern-proc.galgas", 111)) ;
  cEnumerator_lstringlist enumerator_5031 (inObject.mAttribute_mProcedureModeList, kEnumeration_up) ;
  while (enumerator_5031.hasCurrentObject ()) {
    constinArgument_inContext.mAttribute_mModeMap.method_searchKey (enumerator_5031.current (HERE).mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 113)) ;
    var_procedureModeSet.addAssign_operation (enumerator_5031.current (HERE).mAttribute_mValue.mAttribute_string  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 114)) ;
    enumerator_5031.gotoNextObject () ;
  }
  GALGAS_variableMap var_variableMap = function_initialVariableMap (function_procNameForInvocationGraph (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-extern-proc.galgas", 118)), inObject.mAttribute_mExternProcedureName, inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 118)).mAttribute_string, constinArgument_inContext, var_procedureModeSet.getter_hasKey (function_userModeName (inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 120)) COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 120)), GALGAS_accessKind::constructor_readWriteAccess (SOURCE_FILE ("declaration-extern-proc.galgas", 121)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 117)) ;
  GALGAS_procFormalArgumentListForGeneration var_formalArguments = GALGAS_procFormalArgumentListForGeneration::constructor_emptyList (SOURCE_FILE ("declaration-extern-proc.galgas", 125)) ;
  {
  routine_enterFormalArguments (constinArgument_inContext, inObject.mAttribute_mProcFormalArgumentList, var_variableMap, var_formalArguments, inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 126)) ;
  }
  GALGAS_lstring var_procNameForInvocationGraph = function_procNameForInvocationGraph (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-extern-proc.galgas", 133)), inObject.mAttribute_mExternProcedureName, inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 133)) ;
  const enumGalgasBool test_0 = ioArgument_ioTemporaries.mAttribute_mSubprogramInvocationGraph.getter_isNodeDefined (var_procNameForInvocationGraph.mAttribute_string COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 134)).operator_not (SOURCE_FILE ("declaration-extern-proc.galgas", 134)).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    ioArgument_ioTemporaries.mAttribute_mSubprogramInvocationGraph.setter_addNode (var_procNameForInvocationGraph, inObject.mAttribute_mExternProcedureName, inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 135)) ;
    }
  }
  {
  ioArgument_ioIntermediateCodeStruct.mAttribute_mExternProcedureMapIR.setter_insertKey (inObject.mAttribute_mExternProcedureName, var_formalArguments, inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 140)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externProcedureMapIR_2D_element::GALGAS_externProcedureMapIR_2D_element (void) :
mAttribute_lkey (),
mAttribute_mFormalArgumentListForGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externProcedureMapIR_2D_element::~ GALGAS_externProcedureMapIR_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externProcedureMapIR_2D_element::GALGAS_externProcedureMapIR_2D_element (const GALGAS_lstring & inOperand0,
                                                                                const GALGAS_procFormalArgumentListForGeneration & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_mFormalArgumentListForGeneration (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externProcedureMapIR_2D_element GALGAS_externProcedureMapIR_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_externProcedureMapIR_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                 GALGAS_procFormalArgumentListForGeneration::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externProcedureMapIR_2D_element GALGAS_externProcedureMapIR_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                const GALGAS_procFormalArgumentListForGeneration & inOperand1 
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_externProcedureMapIR_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_externProcedureMapIR_2D_element (inOperand0, inOperand1) ;
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
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_externProcedureMapIR_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mFormalArgumentListForGeneration.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externProcedureMapIR_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mFormalArgumentListForGeneration.drop () ;
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
//                                Category method '@routineMapIR sectionCodeGeneration'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_sectionCodeGeneration (const GALGAS_routineMapIR inObject,
                                           const GALGAS_string constinArgument_inCurrentDirectory,
                                           const GALGAS_string constinArgument_inTargetName,
                                           GALGAS_string & ioArgument_ioLLVMcode,
                                           GALGAS_string & ioArgument_ioAssemblerCode,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_idx = GALGAS_uint ((uint32_t) 0U) ;
  const GALGAS_routineMapIR temp_0 = inObject ;
  cEnumerator_routineMapIR enumerator_4182 (temp_0, kEnumeration_up) ;
  while (enumerator_4182.hasCurrentObject ()) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_4182.current (HERE).mAttribute_mKind.objectCompare (GALGAS_routineKind::constructor_section (SOURCE_FILE ("declaration-section.galgas", 102)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_string var_sectionCallName = function_llvmNameForSectionCall (enumerator_4182.current (HERE).mAttribute_lkey.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("declaration-section.galgas", 103)) ;
      GALGAS_string var_s = function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/section-entry.s"), inCompiler COMMA_SOURCE_FILE ("declaration-section.galgas", 104)), inCompiler COMMA_SOURCE_FILE ("declaration-section.galgas", 104)) ;
      var_s = var_s.getter_stringByReplacingStringByString (GALGAS_string ("!ENTRY!"), var_sectionCallName, inCompiler COMMA_SOURCE_FILE ("declaration-section.galgas", 105)) ;
      var_s = var_s.getter_stringByReplacingStringByString (GALGAS_string ("!IDX!"), var_idx.getter_string (SOURCE_FILE ("declaration-section.galgas", 106)), inCompiler COMMA_SOURCE_FILE ("declaration-section.galgas", 106)) ;
      ioArgument_ioAssemblerCode.plusAssign_operation(var_s, inCompiler  COMMA_SOURCE_FILE ("declaration-section.galgas", 107)) ;
      var_idx.plusAssign_operation(GALGAS_uint ((uint32_t) 1U), inCompiler  COMMA_SOURCE_FILE ("declaration-section.galgas", 108)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (var_sectionCallName, inCompiler COMMA_SOURCE_FILE ("declaration-section.galgas", 109)), inCompiler  COMMA_SOURCE_FILE ("declaration-section.galgas", 109)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("declare void @").add_operation (var_sectionCallName, inCompiler COMMA_SOURCE_FILE ("declaration-section.galgas", 110)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("declaration-section.galgas", 110)), inCompiler  COMMA_SOURCE_FILE ("declaration-section.galgas", 110)) ;
      cEnumerator_procFormalArgumentListForGeneration enumerator_4762 (enumerator_4182.current (HERE).mAttribute_mFormalArgumentListForGeneration, kEnumeration_up) ;
      while (enumerator_4762.hasCurrentObject ()) {
        switch (enumerator_4762.current_mFormalArgumentKind (HERE).enumValue ()) {
        case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
          break ;
        case GALGAS_procFormalArgumentPassingMode::kEnum_input:
          {
            ioArgument_ioLLVMcode.plusAssign_operation(enumerator_4762.current_mFormalArgumentType (HERE).getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("declaration-section.galgas", 115)).add_operation (GALGAS_string (" %in."), inCompiler COMMA_SOURCE_FILE ("declaration-section.galgas", 115)).add_operation (enumerator_4762.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-section.galgas", 115)), inCompiler  COMMA_SOURCE_FILE ("declaration-section.galgas", 115)) ;
          }
          break ;
        case GALGAS_procFormalArgumentPassingMode::kEnum_output:
          {
            ioArgument_ioLLVMcode.plusAssign_operation(enumerator_4762.current_mFormalArgumentType (HERE).getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("declaration-section.galgas", 117)).add_operation (GALGAS_string ("* %"), inCompiler COMMA_SOURCE_FILE ("declaration-section.galgas", 117)).add_operation (enumerator_4762.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-section.galgas", 117)), inCompiler  COMMA_SOURCE_FILE ("declaration-section.galgas", 117)) ;
          }
          break ;
        case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
          {
            ioArgument_ioLLVMcode.plusAssign_operation(enumerator_4762.current_mFormalArgumentType (HERE).getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("declaration-section.galgas", 119)).add_operation (GALGAS_string ("* %"), inCompiler COMMA_SOURCE_FILE ("declaration-section.galgas", 119)).add_operation (enumerator_4762.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-section.galgas", 119)), inCompiler  COMMA_SOURCE_FILE ("declaration-section.galgas", 119)) ;
          }
          break ;
        }
        if (enumerator_4762.hasNextObject ()) {
          ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-section.galgas", 122)) ;
        }
        enumerator_4762.gotoNextObject () ;
      }
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (") nounwind \n"
        "\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-section.galgas", 124)) ;
    }
    enumerator_4182.gotoNextObject () ;
  }
  ioArgument_ioAssemblerCode.plusAssign_operation(function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/section-dispatcher-header.s"), inCompiler COMMA_SOURCE_FILE ("declaration-section.galgas", 127)), inCompiler COMMA_SOURCE_FILE ("declaration-section.galgas", 127)), inCompiler  COMMA_SOURCE_FILE ("declaration-section.galgas", 127)) ;
  var_idx = GALGAS_uint ((uint32_t) 0U) ;
  const GALGAS_routineMapIR temp_2 = inObject ;
  cEnumerator_routineMapIR enumerator_5415 (temp_2, kEnumeration_up) ;
  while (enumerator_5415.hasCurrentObject ()) {
    const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_5415.current (HERE).mAttribute_mKind.objectCompare (GALGAS_routineKind::constructor_section (SOURCE_FILE ("declaration-section.galgas", 130)))).boolEnum () ;
    if (kBoolTrue == test_3) {
      GALGAS_string var_sectionImplementationName = function_llvmNameForSectionImplementation (enumerator_5415.current (HERE).mAttribute_lkey.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("declaration-section.galgas", 131)) ;
      GALGAS_string var_s = function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/section-dispatcher-entry.s"), inCompiler COMMA_SOURCE_FILE ("declaration-section.galgas", 132)), inCompiler COMMA_SOURCE_FILE ("declaration-section.galgas", 132)) ;
      var_s = var_s.getter_stringByReplacingStringByString (GALGAS_string ("!ENTRY!"), var_sectionImplementationName, inCompiler COMMA_SOURCE_FILE ("declaration-section.galgas", 133)) ;
      var_s = var_s.getter_stringByReplacingStringByString (GALGAS_string ("!IDX!"), var_idx.getter_string (SOURCE_FILE ("declaration-section.galgas", 134)), inCompiler COMMA_SOURCE_FILE ("declaration-section.galgas", 134)) ;
      ioArgument_ioAssemblerCode.plusAssign_operation(var_s, inCompiler  COMMA_SOURCE_FILE ("declaration-section.galgas", 135)) ;
      var_idx.plusAssign_operation(GALGAS_uint ((uint32_t) 1U), inCompiler  COMMA_SOURCE_FILE ("declaration-section.galgas", 136)) ;
    }
    enumerator_5415.gotoNextObject () ;
  }
  GALGAS_string var_sectionAssemblyCode = function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/section-code.s"), inCompiler COMMA_SOURCE_FILE ("declaration-section.galgas", 139)), inCompiler COMMA_SOURCE_FILE ("declaration-section.galgas", 139)) ;
  ioArgument_ioAssemblerCode.plusAssign_operation(var_sectionAssemblyCode.getter_stringByReplacingStringByString (GALGAS_string ("!PROC!"), function_llvmNameForProcedure (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-section.galgas", 140)), inCompiler COMMA_SOURCE_FILE ("declaration-section.galgas", 140)), inCompiler  COMMA_SOURCE_FILE ("declaration-section.galgas", 140)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Category method '@infixOperatorMap checkBinaryOperationWith'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_checkBinaryOperationWith (const GALGAS_infixOperatorMap inObject,
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
  GALGAS_lstring var_lkey = function_combineTypeNamesForInfixOperator (constinArgument_inLeftType.getter_key (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 102)), constinArgument_inRightType.getter_key (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 102)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 102)) ;
  const GALGAS_infixOperatorMap temp_2 = inObject ;
  const enumGalgasBool test_3 = temp_2.getter_hasKey (var_lkey.mAttribute_string COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 103)).boolEnum () ;
  if (kBoolTrue == test_3) {
    const GALGAS_infixOperatorMap temp_4 = inObject ;
    temp_4.method_searchKey (var_lkey, outArgument_outResultType, outArgument_outOperation, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 104)) ;
  }else if (kBoolFalse == test_3) {
    inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("infix operation between $").add_operation (constinArgument_inLeftType.getter_key (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 107)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 107)).add_operation (GALGAS_string (" and $"), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 107)).add_operation (constinArgument_inRightType.getter_key (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 107)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 107)).add_operation (GALGAS_string (" is not defined"), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 107))  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 106)) ;
    outArgument_outResultType.drop () ; // Release error dropped variable
    outArgument_outOperation.drop () ; // Release error dropped variable
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Abstract category method '@infixOperatorDescription generateInfixOperatorCode'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_infixOperatorDescription_generateInfixOperatorCode> gCategoryMethodTable_infixOperatorDescription_generateInfixOperatorCode ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_generateInfixOperatorCode (const int32_t inClassIndex,
                                                    categoryMethodSignature_infixOperatorDescription_generateInfixOperatorCode inMethod) {
  gCategoryMethodTable_infixOperatorDescription_generateInfixOperatorCode.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_infixOperatorDescription_generateInfixOperatorCode (void) {
  gCategoryMethodTable_infixOperatorDescription_generateInfixOperatorCode.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_infixOperatorDescription_generateInfixOperatorCode (NULL,
                                                                               freeCategoryMethod_infixOperatorDescription_generateInfixOperatorCode) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_generateInfixOperatorCode (const cPtr_infixOperatorDescription * inObject,
                                                   GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                                   GALGAS_instructionListIR & io_ioInstructionGenerationList,
                                                   const GALGAS_operandIR constin_inLeftOperand,
                                                   const GALGAS_location constin_inOperatorLocation,
                                                   const GALGAS_operandIR constin_inRightOperand,
                                                   const GALGAS_unifiedTypeMap_2D_proxy constin_inResultType,
                                                   GALGAS_operandIR & out_outResultValue,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_outResultValue.drop () ;
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_infixOperatorDescription) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_infixOperatorDescription_generateInfixOperatorCode f = NULL ;
    if (classIndex < gCategoryMethodTable_infixOperatorDescription_generateInfixOperatorCode.count ()) {
      f = gCategoryMethodTable_infixOperatorDescription_generateInfixOperatorCode (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_infixOperatorDescription_generateInfixOperatorCode.count ()) {
           f = gCategoryMethodTable_infixOperatorDescription_generateInfixOperatorCode (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_infixOperatorDescription_generateInfixOperatorCode.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
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
//                         Category getter '@infixOperatorDescription performStaticOperation'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryGetterSignature_infixOperatorDescription_performStaticOperation> gCategoryGetterTable_infixOperatorDescription_performStaticOperation ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryGetter_performStaticOperation (const int32_t inClassIndex,
                                                 categoryGetterSignature_infixOperatorDescription_performStaticOperation inGetter) {
  gCategoryGetterTable_infixOperatorDescription_performStaticOperation.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint callCategoryGetter_performStaticOperation (const cPtr_infixOperatorDescription * inObject,
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
    categoryGetterSignature_infixOperatorDescription_performStaticOperation f = NULL ;
    if (classIndex < gCategoryGetterTable_infixOperatorDescription_performStaticOperation.count ()) {
      f = gCategoryGetterTable_infixOperatorDescription_performStaticOperation (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryGetterTable_infixOperatorDescription_performStaticOperation.count ()) {
           f = gCategoryGetterTable_infixOperatorDescription_performStaticOperation (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryGetterTable_infixOperatorDescription_performStaticOperation.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
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
      result_outResult = constinArgument_inLeft.add_operation (constinArgument_inRight, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 361)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_subNoOVF:
    {
      result_outResult = constinArgument_inLeft.substract_operation (constinArgument_inRight, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 362)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_mulNoOVF:
    {
      result_outResult = constinArgument_inLeft.multiply_operation (constinArgument_inRight, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 363)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_udivNoOVF:
    {
      result_outResult = constinArgument_inLeft.divide_operation (constinArgument_inRight, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 364)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_sdivNoOVF:
    {
      result_outResult = constinArgument_inLeft.divide_operation (constinArgument_inRight, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 365)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_uremNoOVF:
    {
      result_outResult = constinArgument_inLeft.modulo_operation (constinArgument_inRight, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 366)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_sremNoOVF:
    {
      result_outResult = constinArgument_inLeft.modulo_operation (constinArgument_inRight, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 367)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_uaddOVF:
    {
      result_outResult = constinArgument_inLeft.add_operation (constinArgument_inRight, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 369)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_saddOVF:
    {
      result_outResult = constinArgument_inLeft.add_operation (constinArgument_inRight, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 370)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_usubOVF:
    {
      result_outResult = constinArgument_inLeft.substract_operation (constinArgument_inRight, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 371)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_ssubOVF:
    {
      result_outResult = constinArgument_inLeft.substract_operation (constinArgument_inRight, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 372)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_umulOVF:
    {
      result_outResult = constinArgument_inLeft.multiply_operation (constinArgument_inRight, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 373)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_smulOVF:
    {
      result_outResult = constinArgument_inLeft.multiply_operation (constinArgument_inRight, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 374)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_udivOVF:
    {
      result_outResult = constinArgument_inLeft.divide_operation (constinArgument_inRight, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 375)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_sdivOVF:
    {
      result_outResult = constinArgument_inLeft.divide_operation (constinArgument_inRight, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 376)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_uremOVF:
    {
      result_outResult = constinArgument_inLeft.modulo_operation (constinArgument_inRight, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 377)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_sremOVF:
    {
      result_outResult = constinArgument_inLeft.modulo_operation (constinArgument_inRight, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 378)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_and:
    {
      result_outResult = constinArgument_inLeft.operator_and (constinArgument_inRight COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 380)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_ior:
    {
      result_outResult = constinArgument_inLeft.operator_or (constinArgument_inRight COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 381)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_xor:
    {
      result_outResult = constinArgument_inLeft.operator_xor (constinArgument_inRight COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 382)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_shl:
    {
      result_outResult = constinArgument_inLeft.left_shift_operation (constinArgument_inRight.getter_uint (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 383)) COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 383)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_ashr:
    {
      result_outResult = constinArgument_inLeft.right_shift_operation (constinArgument_inRight.getter_uint (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 384)) COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 384)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_lshr:
    {
      result_outResult = constinArgument_inLeft.right_shift_operation (constinArgument_inRight.getter_uint (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 385)) COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 385)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_eq:
    {
      result_outResult = GALGAS_bool (kIsEqual, constinArgument_inLeft.objectCompare (constinArgument_inRight)).getter_bigint (SOURCE_FILE ("expression-infix-operators.galgas", 387)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_ne:
    {
      result_outResult = GALGAS_bool (kIsNotEqual, constinArgument_inLeft.objectCompare (constinArgument_inRight)).getter_bigint (SOURCE_FILE ("expression-infix-operators.galgas", 388)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_ult:
    {
      result_outResult = GALGAS_bool (kIsStrictInf, constinArgument_inLeft.objectCompare (constinArgument_inRight)).getter_bigint (SOURCE_FILE ("expression-infix-operators.galgas", 389)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_ule:
    {
      result_outResult = GALGAS_bool (kIsInfOrEqual, constinArgument_inLeft.objectCompare (constinArgument_inRight)).getter_bigint (SOURCE_FILE ("expression-infix-operators.galgas", 390)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_ugt:
    {
      result_outResult = GALGAS_bool (kIsStrictSup, constinArgument_inLeft.objectCompare (constinArgument_inRight)).getter_bigint (SOURCE_FILE ("expression-infix-operators.galgas", 391)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_uge:
    {
      result_outResult = GALGAS_bool (kIsSupOrEqual, constinArgument_inLeft.objectCompare (constinArgument_inRight)).getter_bigint (SOURCE_FILE ("expression-infix-operators.galgas", 392)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_slt:
    {
      result_outResult = GALGAS_bool (kIsStrictInf, constinArgument_inLeft.objectCompare (constinArgument_inRight)).getter_bigint (SOURCE_FILE ("expression-infix-operators.galgas", 393)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_sle:
    {
      result_outResult = GALGAS_bool (kIsInfOrEqual, constinArgument_inLeft.objectCompare (constinArgument_inRight)).getter_bigint (SOURCE_FILE ("expression-infix-operators.galgas", 394)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_sgt:
    {
      result_outResult = GALGAS_bool (kIsStrictSup, constinArgument_inLeft.objectCompare (constinArgument_inRight)).getter_bigint (SOURCE_FILE ("expression-infix-operators.galgas", 395)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_sge:
    {
      result_outResult = GALGAS_bool (kIsSupOrEqual, constinArgument_inLeft.objectCompare (constinArgument_inRight)).getter_bigint (SOURCE_FILE ("expression-infix-operators.galgas", 396)) ;
    }
    break ;
  }
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_infixOperatorDescription_performStaticOperation (void) {
  enterCategoryGetter_performStaticOperation (kTypeDescriptor_GALGAS_infixOperatorDescription.mSlotID,
                                              extensionGetter_infixOperatorDescription_performStaticOperation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryGetter_infixOperatorDescription_performStaticOperation (void) {
  gCategoryGetterTable_infixOperatorDescription_performStaticOperation.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_infixOperatorDescription_performStaticOperation (defineCategoryGetter_infixOperatorDescription_performStaticOperation,
                                                                            freeCategoryGetter_infixOperatorDescription_performStaticOperation) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Category Getter '@procEffectiveParameterPassingModeAST passingModeForActualSelector'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string extensionGetter_passingModeForActualSelector (const GALGAS_procEffectiveParameterPassingModeAST & inObject,
                                                            GALGAS_lstring inArgument_inSelector,
                                                            C_Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_procEffectiveParameterPassingModeAST temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_procEffectiveParameterPassingModeAST::kNotBuilt:
    break ;
  case GALGAS_procEffectiveParameterPassingModeAST::kEnum_input:
    {
      result_outResult = GALGAS_string ("\?") ;
    }
    break ;
  case GALGAS_procEffectiveParameterPassingModeAST::kEnum_output:
    {
      result_outResult = GALGAS_string ("!") ;
    }
    break ;
  case GALGAS_procEffectiveParameterPassingModeAST::kEnum_outputInput:
    {
      result_outResult = GALGAS_string ("!\?") ;
    }
    break ;
  case GALGAS_procEffectiveParameterPassingModeAST::kEnum_outputInputSelfVariable:
    {
      result_outResult = GALGAS_string ("!\?") ;
    }
    break ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, inArgument_inSelector.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_1) {
    result_outResult.plusAssign_operation(inArgument_inSelector.mAttribute_string.add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 147)), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 147)) ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticContext::GALGAS_semanticContext (void) :
mAttribute_mPointerSize (),
mAttribute_mBooleanType (),
mAttribute_mLiteralIntegerType (),
mAttribute_mExceptionCodeType (),
mAttribute_mExceptionLineType (),
mAttribute_mTypeMap (),
mAttribute_mRoutineMapForContext (),
mAttribute_mFunctionMap (),
mAttribute_mInitRoutineMap (),
mAttribute_mExceptionSetupRoutinePriorityMap (),
mAttribute_mExceptionLoopRoutinePriorityMap (),
mAttribute_mControlRegisterMap (),
mAttribute_mGlobalConstantMap (),
mAttribute_mGlobalVariableMap (),
mAttribute_mConstructorMap (),
mAttribute_mModeMap (),
mAttribute_mEqualOperatorMap (),
mAttribute_mNonEqualOperatorMap (),
mAttribute_mStrictInfOperatorMap (),
mAttribute_mInfEqualOperatorMap (),
mAttribute_mStrictSupOperatorMap (),
mAttribute_mSupEqualOperatorMap (),
mAttribute_mAndOperatorMap (),
mAttribute_mOrOperatorMap (),
mAttribute_mXorOperatorMap (),
mAttribute_mBooleanXorOperatorMap (),
mAttribute_mAddOperatorMap (),
mAttribute_mAddNoOvfOperatorMap (),
mAttribute_mSubOperatorMap (),
mAttribute_mSubNoOvfOperatorMap (),
mAttribute_mMulOperatorMap (),
mAttribute_mMulNoOvfOperatorMap (),
mAttribute_mDivOperatorMap (),
mAttribute_mDivNoOvfOperatorMap (),
mAttribute_mModOperatorMap (),
mAttribute_mModNoOvfOperatorMap (),
mAttribute_mLeftShiftOperatorMap (),
mAttribute_mRightShiftOperatorMap (),
mAttribute_mUnaryMinusOperatorMap (),
mAttribute_mNotOperatorMap (),
mAttribute_mUnsignedComplementOperatorMap (),
mAttribute_mTaskMap (),
mAttribute_mGlobalTaskVariableList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticContext::~ GALGAS_semanticContext (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticContext::GALGAS_semanticContext (const GALGAS_uint & inOperand0,
                                                const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                const GALGAS_unifiedTypeMap_2D_proxy & inOperand2,
                                                const GALGAS_unifiedTypeMap_2D_proxy & inOperand3,
                                                const GALGAS_unifiedTypeMap_2D_proxy & inOperand4,
                                                const GALGAS_unifiedTypeMap & inOperand5,
                                                const GALGAS_routineMapForContext & inOperand6,
                                                const GALGAS_functionMap & inOperand7,
                                                const GALGAS_initRoutineMap & inOperand8,
                                                const GALGAS_exceptionRoutinePriorityMap & inOperand9,
                                                const GALGAS_exceptionRoutinePriorityMap & inOperand10,
                                                const GALGAS_controlRegisterMap & inOperand11,
                                                const GALGAS_globalConstantMap & inOperand12,
                                                const GALGAS_globalVariableMap & inOperand13,
                                                const GALGAS_constructorMap & inOperand14,
                                                const GALGAS_modeMap & inOperand15,
                                                const GALGAS_infixOperatorMap & inOperand16,
                                                const GALGAS_infixOperatorMap & inOperand17,
                                                const GALGAS_infixOperatorMap & inOperand18,
                                                const GALGAS_infixOperatorMap & inOperand19,
                                                const GALGAS_infixOperatorMap & inOperand20,
                                                const GALGAS_infixOperatorMap & inOperand21,
                                                const GALGAS_infixOperatorMap & inOperand22,
                                                const GALGAS_infixOperatorMap & inOperand23,
                                                const GALGAS_infixOperatorMap & inOperand24,
                                                const GALGAS_infixOperatorMap & inOperand25,
                                                const GALGAS_infixOperatorMap & inOperand26,
                                                const GALGAS_infixOperatorMap & inOperand27,
                                                const GALGAS_infixOperatorMap & inOperand28,
                                                const GALGAS_infixOperatorMap & inOperand29,
                                                const GALGAS_infixOperatorMap & inOperand30,
                                                const GALGAS_infixOperatorMap & inOperand31,
                                                const GALGAS_infixOperatorMap & inOperand32,
                                                const GALGAS_infixOperatorMap & inOperand33,
                                                const GALGAS_infixOperatorMap & inOperand34,
                                                const GALGAS_infixOperatorMap & inOperand35,
                                                const GALGAS_infixOperatorMap & inOperand36,
                                                const GALGAS_infixOperatorMap & inOperand37,
                                                const GALGAS_prefixOperatorMap & inOperand38,
                                                const GALGAS_prefixOperatorMap & inOperand39,
                                                const GALGAS_prefixOperatorMap & inOperand40,
                                                const GALGAS_taskMap & inOperand41,
                                                const GALGAS_globalTaskVariableList & inOperand42) :
mAttribute_mPointerSize (inOperand0),
mAttribute_mBooleanType (inOperand1),
mAttribute_mLiteralIntegerType (inOperand2),
mAttribute_mExceptionCodeType (inOperand3),
mAttribute_mExceptionLineType (inOperand4),
mAttribute_mTypeMap (inOperand5),
mAttribute_mRoutineMapForContext (inOperand6),
mAttribute_mFunctionMap (inOperand7),
mAttribute_mInitRoutineMap (inOperand8),
mAttribute_mExceptionSetupRoutinePriorityMap (inOperand9),
mAttribute_mExceptionLoopRoutinePriorityMap (inOperand10),
mAttribute_mControlRegisterMap (inOperand11),
mAttribute_mGlobalConstantMap (inOperand12),
mAttribute_mGlobalVariableMap (inOperand13),
mAttribute_mConstructorMap (inOperand14),
mAttribute_mModeMap (inOperand15),
mAttribute_mEqualOperatorMap (inOperand16),
mAttribute_mNonEqualOperatorMap (inOperand17),
mAttribute_mStrictInfOperatorMap (inOperand18),
mAttribute_mInfEqualOperatorMap (inOperand19),
mAttribute_mStrictSupOperatorMap (inOperand20),
mAttribute_mSupEqualOperatorMap (inOperand21),
mAttribute_mAndOperatorMap (inOperand22),
mAttribute_mOrOperatorMap (inOperand23),
mAttribute_mXorOperatorMap (inOperand24),
mAttribute_mBooleanXorOperatorMap (inOperand25),
mAttribute_mAddOperatorMap (inOperand26),
mAttribute_mAddNoOvfOperatorMap (inOperand27),
mAttribute_mSubOperatorMap (inOperand28),
mAttribute_mSubNoOvfOperatorMap (inOperand29),
mAttribute_mMulOperatorMap (inOperand30),
mAttribute_mMulNoOvfOperatorMap (inOperand31),
mAttribute_mDivOperatorMap (inOperand32),
mAttribute_mDivNoOvfOperatorMap (inOperand33),
mAttribute_mModOperatorMap (inOperand34),
mAttribute_mModNoOvfOperatorMap (inOperand35),
mAttribute_mLeftShiftOperatorMap (inOperand36),
mAttribute_mRightShiftOperatorMap (inOperand37),
mAttribute_mUnaryMinusOperatorMap (inOperand38),
mAttribute_mNotOperatorMap (inOperand39),
mAttribute_mUnsignedComplementOperatorMap (inOperand40),
mAttribute_mTaskMap (inOperand41),
mAttribute_mGlobalTaskVariableList (inOperand42) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticContext GALGAS_semanticContext::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_semanticContext (GALGAS_uint::constructor_default (HERE),
                                 GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                 GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                 GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                 GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                 GALGAS_unifiedTypeMap::constructor_emptyMap (HERE),
                                 GALGAS_routineMapForContext::constructor_emptyMap (HERE),
                                 GALGAS_functionMap::constructor_emptyMap (HERE),
                                 GALGAS_initRoutineMap::constructor_emptyMap (HERE),
                                 GALGAS_exceptionRoutinePriorityMap::constructor_emptyMap (HERE),
                                 GALGAS_exceptionRoutinePriorityMap::constructor_emptyMap (HERE),
                                 GALGAS_controlRegisterMap::constructor_emptyMap (HERE),
                                 GALGAS_globalConstantMap::constructor_emptyMap (HERE),
                                 GALGAS_globalVariableMap::constructor_emptyMap (HERE),
                                 GALGAS_constructorMap::constructor_emptyMap (HERE),
                                 GALGAS_modeMap::constructor_emptyMap (HERE),
                                 GALGAS_infixOperatorMap::constructor_emptyMap (HERE),
                                 GALGAS_infixOperatorMap::constructor_emptyMap (HERE),
                                 GALGAS_infixOperatorMap::constructor_emptyMap (HERE),
                                 GALGAS_infixOperatorMap::constructor_emptyMap (HERE),
                                 GALGAS_infixOperatorMap::constructor_emptyMap (HERE),
                                 GALGAS_infixOperatorMap::constructor_emptyMap (HERE),
                                 GALGAS_infixOperatorMap::constructor_emptyMap (HERE),
                                 GALGAS_infixOperatorMap::constructor_emptyMap (HERE),
                                 GALGAS_infixOperatorMap::constructor_emptyMap (HERE),
                                 GALGAS_infixOperatorMap::constructor_emptyMap (HERE),
                                 GALGAS_infixOperatorMap::constructor_emptyMap (HERE),
                                 GALGAS_infixOperatorMap::constructor_emptyMap (HERE),
                                 GALGAS_infixOperatorMap::constructor_emptyMap (HERE),
                                 GALGAS_infixOperatorMap::constructor_emptyMap (HERE),
                                 GALGAS_infixOperatorMap::constructor_emptyMap (HERE),
                                 GALGAS_infixOperatorMap::constructor_emptyMap (HERE),
                                 GALGAS_infixOperatorMap::constructor_emptyMap (HERE),
                                 GALGAS_infixOperatorMap::constructor_emptyMap (HERE),
                                 GALGAS_infixOperatorMap::constructor_emptyMap (HERE),
                                 GALGAS_infixOperatorMap::constructor_emptyMap (HERE),
                                 GALGAS_infixOperatorMap::constructor_emptyMap (HERE),
                                 GALGAS_infixOperatorMap::constructor_emptyMap (HERE),
                                 GALGAS_prefixOperatorMap::constructor_emptyMap (HERE),
                                 GALGAS_prefixOperatorMap::constructor_emptyMap (HERE),
                                 GALGAS_prefixOperatorMap::constructor_emptyMap (HERE),
                                 GALGAS_taskMap::constructor_emptyMap (HERE),
                                 GALGAS_globalTaskVariableList::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticContext GALGAS_semanticContext::constructor_new (const GALGAS_uint & inOperand0,
                                                                const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                const GALGAS_unifiedTypeMap_2D_proxy & inOperand2,
                                                                const GALGAS_unifiedTypeMap_2D_proxy & inOperand3,
                                                                const GALGAS_unifiedTypeMap_2D_proxy & inOperand4,
                                                                const GALGAS_unifiedTypeMap & inOperand5,
                                                                const GALGAS_routineMapForContext & inOperand6,
                                                                const GALGAS_functionMap & inOperand7,
                                                                const GALGAS_initRoutineMap & inOperand8,
                                                                const GALGAS_exceptionRoutinePriorityMap & inOperand9,
                                                                const GALGAS_exceptionRoutinePriorityMap & inOperand10,
                                                                const GALGAS_controlRegisterMap & inOperand11,
                                                                const GALGAS_globalConstantMap & inOperand12,
                                                                const GALGAS_globalVariableMap & inOperand13,
                                                                const GALGAS_constructorMap & inOperand14,
                                                                const GALGAS_modeMap & inOperand15,
                                                                const GALGAS_infixOperatorMap & inOperand16,
                                                                const GALGAS_infixOperatorMap & inOperand17,
                                                                const GALGAS_infixOperatorMap & inOperand18,
                                                                const GALGAS_infixOperatorMap & inOperand19,
                                                                const GALGAS_infixOperatorMap & inOperand20,
                                                                const GALGAS_infixOperatorMap & inOperand21,
                                                                const GALGAS_infixOperatorMap & inOperand22,
                                                                const GALGAS_infixOperatorMap & inOperand23,
                                                                const GALGAS_infixOperatorMap & inOperand24,
                                                                const GALGAS_infixOperatorMap & inOperand25,
                                                                const GALGAS_infixOperatorMap & inOperand26,
                                                                const GALGAS_infixOperatorMap & inOperand27,
                                                                const GALGAS_infixOperatorMap & inOperand28,
                                                                const GALGAS_infixOperatorMap & inOperand29,
                                                                const GALGAS_infixOperatorMap & inOperand30,
                                                                const GALGAS_infixOperatorMap & inOperand31,
                                                                const GALGAS_infixOperatorMap & inOperand32,
                                                                const GALGAS_infixOperatorMap & inOperand33,
                                                                const GALGAS_infixOperatorMap & inOperand34,
                                                                const GALGAS_infixOperatorMap & inOperand35,
                                                                const GALGAS_infixOperatorMap & inOperand36,
                                                                const GALGAS_infixOperatorMap & inOperand37,
                                                                const GALGAS_prefixOperatorMap & inOperand38,
                                                                const GALGAS_prefixOperatorMap & inOperand39,
                                                                const GALGAS_prefixOperatorMap & inOperand40,
                                                                const GALGAS_taskMap & inOperand41,
                                                                const GALGAS_globalTaskVariableList & inOperand42 
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticContext result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid () && inOperand10.isValid () && inOperand11.isValid () && inOperand12.isValid () && inOperand13.isValid () && inOperand14.isValid () && inOperand15.isValid () && inOperand16.isValid () && inOperand17.isValid () && inOperand18.isValid () && inOperand19.isValid () && inOperand20.isValid () && inOperand21.isValid () && inOperand22.isValid () && inOperand23.isValid () && inOperand24.isValid () && inOperand25.isValid () && inOperand26.isValid () && inOperand27.isValid () && inOperand28.isValid () && inOperand29.isValid () && inOperand30.isValid () && inOperand31.isValid () && inOperand32.isValid () && inOperand33.isValid () && inOperand34.isValid () && inOperand35.isValid () && inOperand36.isValid () && inOperand37.isValid () && inOperand38.isValid () && inOperand39.isValid () && inOperand40.isValid () && inOperand41.isValid () && inOperand42.isValid ()) {
    result = GALGAS_semanticContext (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10, inOperand11, inOperand12, inOperand13, inOperand14, inOperand15, inOperand16, inOperand17, inOperand18, inOperand19, inOperand20, inOperand21, inOperand22, inOperand23, inOperand24, inOperand25, inOperand26, inOperand27, inOperand28, inOperand29, inOperand30, inOperand31, inOperand32, inOperand33, inOperand34, inOperand35, inOperand36, inOperand37, inOperand38, inOperand39, inOperand40, inOperand41, inOperand42) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_semanticContext::objectCompare (const GALGAS_semanticContext & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mPointerSize.objectCompare (inOperand.mAttribute_mPointerSize) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mBooleanType.objectCompare (inOperand.mAttribute_mBooleanType) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mLiteralIntegerType.objectCompare (inOperand.mAttribute_mLiteralIntegerType) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mExceptionCodeType.objectCompare (inOperand.mAttribute_mExceptionCodeType) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mExceptionLineType.objectCompare (inOperand.mAttribute_mExceptionLineType) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mTypeMap.objectCompare (inOperand.mAttribute_mTypeMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mRoutineMapForContext.objectCompare (inOperand.mAttribute_mRoutineMapForContext) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFunctionMap.objectCompare (inOperand.mAttribute_mFunctionMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInitRoutineMap.objectCompare (inOperand.mAttribute_mInitRoutineMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mExceptionSetupRoutinePriorityMap.objectCompare (inOperand.mAttribute_mExceptionSetupRoutinePriorityMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mExceptionLoopRoutinePriorityMap.objectCompare (inOperand.mAttribute_mExceptionLoopRoutinePriorityMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mControlRegisterMap.objectCompare (inOperand.mAttribute_mControlRegisterMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mGlobalConstantMap.objectCompare (inOperand.mAttribute_mGlobalConstantMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mGlobalVariableMap.objectCompare (inOperand.mAttribute_mGlobalVariableMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mConstructorMap.objectCompare (inOperand.mAttribute_mConstructorMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mModeMap.objectCompare (inOperand.mAttribute_mModeMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mEqualOperatorMap.objectCompare (inOperand.mAttribute_mEqualOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mNonEqualOperatorMap.objectCompare (inOperand.mAttribute_mNonEqualOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mStrictInfOperatorMap.objectCompare (inOperand.mAttribute_mStrictInfOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInfEqualOperatorMap.objectCompare (inOperand.mAttribute_mInfEqualOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mStrictSupOperatorMap.objectCompare (inOperand.mAttribute_mStrictSupOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSupEqualOperatorMap.objectCompare (inOperand.mAttribute_mSupEqualOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mAndOperatorMap.objectCompare (inOperand.mAttribute_mAndOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mOrOperatorMap.objectCompare (inOperand.mAttribute_mOrOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mXorOperatorMap.objectCompare (inOperand.mAttribute_mXorOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mBooleanXorOperatorMap.objectCompare (inOperand.mAttribute_mBooleanXorOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mAddOperatorMap.objectCompare (inOperand.mAttribute_mAddOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mAddNoOvfOperatorMap.objectCompare (inOperand.mAttribute_mAddNoOvfOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSubOperatorMap.objectCompare (inOperand.mAttribute_mSubOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSubNoOvfOperatorMap.objectCompare (inOperand.mAttribute_mSubNoOvfOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mMulOperatorMap.objectCompare (inOperand.mAttribute_mMulOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mMulNoOvfOperatorMap.objectCompare (inOperand.mAttribute_mMulNoOvfOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mDivOperatorMap.objectCompare (inOperand.mAttribute_mDivOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mDivNoOvfOperatorMap.objectCompare (inOperand.mAttribute_mDivNoOvfOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mModOperatorMap.objectCompare (inOperand.mAttribute_mModOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mModNoOvfOperatorMap.objectCompare (inOperand.mAttribute_mModNoOvfOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mLeftShiftOperatorMap.objectCompare (inOperand.mAttribute_mLeftShiftOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mRightShiftOperatorMap.objectCompare (inOperand.mAttribute_mRightShiftOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mUnaryMinusOperatorMap.objectCompare (inOperand.mAttribute_mUnaryMinusOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mNotOperatorMap.objectCompare (inOperand.mAttribute_mNotOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mUnsignedComplementOperatorMap.objectCompare (inOperand.mAttribute_mUnsignedComplementOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mTaskMap.objectCompare (inOperand.mAttribute_mTaskMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mGlobalTaskVariableList.objectCompare (inOperand.mAttribute_mGlobalTaskVariableList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_semanticContext::isValid (void) const {
  return mAttribute_mPointerSize.isValid () && mAttribute_mBooleanType.isValid () && mAttribute_mLiteralIntegerType.isValid () && mAttribute_mExceptionCodeType.isValid () && mAttribute_mExceptionLineType.isValid () && mAttribute_mTypeMap.isValid () && mAttribute_mRoutineMapForContext.isValid () && mAttribute_mFunctionMap.isValid () && mAttribute_mInitRoutineMap.isValid () && mAttribute_mExceptionSetupRoutinePriorityMap.isValid () && mAttribute_mExceptionLoopRoutinePriorityMap.isValid () && mAttribute_mControlRegisterMap.isValid () && mAttribute_mGlobalConstantMap.isValid () && mAttribute_mGlobalVariableMap.isValid () && mAttribute_mConstructorMap.isValid () && mAttribute_mModeMap.isValid () && mAttribute_mEqualOperatorMap.isValid () && mAttribute_mNonEqualOperatorMap.isValid () && mAttribute_mStrictInfOperatorMap.isValid () && mAttribute_mInfEqualOperatorMap.isValid () && mAttribute_mStrictSupOperatorMap.isValid () && mAttribute_mSupEqualOperatorMap.isValid () && mAttribute_mAndOperatorMap.isValid () && mAttribute_mOrOperatorMap.isValid () && mAttribute_mXorOperatorMap.isValid () && mAttribute_mBooleanXorOperatorMap.isValid () && mAttribute_mAddOperatorMap.isValid () && mAttribute_mAddNoOvfOperatorMap.isValid () && mAttribute_mSubOperatorMap.isValid () && mAttribute_mSubNoOvfOperatorMap.isValid () && mAttribute_mMulOperatorMap.isValid () && mAttribute_mMulNoOvfOperatorMap.isValid () && mAttribute_mDivOperatorMap.isValid () && mAttribute_mDivNoOvfOperatorMap.isValid () && mAttribute_mModOperatorMap.isValid () && mAttribute_mModNoOvfOperatorMap.isValid () && mAttribute_mLeftShiftOperatorMap.isValid () && mAttribute_mRightShiftOperatorMap.isValid () && mAttribute_mUnaryMinusOperatorMap.isValid () && mAttribute_mNotOperatorMap.isValid () && mAttribute_mUnsignedComplementOperatorMap.isValid () && mAttribute_mTaskMap.isValid () && mAttribute_mGlobalTaskVariableList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticContext::drop (void) {
  mAttribute_mPointerSize.drop () ;
  mAttribute_mBooleanType.drop () ;
  mAttribute_mLiteralIntegerType.drop () ;
  mAttribute_mExceptionCodeType.drop () ;
  mAttribute_mExceptionLineType.drop () ;
  mAttribute_mTypeMap.drop () ;
  mAttribute_mRoutineMapForContext.drop () ;
  mAttribute_mFunctionMap.drop () ;
  mAttribute_mInitRoutineMap.drop () ;
  mAttribute_mExceptionSetupRoutinePriorityMap.drop () ;
  mAttribute_mExceptionLoopRoutinePriorityMap.drop () ;
  mAttribute_mControlRegisterMap.drop () ;
  mAttribute_mGlobalConstantMap.drop () ;
  mAttribute_mGlobalVariableMap.drop () ;
  mAttribute_mConstructorMap.drop () ;
  mAttribute_mModeMap.drop () ;
  mAttribute_mEqualOperatorMap.drop () ;
  mAttribute_mNonEqualOperatorMap.drop () ;
  mAttribute_mStrictInfOperatorMap.drop () ;
  mAttribute_mInfEqualOperatorMap.drop () ;
  mAttribute_mStrictSupOperatorMap.drop () ;
  mAttribute_mSupEqualOperatorMap.drop () ;
  mAttribute_mAndOperatorMap.drop () ;
  mAttribute_mOrOperatorMap.drop () ;
  mAttribute_mXorOperatorMap.drop () ;
  mAttribute_mBooleanXorOperatorMap.drop () ;
  mAttribute_mAddOperatorMap.drop () ;
  mAttribute_mAddNoOvfOperatorMap.drop () ;
  mAttribute_mSubOperatorMap.drop () ;
  mAttribute_mSubNoOvfOperatorMap.drop () ;
  mAttribute_mMulOperatorMap.drop () ;
  mAttribute_mMulNoOvfOperatorMap.drop () ;
  mAttribute_mDivOperatorMap.drop () ;
  mAttribute_mDivNoOvfOperatorMap.drop () ;
  mAttribute_mModOperatorMap.drop () ;
  mAttribute_mModNoOvfOperatorMap.drop () ;
  mAttribute_mLeftShiftOperatorMap.drop () ;
  mAttribute_mRightShiftOperatorMap.drop () ;
  mAttribute_mUnaryMinusOperatorMap.drop () ;
  mAttribute_mNotOperatorMap.drop () ;
  mAttribute_mUnsignedComplementOperatorMap.drop () ;
  mAttribute_mTaskMap.drop () ;
  mAttribute_mGlobalTaskVariableList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticContext::description (C_String & ioString,
                                          const int32_t inIndentation) const {
  ioString << "<struct @semanticContext:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mPointerSize.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mBooleanType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mLiteralIntegerType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mExceptionCodeType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mExceptionLineType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mTypeMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mRoutineMapForContext.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFunctionMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInitRoutineMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mExceptionSetupRoutinePriorityMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mExceptionLoopRoutinePriorityMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mControlRegisterMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mGlobalConstantMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mGlobalVariableMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mConstructorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mModeMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mEqualOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mNonEqualOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mStrictInfOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInfEqualOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mStrictSupOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSupEqualOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mAndOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mOrOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mXorOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mBooleanXorOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mAddOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mAddNoOvfOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSubOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSubNoOvfOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mMulOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mMulNoOvfOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mDivOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mDivNoOvfOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mModOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mModNoOvfOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mLeftShiftOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mRightShiftOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mUnaryMinusOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mNotOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mUnsignedComplementOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mTaskMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mGlobalTaskVariableList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_semanticContext::getter_mPointerSize (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPointerSize ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_semanticContext::getter_mBooleanType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBooleanType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_semanticContext::getter_mLiteralIntegerType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLiteralIntegerType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_semanticContext::getter_mExceptionCodeType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExceptionCodeType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_semanticContext::getter_mExceptionLineType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExceptionLineType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap GALGAS_semanticContext::getter_mTypeMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTypeMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineMapForContext GALGAS_semanticContext::getter_mRoutineMapForContext (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRoutineMapForContext ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionMap GALGAS_semanticContext::getter_mFunctionMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFunctionMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initRoutineMap GALGAS_semanticContext::getter_mInitRoutineMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInitRoutineMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_exceptionRoutinePriorityMap GALGAS_semanticContext::getter_mExceptionSetupRoutinePriorityMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExceptionSetupRoutinePriorityMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_exceptionRoutinePriorityMap GALGAS_semanticContext::getter_mExceptionLoopRoutinePriorityMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExceptionLoopRoutinePriorityMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterMap GALGAS_semanticContext::getter_mControlRegisterMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mControlRegisterMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalConstantMap GALGAS_semanticContext::getter_mGlobalConstantMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mGlobalConstantMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalVariableMap GALGAS_semanticContext::getter_mGlobalVariableMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mGlobalVariableMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorMap GALGAS_semanticContext::getter_mConstructorMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mConstructorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_modeMap GALGAS_semanticContext::getter_mModeMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mModeMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::getter_mEqualOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEqualOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::getter_mNonEqualOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mNonEqualOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::getter_mStrictInfOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mStrictInfOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::getter_mInfEqualOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInfEqualOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::getter_mStrictSupOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mStrictSupOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::getter_mSupEqualOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSupEqualOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::getter_mAndOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAndOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::getter_mOrOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOrOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::getter_mXorOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mXorOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::getter_mBooleanXorOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBooleanXorOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::getter_mAddOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAddOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::getter_mAddNoOvfOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAddNoOvfOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::getter_mSubOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSubOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::getter_mSubNoOvfOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSubNoOvfOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::getter_mMulOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mMulOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::getter_mMulNoOvfOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mMulNoOvfOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::getter_mDivOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDivOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::getter_mDivNoOvfOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDivNoOvfOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::getter_mModOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mModOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::getter_mModNoOvfOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mModNoOvfOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::getter_mLeftShiftOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLeftShiftOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::getter_mRightShiftOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRightShiftOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefixOperatorMap GALGAS_semanticContext::getter_mUnaryMinusOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mUnaryMinusOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefixOperatorMap GALGAS_semanticContext::getter_mNotOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mNotOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefixOperatorMap GALGAS_semanticContext::getter_mUnsignedComplementOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mUnsignedComplementOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskMap GALGAS_semanticContext::getter_mTaskMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTaskMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalTaskVariableList GALGAS_semanticContext::getter_mGlobalTaskVariableList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mGlobalTaskVariableList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @semanticContext type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_semanticContext ("semanticContext",
                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_semanticContext::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticContext ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_semanticContext::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_semanticContext (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticContext GALGAS_semanticContext::extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_semanticContext result ;
  const GALGAS_semanticContext * p = (const GALGAS_semanticContext *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_semanticContext *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticContext", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticTemporariesStruct::GALGAS_semanticTemporariesStruct (void) :
mAttribute_mTemporaryIndex (),
mAttribute_mExceptionSetupRoutinePriorityMap (),
mAttribute_mExceptionLoopRoutinePriorityMap (),
mAttribute_mInitRoutinePriorityMap (),
mAttribute_mBootRoutinePriorityMap (),
mAttribute_mSubprogramInvocationGraph () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticTemporariesStruct::~ GALGAS_semanticTemporariesStruct (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticTemporariesStruct::GALGAS_semanticTemporariesStruct (const GALGAS_uint & inOperand0,
                                                                    const GALGAS_exceptionRoutinePriorityMap & inOperand1,
                                                                    const GALGAS_exceptionRoutinePriorityMap & inOperand2,
                                                                    const GALGAS_initRoutinePriorityMap & inOperand3,
                                                                    const GALGAS_bootRoutinePriorityMap & inOperand4,
                                                                    const GALGAS_subprogramInvocationGraph & inOperand5) :
mAttribute_mTemporaryIndex (inOperand0),
mAttribute_mExceptionSetupRoutinePriorityMap (inOperand1),
mAttribute_mExceptionLoopRoutinePriorityMap (inOperand2),
mAttribute_mInitRoutinePriorityMap (inOperand3),
mAttribute_mBootRoutinePriorityMap (inOperand4),
mAttribute_mSubprogramInvocationGraph (inOperand5) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticTemporariesStruct GALGAS_semanticTemporariesStruct::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_semanticTemporariesStruct (GALGAS_uint::constructor_default (HERE),
                                           GALGAS_exceptionRoutinePriorityMap::constructor_emptyMap (HERE),
                                           GALGAS_exceptionRoutinePriorityMap::constructor_emptyMap (HERE),
                                           GALGAS_initRoutinePriorityMap::constructor_emptyMap (HERE),
                                           GALGAS_bootRoutinePriorityMap::constructor_emptyMap (HERE),
                                           GALGAS_subprogramInvocationGraph::constructor_emptyGraph (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticTemporariesStruct GALGAS_semanticTemporariesStruct::constructor_new (const GALGAS_uint & inOperand0,
                                                                                    const GALGAS_exceptionRoutinePriorityMap & inOperand1,
                                                                                    const GALGAS_exceptionRoutinePriorityMap & inOperand2,
                                                                                    const GALGAS_initRoutinePriorityMap & inOperand3,
                                                                                    const GALGAS_bootRoutinePriorityMap & inOperand4,
                                                                                    const GALGAS_subprogramInvocationGraph & inOperand5 
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticTemporariesStruct result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid ()) {
    result = GALGAS_semanticTemporariesStruct (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_semanticTemporariesStruct::objectCompare (const GALGAS_semanticTemporariesStruct & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mTemporaryIndex.objectCompare (inOperand.mAttribute_mTemporaryIndex) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mExceptionSetupRoutinePriorityMap.objectCompare (inOperand.mAttribute_mExceptionSetupRoutinePriorityMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mExceptionLoopRoutinePriorityMap.objectCompare (inOperand.mAttribute_mExceptionLoopRoutinePriorityMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInitRoutinePriorityMap.objectCompare (inOperand.mAttribute_mInitRoutinePriorityMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mBootRoutinePriorityMap.objectCompare (inOperand.mAttribute_mBootRoutinePriorityMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSubprogramInvocationGraph.objectCompare (inOperand.mAttribute_mSubprogramInvocationGraph) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_semanticTemporariesStruct::isValid (void) const {
  return mAttribute_mTemporaryIndex.isValid () && mAttribute_mExceptionSetupRoutinePriorityMap.isValid () && mAttribute_mExceptionLoopRoutinePriorityMap.isValid () && mAttribute_mInitRoutinePriorityMap.isValid () && mAttribute_mBootRoutinePriorityMap.isValid () && mAttribute_mSubprogramInvocationGraph.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticTemporariesStruct::drop (void) {
  mAttribute_mTemporaryIndex.drop () ;
  mAttribute_mExceptionSetupRoutinePriorityMap.drop () ;
  mAttribute_mExceptionLoopRoutinePriorityMap.drop () ;
  mAttribute_mInitRoutinePriorityMap.drop () ;
  mAttribute_mBootRoutinePriorityMap.drop () ;
  mAttribute_mSubprogramInvocationGraph.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticTemporariesStruct::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "<struct @semanticTemporariesStruct:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mTemporaryIndex.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mExceptionSetupRoutinePriorityMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mExceptionLoopRoutinePriorityMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInitRoutinePriorityMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mBootRoutinePriorityMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSubprogramInvocationGraph.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_semanticTemporariesStruct::getter_mTemporaryIndex (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTemporaryIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_exceptionRoutinePriorityMap GALGAS_semanticTemporariesStruct::getter_mExceptionSetupRoutinePriorityMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExceptionSetupRoutinePriorityMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_exceptionRoutinePriorityMap GALGAS_semanticTemporariesStruct::getter_mExceptionLoopRoutinePriorityMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExceptionLoopRoutinePriorityMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initRoutinePriorityMap GALGAS_semanticTemporariesStruct::getter_mInitRoutinePriorityMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInitRoutinePriorityMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootRoutinePriorityMap GALGAS_semanticTemporariesStruct::getter_mBootRoutinePriorityMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBootRoutinePriorityMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_subprogramInvocationGraph GALGAS_semanticTemporariesStruct::getter_mSubprogramInvocationGraph (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSubprogramInvocationGraph ;
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
mAttribute_lkey (),
mAttribute_mFormalArgumentListForGeneration (),
mAttribute_mInstructionGenerationList (),
mAttribute_mIsRequired (),
mAttribute_mWarnIfUnused (),
mAttribute_mWeak (),
mAttribute_mNullOnNoException (),
mAttribute_mGlobal (),
mAttribute_mKind () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineMapIR_2D_element::~ GALGAS_routineMapIR_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineMapIR_2D_element::GALGAS_routineMapIR_2D_element (const GALGAS_lstring & inOperand0,
                                                                const GALGAS_procFormalArgumentListForGeneration & inOperand1,
                                                                const GALGAS_instructionListIR & inOperand2,
                                                                const GALGAS_bool & inOperand3,
                                                                const GALGAS_bool & inOperand4,
                                                                const GALGAS_bool & inOperand5,
                                                                const GALGAS_bool & inOperand6,
                                                                const GALGAS_bool & inOperand7,
                                                                const GALGAS_routineKind & inOperand8) :
mAttribute_lkey (inOperand0),
mAttribute_mFormalArgumentListForGeneration (inOperand1),
mAttribute_mInstructionGenerationList (inOperand2),
mAttribute_mIsRequired (inOperand3),
mAttribute_mWarnIfUnused (inOperand4),
mAttribute_mWeak (inOperand5),
mAttribute_mNullOnNoException (inOperand6),
mAttribute_mGlobal (inOperand7),
mAttribute_mKind (inOperand8) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineMapIR_2D_element GALGAS_routineMapIR_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                const GALGAS_procFormalArgumentListForGeneration & inOperand1,
                                                                                const GALGAS_instructionListIR & inOperand2,
                                                                                const GALGAS_bool & inOperand3,
                                                                                const GALGAS_bool & inOperand4,
                                                                                const GALGAS_bool & inOperand5,
                                                                                const GALGAS_bool & inOperand6,
                                                                                const GALGAS_bool & inOperand7,
                                                                                const GALGAS_routineKind & inOperand8 
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_routineMapIR_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid ()) {
    result = GALGAS_routineMapIR_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_routineMapIR_2D_element::objectCompare (const GALGAS_routineMapIR_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFormalArgumentListForGeneration.objectCompare (inOperand.mAttribute_mFormalArgumentListForGeneration) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInstructionGenerationList.objectCompare (inOperand.mAttribute_mInstructionGenerationList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mIsRequired.objectCompare (inOperand.mAttribute_mIsRequired) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mWarnIfUnused.objectCompare (inOperand.mAttribute_mWarnIfUnused) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mWeak.objectCompare (inOperand.mAttribute_mWeak) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mNullOnNoException.objectCompare (inOperand.mAttribute_mNullOnNoException) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mGlobal.objectCompare (inOperand.mAttribute_mGlobal) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mKind.objectCompare (inOperand.mAttribute_mKind) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_routineMapIR_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mFormalArgumentListForGeneration.isValid () && mAttribute_mInstructionGenerationList.isValid () && mAttribute_mIsRequired.isValid () && mAttribute_mWarnIfUnused.isValid () && mAttribute_mWeak.isValid () && mAttribute_mNullOnNoException.isValid () && mAttribute_mGlobal.isValid () && mAttribute_mKind.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineMapIR_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mFormalArgumentListForGeneration.drop () ;
  mAttribute_mInstructionGenerationList.drop () ;
  mAttribute_mIsRequired.drop () ;
  mAttribute_mWarnIfUnused.drop () ;
  mAttribute_mWeak.drop () ;
  mAttribute_mNullOnNoException.drop () ;
  mAttribute_mGlobal.drop () ;
  mAttribute_mKind.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineMapIR_2D_element::description (C_String & ioString,
                                                  const int32_t inIndentation) const {
  ioString << "<struct @routineMapIR-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFormalArgumentListForGeneration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInstructionGenerationList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mIsRequired.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mWarnIfUnused.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mWeak.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mNullOnNoException.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mGlobal.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mKind.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_routineMapIR_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentListForGeneration GALGAS_routineMapIR_2D_element::getter_mFormalArgumentListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormalArgumentListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR GALGAS_routineMapIR_2D_element::getter_mInstructionGenerationList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstructionGenerationList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_routineMapIR_2D_element::getter_mIsRequired (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIsRequired ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_routineMapIR_2D_element::getter_mWarnIfUnused (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mWarnIfUnused ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_routineMapIR_2D_element::getter_mWeak (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mWeak ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_routineMapIR_2D_element::getter_mNullOnNoException (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mNullOnNoException ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_routineMapIR_2D_element::getter_mGlobal (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mGlobal ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineKind GALGAS_routineMapIR_2D_element::getter_mKind (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mKind ;
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
//                                                                                                                     *
//                                         Category Getter '@valueIR llvmName'                                         *
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
  case GALGAS_valueIR::kEnum_literalInteger:
    {
      const cEnumAssociatedValues_valueIR_literalInteger * extractPtr_1067 = (const cEnumAssociatedValues_valueIR_literalInteger *) (temp_0.unsafePointer ()) ;
      const GALGAS_bigint extractedValue_value = extractPtr_1067->mAssociatedValue0 ;
      result_outResult = extractedValue_value.getter_string (SOURCE_FILE ("intermediate-value-representation.galgas", 26)) ;
    }
    break ;
  case GALGAS_valueIR::kEnum_llvmLocalObject:
    {
      const cEnumAssociatedValues_valueIR_llvmLocalObject * extractPtr_1130 = (const cEnumAssociatedValues_valueIR_llvmLocalObject *) (temp_0.unsafePointer ()) ;
      const GALGAS_string extractedValue_name = extractPtr_1130->mAssociatedValue0 ;
      result_outResult = GALGAS_string ("%").add_operation (extractedValue_name, inCompiler COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 27)) ;
    }
    break ;
  case GALGAS_valueIR::kEnum_llvmGlobalObject:
    {
      const cEnumAssociatedValues_valueIR_llvmGlobalObject * extractPtr_1194 = (const cEnumAssociatedValues_valueIR_llvmGlobalObject *) (temp_0.unsafePointer ()) ;
      const GALGAS_string extractedValue_name = extractPtr_1194->mAssociatedValue0 ;
      result_outResult = GALGAS_string ("@").add_operation (extractedValue_name, inCompiler COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 28)) ;
    }
    break ;
  case GALGAS_valueIR::kEnum_llvmStructureConstant:
    {
      const cEnumAssociatedValues_valueIR_llvmStructureConstant * extractPtr_1442 = (const cEnumAssociatedValues_valueIR_llvmStructureConstant *) (temp_0.unsafePointer ()) ;
      const GALGAS_operandIRList extractedValue_inValues = extractPtr_1442->mAssociatedValue0 ;
      result_outResult = GALGAS_string ("{") ;
      cEnumerator_operandIRList enumerator_1294 (extractedValue_inValues, kEnumeration_up) ;
      while (enumerator_1294.hasCurrentObject ()) {
        result_outResult.plusAssign_operation(enumerator_1294.current_mOperand (HERE).mAttribute_mType.getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 32)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 32)).add_operation (extensionGetter_llvmName (enumerator_1294.current_mOperand (HERE).mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 32)), inCompiler COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 32)), inCompiler  COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 32)) ;
        if (enumerator_1294.hasNextObject ()) {
          result_outResult.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 33)) ;
        }
        enumerator_1294.gotoNextObject () ;
      }
      result_outResult.plusAssign_operation(GALGAS_string ("}"), inCompiler  COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 35)) ;
    }
    break ;
  case GALGAS_valueIR::kEnum_literalString:
    {
      const cEnumAssociatedValues_valueIR_literalString * extractPtr_1686 = (const cEnumAssociatedValues_valueIR_literalString *) (temp_0.unsafePointer ()) ;
      const GALGAS_uint extractedValue_size = extractPtr_1686->mAssociatedValue0 ;
      const GALGAS_uint extractedValue_index = extractPtr_1686->mAssociatedValue1 ;
      GALGAS_string var_sizeStr = extractedValue_size.getter_string (SOURCE_FILE ("intermediate-value-representation.galgas", 37)) ;
      result_outResult = GALGAS_string ("getelementptr inbounds ([").add_operation (var_sizeStr, inCompiler COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 38)).add_operation (GALGAS_string (" x i8], ["), inCompiler COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 38)).add_operation (var_sizeStr, inCompiler COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 38)).add_operation (GALGAS_string (" x i8]* "), inCompiler COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 38)) ;
      result_outResult.plusAssign_operation(function_literalCharacterArrayName (extractedValue_index, inCompiler COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 39)).add_operation (GALGAS_string (", i32 0, i32 0)"), inCompiler COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 39)), inCompiler  COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 39)) ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Category Getter '@valueIR name'                                           *
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
  case GALGAS_valueIR::kEnum_literalInteger:
    {
      const cEnumAssociatedValues_valueIR_literalInteger * extractPtr_1942 = (const cEnumAssociatedValues_valueIR_literalInteger *) (temp_0.unsafePointer ()) ;
      const GALGAS_bigint extractedValue_value = extractPtr_1942->mAssociatedValue0 ;
      result_outResult = extractedValue_value.getter_string (SOURCE_FILE ("intermediate-value-representation.galgas", 47)) ;
    }
    break ;
  case GALGAS_valueIR::kEnum_llvmLocalObject:
    {
      const cEnumAssociatedValues_valueIR_llvmLocalObject * extractPtr_1999 = (const cEnumAssociatedValues_valueIR_llvmLocalObject *) (temp_0.unsafePointer ()) ;
      const GALGAS_string extractedValue_name = extractPtr_1999->mAssociatedValue0 ;
      result_outResult = extractedValue_name ;
    }
    break ;
  case GALGAS_valueIR::kEnum_llvmGlobalObject:
    {
      const cEnumAssociatedValues_valueIR_llvmGlobalObject * extractPtr_2057 = (const cEnumAssociatedValues_valueIR_llvmGlobalObject *) (temp_0.unsafePointer ()) ;
      const GALGAS_string extractedValue_name = extractPtr_2057->mAssociatedValue0 ;
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
      const cEnumAssociatedValues_valueIR_literalString * extractPtr_2191 = (const cEnumAssociatedValues_valueIR_literalString *) (temp_0.unsafePointer ()) ;
      const GALGAS_uint extractedValue_index = extractPtr_2191->mAssociatedValue1 ;
      result_outResult = function_literalStringName (extractedValue_index, inCompiler COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 51)) ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Category Getter '@valueIR isStatic'                                         *
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

GALGAS_intermediateCodeStruct::GALGAS_intermediateCodeStruct (void) :
mAttribute_mStaticStringMap (),
mAttribute_mControlRegisterMap (),
mAttribute_mGlobalVariableMap (),
mAttribute_mGlobalConstantMap (),
mAttribute_mRoutineMapIR (),
mAttribute_mFunctionMapIR (),
mAttribute_mExternProcedureMapIR (),
mAttribute_mRequiredProcedureSet (),
mAttribute_mBootList (),
mAttribute_mInitList (),
mAttribute_mPanicSetupInstructionListIR (),
mAttribute_mPanicLoopInstructionListIR (),
mAttribute_mTaskMapIR (),
mAttribute_mGlobalTaskVariableList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_intermediateCodeStruct::~ GALGAS_intermediateCodeStruct (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_intermediateCodeStruct::GALGAS_intermediateCodeStruct (const GALGAS_staticStringMap & inOperand0,
                                                              const GALGAS_controlRegisterMapIR & inOperand1,
                                                              const GALGAS_globalVariableMapIR & inOperand2,
                                                              const GALGAS_globalConstantMapIR & inOperand3,
                                                              const GALGAS_routineMapIR & inOperand4,
                                                              const GALGAS_functionMapIR & inOperand5,
                                                              const GALGAS_externProcedureMapIR & inOperand6,
                                                              const GALGAS_stringset & inOperand7,
                                                              const GALGAS_bootListIR & inOperand8,
                                                              const GALGAS_initListIR & inOperand9,
                                                              const GALGAS_instructionListIR & inOperand10,
                                                              const GALGAS_instructionListIR & inOperand11,
                                                              const GALGAS_taskMapIR & inOperand12,
                                                              const GALGAS_globalTaskVariableList & inOperand13) :
mAttribute_mStaticStringMap (inOperand0),
mAttribute_mControlRegisterMap (inOperand1),
mAttribute_mGlobalVariableMap (inOperand2),
mAttribute_mGlobalConstantMap (inOperand3),
mAttribute_mRoutineMapIR (inOperand4),
mAttribute_mFunctionMapIR (inOperand5),
mAttribute_mExternProcedureMapIR (inOperand6),
mAttribute_mRequiredProcedureSet (inOperand7),
mAttribute_mBootList (inOperand8),
mAttribute_mInitList (inOperand9),
mAttribute_mPanicSetupInstructionListIR (inOperand10),
mAttribute_mPanicLoopInstructionListIR (inOperand11),
mAttribute_mTaskMapIR (inOperand12),
mAttribute_mGlobalTaskVariableList (inOperand13) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_intermediateCodeStruct GALGAS_intermediateCodeStruct::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_intermediateCodeStruct (GALGAS_staticStringMap::constructor_emptyMap (HERE),
                                        GALGAS_controlRegisterMapIR::constructor_emptyMap (HERE),
                                        GALGAS_globalVariableMapIR::constructor_emptyMap (HERE),
                                        GALGAS_globalConstantMapIR::constructor_emptyMap (HERE),
                                        GALGAS_routineMapIR::constructor_emptyMap (HERE),
                                        GALGAS_functionMapIR::constructor_emptyMap (HERE),
                                        GALGAS_externProcedureMapIR::constructor_emptyMap (HERE),
                                        GALGAS_stringset::constructor_emptySet (HERE),
                                        GALGAS_bootListIR::constructor_emptyList (HERE),
                                        GALGAS_initListIR::constructor_emptyList (HERE),
                                        GALGAS_instructionListIR::constructor_emptyList (HERE),
                                        GALGAS_instructionListIR::constructor_emptyList (HERE),
                                        GALGAS_taskMapIR::constructor_emptyMap (HERE),
                                        GALGAS_globalTaskVariableList::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_intermediateCodeStruct GALGAS_intermediateCodeStruct::constructor_new (const GALGAS_staticStringMap & inOperand0,
                                                                              const GALGAS_controlRegisterMapIR & inOperand1,
                                                                              const GALGAS_globalVariableMapIR & inOperand2,
                                                                              const GALGAS_globalConstantMapIR & inOperand3,
                                                                              const GALGAS_routineMapIR & inOperand4,
                                                                              const GALGAS_functionMapIR & inOperand5,
                                                                              const GALGAS_externProcedureMapIR & inOperand6,
                                                                              const GALGAS_stringset & inOperand7,
                                                                              const GALGAS_bootListIR & inOperand8,
                                                                              const GALGAS_initListIR & inOperand9,
                                                                              const GALGAS_instructionListIR & inOperand10,
                                                                              const GALGAS_instructionListIR & inOperand11,
                                                                              const GALGAS_taskMapIR & inOperand12,
                                                                              const GALGAS_globalTaskVariableList & inOperand13 
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_intermediateCodeStruct result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid () && inOperand10.isValid () && inOperand11.isValid () && inOperand12.isValid () && inOperand13.isValid ()) {
    result = GALGAS_intermediateCodeStruct (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10, inOperand11, inOperand12, inOperand13) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_intermediateCodeStruct::objectCompare (const GALGAS_intermediateCodeStruct & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mStaticStringMap.objectCompare (inOperand.mAttribute_mStaticStringMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mControlRegisterMap.objectCompare (inOperand.mAttribute_mControlRegisterMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mGlobalVariableMap.objectCompare (inOperand.mAttribute_mGlobalVariableMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mGlobalConstantMap.objectCompare (inOperand.mAttribute_mGlobalConstantMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mRoutineMapIR.objectCompare (inOperand.mAttribute_mRoutineMapIR) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFunctionMapIR.objectCompare (inOperand.mAttribute_mFunctionMapIR) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mExternProcedureMapIR.objectCompare (inOperand.mAttribute_mExternProcedureMapIR) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mRequiredProcedureSet.objectCompare (inOperand.mAttribute_mRequiredProcedureSet) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mBootList.objectCompare (inOperand.mAttribute_mBootList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInitList.objectCompare (inOperand.mAttribute_mInitList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mPanicSetupInstructionListIR.objectCompare (inOperand.mAttribute_mPanicSetupInstructionListIR) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mPanicLoopInstructionListIR.objectCompare (inOperand.mAttribute_mPanicLoopInstructionListIR) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mTaskMapIR.objectCompare (inOperand.mAttribute_mTaskMapIR) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mGlobalTaskVariableList.objectCompare (inOperand.mAttribute_mGlobalTaskVariableList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_intermediateCodeStruct::isValid (void) const {
  return mAttribute_mStaticStringMap.isValid () && mAttribute_mControlRegisterMap.isValid () && mAttribute_mGlobalVariableMap.isValid () && mAttribute_mGlobalConstantMap.isValid () && mAttribute_mRoutineMapIR.isValid () && mAttribute_mFunctionMapIR.isValid () && mAttribute_mExternProcedureMapIR.isValid () && mAttribute_mRequiredProcedureSet.isValid () && mAttribute_mBootList.isValid () && mAttribute_mInitList.isValid () && mAttribute_mPanicSetupInstructionListIR.isValid () && mAttribute_mPanicLoopInstructionListIR.isValid () && mAttribute_mTaskMapIR.isValid () && mAttribute_mGlobalTaskVariableList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_intermediateCodeStruct::drop (void) {
  mAttribute_mStaticStringMap.drop () ;
  mAttribute_mControlRegisterMap.drop () ;
  mAttribute_mGlobalVariableMap.drop () ;
  mAttribute_mGlobalConstantMap.drop () ;
  mAttribute_mRoutineMapIR.drop () ;
  mAttribute_mFunctionMapIR.drop () ;
  mAttribute_mExternProcedureMapIR.drop () ;
  mAttribute_mRequiredProcedureSet.drop () ;
  mAttribute_mBootList.drop () ;
  mAttribute_mInitList.drop () ;
  mAttribute_mPanicSetupInstructionListIR.drop () ;
  mAttribute_mPanicLoopInstructionListIR.drop () ;
  mAttribute_mTaskMapIR.drop () ;
  mAttribute_mGlobalTaskVariableList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_intermediateCodeStruct::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "<struct @intermediateCodeStruct:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mStaticStringMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mControlRegisterMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mGlobalVariableMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mGlobalConstantMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mRoutineMapIR.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFunctionMapIR.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mExternProcedureMapIR.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mRequiredProcedureSet.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mBootList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInitList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mPanicSetupInstructionListIR.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mPanicLoopInstructionListIR.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mTaskMapIR.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mGlobalTaskVariableList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticStringMap GALGAS_intermediateCodeStruct::getter_mStaticStringMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mStaticStringMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterMapIR GALGAS_intermediateCodeStruct::getter_mControlRegisterMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mControlRegisterMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalVariableMapIR GALGAS_intermediateCodeStruct::getter_mGlobalVariableMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mGlobalVariableMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalConstantMapIR GALGAS_intermediateCodeStruct::getter_mGlobalConstantMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mGlobalConstantMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineMapIR GALGAS_intermediateCodeStruct::getter_mRoutineMapIR (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRoutineMapIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionMapIR GALGAS_intermediateCodeStruct::getter_mFunctionMapIR (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFunctionMapIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externProcedureMapIR GALGAS_intermediateCodeStruct::getter_mExternProcedureMapIR (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExternProcedureMapIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringset GALGAS_intermediateCodeStruct::getter_mRequiredProcedureSet (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRequiredProcedureSet ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootListIR GALGAS_intermediateCodeStruct::getter_mBootList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBootList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initListIR GALGAS_intermediateCodeStruct::getter_mInitList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInitList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR GALGAS_intermediateCodeStruct::getter_mPanicSetupInstructionListIR (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPanicSetupInstructionListIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR GALGAS_intermediateCodeStruct::getter_mPanicLoopInstructionListIR (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPanicLoopInstructionListIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskMapIR GALGAS_intermediateCodeStruct::getter_mTaskMapIR (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTaskMapIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalTaskVariableList GALGAS_intermediateCodeStruct::getter_mGlobalTaskVariableList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mGlobalTaskVariableList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @intermediateCodeStruct type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_intermediateCodeStruct ("intermediateCodeStruct",
                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_intermediateCodeStruct::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_intermediateCodeStruct ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_intermediateCodeStruct::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_intermediateCodeStruct (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_intermediateCodeStruct GALGAS_intermediateCodeStruct::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_intermediateCodeStruct result ;
  const GALGAS_intermediateCodeStruct * p = (const GALGAS_intermediateCodeStruct *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_intermediateCodeStruct *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("intermediateCodeStruct", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Category method '@binaryOperationIR enterCodeForOverflowOperation'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_binaryOperationIR_enterCodeForOverflowOperation> gCategoryMethodTable_binaryOperationIR_enterCodeForOverflowOperation ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_enterCodeForOverflowOperation (const int32_t inClassIndex,
                                                        categoryMethodSignature_binaryOperationIR_enterCodeForOverflowOperation inMethod) {
  gCategoryMethodTable_binaryOperationIR_enterCodeForOverflowOperation.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_enterCodeForOverflowOperation (const cPtr_binaryOperationIR * inObject,
                                                       const GALGAS_string constin_inOperation,
                                                       const GALGAS_uint constin_inCode,
                                                       GALGAS_string & io_ioLLVMcode,
                                                       const GALGAS_generationContext constin_inGenerationContext,
                                                       GALGAS_generationAdds & io_ioGenerationAdds,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_binaryOperationIR) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_binaryOperationIR_enterCodeForOverflowOperation f = NULL ;
    if (classIndex < gCategoryMethodTable_binaryOperationIR_enterCodeForOverflowOperation.count ()) {
      f = gCategoryMethodTable_binaryOperationIR_enterCodeForOverflowOperation (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_binaryOperationIR_enterCodeForOverflowOperation.count ()) {
           f = gCategoryMethodTable_binaryOperationIR_enterCodeForOverflowOperation (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_binaryOperationIR_enterCodeForOverflowOperation.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inOperation, constin_inCode, io_ioLLVMcode, constin_inGenerationContext, io_ioGenerationAdds, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_binaryOperationIR_enterCodeForOverflowOperation (const cPtr_binaryOperationIR * inObject,
                                                                            const GALGAS_string constinArgument_inOperation,
                                                                            const GALGAS_uint constinArgument_inCode,
                                                                            GALGAS_string & ioArgument_ioLLVMcode,
                                                                            const GALGAS_generationContext constinArgument_inGenerationContext,
                                                                            GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_binaryOperationIR * object = inObject ;
  macroValidSharedObject (object, cPtr_binaryOperationIR) ;
  GALGAS_uint var_staticStringIndex ;
  {
  categoryModifier_findOrAddStaticString (ioArgument_ioGenerationAdds.mAttribute_mStaticStringMap, object->mAttribute_mLocation.getter_file (inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 80)).getter_lastPathComponent (SOURCE_FILE ("intermediate-binary-operation.galgas", 80)).getter_stringByDeletingPathExtension (SOURCE_FILE ("intermediate-binary-operation.galgas", 80)), var_staticStringIndex, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 79)) ;
  }
  GALGAS_string var_llvmType = object->mAttribute_mOperandType.getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 83)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 84)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 84)).add_operation (GALGAS_string (".r = call {"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 84)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 84)).add_operation (GALGAS_string (", i1} @llvm."), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 84)).add_operation (constinArgument_inOperation, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 84)).add_operation (GALGAS_string (".with.overflow."), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 84)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 84)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 84)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" (").add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 85)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 85)).add_operation (extensionGetter_llvmName (object->mAttribute_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 85)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 85)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 85)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 85)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 85)).add_operation (extensionGetter_llvmName (object->mAttribute_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 85)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 85)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 85)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 85)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 86)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 86)).add_operation (GALGAS_string (".hasOvf = extractvalue {"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 86)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 86)).add_operation (GALGAS_string (", i1} "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 86)).add_operation (extensionGetter_llvmName (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 86)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 86)).add_operation (GALGAS_string (".r, 1\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 86)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 86)) ;
  GALGAS_string var_labelName = extensionGetter_name (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 87)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (extensionGetter_llvmName (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 88)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 88)).add_operation (GALGAS_string (".hasOvf, label %"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 88)).add_operation (var_labelName, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 88)).add_operation (GALGAS_string (".ovf, label %"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 88)).add_operation (var_labelName, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 88)).add_operation (GALGAS_string (".noovf\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 88)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 88)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelName.add_operation (GALGAS_string (".ovf:\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 89)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 89)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @raise_exception.").add_operation (var_staticStringIndex.getter_string (SOURCE_FILE ("intermediate-binary-operation.galgas", 90)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 90)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 90)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 90)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(constinArgument_inGenerationContext.mAttribute_mExceptionLineLLVMType.add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 91)).add_operation (object->mAttribute_mLocation.getter_line (inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 91)).getter_string (SOURCE_FILE ("intermediate-binary-operation.galgas", 91)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 91)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 91)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 91)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(constinArgument_inGenerationContext.mAttribute_mExceptionCodeLLVMType.add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 92)).add_operation (constinArgument_inCode.getter_string (SOURCE_FILE ("intermediate-binary-operation.galgas", 92)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 92)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 92)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 92)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  unreachable\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 93)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelName.add_operation (GALGAS_string (".noovf:\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 94)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 94)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 95)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 95)).add_operation (GALGAS_string (" = extractvalue {"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 95)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 95)).add_operation (GALGAS_string (", i1} "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 95)).add_operation (extensionGetter_llvmName (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 95)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 95)).add_operation (GALGAS_string (".r, 0\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 95)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 95)) ;
  ioArgument_ioGenerationAdds.mAttribute_mIntrinsicsDeclarationSet.addAssign_operation (GALGAS_string ("declare {").add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 96)).add_operation (GALGAS_string (", i1} @llvm."), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 96)).add_operation (constinArgument_inOperation, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 96)).add_operation (GALGAS_string (".with.overflow."), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 96)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 96)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 97)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 97)).add_operation (GALGAS_string (" %a, "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 97)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 97)).add_operation (GALGAS_string (" %b)"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 97))  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 96)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_binaryOperationIR_enterCodeForOverflowOperation (void) {
  enterCategoryMethod_enterCodeForOverflowOperation (kTypeDescriptor_GALGAS_binaryOperationIR.mSlotID,
                                                     categoryMethod_binaryOperationIR_enterCodeForOverflowOperation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_binaryOperationIR_enterCodeForOverflowOperation (void) {
  gCategoryMethodTable_binaryOperationIR_enterCodeForOverflowOperation.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_binaryOperationIR_enterCodeForOverflowOperation (defineCategoryMethod_binaryOperationIR_enterCodeForOverflowOperation,
                                                                            freeCategoryMethod_binaryOperationIR_enterCodeForOverflowOperation) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Category method '@binaryOperationIR enterCodeForDivisionWithZeroDivisorException'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_binaryOperationIR_enterCodeForDivisionWithZeroDivisorException> gCategoryMethodTable_binaryOperationIR_enterCodeForDivisionWithZeroDivisorException ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_enterCodeForDivisionWithZeroDivisorException (const int32_t inClassIndex,
                                                                       categoryMethodSignature_binaryOperationIR_enterCodeForDivisionWithZeroDivisorException inMethod) {
  gCategoryMethodTable_binaryOperationIR_enterCodeForDivisionWithZeroDivisorException.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_enterCodeForDivisionWithZeroDivisorException (const cPtr_binaryOperationIR * inObject,
                                                                      const GALGAS_string constin_inOperation,
                                                                      const GALGAS_uint constin_inCode,
                                                                      GALGAS_string & io_ioLLVMcode,
                                                                      const GALGAS_generationContext constin_inGenerationContext,
                                                                      GALGAS_generationAdds & io_ioGenerationAdds,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_binaryOperationIR) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_binaryOperationIR_enterCodeForDivisionWithZeroDivisorException f = NULL ;
    if (classIndex < gCategoryMethodTable_binaryOperationIR_enterCodeForDivisionWithZeroDivisorException.count ()) {
      f = gCategoryMethodTable_binaryOperationIR_enterCodeForDivisionWithZeroDivisorException (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_binaryOperationIR_enterCodeForDivisionWithZeroDivisorException.count ()) {
           f = gCategoryMethodTable_binaryOperationIR_enterCodeForDivisionWithZeroDivisorException (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_binaryOperationIR_enterCodeForDivisionWithZeroDivisorException.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inOperation, constin_inCode, io_ioLLVMcode, constin_inGenerationContext, io_ioGenerationAdds, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_binaryOperationIR_enterCodeForDivisionWithZeroDivisorException (const cPtr_binaryOperationIR * inObject,
                                                                                           const GALGAS_string constinArgument_inOperation,
                                                                                           const GALGAS_uint constinArgument_inCode,
                                                                                           GALGAS_string & ioArgument_ioLLVMcode,
                                                                                           const GALGAS_generationContext constinArgument_inGenerationContext,
                                                                                           GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_binaryOperationIR * object = inObject ;
  macroValidSharedObject (object, cPtr_binaryOperationIR) ;
  GALGAS_uint var_staticStringIndex ;
  {
  categoryModifier_findOrAddStaticString (ioArgument_ioGenerationAdds.mAttribute_mStaticStringMap, object->mAttribute_mLocation.getter_file (inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 110)).getter_lastPathComponent (SOURCE_FILE ("intermediate-binary-operation.galgas", 110)).getter_stringByDeletingPathExtension (SOURCE_FILE ("intermediate-binary-operation.galgas", 110)), var_staticStringIndex, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 109)) ;
  }
  GALGAS_string var_llvmType = object->mAttribute_mOperandType.getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 113)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 114)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 114)).add_operation (GALGAS_string (".isZero = icmp eq "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 114)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 114)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 114)).add_operation (extensionGetter_llvmName (object->mAttribute_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 114)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 114)).add_operation (GALGAS_string (", 0\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 114)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 114)) ;
  GALGAS_string var_labelName = extensionGetter_name (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 115)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (extensionGetter_llvmName (object->mAttribute_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 116)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 116)).add_operation (GALGAS_string (".isZero, label %"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 116)).add_operation (var_labelName, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 116)).add_operation (GALGAS_string (".divideByZero, label %"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 116)).add_operation (var_labelName, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 116)).add_operation (GALGAS_string (".ok\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 116)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 116)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelName.add_operation (GALGAS_string (".divideByZero:\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 117)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 117)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @raise_exception.").add_operation (var_staticStringIndex.getter_string (SOURCE_FILE ("intermediate-binary-operation.galgas", 118)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 118)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 118)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 118)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(constinArgument_inGenerationContext.mAttribute_mExceptionLineLLVMType.add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 119)).add_operation (object->mAttribute_mLocation.getter_line (inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 119)).getter_string (SOURCE_FILE ("intermediate-binary-operation.galgas", 119)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 119)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 119)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 119)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(constinArgument_inGenerationContext.mAttribute_mExceptionCodeLLVMType.add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 120)).add_operation (constinArgument_inCode.getter_string (SOURCE_FILE ("intermediate-binary-operation.galgas", 120)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 120)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 120)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 120)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  unreachable\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 121)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelName.add_operation (GALGAS_string (".ok:\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 122)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 122)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 123)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 123)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 123)).add_operation (constinArgument_inOperation, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 123)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 123)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 123)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 123)).add_operation (extensionGetter_llvmName (object->mAttribute_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 123)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 123)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 123)).add_operation (extensionGetter_llvmName (object->mAttribute_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 123)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 123)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 123)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 123)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_binaryOperationIR_enterCodeForDivisionWithZeroDivisorException (void) {
  enterCategoryMethod_enterCodeForDivisionWithZeroDivisorException (kTypeDescriptor_GALGAS_binaryOperationIR.mSlotID,
                                                                    categoryMethod_binaryOperationIR_enterCodeForDivisionWithZeroDivisorException) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_binaryOperationIR_enterCodeForDivisionWithZeroDivisorException (void) {
  gCategoryMethodTable_binaryOperationIR_enterCodeForDivisionWithZeroDivisorException.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_binaryOperationIR_enterCodeForDivisionWithZeroDivisorException (defineCategoryMethod_binaryOperationIR_enterCodeForDivisionWithZeroDivisorException,
                                                                                           freeCategoryMethod_binaryOperationIR_enterCodeForDivisionWithZeroDivisorException) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Category method '@routineMapIR-element enterAccessibleEntities'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_enterAccessibleEntities (const GALGAS_routineMapIR_2D_element inObject,
                                             GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  categoryMethod_enterAccessibleEntities (inObject.mAttribute_mInstructionGenerationList, ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 45)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Category method '@functionMapIR-element enterAccessibleEntities'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_enterAccessibleEntities (const GALGAS_functionMapIR_2D_element inObject,
                                             GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  categoryMethod_enterAccessibleEntities (inObject.mAttribute_mInstructionGenerationList, ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 51)) ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumConstantMap_2D_element::GALGAS_enumConstantMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mIndex () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumConstantMap_2D_element::~ GALGAS_enumConstantMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumConstantMap_2D_element::GALGAS_enumConstantMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                      const GALGAS_uint & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_mIndex (inOperand1) {
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
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mIndex.objectCompare (inOperand.mAttribute_mIndex) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_enumConstantMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mIndex.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_enumConstantMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mIndex.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_enumConstantMap_2D_element::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "<struct @enumConstantMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mIndex.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_enumConstantMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_enumConstantMap_2D_element::getter_mIndex (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIndex ;
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

GALGAS_structureFieldListAST_2D_element::GALGAS_structureFieldListAST_2D_element (void) :
mAttribute_mFieldName (),
mAttribute_mFieldTypeName (),
mAttribute_mInitExpression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structureFieldListAST_2D_element::~ GALGAS_structureFieldListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structureFieldListAST_2D_element::GALGAS_structureFieldListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                  const GALGAS_lstring & inOperand1,
                                                                                  const GALGAS_expressionAST & inOperand2) :
mAttribute_mFieldName (inOperand0),
mAttribute_mFieldTypeName (inOperand1),
mAttribute_mInitExpression (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structureFieldListAST_2D_element GALGAS_structureFieldListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                  const GALGAS_lstring & inOperand1,
                                                                                                  const GALGAS_expressionAST & inOperand2 
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_structureFieldListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_structureFieldListAST_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_structureFieldListAST_2D_element::objectCompare (const GALGAS_structureFieldListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mFieldName.objectCompare (inOperand.mAttribute_mFieldName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFieldTypeName.objectCompare (inOperand.mAttribute_mFieldTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInitExpression.objectCompare (inOperand.mAttribute_mInitExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_structureFieldListAST_2D_element::isValid (void) const {
  return mAttribute_mFieldName.isValid () && mAttribute_mFieldTypeName.isValid () && mAttribute_mInitExpression.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_structureFieldListAST_2D_element::drop (void) {
  mAttribute_mFieldName.drop () ;
  mAttribute_mFieldTypeName.drop () ;
  mAttribute_mInitExpression.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_structureFieldListAST_2D_element::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "<struct @structureFieldListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mFieldName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFieldTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInitExpression.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_structureFieldListAST_2D_element::getter_mFieldName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFieldName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_structureFieldListAST_2D_element::getter_mFieldTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFieldTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST GALGAS_structureFieldListAST_2D_element::getter_mInitExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInitExpression ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @structureFieldListAST-element type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_structureFieldListAST_2D_element ("structureFieldListAST-element",
                                                         NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_structureFieldListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structureFieldListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_structureFieldListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_structureFieldListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structureFieldListAST_2D_element GALGAS_structureFieldListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_structureFieldListAST_2D_element result ;
  const GALGAS_structureFieldListAST_2D_element * p = (const GALGAS_structureFieldListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_structureFieldListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("structureFieldListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyList_2D_element::GALGAS_propertyList_2D_element (void) :
mAttribute_mPropertyName (),
mAttribute_mType () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyList_2D_element::~ GALGAS_propertyList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyList_2D_element::GALGAS_propertyList_2D_element (const GALGAS_string & inOperand0,
                                                                const GALGAS_unifiedTypeMap_2D_proxy & inOperand1) :
mAttribute_mPropertyName (inOperand0),
mAttribute_mType (inOperand1) {
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
    result = mAttribute_mPropertyName.objectCompare (inOperand.mAttribute_mPropertyName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mType.objectCompare (inOperand.mAttribute_mType) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_propertyList_2D_element::isValid (void) const {
  return mAttribute_mPropertyName.isValid () && mAttribute_mType.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_propertyList_2D_element::drop (void) {
  mAttribute_mPropertyName.drop () ;
  mAttribute_mType.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_propertyList_2D_element::description (C_String & ioString,
                                                  const int32_t inIndentation) const {
  ioString << "<struct @propertyList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mPropertyName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mType.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_propertyList_2D_element::getter_mPropertyName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPropertyName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_propertyList_2D_element::getter_mType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mType ;
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
mAttribute_lkey (),
mAttribute_mTypeProxy (),
mAttribute_mIndex () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyMap_2D_element::~ GALGAS_propertyMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyMap_2D_element::GALGAS_propertyMap_2D_element (const GALGAS_lstring & inOperand0,
                                                              const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                              const GALGAS_uint & inOperand2) :
mAttribute_lkey (inOperand0),
mAttribute_mTypeProxy (inOperand1),
mAttribute_mIndex (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyMap_2D_element GALGAS_propertyMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_propertyMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                        GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                        GALGAS_uint::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyMap_2D_element GALGAS_propertyMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                              const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                              const GALGAS_uint & inOperand2 
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
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mTypeProxy.objectCompare (inOperand.mAttribute_mTypeProxy) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mIndex.objectCompare (inOperand.mAttribute_mIndex) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_propertyMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mTypeProxy.isValid () && mAttribute_mIndex.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_propertyMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mTypeProxy.drop () ;
  mAttribute_mIndex.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_propertyMap_2D_element::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "<struct @propertyMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mTypeProxy.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mIndex.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_propertyMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_propertyMap_2D_element::getter_mTypeProxy (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTypeProxy ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_propertyMap_2D_element::getter_mIndex (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIndex ;
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
mAttribute_mTypeName (),
mAttribute_mProcedureDeclarationListAST (),
mAttribute_mFieldList (),
mAttribute_mFunctionDeclarationListAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionDeclarationListAST_2D_element::~ GALGAS_extensionDeclarationListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionDeclarationListAST_2D_element::GALGAS_extensionDeclarationListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                              const GALGAS_procedureDeclarationListAST & inOperand1,
                                                                                              const GALGAS_structureFieldListAST & inOperand2,
                                                                                              const GALGAS_functionDeclarationListAST & inOperand3) :
mAttribute_mTypeName (inOperand0),
mAttribute_mProcedureDeclarationListAST (inOperand1),
mAttribute_mFieldList (inOperand2),
mAttribute_mFunctionDeclarationListAST (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionDeclarationListAST_2D_element GALGAS_extensionDeclarationListAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_extensionDeclarationListAST_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                        GALGAS_procedureDeclarationListAST::constructor_emptyList (HERE),
                                                        GALGAS_structureFieldListAST::constructor_emptyList (HERE),
                                                        GALGAS_functionDeclarationListAST::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionDeclarationListAST_2D_element GALGAS_extensionDeclarationListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                              const GALGAS_procedureDeclarationListAST & inOperand1,
                                                                                                              const GALGAS_structureFieldListAST & inOperand2,
                                                                                                              const GALGAS_functionDeclarationListAST & inOperand3 
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_extensionDeclarationListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_extensionDeclarationListAST_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_extensionDeclarationListAST_2D_element::objectCompare (const GALGAS_extensionDeclarationListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mTypeName.objectCompare (inOperand.mAttribute_mTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mProcedureDeclarationListAST.objectCompare (inOperand.mAttribute_mProcedureDeclarationListAST) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFieldList.objectCompare (inOperand.mAttribute_mFieldList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFunctionDeclarationListAST.objectCompare (inOperand.mAttribute_mFunctionDeclarationListAST) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_extensionDeclarationListAST_2D_element::isValid (void) const {
  return mAttribute_mTypeName.isValid () && mAttribute_mProcedureDeclarationListAST.isValid () && mAttribute_mFieldList.isValid () && mAttribute_mFunctionDeclarationListAST.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_extensionDeclarationListAST_2D_element::drop (void) {
  mAttribute_mTypeName.drop () ;
  mAttribute_mProcedureDeclarationListAST.drop () ;
  mAttribute_mFieldList.drop () ;
  mAttribute_mFunctionDeclarationListAST.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_extensionDeclarationListAST_2D_element::description (C_String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString << "<struct @extensionDeclarationListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mProcedureDeclarationListAST.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFieldList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFunctionDeclarationListAST.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_extensionDeclarationListAST_2D_element::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procedureDeclarationListAST GALGAS_extensionDeclarationListAST_2D_element::getter_mProcedureDeclarationListAST (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mProcedureDeclarationListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structureFieldListAST GALGAS_extensionDeclarationListAST_2D_element::getter_mFieldList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFieldList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionDeclarationListAST GALGAS_extensionDeclarationListAST_2D_element::getter_mFunctionDeclarationListAST (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFunctionDeclarationListAST ;
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

GALGAS_allowedRoutineList_2D_element::GALGAS_allowedRoutineList_2D_element (void) :
mAttribute_mHasWriteAccess (),
mAttribute_mReceiverTypeName (),
mAttribute_mRoutineName (),
mAttribute_mRoutineKind () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedRoutineList_2D_element::~ GALGAS_allowedRoutineList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedRoutineList_2D_element::GALGAS_allowedRoutineList_2D_element (const GALGAS_bool & inOperand0,
                                                                            const GALGAS_lstring & inOperand1,
                                                                            const GALGAS_lstring & inOperand2,
                                                                            const GALGAS_routineKind & inOperand3) :
mAttribute_mHasWriteAccess (inOperand0),
mAttribute_mReceiverTypeName (inOperand1),
mAttribute_mRoutineName (inOperand2),
mAttribute_mRoutineKind (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedRoutineList_2D_element GALGAS_allowedRoutineList_2D_element::constructor_new (const GALGAS_bool & inOperand0,
                                                                                            const GALGAS_lstring & inOperand1,
                                                                                            const GALGAS_lstring & inOperand2,
                                                                                            const GALGAS_routineKind & inOperand3 
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_allowedRoutineList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_allowedRoutineList_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_allowedRoutineList_2D_element::objectCompare (const GALGAS_allowedRoutineList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mHasWriteAccess.objectCompare (inOperand.mAttribute_mHasWriteAccess) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mReceiverTypeName.objectCompare (inOperand.mAttribute_mReceiverTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mRoutineName.objectCompare (inOperand.mAttribute_mRoutineName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mRoutineKind.objectCompare (inOperand.mAttribute_mRoutineKind) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_allowedRoutineList_2D_element::isValid (void) const {
  return mAttribute_mHasWriteAccess.isValid () && mAttribute_mReceiverTypeName.isValid () && mAttribute_mRoutineName.isValid () && mAttribute_mRoutineKind.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allowedRoutineList_2D_element::drop (void) {
  mAttribute_mHasWriteAccess.drop () ;
  mAttribute_mReceiverTypeName.drop () ;
  mAttribute_mRoutineName.drop () ;
  mAttribute_mRoutineKind.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allowedRoutineList_2D_element::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "<struct @allowedRoutineList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mHasWriteAccess.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mReceiverTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mRoutineName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mRoutineKind.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_allowedRoutineList_2D_element::getter_mHasWriteAccess (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mHasWriteAccess ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_allowedRoutineList_2D_element::getter_mReceiverTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mReceiverTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_allowedRoutineList_2D_element::getter_mRoutineName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRoutineName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineKind GALGAS_allowedRoutineList_2D_element::getter_mRoutineKind (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRoutineKind ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @allowedRoutineList-element type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_allowedRoutineList_2D_element ("allowedRoutineList-element",
                                                      NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_allowedRoutineList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_allowedRoutineList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_allowedRoutineList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_allowedRoutineList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedRoutineList_2D_element GALGAS_allowedRoutineList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_allowedRoutineList_2D_element result ;
  const GALGAS_allowedRoutineList_2D_element * p = (const GALGAS_allowedRoutineList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_allowedRoutineList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("allowedRoutineList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedFunctionList_2D_element::GALGAS_allowedFunctionList_2D_element (void) :
mAttribute_mReceiverTypeName (),
mAttribute_mFuncName () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedFunctionList_2D_element::~ GALGAS_allowedFunctionList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedFunctionList_2D_element::GALGAS_allowedFunctionList_2D_element (const GALGAS_lstring & inOperand0,
                                                                              const GALGAS_lstring & inOperand1) :
mAttribute_mReceiverTypeName (inOperand0),
mAttribute_mFuncName (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedFunctionList_2D_element GALGAS_allowedFunctionList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_allowedFunctionList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedFunctionList_2D_element GALGAS_allowedFunctionList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                              const GALGAS_lstring & inOperand1 
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_allowedFunctionList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_allowedFunctionList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_allowedFunctionList_2D_element::objectCompare (const GALGAS_allowedFunctionList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mReceiverTypeName.objectCompare (inOperand.mAttribute_mReceiverTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFuncName.objectCompare (inOperand.mAttribute_mFuncName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_allowedFunctionList_2D_element::isValid (void) const {
  return mAttribute_mReceiverTypeName.isValid () && mAttribute_mFuncName.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allowedFunctionList_2D_element::drop (void) {
  mAttribute_mReceiverTypeName.drop () ;
  mAttribute_mFuncName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allowedFunctionList_2D_element::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "<struct @allowedFunctionList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mReceiverTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFuncName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_allowedFunctionList_2D_element::getter_mReceiverTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mReceiverTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_allowedFunctionList_2D_element::getter_mFuncName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFuncName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @allowedFunctionList-element type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_allowedFunctionList_2D_element ("allowedFunctionList-element",
                                                       NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_allowedFunctionList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_allowedFunctionList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_allowedFunctionList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_allowedFunctionList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedFunctionList_2D_element GALGAS_allowedFunctionList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_allowedFunctionList_2D_element result ;
  const GALGAS_allowedFunctionList_2D_element * p = (const GALGAS_allowedFunctionList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_allowedFunctionList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("allowedFunctionList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedInitList_2D_element::GALGAS_allowedInitList_2D_element (void) :
mAttribute_mHasWriteAccess (),
mAttribute_mInitPriority () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedInitList_2D_element::~ GALGAS_allowedInitList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedInitList_2D_element::GALGAS_allowedInitList_2D_element (const GALGAS_bool & inOperand0,
                                                                      const GALGAS_lbigint & inOperand1) :
mAttribute_mHasWriteAccess (inOperand0),
mAttribute_mInitPriority (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedInitList_2D_element GALGAS_allowedInitList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_allowedInitList_2D_element (GALGAS_bool::constructor_default (HERE),
                                            GALGAS_lbigint::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedInitList_2D_element GALGAS_allowedInitList_2D_element::constructor_new (const GALGAS_bool & inOperand0,
                                                                                      const GALGAS_lbigint & inOperand1 
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_allowedInitList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_allowedInitList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_allowedInitList_2D_element::objectCompare (const GALGAS_allowedInitList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mHasWriteAccess.objectCompare (inOperand.mAttribute_mHasWriteAccess) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInitPriority.objectCompare (inOperand.mAttribute_mInitPriority) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_allowedInitList_2D_element::isValid (void) const {
  return mAttribute_mHasWriteAccess.isValid () && mAttribute_mInitPriority.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allowedInitList_2D_element::drop (void) {
  mAttribute_mHasWriteAccess.drop () ;
  mAttribute_mInitPriority.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allowedInitList_2D_element::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "<struct @allowedInitList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mHasWriteAccess.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInitPriority.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_allowedInitList_2D_element::getter_mHasWriteAccess (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mHasWriteAccess ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbigint GALGAS_allowedInitList_2D_element::getter_mInitPriority (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInitPriority ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @allowedInitList-element type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_allowedInitList_2D_element ("allowedInitList-element",
                                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_allowedInitList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_allowedInitList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_allowedInitList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_allowedInitList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedInitList_2D_element GALGAS_allowedInitList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_allowedInitList_2D_element result ;
  const GALGAS_allowedInitList_2D_element * p = (const GALGAS_allowedInitList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_allowedInitList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("allowedInitList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedExceptionList_2D_element::GALGAS_allowedExceptionList_2D_element (void) :
mAttribute_mHasWriteAccess (),
mAttribute_mExceptionName (),
mAttribute_mExceptionPriority () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedExceptionList_2D_element::~ GALGAS_allowedExceptionList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedExceptionList_2D_element::GALGAS_allowedExceptionList_2D_element (const GALGAS_bool & inOperand0,
                                                                                const GALGAS_lstring & inOperand1,
                                                                                const GALGAS_lbigint & inOperand2) :
mAttribute_mHasWriteAccess (inOperand0),
mAttribute_mExceptionName (inOperand1),
mAttribute_mExceptionPriority (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedExceptionList_2D_element GALGAS_allowedExceptionList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_allowedExceptionList_2D_element (GALGAS_bool::constructor_default (HERE),
                                                 GALGAS_lstring::constructor_default (HERE),
                                                 GALGAS_lbigint::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedExceptionList_2D_element GALGAS_allowedExceptionList_2D_element::constructor_new (const GALGAS_bool & inOperand0,
                                                                                                const GALGAS_lstring & inOperand1,
                                                                                                const GALGAS_lbigint & inOperand2 
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_allowedExceptionList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_allowedExceptionList_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_allowedExceptionList_2D_element::objectCompare (const GALGAS_allowedExceptionList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mHasWriteAccess.objectCompare (inOperand.mAttribute_mHasWriteAccess) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mExceptionName.objectCompare (inOperand.mAttribute_mExceptionName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mExceptionPriority.objectCompare (inOperand.mAttribute_mExceptionPriority) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_allowedExceptionList_2D_element::isValid (void) const {
  return mAttribute_mHasWriteAccess.isValid () && mAttribute_mExceptionName.isValid () && mAttribute_mExceptionPriority.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allowedExceptionList_2D_element::drop (void) {
  mAttribute_mHasWriteAccess.drop () ;
  mAttribute_mExceptionName.drop () ;
  mAttribute_mExceptionPriority.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allowedExceptionList_2D_element::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "<struct @allowedExceptionList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mHasWriteAccess.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mExceptionName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mExceptionPriority.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_allowedExceptionList_2D_element::getter_mHasWriteAccess (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mHasWriteAccess ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_allowedExceptionList_2D_element::getter_mExceptionName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExceptionName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbigint GALGAS_allowedExceptionList_2D_element::getter_mExceptionPriority (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExceptionPriority ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @allowedExceptionList-element type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_allowedExceptionList_2D_element ("allowedExceptionList-element",
                                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_allowedExceptionList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_allowedExceptionList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_allowedExceptionList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_allowedExceptionList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedExceptionList_2D_element GALGAS_allowedExceptionList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_allowedExceptionList_2D_element result ;
  const GALGAS_allowedExceptionList_2D_element * p = (const GALGAS_allowedExceptionList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_allowedExceptionList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("allowedExceptionList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedRoutineMap_2D_element::GALGAS_allowedRoutineMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mHasWriteAccess () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedRoutineMap_2D_element::~ GALGAS_allowedRoutineMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedRoutineMap_2D_element::GALGAS_allowedRoutineMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                          const GALGAS_bool & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_mHasWriteAccess (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedRoutineMap_2D_element GALGAS_allowedRoutineMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_allowedRoutineMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                              GALGAS_bool::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedRoutineMap_2D_element GALGAS_allowedRoutineMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                          const GALGAS_bool & inOperand1 
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_allowedRoutineMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_allowedRoutineMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_allowedRoutineMap_2D_element::objectCompare (const GALGAS_allowedRoutineMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mHasWriteAccess.objectCompare (inOperand.mAttribute_mHasWriteAccess) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_allowedRoutineMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mHasWriteAccess.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allowedRoutineMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mHasWriteAccess.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allowedRoutineMap_2D_element::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "<struct @allowedRoutineMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mHasWriteAccess.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_allowedRoutineMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_allowedRoutineMap_2D_element::getter_mHasWriteAccess (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mHasWriteAccess ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @allowedRoutineMap-element type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_allowedRoutineMap_2D_element ("allowedRoutineMap-element",
                                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_allowedRoutineMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_allowedRoutineMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_allowedRoutineMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_allowedRoutineMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedRoutineMap_2D_element GALGAS_allowedRoutineMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_allowedRoutineMap_2D_element result ;
  const GALGAS_allowedRoutineMap_2D_element * p = (const GALGAS_allowedRoutineMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_allowedRoutineMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("allowedRoutineMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterNameList_2D_element::GALGAS_controlRegisterNameList_2D_element (void) :
mAttribute_mRegisterName (),
mAttribute_mAttributeList (),
mAttribute_mRegisterAddress () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterNameList_2D_element::~ GALGAS_controlRegisterNameList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterNameList_2D_element::GALGAS_controlRegisterNameList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                      const GALGAS_lstringlist & inOperand1,
                                                                                      const GALGAS_lbigint & inOperand2) :
mAttribute_mRegisterName (inOperand0),
mAttribute_mAttributeList (inOperand1),
mAttribute_mRegisterAddress (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterNameList_2D_element GALGAS_controlRegisterNameList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_controlRegisterNameList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                    GALGAS_lstringlist::constructor_emptyList (HERE),
                                                    GALGAS_lbigint::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterNameList_2D_element GALGAS_controlRegisterNameList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                      const GALGAS_lstringlist & inOperand1,
                                                                                                      const GALGAS_lbigint & inOperand2 
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_controlRegisterNameList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_controlRegisterNameList_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_controlRegisterNameList_2D_element::objectCompare (const GALGAS_controlRegisterNameList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mRegisterName.objectCompare (inOperand.mAttribute_mRegisterName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mAttributeList.objectCompare (inOperand.mAttribute_mAttributeList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mRegisterAddress.objectCompare (inOperand.mAttribute_mRegisterAddress) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_controlRegisterNameList_2D_element::isValid (void) const {
  return mAttribute_mRegisterName.isValid () && mAttribute_mAttributeList.isValid () && mAttribute_mRegisterAddress.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_controlRegisterNameList_2D_element::drop (void) {
  mAttribute_mRegisterName.drop () ;
  mAttribute_mAttributeList.drop () ;
  mAttribute_mRegisterAddress.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_controlRegisterNameList_2D_element::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "<struct @controlRegisterNameList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mRegisterName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mAttributeList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mRegisterAddress.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_controlRegisterNameList_2D_element::getter_mRegisterName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegisterName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_controlRegisterNameList_2D_element::getter_mAttributeList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAttributeList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbigint GALGAS_controlRegisterNameList_2D_element::getter_mRegisterAddress (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegisterAddress ;
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

GALGAS_controlRegisterDeclarationListAST_2D_element::GALGAS_controlRegisterDeclarationListAST_2D_element (void) :
mAttribute_mRegisterNameList (),
mAttribute_mRegisterTypeName (),
mAttribute_mRegisterBitSliceList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterDeclarationListAST_2D_element::~ GALGAS_controlRegisterDeclarationListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterDeclarationListAST_2D_element::GALGAS_controlRegisterDeclarationListAST_2D_element (const GALGAS_controlRegisterNameList & inOperand0,
                                                                                                          const GALGAS_lstring & inOperand1,
                                                                                                          const GALGAS_controlRegisterBitSliceList & inOperand2) :
mAttribute_mRegisterNameList (inOperand0),
mAttribute_mRegisterTypeName (inOperand1),
mAttribute_mRegisterBitSliceList (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterDeclarationListAST_2D_element GALGAS_controlRegisterDeclarationListAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_controlRegisterDeclarationListAST_2D_element (GALGAS_controlRegisterNameList::constructor_emptyList (HERE),
                                                              GALGAS_lstring::constructor_default (HERE),
                                                              GALGAS_controlRegisterBitSliceList::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterDeclarationListAST_2D_element GALGAS_controlRegisterDeclarationListAST_2D_element::constructor_new (const GALGAS_controlRegisterNameList & inOperand0,
                                                                                                                          const GALGAS_lstring & inOperand1,
                                                                                                                          const GALGAS_controlRegisterBitSliceList & inOperand2 
                                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_controlRegisterDeclarationListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_controlRegisterDeclarationListAST_2D_element (inOperand0, inOperand1, inOperand2) ;
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
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_controlRegisterDeclarationListAST_2D_element::isValid (void) const {
  return mAttribute_mRegisterNameList.isValid () && mAttribute_mRegisterTypeName.isValid () && mAttribute_mRegisterBitSliceList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_controlRegisterDeclarationListAST_2D_element::drop (void) {
  mAttribute_mRegisterNameList.drop () ;
  mAttribute_mRegisterTypeName.drop () ;
  mAttribute_mRegisterBitSliceList.drop () ;
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

GALGAS_controlRegisterBitSliceList_2D_element::GALGAS_controlRegisterBitSliceList_2D_element (void) :
mAttribute_mRegisterBitSlice () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterBitSliceList_2D_element::~ GALGAS_controlRegisterBitSliceList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterBitSliceList_2D_element::GALGAS_controlRegisterBitSliceList_2D_element (const GALGAS_controlRegisterBitSlice & inOperand0) :
mAttribute_mRegisterBitSlice (inOperand0) {
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
    result = mAttribute_mRegisterBitSlice.objectCompare (inOperand.mAttribute_mRegisterBitSlice) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_controlRegisterBitSliceList_2D_element::isValid (void) const {
  return mAttribute_mRegisterBitSlice.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_controlRegisterBitSliceList_2D_element::drop (void) {
  mAttribute_mRegisterBitSlice.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_controlRegisterBitSliceList_2D_element::description (C_String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString << "<struct @controlRegisterBitSliceList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mRegisterBitSlice.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterBitSlice GALGAS_controlRegisterBitSliceList_2D_element::getter_mRegisterBitSlice (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegisterBitSlice ;
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
mAttribute_lkey (),
mAttribute_mBitIndex (),
mAttribute_mBitCount () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterFieldMap_2D_element::~ GALGAS_controlRegisterFieldMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterFieldMap_2D_element::GALGAS_controlRegisterFieldMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                      const GALGAS_uint & inOperand1,
                                                                                      const GALGAS_uint & inOperand2) :
mAttribute_lkey (inOperand0),
mAttribute_mBitIndex (inOperand1),
mAttribute_mBitCount (inOperand2) {
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
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mBitIndex.objectCompare (inOperand.mAttribute_mBitIndex) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mBitCount.objectCompare (inOperand.mAttribute_mBitCount) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_controlRegisterFieldMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mBitIndex.isValid () && mAttribute_mBitCount.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_controlRegisterFieldMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mBitIndex.drop () ;
  mAttribute_mBitCount.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_controlRegisterFieldMap_2D_element::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "<struct @controlRegisterFieldMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mBitIndex.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mBitCount.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_controlRegisterFieldMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_controlRegisterFieldMap_2D_element::getter_mBitIndex (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBitIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_controlRegisterFieldMap_2D_element::getter_mBitCount (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBitCount ;
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

GALGAS_controlRegisterBitSliceAccessMap_2D_element::GALGAS_controlRegisterBitSliceAccessMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mAccessOperator (),
mAttribute_mAccessRightOperand (),
mAttribute_mSubMap (),
mAttribute_mResultType () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterBitSliceAccessMap_2D_element::~ GALGAS_controlRegisterBitSliceAccessMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterBitSliceAccessMap_2D_element::GALGAS_controlRegisterBitSliceAccessMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                        const GALGAS_llvmBinaryOperation & inOperand1,
                                                                                                        const GALGAS_bigint & inOperand2,
                                                                                                        const GALGAS_controlRegisterBitSliceAccessMap & inOperand3,
                                                                                                        const GALGAS_unifiedTypeMap_2D_proxy & inOperand4) :
mAttribute_lkey (inOperand0),
mAttribute_mAccessOperator (inOperand1),
mAttribute_mAccessRightOperand (inOperand2),
mAttribute_mSubMap (inOperand3),
mAttribute_mResultType (inOperand4) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterBitSliceAccessMap_2D_element GALGAS_controlRegisterBitSliceAccessMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                        const GALGAS_llvmBinaryOperation & inOperand1,
                                                                                                                        const GALGAS_bigint & inOperand2,
                                                                                                                        const GALGAS_controlRegisterBitSliceAccessMap & inOperand3,
                                                                                                                        const GALGAS_unifiedTypeMap_2D_proxy & inOperand4 
                                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_controlRegisterBitSliceAccessMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_controlRegisterBitSliceAccessMap_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_controlRegisterBitSliceAccessMap_2D_element::objectCompare (const GALGAS_controlRegisterBitSliceAccessMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mAccessOperator.objectCompare (inOperand.mAttribute_mAccessOperator) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mAccessRightOperand.objectCompare (inOperand.mAttribute_mAccessRightOperand) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSubMap.objectCompare (inOperand.mAttribute_mSubMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mResultType.objectCompare (inOperand.mAttribute_mResultType) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_controlRegisterBitSliceAccessMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mAccessOperator.isValid () && mAttribute_mAccessRightOperand.isValid () && mAttribute_mSubMap.isValid () && mAttribute_mResultType.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_controlRegisterBitSliceAccessMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mAccessOperator.drop () ;
  mAttribute_mAccessRightOperand.drop () ;
  mAttribute_mSubMap.drop () ;
  mAttribute_mResultType.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_controlRegisterBitSliceAccessMap_2D_element::description (C_String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString << "<struct @controlRegisterBitSliceAccessMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mAccessOperator.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mAccessRightOperand.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSubMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mResultType.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_controlRegisterBitSliceAccessMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_llvmBinaryOperation GALGAS_controlRegisterBitSliceAccessMap_2D_element::getter_mAccessOperator (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAccessOperator ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint GALGAS_controlRegisterBitSliceAccessMap_2D_element::getter_mAccessRightOperand (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAccessRightOperand ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterBitSliceAccessMap GALGAS_controlRegisterBitSliceAccessMap_2D_element::getter_mSubMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSubMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_controlRegisterBitSliceAccessMap_2D_element::getter_mResultType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mResultType ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @controlRegisterBitSliceAccessMap-element type                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_controlRegisterBitSliceAccessMap_2D_element ("controlRegisterBitSliceAccessMap-element",
                                                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_controlRegisterBitSliceAccessMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterBitSliceAccessMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_controlRegisterBitSliceAccessMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_controlRegisterBitSliceAccessMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterBitSliceAccessMap_2D_element GALGAS_controlRegisterBitSliceAccessMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterBitSliceAccessMap_2D_element result ;
  const GALGAS_controlRegisterBitSliceAccessMap_2D_element * p = (const GALGAS_controlRegisterBitSliceAccessMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_controlRegisterBitSliceAccessMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterBitSliceAccessMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterMap_2D_element::GALGAS_controlRegisterMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mType (),
mAttribute_mIsReadOnly (),
mAttribute_mIsAccessibleInUserMode (),
mAttribute_mRegisterFieldAccessMap (),
mAttribute_mRegisterFieldMap (),
mAttribute_mAddress (),
mAttribute_mControlRegisterFieldList (),
mAttribute_mRegisterBitCount () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterMap_2D_element::~ GALGAS_controlRegisterMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterMap_2D_element::GALGAS_controlRegisterMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                            const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                            const GALGAS_bool & inOperand2,
                                                                            const GALGAS_bool & inOperand3,
                                                                            const GALGAS_controlRegisterBitSliceAccessMap & inOperand4,
                                                                            const GALGAS_controlRegisterFieldMap & inOperand5,
                                                                            const GALGAS_bigint & inOperand6,
                                                                            const GALGAS_controlRegisterFieldList & inOperand7,
                                                                            const GALGAS_uint & inOperand8) :
mAttribute_lkey (inOperand0),
mAttribute_mType (inOperand1),
mAttribute_mIsReadOnly (inOperand2),
mAttribute_mIsAccessibleInUserMode (inOperand3),
mAttribute_mRegisterFieldAccessMap (inOperand4),
mAttribute_mRegisterFieldMap (inOperand5),
mAttribute_mAddress (inOperand6),
mAttribute_mControlRegisterFieldList (inOperand7),
mAttribute_mRegisterBitCount (inOperand8) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterMap_2D_element GALGAS_controlRegisterMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_controlRegisterMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                               GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                               GALGAS_bool::constructor_default (HERE),
                                               GALGAS_bool::constructor_default (HERE),
                                               GALGAS_controlRegisterBitSliceAccessMap::constructor_emptyMap (HERE),
                                               GALGAS_controlRegisterFieldMap::constructor_emptyMap (HERE),
                                               GALGAS_bigint::constructor_zero (HERE),
                                               GALGAS_controlRegisterFieldList::constructor_emptyList (HERE),
                                               GALGAS_uint::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterMap_2D_element GALGAS_controlRegisterMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                            const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                                            const GALGAS_bool & inOperand2,
                                                                                            const GALGAS_bool & inOperand3,
                                                                                            const GALGAS_controlRegisterBitSliceAccessMap & inOperand4,
                                                                                            const GALGAS_controlRegisterFieldMap & inOperand5,
                                                                                            const GALGAS_bigint & inOperand6,
                                                                                            const GALGAS_controlRegisterFieldList & inOperand7,
                                                                                            const GALGAS_uint & inOperand8 
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_controlRegisterMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid ()) {
    result = GALGAS_controlRegisterMap_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_controlRegisterMap_2D_element::objectCompare (const GALGAS_controlRegisterMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mType.objectCompare (inOperand.mAttribute_mType) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mIsReadOnly.objectCompare (inOperand.mAttribute_mIsReadOnly) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mIsAccessibleInUserMode.objectCompare (inOperand.mAttribute_mIsAccessibleInUserMode) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mRegisterFieldAccessMap.objectCompare (inOperand.mAttribute_mRegisterFieldAccessMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mRegisterFieldMap.objectCompare (inOperand.mAttribute_mRegisterFieldMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mAddress.objectCompare (inOperand.mAttribute_mAddress) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mControlRegisterFieldList.objectCompare (inOperand.mAttribute_mControlRegisterFieldList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mRegisterBitCount.objectCompare (inOperand.mAttribute_mRegisterBitCount) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_controlRegisterMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mType.isValid () && mAttribute_mIsReadOnly.isValid () && mAttribute_mIsAccessibleInUserMode.isValid () && mAttribute_mRegisterFieldAccessMap.isValid () && mAttribute_mRegisterFieldMap.isValid () && mAttribute_mAddress.isValid () && mAttribute_mControlRegisterFieldList.isValid () && mAttribute_mRegisterBitCount.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_controlRegisterMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mType.drop () ;
  mAttribute_mIsReadOnly.drop () ;
  mAttribute_mIsAccessibleInUserMode.drop () ;
  mAttribute_mRegisterFieldAccessMap.drop () ;
  mAttribute_mRegisterFieldMap.drop () ;
  mAttribute_mAddress.drop () ;
  mAttribute_mControlRegisterFieldList.drop () ;
  mAttribute_mRegisterBitCount.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_controlRegisterMap_2D_element::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "<struct @controlRegisterMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mIsReadOnly.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mIsAccessibleInUserMode.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mRegisterFieldAccessMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mRegisterFieldMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mAddress.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mControlRegisterFieldList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mRegisterBitCount.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_controlRegisterMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_controlRegisterMap_2D_element::getter_mType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_controlRegisterMap_2D_element::getter_mIsReadOnly (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIsReadOnly ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_controlRegisterMap_2D_element::getter_mIsAccessibleInUserMode (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIsAccessibleInUserMode ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterBitSliceAccessMap GALGAS_controlRegisterMap_2D_element::getter_mRegisterFieldAccessMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegisterFieldAccessMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterFieldMap GALGAS_controlRegisterMap_2D_element::getter_mRegisterFieldMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegisterFieldMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint GALGAS_controlRegisterMap_2D_element::getter_mAddress (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAddress ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterFieldList GALGAS_controlRegisterMap_2D_element::getter_mControlRegisterFieldList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mControlRegisterFieldList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_controlRegisterMap_2D_element::getter_mRegisterBitCount (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegisterBitCount ;
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

GALGAS_taskProcedureMap_2D_element::GALGAS_taskProcedureMap_2D_element (void) :
mAttribute_lkey () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskProcedureMap_2D_element::~ GALGAS_taskProcedureMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskProcedureMap_2D_element::GALGAS_taskProcedureMap_2D_element (const GALGAS_lstring & inOperand0) :
mAttribute_lkey (inOperand0) {
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
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_taskProcedureMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskProcedureMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskProcedureMap_2D_element::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "<struct @taskProcedureMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_taskProcedureMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
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
mAttribute_lkey (),
mAttribute_mTaskProcedureMap () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskMap_2D_element::~ GALGAS_taskMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskMap_2D_element::GALGAS_taskMap_2D_element (const GALGAS_lstring & inOperand0,
                                                      const GALGAS_taskProcedureMap & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_mTaskProcedureMap (inOperand1) {
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
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mTaskProcedureMap.objectCompare (inOperand.mAttribute_mTaskProcedureMap) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_taskMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mTaskProcedureMap.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mTaskProcedureMap.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskMap_2D_element::description (C_String & ioString,
                                             const int32_t inIndentation) const {
  ioString << "<struct @taskMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mTaskProcedureMap.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_taskMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskProcedureMap GALGAS_taskMap_2D_element::getter_mTaskProcedureMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTaskProcedureMap ;
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
mAttribute_lkey (),
mAttribute_mPriority (),
mAttribute_mStackSize () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskMapIR_2D_element::~ GALGAS_taskMapIR_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskMapIR_2D_element::GALGAS_taskMapIR_2D_element (const GALGAS_lstring & inOperand0,
                                                          const GALGAS_bigint & inOperand1,
                                                          const GALGAS_bigint & inOperand2) :
mAttribute_lkey (inOperand0),
mAttribute_mPriority (inOperand1),
mAttribute_mStackSize (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskMapIR_2D_element GALGAS_taskMapIR_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_taskMapIR_2D_element (GALGAS_lstring::constructor_default (HERE),
                                      GALGAS_bigint::constructor_zero (HERE),
                                      GALGAS_bigint::constructor_zero (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskMapIR_2D_element GALGAS_taskMapIR_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                          const GALGAS_bigint & inOperand1,
                                                                          const GALGAS_bigint & inOperand2 
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_taskMapIR_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_taskMapIR_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_taskMapIR_2D_element::objectCompare (const GALGAS_taskMapIR_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mPriority.objectCompare (inOperand.mAttribute_mPriority) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mStackSize.objectCompare (inOperand.mAttribute_mStackSize) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_taskMapIR_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mPriority.isValid () && mAttribute_mStackSize.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskMapIR_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mPriority.drop () ;
  mAttribute_mStackSize.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskMapIR_2D_element::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "<struct @taskMapIR-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mPriority.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mStackSize.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_taskMapIR_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint GALGAS_taskMapIR_2D_element::getter_mPriority (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPriority ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint GALGAS_taskMapIR_2D_element::getter_mStackSize (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mStackSize ;
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

