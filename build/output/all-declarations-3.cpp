#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-3.h"


//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_ifExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_ifExpressionAST * p = (const cPtr_ifExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_ifExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mIfExpression.objectCompare (p->mProperty_mIfExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIfExpressionEndLocation.objectCompare (p->mProperty_mIfExpressionEndLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mThenExpression.objectCompare (p->mProperty_mThenExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mThenExpressionEndLocation.objectCompare (p->mProperty_mThenExpressionEndLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mElseExpression.objectCompare (p->mProperty_mElseExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mElseExpressionEndLocation.objectCompare (p->mProperty_mElseExpressionEndLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_ifExpressionAST::objectCompare (const GALGAS_ifExpressionAST & inOperand) const {
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

GALGAS_ifExpressionAST::GALGAS_ifExpressionAST (void) :
GALGAS_expressionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ifExpressionAST::GALGAS_ifExpressionAST (const cPtr_ifExpressionAST * inSourcePtr) :
GALGAS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ifExpressionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ifExpressionAST GALGAS_ifExpressionAST::constructor_new (const GALGAS_expressionAST & inAttribute_mIfExpression,
                                                                const GALGAS_location & inAttribute_mIfExpressionEndLocation,
                                                                const GALGAS_expressionAST & inAttribute_mThenExpression,
                                                                const GALGAS_location & inAttribute_mThenExpressionEndLocation,
                                                                const GALGAS_expressionAST & inAttribute_mElseExpression,
                                                                const GALGAS_location & inAttribute_mElseExpressionEndLocation
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_ifExpressionAST result ;
  if (inAttribute_mIfExpression.isValid () && inAttribute_mIfExpressionEndLocation.isValid () && inAttribute_mThenExpression.isValid () && inAttribute_mThenExpressionEndLocation.isValid () && inAttribute_mElseExpression.isValid () && inAttribute_mElseExpressionEndLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_ifExpressionAST (inAttribute_mIfExpression, inAttribute_mIfExpressionEndLocation, inAttribute_mThenExpression, inAttribute_mThenExpressionEndLocation, inAttribute_mElseExpression, inAttribute_mElseExpressionEndLocation COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST GALGAS_ifExpressionAST::getter_mIfExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_ifExpressionAST * p = (const cPtr_ifExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifExpressionAST) ;
    result = p->mProperty_mIfExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST cPtr_ifExpressionAST::getter_mIfExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIfExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_ifExpressionAST::getter_mIfExpressionEndLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_ifExpressionAST * p = (const cPtr_ifExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifExpressionAST) ;
    result = p->mProperty_mIfExpressionEndLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_ifExpressionAST::getter_mIfExpressionEndLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIfExpressionEndLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST GALGAS_ifExpressionAST::getter_mThenExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_ifExpressionAST * p = (const cPtr_ifExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifExpressionAST) ;
    result = p->mProperty_mThenExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST cPtr_ifExpressionAST::getter_mThenExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mThenExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_ifExpressionAST::getter_mThenExpressionEndLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_ifExpressionAST * p = (const cPtr_ifExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifExpressionAST) ;
    result = p->mProperty_mThenExpressionEndLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_ifExpressionAST::getter_mThenExpressionEndLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mThenExpressionEndLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST GALGAS_ifExpressionAST::getter_mElseExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_ifExpressionAST * p = (const cPtr_ifExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifExpressionAST) ;
    result = p->mProperty_mElseExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST cPtr_ifExpressionAST::getter_mElseExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mElseExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_ifExpressionAST::getter_mElseExpressionEndLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_ifExpressionAST * p = (const cPtr_ifExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifExpressionAST) ;
    result = p->mProperty_mElseExpressionEndLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_ifExpressionAST::getter_mElseExpressionEndLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mElseExpressionEndLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                      Pointer class for @ifExpressionAST class                                       *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_ifExpressionAST::cPtr_ifExpressionAST (const GALGAS_expressionAST & in_mIfExpression,
                                            const GALGAS_location & in_mIfExpressionEndLocation,
                                            const GALGAS_expressionAST & in_mThenExpression,
                                            const GALGAS_location & in_mThenExpressionEndLocation,
                                            const GALGAS_expressionAST & in_mElseExpression,
                                            const GALGAS_location & in_mElseExpressionEndLocation
                                            COMMA_LOCATION_ARGS) :
cPtr_expressionAST (THERE),
mProperty_mIfExpression (in_mIfExpression),
mProperty_mIfExpressionEndLocation (in_mIfExpressionEndLocation),
mProperty_mThenExpression (in_mThenExpression),
mProperty_mThenExpressionEndLocation (in_mThenExpressionEndLocation),
mProperty_mElseExpression (in_mElseExpression),
mProperty_mElseExpressionEndLocation (in_mElseExpressionEndLocation) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_ifExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifExpressionAST ;
}

void cPtr_ifExpressionAST::description (C_String & ioString,
                                        const int32_t inIndentation) const {
  ioString << "[@ifExpressionAST:" ;
  mProperty_mIfExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mIfExpressionEndLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mThenExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mThenExpressionEndLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mElseExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mElseExpressionEndLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_ifExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_ifExpressionAST (mProperty_mIfExpression, mProperty_mIfExpressionEndLocation, mProperty_mThenExpression, mProperty_mThenExpressionEndLocation, mProperty_mElseExpression, mProperty_mElseExpressionEndLocation COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @ifExpressionAST type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ifExpressionAST ("ifExpressionAST",
                                        & kTypeDescriptor_GALGAS_expressionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_ifExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifExpressionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_ifExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ifExpressionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ifExpressionAST GALGAS_ifExpressionAST::extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_ifExpressionAST result ;
  const GALGAS_ifExpressionAST * p = (const GALGAS_ifExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_ifExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ifExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_ifExpressionSE::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_ifExpressionSE * p = (const cPtr_ifExpressionSE *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_ifExpressionSE) ;
  if (kOperandEqual == result) {
    result = mProperty_mIfExpression.objectCompare (p->mProperty_mIfExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIfExpressionEndLocation.objectCompare (p->mProperty_mIfExpressionEndLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mThenExpression.objectCompare (p->mProperty_mThenExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mThenExpressionEndLocation.objectCompare (p->mProperty_mThenExpressionEndLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mElseExpression.objectCompare (p->mProperty_mElseExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mElseExpressionEndLocation.objectCompare (p->mProperty_mElseExpressionEndLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_ifExpressionSE::objectCompare (const GALGAS_ifExpressionSE & inOperand) const {
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

GALGAS_ifExpressionSE::GALGAS_ifExpressionSE (void) :
GALGAS_expressionSE () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ifExpressionSE::GALGAS_ifExpressionSE (const cPtr_ifExpressionSE * inSourcePtr) :
GALGAS_expressionSE (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ifExpressionSE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ifExpressionSE GALGAS_ifExpressionSE::constructor_new (const GALGAS_expressionSE & inAttribute_mIfExpression,
                                                              const GALGAS_location & inAttribute_mIfExpressionEndLocation,
                                                              const GALGAS_expressionSE & inAttribute_mThenExpression,
                                                              const GALGAS_location & inAttribute_mThenExpressionEndLocation,
                                                              const GALGAS_expressionSE & inAttribute_mElseExpression,
                                                              const GALGAS_location & inAttribute_mElseExpressionEndLocation
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_ifExpressionSE result ;
  if (inAttribute_mIfExpression.isValid () && inAttribute_mIfExpressionEndLocation.isValid () && inAttribute_mThenExpression.isValid () && inAttribute_mThenExpressionEndLocation.isValid () && inAttribute_mElseExpression.isValid () && inAttribute_mElseExpressionEndLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_ifExpressionSE (inAttribute_mIfExpression, inAttribute_mIfExpressionEndLocation, inAttribute_mThenExpression, inAttribute_mThenExpressionEndLocation, inAttribute_mElseExpression, inAttribute_mElseExpressionEndLocation COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionSE GALGAS_ifExpressionSE::getter_mIfExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expressionSE result ;
  if (NULL != mObjectPtr) {
    const cPtr_ifExpressionSE * p = (const cPtr_ifExpressionSE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifExpressionSE) ;
    result = p->mProperty_mIfExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionSE cPtr_ifExpressionSE::getter_mIfExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIfExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_ifExpressionSE::getter_mIfExpressionEndLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_ifExpressionSE * p = (const cPtr_ifExpressionSE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifExpressionSE) ;
    result = p->mProperty_mIfExpressionEndLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_ifExpressionSE::getter_mIfExpressionEndLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIfExpressionEndLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionSE GALGAS_ifExpressionSE::getter_mThenExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expressionSE result ;
  if (NULL != mObjectPtr) {
    const cPtr_ifExpressionSE * p = (const cPtr_ifExpressionSE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifExpressionSE) ;
    result = p->mProperty_mThenExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionSE cPtr_ifExpressionSE::getter_mThenExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mThenExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_ifExpressionSE::getter_mThenExpressionEndLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_ifExpressionSE * p = (const cPtr_ifExpressionSE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifExpressionSE) ;
    result = p->mProperty_mThenExpressionEndLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_ifExpressionSE::getter_mThenExpressionEndLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mThenExpressionEndLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionSE GALGAS_ifExpressionSE::getter_mElseExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expressionSE result ;
  if (NULL != mObjectPtr) {
    const cPtr_ifExpressionSE * p = (const cPtr_ifExpressionSE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifExpressionSE) ;
    result = p->mProperty_mElseExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionSE cPtr_ifExpressionSE::getter_mElseExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mElseExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_ifExpressionSE::getter_mElseExpressionEndLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_ifExpressionSE * p = (const cPtr_ifExpressionSE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifExpressionSE) ;
    result = p->mProperty_mElseExpressionEndLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_ifExpressionSE::getter_mElseExpressionEndLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mElseExpressionEndLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                       Pointer class for @ifExpressionSE class                                       *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_ifExpressionSE::cPtr_ifExpressionSE (const GALGAS_expressionSE & in_mIfExpression,
                                          const GALGAS_location & in_mIfExpressionEndLocation,
                                          const GALGAS_expressionSE & in_mThenExpression,
                                          const GALGAS_location & in_mThenExpressionEndLocation,
                                          const GALGAS_expressionSE & in_mElseExpression,
                                          const GALGAS_location & in_mElseExpressionEndLocation
                                          COMMA_LOCATION_ARGS) :
cPtr_expressionSE (THERE),
mProperty_mIfExpression (in_mIfExpression),
mProperty_mIfExpressionEndLocation (in_mIfExpressionEndLocation),
mProperty_mThenExpression (in_mThenExpression),
mProperty_mThenExpressionEndLocation (in_mThenExpressionEndLocation),
mProperty_mElseExpression (in_mElseExpression),
mProperty_mElseExpressionEndLocation (in_mElseExpressionEndLocation) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_ifExpressionSE::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifExpressionSE ;
}

void cPtr_ifExpressionSE::description (C_String & ioString,
                                       const int32_t inIndentation) const {
  ioString << "[@ifExpressionSE:" ;
  mProperty_mIfExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mIfExpressionEndLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mThenExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mThenExpressionEndLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mElseExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mElseExpressionEndLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_ifExpressionSE::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_ifExpressionSE (mProperty_mIfExpression, mProperty_mIfExpressionEndLocation, mProperty_mThenExpression, mProperty_mThenExpressionEndLocation, mProperty_mElseExpression, mProperty_mElseExpressionEndLocation COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @ifExpressionSE type                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ifExpressionSE ("ifExpressionSE",
                                       & kTypeDescriptor_GALGAS_expressionSE) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_ifExpressionSE::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifExpressionSE ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_ifExpressionSE::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ifExpressionSE (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ifExpressionSE GALGAS_ifExpressionSE::extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_ifExpressionSE result ;
  const GALGAS_ifExpressionSE * p = (const GALGAS_ifExpressionSE *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_ifExpressionSE *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ifExpressionSE", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperator::GALGAS_infixOperator (void) :
mEnum (kNotBuilt) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperator GALGAS_infixOperator::constructor_equal (UNUSED_LOCATION_ARGS) {
  GALGAS_infixOperator result ;
  result.mEnum = kEnum_equal ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperator GALGAS_infixOperator::constructor_nonEqual (UNUSED_LOCATION_ARGS) {
  GALGAS_infixOperator result ;
  result.mEnum = kEnum_nonEqual ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperator GALGAS_infixOperator::constructor_strictInf (UNUSED_LOCATION_ARGS) {
  GALGAS_infixOperator result ;
  result.mEnum = kEnum_strictInf ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperator GALGAS_infixOperator::constructor_strictSup (UNUSED_LOCATION_ARGS) {
  GALGAS_infixOperator result ;
  result.mEnum = kEnum_strictSup ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperator GALGAS_infixOperator::constructor_infEqual (UNUSED_LOCATION_ARGS) {
  GALGAS_infixOperator result ;
  result.mEnum = kEnum_infEqual ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperator GALGAS_infixOperator::constructor_supEqual (UNUSED_LOCATION_ARGS) {
  GALGAS_infixOperator result ;
  result.mEnum = kEnum_supEqual ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperator GALGAS_infixOperator::constructor_andOp (UNUSED_LOCATION_ARGS) {
  GALGAS_infixOperator result ;
  result.mEnum = kEnum_andOp ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperator GALGAS_infixOperator::constructor_orOp (UNUSED_LOCATION_ARGS) {
  GALGAS_infixOperator result ;
  result.mEnum = kEnum_orOp ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperator GALGAS_infixOperator::constructor_xorOp (UNUSED_LOCATION_ARGS) {
  GALGAS_infixOperator result ;
  result.mEnum = kEnum_xorOp ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperator GALGAS_infixOperator::constructor_booleanXorOp (UNUSED_LOCATION_ARGS) {
  GALGAS_infixOperator result ;
  result.mEnum = kEnum_booleanXorOp ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperator GALGAS_infixOperator::constructor_addOp (UNUSED_LOCATION_ARGS) {
  GALGAS_infixOperator result ;
  result.mEnum = kEnum_addOp ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperator GALGAS_infixOperator::constructor_addOpNoOvf (UNUSED_LOCATION_ARGS) {
  GALGAS_infixOperator result ;
  result.mEnum = kEnum_addOpNoOvf ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperator GALGAS_infixOperator::constructor_subOp (UNUSED_LOCATION_ARGS) {
  GALGAS_infixOperator result ;
  result.mEnum = kEnum_subOp ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperator GALGAS_infixOperator::constructor_subOpNoOvf (UNUSED_LOCATION_ARGS) {
  GALGAS_infixOperator result ;
  result.mEnum = kEnum_subOpNoOvf ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperator GALGAS_infixOperator::constructor_mulOp (UNUSED_LOCATION_ARGS) {
  GALGAS_infixOperator result ;
  result.mEnum = kEnum_mulOp ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperator GALGAS_infixOperator::constructor_mulOpNoOvf (UNUSED_LOCATION_ARGS) {
  GALGAS_infixOperator result ;
  result.mEnum = kEnum_mulOpNoOvf ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperator GALGAS_infixOperator::constructor_divOp (UNUSED_LOCATION_ARGS) {
  GALGAS_infixOperator result ;
  result.mEnum = kEnum_divOp ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperator GALGAS_infixOperator::constructor_divOpNoOvf (UNUSED_LOCATION_ARGS) {
  GALGAS_infixOperator result ;
  result.mEnum = kEnum_divOpNoOvf ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperator GALGAS_infixOperator::constructor_modOp (UNUSED_LOCATION_ARGS) {
  GALGAS_infixOperator result ;
  result.mEnum = kEnum_modOp ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperator GALGAS_infixOperator::constructor_modOpNoOvf (UNUSED_LOCATION_ARGS) {
  GALGAS_infixOperator result ;
  result.mEnum = kEnum_modOpNoOvf ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperator GALGAS_infixOperator::constructor_leftShiftOp (UNUSED_LOCATION_ARGS) {
  GALGAS_infixOperator result ;
  result.mEnum = kEnum_leftShiftOp ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperator GALGAS_infixOperator::constructor_rightShiftOp (UNUSED_LOCATION_ARGS) {
  GALGAS_infixOperator result ;
  result.mEnum = kEnum_rightShiftOp ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * gEnumNameArrayFor_infixOperator [23] = {
  "(not built)",
  "equal",
  "nonEqual",
  "strictInf",
  "strictSup",
  "infEqual",
  "supEqual",
  "andOp",
  "orOp",
  "xorOp",
  "booleanXorOp",
  "addOp",
  "addOpNoOvf",
  "subOp",
  "subOpNoOvf",
  "mulOp",
  "mulOpNoOvf",
  "divOp",
  "divOpNoOvf",
  "modOp",
  "modOpNoOvf",
  "leftShiftOp",
  "rightShiftOp"
} ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_infixOperator::getter_isEqual (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_equal == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_infixOperator::getter_isNonEqual (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_nonEqual == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_infixOperator::getter_isStrictInf (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_strictInf == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_infixOperator::getter_isStrictSup (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_strictSup == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_infixOperator::getter_isInfEqual (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_infEqual == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_infixOperator::getter_isSupEqual (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_supEqual == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_infixOperator::getter_isAndOp (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_andOp == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_infixOperator::getter_isOrOp (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_orOp == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_infixOperator::getter_isXorOp (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_xorOp == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_infixOperator::getter_isBooleanXorOp (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_booleanXorOp == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_infixOperator::getter_isAddOp (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_addOp == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_infixOperator::getter_isAddOpNoOvf (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_addOpNoOvf == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_infixOperator::getter_isSubOp (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_subOp == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_infixOperator::getter_isSubOpNoOvf (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_subOpNoOvf == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_infixOperator::getter_isMulOp (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_mulOp == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_infixOperator::getter_isMulOpNoOvf (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_mulOpNoOvf == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_infixOperator::getter_isDivOp (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_divOp == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_infixOperator::getter_isDivOpNoOvf (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_divOpNoOvf == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_infixOperator::getter_isModOp (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_modOp == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_infixOperator::getter_isModOpNoOvf (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_modOpNoOvf == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_infixOperator::getter_isLeftShiftOp (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_leftShiftOp == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_infixOperator::getter_isRightShiftOp (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_rightShiftOp == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_infixOperator::description (C_String & ioString,
                                        const int32_t /* inIndentation */) const {
  ioString << "<enum @infixOperator: " << gEnumNameArrayFor_infixOperator [mEnum] ;
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_infixOperator::objectCompare (const GALGAS_infixOperator & inOperand) const {
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
//                                                 @infixOperator type                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_infixOperator ("infixOperator",
                                      NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_infixOperator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_infixOperator ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_infixOperator::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_infixOperator (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperator GALGAS_infixOperator::extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GALGAS_infixOperator result ;
  const GALGAS_infixOperator * p = (const GALGAS_infixOperator *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_infixOperator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("infixOperator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_infixOperatorExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_infixOperatorExpressionAST * p = (const cPtr_infixOperatorExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_infixOperatorExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mLeftExpression.objectCompare (p->mProperty_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOperatorLocation.objectCompare (p->mProperty_mOperatorLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOp.objectCompare (p->mProperty_mOp) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightExpression.objectCompare (p->mProperty_mRightExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_infixOperatorExpressionAST::objectCompare (const GALGAS_infixOperatorExpressionAST & inOperand) const {
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

GALGAS_infixOperatorExpressionAST::GALGAS_infixOperatorExpressionAST (void) :
GALGAS_expressionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorExpressionAST::GALGAS_infixOperatorExpressionAST (const cPtr_infixOperatorExpressionAST * inSourcePtr) :
GALGAS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_infixOperatorExpressionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorExpressionAST GALGAS_infixOperatorExpressionAST::constructor_new (const GALGAS_expressionAST & inAttribute_mLeftExpression,
                                                                                      const GALGAS_location & inAttribute_mOperatorLocation,
                                                                                      const GALGAS_infixOperator & inAttribute_mOp,
                                                                                      const GALGAS_expressionAST & inAttribute_mRightExpression
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_infixOperatorExpressionAST result ;
  if (inAttribute_mLeftExpression.isValid () && inAttribute_mOperatorLocation.isValid () && inAttribute_mOp.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_infixOperatorExpressionAST (inAttribute_mLeftExpression, inAttribute_mOperatorLocation, inAttribute_mOp, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST GALGAS_infixOperatorExpressionAST::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_infixOperatorExpressionAST * p = (const cPtr_infixOperatorExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_infixOperatorExpressionAST) ;
    result = p->mProperty_mLeftExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST cPtr_infixOperatorExpressionAST::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLeftExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_infixOperatorExpressionAST::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_infixOperatorExpressionAST * p = (const cPtr_infixOperatorExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_infixOperatorExpressionAST) ;
    result = p->mProperty_mOperatorLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_infixOperatorExpressionAST::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOperatorLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperator GALGAS_infixOperatorExpressionAST::getter_mOp (UNUSED_LOCATION_ARGS) const {
  GALGAS_infixOperator result ;
  if (NULL != mObjectPtr) {
    const cPtr_infixOperatorExpressionAST * p = (const cPtr_infixOperatorExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_infixOperatorExpressionAST) ;
    result = p->mProperty_mOp ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperator cPtr_infixOperatorExpressionAST::getter_mOp (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOp ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST GALGAS_infixOperatorExpressionAST::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_infixOperatorExpressionAST * p = (const cPtr_infixOperatorExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_infixOperatorExpressionAST) ;
    result = p->mProperty_mRightExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST cPtr_infixOperatorExpressionAST::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRightExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                 Pointer class for @infixOperatorExpressionAST class                                 *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_infixOperatorExpressionAST::cPtr_infixOperatorExpressionAST (const GALGAS_expressionAST & in_mLeftExpression,
                                                                  const GALGAS_location & in_mOperatorLocation,
                                                                  const GALGAS_infixOperator & in_mOp,
                                                                  const GALGAS_expressionAST & in_mRightExpression
                                                                  COMMA_LOCATION_ARGS) :
cPtr_expressionAST (THERE),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mOperatorLocation (in_mOperatorLocation),
mProperty_mOp (in_mOp),
mProperty_mRightExpression (in_mRightExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_infixOperatorExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_infixOperatorExpressionAST ;
}

void cPtr_infixOperatorExpressionAST::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "[@infixOperatorExpressionAST:" ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOp.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_infixOperatorExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_infixOperatorExpressionAST (mProperty_mLeftExpression, mProperty_mOperatorLocation, mProperty_mOp, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @infixOperatorExpressionAST type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_infixOperatorExpressionAST ("infixOperatorExpressionAST",
                                                   & kTypeDescriptor_GALGAS_expressionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_infixOperatorExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_infixOperatorExpressionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_infixOperatorExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_infixOperatorExpressionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorExpressionAST GALGAS_infixOperatorExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_infixOperatorExpressionAST result ;
  const GALGAS_infixOperatorExpressionAST * p = (const GALGAS_infixOperatorExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_infixOperatorExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("infixOperatorExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_booleanShortCircuitAndOperatorExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_booleanShortCircuitAndOperatorExpressionAST * p = (const cPtr_booleanShortCircuitAndOperatorExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_booleanShortCircuitAndOperatorExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mLeftExpression.objectCompare (p->mProperty_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOperatorLocation.objectCompare (p->mProperty_mOperatorLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightExpression.objectCompare (p->mProperty_mRightExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_booleanShortCircuitAndOperatorExpressionAST::objectCompare (const GALGAS_booleanShortCircuitAndOperatorExpressionAST & inOperand) const {
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

GALGAS_booleanShortCircuitAndOperatorExpressionAST::GALGAS_booleanShortCircuitAndOperatorExpressionAST (void) :
GALGAS_expressionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_booleanShortCircuitAndOperatorExpressionAST::GALGAS_booleanShortCircuitAndOperatorExpressionAST (const cPtr_booleanShortCircuitAndOperatorExpressionAST * inSourcePtr) :
GALGAS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_booleanShortCircuitAndOperatorExpressionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_booleanShortCircuitAndOperatorExpressionAST GALGAS_booleanShortCircuitAndOperatorExpressionAST::constructor_new (const GALGAS_expressionAST & inAttribute_mLeftExpression,
                                                                                                                        const GALGAS_location & inAttribute_mOperatorLocation,
                                                                                                                        const GALGAS_expressionAST & inAttribute_mRightExpression
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_booleanShortCircuitAndOperatorExpressionAST result ;
  if (inAttribute_mLeftExpression.isValid () && inAttribute_mOperatorLocation.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_booleanShortCircuitAndOperatorExpressionAST (inAttribute_mLeftExpression, inAttribute_mOperatorLocation, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST GALGAS_booleanShortCircuitAndOperatorExpressionAST::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_booleanShortCircuitAndOperatorExpressionAST * p = (const cPtr_booleanShortCircuitAndOperatorExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_booleanShortCircuitAndOperatorExpressionAST) ;
    result = p->mProperty_mLeftExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST cPtr_booleanShortCircuitAndOperatorExpressionAST::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLeftExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_booleanShortCircuitAndOperatorExpressionAST::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_booleanShortCircuitAndOperatorExpressionAST * p = (const cPtr_booleanShortCircuitAndOperatorExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_booleanShortCircuitAndOperatorExpressionAST) ;
    result = p->mProperty_mOperatorLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_booleanShortCircuitAndOperatorExpressionAST::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOperatorLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST GALGAS_booleanShortCircuitAndOperatorExpressionAST::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_booleanShortCircuitAndOperatorExpressionAST * p = (const cPtr_booleanShortCircuitAndOperatorExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_booleanShortCircuitAndOperatorExpressionAST) ;
    result = p->mProperty_mRightExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST cPtr_booleanShortCircuitAndOperatorExpressionAST::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRightExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                        Pointer class for @booleanShortCircuitAndOperatorExpressionAST class                         *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_booleanShortCircuitAndOperatorExpressionAST::cPtr_booleanShortCircuitAndOperatorExpressionAST (const GALGAS_expressionAST & in_mLeftExpression,
                                                                                                    const GALGAS_location & in_mOperatorLocation,
                                                                                                    const GALGAS_expressionAST & in_mRightExpression
                                                                                                    COMMA_LOCATION_ARGS) :
cPtr_expressionAST (THERE),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mOperatorLocation (in_mOperatorLocation),
mProperty_mRightExpression (in_mRightExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_booleanShortCircuitAndOperatorExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_booleanShortCircuitAndOperatorExpressionAST ;
}

void cPtr_booleanShortCircuitAndOperatorExpressionAST::description (C_String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString << "[@booleanShortCircuitAndOperatorExpressionAST:" ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_booleanShortCircuitAndOperatorExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_booleanShortCircuitAndOperatorExpressionAST (mProperty_mLeftExpression, mProperty_mOperatorLocation, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  @booleanShortCircuitAndOperatorExpressionAST type                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_booleanShortCircuitAndOperatorExpressionAST ("booleanShortCircuitAndOperatorExpressionAST",
                                                                    & kTypeDescriptor_GALGAS_expressionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_booleanShortCircuitAndOperatorExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_booleanShortCircuitAndOperatorExpressionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_booleanShortCircuitAndOperatorExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_booleanShortCircuitAndOperatorExpressionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_booleanShortCircuitAndOperatorExpressionAST GALGAS_booleanShortCircuitAndOperatorExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_booleanShortCircuitAndOperatorExpressionAST result ;
  const GALGAS_booleanShortCircuitAndOperatorExpressionAST * p = (const GALGAS_booleanShortCircuitAndOperatorExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_booleanShortCircuitAndOperatorExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("booleanShortCircuitAndOperatorExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_infixOperatorExpressionSE::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_infixOperatorExpressionSE * p = (const cPtr_infixOperatorExpressionSE *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_infixOperatorExpressionSE) ;
  if (kOperandEqual == result) {
    result = mProperty_mLeftExpression.objectCompare (p->mProperty_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOperatorLocation.objectCompare (p->mProperty_mOperatorLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOp.objectCompare (p->mProperty_mOp) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightExpression.objectCompare (p->mProperty_mRightExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_infixOperatorExpressionSE::objectCompare (const GALGAS_infixOperatorExpressionSE & inOperand) const {
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

GALGAS_infixOperatorExpressionSE::GALGAS_infixOperatorExpressionSE (void) :
GALGAS_expressionSE () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorExpressionSE::GALGAS_infixOperatorExpressionSE (const cPtr_infixOperatorExpressionSE * inSourcePtr) :
GALGAS_expressionSE (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_infixOperatorExpressionSE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorExpressionSE GALGAS_infixOperatorExpressionSE::constructor_new (const GALGAS_expressionSE & inAttribute_mLeftExpression,
                                                                                    const GALGAS_location & inAttribute_mOperatorLocation,
                                                                                    const GALGAS_infixOperator & inAttribute_mOp,
                                                                                    const GALGAS_expressionSE & inAttribute_mRightExpression
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_infixOperatorExpressionSE result ;
  if (inAttribute_mLeftExpression.isValid () && inAttribute_mOperatorLocation.isValid () && inAttribute_mOp.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_infixOperatorExpressionSE (inAttribute_mLeftExpression, inAttribute_mOperatorLocation, inAttribute_mOp, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionSE GALGAS_infixOperatorExpressionSE::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expressionSE result ;
  if (NULL != mObjectPtr) {
    const cPtr_infixOperatorExpressionSE * p = (const cPtr_infixOperatorExpressionSE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_infixOperatorExpressionSE) ;
    result = p->mProperty_mLeftExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionSE cPtr_infixOperatorExpressionSE::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLeftExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_infixOperatorExpressionSE::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_infixOperatorExpressionSE * p = (const cPtr_infixOperatorExpressionSE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_infixOperatorExpressionSE) ;
    result = p->mProperty_mOperatorLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_infixOperatorExpressionSE::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOperatorLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperator GALGAS_infixOperatorExpressionSE::getter_mOp (UNUSED_LOCATION_ARGS) const {
  GALGAS_infixOperator result ;
  if (NULL != mObjectPtr) {
    const cPtr_infixOperatorExpressionSE * p = (const cPtr_infixOperatorExpressionSE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_infixOperatorExpressionSE) ;
    result = p->mProperty_mOp ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperator cPtr_infixOperatorExpressionSE::getter_mOp (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOp ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionSE GALGAS_infixOperatorExpressionSE::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expressionSE result ;
  if (NULL != mObjectPtr) {
    const cPtr_infixOperatorExpressionSE * p = (const cPtr_infixOperatorExpressionSE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_infixOperatorExpressionSE) ;
    result = p->mProperty_mRightExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionSE cPtr_infixOperatorExpressionSE::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRightExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                 Pointer class for @infixOperatorExpressionSE class                                  *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_infixOperatorExpressionSE::cPtr_infixOperatorExpressionSE (const GALGAS_expressionSE & in_mLeftExpression,
                                                                const GALGAS_location & in_mOperatorLocation,
                                                                const GALGAS_infixOperator & in_mOp,
                                                                const GALGAS_expressionSE & in_mRightExpression
                                                                COMMA_LOCATION_ARGS) :
cPtr_expressionSE (THERE),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mOperatorLocation (in_mOperatorLocation),
mProperty_mOp (in_mOp),
mProperty_mRightExpression (in_mRightExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_infixOperatorExpressionSE::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_infixOperatorExpressionSE ;
}

void cPtr_infixOperatorExpressionSE::description (C_String & ioString,
                                                  const int32_t inIndentation) const {
  ioString << "[@infixOperatorExpressionSE:" ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOp.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_infixOperatorExpressionSE::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_infixOperatorExpressionSE (mProperty_mLeftExpression, mProperty_mOperatorLocation, mProperty_mOp, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @infixOperatorExpressionSE type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_infixOperatorExpressionSE ("infixOperatorExpressionSE",
                                                  & kTypeDescriptor_GALGAS_expressionSE) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_infixOperatorExpressionSE::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_infixOperatorExpressionSE ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_infixOperatorExpressionSE::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_infixOperatorExpressionSE (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorExpressionSE GALGAS_infixOperatorExpressionSE::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_infixOperatorExpressionSE result ;
  const GALGAS_infixOperatorExpressionSE * p = (const GALGAS_infixOperatorExpressionSE *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_infixOperatorExpressionSE *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("infixOperatorExpressionSE", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_booleanShortCircuitAndOperatorExpressionSE::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_booleanShortCircuitAndOperatorExpressionSE * p = (const cPtr_booleanShortCircuitAndOperatorExpressionSE *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_booleanShortCircuitAndOperatorExpressionSE) ;
  if (kOperandEqual == result) {
    result = mProperty_mLeftExpression.objectCompare (p->mProperty_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOperatorLocation.objectCompare (p->mProperty_mOperatorLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightExpression.objectCompare (p->mProperty_mRightExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_booleanShortCircuitAndOperatorExpressionSE::objectCompare (const GALGAS_booleanShortCircuitAndOperatorExpressionSE & inOperand) const {
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

GALGAS_booleanShortCircuitAndOperatorExpressionSE::GALGAS_booleanShortCircuitAndOperatorExpressionSE (void) :
GALGAS_expressionSE () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_booleanShortCircuitAndOperatorExpressionSE::GALGAS_booleanShortCircuitAndOperatorExpressionSE (const cPtr_booleanShortCircuitAndOperatorExpressionSE * inSourcePtr) :
GALGAS_expressionSE (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_booleanShortCircuitAndOperatorExpressionSE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_booleanShortCircuitAndOperatorExpressionSE GALGAS_booleanShortCircuitAndOperatorExpressionSE::constructor_new (const GALGAS_expressionSE & inAttribute_mLeftExpression,
                                                                                                                      const GALGAS_location & inAttribute_mOperatorLocation,
                                                                                                                      const GALGAS_expressionSE & inAttribute_mRightExpression
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_booleanShortCircuitAndOperatorExpressionSE result ;
  if (inAttribute_mLeftExpression.isValid () && inAttribute_mOperatorLocation.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_booleanShortCircuitAndOperatorExpressionSE (inAttribute_mLeftExpression, inAttribute_mOperatorLocation, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionSE GALGAS_booleanShortCircuitAndOperatorExpressionSE::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expressionSE result ;
  if (NULL != mObjectPtr) {
    const cPtr_booleanShortCircuitAndOperatorExpressionSE * p = (const cPtr_booleanShortCircuitAndOperatorExpressionSE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_booleanShortCircuitAndOperatorExpressionSE) ;
    result = p->mProperty_mLeftExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionSE cPtr_booleanShortCircuitAndOperatorExpressionSE::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLeftExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_booleanShortCircuitAndOperatorExpressionSE::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_booleanShortCircuitAndOperatorExpressionSE * p = (const cPtr_booleanShortCircuitAndOperatorExpressionSE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_booleanShortCircuitAndOperatorExpressionSE) ;
    result = p->mProperty_mOperatorLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_booleanShortCircuitAndOperatorExpressionSE::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOperatorLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionSE GALGAS_booleanShortCircuitAndOperatorExpressionSE::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expressionSE result ;
  if (NULL != mObjectPtr) {
    const cPtr_booleanShortCircuitAndOperatorExpressionSE * p = (const cPtr_booleanShortCircuitAndOperatorExpressionSE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_booleanShortCircuitAndOperatorExpressionSE) ;
    result = p->mProperty_mRightExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionSE cPtr_booleanShortCircuitAndOperatorExpressionSE::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRightExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                         Pointer class for @booleanShortCircuitAndOperatorExpressionSE class                         *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_booleanShortCircuitAndOperatorExpressionSE::cPtr_booleanShortCircuitAndOperatorExpressionSE (const GALGAS_expressionSE & in_mLeftExpression,
                                                                                                  const GALGAS_location & in_mOperatorLocation,
                                                                                                  const GALGAS_expressionSE & in_mRightExpression
                                                                                                  COMMA_LOCATION_ARGS) :
cPtr_expressionSE (THERE),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mOperatorLocation (in_mOperatorLocation),
mProperty_mRightExpression (in_mRightExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_booleanShortCircuitAndOperatorExpressionSE::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_booleanShortCircuitAndOperatorExpressionSE ;
}

void cPtr_booleanShortCircuitAndOperatorExpressionSE::description (C_String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString << "[@booleanShortCircuitAndOperatorExpressionSE:" ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_booleanShortCircuitAndOperatorExpressionSE::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_booleanShortCircuitAndOperatorExpressionSE (mProperty_mLeftExpression, mProperty_mOperatorLocation, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  @booleanShortCircuitAndOperatorExpressionSE type                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_booleanShortCircuitAndOperatorExpressionSE ("booleanShortCircuitAndOperatorExpressionSE",
                                                                   & kTypeDescriptor_GALGAS_expressionSE) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_booleanShortCircuitAndOperatorExpressionSE::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_booleanShortCircuitAndOperatorExpressionSE ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_booleanShortCircuitAndOperatorExpressionSE::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_booleanShortCircuitAndOperatorExpressionSE (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_booleanShortCircuitAndOperatorExpressionSE GALGAS_booleanShortCircuitAndOperatorExpressionSE::extractObject (const GALGAS_object & inObject,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_booleanShortCircuitAndOperatorExpressionSE result ;
  const GALGAS_booleanShortCircuitAndOperatorExpressionSE * p = (const GALGAS_booleanShortCircuitAndOperatorExpressionSE *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_booleanShortCircuitAndOperatorExpressionSE *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("booleanShortCircuitAndOperatorExpressionSE", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_infixOperatorMap::cMapElement_infixOperatorMap (const GALGAS_lstring & inKey,
                                                            const GALGAS_PLMType & in_mResultType,
                                                            const GALGAS_infixOperatorDescription & in_mOperation
                                                            COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mResultType (in_mResultType),
mProperty_mOperation (in_mOperation) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_infixOperatorMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mResultType.isValid () && mProperty_mOperation.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_infixOperatorMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_infixOperatorMap (mProperty_lkey, mProperty_mResultType, mProperty_mOperation COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_infixOperatorMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mResultType" ":" ;
  mProperty_mResultType.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOperation" ":" ;
  mProperty_mOperation.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_infixOperatorMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_infixOperatorMap * operand = (cMapElement_infixOperatorMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mResultType.objectCompare (operand->mProperty_mResultType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOperation.objectCompare (operand->mProperty_mOperation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap::GALGAS_infixOperatorMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap::GALGAS_infixOperatorMap (const GALGAS_infixOperatorMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap & GALGAS_infixOperatorMap::operator = (const GALGAS_infixOperatorMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_infixOperatorMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_infixOperatorMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_infixOperatorMap::constructor_mapWithMapToOverride (const GALGAS_infixOperatorMap & inMapToOverride
                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_infixOperatorMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_infixOperatorMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  GALGAS_infixOperatorMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_infixOperatorMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                   const GALGAS_PLMType & inArgument0,
                                                   const GALGAS_infixOperatorDescription & inArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  cMapElement_infixOperatorMap * p = NULL ;
  macroMyNew (p, cMapElement_infixOperatorMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@infixOperatorMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_infixOperatorMap::setter_insertKey (GALGAS_lstring inKey,
                                                GALGAS_PLMType inArgument0,
                                                GALGAS_infixOperatorDescription inArgument1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  cMapElement_infixOperatorMap * p = NULL ;
  macroMyNew (p, cMapElement_infixOperatorMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "** internal error **" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_infixOperatorMap_searchKey = "** internal error **" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_infixOperatorMap::method_searchKey (GALGAS_lstring inKey,
                                                GALGAS_PLMType & outArgument0,
                                                GALGAS_infixOperatorDescription & outArgument1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  const cMapElement_infixOperatorMap * p = (const cMapElement_infixOperatorMap *) performSearch (inKey,
                                                                                                 inCompiler,
                                                                                                 kSearchErrorMessage_infixOperatorMap_searchKey
                                                                                                 COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_infixOperatorMap) ;
    outArgument0 = p->mProperty_mResultType ;
    outArgument1 = p->mProperty_mOperation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMType GALGAS_infixOperatorMap::getter_mResultTypeForKey (const GALGAS_string & inKey,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_infixOperatorMap * p = (const cMapElement_infixOperatorMap *) attributes ;
  GALGAS_PLMType result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_infixOperatorMap) ;
    result = p->mProperty_mResultType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorDescription GALGAS_infixOperatorMap::getter_mOperationForKey (const GALGAS_string & inKey,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_infixOperatorMap * p = (const cMapElement_infixOperatorMap *) attributes ;
  GALGAS_infixOperatorDescription result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_infixOperatorMap) ;
    result = p->mProperty_mOperation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_infixOperatorMap::setter_setMResultTypeForKey (GALGAS_PLMType inAttributeValue,
                                                           GALGAS_string inKey,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_infixOperatorMap * p = (cMapElement_infixOperatorMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_infixOperatorMap) ;
    p->mProperty_mResultType = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_infixOperatorMap::setter_setMOperationForKey (GALGAS_infixOperatorDescription inAttributeValue,
                                                          GALGAS_string inKey,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_infixOperatorMap * p = (cMapElement_infixOperatorMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_infixOperatorMap) ;
    p->mProperty_mOperation = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_infixOperatorMap * GALGAS_infixOperatorMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                           const GALGAS_string & inKey
                                                                                           COMMA_LOCATION_ARGS) {
  cMapElement_infixOperatorMap * result = (cMapElement_infixOperatorMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_infixOperatorMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_infixOperatorMap::cEnumerator_infixOperatorMap (const GALGAS_infixOperatorMap & inEnumeratedObject,
                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap_2D_element cEnumerator_infixOperatorMap::current (LOCATION_ARGS) const {
  const cMapElement_infixOperatorMap * p = (const cMapElement_infixOperatorMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_infixOperatorMap) ;
  return GALGAS_infixOperatorMap_2D_element (p->mProperty_lkey, p->mProperty_mResultType, p->mProperty_mOperation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_infixOperatorMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMType cEnumerator_infixOperatorMap::current_mResultType (LOCATION_ARGS) const {
  const cMapElement_infixOperatorMap * p = (const cMapElement_infixOperatorMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_infixOperatorMap) ;
  return p->mProperty_mResultType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorDescription cEnumerator_infixOperatorMap::current_mOperation (LOCATION_ARGS) const {
  const cMapElement_infixOperatorMap * p = (const cMapElement_infixOperatorMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_infixOperatorMap) ;
  return p->mProperty_mOperation ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @infixOperatorMap type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_infixOperatorMap ("infixOperatorMap",
                                         NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_infixOperatorMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_infixOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_infixOperatorMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_infixOperatorMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_infixOperatorMap::extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_infixOperatorMap result ;
  const GALGAS_infixOperatorMap * p = (const GALGAS_infixOperatorMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_infixOperatorMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("infixOperatorMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefixOperator::GALGAS_prefixOperator (void) :
mEnum (kNotBuilt) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefixOperator GALGAS_prefixOperator::constructor_notOperator (UNUSED_LOCATION_ARGS) {
  GALGAS_prefixOperator result ;
  result.mEnum = kEnum_notOperator ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefixOperator GALGAS_prefixOperator::constructor_minus (UNUSED_LOCATION_ARGS) {
  GALGAS_prefixOperator result ;
  result.mEnum = kEnum_minus ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefixOperator GALGAS_prefixOperator::constructor_unsignedComplement (UNUSED_LOCATION_ARGS) {
  GALGAS_prefixOperator result ;
  result.mEnum = kEnum_unsignedComplement ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefixOperator GALGAS_prefixOperator::constructor_minusNoOvf (UNUSED_LOCATION_ARGS) {
  GALGAS_prefixOperator result ;
  result.mEnum = kEnum_minusNoOvf ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * gEnumNameArrayFor_prefixOperator [5] = {
  "(not built)",
  "notOperator",
  "minus",
  "unsignedComplement",
  "minusNoOvf"
} ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_prefixOperator::getter_isNotOperator (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_notOperator == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_prefixOperator::getter_isMinus (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_minus == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_prefixOperator::getter_isUnsignedComplement (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_unsignedComplement == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_prefixOperator::getter_isMinusNoOvf (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_minusNoOvf == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_prefixOperator::description (C_String & ioString,
                                         const int32_t /* inIndentation */) const {
  ioString << "<enum @prefixOperator: " << gEnumNameArrayFor_prefixOperator [mEnum] ;
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_prefixOperator::objectCompare (const GALGAS_prefixOperator & inOperand) const {
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
//                                                @prefixOperator type                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_prefixOperator ("prefixOperator",
                                       NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_prefixOperator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_prefixOperator ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_prefixOperator::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_prefixOperator (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefixOperator GALGAS_prefixOperator::extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_prefixOperator result ;
  const GALGAS_prefixOperator * p = (const GALGAS_prefixOperator *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_prefixOperator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("prefixOperator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_prefixOperatorExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_prefixOperatorExpressionAST * p = (const cPtr_prefixOperatorExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_prefixOperatorExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mOperatorLocation.objectCompare (p->mProperty_mOperatorLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOp.objectCompare (p->mProperty_mOp) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExpression.objectCompare (p->mProperty_mExpression) ;
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

GALGAS_location GALGAS_prefixOperatorExpressionAST::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_prefixOperatorExpressionAST * p = (const cPtr_prefixOperatorExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_prefixOperatorExpressionAST) ;
    result = p->mProperty_mOperatorLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_prefixOperatorExpressionAST::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOperatorLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefixOperator GALGAS_prefixOperatorExpressionAST::getter_mOp (UNUSED_LOCATION_ARGS) const {
  GALGAS_prefixOperator result ;
  if (NULL != mObjectPtr) {
    const cPtr_prefixOperatorExpressionAST * p = (const cPtr_prefixOperatorExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_prefixOperatorExpressionAST) ;
    result = p->mProperty_mOp ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefixOperator cPtr_prefixOperatorExpressionAST::getter_mOp (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOp ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST GALGAS_prefixOperatorExpressionAST::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_prefixOperatorExpressionAST * p = (const cPtr_prefixOperatorExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_prefixOperatorExpressionAST) ;
    result = p->mProperty_mExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST cPtr_prefixOperatorExpressionAST::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                Pointer class for @prefixOperatorExpressionAST class                                 *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_prefixOperatorExpressionAST::cPtr_prefixOperatorExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                                                    const GALGAS_prefixOperator & in_mOp,
                                                                    const GALGAS_expressionAST & in_mExpression
                                                                    COMMA_LOCATION_ARGS) :
cPtr_expressionAST (THERE),
mProperty_mOperatorLocation (in_mOperatorLocation),
mProperty_mOp (in_mOp),
mProperty_mExpression (in_mExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_prefixOperatorExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_prefixOperatorExpressionAST ;
}

void cPtr_prefixOperatorExpressionAST::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "[@prefixOperatorExpressionAST:" ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOp.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_prefixOperatorExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_prefixOperatorExpressionAST (mProperty_mOperatorLocation, mProperty_mOp, mProperty_mExpression COMMA_THERE)) ;
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

typeComparisonResult cPtr_prefixOperatorExpressionSE::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_prefixOperatorExpressionSE * p = (const cPtr_prefixOperatorExpressionSE *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_prefixOperatorExpressionSE) ;
  if (kOperandEqual == result) {
    result = mProperty_mOperatorLocation.objectCompare (p->mProperty_mOperatorLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOp.objectCompare (p->mProperty_mOp) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExpression.objectCompare (p->mProperty_mExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_prefixOperatorExpressionSE::objectCompare (const GALGAS_prefixOperatorExpressionSE & inOperand) const {
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

GALGAS_prefixOperatorExpressionSE::GALGAS_prefixOperatorExpressionSE (void) :
GALGAS_expressionSE () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefixOperatorExpressionSE::GALGAS_prefixOperatorExpressionSE (const cPtr_prefixOperatorExpressionSE * inSourcePtr) :
GALGAS_expressionSE (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_prefixOperatorExpressionSE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefixOperatorExpressionSE GALGAS_prefixOperatorExpressionSE::constructor_new (const GALGAS_location & inAttribute_mOperatorLocation,
                                                                                      const GALGAS_prefixOperator & inAttribute_mOp,
                                                                                      const GALGAS_expressionSE & inAttribute_mExpression
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_prefixOperatorExpressionSE result ;
  if (inAttribute_mOperatorLocation.isValid () && inAttribute_mOp.isValid () && inAttribute_mExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_prefixOperatorExpressionSE (inAttribute_mOperatorLocation, inAttribute_mOp, inAttribute_mExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_prefixOperatorExpressionSE::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_prefixOperatorExpressionSE * p = (const cPtr_prefixOperatorExpressionSE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_prefixOperatorExpressionSE) ;
    result = p->mProperty_mOperatorLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_prefixOperatorExpressionSE::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOperatorLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefixOperator GALGAS_prefixOperatorExpressionSE::getter_mOp (UNUSED_LOCATION_ARGS) const {
  GALGAS_prefixOperator result ;
  if (NULL != mObjectPtr) {
    const cPtr_prefixOperatorExpressionSE * p = (const cPtr_prefixOperatorExpressionSE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_prefixOperatorExpressionSE) ;
    result = p->mProperty_mOp ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefixOperator cPtr_prefixOperatorExpressionSE::getter_mOp (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOp ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionSE GALGAS_prefixOperatorExpressionSE::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expressionSE result ;
  if (NULL != mObjectPtr) {
    const cPtr_prefixOperatorExpressionSE * p = (const cPtr_prefixOperatorExpressionSE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_prefixOperatorExpressionSE) ;
    result = p->mProperty_mExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionSE cPtr_prefixOperatorExpressionSE::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                 Pointer class for @prefixOperatorExpressionSE class                                 *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_prefixOperatorExpressionSE::cPtr_prefixOperatorExpressionSE (const GALGAS_location & in_mOperatorLocation,
                                                                  const GALGAS_prefixOperator & in_mOp,
                                                                  const GALGAS_expressionSE & in_mExpression
                                                                  COMMA_LOCATION_ARGS) :
cPtr_expressionSE (THERE),
mProperty_mOperatorLocation (in_mOperatorLocation),
mProperty_mOp (in_mOp),
mProperty_mExpression (in_mExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_prefixOperatorExpressionSE::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_prefixOperatorExpressionSE ;
}

void cPtr_prefixOperatorExpressionSE::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "[@prefixOperatorExpressionSE:" ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOp.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_prefixOperatorExpressionSE::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_prefixOperatorExpressionSE (mProperty_mOperatorLocation, mProperty_mOp, mProperty_mExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @prefixOperatorExpressionSE type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_prefixOperatorExpressionSE ("prefixOperatorExpressionSE",
                                                   & kTypeDescriptor_GALGAS_expressionSE) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_prefixOperatorExpressionSE::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_prefixOperatorExpressionSE ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_prefixOperatorExpressionSE::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_prefixOperatorExpressionSE (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefixOperatorExpressionSE GALGAS_prefixOperatorExpressionSE::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_prefixOperatorExpressionSE result ;
  const GALGAS_prefixOperatorExpressionSE * p = (const GALGAS_prefixOperatorExpressionSE *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_prefixOperatorExpressionSE *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("prefixOperatorExpressionSE", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_literalBooleanInExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_literalBooleanInExpressionAST * p = (const cPtr_literalBooleanInExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_literalBooleanInExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mValue.objectCompare (p->mProperty_mValue) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_literalBooleanInExpressionAST::objectCompare (const GALGAS_literalBooleanInExpressionAST & inOperand) const {
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

GALGAS_literalBooleanInExpressionAST::GALGAS_literalBooleanInExpressionAST (void) :
GALGAS_expressionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literalBooleanInExpressionAST GALGAS_literalBooleanInExpressionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_literalBooleanInExpressionAST::constructor_new (GALGAS_bool::constructor_default (HERE)
                                                                COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literalBooleanInExpressionAST::GALGAS_literalBooleanInExpressionAST (const cPtr_literalBooleanInExpressionAST * inSourcePtr) :
GALGAS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literalBooleanInExpressionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literalBooleanInExpressionAST GALGAS_literalBooleanInExpressionAST::constructor_new (const GALGAS_bool & inAttribute_mValue
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_literalBooleanInExpressionAST result ;
  if (inAttribute_mValue.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_literalBooleanInExpressionAST (inAttribute_mValue COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_literalBooleanInExpressionAST::getter_mValue (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_literalBooleanInExpressionAST * p = (const cPtr_literalBooleanInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalBooleanInExpressionAST) ;
    result = p->mProperty_mValue ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_literalBooleanInExpressionAST::getter_mValue (UNUSED_LOCATION_ARGS) const {
  return mProperty_mValue ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                               Pointer class for @literalBooleanInExpressionAST class                                *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_literalBooleanInExpressionAST::cPtr_literalBooleanInExpressionAST (const GALGAS_bool & in_mValue
                                                                        COMMA_LOCATION_ARGS) :
cPtr_expressionAST (THERE),
mProperty_mValue (in_mValue) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_literalBooleanInExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalBooleanInExpressionAST ;
}

void cPtr_literalBooleanInExpressionAST::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "[@literalBooleanInExpressionAST:" ;
  mProperty_mValue.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_literalBooleanInExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_literalBooleanInExpressionAST (mProperty_mValue COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @literalBooleanInExpressionAST type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_literalBooleanInExpressionAST ("literalBooleanInExpressionAST",
                                                      & kTypeDescriptor_GALGAS_expressionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_literalBooleanInExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalBooleanInExpressionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_literalBooleanInExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_literalBooleanInExpressionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literalBooleanInExpressionAST GALGAS_literalBooleanInExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_literalBooleanInExpressionAST result ;
  const GALGAS_literalBooleanInExpressionAST * p = (const GALGAS_literalBooleanInExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_literalBooleanInExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalBooleanInExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_literalBooleanInExpressionSE::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_literalBooleanInExpressionSE * p = (const cPtr_literalBooleanInExpressionSE *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_literalBooleanInExpressionSE) ;
  if (kOperandEqual == result) {
    result = mProperty_mValue.objectCompare (p->mProperty_mValue) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_literalBooleanInExpressionSE::objectCompare (const GALGAS_literalBooleanInExpressionSE & inOperand) const {
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

GALGAS_literalBooleanInExpressionSE::GALGAS_literalBooleanInExpressionSE (void) :
GALGAS_expressionSE () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literalBooleanInExpressionSE GALGAS_literalBooleanInExpressionSE::constructor_default (LOCATION_ARGS) {
  return GALGAS_literalBooleanInExpressionSE::constructor_new (GALGAS_bool::constructor_default (HERE)
                                                               COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literalBooleanInExpressionSE::GALGAS_literalBooleanInExpressionSE (const cPtr_literalBooleanInExpressionSE * inSourcePtr) :
GALGAS_expressionSE (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literalBooleanInExpressionSE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literalBooleanInExpressionSE GALGAS_literalBooleanInExpressionSE::constructor_new (const GALGAS_bool & inAttribute_mValue
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_literalBooleanInExpressionSE result ;
  if (inAttribute_mValue.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_literalBooleanInExpressionSE (inAttribute_mValue COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_literalBooleanInExpressionSE::getter_mValue (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_literalBooleanInExpressionSE * p = (const cPtr_literalBooleanInExpressionSE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalBooleanInExpressionSE) ;
    result = p->mProperty_mValue ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_literalBooleanInExpressionSE::getter_mValue (UNUSED_LOCATION_ARGS) const {
  return mProperty_mValue ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                Pointer class for @literalBooleanInExpressionSE class                                *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_literalBooleanInExpressionSE::cPtr_literalBooleanInExpressionSE (const GALGAS_bool & in_mValue
                                                                      COMMA_LOCATION_ARGS) :
cPtr_expressionSE (THERE),
mProperty_mValue (in_mValue) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_literalBooleanInExpressionSE::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalBooleanInExpressionSE ;
}

void cPtr_literalBooleanInExpressionSE::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "[@literalBooleanInExpressionSE:" ;
  mProperty_mValue.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_literalBooleanInExpressionSE::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_literalBooleanInExpressionSE (mProperty_mValue COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @literalBooleanInExpressionSE type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_literalBooleanInExpressionSE ("literalBooleanInExpressionSE",
                                                     & kTypeDescriptor_GALGAS_expressionSE) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_literalBooleanInExpressionSE::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalBooleanInExpressionSE ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_literalBooleanInExpressionSE::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_literalBooleanInExpressionSE (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literalBooleanInExpressionSE GALGAS_literalBooleanInExpressionSE::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_literalBooleanInExpressionSE result ;
  const GALGAS_literalBooleanInExpressionSE * p = (const GALGAS_literalBooleanInExpressionSE *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_literalBooleanInExpressionSE *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalBooleanInExpressionSE", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Class for element of '@registerIntegerFieldListAST' list                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_registerIntegerFieldListAST : public cCollectionElement {
  public : GALGAS_registerIntegerFieldListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_registerIntegerFieldListAST (const GALGAS_lstring & in_mFieldName,
                                                           const GALGAS_expressionAST & in_mExpression,
                                                           const GALGAS_location & in_mExpressionLocation
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

cCollectionElement_registerIntegerFieldListAST::cCollectionElement_registerIntegerFieldListAST (const GALGAS_lstring & in_mFieldName,
                                                                                                const GALGAS_expressionAST & in_mExpression,
                                                                                                const GALGAS_location & in_mExpressionLocation
                                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mFieldName, in_mExpression, in_mExpressionLocation) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_registerIntegerFieldListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_registerIntegerFieldListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_registerIntegerFieldListAST (mObject.mProperty_mFieldName, mObject.mProperty_mExpression, mObject.mProperty_mExpressionLocation COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_registerIntegerFieldListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFieldName" ":" ;
  mObject.mProperty_mFieldName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mExpression" ":" ;
  mObject.mProperty_mExpression.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mExpressionLocation" ":" ;
  mObject.mProperty_mExpressionLocation.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_registerIntegerFieldListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_registerIntegerFieldListAST * operand = (cCollectionElement_registerIntegerFieldListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_registerIntegerFieldListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerIntegerFieldListAST::GALGAS_registerIntegerFieldListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerIntegerFieldListAST::GALGAS_registerIntegerFieldListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerIntegerFieldListAST GALGAS_registerIntegerFieldListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_registerIntegerFieldListAST  (capCollectionElementArray ()) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerIntegerFieldListAST GALGAS_registerIntegerFieldListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                  const GALGAS_expressionAST & inOperand1,
                                                                                                  const GALGAS_location & inOperand2
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_registerIntegerFieldListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_registerIntegerFieldListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_registerIntegerFieldListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_registerIntegerFieldListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                    const GALGAS_lstring & in_mFieldName,
                                                                    const GALGAS_expressionAST & in_mExpression,
                                                                    const GALGAS_location & in_mExpressionLocation
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_registerIntegerFieldListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_registerIntegerFieldListAST (in_mFieldName,
                                                                 in_mExpression,
                                                                 in_mExpressionLocation COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_registerIntegerFieldListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                              const GALGAS_expressionAST & inOperand1,
                                                              const GALGAS_location & inOperand2
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_registerIntegerFieldListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_registerIntegerFieldListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                               const GALGAS_expressionAST inOperand1,
                                                               const GALGAS_location inOperand2,
                                                               const GALGAS_uint inInsertionIndex,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_registerIntegerFieldListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_registerIntegerFieldListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                               GALGAS_expressionAST & outOperand1,
                                                               GALGAS_location & outOperand2,
                                                               const GALGAS_uint inRemoveIndex,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_registerIntegerFieldListAST * p = (cCollectionElement_registerIntegerFieldListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_registerIntegerFieldListAST) ;
      outOperand0 = p->mObject.mProperty_mFieldName ;
      outOperand1 = p->mObject.mProperty_mExpression ;
      outOperand2 = p->mObject.mProperty_mExpressionLocation ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_registerIntegerFieldListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                          GALGAS_expressionAST & outOperand1,
                                                          GALGAS_location & outOperand2,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_registerIntegerFieldListAST * p = (cCollectionElement_registerIntegerFieldListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_registerIntegerFieldListAST) ;
    outOperand0 = p->mObject.mProperty_mFieldName ;
    outOperand1 = p->mObject.mProperty_mExpression ;
    outOperand2 = p->mObject.mProperty_mExpressionLocation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_registerIntegerFieldListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                         GALGAS_expressionAST & outOperand1,
                                                         GALGAS_location & outOperand2,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_registerIntegerFieldListAST * p = (cCollectionElement_registerIntegerFieldListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_registerIntegerFieldListAST) ;
    outOperand0 = p->mObject.mProperty_mFieldName ;
    outOperand1 = p->mObject.mProperty_mExpression ;
    outOperand2 = p->mObject.mProperty_mExpressionLocation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_registerIntegerFieldListAST::method_first (GALGAS_lstring & outOperand0,
                                                       GALGAS_expressionAST & outOperand1,
                                                       GALGAS_location & outOperand2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_registerIntegerFieldListAST * p = (cCollectionElement_registerIntegerFieldListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_registerIntegerFieldListAST) ;
    outOperand0 = p->mObject.mProperty_mFieldName ;
    outOperand1 = p->mObject.mProperty_mExpression ;
    outOperand2 = p->mObject.mProperty_mExpressionLocation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_registerIntegerFieldListAST::method_last (GALGAS_lstring & outOperand0,
                                                      GALGAS_expressionAST & outOperand1,
                                                      GALGAS_location & outOperand2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_registerIntegerFieldListAST * p = (cCollectionElement_registerIntegerFieldListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_registerIntegerFieldListAST) ;
    outOperand0 = p->mObject.mProperty_mFieldName ;
    outOperand1 = p->mObject.mProperty_mExpression ;
    outOperand2 = p->mObject.mProperty_mExpressionLocation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerIntegerFieldListAST GALGAS_registerIntegerFieldListAST::add_operation (const GALGAS_registerIntegerFieldListAST & inOperand,
                                                                                      C_Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_registerIntegerFieldListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerIntegerFieldListAST GALGAS_registerIntegerFieldListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_registerIntegerFieldListAST result = GALGAS_registerIntegerFieldListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerIntegerFieldListAST GALGAS_registerIntegerFieldListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_registerIntegerFieldListAST result = GALGAS_registerIntegerFieldListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerIntegerFieldListAST GALGAS_registerIntegerFieldListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_registerIntegerFieldListAST result = GALGAS_registerIntegerFieldListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_registerIntegerFieldListAST::plusAssign_operation (const GALGAS_registerIntegerFieldListAST inOperand,
                                                               C_Compiler * /* inCompiler */
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_registerIntegerFieldListAST::getter_mFieldNameAtIndex (const GALGAS_uint & inIndex,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_registerIntegerFieldListAST * p = (cCollectionElement_registerIntegerFieldListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_registerIntegerFieldListAST) ;
    result = p->mObject.mProperty_mFieldName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST GALGAS_registerIntegerFieldListAST::getter_mExpressionAtIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_registerIntegerFieldListAST * p = (cCollectionElement_registerIntegerFieldListAST *) attributes.ptr () ;
  GALGAS_expressionAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_registerIntegerFieldListAST) ;
    result = p->mObject.mProperty_mExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_registerIntegerFieldListAST::getter_mExpressionLocationAtIndex (const GALGAS_uint & inIndex,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_registerIntegerFieldListAST * p = (cCollectionElement_registerIntegerFieldListAST *) attributes.ptr () ;
  GALGAS_location result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_registerIntegerFieldListAST) ;
    result = p->mObject.mProperty_mExpressionLocation ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_registerIntegerFieldListAST::cEnumerator_registerIntegerFieldListAST (const GALGAS_registerIntegerFieldListAST & inEnumeratedObject,
                                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerIntegerFieldListAST_2D_element cEnumerator_registerIntegerFieldListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_registerIntegerFieldListAST * p = (const cCollectionElement_registerIntegerFieldListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_registerIntegerFieldListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_registerIntegerFieldListAST::current_mFieldName (LOCATION_ARGS) const {
  const cCollectionElement_registerIntegerFieldListAST * p = (const cCollectionElement_registerIntegerFieldListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_registerIntegerFieldListAST) ;
  return p->mObject.mProperty_mFieldName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST cEnumerator_registerIntegerFieldListAST::current_mExpression (LOCATION_ARGS) const {
  const cCollectionElement_registerIntegerFieldListAST * p = (const cCollectionElement_registerIntegerFieldListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_registerIntegerFieldListAST) ;
  return p->mObject.mProperty_mExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cEnumerator_registerIntegerFieldListAST::current_mExpressionLocation (LOCATION_ARGS) const {
  const cCollectionElement_registerIntegerFieldListAST * p = (const cCollectionElement_registerIntegerFieldListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_registerIntegerFieldListAST) ;
  return p->mObject.mProperty_mExpressionLocation ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @registerIntegerFieldListAST type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_registerIntegerFieldListAST ("registerIntegerFieldListAST",
                                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_registerIntegerFieldListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_registerIntegerFieldListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_registerIntegerFieldListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_registerIntegerFieldListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerIntegerFieldListAST GALGAS_registerIntegerFieldListAST::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_registerIntegerFieldListAST result ;
  const GALGAS_registerIntegerFieldListAST * p = (const GALGAS_registerIntegerFieldListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_registerIntegerFieldListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("registerIntegerFieldListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Class for element of '@registerIntegerFieldListSE' list                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_registerIntegerFieldListSE : public cCollectionElement {
  public : GALGAS_registerIntegerFieldListSE_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_registerIntegerFieldListSE (const GALGAS_lstring & in_mFieldName,
                                                          const GALGAS_expressionSE & in_mExpression,
                                                          const GALGAS_location & in_mExpressionLocation
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

cCollectionElement_registerIntegerFieldListSE::cCollectionElement_registerIntegerFieldListSE (const GALGAS_lstring & in_mFieldName,
                                                                                              const GALGAS_expressionSE & in_mExpression,
                                                                                              const GALGAS_location & in_mExpressionLocation
                                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mFieldName, in_mExpression, in_mExpressionLocation) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_registerIntegerFieldListSE::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_registerIntegerFieldListSE::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_registerIntegerFieldListSE (mObject.mProperty_mFieldName, mObject.mProperty_mExpression, mObject.mProperty_mExpressionLocation COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_registerIntegerFieldListSE::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFieldName" ":" ;
  mObject.mProperty_mFieldName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mExpression" ":" ;
  mObject.mProperty_mExpression.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mExpressionLocation" ":" ;
  mObject.mProperty_mExpressionLocation.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_registerIntegerFieldListSE::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_registerIntegerFieldListSE * operand = (cCollectionElement_registerIntegerFieldListSE *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_registerIntegerFieldListSE) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerIntegerFieldListSE::GALGAS_registerIntegerFieldListSE (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerIntegerFieldListSE::GALGAS_registerIntegerFieldListSE (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerIntegerFieldListSE GALGAS_registerIntegerFieldListSE::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_registerIntegerFieldListSE  (capCollectionElementArray ()) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerIntegerFieldListSE GALGAS_registerIntegerFieldListSE::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                const GALGAS_expressionSE & inOperand1,
                                                                                                const GALGAS_location & inOperand2
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_registerIntegerFieldListSE result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_registerIntegerFieldListSE (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_registerIntegerFieldListSE::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_registerIntegerFieldListSE::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                   const GALGAS_lstring & in_mFieldName,
                                                                   const GALGAS_expressionSE & in_mExpression,
                                                                   const GALGAS_location & in_mExpressionLocation
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_registerIntegerFieldListSE * p = NULL ;
  macroMyNew (p, cCollectionElement_registerIntegerFieldListSE (in_mFieldName,
                                                                in_mExpression,
                                                                in_mExpressionLocation COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_registerIntegerFieldListSE::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                             const GALGAS_expressionSE & inOperand1,
                                                             const GALGAS_location & inOperand2
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_registerIntegerFieldListSE (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_registerIntegerFieldListSE::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                              const GALGAS_expressionSE inOperand1,
                                                              const GALGAS_location inOperand2,
                                                              const GALGAS_uint inInsertionIndex,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_registerIntegerFieldListSE (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_registerIntegerFieldListSE::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                              GALGAS_expressionSE & outOperand1,
                                                              GALGAS_location & outOperand2,
                                                              const GALGAS_uint inRemoveIndex,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_registerIntegerFieldListSE * p = (cCollectionElement_registerIntegerFieldListSE *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_registerIntegerFieldListSE) ;
      outOperand0 = p->mObject.mProperty_mFieldName ;
      outOperand1 = p->mObject.mProperty_mExpression ;
      outOperand2 = p->mObject.mProperty_mExpressionLocation ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_registerIntegerFieldListSE::setter_popFirst (GALGAS_lstring & outOperand0,
                                                         GALGAS_expressionSE & outOperand1,
                                                         GALGAS_location & outOperand2,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_registerIntegerFieldListSE * p = (cCollectionElement_registerIntegerFieldListSE *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_registerIntegerFieldListSE) ;
    outOperand0 = p->mObject.mProperty_mFieldName ;
    outOperand1 = p->mObject.mProperty_mExpression ;
    outOperand2 = p->mObject.mProperty_mExpressionLocation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_registerIntegerFieldListSE::setter_popLast (GALGAS_lstring & outOperand0,
                                                        GALGAS_expressionSE & outOperand1,
                                                        GALGAS_location & outOperand2,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_registerIntegerFieldListSE * p = (cCollectionElement_registerIntegerFieldListSE *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_registerIntegerFieldListSE) ;
    outOperand0 = p->mObject.mProperty_mFieldName ;
    outOperand1 = p->mObject.mProperty_mExpression ;
    outOperand2 = p->mObject.mProperty_mExpressionLocation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_registerIntegerFieldListSE::method_first (GALGAS_lstring & outOperand0,
                                                      GALGAS_expressionSE & outOperand1,
                                                      GALGAS_location & outOperand2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_registerIntegerFieldListSE * p = (cCollectionElement_registerIntegerFieldListSE *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_registerIntegerFieldListSE) ;
    outOperand0 = p->mObject.mProperty_mFieldName ;
    outOperand1 = p->mObject.mProperty_mExpression ;
    outOperand2 = p->mObject.mProperty_mExpressionLocation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_registerIntegerFieldListSE::method_last (GALGAS_lstring & outOperand0,
                                                     GALGAS_expressionSE & outOperand1,
                                                     GALGAS_location & outOperand2,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_registerIntegerFieldListSE * p = (cCollectionElement_registerIntegerFieldListSE *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_registerIntegerFieldListSE) ;
    outOperand0 = p->mObject.mProperty_mFieldName ;
    outOperand1 = p->mObject.mProperty_mExpression ;
    outOperand2 = p->mObject.mProperty_mExpressionLocation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerIntegerFieldListSE GALGAS_registerIntegerFieldListSE::add_operation (const GALGAS_registerIntegerFieldListSE & inOperand,
                                                                                    C_Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_registerIntegerFieldListSE result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerIntegerFieldListSE GALGAS_registerIntegerFieldListSE::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_registerIntegerFieldListSE result = GALGAS_registerIntegerFieldListSE::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerIntegerFieldListSE GALGAS_registerIntegerFieldListSE::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_registerIntegerFieldListSE result = GALGAS_registerIntegerFieldListSE::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerIntegerFieldListSE GALGAS_registerIntegerFieldListSE::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_registerIntegerFieldListSE result = GALGAS_registerIntegerFieldListSE::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_registerIntegerFieldListSE::plusAssign_operation (const GALGAS_registerIntegerFieldListSE inOperand,
                                                              C_Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_registerIntegerFieldListSE::getter_mFieldNameAtIndex (const GALGAS_uint & inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_registerIntegerFieldListSE * p = (cCollectionElement_registerIntegerFieldListSE *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_registerIntegerFieldListSE) ;
    result = p->mObject.mProperty_mFieldName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionSE GALGAS_registerIntegerFieldListSE::getter_mExpressionAtIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_registerIntegerFieldListSE * p = (cCollectionElement_registerIntegerFieldListSE *) attributes.ptr () ;
  GALGAS_expressionSE result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_registerIntegerFieldListSE) ;
    result = p->mObject.mProperty_mExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_registerIntegerFieldListSE::getter_mExpressionLocationAtIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_registerIntegerFieldListSE * p = (cCollectionElement_registerIntegerFieldListSE *) attributes.ptr () ;
  GALGAS_location result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_registerIntegerFieldListSE) ;
    result = p->mObject.mProperty_mExpressionLocation ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_registerIntegerFieldListSE::cEnumerator_registerIntegerFieldListSE (const GALGAS_registerIntegerFieldListSE & inEnumeratedObject,
                                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerIntegerFieldListSE_2D_element cEnumerator_registerIntegerFieldListSE::current (LOCATION_ARGS) const {
  const cCollectionElement_registerIntegerFieldListSE * p = (const cCollectionElement_registerIntegerFieldListSE *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_registerIntegerFieldListSE) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_registerIntegerFieldListSE::current_mFieldName (LOCATION_ARGS) const {
  const cCollectionElement_registerIntegerFieldListSE * p = (const cCollectionElement_registerIntegerFieldListSE *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_registerIntegerFieldListSE) ;
  return p->mObject.mProperty_mFieldName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionSE cEnumerator_registerIntegerFieldListSE::current_mExpression (LOCATION_ARGS) const {
  const cCollectionElement_registerIntegerFieldListSE * p = (const cCollectionElement_registerIntegerFieldListSE *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_registerIntegerFieldListSE) ;
  return p->mObject.mProperty_mExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cEnumerator_registerIntegerFieldListSE::current_mExpressionLocation (LOCATION_ARGS) const {
  const cCollectionElement_registerIntegerFieldListSE * p = (const cCollectionElement_registerIntegerFieldListSE *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_registerIntegerFieldListSE) ;
  return p->mObject.mProperty_mExpressionLocation ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @registerIntegerFieldListSE type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_registerIntegerFieldListSE ("registerIntegerFieldListSE",
                                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_registerIntegerFieldListSE::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_registerIntegerFieldListSE ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_registerIntegerFieldListSE::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_registerIntegerFieldListSE (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerIntegerFieldListSE GALGAS_registerIntegerFieldListSE::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_registerIntegerFieldListSE result ;
  const GALGAS_registerIntegerFieldListSE * p = (const GALGAS_registerIntegerFieldListSE *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_registerIntegerFieldListSE *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("registerIntegerFieldListSE", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_selfInExpressionAST_selfAt::cEnumAssociatedValues_selfInExpressionAST_selfAt (const GALGAS_location & inAssociatedValue0
                                                                                                    COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_selfInExpressionAST_selfAt::description (C_String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_selfInExpressionAST_selfAt::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_selfInExpressionAST_selfAt * ptr = dynamic_cast<const cEnumAssociatedValues_selfInExpressionAST_selfAt *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_selfInExpressionAST::GALGAS_selfInExpressionAST (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_selfInExpressionAST GALGAS_selfInExpressionAST::constructor_noSelf (UNUSED_LOCATION_ARGS) {
  GALGAS_selfInExpressionAST result ;
  result.mEnum = kEnum_noSelf ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_selfInExpressionAST GALGAS_selfInExpressionAST::constructor_selfAt (const GALGAS_location & inAssociatedValue0
                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_selfInExpressionAST result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_selfAt ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_selfInExpressionAST_selfAt (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_selfInExpressionAST::method_selfAt (GALGAS_location & outAssociatedValue0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_selfAt) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @selfInExpressionAST selfAt invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_selfInExpressionAST_selfAt * ptr = (const cEnumAssociatedValues_selfInExpressionAST_selfAt *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * gEnumNameArrayFor_selfInExpressionAST [3] = {
  "(not built)",
  "noSelf",
  "selfAt"
} ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_selfInExpressionAST::getter_isNoSelf (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_noSelf == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_selfInExpressionAST::getter_isSelfAt (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_selfAt == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_selfInExpressionAST::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "<enum @selfInExpressionAST: " << gEnumNameArrayFor_selfInExpressionAST [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_selfInExpressionAST::objectCompare (const GALGAS_selfInExpressionAST & inOperand) const {
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
//                                              @selfInExpressionAST type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_selfInExpressionAST ("selfInExpressionAST",
                                            NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_selfInExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfInExpressionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_selfInExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_selfInExpressionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_selfInExpressionAST GALGAS_selfInExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_selfInExpressionAST result ;
  const GALGAS_selfInExpressionAST * p = (const GALGAS_selfInExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_selfInExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selfInExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_effectiveArgumentPassingModeAST_input::cEnumAssociatedValues_effectiveArgumentPassingModeAST_input (const GALGAS_lstring & inAssociatedValue0
                                                                                                                          COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_effectiveArgumentPassingModeAST_input::description (C_String & ioString,
                                                                               const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_effectiveArgumentPassingModeAST_input::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_effectiveArgumentPassingModeAST_input * ptr = dynamic_cast<const cEnumAssociatedValues_effectiveArgumentPassingModeAST_input *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType::cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType (const GALGAS_bool & inAssociatedValue0,
                                                                                                                                          const GALGAS_lstring & inAssociatedValue1,
                                                                                                                                          const GALGAS_lstring & inAssociatedValue2
                                                                                                                                          COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1),
mAssociatedValue2 (inAssociatedValue2) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType::description (C_String & ioString,
                                                                                       const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  mAssociatedValue2.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType * ptr = dynamic_cast<const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType *> (inOperand) ;
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

cEnumAssociatedValues_effectiveArgumentPassingModeAST_output::cEnumAssociatedValues_effectiveArgumentPassingModeAST_output (const GALGAS_expressionAST & inAssociatedValue0,
                                                                                                                            const GALGAS_location & inAssociatedValue1
                                                                                                                            COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_effectiveArgumentPassingModeAST_output::description (C_String & ioString,
                                                                                const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_effectiveArgumentPassingModeAST_output::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output * ptr = dynamic_cast<const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output *> (inOperand) ;
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

cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInput::cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInput (const GALGAS_lstring & inAssociatedValue0
                                                                                                                                      COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInput::description (C_String & ioString,
                                                                                     const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInput::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInput * ptr = dynamic_cast<const cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInput *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInputSelfVariable::cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInputSelfVariable (const GALGAS_lstring & inAssociatedValue0
                                                                                                                                                              COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInputSelfVariable::description (C_String & ioString,
                                                                                                 const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInputSelfVariable::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInputSelfVariable * ptr = dynamic_cast<const cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInputSelfVariable *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_effectiveArgumentPassingModeAST::GALGAS_effectiveArgumentPassingModeAST (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_effectiveArgumentPassingModeAST GALGAS_effectiveArgumentPassingModeAST::constructor_input (const GALGAS_lstring & inAssociatedValue0
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_effectiveArgumentPassingModeAST result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_input ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_effectiveArgumentPassingModeAST_input (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_effectiveArgumentPassingModeAST GALGAS_effectiveArgumentPassingModeAST::constructor_inputWithType (const GALGAS_bool & inAssociatedValue0,
                                                                                                          const GALGAS_lstring & inAssociatedValue1,
                                                                                                          const GALGAS_lstring & inAssociatedValue2
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_effectiveArgumentPassingModeAST result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid () && inAssociatedValue2.isValid ()) {
    result.mEnum = kEnum_inputWithType ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_effectiveArgumentPassingModeAST GALGAS_effectiveArgumentPassingModeAST::constructor_output (const GALGAS_expressionAST & inAssociatedValue0,
                                                                                                   const GALGAS_location & inAssociatedValue1
                                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_effectiveArgumentPassingModeAST result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_output ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_effectiveArgumentPassingModeAST_output (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_effectiveArgumentPassingModeAST GALGAS_effectiveArgumentPassingModeAST::constructor_outputInput (const GALGAS_lstring & inAssociatedValue0
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_effectiveArgumentPassingModeAST result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_outputInput ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInput (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_effectiveArgumentPassingModeAST GALGAS_effectiveArgumentPassingModeAST::constructor_outputInputSelfVariable (const GALGAS_lstring & inAssociatedValue0
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_effectiveArgumentPassingModeAST result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_outputInputSelfVariable ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInputSelfVariable (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_effectiveArgumentPassingModeAST::method_input (GALGAS_lstring & outAssociatedValue0,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_input) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @effectiveArgumentPassingModeAST input invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_effectiveArgumentPassingModeAST_input * ptr = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_input *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_effectiveArgumentPassingModeAST::method_inputWithType (GALGAS_bool & outAssociatedValue0,
                                                                   GALGAS_lstring & outAssociatedValue1,
                                                                   GALGAS_lstring & outAssociatedValue2,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_inputWithType) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    outAssociatedValue2.drop () ;
    C_String s ;
    s << "method @effectiveArgumentPassingModeAST inputWithType invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType * ptr = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_effectiveArgumentPassingModeAST::method_output (GALGAS_expressionAST & outAssociatedValue0,
                                                            GALGAS_location & outAssociatedValue1,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_output) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    C_String s ;
    s << "method @effectiveArgumentPassingModeAST output invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output * ptr = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_effectiveArgumentPassingModeAST::method_outputInput (GALGAS_lstring & outAssociatedValue0,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_outputInput) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @effectiveArgumentPassingModeAST outputInput invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInput * ptr = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInput *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_effectiveArgumentPassingModeAST::method_outputInputSelfVariable (GALGAS_lstring & outAssociatedValue0,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_outputInputSelfVariable) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @effectiveArgumentPassingModeAST outputInputSelfVariable invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInputSelfVariable * ptr = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInputSelfVariable *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * gEnumNameArrayFor_effectiveArgumentPassingModeAST [6] = {
  "(not built)",
  "input",
  "inputWithType",
  "output",
  "outputInput",
  "outputInputSelfVariable"
} ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_effectiveArgumentPassingModeAST::getter_isInput (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_input == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_effectiveArgumentPassingModeAST::getter_isInputWithType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_inputWithType == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_effectiveArgumentPassingModeAST::getter_isOutput (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_output == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_effectiveArgumentPassingModeAST::getter_isOutputInput (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_outputInput == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_effectiveArgumentPassingModeAST::getter_isOutputInputSelfVariable (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_outputInputSelfVariable == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_effectiveArgumentPassingModeAST::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "<enum @effectiveArgumentPassingModeAST: " << gEnumNameArrayFor_effectiveArgumentPassingModeAST [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_effectiveArgumentPassingModeAST::objectCompare (const GALGAS_effectiveArgumentPassingModeAST & inOperand) const {
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
//                                        @effectiveArgumentPassingModeAST type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_effectiveArgumentPassingModeAST ("effectiveArgumentPassingModeAST",
                                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_effectiveArgumentPassingModeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_effectiveArgumentPassingModeAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_effectiveArgumentPassingModeAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_effectiveArgumentPassingModeAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_effectiveArgumentPassingModeAST GALGAS_effectiveArgumentPassingModeAST::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_effectiveArgumentPassingModeAST result ;
  const GALGAS_effectiveArgumentPassingModeAST * p = (const GALGAS_effectiveArgumentPassingModeAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_effectiveArgumentPassingModeAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("effectiveArgumentPassingModeAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Extension Getter '@effectiveArgumentPassingModeAST matchingFormalArgument'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string extensionGetter_matchingFormalArgument (const GALGAS_effectiveArgumentPassingModeAST & inObject,
                                                      C_Compiler * /* inCompiler */
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_effectiveArgumentPassingModeAST temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_effectiveArgumentPassingModeAST::kNotBuilt:
    break ;
  case GALGAS_effectiveArgumentPassingModeAST::kEnum_input:
    {
      result_outResult = GALGAS_string ("!") ;
    }
    break ;
  case GALGAS_effectiveArgumentPassingModeAST::kEnum_inputWithType:
    {
      result_outResult = GALGAS_string ("!") ;
    }
    break ;
  case GALGAS_effectiveArgumentPassingModeAST::kEnum_output:
    {
      result_outResult = GALGAS_string ("\?") ;
    }
    break ;
  case GALGAS_effectiveArgumentPassingModeAST::kEnum_outputInput:
    {
      result_outResult = GALGAS_string ("\?!") ;
    }
    break ;
  case GALGAS_effectiveArgumentPassingModeAST::kEnum_outputInputSelfVariable:
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
//                                Class for element of '@effectiveArgumentListAST' list                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_effectiveArgumentListAST : public cCollectionElement {
  public : GALGAS_effectiveArgumentListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_effectiveArgumentListAST (const GALGAS_effectiveArgumentPassingModeAST & in_mEffectiveParameterKind,
                                                        const GALGAS_lstring & in_mSelector
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

cCollectionElement_effectiveArgumentListAST::cCollectionElement_effectiveArgumentListAST (const GALGAS_effectiveArgumentPassingModeAST & in_mEffectiveParameterKind,
                                                                                          const GALGAS_lstring & in_mSelector
                                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mEffectiveParameterKind, in_mSelector) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_effectiveArgumentListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_effectiveArgumentListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_effectiveArgumentListAST (mObject.mProperty_mEffectiveParameterKind, mObject.mProperty_mSelector COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_effectiveArgumentListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEffectiveParameterKind" ":" ;
  mObject.mProperty_mEffectiveParameterKind.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSelector" ":" ;
  mObject.mProperty_mSelector.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_effectiveArgumentListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_effectiveArgumentListAST * operand = (cCollectionElement_effectiveArgumentListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_effectiveArgumentListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_effectiveArgumentListAST::GALGAS_effectiveArgumentListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_effectiveArgumentListAST::GALGAS_effectiveArgumentListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_effectiveArgumentListAST GALGAS_effectiveArgumentListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_effectiveArgumentListAST  (capCollectionElementArray ()) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_effectiveArgumentListAST GALGAS_effectiveArgumentListAST::constructor_listWithValue (const GALGAS_effectiveArgumentPassingModeAST & inOperand0,
                                                                                            const GALGAS_lstring & inOperand1
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_effectiveArgumentListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_effectiveArgumentListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_effectiveArgumentListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_effectiveArgumentListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                 const GALGAS_effectiveArgumentPassingModeAST & in_mEffectiveParameterKind,
                                                                 const GALGAS_lstring & in_mSelector
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_effectiveArgumentListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_effectiveArgumentListAST (in_mEffectiveParameterKind,
                                                              in_mSelector COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_effectiveArgumentListAST::addAssign_operation (const GALGAS_effectiveArgumentPassingModeAST & inOperand0,
                                                           const GALGAS_lstring & inOperand1
                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_effectiveArgumentListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_effectiveArgumentListAST::setter_insertAtIndex (const GALGAS_effectiveArgumentPassingModeAST inOperand0,
                                                            const GALGAS_lstring inOperand1,
                                                            const GALGAS_uint inInsertionIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_effectiveArgumentListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_effectiveArgumentListAST::setter_removeAtIndex (GALGAS_effectiveArgumentPassingModeAST & outOperand0,
                                                            GALGAS_lstring & outOperand1,
                                                            const GALGAS_uint inRemoveIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_effectiveArgumentListAST * p = (cCollectionElement_effectiveArgumentListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_effectiveArgumentListAST) ;
      outOperand0 = p->mObject.mProperty_mEffectiveParameterKind ;
      outOperand1 = p->mObject.mProperty_mSelector ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_effectiveArgumentListAST::setter_popFirst (GALGAS_effectiveArgumentPassingModeAST & outOperand0,
                                                       GALGAS_lstring & outOperand1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_effectiveArgumentListAST * p = (cCollectionElement_effectiveArgumentListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_effectiveArgumentListAST) ;
    outOperand0 = p->mObject.mProperty_mEffectiveParameterKind ;
    outOperand1 = p->mObject.mProperty_mSelector ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_effectiveArgumentListAST::setter_popLast (GALGAS_effectiveArgumentPassingModeAST & outOperand0,
                                                      GALGAS_lstring & outOperand1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_effectiveArgumentListAST * p = (cCollectionElement_effectiveArgumentListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_effectiveArgumentListAST) ;
    outOperand0 = p->mObject.mProperty_mEffectiveParameterKind ;
    outOperand1 = p->mObject.mProperty_mSelector ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_effectiveArgumentListAST::method_first (GALGAS_effectiveArgumentPassingModeAST & outOperand0,
                                                    GALGAS_lstring & outOperand1,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_effectiveArgumentListAST * p = (cCollectionElement_effectiveArgumentListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_effectiveArgumentListAST) ;
    outOperand0 = p->mObject.mProperty_mEffectiveParameterKind ;
    outOperand1 = p->mObject.mProperty_mSelector ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_effectiveArgumentListAST::method_last (GALGAS_effectiveArgumentPassingModeAST & outOperand0,
                                                   GALGAS_lstring & outOperand1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_effectiveArgumentListAST * p = (cCollectionElement_effectiveArgumentListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_effectiveArgumentListAST) ;
    outOperand0 = p->mObject.mProperty_mEffectiveParameterKind ;
    outOperand1 = p->mObject.mProperty_mSelector ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_effectiveArgumentListAST GALGAS_effectiveArgumentListAST::add_operation (const GALGAS_effectiveArgumentListAST & inOperand,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_effectiveArgumentListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_effectiveArgumentListAST GALGAS_effectiveArgumentListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_effectiveArgumentListAST result = GALGAS_effectiveArgumentListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_effectiveArgumentListAST GALGAS_effectiveArgumentListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_effectiveArgumentListAST result = GALGAS_effectiveArgumentListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_effectiveArgumentListAST GALGAS_effectiveArgumentListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_effectiveArgumentListAST result = GALGAS_effectiveArgumentListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_effectiveArgumentListAST::plusAssign_operation (const GALGAS_effectiveArgumentListAST inOperand,
                                                            C_Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_effectiveArgumentPassingModeAST GALGAS_effectiveArgumentListAST::getter_mEffectiveParameterKindAtIndex (const GALGAS_uint & inIndex,
                                                                                                               C_Compiler * inCompiler
                                                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_effectiveArgumentListAST * p = (cCollectionElement_effectiveArgumentListAST *) attributes.ptr () ;
  GALGAS_effectiveArgumentPassingModeAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_effectiveArgumentListAST) ;
    result = p->mObject.mProperty_mEffectiveParameterKind ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_effectiveArgumentListAST::getter_mSelectorAtIndex (const GALGAS_uint & inIndex,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_effectiveArgumentListAST * p = (cCollectionElement_effectiveArgumentListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_effectiveArgumentListAST) ;
    result = p->mObject.mProperty_mSelector ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_effectiveArgumentListAST::cEnumerator_effectiveArgumentListAST (const GALGAS_effectiveArgumentListAST & inEnumeratedObject,
                                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_effectiveArgumentListAST_2D_element cEnumerator_effectiveArgumentListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_effectiveArgumentListAST * p = (const cCollectionElement_effectiveArgumentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_effectiveArgumentListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_effectiveArgumentPassingModeAST cEnumerator_effectiveArgumentListAST::current_mEffectiveParameterKind (LOCATION_ARGS) const {
  const cCollectionElement_effectiveArgumentListAST * p = (const cCollectionElement_effectiveArgumentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_effectiveArgumentListAST) ;
  return p->mObject.mProperty_mEffectiveParameterKind ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_effectiveArgumentListAST::current_mSelector (LOCATION_ARGS) const {
  const cCollectionElement_effectiveArgumentListAST * p = (const cCollectionElement_effectiveArgumentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_effectiveArgumentListAST) ;
  return p->mObject.mProperty_mSelector ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @effectiveArgumentListAST type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_effectiveArgumentListAST ("effectiveArgumentListAST",
                                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_effectiveArgumentListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_effectiveArgumentListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_effectiveArgumentListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_effectiveArgumentListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_effectiveArgumentListAST GALGAS_effectiveArgumentListAST::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_effectiveArgumentListAST result ;
  const GALGAS_effectiveArgumentListAST * p = (const GALGAS_effectiveArgumentListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_effectiveArgumentListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("effectiveArgumentListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall::cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall (const GALGAS_effectiveArgumentListAST & inAssociatedValue0,
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

GALGAS_primaryInExpressionAccessAST GALGAS_primaryInExpressionAccessAST::constructor_funcCall (const GALGAS_effectiveArgumentListAST & inAssociatedValue0,
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

void GALGAS_primaryInExpressionAccessAST::method_funcCall (GALGAS_effectiveArgumentListAST & outAssociatedValue0,
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
//                                                                                                                     *
//                            Class for element of '@primaryInExpressionAccessListAST' list                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_primaryInExpressionAccessListAST : public cCollectionElement {
  public : GALGAS_primaryInExpressionAccessListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_primaryInExpressionAccessListAST (const GALGAS_primaryInExpressionAccessAST & in_mAccess
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

cCollectionElement_primaryInExpressionAccessListAST::cCollectionElement_primaryInExpressionAccessListAST (const GALGAS_primaryInExpressionAccessAST & in_mAccess
                                                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mAccess) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_primaryInExpressionAccessListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_primaryInExpressionAccessListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_primaryInExpressionAccessListAST (mObject.mProperty_mAccess COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_primaryInExpressionAccessListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAccess" ":" ;
  mObject.mProperty_mAccess.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_primaryInExpressionAccessListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_primaryInExpressionAccessListAST * operand = (cCollectionElement_primaryInExpressionAccessListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_primaryInExpressionAccessListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_primaryInExpressionAccessListAST::GALGAS_primaryInExpressionAccessListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_primaryInExpressionAccessListAST::GALGAS_primaryInExpressionAccessListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_primaryInExpressionAccessListAST GALGAS_primaryInExpressionAccessListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_primaryInExpressionAccessListAST  (capCollectionElementArray ()) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_primaryInExpressionAccessListAST GALGAS_primaryInExpressionAccessListAST::constructor_listWithValue (const GALGAS_primaryInExpressionAccessAST & inOperand0
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_primaryInExpressionAccessListAST result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_primaryInExpressionAccessListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_primaryInExpressionAccessListAST::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_primaryInExpressionAccessListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                         const GALGAS_primaryInExpressionAccessAST & in_mAccess
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_primaryInExpressionAccessListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_primaryInExpressionAccessListAST (in_mAccess COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_primaryInExpressionAccessListAST::addAssign_operation (const GALGAS_primaryInExpressionAccessAST & inOperand0
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_primaryInExpressionAccessListAST (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_primaryInExpressionAccessListAST::setter_insertAtIndex (const GALGAS_primaryInExpressionAccessAST inOperand0,
                                                                    const GALGAS_uint inInsertionIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_primaryInExpressionAccessListAST (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_primaryInExpressionAccessListAST::setter_removeAtIndex (GALGAS_primaryInExpressionAccessAST & outOperand0,
                                                                    const GALGAS_uint inRemoveIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_primaryInExpressionAccessListAST * p = (cCollectionElement_primaryInExpressionAccessListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_primaryInExpressionAccessListAST) ;
      outOperand0 = p->mObject.mProperty_mAccess ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_primaryInExpressionAccessListAST::setter_popFirst (GALGAS_primaryInExpressionAccessAST & outOperand0,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_primaryInExpressionAccessListAST * p = (cCollectionElement_primaryInExpressionAccessListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_primaryInExpressionAccessListAST) ;
    outOperand0 = p->mObject.mProperty_mAccess ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_primaryInExpressionAccessListAST::setter_popLast (GALGAS_primaryInExpressionAccessAST & outOperand0,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_primaryInExpressionAccessListAST * p = (cCollectionElement_primaryInExpressionAccessListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_primaryInExpressionAccessListAST) ;
    outOperand0 = p->mObject.mProperty_mAccess ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_primaryInExpressionAccessListAST::method_first (GALGAS_primaryInExpressionAccessAST & outOperand0,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_primaryInExpressionAccessListAST * p = (cCollectionElement_primaryInExpressionAccessListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_primaryInExpressionAccessListAST) ;
    outOperand0 = p->mObject.mProperty_mAccess ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_primaryInExpressionAccessListAST::method_last (GALGAS_primaryInExpressionAccessAST & outOperand0,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_primaryInExpressionAccessListAST * p = (cCollectionElement_primaryInExpressionAccessListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_primaryInExpressionAccessListAST) ;
    outOperand0 = p->mObject.mProperty_mAccess ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_primaryInExpressionAccessListAST GALGAS_primaryInExpressionAccessListAST::add_operation (const GALGAS_primaryInExpressionAccessListAST & inOperand,
                                                                                                C_Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_primaryInExpressionAccessListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_primaryInExpressionAccessListAST GALGAS_primaryInExpressionAccessListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_primaryInExpressionAccessListAST result = GALGAS_primaryInExpressionAccessListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_primaryInExpressionAccessListAST GALGAS_primaryInExpressionAccessListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_primaryInExpressionAccessListAST result = GALGAS_primaryInExpressionAccessListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_primaryInExpressionAccessListAST GALGAS_primaryInExpressionAccessListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_primaryInExpressionAccessListAST result = GALGAS_primaryInExpressionAccessListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_primaryInExpressionAccessListAST::plusAssign_operation (const GALGAS_primaryInExpressionAccessListAST inOperand,
                                                                    C_Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_primaryInExpressionAccessAST GALGAS_primaryInExpressionAccessListAST::getter_mAccessAtIndex (const GALGAS_uint & inIndex,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_primaryInExpressionAccessListAST * p = (cCollectionElement_primaryInExpressionAccessListAST *) attributes.ptr () ;
  GALGAS_primaryInExpressionAccessAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_primaryInExpressionAccessListAST) ;
    result = p->mObject.mProperty_mAccess ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_primaryInExpressionAccessListAST::cEnumerator_primaryInExpressionAccessListAST (const GALGAS_primaryInExpressionAccessListAST & inEnumeratedObject,
                                                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_primaryInExpressionAccessListAST_2D_element cEnumerator_primaryInExpressionAccessListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_primaryInExpressionAccessListAST * p = (const cCollectionElement_primaryInExpressionAccessListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_primaryInExpressionAccessListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_primaryInExpressionAccessAST cEnumerator_primaryInExpressionAccessListAST::current_mAccess (LOCATION_ARGS) const {
  const cCollectionElement_primaryInExpressionAccessListAST * p = (const cCollectionElement_primaryInExpressionAccessListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_primaryInExpressionAccessListAST) ;
  return p->mObject.mProperty_mAccess ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @primaryInExpressionAccessListAST type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_primaryInExpressionAccessListAST ("primaryInExpressionAccessListAST",
                                                         NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_primaryInExpressionAccessListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_primaryInExpressionAccessListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_primaryInExpressionAccessListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_primaryInExpressionAccessListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_primaryInExpressionAccessListAST GALGAS_primaryInExpressionAccessListAST::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_primaryInExpressionAccessListAST result ;
  const GALGAS_primaryInExpressionAccessListAST * p = (const GALGAS_primaryInExpressionAccessListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_primaryInExpressionAccessListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("primaryInExpressionAccessListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_primaryInExpressionAccessSE_property::cEnumAssociatedValues_primaryInExpressionAccessSE_property (const GALGAS_lstring & inAssociatedValue0
                                                                                                                        COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_primaryInExpressionAccessSE_property::description (C_String & ioString,
                                                                              const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_primaryInExpressionAccessSE_property::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_primaryInExpressionAccessSE_property * ptr = dynamic_cast<const cEnumAssociatedValues_primaryInExpressionAccessSE_property *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_primaryInExpressionAccessSE_arrayAccess::cEnumAssociatedValues_primaryInExpressionAccessSE_arrayAccess (const GALGAS_expressionSE & inAssociatedValue0,
                                                                                                                              const GALGAS_location & inAssociatedValue1
                                                                                                                              COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_primaryInExpressionAccessSE_arrayAccess::description (C_String & ioString,
                                                                                 const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_primaryInExpressionAccessSE_arrayAccess::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_primaryInExpressionAccessSE_arrayAccess * ptr = dynamic_cast<const cEnumAssociatedValues_primaryInExpressionAccessSE_arrayAccess *> (inOperand) ;
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

cEnumAssociatedValues_primaryInExpressionAccessSE_funcCall::cEnumAssociatedValues_primaryInExpressionAccessSE_funcCall (const GALGAS_effectiveArgumentListAST & inAssociatedValue0,
                                                                                                                        const GALGAS_location & inAssociatedValue1
                                                                                                                        COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_primaryInExpressionAccessSE_funcCall::description (C_String & ioString,
                                                                              const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_primaryInExpressionAccessSE_funcCall::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_primaryInExpressionAccessSE_funcCall * ptr = dynamic_cast<const cEnumAssociatedValues_primaryInExpressionAccessSE_funcCall *> (inOperand) ;
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

GALGAS_primaryInExpressionAccessSE::GALGAS_primaryInExpressionAccessSE (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_primaryInExpressionAccessSE GALGAS_primaryInExpressionAccessSE::constructor_property (const GALGAS_lstring & inAssociatedValue0
                                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_primaryInExpressionAccessSE result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_property ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_primaryInExpressionAccessSE_property (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_primaryInExpressionAccessSE GALGAS_primaryInExpressionAccessSE::constructor_arrayAccess (const GALGAS_expressionSE & inAssociatedValue0,
                                                                                                const GALGAS_location & inAssociatedValue1
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_primaryInExpressionAccessSE result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_arrayAccess ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_primaryInExpressionAccessSE_arrayAccess (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_primaryInExpressionAccessSE GALGAS_primaryInExpressionAccessSE::constructor_funcCall (const GALGAS_effectiveArgumentListAST & inAssociatedValue0,
                                                                                             const GALGAS_location & inAssociatedValue1
                                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_primaryInExpressionAccessSE result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_funcCall ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_primaryInExpressionAccessSE_funcCall (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_primaryInExpressionAccessSE::method_property (GALGAS_lstring & outAssociatedValue0,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_property) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @primaryInExpressionAccessSE property invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_primaryInExpressionAccessSE_property * ptr = (const cEnumAssociatedValues_primaryInExpressionAccessSE_property *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_primaryInExpressionAccessSE::method_arrayAccess (GALGAS_expressionSE & outAssociatedValue0,
                                                             GALGAS_location & outAssociatedValue1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_arrayAccess) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    C_String s ;
    s << "method @primaryInExpressionAccessSE arrayAccess invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_primaryInExpressionAccessSE_arrayAccess * ptr = (const cEnumAssociatedValues_primaryInExpressionAccessSE_arrayAccess *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_primaryInExpressionAccessSE::method_funcCall (GALGAS_effectiveArgumentListAST & outAssociatedValue0,
                                                          GALGAS_location & outAssociatedValue1,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_funcCall) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    C_String s ;
    s << "method @primaryInExpressionAccessSE funcCall invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_primaryInExpressionAccessSE_funcCall * ptr = (const cEnumAssociatedValues_primaryInExpressionAccessSE_funcCall *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * gEnumNameArrayFor_primaryInExpressionAccessSE [4] = {
  "(not built)",
  "property",
  "arrayAccess",
  "funcCall"
} ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_primaryInExpressionAccessSE::getter_isProperty (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_property == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_primaryInExpressionAccessSE::getter_isArrayAccess (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_arrayAccess == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_primaryInExpressionAccessSE::getter_isFuncCall (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_funcCall == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_primaryInExpressionAccessSE::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "<enum @primaryInExpressionAccessSE: " << gEnumNameArrayFor_primaryInExpressionAccessSE [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_primaryInExpressionAccessSE::objectCompare (const GALGAS_primaryInExpressionAccessSE & inOperand) const {
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
//                                          @primaryInExpressionAccessSE type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_primaryInExpressionAccessSE ("primaryInExpressionAccessSE",
                                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_primaryInExpressionAccessSE::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_primaryInExpressionAccessSE ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_primaryInExpressionAccessSE::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_primaryInExpressionAccessSE (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_primaryInExpressionAccessSE GALGAS_primaryInExpressionAccessSE::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_primaryInExpressionAccessSE result ;
  const GALGAS_primaryInExpressionAccessSE * p = (const GALGAS_primaryInExpressionAccessSE *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_primaryInExpressionAccessSE *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("primaryInExpressionAccessSE", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Class for element of '@primaryInExpressionAccessListSE' list                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_primaryInExpressionAccessListSE : public cCollectionElement {
  public : GALGAS_primaryInExpressionAccessListSE_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_primaryInExpressionAccessListSE (const GALGAS_primaryInExpressionAccessSE & in_mAccess
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

cCollectionElement_primaryInExpressionAccessListSE::cCollectionElement_primaryInExpressionAccessListSE (const GALGAS_primaryInExpressionAccessSE & in_mAccess
                                                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mAccess) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_primaryInExpressionAccessListSE::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_primaryInExpressionAccessListSE::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_primaryInExpressionAccessListSE (mObject.mProperty_mAccess COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_primaryInExpressionAccessListSE::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAccess" ":" ;
  mObject.mProperty_mAccess.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_primaryInExpressionAccessListSE::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_primaryInExpressionAccessListSE * operand = (cCollectionElement_primaryInExpressionAccessListSE *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_primaryInExpressionAccessListSE) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_primaryInExpressionAccessListSE::GALGAS_primaryInExpressionAccessListSE (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_primaryInExpressionAccessListSE::GALGAS_primaryInExpressionAccessListSE (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_primaryInExpressionAccessListSE GALGAS_primaryInExpressionAccessListSE::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_primaryInExpressionAccessListSE  (capCollectionElementArray ()) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_primaryInExpressionAccessListSE GALGAS_primaryInExpressionAccessListSE::constructor_listWithValue (const GALGAS_primaryInExpressionAccessSE & inOperand0
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_primaryInExpressionAccessListSE result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_primaryInExpressionAccessListSE (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_primaryInExpressionAccessListSE::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_primaryInExpressionAccessListSE::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                        const GALGAS_primaryInExpressionAccessSE & in_mAccess
                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_primaryInExpressionAccessListSE * p = NULL ;
  macroMyNew (p, cCollectionElement_primaryInExpressionAccessListSE (in_mAccess COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_primaryInExpressionAccessListSE::addAssign_operation (const GALGAS_primaryInExpressionAccessSE & inOperand0
                                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_primaryInExpressionAccessListSE (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_primaryInExpressionAccessListSE::setter_insertAtIndex (const GALGAS_primaryInExpressionAccessSE inOperand0,
                                                                   const GALGAS_uint inInsertionIndex,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_primaryInExpressionAccessListSE (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_primaryInExpressionAccessListSE::setter_removeAtIndex (GALGAS_primaryInExpressionAccessSE & outOperand0,
                                                                   const GALGAS_uint inRemoveIndex,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_primaryInExpressionAccessListSE * p = (cCollectionElement_primaryInExpressionAccessListSE *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_primaryInExpressionAccessListSE) ;
      outOperand0 = p->mObject.mProperty_mAccess ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_primaryInExpressionAccessListSE::setter_popFirst (GALGAS_primaryInExpressionAccessSE & outOperand0,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_primaryInExpressionAccessListSE * p = (cCollectionElement_primaryInExpressionAccessListSE *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_primaryInExpressionAccessListSE) ;
    outOperand0 = p->mObject.mProperty_mAccess ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_primaryInExpressionAccessListSE::setter_popLast (GALGAS_primaryInExpressionAccessSE & outOperand0,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_primaryInExpressionAccessListSE * p = (cCollectionElement_primaryInExpressionAccessListSE *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_primaryInExpressionAccessListSE) ;
    outOperand0 = p->mObject.mProperty_mAccess ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_primaryInExpressionAccessListSE::method_first (GALGAS_primaryInExpressionAccessSE & outOperand0,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_primaryInExpressionAccessListSE * p = (cCollectionElement_primaryInExpressionAccessListSE *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_primaryInExpressionAccessListSE) ;
    outOperand0 = p->mObject.mProperty_mAccess ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_primaryInExpressionAccessListSE::method_last (GALGAS_primaryInExpressionAccessSE & outOperand0,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_primaryInExpressionAccessListSE * p = (cCollectionElement_primaryInExpressionAccessListSE *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_primaryInExpressionAccessListSE) ;
    outOperand0 = p->mObject.mProperty_mAccess ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_primaryInExpressionAccessListSE GALGAS_primaryInExpressionAccessListSE::add_operation (const GALGAS_primaryInExpressionAccessListSE & inOperand,
                                                                                              C_Compiler * /* inCompiler */
                                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_primaryInExpressionAccessListSE result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_primaryInExpressionAccessListSE GALGAS_primaryInExpressionAccessListSE::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_primaryInExpressionAccessListSE result = GALGAS_primaryInExpressionAccessListSE::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_primaryInExpressionAccessListSE GALGAS_primaryInExpressionAccessListSE::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_primaryInExpressionAccessListSE result = GALGAS_primaryInExpressionAccessListSE::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_primaryInExpressionAccessListSE GALGAS_primaryInExpressionAccessListSE::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_primaryInExpressionAccessListSE result = GALGAS_primaryInExpressionAccessListSE::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_primaryInExpressionAccessListSE::plusAssign_operation (const GALGAS_primaryInExpressionAccessListSE inOperand,
                                                                   C_Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_primaryInExpressionAccessSE GALGAS_primaryInExpressionAccessListSE::getter_mAccessAtIndex (const GALGAS_uint & inIndex,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_primaryInExpressionAccessListSE * p = (cCollectionElement_primaryInExpressionAccessListSE *) attributes.ptr () ;
  GALGAS_primaryInExpressionAccessSE result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_primaryInExpressionAccessListSE) ;
    result = p->mObject.mProperty_mAccess ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_primaryInExpressionAccessListSE::cEnumerator_primaryInExpressionAccessListSE (const GALGAS_primaryInExpressionAccessListSE & inEnumeratedObject,
                                                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_primaryInExpressionAccessListSE_2D_element cEnumerator_primaryInExpressionAccessListSE::current (LOCATION_ARGS) const {
  const cCollectionElement_primaryInExpressionAccessListSE * p = (const cCollectionElement_primaryInExpressionAccessListSE *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_primaryInExpressionAccessListSE) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_primaryInExpressionAccessSE cEnumerator_primaryInExpressionAccessListSE::current_mAccess (LOCATION_ARGS) const {
  const cCollectionElement_primaryInExpressionAccessListSE * p = (const cCollectionElement_primaryInExpressionAccessListSE *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_primaryInExpressionAccessListSE) ;
  return p->mObject.mProperty_mAccess ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @primaryInExpressionAccessListSE type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_primaryInExpressionAccessListSE ("primaryInExpressionAccessListSE",
                                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_primaryInExpressionAccessListSE::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_primaryInExpressionAccessListSE ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_primaryInExpressionAccessListSE::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_primaryInExpressionAccessListSE (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_primaryInExpressionAccessListSE GALGAS_primaryInExpressionAccessListSE::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_primaryInExpressionAccessListSE result ;
  const GALGAS_primaryInExpressionAccessListSE * p = (const GALGAS_primaryInExpressionAccessListSE *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_primaryInExpressionAccessListSE *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("primaryInExpressionAccessListSE", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
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

cEnumAssociatedValues_internalRepresentation_structureMember::cEnumAssociatedValues_internalRepresentation_structureMember (const GALGAS_lstring & inAssociatedValue0,
                                                                                                                            const GALGAS_objectIR & inAssociatedValue1
                                                                                                                            COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_internalRepresentation_structureMember::description (C_String & ioString,
                                                                                const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_internalRepresentation_structureMember::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_internalRepresentation_structureMember * ptr = dynamic_cast<const cEnumAssociatedValues_internalRepresentation_structureMember *> (inOperand) ;
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

cEnumAssociatedValues_internalRepresentation_bitField::cEnumAssociatedValues_internalRepresentation_bitField (const GALGAS_sliceMap & inAssociatedValue0,
                                                                                                              const GALGAS_objectIR & inAssociatedValue1
                                                                                                              COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_internalRepresentation_bitField::description (C_String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_internalRepresentation_bitField::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_internalRepresentation_bitField * ptr = dynamic_cast<const cEnumAssociatedValues_internalRepresentation_bitField *> (inOperand) ;
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

GALGAS_internalRepresentation GALGAS_internalRepresentation::constructor_structureMember (const GALGAS_lstring & inAssociatedValue0,
                                                                                          const GALGAS_objectIR & inAssociatedValue1
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_internalRepresentation result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_structureMember ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_internalRepresentation_structureMember (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_internalRepresentation GALGAS_internalRepresentation::constructor_bitField (const GALGAS_sliceMap & inAssociatedValue0,
                                                                                   const GALGAS_objectIR & inAssociatedValue1
                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_internalRepresentation result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_bitField ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_internalRepresentation_bitField (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
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

void GALGAS_internalRepresentation::method_structureMember (GALGAS_lstring & outAssociatedValue0,
                                                            GALGAS_objectIR & outAssociatedValue1,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_structureMember) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    C_String s ;
    s << "method @internalRepresentation structureMember invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_internalRepresentation_structureMember * ptr = (const cEnumAssociatedValues_internalRepresentation_structureMember *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_internalRepresentation::method_bitField (GALGAS_sliceMap & outAssociatedValue0,
                                                     GALGAS_objectIR & outAssociatedValue1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_bitField) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    C_String s ;
    s << "method @internalRepresentation bitField invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_internalRepresentation_bitField * ptr = (const cEnumAssociatedValues_internalRepresentation_bitField *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * gEnumNameArrayFor_internalRepresentation [4] = {
  "(not built)",
  "standAloneIdentifier",
  "structureMember",
  "bitField"
} ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_internalRepresentation::getter_isStandAloneIdentifier (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_standAloneIdentifier == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_internalRepresentation::getter_isStructureMember (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_structureMember == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_internalRepresentation::getter_isBitField (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_bitField == mEnum) ;
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
  cEnumerator_instructionListAST enumerator_2171 (temp_0, kENUMERATION_UP) ;
  while (enumerator_2171.hasCurrentObject ()) {
    callExtensionMethod_noteInstructionTypesInPrecedenceGraph ((const cPtr_instructionAST *) enumerator_2171.current_mInstruction (HERE).ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instructionList.galgas", 49)) ;
    enumerator_2171.gotoNextObject () ;
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
                                  const GALGAS_PLMType constin_inSelfType,
                                  const GALGAS_bool constin_inRoutineCanMutateProperties,
                                  const GALGAS_bool constin_inDirectAccessToPropertiesAllowed,
                                  const GALGAS_lstring constin_inCallerNameForInvocationGraph,
                                  const GALGAS_semanticContext constin_inContext,
                                  const GALGAS_mode constin_inCurrentMode,
                                  GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                  GALGAS_staticStringMap & io_ioGlobalLiteralStringMap,
                                  GALGAS_unifiedSymbolMapEx & io_ioVariableMap,
                                  GALGAS_universalPropertyAndRoutineMapForContext & io_ioUniversalMap,
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
      f (inObject, constin_inSelfType, constin_inRoutineCanMutateProperties, constin_inDirectAccessToPropertiesAllowed, constin_inCallerNameForInvocationGraph, constin_inContext, constin_inCurrentMode, io_ioTemporaries, io_ioGlobalLiteralStringMap, io_ioVariableMap, io_ioUniversalMap, io_ioAllocaList, io_ioInstructionGenerationList, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Extension method '@instructionListAST analyzeBranchInstructionList'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_analyzeBranchInstructionList (const GALGAS_instructionListAST inObject,
                                                   const GALGAS_PLMType constinArgument_inSelfType,
                                                   const GALGAS_bool constinArgument_inRoutineCanMutateProperties,
                                                   const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                                   const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                   GALGAS_location inArgument_inEndOfInstructionList,
                                                   const GALGAS_semanticContext constinArgument_inContext,
                                                   const GALGAS_mode constinArgument_inCurrentMode,
                                                   GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                   GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                   GALGAS_unifiedSymbolMapEx & ioArgument_ioVariableMap,
                                                   GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                   GALGAS_allocaList & ioArgument_ioAllocaList,
                                                   GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_ioUniversalMap.insulate (HERE) ;
  cPtr_universalPropertyAndRoutineMapForContext * ptr_4270 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
  callExtensionSetter_openBranch ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_4270, inCompiler COMMA_SOURCE_FILE ("instructionList.galgas", 89)) ;
  }
  {
  ioArgument_ioVariableMap.setter_openBranch (inCompiler COMMA_SOURCE_FILE ("instructionList.galgas", 90)) ;
  }
  const GALGAS_instructionListAST temp_0 = inObject ;
  cEnumerator_instructionListAST enumerator_4330 (temp_0, kENUMERATION_UP) ;
  while (enumerator_4330.hasCurrentObject ()) {
    {
    extensionSetter_appendSourceLineComment (ioArgument_ioInstructionGenerationList, enumerator_4330.current_mInstruction (HERE).getter_mInstructionLocation (SOURCE_FILE ("instructionList.galgas", 92)), inCompiler COMMA_SOURCE_FILE ("instructionList.galgas", 92)) ;
    }
    callExtensionMethod_analyze ((const cPtr_instructionAST *) enumerator_4330.current_mInstruction (HERE).ptr (), constinArgument_inSelfType, constinArgument_inRoutineCanMutateProperties, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, inCompiler COMMA_SOURCE_FILE ("instructionList.galgas", 93)) ;
    enumerator_4330.gotoNextObject () ;
  }
  {
  ioArgument_ioUniversalMap.insulate (HERE) ;
  cPtr_universalPropertyAndRoutineMapForContext * ptr_5052 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
  callExtensionSetter_closeBranch ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_5052, inArgument_inEndOfInstructionList, inCompiler COMMA_SOURCE_FILE ("instructionList.galgas", 110)) ;
  }
  {
  ioArgument_ioVariableMap.setter_closeBranch (inArgument_inEndOfInstructionList, inCompiler COMMA_SOURCE_FILE ("instructionList.galgas", 111)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Extension method '@instructionListAST analyzeRoutineInstructionList'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_analyzeRoutineInstructionList (const GALGAS_instructionListAST inObject,
                                                    const GALGAS_PLMType constinArgument_inSelfType,
                                                    const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                                    const GALGAS_bool constinArgument_inRoutineCanMutateProperties,
                                                    const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                    const GALGAS_semanticContext constinArgument_inContext,
                                                    const GALGAS_mode constinArgument_inCurrentMode,
                                                    GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                    GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                    GALGAS_unifiedSymbolMapEx & ioArgument_ioVariableMap,
                                                    GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                    GALGAS_allocaList & ioArgument_ioAllocaList,
                                                    GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_instructionListAST temp_0 = inObject ;
  cEnumerator_instructionListAST enumerator_6012 (temp_0, kENUMERATION_UP) ;
  while (enumerator_6012.hasCurrentObject ()) {
    {
    extensionSetter_appendSourceLineComment (ioArgument_ioInstructionGenerationList, enumerator_6012.current_mInstruction (HERE).getter_mInstructionLocation (SOURCE_FILE ("instructionList.galgas", 131)), inCompiler COMMA_SOURCE_FILE ("instructionList.galgas", 131)) ;
    }
    callExtensionMethod_analyze ((const cPtr_instructionAST *) enumerator_6012.current_mInstruction (HERE).ptr (), constinArgument_inSelfType, constinArgument_inRoutineCanMutateProperties, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, inCompiler COMMA_SOURCE_FILE ("instructionList.galgas", 132)) ;
    enumerator_6012.gotoNextObject () ;
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
  cEnumerator_instructionListIR enumerator_7197 (temp_0, kENUMERATION_UP) ;
  while (enumerator_7197.hasCurrentObject ()) {
    callExtensionMethod_llvmInstructionCode ((const cPtr_abstractInstructionIR *) enumerator_7197.current_mInstructionGeneration (HERE).ptr (), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instructionList.galgas", 159)) ;
    enumerator_7197.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_checkInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_checkInstructionAST * p = (const cPtr_checkInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_checkInstructionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExpression.objectCompare (p->mProperty_mExpression) ;
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

GALGAS_checkInstructionAST GALGAS_checkInstructionAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                        const GALGAS_expressionAST & inAttribute_mExpression
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_checkInstructionAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_checkInstructionAST (inAttribute_mInstructionLocation, inAttribute_mExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST GALGAS_checkInstructionAST::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_checkInstructionAST * p = (const cPtr_checkInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_checkInstructionAST) ;
    result = p->mProperty_mExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST cPtr_checkInstructionAST::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                    Pointer class for @checkInstructionAST class                                     *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_checkInstructionAST::cPtr_checkInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                    const GALGAS_expressionAST & in_mExpression
                                                    COMMA_LOCATION_ARGS) :
cPtr_instructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mExpression (in_mExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_checkInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_checkInstructionAST ;
}

void cPtr_checkInstructionAST::description (C_String & ioString,
                                            const int32_t inIndentation) const {
  ioString << "[@checkInstructionAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_checkInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_checkInstructionAST (mProperty_mInstructionLocation, mProperty_mExpression COMMA_THERE)) ;
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

typeComparisonResult cPtr_checkInstructionSE::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_checkInstructionSE * p = (const cPtr_checkInstructionSE *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_checkInstructionSE) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExpression.objectCompare (p->mProperty_mExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_checkInstructionSE::objectCompare (const GALGAS_checkInstructionSE & inOperand) const {
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

GALGAS_checkInstructionSE::GALGAS_checkInstructionSE (void) :
GALGAS_instructionSE () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_checkInstructionSE::GALGAS_checkInstructionSE (const cPtr_checkInstructionSE * inSourcePtr) :
GALGAS_instructionSE (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_checkInstructionSE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_checkInstructionSE GALGAS_checkInstructionSE::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                      const GALGAS_expressionSE & inAttribute_mExpression
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_checkInstructionSE result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_checkInstructionSE (inAttribute_mInstructionLocation, inAttribute_mExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionSE GALGAS_checkInstructionSE::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expressionSE result ;
  if (NULL != mObjectPtr) {
    const cPtr_checkInstructionSE * p = (const cPtr_checkInstructionSE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_checkInstructionSE) ;
    result = p->mProperty_mExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionSE cPtr_checkInstructionSE::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                     Pointer class for @checkInstructionSE class                                     *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_checkInstructionSE::cPtr_checkInstructionSE (const GALGAS_location & in_mInstructionLocation,
                                                  const GALGAS_expressionSE & in_mExpression
                                                  COMMA_LOCATION_ARGS) :
cPtr_instructionSE (in_mInstructionLocation COMMA_THERE),
mProperty_mExpression (in_mExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_checkInstructionSE::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_checkInstructionSE ;
}

void cPtr_checkInstructionSE::description (C_String & ioString,
                                           const int32_t inIndentation) const {
  ioString << "[@checkInstructionSE:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_checkInstructionSE::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_checkInstructionSE (mProperty_mInstructionLocation, mProperty_mExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @checkInstructionSE type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_checkInstructionSE ("checkInstructionSE",
                                           & kTypeDescriptor_GALGAS_instructionSE) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_checkInstructionSE::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_checkInstructionSE ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_checkInstructionSE::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_checkInstructionSE (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_checkInstructionSE GALGAS_checkInstructionSE::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_checkInstructionSE result ;
  const GALGAS_checkInstructionSE * p = (const GALGAS_checkInstructionSE *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_checkInstructionSE *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("checkInstructionSE", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_accessInAssignmentSE_property::cEnumAssociatedValues_accessInAssignmentSE_property (const GALGAS_lstring & inAssociatedValue0
                                                                                                          COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_accessInAssignmentSE_property::description (C_String & ioString,
                                                                       const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_accessInAssignmentSE_property::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_accessInAssignmentSE_property * ptr = dynamic_cast<const cEnumAssociatedValues_accessInAssignmentSE_property *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_accessInAssignmentSE_arrayAccess::cEnumAssociatedValues_accessInAssignmentSE_arrayAccess (const GALGAS_expressionSE & inAssociatedValue0,
                                                                                                                const GALGAS_location & inAssociatedValue1
                                                                                                                COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_accessInAssignmentSE_arrayAccess::description (C_String & ioString,
                                                                          const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_accessInAssignmentSE_arrayAccess::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_accessInAssignmentSE_arrayAccess * ptr = dynamic_cast<const cEnumAssociatedValues_accessInAssignmentSE_arrayAccess *> (inOperand) ;
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

GALGAS_accessInAssignmentSE::GALGAS_accessInAssignmentSE (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_accessInAssignmentSE GALGAS_accessInAssignmentSE::constructor_property (const GALGAS_lstring & inAssociatedValue0
                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_accessInAssignmentSE result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_property ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_accessInAssignmentSE_property (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_accessInAssignmentSE GALGAS_accessInAssignmentSE::constructor_arrayAccess (const GALGAS_expressionSE & inAssociatedValue0,
                                                                                  const GALGAS_location & inAssociatedValue1
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_accessInAssignmentSE result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_arrayAccess ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_accessInAssignmentSE_arrayAccess (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_accessInAssignmentSE::method_property (GALGAS_lstring & outAssociatedValue0,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_property) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @accessInAssignmentSE property invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_accessInAssignmentSE_property * ptr = (const cEnumAssociatedValues_accessInAssignmentSE_property *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_accessInAssignmentSE::method_arrayAccess (GALGAS_expressionSE & outAssociatedValue0,
                                                      GALGAS_location & outAssociatedValue1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_arrayAccess) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    C_String s ;
    s << "method @accessInAssignmentSE arrayAccess invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_accessInAssignmentSE_arrayAccess * ptr = (const cEnumAssociatedValues_accessInAssignmentSE_arrayAccess *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * gEnumNameArrayFor_accessInAssignmentSE [3] = {
  "(not built)",
  "property",
  "arrayAccess"
} ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_accessInAssignmentSE::getter_isProperty (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_property == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_accessInAssignmentSE::getter_isArrayAccess (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_arrayAccess == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_accessInAssignmentSE::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "<enum @accessInAssignmentSE: " << gEnumNameArrayFor_accessInAssignmentSE [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_accessInAssignmentSE::objectCompare (const GALGAS_accessInAssignmentSE & inOperand) const {
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
//                                             @accessInAssignmentSE type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_accessInAssignmentSE ("accessInAssignmentSE",
                                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_accessInAssignmentSE::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_accessInAssignmentSE ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_accessInAssignmentSE::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_accessInAssignmentSE (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_accessInAssignmentSE GALGAS_accessInAssignmentSE::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_accessInAssignmentSE result ;
  const GALGAS_accessInAssignmentSE * p = (const GALGAS_accessInAssignmentSE *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_accessInAssignmentSE *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("accessInAssignmentSE", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Class for element of '@accessInAssignmentListSE' list                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_accessInAssignmentListSE : public cCollectionElement {
  public : GALGAS_accessInAssignmentListSE_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_accessInAssignmentListSE (const GALGAS_accessInAssignmentSE & in_mAccess
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

cCollectionElement_accessInAssignmentListSE::cCollectionElement_accessInAssignmentListSE (const GALGAS_accessInAssignmentSE & in_mAccess
                                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mAccess) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_accessInAssignmentListSE::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_accessInAssignmentListSE::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_accessInAssignmentListSE (mObject.mProperty_mAccess COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_accessInAssignmentListSE::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAccess" ":" ;
  mObject.mProperty_mAccess.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_accessInAssignmentListSE::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_accessInAssignmentListSE * operand = (cCollectionElement_accessInAssignmentListSE *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_accessInAssignmentListSE) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_accessInAssignmentListSE::GALGAS_accessInAssignmentListSE (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_accessInAssignmentListSE::GALGAS_accessInAssignmentListSE (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_accessInAssignmentListSE GALGAS_accessInAssignmentListSE::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_accessInAssignmentListSE  (capCollectionElementArray ()) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_accessInAssignmentListSE GALGAS_accessInAssignmentListSE::constructor_listWithValue (const GALGAS_accessInAssignmentSE & inOperand0
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_accessInAssignmentListSE result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_accessInAssignmentListSE (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_accessInAssignmentListSE::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_accessInAssignmentListSE::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                 const GALGAS_accessInAssignmentSE & in_mAccess
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_accessInAssignmentListSE * p = NULL ;
  macroMyNew (p, cCollectionElement_accessInAssignmentListSE (in_mAccess COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_accessInAssignmentListSE::addAssign_operation (const GALGAS_accessInAssignmentSE & inOperand0
                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_accessInAssignmentListSE (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_accessInAssignmentListSE::setter_insertAtIndex (const GALGAS_accessInAssignmentSE inOperand0,
                                                            const GALGAS_uint inInsertionIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_accessInAssignmentListSE (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_accessInAssignmentListSE::setter_removeAtIndex (GALGAS_accessInAssignmentSE & outOperand0,
                                                            const GALGAS_uint inRemoveIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_accessInAssignmentListSE * p = (cCollectionElement_accessInAssignmentListSE *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_accessInAssignmentListSE) ;
      outOperand0 = p->mObject.mProperty_mAccess ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_accessInAssignmentListSE::setter_popFirst (GALGAS_accessInAssignmentSE & outOperand0,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_accessInAssignmentListSE * p = (cCollectionElement_accessInAssignmentListSE *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_accessInAssignmentListSE) ;
    outOperand0 = p->mObject.mProperty_mAccess ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_accessInAssignmentListSE::setter_popLast (GALGAS_accessInAssignmentSE & outOperand0,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_accessInAssignmentListSE * p = (cCollectionElement_accessInAssignmentListSE *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_accessInAssignmentListSE) ;
    outOperand0 = p->mObject.mProperty_mAccess ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_accessInAssignmentListSE::method_first (GALGAS_accessInAssignmentSE & outOperand0,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_accessInAssignmentListSE * p = (cCollectionElement_accessInAssignmentListSE *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_accessInAssignmentListSE) ;
    outOperand0 = p->mObject.mProperty_mAccess ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_accessInAssignmentListSE::method_last (GALGAS_accessInAssignmentSE & outOperand0,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_accessInAssignmentListSE * p = (cCollectionElement_accessInAssignmentListSE *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_accessInAssignmentListSE) ;
    outOperand0 = p->mObject.mProperty_mAccess ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_accessInAssignmentListSE GALGAS_accessInAssignmentListSE::add_operation (const GALGAS_accessInAssignmentListSE & inOperand,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_accessInAssignmentListSE result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_accessInAssignmentListSE GALGAS_accessInAssignmentListSE::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_accessInAssignmentListSE result = GALGAS_accessInAssignmentListSE::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_accessInAssignmentListSE GALGAS_accessInAssignmentListSE::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_accessInAssignmentListSE result = GALGAS_accessInAssignmentListSE::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_accessInAssignmentListSE GALGAS_accessInAssignmentListSE::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_accessInAssignmentListSE result = GALGAS_accessInAssignmentListSE::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_accessInAssignmentListSE::plusAssign_operation (const GALGAS_accessInAssignmentListSE inOperand,
                                                            C_Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_accessInAssignmentSE GALGAS_accessInAssignmentListSE::getter_mAccessAtIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_accessInAssignmentListSE * p = (cCollectionElement_accessInAssignmentListSE *) attributes.ptr () ;
  GALGAS_accessInAssignmentSE result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_accessInAssignmentListSE) ;
    result = p->mObject.mProperty_mAccess ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_accessInAssignmentListSE::cEnumerator_accessInAssignmentListSE (const GALGAS_accessInAssignmentListSE & inEnumeratedObject,
                                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_accessInAssignmentListSE_2D_element cEnumerator_accessInAssignmentListSE::current (LOCATION_ARGS) const {
  const cCollectionElement_accessInAssignmentListSE * p = (const cCollectionElement_accessInAssignmentListSE *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_accessInAssignmentListSE) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_accessInAssignmentSE cEnumerator_accessInAssignmentListSE::current_mAccess (LOCATION_ARGS) const {
  const cCollectionElement_accessInAssignmentListSE * p = (const cCollectionElement_accessInAssignmentListSE *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_accessInAssignmentListSE) ;
  return p->mObject.mProperty_mAccess ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @accessInAssignmentListSE type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_accessInAssignmentListSE ("accessInAssignmentListSE",
                                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_accessInAssignmentListSE::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_accessInAssignmentListSE ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_accessInAssignmentListSE::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_accessInAssignmentListSE (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_accessInAssignmentListSE GALGAS_accessInAssignmentListSE::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_accessInAssignmentListSE result ;
  const GALGAS_accessInAssignmentListSE * p = (const GALGAS_accessInAssignmentListSE *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_accessInAssignmentListSE *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("accessInAssignmentListSE", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operatorAssignmentKind::GALGAS_operatorAssignmentKind (void) :
mEnum (kNotBuilt) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operatorAssignmentKind GALGAS_operatorAssignmentKind::constructor_bitWiseOrAssign (UNUSED_LOCATION_ARGS) {
  GALGAS_operatorAssignmentKind result ;
  result.mEnum = kEnum_bitWiseOrAssign ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operatorAssignmentKind GALGAS_operatorAssignmentKind::constructor_bitWiseAndAssign (UNUSED_LOCATION_ARGS) {
  GALGAS_operatorAssignmentKind result ;
  result.mEnum = kEnum_bitWiseAndAssign ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operatorAssignmentKind GALGAS_operatorAssignmentKind::constructor_bitWiseXorAssign (UNUSED_LOCATION_ARGS) {
  GALGAS_operatorAssignmentKind result ;
  result.mEnum = kEnum_bitWiseXorAssign ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operatorAssignmentKind GALGAS_operatorAssignmentKind::constructor_addAssign (UNUSED_LOCATION_ARGS) {
  GALGAS_operatorAssignmentKind result ;
  result.mEnum = kEnum_addAssign ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operatorAssignmentKind GALGAS_operatorAssignmentKind::constructor_addModuloAssign (UNUSED_LOCATION_ARGS) {
  GALGAS_operatorAssignmentKind result ;
  result.mEnum = kEnum_addModuloAssign ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operatorAssignmentKind GALGAS_operatorAssignmentKind::constructor_subAssign (UNUSED_LOCATION_ARGS) {
  GALGAS_operatorAssignmentKind result ;
  result.mEnum = kEnum_subAssign ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operatorAssignmentKind GALGAS_operatorAssignmentKind::constructor_subModuloAssign (UNUSED_LOCATION_ARGS) {
  GALGAS_operatorAssignmentKind result ;
  result.mEnum = kEnum_subModuloAssign ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operatorAssignmentKind GALGAS_operatorAssignmentKind::constructor_mulAssign (UNUSED_LOCATION_ARGS) {
  GALGAS_operatorAssignmentKind result ;
  result.mEnum = kEnum_mulAssign ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operatorAssignmentKind GALGAS_operatorAssignmentKind::constructor_mulModuloAssign (UNUSED_LOCATION_ARGS) {
  GALGAS_operatorAssignmentKind result ;
  result.mEnum = kEnum_mulModuloAssign ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operatorAssignmentKind GALGAS_operatorAssignmentKind::constructor_divAssign (UNUSED_LOCATION_ARGS) {
  GALGAS_operatorAssignmentKind result ;
  result.mEnum = kEnum_divAssign ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operatorAssignmentKind GALGAS_operatorAssignmentKind::constructor_divZeroAssign (UNUSED_LOCATION_ARGS) {
  GALGAS_operatorAssignmentKind result ;
  result.mEnum = kEnum_divZeroAssign ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operatorAssignmentKind GALGAS_operatorAssignmentKind::constructor_modAssign (UNUSED_LOCATION_ARGS) {
  GALGAS_operatorAssignmentKind result ;
  result.mEnum = kEnum_modAssign ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operatorAssignmentKind GALGAS_operatorAssignmentKind::constructor_modZeroAssign (UNUSED_LOCATION_ARGS) {
  GALGAS_operatorAssignmentKind result ;
  result.mEnum = kEnum_modZeroAssign ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * gEnumNameArrayFor_operatorAssignmentKind [14] = {
  "(not built)",
  "bitWiseOrAssign",
  "bitWiseAndAssign",
  "bitWiseXorAssign",
  "addAssign",
  "addModuloAssign",
  "subAssign",
  "subModuloAssign",
  "mulAssign",
  "mulModuloAssign",
  "divAssign",
  "divZeroAssign",
  "modAssign",
  "modZeroAssign"
} ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_operatorAssignmentKind::getter_isBitWiseOrAssign (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_bitWiseOrAssign == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_operatorAssignmentKind::getter_isBitWiseAndAssign (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_bitWiseAndAssign == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_operatorAssignmentKind::getter_isBitWiseXorAssign (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_bitWiseXorAssign == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_operatorAssignmentKind::getter_isAddAssign (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_addAssign == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_operatorAssignmentKind::getter_isAddModuloAssign (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_addModuloAssign == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_operatorAssignmentKind::getter_isSubAssign (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_subAssign == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_operatorAssignmentKind::getter_isSubModuloAssign (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_subModuloAssign == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_operatorAssignmentKind::getter_isMulAssign (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_mulAssign == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_operatorAssignmentKind::getter_isMulModuloAssign (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_mulModuloAssign == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_operatorAssignmentKind::getter_isDivAssign (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_divAssign == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_operatorAssignmentKind::getter_isDivZeroAssign (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_divZeroAssign == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_operatorAssignmentKind::getter_isModAssign (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_modAssign == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_operatorAssignmentKind::getter_isModZeroAssign (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_modZeroAssign == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_operatorAssignmentKind::description (C_String & ioString,
                                                 const int32_t /* inIndentation */) const {
  ioString << "<enum @operatorAssignmentKind: " << gEnumNameArrayFor_operatorAssignmentKind [mEnum] ;
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_operatorAssignmentKind::objectCompare (const GALGAS_operatorAssignmentKind & inOperand) const {
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
//                                            @operatorAssignmentKind type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_operatorAssignmentKind ("operatorAssignmentKind",
                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_operatorAssignmentKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_operatorAssignmentKind ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_operatorAssignmentKind::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_operatorAssignmentKind (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operatorAssignmentKind GALGAS_operatorAssignmentKind::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_operatorAssignmentKind result ;
  const GALGAS_operatorAssignmentKind * p = (const GALGAS_operatorAssignmentKind *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_operatorAssignmentKind *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("operatorAssignmentKind", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_letInstructionNOP::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_letInstructionNOP * p = (const cPtr_letInstructionNOP *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_letInstructionNOP) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_letInstructionNOP::objectCompare (const GALGAS_letInstructionNOP & inOperand) const {
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

GALGAS_letInstructionNOP::GALGAS_letInstructionNOP (void) :
GALGAS_instructionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_letInstructionNOP GALGAS_letInstructionNOP::constructor_default (LOCATION_ARGS) {
  return GALGAS_letInstructionNOP::constructor_new (GALGAS_location::constructor_nowhere (HERE)
                                                    COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_letInstructionNOP::GALGAS_letInstructionNOP (const cPtr_letInstructionNOP * inSourcePtr) :
GALGAS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_letInstructionNOP) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_letInstructionNOP GALGAS_letInstructionNOP::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_letInstructionNOP result ;
  if (inAttribute_mInstructionLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_letInstructionNOP (inAttribute_mInstructionLocation COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                     Pointer class for @letInstructionNOP class                                      *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_letInstructionNOP::cPtr_letInstructionNOP (const GALGAS_location & in_mInstructionLocation
                                                COMMA_LOCATION_ARGS) :
cPtr_instructionAST (in_mInstructionLocation COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_letInstructionNOP::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_letInstructionNOP ;
}

void cPtr_letInstructionNOP::description (C_String & ioString,
                                          const int32_t inIndentation) const {
  ioString << "[@letInstructionNOP:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_letInstructionNOP::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_letInstructionNOP (mProperty_mInstructionLocation COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @letInstructionNOP type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_letInstructionNOP ("letInstructionNOP",
                                          & kTypeDescriptor_GALGAS_instructionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_letInstructionNOP::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_letInstructionNOP ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_letInstructionNOP::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_letInstructionNOP (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_letInstructionNOP GALGAS_letInstructionNOP::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_letInstructionNOP result ;
  const GALGAS_letInstructionNOP * p = (const GALGAS_letInstructionNOP *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_letInstructionNOP *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("letInstructionNOP", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_letInstructionSE::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_letInstructionSE * p = (const cPtr_letInstructionSE *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_letInstructionSE) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_letInstructionSE::objectCompare (const GALGAS_letInstructionSE & inOperand) const {
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

GALGAS_letInstructionSE::GALGAS_letInstructionSE (void) :
GALGAS_instructionSE () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_letInstructionSE GALGAS_letInstructionSE::constructor_default (LOCATION_ARGS) {
  return GALGAS_letInstructionSE::constructor_new (GALGAS_location::constructor_nowhere (HERE)
                                                   COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_letInstructionSE::GALGAS_letInstructionSE (const cPtr_letInstructionSE * inSourcePtr) :
GALGAS_instructionSE (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_letInstructionSE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_letInstructionSE GALGAS_letInstructionSE::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_letInstructionSE result ;
  if (inAttribute_mInstructionLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_letInstructionSE (inAttribute_mInstructionLocation COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                      Pointer class for @letInstructionSE class                                      *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_letInstructionSE::cPtr_letInstructionSE (const GALGAS_location & in_mInstructionLocation
                                              COMMA_LOCATION_ARGS) :
cPtr_instructionSE (in_mInstructionLocation COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_letInstructionSE::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_letInstructionSE ;
}

void cPtr_letInstructionSE::description (C_String & ioString,
                                         const int32_t inIndentation) const {
  ioString << "[@letInstructionSE:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_letInstructionSE::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_letInstructionSE (mProperty_mInstructionLocation COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @letInstructionSE type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_letInstructionSE ("letInstructionSE",
                                         & kTypeDescriptor_GALGAS_instructionSE) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_letInstructionSE::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_letInstructionSE ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_letInstructionSE::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_letInstructionSE (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_letInstructionSE GALGAS_letInstructionSE::extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_letInstructionSE result ;
  const GALGAS_letInstructionSE * p = (const GALGAS_letInstructionSE *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_letInstructionSE *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("letInstructionSE", p->dynamicTypeDescriptor () COMMA_THERE) ;
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
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExpression.objectCompare (p->mProperty_mExpression) ;
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

GALGAS_assertInstructionAST GALGAS_assertInstructionAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                          const GALGAS_expressionAST & inAttribute_mExpression
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_assertInstructionAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_assertInstructionAST (inAttribute_mInstructionLocation, inAttribute_mExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST GALGAS_assertInstructionAST::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_assertInstructionAST * p = (const cPtr_assertInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assertInstructionAST) ;
    result = p->mProperty_mExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST cPtr_assertInstructionAST::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                    Pointer class for @assertInstructionAST class                                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_assertInstructionAST::cPtr_assertInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                      const GALGAS_expressionAST & in_mExpression
                                                      COMMA_LOCATION_ARGS) :
cPtr_instructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mExpression (in_mExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_assertInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assertInstructionAST ;
}

void cPtr_assertInstructionAST::description (C_String & ioString,
                                             const int32_t inIndentation) const {
  ioString << "[@assertInstructionAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_assertInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_assertInstructionAST (mProperty_mInstructionLocation, mProperty_mExpression COMMA_THERE)) ;
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

typeComparisonResult cPtr_assertInstructionSE::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_assertInstructionSE * p = (const cPtr_assertInstructionSE *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_assertInstructionSE) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExpression.objectCompare (p->mProperty_mExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_assertInstructionSE::objectCompare (const GALGAS_assertInstructionSE & inOperand) const {
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

GALGAS_assertInstructionSE::GALGAS_assertInstructionSE (void) :
GALGAS_instructionSE () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_assertInstructionSE::GALGAS_assertInstructionSE (const cPtr_assertInstructionSE * inSourcePtr) :
GALGAS_instructionSE (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_assertInstructionSE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_assertInstructionSE GALGAS_assertInstructionSE::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                        const GALGAS_expressionSE & inAttribute_mExpression
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_assertInstructionSE result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_assertInstructionSE (inAttribute_mInstructionLocation, inAttribute_mExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionSE GALGAS_assertInstructionSE::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expressionSE result ;
  if (NULL != mObjectPtr) {
    const cPtr_assertInstructionSE * p = (const cPtr_assertInstructionSE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assertInstructionSE) ;
    result = p->mProperty_mExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionSE cPtr_assertInstructionSE::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                    Pointer class for @assertInstructionSE class                                     *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_assertInstructionSE::cPtr_assertInstructionSE (const GALGAS_location & in_mInstructionLocation,
                                                    const GALGAS_expressionSE & in_mExpression
                                                    COMMA_LOCATION_ARGS) :
cPtr_instructionSE (in_mInstructionLocation COMMA_THERE),
mProperty_mExpression (in_mExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_assertInstructionSE::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assertInstructionSE ;
}

void cPtr_assertInstructionSE::description (C_String & ioString,
                                            const int32_t inIndentation) const {
  ioString << "[@assertInstructionSE:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_assertInstructionSE::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_assertInstructionSE (mProperty_mInstructionLocation, mProperty_mExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @assertInstructionSE type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_assertInstructionSE ("assertInstructionSE",
                                            & kTypeDescriptor_GALGAS_instructionSE) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_assertInstructionSE::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assertInstructionSE ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_assertInstructionSE::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_assertInstructionSE (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_assertInstructionSE GALGAS_assertInstructionSE::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_assertInstructionSE result ;
  const GALGAS_assertInstructionSE * p = (const GALGAS_assertInstructionSE *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_assertInstructionSE *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("assertInstructionSE", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_assertInstructionIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_assertInstructionIR * p = (const cPtr_assertInstructionIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_assertInstructionIR) ;
  if (kOperandEqual == result) {
    result = mProperty_mAssertInstructionLocation.objectCompare (p->mProperty_mAssertInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInstructionList.objectCompare (p->mProperty_mInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExpressionValue.objectCompare (p->mProperty_mExpressionValue) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_assertInstructionIR::objectCompare (const GALGAS_assertInstructionIR & inOperand) const {
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

GALGAS_assertInstructionIR::GALGAS_assertInstructionIR (void) :
GALGAS_abstractInstructionIR () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_assertInstructionIR::GALGAS_assertInstructionIR (const cPtr_assertInstructionIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_assertInstructionIR) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_assertInstructionIR GALGAS_assertInstructionIR::constructor_new (const GALGAS_location & inAttribute_mAssertInstructionLocation,
                                                                        const GALGAS_instructionListIR & inAttribute_mInstructionList,
                                                                        const GALGAS_objectIR & inAttribute_mExpressionValue
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_assertInstructionIR result ;
  if (inAttribute_mAssertInstructionLocation.isValid () && inAttribute_mInstructionList.isValid () && inAttribute_mExpressionValue.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_assertInstructionIR (inAttribute_mAssertInstructionLocation, inAttribute_mInstructionList, inAttribute_mExpressionValue COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_assertInstructionIR::getter_mAssertInstructionLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_assertInstructionIR * p = (const cPtr_assertInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assertInstructionIR) ;
    result = p->mProperty_mAssertInstructionLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_assertInstructionIR::getter_mAssertInstructionLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAssertInstructionLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR GALGAS_assertInstructionIR::getter_mInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_instructionListIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_assertInstructionIR * p = (const cPtr_assertInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assertInstructionIR) ;
    result = p->mProperty_mInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR cPtr_assertInstructionIR::getter_mInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_assertInstructionIR::getter_mExpressionValue (UNUSED_LOCATION_ARGS) const {
  GALGAS_objectIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_assertInstructionIR * p = (const cPtr_assertInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assertInstructionIR) ;
    result = p->mProperty_mExpressionValue ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR cPtr_assertInstructionIR::getter_mExpressionValue (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExpressionValue ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                    Pointer class for @assertInstructionIR class                                     *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_assertInstructionIR::cPtr_assertInstructionIR (const GALGAS_location & in_mAssertInstructionLocation,
                                                    const GALGAS_instructionListIR & in_mInstructionList,
                                                    const GALGAS_objectIR & in_mExpressionValue
                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mAssertInstructionLocation (in_mAssertInstructionLocation),
mProperty_mInstructionList (in_mInstructionList),
mProperty_mExpressionValue (in_mExpressionValue) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_assertInstructionIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assertInstructionIR ;
}

void cPtr_assertInstructionIR::description (C_String & ioString,
                                            const int32_t inIndentation) const {
  ioString << "[@assertInstructionIR:" ;
  mProperty_mAssertInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExpressionValue.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_assertInstructionIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_assertInstructionIR (mProperty_mAssertInstructionLocation, mProperty_mInstructionList, mProperty_mExpressionValue COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @assertInstructionIR type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_assertInstructionIR ("assertInstructionIR",
                                            & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_assertInstructionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assertInstructionIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_assertInstructionIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_assertInstructionIR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_assertInstructionIR GALGAS_assertInstructionIR::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_assertInstructionIR result ;
  const GALGAS_assertInstructionIR * p = (const GALGAS_assertInstructionIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_assertInstructionIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("assertInstructionIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
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
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mCodeExpression.objectCompare (p->mProperty_mCodeExpression) ;
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

GALGAS_panicInstructionAST GALGAS_panicInstructionAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                        const GALGAS_expressionAST & inAttribute_mCodeExpression
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_panicInstructionAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mCodeExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_panicInstructionAST (inAttribute_mInstructionLocation, inAttribute_mCodeExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST GALGAS_panicInstructionAST::getter_mCodeExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_panicInstructionAST * p = (const cPtr_panicInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_panicInstructionAST) ;
    result = p->mProperty_mCodeExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST cPtr_panicInstructionAST::getter_mCodeExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mCodeExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                    Pointer class for @panicInstructionAST class                                     *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_panicInstructionAST::cPtr_panicInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                    const GALGAS_expressionAST & in_mCodeExpression
                                                    COMMA_LOCATION_ARGS) :
cPtr_instructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mCodeExpression (in_mCodeExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_panicInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_panicInstructionAST ;
}

void cPtr_panicInstructionAST::description (C_String & ioString,
                                            const int32_t inIndentation) const {
  ioString << "[@panicInstructionAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mCodeExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_panicInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_panicInstructionAST (mProperty_mInstructionLocation, mProperty_mCodeExpression COMMA_THERE)) ;
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

typeComparisonResult cPtr_panicInstructionSE::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_panicInstructionSE * p = (const cPtr_panicInstructionSE *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_panicInstructionSE) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mCodeExpression.objectCompare (p->mProperty_mCodeExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_panicInstructionSE::objectCompare (const GALGAS_panicInstructionSE & inOperand) const {
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

GALGAS_panicInstructionSE::GALGAS_panicInstructionSE (void) :
GALGAS_instructionSE () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_panicInstructionSE::GALGAS_panicInstructionSE (const cPtr_panicInstructionSE * inSourcePtr) :
GALGAS_instructionSE (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_panicInstructionSE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_panicInstructionSE GALGAS_panicInstructionSE::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                      const GALGAS_expressionSE & inAttribute_mCodeExpression
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_panicInstructionSE result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mCodeExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_panicInstructionSE (inAttribute_mInstructionLocation, inAttribute_mCodeExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionSE GALGAS_panicInstructionSE::getter_mCodeExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expressionSE result ;
  if (NULL != mObjectPtr) {
    const cPtr_panicInstructionSE * p = (const cPtr_panicInstructionSE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_panicInstructionSE) ;
    result = p->mProperty_mCodeExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionSE cPtr_panicInstructionSE::getter_mCodeExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mCodeExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                     Pointer class for @panicInstructionSE class                                     *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_panicInstructionSE::cPtr_panicInstructionSE (const GALGAS_location & in_mInstructionLocation,
                                                  const GALGAS_expressionSE & in_mCodeExpression
                                                  COMMA_LOCATION_ARGS) :
cPtr_instructionSE (in_mInstructionLocation COMMA_THERE),
mProperty_mCodeExpression (in_mCodeExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_panicInstructionSE::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_panicInstructionSE ;
}

void cPtr_panicInstructionSE::description (C_String & ioString,
                                           const int32_t inIndentation) const {
  ioString << "[@panicInstructionSE:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mCodeExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_panicInstructionSE::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_panicInstructionSE (mProperty_mInstructionLocation, mProperty_mCodeExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @panicInstructionSE type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_panicInstructionSE ("panicInstructionSE",
                                           & kTypeDescriptor_GALGAS_instructionSE) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_panicInstructionSE::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_panicInstructionSE ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_panicInstructionSE::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_panicInstructionSE (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_panicInstructionSE GALGAS_panicInstructionSE::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_panicInstructionSE result ;
  const GALGAS_panicInstructionSE * p = (const GALGAS_panicInstructionSE *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_panicInstructionSE *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("panicInstructionSE", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_panicInstructionIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_panicInstructionIR * p = (const cPtr_panicInstructionIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_panicInstructionIR) ;
  if (kOperandEqual == result) {
    result = mProperty_mThrowLocation.objectCompare (p->mProperty_mThrowLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPanicCode.objectCompare (p->mProperty_mPanicCode) ;
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
    result = p->mProperty_mThrowLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_panicInstructionIR::getter_mThrowLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mThrowLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint GALGAS_panicInstructionIR::getter_mPanicCode (UNUSED_LOCATION_ARGS) const {
  GALGAS_bigint result ;
  if (NULL != mObjectPtr) {
    const cPtr_panicInstructionIR * p = (const cPtr_panicInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_panicInstructionIR) ;
    result = p->mProperty_mPanicCode ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint cPtr_panicInstructionIR::getter_mPanicCode (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPanicCode ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                     Pointer class for @panicInstructionIR class                                     *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_panicInstructionIR::cPtr_panicInstructionIR (const GALGAS_location & in_mThrowLocation,
                                                  const GALGAS_bigint & in_mPanicCode
                                                  COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mThrowLocation (in_mThrowLocation),
mProperty_mPanicCode (in_mPanicCode) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_panicInstructionIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_panicInstructionIR ;
}

void cPtr_panicInstructionIR::description (C_String & ioString,
                                           const int32_t inIndentation) const {
  ioString << "[@panicInstructionIR:" ;
  mProperty_mThrowLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mPanicCode.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_panicInstructionIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_panicInstructionIR (mProperty_mThrowLocation, mProperty_mPanicCode COMMA_THERE)) ;
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
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTestExpression.objectCompare (p->mProperty_mTestExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTestExpressionEndLocation.objectCompare (p->mProperty_mTestExpressionEndLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mStaticIfExpression.objectCompare (p->mProperty_mStaticIfExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mThenInstructionList.objectCompare (p->mProperty_mThenInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfThenInstructionList.objectCompare (p->mProperty_mEndOfThenInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mElseInstructionList.objectCompare (p->mProperty_mElseInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfElseInstructionList.objectCompare (p->mProperty_mEndOfElseInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOf_5F_if_5F_instruction.objectCompare (p->mProperty_mEndOf_5F_if_5F_instruction) ;
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

GALGAS_ifInstructionAST GALGAS_ifInstructionAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                  const GALGAS_expressionAST & inAttribute_mTestExpression,
                                                                  const GALGAS_location & inAttribute_mTestExpressionEndLocation,
                                                                  const GALGAS_bool & inAttribute_mStaticIfExpression,
                                                                  const GALGAS_instructionListAST & inAttribute_mThenInstructionList,
                                                                  const GALGAS_location & inAttribute_mEndOfThenInstructionList,
                                                                  const GALGAS_instructionListAST & inAttribute_mElseInstructionList,
                                                                  const GALGAS_location & inAttribute_mEndOfElseInstructionList,
                                                                  const GALGAS_location & inAttribute_mEndOf_5F_if_5F_instruction
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_ifInstructionAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mTestExpression.isValid () && inAttribute_mTestExpressionEndLocation.isValid () && inAttribute_mStaticIfExpression.isValid () && inAttribute_mThenInstructionList.isValid () && inAttribute_mEndOfThenInstructionList.isValid () && inAttribute_mElseInstructionList.isValid () && inAttribute_mEndOfElseInstructionList.isValid () && inAttribute_mEndOf_5F_if_5F_instruction.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_ifInstructionAST (inAttribute_mInstructionLocation, inAttribute_mTestExpression, inAttribute_mTestExpressionEndLocation, inAttribute_mStaticIfExpression, inAttribute_mThenInstructionList, inAttribute_mEndOfThenInstructionList, inAttribute_mElseInstructionList, inAttribute_mEndOfElseInstructionList, inAttribute_mEndOf_5F_if_5F_instruction COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST GALGAS_ifInstructionAST::getter_mTestExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_ifInstructionAST * p = (const cPtr_ifInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionAST) ;
    result = p->mProperty_mTestExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST cPtr_ifInstructionAST::getter_mTestExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTestExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_ifInstructionAST::getter_mTestExpressionEndLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_ifInstructionAST * p = (const cPtr_ifInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionAST) ;
    result = p->mProperty_mTestExpressionEndLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_ifInstructionAST::getter_mTestExpressionEndLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTestExpressionEndLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_ifInstructionAST::getter_mStaticIfExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_ifInstructionAST * p = (const cPtr_ifInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionAST) ;
    result = p->mProperty_mStaticIfExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_ifInstructionAST::getter_mStaticIfExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mStaticIfExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST GALGAS_ifInstructionAST::getter_mThenInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_instructionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_ifInstructionAST * p = (const cPtr_ifInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionAST) ;
    result = p->mProperty_mThenInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST cPtr_ifInstructionAST::getter_mThenInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mThenInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_ifInstructionAST::getter_mEndOfThenInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_ifInstructionAST * p = (const cPtr_ifInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionAST) ;
    result = p->mProperty_mEndOfThenInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_ifInstructionAST::getter_mEndOfThenInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOfThenInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST GALGAS_ifInstructionAST::getter_mElseInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_instructionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_ifInstructionAST * p = (const cPtr_ifInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionAST) ;
    result = p->mProperty_mElseInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST cPtr_ifInstructionAST::getter_mElseInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mElseInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_ifInstructionAST::getter_mEndOfElseInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_ifInstructionAST * p = (const cPtr_ifInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionAST) ;
    result = p->mProperty_mEndOfElseInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_ifInstructionAST::getter_mEndOfElseInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOfElseInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_ifInstructionAST::getter_mEndOf_5F_if_5F_instruction (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_ifInstructionAST * p = (const cPtr_ifInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionAST) ;
    result = p->mProperty_mEndOf_5F_if_5F_instruction ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_ifInstructionAST::getter_mEndOf_5F_if_5F_instruction (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOf_5F_if_5F_instruction ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                      Pointer class for @ifInstructionAST class                                      *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_ifInstructionAST::cPtr_ifInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                              const GALGAS_expressionAST & in_mTestExpression,
                                              const GALGAS_location & in_mTestExpressionEndLocation,
                                              const GALGAS_bool & in_mStaticIfExpression,
                                              const GALGAS_instructionListAST & in_mThenInstructionList,
                                              const GALGAS_location & in_mEndOfThenInstructionList,
                                              const GALGAS_instructionListAST & in_mElseInstructionList,
                                              const GALGAS_location & in_mEndOfElseInstructionList,
                                              const GALGAS_location & in_mEndOf_5F_if_5F_instruction
                                              COMMA_LOCATION_ARGS) :
cPtr_instructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mTestExpression (in_mTestExpression),
mProperty_mTestExpressionEndLocation (in_mTestExpressionEndLocation),
mProperty_mStaticIfExpression (in_mStaticIfExpression),
mProperty_mThenInstructionList (in_mThenInstructionList),
mProperty_mEndOfThenInstructionList (in_mEndOfThenInstructionList),
mProperty_mElseInstructionList (in_mElseInstructionList),
mProperty_mEndOfElseInstructionList (in_mEndOfElseInstructionList),
mProperty_mEndOf_5F_if_5F_instruction (in_mEndOf_5F_if_5F_instruction) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_ifInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifInstructionAST ;
}

void cPtr_ifInstructionAST::description (C_String & ioString,
                                         const int32_t inIndentation) const {
  ioString << "[@ifInstructionAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTestExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTestExpressionEndLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mStaticIfExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mThenInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOfThenInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mElseInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOfElseInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOf_5F_if_5F_instruction.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_ifInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_ifInstructionAST (mProperty_mInstructionLocation, mProperty_mTestExpression, mProperty_mTestExpressionEndLocation, mProperty_mStaticIfExpression, mProperty_mThenInstructionList, mProperty_mEndOfThenInstructionList, mProperty_mElseInstructionList, mProperty_mEndOfElseInstructionList, mProperty_mEndOf_5F_if_5F_instruction COMMA_THERE)) ;
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

typeComparisonResult cPtr_ifInstructionSE::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_ifInstructionSE * p = (const cPtr_ifInstructionSE *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_ifInstructionSE) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTestExpression.objectCompare (p->mProperty_mTestExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTestExpressionEndLocation.objectCompare (p->mProperty_mTestExpressionEndLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mStaticIfExpression.objectCompare (p->mProperty_mStaticIfExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mThenInstructionList.objectCompare (p->mProperty_mThenInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfThenInstructionList.objectCompare (p->mProperty_mEndOfThenInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mElseInstructionList.objectCompare (p->mProperty_mElseInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfElseInstructionList.objectCompare (p->mProperty_mEndOfElseInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOf_5F_if_5F_instruction.objectCompare (p->mProperty_mEndOf_5F_if_5F_instruction) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_ifInstructionSE::objectCompare (const GALGAS_ifInstructionSE & inOperand) const {
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

GALGAS_ifInstructionSE::GALGAS_ifInstructionSE (void) :
GALGAS_instructionSE () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ifInstructionSE::GALGAS_ifInstructionSE (const cPtr_ifInstructionSE * inSourcePtr) :
GALGAS_instructionSE (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ifInstructionSE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ifInstructionSE GALGAS_ifInstructionSE::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                const GALGAS_expressionSE & inAttribute_mTestExpression,
                                                                const GALGAS_location & inAttribute_mTestExpressionEndLocation,
                                                                const GALGAS_bool & inAttribute_mStaticIfExpression,
                                                                const GALGAS_instructionListSE & inAttribute_mThenInstructionList,
                                                                const GALGAS_location & inAttribute_mEndOfThenInstructionList,
                                                                const GALGAS_instructionListSE & inAttribute_mElseInstructionList,
                                                                const GALGAS_location & inAttribute_mEndOfElseInstructionList,
                                                                const GALGAS_location & inAttribute_mEndOf_5F_if_5F_instruction
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_ifInstructionSE result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mTestExpression.isValid () && inAttribute_mTestExpressionEndLocation.isValid () && inAttribute_mStaticIfExpression.isValid () && inAttribute_mThenInstructionList.isValid () && inAttribute_mEndOfThenInstructionList.isValid () && inAttribute_mElseInstructionList.isValid () && inAttribute_mEndOfElseInstructionList.isValid () && inAttribute_mEndOf_5F_if_5F_instruction.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_ifInstructionSE (inAttribute_mInstructionLocation, inAttribute_mTestExpression, inAttribute_mTestExpressionEndLocation, inAttribute_mStaticIfExpression, inAttribute_mThenInstructionList, inAttribute_mEndOfThenInstructionList, inAttribute_mElseInstructionList, inAttribute_mEndOfElseInstructionList, inAttribute_mEndOf_5F_if_5F_instruction COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionSE GALGAS_ifInstructionSE::getter_mTestExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expressionSE result ;
  if (NULL != mObjectPtr) {
    const cPtr_ifInstructionSE * p = (const cPtr_ifInstructionSE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionSE) ;
    result = p->mProperty_mTestExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionSE cPtr_ifInstructionSE::getter_mTestExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTestExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_ifInstructionSE::getter_mTestExpressionEndLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_ifInstructionSE * p = (const cPtr_ifInstructionSE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionSE) ;
    result = p->mProperty_mTestExpressionEndLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_ifInstructionSE::getter_mTestExpressionEndLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTestExpressionEndLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_ifInstructionSE::getter_mStaticIfExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_ifInstructionSE * p = (const cPtr_ifInstructionSE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionSE) ;
    result = p->mProperty_mStaticIfExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_ifInstructionSE::getter_mStaticIfExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mStaticIfExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListSE GALGAS_ifInstructionSE::getter_mThenInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_instructionListSE result ;
  if (NULL != mObjectPtr) {
    const cPtr_ifInstructionSE * p = (const cPtr_ifInstructionSE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionSE) ;
    result = p->mProperty_mThenInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListSE cPtr_ifInstructionSE::getter_mThenInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mThenInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_ifInstructionSE::getter_mEndOfThenInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_ifInstructionSE * p = (const cPtr_ifInstructionSE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionSE) ;
    result = p->mProperty_mEndOfThenInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_ifInstructionSE::getter_mEndOfThenInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOfThenInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListSE GALGAS_ifInstructionSE::getter_mElseInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_instructionListSE result ;
  if (NULL != mObjectPtr) {
    const cPtr_ifInstructionSE * p = (const cPtr_ifInstructionSE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionSE) ;
    result = p->mProperty_mElseInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListSE cPtr_ifInstructionSE::getter_mElseInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mElseInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_ifInstructionSE::getter_mEndOfElseInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_ifInstructionSE * p = (const cPtr_ifInstructionSE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionSE) ;
    result = p->mProperty_mEndOfElseInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_ifInstructionSE::getter_mEndOfElseInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOfElseInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_ifInstructionSE::getter_mEndOf_5F_if_5F_instruction (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_ifInstructionSE * p = (const cPtr_ifInstructionSE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionSE) ;
    result = p->mProperty_mEndOf_5F_if_5F_instruction ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_ifInstructionSE::getter_mEndOf_5F_if_5F_instruction (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOf_5F_if_5F_instruction ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                      Pointer class for @ifInstructionSE class                                       *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_ifInstructionSE::cPtr_ifInstructionSE (const GALGAS_location & in_mInstructionLocation,
                                            const GALGAS_expressionSE & in_mTestExpression,
                                            const GALGAS_location & in_mTestExpressionEndLocation,
                                            const GALGAS_bool & in_mStaticIfExpression,
                                            const GALGAS_instructionListSE & in_mThenInstructionList,
                                            const GALGAS_location & in_mEndOfThenInstructionList,
                                            const GALGAS_instructionListSE & in_mElseInstructionList,
                                            const GALGAS_location & in_mEndOfElseInstructionList,
                                            const GALGAS_location & in_mEndOf_5F_if_5F_instruction
                                            COMMA_LOCATION_ARGS) :
cPtr_instructionSE (in_mInstructionLocation COMMA_THERE),
mProperty_mTestExpression (in_mTestExpression),
mProperty_mTestExpressionEndLocation (in_mTestExpressionEndLocation),
mProperty_mStaticIfExpression (in_mStaticIfExpression),
mProperty_mThenInstructionList (in_mThenInstructionList),
mProperty_mEndOfThenInstructionList (in_mEndOfThenInstructionList),
mProperty_mElseInstructionList (in_mElseInstructionList),
mProperty_mEndOfElseInstructionList (in_mEndOfElseInstructionList),
mProperty_mEndOf_5F_if_5F_instruction (in_mEndOf_5F_if_5F_instruction) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_ifInstructionSE::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifInstructionSE ;
}

void cPtr_ifInstructionSE::description (C_String & ioString,
                                        const int32_t inIndentation) const {
  ioString << "[@ifInstructionSE:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTestExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTestExpressionEndLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mStaticIfExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mThenInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOfThenInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mElseInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOfElseInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOf_5F_if_5F_instruction.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_ifInstructionSE::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_ifInstructionSE (mProperty_mInstructionLocation, mProperty_mTestExpression, mProperty_mTestExpressionEndLocation, mProperty_mStaticIfExpression, mProperty_mThenInstructionList, mProperty_mEndOfThenInstructionList, mProperty_mElseInstructionList, mProperty_mEndOfElseInstructionList, mProperty_mEndOf_5F_if_5F_instruction COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @ifInstructionSE type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ifInstructionSE ("ifInstructionSE",
                                        & kTypeDescriptor_GALGAS_instructionSE) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_ifInstructionSE::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifInstructionSE ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_ifInstructionSE::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ifInstructionSE (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ifInstructionSE GALGAS_ifInstructionSE::extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_ifInstructionSE result ;
  const GALGAS_ifInstructionSE * p = (const GALGAS_ifInstructionSE *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_ifInstructionSE *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ifInstructionSE", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_ifInstructionIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_ifInstructionIR * p = (const cPtr_ifInstructionIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_ifInstructionIR) ;
  if (kOperandEqual == result) {
    result = mProperty_mTestVariable.objectCompare (p->mProperty_mTestVariable) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLocation.objectCompare (p->mProperty_mLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mThenInstructionGenerationList.objectCompare (p->mProperty_mThenInstructionGenerationList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mElseInstructionGenerationList.objectCompare (p->mProperty_mElseInstructionGenerationList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_ifInstructionIR::objectCompare (const GALGAS_ifInstructionIR & inOperand) const {
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

GALGAS_ifInstructionIR::GALGAS_ifInstructionIR (void) :
GALGAS_abstractInstructionIR () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ifInstructionIR::GALGAS_ifInstructionIR (const cPtr_ifInstructionIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ifInstructionIR) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ifInstructionIR GALGAS_ifInstructionIR::constructor_new (const GALGAS_objectIR & inAttribute_mTestVariable,
                                                                const GALGAS_location & inAttribute_mLocation,
                                                                const GALGAS_instructionListIR & inAttribute_mThenInstructionGenerationList,
                                                                const GALGAS_instructionListIR & inAttribute_mElseInstructionGenerationList
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_ifInstructionIR result ;
  if (inAttribute_mTestVariable.isValid () && inAttribute_mLocation.isValid () && inAttribute_mThenInstructionGenerationList.isValid () && inAttribute_mElseInstructionGenerationList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_ifInstructionIR (inAttribute_mTestVariable, inAttribute_mLocation, inAttribute_mThenInstructionGenerationList, inAttribute_mElseInstructionGenerationList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_ifInstructionIR::getter_mTestVariable (UNUSED_LOCATION_ARGS) const {
  GALGAS_objectIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_ifInstructionIR * p = (const cPtr_ifInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionIR) ;
    result = p->mProperty_mTestVariable ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR cPtr_ifInstructionIR::getter_mTestVariable (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTestVariable ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_ifInstructionIR::getter_mLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_ifInstructionIR * p = (const cPtr_ifInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionIR) ;
    result = p->mProperty_mLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_ifInstructionIR::getter_mLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR GALGAS_ifInstructionIR::getter_mThenInstructionGenerationList (UNUSED_LOCATION_ARGS) const {
  GALGAS_instructionListIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_ifInstructionIR * p = (const cPtr_ifInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionIR) ;
    result = p->mProperty_mThenInstructionGenerationList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR cPtr_ifInstructionIR::getter_mThenInstructionGenerationList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mThenInstructionGenerationList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR GALGAS_ifInstructionIR::getter_mElseInstructionGenerationList (UNUSED_LOCATION_ARGS) const {
  GALGAS_instructionListIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_ifInstructionIR * p = (const cPtr_ifInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionIR) ;
    result = p->mProperty_mElseInstructionGenerationList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR cPtr_ifInstructionIR::getter_mElseInstructionGenerationList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mElseInstructionGenerationList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                      Pointer class for @ifInstructionIR class                                       *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_ifInstructionIR::cPtr_ifInstructionIR (const GALGAS_objectIR & in_mTestVariable,
                                            const GALGAS_location & in_mLocation,
                                            const GALGAS_instructionListIR & in_mThenInstructionGenerationList,
                                            const GALGAS_instructionListIR & in_mElseInstructionGenerationList
                                            COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mTestVariable (in_mTestVariable),
mProperty_mLocation (in_mLocation),
mProperty_mThenInstructionGenerationList (in_mThenInstructionGenerationList),
mProperty_mElseInstructionGenerationList (in_mElseInstructionGenerationList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_ifInstructionIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifInstructionIR ;
}

void cPtr_ifInstructionIR::description (C_String & ioString,
                                        const int32_t inIndentation) const {
  ioString << "[@ifInstructionIR:" ;
  mProperty_mTestVariable.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mThenInstructionGenerationList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mElseInstructionGenerationList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_ifInstructionIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_ifInstructionIR (mProperty_mTestVariable, mProperty_mLocation, mProperty_mThenInstructionGenerationList, mProperty_mElseInstructionGenerationList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @ifInstructionIR type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ifInstructionIR ("ifInstructionIR",
                                        & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_ifInstructionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifInstructionIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_ifInstructionIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ifInstructionIR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ifInstructionIR GALGAS_ifInstructionIR::extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_ifInstructionIR result ;
  const GALGAS_ifInstructionIR * p = (const GALGAS_ifInstructionIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_ifInstructionIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ifInstructionIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_guardedCommandAST_synchronization::cEnumAssociatedValues_guardedCommandAST_synchronization (const GALGAS_bool & inAssociatedValue0,
                                                                                                                  const GALGAS_lstring & inAssociatedValue1,
                                                                                                                  const GALGAS_lstring & inAssociatedValue2,
                                                                                                                  const GALGAS_effectiveArgumentListAST & inAssociatedValue3
                                                                                                                  COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1),
mAssociatedValue2 (inAssociatedValue2),
mAssociatedValue3 (inAssociatedValue3) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_guardedCommandAST_synchronization::description (C_String & ioString,
                                                                           const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  mAssociatedValue2.description (ioString, inIndentation) ;
  mAssociatedValue3.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_guardedCommandAST_synchronization::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_guardedCommandAST_synchronization * ptr = dynamic_cast<const cEnumAssociatedValues_guardedCommandAST_synchronization *> (inOperand) ;
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

cEnumAssociatedValues_guardedCommandAST_boolean::cEnumAssociatedValues_guardedCommandAST_boolean (const GALGAS_bool & inAssociatedValue0,
                                                                                                  const GALGAS_expressionAST & inAssociatedValue1,
                                                                                                  const GALGAS_location & inAssociatedValue2
                                                                                                  COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1),
mAssociatedValue2 (inAssociatedValue2) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_guardedCommandAST_boolean::description (C_String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  mAssociatedValue2.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_guardedCommandAST_boolean::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_guardedCommandAST_boolean * ptr = dynamic_cast<const cEnumAssociatedValues_guardedCommandAST_boolean *> (inOperand) ;
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

cEnumAssociatedValues_guardedCommandAST_boolAndSync::cEnumAssociatedValues_guardedCommandAST_boolAndSync (const GALGAS_bool & inAssociatedValue0,
                                                                                                          const GALGAS_expressionAST & inAssociatedValue1,
                                                                                                          const GALGAS_location & inAssociatedValue2,
                                                                                                          const GALGAS_lstring & inAssociatedValue3,
                                                                                                          const GALGAS_lstring & inAssociatedValue4,
                                                                                                          const GALGAS_effectiveArgumentListAST & inAssociatedValue5
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

void cEnumAssociatedValues_guardedCommandAST_boolAndSync::description (C_String & ioString,
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

typeComparisonResult cEnumAssociatedValues_guardedCommandAST_boolAndSync::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_guardedCommandAST_boolAndSync * ptr = dynamic_cast<const cEnumAssociatedValues_guardedCommandAST_boolAndSync *> (inOperand) ;
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

GALGAS_guardedCommandAST::GALGAS_guardedCommandAST (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardedCommandAST GALGAS_guardedCommandAST::constructor_synchronization (const GALGAS_bool & inAssociatedValue0,
                                                                                const GALGAS_lstring & inAssociatedValue1,
                                                                                const GALGAS_lstring & inAssociatedValue2,
                                                                                const GALGAS_effectiveArgumentListAST & inAssociatedValue3
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_guardedCommandAST result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid () && inAssociatedValue2.isValid () && inAssociatedValue3.isValid ()) {
    result.mEnum = kEnum_synchronization ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_guardedCommandAST_synchronization (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2, inAssociatedValue3 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardedCommandAST GALGAS_guardedCommandAST::constructor_boolean (const GALGAS_bool & inAssociatedValue0,
                                                                        const GALGAS_expressionAST & inAssociatedValue1,
                                                                        const GALGAS_location & inAssociatedValue2
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_guardedCommandAST result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid () && inAssociatedValue2.isValid ()) {
    result.mEnum = kEnum_boolean ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_guardedCommandAST_boolean (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardedCommandAST GALGAS_guardedCommandAST::constructor_boolAndSync (const GALGAS_bool & inAssociatedValue0,
                                                                            const GALGAS_expressionAST & inAssociatedValue1,
                                                                            const GALGAS_location & inAssociatedValue2,
                                                                            const GALGAS_lstring & inAssociatedValue3,
                                                                            const GALGAS_lstring & inAssociatedValue4,
                                                                            const GALGAS_effectiveArgumentListAST & inAssociatedValue5
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_guardedCommandAST result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid () && inAssociatedValue2.isValid () && inAssociatedValue3.isValid () && inAssociatedValue4.isValid () && inAssociatedValue5.isValid ()) {
    result.mEnum = kEnum_boolAndSync ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_guardedCommandAST_boolAndSync (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2, inAssociatedValue3, inAssociatedValue4, inAssociatedValue5 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guardedCommandAST::method_synchronization (GALGAS_bool & outAssociatedValue0,
                                                       GALGAS_lstring & outAssociatedValue1,
                                                       GALGAS_lstring & outAssociatedValue2,
                                                       GALGAS_effectiveArgumentListAST & outAssociatedValue3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_synchronization) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    outAssociatedValue2.drop () ;
    outAssociatedValue3.drop () ;
    C_String s ;
    s << "method @guardedCommandAST synchronization invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_guardedCommandAST_synchronization * ptr = (const cEnumAssociatedValues_guardedCommandAST_synchronization *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
    outAssociatedValue3 = ptr->mAssociatedValue3 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guardedCommandAST::method_boolean (GALGAS_bool & outAssociatedValue0,
                                               GALGAS_expressionAST & outAssociatedValue1,
                                               GALGAS_location & outAssociatedValue2,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_boolean) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    outAssociatedValue2.drop () ;
    C_String s ;
    s << "method @guardedCommandAST boolean invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_guardedCommandAST_boolean * ptr = (const cEnumAssociatedValues_guardedCommandAST_boolean *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guardedCommandAST::method_boolAndSync (GALGAS_bool & outAssociatedValue0,
                                                   GALGAS_expressionAST & outAssociatedValue1,
                                                   GALGAS_location & outAssociatedValue2,
                                                   GALGAS_lstring & outAssociatedValue3,
                                                   GALGAS_lstring & outAssociatedValue4,
                                                   GALGAS_effectiveArgumentListAST & outAssociatedValue5,
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
    s << "method @guardedCommandAST boolAndSync invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_guardedCommandAST_boolAndSync * ptr = (const cEnumAssociatedValues_guardedCommandAST_boolAndSync *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
    outAssociatedValue3 = ptr->mAssociatedValue3 ;
    outAssociatedValue4 = ptr->mAssociatedValue4 ;
    outAssociatedValue5 = ptr->mAssociatedValue5 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * gEnumNameArrayFor_guardedCommandAST [4] = {
  "(not built)",
  "synchronization",
  "boolean",
  "boolAndSync"
} ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_guardedCommandAST::getter_isSynchronization (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_synchronization == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_guardedCommandAST::getter_isBoolean (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_boolean == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_guardedCommandAST::getter_isBoolAndSync (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_boolAndSync == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guardedCommandAST::description (C_String & ioString,
                                            const int32_t inIndentation) const {
  ioString << "<enum @guardedCommandAST: " << gEnumNameArrayFor_guardedCommandAST [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_guardedCommandAST::objectCompare (const GALGAS_guardedCommandAST & inOperand) const {
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
//                                               @guardedCommandAST type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_guardedCommandAST ("guardedCommandAST",
                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_guardedCommandAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guardedCommandAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_guardedCommandAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_guardedCommandAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardedCommandAST GALGAS_guardedCommandAST::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_guardedCommandAST result ;
  const GALGAS_guardedCommandAST * p = (const GALGAS_guardedCommandAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_guardedCommandAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("guardedCommandAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
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
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mBranchList.objectCompare (p->mProperty_mBranchList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOf_5F_on_5F_instruction.objectCompare (p->mProperty_mEndOf_5F_on_5F_instruction) ;
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
                                                     GALGAS_syncInstructionBranchListAST::constructor_emptyList (HERE),
                                                     GALGAS_location::constructor_nowhere (HERE)
                                                     COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syncInstructionAST::GALGAS_syncInstructionAST (const cPtr_syncInstructionAST * inSourcePtr) :
GALGAS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_syncInstructionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syncInstructionAST GALGAS_syncInstructionAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                      const GALGAS_syncInstructionBranchListAST & inAttribute_mBranchList,
                                                                      const GALGAS_location & inAttribute_mEndOf_5F_on_5F_instruction
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_syncInstructionAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mBranchList.isValid () && inAttribute_mEndOf_5F_on_5F_instruction.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_syncInstructionAST (inAttribute_mInstructionLocation, inAttribute_mBranchList, inAttribute_mEndOf_5F_on_5F_instruction COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syncInstructionBranchListAST GALGAS_syncInstructionAST::getter_mBranchList (UNUSED_LOCATION_ARGS) const {
  GALGAS_syncInstructionBranchListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_syncInstructionAST * p = (const cPtr_syncInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syncInstructionAST) ;
    result = p->mProperty_mBranchList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syncInstructionBranchListAST cPtr_syncInstructionAST::getter_mBranchList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBranchList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_syncInstructionAST::getter_mEndOf_5F_on_5F_instruction (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_syncInstructionAST * p = (const cPtr_syncInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syncInstructionAST) ;
    result = p->mProperty_mEndOf_5F_on_5F_instruction ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_syncInstructionAST::getter_mEndOf_5F_on_5F_instruction (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOf_5F_on_5F_instruction ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                     Pointer class for @syncInstructionAST class                                     *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_syncInstructionAST::cPtr_syncInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                  const GALGAS_syncInstructionBranchListAST & in_mBranchList,
                                                  const GALGAS_location & in_mEndOf_5F_on_5F_instruction
                                                  COMMA_LOCATION_ARGS) :
cPtr_instructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mBranchList (in_mBranchList),
mProperty_mEndOf_5F_on_5F_instruction (in_mEndOf_5F_on_5F_instruction) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_syncInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syncInstructionAST ;
}

void cPtr_syncInstructionAST::description (C_String & ioString,
                                           const int32_t inIndentation) const {
  ioString << "[@syncInstructionAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mBranchList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOf_5F_on_5F_instruction.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_syncInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_syncInstructionAST (mProperty_mInstructionLocation, mProperty_mBranchList, mProperty_mEndOf_5F_on_5F_instruction COMMA_THERE)) ;
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

cEnumAssociatedValues_guardedCommandSE_synchronization::cEnumAssociatedValues_guardedCommandSE_synchronization (const GALGAS_bool & inAssociatedValue0,
                                                                                                                const GALGAS_lstring & inAssociatedValue1,
                                                                                                                const GALGAS_lstring & inAssociatedValue2,
                                                                                                                const GALGAS_effectiveArgumentListAST & inAssociatedValue3
                                                                                                                COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1),
mAssociatedValue2 (inAssociatedValue2),
mAssociatedValue3 (inAssociatedValue3) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_guardedCommandSE_synchronization::description (C_String & ioString,
                                                                          const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  mAssociatedValue2.description (ioString, inIndentation) ;
  mAssociatedValue3.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_guardedCommandSE_synchronization::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_guardedCommandSE_synchronization * ptr = dynamic_cast<const cEnumAssociatedValues_guardedCommandSE_synchronization *> (inOperand) ;
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

cEnumAssociatedValues_guardedCommandSE_boolean::cEnumAssociatedValues_guardedCommandSE_boolean (const GALGAS_bool & inAssociatedValue0,
                                                                                                const GALGAS_expressionSE & inAssociatedValue1,
                                                                                                const GALGAS_location & inAssociatedValue2
                                                                                                COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1),
mAssociatedValue2 (inAssociatedValue2) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_guardedCommandSE_boolean::description (C_String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  mAssociatedValue2.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_guardedCommandSE_boolean::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_guardedCommandSE_boolean * ptr = dynamic_cast<const cEnumAssociatedValues_guardedCommandSE_boolean *> (inOperand) ;
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

cEnumAssociatedValues_guardedCommandSE_boolAndSync::cEnumAssociatedValues_guardedCommandSE_boolAndSync (const GALGAS_bool & inAssociatedValue0,
                                                                                                        const GALGAS_expressionSE & inAssociatedValue1,
                                                                                                        const GALGAS_location & inAssociatedValue2,
                                                                                                        const GALGAS_lstring & inAssociatedValue3,
                                                                                                        const GALGAS_lstring & inAssociatedValue4,
                                                                                                        const GALGAS_effectiveArgumentListAST & inAssociatedValue5
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

void cEnumAssociatedValues_guardedCommandSE_boolAndSync::description (C_String & ioString,
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

typeComparisonResult cEnumAssociatedValues_guardedCommandSE_boolAndSync::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_guardedCommandSE_boolAndSync * ptr = dynamic_cast<const cEnumAssociatedValues_guardedCommandSE_boolAndSync *> (inOperand) ;
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

GALGAS_guardedCommandSE::GALGAS_guardedCommandSE (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardedCommandSE GALGAS_guardedCommandSE::constructor_synchronization (const GALGAS_bool & inAssociatedValue0,
                                                                              const GALGAS_lstring & inAssociatedValue1,
                                                                              const GALGAS_lstring & inAssociatedValue2,
                                                                              const GALGAS_effectiveArgumentListAST & inAssociatedValue3
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_guardedCommandSE result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid () && inAssociatedValue2.isValid () && inAssociatedValue3.isValid ()) {
    result.mEnum = kEnum_synchronization ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_guardedCommandSE_synchronization (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2, inAssociatedValue3 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardedCommandSE GALGAS_guardedCommandSE::constructor_boolean (const GALGAS_bool & inAssociatedValue0,
                                                                      const GALGAS_expressionSE & inAssociatedValue1,
                                                                      const GALGAS_location & inAssociatedValue2
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_guardedCommandSE result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid () && inAssociatedValue2.isValid ()) {
    result.mEnum = kEnum_boolean ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_guardedCommandSE_boolean (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardedCommandSE GALGAS_guardedCommandSE::constructor_boolAndSync (const GALGAS_bool & inAssociatedValue0,
                                                                          const GALGAS_expressionSE & inAssociatedValue1,
                                                                          const GALGAS_location & inAssociatedValue2,
                                                                          const GALGAS_lstring & inAssociatedValue3,
                                                                          const GALGAS_lstring & inAssociatedValue4,
                                                                          const GALGAS_effectiveArgumentListAST & inAssociatedValue5
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_guardedCommandSE result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid () && inAssociatedValue2.isValid () && inAssociatedValue3.isValid () && inAssociatedValue4.isValid () && inAssociatedValue5.isValid ()) {
    result.mEnum = kEnum_boolAndSync ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_guardedCommandSE_boolAndSync (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2, inAssociatedValue3, inAssociatedValue4, inAssociatedValue5 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guardedCommandSE::method_synchronization (GALGAS_bool & outAssociatedValue0,
                                                      GALGAS_lstring & outAssociatedValue1,
                                                      GALGAS_lstring & outAssociatedValue2,
                                                      GALGAS_effectiveArgumentListAST & outAssociatedValue3,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_synchronization) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    outAssociatedValue2.drop () ;
    outAssociatedValue3.drop () ;
    C_String s ;
    s << "method @guardedCommandSE synchronization invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_guardedCommandSE_synchronization * ptr = (const cEnumAssociatedValues_guardedCommandSE_synchronization *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
    outAssociatedValue3 = ptr->mAssociatedValue3 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guardedCommandSE::method_boolean (GALGAS_bool & outAssociatedValue0,
                                              GALGAS_expressionSE & outAssociatedValue1,
                                              GALGAS_location & outAssociatedValue2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_boolean) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    outAssociatedValue2.drop () ;
    C_String s ;
    s << "method @guardedCommandSE boolean invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_guardedCommandSE_boolean * ptr = (const cEnumAssociatedValues_guardedCommandSE_boolean *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guardedCommandSE::method_boolAndSync (GALGAS_bool & outAssociatedValue0,
                                                  GALGAS_expressionSE & outAssociatedValue1,
                                                  GALGAS_location & outAssociatedValue2,
                                                  GALGAS_lstring & outAssociatedValue3,
                                                  GALGAS_lstring & outAssociatedValue4,
                                                  GALGAS_effectiveArgumentListAST & outAssociatedValue5,
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
    s << "method @guardedCommandSE boolAndSync invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_guardedCommandSE_boolAndSync * ptr = (const cEnumAssociatedValues_guardedCommandSE_boolAndSync *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
    outAssociatedValue3 = ptr->mAssociatedValue3 ;
    outAssociatedValue4 = ptr->mAssociatedValue4 ;
    outAssociatedValue5 = ptr->mAssociatedValue5 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * gEnumNameArrayFor_guardedCommandSE [4] = {
  "(not built)",
  "synchronization",
  "boolean",
  "boolAndSync"
} ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_guardedCommandSE::getter_isSynchronization (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_synchronization == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_guardedCommandSE::getter_isBoolean (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_boolean == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_guardedCommandSE::getter_isBoolAndSync (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_boolAndSync == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guardedCommandSE::description (C_String & ioString,
                                           const int32_t inIndentation) const {
  ioString << "<enum @guardedCommandSE: " << gEnumNameArrayFor_guardedCommandSE [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_guardedCommandSE::objectCompare (const GALGAS_guardedCommandSE & inOperand) const {
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
//                                               @guardedCommandSE type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_guardedCommandSE ("guardedCommandSE",
                                         NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_guardedCommandSE::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guardedCommandSE ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_guardedCommandSE::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_guardedCommandSE (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardedCommandSE GALGAS_guardedCommandSE::extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_guardedCommandSE result ;
  const GALGAS_guardedCommandSE * p = (const GALGAS_guardedCommandSE *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_guardedCommandSE *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("guardedCommandSE", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Class for element of '@syncInstructionBranchListSE' list                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_syncInstructionBranchListSE : public cCollectionElement {
  public : GALGAS_syncInstructionBranchListSE_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_syncInstructionBranchListSE (const GALGAS_guardedCommandSE & in_mGuardedCommand,
                                                           const GALGAS_instructionListSE & in_mInstructionList,
                                                           const GALGAS_location & in_mEndOfBranch
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

cCollectionElement_syncInstructionBranchListSE::cCollectionElement_syncInstructionBranchListSE (const GALGAS_guardedCommandSE & in_mGuardedCommand,
                                                                                                const GALGAS_instructionListSE & in_mInstructionList,
                                                                                                const GALGAS_location & in_mEndOfBranch
                                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mGuardedCommand, in_mInstructionList, in_mEndOfBranch) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_syncInstructionBranchListSE::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_syncInstructionBranchListSE::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_syncInstructionBranchListSE (mObject.mProperty_mGuardedCommand, mObject.mProperty_mInstructionList, mObject.mProperty_mEndOfBranch COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_syncInstructionBranchListSE::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mGuardedCommand" ":" ;
  mObject.mProperty_mGuardedCommand.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInstructionList" ":" ;
  mObject.mProperty_mInstructionList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEndOfBranch" ":" ;
  mObject.mProperty_mEndOfBranch.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_syncInstructionBranchListSE::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_syncInstructionBranchListSE * operand = (cCollectionElement_syncInstructionBranchListSE *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_syncInstructionBranchListSE) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syncInstructionBranchListSE::GALGAS_syncInstructionBranchListSE (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syncInstructionBranchListSE::GALGAS_syncInstructionBranchListSE (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syncInstructionBranchListSE GALGAS_syncInstructionBranchListSE::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_syncInstructionBranchListSE  (capCollectionElementArray ()) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syncInstructionBranchListSE GALGAS_syncInstructionBranchListSE::constructor_listWithValue (const GALGAS_guardedCommandSE & inOperand0,
                                                                                                  const GALGAS_instructionListSE & inOperand1,
                                                                                                  const GALGAS_location & inOperand2
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_syncInstructionBranchListSE result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_syncInstructionBranchListSE (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_syncInstructionBranchListSE::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_syncInstructionBranchListSE::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                    const GALGAS_guardedCommandSE & in_mGuardedCommand,
                                                                    const GALGAS_instructionListSE & in_mInstructionList,
                                                                    const GALGAS_location & in_mEndOfBranch
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_syncInstructionBranchListSE * p = NULL ;
  macroMyNew (p, cCollectionElement_syncInstructionBranchListSE (in_mGuardedCommand,
                                                                 in_mInstructionList,
                                                                 in_mEndOfBranch COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_syncInstructionBranchListSE::addAssign_operation (const GALGAS_guardedCommandSE & inOperand0,
                                                              const GALGAS_instructionListSE & inOperand1,
                                                              const GALGAS_location & inOperand2
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_syncInstructionBranchListSE (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_syncInstructionBranchListSE::setter_insertAtIndex (const GALGAS_guardedCommandSE inOperand0,
                                                               const GALGAS_instructionListSE inOperand1,
                                                               const GALGAS_location inOperand2,
                                                               const GALGAS_uint inInsertionIndex,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_syncInstructionBranchListSE (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_syncInstructionBranchListSE::setter_removeAtIndex (GALGAS_guardedCommandSE & outOperand0,
                                                               GALGAS_instructionListSE & outOperand1,
                                                               GALGAS_location & outOperand2,
                                                               const GALGAS_uint inRemoveIndex,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_syncInstructionBranchListSE * p = (cCollectionElement_syncInstructionBranchListSE *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_syncInstructionBranchListSE) ;
      outOperand0 = p->mObject.mProperty_mGuardedCommand ;
      outOperand1 = p->mObject.mProperty_mInstructionList ;
      outOperand2 = p->mObject.mProperty_mEndOfBranch ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_syncInstructionBranchListSE::setter_popFirst (GALGAS_guardedCommandSE & outOperand0,
                                                          GALGAS_instructionListSE & outOperand1,
                                                          GALGAS_location & outOperand2,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_syncInstructionBranchListSE * p = (cCollectionElement_syncInstructionBranchListSE *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_syncInstructionBranchListSE) ;
    outOperand0 = p->mObject.mProperty_mGuardedCommand ;
    outOperand1 = p->mObject.mProperty_mInstructionList ;
    outOperand2 = p->mObject.mProperty_mEndOfBranch ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_syncInstructionBranchListSE::setter_popLast (GALGAS_guardedCommandSE & outOperand0,
                                                         GALGAS_instructionListSE & outOperand1,
                                                         GALGAS_location & outOperand2,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_syncInstructionBranchListSE * p = (cCollectionElement_syncInstructionBranchListSE *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_syncInstructionBranchListSE) ;
    outOperand0 = p->mObject.mProperty_mGuardedCommand ;
    outOperand1 = p->mObject.mProperty_mInstructionList ;
    outOperand2 = p->mObject.mProperty_mEndOfBranch ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_syncInstructionBranchListSE::method_first (GALGAS_guardedCommandSE & outOperand0,
                                                       GALGAS_instructionListSE & outOperand1,
                                                       GALGAS_location & outOperand2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_syncInstructionBranchListSE * p = (cCollectionElement_syncInstructionBranchListSE *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_syncInstructionBranchListSE) ;
    outOperand0 = p->mObject.mProperty_mGuardedCommand ;
    outOperand1 = p->mObject.mProperty_mInstructionList ;
    outOperand2 = p->mObject.mProperty_mEndOfBranch ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_syncInstructionBranchListSE::method_last (GALGAS_guardedCommandSE & outOperand0,
                                                      GALGAS_instructionListSE & outOperand1,
                                                      GALGAS_location & outOperand2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_syncInstructionBranchListSE * p = (cCollectionElement_syncInstructionBranchListSE *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_syncInstructionBranchListSE) ;
    outOperand0 = p->mObject.mProperty_mGuardedCommand ;
    outOperand1 = p->mObject.mProperty_mInstructionList ;
    outOperand2 = p->mObject.mProperty_mEndOfBranch ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syncInstructionBranchListSE GALGAS_syncInstructionBranchListSE::add_operation (const GALGAS_syncInstructionBranchListSE & inOperand,
                                                                                      C_Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_syncInstructionBranchListSE result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syncInstructionBranchListSE GALGAS_syncInstructionBranchListSE::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_syncInstructionBranchListSE result = GALGAS_syncInstructionBranchListSE::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syncInstructionBranchListSE GALGAS_syncInstructionBranchListSE::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_syncInstructionBranchListSE result = GALGAS_syncInstructionBranchListSE::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syncInstructionBranchListSE GALGAS_syncInstructionBranchListSE::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_syncInstructionBranchListSE result = GALGAS_syncInstructionBranchListSE::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_syncInstructionBranchListSE::plusAssign_operation (const GALGAS_syncInstructionBranchListSE inOperand,
                                                               C_Compiler * /* inCompiler */
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardedCommandSE GALGAS_syncInstructionBranchListSE::getter_mGuardedCommandAtIndex (const GALGAS_uint & inIndex,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_syncInstructionBranchListSE * p = (cCollectionElement_syncInstructionBranchListSE *) attributes.ptr () ;
  GALGAS_guardedCommandSE result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_syncInstructionBranchListSE) ;
    result = p->mObject.mProperty_mGuardedCommand ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListSE GALGAS_syncInstructionBranchListSE::getter_mInstructionListAtIndex (const GALGAS_uint & inIndex,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_syncInstructionBranchListSE * p = (cCollectionElement_syncInstructionBranchListSE *) attributes.ptr () ;
  GALGAS_instructionListSE result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_syncInstructionBranchListSE) ;
    result = p->mObject.mProperty_mInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_syncInstructionBranchListSE::getter_mEndOfBranchAtIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_syncInstructionBranchListSE * p = (cCollectionElement_syncInstructionBranchListSE *) attributes.ptr () ;
  GALGAS_location result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_syncInstructionBranchListSE) ;
    result = p->mObject.mProperty_mEndOfBranch ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_syncInstructionBranchListSE::cEnumerator_syncInstructionBranchListSE (const GALGAS_syncInstructionBranchListSE & inEnumeratedObject,
                                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syncInstructionBranchListSE_2D_element cEnumerator_syncInstructionBranchListSE::current (LOCATION_ARGS) const {
  const cCollectionElement_syncInstructionBranchListSE * p = (const cCollectionElement_syncInstructionBranchListSE *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_syncInstructionBranchListSE) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardedCommandSE cEnumerator_syncInstructionBranchListSE::current_mGuardedCommand (LOCATION_ARGS) const {
  const cCollectionElement_syncInstructionBranchListSE * p = (const cCollectionElement_syncInstructionBranchListSE *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_syncInstructionBranchListSE) ;
  return p->mObject.mProperty_mGuardedCommand ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListSE cEnumerator_syncInstructionBranchListSE::current_mInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_syncInstructionBranchListSE * p = (const cCollectionElement_syncInstructionBranchListSE *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_syncInstructionBranchListSE) ;
  return p->mObject.mProperty_mInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cEnumerator_syncInstructionBranchListSE::current_mEndOfBranch (LOCATION_ARGS) const {
  const cCollectionElement_syncInstructionBranchListSE * p = (const cCollectionElement_syncInstructionBranchListSE *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_syncInstructionBranchListSE) ;
  return p->mObject.mProperty_mEndOfBranch ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @syncInstructionBranchListSE type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_syncInstructionBranchListSE ("syncInstructionBranchListSE",
                                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_syncInstructionBranchListSE::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syncInstructionBranchListSE ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_syncInstructionBranchListSE::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_syncInstructionBranchListSE (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syncInstructionBranchListSE GALGAS_syncInstructionBranchListSE::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_syncInstructionBranchListSE result ;
  const GALGAS_syncInstructionBranchListSE * p = (const GALGAS_syncInstructionBranchListSE *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_syncInstructionBranchListSE *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syncInstructionBranchListSE", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_syncInstructionSE::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_syncInstructionSE * p = (const cPtr_syncInstructionSE *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_syncInstructionSE) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mBranchList.objectCompare (p->mProperty_mBranchList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOf_5F_on_5F_instruction.objectCompare (p->mProperty_mEndOf_5F_on_5F_instruction) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_syncInstructionSE::objectCompare (const GALGAS_syncInstructionSE & inOperand) const {
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

GALGAS_syncInstructionSE::GALGAS_syncInstructionSE (void) :
GALGAS_instructionSE () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syncInstructionSE GALGAS_syncInstructionSE::constructor_default (LOCATION_ARGS) {
  return GALGAS_syncInstructionSE::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                    GALGAS_syncInstructionBranchListSE::constructor_emptyList (HERE),
                                                    GALGAS_location::constructor_nowhere (HERE)
                                                    COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syncInstructionSE::GALGAS_syncInstructionSE (const cPtr_syncInstructionSE * inSourcePtr) :
GALGAS_instructionSE (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_syncInstructionSE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syncInstructionSE GALGAS_syncInstructionSE::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                    const GALGAS_syncInstructionBranchListSE & inAttribute_mBranchList,
                                                                    const GALGAS_location & inAttribute_mEndOf_5F_on_5F_instruction
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_syncInstructionSE result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mBranchList.isValid () && inAttribute_mEndOf_5F_on_5F_instruction.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_syncInstructionSE (inAttribute_mInstructionLocation, inAttribute_mBranchList, inAttribute_mEndOf_5F_on_5F_instruction COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syncInstructionBranchListSE GALGAS_syncInstructionSE::getter_mBranchList (UNUSED_LOCATION_ARGS) const {
  GALGAS_syncInstructionBranchListSE result ;
  if (NULL != mObjectPtr) {
    const cPtr_syncInstructionSE * p = (const cPtr_syncInstructionSE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syncInstructionSE) ;
    result = p->mProperty_mBranchList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syncInstructionBranchListSE cPtr_syncInstructionSE::getter_mBranchList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBranchList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_syncInstructionSE::getter_mEndOf_5F_on_5F_instruction (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_syncInstructionSE * p = (const cPtr_syncInstructionSE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syncInstructionSE) ;
    result = p->mProperty_mEndOf_5F_on_5F_instruction ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_syncInstructionSE::getter_mEndOf_5F_on_5F_instruction (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOf_5F_on_5F_instruction ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                     Pointer class for @syncInstructionSE class                                      *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_syncInstructionSE::cPtr_syncInstructionSE (const GALGAS_location & in_mInstructionLocation,
                                                const GALGAS_syncInstructionBranchListSE & in_mBranchList,
                                                const GALGAS_location & in_mEndOf_5F_on_5F_instruction
                                                COMMA_LOCATION_ARGS) :
cPtr_instructionSE (in_mInstructionLocation COMMA_THERE),
mProperty_mBranchList (in_mBranchList),
mProperty_mEndOf_5F_on_5F_instruction (in_mEndOf_5F_on_5F_instruction) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_syncInstructionSE::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syncInstructionSE ;
}

void cPtr_syncInstructionSE::description (C_String & ioString,
                                          const int32_t inIndentation) const {
  ioString << "[@syncInstructionSE:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mBranchList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOf_5F_on_5F_instruction.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_syncInstructionSE::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_syncInstructionSE (mProperty_mInstructionLocation, mProperty_mBranchList, mProperty_mEndOf_5F_on_5F_instruction COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @syncInstructionSE type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_syncInstructionSE ("syncInstructionSE",
                                          & kTypeDescriptor_GALGAS_instructionSE) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_syncInstructionSE::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syncInstructionSE ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_syncInstructionSE::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_syncInstructionSE (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syncInstructionSE GALGAS_syncInstructionSE::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_syncInstructionSE result ;
  const GALGAS_syncInstructionSE * p = (const GALGAS_syncInstructionSE *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_syncInstructionSE *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syncInstructionSE", p->dynamicTypeDescriptor () COMMA_THERE) ;
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
  macroMyNew (result, cCollectionElement_syncInstructionBranchListIR (mObject.mProperty_mGuardedCommand, mObject.mProperty_mInstructionGenerationList COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_syncInstructionBranchListIR::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mGuardedCommand" ":" ;
  mObject.mProperty_mGuardedCommand.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInstructionGenerationList" ":" ;
  mObject.mProperty_mInstructionGenerationList.description (ioString, inIndentation) ;
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

GALGAS_syncInstructionBranchListIR::GALGAS_syncInstructionBranchListIR (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syncInstructionBranchListIR GALGAS_syncInstructionBranchListIR::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_syncInstructionBranchListIR  (capCollectionElementArray ()) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syncInstructionBranchListIR GALGAS_syncInstructionBranchListIR::constructor_listWithValue (const GALGAS_guardedCommandIR & inOperand0,
                                                                                                  const GALGAS_instructionListIR & inOperand1
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_syncInstructionBranchListIR result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_syncInstructionBranchListIR (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_syncInstructionBranchListIR::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
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
    appendObject (attributes) ;
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
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
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
      outOperand0 = p->mObject.mProperty_mGuardedCommand ;
      outOperand1 = p->mObject.mProperty_mInstructionGenerationList ;
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
    outOperand0 = p->mObject.mProperty_mGuardedCommand ;
    outOperand1 = p->mObject.mProperty_mInstructionGenerationList ;
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
    outOperand0 = p->mObject.mProperty_mGuardedCommand ;
    outOperand1 = p->mObject.mProperty_mInstructionGenerationList ;
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
    outOperand0 = p->mObject.mProperty_mGuardedCommand ;
    outOperand1 = p->mObject.mProperty_mInstructionGenerationList ;
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
    outOperand0 = p->mObject.mProperty_mGuardedCommand ;
    outOperand1 = p->mObject.mProperty_mInstructionGenerationList ;
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
    result = p->mObject.mProperty_mGuardedCommand ;
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
    result = p->mObject.mProperty_mInstructionGenerationList ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_syncInstructionBranchListIR::cEnumerator_syncInstructionBranchListIR (const GALGAS_syncInstructionBranchListIR & inEnumeratedObject,
                                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
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
  return p->mObject.mProperty_mGuardedCommand ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR cEnumerator_syncInstructionBranchListIR::current_mInstructionGenerationList (LOCATION_ARGS) const {
  const cCollectionElement_syncInstructionBranchListIR * p = (const cCollectionElement_syncInstructionBranchListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_syncInstructionBranchListIR) ;
  return p->mObject.mProperty_mInstructionGenerationList ;
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
    result = mProperty_mSelectInstructionLocation.objectCompare (p->mProperty_mSelectInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOnInstructionBranchListIR.objectCompare (p->mProperty_mOnInstructionBranchListIR) ;
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
    result = p->mProperty_mSelectInstructionLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_syncInstructionIR::getter_mSelectInstructionLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSelectInstructionLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syncInstructionBranchListIR GALGAS_syncInstructionIR::getter_mOnInstructionBranchListIR (UNUSED_LOCATION_ARGS) const {
  GALGAS_syncInstructionBranchListIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_syncInstructionIR * p = (const cPtr_syncInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syncInstructionIR) ;
    result = p->mProperty_mOnInstructionBranchListIR ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syncInstructionBranchListIR cPtr_syncInstructionIR::getter_mOnInstructionBranchListIR (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOnInstructionBranchListIR ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                     Pointer class for @syncInstructionIR class                                      *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_syncInstructionIR::cPtr_syncInstructionIR (const GALGAS_location & in_mSelectInstructionLocation,
                                                const GALGAS_syncInstructionBranchListIR & in_mOnInstructionBranchListIR
                                                COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mSelectInstructionLocation (in_mSelectInstructionLocation),
mProperty_mOnInstructionBranchListIR (in_mOnInstructionBranchListIR) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_syncInstructionIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syncInstructionIR ;
}

void cPtr_syncInstructionIR::description (C_String & ioString,
                                          const int32_t inIndentation) const {
  ioString << "[@syncInstructionIR:" ;
  mProperty_mSelectInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOnInstructionBranchListIR.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_syncInstructionIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_syncInstructionIR (mProperty_mSelectInstructionLocation, mProperty_mOnInstructionBranchListIR COMMA_THERE)) ;
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
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_m_5F_while_5F_Expression.objectCompare (p->mProperty_m_5F_while_5F_Expression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOf_5F_test_5F_expression.objectCompare (p->mProperty_mEndOf_5F_test_5F_expression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mWhileInstructionList.objectCompare (p->mProperty_mWhileInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOf_5F_while_5F_instruction.objectCompare (p->mProperty_mEndOf_5F_while_5F_instruction) ;
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

GALGAS_whileInstructionAST GALGAS_whileInstructionAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                        const GALGAS_expressionAST & inAttribute_m_5F_while_5F_Expression,
                                                                        const GALGAS_location & inAttribute_mEndOf_5F_test_5F_expression,
                                                                        const GALGAS_instructionListAST & inAttribute_mWhileInstructionList,
                                                                        const GALGAS_location & inAttribute_mEndOf_5F_while_5F_instruction
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_whileInstructionAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_m_5F_while_5F_Expression.isValid () && inAttribute_mEndOf_5F_test_5F_expression.isValid () && inAttribute_mWhileInstructionList.isValid () && inAttribute_mEndOf_5F_while_5F_instruction.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_whileInstructionAST (inAttribute_mInstructionLocation, inAttribute_m_5F_while_5F_Expression, inAttribute_mEndOf_5F_test_5F_expression, inAttribute_mWhileInstructionList, inAttribute_mEndOf_5F_while_5F_instruction COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST GALGAS_whileInstructionAST::getter_m_5F_while_5F_Expression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_whileInstructionAST * p = (const cPtr_whileInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_whileInstructionAST) ;
    result = p->mProperty_m_5F_while_5F_Expression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST cPtr_whileInstructionAST::getter_m_5F_while_5F_Expression (UNUSED_LOCATION_ARGS) const {
  return mProperty_m_5F_while_5F_Expression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_whileInstructionAST::getter_mEndOf_5F_test_5F_expression (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_whileInstructionAST * p = (const cPtr_whileInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_whileInstructionAST) ;
    result = p->mProperty_mEndOf_5F_test_5F_expression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_whileInstructionAST::getter_mEndOf_5F_test_5F_expression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOf_5F_test_5F_expression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST GALGAS_whileInstructionAST::getter_mWhileInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_instructionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_whileInstructionAST * p = (const cPtr_whileInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_whileInstructionAST) ;
    result = p->mProperty_mWhileInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST cPtr_whileInstructionAST::getter_mWhileInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mWhileInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_whileInstructionAST::getter_mEndOf_5F_while_5F_instruction (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_whileInstructionAST * p = (const cPtr_whileInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_whileInstructionAST) ;
    result = p->mProperty_mEndOf_5F_while_5F_instruction ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_whileInstructionAST::getter_mEndOf_5F_while_5F_instruction (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOf_5F_while_5F_instruction ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                    Pointer class for @whileInstructionAST class                                     *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_whileInstructionAST::cPtr_whileInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                    const GALGAS_expressionAST & in_m_5F_while_5F_Expression,
                                                    const GALGAS_location & in_mEndOf_5F_test_5F_expression,
                                                    const GALGAS_instructionListAST & in_mWhileInstructionList,
                                                    const GALGAS_location & in_mEndOf_5F_while_5F_instruction
                                                    COMMA_LOCATION_ARGS) :
cPtr_instructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_m_5F_while_5F_Expression (in_m_5F_while_5F_Expression),
mProperty_mEndOf_5F_test_5F_expression (in_mEndOf_5F_test_5F_expression),
mProperty_mWhileInstructionList (in_mWhileInstructionList),
mProperty_mEndOf_5F_while_5F_instruction (in_mEndOf_5F_while_5F_instruction) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_whileInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_whileInstructionAST ;
}

void cPtr_whileInstructionAST::description (C_String & ioString,
                                            const int32_t inIndentation) const {
  ioString << "[@whileInstructionAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_m_5F_while_5F_Expression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOf_5F_test_5F_expression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mWhileInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOf_5F_while_5F_instruction.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_whileInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_whileInstructionAST (mProperty_mInstructionLocation, mProperty_m_5F_while_5F_Expression, mProperty_mEndOf_5F_test_5F_expression, mProperty_mWhileInstructionList, mProperty_mEndOf_5F_while_5F_instruction COMMA_THERE)) ;
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
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_whileInstructionSE::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_whileInstructionSE * p = (const cPtr_whileInstructionSE *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_whileInstructionSE) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_m_5F_while_5F_Expression.objectCompare (p->mProperty_m_5F_while_5F_Expression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOf_5F_test_5F_expression.objectCompare (p->mProperty_mEndOf_5F_test_5F_expression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mWhileInstructionList.objectCompare (p->mProperty_mWhileInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOf_5F_while_5F_instruction.objectCompare (p->mProperty_mEndOf_5F_while_5F_instruction) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_whileInstructionSE::objectCompare (const GALGAS_whileInstructionSE & inOperand) const {
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

GALGAS_whileInstructionSE::GALGAS_whileInstructionSE (void) :
GALGAS_instructionSE () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_whileInstructionSE::GALGAS_whileInstructionSE (const cPtr_whileInstructionSE * inSourcePtr) :
GALGAS_instructionSE (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_whileInstructionSE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_whileInstructionSE GALGAS_whileInstructionSE::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                      const GALGAS_expressionSE & inAttribute_m_5F_while_5F_Expression,
                                                                      const GALGAS_location & inAttribute_mEndOf_5F_test_5F_expression,
                                                                      const GALGAS_instructionListSE & inAttribute_mWhileInstructionList,
                                                                      const GALGAS_location & inAttribute_mEndOf_5F_while_5F_instruction
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_whileInstructionSE result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_m_5F_while_5F_Expression.isValid () && inAttribute_mEndOf_5F_test_5F_expression.isValid () && inAttribute_mWhileInstructionList.isValid () && inAttribute_mEndOf_5F_while_5F_instruction.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_whileInstructionSE (inAttribute_mInstructionLocation, inAttribute_m_5F_while_5F_Expression, inAttribute_mEndOf_5F_test_5F_expression, inAttribute_mWhileInstructionList, inAttribute_mEndOf_5F_while_5F_instruction COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionSE GALGAS_whileInstructionSE::getter_m_5F_while_5F_Expression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expressionSE result ;
  if (NULL != mObjectPtr) {
    const cPtr_whileInstructionSE * p = (const cPtr_whileInstructionSE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_whileInstructionSE) ;
    result = p->mProperty_m_5F_while_5F_Expression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionSE cPtr_whileInstructionSE::getter_m_5F_while_5F_Expression (UNUSED_LOCATION_ARGS) const {
  return mProperty_m_5F_while_5F_Expression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_whileInstructionSE::getter_mEndOf_5F_test_5F_expression (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_whileInstructionSE * p = (const cPtr_whileInstructionSE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_whileInstructionSE) ;
    result = p->mProperty_mEndOf_5F_test_5F_expression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_whileInstructionSE::getter_mEndOf_5F_test_5F_expression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOf_5F_test_5F_expression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListSE GALGAS_whileInstructionSE::getter_mWhileInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_instructionListSE result ;
  if (NULL != mObjectPtr) {
    const cPtr_whileInstructionSE * p = (const cPtr_whileInstructionSE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_whileInstructionSE) ;
    result = p->mProperty_mWhileInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListSE cPtr_whileInstructionSE::getter_mWhileInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mWhileInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_whileInstructionSE::getter_mEndOf_5F_while_5F_instruction (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_whileInstructionSE * p = (const cPtr_whileInstructionSE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_whileInstructionSE) ;
    result = p->mProperty_mEndOf_5F_while_5F_instruction ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_whileInstructionSE::getter_mEndOf_5F_while_5F_instruction (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOf_5F_while_5F_instruction ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                     Pointer class for @whileInstructionSE class                                     *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_whileInstructionSE::cPtr_whileInstructionSE (const GALGAS_location & in_mInstructionLocation,
                                                  const GALGAS_expressionSE & in_m_5F_while_5F_Expression,
                                                  const GALGAS_location & in_mEndOf_5F_test_5F_expression,
                                                  const GALGAS_instructionListSE & in_mWhileInstructionList,
                                                  const GALGAS_location & in_mEndOf_5F_while_5F_instruction
                                                  COMMA_LOCATION_ARGS) :
cPtr_instructionSE (in_mInstructionLocation COMMA_THERE),
mProperty_m_5F_while_5F_Expression (in_m_5F_while_5F_Expression),
mProperty_mEndOf_5F_test_5F_expression (in_mEndOf_5F_test_5F_expression),
mProperty_mWhileInstructionList (in_mWhileInstructionList),
mProperty_mEndOf_5F_while_5F_instruction (in_mEndOf_5F_while_5F_instruction) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_whileInstructionSE::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_whileInstructionSE ;
}

void cPtr_whileInstructionSE::description (C_String & ioString,
                                           const int32_t inIndentation) const {
  ioString << "[@whileInstructionSE:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_m_5F_while_5F_Expression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOf_5F_test_5F_expression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mWhileInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOf_5F_while_5F_instruction.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_whileInstructionSE::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_whileInstructionSE (mProperty_mInstructionLocation, mProperty_m_5F_while_5F_Expression, mProperty_mEndOf_5F_test_5F_expression, mProperty_mWhileInstructionList, mProperty_mEndOf_5F_while_5F_instruction COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @whileInstructionSE type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_whileInstructionSE ("whileInstructionSE",
                                           & kTypeDescriptor_GALGAS_instructionSE) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_whileInstructionSE::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_whileInstructionSE ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_whileInstructionSE::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_whileInstructionSE (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_whileInstructionSE GALGAS_whileInstructionSE::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_whileInstructionSE result ;
  const GALGAS_whileInstructionSE * p = (const GALGAS_whileInstructionSE *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_whileInstructionSE *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("whileInstructionSE", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_whileInstructionIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_whileInstructionIR * p = (const cPtr_whileInstructionIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_whileInstructionIR) ;
  if (kOperandEqual == result) {
    result = mProperty_mLabelIndex.objectCompare (p->mProperty_mLabelIndex) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTestInstructionGenerationList.objectCompare (p->mProperty_mTestInstructionGenerationList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_m_5F_while_5F_Expression.objectCompare (p->mProperty_m_5F_while_5F_Expression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInstructionGenerationList.objectCompare (p->mProperty_mInstructionGenerationList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_whileInstructionIR::objectCompare (const GALGAS_whileInstructionIR & inOperand) const {
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

GALGAS_whileInstructionIR::GALGAS_whileInstructionIR (void) :
GALGAS_abstractInstructionIR () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_whileInstructionIR::GALGAS_whileInstructionIR (const cPtr_whileInstructionIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_whileInstructionIR) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_whileInstructionIR GALGAS_whileInstructionIR::constructor_new (const GALGAS_uint & inAttribute_mLabelIndex,
                                                                      const GALGAS_instructionListIR & inAttribute_mTestInstructionGenerationList,
                                                                      const GALGAS_objectIR & inAttribute_m_5F_while_5F_Expression,
                                                                      const GALGAS_instructionListIR & inAttribute_mInstructionGenerationList
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_whileInstructionIR result ;
  if (inAttribute_mLabelIndex.isValid () && inAttribute_mTestInstructionGenerationList.isValid () && inAttribute_m_5F_while_5F_Expression.isValid () && inAttribute_mInstructionGenerationList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_whileInstructionIR (inAttribute_mLabelIndex, inAttribute_mTestInstructionGenerationList, inAttribute_m_5F_while_5F_Expression, inAttribute_mInstructionGenerationList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_whileInstructionIR::getter_mLabelIndex (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_whileInstructionIR * p = (const cPtr_whileInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_whileInstructionIR) ;
    result = p->mProperty_mLabelIndex ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cPtr_whileInstructionIR::getter_mLabelIndex (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLabelIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR GALGAS_whileInstructionIR::getter_mTestInstructionGenerationList (UNUSED_LOCATION_ARGS) const {
  GALGAS_instructionListIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_whileInstructionIR * p = (const cPtr_whileInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_whileInstructionIR) ;
    result = p->mProperty_mTestInstructionGenerationList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR cPtr_whileInstructionIR::getter_mTestInstructionGenerationList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTestInstructionGenerationList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_whileInstructionIR::getter_m_5F_while_5F_Expression (UNUSED_LOCATION_ARGS) const {
  GALGAS_objectIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_whileInstructionIR * p = (const cPtr_whileInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_whileInstructionIR) ;
    result = p->mProperty_m_5F_while_5F_Expression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR cPtr_whileInstructionIR::getter_m_5F_while_5F_Expression (UNUSED_LOCATION_ARGS) const {
  return mProperty_m_5F_while_5F_Expression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR GALGAS_whileInstructionIR::getter_mInstructionGenerationList (UNUSED_LOCATION_ARGS) const {
  GALGAS_instructionListIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_whileInstructionIR * p = (const cPtr_whileInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_whileInstructionIR) ;
    result = p->mProperty_mInstructionGenerationList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR cPtr_whileInstructionIR::getter_mInstructionGenerationList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInstructionGenerationList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                     Pointer class for @whileInstructionIR class                                     *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_whileInstructionIR::cPtr_whileInstructionIR (const GALGAS_uint & in_mLabelIndex,
                                                  const GALGAS_instructionListIR & in_mTestInstructionGenerationList,
                                                  const GALGAS_objectIR & in_m_5F_while_5F_Expression,
                                                  const GALGAS_instructionListIR & in_mInstructionGenerationList
                                                  COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mLabelIndex (in_mLabelIndex),
mProperty_mTestInstructionGenerationList (in_mTestInstructionGenerationList),
mProperty_m_5F_while_5F_Expression (in_m_5F_while_5F_Expression),
mProperty_mInstructionGenerationList (in_mInstructionGenerationList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_whileInstructionIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_whileInstructionIR ;
}

void cPtr_whileInstructionIR::description (C_String & ioString,
                                           const int32_t inIndentation) const {
  ioString << "[@whileInstructionIR:" ;
  mProperty_mLabelIndex.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTestInstructionGenerationList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_m_5F_while_5F_Expression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mInstructionGenerationList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_whileInstructionIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_whileInstructionIR (mProperty_mLabelIndex, mProperty_mTestInstructionGenerationList, mProperty_m_5F_while_5F_Expression, mProperty_mInstructionGenerationList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @whileInstructionIR type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_whileInstructionIR ("whileInstructionIR",
                                           & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_whileInstructionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_whileInstructionIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_whileInstructionIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_whileInstructionIR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_whileInstructionIR GALGAS_whileInstructionIR::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_whileInstructionIR result ;
  const GALGAS_whileInstructionIR * p = (const GALGAS_whileInstructionIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_whileInstructionIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("whileInstructionIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_forInstructionOnStringIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_forInstructionOnStringIR * p = (const cPtr_forInstructionOnStringIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_forInstructionOnStringIR) ;
  if (kOperandEqual == result) {
    result = mProperty_mVarName.objectCompare (p->mProperty_mVarName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLocation.objectCompare (p->mProperty_mLocation) ;
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
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_forInstructionOnStringIR::objectCompare (const GALGAS_forInstructionOnStringIR & inOperand) const {
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

GALGAS_forInstructionOnStringIR::GALGAS_forInstructionOnStringIR (void) :
GALGAS_abstractInstructionIR () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_forInstructionOnStringIR::GALGAS_forInstructionOnStringIR (const cPtr_forInstructionOnStringIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_forInstructionOnStringIR) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_forInstructionOnStringIR GALGAS_forInstructionOnStringIR::constructor_new (const GALGAS_string & inAttribute_mVarName,
                                                                                  const GALGAS_location & inAttribute_mLocation,
                                                                                  const GALGAS_objectIR & inAttribute_mIteratedObject,
                                                                                  const GALGAS_instructionListIR & inAttribute_mWhileInstructionList,
                                                                                  const GALGAS_objectIR & inAttribute_mWhileExpressionResult,
                                                                                  const GALGAS_instructionListIR & inAttribute_mDoInstructionList
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_forInstructionOnStringIR result ;
  if (inAttribute_mVarName.isValid () && inAttribute_mLocation.isValid () && inAttribute_mIteratedObject.isValid () && inAttribute_mWhileInstructionList.isValid () && inAttribute_mWhileExpressionResult.isValid () && inAttribute_mDoInstructionList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_forInstructionOnStringIR (inAttribute_mVarName, inAttribute_mLocation, inAttribute_mIteratedObject, inAttribute_mWhileInstructionList, inAttribute_mWhileExpressionResult, inAttribute_mDoInstructionList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_forInstructionOnStringIR::getter_mVarName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_forInstructionOnStringIR * p = (const cPtr_forInstructionOnStringIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnStringIR) ;
    result = p->mProperty_mVarName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_forInstructionOnStringIR::getter_mVarName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mVarName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_forInstructionOnStringIR::getter_mLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_forInstructionOnStringIR * p = (const cPtr_forInstructionOnStringIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnStringIR) ;
    result = p->mProperty_mLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_forInstructionOnStringIR::getter_mLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_forInstructionOnStringIR::getter_mIteratedObject (UNUSED_LOCATION_ARGS) const {
  GALGAS_objectIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_forInstructionOnStringIR * p = (const cPtr_forInstructionOnStringIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnStringIR) ;
    result = p->mProperty_mIteratedObject ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR cPtr_forInstructionOnStringIR::getter_mIteratedObject (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIteratedObject ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR GALGAS_forInstructionOnStringIR::getter_mWhileInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_instructionListIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_forInstructionOnStringIR * p = (const cPtr_forInstructionOnStringIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnStringIR) ;
    result = p->mProperty_mWhileInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR cPtr_forInstructionOnStringIR::getter_mWhileInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mWhileInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_forInstructionOnStringIR::getter_mWhileExpressionResult (UNUSED_LOCATION_ARGS) const {
  GALGAS_objectIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_forInstructionOnStringIR * p = (const cPtr_forInstructionOnStringIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnStringIR) ;
    result = p->mProperty_mWhileExpressionResult ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR cPtr_forInstructionOnStringIR::getter_mWhileExpressionResult (UNUSED_LOCATION_ARGS) const {
  return mProperty_mWhileExpressionResult ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR GALGAS_forInstructionOnStringIR::getter_mDoInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_instructionListIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_forInstructionOnStringIR * p = (const cPtr_forInstructionOnStringIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnStringIR) ;
    result = p->mProperty_mDoInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR cPtr_forInstructionOnStringIR::getter_mDoInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDoInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                  Pointer class for @forInstructionOnStringIR class                                  *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_forInstructionOnStringIR::cPtr_forInstructionOnStringIR (const GALGAS_string & in_mVarName,
                                                              const GALGAS_location & in_mLocation,
                                                              const GALGAS_objectIR & in_mIteratedObject,
                                                              const GALGAS_instructionListIR & in_mWhileInstructionList,
                                                              const GALGAS_objectIR & in_mWhileExpressionResult,
                                                              const GALGAS_instructionListIR & in_mDoInstructionList
                                                              COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mVarName (in_mVarName),
mProperty_mLocation (in_mLocation),
mProperty_mIteratedObject (in_mIteratedObject),
mProperty_mWhileInstructionList (in_mWhileInstructionList),
mProperty_mWhileExpressionResult (in_mWhileExpressionResult),
mProperty_mDoInstructionList (in_mDoInstructionList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_forInstructionOnStringIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forInstructionOnStringIR ;
}

void cPtr_forInstructionOnStringIR::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "[@forInstructionOnStringIR:" ;
  mProperty_mVarName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mIteratedObject.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mWhileInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mWhileExpressionResult.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mDoInstructionList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_forInstructionOnStringIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_forInstructionOnStringIR (mProperty_mVarName, mProperty_mLocation, mProperty_mIteratedObject, mProperty_mWhileInstructionList, mProperty_mWhileExpressionResult, mProperty_mDoInstructionList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @forInstructionOnStringIR type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_forInstructionOnStringIR ("forInstructionOnStringIR",
                                                 & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_forInstructionOnStringIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forInstructionOnStringIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_forInstructionOnStringIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_forInstructionOnStringIR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_forInstructionOnStringIR GALGAS_forInstructionOnStringIR::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_forInstructionOnStringIR result ;
  const GALGAS_forInstructionOnStringIR * p = (const GALGAS_forInstructionOnStringIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_forInstructionOnStringIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("forInstructionOnStringIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
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
//                                                                                                                     *
//                  Extension Getter '@effectiveArgumentPassingModeAST passingModeForActualSelector'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string extensionGetter_passingModeForActualSelector (const GALGAS_effectiveArgumentPassingModeAST & inObject,
                                                            const GALGAS_lstring & constinArgument_inSelector,
                                                            C_Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_effectiveArgumentPassingModeAST temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_effectiveArgumentPassingModeAST::kNotBuilt:
    break ;
  case GALGAS_effectiveArgumentPassingModeAST::kEnum_input:
    {
      result_outResult = GALGAS_string ("\?") ;
    }
    break ;
  case GALGAS_effectiveArgumentPassingModeAST::kEnum_inputWithType:
    {
      result_outResult = GALGAS_string ("\?") ;
    }
    break ;
  case GALGAS_effectiveArgumentPassingModeAST::kEnum_output:
    {
      result_outResult = GALGAS_string ("!") ;
    }
    break ;
  case GALGAS_effectiveArgumentPassingModeAST::kEnum_outputInput:
    {
      result_outResult = GALGAS_string ("!\?") ;
    }
    break ;
  case GALGAS_effectiveArgumentPassingModeAST::kEnum_outputInputSelfVariable:
    {
      result_outResult = GALGAS_string ("!\?") ;
    }
    break ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, constinArgument_inSelector.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_1) {
    result_outResult.plusAssign_operation(constinArgument_inSelector.getter_string (HERE).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 241)), inCompiler  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 241)) ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Class for element of '@procEffectiveParameterList' list                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_procEffectiveParameterList : public cCollectionElement {
  public : GALGAS_procEffectiveParameterList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_procEffectiveParameterList (const GALGAS_effectiveArgumentPassingModeAST & in_mEffectiveParameterPassingMode,
                                                          const GALGAS_lstring & in_mSelector,
                                                          const GALGAS_PLMType & in_mParameterType
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

cCollectionElement_procEffectiveParameterList::cCollectionElement_procEffectiveParameterList (const GALGAS_effectiveArgumentPassingModeAST & in_mEffectiveParameterPassingMode,
                                                                                              const GALGAS_lstring & in_mSelector,
                                                                                              const GALGAS_PLMType & in_mParameterType
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
  macroMyNew (result, cCollectionElement_procEffectiveParameterList (mObject.mProperty_mEffectiveParameterPassingMode, mObject.mProperty_mSelector, mObject.mProperty_mParameterType COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_procEffectiveParameterList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEffectiveParameterPassingMode" ":" ;
  mObject.mProperty_mEffectiveParameterPassingMode.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSelector" ":" ;
  mObject.mProperty_mSelector.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mParameterType" ":" ;
  mObject.mProperty_mParameterType.description (ioString, inIndentation) ;
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

GALGAS_procEffectiveParameterList::GALGAS_procEffectiveParameterList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procEffectiveParameterList GALGAS_procEffectiveParameterList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_procEffectiveParameterList  (capCollectionElementArray ()) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procEffectiveParameterList GALGAS_procEffectiveParameterList::constructor_listWithValue (const GALGAS_effectiveArgumentPassingModeAST & inOperand0,
                                                                                                const GALGAS_lstring & inOperand1,
                                                                                                const GALGAS_PLMType & inOperand2
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_procEffectiveParameterList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_procEffectiveParameterList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_procEffectiveParameterList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procEffectiveParameterList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                   const GALGAS_effectiveArgumentPassingModeAST & in_mEffectiveParameterPassingMode,
                                                                   const GALGAS_lstring & in_mSelector,
                                                                   const GALGAS_PLMType & in_mParameterType
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_procEffectiveParameterList * p = NULL ;
  macroMyNew (p, cCollectionElement_procEffectiveParameterList (in_mEffectiveParameterPassingMode,
                                                                in_mSelector,
                                                                in_mParameterType COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procEffectiveParameterList::addAssign_operation (const GALGAS_effectiveArgumentPassingModeAST & inOperand0,
                                                             const GALGAS_lstring & inOperand1,
                                                             const GALGAS_PLMType & inOperand2
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_procEffectiveParameterList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procEffectiveParameterList::setter_insertAtIndex (const GALGAS_effectiveArgumentPassingModeAST inOperand0,
                                                              const GALGAS_lstring inOperand1,
                                                              const GALGAS_PLMType inOperand2,
                                                              const GALGAS_uint inInsertionIndex,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_procEffectiveParameterList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procEffectiveParameterList::setter_removeAtIndex (GALGAS_effectiveArgumentPassingModeAST & outOperand0,
                                                              GALGAS_lstring & outOperand1,
                                                              GALGAS_PLMType & outOperand2,
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
      outOperand0 = p->mObject.mProperty_mEffectiveParameterPassingMode ;
      outOperand1 = p->mObject.mProperty_mSelector ;
      outOperand2 = p->mObject.mProperty_mParameterType ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procEffectiveParameterList::setter_popFirst (GALGAS_effectiveArgumentPassingModeAST & outOperand0,
                                                         GALGAS_lstring & outOperand1,
                                                         GALGAS_PLMType & outOperand2,
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
    outOperand0 = p->mObject.mProperty_mEffectiveParameterPassingMode ;
    outOperand1 = p->mObject.mProperty_mSelector ;
    outOperand2 = p->mObject.mProperty_mParameterType ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procEffectiveParameterList::setter_popLast (GALGAS_effectiveArgumentPassingModeAST & outOperand0,
                                                        GALGAS_lstring & outOperand1,
                                                        GALGAS_PLMType & outOperand2,
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
    outOperand0 = p->mObject.mProperty_mEffectiveParameterPassingMode ;
    outOperand1 = p->mObject.mProperty_mSelector ;
    outOperand2 = p->mObject.mProperty_mParameterType ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procEffectiveParameterList::method_first (GALGAS_effectiveArgumentPassingModeAST & outOperand0,
                                                      GALGAS_lstring & outOperand1,
                                                      GALGAS_PLMType & outOperand2,
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
    outOperand0 = p->mObject.mProperty_mEffectiveParameterPassingMode ;
    outOperand1 = p->mObject.mProperty_mSelector ;
    outOperand2 = p->mObject.mProperty_mParameterType ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procEffectiveParameterList::method_last (GALGAS_effectiveArgumentPassingModeAST & outOperand0,
                                                     GALGAS_lstring & outOperand1,
                                                     GALGAS_PLMType & outOperand2,
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
    outOperand0 = p->mObject.mProperty_mEffectiveParameterPassingMode ;
    outOperand1 = p->mObject.mProperty_mSelector ;
    outOperand2 = p->mObject.mProperty_mParameterType ;
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

GALGAS_effectiveArgumentPassingModeAST GALGAS_procEffectiveParameterList::getter_mEffectiveParameterPassingModeAtIndex (const GALGAS_uint & inIndex,
                                                                                                                        C_Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_procEffectiveParameterList * p = (cCollectionElement_procEffectiveParameterList *) attributes.ptr () ;
  GALGAS_effectiveArgumentPassingModeAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_procEffectiveParameterList) ;
    result = p->mObject.mProperty_mEffectiveParameterPassingMode ;
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
    result = p->mObject.mProperty_mSelector ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMType GALGAS_procEffectiveParameterList::getter_mParameterTypeAtIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_procEffectiveParameterList * p = (cCollectionElement_procEffectiveParameterList *) attributes.ptr () ;
  GALGAS_PLMType result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_procEffectiveParameterList) ;
    result = p->mObject.mProperty_mParameterType ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_procEffectiveParameterList::cEnumerator_procEffectiveParameterList (const GALGAS_procEffectiveParameterList & inEnumeratedObject,
                                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procEffectiveParameterList_2D_element cEnumerator_procEffectiveParameterList::current (LOCATION_ARGS) const {
  const cCollectionElement_procEffectiveParameterList * p = (const cCollectionElement_procEffectiveParameterList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_procEffectiveParameterList) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_effectiveArgumentPassingModeAST cEnumerator_procEffectiveParameterList::current_mEffectiveParameterPassingMode (LOCATION_ARGS) const {
  const cCollectionElement_procEffectiveParameterList * p = (const cCollectionElement_procEffectiveParameterList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_procEffectiveParameterList) ;
  return p->mObject.mProperty_mEffectiveParameterPassingMode ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_procEffectiveParameterList::current_mSelector (LOCATION_ARGS) const {
  const cCollectionElement_procEffectiveParameterList * p = (const cCollectionElement_procEffectiveParameterList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_procEffectiveParameterList) ;
  return p->mObject.mProperty_mSelector ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMType cEnumerator_procEffectiveParameterList::current_mParameterType (LOCATION_ARGS) const {
  const cCollectionElement_procEffectiveParameterList * p = (const cCollectionElement_procEffectiveParameterList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_procEffectiveParameterList) ;
  return p->mObject.mProperty_mParameterType ;
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
//                                                                                                                     *
//                            Class for element of '@procCallEffectiveParameterListIR' list                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_procCallEffectiveParameterListIR : public cCollectionElement {
  public : GALGAS_procCallEffectiveParameterListIR_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_procCallEffectiveParameterListIR (const GALGAS_procEffectiveParameterPassingModeIR & in_mEffectiveParameterPassingMode,
                                                                const GALGAS_objectIR & in_mParameter
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

cCollectionElement_procCallEffectiveParameterListIR::cCollectionElement_procCallEffectiveParameterListIR (const GALGAS_procEffectiveParameterPassingModeIR & in_mEffectiveParameterPassingMode,
                                                                                                          const GALGAS_objectIR & in_mParameter
                                                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mEffectiveParameterPassingMode, in_mParameter) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_procCallEffectiveParameterListIR::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_procCallEffectiveParameterListIR::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_procCallEffectiveParameterListIR (mObject.mProperty_mEffectiveParameterPassingMode, mObject.mProperty_mParameter COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_procCallEffectiveParameterListIR::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEffectiveParameterPassingMode" ":" ;
  mObject.mProperty_mEffectiveParameterPassingMode.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mParameter" ":" ;
  mObject.mProperty_mParameter.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_procCallEffectiveParameterListIR::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_procCallEffectiveParameterListIR * operand = (cCollectionElement_procCallEffectiveParameterListIR *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_procCallEffectiveParameterListIR) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procCallEffectiveParameterListIR::GALGAS_procCallEffectiveParameterListIR (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procCallEffectiveParameterListIR::GALGAS_procCallEffectiveParameterListIR (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procCallEffectiveParameterListIR GALGAS_procCallEffectiveParameterListIR::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_procCallEffectiveParameterListIR  (capCollectionElementArray ()) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procCallEffectiveParameterListIR GALGAS_procCallEffectiveParameterListIR::constructor_listWithValue (const GALGAS_procEffectiveParameterPassingModeIR & inOperand0,
                                                                                                            const GALGAS_objectIR & inOperand1
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_procCallEffectiveParameterListIR result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_procCallEffectiveParameterListIR (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_procCallEffectiveParameterListIR::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procCallEffectiveParameterListIR::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                         const GALGAS_procEffectiveParameterPassingModeIR & in_mEffectiveParameterPassingMode,
                                                                         const GALGAS_objectIR & in_mParameter
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_procCallEffectiveParameterListIR * p = NULL ;
  macroMyNew (p, cCollectionElement_procCallEffectiveParameterListIR (in_mEffectiveParameterPassingMode,
                                                                      in_mParameter COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procCallEffectiveParameterListIR::addAssign_operation (const GALGAS_procEffectiveParameterPassingModeIR & inOperand0,
                                                                   const GALGAS_objectIR & inOperand1
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_procCallEffectiveParameterListIR (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procCallEffectiveParameterListIR::setter_insertAtIndex (const GALGAS_procEffectiveParameterPassingModeIR inOperand0,
                                                                    const GALGAS_objectIR inOperand1,
                                                                    const GALGAS_uint inInsertionIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_procCallEffectiveParameterListIR (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procCallEffectiveParameterListIR::setter_removeAtIndex (GALGAS_procEffectiveParameterPassingModeIR & outOperand0,
                                                                    GALGAS_objectIR & outOperand1,
                                                                    const GALGAS_uint inRemoveIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_procCallEffectiveParameterListIR * p = (cCollectionElement_procCallEffectiveParameterListIR *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_procCallEffectiveParameterListIR) ;
      outOperand0 = p->mObject.mProperty_mEffectiveParameterPassingMode ;
      outOperand1 = p->mObject.mProperty_mParameter ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procCallEffectiveParameterListIR::setter_popFirst (GALGAS_procEffectiveParameterPassingModeIR & outOperand0,
                                                               GALGAS_objectIR & outOperand1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_procCallEffectiveParameterListIR * p = (cCollectionElement_procCallEffectiveParameterListIR *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_procCallEffectiveParameterListIR) ;
    outOperand0 = p->mObject.mProperty_mEffectiveParameterPassingMode ;
    outOperand1 = p->mObject.mProperty_mParameter ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procCallEffectiveParameterListIR::setter_popLast (GALGAS_procEffectiveParameterPassingModeIR & outOperand0,
                                                              GALGAS_objectIR & outOperand1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_procCallEffectiveParameterListIR * p = (cCollectionElement_procCallEffectiveParameterListIR *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_procCallEffectiveParameterListIR) ;
    outOperand0 = p->mObject.mProperty_mEffectiveParameterPassingMode ;
    outOperand1 = p->mObject.mProperty_mParameter ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procCallEffectiveParameterListIR::method_first (GALGAS_procEffectiveParameterPassingModeIR & outOperand0,
                                                            GALGAS_objectIR & outOperand1,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_procCallEffectiveParameterListIR * p = (cCollectionElement_procCallEffectiveParameterListIR *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_procCallEffectiveParameterListIR) ;
    outOperand0 = p->mObject.mProperty_mEffectiveParameterPassingMode ;
    outOperand1 = p->mObject.mProperty_mParameter ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procCallEffectiveParameterListIR::method_last (GALGAS_procEffectiveParameterPassingModeIR & outOperand0,
                                                           GALGAS_objectIR & outOperand1,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_procCallEffectiveParameterListIR * p = (cCollectionElement_procCallEffectiveParameterListIR *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_procCallEffectiveParameterListIR) ;
    outOperand0 = p->mObject.mProperty_mEffectiveParameterPassingMode ;
    outOperand1 = p->mObject.mProperty_mParameter ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procCallEffectiveParameterListIR GALGAS_procCallEffectiveParameterListIR::add_operation (const GALGAS_procCallEffectiveParameterListIR & inOperand,
                                                                                                C_Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_procCallEffectiveParameterListIR result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procCallEffectiveParameterListIR GALGAS_procCallEffectiveParameterListIR::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_procCallEffectiveParameterListIR result = GALGAS_procCallEffectiveParameterListIR::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procCallEffectiveParameterListIR GALGAS_procCallEffectiveParameterListIR::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_procCallEffectiveParameterListIR result = GALGAS_procCallEffectiveParameterListIR::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procCallEffectiveParameterListIR GALGAS_procCallEffectiveParameterListIR::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_procCallEffectiveParameterListIR result = GALGAS_procCallEffectiveParameterListIR::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procCallEffectiveParameterListIR::plusAssign_operation (const GALGAS_procCallEffectiveParameterListIR inOperand,
                                                                    C_Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procEffectiveParameterPassingModeIR GALGAS_procCallEffectiveParameterListIR::getter_mEffectiveParameterPassingModeAtIndex (const GALGAS_uint & inIndex,
                                                                                                                                  C_Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_procCallEffectiveParameterListIR * p = (cCollectionElement_procCallEffectiveParameterListIR *) attributes.ptr () ;
  GALGAS_procEffectiveParameterPassingModeIR result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_procCallEffectiveParameterListIR) ;
    result = p->mObject.mProperty_mEffectiveParameterPassingMode ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_procCallEffectiveParameterListIR::getter_mParameterAtIndex (const GALGAS_uint & inIndex,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_procCallEffectiveParameterListIR * p = (cCollectionElement_procCallEffectiveParameterListIR *) attributes.ptr () ;
  GALGAS_objectIR result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_procCallEffectiveParameterListIR) ;
    result = p->mObject.mProperty_mParameter ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_procCallEffectiveParameterListIR::cEnumerator_procCallEffectiveParameterListIR (const GALGAS_procCallEffectiveParameterListIR & inEnumeratedObject,
                                                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procCallEffectiveParameterListIR_2D_element cEnumerator_procCallEffectiveParameterListIR::current (LOCATION_ARGS) const {
  const cCollectionElement_procCallEffectiveParameterListIR * p = (const cCollectionElement_procCallEffectiveParameterListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_procCallEffectiveParameterListIR) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procEffectiveParameterPassingModeIR cEnumerator_procCallEffectiveParameterListIR::current_mEffectiveParameterPassingMode (LOCATION_ARGS) const {
  const cCollectionElement_procCallEffectiveParameterListIR * p = (const cCollectionElement_procCallEffectiveParameterListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_procCallEffectiveParameterListIR) ;
  return p->mObject.mProperty_mEffectiveParameterPassingMode ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR cEnumerator_procCallEffectiveParameterListIR::current_mParameter (LOCATION_ARGS) const {
  const cCollectionElement_procCallEffectiveParameterListIR * p = (const cCollectionElement_procCallEffectiveParameterListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_procCallEffectiveParameterListIR) ;
  return p->mObject.mProperty_mParameter ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @procCallEffectiveParameterListIR type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_procCallEffectiveParameterListIR ("procCallEffectiveParameterListIR",
                                                         NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_procCallEffectiveParameterListIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procCallEffectiveParameterListIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_procCallEffectiveParameterListIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_procCallEffectiveParameterListIR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procCallEffectiveParameterListIR GALGAS_procCallEffectiveParameterListIR::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_procCallEffectiveParameterListIR result ;
  const GALGAS_procCallEffectiveParameterListIR * p = (const GALGAS_procCallEffectiveParameterListIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_procCallEffectiveParameterListIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("procCallEffectiveParameterListIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

