#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-5.h"


//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_prefixOperatorExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_prefixOperatorExpressionAST * p = (const cPtr_prefixOperatorExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_prefixOperatorExpressionAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mOperatorLocation.objectCompare (p->mAttribute_mOperatorLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mOp.objectCompare (p->mAttribute_mOp) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mExpression.objectCompare (p->mAttribute_mExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_prefixOperatorExpressionAST::objectCompare (const GALGAS_prefixOperatorExpressionAST & inOperand) const {
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

GALGAS_prefixOperatorExpressionAST::GALGAS_prefixOperatorExpressionAST (void) :
GALGAS_expressionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefixOperatorExpressionAST::GALGAS_prefixOperatorExpressionAST (const cPtr_prefixOperatorExpressionAST * inSourcePtr) :
GALGAS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_prefixOperatorExpressionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefixOperatorExpressionAST GALGAS_prefixOperatorExpressionAST::constructor_new (const GALGAS_location & inAttribute_mOperatorLocation,
                                                                                        const GALGAS_prefixOperator & inAttribute_mOp,
                                                                                        const GALGAS_expressionAST & inAttribute_mExpression
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_prefixOperatorExpressionAST result ;
  if (inAttribute_mOperatorLocation.isValid () && inAttribute_mOp.isValid () && inAttribute_mExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_prefixOperatorExpressionAST (inAttribute_mOperatorLocation, inAttribute_mOp, inAttribute_mExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_prefixOperatorExpressionAST::reader_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_prefixOperatorExpressionAST * p = (const cPtr_prefixOperatorExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_prefixOperatorExpressionAST) ;
    result = p->mAttribute_mOperatorLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_prefixOperatorExpressionAST::reader_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOperatorLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefixOperator GALGAS_prefixOperatorExpressionAST::reader_mOp (UNUSED_LOCATION_ARGS) const {
  GALGAS_prefixOperator result ;
  if (NULL != mObjectPtr) {
    const cPtr_prefixOperatorExpressionAST * p = (const cPtr_prefixOperatorExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_prefixOperatorExpressionAST) ;
    result = p->mAttribute_mOp ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefixOperator cPtr_prefixOperatorExpressionAST::reader_mOp (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOp ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST GALGAS_prefixOperatorExpressionAST::reader_mExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_prefixOperatorExpressionAST * p = (const cPtr_prefixOperatorExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_prefixOperatorExpressionAST) ;
    result = p->mAttribute_mExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST cPtr_prefixOperatorExpressionAST::reader_mExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                Pointer class for @prefixOperatorExpressionAST class                                 *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_prefixOperatorExpressionAST::cPtr_prefixOperatorExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                                                    const GALGAS_prefixOperator & in_mOp,
                                                                    const GALGAS_expressionAST & in_mExpression
                                                                    COMMA_LOCATION_ARGS) :
cPtr_expressionAST (THERE),
mAttribute_mOperatorLocation (in_mOperatorLocation),
mAttribute_mOp (in_mOp),
mAttribute_mExpression (in_mExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_prefixOperatorExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_prefixOperatorExpressionAST ;
}

void cPtr_prefixOperatorExpressionAST::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "[@prefixOperatorExpressionAST:" ;
  mAttribute_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mOp.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_prefixOperatorExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_prefixOperatorExpressionAST (mAttribute_mOperatorLocation, mAttribute_mOp, mAttribute_mExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @prefixOperatorExpressionAST type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_prefixOperatorExpressionAST ("prefixOperatorExpressionAST",
                                                    & kTypeDescriptor_GALGAS_expressionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_prefixOperatorExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_prefixOperatorExpressionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_prefixOperatorExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_prefixOperatorExpressionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefixOperatorExpressionAST GALGAS_prefixOperatorExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_prefixOperatorExpressionAST result ;
  const GALGAS_prefixOperatorExpressionAST * p = (const GALGAS_prefixOperatorExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_prefixOperatorExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("prefixOperatorExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_registerConstantInExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_registerConstantInExpressionAST * p = (const cPtr_registerConstantInExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_registerConstantInExpressionAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mRegisterName.objectCompare (p->mAttribute_mRegisterName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mFieldName.objectCompare (p->mAttribute_mFieldName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_registerConstantInExpressionAST::objectCompare (const GALGAS_registerConstantInExpressionAST & inOperand) const {
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

GALGAS_registerConstantInExpressionAST::GALGAS_registerConstantInExpressionAST (void) :
GALGAS_expressionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerConstantInExpressionAST GALGAS_registerConstantInExpressionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_registerConstantInExpressionAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                                  GALGAS_lstring::constructor_default (HERE)
                                                                  COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerConstantInExpressionAST::GALGAS_registerConstantInExpressionAST (const cPtr_registerConstantInExpressionAST * inSourcePtr) :
GALGAS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_registerConstantInExpressionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerConstantInExpressionAST GALGAS_registerConstantInExpressionAST::constructor_new (const GALGAS_lstring & inAttribute_mRegisterName,
                                                                                                const GALGAS_lstring & inAttribute_mFieldName
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_registerConstantInExpressionAST result ;
  if (inAttribute_mRegisterName.isValid () && inAttribute_mFieldName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_registerConstantInExpressionAST (inAttribute_mRegisterName, inAttribute_mFieldName COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_registerConstantInExpressionAST::reader_mRegisterName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_registerConstantInExpressionAST * p = (const cPtr_registerConstantInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_registerConstantInExpressionAST) ;
    result = p->mAttribute_mRegisterName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_registerConstantInExpressionAST::reader_mRegisterName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegisterName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_registerConstantInExpressionAST::reader_mFieldName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_registerConstantInExpressionAST * p = (const cPtr_registerConstantInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_registerConstantInExpressionAST) ;
    result = p->mAttribute_mFieldName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_registerConstantInExpressionAST::reader_mFieldName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFieldName ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                              Pointer class for @registerConstantInExpressionAST class                               *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_registerConstantInExpressionAST::cPtr_registerConstantInExpressionAST (const GALGAS_lstring & in_mRegisterName,
                                                                            const GALGAS_lstring & in_mFieldName
                                                                            COMMA_LOCATION_ARGS) :
cPtr_expressionAST (THERE),
mAttribute_mRegisterName (in_mRegisterName),
mAttribute_mFieldName (in_mFieldName) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_registerConstantInExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_registerConstantInExpressionAST ;
}

void cPtr_registerConstantInExpressionAST::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "[@registerConstantInExpressionAST:" ;
  mAttribute_mRegisterName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mFieldName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_registerConstantInExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_registerConstantInExpressionAST (mAttribute_mRegisterName, mAttribute_mFieldName COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @registerConstantInExpressionAST type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_registerConstantInExpressionAST ("registerConstantInExpressionAST",
                                                        & kTypeDescriptor_GALGAS_expressionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_registerConstantInExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_registerConstantInExpressionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_registerConstantInExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_registerConstantInExpressionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerConstantInExpressionAST GALGAS_registerConstantInExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_registerConstantInExpressionAST result ;
  const GALGAS_registerConstantInExpressionAST * p = (const GALGAS_registerConstantInExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_registerConstantInExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("registerConstantInExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_registerIntegerExpInExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_registerIntegerExpInExpressionAST * p = (const cPtr_registerIntegerExpInExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_registerIntegerExpInExpressionAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mRegisterName.objectCompare (p->mAttribute_mRegisterName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mFieldName.objectCompare (p->mAttribute_mFieldName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mExpression.objectCompare (p->mAttribute_mExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mExpressionLocation.objectCompare (p->mAttribute_mExpressionLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_registerIntegerExpInExpressionAST::objectCompare (const GALGAS_registerIntegerExpInExpressionAST & inOperand) const {
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

GALGAS_registerIntegerExpInExpressionAST::GALGAS_registerIntegerExpInExpressionAST (void) :
GALGAS_expressionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerIntegerExpInExpressionAST::GALGAS_registerIntegerExpInExpressionAST (const cPtr_registerIntegerExpInExpressionAST * inSourcePtr) :
GALGAS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_registerIntegerExpInExpressionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerIntegerExpInExpressionAST GALGAS_registerIntegerExpInExpressionAST::constructor_new (const GALGAS_lstring & inAttribute_mRegisterName,
                                                                                                    const GALGAS_lstring & inAttribute_mFieldName,
                                                                                                    const GALGAS_expressionAST & inAttribute_mExpression,
                                                                                                    const GALGAS_location & inAttribute_mExpressionLocation
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_registerIntegerExpInExpressionAST result ;
  if (inAttribute_mRegisterName.isValid () && inAttribute_mFieldName.isValid () && inAttribute_mExpression.isValid () && inAttribute_mExpressionLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_registerIntegerExpInExpressionAST (inAttribute_mRegisterName, inAttribute_mFieldName, inAttribute_mExpression, inAttribute_mExpressionLocation COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_registerIntegerExpInExpressionAST::reader_mRegisterName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_registerIntegerExpInExpressionAST * p = (const cPtr_registerIntegerExpInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_registerIntegerExpInExpressionAST) ;
    result = p->mAttribute_mRegisterName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_registerIntegerExpInExpressionAST::reader_mRegisterName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegisterName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_registerIntegerExpInExpressionAST::reader_mFieldName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_registerIntegerExpInExpressionAST * p = (const cPtr_registerIntegerExpInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_registerIntegerExpInExpressionAST) ;
    result = p->mAttribute_mFieldName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_registerIntegerExpInExpressionAST::reader_mFieldName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFieldName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST GALGAS_registerIntegerExpInExpressionAST::reader_mExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_registerIntegerExpInExpressionAST * p = (const cPtr_registerIntegerExpInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_registerIntegerExpInExpressionAST) ;
    result = p->mAttribute_mExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST cPtr_registerIntegerExpInExpressionAST::reader_mExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_registerIntegerExpInExpressionAST::reader_mExpressionLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_registerIntegerExpInExpressionAST * p = (const cPtr_registerIntegerExpInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_registerIntegerExpInExpressionAST) ;
    result = p->mAttribute_mExpressionLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_registerIntegerExpInExpressionAST::reader_mExpressionLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExpressionLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                             Pointer class for @registerIntegerExpInExpressionAST class                              *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_registerIntegerExpInExpressionAST::cPtr_registerIntegerExpInExpressionAST (const GALGAS_lstring & in_mRegisterName,
                                                                                const GALGAS_lstring & in_mFieldName,
                                                                                const GALGAS_expressionAST & in_mExpression,
                                                                                const GALGAS_location & in_mExpressionLocation
                                                                                COMMA_LOCATION_ARGS) :
cPtr_expressionAST (THERE),
mAttribute_mRegisterName (in_mRegisterName),
mAttribute_mFieldName (in_mFieldName),
mAttribute_mExpression (in_mExpression),
mAttribute_mExpressionLocation (in_mExpressionLocation) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_registerIntegerExpInExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_registerIntegerExpInExpressionAST ;
}

void cPtr_registerIntegerExpInExpressionAST::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "[@registerIntegerExpInExpressionAST:" ;
  mAttribute_mRegisterName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mFieldName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mExpressionLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_registerIntegerExpInExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_registerIntegerExpInExpressionAST (mAttribute_mRegisterName, mAttribute_mFieldName, mAttribute_mExpression, mAttribute_mExpressionLocation COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @registerIntegerExpInExpressionAST type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_registerIntegerExpInExpressionAST ("registerIntegerExpInExpressionAST",
                                                          & kTypeDescriptor_GALGAS_expressionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_registerIntegerExpInExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_registerIntegerExpInExpressionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_registerIntegerExpInExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_registerIntegerExpInExpressionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerIntegerExpInExpressionAST GALGAS_registerIntegerExpInExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_registerIntegerExpInExpressionAST result ;
  const GALGAS_registerIntegerExpInExpressionAST * p = (const GALGAS_registerIntegerExpInExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_registerIntegerExpInExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("registerIntegerExpInExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_varInExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_varInExpressionAST * p = (const cPtr_varInExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_varInExpressionAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mSourceVarName.objectCompare (p->mAttribute_mSourceVarName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mFieldNameList.objectCompare (p->mAttribute_mFieldNameList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_varInExpressionAST::objectCompare (const GALGAS_varInExpressionAST & inOperand) const {
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

GALGAS_varInExpressionAST::GALGAS_varInExpressionAST (void) :
GALGAS_expressionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_varInExpressionAST GALGAS_varInExpressionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_varInExpressionAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                     GALGAS_lstringlist::constructor_emptyList (HERE)
                                                     COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_varInExpressionAST::GALGAS_varInExpressionAST (const cPtr_varInExpressionAST * inSourcePtr) :
GALGAS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_varInExpressionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_varInExpressionAST GALGAS_varInExpressionAST::constructor_new (const GALGAS_lstring & inAttribute_mSourceVarName,
                                                                      const GALGAS_lstringlist & inAttribute_mFieldNameList
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_varInExpressionAST result ;
  if (inAttribute_mSourceVarName.isValid () && inAttribute_mFieldNameList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_varInExpressionAST (inAttribute_mSourceVarName, inAttribute_mFieldNameList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_varInExpressionAST::reader_mSourceVarName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_varInExpressionAST * p = (const cPtr_varInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varInExpressionAST) ;
    result = p->mAttribute_mSourceVarName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_varInExpressionAST::reader_mSourceVarName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSourceVarName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_varInExpressionAST::reader_mFieldNameList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_varInExpressionAST * p = (const cPtr_varInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varInExpressionAST) ;
    result = p->mAttribute_mFieldNameList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist cPtr_varInExpressionAST::reader_mFieldNameList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFieldNameList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                     Pointer class for @varInExpressionAST class                                     *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_varInExpressionAST::cPtr_varInExpressionAST (const GALGAS_lstring & in_mSourceVarName,
                                                  const GALGAS_lstringlist & in_mFieldNameList
                                                  COMMA_LOCATION_ARGS) :
cPtr_expressionAST (THERE),
mAttribute_mSourceVarName (in_mSourceVarName),
mAttribute_mFieldNameList (in_mFieldNameList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_varInExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varInExpressionAST ;
}

void cPtr_varInExpressionAST::description (C_String & ioString,
                                           const int32_t inIndentation) const {
  ioString << "[@varInExpressionAST:" ;
  mAttribute_mSourceVarName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mFieldNameList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_varInExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_varInExpressionAST (mAttribute_mSourceVarName, mAttribute_mFieldNameList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @varInExpressionAST type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_varInExpressionAST ("varInExpressionAST",
                                           & kTypeDescriptor_GALGAS_expressionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_varInExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varInExpressionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_varInExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_varInExpressionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_varInExpressionAST GALGAS_varInExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_varInExpressionAST result ;
  const GALGAS_varInExpressionAST * p = (const GALGAS_varInExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_varInExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("varInExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

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
//                                  Pointer class for @infixOperatorDescription class                                  *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_infixOperatorDescription::cPtr_infixOperatorDescription (LOCATION_ARGS) :
acPtr_class (THERE) {
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

GALGAS_llvmBinaryOperation GALGAS_infixObjectObjectOperatorDescription::reader_mOperator (UNUSED_LOCATION_ARGS) const {
  GALGAS_llvmBinaryOperation result ;
  if (NULL != mObjectPtr) {
    const cPtr_infixObjectObjectOperatorDescription * p = (const cPtr_infixObjectObjectOperatorDescription *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_infixObjectObjectOperatorDescription) ;
    result = p->mAttribute_mOperator ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_llvmBinaryOperation cPtr_infixObjectObjectOperatorDescription::reader_mOperator (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOperator ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                            Pointer class for @infixObjectObjectOperatorDescription class                            *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_infixObjectObjectOperatorDescription::cPtr_infixObjectObjectOperatorDescription (const GALGAS_llvmBinaryOperation & in_mOperator
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_infixOperatorDescription (THERE),
mAttribute_mOperator (in_mOperator) {
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

GALGAS_llvmBinaryOperation GALGAS_integerObject_5F_literal_5F_infixOperator::reader_mOperator (UNUSED_LOCATION_ARGS) const {
  GALGAS_llvmBinaryOperation result ;
  if (NULL != mObjectPtr) {
    const cPtr_integerObject_5F_literal_5F_infixOperator * p = (const cPtr_integerObject_5F_literal_5F_infixOperator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_integerObject_5F_literal_5F_infixOperator) ;
    result = p->mAttribute_mOperator ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_llvmBinaryOperation cPtr_integerObject_5F_literal_5F_infixOperator::reader_mOperator (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOperator ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                            Pointer class for @integerObject_literal_infixOperator class                             *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_integerObject_5F_literal_5F_infixOperator::cPtr_integerObject_5F_literal_5F_infixOperator (const GALGAS_llvmBinaryOperation & in_mOperator
                                                                                                COMMA_LOCATION_ARGS) :
cPtr_infixOperatorDescription (THERE),
mAttribute_mOperator (in_mOperator) {
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

GALGAS_llvmBinaryOperation GALGAS_literal_5F_integerObject_5F_infixOperator::reader_mOperator (UNUSED_LOCATION_ARGS) const {
  GALGAS_llvmBinaryOperation result ;
  if (NULL != mObjectPtr) {
    const cPtr_literal_5F_integerObject_5F_infixOperator * p = (const cPtr_literal_5F_integerObject_5F_infixOperator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literal_5F_integerObject_5F_infixOperator) ;
    result = p->mAttribute_mOperator ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_llvmBinaryOperation cPtr_literal_5F_integerObject_5F_infixOperator::reader_mOperator (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOperator ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                            Pointer class for @literal_integerObject_infixOperator class                             *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_literal_5F_integerObject_5F_infixOperator::cPtr_literal_5F_integerObject_5F_infixOperator (const GALGAS_llvmBinaryOperation & in_mOperator
                                                                                                COMMA_LOCATION_ARGS) :
cPtr_infixOperatorDescription (THERE),
mAttribute_mOperator (in_mOperator) {
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

GALGAS_literal_5F_literal_5F_integerInfixOperation GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (const GALGAS_literalIntegerInfixOperator & inAttribute_mOperator
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_literal_5F_literal_5F_integerInfixOperation result ;
  if (inAttribute_mOperator.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_literal_5F_literal_5F_integerInfixOperation (inAttribute_mOperator COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literalIntegerInfixOperator GALGAS_literal_5F_literal_5F_integerInfixOperation::reader_mOperator (UNUSED_LOCATION_ARGS) const {
  GALGAS_literalIntegerInfixOperator result ;
  if (NULL != mObjectPtr) {
    const cPtr_literal_5F_literal_5F_integerInfixOperation * p = (const cPtr_literal_5F_literal_5F_integerInfixOperation *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literal_5F_literal_5F_integerInfixOperation) ;
    result = p->mAttribute_mOperator ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literalIntegerInfixOperator cPtr_literal_5F_literal_5F_integerInfixOperation::reader_mOperator (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOperator ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                           Pointer class for @literal_literal_integerInfixOperation class                            *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_literal_5F_literal_5F_integerInfixOperation::cPtr_literal_5F_literal_5F_integerInfixOperation (const GALGAS_literalIntegerInfixOperator & in_mOperator
                                                                                                    COMMA_LOCATION_ARGS) :
cPtr_infixOperatorDescription (THERE),
mAttribute_mOperator (in_mOperator) {
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

GALGAS_location GALGAS_assertInstructionAST::reader_mAssertInstructionLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_assertInstructionAST * p = (const cPtr_assertInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assertInstructionAST) ;
    result = p->mAttribute_mAssertInstructionLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_assertInstructionAST::reader_mAssertInstructionLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAssertInstructionLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST GALGAS_assertInstructionAST::reader_mExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_assertInstructionAST * p = (const cPtr_assertInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assertInstructionAST) ;
    result = p->mAttribute_mExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST cPtr_assertInstructionAST::reader_mExpression (UNUSED_LOCATION_ARGS) const {
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

typeComparisonResult cPtr_assignmentInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_assignmentInstructionAST * p = (const cPtr_assignmentInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_assignmentInstructionAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mTargetVarName.objectCompare (p->mAttribute_mTargetVarName) ;
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


typeComparisonResult GALGAS_assignmentInstructionAST::objectCompare (const GALGAS_assignmentInstructionAST & inOperand) const {
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

GALGAS_assignmentInstructionAST::GALGAS_assignmentInstructionAST (void) :
GALGAS_instructionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_assignmentInstructionAST::GALGAS_assignmentInstructionAST (const cPtr_assignmentInstructionAST * inSourcePtr) :
GALGAS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_assignmentInstructionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_assignmentInstructionAST GALGAS_assignmentInstructionAST::constructor_new (const GALGAS_lstring & inAttribute_mTargetVarName,
                                                                                  const GALGAS_lstringlist & inAttribute_mFieldList,
                                                                                  const GALGAS_expressionAST & inAttribute_mSourceExpression
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_assignmentInstructionAST result ;
  if (inAttribute_mTargetVarName.isValid () && inAttribute_mFieldList.isValid () && inAttribute_mSourceExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_assignmentInstructionAST (inAttribute_mTargetVarName, inAttribute_mFieldList, inAttribute_mSourceExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_assignmentInstructionAST::reader_mTargetVarName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_assignmentInstructionAST * p = (const cPtr_assignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentInstructionAST) ;
    result = p->mAttribute_mTargetVarName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_assignmentInstructionAST::reader_mTargetVarName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTargetVarName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_assignmentInstructionAST::reader_mFieldList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_assignmentInstructionAST * p = (const cPtr_assignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentInstructionAST) ;
    result = p->mAttribute_mFieldList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist cPtr_assignmentInstructionAST::reader_mFieldList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFieldList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST GALGAS_assignmentInstructionAST::reader_mSourceExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_assignmentInstructionAST * p = (const cPtr_assignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentInstructionAST) ;
    result = p->mAttribute_mSourceExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST cPtr_assignmentInstructionAST::reader_mSourceExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSourceExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                  Pointer class for @assignmentInstructionAST class                                  *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_assignmentInstructionAST::cPtr_assignmentInstructionAST (const GALGAS_lstring & in_mTargetVarName,
                                                              const GALGAS_lstringlist & in_mFieldList,
                                                              const GALGAS_expressionAST & in_mSourceExpression
                                                              COMMA_LOCATION_ARGS) :
cPtr_instructionAST (THERE),
mAttribute_mTargetVarName (in_mTargetVarName),
mAttribute_mFieldList (in_mFieldList),
mAttribute_mSourceExpression (in_mSourceExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_assignmentInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assignmentInstructionAST ;
}

void cPtr_assignmentInstructionAST::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "[@assignmentInstructionAST:" ;
  mAttribute_mTargetVarName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mFieldList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mSourceExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_assignmentInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_assignmentInstructionAST (mAttribute_mTargetVarName, mAttribute_mFieldList, mAttribute_mSourceExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @assignmentInstructionAST type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_assignmentInstructionAST ("assignmentInstructionAST",
                                                 & kTypeDescriptor_GALGAS_instructionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_assignmentInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assignmentInstructionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_assignmentInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_assignmentInstructionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_assignmentInstructionAST GALGAS_assignmentInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_assignmentInstructionAST result ;
  const GALGAS_assignmentInstructionAST * p = (const GALGAS_assignmentInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_assignmentInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("assignmentInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

GALGAS_location GALGAS_checkInstructionAST::reader_mCheckInstructionLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_checkInstructionAST * p = (const cPtr_checkInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_checkInstructionAST) ;
    result = p->mAttribute_mCheckInstructionLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_checkInstructionAST::reader_mCheckInstructionLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mCheckInstructionLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST GALGAS_checkInstructionAST::reader_mExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_checkInstructionAST * p = (const cPtr_checkInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_checkInstructionAST) ;
    result = p->mAttribute_mExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST cPtr_checkInstructionAST::reader_mExpression (UNUSED_LOCATION_ARGS) const {
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

GALGAS_expressionAST GALGAS_ifInstructionAST::reader_mTestExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_ifInstructionAST * p = (const cPtr_ifInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionAST) ;
    result = p->mAttribute_mTestExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST cPtr_ifInstructionAST::reader_mTestExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTestExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_ifInstructionAST::reader_mTestExpressionEndLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_ifInstructionAST * p = (const cPtr_ifInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionAST) ;
    result = p->mAttribute_mTestExpressionEndLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_ifInstructionAST::reader_mTestExpressionEndLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTestExpressionEndLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST GALGAS_ifInstructionAST::reader_mThenInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_instructionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_ifInstructionAST * p = (const cPtr_ifInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionAST) ;
    result = p->mAttribute_mThenInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST cPtr_ifInstructionAST::reader_mThenInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mThenInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_ifInstructionAST::reader_mEndOfThenInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_ifInstructionAST * p = (const cPtr_ifInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionAST) ;
    result = p->mAttribute_mEndOfThenInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_ifInstructionAST::reader_mEndOfThenInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfThenInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST GALGAS_ifInstructionAST::reader_mElseInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_instructionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_ifInstructionAST * p = (const cPtr_ifInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionAST) ;
    result = p->mAttribute_mElseInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST cPtr_ifInstructionAST::reader_mElseInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mElseInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_ifInstructionAST::reader_mEndOfElseInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_ifInstructionAST * p = (const cPtr_ifInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionAST) ;
    result = p->mAttribute_mEndOfElseInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_ifInstructionAST::reader_mEndOfElseInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfElseInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_ifInstructionAST::reader_mEndOf_5F_if_5F_instruction (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_ifInstructionAST * p = (const cPtr_ifInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionAST) ;
    result = p->mAttribute_mEndOf_5F_if_5F_instruction ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_ifInstructionAST::reader_mEndOf_5F_if_5F_instruction (UNUSED_LOCATION_ARGS) const {
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

typeComparisonResult cPtr_incDecInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_incDecInstructionAST * p = (const cPtr_incDecInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_incDecInstructionAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mKind.objectCompare (p->mAttribute_mKind) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mVarName.objectCompare (p->mAttribute_mVarName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_incDecInstructionAST::objectCompare (const GALGAS_incDecInstructionAST & inOperand) const {
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

GALGAS_incDecInstructionAST::GALGAS_incDecInstructionAST (void) :
GALGAS_instructionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_incDecInstructionAST::GALGAS_incDecInstructionAST (const cPtr_incDecInstructionAST * inSourcePtr) :
GALGAS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_incDecInstructionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_incDecInstructionAST GALGAS_incDecInstructionAST::constructor_new (const GALGAS_incDecKind & inAttribute_mKind,
                                                                          const GALGAS_lstring & inAttribute_mVarName
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_incDecInstructionAST result ;
  if (inAttribute_mKind.isValid () && inAttribute_mVarName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_incDecInstructionAST (inAttribute_mKind, inAttribute_mVarName COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_incDecKind GALGAS_incDecInstructionAST::reader_mKind (UNUSED_LOCATION_ARGS) const {
  GALGAS_incDecKind result ;
  if (NULL != mObjectPtr) {
    const cPtr_incDecInstructionAST * p = (const cPtr_incDecInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecInstructionAST) ;
    result = p->mAttribute_mKind ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_incDecKind cPtr_incDecInstructionAST::reader_mKind (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mKind ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_incDecInstructionAST::reader_mVarName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_incDecInstructionAST * p = (const cPtr_incDecInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecInstructionAST) ;
    result = p->mAttribute_mVarName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_incDecInstructionAST::reader_mVarName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mVarName ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                    Pointer class for @incDecInstructionAST class                                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_incDecInstructionAST::cPtr_incDecInstructionAST (const GALGAS_incDecKind & in_mKind,
                                                      const GALGAS_lstring & in_mVarName
                                                      COMMA_LOCATION_ARGS) :
cPtr_instructionAST (THERE),
mAttribute_mKind (in_mKind),
mAttribute_mVarName (in_mVarName) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_incDecInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_incDecInstructionAST ;
}

void cPtr_incDecInstructionAST::description (C_String & ioString,
                                             const int32_t inIndentation) const {
  ioString << "[@incDecInstructionAST:" ;
  mAttribute_mKind.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mVarName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_incDecInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_incDecInstructionAST (mAttribute_mKind, mAttribute_mVarName COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @incDecInstructionAST type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_incDecInstructionAST ("incDecInstructionAST",
                                             & kTypeDescriptor_GALGAS_instructionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_incDecInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_incDecInstructionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_incDecInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_incDecInstructionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_incDecInstructionAST GALGAS_incDecInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_incDecInstructionAST result ;
  const GALGAS_incDecInstructionAST * p = (const GALGAS_incDecInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_incDecInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("incDecInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

GALGAS_lstring GALGAS_letInstructionWithAssignmentAST::reader_mVarName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_letInstructionWithAssignmentAST * p = (const cPtr_letInstructionWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_letInstructionWithAssignmentAST) ;
    result = p->mAttribute_mVarName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_letInstructionWithAssignmentAST::reader_mVarName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mVarName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_letInstructionWithAssignmentAST::reader_mOptionalTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_letInstructionWithAssignmentAST * p = (const cPtr_letInstructionWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_letInstructionWithAssignmentAST) ;
    result = p->mAttribute_mOptionalTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_letInstructionWithAssignmentAST::reader_mOptionalTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOptionalTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST GALGAS_letInstructionWithAssignmentAST::reader_mSourceExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_letInstructionWithAssignmentAST * p = (const cPtr_letInstructionWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_letInstructionWithAssignmentAST) ;
    result = p->mAttribute_mSourceExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST cPtr_letInstructionWithAssignmentAST::reader_mSourceExpression (UNUSED_LOCATION_ARGS) const {
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

typeComparisonResult cPtr_operatorAssignInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_operatorAssignInstructionAST * p = (const cPtr_operatorAssignInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_operatorAssignInstructionAST) ;
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


typeComparisonResult GALGAS_operatorAssignInstructionAST::objectCompare (const GALGAS_operatorAssignInstructionAST & inOperand) const {
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

GALGAS_operatorAssignInstructionAST::GALGAS_operatorAssignInstructionAST (void) :
GALGAS_instructionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operatorAssignInstructionAST::GALGAS_operatorAssignInstructionAST (const cPtr_operatorAssignInstructionAST * inSourcePtr) :
GALGAS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_operatorAssignInstructionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operatorAssignInstructionAST GALGAS_operatorAssignInstructionAST::constructor_new (const GALGAS_lstring & inAttribute_mTargetVarName,
                                                                                          const GALGAS_expressionAST & inAttribute_mSourceExpression,
                                                                                          const GALGAS_operatorAssignKind & inAttribute_mOperator
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_operatorAssignInstructionAST result ;
  if (inAttribute_mTargetVarName.isValid () && inAttribute_mSourceExpression.isValid () && inAttribute_mOperator.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_operatorAssignInstructionAST (inAttribute_mTargetVarName, inAttribute_mSourceExpression, inAttribute_mOperator COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_operatorAssignInstructionAST::reader_mTargetVarName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_operatorAssignInstructionAST * p = (const cPtr_operatorAssignInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_operatorAssignInstructionAST) ;
    result = p->mAttribute_mTargetVarName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_operatorAssignInstructionAST::reader_mTargetVarName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTargetVarName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST GALGAS_operatorAssignInstructionAST::reader_mSourceExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_operatorAssignInstructionAST * p = (const cPtr_operatorAssignInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_operatorAssignInstructionAST) ;
    result = p->mAttribute_mSourceExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST cPtr_operatorAssignInstructionAST::reader_mSourceExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSourceExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operatorAssignKind GALGAS_operatorAssignInstructionAST::reader_mOperator (UNUSED_LOCATION_ARGS) const {
  GALGAS_operatorAssignKind result ;
  if (NULL != mObjectPtr) {
    const cPtr_operatorAssignInstructionAST * p = (const cPtr_operatorAssignInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_operatorAssignInstructionAST) ;
    result = p->mAttribute_mOperator ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operatorAssignKind cPtr_operatorAssignInstructionAST::reader_mOperator (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOperator ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                Pointer class for @operatorAssignInstructionAST class                                *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_operatorAssignInstructionAST::cPtr_operatorAssignInstructionAST (const GALGAS_lstring & in_mTargetVarName,
                                                                      const GALGAS_expressionAST & in_mSourceExpression,
                                                                      const GALGAS_operatorAssignKind & in_mOperator
                                                                      COMMA_LOCATION_ARGS) :
cPtr_instructionAST (THERE),
mAttribute_mTargetVarName (in_mTargetVarName),
mAttribute_mSourceExpression (in_mSourceExpression),
mAttribute_mOperator (in_mOperator) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_operatorAssignInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_operatorAssignInstructionAST ;
}

void cPtr_operatorAssignInstructionAST::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "[@operatorAssignInstructionAST:" ;
  mAttribute_mTargetVarName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mSourceExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mOperator.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_operatorAssignInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_operatorAssignInstructionAST (mAttribute_mTargetVarName, mAttribute_mSourceExpression, mAttribute_mOperator COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @operatorAssignInstructionAST type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_operatorAssignInstructionAST ("operatorAssignInstructionAST",
                                                     & kTypeDescriptor_GALGAS_instructionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_operatorAssignInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_operatorAssignInstructionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_operatorAssignInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_operatorAssignInstructionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operatorAssignInstructionAST GALGAS_operatorAssignInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_operatorAssignInstructionAST result ;
  const GALGAS_operatorAssignInstructionAST * p = (const GALGAS_operatorAssignInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_operatorAssignInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("operatorAssignInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_procCallInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_procCallInstructionAST * p = (const cPtr_procCallInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_procCallInstructionAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mProcRoutineName.objectCompare (p->mAttribute_mProcRoutineName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mEffectiveParameterList.objectCompare (p->mAttribute_mEffectiveParameterList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_procCallInstructionAST::objectCompare (const GALGAS_procCallInstructionAST & inOperand) const {
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

GALGAS_procCallInstructionAST::GALGAS_procCallInstructionAST (void) :
GALGAS_instructionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procCallInstructionAST GALGAS_procCallInstructionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_procCallInstructionAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                         GALGAS_procEffectiveParameterListAST::constructor_emptyList (HERE)
                                                         COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procCallInstructionAST::GALGAS_procCallInstructionAST (const cPtr_procCallInstructionAST * inSourcePtr) :
GALGAS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_procCallInstructionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procCallInstructionAST GALGAS_procCallInstructionAST::constructor_new (const GALGAS_lstring & inAttribute_mProcRoutineName,
                                                                              const GALGAS_procEffectiveParameterListAST & inAttribute_mEffectiveParameterList
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_procCallInstructionAST result ;
  if (inAttribute_mProcRoutineName.isValid () && inAttribute_mEffectiveParameterList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_procCallInstructionAST (inAttribute_mProcRoutineName, inAttribute_mEffectiveParameterList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_procCallInstructionAST::reader_mProcRoutineName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_procCallInstructionAST * p = (const cPtr_procCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_procCallInstructionAST) ;
    result = p->mAttribute_mProcRoutineName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_procCallInstructionAST::reader_mProcRoutineName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mProcRoutineName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procEffectiveParameterListAST GALGAS_procCallInstructionAST::reader_mEffectiveParameterList (UNUSED_LOCATION_ARGS) const {
  GALGAS_procEffectiveParameterListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_procCallInstructionAST * p = (const cPtr_procCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_procCallInstructionAST) ;
    result = p->mAttribute_mEffectiveParameterList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procEffectiveParameterListAST cPtr_procCallInstructionAST::reader_mEffectiveParameterList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEffectiveParameterList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                   Pointer class for @procCallInstructionAST class                                   *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_procCallInstructionAST::cPtr_procCallInstructionAST (const GALGAS_lstring & in_mProcRoutineName,
                                                          const GALGAS_procEffectiveParameterListAST & in_mEffectiveParameterList
                                                          COMMA_LOCATION_ARGS) :
cPtr_instructionAST (THERE),
mAttribute_mProcRoutineName (in_mProcRoutineName),
mAttribute_mEffectiveParameterList (in_mEffectiveParameterList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_procCallInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procCallInstructionAST ;
}

void cPtr_procCallInstructionAST::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "[@procCallInstructionAST:" ;
  mAttribute_mProcRoutineName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mEffectiveParameterList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_procCallInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_procCallInstructionAST (mAttribute_mProcRoutineName, mAttribute_mEffectiveParameterList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @procCallInstructionAST type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_procCallInstructionAST ("procCallInstructionAST",
                                               & kTypeDescriptor_GALGAS_instructionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_procCallInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procCallInstructionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_procCallInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_procCallInstructionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procCallInstructionAST GALGAS_procCallInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_procCallInstructionAST result ;
  const GALGAS_procCallInstructionAST * p = (const GALGAS_procCallInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_procCallInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("procCallInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_throwInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_throwInstructionAST * p = (const cPtr_throwInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_throwInstructionAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mThrowLocation.objectCompare (p->mAttribute_mThrowLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mCodeExpression.objectCompare (p->mAttribute_mCodeExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_throwInstructionAST::objectCompare (const GALGAS_throwInstructionAST & inOperand) const {
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

GALGAS_throwInstructionAST::GALGAS_throwInstructionAST (void) :
GALGAS_instructionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_throwInstructionAST::GALGAS_throwInstructionAST (const cPtr_throwInstructionAST * inSourcePtr) :
GALGAS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_throwInstructionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_throwInstructionAST GALGAS_throwInstructionAST::constructor_new (const GALGAS_location & inAttribute_mThrowLocation,
                                                                        const GALGAS_expressionAST & inAttribute_mCodeExpression
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_throwInstructionAST result ;
  if (inAttribute_mThrowLocation.isValid () && inAttribute_mCodeExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_throwInstructionAST (inAttribute_mThrowLocation, inAttribute_mCodeExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_throwInstructionAST::reader_mThrowLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_throwInstructionAST * p = (const cPtr_throwInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_throwInstructionAST) ;
    result = p->mAttribute_mThrowLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_throwInstructionAST::reader_mThrowLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mThrowLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST GALGAS_throwInstructionAST::reader_mCodeExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_throwInstructionAST * p = (const cPtr_throwInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_throwInstructionAST) ;
    result = p->mAttribute_mCodeExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST cPtr_throwInstructionAST::reader_mCodeExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mCodeExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                    Pointer class for @throwInstructionAST class                                     *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_throwInstructionAST::cPtr_throwInstructionAST (const GALGAS_location & in_mThrowLocation,
                                                    const GALGAS_expressionAST & in_mCodeExpression
                                                    COMMA_LOCATION_ARGS) :
cPtr_instructionAST (THERE),
mAttribute_mThrowLocation (in_mThrowLocation),
mAttribute_mCodeExpression (in_mCodeExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_throwInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_throwInstructionAST ;
}

void cPtr_throwInstructionAST::description (C_String & ioString,
                                            const int32_t inIndentation) const {
  ioString << "[@throwInstructionAST:" ;
  mAttribute_mThrowLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mCodeExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_throwInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_throwInstructionAST (mAttribute_mThrowLocation, mAttribute_mCodeExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @throwInstructionAST type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_throwInstructionAST ("throwInstructionAST",
                                            & kTypeDescriptor_GALGAS_instructionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_throwInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_throwInstructionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_throwInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_throwInstructionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_throwInstructionAST GALGAS_throwInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_throwInstructionAST result ;
  const GALGAS_throwInstructionAST * p = (const GALGAS_throwInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_throwInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("throwInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

GALGAS_lstring GALGAS_varInstructionAST::reader_mVarName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_varInstructionAST * p = (const cPtr_varInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varInstructionAST) ;
    result = p->mAttribute_mVarName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_varInstructionAST::reader_mVarName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mVarName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_varInstructionAST::reader_mTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_varInstructionAST * p = (const cPtr_varInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varInstructionAST) ;
    result = p->mAttribute_mTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_varInstructionAST::reader_mTypeName (UNUSED_LOCATION_ARGS) const {
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

GALGAS_lstring GALGAS_varInstructionWithAssignmentAST::reader_mVarName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_varInstructionWithAssignmentAST * p = (const cPtr_varInstructionWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varInstructionWithAssignmentAST) ;
    result = p->mAttribute_mVarName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_varInstructionWithAssignmentAST::reader_mVarName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mVarName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_varInstructionWithAssignmentAST::reader_mOptionalTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_varInstructionWithAssignmentAST * p = (const cPtr_varInstructionWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varInstructionWithAssignmentAST) ;
    result = p->mAttribute_mOptionalTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_varInstructionWithAssignmentAST::reader_mOptionalTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOptionalTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST GALGAS_varInstructionWithAssignmentAST::reader_mSourceExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_varInstructionWithAssignmentAST * p = (const cPtr_varInstructionWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varInstructionWithAssignmentAST) ;
    result = p->mAttribute_mSourceExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST cPtr_varInstructionWithAssignmentAST::reader_mSourceExpression (UNUSED_LOCATION_ARGS) const {
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

GALGAS_expressionAST GALGAS_whileInstructionAST::reader_mTestExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_whileInstructionAST * p = (const cPtr_whileInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_whileInstructionAST) ;
    result = p->mAttribute_mTestExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST cPtr_whileInstructionAST::reader_mTestExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTestExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_whileInstructionAST::reader_mEndOf_5F_test_5F_expression (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_whileInstructionAST * p = (const cPtr_whileInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_whileInstructionAST) ;
    result = p->mAttribute_mEndOf_5F_test_5F_expression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_whileInstructionAST::reader_mEndOf_5F_test_5F_expression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOf_5F_test_5F_expression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST GALGAS_whileInstructionAST::reader_mWhileInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_instructionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_whileInstructionAST * p = (const cPtr_whileInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_whileInstructionAST) ;
    result = p->mAttribute_mWhileInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST cPtr_whileInstructionAST::reader_mWhileInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mWhileInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_whileInstructionAST::reader_mEndOf_5F_while_5F_instruction (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_whileInstructionAST * p = (const cPtr_whileInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_whileInstructionAST) ;
    result = p->mAttribute_mEndOf_5F_while_5F_instruction ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_whileInstructionAST::reader_mEndOf_5F_while_5F_instruction (UNUSED_LOCATION_ARGS) const {
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

#ifndef DO_NOT_GENERATE_CHECKINGS
  static const char * kVersionString = "version " PROJECT_VERSION_STRING " [debug]" ;
#else
  static const char * kVersionString = "version " PROJECT_VERSION_STRING ;
#endif

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  Routine 'before'                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void routine_before (C_Compiler * inCompiler
                            COMMA_UNUSED_LOCATION_ARGS) {
  {
    GALGAS_filewrapper var_fw = GALGAS_filewrapper (gWrapperDirectory_0_embeddedSampleCode) ;
    const enumGalgasBool test_0 = GALGAS_bool (gOption_plm_5F_options_listEmbeddedSampleFiles.reader_value ()).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_stringlist var_files = var_fw.reader_allTextFilePathes (SOURCE_FILE ("embedded-sample-code.galgas", 16)) ;
      inCompiler->printMessage (GALGAS_string ("Embedded sample code:\n")  COMMA_SOURCE_FILE ("embedded-sample-code.galgas", 17)) ;
      cEnumerator_stringlist enumerator_796 (var_files, kEnumeration_up) ;
      while (enumerator_796.hasCurrentObject ()) {
        inCompiler->printMessage (GALGAS_string ("  ").add_operation (enumerator_796.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("embedded-sample-code.galgas", 19)).add_operation (GALGAS_char (TO_UNICODE (10)).reader_string (SOURCE_FILE ("embedded-sample-code.galgas", 19)), inCompiler COMMA_SOURCE_FILE ("embedded-sample-code.galgas", 19))  COMMA_SOURCE_FILE ("embedded-sample-code.galgas", 19)) ;
        enumerator_796.gotoNextObject () ;
      }
    }
    GALGAS_string var_path = GALGAS_string (gOption_plm_5F_options_extractEmbeddedSampleFile.reader_value ()) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_path.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      const enumGalgasBool test_2 = var_fw.reader_fileExistsAtPath (var_path, inCompiler COMMA_SOURCE_FILE ("embedded-sample-code.galgas", 24)).boolEnum () ;
      if (kBoolTrue == test_2) {
        GALGAS_string var_text = var_fw.reader_textFileContentsAtPath (var_path, inCompiler COMMA_SOURCE_FILE ("embedded-sample-code.galgas", 25)) ;
        GALGAS_string var_sourceName = var_path.reader_lastPathComponent (SOURCE_FILE ("embedded-sample-code.galgas", 26)) ;
        GALGAS_bool joker_1128 ; // Joker input parameter
        var_text.method_writeToFileWhenDifferentContents (var_sourceName, joker_1128, inCompiler COMMA_SOURCE_FILE ("embedded-sample-code.galgas", 27)) ;
      }else if (kBoolFalse == test_2) {
        GALGAS_location location_3 (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("embedded-sample-code.galgas", 29)).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_3, GALGAS_string ("there is no '").add_operation (var_path, inCompiler COMMA_SOURCE_FILE ("embedded-sample-code.galgas", 29)).add_operation (GALGAS_string ("' embedded file"), inCompiler COMMA_SOURCE_FILE ("embedded-sample-code.galgas", 29))  COMMA_SOURCE_FILE ("embedded-sample-code.galgas", 29)) ;
      }
    }
  }
  {
    GALGAS_filewrapper var_fw = GALGAS_filewrapper (gWrapperDirectory_0_embeddedTargets) ;
    const enumGalgasBool test_4 = GALGAS_bool (gOption_plm_5F_options_listEmbeddedTargets.reader_value ()).boolEnum () ;
    if (kBoolTrue == test_4) {
      GALGAS_stringlist var_embeddedFiles = var_fw.reader_allTextFilePathes (SOURCE_FILE ("embedded-targets.galgas", 16)) ;
      inCompiler->printMessage (GALGAS_string ("Embedded targets:\n")  COMMA_SOURCE_FILE ("embedded-targets.galgas", 17)) ;
      cEnumerator_stringlist enumerator_830 (var_embeddedFiles, kEnumeration_up) ;
      while (enumerator_830.hasCurrentObject ()) {
        const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, enumerator_830.current_mValue (HERE).reader_pathExtension (SOURCE_FILE ("embedded-targets.galgas", 19)).objectCompare (GALGAS_string ("plm-target"))).boolEnum () ;
        if (kBoolTrue == test_5) {
          inCompiler->printMessage (GALGAS_string ("  ").add_operation (enumerator_830.current_mValue (HERE).reader_lastPathComponent (SOURCE_FILE ("embedded-targets.galgas", 20)).reader_stringByDeletingPathExtension (SOURCE_FILE ("embedded-targets.galgas", 20)), inCompiler COMMA_SOURCE_FILE ("embedded-targets.galgas", 20)).add_operation (GALGAS_char (TO_UNICODE (10)).reader_string (SOURCE_FILE ("embedded-targets.galgas", 20)), inCompiler COMMA_SOURCE_FILE ("embedded-targets.galgas", 20))  COMMA_SOURCE_FILE ("embedded-targets.galgas", 20)) ;
        }
        enumerator_830.gotoNextObject () ;
      }
    }
    GALGAS_string var_path = GALGAS_string (gOption_plm_5F_options_extractEmbeddedTargets.reader_value ()) ;
    const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, var_path.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_6) {
      GALGAS_stringlist var_embeddedFiles = var_fw.reader_allTextFilePathes (SOURCE_FILE ("embedded-targets.galgas", 26)) ;
      cEnumerator_stringlist enumerator_1149 (var_embeddedFiles, kEnumeration_up) ;
      while (enumerator_1149.hasCurrentObject ()) {
        GALGAS_string var_filePath = var_path.add_operation (enumerator_1149.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("embedded-targets.galgas", 28)) ;
        inCompiler->printMessage (GALGAS_string ("  ").add_operation (var_filePath, inCompiler COMMA_SOURCE_FILE ("embedded-targets.galgas", 29)).add_operation (GALGAS_char (TO_UNICODE (10)).reader_string (SOURCE_FILE ("embedded-targets.galgas", 29)), inCompiler COMMA_SOURCE_FILE ("embedded-targets.galgas", 29))  COMMA_SOURCE_FILE ("embedded-targets.galgas", 29)) ;
        GALGAS_string var_dir = var_filePath.reader_stringByDeletingLastPathComponent (SOURCE_FILE ("embedded-targets.galgas", 30)) ;
        var_dir.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("embedded-targets.galgas", 31)) ;
        GALGAS_string var_text = var_fw.reader_textFileContentsAtPath (enumerator_1149.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("embedded-targets.galgas", 32)) ;
        GALGAS_bool joker_1421 ; // Joker input parameter
        var_text.method_writeToFileWhenDifferentContents (var_filePath, joker_1421, inCompiler COMMA_SOURCE_FILE ("embedded-targets.galgas", 33)) ;
        enumerator_1149.gotoNextObject () ;
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
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, GALGAS_string (gOption_galgas_5F_builtin_5F_options_mode.reader_value ()).objectCompare (GALGAS_string::makeEmptyString ())).operator_and (GALGAS_bool (gOption_galgas_5F_builtin_5F_options_outputConcreteSyntaxTree.reader_value ()).operator_not (SOURCE_FILE ("program.galgas", 16)) COMMA_SOURCE_FILE ("program.galgas", 16)).boolEnum () ;
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
                         kVersionString,
                         sourceFilesArray,
                         kSourceFileExtensions,
                         kSourceFileHelpMessages,
                         print_tool_help_message) ;
//---
  bool verboseOptionOn = true ;
  int16_t returnCode = 0 ; // No error
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
      verboseOptionOn = gOption_galgas_5F_builtin_5F_options_verbose_5F_output.mValue ;
      for (int32_t i=0 ; i<sourceFilesArray.count () ; i++) {
        if (gOption_galgas_5F_builtin_5F_options_trace.mValue) {
          enableTraceWithPath (sourceFilesArray (i COMMA_HERE)) ;
        }
        const C_String fileExtension = sourceFilesArray (i COMMA_HERE).pathExtension () ;
        const GALGAS_string sfp = GALGAS_string (sourceFilesArray (i COMMA_HERE)) ;
        const GALGAS_location location = commonLexique->here () ;
        const GALGAS_lstring sourceFilePath (sfp, location) ;
        int16_t r = 0 ;
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
      if (gOption_galgas_5F_builtin_5F_options_verbose_5F_output.mValue || (totalWarningCount () > 0) || (totalErrorCount () > 0)) {
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
//                              Abstract category reader '@abstractDeclaration location'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryReaderSignature_abstractDeclaration_location> gCategoryReaderTable_abstractDeclaration_location ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryReader_location (const int32_t inClassIndex,
                                   categoryReaderSignature_abstractDeclaration_location inReader) {
  gCategoryReaderTable_abstractDeclaration_location.forceObjectAtIndex (inClassIndex, inReader, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryReader_abstractDeclaration_location (void) {
  gCategoryReaderTable_abstractDeclaration_location.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_abstractDeclaration_location (NULL,
                                                         freeCategoryReader_abstractDeclaration_location) ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location callCategoryReader_location (const cPtr_abstractDeclaration * inObject,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  GALGAS_location result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractDeclaration) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryReaderSignature_abstractDeclaration_location f = NULL ;
    if (classIndex < gCategoryReaderTable_abstractDeclaration_location.count ()) {
      f = gCategoryReaderTable_abstractDeclaration_location (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryReaderTable_abstractDeclaration_location.count ()) {
           f = gCategoryReaderTable_abstractDeclaration_location (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryReaderTable_abstractDeclaration_location.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
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
//                                   Category reader '@integerDeclaration typeName'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryReaderSignature_integerDeclaration_typeName> gCategoryReaderTable_integerDeclaration_typeName ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryReader_typeName (const int32_t inClassIndex,
                                   categoryReaderSignature_integerDeclaration_typeName inReader) {
  gCategoryReaderTable_integerDeclaration_typeName.forceObjectAtIndex (inClassIndex, inReader, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string callCategoryReader_typeName (const cPtr_integerDeclaration * inObject,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_integerDeclaration) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryReaderSignature_integerDeclaration_typeName f = NULL ;
    if (classIndex < gCategoryReaderTable_integerDeclaration_typeName.count ()) {
      f = gCategoryReaderTable_integerDeclaration_typeName (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryReaderTable_integerDeclaration_typeName.count ()) {
           f = gCategoryReaderTable_integerDeclaration_typeName (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryReaderTable_integerDeclaration_typeName.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
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

static GALGAS_string categoryReader_integerDeclaration_typeName (const cPtr_integerDeclaration * inObject,
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
  result_outName = temp_0.add_operation (object->mAttribute_mSize.reader_string (SOURCE_FILE ("type-integer.galgas", 19)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 19)) ;
//---
  return result_outName ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_integerDeclaration_typeName (void) {
  enterCategoryReader_typeName (kTypeDescriptor_GALGAS_integerDeclaration.mSlotID,
                                categoryReader_integerDeclaration_typeName) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryReader_integerDeclaration_typeName (void) {
  gCategoryReaderTable_integerDeclaration_typeName.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_integerDeclaration_typeName (defineCategoryReader_integerDeclaration_typeName,
                                                        freeCategoryReader_integerDeclaration_typeName) ;

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

GALGAS_location GALGAS_bootList_2D_element::reader_mBootLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBootLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST GALGAS_bootList_2D_element::reader_mInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_bootList_2D_element::reader_mEndOfBootLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfBootLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint GALGAS_bootList_2D_element::reader_mPriority (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPriority ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_bootList_2D_element::reader_mPriorityLocation (UNUSED_LOCATION_ARGS) const {
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

GALGAS_initList_2D_element::GALGAS_initList_2D_element (void) :
mAttribute_mInitLocation (),
mAttribute_mInstructionList (),
mAttribute_mEndOfInitLocation (),
mAttribute_mPriority (),
mAttribute_mPriorityLocation () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initList_2D_element::~ GALGAS_initList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initList_2D_element::GALGAS_initList_2D_element (const GALGAS_location & inOperand0,
                                                        const GALGAS_instructionListAST & inOperand1,
                                                        const GALGAS_location & inOperand2,
                                                        const GALGAS_bigint & inOperand3,
                                                        const GALGAS_location & inOperand4) :
mAttribute_mInitLocation (inOperand0),
mAttribute_mInstructionList (inOperand1),
mAttribute_mEndOfInitLocation (inOperand2),
mAttribute_mPriority (inOperand3),
mAttribute_mPriorityLocation (inOperand4) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initList_2D_element GALGAS_initList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_initList_2D_element (GALGAS_location::constructor_nowhere (HERE),
                                     GALGAS_instructionListAST::constructor_emptyList (HERE),
                                     GALGAS_location::constructor_nowhere (HERE),
                                     GALGAS_bigint::constructor_zero (HERE),
                                     GALGAS_location::constructor_nowhere (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initList_2D_element GALGAS_initList_2D_element::constructor_new (const GALGAS_location & inOperand0,
                                                                        const GALGAS_instructionListAST & inOperand1,
                                                                        const GALGAS_location & inOperand2,
                                                                        const GALGAS_bigint & inOperand3,
                                                                        const GALGAS_location & inOperand4 
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
    result = mAttribute_mInstructionList.objectCompare (inOperand.mAttribute_mInstructionList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mEndOfInitLocation.objectCompare (inOperand.mAttribute_mEndOfInitLocation) ;
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

bool GALGAS_initList_2D_element::isValid (void) const {
  return mAttribute_mInitLocation.isValid () && mAttribute_mInstructionList.isValid () && mAttribute_mEndOfInitLocation.isValid () && mAttribute_mPriority.isValid () && mAttribute_mPriorityLocation.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_initList_2D_element::drop (void) {
  mAttribute_mInitLocation.drop () ;
  mAttribute_mInstructionList.drop () ;
  mAttribute_mEndOfInitLocation.drop () ;
  mAttribute_mPriority.drop () ;
  mAttribute_mPriorityLocation.drop () ;
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
    mAttribute_mInstructionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mEndOfInitLocation.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mPriority.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mPriorityLocation.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_initList_2D_element::reader_mInitLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInitLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST GALGAS_initList_2D_element::reader_mInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_initList_2D_element::reader_mEndOfInitLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfInitLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint GALGAS_initList_2D_element::reader_mPriority (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPriority ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_initList_2D_element::reader_mPriorityLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPriorityLocation ;
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
  const enumGalgasBool test_0 = constinArgument_inContext.mAttribute_mModeMap.reader_hasKey (GALGAS_string ("init") COMMA_SOURCE_FILE ("init-declaration.galgas", 75)).operator_not (SOURCE_FILE ("init-declaration.galgas", 75)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (inObject.mAttribute_mInitLocation, GALGAS_string ("the $init mode should be defined in order to use init routines")  COMMA_SOURCE_FILE ("init-declaration.galgas", 76)) ;
  }
  {
  ioArgument_ioTemporaries.mAttribute_mInitRoutinePriorityMap.modifier_insertKey (GALGAS_lstring::constructor_new (inObject.mAttribute_mPriority.reader_string (SOURCE_FILE ("init-declaration.galgas", 78)), inObject.mAttribute_mPriorityLocation  COMMA_SOURCE_FILE ("init-declaration.galgas", 78)), inCompiler COMMA_SOURCE_FILE ("init-declaration.galgas", 78)) ;
  }
  GALGAS_lstring var_routineNameForInvocationGraph = GALGAS_lstring::constructor_new (GALGAS_string ("init ").add_operation (inObject.mAttribute_mPriority.reader_string (SOURCE_FILE ("init-declaration.galgas", 80)), inCompiler COMMA_SOURCE_FILE ("init-declaration.galgas", 80)), inObject.mAttribute_mPriorityLocation  COMMA_SOURCE_FILE ("init-declaration.galgas", 80)) ;
  const enumGalgasBool test_1 = ioArgument_ioTemporaries.mAttribute_mSubprogramInvocationGraph.reader_isNodeDefined (var_routineNameForInvocationGraph.mAttribute_string COMMA_SOURCE_FILE ("init-declaration.galgas", 81)).operator_not (SOURCE_FILE ("init-declaration.galgas", 81)).boolEnum () ;
  if (kBoolTrue == test_1) {
    {
    ioArgument_ioTemporaries.mAttribute_mSubprogramInvocationGraph.modifier_addNode (var_routineNameForInvocationGraph, var_routineNameForInvocationGraph, inCompiler COMMA_SOURCE_FILE ("init-declaration.galgas", 82)) ;
    }
  }
  GALGAS_variableMap var_variableMap = function_initialVariableMap (var_routineNameForInvocationGraph.mAttribute_string, constinArgument_inContext, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("init-declaration.galgas", 88)) ;
  GALGAS_instructionListIR var_instructionGenerationList = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("init-declaration.galgas", 94)) ;
  GALGAS_stringset temp_2 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("init-declaration.galgas", 99)) ;
  temp_2.addAssign_operation (GALGAS_string ("init")  COMMA_SOURCE_FILE ("init-declaration.galgas", 99)) ;
  categoryMethod_analyzeRoutineInstructionList (inObject.mAttribute_mInstructionList, var_routineNameForInvocationGraph, GALGAS_receiverType::constructor_noReceiver (SOURCE_FILE ("init-declaration.galgas", 97)), constinArgument_inContext, temp_2, GALGAS_bool (true), ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct.mAttribute_mGlobalLiteralStringMap, var_variableMap, var_instructionGenerationList, inCompiler COMMA_SOURCE_FILE ("init-declaration.galgas", 95)) ;
  var_variableMap.method_checkAutomatonStates (inObject.mAttribute_mEndOfInitLocation, inCompiler COMMA_SOURCE_FILE ("init-declaration.galgas", 107)) ;
  ioArgument_ioIntermediateCodeStruct.mAttribute_mInitList.addAssign_operation (inObject.mAttribute_mInitLocation, var_instructionGenerationList, inObject.mAttribute_mEndOfInitLocation  COMMA_SOURCE_FILE ("init-declaration.galgas", 109)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Category Reader '@procFormalArgumentPassingMode requiredActualPassingModeForSelector'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string categoryReader_requiredActualPassingModeForSelector (const GALGAS_procFormalArgumentPassingMode & inObject,
                                                                   GALGAS_lstring inArgument_inSelector,
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
  const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, inArgument_inSelector.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_1) {
    result_outResult.dotAssign_operation (inArgument_inSelector.mAttribute_string.add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 29))  COMMA_SOURCE_FILE ("proc-declaration.galgas", 29)) ;
  }
//---
  return result_outResult ;
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
                                           const GALGAS_lstring constin_inRoutineNameForInvocationGraph,
                                           const GALGAS_receiverType constin_inReceiverType,
                                           const GALGAS_unifiedTypeMap_2D_proxy constin_inTargetType,
                                           const GALGAS_semanticContext constin_inContext,
                                           const GALGAS_stringset constin_inModes,
                                           const GALGAS_bool constin_inAllowExceptions,
                                           GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                           GALGAS_globalLiteralStringMap & io_ioGlobalLiteralStringMap,
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
      f (inObject, constin_inRoutineNameForInvocationGraph, constin_inReceiverType, constin_inTargetType, constin_inContext, constin_inModes, constin_inAllowExceptions, io_ioTemporaries, io_ioGlobalLiteralStringMap, io_ioVariableMap, io_ioInstructionGenerationList, out_outResult, inCompiler COMMA_THERE) ;
    }
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
                                 const GALGAS_lstring constin_inRoutineNameForInvocationGraph,
                                 const GALGAS_receiverType constin_inReceiverType,
                                 const GALGAS_semanticContext constin_inContext,
                                 const GALGAS_stringset constin_inModeSet,
                                 const GALGAS_bool constin_inAllowExceptions,
                                 GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                 GALGAS_globalLiteralStringMap & io_ioGlobalLiteralStringMap,
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
      f (inObject, constin_inRoutineNameForInvocationGraph, constin_inReceiverType, constin_inContext, constin_inModeSet, constin_inAllowExceptions, io_ioTemporaries, io_ioGlobalLiteralStringMap, io_ioVariableMap, io_ioInstructionGenerationList, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Category method '@instructionListAST analyzeBranchInstructionList'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_analyzeBranchInstructionList (const GALGAS_instructionListAST inObject,
                                                  const GALGAS_lstring constinArgument_inRoutineNameForInvocationGraph,
                                                  GALGAS_location inArgument_inEndOfInstructionList,
                                                  const GALGAS_receiverType constinArgument_inReceiverType,
                                                  const GALGAS_semanticContext constinArgument_inContext,
                                                  const GALGAS_stringset constinArgument_inModeSet,
                                                  const GALGAS_bool constinArgument_inAllowExceptions,
                                                  GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                  GALGAS_globalLiteralStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                  GALGAS_variableMap & ioArgument_ioVariableMap,
                                                  GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                  C_Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_ioVariableMap.modifier_openBranch (inCompiler COMMA_SOURCE_FILE ("instructionList.galgas", 66)) ;
  }
  const GALGAS_instructionListAST temp_0 = inObject ;
  cEnumerator_instructionListAST enumerator_3146 (temp_0, kEnumeration_up) ;
  while (enumerator_3146.hasCurrentObject ()) {
    callCategoryMethod_analyze ((const cPtr_instructionAST *) enumerator_3146.current_mInstruction (HERE).ptr (), constinArgument_inRoutineNameForInvocationGraph, constinArgument_inReceiverType, constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowExceptions, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioInstructionGenerationList, inCompiler COMMA_SOURCE_FILE ("instructionList.galgas", 68)) ;
    enumerator_3146.gotoNextObject () ;
  }
  {
  ioArgument_ioVariableMap.modifier_closeBranch (inArgument_inEndOfInstructionList, inCompiler COMMA_SOURCE_FILE ("instructionList.galgas", 81)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Category method '@instructionListAST analyzeRoutineInstructionList'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_analyzeRoutineInstructionList (const GALGAS_instructionListAST inObject,
                                                   const GALGAS_lstring constinArgument_inRoutineNameForInvocationGraph,
                                                   const GALGAS_receiverType constinArgument_inReceiverType,
                                                   const GALGAS_semanticContext constinArgument_inContext,
                                                   const GALGAS_stringset constinArgument_inModeSet,
                                                   const GALGAS_bool constinArgument_inAllowExceptions,
                                                   GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                   GALGAS_globalLiteralStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                   GALGAS_variableMap & ioArgument_ioVariableMap,
                                                   GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_instructionListAST temp_0 = inObject ;
  cEnumerator_instructionListAST enumerator_4319 (temp_0, kEnumeration_up) ;
  while (enumerator_4319.hasCurrentObject ()) {
    callCategoryMethod_analyze ((const cPtr_instructionAST *) enumerator_4319.current_mInstruction (HERE).ptr (), constinArgument_inRoutineNameForInvocationGraph, constinArgument_inReceiverType, constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowExceptions, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioInstructionGenerationList, inCompiler COMMA_SOURCE_FILE ("instructionList.galgas", 98)) ;
    enumerator_4319.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Category method '@instructionListIR instructionListLLVMCode'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_instructionListLLVMCode (const GALGAS_instructionListIR inObject,
                                             GALGAS_string & ioArgument_ioCode,
                                             const GALGAS_generationContext constinArgument_inGenerationContext,
                                             GALGAS_stringset & ioArgument_ioIntrinsicsDeclarationSet,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_instructionListIR temp_0 = inObject ;
  cEnumerator_instructionListIR enumerator_5273 (temp_0, kEnumeration_up) ;
  while (enumerator_5273.hasCurrentObject ()) {
    callCategoryMethod_llvmInstructionCode ((const cPtr_abstractInstructionIR *) enumerator_5273.current_mInstructionGeneration (HERE).ptr (), ioArgument_ioCode, constinArgument_inGenerationContext, ioArgument_ioIntrinsicsDeclarationSet, inCompiler COMMA_SOURCE_FILE ("instructionList.galgas", 122)) ;
    enumerator_5273.gotoNextObject () ;
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
//                          Abstract category reader '@abstractDeclaration keyRepresentation'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryReaderSignature_abstractDeclaration_keyRepresentation> gCategoryReaderTable_abstractDeclaration_keyRepresentation ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryReader_keyRepresentation (const int32_t inClassIndex,
                                            categoryReaderSignature_abstractDeclaration_keyRepresentation inReader) {
  gCategoryReaderTable_abstractDeclaration_keyRepresentation.forceObjectAtIndex (inClassIndex, inReader, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryReader_abstractDeclaration_keyRepresentation (void) {
  gCategoryReaderTable_abstractDeclaration_keyRepresentation.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_abstractDeclaration_keyRepresentation (NULL,
                                                                  freeCategoryReader_abstractDeclaration_keyRepresentation) ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string callCategoryReader_keyRepresentation (const cPtr_abstractDeclaration * inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractDeclaration) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryReaderSignature_abstractDeclaration_keyRepresentation f = NULL ;
    if (classIndex < gCategoryReaderTable_abstractDeclaration_keyRepresentation.count ()) {
      f = gCategoryReaderTable_abstractDeclaration_keyRepresentation (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryReaderTable_abstractDeclaration_keyRepresentation.count ()) {
           f = gCategoryReaderTable_abstractDeclaration_keyRepresentation (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryReaderTable_abstractDeclaration_keyRepresentation.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
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
                                        GALGAS_globalLiteralStringMap & io_ioGlobalLiteralStringMap,
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
//                            Abstract category method '@abstractDeclaration initAnalysis'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_abstractDeclaration_initAnalysis> gCategoryMethodTable_abstractDeclaration_initAnalysis ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_initAnalysis (const int32_t inClassIndex,
                                       categoryMethodSignature_abstractDeclaration_initAnalysis inMethod) {
  gCategoryMethodTable_abstractDeclaration_initAnalysis.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_abstractDeclaration_initAnalysis (void) {
  gCategoryMethodTable_abstractDeclaration_initAnalysis.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractDeclaration_initAnalysis (NULL,
                                                             freeCategoryMethod_abstractDeclaration_initAnalysis) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_initAnalysis (const cPtr_abstractDeclaration * inObject,
                                      GALGAS_semanticContext & io_ioContext,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractDeclaration) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_abstractDeclaration_initAnalysis f = NULL ;
    if (classIndex < gCategoryMethodTable_abstractDeclaration_initAnalysis.count ()) {
      f = gCategoryMethodTable_abstractDeclaration_initAnalysis (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_abstractDeclaration_initAnalysis.count ()) {
           f = gCategoryMethodTable_abstractDeclaration_initAnalysis (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_abstractDeclaration_initAnalysis.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioContext, inCompiler COMMA_THERE) ;
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
      f (inObject, constin_inContext, io_ioIntermediateCodeStruct, inCompiler COMMA_THERE) ;
    }
  }
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

GALGAS_uint GALGAS_semanticTemporariesStruct::reader_mTemporaryIndex (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTemporaryIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_exceptionRoutinePriorityMap GALGAS_semanticTemporariesStruct::reader_mExceptionSetupRoutinePriorityMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExceptionSetupRoutinePriorityMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_exceptionRoutinePriorityMap GALGAS_semanticTemporariesStruct::reader_mExceptionLoopRoutinePriorityMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExceptionLoopRoutinePriorityMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initRoutinePriorityMap GALGAS_semanticTemporariesStruct::reader_mInitRoutinePriorityMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInitRoutinePriorityMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootRoutinePriorityMap GALGAS_semanticTemporariesStruct::reader_mBootRoutinePriorityMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBootRoutinePriorityMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_subprogramInvocationGraph GALGAS_semanticTemporariesStruct::reader_mSubprogramInvocationGraph (UNUSED_LOCATION_ARGS) const {
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
//                                                                                                                     *
//                                          Category Reader '@valueIR string'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string categoryReader_string (const GALGAS_valueIR & inObject,
                                     C_Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_valueIR temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_valueIR::kNotBuilt:
    break ;
  case GALGAS_valueIR::kEnum_literalInteger:
    {
      const cEnumAssociatedValues_valueIR_literalInteger * extractPtr_926 = (const cEnumAssociatedValues_valueIR_literalInteger *) (temp_0.unsafePointer ()) ;
      const GALGAS_bigint extractedValue_value = extractPtr_926->mAssociatedValue0 ;
      result_outResult = extractedValue_value.reader_string (SOURCE_FILE ("intermediate-value-representation.galgas", 23)) ;
    }
    break ;
  case GALGAS_valueIR::kEnum_llvmLocalObject:
    {
      const cEnumAssociatedValues_valueIR_llvmLocalObject * extractPtr_989 = (const cEnumAssociatedValues_valueIR_llvmLocalObject *) (temp_0.unsafePointer ()) ;
      const GALGAS_string extractedValue_name = extractPtr_989->mAssociatedValue0 ;
      result_outResult = GALGAS_string ("%").add_operation (extractedValue_name, inCompiler COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 24)) ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Category Reader '@valueIR name'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string categoryReader_name (const GALGAS_valueIR & inObject,
                                   C_Compiler * /* inCompiler */
                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_valueIR temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_valueIR::kNotBuilt:
    break ;
  case GALGAS_valueIR::kEnum_literalInteger:
    {
      const cEnumAssociatedValues_valueIR_literalInteger * extractPtr_1245 = (const cEnumAssociatedValues_valueIR_literalInteger *) (temp_0.unsafePointer ()) ;
      const GALGAS_bigint extractedValue_value = extractPtr_1245->mAssociatedValue0 ;
      result_outResult = extractedValue_value.reader_string (SOURCE_FILE ("intermediate-value-representation.galgas", 32)) ;
    }
    break ;
  case GALGAS_valueIR::kEnum_llvmLocalObject:
    {
      const cEnumAssociatedValues_valueIR_llvmLocalObject * extractPtr_1302 = (const cEnumAssociatedValues_valueIR_llvmLocalObject *) (temp_0.unsafePointer ()) ;
      const GALGAS_string extractedValue_name = extractPtr_1302->mAssociatedValue0 ;
      result_outResult = extractedValue_name ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Category Reader '@valueIR isStatic'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool categoryReader_isStatic (const GALGAS_valueIR & inObject,
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
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Category method '@instructionListIR appendComment'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryModifier_appendComment (GALGAS_instructionListIR & ioObject,
                                     const GALGAS_string constinArgument_inComment,
                                     C_Compiler * /* inCompiler */
                                     COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.addAssign_operation (GALGAS_commentIR::constructor_new (constinArgument_inComment  COMMA_SOURCE_FILE ("intermediate-comment.galgas", 3))  COMMA_SOURCE_FILE ("intermediate-comment.galgas", 3)) ;
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
                                               const GALGAS_string constinArgument_inRegisterName,
                                               C_Compiler * /* inCompiler */
                                               COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.addAssign_operation (GALGAS_loadLocalVariableIR::constructor_new (constinArgument_inTargetValue, constinArgument_inRegisterName  COMMA_SOURCE_FILE ("intermediate-load-local-variable.galgas", 6))  COMMA_SOURCE_FILE ("intermediate-load-local-variable.galgas", 6)) ;
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
  ioObject.addAssign_operation (GALGAS_storeGlobalVariableIR::constructor_new (constinArgument_inGlobalVarName, constinArgument_inTargetVarType, constinArgument_inSourceValue, constinArgument_inIsVolatile  COMMA_SOURCE_FILE ("intermediate-store-global-var.galgas", 8))  COMMA_SOURCE_FILE ("intermediate-store-global-var.galgas", 8)) ;
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

GALGAS_accessibleEntities::GALGAS_accessibleEntities (void) :
mAttribute_mAccessibleRegisterSet (),
mAttribute_mProcedureSet (),
mAttribute_mFunctionSet (),
mAttribute_mGlobalVariableSet () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_accessibleEntities::~ GALGAS_accessibleEntities (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_accessibleEntities::GALGAS_accessibleEntities (const GALGAS_stringset & inOperand0,
                                                      const GALGAS_stringset & inOperand1,
                                                      const GALGAS_stringset & inOperand2,
                                                      const GALGAS_stringset & inOperand3) :
mAttribute_mAccessibleRegisterSet (inOperand0),
mAttribute_mProcedureSet (inOperand1),
mAttribute_mFunctionSet (inOperand2),
mAttribute_mGlobalVariableSet (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_accessibleEntities GALGAS_accessibleEntities::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_accessibleEntities (GALGAS_stringset::constructor_emptySet (HERE),
                                    GALGAS_stringset::constructor_emptySet (HERE),
                                    GALGAS_stringset::constructor_emptySet (HERE),
                                    GALGAS_stringset::constructor_emptySet (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_accessibleEntities GALGAS_accessibleEntities::constructor_new (const GALGAS_stringset & inOperand0,
                                                                      const GALGAS_stringset & inOperand1,
                                                                      const GALGAS_stringset & inOperand2,
                                                                      const GALGAS_stringset & inOperand3 
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_accessibleEntities result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_accessibleEntities (inOperand0, inOperand1, inOperand2, inOperand3) ;
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
    result = mAttribute_mProcedureSet.objectCompare (inOperand.mAttribute_mProcedureSet) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFunctionSet.objectCompare (inOperand.mAttribute_mFunctionSet) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mGlobalVariableSet.objectCompare (inOperand.mAttribute_mGlobalVariableSet) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_accessibleEntities::isValid (void) const {
  return mAttribute_mAccessibleRegisterSet.isValid () && mAttribute_mProcedureSet.isValid () && mAttribute_mFunctionSet.isValid () && mAttribute_mGlobalVariableSet.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_accessibleEntities::drop (void) {
  mAttribute_mAccessibleRegisterSet.drop () ;
  mAttribute_mProcedureSet.drop () ;
  mAttribute_mFunctionSet.drop () ;
  mAttribute_mGlobalVariableSet.drop () ;
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
    mAttribute_mProcedureSet.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFunctionSet.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mGlobalVariableSet.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringset GALGAS_accessibleEntities::reader_mAccessibleRegisterSet (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAccessibleRegisterSet ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringset GALGAS_accessibleEntities::reader_mProcedureSet (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mProcedureSet ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringset GALGAS_accessibleEntities::reader_mFunctionSet (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFunctionSet ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringset GALGAS_accessibleEntities::reader_mGlobalVariableSet (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mGlobalVariableSet ;
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
//                           Category method '@literalStructureList enterAccessibleEntities'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_enterAccessibleEntities (const GALGAS_literalStructureList inObject,
                                             GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_literalStructureList temp_0 = inObject ;
  cEnumerator_literalStructureList enumerator_996 (temp_0, kEnumeration_up) ;
  while (enumerator_996.hasCurrentObject ()) {
    switch (enumerator_996.current_mStructure (HERE).enumValue ()) {
    case GALGAS_literalStructure::kNotBuilt:
      break ;
    case GALGAS_literalStructure::kEnum_unsignedInteger:
      {
      }
      break ;
    case GALGAS_literalStructure::kEnum_signedInteger:
      {
      }
      break ;
    case GALGAS_literalStructure::kEnum_string:
      {
        const cEnumAssociatedValues_literalStructure_string * extractPtr_1134 = (const cEnumAssociatedValues_literalStructure_string *) (enumerator_996.current_mStructure (HERE).unsafePointer ()) ;
        const GALGAS_string extractedValue_value = extractPtr_1134->mAssociatedValue0 ;
        const GALGAS_string extractedValue_name = extractPtr_1134->mAssociatedValue1 ;
      }
      break ;
    case GALGAS_literalStructure::kEnum_structure:
      {
        const cEnumAssociatedValues_literalStructure_structure * extractPtr_1254 = (const cEnumAssociatedValues_literalStructure_structure *) (enumerator_996.current_mStructure (HERE).unsafePointer ()) ;
        const GALGAS_literalStructureList extractedValue_valueList = extractPtr_1254->mAssociatedValue0 ;
        categoryMethod_enterAccessibleEntities (extractedValue_valueList, ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 23)) ;
      }
      break ;
    }
    enumerator_996.gotoNextObject () ;
  }
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
  cEnumerator_instructionListIR enumerator_2474 (temp_0, kEnumeration_up) ;
  while (enumerator_2474.hasCurrentObject ()) {
    callCategoryMethod_enterAccessibleEntities ((const cPtr_abstractInstructionIR *) enumerator_2474.current_mInstructionGeneration (HERE).ptr (), ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 53)) ;
    enumerator_2474.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Category Reader '@literalStructureList literalValue'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string categoryReader_literalValue (const GALGAS_literalStructureList & inObject,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("{") ;
  const GALGAS_literalStructureList temp_0 = inObject ;
  cEnumerator_literalStructureList enumerator_700 (temp_0, kEnumeration_up) ;
  while (enumerator_700.hasCurrentObject ()) {
    switch (enumerator_700.current_mStructure (HERE).enumValue ()) {
    case GALGAS_literalStructure::kNotBuilt:
      break ;
    case GALGAS_literalStructure::kEnum_unsignedInteger:
      {
        const cEnumAssociatedValues_literalStructure_unsignedInteger * extractPtr_791 = (const cEnumAssociatedValues_literalStructure_unsignedInteger *) (enumerator_700.current_mStructure (HERE).unsafePointer ()) ;
        const GALGAS_bigint extractedValue_value = extractPtr_791->mAssociatedValue0 ;
        result_result.dotAssign_operation (extractedValue_value.reader_string (SOURCE_FILE ("code-generation.galgas", 12))  COMMA_SOURCE_FILE ("code-generation.galgas", 12)) ;
      }
      break ;
    case GALGAS_literalStructure::kEnum_signedInteger:
      {
        const cEnumAssociatedValues_literalStructure_signedInteger * extractPtr_863 = (const cEnumAssociatedValues_literalStructure_signedInteger *) (enumerator_700.current_mStructure (HERE).unsafePointer ()) ;
        const GALGAS_bigint extractedValue_value = extractPtr_863->mAssociatedValue0 ;
        result_result.dotAssign_operation (extractedValue_value.reader_string (SOURCE_FILE ("code-generation.galgas", 14))  COMMA_SOURCE_FILE ("code-generation.galgas", 14)) ;
      }
      break ;
    case GALGAS_literalStructure::kEnum_string:
      {
        const cEnumAssociatedValues_literalStructure_string * extractPtr_919 = (const cEnumAssociatedValues_literalStructure_string *) (enumerator_700.current_mStructure (HERE).unsafePointer ()) ;
        const GALGAS_string extractedValue_name = extractPtr_919->mAssociatedValue1 ;
        result_result.dotAssign_operation (extractedValue_name  COMMA_SOURCE_FILE ("code-generation.galgas", 16)) ;
      }
      break ;
    case GALGAS_literalStructure::kEnum_structure:
      {
        const cEnumAssociatedValues_literalStructure_structure * extractPtr_1015 = (const cEnumAssociatedValues_literalStructure_structure *) (enumerator_700.current_mStructure (HERE).unsafePointer ()) ;
        const GALGAS_literalStructureList extractedValue_valueList = extractPtr_1015->mAssociatedValue0 ;
        result_result.dotAssign_operation (categoryReader_literalValue (extractedValue_valueList, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 18))  COMMA_SOURCE_FILE ("code-generation.galgas", 18)) ;
      }
      break ;
    }
    if (enumerator_700.hasNextObject ()) {
      result_result.dotAssign_operation (GALGAS_string (", ")  COMMA_SOURCE_FILE ("code-generation.galgas", 20)) ;
    }
    enumerator_700.gotoNextObject () ;
  }
  result_result.dotAssign_operation (GALGAS_string ("}")  COMMA_SOURCE_FILE ("code-generation.galgas", 22)) ;
//---
  return result_result ;
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
                                             GALGAS_string & io_ioCode,
                                             const GALGAS_generationContext constin_inGenerationContext,
                                             GALGAS_stringset & io_ioIntrinsicsDeclarationSet,
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
      f (inObject, io_ioCode, constin_inGenerationContext, io_ioIntrinsicsDeclarationSet, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Abstract category reader '@abstractTypeIR headerCodeGenerationForType'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryReaderSignature_abstractTypeIR_headerCodeGenerationForType> gCategoryReaderTable_abstractTypeIR_headerCodeGenerationForType ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryReader_headerCodeGenerationForType (const int32_t inClassIndex,
                                                      categoryReaderSignature_abstractTypeIR_headerCodeGenerationForType inReader) {
  gCategoryReaderTable_abstractTypeIR_headerCodeGenerationForType.forceObjectAtIndex (inClassIndex, inReader, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryReader_abstractTypeIR_headerCodeGenerationForType (void) {
  gCategoryReaderTable_abstractTypeIR_headerCodeGenerationForType.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_abstractTypeIR_headerCodeGenerationForType (NULL,
                                                                       freeCategoryReader_abstractTypeIR_headerCodeGenerationForType) ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string callCategoryReader_headerCodeGenerationForType (const cPtr_abstractTypeIR * inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractTypeIR) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryReaderSignature_abstractTypeIR_headerCodeGenerationForType f = NULL ;
    if (classIndex < gCategoryReaderTable_abstractTypeIR_headerCodeGenerationForType.count ()) {
      f = gCategoryReaderTable_abstractTypeIR_headerCodeGenerationForType (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryReaderTable_abstractTypeIR_headerCodeGenerationForType.count ()) {
           f = gCategoryReaderTable_abstractTypeIR_headerCodeGenerationForType (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryReaderTable_abstractTypeIR_headerCodeGenerationForType.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
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

GALGAS_generationContext::GALGAS_generationContext (void) :
mAttribute_mExceptionCodeLLVMType (),
mAttribute_mExceptionLineLLVMType () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_generationContext::~ GALGAS_generationContext (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_generationContext::GALGAS_generationContext (const GALGAS_string & inOperand0,
                                                    const GALGAS_string & inOperand1) :
mAttribute_mExceptionCodeLLVMType (inOperand0),
mAttribute_mExceptionLineLLVMType (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_generationContext GALGAS_generationContext::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_generationContext (GALGAS_string::constructor_default (HERE),
                                   GALGAS_string::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_generationContext GALGAS_generationContext::constructor_new (const GALGAS_string & inOperand0,
                                                                    const GALGAS_string & inOperand1 
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_generationContext result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_generationContext (inOperand0, inOperand1) ;
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
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_generationContext::isValid (void) const {
  return mAttribute_mExceptionCodeLLVMType.isValid () && mAttribute_mExceptionLineLLVMType.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_generationContext::drop (void) {
  mAttribute_mExceptionCodeLLVMType.drop () ;
  mAttribute_mExceptionLineLLVMType.drop () ;
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
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_generationContext::reader_mExceptionCodeLLVMType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExceptionCodeLLVMType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_generationContext::reader_mExceptionLineLLVMType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExceptionLineLLVMType ;
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

GALGAS_abstractDeclaration GALGAS_declarationListAST_2D_element::reader_mDeclaration (UNUSED_LOCATION_ARGS) const {
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

GALGAS_location GALGAS_bootListIR_2D_element::reader_mInitLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInitLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR GALGAS_bootListIR_2D_element::reader_mInstructionListIR (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstructionListIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_bootListIR_2D_element::reader_mEndOfInitLocation (UNUSED_LOCATION_ARGS) const {
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
mAttribute_mInitLocation (),
mAttribute_mInstructionListIR (),
mAttribute_mEndOfInitLocation () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initListIR_2D_element::~ GALGAS_initListIR_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initListIR_2D_element::GALGAS_initListIR_2D_element (const GALGAS_location & inOperand0,
                                                            const GALGAS_instructionListIR & inOperand1,
                                                            const GALGAS_location & inOperand2) :
mAttribute_mInitLocation (inOperand0),
mAttribute_mInstructionListIR (inOperand1),
mAttribute_mEndOfInitLocation (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initListIR_2D_element GALGAS_initListIR_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_initListIR_2D_element (GALGAS_location::constructor_nowhere (HERE),
                                       GALGAS_instructionListIR::constructor_emptyList (HERE),
                                       GALGAS_location::constructor_nowhere (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initListIR_2D_element GALGAS_initListIR_2D_element::constructor_new (const GALGAS_location & inOperand0,
                                                                            const GALGAS_instructionListIR & inOperand1,
                                                                            const GALGAS_location & inOperand2 
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_initListIR_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_initListIR_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_initListIR_2D_element::objectCompare (const GALGAS_initListIR_2D_element & inOperand) const {
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

bool GALGAS_initListIR_2D_element::isValid (void) const {
  return mAttribute_mInitLocation.isValid () && mAttribute_mInstructionListIR.isValid () && mAttribute_mEndOfInitLocation.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_initListIR_2D_element::drop (void) {
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
    mAttribute_mInitLocation.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInstructionListIR.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mEndOfInitLocation.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_initListIR_2D_element::reader_mInitLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInitLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR GALGAS_initListIR_2D_element::reader_mInstructionListIR (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstructionListIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_initListIR_2D_element::reader_mEndOfInitLocation (UNUSED_LOCATION_ARGS) const {
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

GALGAS_instructionAST GALGAS_instructionListAST_2D_element::reader_mInstruction (UNUSED_LOCATION_ARGS) const {
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

GALGAS_abstractInstructionIR GALGAS_instructionListIR_2D_element::reader_mInstructionGeneration (UNUSED_LOCATION_ARGS) const {
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
mAttribute_mProcedureListAST (),
mAttribute_mRequiredProcList (),
mAttribute_mFunctionListAST (),
mAttribute_mTargetList (),
mAttribute_mBootList (),
mAttribute_mInitList (),
mAttribute_mExceptionClauses (),
mAttribute_mExceptionTypes () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ast::~ GALGAS_ast (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ast::GALGAS_ast (const GALGAS_globalVarDeclarationList & inOperand0,
                        const GALGAS_declarationListAST & inOperand1,
                        const GALGAS_procedureDeclarationListAST & inOperand2,
                        const GALGAS_requiredProcedureDeclarationListAST & inOperand3,
                        const GALGAS_functionDeclarationListAST & inOperand4,
                        const GALGAS_lstringlist & inOperand5,
                        const GALGAS_bootList & inOperand6,
                        const GALGAS_initList & inOperand7,
                        const GALGAS_exceptionClauseListAST & inOperand8,
                        const GALGAS_exceptionTypesAST & inOperand9) :
mAttribute_mGlobalVarDeclarationList (inOperand0),
mAttribute_mDeclarationList (inOperand1),
mAttribute_mProcedureListAST (inOperand2),
mAttribute_mRequiredProcList (inOperand3),
mAttribute_mFunctionListAST (inOperand4),
mAttribute_mTargetList (inOperand5),
mAttribute_mBootList (inOperand6),
mAttribute_mInitList (inOperand7),
mAttribute_mExceptionClauses (inOperand8),
mAttribute_mExceptionTypes (inOperand9) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ast GALGAS_ast::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_ast (GALGAS_globalVarDeclarationList::constructor_emptyList (HERE),
                     GALGAS_declarationListAST::constructor_emptyList (HERE),
                     GALGAS_procedureDeclarationListAST::constructor_emptyList (HERE),
                     GALGAS_requiredProcedureDeclarationListAST::constructor_emptyList (HERE),
                     GALGAS_functionDeclarationListAST::constructor_emptyList (HERE),
                     GALGAS_lstringlist::constructor_emptyList (HERE),
                     GALGAS_bootList::constructor_emptySortedList (HERE),
                     GALGAS_initList::constructor_emptySortedList (HERE),
                     GALGAS_exceptionClauseListAST::constructor_emptySortedList (HERE),
                     GALGAS_exceptionTypesAST::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ast GALGAS_ast::constructor_new (const GALGAS_globalVarDeclarationList & inOperand0,
                                        const GALGAS_declarationListAST & inOperand1,
                                        const GALGAS_procedureDeclarationListAST & inOperand2,
                                        const GALGAS_requiredProcedureDeclarationListAST & inOperand3,
                                        const GALGAS_functionDeclarationListAST & inOperand4,
                                        const GALGAS_lstringlist & inOperand5,
                                        const GALGAS_bootList & inOperand6,
                                        const GALGAS_initList & inOperand7,
                                        const GALGAS_exceptionClauseListAST & inOperand8,
                                        const GALGAS_exceptionTypesAST & inOperand9 
                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_ast result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid ()) {
    result = GALGAS_ast (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9) ;
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
    result = mAttribute_mProcedureListAST.objectCompare (inOperand.mAttribute_mProcedureListAST) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mRequiredProcList.objectCompare (inOperand.mAttribute_mRequiredProcList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFunctionListAST.objectCompare (inOperand.mAttribute_mFunctionListAST) ;
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
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_ast::isValid (void) const {
  return mAttribute_mGlobalVarDeclarationList.isValid () && mAttribute_mDeclarationList.isValid () && mAttribute_mProcedureListAST.isValid () && mAttribute_mRequiredProcList.isValid () && mAttribute_mFunctionListAST.isValid () && mAttribute_mTargetList.isValid () && mAttribute_mBootList.isValid () && mAttribute_mInitList.isValid () && mAttribute_mExceptionClauses.isValid () && mAttribute_mExceptionTypes.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_ast::drop (void) {
  mAttribute_mGlobalVarDeclarationList.drop () ;
  mAttribute_mDeclarationList.drop () ;
  mAttribute_mProcedureListAST.drop () ;
  mAttribute_mRequiredProcList.drop () ;
  mAttribute_mFunctionListAST.drop () ;
  mAttribute_mTargetList.drop () ;
  mAttribute_mBootList.drop () ;
  mAttribute_mInitList.drop () ;
  mAttribute_mExceptionClauses.drop () ;
  mAttribute_mExceptionTypes.drop () ;
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
    mAttribute_mProcedureListAST.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mRequiredProcList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFunctionListAST.description (ioString, inIndentation+1) ;
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
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalVarDeclarationList GALGAS_ast::reader_mGlobalVarDeclarationList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mGlobalVarDeclarationList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_declarationListAST GALGAS_ast::reader_mDeclarationList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDeclarationList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procedureDeclarationListAST GALGAS_ast::reader_mProcedureListAST (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mProcedureListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_requiredProcedureDeclarationListAST GALGAS_ast::reader_mRequiredProcList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRequiredProcList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionDeclarationListAST GALGAS_ast::reader_mFunctionListAST (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFunctionListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_ast::reader_mTargetList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTargetList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootList GALGAS_ast::reader_mBootList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBootList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initList GALGAS_ast::reader_mInitList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInitList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_exceptionClauseListAST GALGAS_ast::reader_mExceptionClauses (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExceptionClauses ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_exceptionTypesAST GALGAS_ast::reader_mExceptionTypes (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExceptionTypes ;
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

GALGAS_lstring GALGAS_globalVariableMapIR_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_globalVariableMapIR_2D_element::reader_mType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_globalVariableMapIR_2D_element::reader_mGenerateVolatile (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mGenerateVolatile ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_valueIR GALGAS_globalVariableMapIR_2D_element::reader_mInitialValue (UNUSED_LOCATION_ARGS) const {
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

GALGAS_globalConstantMapIR_2D_element::GALGAS_globalConstantMapIR_2D_element (void) :
mAttribute_lkey (),
mAttribute_mType (),
mAttribute_mSourceExpression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalConstantMapIR_2D_element::~ GALGAS_globalConstantMapIR_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalConstantMapIR_2D_element::GALGAS_globalConstantMapIR_2D_element (const GALGAS_lstring & inOperand0,
                                                                              const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                              const GALGAS_valueIR & inOperand2) :
mAttribute_lkey (inOperand0),
mAttribute_mType (inOperand1),
mAttribute_mSourceExpression (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalConstantMapIR_2D_element GALGAS_globalConstantMapIR_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                              const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                                              const GALGAS_valueIR & inOperand2 
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
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mType.objectCompare (inOperand.mAttribute_mType) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSourceExpression.objectCompare (inOperand.mAttribute_mSourceExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_globalConstantMapIR_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mType.isValid () && mAttribute_mSourceExpression.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_globalConstantMapIR_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mType.drop () ;
  mAttribute_mSourceExpression.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_globalConstantMapIR_2D_element::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "<struct @globalConstantMapIR-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSourceExpression.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_globalConstantMapIR_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_globalConstantMapIR_2D_element::reader_mType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_valueIR GALGAS_globalConstantMapIR_2D_element::reader_mSourceExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSourceExpression ;
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
  const enumGalgasBool test_0 = constinArgument_inContext.mAttribute_mModeMap.reader_hasKey (function_bootModeName (inCompiler COMMA_SOURCE_FILE ("boot-declaration.galgas", 58)) COMMA_SOURCE_FILE ("boot-declaration.galgas", 58)).operator_not (SOURCE_FILE ("boot-declaration.galgas", 58)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (inObject.mAttribute_mBootLocation, GALGAS_string ("the $").add_operation (function_bootModeName (inCompiler COMMA_SOURCE_FILE ("boot-declaration.galgas", 59)), inCompiler COMMA_SOURCE_FILE ("boot-declaration.galgas", 59)).add_operation (GALGAS_string (" mode should be defined in order to use boot routines"), inCompiler COMMA_SOURCE_FILE ("boot-declaration.galgas", 59))  COMMA_SOURCE_FILE ("boot-declaration.galgas", 59)) ;
  }
  {
  ioArgument_ioTemporaries.mAttribute_mBootRoutinePriorityMap.modifier_insertKey (GALGAS_lstring::constructor_new (inObject.mAttribute_mPriority.reader_string (SOURCE_FILE ("boot-declaration.galgas", 61)), inObject.mAttribute_mPriorityLocation  COMMA_SOURCE_FILE ("boot-declaration.galgas", 61)), inCompiler COMMA_SOURCE_FILE ("boot-declaration.galgas", 61)) ;
  }
  GALGAS_lstring var_routineNameForInvocationGraph = GALGAS_lstring::constructor_new (GALGAS_string ("boot ").add_operation (inObject.mAttribute_mPriority.reader_string (SOURCE_FILE ("boot-declaration.galgas", 63)), inCompiler COMMA_SOURCE_FILE ("boot-declaration.galgas", 63)), inObject.mAttribute_mPriorityLocation  COMMA_SOURCE_FILE ("boot-declaration.galgas", 63)) ;
  const enumGalgasBool test_1 = ioArgument_ioTemporaries.mAttribute_mSubprogramInvocationGraph.reader_isNodeDefined (var_routineNameForInvocationGraph.mAttribute_string COMMA_SOURCE_FILE ("boot-declaration.galgas", 64)).operator_not (SOURCE_FILE ("boot-declaration.galgas", 64)).boolEnum () ;
  if (kBoolTrue == test_1) {
    {
    ioArgument_ioTemporaries.mAttribute_mSubprogramInvocationGraph.modifier_addNode (var_routineNameForInvocationGraph, var_routineNameForInvocationGraph, inCompiler COMMA_SOURCE_FILE ("boot-declaration.galgas", 65)) ;
    }
  }
  GALGAS_variableMap var_variableMap = function_initialVariableMap (var_routineNameForInvocationGraph.mAttribute_string, constinArgument_inContext, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("boot-declaration.galgas", 71)) ;
  GALGAS_instructionListIR var_instructionGenerationList = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("boot-declaration.galgas", 77)) ;
  GALGAS_stringset temp_2 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("boot-declaration.galgas", 82)) ;
  temp_2.addAssign_operation (function_bootModeName (inCompiler COMMA_SOURCE_FILE ("boot-declaration.galgas", 82))  COMMA_SOURCE_FILE ("boot-declaration.galgas", 82)) ;
  categoryMethod_analyzeRoutineInstructionList (inObject.mAttribute_mInstructionList, var_routineNameForInvocationGraph, GALGAS_receiverType::constructor_noReceiver (SOURCE_FILE ("boot-declaration.galgas", 80)), constinArgument_inContext, temp_2, GALGAS_bool (true), ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct.mAttribute_mGlobalLiteralStringMap, var_variableMap, var_instructionGenerationList, inCompiler COMMA_SOURCE_FILE ("boot-declaration.galgas", 78)) ;
  var_variableMap.method_checkAutomatonStates (inObject.mAttribute_mEndOfBootLocation, inCompiler COMMA_SOURCE_FILE ("boot-declaration.galgas", 90)) ;
  ioArgument_ioIntermediateCodeStruct.mAttribute_mBootList.addAssign_operation (inObject.mAttribute_mBootLocation, var_instructionGenerationList, inObject.mAttribute_mEndOfBootLocation  COMMA_SOURCE_FILE ("boot-declaration.galgas", 92)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Category method '@initList-element enterInContext'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_enterInContext (const GALGAS_initList_2D_element inObject,
                                    GALGAS_semanticContext & ioArgument_ioContext,
                                    C_Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_ioContext.mAttribute_mInitRoutineMap.modifier_insertKey (GALGAS_lstring::constructor_new (inObject.mAttribute_mPriority.reader_string (SOURCE_FILE ("init-declaration.galgas", 57)), inObject.mAttribute_mPriorityLocation  COMMA_SOURCE_FILE ("init-declaration.galgas", 57)), inCompiler COMMA_SOURCE_FILE ("init-declaration.galgas", 57)) ;
  }
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
                                                                                    const GALGAS_bigint & inOperand3,
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
                                                   GALGAS_bigint::constructor_zero (HERE),
                                                   GALGAS_location::constructor_nowhere (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_exceptionClauseListAST_2D_element GALGAS_exceptionClauseListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                    const GALGAS_instructionListAST & inOperand1,
                                                                                                    const GALGAS_location & inOperand2,
                                                                                                    const GALGAS_bigint & inOperand3,
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

GALGAS_lstring GALGAS_exceptionClauseListAST_2D_element::reader_mExceptionClauseName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExceptionClauseName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST GALGAS_exceptionClauseListAST_2D_element::reader_mExceptionInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExceptionInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_exceptionClauseListAST_2D_element::reader_mEndOfExceptionInstructions (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfExceptionInstructions ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint GALGAS_exceptionClauseListAST_2D_element::reader_mPriority (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPriority ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_exceptionClauseListAST_2D_element::reader_mLocationPriority (UNUSED_LOCATION_ARGS) const {
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
  const enumGalgasBool test_0 = constinArgument_inContext.mAttribute_mModeMap.reader_hasKey (function_exceptionModeName (inCompiler COMMA_SOURCE_FILE ("exception.galgas", 101)) COMMA_SOURCE_FILE ("exception.galgas", 101)).operator_not (SOURCE_FILE ("exception.galgas", 101)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (inObject.mAttribute_mExceptionClauseName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("the $").add_operation (function_exceptionModeName (inCompiler COMMA_SOURCE_FILE ("exception.galgas", 102)), inCompiler COMMA_SOURCE_FILE ("exception.galgas", 102)).add_operation (GALGAS_string (" mode should be defined in order to use an exception clause"), inCompiler COMMA_SOURCE_FILE ("exception.galgas", 102))  COMMA_SOURCE_FILE ("exception.galgas", 102)) ;
  }
  GALGAS_lstring var_routineNameForInvocationGraph = GALGAS_lstring::constructor_new (GALGAS_string ("exception ").add_operation (inObject.mAttribute_mExceptionClauseName.reader_string (SOURCE_FILE ("exception.galgas", 105)), inCompiler COMMA_SOURCE_FILE ("exception.galgas", 105)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("exception.galgas", 105)).add_operation (inObject.mAttribute_mPriority.reader_string (SOURCE_FILE ("exception.galgas", 105)), inCompiler COMMA_SOURCE_FILE ("exception.galgas", 105)), inObject.mAttribute_mExceptionClauseName.mAttribute_location  COMMA_SOURCE_FILE ("exception.galgas", 104)) ;
  GALGAS_variableMap var_variableMap = function_initialVariableMap (var_routineNameForInvocationGraph.mAttribute_string, constinArgument_inContext, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("exception.galgas", 109)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_StaticStringType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mAttribute_mTypeMap, function_staticStringTypeName (inCompiler COMMA_SOURCE_FILE ("exception.galgas", 115)).reader_nowhere (SOURCE_FILE ("exception.galgas", 115)), inCompiler  COMMA_SOURCE_FILE ("exception.galgas", 115)) ;
  GALGAS_lstring var_codeArg = GALGAS_lstring::constructor_new (GALGAS_string ("CODE"), inObject.mAttribute_mExceptionClauseName.mAttribute_location  COMMA_SOURCE_FILE ("exception.galgas", 116)) ;
  {
  var_variableMap.modifier_insertUsedConstantInputFormalArgument (var_codeArg, constinArgument_inContext.mAttribute_mExceptionCodeType, GALGAS_bool (true), GALGAS_objectInMemoryIR::constructor_localValue (constinArgument_inContext.mAttribute_mExceptionCodeType, var_codeArg  COMMA_SOURCE_FILE ("exception.galgas", 121)), constinArgument_inContext.mAttribute_mExceptionCodeType.reader_copiable (inCompiler COMMA_SOURCE_FILE ("exception.galgas", 122)), GALGAS_registerBitSliceAccessMap::constructor_emptyMap (SOURCE_FILE ("exception.galgas", 123)), GALGAS_bool (false), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("exception.galgas", 117)) ;
  }
  GALGAS_lstring var_fileArg = GALGAS_lstring::constructor_new (GALGAS_string ("FILE"), inObject.mAttribute_mExceptionClauseName.mAttribute_location  COMMA_SOURCE_FILE ("exception.galgas", 127)) ;
  {
  var_variableMap.modifier_insertUsedConstantInputFormalArgument (var_fileArg, var_StaticStringType, GALGAS_bool (true), GALGAS_objectInMemoryIR::constructor_localValue (var_StaticStringType, var_fileArg  COMMA_SOURCE_FILE ("exception.galgas", 132)), var_StaticStringType.reader_copiable (inCompiler COMMA_SOURCE_FILE ("exception.galgas", 133)), GALGAS_registerBitSliceAccessMap::constructor_emptyMap (SOURCE_FILE ("exception.galgas", 134)), GALGAS_bool (false), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("exception.galgas", 128)) ;
  }
  GALGAS_lstring var_lineArg = GALGAS_lstring::constructor_new (GALGAS_string ("LINE"), inObject.mAttribute_mExceptionClauseName.mAttribute_location  COMMA_SOURCE_FILE ("exception.galgas", 138)) ;
  {
  var_variableMap.modifier_insertUsedConstantInputFormalArgument (var_lineArg, constinArgument_inContext.mAttribute_mExceptionLineType, GALGAS_bool (true), GALGAS_objectInMemoryIR::constructor_localValue (constinArgument_inContext.mAttribute_mExceptionLineType, var_lineArg  COMMA_SOURCE_FILE ("exception.galgas", 143)), constinArgument_inContext.mAttribute_mExceptionLineType.reader_copiable (inCompiler COMMA_SOURCE_FILE ("exception.galgas", 144)), GALGAS_registerBitSliceAccessMap::constructor_emptyMap (SOURCE_FILE ("exception.galgas", 145)), GALGAS_bool (false), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("exception.galgas", 139)) ;
  }
  const enumGalgasBool test_2 = ioArgument_ioTemporaries.mAttribute_mSubprogramInvocationGraph.reader_isNodeDefined (var_routineNameForInvocationGraph.mAttribute_string COMMA_SOURCE_FILE ("exception.galgas", 150)).operator_not (SOURCE_FILE ("exception.galgas", 150)).boolEnum () ;
  if (kBoolTrue == test_2) {
    {
    ioArgument_ioTemporaries.mAttribute_mSubprogramInvocationGraph.modifier_addNode (var_routineNameForInvocationGraph, var_routineNameForInvocationGraph, inCompiler COMMA_SOURCE_FILE ("exception.galgas", 151)) ;
    }
  }
  GALGAS_instructionListIR var_instructionGenerationList = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("exception.galgas", 157)) ;
  GALGAS_stringset temp_3 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("exception.galgas", 162)) ;
  temp_3.addAssign_operation (function_exceptionModeName (inCompiler COMMA_SOURCE_FILE ("exception.galgas", 162))  COMMA_SOURCE_FILE ("exception.galgas", 162)) ;
  categoryMethod_analyzeRoutineInstructionList (inObject.mAttribute_mExceptionInstructionList, var_routineNameForInvocationGraph, GALGAS_receiverType::constructor_noReceiver (SOURCE_FILE ("exception.galgas", 160)), constinArgument_inContext, temp_3, GALGAS_bool (false), ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct.mAttribute_mGlobalLiteralStringMap, var_variableMap, var_instructionGenerationList, inCompiler COMMA_SOURCE_FILE ("exception.galgas", 158)) ;
  var_variableMap.method_checkAutomatonStates (inObject.mAttribute_mEndOfExceptionInstructions, inCompiler COMMA_SOURCE_FILE ("exception.galgas", 170)) ;
  const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, inObject.mAttribute_mExceptionClauseName.mAttribute_string.objectCompare (GALGAS_string ("setup"))).boolEnum () ;
  if (kBoolTrue == test_4) {
    {
    ioArgument_ioTemporaries.mAttribute_mExceptionSetupRoutinePriorityMap.modifier_insertSetupKey (GALGAS_lstring::constructor_new (inObject.mAttribute_mPriority.reader_string (SOURCE_FILE ("exception.galgas", 173)), inObject.mAttribute_mLocationPriority  COMMA_SOURCE_FILE ("exception.galgas", 173)), inCompiler COMMA_SOURCE_FILE ("exception.galgas", 173)) ;
    }
    ioArgument_ioIntermediateCodeStruct.mAttribute_mExceptionSetupInstructionListIR.dotAssign_operation (var_instructionGenerationList  COMMA_SOURCE_FILE ("exception.galgas", 174)) ;
  }else if (kBoolFalse == test_4) {
    const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, inObject.mAttribute_mExceptionClauseName.mAttribute_string.objectCompare (GALGAS_string ("loop"))).boolEnum () ;
    if (kBoolTrue == test_5) {
      {
      ioArgument_ioTemporaries.mAttribute_mExceptionLoopRoutinePriorityMap.modifier_insertLoopKey (GALGAS_lstring::constructor_new (inObject.mAttribute_mPriority.reader_string (SOURCE_FILE ("exception.galgas", 176)), inObject.mAttribute_mLocationPriority  COMMA_SOURCE_FILE ("exception.galgas", 176)), inCompiler COMMA_SOURCE_FILE ("exception.galgas", 176)) ;
      }
      ioArgument_ioIntermediateCodeStruct.mAttribute_mExceptionLoopInstructionListIR.dotAssign_operation (var_instructionGenerationList  COMMA_SOURCE_FILE ("exception.galgas", 177)) ;
    }else if (kBoolFalse == test_5) {
      GALGAS_location location_6 (inObject.mAttribute_mExceptionClauseName.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_6, GALGAS_string ("exception routine name should be \"setup\" or \"loop\"")  COMMA_SOURCE_FILE ("exception.galgas", 179)) ;
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionDeclarationListAST_2D_element::GALGAS_functionDeclarationListAST_2D_element (void) :
mAttribute_mFunctionName (),
mAttribute_mFunctionModeList (),
mAttribute_mFuncFormalArgumentList (),
mAttribute_mResultTypeName (),
mAttribute_mResultVarName (),
mAttribute_mInstructionList (),
mAttribute_mEndOfFuncLocation () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionDeclarationListAST_2D_element::~ GALGAS_functionDeclarationListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionDeclarationListAST_2D_element::GALGAS_functionDeclarationListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                            const GALGAS_lstringlist & inOperand1,
                                                                                            const GALGAS_funcFormalArgumentList & inOperand2,
                                                                                            const GALGAS_lstring & inOperand3,
                                                                                            const GALGAS_lstring & inOperand4,
                                                                                            const GALGAS_instructionListAST & inOperand5,
                                                                                            const GALGAS_location & inOperand6) :
mAttribute_mFunctionName (inOperand0),
mAttribute_mFunctionModeList (inOperand1),
mAttribute_mFuncFormalArgumentList (inOperand2),
mAttribute_mResultTypeName (inOperand3),
mAttribute_mResultVarName (inOperand4),
mAttribute_mInstructionList (inOperand5),
mAttribute_mEndOfFuncLocation (inOperand6) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionDeclarationListAST_2D_element GALGAS_functionDeclarationListAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_functionDeclarationListAST_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                       GALGAS_lstringlist::constructor_emptyList (HERE),
                                                       GALGAS_funcFormalArgumentList::constructor_emptyList (HERE),
                                                       GALGAS_lstring::constructor_default (HERE),
                                                       GALGAS_lstring::constructor_default (HERE),
                                                       GALGAS_instructionListAST::constructor_emptyList (HERE),
                                                       GALGAS_location::constructor_nowhere (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionDeclarationListAST_2D_element GALGAS_functionDeclarationListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                            const GALGAS_lstringlist & inOperand1,
                                                                                                            const GALGAS_funcFormalArgumentList & inOperand2,
                                                                                                            const GALGAS_lstring & inOperand3,
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
    result = mAttribute_mFuncFormalArgumentList.objectCompare (inOperand.mAttribute_mFuncFormalArgumentList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mResultTypeName.objectCompare (inOperand.mAttribute_mResultTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mResultVarName.objectCompare (inOperand.mAttribute_mResultVarName) ;
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
  return mAttribute_mFunctionName.isValid () && mAttribute_mFunctionModeList.isValid () && mAttribute_mFuncFormalArgumentList.isValid () && mAttribute_mResultTypeName.isValid () && mAttribute_mResultVarName.isValid () && mAttribute_mInstructionList.isValid () && mAttribute_mEndOfFuncLocation.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_functionDeclarationListAST_2D_element::drop (void) {
  mAttribute_mFunctionName.drop () ;
  mAttribute_mFunctionModeList.drop () ;
  mAttribute_mFuncFormalArgumentList.drop () ;
  mAttribute_mResultTypeName.drop () ;
  mAttribute_mResultVarName.drop () ;
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
    mAttribute_mFuncFormalArgumentList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mResultTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mResultVarName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInstructionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mEndOfFuncLocation.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_functionDeclarationListAST_2D_element::reader_mFunctionName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFunctionName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_functionDeclarationListAST_2D_element::reader_mFunctionModeList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFunctionModeList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_funcFormalArgumentList GALGAS_functionDeclarationListAST_2D_element::reader_mFuncFormalArgumentList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFuncFormalArgumentList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_functionDeclarationListAST_2D_element::reader_mResultTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mResultTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_functionDeclarationListAST_2D_element::reader_mResultVarName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mResultVarName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST GALGAS_functionDeclarationListAST_2D_element::reader_mInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_functionDeclarationListAST_2D_element::reader_mEndOfFuncLocation (UNUSED_LOCATION_ARGS) const {
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
//                                                                                                                     *
//                          Category Reader '@functionDeclarationListAST-element mangledName'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string categoryReader_mangledName (const GALGAS_functionDeclarationListAST_2D_element & inObject,
                                          C_Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outMangledName ; // Returned variable
  result_outMangledName = inObject.mAttribute_mFunctionName.mAttribute_string ;
  cEnumerator_funcFormalArgumentList enumerator_4157 (inObject.mAttribute_mFuncFormalArgumentList, kEnumeration_up) ;
  while (enumerator_4157.hasCurrentObject ()) {
    result_outMangledName.dotAssign_operation (GALGAS_string (" \?").add_operation (enumerator_4157.current_mSelector (HERE).mAttribute_string, inCompiler COMMA_SOURCE_FILE ("func-declaration.galgas", 112))  COMMA_SOURCE_FILE ("func-declaration.galgas", 112)) ;
    enumerator_4157.gotoNextObject () ;
  }
//---
  return result_outMangledName ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Category method '@functionDeclarationListAST-element enterInContext'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_enterInContext (const GALGAS_functionDeclarationListAST_2D_element inObject,
                                    GALGAS_semanticContext & ioArgument_ioContext,
                                    C_Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_funcSignature var_signature = GALGAS_funcSignature::constructor_emptyList (SOURCE_FILE ("func-declaration.galgas", 122)) ;
  cEnumerator_funcFormalArgumentList enumerator_4551 (inObject.mAttribute_mFuncFormalArgumentList, kEnumeration_up) ;
  while (enumerator_4551.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_typeProxy ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioContext.mAttribute_mTypeMap, enumerator_4551.current_mFormalArgumentTypeName (HERE), var_typeProxy COMMA_SOURCE_FILE ("func-declaration.galgas", 124)) ;
    }
    var_signature.addAssign_operation (enumerator_4551.current_mSelector (HERE), var_typeProxy  COMMA_SOURCE_FILE ("func-declaration.galgas", 125)) ;
    enumerator_4551.gotoNextObject () ;
  }
  GALGAS_modeMap var_functionModeMap = GALGAS_modeMap::constructor_emptyMap (SOURCE_FILE ("func-declaration.galgas", 128)) ;
  cEnumerator_lstringlist enumerator_4772 (inObject.mAttribute_mFunctionModeList, kEnumeration_up) ;
  while (enumerator_4772.hasCurrentObject ()) {
    {
    var_functionModeMap.modifier_insertKey (enumerator_4772.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("func-declaration.galgas", 130)) ;
    }
    enumerator_4772.gotoNextObject () ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_resultType ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioContext.mAttribute_mTypeMap, inObject.mAttribute_mResultTypeName, var_resultType COMMA_SOURCE_FILE ("func-declaration.galgas", 133)) ;
  }
  {
  const GALGAS_functionDeclarationListAST_2D_element temp_0 = inObject ;
  ioArgument_ioContext.mAttribute_mFunctionMap.modifier_insertKey (GALGAS_lstring::constructor_new (categoryReader_mangledName (temp_0, inCompiler COMMA_SOURCE_FILE ("func-declaration.galgas", 136)), inObject.mAttribute_mFunctionName.mAttribute_location  COMMA_SOURCE_FILE ("func-declaration.galgas", 136)), var_functionModeMap, var_signature, var_resultType, inCompiler COMMA_SOURCE_FILE ("func-declaration.galgas", 135)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Category method '@functionDeclarationListAST-element functionSemanticAnalysis'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_functionSemanticAnalysis (const GALGAS_functionDeclarationListAST_2D_element inObject,
                                              const GALGAS_semanticContext constinArgument_inContext,
                                              GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                              GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringset var_functionModeSet = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("func-declaration.galgas", 160)) ;
  cEnumerator_lstringlist enumerator_6034 (inObject.mAttribute_mFunctionModeList, kEnumeration_up) ;
  while (enumerator_6034.hasCurrentObject ()) {
    constinArgument_inContext.mAttribute_mModeMap.method_searchKey (enumerator_6034.current (HERE).mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("func-declaration.galgas", 162)) ;
    var_functionModeSet.addAssign_operation (enumerator_6034.current (HERE).mAttribute_mValue.mAttribute_string  COMMA_SOURCE_FILE ("func-declaration.galgas", 163)) ;
    enumerator_6034.gotoNextObject () ;
  }
  const GALGAS_functionDeclarationListAST_2D_element temp_0 = inObject ;
  GALGAS_variableMap var_variableMap = function_initialVariableMap (categoryReader_mangledName (temp_0, inCompiler COMMA_SOURCE_FILE ("func-declaration.galgas", 167)), constinArgument_inContext, GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("func-declaration.galgas", 166)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_resultType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mAttribute_mTypeMap, inObject.mAttribute_mResultTypeName, inCompiler  COMMA_SOURCE_FILE ("func-declaration.galgas", 172)) ;
  {
  var_variableMap.modifier_insertOutputFormalArgument (inObject.mAttribute_mResultVarName, var_resultType, GALGAS_bool (true), GALGAS_objectInMemoryIR::constructor_localValue (var_resultType, inObject.mAttribute_mResultVarName  COMMA_SOURCE_FILE ("func-declaration.galgas", 177)), GALGAS_bool (true), GALGAS_registerBitSliceAccessMap::constructor_emptyMap (SOURCE_FILE ("func-declaration.galgas", 179)), GALGAS_bool (true), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("func-declaration.galgas", 173)) ;
  }
  GALGAS_funcFormalArgumentListForGeneration var_formalArguments = GALGAS_funcFormalArgumentListForGeneration::constructor_emptyList (SOURCE_FILE ("func-declaration.galgas", 184)) ;
  cEnumerator_funcFormalArgumentList enumerator_6795 (inObject.mAttribute_mFuncFormalArgumentList, kEnumeration_up) ;
  while (enumerator_6795.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_typeProxy = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mAttribute_mTypeMap, enumerator_6795.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("func-declaration.galgas", 186)) ;
    {
    var_variableMap.modifier_insertConstantInputFormalArgument (enumerator_6795.current_mFormalArgumentName (HERE), var_typeProxy, GALGAS_bool (true), GALGAS_objectInMemoryIR::constructor_localValue (var_typeProxy, enumerator_6795.current_mFormalArgumentName (HERE)  COMMA_SOURCE_FILE ("func-declaration.galgas", 191)), var_typeProxy.reader_copiable (inCompiler COMMA_SOURCE_FILE ("func-declaration.galgas", 192)), GALGAS_registerBitSliceAccessMap::constructor_emptyMap (SOURCE_FILE ("func-declaration.galgas", 193)), GALGAS_bool (false), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("func-declaration.galgas", 187)) ;
    }
    var_formalArguments.addAssign_operation (var_typeProxy, function_mangledNameForLocalVariable (enumerator_6795.current_mFormalArgumentName (HERE).mAttribute_string, inCompiler COMMA_SOURCE_FILE ("func-declaration.galgas", 197))  COMMA_SOURCE_FILE ("func-declaration.galgas", 197)) ;
    enumerator_6795.gotoNextObject () ;
  }
  const GALGAS_functionDeclarationListAST_2D_element temp_1 = inObject ;
  GALGAS_lstring var_routineNameForInvocationGraph = GALGAS_lstring::constructor_new (GALGAS_string ("func ").add_operation (categoryReader_mangledName (temp_1, inCompiler COMMA_SOURCE_FILE ("func-declaration.galgas", 200)), inCompiler COMMA_SOURCE_FILE ("func-declaration.galgas", 200)), inObject.mAttribute_mFunctionName.mAttribute_location  COMMA_SOURCE_FILE ("func-declaration.galgas", 200)) ;
  const enumGalgasBool test_2 = ioArgument_ioTemporaries.mAttribute_mSubprogramInvocationGraph.reader_isNodeDefined (var_routineNameForInvocationGraph.mAttribute_string COMMA_SOURCE_FILE ("func-declaration.galgas", 201)).operator_not (SOURCE_FILE ("func-declaration.galgas", 201)).boolEnum () ;
  if (kBoolTrue == test_2) {
    {
    ioArgument_ioTemporaries.mAttribute_mSubprogramInvocationGraph.modifier_addNode (var_routineNameForInvocationGraph, var_routineNameForInvocationGraph, inCompiler COMMA_SOURCE_FILE ("func-declaration.galgas", 202)) ;
    }
  }
  GALGAS_instructionListIR var_instructionGenerationList = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("func-declaration.galgas", 208)) ;
  categoryMethod_analyzeRoutineInstructionList (inObject.mAttribute_mInstructionList, var_routineNameForInvocationGraph, GALGAS_receiverType::constructor_noReceiver (SOURCE_FILE ("func-declaration.galgas", 211)), constinArgument_inContext, var_functionModeSet, var_functionModeSet.reader_hasKey (function_exceptionModeName (inCompiler COMMA_SOURCE_FILE ("func-declaration.galgas", 214)) COMMA_SOURCE_FILE ("func-declaration.galgas", 214)).operator_not (SOURCE_FILE ("func-declaration.galgas", 214)), ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct.mAttribute_mGlobalLiteralStringMap, var_variableMap, var_instructionGenerationList, inCompiler COMMA_SOURCE_FILE ("func-declaration.galgas", 209)) ;
  var_variableMap.method_checkAutomatonStates (inObject.mAttribute_mEndOfFuncLocation, inCompiler COMMA_SOURCE_FILE ("func-declaration.galgas", 221)) ;
  {
  ioArgument_ioIntermediateCodeStruct.mAttribute_mFunctionMapIR.modifier_insertKey (inObject.mAttribute_mFunctionName, var_formalArguments, var_instructionGenerationList, var_resultType, inObject.mAttribute_mResultVarName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("func-declaration.galgas", 223)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionMapIR_2D_element::GALGAS_functionMapIR_2D_element (void) :
mAttribute_lkey (),
mAttribute_mFormalArgumentListForGeneration (),
mAttribute_mInstructionGenerationList (),
mAttribute_mResultType (),
mAttribute_mResultVarName () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionMapIR_2D_element::~ GALGAS_functionMapIR_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionMapIR_2D_element::GALGAS_functionMapIR_2D_element (const GALGAS_lstring & inOperand0,
                                                                  const GALGAS_funcFormalArgumentListForGeneration & inOperand1,
                                                                  const GALGAS_instructionListIR & inOperand2,
                                                                  const GALGAS_unifiedTypeMap_2D_proxy & inOperand3,
                                                                  const GALGAS_string & inOperand4) :
mAttribute_lkey (inOperand0),
mAttribute_mFormalArgumentListForGeneration (inOperand1),
mAttribute_mInstructionGenerationList (inOperand2),
mAttribute_mResultType (inOperand3),
mAttribute_mResultVarName (inOperand4) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionMapIR_2D_element GALGAS_functionMapIR_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_functionMapIR_2D_element (GALGAS_lstring::constructor_default (HERE),
                                          GALGAS_funcFormalArgumentListForGeneration::constructor_emptyList (HERE),
                                          GALGAS_instructionListIR::constructor_emptyList (HERE),
                                          GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                          GALGAS_string::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionMapIR_2D_element GALGAS_functionMapIR_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                  const GALGAS_funcFormalArgumentListForGeneration & inOperand1,
                                                                                  const GALGAS_instructionListIR & inOperand2,
                                                                                  const GALGAS_unifiedTypeMap_2D_proxy & inOperand3,
                                                                                  const GALGAS_string & inOperand4 
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_functionMapIR_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_functionMapIR_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
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
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_functionMapIR_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mFormalArgumentListForGeneration.isValid () && mAttribute_mInstructionGenerationList.isValid () && mAttribute_mResultType.isValid () && mAttribute_mResultVarName.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_functionMapIR_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mFormalArgumentListForGeneration.drop () ;
  mAttribute_mInstructionGenerationList.drop () ;
  mAttribute_mResultType.drop () ;
  mAttribute_mResultVarName.drop () ;
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
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_functionMapIR_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_funcFormalArgumentListForGeneration GALGAS_functionMapIR_2D_element::reader_mFormalArgumentListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormalArgumentListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR GALGAS_functionMapIR_2D_element::reader_mInstructionGenerationList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstructionGenerationList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_functionMapIR_2D_element::reader_mResultType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mResultType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_functionMapIR_2D_element::reader_mResultVarName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mResultVarName ;
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

GALGAS_procedureMapIR_2D_element::GALGAS_procedureMapIR_2D_element (void) :
mAttribute_lkey (),
mAttribute_mFormalArgumentListForGeneration (),
mAttribute_mInstructionGenerationList (),
mAttribute_mIsRequired (),
mAttribute_mWarnIfUnused (),
mAttribute_mWeak () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procedureMapIR_2D_element::~ GALGAS_procedureMapIR_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procedureMapIR_2D_element::GALGAS_procedureMapIR_2D_element (const GALGAS_lstring & inOperand0,
                                                                    const GALGAS_procFormalArgumentListForGeneration & inOperand1,
                                                                    const GALGAS_instructionListIR & inOperand2,
                                                                    const GALGAS_bool & inOperand3,
                                                                    const GALGAS_bool & inOperand4,
                                                                    const GALGAS_bool & inOperand5) :
mAttribute_lkey (inOperand0),
mAttribute_mFormalArgumentListForGeneration (inOperand1),
mAttribute_mInstructionGenerationList (inOperand2),
mAttribute_mIsRequired (inOperand3),
mAttribute_mWarnIfUnused (inOperand4),
mAttribute_mWeak (inOperand5) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procedureMapIR_2D_element GALGAS_procedureMapIR_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_procedureMapIR_2D_element (GALGAS_lstring::constructor_default (HERE),
                                           GALGAS_procFormalArgumentListForGeneration::constructor_emptyList (HERE),
                                           GALGAS_instructionListIR::constructor_emptyList (HERE),
                                           GALGAS_bool::constructor_default (HERE),
                                           GALGAS_bool::constructor_default (HERE),
                                           GALGAS_bool::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procedureMapIR_2D_element GALGAS_procedureMapIR_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                    const GALGAS_procFormalArgumentListForGeneration & inOperand1,
                                                                                    const GALGAS_instructionListIR & inOperand2,
                                                                                    const GALGAS_bool & inOperand3,
                                                                                    const GALGAS_bool & inOperand4,
                                                                                    const GALGAS_bool & inOperand5 
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_procedureMapIR_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid ()) {
    result = GALGAS_procedureMapIR_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_procedureMapIR_2D_element::objectCompare (const GALGAS_procedureMapIR_2D_element & inOperand) const {
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
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_procedureMapIR_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mFormalArgumentListForGeneration.isValid () && mAttribute_mInstructionGenerationList.isValid () && mAttribute_mIsRequired.isValid () && mAttribute_mWarnIfUnused.isValid () && mAttribute_mWeak.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procedureMapIR_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mFormalArgumentListForGeneration.drop () ;
  mAttribute_mInstructionGenerationList.drop () ;
  mAttribute_mIsRequired.drop () ;
  mAttribute_mWarnIfUnused.drop () ;
  mAttribute_mWeak.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procedureMapIR_2D_element::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "<struct @procedureMapIR-element:" ;
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
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_procedureMapIR_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentListForGeneration GALGAS_procedureMapIR_2D_element::reader_mFormalArgumentListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormalArgumentListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR GALGAS_procedureMapIR_2D_element::reader_mInstructionGenerationList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstructionGenerationList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_procedureMapIR_2D_element::reader_mIsRequired (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIsRequired ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_procedureMapIR_2D_element::reader_mWarnIfUnused (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mWarnIfUnused ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_procedureMapIR_2D_element::reader_mWeak (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mWeak ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @procedureMapIR-element type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_procedureMapIR_2D_element ("procedureMapIR-element",
                                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_procedureMapIR_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procedureMapIR_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_procedureMapIR_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_procedureMapIR_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procedureMapIR_2D_element GALGAS_procedureMapIR_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_procedureMapIR_2D_element result ;
  const GALGAS_procedureMapIR_2D_element * p = (const GALGAS_procedureMapIR_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_procedureMapIR_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("procedureMapIR-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

GALGAS_unifiedTypeMap_2D_proxy GALGAS_operandIR::reader_mType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_valueIR GALGAS_operandIR::reader_mValue (UNUSED_LOCATION_ARGS) const {
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
  GALGAS_lstring var_lkey = function_combineTypeNamesForInfixOperator (constinArgument_inLeftType.reader_key (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 80)), constinArgument_inRightType.reader_key (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 80)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 80)) ;
  const GALGAS_infixOperatorMap temp_0 = inObject ;
  const enumGalgasBool test_1 = temp_0.reader_hasKey (var_lkey.mAttribute_string COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 81)).boolEnum () ;
  if (kBoolTrue == test_1) {
    const GALGAS_infixOperatorMap temp_2 = inObject ;
    temp_2.method_searchKey (var_lkey, outArgument_outResultType, outArgument_outOperation, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 82)) ;
  }else if (kBoolFalse == test_1) {
    inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("infix operation between '").add_operation (constinArgument_inLeftType.reader_key (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 85)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 85)).add_operation (GALGAS_string (" and "), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 85)).add_operation (constinArgument_inRightType.reader_key (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 85)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 85)).add_operation (GALGAS_string ("' is not defined"), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 85))  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 84)) ;
    outArgument_outResultType.drop () ; // Release error dropped variable
    outArgument_outOperation.drop () ; // Release error dropped variable
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Category method '@prefixOperatorMap checkWith'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_checkWith (const GALGAS_prefixOperatorMap inObject,
                               const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inType,
                               const GALGAS_location constinArgument_inOperatorLocation,
                               GALGAS_unifiedTypeMap_2D_proxy & outArgument_outResultType,
                               C_Compiler * inCompiler
                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outResultType.drop () ; // Release 'out' argument
  GALGAS_lstring var_lkey = GALGAS_lstring::constructor_new (constinArgument_inType.reader_key (inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 40)), constinArgument_inOperatorLocation  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 40)) ;
  const GALGAS_prefixOperatorMap temp_0 = inObject ;
  const enumGalgasBool test_1 = temp_0.reader_hasKey (var_lkey.mAttribute_string COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 41)).boolEnum () ;
  if (kBoolTrue == test_1) {
    const GALGAS_prefixOperatorMap temp_2 = inObject ;
    temp_2.method_searchKey (var_lkey, outArgument_outResultType, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 42)) ;
  }else if (kBoolFalse == test_1) {
    inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("prefix operation is not defined for '").add_operation (constinArgument_inType.reader_key (inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 45)), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 45)).add_operation (GALGAS_string (" type"), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 45))  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 44)) ;
    outArgument_outResultType.drop () ; // Release error dropped variable
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Category Reader '@procEffectiveParameterPassingModeAST passingModeForActualSelector'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string categoryReader_passingModeForActualSelector (const GALGAS_procEffectiveParameterPassingModeAST & inObject,
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
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, inArgument_inSelector.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_1) {
    result_outResult.dotAssign_operation (inArgument_inSelector.mAttribute_string.add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 20))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 20)) ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Category Reader '@unifiedTypeMap-proxy llvmTypeName'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string categoryReader_llvmTypeName (const GALGAS_unifiedTypeMap_2D_proxy & inObject,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_unifiedTypeMap_2D_proxy temp_0 = inObject ;
  switch (temp_0.reader_kind (inCompiler COMMA_SOURCE_FILE ("semantic-context.galgas", 116)).enumValue ()) {
  case GALGAS_typeKind::kNotBuilt:
    break ;
  case GALGAS_typeKind::kEnum_boolean:
    {
      result_outResult = GALGAS_string ("i1") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_boolset:
    {
      result_outResult = GALGAS_string ("<<boolset>>") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_enumeration:
    {
      const cEnumAssociatedValues_typeKind_enumeration * extractPtr_4681 = (const cEnumAssociatedValues_typeKind_enumeration *) (temp_0.reader_kind (inCompiler COMMA_SOURCE_FILE ("semantic-context.galgas", 116)).unsafePointer ()) ;
      const GALGAS_enumConstantMap extractedValue_constantMap = extractPtr_4681->mAssociatedValue0 ;
      result_outResult = GALGAS_string ("i").add_operation (extractedValue_constantMap.reader_count (SOURCE_FILE ("semantic-context.galgas", 119)).substract_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semantic-context.galgas", 119)).reader_significantBitCount (SOURCE_FILE ("semantic-context.galgas", 119)).reader_string (SOURCE_FILE ("semantic-context.galgas", 119)), inCompiler COMMA_SOURCE_FILE ("semantic-context.galgas", 119)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_structure:
    {
      const cEnumAssociatedValues_typeKind_structure * extractPtr_4763 = (const cEnumAssociatedValues_typeKind_structure *) (temp_0.reader_kind (inCompiler COMMA_SOURCE_FILE ("semantic-context.galgas", 116)).unsafePointer ()) ;
      const GALGAS_propertyMap extractedValue_propertyMap = extractPtr_4763->mAssociatedValue0 ;
      result_outResult = GALGAS_string ("<<structure>>") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_integer:
    {
      const cEnumAssociatedValues_typeKind_integer * extractPtr_4850 = (const cEnumAssociatedValues_typeKind_integer *) (temp_0.reader_kind (inCompiler COMMA_SOURCE_FILE ("semantic-context.galgas", 116)).unsafePointer ()) ;
      const GALGAS_bool extractedValue_unsigned = extractPtr_4850->mAssociatedValue2 ;
      const GALGAS_uint extractedValue_bitCount = extractPtr_4850->mAssociatedValue3 ;
      result_outResult = GALGAS_string ("i").add_operation (extractedValue_bitCount.reader_string (SOURCE_FILE ("semantic-context.galgas", 121)), inCompiler COMMA_SOURCE_FILE ("semantic-context.galgas", 121)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_literalString:
    {
      result_outResult = GALGAS_string ("<<literalString>>") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_literalInteger:
    {
      result_outResult = GALGAS_string ("<<literalInteger>>") ;
    }
    break ;
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
mAttribute_mInstanciationMap (),
mAttribute_mProcedureMap (),
mAttribute_mFunctionMap (),
mAttribute_mInitRoutineMap (),
mAttribute_mExceptionSetupRoutinePriorityMap (),
mAttribute_mExceptionLoopRoutinePriorityMap (),
mAttribute_mRegisterMap (),
mAttribute_mGlobalConstantMap (),
mAttribute_mGlobalVariableMap (),
mAttribute_mModeMap (),
mAttribute_mIncOperatorMap (),
mAttribute_mDecOperatorMap (),
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
mAttribute_mUnsignedComplementOperatorMap () {
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
                                                const GALGAS_instanciationMap & inOperand6,
                                                const GALGAS_procedureMap & inOperand7,
                                                const GALGAS_functionMap & inOperand8,
                                                const GALGAS_initRoutineMap & inOperand9,
                                                const GALGAS_exceptionRoutinePriorityMap & inOperand10,
                                                const GALGAS_exceptionRoutinePriorityMap & inOperand11,
                                                const GALGAS_registerMap & inOperand12,
                                                const GALGAS_globalConstantMap & inOperand13,
                                                const GALGAS_globalVariableMap & inOperand14,
                                                const GALGAS_modeMap & inOperand15,
                                                const GALGAS_incDecOperatorMap & inOperand16,
                                                const GALGAS_incDecOperatorMap & inOperand17,
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
                                                const GALGAS_infixOperatorMap & inOperand38,
                                                const GALGAS_infixOperatorMap & inOperand39,
                                                const GALGAS_prefixOperatorMap & inOperand40,
                                                const GALGAS_prefixOperatorMap & inOperand41,
                                                const GALGAS_prefixOperatorMap & inOperand42) :
mAttribute_mPointerSize (inOperand0),
mAttribute_mBooleanType (inOperand1),
mAttribute_mLiteralIntegerType (inOperand2),
mAttribute_mExceptionCodeType (inOperand3),
mAttribute_mExceptionLineType (inOperand4),
mAttribute_mTypeMap (inOperand5),
mAttribute_mInstanciationMap (inOperand6),
mAttribute_mProcedureMap (inOperand7),
mAttribute_mFunctionMap (inOperand8),
mAttribute_mInitRoutineMap (inOperand9),
mAttribute_mExceptionSetupRoutinePriorityMap (inOperand10),
mAttribute_mExceptionLoopRoutinePriorityMap (inOperand11),
mAttribute_mRegisterMap (inOperand12),
mAttribute_mGlobalConstantMap (inOperand13),
mAttribute_mGlobalVariableMap (inOperand14),
mAttribute_mModeMap (inOperand15),
mAttribute_mIncOperatorMap (inOperand16),
mAttribute_mDecOperatorMap (inOperand17),
mAttribute_mEqualOperatorMap (inOperand18),
mAttribute_mNonEqualOperatorMap (inOperand19),
mAttribute_mStrictInfOperatorMap (inOperand20),
mAttribute_mInfEqualOperatorMap (inOperand21),
mAttribute_mStrictSupOperatorMap (inOperand22),
mAttribute_mSupEqualOperatorMap (inOperand23),
mAttribute_mAndOperatorMap (inOperand24),
mAttribute_mOrOperatorMap (inOperand25),
mAttribute_mXorOperatorMap (inOperand26),
mAttribute_mBooleanXorOperatorMap (inOperand27),
mAttribute_mAddOperatorMap (inOperand28),
mAttribute_mAddNoOvfOperatorMap (inOperand29),
mAttribute_mSubOperatorMap (inOperand30),
mAttribute_mSubNoOvfOperatorMap (inOperand31),
mAttribute_mMulOperatorMap (inOperand32),
mAttribute_mMulNoOvfOperatorMap (inOperand33),
mAttribute_mDivOperatorMap (inOperand34),
mAttribute_mDivNoOvfOperatorMap (inOperand35),
mAttribute_mModOperatorMap (inOperand36),
mAttribute_mModNoOvfOperatorMap (inOperand37),
mAttribute_mLeftShiftOperatorMap (inOperand38),
mAttribute_mRightShiftOperatorMap (inOperand39),
mAttribute_mUnaryMinusOperatorMap (inOperand40),
mAttribute_mNotOperatorMap (inOperand41),
mAttribute_mUnsignedComplementOperatorMap (inOperand42) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticContext GALGAS_semanticContext::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_semanticContext (GALGAS_uint::constructor_default (HERE),
                                 GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                 GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                 GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                 GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                 GALGAS_unifiedTypeMap::constructor_emptyMap (HERE),
                                 GALGAS_instanciationMap::constructor_emptyMap (HERE),
                                 GALGAS_procedureMap::constructor_emptyMap (HERE),
                                 GALGAS_functionMap::constructor_emptyMap (HERE),
                                 GALGAS_initRoutineMap::constructor_emptyMap (HERE),
                                 GALGAS_exceptionRoutinePriorityMap::constructor_emptyMap (HERE),
                                 GALGAS_exceptionRoutinePriorityMap::constructor_emptyMap (HERE),
                                 GALGAS_registerMap::constructor_emptyMap (HERE),
                                 GALGAS_globalConstantMap::constructor_emptyMap (HERE),
                                 GALGAS_globalVariableMap::constructor_emptyMap (HERE),
                                 GALGAS_modeMap::constructor_emptyMap (HERE),
                                 GALGAS_incDecOperatorMap::constructor_emptyMap (HERE),
                                 GALGAS_incDecOperatorMap::constructor_emptyMap (HERE),
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
                                 GALGAS_prefixOperatorMap::constructor_emptyMap (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticContext GALGAS_semanticContext::constructor_new (const GALGAS_uint & inOperand0,
                                                                const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                const GALGAS_unifiedTypeMap_2D_proxy & inOperand2,
                                                                const GALGAS_unifiedTypeMap_2D_proxy & inOperand3,
                                                                const GALGAS_unifiedTypeMap_2D_proxy & inOperand4,
                                                                const GALGAS_unifiedTypeMap & inOperand5,
                                                                const GALGAS_instanciationMap & inOperand6,
                                                                const GALGAS_procedureMap & inOperand7,
                                                                const GALGAS_functionMap & inOperand8,
                                                                const GALGAS_initRoutineMap & inOperand9,
                                                                const GALGAS_exceptionRoutinePriorityMap & inOperand10,
                                                                const GALGAS_exceptionRoutinePriorityMap & inOperand11,
                                                                const GALGAS_registerMap & inOperand12,
                                                                const GALGAS_globalConstantMap & inOperand13,
                                                                const GALGAS_globalVariableMap & inOperand14,
                                                                const GALGAS_modeMap & inOperand15,
                                                                const GALGAS_incDecOperatorMap & inOperand16,
                                                                const GALGAS_incDecOperatorMap & inOperand17,
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
                                                                const GALGAS_infixOperatorMap & inOperand38,
                                                                const GALGAS_infixOperatorMap & inOperand39,
                                                                const GALGAS_prefixOperatorMap & inOperand40,
                                                                const GALGAS_prefixOperatorMap & inOperand41,
                                                                const GALGAS_prefixOperatorMap & inOperand42 
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
    result = mAttribute_mInstanciationMap.objectCompare (inOperand.mAttribute_mInstanciationMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mProcedureMap.objectCompare (inOperand.mAttribute_mProcedureMap) ;
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
    result = mAttribute_mRegisterMap.objectCompare (inOperand.mAttribute_mRegisterMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mGlobalConstantMap.objectCompare (inOperand.mAttribute_mGlobalConstantMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mGlobalVariableMap.objectCompare (inOperand.mAttribute_mGlobalVariableMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mModeMap.objectCompare (inOperand.mAttribute_mModeMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mIncOperatorMap.objectCompare (inOperand.mAttribute_mIncOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mDecOperatorMap.objectCompare (inOperand.mAttribute_mDecOperatorMap) ;
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
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_semanticContext::isValid (void) const {
  return mAttribute_mPointerSize.isValid () && mAttribute_mBooleanType.isValid () && mAttribute_mLiteralIntegerType.isValid () && mAttribute_mExceptionCodeType.isValid () && mAttribute_mExceptionLineType.isValid () && mAttribute_mTypeMap.isValid () && mAttribute_mInstanciationMap.isValid () && mAttribute_mProcedureMap.isValid () && mAttribute_mFunctionMap.isValid () && mAttribute_mInitRoutineMap.isValid () && mAttribute_mExceptionSetupRoutinePriorityMap.isValid () && mAttribute_mExceptionLoopRoutinePriorityMap.isValid () && mAttribute_mRegisterMap.isValid () && mAttribute_mGlobalConstantMap.isValid () && mAttribute_mGlobalVariableMap.isValid () && mAttribute_mModeMap.isValid () && mAttribute_mIncOperatorMap.isValid () && mAttribute_mDecOperatorMap.isValid () && mAttribute_mEqualOperatorMap.isValid () && mAttribute_mNonEqualOperatorMap.isValid () && mAttribute_mStrictInfOperatorMap.isValid () && mAttribute_mInfEqualOperatorMap.isValid () && mAttribute_mStrictSupOperatorMap.isValid () && mAttribute_mSupEqualOperatorMap.isValid () && mAttribute_mAndOperatorMap.isValid () && mAttribute_mOrOperatorMap.isValid () && mAttribute_mXorOperatorMap.isValid () && mAttribute_mBooleanXorOperatorMap.isValid () && mAttribute_mAddOperatorMap.isValid () && mAttribute_mAddNoOvfOperatorMap.isValid () && mAttribute_mSubOperatorMap.isValid () && mAttribute_mSubNoOvfOperatorMap.isValid () && mAttribute_mMulOperatorMap.isValid () && mAttribute_mMulNoOvfOperatorMap.isValid () && mAttribute_mDivOperatorMap.isValid () && mAttribute_mDivNoOvfOperatorMap.isValid () && mAttribute_mModOperatorMap.isValid () && mAttribute_mModNoOvfOperatorMap.isValid () && mAttribute_mLeftShiftOperatorMap.isValid () && mAttribute_mRightShiftOperatorMap.isValid () && mAttribute_mUnaryMinusOperatorMap.isValid () && mAttribute_mNotOperatorMap.isValid () && mAttribute_mUnsignedComplementOperatorMap.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticContext::drop (void) {
  mAttribute_mPointerSize.drop () ;
  mAttribute_mBooleanType.drop () ;
  mAttribute_mLiteralIntegerType.drop () ;
  mAttribute_mExceptionCodeType.drop () ;
  mAttribute_mExceptionLineType.drop () ;
  mAttribute_mTypeMap.drop () ;
  mAttribute_mInstanciationMap.drop () ;
  mAttribute_mProcedureMap.drop () ;
  mAttribute_mFunctionMap.drop () ;
  mAttribute_mInitRoutineMap.drop () ;
  mAttribute_mExceptionSetupRoutinePriorityMap.drop () ;
  mAttribute_mExceptionLoopRoutinePriorityMap.drop () ;
  mAttribute_mRegisterMap.drop () ;
  mAttribute_mGlobalConstantMap.drop () ;
  mAttribute_mGlobalVariableMap.drop () ;
  mAttribute_mModeMap.drop () ;
  mAttribute_mIncOperatorMap.drop () ;
  mAttribute_mDecOperatorMap.drop () ;
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
    mAttribute_mInstanciationMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mProcedureMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFunctionMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInitRoutineMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mExceptionSetupRoutinePriorityMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mExceptionLoopRoutinePriorityMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mRegisterMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mGlobalConstantMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mGlobalVariableMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mModeMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mIncOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mDecOperatorMap.description (ioString, inIndentation+1) ;
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
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_semanticContext::reader_mPointerSize (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPointerSize ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_semanticContext::reader_mBooleanType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBooleanType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_semanticContext::reader_mLiteralIntegerType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLiteralIntegerType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_semanticContext::reader_mExceptionCodeType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExceptionCodeType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_semanticContext::reader_mExceptionLineType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExceptionLineType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap GALGAS_semanticContext::reader_mTypeMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTypeMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instanciationMap GALGAS_semanticContext::reader_mInstanciationMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstanciationMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procedureMap GALGAS_semanticContext::reader_mProcedureMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mProcedureMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionMap GALGAS_semanticContext::reader_mFunctionMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFunctionMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initRoutineMap GALGAS_semanticContext::reader_mInitRoutineMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInitRoutineMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_exceptionRoutinePriorityMap GALGAS_semanticContext::reader_mExceptionSetupRoutinePriorityMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExceptionSetupRoutinePriorityMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_exceptionRoutinePriorityMap GALGAS_semanticContext::reader_mExceptionLoopRoutinePriorityMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExceptionLoopRoutinePriorityMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerMap GALGAS_semanticContext::reader_mRegisterMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegisterMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalConstantMap GALGAS_semanticContext::reader_mGlobalConstantMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mGlobalConstantMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalVariableMap GALGAS_semanticContext::reader_mGlobalVariableMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mGlobalVariableMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_modeMap GALGAS_semanticContext::reader_mModeMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mModeMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_incDecOperatorMap GALGAS_semanticContext::reader_mIncOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIncOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_incDecOperatorMap GALGAS_semanticContext::reader_mDecOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDecOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::reader_mEqualOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEqualOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::reader_mNonEqualOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mNonEqualOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::reader_mStrictInfOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mStrictInfOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::reader_mInfEqualOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInfEqualOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::reader_mStrictSupOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mStrictSupOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::reader_mSupEqualOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSupEqualOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::reader_mAndOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAndOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::reader_mOrOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOrOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::reader_mXorOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mXorOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::reader_mBooleanXorOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBooleanXorOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::reader_mAddOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAddOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::reader_mAddNoOvfOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAddNoOvfOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::reader_mSubOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSubOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::reader_mSubNoOvfOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSubNoOvfOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::reader_mMulOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mMulOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::reader_mMulNoOvfOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mMulNoOvfOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::reader_mDivOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDivOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::reader_mDivNoOvfOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDivNoOvfOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::reader_mModOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mModOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::reader_mModNoOvfOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mModNoOvfOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::reader_mLeftShiftOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLeftShiftOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::reader_mRightShiftOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRightShiftOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefixOperatorMap GALGAS_semanticContext::reader_mUnaryMinusOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mUnaryMinusOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefixOperatorMap GALGAS_semanticContext::reader_mNotOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mNotOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefixOperatorMap GALGAS_semanticContext::reader_mUnsignedComplementOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mUnsignedComplementOperatorMap ;
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

GALGAS_intermediateCodeStruct::GALGAS_intermediateCodeStruct (void) :
mAttribute_mGlobalLiteralStringMap (),
mAttribute_mRegisterMap (),
mAttribute_mGlobalVariableMap (),
mAttribute_mGlobalConstantMap (),
mAttribute_mProcedureMapIR (),
mAttribute_mFunctionMapIR (),
mAttribute_mRequiredProcedureSet (),
mAttribute_mBootList (),
mAttribute_mInitList (),
mAttribute_mExceptionSetupInstructionListIR (),
mAttribute_mExceptionLoopInstructionListIR () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_intermediateCodeStruct::~ GALGAS_intermediateCodeStruct (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_intermediateCodeStruct::GALGAS_intermediateCodeStruct (const GALGAS_globalLiteralStringMap & inOperand0,
                                                              const GALGAS_registerMapIR & inOperand1,
                                                              const GALGAS_globalVariableMapIR & inOperand2,
                                                              const GALGAS_globalConstantMapIR & inOperand3,
                                                              const GALGAS_procedureMapIR & inOperand4,
                                                              const GALGAS_functionMapIR & inOperand5,
                                                              const GALGAS_stringset & inOperand6,
                                                              const GALGAS_bootListIR & inOperand7,
                                                              const GALGAS_initListIR & inOperand8,
                                                              const GALGAS_instructionListIR & inOperand9,
                                                              const GALGAS_instructionListIR & inOperand10) :
mAttribute_mGlobalLiteralStringMap (inOperand0),
mAttribute_mRegisterMap (inOperand1),
mAttribute_mGlobalVariableMap (inOperand2),
mAttribute_mGlobalConstantMap (inOperand3),
mAttribute_mProcedureMapIR (inOperand4),
mAttribute_mFunctionMapIR (inOperand5),
mAttribute_mRequiredProcedureSet (inOperand6),
mAttribute_mBootList (inOperand7),
mAttribute_mInitList (inOperand8),
mAttribute_mExceptionSetupInstructionListIR (inOperand9),
mAttribute_mExceptionLoopInstructionListIR (inOperand10) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_intermediateCodeStruct GALGAS_intermediateCodeStruct::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_intermediateCodeStruct (GALGAS_globalLiteralStringMap::constructor_emptyMap (HERE),
                                        GALGAS_registerMapIR::constructor_emptyMap (HERE),
                                        GALGAS_globalVariableMapIR::constructor_emptyMap (HERE),
                                        GALGAS_globalConstantMapIR::constructor_emptyMap (HERE),
                                        GALGAS_procedureMapIR::constructor_emptyMap (HERE),
                                        GALGAS_functionMapIR::constructor_emptyMap (HERE),
                                        GALGAS_stringset::constructor_emptySet (HERE),
                                        GALGAS_bootListIR::constructor_emptyList (HERE),
                                        GALGAS_initListIR::constructor_emptyList (HERE),
                                        GALGAS_instructionListIR::constructor_emptyList (HERE),
                                        GALGAS_instructionListIR::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_intermediateCodeStruct GALGAS_intermediateCodeStruct::constructor_new (const GALGAS_globalLiteralStringMap & inOperand0,
                                                                              const GALGAS_registerMapIR & inOperand1,
                                                                              const GALGAS_globalVariableMapIR & inOperand2,
                                                                              const GALGAS_globalConstantMapIR & inOperand3,
                                                                              const GALGAS_procedureMapIR & inOperand4,
                                                                              const GALGAS_functionMapIR & inOperand5,
                                                                              const GALGAS_stringset & inOperand6,
                                                                              const GALGAS_bootListIR & inOperand7,
                                                                              const GALGAS_initListIR & inOperand8,
                                                                              const GALGAS_instructionListIR & inOperand9,
                                                                              const GALGAS_instructionListIR & inOperand10 
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_intermediateCodeStruct result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid () && inOperand10.isValid ()) {
    result = GALGAS_intermediateCodeStruct (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_intermediateCodeStruct::objectCompare (const GALGAS_intermediateCodeStruct & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mGlobalLiteralStringMap.objectCompare (inOperand.mAttribute_mGlobalLiteralStringMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mRegisterMap.objectCompare (inOperand.mAttribute_mRegisterMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mGlobalVariableMap.objectCompare (inOperand.mAttribute_mGlobalVariableMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mGlobalConstantMap.objectCompare (inOperand.mAttribute_mGlobalConstantMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mProcedureMapIR.objectCompare (inOperand.mAttribute_mProcedureMapIR) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFunctionMapIR.objectCompare (inOperand.mAttribute_mFunctionMapIR) ;
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
    result = mAttribute_mExceptionSetupInstructionListIR.objectCompare (inOperand.mAttribute_mExceptionSetupInstructionListIR) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mExceptionLoopInstructionListIR.objectCompare (inOperand.mAttribute_mExceptionLoopInstructionListIR) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_intermediateCodeStruct::isValid (void) const {
  return mAttribute_mGlobalLiteralStringMap.isValid () && mAttribute_mRegisterMap.isValid () && mAttribute_mGlobalVariableMap.isValid () && mAttribute_mGlobalConstantMap.isValid () && mAttribute_mProcedureMapIR.isValid () && mAttribute_mFunctionMapIR.isValid () && mAttribute_mRequiredProcedureSet.isValid () && mAttribute_mBootList.isValid () && mAttribute_mInitList.isValid () && mAttribute_mExceptionSetupInstructionListIR.isValid () && mAttribute_mExceptionLoopInstructionListIR.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_intermediateCodeStruct::drop (void) {
  mAttribute_mGlobalLiteralStringMap.drop () ;
  mAttribute_mRegisterMap.drop () ;
  mAttribute_mGlobalVariableMap.drop () ;
  mAttribute_mGlobalConstantMap.drop () ;
  mAttribute_mProcedureMapIR.drop () ;
  mAttribute_mFunctionMapIR.drop () ;
  mAttribute_mRequiredProcedureSet.drop () ;
  mAttribute_mBootList.drop () ;
  mAttribute_mInitList.drop () ;
  mAttribute_mExceptionSetupInstructionListIR.drop () ;
  mAttribute_mExceptionLoopInstructionListIR.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_intermediateCodeStruct::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "<struct @intermediateCodeStruct:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mGlobalLiteralStringMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mRegisterMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mGlobalVariableMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mGlobalConstantMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mProcedureMapIR.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFunctionMapIR.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mRequiredProcedureSet.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mBootList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInitList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mExceptionSetupInstructionListIR.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mExceptionLoopInstructionListIR.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalLiteralStringMap GALGAS_intermediateCodeStruct::reader_mGlobalLiteralStringMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mGlobalLiteralStringMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerMapIR GALGAS_intermediateCodeStruct::reader_mRegisterMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegisterMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalVariableMapIR GALGAS_intermediateCodeStruct::reader_mGlobalVariableMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mGlobalVariableMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalConstantMapIR GALGAS_intermediateCodeStruct::reader_mGlobalConstantMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mGlobalConstantMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procedureMapIR GALGAS_intermediateCodeStruct::reader_mProcedureMapIR (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mProcedureMapIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionMapIR GALGAS_intermediateCodeStruct::reader_mFunctionMapIR (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFunctionMapIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringset GALGAS_intermediateCodeStruct::reader_mRequiredProcedureSet (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRequiredProcedureSet ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootListIR GALGAS_intermediateCodeStruct::reader_mBootList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBootList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initListIR GALGAS_intermediateCodeStruct::reader_mInitList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInitList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR GALGAS_intermediateCodeStruct::reader_mExceptionSetupInstructionListIR (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExceptionSetupInstructionListIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR GALGAS_intermediateCodeStruct::reader_mExceptionLoopInstructionListIR (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExceptionLoopInstructionListIR ;
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
                                                       GALGAS_string & io_ioCode,
                                                       const GALGAS_generationContext constin_inGenerationContext,
                                                       GALGAS_stringset & io_ioIntrinsicsDeclarationSet,
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
      f (inObject, constin_inOperation, constin_inCode, io_ioCode, constin_inGenerationContext, io_ioIntrinsicsDeclarationSet, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_binaryOperationIR_enterCodeForOverflowOperation (const cPtr_binaryOperationIR * inObject,
                                                                            const GALGAS_string constinArgument_inOperation,
                                                                            const GALGAS_uint constinArgument_inCode,
                                                                            GALGAS_string & ioArgument_ioCode,
                                                                            const GALGAS_generationContext constinArgument_inGenerationContext,
                                                                            GALGAS_stringset & ioArgument_ioIntrinsicsDeclarationSet,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_binaryOperationIR * object = inObject ;
  macroValidSharedObject (object, cPtr_binaryOperationIR) ;
  GALGAS_string var_llvmType = categoryReader_llvmTypeName (object->mAttribute_mOperandType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 79)) ;
  ioArgument_ioCode.dotAssign_operation (GALGAS_string ("  ").add_operation (categoryReader_string (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 80)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 80)).add_operation (GALGAS_string (".r = call {"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 80)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 80)).add_operation (GALGAS_string (", i1} @llvm."), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 80)).add_operation (constinArgument_inOperation, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 80)).add_operation (GALGAS_string (".with.overflow."), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 80)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 80))  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 80)) ;
  ioArgument_ioCode.dotAssign_operation (GALGAS_string (" (").add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 81)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 81)).add_operation (categoryReader_string (object->mAttribute_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 81)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 81)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 81)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 81)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 81)).add_operation (categoryReader_string (object->mAttribute_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 81)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 81)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 81))  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 81)) ;
  ioArgument_ioCode.dotAssign_operation (GALGAS_string ("  ").add_operation (categoryReader_string (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 82)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 82)).add_operation (GALGAS_string (".hasOvf = extractvalue {"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 82)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 82)).add_operation (GALGAS_string (", i1} "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 82)).add_operation (categoryReader_string (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 82)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 82)).add_operation (GALGAS_string (".r, 1\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 82))  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 82)) ;
  GALGAS_string var_labelName = categoryReader_name (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 83)) ;
  ioArgument_ioCode.dotAssign_operation (GALGAS_string ("  br i1 ").add_operation (categoryReader_string (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 84)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 84)).add_operation (GALGAS_string (".hasOvf, label %"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 84)).add_operation (var_labelName, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 84)).add_operation (GALGAS_string (".ovf, label %"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 84)).add_operation (var_labelName, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 84)).add_operation (GALGAS_string (".noovf\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 84))  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 84)) ;
  ioArgument_ioCode.dotAssign_operation (var_labelName.add_operation (GALGAS_string (".ovf:\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 85))  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 85)) ;
  ioArgument_ioCode.dotAssign_operation (GALGAS_string ("  call void @raise_exception (")  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 86)) ;
  ioArgument_ioCode.dotAssign_operation (constinArgument_inGenerationContext.mAttribute_mExceptionCodeLLVMType.add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 87)).add_operation (constinArgument_inCode.reader_string (SOURCE_FILE ("intermediate-binary-operation.galgas", 87)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 87)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 87))  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 87)) ;
  ioArgument_ioCode.dotAssign_operation (constinArgument_inGenerationContext.mAttribute_mExceptionLineLLVMType.add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 88)).add_operation (object->mAttribute_mLocation.reader_locationIndex (inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 88)).reader_string (SOURCE_FILE ("intermediate-binary-operation.galgas", 88)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 88)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 88))  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 88)) ;
  ioArgument_ioCode.dotAssign_operation (GALGAS_string ("  unreachable\n"
    "\n")  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 89)) ;
  ioArgument_ioCode.dotAssign_operation (var_labelName.add_operation (GALGAS_string (".noovf:\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 90))  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 90)) ;
  ioArgument_ioCode.dotAssign_operation (GALGAS_string ("  ").add_operation (categoryReader_string (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 91)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 91)).add_operation (GALGAS_string (" = extractvalue {"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 91)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 91)).add_operation (GALGAS_string (", i1} "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 91)).add_operation (categoryReader_string (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 91)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 91)).add_operation (GALGAS_string (".r, 0\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 91))  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 91)) ;
  ioArgument_ioIntrinsicsDeclarationSet.addAssign_operation (GALGAS_string ("declare {").add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 92)).add_operation (GALGAS_string (", i1} @llvm."), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 92)).add_operation (constinArgument_inOperation, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 92)).add_operation (GALGAS_string (".with.overflow."), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 92)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 92)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 93)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 93)).add_operation (GALGAS_string (" %a, "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 93)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 93)).add_operation (GALGAS_string (" %b)"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 93))  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 92)) ;
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
//                                 Category method '@objectInMemoryIR loadFromMemory'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_loadFromMemory (const GALGAS_objectInMemoryIR inObject,
                                    GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                    GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                    GALGAS_operandIR & outArgument_outResultingValue,
                                    C_Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outResultingValue.drop () ; // Release 'out' argument
  const GALGAS_objectInMemoryIR temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_objectInMemoryIR::kNotBuilt:
    break ;
  case GALGAS_objectInMemoryIR::kEnum_register:
    {
      const cEnumAssociatedValues_objectInMemoryIR_register * extractPtr_717 = (const cEnumAssociatedValues_objectInMemoryIR_register *) (temp_0.unsafePointer ()) ;
      const GALGAS_unifiedTypeMap_2D_proxy extractedValue_type = extractPtr_717->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_name = extractPtr_717->mAssociatedValue1 ;
      const GALGAS_bigint extractedValue_address = extractPtr_717->mAssociatedValue2 ;
      {
      routine_getNewTempVariable (extractedValue_type, ioArgument_ioTemporaries, outArgument_outResultingValue, inCompiler  COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 10)) ;
      }
      {
      categoryModifier_appendComment (ioArgument_ioInstructionGenerationList, categoryReader_string (outArgument_outResultingValue.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 11)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 11)).add_operation (extractedValue_name.reader_string (SOURCE_FILE ("intermediate-load-store.galgas", 11)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 11)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 11)) ;
      }
      {
      categoryModifier_appendLoadVolatileRegister (ioArgument_ioInstructionGenerationList, outArgument_outResultingValue, extractedValue_name.mAttribute_string, extractedValue_address, inCompiler COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 12)) ;
      }
    }
    break ;
  case GALGAS_objectInMemoryIR::kEnum_globalVariable:
    {
      const cEnumAssociatedValues_objectInMemoryIR_globalVariable * extractPtr_1096 = (const cEnumAssociatedValues_objectInMemoryIR_globalVariable *) (temp_0.unsafePointer ()) ;
      const GALGAS_unifiedTypeMap_2D_proxy extractedValue_type = extractPtr_1096->mAssociatedValue0 ;
      const GALGAS_string extractedValue_name = extractPtr_1096->mAssociatedValue1 ;
      const GALGAS_bool extractedValue_isVolatile = extractPtr_1096->mAssociatedValue2 ;
      {
      routine_getNewTempVariable (extractedValue_type, ioArgument_ioTemporaries, outArgument_outResultingValue, inCompiler  COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 18)) ;
      }
      {
      categoryModifier_appendComment (ioArgument_ioInstructionGenerationList, categoryReader_string (outArgument_outResultingValue.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 19)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 19)).add_operation (extractedValue_name, inCompiler COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 19)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 19)) ;
      }
      {
      categoryModifier_appendLoadGlobalVariable (ioArgument_ioInstructionGenerationList, outArgument_outResultingValue, extractedValue_name, extractedValue_isVolatile, inCompiler COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 20)) ;
      }
    }
    break ;
  case GALGAS_objectInMemoryIR::kEnum_localValue:
    {
      const cEnumAssociatedValues_objectInMemoryIR_localValue * extractPtr_1434 = (const cEnumAssociatedValues_objectInMemoryIR_localValue *) (temp_0.unsafePointer ()) ;
      const GALGAS_unifiedTypeMap_2D_proxy extractedValue_type = extractPtr_1434->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_name = extractPtr_1434->mAssociatedValue1 ;
      {
      routine_getNewTempVariable (extractedValue_type, ioArgument_ioTemporaries, outArgument_outResultingValue, inCompiler  COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 26)) ;
      }
      {
      categoryModifier_appendComment (ioArgument_ioInstructionGenerationList, categoryReader_string (outArgument_outResultingValue.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 27)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 27)).add_operation (extractedValue_name.reader_string (SOURCE_FILE ("intermediate-load-store.galgas", 27)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 27)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 27)) ;
      }
      {
      categoryModifier_appendLoadLocalVariable (ioArgument_ioInstructionGenerationList, outArgument_outResultingValue, extractedValue_name.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 28)) ;
      }
    }
    break ;
  case GALGAS_objectInMemoryIR::kEnum_globalConstant:
    {
      const cEnumAssociatedValues_objectInMemoryIR_globalConstant * extractPtr_1791 = (const cEnumAssociatedValues_objectInMemoryIR_globalConstant *) (temp_0.unsafePointer ()) ;
      const GALGAS_unifiedTypeMap_2D_proxy extractedValue_type = extractPtr_1791->mAssociatedValue0 ;
      const GALGAS_string extractedValue_name = extractPtr_1791->mAssociatedValue1 ;
      {
      routine_getNewTempVariable (extractedValue_type, ioArgument_ioTemporaries, outArgument_outResultingValue, inCompiler  COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 33)) ;
      }
      {
      categoryModifier_appendComment (ioArgument_ioInstructionGenerationList, categoryReader_string (outArgument_outResultingValue.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 34)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 34)).add_operation (extractedValue_name, inCompiler COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 34)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 34)) ;
      }
      {
      categoryModifier_appendLoadGlobalVariable (ioArgument_ioInstructionGenerationList, outArgument_outResultingValue, extractedValue_name, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 35)) ;
      }
    }
    break ;
  case GALGAS_objectInMemoryIR::kEnum_localAccess:
    {
      const cEnumAssociatedValues_objectInMemoryIR_localAccess * extractPtr_1911 = (const cEnumAssociatedValues_objectInMemoryIR_localAccess *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_access = extractPtr_1911->mAssociatedValue0 ;
      GALGAS_location location_1 (extractedValue_access.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_1, GALGAS_string ("@objectInMemoryIR loadFromMemory:access")  COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 41)) ;
      outArgument_outResultingValue.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_objectInMemoryIR::kEnum_literalStructure:
    {
      inCompiler->emitSemanticError (GALGAS_location::constructor_nowhere (SOURCE_FILE ("intermediate-load-store.galgas", 43)), GALGAS_string ("@objectInMemoryIR loadFromMemory:literalStructure")  COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 43)) ;
      outArgument_outResultingValue.drop () ; // Release error dropped variable
    }
    break ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Category method '@objectInMemoryIR storeInMemory'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_storeInMemory (const GALGAS_objectInMemoryIR inObject,
                                   GALGAS_operandIR inArgument_inValue,
                                   GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                   C_Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_objectInMemoryIR temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_objectInMemoryIR::kNotBuilt:
    break ;
  case GALGAS_objectInMemoryIR::kEnum_register:
    {
      const cEnumAssociatedValues_objectInMemoryIR_register * extractPtr_2511 = (const cEnumAssociatedValues_objectInMemoryIR_register *) (temp_0.unsafePointer ()) ;
      const GALGAS_unifiedTypeMap_2D_proxy extractedValue_type = extractPtr_2511->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_registerName = extractPtr_2511->mAssociatedValue1 ;
      const GALGAS_bigint extractedValue_address = extractPtr_2511->mAssociatedValue2 ;
      {
      categoryModifier_appendStoreVolatileRegister (ioArgument_ioInstructionGenerationList, extractedValue_registerName.mAttribute_string, extractedValue_type, extractedValue_address, inArgument_inValue, inCompiler COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 55)) ;
      }
    }
    break ;
  case GALGAS_objectInMemoryIR::kEnum_globalVariable:
    {
      const cEnumAssociatedValues_objectInMemoryIR_globalVariable * extractPtr_2698 = (const cEnumAssociatedValues_objectInMemoryIR_globalVariable *) (temp_0.unsafePointer ()) ;
      const GALGAS_unifiedTypeMap_2D_proxy extractedValue_type = extractPtr_2698->mAssociatedValue0 ;
      const GALGAS_string extractedValue_name = extractPtr_2698->mAssociatedValue1 ;
      const GALGAS_bool extractedValue_isVolatile = extractPtr_2698->mAssociatedValue2 ;
      {
      categoryModifier_appendStoreGlobalVariable (ioArgument_ioInstructionGenerationList, extractedValue_name, extractedValue_type, inArgument_inValue, extractedValue_isVolatile, inCompiler COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 57)) ;
      }
    }
    break ;
  case GALGAS_objectInMemoryIR::kEnum_localValue:
    {
      const cEnumAssociatedValues_objectInMemoryIR_localValue * extractPtr_2857 = (const cEnumAssociatedValues_objectInMemoryIR_localValue *) (temp_0.unsafePointer ()) ;
      const GALGAS_unifiedTypeMap_2D_proxy extractedValue_type = extractPtr_2857->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_name = extractPtr_2857->mAssociatedValue1 ;
      {
      categoryModifier_appendStoreLocalVariable (ioArgument_ioInstructionGenerationList, extractedValue_name.mAttribute_string, extractedValue_type, inArgument_inValue, inCompiler COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 59)) ;
      }
    }
    break ;
  case GALGAS_objectInMemoryIR::kEnum_globalConstant:
    {
      inCompiler->emitSemanticError (GALGAS_location::constructor_nowhere (SOURCE_FILE ("intermediate-load-store.galgas", 61)), GALGAS_string ("<<@objectInMemoryIR storeInMemory globalConstant>>")  COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 61)) ;
    }
    break ;
  case GALGAS_objectInMemoryIR::kEnum_localAccess:
    {
      const cEnumAssociatedValues_objectInMemoryIR_localAccess * extractPtr_3080 = (const cEnumAssociatedValues_objectInMemoryIR_localAccess *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_access = extractPtr_3080->mAssociatedValue0 ;
      inCompiler->emitSemanticError (GALGAS_location::constructor_nowhere (SOURCE_FILE ("intermediate-load-store.galgas", 63)), GALGAS_string ("<<@objectInMemoryIR storeInMemory localAccess>>")  COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 63)) ;
    }
    break ;
  case GALGAS_objectInMemoryIR::kEnum_literalStructure:
    {
      const cEnumAssociatedValues_objectInMemoryIR_literalStructure * extractPtr_3220 = (const cEnumAssociatedValues_objectInMemoryIR_literalStructure *) (temp_0.unsafePointer ()) ;
      const GALGAS_literalStructureList extractedValue_value = extractPtr_3220->mAssociatedValue0 ;
      inCompiler->emitSemanticError (GALGAS_location::constructor_nowhere (SOURCE_FILE ("intermediate-load-store.galgas", 65)), GALGAS_string ("<<@objectInMemoryIR storeInMemory literalStructure>>")  COMMA_SOURCE_FILE ("intermediate-load-store.galgas", 65)) ;
    }
    break ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Category method '@objectInMemoryIR enterAccessibleEntities'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_enterAccessibleEntities (const GALGAS_objectInMemoryIR inObject,
                                             GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_objectInMemoryIR temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_objectInMemoryIR::kNotBuilt:
    break ;
  case GALGAS_objectInMemoryIR::kEnum_register:
    {
      const cEnumAssociatedValues_objectInMemoryIR_register * extractPtr_1603 = (const cEnumAssociatedValues_objectInMemoryIR_register *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_name = extractPtr_1603->mAssociatedValue1 ;
      ioArgument_ioAccessibleEntities.mAttribute_mAccessibleRegisterSet.addAssign_operation (extractedValue_name.mAttribute_string  COMMA_SOURCE_FILE ("code-optimisation.galgas", 33)) ;
    }
    break ;
  case GALGAS_objectInMemoryIR::kEnum_globalVariable:
    {
      const cEnumAssociatedValues_objectInMemoryIR_globalVariable * extractPtr_1699 = (const cEnumAssociatedValues_objectInMemoryIR_globalVariable *) (temp_0.unsafePointer ()) ;
      const GALGAS_string extractedValue_name = extractPtr_1699->mAssociatedValue1 ;
      ioArgument_ioAccessibleEntities.mAttribute_mGlobalVariableSet.addAssign_operation (extractedValue_name  COMMA_SOURCE_FILE ("code-optimisation.galgas", 35)) ;
    }
    break ;
  case GALGAS_objectInMemoryIR::kEnum_localValue:
    {
      const cEnumAssociatedValues_objectInMemoryIR_localValue * extractPtr_1744 = (const cEnumAssociatedValues_objectInMemoryIR_localValue *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_name = extractPtr_1744->mAssociatedValue1 ;
    }
    break ;
  case GALGAS_objectInMemoryIR::kEnum_globalConstant:
    {
      const cEnumAssociatedValues_objectInMemoryIR_globalConstant * extractPtr_1838 = (const cEnumAssociatedValues_objectInMemoryIR_globalConstant *) (temp_0.unsafePointer ()) ;
      const GALGAS_string extractedValue_name = extractPtr_1838->mAssociatedValue1 ;
      ioArgument_ioAccessibleEntities.mAttribute_mGlobalVariableSet.addAssign_operation (extractedValue_name  COMMA_SOURCE_FILE ("code-optimisation.galgas", 38)) ;
    }
    break ;
  case GALGAS_objectInMemoryIR::kEnum_localAccess:
    {
      const cEnumAssociatedValues_objectInMemoryIR_localAccess * extractPtr_1884 = (const cEnumAssociatedValues_objectInMemoryIR_localAccess *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_access = extractPtr_1884->mAssociatedValue0 ;
    }
    break ;
  case GALGAS_objectInMemoryIR::kEnum_literalStructure:
    {
      const cEnumAssociatedValues_objectInMemoryIR_literalStructure * extractPtr_1991 = (const cEnumAssociatedValues_objectInMemoryIR_literalStructure *) (temp_0.unsafePointer ()) ;
      const GALGAS_literalStructureList extractedValue_s = extractPtr_1991->mAssociatedValue0 ;
      categoryMethod_enterAccessibleEntities (extractedValue_s, ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 41)) ;
    }
    break ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Category method '@procedureMapIR-element enterAccessibleEntities'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_enterAccessibleEntities (const GALGAS_procedureMapIR_2D_element inObject,
                                             GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  categoryMethod_enterAccessibleEntities (inObject.mAttribute_mInstructionGenerationList, ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 60)) ;
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
  categoryMethod_enterAccessibleEntities (inObject.mAttribute_mInstructionGenerationList, ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 66)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Category Reader '@objectInMemoryIR mangledName'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string categoryReader_mangledName (const GALGAS_objectInMemoryIR & inObject,
                                          C_Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_objectInMemoryIR temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_objectInMemoryIR::kNotBuilt:
    break ;
  case GALGAS_objectInMemoryIR::kEnum_register:
    {
      const cEnumAssociatedValues_objectInMemoryIR_register * extractPtr_1366 = (const cEnumAssociatedValues_objectInMemoryIR_register *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_name = extractPtr_1366->mAssociatedValue1 ;
      result_outResult = function_mangledNameForRegister (extractedValue_name.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 30)) ;
    }
    break ;
  case GALGAS_objectInMemoryIR::kEnum_globalVariable:
    {
      const cEnumAssociatedValues_objectInMemoryIR_globalVariable * extractPtr_1462 = (const cEnumAssociatedValues_objectInMemoryIR_globalVariable *) (temp_0.unsafePointer ()) ;
      const GALGAS_string extractedValue_name = extractPtr_1462->mAssociatedValue1 ;
      result_outResult = function_mangledNameForGlobalVariable (extractedValue_name, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 32)) ;
    }
    break ;
  case GALGAS_objectInMemoryIR::kEnum_localValue:
    {
      const cEnumAssociatedValues_objectInMemoryIR_localValue * extractPtr_1559 = (const cEnumAssociatedValues_objectInMemoryIR_localValue *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_name = extractPtr_1559->mAssociatedValue1 ;
      result_outResult = function_mangledNameForLocalVariable (extractedValue_name.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 34)) ;
    }
    break ;
  case GALGAS_objectInMemoryIR::kEnum_globalConstant:
    {
      const cEnumAssociatedValues_objectInMemoryIR_globalConstant * extractPtr_1653 = (const cEnumAssociatedValues_objectInMemoryIR_globalConstant *) (temp_0.unsafePointer ()) ;
      const GALGAS_string extractedValue_name = extractPtr_1653->mAssociatedValue1 ;
      result_outResult = function_mangledNameForGlobalVariable (extractedValue_name, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 36)) ;
    }
    break ;
  case GALGAS_objectInMemoryIR::kEnum_localAccess:
    {
      const cEnumAssociatedValues_objectInMemoryIR_localAccess * extractPtr_1722 = (const cEnumAssociatedValues_objectInMemoryIR_localAccess *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_access = extractPtr_1722->mAssociatedValue0 ;
      result_outResult = extractedValue_access.mAttribute_string ;
    }
    break ;
  case GALGAS_objectInMemoryIR::kEnum_literalStructure:
    {
      const cEnumAssociatedValues_objectInMemoryIR_literalStructure * extractPtr_1807 = (const cEnumAssociatedValues_objectInMemoryIR_literalStructure *) (temp_0.unsafePointer ()) ;
      const GALGAS_literalStructureList extractedValue_s = extractPtr_1807->mAssociatedValue0 ;
      result_outResult = categoryReader_literalValue (extractedValue_s, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 40)) ;
    }
    break ;
  }
//---
  return result_outResult ;
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

GALGAS_lstring GALGAS_enumConstantMap_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_enumConstantMap_2D_element::reader_mIndex (UNUSED_LOCATION_ARGS) const {
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
mAttribute_mOptionalFieldType (),
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
mAttribute_mOptionalFieldType (inOperand1),
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
    result = mAttribute_mOptionalFieldType.objectCompare (inOperand.mAttribute_mOptionalFieldType) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInitExpression.objectCompare (inOperand.mAttribute_mInitExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_structureFieldListAST_2D_element::isValid (void) const {
  return mAttribute_mFieldName.isValid () && mAttribute_mOptionalFieldType.isValid () && mAttribute_mInitExpression.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_structureFieldListAST_2D_element::drop (void) {
  mAttribute_mFieldName.drop () ;
  mAttribute_mOptionalFieldType.drop () ;
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
    mAttribute_mOptionalFieldType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInitExpression.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_structureFieldListAST_2D_element::reader_mFieldName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFieldName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_structureFieldListAST_2D_element::reader_mOptionalFieldType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOptionalFieldType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST GALGAS_structureFieldListAST_2D_element::reader_mInitExpression (UNUSED_LOCATION_ARGS) const {
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
mAttribute_mTypeProxy (),
mAttribute_mPropertyName () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyList_2D_element::~ GALGAS_propertyList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyList_2D_element::GALGAS_propertyList_2D_element (const GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                const GALGAS_lstring & inOperand1) :
mAttribute_mTypeProxy (inOperand0),
mAttribute_mPropertyName (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyList_2D_element GALGAS_propertyList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_propertyList_2D_element (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                         GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyList_2D_element GALGAS_propertyList_2D_element::constructor_new (const GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                                const GALGAS_lstring & inOperand1 
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
    result = mAttribute_mTypeProxy.objectCompare (inOperand.mAttribute_mTypeProxy) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mPropertyName.objectCompare (inOperand.mAttribute_mPropertyName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_propertyList_2D_element::isValid (void) const {
  return mAttribute_mTypeProxy.isValid () && mAttribute_mPropertyName.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_propertyList_2D_element::drop (void) {
  mAttribute_mTypeProxy.drop () ;
  mAttribute_mPropertyName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_propertyList_2D_element::description (C_String & ioString,
                                                  const int32_t inIndentation) const {
  ioString << "<struct @propertyList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mTypeProxy.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mPropertyName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_propertyList_2D_element::reader_mTypeProxy (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTypeProxy ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_propertyList_2D_element::reader_mPropertyName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPropertyName ;
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
mAttribute_mTypeProxy () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyMap_2D_element::~ GALGAS_propertyMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyMap_2D_element::GALGAS_propertyMap_2D_element (const GALGAS_lstring & inOperand0,
                                                              const GALGAS_unifiedTypeMap_2D_proxy & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_mTypeProxy (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyMap_2D_element GALGAS_propertyMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_propertyMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                        GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyMap_2D_element GALGAS_propertyMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                              const GALGAS_unifiedTypeMap_2D_proxy & inOperand1 
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_propertyMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_propertyMap_2D_element (inOperand0, inOperand1) ;
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
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_propertyMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mTypeProxy.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_propertyMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mTypeProxy.drop () ;
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
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_propertyMap_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_propertyMap_2D_element::reader_mTypeProxy (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTypeProxy ;
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

GALGAS_literalStructureList_2D_element::GALGAS_literalStructureList_2D_element (void) :
mAttribute_mStructure () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literalStructureList_2D_element::~ GALGAS_literalStructureList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literalStructureList_2D_element::GALGAS_literalStructureList_2D_element (const GALGAS_literalStructure & inOperand0) :
mAttribute_mStructure (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literalStructureList_2D_element GALGAS_literalStructureList_2D_element::constructor_new (const GALGAS_literalStructure & inOperand0 
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_literalStructureList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_literalStructureList_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_literalStructureList_2D_element::objectCompare (const GALGAS_literalStructureList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mStructure.objectCompare (inOperand.mAttribute_mStructure) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_literalStructureList_2D_element::isValid (void) const {
  return mAttribute_mStructure.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_literalStructureList_2D_element::drop (void) {
  mAttribute_mStructure.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_literalStructureList_2D_element::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "<struct @literalStructureList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mStructure.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literalStructure GALGAS_literalStructureList_2D_element::reader_mStructure (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mStructure ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @literalStructureList-element type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_literalStructureList_2D_element ("literalStructureList-element",
                                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_literalStructureList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalStructureList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_literalStructureList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_literalStructureList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literalStructureList_2D_element GALGAS_literalStructureList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_literalStructureList_2D_element result ;
  const GALGAS_literalStructureList_2D_element * p = (const GALGAS_literalStructureList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_literalStructureList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalStructureList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instanciationMap_2D_element::GALGAS_instanciationMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mInstanciation () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instanciationMap_2D_element::~ GALGAS_instanciationMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instanciationMap_2D_element::GALGAS_instanciationMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                        const GALGAS_literalStructureList & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_mInstanciation (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instanciationMap_2D_element GALGAS_instanciationMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_instanciationMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                             GALGAS_literalStructureList::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instanciationMap_2D_element GALGAS_instanciationMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                        const GALGAS_literalStructureList & inOperand1 
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_instanciationMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_instanciationMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_instanciationMap_2D_element::objectCompare (const GALGAS_instanciationMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInstanciation.objectCompare (inOperand.mAttribute_mInstanciation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_instanciationMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mInstanciation.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_instanciationMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mInstanciation.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_instanciationMap_2D_element::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "<struct @instanciationMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInstanciation.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_instanciationMap_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literalStructureList GALGAS_instanciationMap_2D_element::reader_mInstanciation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstanciation ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @instanciationMap-element type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_instanciationMap_2D_element ("instanciationMap-element",
                                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_instanciationMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_instanciationMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_instanciationMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_instanciationMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instanciationMap_2D_element GALGAS_instanciationMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_instanciationMap_2D_element result ;
  const GALGAS_instanciationMap_2D_element * p = (const GALGAS_instanciationMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_instanciationMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("instanciationMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structureFieldListForGeneration_2D_element::GALGAS_structureFieldListForGeneration_2D_element (void) :
mAttribute_mFieldType (),
mAttribute_mFieldName () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structureFieldListForGeneration_2D_element::~ GALGAS_structureFieldListForGeneration_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structureFieldListForGeneration_2D_element::GALGAS_structureFieldListForGeneration_2D_element (const GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                                                      const GALGAS_string & inOperand1) :
mAttribute_mFieldType (inOperand0),
mAttribute_mFieldName (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structureFieldListForGeneration_2D_element GALGAS_structureFieldListForGeneration_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_structureFieldListForGeneration_2D_element (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                                            GALGAS_string::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structureFieldListForGeneration_2D_element GALGAS_structureFieldListForGeneration_2D_element::constructor_new (const GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                                                                      const GALGAS_string & inOperand1 
                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_structureFieldListForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_structureFieldListForGeneration_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_structureFieldListForGeneration_2D_element::objectCompare (const GALGAS_structureFieldListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mFieldType.objectCompare (inOperand.mAttribute_mFieldType) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFieldName.objectCompare (inOperand.mAttribute_mFieldName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_structureFieldListForGeneration_2D_element::isValid (void) const {
  return mAttribute_mFieldType.isValid () && mAttribute_mFieldName.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_structureFieldListForGeneration_2D_element::drop (void) {
  mAttribute_mFieldType.drop () ;
  mAttribute_mFieldName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_structureFieldListForGeneration_2D_element::description (C_String & ioString,
                                                                     const int32_t inIndentation) const {
  ioString << "<struct @structureFieldListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mFieldType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFieldName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_structureFieldListForGeneration_2D_element::reader_mFieldType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFieldType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_structureFieldListForGeneration_2D_element::reader_mFieldName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFieldName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @structureFieldListForGeneration-element type                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_structureFieldListForGeneration_2D_element ("structureFieldListForGeneration-element",
                                                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_structureFieldListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structureFieldListForGeneration_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_structureFieldListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_structureFieldListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structureFieldListForGeneration_2D_element GALGAS_structureFieldListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_structureFieldListForGeneration_2D_element result ;
  const GALGAS_structureFieldListForGeneration_2D_element * p = (const GALGAS_structureFieldListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_structureFieldListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("structureFieldListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedProcList_2D_element::GALGAS_allowedProcList_2D_element (void) :
mAttribute_mHasWriteAccess (),
mAttribute_mProcName (),
mAttribute_mProcFormalArgumentList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedProcList_2D_element::~ GALGAS_allowedProcList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedProcList_2D_element::GALGAS_allowedProcList_2D_element (const GALGAS_bool & inOperand0,
                                                                      const GALGAS_lstring & inOperand1,
                                                                      const GALGAS_procFormalArgumentList & inOperand2) :
mAttribute_mHasWriteAccess (inOperand0),
mAttribute_mProcName (inOperand1),
mAttribute_mProcFormalArgumentList (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedProcList_2D_element GALGAS_allowedProcList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_allowedProcList_2D_element (GALGAS_bool::constructor_default (HERE),
                                            GALGAS_lstring::constructor_default (HERE),
                                            GALGAS_procFormalArgumentList::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedProcList_2D_element GALGAS_allowedProcList_2D_element::constructor_new (const GALGAS_bool & inOperand0,
                                                                                      const GALGAS_lstring & inOperand1,
                                                                                      const GALGAS_procFormalArgumentList & inOperand2 
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_allowedProcList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_allowedProcList_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_allowedProcList_2D_element::objectCompare (const GALGAS_allowedProcList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mHasWriteAccess.objectCompare (inOperand.mAttribute_mHasWriteAccess) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mProcName.objectCompare (inOperand.mAttribute_mProcName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mProcFormalArgumentList.objectCompare (inOperand.mAttribute_mProcFormalArgumentList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_allowedProcList_2D_element::isValid (void) const {
  return mAttribute_mHasWriteAccess.isValid () && mAttribute_mProcName.isValid () && mAttribute_mProcFormalArgumentList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allowedProcList_2D_element::drop (void) {
  mAttribute_mHasWriteAccess.drop () ;
  mAttribute_mProcName.drop () ;
  mAttribute_mProcFormalArgumentList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allowedProcList_2D_element::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "<struct @allowedProcList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mHasWriteAccess.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mProcName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mProcFormalArgumentList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_allowedProcList_2D_element::reader_mHasWriteAccess (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mHasWriteAccess ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_allowedProcList_2D_element::reader_mProcName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mProcName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentList GALGAS_allowedProcList_2D_element::reader_mProcFormalArgumentList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mProcFormalArgumentList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @allowedProcList-element type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_allowedProcList_2D_element ("allowedProcList-element",
                                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_allowedProcList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_allowedProcList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_allowedProcList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_allowedProcList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedProcList_2D_element GALGAS_allowedProcList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_allowedProcList_2D_element result ;
  const GALGAS_allowedProcList_2D_element * p = (const GALGAS_allowedProcList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_allowedProcList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("allowedProcList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

GALGAS_bool GALGAS_allowedInitList_2D_element::reader_mHasWriteAccess (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mHasWriteAccess ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbigint GALGAS_allowedInitList_2D_element::reader_mInitPriority (UNUSED_LOCATION_ARGS) const {
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

GALGAS_bool GALGAS_allowedExceptionList_2D_element::reader_mHasWriteAccess (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mHasWriteAccess ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_allowedExceptionList_2D_element::reader_mExceptionName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExceptionName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbigint GALGAS_allowedExceptionList_2D_element::reader_mExceptionPriority (UNUSED_LOCATION_ARGS) const {
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

GALGAS_lstring GALGAS_allowedRoutineMap_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_allowedRoutineMap_2D_element::reader_mHasWriteAccess (UNUSED_LOCATION_ARGS) const {
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

GALGAS_bootRoutinePriorityMap_2D_element::GALGAS_bootRoutinePriorityMap_2D_element (void) :
mAttribute_lkey () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootRoutinePriorityMap_2D_element::~ GALGAS_bootRoutinePriorityMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootRoutinePriorityMap_2D_element::GALGAS_bootRoutinePriorityMap_2D_element (const GALGAS_lstring & inOperand0) :
mAttribute_lkey (inOperand0) {
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
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_bootRoutinePriorityMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_bootRoutinePriorityMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_bootRoutinePriorityMap_2D_element::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "<struct @bootRoutinePriorityMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_bootRoutinePriorityMap_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
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
mAttribute_lkey () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initRoutineMap_2D_element::~ GALGAS_initRoutineMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initRoutineMap_2D_element::GALGAS_initRoutineMap_2D_element (const GALGAS_lstring & inOperand0) :
mAttribute_lkey (inOperand0) {
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
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_initRoutineMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_initRoutineMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_initRoutineMap_2D_element::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "<struct @initRoutineMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_initRoutineMap_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
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
mAttribute_lkey () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initRoutinePriorityMap_2D_element::~ GALGAS_initRoutinePriorityMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initRoutinePriorityMap_2D_element::GALGAS_initRoutinePriorityMap_2D_element (const GALGAS_lstring & inOperand0) :
mAttribute_lkey (inOperand0) {
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
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_initRoutinePriorityMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_initRoutinePriorityMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_initRoutinePriorityMap_2D_element::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "<struct @initRoutinePriorityMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_initRoutinePriorityMap_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
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

GALGAS_exceptionTypesAST_2D_element::GALGAS_exceptionTypesAST_2D_element (void) :
mAttribute_mExceptionCodeTypeName (),
mAttribute_mExceptionLineTypeName () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_exceptionTypesAST_2D_element::~ GALGAS_exceptionTypesAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_exceptionTypesAST_2D_element::GALGAS_exceptionTypesAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                          const GALGAS_lstring & inOperand1) :
mAttribute_mExceptionCodeTypeName (inOperand0),
mAttribute_mExceptionLineTypeName (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_exceptionTypesAST_2D_element GALGAS_exceptionTypesAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_exceptionTypesAST_2D_element (GALGAS_lstring::constructor_default (HERE),
                                              GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_exceptionTypesAST_2D_element GALGAS_exceptionTypesAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                          const GALGAS_lstring & inOperand1 
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_exceptionTypesAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_exceptionTypesAST_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_exceptionTypesAST_2D_element::objectCompare (const GALGAS_exceptionTypesAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mExceptionCodeTypeName.objectCompare (inOperand.mAttribute_mExceptionCodeTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mExceptionLineTypeName.objectCompare (inOperand.mAttribute_mExceptionLineTypeName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_exceptionTypesAST_2D_element::isValid (void) const {
  return mAttribute_mExceptionCodeTypeName.isValid () && mAttribute_mExceptionLineTypeName.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_exceptionTypesAST_2D_element::drop (void) {
  mAttribute_mExceptionCodeTypeName.drop () ;
  mAttribute_mExceptionLineTypeName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_exceptionTypesAST_2D_element::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "<struct @exceptionTypesAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mExceptionCodeTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mExceptionLineTypeName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_exceptionTypesAST_2D_element::reader_mExceptionCodeTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExceptionCodeTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_exceptionTypesAST_2D_element::reader_mExceptionLineTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExceptionLineTypeName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @exceptionTypesAST-element type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_exceptionTypesAST_2D_element ("exceptionTypesAST-element",
                                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_exceptionTypesAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_exceptionTypesAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_exceptionTypesAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_exceptionTypesAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_exceptionTypesAST_2D_element GALGAS_exceptionTypesAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_exceptionTypesAST_2D_element result ;
  const GALGAS_exceptionTypesAST_2D_element * p = (const GALGAS_exceptionTypesAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_exceptionTypesAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("exceptionTypesAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_exceptionRoutinePriorityMap_2D_element::GALGAS_exceptionRoutinePriorityMap_2D_element (void) :
mAttribute_lkey () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_exceptionRoutinePriorityMap_2D_element::~ GALGAS_exceptionRoutinePriorityMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_exceptionRoutinePriorityMap_2D_element::GALGAS_exceptionRoutinePriorityMap_2D_element (const GALGAS_lstring & inOperand0) :
mAttribute_lkey (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_exceptionRoutinePriorityMap_2D_element GALGAS_exceptionRoutinePriorityMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_exceptionRoutinePriorityMap_2D_element (GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_exceptionRoutinePriorityMap_2D_element GALGAS_exceptionRoutinePriorityMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0 
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_exceptionRoutinePriorityMap_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_exceptionRoutinePriorityMap_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_exceptionRoutinePriorityMap_2D_element::objectCompare (const GALGAS_exceptionRoutinePriorityMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_exceptionRoutinePriorityMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_exceptionRoutinePriorityMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_exceptionRoutinePriorityMap_2D_element::description (C_String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString << "<struct @exceptionRoutinePriorityMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_exceptionRoutinePriorityMap_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @exceptionRoutinePriorityMap-element type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_exceptionRoutinePriorityMap_2D_element ("exceptionRoutinePriorityMap-element",
                                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_exceptionRoutinePriorityMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_exceptionRoutinePriorityMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_exceptionRoutinePriorityMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_exceptionRoutinePriorityMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_exceptionRoutinePriorityMap_2D_element GALGAS_exceptionRoutinePriorityMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_exceptionRoutinePriorityMap_2D_element result ;
  const GALGAS_exceptionRoutinePriorityMap_2D_element * p = (const GALGAS_exceptionRoutinePriorityMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_exceptionRoutinePriorityMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("exceptionRoutinePriorityMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_funcFormalArgumentList_2D_element::GALGAS_funcFormalArgumentList_2D_element (void) :
mAttribute_mSelector (),
mAttribute_mFormalArgumentTypeName (),
mAttribute_mFormalArgumentName () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_funcFormalArgumentList_2D_element::~ GALGAS_funcFormalArgumentList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_funcFormalArgumentList_2D_element::GALGAS_funcFormalArgumentList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                    const GALGAS_lstring & inOperand1,
                                                                                    const GALGAS_lstring & inOperand2) :
mAttribute_mSelector (inOperand0),
mAttribute_mFormalArgumentTypeName (inOperand1),
mAttribute_mFormalArgumentName (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_funcFormalArgumentList_2D_element GALGAS_funcFormalArgumentList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_funcFormalArgumentList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                   GALGAS_lstring::constructor_default (HERE),
                                                   GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_funcFormalArgumentList_2D_element GALGAS_funcFormalArgumentList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                    const GALGAS_lstring & inOperand1,
                                                                                                    const GALGAS_lstring & inOperand2 
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_funcFormalArgumentList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_funcFormalArgumentList_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_funcFormalArgumentList_2D_element::objectCompare (const GALGAS_funcFormalArgumentList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mSelector.objectCompare (inOperand.mAttribute_mSelector) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFormalArgumentTypeName.objectCompare (inOperand.mAttribute_mFormalArgumentTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFormalArgumentName.objectCompare (inOperand.mAttribute_mFormalArgumentName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_funcFormalArgumentList_2D_element::isValid (void) const {
  return mAttribute_mSelector.isValid () && mAttribute_mFormalArgumentTypeName.isValid () && mAttribute_mFormalArgumentName.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_funcFormalArgumentList_2D_element::drop (void) {
  mAttribute_mSelector.drop () ;
  mAttribute_mFormalArgumentTypeName.drop () ;
  mAttribute_mFormalArgumentName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_funcFormalArgumentList_2D_element::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "<struct @funcFormalArgumentList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mSelector.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFormalArgumentTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFormalArgumentName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_funcFormalArgumentList_2D_element::reader_mSelector (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSelector ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_funcFormalArgumentList_2D_element::reader_mFormalArgumentTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormalArgumentTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_funcFormalArgumentList_2D_element::reader_mFormalArgumentName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormalArgumentName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @funcFormalArgumentList-element type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_funcFormalArgumentList_2D_element ("funcFormalArgumentList-element",
                                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_funcFormalArgumentList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_funcFormalArgumentList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_funcFormalArgumentList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_funcFormalArgumentList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_funcFormalArgumentList_2D_element GALGAS_funcFormalArgumentList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_funcFormalArgumentList_2D_element result ;
  const GALGAS_funcFormalArgumentList_2D_element * p = (const GALGAS_funcFormalArgumentList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_funcFormalArgumentList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("funcFormalArgumentList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_funcSignature_2D_element::GALGAS_funcSignature_2D_element (void) :
mAttribute_mFormalSelector (),
mAttribute_mArgumentType () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_funcSignature_2D_element::~ GALGAS_funcSignature_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_funcSignature_2D_element::GALGAS_funcSignature_2D_element (const GALGAS_lstring & inOperand0,
                                                                  const GALGAS_unifiedTypeMap_2D_proxy & inOperand1) :
mAttribute_mFormalSelector (inOperand0),
mAttribute_mArgumentType (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_funcSignature_2D_element GALGAS_funcSignature_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_funcSignature_2D_element (GALGAS_lstring::constructor_default (HERE),
                                          GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_funcSignature_2D_element GALGAS_funcSignature_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                  const GALGAS_unifiedTypeMap_2D_proxy & inOperand1 
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_funcSignature_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_funcSignature_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_funcSignature_2D_element::objectCompare (const GALGAS_funcSignature_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mFormalSelector.objectCompare (inOperand.mAttribute_mFormalSelector) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mArgumentType.objectCompare (inOperand.mAttribute_mArgumentType) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_funcSignature_2D_element::isValid (void) const {
  return mAttribute_mFormalSelector.isValid () && mAttribute_mArgumentType.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_funcSignature_2D_element::drop (void) {
  mAttribute_mFormalSelector.drop () ;
  mAttribute_mArgumentType.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_funcSignature_2D_element::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "<struct @funcSignature-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mFormalSelector.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mArgumentType.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_funcSignature_2D_element::reader_mFormalSelector (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormalSelector ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_funcSignature_2D_element::reader_mArgumentType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mArgumentType ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @funcSignature-element type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_funcSignature_2D_element ("funcSignature-element",
                                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_funcSignature_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_funcSignature_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_funcSignature_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_funcSignature_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_funcSignature_2D_element GALGAS_funcSignature_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_funcSignature_2D_element result ;
  const GALGAS_funcSignature_2D_element * p = (const GALGAS_funcSignature_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_funcSignature_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("funcSignature-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionMap_2D_element::GALGAS_functionMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mFunctionModeMap (),
mAttribute_mSignature (),
mAttribute_mResultType () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionMap_2D_element::~ GALGAS_functionMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionMap_2D_element::GALGAS_functionMap_2D_element (const GALGAS_lstring & inOperand0,
                                                              const GALGAS_modeMap & inOperand1,
                                                              const GALGAS_funcSignature & inOperand2,
                                                              const GALGAS_unifiedTypeMap_2D_proxy & inOperand3) :
mAttribute_lkey (inOperand0),
mAttribute_mFunctionModeMap (inOperand1),
mAttribute_mSignature (inOperand2),
mAttribute_mResultType (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionMap_2D_element GALGAS_functionMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_functionMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                        GALGAS_modeMap::constructor_emptyMap (HERE),
                                        GALGAS_funcSignature::constructor_emptyList (HERE),
                                        GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionMap_2D_element GALGAS_functionMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                              const GALGAS_modeMap & inOperand1,
                                                                              const GALGAS_funcSignature & inOperand2,
                                                                              const GALGAS_unifiedTypeMap_2D_proxy & inOperand3 
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_functionMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_functionMap_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_functionMap_2D_element::objectCompare (const GALGAS_functionMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFunctionModeMap.objectCompare (inOperand.mAttribute_mFunctionModeMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSignature.objectCompare (inOperand.mAttribute_mSignature) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mResultType.objectCompare (inOperand.mAttribute_mResultType) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_functionMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mFunctionModeMap.isValid () && mAttribute_mSignature.isValid () && mAttribute_mResultType.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_functionMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mFunctionModeMap.drop () ;
  mAttribute_mSignature.drop () ;
  mAttribute_mResultType.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_functionMap_2D_element::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "<struct @functionMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFunctionModeMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSignature.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mResultType.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_functionMap_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_modeMap GALGAS_functionMap_2D_element::reader_mFunctionModeMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFunctionModeMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_funcSignature GALGAS_functionMap_2D_element::reader_mSignature (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSignature ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_functionMap_2D_element::reader_mResultType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mResultType ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @functionMap-element type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_functionMap_2D_element ("functionMap-element",
                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_functionMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_functionMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_functionMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionMap_2D_element GALGAS_functionMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_functionMap_2D_element result ;
  const GALGAS_functionMap_2D_element * p = (const GALGAS_functionMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_functionMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("functionMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_funcFormalArgumentListForGeneration_2D_element::GALGAS_funcFormalArgumentListForGeneration_2D_element (void) :
mAttribute_mFormalArgumentType (),
mAttribute_mFormalArgumentName () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_funcFormalArgumentListForGeneration_2D_element::~ GALGAS_funcFormalArgumentListForGeneration_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_funcFormalArgumentListForGeneration_2D_element::GALGAS_funcFormalArgumentListForGeneration_2D_element (const GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                                                              const GALGAS_string & inOperand1) :
mAttribute_mFormalArgumentType (inOperand0),
mAttribute_mFormalArgumentName (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_funcFormalArgumentListForGeneration_2D_element GALGAS_funcFormalArgumentListForGeneration_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_funcFormalArgumentListForGeneration_2D_element (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                                                GALGAS_string::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_funcFormalArgumentListForGeneration_2D_element GALGAS_funcFormalArgumentListForGeneration_2D_element::constructor_new (const GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                                                                              const GALGAS_string & inOperand1 
                                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_funcFormalArgumentListForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_funcFormalArgumentListForGeneration_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_funcFormalArgumentListForGeneration_2D_element::objectCompare (const GALGAS_funcFormalArgumentListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mFormalArgumentType.objectCompare (inOperand.mAttribute_mFormalArgumentType) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFormalArgumentName.objectCompare (inOperand.mAttribute_mFormalArgumentName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_funcFormalArgumentListForGeneration_2D_element::isValid (void) const {
  return mAttribute_mFormalArgumentType.isValid () && mAttribute_mFormalArgumentName.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_funcFormalArgumentListForGeneration_2D_element::drop (void) {
  mAttribute_mFormalArgumentType.drop () ;
  mAttribute_mFormalArgumentName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_funcFormalArgumentListForGeneration_2D_element::description (C_String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString << "<struct @funcFormalArgumentListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mFormalArgumentType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFormalArgumentName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_funcFormalArgumentListForGeneration_2D_element::reader_mFormalArgumentType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormalArgumentType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_funcFormalArgumentListForGeneration_2D_element::reader_mFormalArgumentName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormalArgumentName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  @funcFormalArgumentListForGeneration-element type                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_funcFormalArgumentListForGeneration_2D_element ("funcFormalArgumentListForGeneration-element",
                                                                       NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_funcFormalArgumentListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_funcFormalArgumentListForGeneration_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_funcFormalArgumentListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_funcFormalArgumentListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_funcFormalArgumentListForGeneration_2D_element GALGAS_funcFormalArgumentListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                            C_Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_funcFormalArgumentListForGeneration_2D_element result ;
  const GALGAS_funcFormalArgumentListForGeneration_2D_element * p = (const GALGAS_funcFormalArgumentListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_funcFormalArgumentListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("funcFormalArgumentListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentList_2D_element::GALGAS_procFormalArgumentList_2D_element (void) :
mAttribute_mFormalArgumentPassingMode (),
mAttribute_mSelector (),
mAttribute_mFormalArgumentTypeName (),
mAttribute_mFormalArgumentName () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentList_2D_element::~ GALGAS_procFormalArgumentList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentList_2D_element::GALGAS_procFormalArgumentList_2D_element (const GALGAS_procFormalArgumentPassingMode & inOperand0,
                                                                                    const GALGAS_lstring & inOperand1,
                                                                                    const GALGAS_lstring & inOperand2,
                                                                                    const GALGAS_lstring & inOperand3) :
mAttribute_mFormalArgumentPassingMode (inOperand0),
mAttribute_mSelector (inOperand1),
mAttribute_mFormalArgumentTypeName (inOperand2),
mAttribute_mFormalArgumentName (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentList_2D_element GALGAS_procFormalArgumentList_2D_element::constructor_new (const GALGAS_procFormalArgumentPassingMode & inOperand0,
                                                                                                    const GALGAS_lstring & inOperand1,
                                                                                                    const GALGAS_lstring & inOperand2,
                                                                                                    const GALGAS_lstring & inOperand3 
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_procFormalArgumentList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_procFormalArgumentList_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_procFormalArgumentList_2D_element::objectCompare (const GALGAS_procFormalArgumentList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mFormalArgumentPassingMode.objectCompare (inOperand.mAttribute_mFormalArgumentPassingMode) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSelector.objectCompare (inOperand.mAttribute_mSelector) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFormalArgumentTypeName.objectCompare (inOperand.mAttribute_mFormalArgumentTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFormalArgumentName.objectCompare (inOperand.mAttribute_mFormalArgumentName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_procFormalArgumentList_2D_element::isValid (void) const {
  return mAttribute_mFormalArgumentPassingMode.isValid () && mAttribute_mSelector.isValid () && mAttribute_mFormalArgumentTypeName.isValid () && mAttribute_mFormalArgumentName.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procFormalArgumentList_2D_element::drop (void) {
  mAttribute_mFormalArgumentPassingMode.drop () ;
  mAttribute_mSelector.drop () ;
  mAttribute_mFormalArgumentTypeName.drop () ;
  mAttribute_mFormalArgumentName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procFormalArgumentList_2D_element::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "<struct @procFormalArgumentList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mFormalArgumentPassingMode.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSelector.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFormalArgumentTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFormalArgumentName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentPassingMode GALGAS_procFormalArgumentList_2D_element::reader_mFormalArgumentPassingMode (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormalArgumentPassingMode ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_procFormalArgumentList_2D_element::reader_mSelector (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSelector ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_procFormalArgumentList_2D_element::reader_mFormalArgumentTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormalArgumentTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_procFormalArgumentList_2D_element::reader_mFormalArgumentName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormalArgumentName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @procFormalArgumentList-element type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_procFormalArgumentList_2D_element ("procFormalArgumentList-element",
                                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_procFormalArgumentList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procFormalArgumentList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_procFormalArgumentList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_procFormalArgumentList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentList_2D_element GALGAS_procFormalArgumentList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_procFormalArgumentList_2D_element result ;
  const GALGAS_procFormalArgumentList_2D_element * p = (const GALGAS_procFormalArgumentList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_procFormalArgumentList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("procFormalArgumentList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_labelMap_2D_element::GALGAS_labelMap_2D_element (void) :
mAttribute_lkey () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_labelMap_2D_element::~ GALGAS_labelMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_labelMap_2D_element::GALGAS_labelMap_2D_element (const GALGAS_lstring & inOperand0) :
mAttribute_lkey (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_labelMap_2D_element GALGAS_labelMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_labelMap_2D_element (GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_labelMap_2D_element GALGAS_labelMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0 
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_labelMap_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_labelMap_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_labelMap_2D_element::objectCompare (const GALGAS_labelMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_labelMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_labelMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_labelMap_2D_element::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "<struct @labelMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_labelMap_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @labelMap-element type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_labelMap_2D_element ("labelMap-element",
                                            NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_labelMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_labelMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_labelMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_labelMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_labelMap_2D_element GALGAS_labelMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_labelMap_2D_element result ;
  const GALGAS_labelMap_2D_element * p = (const GALGAS_labelMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_labelMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("labelMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procedureMap_2D_element::GALGAS_procedureMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mMutating (),
mAttribute_mProcedureModeMap (),
mAttribute_mSignature (),
mAttribute_mWeakProcedure () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procedureMap_2D_element::~ GALGAS_procedureMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procedureMap_2D_element::GALGAS_procedureMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                const GALGAS_bool & inOperand1,
                                                                const GALGAS_modeMap & inOperand2,
                                                                const GALGAS_procedureSignature & inOperand3,
                                                                const GALGAS_bool & inOperand4) :
mAttribute_lkey (inOperand0),
mAttribute_mMutating (inOperand1),
mAttribute_mProcedureModeMap (inOperand2),
mAttribute_mSignature (inOperand3),
mAttribute_mWeakProcedure (inOperand4) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procedureMap_2D_element GALGAS_procedureMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_procedureMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                         GALGAS_bool::constructor_default (HERE),
                                         GALGAS_modeMap::constructor_emptyMap (HERE),
                                         GALGAS_procedureSignature::constructor_emptyList (HERE),
                                         GALGAS_bool::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procedureMap_2D_element GALGAS_procedureMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                const GALGAS_bool & inOperand1,
                                                                                const GALGAS_modeMap & inOperand2,
                                                                                const GALGAS_procedureSignature & inOperand3,
                                                                                const GALGAS_bool & inOperand4 
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_procedureMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_procedureMap_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_procedureMap_2D_element::objectCompare (const GALGAS_procedureMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mMutating.objectCompare (inOperand.mAttribute_mMutating) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mProcedureModeMap.objectCompare (inOperand.mAttribute_mProcedureModeMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSignature.objectCompare (inOperand.mAttribute_mSignature) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mWeakProcedure.objectCompare (inOperand.mAttribute_mWeakProcedure) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_procedureMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mMutating.isValid () && mAttribute_mProcedureModeMap.isValid () && mAttribute_mSignature.isValid () && mAttribute_mWeakProcedure.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procedureMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mMutating.drop () ;
  mAttribute_mProcedureModeMap.drop () ;
  mAttribute_mSignature.drop () ;
  mAttribute_mWeakProcedure.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procedureMap_2D_element::description (C_String & ioString,
                                                  const int32_t inIndentation) const {
  ioString << "<struct @procedureMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mMutating.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mProcedureModeMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSignature.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mWeakProcedure.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_procedureMap_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_procedureMap_2D_element::reader_mMutating (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mMutating ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_modeMap GALGAS_procedureMap_2D_element::reader_mProcedureModeMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mProcedureModeMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procedureSignature GALGAS_procedureMap_2D_element::reader_mSignature (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSignature ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_procedureMap_2D_element::reader_mWeakProcedure (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mWeakProcedure ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @procedureMap-element type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_procedureMap_2D_element ("procedureMap-element",
                                                NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_procedureMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procedureMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_procedureMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_procedureMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procedureMap_2D_element GALGAS_procedureMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_procedureMap_2D_element result ;
  const GALGAS_procedureMap_2D_element * p = (const GALGAS_procedureMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_procedureMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("procedureMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentListForGeneration_2D_element::GALGAS_procFormalArgumentListForGeneration_2D_element (void) :
mAttribute_mFormalArgumentKind (),
mAttribute_mFormalArgumentType (),
mAttribute_mFormalArgumentName () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentListForGeneration_2D_element::~ GALGAS_procFormalArgumentListForGeneration_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentListForGeneration_2D_element::GALGAS_procFormalArgumentListForGeneration_2D_element (const GALGAS_procFormalArgumentPassingMode & inOperand0,
                                                                                                              const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                                                              const GALGAS_string & inOperand2) :
mAttribute_mFormalArgumentKind (inOperand0),
mAttribute_mFormalArgumentType (inOperand1),
mAttribute_mFormalArgumentName (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentListForGeneration_2D_element GALGAS_procFormalArgumentListForGeneration_2D_element::constructor_new (const GALGAS_procFormalArgumentPassingMode & inOperand0,
                                                                                                                              const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                                                                              const GALGAS_string & inOperand2 
                                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_procFormalArgumentListForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_procFormalArgumentListForGeneration_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_procFormalArgumentListForGeneration_2D_element::objectCompare (const GALGAS_procFormalArgumentListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mFormalArgumentKind.objectCompare (inOperand.mAttribute_mFormalArgumentKind) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFormalArgumentType.objectCompare (inOperand.mAttribute_mFormalArgumentType) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFormalArgumentName.objectCompare (inOperand.mAttribute_mFormalArgumentName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_procFormalArgumentListForGeneration_2D_element::isValid (void) const {
  return mAttribute_mFormalArgumentKind.isValid () && mAttribute_mFormalArgumentType.isValid () && mAttribute_mFormalArgumentName.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procFormalArgumentListForGeneration_2D_element::drop (void) {
  mAttribute_mFormalArgumentKind.drop () ;
  mAttribute_mFormalArgumentType.drop () ;
  mAttribute_mFormalArgumentName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procFormalArgumentListForGeneration_2D_element::description (C_String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString << "<struct @procFormalArgumentListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mFormalArgumentKind.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFormalArgumentType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFormalArgumentName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentPassingMode GALGAS_procFormalArgumentListForGeneration_2D_element::reader_mFormalArgumentKind (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormalArgumentKind ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_procFormalArgumentListForGeneration_2D_element::reader_mFormalArgumentType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormalArgumentType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_procFormalArgumentListForGeneration_2D_element::reader_mFormalArgumentName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormalArgumentName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  @procFormalArgumentListForGeneration-element type                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_procFormalArgumentListForGeneration_2D_element ("procFormalArgumentListForGeneration-element",
                                                                       NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_procFormalArgumentListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procFormalArgumentListForGeneration_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_procFormalArgumentListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_procFormalArgumentListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentListForGeneration_2D_element GALGAS_procFormalArgumentListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                            C_Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_procFormalArgumentListForGeneration_2D_element result ;
  const GALGAS_procFormalArgumentListForGeneration_2D_element * p = (const GALGAS_procFormalArgumentListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_procFormalArgumentListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("procFormalArgumentListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procedureSignature_2D_element::GALGAS_procedureSignature_2D_element (void) :
mAttribute_mFormalArgumentPassingMode (),
mAttribute_mSelector (),
mAttribute_mType () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procedureSignature_2D_element::~ GALGAS_procedureSignature_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procedureSignature_2D_element::GALGAS_procedureSignature_2D_element (const GALGAS_procFormalArgumentPassingMode & inOperand0,
                                                                            const GALGAS_lstring & inOperand1,
                                                                            const GALGAS_unifiedTypeMap_2D_proxy & inOperand2) :
mAttribute_mFormalArgumentPassingMode (inOperand0),
mAttribute_mSelector (inOperand1),
mAttribute_mType (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procedureSignature_2D_element GALGAS_procedureSignature_2D_element::constructor_new (const GALGAS_procFormalArgumentPassingMode & inOperand0,
                                                                                            const GALGAS_lstring & inOperand1,
                                                                                            const GALGAS_unifiedTypeMap_2D_proxy & inOperand2 
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_procedureSignature_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_procedureSignature_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_procedureSignature_2D_element::objectCompare (const GALGAS_procedureSignature_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mFormalArgumentPassingMode.objectCompare (inOperand.mAttribute_mFormalArgumentPassingMode) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSelector.objectCompare (inOperand.mAttribute_mSelector) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mType.objectCompare (inOperand.mAttribute_mType) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_procedureSignature_2D_element::isValid (void) const {
  return mAttribute_mFormalArgumentPassingMode.isValid () && mAttribute_mSelector.isValid () && mAttribute_mType.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procedureSignature_2D_element::drop (void) {
  mAttribute_mFormalArgumentPassingMode.drop () ;
  mAttribute_mSelector.drop () ;
  mAttribute_mType.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procedureSignature_2D_element::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "<struct @procedureSignature-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mFormalArgumentPassingMode.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSelector.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mType.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentPassingMode GALGAS_procedureSignature_2D_element::reader_mFormalArgumentPassingMode (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormalArgumentPassingMode ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_procedureSignature_2D_element::reader_mSelector (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSelector ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_procedureSignature_2D_element::reader_mType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mType ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @procedureSignature-element type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_procedureSignature_2D_element ("procedureSignature-element",
                                                      NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_procedureSignature_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procedureSignature_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_procedureSignature_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_procedureSignature_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procedureSignature_2D_element GALGAS_procedureSignature_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_procedureSignature_2D_element result ;
  const GALGAS_procedureSignature_2D_element * p = (const GALGAS_procedureSignature_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_procedureSignature_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("procedureSignature-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_requiredProcedureDeclarationListAST_2D_element::GALGAS_requiredProcedureDeclarationListAST_2D_element (void) :
mAttribute_mRequiredProcedureName (),
mAttribute_mProcedureModeList (),
mAttribute_mProcFormalArgumentList (),
mAttribute_mEndOfProcLocation () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_requiredProcedureDeclarationListAST_2D_element::~ GALGAS_requiredProcedureDeclarationListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_requiredProcedureDeclarationListAST_2D_element::GALGAS_requiredProcedureDeclarationListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                              const GALGAS_lstringlist & inOperand1,
                                                                                                              const GALGAS_procFormalArgumentList & inOperand2,
                                                                                                              const GALGAS_location & inOperand3) :
mAttribute_mRequiredProcedureName (inOperand0),
mAttribute_mProcedureModeList (inOperand1),
mAttribute_mProcFormalArgumentList (inOperand2),
mAttribute_mEndOfProcLocation (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_requiredProcedureDeclarationListAST_2D_element GALGAS_requiredProcedureDeclarationListAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_requiredProcedureDeclarationListAST_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                                GALGAS_lstringlist::constructor_emptyList (HERE),
                                                                GALGAS_procFormalArgumentList::constructor_emptyList (HERE),
                                                                GALGAS_location::constructor_nowhere (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_requiredProcedureDeclarationListAST_2D_element GALGAS_requiredProcedureDeclarationListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                              const GALGAS_lstringlist & inOperand1,
                                                                                                                              const GALGAS_procFormalArgumentList & inOperand2,
                                                                                                                              const GALGAS_location & inOperand3 
                                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_requiredProcedureDeclarationListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_requiredProcedureDeclarationListAST_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_requiredProcedureDeclarationListAST_2D_element::objectCompare (const GALGAS_requiredProcedureDeclarationListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mRequiredProcedureName.objectCompare (inOperand.mAttribute_mRequiredProcedureName) ;
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

bool GALGAS_requiredProcedureDeclarationListAST_2D_element::isValid (void) const {
  return mAttribute_mRequiredProcedureName.isValid () && mAttribute_mProcedureModeList.isValid () && mAttribute_mProcFormalArgumentList.isValid () && mAttribute_mEndOfProcLocation.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_requiredProcedureDeclarationListAST_2D_element::drop (void) {
  mAttribute_mRequiredProcedureName.drop () ;
  mAttribute_mProcedureModeList.drop () ;
  mAttribute_mProcFormalArgumentList.drop () ;
  mAttribute_mEndOfProcLocation.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_requiredProcedureDeclarationListAST_2D_element::description (C_String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString << "<struct @requiredProcedureDeclarationListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mRequiredProcedureName.description (ioString, inIndentation+1) ;
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

GALGAS_lstring GALGAS_requiredProcedureDeclarationListAST_2D_element::reader_mRequiredProcedureName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRequiredProcedureName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_requiredProcedureDeclarationListAST_2D_element::reader_mProcedureModeList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mProcedureModeList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentList GALGAS_requiredProcedureDeclarationListAST_2D_element::reader_mProcFormalArgumentList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mProcFormalArgumentList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_requiredProcedureDeclarationListAST_2D_element::reader_mEndOfProcLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfProcLocation ;
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

