#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-4.h"


//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_switchInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_switchInstructionAST * p = (const cPtr_switchInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_switchInstructionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSwitchExpression.objectCompare (p->mProperty_mSwitchExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOf_5F_test_5F_expression.objectCompare (p->mProperty_mEndOf_5F_test_5F_expression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSwitchCaseList.objectCompare (p->mProperty_mSwitchCaseList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOf_5F_switch_5F_instruction.objectCompare (p->mProperty_mEndOf_5F_switch_5F_instruction) ;
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

GALGAS_switchInstructionAST GALGAS_switchInstructionAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                          const GALGAS_expressionAST & inAttribute_mSwitchExpression,
                                                                          const GALGAS_location & inAttribute_mEndOf_5F_test_5F_expression,
                                                                          const GALGAS_switchCaseListAST & inAttribute_mSwitchCaseList,
                                                                          const GALGAS_location & inAttribute_mEndOf_5F_switch_5F_instruction
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_switchInstructionAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mSwitchExpression.isValid () && inAttribute_mEndOf_5F_test_5F_expression.isValid () && inAttribute_mSwitchCaseList.isValid () && inAttribute_mEndOf_5F_switch_5F_instruction.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_switchInstructionAST (inAttribute_mInstructionLocation, inAttribute_mSwitchExpression, inAttribute_mEndOf_5F_test_5F_expression, inAttribute_mSwitchCaseList, inAttribute_mEndOf_5F_switch_5F_instruction COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST GALGAS_switchInstructionAST::getter_mSwitchExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_switchInstructionAST * p = (const cPtr_switchInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionAST) ;
    result = p->mProperty_mSwitchExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST cPtr_switchInstructionAST::getter_mSwitchExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSwitchExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_switchInstructionAST::getter_mEndOf_5F_test_5F_expression (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_switchInstructionAST * p = (const cPtr_switchInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionAST) ;
    result = p->mProperty_mEndOf_5F_test_5F_expression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_switchInstructionAST::getter_mEndOf_5F_test_5F_expression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOf_5F_test_5F_expression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_switchCaseListAST GALGAS_switchInstructionAST::getter_mSwitchCaseList (UNUSED_LOCATION_ARGS) const {
  GALGAS_switchCaseListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_switchInstructionAST * p = (const cPtr_switchInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionAST) ;
    result = p->mProperty_mSwitchCaseList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_switchCaseListAST cPtr_switchInstructionAST::getter_mSwitchCaseList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSwitchCaseList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_switchInstructionAST::getter_mEndOf_5F_switch_5F_instruction (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_switchInstructionAST * p = (const cPtr_switchInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionAST) ;
    result = p->mProperty_mEndOf_5F_switch_5F_instruction ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_switchInstructionAST::getter_mEndOf_5F_switch_5F_instruction (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOf_5F_switch_5F_instruction ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                    Pointer class for @switchInstructionAST class                                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_switchInstructionAST::cPtr_switchInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                      const GALGAS_expressionAST & in_mSwitchExpression,
                                                      const GALGAS_location & in_mEndOf_5F_test_5F_expression,
                                                      const GALGAS_switchCaseListAST & in_mSwitchCaseList,
                                                      const GALGAS_location & in_mEndOf_5F_switch_5F_instruction
                                                      COMMA_LOCATION_ARGS) :
cPtr_instructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mSwitchExpression (in_mSwitchExpression),
mProperty_mEndOf_5F_test_5F_expression (in_mEndOf_5F_test_5F_expression),
mProperty_mSwitchCaseList (in_mSwitchCaseList),
mProperty_mEndOf_5F_switch_5F_instruction (in_mEndOf_5F_switch_5F_instruction) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_switchInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_switchInstructionAST ;
}

void cPtr_switchInstructionAST::description (C_String & ioString,
                                             const int32_t inIndentation) const {
  ioString << "[@switchInstructionAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSwitchExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOf_5F_test_5F_expression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSwitchCaseList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOf_5F_switch_5F_instruction.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_switchInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_switchInstructionAST (mProperty_mInstructionLocation, mProperty_mSwitchExpression, mProperty_mEndOf_5F_test_5F_expression, mProperty_mSwitchCaseList, mProperty_mEndOf_5F_switch_5F_instruction COMMA_THERE)) ;
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
//                                    Class for element of '@switchCaseListSE' list                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_switchCaseListSE : public cCollectionElement {
  public : GALGAS_switchCaseListSE_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_switchCaseListSE (const GALGAS_lstringlist & in_mCaseIdentifiers,
                                                const GALGAS_instructionListSE & in_mCaseInstructionList
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

cCollectionElement_switchCaseListSE::cCollectionElement_switchCaseListSE (const GALGAS_lstringlist & in_mCaseIdentifiers,
                                                                          const GALGAS_instructionListSE & in_mCaseInstructionList
                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mCaseIdentifiers, in_mCaseInstructionList) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_switchCaseListSE::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_switchCaseListSE::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_switchCaseListSE (mObject.mProperty_mCaseIdentifiers, mObject.mProperty_mCaseInstructionList COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_switchCaseListSE::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mCaseIdentifiers" ":" ;
  mObject.mProperty_mCaseIdentifiers.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mCaseInstructionList" ":" ;
  mObject.mProperty_mCaseInstructionList.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_switchCaseListSE::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_switchCaseListSE * operand = (cCollectionElement_switchCaseListSE *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_switchCaseListSE) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_switchCaseListSE::GALGAS_switchCaseListSE (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_switchCaseListSE::GALGAS_switchCaseListSE (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_switchCaseListSE GALGAS_switchCaseListSE::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_switchCaseListSE  (capCollectionElementArray ()) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_switchCaseListSE GALGAS_switchCaseListSE::constructor_listWithValue (const GALGAS_lstringlist & inOperand0,
                                                                            const GALGAS_instructionListSE & inOperand1
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_switchCaseListSE result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_switchCaseListSE (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_switchCaseListSE::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_switchCaseListSE::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                         const GALGAS_lstringlist & in_mCaseIdentifiers,
                                                         const GALGAS_instructionListSE & in_mCaseInstructionList
                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_switchCaseListSE * p = NULL ;
  macroMyNew (p, cCollectionElement_switchCaseListSE (in_mCaseIdentifiers,
                                                      in_mCaseInstructionList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_switchCaseListSE::addAssign_operation (const GALGAS_lstringlist & inOperand0,
                                                   const GALGAS_instructionListSE & inOperand1
                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_switchCaseListSE (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_switchCaseListSE::setter_insertAtIndex (const GALGAS_lstringlist inOperand0,
                                                    const GALGAS_instructionListSE inOperand1,
                                                    const GALGAS_uint inInsertionIndex,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_switchCaseListSE (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_switchCaseListSE::setter_removeAtIndex (GALGAS_lstringlist & outOperand0,
                                                    GALGAS_instructionListSE & outOperand1,
                                                    const GALGAS_uint inRemoveIndex,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_switchCaseListSE * p = (cCollectionElement_switchCaseListSE *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_switchCaseListSE) ;
      outOperand0 = p->mObject.mProperty_mCaseIdentifiers ;
      outOperand1 = p->mObject.mProperty_mCaseInstructionList ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_switchCaseListSE::setter_popFirst (GALGAS_lstringlist & outOperand0,
                                               GALGAS_instructionListSE & outOperand1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_switchCaseListSE * p = (cCollectionElement_switchCaseListSE *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_switchCaseListSE) ;
    outOperand0 = p->mObject.mProperty_mCaseIdentifiers ;
    outOperand1 = p->mObject.mProperty_mCaseInstructionList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_switchCaseListSE::setter_popLast (GALGAS_lstringlist & outOperand0,
                                              GALGAS_instructionListSE & outOperand1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_switchCaseListSE * p = (cCollectionElement_switchCaseListSE *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_switchCaseListSE) ;
    outOperand0 = p->mObject.mProperty_mCaseIdentifiers ;
    outOperand1 = p->mObject.mProperty_mCaseInstructionList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_switchCaseListSE::method_first (GALGAS_lstringlist & outOperand0,
                                            GALGAS_instructionListSE & outOperand1,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_switchCaseListSE * p = (cCollectionElement_switchCaseListSE *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_switchCaseListSE) ;
    outOperand0 = p->mObject.mProperty_mCaseIdentifiers ;
    outOperand1 = p->mObject.mProperty_mCaseInstructionList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_switchCaseListSE::method_last (GALGAS_lstringlist & outOperand0,
                                           GALGAS_instructionListSE & outOperand1,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_switchCaseListSE * p = (cCollectionElement_switchCaseListSE *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_switchCaseListSE) ;
    outOperand0 = p->mObject.mProperty_mCaseIdentifiers ;
    outOperand1 = p->mObject.mProperty_mCaseInstructionList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_switchCaseListSE GALGAS_switchCaseListSE::add_operation (const GALGAS_switchCaseListSE & inOperand,
                                                                C_Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_switchCaseListSE result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_switchCaseListSE GALGAS_switchCaseListSE::getter_subListWithRange (const GALGAS_range & inRange,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_switchCaseListSE result = GALGAS_switchCaseListSE::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_switchCaseListSE GALGAS_switchCaseListSE::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_switchCaseListSE result = GALGAS_switchCaseListSE::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_switchCaseListSE GALGAS_switchCaseListSE::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_switchCaseListSE result = GALGAS_switchCaseListSE::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_switchCaseListSE::plusAssign_operation (const GALGAS_switchCaseListSE inOperand,
                                                    C_Compiler * /* inCompiler */
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_switchCaseListSE::getter_mCaseIdentifiersAtIndex (const GALGAS_uint & inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_switchCaseListSE * p = (cCollectionElement_switchCaseListSE *) attributes.ptr () ;
  GALGAS_lstringlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_switchCaseListSE) ;
    result = p->mObject.mProperty_mCaseIdentifiers ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListSE GALGAS_switchCaseListSE::getter_mCaseInstructionListAtIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_switchCaseListSE * p = (cCollectionElement_switchCaseListSE *) attributes.ptr () ;
  GALGAS_instructionListSE result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_switchCaseListSE) ;
    result = p->mObject.mProperty_mCaseInstructionList ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_switchCaseListSE::cEnumerator_switchCaseListSE (const GALGAS_switchCaseListSE & inEnumeratedObject,
                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_switchCaseListSE_2D_element cEnumerator_switchCaseListSE::current (LOCATION_ARGS) const {
  const cCollectionElement_switchCaseListSE * p = (const cCollectionElement_switchCaseListSE *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_switchCaseListSE) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist cEnumerator_switchCaseListSE::current_mCaseIdentifiers (LOCATION_ARGS) const {
  const cCollectionElement_switchCaseListSE * p = (const cCollectionElement_switchCaseListSE *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_switchCaseListSE) ;
  return p->mObject.mProperty_mCaseIdentifiers ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListSE cEnumerator_switchCaseListSE::current_mCaseInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_switchCaseListSE * p = (const cCollectionElement_switchCaseListSE *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_switchCaseListSE) ;
  return p->mObject.mProperty_mCaseInstructionList ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @switchCaseListSE type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_switchCaseListSE ("switchCaseListSE",
                                         NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_switchCaseListSE::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_switchCaseListSE ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_switchCaseListSE::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_switchCaseListSE (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_switchCaseListSE GALGAS_switchCaseListSE::extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_switchCaseListSE result ;
  const GALGAS_switchCaseListSE * p = (const GALGAS_switchCaseListSE *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_switchCaseListSE *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("switchCaseListSE", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_switchInstructionSE::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_switchInstructionSE * p = (const cPtr_switchInstructionSE *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_switchInstructionSE) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSwitchExpression.objectCompare (p->mProperty_mSwitchExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOf_5F_test_5F_expression.objectCompare (p->mProperty_mEndOf_5F_test_5F_expression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSwitchCaseList.objectCompare (p->mProperty_mSwitchCaseList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOf_5F_switch_5F_instruction.objectCompare (p->mProperty_mEndOf_5F_switch_5F_instruction) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_switchInstructionSE::objectCompare (const GALGAS_switchInstructionSE & inOperand) const {
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

GALGAS_switchInstructionSE::GALGAS_switchInstructionSE (void) :
GALGAS_instructionSE () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_switchInstructionSE::GALGAS_switchInstructionSE (const cPtr_switchInstructionSE * inSourcePtr) :
GALGAS_instructionSE (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_switchInstructionSE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_switchInstructionSE GALGAS_switchInstructionSE::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                        const GALGAS_expressionSE & inAttribute_mSwitchExpression,
                                                                        const GALGAS_location & inAttribute_mEndOf_5F_test_5F_expression,
                                                                        const GALGAS_switchCaseListSE & inAttribute_mSwitchCaseList,
                                                                        const GALGAS_location & inAttribute_mEndOf_5F_switch_5F_instruction
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_switchInstructionSE result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mSwitchExpression.isValid () && inAttribute_mEndOf_5F_test_5F_expression.isValid () && inAttribute_mSwitchCaseList.isValid () && inAttribute_mEndOf_5F_switch_5F_instruction.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_switchInstructionSE (inAttribute_mInstructionLocation, inAttribute_mSwitchExpression, inAttribute_mEndOf_5F_test_5F_expression, inAttribute_mSwitchCaseList, inAttribute_mEndOf_5F_switch_5F_instruction COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionSE GALGAS_switchInstructionSE::getter_mSwitchExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expressionSE result ;
  if (NULL != mObjectPtr) {
    const cPtr_switchInstructionSE * p = (const cPtr_switchInstructionSE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionSE) ;
    result = p->mProperty_mSwitchExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionSE cPtr_switchInstructionSE::getter_mSwitchExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSwitchExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_switchInstructionSE::getter_mEndOf_5F_test_5F_expression (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_switchInstructionSE * p = (const cPtr_switchInstructionSE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionSE) ;
    result = p->mProperty_mEndOf_5F_test_5F_expression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_switchInstructionSE::getter_mEndOf_5F_test_5F_expression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOf_5F_test_5F_expression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_switchCaseListSE GALGAS_switchInstructionSE::getter_mSwitchCaseList (UNUSED_LOCATION_ARGS) const {
  GALGAS_switchCaseListSE result ;
  if (NULL != mObjectPtr) {
    const cPtr_switchInstructionSE * p = (const cPtr_switchInstructionSE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionSE) ;
    result = p->mProperty_mSwitchCaseList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_switchCaseListSE cPtr_switchInstructionSE::getter_mSwitchCaseList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSwitchCaseList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_switchInstructionSE::getter_mEndOf_5F_switch_5F_instruction (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_switchInstructionSE * p = (const cPtr_switchInstructionSE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionSE) ;
    result = p->mProperty_mEndOf_5F_switch_5F_instruction ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_switchInstructionSE::getter_mEndOf_5F_switch_5F_instruction (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOf_5F_switch_5F_instruction ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                    Pointer class for @switchInstructionSE class                                     *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_switchInstructionSE::cPtr_switchInstructionSE (const GALGAS_location & in_mInstructionLocation,
                                                    const GALGAS_expressionSE & in_mSwitchExpression,
                                                    const GALGAS_location & in_mEndOf_5F_test_5F_expression,
                                                    const GALGAS_switchCaseListSE & in_mSwitchCaseList,
                                                    const GALGAS_location & in_mEndOf_5F_switch_5F_instruction
                                                    COMMA_LOCATION_ARGS) :
cPtr_instructionSE (in_mInstructionLocation COMMA_THERE),
mProperty_mSwitchExpression (in_mSwitchExpression),
mProperty_mEndOf_5F_test_5F_expression (in_mEndOf_5F_test_5F_expression),
mProperty_mSwitchCaseList (in_mSwitchCaseList),
mProperty_mEndOf_5F_switch_5F_instruction (in_mEndOf_5F_switch_5F_instruction) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_switchInstructionSE::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_switchInstructionSE ;
}

void cPtr_switchInstructionSE::description (C_String & ioString,
                                            const int32_t inIndentation) const {
  ioString << "[@switchInstructionSE:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSwitchExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOf_5F_test_5F_expression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSwitchCaseList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOf_5F_switch_5F_instruction.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_switchInstructionSE::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_switchInstructionSE (mProperty_mInstructionLocation, mProperty_mSwitchExpression, mProperty_mEndOf_5F_test_5F_expression, mProperty_mSwitchCaseList, mProperty_mEndOf_5F_switch_5F_instruction COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @switchInstructionSE type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_switchInstructionSE ("switchInstructionSE",
                                            & kTypeDescriptor_GALGAS_instructionSE) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_switchInstructionSE::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_switchInstructionSE ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_switchInstructionSE::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_switchInstructionSE (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_switchInstructionSE GALGAS_switchInstructionSE::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_switchInstructionSE result ;
  const GALGAS_switchInstructionSE * p = (const GALGAS_switchInstructionSE *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_switchInstructionSE *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("switchInstructionSE", p->dynamicTypeDescriptor () COMMA_THERE) ;
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
  macroMyNew (result, cCollectionElement_switchCaseListIR (mObject.mProperty_mCaseIdentifierIndexes, mObject.mProperty_mCaseInstructionList COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_switchCaseListIR::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mCaseIdentifierIndexes" ":" ;
  mObject.mProperty_mCaseIdentifierIndexes.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mCaseInstructionList" ":" ;
  mObject.mProperty_mCaseInstructionList.description (ioString, inIndentation) ;
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

GALGAS_switchCaseListIR::GALGAS_switchCaseListIR (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_switchCaseListIR GALGAS_switchCaseListIR::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_switchCaseListIR  (capCollectionElementArray ()) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_switchCaseListIR GALGAS_switchCaseListIR::constructor_listWithValue (const GALGAS_uintlist & inOperand0,
                                                                            const GALGAS_instructionListIR & inOperand1
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_switchCaseListIR result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_switchCaseListIR (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_switchCaseListIR::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
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
    appendObject (attributes) ;
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
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
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
      outOperand0 = p->mObject.mProperty_mCaseIdentifierIndexes ;
      outOperand1 = p->mObject.mProperty_mCaseInstructionList ;
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
    outOperand0 = p->mObject.mProperty_mCaseIdentifierIndexes ;
    outOperand1 = p->mObject.mProperty_mCaseInstructionList ;
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
    outOperand0 = p->mObject.mProperty_mCaseIdentifierIndexes ;
    outOperand1 = p->mObject.mProperty_mCaseInstructionList ;
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
    outOperand0 = p->mObject.mProperty_mCaseIdentifierIndexes ;
    outOperand1 = p->mObject.mProperty_mCaseInstructionList ;
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
    outOperand0 = p->mObject.mProperty_mCaseIdentifierIndexes ;
    outOperand1 = p->mObject.mProperty_mCaseInstructionList ;
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
    result = p->mObject.mProperty_mCaseIdentifierIndexes ;
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
    result = p->mObject.mProperty_mCaseInstructionList ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_switchCaseListIR::cEnumerator_switchCaseListIR (const GALGAS_switchCaseListIR & inEnumeratedObject,
                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
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
  return p->mObject.mProperty_mCaseIdentifierIndexes ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR cEnumerator_switchCaseListIR::current_mCaseInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_switchCaseListIR * p = (const cCollectionElement_switchCaseListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_switchCaseListIR) ;
  return p->mObject.mProperty_mCaseInstructionList ;
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
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_switchInstructionIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_switchInstructionIR * p = (const cPtr_switchInstructionIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_switchInstructionIR) ;
  if (kOperandEqual == result) {
    result = mProperty_mLabelIndex.objectCompare (p->mProperty_mLabelIndex) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSwitchExpressionGenerationList.objectCompare (p->mProperty_mSwitchExpressionGenerationList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSwitchExpression.objectCompare (p->mProperty_mSwitchExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mCaseGenerationList.objectCompare (p->mProperty_mCaseGenerationList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_switchInstructionIR::objectCompare (const GALGAS_switchInstructionIR & inOperand) const {
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

GALGAS_switchInstructionIR::GALGAS_switchInstructionIR (void) :
GALGAS_abstractInstructionIR () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_switchInstructionIR::GALGAS_switchInstructionIR (const cPtr_switchInstructionIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_switchInstructionIR) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_switchInstructionIR GALGAS_switchInstructionIR::constructor_new (const GALGAS_uint & inAttribute_mLabelIndex,
                                                                        const GALGAS_instructionListIR & inAttribute_mSwitchExpressionGenerationList,
                                                                        const GALGAS_objectIR & inAttribute_mSwitchExpression,
                                                                        const GALGAS_switchCaseListIR & inAttribute_mCaseGenerationList
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_switchInstructionIR result ;
  if (inAttribute_mLabelIndex.isValid () && inAttribute_mSwitchExpressionGenerationList.isValid () && inAttribute_mSwitchExpression.isValid () && inAttribute_mCaseGenerationList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_switchInstructionIR (inAttribute_mLabelIndex, inAttribute_mSwitchExpressionGenerationList, inAttribute_mSwitchExpression, inAttribute_mCaseGenerationList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_switchInstructionIR::getter_mLabelIndex (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_switchInstructionIR * p = (const cPtr_switchInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionIR) ;
    result = p->mProperty_mLabelIndex ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cPtr_switchInstructionIR::getter_mLabelIndex (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLabelIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR GALGAS_switchInstructionIR::getter_mSwitchExpressionGenerationList (UNUSED_LOCATION_ARGS) const {
  GALGAS_instructionListIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_switchInstructionIR * p = (const cPtr_switchInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionIR) ;
    result = p->mProperty_mSwitchExpressionGenerationList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR cPtr_switchInstructionIR::getter_mSwitchExpressionGenerationList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSwitchExpressionGenerationList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_switchInstructionIR::getter_mSwitchExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_objectIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_switchInstructionIR * p = (const cPtr_switchInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionIR) ;
    result = p->mProperty_mSwitchExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR cPtr_switchInstructionIR::getter_mSwitchExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSwitchExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_switchCaseListIR GALGAS_switchInstructionIR::getter_mCaseGenerationList (UNUSED_LOCATION_ARGS) const {
  GALGAS_switchCaseListIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_switchInstructionIR * p = (const cPtr_switchInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionIR) ;
    result = p->mProperty_mCaseGenerationList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_switchCaseListIR cPtr_switchInstructionIR::getter_mCaseGenerationList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mCaseGenerationList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                    Pointer class for @switchInstructionIR class                                     *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_switchInstructionIR::cPtr_switchInstructionIR (const GALGAS_uint & in_mLabelIndex,
                                                    const GALGAS_instructionListIR & in_mSwitchExpressionGenerationList,
                                                    const GALGAS_objectIR & in_mSwitchExpression,
                                                    const GALGAS_switchCaseListIR & in_mCaseGenerationList
                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mLabelIndex (in_mLabelIndex),
mProperty_mSwitchExpressionGenerationList (in_mSwitchExpressionGenerationList),
mProperty_mSwitchExpression (in_mSwitchExpression),
mProperty_mCaseGenerationList (in_mCaseGenerationList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_switchInstructionIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_switchInstructionIR ;
}

void cPtr_switchInstructionIR::description (C_String & ioString,
                                            const int32_t inIndentation) const {
  ioString << "[@switchInstructionIR:" ;
  mProperty_mLabelIndex.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSwitchExpressionGenerationList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSwitchExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mCaseGenerationList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_switchInstructionIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_switchInstructionIR (mProperty_mLabelIndex, mProperty_mSwitchExpressionGenerationList, mProperty_mSwitchExpression, mProperty_mCaseGenerationList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @switchInstructionIR type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_switchInstructionIR ("switchInstructionIR",
                                            & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_switchInstructionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_switchInstructionIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_switchInstructionIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_switchInstructionIR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_switchInstructionIR GALGAS_switchInstructionIR::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_switchInstructionIR result ;
  const GALGAS_switchInstructionIR * p = (const GALGAS_switchInstructionIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_switchInstructionIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("switchInstructionIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_accessInAssignmentAST_property::cEnumAssociatedValues_accessInAssignmentAST_property (const GALGAS_lstring & inAssociatedValue0
                                                                                                            COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_accessInAssignmentAST_property::description (C_String & ioString,
                                                                        const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_accessInAssignmentAST_property::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_accessInAssignmentAST_property * ptr = dynamic_cast<const cEnumAssociatedValues_accessInAssignmentAST_property *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_accessInAssignmentAST_arrayAccess::cEnumAssociatedValues_accessInAssignmentAST_arrayAccess (const GALGAS_expressionAST & inAssociatedValue0,
                                                                                                                  const GALGAS_location & inAssociatedValue1
                                                                                                                  COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_accessInAssignmentAST_arrayAccess::description (C_String & ioString,
                                                                           const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_accessInAssignmentAST_arrayAccess::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess * ptr = dynamic_cast<const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess *> (inOperand) ;
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

GALGAS_accessInAssignmentAST::GALGAS_accessInAssignmentAST (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_accessInAssignmentAST GALGAS_accessInAssignmentAST::constructor_property (const GALGAS_lstring & inAssociatedValue0
                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_accessInAssignmentAST result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_property ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_accessInAssignmentAST_property (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_accessInAssignmentAST GALGAS_accessInAssignmentAST::constructor_arrayAccess (const GALGAS_expressionAST & inAssociatedValue0,
                                                                                    const GALGAS_location & inAssociatedValue1
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_accessInAssignmentAST result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_arrayAccess ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_accessInAssignmentAST_arrayAccess (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_accessInAssignmentAST::method_property (GALGAS_lstring & outAssociatedValue0,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_property) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @accessInAssignmentAST property invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_accessInAssignmentAST_property * ptr = (const cEnumAssociatedValues_accessInAssignmentAST_property *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_accessInAssignmentAST::method_arrayAccess (GALGAS_expressionAST & outAssociatedValue0,
                                                       GALGAS_location & outAssociatedValue1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_arrayAccess) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    C_String s ;
    s << "method @accessInAssignmentAST arrayAccess invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess * ptr = (const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * gEnumNameArrayFor_accessInAssignmentAST [3] = {
  "(not built)",
  "property",
  "arrayAccess"
} ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_accessInAssignmentAST::getter_isProperty (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_property == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_accessInAssignmentAST::getter_isArrayAccess (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_arrayAccess == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_accessInAssignmentAST::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "<enum @accessInAssignmentAST: " << gEnumNameArrayFor_accessInAssignmentAST [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_accessInAssignmentAST::objectCompare (const GALGAS_accessInAssignmentAST & inOperand) const {
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
//                                             @accessInAssignmentAST type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_accessInAssignmentAST ("accessInAssignmentAST",
                                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_accessInAssignmentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_accessInAssignmentAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_accessInAssignmentAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_accessInAssignmentAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_accessInAssignmentAST GALGAS_accessInAssignmentAST::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_accessInAssignmentAST result ;
  const GALGAS_accessInAssignmentAST * p = (const GALGAS_accessInAssignmentAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_accessInAssignmentAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("accessInAssignmentAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
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
  macroMyNew (result, cCollectionElement_accessInAssignmentListAST (mObject.mProperty_mAccess COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_accessInAssignmentListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAccess" ":" ;
  mObject.mProperty_mAccess.description (ioString, inIndentation) ;
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

GALGAS_accessInAssignmentListAST::GALGAS_accessInAssignmentListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_accessInAssignmentListAST GALGAS_accessInAssignmentListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_accessInAssignmentListAST  (capCollectionElementArray ()) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_accessInAssignmentListAST GALGAS_accessInAssignmentListAST::constructor_listWithValue (const GALGAS_accessInAssignmentAST & inOperand0
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_accessInAssignmentListAST result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_accessInAssignmentListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_accessInAssignmentListAST::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
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
    appendObject (attributes) ;
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
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
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
      outOperand0 = p->mObject.mProperty_mAccess ;
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
    outOperand0 = p->mObject.mProperty_mAccess ;
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
    outOperand0 = p->mObject.mProperty_mAccess ;
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
    outOperand0 = p->mObject.mProperty_mAccess ;
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
    outOperand0 = p->mObject.mProperty_mAccess ;
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
    result = p->mObject.mProperty_mAccess ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_accessInAssignmentListAST::cEnumerator_accessInAssignmentListAST (const GALGAS_accessInAssignmentListAST & inEnumeratedObject,
                                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
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
  return p->mObject.mProperty_mAccess ;
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
//                                                                                                                     *
//                                 Class for element of '@routineTypedSignature' list                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_routineTypedSignature : public cCollectionElement {
  public : GALGAS_routineTypedSignature_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_routineTypedSignature (const GALGAS_procFormalArgumentPassingMode & in_mFormalArgumentPassingMode,
                                                     const GALGAS_lstring & in_mSelector,
                                                     const GALGAS_unifiedTypeMap_2D_proxy & in_mTypeProxy
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

cCollectionElement_routineTypedSignature::cCollectionElement_routineTypedSignature (const GALGAS_procFormalArgumentPassingMode & in_mFormalArgumentPassingMode,
                                                                                    const GALGAS_lstring & in_mSelector,
                                                                                    const GALGAS_unifiedTypeMap_2D_proxy & in_mTypeProxy
                                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mFormalArgumentPassingMode, in_mSelector, in_mTypeProxy) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_routineTypedSignature::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_routineTypedSignature::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_routineTypedSignature (mObject.mProperty_mFormalArgumentPassingMode, mObject.mProperty_mSelector, mObject.mProperty_mTypeProxy COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_routineTypedSignature::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFormalArgumentPassingMode" ":" ;
  mObject.mProperty_mFormalArgumentPassingMode.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSelector" ":" ;
  mObject.mProperty_mSelector.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTypeProxy" ":" ;
  mObject.mProperty_mTypeProxy.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_routineTypedSignature::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_routineTypedSignature * operand = (cCollectionElement_routineTypedSignature *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_routineTypedSignature) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineTypedSignature::GALGAS_routineTypedSignature (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineTypedSignature::GALGAS_routineTypedSignature (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineTypedSignature GALGAS_routineTypedSignature::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_routineTypedSignature  (capCollectionElementArray ()) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineTypedSignature GALGAS_routineTypedSignature::constructor_listWithValue (const GALGAS_procFormalArgumentPassingMode & inOperand0,
                                                                                      const GALGAS_lstring & inOperand1,
                                                                                      const GALGAS_unifiedTypeMap_2D_proxy & inOperand2
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_routineTypedSignature result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_routineTypedSignature (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_routineTypedSignature::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineTypedSignature::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                              const GALGAS_procFormalArgumentPassingMode & in_mFormalArgumentPassingMode,
                                                              const GALGAS_lstring & in_mSelector,
                                                              const GALGAS_unifiedTypeMap_2D_proxy & in_mTypeProxy
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_routineTypedSignature * p = NULL ;
  macroMyNew (p, cCollectionElement_routineTypedSignature (in_mFormalArgumentPassingMode,
                                                           in_mSelector,
                                                           in_mTypeProxy COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineTypedSignature::addAssign_operation (const GALGAS_procFormalArgumentPassingMode & inOperand0,
                                                        const GALGAS_lstring & inOperand1,
                                                        const GALGAS_unifiedTypeMap_2D_proxy & inOperand2
                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_routineTypedSignature (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineTypedSignature::setter_insertAtIndex (const GALGAS_procFormalArgumentPassingMode inOperand0,
                                                         const GALGAS_lstring inOperand1,
                                                         const GALGAS_unifiedTypeMap_2D_proxy inOperand2,
                                                         const GALGAS_uint inInsertionIndex,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_routineTypedSignature (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineTypedSignature::setter_removeAtIndex (GALGAS_procFormalArgumentPassingMode & outOperand0,
                                                         GALGAS_lstring & outOperand1,
                                                         GALGAS_unifiedTypeMap_2D_proxy & outOperand2,
                                                         const GALGAS_uint inRemoveIndex,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_routineTypedSignature * p = (cCollectionElement_routineTypedSignature *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_routineTypedSignature) ;
      outOperand0 = p->mObject.mProperty_mFormalArgumentPassingMode ;
      outOperand1 = p->mObject.mProperty_mSelector ;
      outOperand2 = p->mObject.mProperty_mTypeProxy ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineTypedSignature::setter_popFirst (GALGAS_procFormalArgumentPassingMode & outOperand0,
                                                    GALGAS_lstring & outOperand1,
                                                    GALGAS_unifiedTypeMap_2D_proxy & outOperand2,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_routineTypedSignature * p = (cCollectionElement_routineTypedSignature *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_routineTypedSignature) ;
    outOperand0 = p->mObject.mProperty_mFormalArgumentPassingMode ;
    outOperand1 = p->mObject.mProperty_mSelector ;
    outOperand2 = p->mObject.mProperty_mTypeProxy ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineTypedSignature::setter_popLast (GALGAS_procFormalArgumentPassingMode & outOperand0,
                                                   GALGAS_lstring & outOperand1,
                                                   GALGAS_unifiedTypeMap_2D_proxy & outOperand2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_routineTypedSignature * p = (cCollectionElement_routineTypedSignature *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_routineTypedSignature) ;
    outOperand0 = p->mObject.mProperty_mFormalArgumentPassingMode ;
    outOperand1 = p->mObject.mProperty_mSelector ;
    outOperand2 = p->mObject.mProperty_mTypeProxy ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineTypedSignature::method_first (GALGAS_procFormalArgumentPassingMode & outOperand0,
                                                 GALGAS_lstring & outOperand1,
                                                 GALGAS_unifiedTypeMap_2D_proxy & outOperand2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_routineTypedSignature * p = (cCollectionElement_routineTypedSignature *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_routineTypedSignature) ;
    outOperand0 = p->mObject.mProperty_mFormalArgumentPassingMode ;
    outOperand1 = p->mObject.mProperty_mSelector ;
    outOperand2 = p->mObject.mProperty_mTypeProxy ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineTypedSignature::method_last (GALGAS_procFormalArgumentPassingMode & outOperand0,
                                                GALGAS_lstring & outOperand1,
                                                GALGAS_unifiedTypeMap_2D_proxy & outOperand2,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_routineTypedSignature * p = (cCollectionElement_routineTypedSignature *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_routineTypedSignature) ;
    outOperand0 = p->mObject.mProperty_mFormalArgumentPassingMode ;
    outOperand1 = p->mObject.mProperty_mSelector ;
    outOperand2 = p->mObject.mProperty_mTypeProxy ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineTypedSignature GALGAS_routineTypedSignature::add_operation (const GALGAS_routineTypedSignature & inOperand,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_routineTypedSignature result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineTypedSignature GALGAS_routineTypedSignature::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_routineTypedSignature result = GALGAS_routineTypedSignature::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineTypedSignature GALGAS_routineTypedSignature::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_routineTypedSignature result = GALGAS_routineTypedSignature::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineTypedSignature GALGAS_routineTypedSignature::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_routineTypedSignature result = GALGAS_routineTypedSignature::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineTypedSignature::plusAssign_operation (const GALGAS_routineTypedSignature inOperand,
                                                         C_Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentPassingMode GALGAS_routineTypedSignature::getter_mFormalArgumentPassingModeAtIndex (const GALGAS_uint & inIndex,
                                                                                                             C_Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_routineTypedSignature * p = (cCollectionElement_routineTypedSignature *) attributes.ptr () ;
  GALGAS_procFormalArgumentPassingMode result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_routineTypedSignature) ;
    result = p->mObject.mProperty_mFormalArgumentPassingMode ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_routineTypedSignature::getter_mSelectorAtIndex (const GALGAS_uint & inIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_routineTypedSignature * p = (cCollectionElement_routineTypedSignature *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_routineTypedSignature) ;
    result = p->mObject.mProperty_mSelector ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_routineTypedSignature::getter_mTypeProxyAtIndex (const GALGAS_uint & inIndex,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_routineTypedSignature * p = (cCollectionElement_routineTypedSignature *) attributes.ptr () ;
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_routineTypedSignature) ;
    result = p->mObject.mProperty_mTypeProxy ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_routineTypedSignature::cEnumerator_routineTypedSignature (const GALGAS_routineTypedSignature & inEnumeratedObject,
                                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineTypedSignature_2D_element cEnumerator_routineTypedSignature::current (LOCATION_ARGS) const {
  const cCollectionElement_routineTypedSignature * p = (const cCollectionElement_routineTypedSignature *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_routineTypedSignature) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentPassingMode cEnumerator_routineTypedSignature::current_mFormalArgumentPassingMode (LOCATION_ARGS) const {
  const cCollectionElement_routineTypedSignature * p = (const cCollectionElement_routineTypedSignature *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_routineTypedSignature) ;
  return p->mObject.mProperty_mFormalArgumentPassingMode ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_routineTypedSignature::current_mSelector (LOCATION_ARGS) const {
  const cCollectionElement_routineTypedSignature * p = (const cCollectionElement_routineTypedSignature *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_routineTypedSignature) ;
  return p->mObject.mProperty_mSelector ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cEnumerator_routineTypedSignature::current_mTypeProxy (LOCATION_ARGS) const {
  const cCollectionElement_routineTypedSignature * p = (const cCollectionElement_routineTypedSignature *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_routineTypedSignature) ;
  return p->mObject.mProperty_mTypeProxy ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @routineTypedSignature type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_routineTypedSignature ("routineTypedSignature",
                                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_routineTypedSignature::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineTypedSignature ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_routineTypedSignature::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_routineTypedSignature (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineTypedSignature GALGAS_routineTypedSignature::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_routineTypedSignature result ;
  const GALGAS_routineTypedSignature * p = (const GALGAS_routineTypedSignature *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_routineTypedSignature *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineTypedSignature", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Extension Getter '@routineFormalArgumentList routineSignature'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring extensionGetter_routineSignature (const GALGAS_routineFormalArgumentList & inObject,
                                                 const GALGAS_location & constinArgument_inRoutineNameLocation,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  GALGAS_string var_key_1637 = GALGAS_string::makeEmptyString () ;
  var_key_1637.plusAssign_operation(GALGAS_string ("("), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 30)) ;
  const GALGAS_routineFormalArgumentList temp_0 = inObject ;
  cEnumerator_routineFormalArgumentList enumerator_1710 (temp_0, kENUMERATION_UP) ;
  while (enumerator_1710.hasCurrentObject ()) {
    var_key_1637.plusAssign_operation(extensionGetter_formalPassingModeString (enumerator_1710.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 32)).add_operation (enumerator_1710.current_mSelector (HERE).getter_string (SOURCE_FILE ("context-routines.galgas", 32)), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 32)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 32)), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 32)) ;
    enumerator_1710.gotoNextObject () ;
  }
  var_key_1637.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 34)) ;
  result_result = GALGAS_lstring::constructor_new (var_key_1637, constinArgument_inRoutineNameLocation  COMMA_SOURCE_FILE ("context-routines.galgas", 35)) ;
//---
  return result_result ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Extension Getter '@effectiveArgumentListAST routineSignature'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring extensionGetter_routineSignature (const GALGAS_effectiveArgumentListAST & inObject,
                                                 const GALGAS_location & constinArgument_inRoutineNameLocation,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  GALGAS_string var_key_2094 = GALGAS_string::makeEmptyString () ;
  var_key_2094.plusAssign_operation(GALGAS_string ("("), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 42)) ;
  const GALGAS_effectiveArgumentListAST temp_0 = inObject ;
  cEnumerator_effectiveArgumentListAST enumerator_2149 (temp_0, kENUMERATION_UP) ;
  while (enumerator_2149.hasCurrentObject ()) {
    var_key_2094.plusAssign_operation(extensionGetter_matchingFormalArgument (enumerator_2149.current_mEffectiveParameterKind (HERE), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 44)).add_operation (enumerator_2149.current_mSelector (HERE).getter_string (SOURCE_FILE ("context-routines.galgas", 44)), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 44)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 44)), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 44)) ;
    enumerator_2149.gotoNextObject () ;
  }
  var_key_2094.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 46)) ;
  result_result = GALGAS_lstring::constructor_new (var_key_2094, constinArgument_inRoutineNameLocation  COMMA_SOURCE_FILE ("context-routines.galgas", 47)) ;
//---
  return result_result ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Extension Getter '@routineKind executionMode'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mode extensionGetter_executionMode (const GALGAS_routineKind & inObject,
                                           C_Compiler * /* inCompiler */
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_mode result_result ; // Returned variable
  const GALGAS_routineKind temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_routineKind::kNotBuilt:
    break ;
  case GALGAS_routineKind::kEnum_function:
    {
      const cEnumAssociatedValues_routineKind_function * extractPtr_2747 = (const cEnumAssociatedValues_routineKind_function *) (temp_0.unsafePointer ()) ;
      const GALGAS_mode extractedValue_mode = extractPtr_2747->mAssociatedValue0 ;
      result_result = extractedValue_mode ;
    }
    break ;
  case GALGAS_routineKind::kEnum_section:
    {
      result_result = GALGAS_mode::constructor_sectionMode (SOURCE_FILE ("context-routines.galgas", 65)) ;
    }
    break ;
  case GALGAS_routineKind::kEnum_safe:
    {
      result_result = GALGAS_mode::constructor_safeMode (SOURCE_FILE ("context-routines.galgas", 66)) ;
    }
    break ;
  case GALGAS_routineKind::kEnum_service:
    {
      result_result = GALGAS_mode::constructor_serviceMode (SOURCE_FILE ("context-routines.galgas", 67)) ;
    }
    break ;
  case GALGAS_routineKind::kEnum_primitive:
    {
      result_result = GALGAS_mode::constructor_primitiveMode (SOURCE_FILE ("context-routines.galgas", 68)) ;
    }
    break ;
  }
//---
  return result_result ;
}




//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_routineCallingSheme_propertyIndirectCall::cEnumAssociatedValues_routineCallingSheme_propertyIndirectCall (const GALGAS_uint & inAssociatedValue0
                                                                                                                                COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_routineCallingSheme_propertyIndirectCall::description (C_String & ioString,
                                                                                  const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_routineCallingSheme_propertyIndirectCall::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_routineCallingSheme_propertyIndirectCall * ptr = dynamic_cast<const cEnumAssociatedValues_routineCallingSheme_propertyIndirectCall *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineCallingSheme::GALGAS_routineCallingSheme (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineCallingSheme GALGAS_routineCallingSheme::constructor_staticCall (UNUSED_LOCATION_ARGS) {
  GALGAS_routineCallingSheme result ;
  result.mEnum = kEnum_staticCall ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineCallingSheme GALGAS_routineCallingSheme::constructor_propertyIndirectCall (const GALGAS_uint & inAssociatedValue0
                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_routineCallingSheme result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_propertyIndirectCall ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_routineCallingSheme_propertyIndirectCall (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineCallingSheme::method_propertyIndirectCall (GALGAS_uint & outAssociatedValue0,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_propertyIndirectCall) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @routineCallingSheme propertyIndirectCall invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_routineCallingSheme_propertyIndirectCall * ptr = (const cEnumAssociatedValues_routineCallingSheme_propertyIndirectCall *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * gEnumNameArrayFor_routineCallingSheme [3] = {
  "(not built)",
  "staticCall",
  "propertyIndirectCall"
} ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_routineCallingSheme::getter_isStaticCall (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_staticCall == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_routineCallingSheme::getter_isPropertyIndirectCall (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_propertyIndirectCall == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineCallingSheme::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "<enum @routineCallingSheme: " << gEnumNameArrayFor_routineCallingSheme [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_routineCallingSheme::objectCompare (const GALGAS_routineCallingSheme & inOperand) const {
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
//                                              @routineCallingSheme type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_routineCallingSheme ("routineCallingSheme",
                                            NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_routineCallingSheme::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineCallingSheme ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_routineCallingSheme::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_routineCallingSheme (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineCallingSheme GALGAS_routineCallingSheme::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_routineCallingSheme result ;
  const GALGAS_routineCallingSheme * p = (const GALGAS_routineCallingSheme *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_routineCallingSheme *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineCallingSheme", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_routineArgumentSignatureMapForContext::cMapElement_routineArgumentSignatureMapForContext (const GALGAS_lstring & inKey,
                                                                                                      const GALGAS_lstring & in_mRoutineLLVMName,
                                                                                                      const GALGAS_routineDescriptor & in_mDescriptor
                                                                                                      COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mRoutineLLVMName (in_mRoutineLLVMName),
mProperty_mDescriptor (in_mDescriptor) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_routineArgumentSignatureMapForContext::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mRoutineLLVMName.isValid () && mProperty_mDescriptor.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_routineArgumentSignatureMapForContext::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_routineArgumentSignatureMapForContext (mProperty_lkey, mProperty_mRoutineLLVMName, mProperty_mDescriptor COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_routineArgumentSignatureMapForContext::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mRoutineLLVMName" ":" ;
  mProperty_mRoutineLLVMName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mDescriptor" ":" ;
  mProperty_mDescriptor.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_routineArgumentSignatureMapForContext::compare (const cCollectionElement * inOperand) const {
  cMapElement_routineArgumentSignatureMapForContext * operand = (cMapElement_routineArgumentSignatureMapForContext *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mRoutineLLVMName.objectCompare (operand->mProperty_mRoutineLLVMName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mDescriptor.objectCompare (operand->mProperty_mDescriptor) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineArgumentSignatureMapForContext::GALGAS_routineArgumentSignatureMapForContext (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineArgumentSignatureMapForContext::GALGAS_routineArgumentSignatureMapForContext (const GALGAS_routineArgumentSignatureMapForContext & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineArgumentSignatureMapForContext & GALGAS_routineArgumentSignatureMapForContext::operator = (const GALGAS_routineArgumentSignatureMapForContext & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineArgumentSignatureMapForContext GALGAS_routineArgumentSignatureMapForContext::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_routineArgumentSignatureMapForContext result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineArgumentSignatureMapForContext GALGAS_routineArgumentSignatureMapForContext::constructor_mapWithMapToOverride (const GALGAS_routineArgumentSignatureMapForContext & inMapToOverride
                                                                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_routineArgumentSignatureMapForContext result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineArgumentSignatureMapForContext GALGAS_routineArgumentSignatureMapForContext::getter_overriddenMap (C_Compiler * inCompiler
                                                                                                                 COMMA_LOCATION_ARGS) const {
  GALGAS_routineArgumentSignatureMapForContext result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineArgumentSignatureMapForContext::addAssign_operation (const GALGAS_lstring & inKey,
                                                                        const GALGAS_lstring & inArgument0,
                                                                        const GALGAS_routineDescriptor & inArgument1,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  cMapElement_routineArgumentSignatureMapForContext * p = NULL ;
  macroMyNew (p, cMapElement_routineArgumentSignatureMapForContext (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@routineArgumentSignatureMapForContext insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineArgumentSignatureMapForContext::setter_insertKey (GALGAS_lstring inKey,
                                                                     GALGAS_lstring inArgument0,
                                                                     GALGAS_routineDescriptor inArgument1,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  cMapElement_routineArgumentSignatureMapForContext * p = NULL ;
  macroMyNew (p, cMapElement_routineArgumentSignatureMapForContext (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' routine signature is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_routineArgumentSignatureMapForContext_searchKey = "there is no '%K' routine signature" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineArgumentSignatureMapForContext::method_searchKey (GALGAS_lstring inKey,
                                                                     GALGAS_lstring & outArgument0,
                                                                     GALGAS_routineDescriptor & outArgument1,
                                                                     GALGAS_location & outKeyLocation,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  const cMapElement_routineArgumentSignatureMapForContext * p = (const cMapElement_routineArgumentSignatureMapForContext *) performSearch (inKey,
                                                                                                                                           inCompiler,
                                                                                                                                           kSearchErrorMessage_routineArgumentSignatureMapForContext_searchKey
                                                                                                                                           COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outKeyLocation.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_routineArgumentSignatureMapForContext) ;
    outArgument0 = p->mProperty_mRoutineLLVMName ;
    outArgument1 = p->mProperty_mDescriptor ;
    outKeyLocation = p->mProperty_lkey.mProperty_location ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_routineArgumentSignatureMapForContext::getter_mRoutineLLVMNameForKey (const GALGAS_string & inKey,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_routineArgumentSignatureMapForContext * p = (const cMapElement_routineArgumentSignatureMapForContext *) attributes ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_routineArgumentSignatureMapForContext) ;
    result = p->mProperty_mRoutineLLVMName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineDescriptor GALGAS_routineArgumentSignatureMapForContext::getter_mDescriptorForKey (const GALGAS_string & inKey,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_routineArgumentSignatureMapForContext * p = (const cMapElement_routineArgumentSignatureMapForContext *) attributes ;
  GALGAS_routineDescriptor result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_routineArgumentSignatureMapForContext) ;
    result = p->mProperty_mDescriptor ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineArgumentSignatureMapForContext::setter_setMRoutineLLVMNameForKey (GALGAS_lstring inAttributeValue,
                                                                                     GALGAS_string inKey,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_routineArgumentSignatureMapForContext * p = (cMapElement_routineArgumentSignatureMapForContext *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_routineArgumentSignatureMapForContext) ;
    p->mProperty_mRoutineLLVMName = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineArgumentSignatureMapForContext::setter_setMDescriptorForKey (GALGAS_routineDescriptor inAttributeValue,
                                                                                GALGAS_string inKey,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_routineArgumentSignatureMapForContext * p = (cMapElement_routineArgumentSignatureMapForContext *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_routineArgumentSignatureMapForContext) ;
    p->mProperty_mDescriptor = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_routineArgumentSignatureMapForContext * GALGAS_routineArgumentSignatureMapForContext::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                                                     const GALGAS_string & inKey
                                                                                                                                     COMMA_LOCATION_ARGS) {
  cMapElement_routineArgumentSignatureMapForContext * result = (cMapElement_routineArgumentSignatureMapForContext *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_routineArgumentSignatureMapForContext) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_routineArgumentSignatureMapForContext::cEnumerator_routineArgumentSignatureMapForContext (const GALGAS_routineArgumentSignatureMapForContext & inEnumeratedObject,
                                                                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineArgumentSignatureMapForContext_2D_element cEnumerator_routineArgumentSignatureMapForContext::current (LOCATION_ARGS) const {
  const cMapElement_routineArgumentSignatureMapForContext * p = (const cMapElement_routineArgumentSignatureMapForContext *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_routineArgumentSignatureMapForContext) ;
  return GALGAS_routineArgumentSignatureMapForContext_2D_element (p->mProperty_lkey, p->mProperty_mRoutineLLVMName, p->mProperty_mDescriptor) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_routineArgumentSignatureMapForContext::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_routineArgumentSignatureMapForContext::current_mRoutineLLVMName (LOCATION_ARGS) const {
  const cMapElement_routineArgumentSignatureMapForContext * p = (const cMapElement_routineArgumentSignatureMapForContext *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_routineArgumentSignatureMapForContext) ;
  return p->mProperty_mRoutineLLVMName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineDescriptor cEnumerator_routineArgumentSignatureMapForContext::current_mDescriptor (LOCATION_ARGS) const {
  const cMapElement_routineArgumentSignatureMapForContext * p = (const cMapElement_routineArgumentSignatureMapForContext *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_routineArgumentSignatureMapForContext) ;
  return p->mProperty_mDescriptor ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @routineArgumentSignatureMapForContext type                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_routineArgumentSignatureMapForContext ("routineArgumentSignatureMapForContext",
                                                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_routineArgumentSignatureMapForContext::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineArgumentSignatureMapForContext ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_routineArgumentSignatureMapForContext::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_routineArgumentSignatureMapForContext (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineArgumentSignatureMapForContext GALGAS_routineArgumentSignatureMapForContext::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_routineArgumentSignatureMapForContext result ;
  const GALGAS_routineArgumentSignatureMapForContext * p = (const GALGAS_routineArgumentSignatureMapForContext *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_routineArgumentSignatureMapForContext *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineArgumentSignatureMapForContext", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_internalRoutineMapForContext::cMapElement_internalRoutineMapForContext (const GALGAS_lstring & inKey,
                                                                                    const GALGAS_routineArgumentSignatureMapForContext & in_mRoutineArgumentSignatureMapForContext
                                                                                    COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mRoutineArgumentSignatureMapForContext (in_mRoutineArgumentSignatureMapForContext) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_internalRoutineMapForContext::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mRoutineArgumentSignatureMapForContext.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_internalRoutineMapForContext::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_internalRoutineMapForContext (mProperty_lkey, mProperty_mRoutineArgumentSignatureMapForContext COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_internalRoutineMapForContext::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mRoutineArgumentSignatureMapForContext" ":" ;
  mProperty_mRoutineArgumentSignatureMapForContext.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_internalRoutineMapForContext::compare (const cCollectionElement * inOperand) const {
  cMapElement_internalRoutineMapForContext * operand = (cMapElement_internalRoutineMapForContext *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mRoutineArgumentSignatureMapForContext.objectCompare (operand->mProperty_mRoutineArgumentSignatureMapForContext) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_internalRoutineMapForContext::GALGAS_internalRoutineMapForContext (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_internalRoutineMapForContext::GALGAS_internalRoutineMapForContext (const GALGAS_internalRoutineMapForContext & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_internalRoutineMapForContext & GALGAS_internalRoutineMapForContext::operator = (const GALGAS_internalRoutineMapForContext & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_internalRoutineMapForContext GALGAS_internalRoutineMapForContext::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_internalRoutineMapForContext result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_internalRoutineMapForContext GALGAS_internalRoutineMapForContext::constructor_mapWithMapToOverride (const GALGAS_internalRoutineMapForContext & inMapToOverride
                                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_internalRoutineMapForContext result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_internalRoutineMapForContext GALGAS_internalRoutineMapForContext::getter_overriddenMap (C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const {
  GALGAS_internalRoutineMapForContext result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_internalRoutineMapForContext::addAssign_operation (const GALGAS_lstring & inKey,
                                                               const GALGAS_routineArgumentSignatureMapForContext & inArgument0,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cMapElement_internalRoutineMapForContext * p = NULL ;
  macroMyNew (p, cMapElement_internalRoutineMapForContext (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@internalRoutineMapForContext insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_internalRoutineMapForContext::setter_insertKey (GALGAS_lstring inKey,
                                                            GALGAS_routineArgumentSignatureMapForContext inArgument0,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  cMapElement_internalRoutineMapForContext * p = NULL ;
  macroMyNew (p, cMapElement_internalRoutineMapForContext (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' routine is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_internalRoutineMapForContext_searchKey = "there is no '%K' routine" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_internalRoutineMapForContext::method_searchKey (GALGAS_lstring inKey,
                                                            GALGAS_routineArgumentSignatureMapForContext & outArgument0,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  const cMapElement_internalRoutineMapForContext * p = (const cMapElement_internalRoutineMapForContext *) performSearch (inKey,
                                                                                                                         inCompiler,
                                                                                                                         kSearchErrorMessage_internalRoutineMapForContext_searchKey
                                                                                                                         COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_internalRoutineMapForContext) ;
    outArgument0 = p->mProperty_mRoutineArgumentSignatureMapForContext ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineArgumentSignatureMapForContext GALGAS_internalRoutineMapForContext::getter_mRoutineArgumentSignatureMapForContextForKey (const GALGAS_string & inKey,
                                                                                                                                       C_Compiler * inCompiler
                                                                                                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_internalRoutineMapForContext * p = (const cMapElement_internalRoutineMapForContext *) attributes ;
  GALGAS_routineArgumentSignatureMapForContext result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_internalRoutineMapForContext) ;
    result = p->mProperty_mRoutineArgumentSignatureMapForContext ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_internalRoutineMapForContext::setter_setMRoutineArgumentSignatureMapForContextForKey (GALGAS_routineArgumentSignatureMapForContext inAttributeValue,
                                                                                                  GALGAS_string inKey,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_internalRoutineMapForContext * p = (cMapElement_internalRoutineMapForContext *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_internalRoutineMapForContext) ;
    p->mProperty_mRoutineArgumentSignatureMapForContext = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_internalRoutineMapForContext * GALGAS_internalRoutineMapForContext::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                                   const GALGAS_string & inKey
                                                                                                                   COMMA_LOCATION_ARGS) {
  cMapElement_internalRoutineMapForContext * result = (cMapElement_internalRoutineMapForContext *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_internalRoutineMapForContext) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_internalRoutineMapForContext::cEnumerator_internalRoutineMapForContext (const GALGAS_internalRoutineMapForContext & inEnumeratedObject,
                                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_internalRoutineMapForContext_2D_element cEnumerator_internalRoutineMapForContext::current (LOCATION_ARGS) const {
  const cMapElement_internalRoutineMapForContext * p = (const cMapElement_internalRoutineMapForContext *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_internalRoutineMapForContext) ;
  return GALGAS_internalRoutineMapForContext_2D_element (p->mProperty_lkey, p->mProperty_mRoutineArgumentSignatureMapForContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_internalRoutineMapForContext::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineArgumentSignatureMapForContext cEnumerator_internalRoutineMapForContext::current_mRoutineArgumentSignatureMapForContext (LOCATION_ARGS) const {
  const cMapElement_internalRoutineMapForContext * p = (const cMapElement_internalRoutineMapForContext *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_internalRoutineMapForContext) ;
  return p->mProperty_mRoutineArgumentSignatureMapForContext ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @internalRoutineMapForContext type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_internalRoutineMapForContext ("internalRoutineMapForContext",
                                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_internalRoutineMapForContext::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_internalRoutineMapForContext ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_internalRoutineMapForContext::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_internalRoutineMapForContext (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_internalRoutineMapForContext GALGAS_internalRoutineMapForContext::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_internalRoutineMapForContext result ;
  const GALGAS_internalRoutineMapForContext * p = (const GALGAS_internalRoutineMapForContext *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_internalRoutineMapForContext *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("internalRoutineMapForContext", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineMapForContext::GALGAS_routineMapForContext (void) :
mProperty_mInternalRoutineMapForContext () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineMapForContext::~ GALGAS_routineMapForContext (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineMapForContext::GALGAS_routineMapForContext (const GALGAS_internalRoutineMapForContext & inOperand0) :
mProperty_mInternalRoutineMapForContext (inOperand0) {
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
    result = mProperty_mInternalRoutineMapForContext.objectCompare (inOperand.mProperty_mInternalRoutineMapForContext) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_routineMapForContext::isValid (void) const {
  return mProperty_mInternalRoutineMapForContext.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineMapForContext::drop (void) {
  mProperty_mInternalRoutineMapForContext.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineMapForContext::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "<struct @routineMapForContext:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mInternalRoutineMapForContext.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_internalRoutineMapForContext GALGAS_routineMapForContext::getter_mInternalRoutineMapForContext (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInternalRoutineMapForContext ;
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
//                                 Extension method '@routineMapForContext insertKey'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionSetter_insertKey (GALGAS_routineMapForContext & ioObject,
                                const GALGAS_lstring constinArgument_inRoutineName,
                                const GALGAS_lstring constinArgument_inArgumentSignature,
                                const GALGAS_lstring constinArgument_inRoutineLLVMName,
                                const GALGAS_routineDescriptor constinArgument_inDescriptor,
                                C_Compiler * inCompiler
                                COMMA_UNUSED_LOCATION_ARGS) {
  cMapElement_internalRoutineMapForContext * objectArray_7287 = (cMapElement_internalRoutineMapForContext *) ioObject.mProperty_mInternalRoutineMapForContext.readWriteAccessForWithInstruction (inCompiler, constinArgument_inRoutineName.getter_string (HERE)  COMMA_SOURCE_FILE ("context-routines.galgas", 176)) ;
  if (NULL != objectArray_7287) {
      macroValidSharedObject (objectArray_7287, cMapElement_internalRoutineMapForContext) ;
    {
    objectArray_7287->mProperty_mRoutineArgumentSignatureMapForContext.setter_insertKey (constinArgument_inArgumentSignature, constinArgument_inRoutineLLVMName, constinArgument_inDescriptor, inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 177)) ;
    }
  }else{
    GALGAS_routineArgumentSignatureMapForContext var_routineArgumentSignatureMapForContext_7568 = GALGAS_routineArgumentSignatureMapForContext::constructor_emptyMap (SOURCE_FILE ("context-routines.galgas", 183)) ;
    {
    var_routineArgumentSignatureMapForContext_7568.setter_insertKey (constinArgument_inArgumentSignature, constinArgument_inRoutineLLVMName, constinArgument_inDescriptor, inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 184)) ;
    }
    {
    ioObject.mProperty_mInternalRoutineMapForContext.setter_insertKey (constinArgument_inRoutineName, var_routineArgumentSignatureMapForContext_7568, inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 189)) ;
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
  GALGAS_routineArgumentSignatureMapForContext var_routineArgumentSignatureMapForContext_8242 ;
  inObject.mProperty_mInternalRoutineMapForContext.method_searchKey (constinArgument_inRoutineName, var_routineArgumentSignatureMapForContext_8242, inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 202)) ;
  var_routineArgumentSignatureMapForContext_8242.method_searchKey (constinArgument_inArgumentSignature, outArgument_outRoutineLLVMName, outArgument_outDescriptor, outArgument_outKeyLocation, inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 203)) ;
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
  result_result = inObject.mProperty_mInternalRoutineMapForContext.getter_hasKey (constinArgument_inRoutineName.getter_string (SOURCE_FILE ("context-routines.galgas", 209)) COMMA_SOURCE_FILE ("context-routines.galgas", 209)) ;
  const enumGalgasBool test_0 = result_result.boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_routineArgumentSignatureMapForContext var_routineArgumentSignatureMapForContext_8786 ;
    inObject.mProperty_mInternalRoutineMapForContext.method_searchKey (constinArgument_inRoutineName, var_routineArgumentSignatureMapForContext_8786, inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 211)) ;
    result_result = var_routineArgumentSignatureMapForContext_8786.getter_hasKey (constinArgument_inArgumentSignature.getter_string (SOURCE_FILE ("context-routines.galgas", 212)) COMMA_SOURCE_FILE ("context-routines.galgas", 212)) ;
  }
//---
  return result_result ;
}




//---------------------------------------------------------------------------------------------------------------------*

cMapElement_guardMapForContext::cMapElement_guardMapForContext (const GALGAS_lstring & inKey,
                                                                const GALGAS_bool & in_mIsPublic,
                                                                const GALGAS_routineTypedSignature & in_mSignature
                                                                COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mIsPublic (in_mIsPublic),
mProperty_mSignature (in_mSignature) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_guardMapForContext::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mIsPublic.isValid () && mProperty_mSignature.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_guardMapForContext::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_guardMapForContext (mProperty_lkey, mProperty_mIsPublic, mProperty_mSignature COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_guardMapForContext::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIsPublic" ":" ;
  mProperty_mIsPublic.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSignature" ":" ;
  mProperty_mSignature.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_guardMapForContext::compare (const cCollectionElement * inOperand) const {
  cMapElement_guardMapForContext * operand = (cMapElement_guardMapForContext *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mIsPublic.objectCompare (operand->mProperty_mIsPublic) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSignature.objectCompare (operand->mProperty_mSignature) ;
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
                                                     const GALGAS_routineTypedSignature & inArgument1,
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
                                                  GALGAS_routineTypedSignature inArgument1,
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
                                                  GALGAS_routineTypedSignature & outArgument1,
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
    outArgument0 = p->mProperty_mIsPublic ;
    outArgument1 = p->mProperty_mSignature ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guardMapForContext::setter_removeKey (GALGAS_lstring inKey,
                                                  GALGAS_bool & outArgument0,
                                                  GALGAS_routineTypedSignature & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  const char * kRemoveErrorMessage = "there is no '%K' guard" ;
  capCollectionElement attributes ;
  performRemove (inKey, attributes, inCompiler, kRemoveErrorMessage COMMA_THERE) ;
  cMapElement_guardMapForContext * p = (cMapElement_guardMapForContext *) attributes.ptr () ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_guardMapForContext) ;
    outArgument0 = p->mProperty_mIsPublic ;
    outArgument1 = p->mProperty_mSignature ;
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
    result = p->mProperty_mIsPublic ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineTypedSignature GALGAS_guardMapForContext::getter_mSignatureForKey (const GALGAS_string & inKey,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_guardMapForContext * p = (const cMapElement_guardMapForContext *) attributes ;
  GALGAS_routineTypedSignature result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_guardMapForContext) ;
    result = p->mProperty_mSignature ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guardMapForContext::setter_setMIsPublicForKey (GALGAS_bool inAttributeValue,
                                                           GALGAS_string inKey,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_guardMapForContext * p = (cMapElement_guardMapForContext *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_guardMapForContext) ;
    p->mProperty_mIsPublic = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guardMapForContext::setter_setMSignatureForKey (GALGAS_routineTypedSignature inAttributeValue,
                                                            GALGAS_string inKey,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_guardMapForContext * p = (cMapElement_guardMapForContext *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_guardMapForContext) ;
    p->mProperty_mSignature = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_guardMapForContext * GALGAS_guardMapForContext::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                               const GALGAS_string & inKey
                                                                                               COMMA_LOCATION_ARGS) {
  cMapElement_guardMapForContext * result = (cMapElement_guardMapForContext *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_guardMapForContext) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_guardMapForContext::cEnumerator_guardMapForContext (const GALGAS_guardMapForContext & inEnumeratedObject,
                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardMapForContext_2D_element cEnumerator_guardMapForContext::current (LOCATION_ARGS) const {
  const cMapElement_guardMapForContext * p = (const cMapElement_guardMapForContext *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_guardMapForContext) ;
  return GALGAS_guardMapForContext_2D_element (p->mProperty_lkey, p->mProperty_mIsPublic, p->mProperty_mSignature) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_guardMapForContext::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_guardMapForContext::current_mIsPublic (LOCATION_ARGS) const {
  const cMapElement_guardMapForContext * p = (const cMapElement_guardMapForContext *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_guardMapForContext) ;
  return p->mProperty_mIsPublic ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineTypedSignature cEnumerator_guardMapForContext::current_mSignature (LOCATION_ARGS) const {
  const cMapElement_guardMapForContext * p = (const cMapElement_guardMapForContext *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_guardMapForContext) ;
  return p->mProperty_mSignature ;
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

cMapElement_internalUniversalPropertyAndRoutineMapForContext::cMapElement_internalUniversalPropertyAndRoutineMapForContext (const GALGAS_lstring & inKey,
                                                                                                                            const GALGAS_valuedObjectState & in_mObjectState,
                                                                                                                            const GALGAS_bool & in_mObjectShouldBeValuedAtEndOfScope,
                                                                                                                            const GALGAS_possibleValuedObject & in_mPossibleValuedObject,
                                                                                                                            const GALGAS_routineSignatureMapForContext & in_mRoutineSignatureMapForContext
                                                                                                                            COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mObjectState (in_mObjectState),
mProperty_mObjectShouldBeValuedAtEndOfScope (in_mObjectShouldBeValuedAtEndOfScope),
mProperty_mPossibleValuedObject (in_mPossibleValuedObject),
mProperty_mRoutineSignatureMapForContext (in_mRoutineSignatureMapForContext) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_internalUniversalPropertyAndRoutineMapForContext::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mObjectState.isValid () && mProperty_mObjectShouldBeValuedAtEndOfScope.isValid () && mProperty_mPossibleValuedObject.isValid () && mProperty_mRoutineSignatureMapForContext.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_internalUniversalPropertyAndRoutineMapForContext::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_internalUniversalPropertyAndRoutineMapForContext (mProperty_lkey, mProperty_mObjectState, mProperty_mObjectShouldBeValuedAtEndOfScope, mProperty_mPossibleValuedObject, mProperty_mRoutineSignatureMapForContext COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_internalUniversalPropertyAndRoutineMapForContext::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mObjectState" ":" ;
  mProperty_mObjectState.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mObjectShouldBeValuedAtEndOfScope" ":" ;
  mProperty_mObjectShouldBeValuedAtEndOfScope.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mPossibleValuedObject" ":" ;
  mProperty_mPossibleValuedObject.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mRoutineSignatureMapForContext" ":" ;
  mProperty_mRoutineSignatureMapForContext.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_internalUniversalPropertyAndRoutineMapForContext::compare (const cCollectionElement * inOperand) const {
  cMapElement_internalUniversalPropertyAndRoutineMapForContext * operand = (cMapElement_internalUniversalPropertyAndRoutineMapForContext *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mObjectState.objectCompare (operand->mProperty_mObjectState) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mObjectShouldBeValuedAtEndOfScope.objectCompare (operand->mProperty_mObjectShouldBeValuedAtEndOfScope) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPossibleValuedObject.objectCompare (operand->mProperty_mPossibleValuedObject) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRoutineSignatureMapForContext.objectCompare (operand->mProperty_mRoutineSignatureMapForContext) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_internalUniversalPropertyAndRoutineMapForContext::GALGAS_internalUniversalPropertyAndRoutineMapForContext (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_internalUniversalPropertyAndRoutineMapForContext::GALGAS_internalUniversalPropertyAndRoutineMapForContext (const GALGAS_internalUniversalPropertyAndRoutineMapForContext & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_internalUniversalPropertyAndRoutineMapForContext & GALGAS_internalUniversalPropertyAndRoutineMapForContext::operator = (const GALGAS_internalUniversalPropertyAndRoutineMapForContext & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_internalUniversalPropertyAndRoutineMapForContext GALGAS_internalUniversalPropertyAndRoutineMapForContext::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_internalUniversalPropertyAndRoutineMapForContext result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_internalUniversalPropertyAndRoutineMapForContext GALGAS_internalUniversalPropertyAndRoutineMapForContext::constructor_mapWithMapToOverride (const GALGAS_internalUniversalPropertyAndRoutineMapForContext & inMapToOverride
                                                                                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_internalUniversalPropertyAndRoutineMapForContext result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_internalUniversalPropertyAndRoutineMapForContext GALGAS_internalUniversalPropertyAndRoutineMapForContext::getter_overriddenMap (C_Compiler * inCompiler
                                                                                                                                       COMMA_LOCATION_ARGS) const {
  GALGAS_internalUniversalPropertyAndRoutineMapForContext result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_internalUniversalPropertyAndRoutineMapForContext::addAssign_operation (const GALGAS_lstring & inKey,
                                                                                   const GALGAS_valuedObjectState & inArgument0,
                                                                                   const GALGAS_bool & inArgument1,
                                                                                   const GALGAS_possibleValuedObject & inArgument2,
                                                                                   const GALGAS_routineSignatureMapForContext & inArgument3,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) {
  cMapElement_internalUniversalPropertyAndRoutineMapForContext * p = NULL ;
  macroMyNew (p, cMapElement_internalUniversalPropertyAndRoutineMapForContext (inKey, inArgument0, inArgument1, inArgument2, inArgument3 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@internalUniversalPropertyAndRoutineMapForContext insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_internalUniversalPropertyAndRoutineMapForContext::setter_insertKey (GALGAS_lstring inKey,
                                                                                GALGAS_valuedObjectState inArgument0,
                                                                                GALGAS_bool inArgument1,
                                                                                GALGAS_possibleValuedObject inArgument2,
                                                                                GALGAS_routineSignatureMapForContext inArgument3,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  cMapElement_internalUniversalPropertyAndRoutineMapForContext * p = NULL ;
  macroMyNew (p, cMapElement_internalUniversalPropertyAndRoutineMapForContext (inKey, inArgument0, inArgument1, inArgument2, inArgument3 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' entity is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_internalUniversalPropertyAndRoutineMapForContext_searchKey = "there is no '%K' entity" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_internalUniversalPropertyAndRoutineMapForContext::method_searchKey (GALGAS_lstring inKey,
                                                                                GALGAS_valuedObjectState & outArgument0,
                                                                                GALGAS_bool & outArgument1,
                                                                                GALGAS_possibleValuedObject & outArgument2,
                                                                                GALGAS_routineSignatureMapForContext & outArgument3,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  const cMapElement_internalUniversalPropertyAndRoutineMapForContext * p = (const cMapElement_internalUniversalPropertyAndRoutineMapForContext *) performSearch (inKey,
                                                                                                                                                                 inCompiler,
                                                                                                                                                                 kSearchErrorMessage_internalUniversalPropertyAndRoutineMapForContext_searchKey
                                                                                                                                                                 COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_internalUniversalPropertyAndRoutineMapForContext) ;
    outArgument0 = p->mProperty_mObjectState ;
    outArgument1 = p->mProperty_mObjectShouldBeValuedAtEndOfScope ;
    outArgument2 = p->mProperty_mPossibleValuedObject ;
    outArgument3 = p->mProperty_mRoutineSignatureMapForContext ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_valuedObjectState GALGAS_internalUniversalPropertyAndRoutineMapForContext::getter_mObjectStateForKey (const GALGAS_string & inKey,
                                                                                                             C_Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_internalUniversalPropertyAndRoutineMapForContext * p = (const cMapElement_internalUniversalPropertyAndRoutineMapForContext *) attributes ;
  GALGAS_valuedObjectState result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_internalUniversalPropertyAndRoutineMapForContext) ;
    result = p->mProperty_mObjectState ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_internalUniversalPropertyAndRoutineMapForContext::getter_mObjectShouldBeValuedAtEndOfScopeForKey (const GALGAS_string & inKey,
                                                                                                                     C_Compiler * inCompiler
                                                                                                                     COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_internalUniversalPropertyAndRoutineMapForContext * p = (const cMapElement_internalUniversalPropertyAndRoutineMapForContext *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_internalUniversalPropertyAndRoutineMapForContext) ;
    result = p->mProperty_mObjectShouldBeValuedAtEndOfScope ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_possibleValuedObject GALGAS_internalUniversalPropertyAndRoutineMapForContext::getter_mPossibleValuedObjectForKey (const GALGAS_string & inKey,
                                                                                                                         C_Compiler * inCompiler
                                                                                                                         COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_internalUniversalPropertyAndRoutineMapForContext * p = (const cMapElement_internalUniversalPropertyAndRoutineMapForContext *) attributes ;
  GALGAS_possibleValuedObject result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_internalUniversalPropertyAndRoutineMapForContext) ;
    result = p->mProperty_mPossibleValuedObject ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineSignatureMapForContext GALGAS_internalUniversalPropertyAndRoutineMapForContext::getter_mRoutineSignatureMapForContextForKey (const GALGAS_string & inKey,
                                                                                                                                           C_Compiler * inCompiler
                                                                                                                                           COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_internalUniversalPropertyAndRoutineMapForContext * p = (const cMapElement_internalUniversalPropertyAndRoutineMapForContext *) attributes ;
  GALGAS_routineSignatureMapForContext result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_internalUniversalPropertyAndRoutineMapForContext) ;
    result = p->mProperty_mRoutineSignatureMapForContext ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_internalUniversalPropertyAndRoutineMapForContext::setter_setMObjectStateForKey (GALGAS_valuedObjectState inAttributeValue,
                                                                                            GALGAS_string inKey,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_internalUniversalPropertyAndRoutineMapForContext * p = (cMapElement_internalUniversalPropertyAndRoutineMapForContext *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_internalUniversalPropertyAndRoutineMapForContext) ;
    p->mProperty_mObjectState = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_internalUniversalPropertyAndRoutineMapForContext::setter_setMObjectShouldBeValuedAtEndOfScopeForKey (GALGAS_bool inAttributeValue,
                                                                                                                 GALGAS_string inKey,
                                                                                                                 C_Compiler * inCompiler
                                                                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_internalUniversalPropertyAndRoutineMapForContext * p = (cMapElement_internalUniversalPropertyAndRoutineMapForContext *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_internalUniversalPropertyAndRoutineMapForContext) ;
    p->mProperty_mObjectShouldBeValuedAtEndOfScope = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_internalUniversalPropertyAndRoutineMapForContext::setter_setMPossibleValuedObjectForKey (GALGAS_possibleValuedObject inAttributeValue,
                                                                                                     GALGAS_string inKey,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_internalUniversalPropertyAndRoutineMapForContext * p = (cMapElement_internalUniversalPropertyAndRoutineMapForContext *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_internalUniversalPropertyAndRoutineMapForContext) ;
    p->mProperty_mPossibleValuedObject = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_internalUniversalPropertyAndRoutineMapForContext::setter_setMRoutineSignatureMapForContextForKey (GALGAS_routineSignatureMapForContext inAttributeValue,
                                                                                                              GALGAS_string inKey,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_internalUniversalPropertyAndRoutineMapForContext * p = (cMapElement_internalUniversalPropertyAndRoutineMapForContext *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_internalUniversalPropertyAndRoutineMapForContext) ;
    p->mProperty_mRoutineSignatureMapForContext = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_internalUniversalPropertyAndRoutineMapForContext * GALGAS_internalUniversalPropertyAndRoutineMapForContext::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                                                                           const GALGAS_string & inKey
                                                                                                                                                           COMMA_LOCATION_ARGS) {
  cMapElement_internalUniversalPropertyAndRoutineMapForContext * result = (cMapElement_internalUniversalPropertyAndRoutineMapForContext *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_internalUniversalPropertyAndRoutineMapForContext) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_internalUniversalPropertyAndRoutineMapForContext::cEnumerator_internalUniversalPropertyAndRoutineMapForContext (const GALGAS_internalUniversalPropertyAndRoutineMapForContext & inEnumeratedObject,
                                                                                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_internalUniversalPropertyAndRoutineMapForContext_2D_element cEnumerator_internalUniversalPropertyAndRoutineMapForContext::current (LOCATION_ARGS) const {
  const cMapElement_internalUniversalPropertyAndRoutineMapForContext * p = (const cMapElement_internalUniversalPropertyAndRoutineMapForContext *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_internalUniversalPropertyAndRoutineMapForContext) ;
  return GALGAS_internalUniversalPropertyAndRoutineMapForContext_2D_element (p->mProperty_lkey, p->mProperty_mObjectState, p->mProperty_mObjectShouldBeValuedAtEndOfScope, p->mProperty_mPossibleValuedObject, p->mProperty_mRoutineSignatureMapForContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_internalUniversalPropertyAndRoutineMapForContext::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_valuedObjectState cEnumerator_internalUniversalPropertyAndRoutineMapForContext::current_mObjectState (LOCATION_ARGS) const {
  const cMapElement_internalUniversalPropertyAndRoutineMapForContext * p = (const cMapElement_internalUniversalPropertyAndRoutineMapForContext *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_internalUniversalPropertyAndRoutineMapForContext) ;
  return p->mProperty_mObjectState ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_internalUniversalPropertyAndRoutineMapForContext::current_mObjectShouldBeValuedAtEndOfScope (LOCATION_ARGS) const {
  const cMapElement_internalUniversalPropertyAndRoutineMapForContext * p = (const cMapElement_internalUniversalPropertyAndRoutineMapForContext *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_internalUniversalPropertyAndRoutineMapForContext) ;
  return p->mProperty_mObjectShouldBeValuedAtEndOfScope ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_possibleValuedObject cEnumerator_internalUniversalPropertyAndRoutineMapForContext::current_mPossibleValuedObject (LOCATION_ARGS) const {
  const cMapElement_internalUniversalPropertyAndRoutineMapForContext * p = (const cMapElement_internalUniversalPropertyAndRoutineMapForContext *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_internalUniversalPropertyAndRoutineMapForContext) ;
  return p->mProperty_mPossibleValuedObject ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineSignatureMapForContext cEnumerator_internalUniversalPropertyAndRoutineMapForContext::current_mRoutineSignatureMapForContext (LOCATION_ARGS) const {
  const cMapElement_internalUniversalPropertyAndRoutineMapForContext * p = (const cMapElement_internalUniversalPropertyAndRoutineMapForContext *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_internalUniversalPropertyAndRoutineMapForContext) ;
  return p->mProperty_mRoutineSignatureMapForContext ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               @internalUniversalPropertyAndRoutineMapForContext type                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_internalUniversalPropertyAndRoutineMapForContext ("internalUniversalPropertyAndRoutineMapForContext",
                                                                         NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_internalUniversalPropertyAndRoutineMapForContext::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_internalUniversalPropertyAndRoutineMapForContext ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_internalUniversalPropertyAndRoutineMapForContext::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_internalUniversalPropertyAndRoutineMapForContext (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_internalUniversalPropertyAndRoutineMapForContext GALGAS_internalUniversalPropertyAndRoutineMapForContext::extractObject (const GALGAS_object & inObject,
                                                                                                                                C_Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_internalUniversalPropertyAndRoutineMapForContext result ;
  const GALGAS_internalUniversalPropertyAndRoutineMapForContext * p = (const GALGAS_internalUniversalPropertyAndRoutineMapForContext *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_internalUniversalPropertyAndRoutineMapForContext *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("internalUniversalPropertyAndRoutineMapForContext", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Class for element of '@scopeStack' list                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_scopeStack : public cCollectionElement {
  public : GALGAS_scopeStack_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_scopeStack (const GALGAS_scopeKind & in_mScopeKind,
                                          const GALGAS_bool & in_mFirstBranch,
                                          const GALGAS_referenceStateMap & in_mInitialStateMap,
                                          const GALGAS_referenceStateMap & in_mReferenceStateMap,
                                          const GALGAS_lstringlist & in_mObjectList
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

cCollectionElement_scopeStack::cCollectionElement_scopeStack (const GALGAS_scopeKind & in_mScopeKind,
                                                              const GALGAS_bool & in_mFirstBranch,
                                                              const GALGAS_referenceStateMap & in_mInitialStateMap,
                                                              const GALGAS_referenceStateMap & in_mReferenceStateMap,
                                                              const GALGAS_lstringlist & in_mObjectList
                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mScopeKind, in_mFirstBranch, in_mInitialStateMap, in_mReferenceStateMap, in_mObjectList) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_scopeStack::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_scopeStack::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_scopeStack (mObject.mProperty_mScopeKind, mObject.mProperty_mFirstBranch, mObject.mProperty_mInitialStateMap, mObject.mProperty_mReferenceStateMap, mObject.mProperty_mObjectList COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_scopeStack::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mScopeKind" ":" ;
  mObject.mProperty_mScopeKind.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFirstBranch" ":" ;
  mObject.mProperty_mFirstBranch.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInitialStateMap" ":" ;
  mObject.mProperty_mInitialStateMap.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mReferenceStateMap" ":" ;
  mObject.mProperty_mReferenceStateMap.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mObjectList" ":" ;
  mObject.mProperty_mObjectList.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_scopeStack::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_scopeStack * operand = (cCollectionElement_scopeStack *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_scopeStack) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_scopeStack::GALGAS_scopeStack (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_scopeStack::GALGAS_scopeStack (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_scopeStack GALGAS_scopeStack::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_scopeStack  (capCollectionElementArray ()) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_scopeStack GALGAS_scopeStack::constructor_listWithValue (const GALGAS_scopeKind & inOperand0,
                                                                const GALGAS_bool & inOperand1,
                                                                const GALGAS_referenceStateMap & inOperand2,
                                                                const GALGAS_referenceStateMap & inOperand3,
                                                                const GALGAS_lstringlist & inOperand4
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_scopeStack result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_scopeStack (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_scopeStack::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_scopeStack::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                   const GALGAS_scopeKind & in_mScopeKind,
                                                   const GALGAS_bool & in_mFirstBranch,
                                                   const GALGAS_referenceStateMap & in_mInitialStateMap,
                                                   const GALGAS_referenceStateMap & in_mReferenceStateMap,
                                                   const GALGAS_lstringlist & in_mObjectList
                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_scopeStack * p = NULL ;
  macroMyNew (p, cCollectionElement_scopeStack (in_mScopeKind,
                                                in_mFirstBranch,
                                                in_mInitialStateMap,
                                                in_mReferenceStateMap,
                                                in_mObjectList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_scopeStack::addAssign_operation (const GALGAS_scopeKind & inOperand0,
                                             const GALGAS_bool & inOperand1,
                                             const GALGAS_referenceStateMap & inOperand2,
                                             const GALGAS_referenceStateMap & inOperand3,
                                             const GALGAS_lstringlist & inOperand4
                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_scopeStack (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_scopeStack::setter_insertAtIndex (const GALGAS_scopeKind inOperand0,
                                              const GALGAS_bool inOperand1,
                                              const GALGAS_referenceStateMap inOperand2,
                                              const GALGAS_referenceStateMap inOperand3,
                                              const GALGAS_lstringlist inOperand4,
                                              const GALGAS_uint inInsertionIndex,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_scopeStack (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_scopeStack::setter_removeAtIndex (GALGAS_scopeKind & outOperand0,
                                              GALGAS_bool & outOperand1,
                                              GALGAS_referenceStateMap & outOperand2,
                                              GALGAS_referenceStateMap & outOperand3,
                                              GALGAS_lstringlist & outOperand4,
                                              const GALGAS_uint inRemoveIndex,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_scopeStack * p = (cCollectionElement_scopeStack *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      outOperand4.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_scopeStack) ;
      outOperand0 = p->mObject.mProperty_mScopeKind ;
      outOperand1 = p->mObject.mProperty_mFirstBranch ;
      outOperand2 = p->mObject.mProperty_mInitialStateMap ;
      outOperand3 = p->mObject.mProperty_mReferenceStateMap ;
      outOperand4 = p->mObject.mProperty_mObjectList ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_scopeStack::setter_popFirst (GALGAS_scopeKind & outOperand0,
                                         GALGAS_bool & outOperand1,
                                         GALGAS_referenceStateMap & outOperand2,
                                         GALGAS_referenceStateMap & outOperand3,
                                         GALGAS_lstringlist & outOperand4,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_scopeStack * p = (cCollectionElement_scopeStack *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_scopeStack) ;
    outOperand0 = p->mObject.mProperty_mScopeKind ;
    outOperand1 = p->mObject.mProperty_mFirstBranch ;
    outOperand2 = p->mObject.mProperty_mInitialStateMap ;
    outOperand3 = p->mObject.mProperty_mReferenceStateMap ;
    outOperand4 = p->mObject.mProperty_mObjectList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_scopeStack::setter_popLast (GALGAS_scopeKind & outOperand0,
                                        GALGAS_bool & outOperand1,
                                        GALGAS_referenceStateMap & outOperand2,
                                        GALGAS_referenceStateMap & outOperand3,
                                        GALGAS_lstringlist & outOperand4,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_scopeStack * p = (cCollectionElement_scopeStack *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_scopeStack) ;
    outOperand0 = p->mObject.mProperty_mScopeKind ;
    outOperand1 = p->mObject.mProperty_mFirstBranch ;
    outOperand2 = p->mObject.mProperty_mInitialStateMap ;
    outOperand3 = p->mObject.mProperty_mReferenceStateMap ;
    outOperand4 = p->mObject.mProperty_mObjectList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_scopeStack::method_first (GALGAS_scopeKind & outOperand0,
                                      GALGAS_bool & outOperand1,
                                      GALGAS_referenceStateMap & outOperand2,
                                      GALGAS_referenceStateMap & outOperand3,
                                      GALGAS_lstringlist & outOperand4,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_scopeStack * p = (cCollectionElement_scopeStack *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_scopeStack) ;
    outOperand0 = p->mObject.mProperty_mScopeKind ;
    outOperand1 = p->mObject.mProperty_mFirstBranch ;
    outOperand2 = p->mObject.mProperty_mInitialStateMap ;
    outOperand3 = p->mObject.mProperty_mReferenceStateMap ;
    outOperand4 = p->mObject.mProperty_mObjectList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_scopeStack::method_last (GALGAS_scopeKind & outOperand0,
                                     GALGAS_bool & outOperand1,
                                     GALGAS_referenceStateMap & outOperand2,
                                     GALGAS_referenceStateMap & outOperand3,
                                     GALGAS_lstringlist & outOperand4,
                                     C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_scopeStack * p = (cCollectionElement_scopeStack *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_scopeStack) ;
    outOperand0 = p->mObject.mProperty_mScopeKind ;
    outOperand1 = p->mObject.mProperty_mFirstBranch ;
    outOperand2 = p->mObject.mProperty_mInitialStateMap ;
    outOperand3 = p->mObject.mProperty_mReferenceStateMap ;
    outOperand4 = p->mObject.mProperty_mObjectList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_scopeStack GALGAS_scopeStack::add_operation (const GALGAS_scopeStack & inOperand,
                                                    C_Compiler * /* inCompiler */
                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_scopeStack result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_scopeStack GALGAS_scopeStack::getter_subListWithRange (const GALGAS_range & inRange,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_scopeStack result = GALGAS_scopeStack::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_scopeStack GALGAS_scopeStack::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_scopeStack result = GALGAS_scopeStack::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_scopeStack GALGAS_scopeStack::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_scopeStack result = GALGAS_scopeStack::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_scopeStack::plusAssign_operation (const GALGAS_scopeStack inOperand,
                                              C_Compiler * /* inCompiler */
                                              COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_scopeKind GALGAS_scopeStack::getter_mScopeKindAtIndex (const GALGAS_uint & inIndex,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_scopeStack * p = (cCollectionElement_scopeStack *) attributes.ptr () ;
  GALGAS_scopeKind result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_scopeStack) ;
    result = p->mObject.mProperty_mScopeKind ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_scopeStack::getter_mFirstBranchAtIndex (const GALGAS_uint & inIndex,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_scopeStack * p = (cCollectionElement_scopeStack *) attributes.ptr () ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_scopeStack) ;
    result = p->mObject.mProperty_mFirstBranch ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_referenceStateMap GALGAS_scopeStack::getter_mInitialStateMapAtIndex (const GALGAS_uint & inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_scopeStack * p = (cCollectionElement_scopeStack *) attributes.ptr () ;
  GALGAS_referenceStateMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_scopeStack) ;
    result = p->mObject.mProperty_mInitialStateMap ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_referenceStateMap GALGAS_scopeStack::getter_mReferenceStateMapAtIndex (const GALGAS_uint & inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_scopeStack * p = (cCollectionElement_scopeStack *) attributes.ptr () ;
  GALGAS_referenceStateMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_scopeStack) ;
    result = p->mObject.mProperty_mReferenceStateMap ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_scopeStack::getter_mObjectListAtIndex (const GALGAS_uint & inIndex,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_scopeStack * p = (cCollectionElement_scopeStack *) attributes.ptr () ;
  GALGAS_lstringlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_scopeStack) ;
    result = p->mObject.mProperty_mObjectList ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_scopeStack::cEnumerator_scopeStack (const GALGAS_scopeStack & inEnumeratedObject,
                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_scopeStack_2D_element cEnumerator_scopeStack::current (LOCATION_ARGS) const {
  const cCollectionElement_scopeStack * p = (const cCollectionElement_scopeStack *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_scopeStack) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_scopeKind cEnumerator_scopeStack::current_mScopeKind (LOCATION_ARGS) const {
  const cCollectionElement_scopeStack * p = (const cCollectionElement_scopeStack *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_scopeStack) ;
  return p->mObject.mProperty_mScopeKind ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_scopeStack::current_mFirstBranch (LOCATION_ARGS) const {
  const cCollectionElement_scopeStack * p = (const cCollectionElement_scopeStack *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_scopeStack) ;
  return p->mObject.mProperty_mFirstBranch ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_referenceStateMap cEnumerator_scopeStack::current_mInitialStateMap (LOCATION_ARGS) const {
  const cCollectionElement_scopeStack * p = (const cCollectionElement_scopeStack *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_scopeStack) ;
  return p->mObject.mProperty_mInitialStateMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_referenceStateMap cEnumerator_scopeStack::current_mReferenceStateMap (LOCATION_ARGS) const {
  const cCollectionElement_scopeStack * p = (const cCollectionElement_scopeStack *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_scopeStack) ;
  return p->mObject.mProperty_mReferenceStateMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist cEnumerator_scopeStack::current_mObjectList (LOCATION_ARGS) const {
  const cCollectionElement_scopeStack * p = (const cCollectionElement_scopeStack *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_scopeStack) ;
  return p->mObject.mProperty_mObjectList ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  @scopeStack type                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_scopeStack ("scopeStack",
                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_scopeStack::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_scopeStack ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_scopeStack::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_scopeStack (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_scopeStack GALGAS_scopeStack::extractObject (const GALGAS_object & inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  GALGAS_scopeStack result ;
  const GALGAS_scopeStack * p = (const GALGAS_scopeStack *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_scopeStack *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("scopeStack", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_valuedObjectState::GALGAS_valuedObjectState (void) :
mEnum (kNotBuilt) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_valuedObjectState GALGAS_valuedObjectState::constructor_noValue (UNUSED_LOCATION_ARGS) {
  GALGAS_valuedObjectState result ;
  result.mEnum = kEnum_noValue ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_valuedObjectState GALGAS_valuedObjectState::constructor_hasUnreadValue (UNUSED_LOCATION_ARGS) {
  GALGAS_valuedObjectState result ;
  result.mEnum = kEnum_hasUnreadValue ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_valuedObjectState GALGAS_valuedObjectState::constructor_hasReadValue (UNUSED_LOCATION_ARGS) {
  GALGAS_valuedObjectState result ;
  result.mEnum = kEnum_hasReadValue ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * gEnumNameArrayFor_valuedObjectState [4] = {
  "(not built)",
  "noValue",
  "hasUnreadValue",
  "hasReadValue"
} ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_valuedObjectState::getter_isNoValue (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_noValue == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_valuedObjectState::getter_isHasUnreadValue (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_hasUnreadValue == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_valuedObjectState::getter_isHasReadValue (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_hasReadValue == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_valuedObjectState::description (C_String & ioString,
                                            const int32_t /* inIndentation */) const {
  ioString << "<enum @valuedObjectState: " << gEnumNameArrayFor_valuedObjectState [mEnum] ;
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_valuedObjectState::objectCompare (const GALGAS_valuedObjectState & inOperand) const {
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
//                                               @valuedObjectState type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_valuedObjectState ("valuedObjectState",
                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_valuedObjectState::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_valuedObjectState ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_valuedObjectState::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_valuedObjectState (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_valuedObjectState GALGAS_valuedObjectState::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_valuedObjectState result ;
  const GALGAS_valuedObjectState * p = (const GALGAS_valuedObjectState *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_valuedObjectState *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("valuedObjectState", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_possibleValuedObject_property::cEnumAssociatedValues_possibleValuedObject_property (const GALGAS_bool & inAssociatedValue0,
                                                                                                          const GALGAS_objectIR & inAssociatedValue1
                                                                                                          COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_possibleValuedObject_property::description (C_String & ioString,
                                                                       const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_possibleValuedObject_property::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_possibleValuedObject_property * ptr = dynamic_cast<const cEnumAssociatedValues_possibleValuedObject_property *> (inOperand) ;
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

cEnumAssociatedValues_possibleValuedObject_module::cEnumAssociatedValues_possibleValuedObject_module (const GALGAS_PLMType & inAssociatedValue0
                                                                                                      COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_possibleValuedObject_module::description (C_String & ioString,
                                                                     const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_possibleValuedObject_module::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_possibleValuedObject_module * ptr = dynamic_cast<const cEnumAssociatedValues_possibleValuedObject_module *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_possibleValuedObject_register::cEnumAssociatedValues_possibleValuedObject_register (const GALGAS_bool & inAssociatedValue0,
                                                                                                          const GALGAS_bool & inAssociatedValue1,
                                                                                                          const GALGAS_objectIR & inAssociatedValue2
                                                                                                          COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1),
mAssociatedValue2 (inAssociatedValue2) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_possibleValuedObject_register::description (C_String & ioString,
                                                                       const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  mAssociatedValue2.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_possibleValuedObject_register::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_possibleValuedObject_register * ptr = dynamic_cast<const cEnumAssociatedValues_possibleValuedObject_register *> (inOperand) ;
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

cEnumAssociatedValues_possibleValuedObject_globalConstant::cEnumAssociatedValues_possibleValuedObject_globalConstant (const GALGAS_objectIR & inAssociatedValue0
                                                                                                                      COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_possibleValuedObject_globalConstant::description (C_String & ioString,
                                                                             const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_possibleValuedObject_globalConstant::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_possibleValuedObject_globalConstant * ptr = dynamic_cast<const cEnumAssociatedValues_possibleValuedObject_globalConstant *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_possibleValuedObject_localConstant::cEnumAssociatedValues_possibleValuedObject_localConstant (const GALGAS_objectIR & inAssociatedValue0
                                                                                                                    COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_possibleValuedObject_localConstant::description (C_String & ioString,
                                                                            const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_possibleValuedObject_localConstant::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_possibleValuedObject_localConstant * ptr = dynamic_cast<const cEnumAssociatedValues_possibleValuedObject_localConstant *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_possibleValuedObject_globalVariableReference::cEnumAssociatedValues_possibleValuedObject_globalVariableReference (const GALGAS_bool & inAssociatedValue0,
                                                                                                                                        const GALGAS_objectIR & inAssociatedValue1
                                                                                                                                        COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_possibleValuedObject_globalVariableReference::description (C_String & ioString,
                                                                                      const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_possibleValuedObject_globalVariableReference::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_possibleValuedObject_globalVariableReference * ptr = dynamic_cast<const cEnumAssociatedValues_possibleValuedObject_globalVariableReference *> (inOperand) ;
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

cEnumAssociatedValues_possibleValuedObject_localVariableReference::cEnumAssociatedValues_possibleValuedObject_localVariableReference (const GALGAS_objectIR & inAssociatedValue0
                                                                                                                                      COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_possibleValuedObject_localVariableReference::description (C_String & ioString,
                                                                                     const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_possibleValuedObject_localVariableReference::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_possibleValuedObject_localVariableReference * ptr = dynamic_cast<const cEnumAssociatedValues_possibleValuedObject_localVariableReference *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_possibleValuedObject::GALGAS_possibleValuedObject (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_possibleValuedObject GALGAS_possibleValuedObject::constructor_undefined (UNUSED_LOCATION_ARGS) {
  GALGAS_possibleValuedObject result ;
  result.mEnum = kEnum_undefined ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_possibleValuedObject GALGAS_possibleValuedObject::constructor_property (const GALGAS_bool & inAssociatedValue0,
                                                                               const GALGAS_objectIR & inAssociatedValue1
                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_possibleValuedObject result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_property ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_possibleValuedObject_property (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_possibleValuedObject GALGAS_possibleValuedObject::constructor_module (const GALGAS_PLMType & inAssociatedValue0
                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_possibleValuedObject result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_module ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_possibleValuedObject_module (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_possibleValuedObject GALGAS_possibleValuedObject::constructor_register (const GALGAS_bool & inAssociatedValue0,
                                                                               const GALGAS_bool & inAssociatedValue1,
                                                                               const GALGAS_objectIR & inAssociatedValue2
                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_possibleValuedObject result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid () && inAssociatedValue2.isValid ()) {
    result.mEnum = kEnum_register ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_possibleValuedObject_register (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_possibleValuedObject GALGAS_possibleValuedObject::constructor_globalConstant (const GALGAS_objectIR & inAssociatedValue0
                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_possibleValuedObject result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_globalConstant ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_possibleValuedObject_globalConstant (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_possibleValuedObject GALGAS_possibleValuedObject::constructor_localConstant (const GALGAS_objectIR & inAssociatedValue0
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_possibleValuedObject result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_localConstant ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_possibleValuedObject_localConstant (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_possibleValuedObject GALGAS_possibleValuedObject::constructor_globalVariableReference (const GALGAS_bool & inAssociatedValue0,
                                                                                              const GALGAS_objectIR & inAssociatedValue1
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_possibleValuedObject result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_globalVariableReference ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_possibleValuedObject_globalVariableReference (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_possibleValuedObject GALGAS_possibleValuedObject::constructor_localVariableReference (const GALGAS_objectIR & inAssociatedValue0
                                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_possibleValuedObject result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_localVariableReference ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_possibleValuedObject_localVariableReference (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_possibleValuedObject::method_property (GALGAS_bool & outAssociatedValue0,
                                                   GALGAS_objectIR & outAssociatedValue1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_property) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    C_String s ;
    s << "method @possibleValuedObject property invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_possibleValuedObject_property * ptr = (const cEnumAssociatedValues_possibleValuedObject_property *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_possibleValuedObject::method_module (GALGAS_PLMType & outAssociatedValue0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_module) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @possibleValuedObject module invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_possibleValuedObject_module * ptr = (const cEnumAssociatedValues_possibleValuedObject_module *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_possibleValuedObject::method_register (GALGAS_bool & outAssociatedValue0,
                                                   GALGAS_bool & outAssociatedValue1,
                                                   GALGAS_objectIR & outAssociatedValue2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_register) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    outAssociatedValue2.drop () ;
    C_String s ;
    s << "method @possibleValuedObject register invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_possibleValuedObject_register * ptr = (const cEnumAssociatedValues_possibleValuedObject_register *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_possibleValuedObject::method_globalConstant (GALGAS_objectIR & outAssociatedValue0,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_globalConstant) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @possibleValuedObject globalConstant invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_possibleValuedObject_globalConstant * ptr = (const cEnumAssociatedValues_possibleValuedObject_globalConstant *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_possibleValuedObject::method_localConstant (GALGAS_objectIR & outAssociatedValue0,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_localConstant) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @possibleValuedObject localConstant invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_possibleValuedObject_localConstant * ptr = (const cEnumAssociatedValues_possibleValuedObject_localConstant *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_possibleValuedObject::method_globalVariableReference (GALGAS_bool & outAssociatedValue0,
                                                                  GALGAS_objectIR & outAssociatedValue1,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_globalVariableReference) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    C_String s ;
    s << "method @possibleValuedObject globalVariableReference invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_possibleValuedObject_globalVariableReference * ptr = (const cEnumAssociatedValues_possibleValuedObject_globalVariableReference *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_possibleValuedObject::method_localVariableReference (GALGAS_objectIR & outAssociatedValue0,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_localVariableReference) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @possibleValuedObject localVariableReference invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_possibleValuedObject_localVariableReference * ptr = (const cEnumAssociatedValues_possibleValuedObject_localVariableReference *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * gEnumNameArrayFor_possibleValuedObject [9] = {
  "(not built)",
  "undefined",
  "property",
  "module",
  "register",
  "globalConstant",
  "localConstant",
  "globalVariableReference",
  "localVariableReference"
} ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_possibleValuedObject::getter_isUndefined (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_undefined == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_possibleValuedObject::getter_isProperty (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_property == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_possibleValuedObject::getter_isModule (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_module == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_possibleValuedObject::getter_isRegister (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_register == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_possibleValuedObject::getter_isGlobalConstant (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_globalConstant == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_possibleValuedObject::getter_isLocalConstant (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_localConstant == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_possibleValuedObject::getter_isGlobalVariableReference (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_globalVariableReference == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_possibleValuedObject::getter_isLocalVariableReference (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_localVariableReference == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_possibleValuedObject::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "<enum @possibleValuedObject: " << gEnumNameArrayFor_possibleValuedObject [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_possibleValuedObject::objectCompare (const GALGAS_possibleValuedObject & inOperand) const {
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
//                                             @possibleValuedObject type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_possibleValuedObject ("possibleValuedObject",
                                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_possibleValuedObject::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_possibleValuedObject ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_possibleValuedObject::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_possibleValuedObject (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_possibleValuedObject GALGAS_possibleValuedObject::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_possibleValuedObject result ;
  const GALGAS_possibleValuedObject * p = (const GALGAS_possibleValuedObject *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_possibleValuedObject *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("possibleValuedObject", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_routineSignatureMapForContext::cMapElement_routineSignatureMapForContext (const GALGAS_lstring & inKey,
                                                                                      const GALGAS_lstring & in_mLLVMInvocationRoutineName,
                                                                                      const GALGAS_routineDescriptor & in_mDescriptor
                                                                                      COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mLLVMInvocationRoutineName (in_mLLVMInvocationRoutineName),
mProperty_mDescriptor (in_mDescriptor) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_routineSignatureMapForContext::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mLLVMInvocationRoutineName.isValid () && mProperty_mDescriptor.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_routineSignatureMapForContext::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_routineSignatureMapForContext (mProperty_lkey, mProperty_mLLVMInvocationRoutineName, mProperty_mDescriptor COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_routineSignatureMapForContext::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLLVMInvocationRoutineName" ":" ;
  mProperty_mLLVMInvocationRoutineName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mDescriptor" ":" ;
  mProperty_mDescriptor.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_routineSignatureMapForContext::compare (const cCollectionElement * inOperand) const {
  cMapElement_routineSignatureMapForContext * operand = (cMapElement_routineSignatureMapForContext *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mLLVMInvocationRoutineName.objectCompare (operand->mProperty_mLLVMInvocationRoutineName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mDescriptor.objectCompare (operand->mProperty_mDescriptor) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineSignatureMapForContext::GALGAS_routineSignatureMapForContext (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineSignatureMapForContext::GALGAS_routineSignatureMapForContext (const GALGAS_routineSignatureMapForContext & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineSignatureMapForContext & GALGAS_routineSignatureMapForContext::operator = (const GALGAS_routineSignatureMapForContext & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineSignatureMapForContext GALGAS_routineSignatureMapForContext::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_routineSignatureMapForContext result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineSignatureMapForContext GALGAS_routineSignatureMapForContext::constructor_mapWithMapToOverride (const GALGAS_routineSignatureMapForContext & inMapToOverride
                                                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_routineSignatureMapForContext result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineSignatureMapForContext GALGAS_routineSignatureMapForContext::getter_overriddenMap (C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const {
  GALGAS_routineSignatureMapForContext result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineSignatureMapForContext::addAssign_operation (const GALGAS_lstring & inKey,
                                                                const GALGAS_lstring & inArgument0,
                                                                const GALGAS_routineDescriptor & inArgument1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  cMapElement_routineSignatureMapForContext * p = NULL ;
  macroMyNew (p, cMapElement_routineSignatureMapForContext (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@routineSignatureMapForContext insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineSignatureMapForContext::setter_insertKey (GALGAS_lstring inKey,
                                                             GALGAS_lstring inArgument0,
                                                             GALGAS_routineDescriptor inArgument1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cMapElement_routineSignatureMapForContext * p = NULL ;
  macroMyNew (p, cMapElement_routineSignatureMapForContext (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' routine signature is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_routineSignatureMapForContext_searchKey = "there is no '%K' routine signature" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineSignatureMapForContext::method_searchKey (GALGAS_lstring inKey,
                                                             GALGAS_lstring & outArgument0,
                                                             GALGAS_routineDescriptor & outArgument1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  const cMapElement_routineSignatureMapForContext * p = (const cMapElement_routineSignatureMapForContext *) performSearch (inKey,
                                                                                                                           inCompiler,
                                                                                                                           kSearchErrorMessage_routineSignatureMapForContext_searchKey
                                                                                                                           COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_routineSignatureMapForContext) ;
    outArgument0 = p->mProperty_mLLVMInvocationRoutineName ;
    outArgument1 = p->mProperty_mDescriptor ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_routineSignatureMapForContext::getter_mLLVMInvocationRoutineNameForKey (const GALGAS_string & inKey,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_routineSignatureMapForContext * p = (const cMapElement_routineSignatureMapForContext *) attributes ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_routineSignatureMapForContext) ;
    result = p->mProperty_mLLVMInvocationRoutineName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineDescriptor GALGAS_routineSignatureMapForContext::getter_mDescriptorForKey (const GALGAS_string & inKey,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_routineSignatureMapForContext * p = (const cMapElement_routineSignatureMapForContext *) attributes ;
  GALGAS_routineDescriptor result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_routineSignatureMapForContext) ;
    result = p->mProperty_mDescriptor ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineSignatureMapForContext::setter_setMLLVMInvocationRoutineNameForKey (GALGAS_lstring inAttributeValue,
                                                                                       GALGAS_string inKey,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_routineSignatureMapForContext * p = (cMapElement_routineSignatureMapForContext *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_routineSignatureMapForContext) ;
    p->mProperty_mLLVMInvocationRoutineName = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineSignatureMapForContext::setter_setMDescriptorForKey (GALGAS_routineDescriptor inAttributeValue,
                                                                        GALGAS_string inKey,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_routineSignatureMapForContext * p = (cMapElement_routineSignatureMapForContext *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_routineSignatureMapForContext) ;
    p->mProperty_mDescriptor = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_routineSignatureMapForContext * GALGAS_routineSignatureMapForContext::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                                     const GALGAS_string & inKey
                                                                                                                     COMMA_LOCATION_ARGS) {
  cMapElement_routineSignatureMapForContext * result = (cMapElement_routineSignatureMapForContext *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_routineSignatureMapForContext) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_routineSignatureMapForContext::cEnumerator_routineSignatureMapForContext (const GALGAS_routineSignatureMapForContext & inEnumeratedObject,
                                                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineSignatureMapForContext_2D_element cEnumerator_routineSignatureMapForContext::current (LOCATION_ARGS) const {
  const cMapElement_routineSignatureMapForContext * p = (const cMapElement_routineSignatureMapForContext *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_routineSignatureMapForContext) ;
  return GALGAS_routineSignatureMapForContext_2D_element (p->mProperty_lkey, p->mProperty_mLLVMInvocationRoutineName, p->mProperty_mDescriptor) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_routineSignatureMapForContext::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_routineSignatureMapForContext::current_mLLVMInvocationRoutineName (LOCATION_ARGS) const {
  const cMapElement_routineSignatureMapForContext * p = (const cMapElement_routineSignatureMapForContext *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_routineSignatureMapForContext) ;
  return p->mProperty_mLLVMInvocationRoutineName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineDescriptor cEnumerator_routineSignatureMapForContext::current_mDescriptor (LOCATION_ARGS) const {
  const cMapElement_routineSignatureMapForContext * p = (const cMapElement_routineSignatureMapForContext *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_routineSignatureMapForContext) ;
  return p->mProperty_mDescriptor ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @routineSignatureMapForContext type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_routineSignatureMapForContext ("routineSignatureMapForContext",
                                                      NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_routineSignatureMapForContext::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineSignatureMapForContext ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_routineSignatureMapForContext::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_routineSignatureMapForContext (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineSignatureMapForContext GALGAS_routineSignatureMapForContext::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_routineSignatureMapForContext result ;
  const GALGAS_routineSignatureMapForContext * p = (const GALGAS_routineSignatureMapForContext *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_routineSignatureMapForContext *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineSignatureMapForContext", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_scopeKind::GALGAS_scopeKind (void) :
mEnum (kNotBuilt) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_scopeKind GALGAS_scopeKind::constructor_selectScope (UNUSED_LOCATION_ARGS) {
  GALGAS_scopeKind result ;
  result.mEnum = kEnum_selectScope ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_scopeKind GALGAS_scopeKind::constructor_repeatScope (UNUSED_LOCATION_ARGS) {
  GALGAS_scopeKind result ;
  result.mEnum = kEnum_repeatScope ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * gEnumNameArrayFor_scopeKind [3] = {
  "(not built)",
  "selectScope",
  "repeatScope"
} ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_scopeKind::getter_isSelectScope (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_selectScope == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_scopeKind::getter_isRepeatScope (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_repeatScope == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_scopeKind::description (C_String & ioString,
                                    const int32_t /* inIndentation */) const {
  ioString << "<enum @scopeKind: " << gEnumNameArrayFor_scopeKind [mEnum] ;
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_scopeKind::objectCompare (const GALGAS_scopeKind & inOperand) const {
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
//                                                   @scopeKind type                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_scopeKind ("scopeKind",
                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_scopeKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_scopeKind ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_scopeKind::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_scopeKind (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_scopeKind GALGAS_scopeKind::extractObject (const GALGAS_object & inObject,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  GALGAS_scopeKind result ;
  const GALGAS_scopeKind * p = (const GALGAS_scopeKind *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_scopeKind *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("scopeKind", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_referenceStateMap::cMapElement_referenceStateMap (const GALGAS_lstring & inKey,
                                                              const GALGAS_valuedObjectState & in_mState
                                                              COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mState (in_mState) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_referenceStateMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mState.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_referenceStateMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_referenceStateMap (mProperty_lkey, mProperty_mState COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_referenceStateMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mState" ":" ;
  mProperty_mState.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_referenceStateMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_referenceStateMap * operand = (cMapElement_referenceStateMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mState.objectCompare (operand->mProperty_mState) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_referenceStateMap::GALGAS_referenceStateMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_referenceStateMap::GALGAS_referenceStateMap (const GALGAS_referenceStateMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_referenceStateMap & GALGAS_referenceStateMap::operator = (const GALGAS_referenceStateMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_referenceStateMap GALGAS_referenceStateMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_referenceStateMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_referenceStateMap GALGAS_referenceStateMap::constructor_mapWithMapToOverride (const GALGAS_referenceStateMap & inMapToOverride
                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_referenceStateMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_referenceStateMap GALGAS_referenceStateMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  GALGAS_referenceStateMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_referenceStateMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                    const GALGAS_valuedObjectState & inArgument0,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  cMapElement_referenceStateMap * p = NULL ;
  macroMyNew (p, cMapElement_referenceStateMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@referenceStateMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_referenceStateMap::setter_insertKey (GALGAS_lstring inKey,
                                                 GALGAS_valuedObjectState inArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  cMapElement_referenceStateMap * p = NULL ;
  macroMyNew (p, cMapElement_referenceStateMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "INTERNAL ERROR" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_referenceStateMap_searchKey = "INTERNAL ERROR" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_referenceStateMap::method_searchKey (GALGAS_lstring inKey,
                                                 GALGAS_valuedObjectState & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  const cMapElement_referenceStateMap * p = (const cMapElement_referenceStateMap *) performSearch (inKey,
                                                                                                   inCompiler,
                                                                                                   kSearchErrorMessage_referenceStateMap_searchKey
                                                                                                   COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_referenceStateMap) ;
    outArgument0 = p->mProperty_mState ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_valuedObjectState GALGAS_referenceStateMap::getter_mStateForKey (const GALGAS_string & inKey,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_referenceStateMap * p = (const cMapElement_referenceStateMap *) attributes ;
  GALGAS_valuedObjectState result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_referenceStateMap) ;
    result = p->mProperty_mState ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_referenceStateMap::setter_setMStateForKey (GALGAS_valuedObjectState inAttributeValue,
                                                       GALGAS_string inKey,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_referenceStateMap * p = (cMapElement_referenceStateMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_referenceStateMap) ;
    p->mProperty_mState = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_referenceStateMap * GALGAS_referenceStateMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                             const GALGAS_string & inKey
                                                                                             COMMA_LOCATION_ARGS) {
  cMapElement_referenceStateMap * result = (cMapElement_referenceStateMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_referenceStateMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_referenceStateMap::cEnumerator_referenceStateMap (const GALGAS_referenceStateMap & inEnumeratedObject,
                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_referenceStateMap_2D_element cEnumerator_referenceStateMap::current (LOCATION_ARGS) const {
  const cMapElement_referenceStateMap * p = (const cMapElement_referenceStateMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_referenceStateMap) ;
  return GALGAS_referenceStateMap_2D_element (p->mProperty_lkey, p->mProperty_mState) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_referenceStateMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_valuedObjectState cEnumerator_referenceStateMap::current_mState (LOCATION_ARGS) const {
  const cMapElement_referenceStateMap * p = (const cMapElement_referenceStateMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_referenceStateMap) ;
  return p->mProperty_mState ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @referenceStateMap type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_referenceStateMap ("referenceStateMap",
                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_referenceStateMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_referenceStateMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_referenceStateMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_referenceStateMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_referenceStateMap GALGAS_referenceStateMap::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_referenceStateMap result ;
  const GALGAS_referenceStateMap * p = (const GALGAS_referenceStateMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_referenceStateMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("referenceStateMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Extension Getter '@valuedObjectState string'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string extensionGetter_string (const GALGAS_valuedObjectState & inObject,
                                      C_Compiler * /* inCompiler */
                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_valuedObjectState temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_valuedObjectState::kNotBuilt:
    break ;
  case GALGAS_valuedObjectState::kEnum_noValue:
    {
      result_result = GALGAS_string ("no value") ;
    }
    break ;
  case GALGAS_valuedObjectState::kEnum_hasUnreadValue:
    {
      result_result = GALGAS_string ("unread value") ;
    }
    break ;
  case GALGAS_valuedObjectState::kEnum_hasReadValue:
    {
      result_result = GALGAS_string ("read value") ;
    }
    break ;
  }
//---
  return result_result ;
}




//---------------------------------------------------------------------------------------------------------------------*

cMapElement_unifiedSymbolMapEx::cMapElement_unifiedSymbolMapEx (const GALGAS_lstring & inKey,
                                                                const GALGAS_PLMType & in_type,
                                                                const GALGAS_bool & in_readAccessAllowed,
                                                                const GALGAS_objectIR & in_objectIR,
                                                                const GALGAS_bool & in_copyable,
                                                                const GALGAS_bool & in_canBeUsedAsInputParameter
                                                                COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_type (in_type),
mProperty_readAccessAllowed (in_readAccessAllowed),
mProperty_objectIR (in_objectIR),
mProperty_copyable (in_copyable),
mProperty_canBeUsedAsInputParameter (in_canBeUsedAsInputParameter) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_unifiedSymbolMapEx::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_type.isValid () && mProperty_readAccessAllowed.isValid () && mProperty_objectIR.isValid () && mProperty_copyable.isValid () && mProperty_canBeUsedAsInputParameter.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_unifiedSymbolMapEx::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_unifiedSymbolMapEx (mProperty_lkey, mProperty_type, mProperty_readAccessAllowed, mProperty_objectIR, mProperty_copyable, mProperty_canBeUsedAsInputParameter COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_unifiedSymbolMapEx::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "type" ":" ;
  mProperty_type.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "readAccessAllowed" ":" ;
  mProperty_readAccessAllowed.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "objectIR" ":" ;
  mProperty_objectIR.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "copyable" ":" ;
  mProperty_copyable.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "canBeUsedAsInputParameter" ":" ;
  mProperty_canBeUsedAsInputParameter.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_unifiedSymbolMapEx::compare (const cCollectionElement * inOperand) const {
  cMapElement_unifiedSymbolMapEx * operand = (cMapElement_unifiedSymbolMapEx *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_type.objectCompare (operand->mProperty_type) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_readAccessAllowed.objectCompare (operand->mProperty_readAccessAllowed) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_objectIR.objectCompare (operand->mProperty_objectIR) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_copyable.objectCompare (operand->mProperty_copyable) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_canBeUsedAsInputParameter.objectCompare (operand->mProperty_canBeUsedAsInputParameter) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedSymbolMapEx::GALGAS_unifiedSymbolMapEx (void) :
AC_GALGAS_uniqueMap (kMapAutomatonIssueWarning, "declaration of '%K' variable shadows a variable declared in %L") {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedSymbolMapEx::GALGAS_unifiedSymbolMapEx (const GALGAS_unifiedSymbolMapEx & inSource) :
AC_GALGAS_uniqueMap (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedSymbolMapEx & GALGAS_unifiedSymbolMapEx::operator = (const GALGAS_unifiedSymbolMapEx & inSource) {
  * ((AC_GALGAS_uniqueMap *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedSymbolMapEx GALGAS_unifiedSymbolMapEx::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_unifiedSymbolMapEx result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//  Map automaton states                                                                                               *
//---------------------------------------------------------------------------------------------------------------------*

#ifndef DO_NOT_GENERATE_CHECKINGS
  static const uint32_t kMapStateCount_unifiedSymbolMapEx = 22 ;
#endif
static const uint32_t kMapState_unifiedSymbolMapEx_constantInputFormalArgument = 15 ;
static const uint32_t kMapState_unifiedSymbolMapEx_constantInputFormalArgumentDeclaredAsUnused = 17 ;
static const uint32_t kMapState_unifiedSymbolMapEx_definedLocalVariable = 6 ;
static const uint32_t kMapState_unifiedSymbolMapEx_definedOutputFormalArgument = 10 ;
static const uint32_t kMapState_unifiedSymbolMapEx_droppedInputFormalArgument = 20 ;
static const uint32_t kMapState_unifiedSymbolMapEx_droppedInputOutputFormalArgument = 13 ;
static const uint32_t kMapState_unifiedSymbolMapEx_droppedLocalVariable = 8 ;
static const uint32_t kMapState_unifiedSymbolMapEx_inaccessibleControlRegister = 0 ;
static const uint32_t kMapState_unifiedSymbolMapEx_inputFormalArgumentDeclaredAsUnused = 21 ;
static const uint32_t kMapState_unifiedSymbolMapEx_inputFormalParameter = 18 ;
static const uint32_t kMapState_unifiedSymbolMapEx_inputOutputFormalArgumentDeclaredAsUnused = 14 ;
static const uint32_t kMapState_unifiedSymbolMapEx_localConstant = 3 ;
static const uint32_t kMapState_unifiedSymbolMapEx_module = 1 ;
static const uint32_t kMapState_unifiedSymbolMapEx_undefinedLocalConstant = 4 ;
static const uint32_t kMapState_unifiedSymbolMapEx_undefinedLocalVariable = 5 ;
static const uint32_t kMapState_unifiedSymbolMapEx_undefinedOutputFormalArgument = 9 ;
static const uint32_t kMapState_unifiedSymbolMapEx_unusedInputOutputFormalArgument = 11 ;
static const uint32_t kMapState_unifiedSymbolMapEx_usedConstantInputFormalArgument = 16 ;
static const uint32_t kMapState_unifiedSymbolMapEx_usedInputFormalArgument = 19 ;
static const uint32_t kMapState_unifiedSymbolMapEx_usedInputOutputFormalArgument = 12 ;
static const uint32_t kMapState_unifiedSymbolMapEx_usedLocalConstant = 2 ;
static const uint32_t kMapState_unifiedSymbolMapEx_usedLocalVariable = 7 ;

//---------------------------------------------------------------------------------------------------------------------*
//  Map automaton state names                                                                                          *
//---------------------------------------------------------------------------------------------------------------------*

static const char * kMapStateNames_unifiedSymbolMapEx [22] = {
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

static const uint32_t kMapActionCount_unifiedSymbolMapEx = 7 ;
static const uint32_t kMapAction_unifiedSymbolMapEx_constMethodCall = 4 ;
static const uint32_t kMapAction_unifiedSymbolMapEx_dropAccess = 3 ;
static const uint32_t kMapAction_unifiedSymbolMapEx_methodCall = 5 ;
static const uint32_t kMapAction_unifiedSymbolMapEx_neutralAccess = 6 ;
static const uint32_t kMapAction_unifiedSymbolMapEx_readAccess = 0 ;
static const uint32_t kMapAction_unifiedSymbolMapEx_readWriteAccess = 2 ;
static const uint32_t kMapAction_unifiedSymbolMapEx_writeAccess = 1 ;

//---------------------------------------------------------------------------------------------------------------------*
//  Map automaton transitions                                                                                          *
//---------------------------------------------------------------------------------------------------------------------*

static const cMapAutomatonTransition kMapTransitions_unifiedSymbolMapEx [22 * 7] = {
// State 'inaccessibleControlRegister', index 0 
  {kMapState_unifiedSymbolMapEx_inaccessibleControlRegister /* 0 */, kMapAutomatonIssueError, "the control register is inaccessible"}, // for action 'readAccess', (index 0)
  {kMapState_unifiedSymbolMapEx_inaccessibleControlRegister /* 0 */, kMapAutomatonIssueError, "the control register is inaccessible"}, // for action 'writeAccess', (index 1)
  {kMapState_unifiedSymbolMapEx_inaccessibleControlRegister /* 0 */, kMapAutomatonIssueError, "the control register is inaccessible"}, // for action 'readWriteAccess', (index 2)
  {kMapState_unifiedSymbolMapEx_inaccessibleControlRegister /* 0 */, kMapAutomatonIssueError, "the control register is inaccessible"}, // for action 'dropAccess', (index 3)
  {kMapState_unifiedSymbolMapEx_inaccessibleControlRegister /* 0 */, kMapAutomatonIssueError, "the control register is inaccessible"}, // for action 'constMethodCall', (index 4)
  {kMapState_unifiedSymbolMapEx_inaccessibleControlRegister /* 0 */, kMapAutomatonIssueError, "the control register is inaccessible"}, // for action 'methodCall', (index 5)
  {kMapState_unifiedSymbolMapEx_inaccessibleControlRegister /* 0 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 6)
// State 'module', index 1 
  {kMapState_unifiedSymbolMapEx_module /* 1 */, kMapAutomatonNoIssue, ""}, // for action 'readAccess', (index 0)
  {kMapState_unifiedSymbolMapEx_module /* 1 */, kMapAutomatonIssueError, "a module cannot be written"}, // for action 'writeAccess', (index 1)
  {kMapState_unifiedSymbolMapEx_module /* 1 */, kMapAutomatonNoIssue, ""}, // for action 'readWriteAccess', (index 2)
  {kMapState_unifiedSymbolMapEx_module /* 1 */, kMapAutomatonIssueError, "a module cannot be dropped"}, // for action 'dropAccess', (index 3)
  {kMapState_unifiedSymbolMapEx_module /* 1 */, kMapAutomatonNoIssue, ""}, // for action 'constMethodCall', (index 4)
  {kMapState_unifiedSymbolMapEx_module /* 1 */, kMapAutomatonNoIssue, ""}, // for action 'methodCall', (index 5)
  {kMapState_unifiedSymbolMapEx_module /* 1 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 6)
// State 'usedLocalConstant', index 2 
  {kMapState_unifiedSymbolMapEx_usedLocalConstant /* 2 */, kMapAutomatonNoIssue, ""}, // for action 'readAccess', (index 0)
  {kMapState_unifiedSymbolMapEx_usedLocalConstant /* 2 */, kMapAutomatonIssueError, "a constant cannot be written"}, // for action 'writeAccess', (index 1)
  {kMapState_unifiedSymbolMapEx_usedLocalConstant /* 2 */, kMapAutomatonIssueError, "a constant cannot be modified"}, // for action 'readWriteAccess', (index 2)
  {kMapState_unifiedSymbolMapEx_usedLocalConstant /* 2 */, kMapAutomatonIssueError, "a constant cannot be dropped"}, // for action 'dropAccess', (index 3)
  {kMapState_unifiedSymbolMapEx_usedLocalConstant /* 2 */, kMapAutomatonNoIssue, ""}, // for action 'constMethodCall', (index 4)
  {kMapState_unifiedSymbolMapEx_usedLocalConstant /* 2 */, kMapAutomatonIssueError, "a constant cannot be modified"}, // for action 'methodCall', (index 5)
  {kMapState_unifiedSymbolMapEx_usedLocalConstant /* 2 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 6)
// State 'localConstant', index 3 
  {kMapState_unifiedSymbolMapEx_usedLocalConstant /* 2 */, kMapAutomatonNoIssue, ""}, // for action 'readAccess', (index 0)
  {kMapState_unifiedSymbolMapEx_usedLocalConstant /* 2 */, kMapAutomatonIssueError, "a constant cannot be written"}, // for action 'writeAccess', (index 1)
  {kMapState_unifiedSymbolMapEx_usedLocalConstant /* 2 */, kMapAutomatonIssueError, "a constant cannot be modified"}, // for action 'readWriteAccess', (index 2)
  {kMapState_unifiedSymbolMapEx_usedLocalConstant /* 2 */, kMapAutomatonIssueError, "a constant cannot be dropped"}, // for action 'dropAccess', (index 3)
  {kMapState_unifiedSymbolMapEx_usedLocalConstant /* 2 */, kMapAutomatonNoIssue, ""}, // for action 'constMethodCall', (index 4)
  {kMapState_unifiedSymbolMapEx_usedLocalConstant /* 2 */, kMapAutomatonIssueError, "a constant cannot be modified"}, // for action 'methodCall', (index 5)
  {kMapState_unifiedSymbolMapEx_localConstant /* 3 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 6)
// State 'undefinedLocalConstant', index 4 
  {kMapState_unifiedSymbolMapEx_undefinedLocalConstant /* 4 */, kMapAutomatonIssueError, "the constant is undefined"}, // for action 'readAccess', (index 0)
  {kMapState_unifiedSymbolMapEx_localConstant /* 3 */, kMapAutomatonNoIssue, ""}, // for action 'writeAccess', (index 1)
  {kMapState_unifiedSymbolMapEx_undefinedLocalConstant /* 4 */, kMapAutomatonIssueError, "the constant is undefined"}, // for action 'readWriteAccess', (index 2)
  {kMapState_unifiedSymbolMapEx_undefinedLocalConstant /* 4 */, kMapAutomatonIssueError, "the constant is undefined"}, // for action 'dropAccess', (index 3)
  {kMapState_unifiedSymbolMapEx_undefinedLocalConstant /* 4 */, kMapAutomatonIssueError, "the constant is undefined"}, // for action 'constMethodCall', (index 4)
  {kMapState_unifiedSymbolMapEx_undefinedLocalConstant /* 4 */, kMapAutomatonIssueError, "a constant cannot be modified"}, // for action 'methodCall', (index 5)
  {kMapState_unifiedSymbolMapEx_undefinedLocalConstant /* 4 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 6)
// State 'undefinedLocalVariable', index 5 
  {kMapState_unifiedSymbolMapEx_undefinedLocalVariable /* 5 */, kMapAutomatonIssueError, "an undefined local variable cannot be read"}, // for action 'readAccess', (index 0)
  {kMapState_unifiedSymbolMapEx_definedLocalVariable /* 6 */, kMapAutomatonNoIssue, ""}, // for action 'writeAccess', (index 1)
  {kMapState_unifiedSymbolMapEx_undefinedLocalVariable /* 5 */, kMapAutomatonIssueError, "an undefined local variable cannot be modified"}, // for action 'readWriteAccess', (index 2)
  {kMapState_unifiedSymbolMapEx_undefinedLocalVariable /* 5 */, kMapAutomatonNoIssue, ""}, // for action 'dropAccess', (index 3)
  {kMapState_unifiedSymbolMapEx_undefinedLocalVariable /* 5 */, kMapAutomatonIssueError, "an undefined local variable cannot be read"}, // for action 'constMethodCall', (index 4)
  {kMapState_unifiedSymbolMapEx_undefinedLocalVariable /* 5 */, kMapAutomatonIssueError, "an undefined local variable cannot be modified"}, // for action 'methodCall', (index 5)
  {kMapState_unifiedSymbolMapEx_undefinedLocalVariable /* 5 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 6)
// State 'definedLocalVariable', index 6 
  {kMapState_unifiedSymbolMapEx_usedLocalVariable /* 7 */, kMapAutomatonNoIssue, ""}, // for action 'readAccess', (index 0)
  {kMapState_unifiedSymbolMapEx_definedLocalVariable /* 6 */, kMapAutomatonNoIssue, ""}, // for action 'writeAccess', (index 1)
  {kMapState_unifiedSymbolMapEx_usedLocalVariable /* 7 */, kMapAutomatonNoIssue, ""}, // for action 'readWriteAccess', (index 2)
  {kMapState_unifiedSymbolMapEx_droppedLocalVariable /* 8 */, kMapAutomatonNoIssue, ""}, // for action 'dropAccess', (index 3)
  {kMapState_unifiedSymbolMapEx_usedLocalVariable /* 7 */, kMapAutomatonNoIssue, ""}, // for action 'constMethodCall', (index 4)
  {kMapState_unifiedSymbolMapEx_usedLocalVariable /* 7 */, kMapAutomatonNoIssue, ""}, // for action 'methodCall', (index 5)
  {kMapState_unifiedSymbolMapEx_definedLocalVariable /* 6 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 6)
// State 'usedLocalVariable', index 7 
  {kMapState_unifiedSymbolMapEx_usedLocalVariable /* 7 */, kMapAutomatonNoIssue, ""}, // for action 'readAccess', (index 0)
  {kMapState_unifiedSymbolMapEx_definedLocalVariable /* 6 */, kMapAutomatonNoIssue, ""}, // for action 'writeAccess', (index 1)
  {kMapState_unifiedSymbolMapEx_definedLocalVariable /* 6 */, kMapAutomatonNoIssue, ""}, // for action 'readWriteAccess', (index 2)
  {kMapState_unifiedSymbolMapEx_droppedLocalVariable /* 8 */, kMapAutomatonNoIssue, ""}, // for action 'dropAccess', (index 3)
  {kMapState_unifiedSymbolMapEx_definedLocalVariable /* 6 */, kMapAutomatonNoIssue, ""}, // for action 'constMethodCall', (index 4)
  {kMapState_unifiedSymbolMapEx_definedLocalVariable /* 6 */, kMapAutomatonNoIssue, ""}, // for action 'methodCall', (index 5)
  {kMapState_unifiedSymbolMapEx_usedLocalVariable /* 7 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 6)
// State 'droppedLocalVariable', index 8 
  {kMapState_unifiedSymbolMapEx_droppedLocalVariable /* 8 */, kMapAutomatonIssueError, "a dropped local variable cannot be read"}, // for action 'readAccess', (index 0)
  {kMapState_unifiedSymbolMapEx_definedLocalVariable /* 6 */, kMapAutomatonNoIssue, ""}, // for action 'writeAccess', (index 1)
  {kMapState_unifiedSymbolMapEx_definedLocalVariable /* 6 */, kMapAutomatonIssueError, "a dropped local variable cannot be read"}, // for action 'readWriteAccess', (index 2)
  {kMapState_unifiedSymbolMapEx_droppedLocalVariable /* 8 */, kMapAutomatonNoIssue, ""}, // for action 'dropAccess', (index 3)
  {kMapState_unifiedSymbolMapEx_definedLocalVariable /* 6 */, kMapAutomatonIssueError, "the local variable is dropped"}, // for action 'constMethodCall', (index 4)
  {kMapState_unifiedSymbolMapEx_definedLocalVariable /* 6 */, kMapAutomatonIssueError, "the local variable is dropped"}, // for action 'methodCall', (index 5)
  {kMapState_unifiedSymbolMapEx_droppedLocalVariable /* 8 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 6)
// State 'undefinedOutputFormalArgument', index 9 
  {kMapState_unifiedSymbolMapEx_undefinedOutputFormalArgument /* 9 */, kMapAutomatonIssueError, "an undefined output formal parameter cannot be read"}, // for action 'readAccess', (index 0)
  {kMapState_unifiedSymbolMapEx_definedOutputFormalArgument /* 10 */, kMapAutomatonNoIssue, ""}, // for action 'writeAccess', (index 1)
  {kMapState_unifiedSymbolMapEx_undefinedOutputFormalArgument /* 9 */, kMapAutomatonIssueError, "an undefined output formal parameter cannot be read"}, // for action 'readWriteAccess', (index 2)
  {kMapState_unifiedSymbolMapEx_undefinedOutputFormalArgument /* 9 */, kMapAutomatonNoIssue, ""}, // for action 'dropAccess', (index 3)
  {kMapState_unifiedSymbolMapEx_undefinedOutputFormalArgument /* 9 */, kMapAutomatonNoIssue, ""}, // for action 'constMethodCall', (index 4)
  {kMapState_unifiedSymbolMapEx_undefinedOutputFormalArgument /* 9 */, kMapAutomatonNoIssue, ""}, // for action 'methodCall', (index 5)
  {kMapState_unifiedSymbolMapEx_undefinedOutputFormalArgument /* 9 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 6)
// State 'definedOutputFormalArgument', index 10 
  {kMapState_unifiedSymbolMapEx_definedOutputFormalArgument /* 10 */, kMapAutomatonNoIssue, ""}, // for action 'readAccess', (index 0)
  {kMapState_unifiedSymbolMapEx_definedOutputFormalArgument /* 10 */, kMapAutomatonNoIssue, ""}, // for action 'writeAccess', (index 1)
  {kMapState_unifiedSymbolMapEx_definedOutputFormalArgument /* 10 */, kMapAutomatonNoIssue, ""}, // for action 'readWriteAccess', (index 2)
  {kMapState_unifiedSymbolMapEx_undefinedOutputFormalArgument /* 9 */, kMapAutomatonNoIssue, ""}, // for action 'dropAccess', (index 3)
  {kMapState_unifiedSymbolMapEx_definedOutputFormalArgument /* 10 */, kMapAutomatonNoIssue, ""}, // for action 'constMethodCall', (index 4)
  {kMapState_unifiedSymbolMapEx_definedOutputFormalArgument /* 10 */, kMapAutomatonNoIssue, ""}, // for action 'methodCall', (index 5)
  {kMapState_unifiedSymbolMapEx_definedOutputFormalArgument /* 10 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 6)
// State 'unusedInputOutputFormalArgument', index 11 
  {kMapState_unifiedSymbolMapEx_usedInputOutputFormalArgument /* 12 */, kMapAutomatonNoIssue, ""}, // for action 'readAccess', (index 0)
  {kMapState_unifiedSymbolMapEx_usedInputOutputFormalArgument /* 12 */, kMapAutomatonNoIssue, ""}, // for action 'writeAccess', (index 1)
  {kMapState_unifiedSymbolMapEx_usedInputOutputFormalArgument /* 12 */, kMapAutomatonNoIssue, ""}, // for action 'readWriteAccess', (index 2)
  {kMapState_unifiedSymbolMapEx_droppedInputOutputFormalArgument /* 13 */, kMapAutomatonNoIssue, ""}, // for action 'dropAccess', (index 3)
  {kMapState_unifiedSymbolMapEx_usedInputOutputFormalArgument /* 12 */, kMapAutomatonNoIssue, ""}, // for action 'constMethodCall', (index 4)
  {kMapState_unifiedSymbolMapEx_usedInputOutputFormalArgument /* 12 */, kMapAutomatonNoIssue, ""}, // for action 'methodCall', (index 5)
  {kMapState_unifiedSymbolMapEx_unusedInputOutputFormalArgument /* 11 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 6)
// State 'usedInputOutputFormalArgument', index 12 
  {kMapState_unifiedSymbolMapEx_usedInputOutputFormalArgument /* 12 */, kMapAutomatonNoIssue, ""}, // for action 'readAccess', (index 0)
  {kMapState_unifiedSymbolMapEx_usedInputOutputFormalArgument /* 12 */, kMapAutomatonNoIssue, ""}, // for action 'writeAccess', (index 1)
  {kMapState_unifiedSymbolMapEx_usedInputOutputFormalArgument /* 12 */, kMapAutomatonNoIssue, ""}, // for action 'readWriteAccess', (index 2)
  {kMapState_unifiedSymbolMapEx_droppedInputOutputFormalArgument /* 13 */, kMapAutomatonNoIssue, ""}, // for action 'dropAccess', (index 3)
  {kMapState_unifiedSymbolMapEx_usedInputOutputFormalArgument /* 12 */, kMapAutomatonNoIssue, ""}, // for action 'constMethodCall', (index 4)
  {kMapState_unifiedSymbolMapEx_usedInputOutputFormalArgument /* 12 */, kMapAutomatonNoIssue, ""}, // for action 'methodCall', (index 5)
  {kMapState_unifiedSymbolMapEx_usedInputOutputFormalArgument /* 12 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 6)
// State 'droppedInputOutputFormalArgument', index 13 
  {kMapState_unifiedSymbolMapEx_droppedInputOutputFormalArgument /* 13 */, kMapAutomatonIssueError, "a dropped input/output formal argument cannot be read"}, // for action 'readAccess', (index 0)
  {kMapState_unifiedSymbolMapEx_usedInputOutputFormalArgument /* 12 */, kMapAutomatonNoIssue, ""}, // for action 'writeAccess', (index 1)
  {kMapState_unifiedSymbolMapEx_droppedInputOutputFormalArgument /* 13 */, kMapAutomatonIssueError, "a dropped input/output formal argument cannot be read"}, // for action 'readWriteAccess', (index 2)
  {kMapState_unifiedSymbolMapEx_droppedInputOutputFormalArgument /* 13 */, kMapAutomatonNoIssue, ""}, // for action 'dropAccess', (index 3)
  {kMapState_unifiedSymbolMapEx_droppedInputOutputFormalArgument /* 13 */, kMapAutomatonIssueError, "the input/output formal argument is dropped"}, // for action 'constMethodCall', (index 4)
  {kMapState_unifiedSymbolMapEx_droppedInputOutputFormalArgument /* 13 */, kMapAutomatonIssueError, "the input/output formal argument is dropped"}, // for action 'methodCall', (index 5)
  {kMapState_unifiedSymbolMapEx_droppedInputOutputFormalArgument /* 13 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 6)
// State 'inputOutputFormalArgumentDeclaredAsUnused', index 14 
  {kMapState_unifiedSymbolMapEx_usedInputOutputFormalArgument /* 12 */, kMapAutomatonNoIssue, ""}, // for action 'readAccess', (index 0)
  {kMapState_unifiedSymbolMapEx_usedInputOutputFormalArgument /* 12 */, kMapAutomatonNoIssue, ""}, // for action 'writeAccess', (index 1)
  {kMapState_unifiedSymbolMapEx_usedInputOutputFormalArgument /* 12 */, kMapAutomatonNoIssue, ""}, // for action 'readWriteAccess', (index 2)
  {kMapState_unifiedSymbolMapEx_droppedInputOutputFormalArgument /* 13 */, kMapAutomatonNoIssue, ""}, // for action 'dropAccess', (index 3)
  {kMapState_unifiedSymbolMapEx_usedInputOutputFormalArgument /* 12 */, kMapAutomatonNoIssue, ""}, // for action 'constMethodCall', (index 4)
  {kMapState_unifiedSymbolMapEx_usedInputOutputFormalArgument /* 12 */, kMapAutomatonNoIssue, ""}, // for action 'methodCall', (index 5)
  {kMapState_unifiedSymbolMapEx_inputOutputFormalArgumentDeclaredAsUnused /* 14 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 6)
// State 'constantInputFormalArgument', index 15 
  {kMapState_unifiedSymbolMapEx_usedConstantInputFormalArgument /* 16 */, kMapAutomatonNoIssue, ""}, // for action 'readAccess', (index 0)
  {kMapState_unifiedSymbolMapEx_usedConstantInputFormalArgument /* 16 */, kMapAutomatonIssueError, "a constant input formal parameter cannot be written"}, // for action 'writeAccess', (index 1)
  {kMapState_unifiedSymbolMapEx_usedConstantInputFormalArgument /* 16 */, kMapAutomatonIssueError, "a constant input formal parameter cannot be modified"}, // for action 'readWriteAccess', (index 2)
  {kMapState_unifiedSymbolMapEx_usedConstantInputFormalArgument /* 16 */, kMapAutomatonIssueError, "a constant input formal parameter cannot be dropped"}, // for action 'dropAccess', (index 3)
  {kMapState_unifiedSymbolMapEx_usedConstantInputFormalArgument /* 16 */, kMapAutomatonNoIssue, ""}, // for action 'constMethodCall', (index 4)
  {kMapState_unifiedSymbolMapEx_usedConstantInputFormalArgument /* 16 */, kMapAutomatonIssueError, "a constant input formal parameter cannot be modified"}, // for action 'methodCall', (index 5)
  {kMapState_unifiedSymbolMapEx_constantInputFormalArgument /* 15 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 6)
// State 'usedConstantInputFormalArgument', index 16 
  {kMapState_unifiedSymbolMapEx_usedConstantInputFormalArgument /* 16 */, kMapAutomatonNoIssue, ""}, // for action 'readAccess', (index 0)
  {kMapState_unifiedSymbolMapEx_usedConstantInputFormalArgument /* 16 */, kMapAutomatonIssueError, "a constant input formal parameter cannot be written"}, // for action 'writeAccess', (index 1)
  {kMapState_unifiedSymbolMapEx_usedConstantInputFormalArgument /* 16 */, kMapAutomatonIssueError, "a constant input formal parameter cannot be modified"}, // for action 'readWriteAccess', (index 2)
  {kMapState_unifiedSymbolMapEx_usedConstantInputFormalArgument /* 16 */, kMapAutomatonIssueError, "a constant input formal parameter cannot be dropped"}, // for action 'dropAccess', (index 3)
  {kMapState_unifiedSymbolMapEx_usedConstantInputFormalArgument /* 16 */, kMapAutomatonNoIssue, ""}, // for action 'constMethodCall', (index 4)
  {kMapState_unifiedSymbolMapEx_usedConstantInputFormalArgument /* 16 */, kMapAutomatonIssueError, "a constant input formal parameter cannot be modified"}, // for action 'methodCall', (index 5)
  {kMapState_unifiedSymbolMapEx_usedConstantInputFormalArgument /* 16 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 6)
// State 'constantInputFormalArgumentDeclaredAsUnused', index 17 
  {kMapState_unifiedSymbolMapEx_usedConstantInputFormalArgument /* 16 */, kMapAutomatonNoIssue, ""}, // for action 'readAccess', (index 0)
  {kMapState_unifiedSymbolMapEx_usedConstantInputFormalArgument /* 16 */, kMapAutomatonIssueError, "a constant input formal parameter cannot be written"}, // for action 'writeAccess', (index 1)
  {kMapState_unifiedSymbolMapEx_usedConstantInputFormalArgument /* 16 */, kMapAutomatonIssueError, "a constant input formal parameter cannot be modified"}, // for action 'readWriteAccess', (index 2)
  {kMapState_unifiedSymbolMapEx_usedConstantInputFormalArgument /* 16 */, kMapAutomatonIssueError, "a constant input formal parameter cannot be dropped"}, // for action 'dropAccess', (index 3)
  {kMapState_unifiedSymbolMapEx_usedConstantInputFormalArgument /* 16 */, kMapAutomatonNoIssue, ""}, // for action 'constMethodCall', (index 4)
  {kMapState_unifiedSymbolMapEx_usedConstantInputFormalArgument /* 16 */, kMapAutomatonIssueError, "a constant input formal parameter cannot be modified"}, // for action 'methodCall', (index 5)
  {kMapState_unifiedSymbolMapEx_constantInputFormalArgumentDeclaredAsUnused /* 17 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 6)
// State 'inputFormalParameter', index 18 
  {kMapState_unifiedSymbolMapEx_usedInputFormalArgument /* 19 */, kMapAutomatonNoIssue, ""}, // for action 'readAccess', (index 0)
  {kMapState_unifiedSymbolMapEx_usedInputFormalArgument /* 19 */, kMapAutomatonNoIssue, ""}, // for action 'writeAccess', (index 1)
  {kMapState_unifiedSymbolMapEx_usedInputFormalArgument /* 19 */, kMapAutomatonNoIssue, ""}, // for action 'readWriteAccess', (index 2)
  {kMapState_unifiedSymbolMapEx_droppedInputFormalArgument /* 20 */, kMapAutomatonNoIssue, ""}, // for action 'dropAccess', (index 3)
  {kMapState_unifiedSymbolMapEx_usedInputFormalArgument /* 19 */, kMapAutomatonNoIssue, ""}, // for action 'constMethodCall', (index 4)
  {kMapState_unifiedSymbolMapEx_usedInputFormalArgument /* 19 */, kMapAutomatonNoIssue, ""}, // for action 'methodCall', (index 5)
  {kMapState_unifiedSymbolMapEx_inputFormalParameter /* 18 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 6)
// State 'usedInputFormalArgument', index 19 
  {kMapState_unifiedSymbolMapEx_usedInputFormalArgument /* 19 */, kMapAutomatonNoIssue, ""}, // for action 'readAccess', (index 0)
  {kMapState_unifiedSymbolMapEx_usedInputFormalArgument /* 19 */, kMapAutomatonNoIssue, ""}, // for action 'writeAccess', (index 1)
  {kMapState_unifiedSymbolMapEx_usedInputFormalArgument /* 19 */, kMapAutomatonNoIssue, ""}, // for action 'readWriteAccess', (index 2)
  {kMapState_unifiedSymbolMapEx_droppedInputFormalArgument /* 20 */, kMapAutomatonNoIssue, ""}, // for action 'dropAccess', (index 3)
  {kMapState_unifiedSymbolMapEx_usedInputFormalArgument /* 19 */, kMapAutomatonNoIssue, ""}, // for action 'constMethodCall', (index 4)
  {kMapState_unifiedSymbolMapEx_usedInputFormalArgument /* 19 */, kMapAutomatonNoIssue, ""}, // for action 'methodCall', (index 5)
  {kMapState_unifiedSymbolMapEx_usedInputFormalArgument /* 19 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 6)
// State 'droppedInputFormalArgument', index 20 
  {kMapState_unifiedSymbolMapEx_droppedInputFormalArgument /* 20 */, kMapAutomatonIssueError, "a dropped input formal parameter cannot be read"}, // for action 'readAccess', (index 0)
  {kMapState_unifiedSymbolMapEx_usedInputFormalArgument /* 19 */, kMapAutomatonNoIssue, ""}, // for action 'writeAccess', (index 1)
  {kMapState_unifiedSymbolMapEx_droppedInputFormalArgument /* 20 */, kMapAutomatonIssueError, "a dropped input formal parameter cannot be modified"}, // for action 'readWriteAccess', (index 2)
  {kMapState_unifiedSymbolMapEx_droppedInputFormalArgument /* 20 */, kMapAutomatonIssueWarning, "the input formal parameter is already dropped"}, // for action 'dropAccess', (index 3)
  {kMapState_unifiedSymbolMapEx_droppedInputFormalArgument /* 20 */, kMapAutomatonIssueWarning, "the input formal parameter is dropped"}, // for action 'constMethodCall', (index 4)
  {kMapState_unifiedSymbolMapEx_droppedInputFormalArgument /* 20 */, kMapAutomatonIssueError, "a dropped input formal parameter cannot be modified"}, // for action 'methodCall', (index 5)
  {kMapState_unifiedSymbolMapEx_droppedInputFormalArgument /* 20 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 6)
// State 'inputFormalArgumentDeclaredAsUnused', index 21 
  {kMapState_unifiedSymbolMapEx_usedInputFormalArgument /* 19 */, kMapAutomatonIssueWarning, "the input formal parameter is declared as unused"}, // for action 'readAccess', (index 0)
  {kMapState_unifiedSymbolMapEx_usedInputFormalArgument /* 19 */, kMapAutomatonIssueWarning, "the input formal parameter is declared as unused"}, // for action 'writeAccess', (index 1)
  {kMapState_unifiedSymbolMapEx_usedInputFormalArgument /* 19 */, kMapAutomatonIssueWarning, "the input formal parameter is declared as unused"}, // for action 'readWriteAccess', (index 2)
  {kMapState_unifiedSymbolMapEx_droppedInputFormalArgument /* 20 */, kMapAutomatonIssueWarning, "the input formal parameter is declared as unused"}, // for action 'dropAccess', (index 3)
  {kMapState_unifiedSymbolMapEx_droppedInputFormalArgument /* 20 */, kMapAutomatonIssueWarning, "the input formal parameter is declared as unused"}, // for action 'constMethodCall', (index 4)
  {kMapState_unifiedSymbolMapEx_droppedInputFormalArgument /* 20 */, kMapAutomatonIssueWarning, "the input formal parameter is declared as unused"}, // for action 'methodCall', (index 5)
  {kMapState_unifiedSymbolMapEx_inputFormalArgumentDeclaredAsUnused /* 21 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 6)
} ;

//---------------------------------------------------------------------------------------------------------------------*
//  Map automaton final state issues                                                                                   *
//---------------------------------------------------------------------------------------------------------------------*

static const cMapAutomatonFinalIssue kMapAutomatonFinalIssue_unifiedSymbolMapEx [22] = {
  {kMapAutomatonNoIssue, ""},// state 'inaccessibleControlRegister' (index 0)
  {kMapAutomatonNoIssue, ""},// state 'module' (index 1)
  {kMapAutomatonNoIssue, ""},// state 'usedLocalConstant' (index 2)
  {kMapAutomatonNoIssue, ""},// state 'localConstant' (index 3)
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
  {kMapAutomatonNoIssue, ""},// state 'constantInputFormalArgument' (index 15)
  {kMapAutomatonNoIssue, ""},// state 'usedConstantInputFormalArgument' (index 16)
  {kMapAutomatonNoIssue, ""},// state 'constantInputFormalArgumentDeclaredAsUnused' (index 17)
  {kMapAutomatonIssueWarning, "the '%K' input formal parameter is not used and is not declared as unused"},// state 'inputFormalParameter' (index 18)
  {kMapAutomatonNoIssue, ""},// state 'usedInputFormalArgument' (index 19)
  {kMapAutomatonNoIssue, ""},// state 'droppedInputFormalArgument' (index 20)
  {kMapAutomatonNoIssue, ""},// state 'inputFormalArgumentDeclaredAsUnused' (index 21)
} ;
//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedSymbolMapEx::setter_closeBranch (GALGAS_location inErrorLocation,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  closeBranch (inErrorLocation,
               kMapAutomatonFinalIssue_unifiedSymbolMapEx,
               #ifndef DO_NOT_GENERATE_CHECKINGS
                 kMapStateCount_unifiedSymbolMapEx,
               #endif
               inCompiler COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedSymbolMapEx::method_checkAutomatonStates (GALGAS_location inErrorLocation,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  checkAutomatonStates (inErrorLocation, kMapAutomatonFinalIssue_unifiedSymbolMapEx, inCompiler COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                             map override 'selectBlock'                                              *
//---------------------------------------------------------------------------------------------------------------------*

static const cBranchOverrideTransformationDescriptor kBranchBehaviourForOverride_unifiedSymbolMapEx_selectBlock [28] = {
  {kMapState_unifiedSymbolMapEx_localConstant /* 3 */, kMapState_unifiedSymbolMapEx_usedLocalConstant /* 2 */, kMapState_unifiedSymbolMapEx_usedLocalConstant /* 2 */, kMapAutomatonNoIssue, ""},
  {kMapState_unifiedSymbolMapEx_undefinedLocalConstant /* 4 */, kMapState_unifiedSymbolMapEx_usedLocalConstant /* 2 */, kMapState_unifiedSymbolMapEx_undefinedLocalConstant /* 4 */, kMapAutomatonIssueError, "this branch defines the '%K' variable, while previous ones let it undefined"},
  {kMapState_unifiedSymbolMapEx_undefinedLocalConstant /* 4 */, kMapState_unifiedSymbolMapEx_localConstant /* 3 */, kMapState_unifiedSymbolMapEx_undefinedLocalConstant /* 4 */, kMapAutomatonIssueError, "this branch defines the '%K' variable, while previous ones let it undefined"},
  {kMapState_unifiedSymbolMapEx_undefinedLocalVariable /* 5 */, kMapState_unifiedSymbolMapEx_definedLocalVariable /* 6 */, kMapState_unifiedSymbolMapEx_definedLocalVariable /* 6 */, kMapAutomatonNoIssue, ""},
  {kMapState_unifiedSymbolMapEx_undefinedLocalVariable /* 5 */, kMapState_unifiedSymbolMapEx_usedLocalVariable /* 7 */, kMapState_unifiedSymbolMapEx_usedLocalVariable /* 7 */, kMapAutomatonNoIssue, ""},
  {kMapState_unifiedSymbolMapEx_undefinedLocalVariable /* 5 */, kMapState_unifiedSymbolMapEx_droppedLocalVariable /* 8 */, kMapState_unifiedSymbolMapEx_droppedLocalVariable /* 8 */, kMapAutomatonNoIssue, ""},
  {kMapState_unifiedSymbolMapEx_definedLocalVariable /* 6 */, kMapState_unifiedSymbolMapEx_usedLocalVariable /* 7 */, kMapState_unifiedSymbolMapEx_usedLocalVariable /* 7 */, kMapAutomatonNoIssue, ""},
  {kMapState_unifiedSymbolMapEx_definedLocalVariable /* 6 */, kMapState_unifiedSymbolMapEx_droppedLocalVariable /* 8 */, kMapState_unifiedSymbolMapEx_droppedLocalVariable /* 8 */, kMapAutomatonNoIssue, ""},
  {kMapState_unifiedSymbolMapEx_usedLocalVariable /* 7 */, kMapState_unifiedSymbolMapEx_definedLocalVariable /* 6 */, kMapState_unifiedSymbolMapEx_definedLocalVariable /* 6 */, kMapAutomatonNoIssue, ""},
  {kMapState_unifiedSymbolMapEx_usedLocalVariable /* 7 */, kMapState_unifiedSymbolMapEx_droppedLocalVariable /* 8 */, kMapState_unifiedSymbolMapEx_droppedLocalVariable /* 8 */, kMapAutomatonNoIssue, ""},
  {kMapState_unifiedSymbolMapEx_droppedLocalVariable /* 8 */, kMapState_unifiedSymbolMapEx_definedLocalVariable /* 6 */, kMapState_unifiedSymbolMapEx_definedLocalVariable /* 6 */, kMapAutomatonNoIssue, ""},
  {kMapState_unifiedSymbolMapEx_droppedLocalVariable /* 8 */, kMapState_unifiedSymbolMapEx_usedLocalVariable /* 7 */, kMapState_unifiedSymbolMapEx_usedLocalVariable /* 7 */, kMapAutomatonNoIssue, ""},
  {kMapState_unifiedSymbolMapEx_undefinedOutputFormalArgument /* 9 */, kMapState_unifiedSymbolMapEx_definedOutputFormalArgument /* 10 */, kMapState_unifiedSymbolMapEx_definedOutputFormalArgument /* 10 */, kMapAutomatonNoIssue, ""},
  {kMapState_unifiedSymbolMapEx_definedOutputFormalArgument /* 10 */, kMapState_unifiedSymbolMapEx_undefinedOutputFormalArgument /* 9 */, kMapState_unifiedSymbolMapEx_undefinedOutputFormalArgument /* 9 */, kMapAutomatonNoIssue, ""},
  {kMapState_unifiedSymbolMapEx_unusedInputOutputFormalArgument /* 11 */, kMapState_unifiedSymbolMapEx_usedInputOutputFormalArgument /* 12 */, kMapState_unifiedSymbolMapEx_usedInputOutputFormalArgument /* 12 */, kMapAutomatonNoIssue, ""},
  {kMapState_unifiedSymbolMapEx_unusedInputOutputFormalArgument /* 11 */, kMapState_unifiedSymbolMapEx_droppedInputOutputFormalArgument /* 13 */, kMapState_unifiedSymbolMapEx_droppedInputOutputFormalArgument /* 13 */, kMapAutomatonNoIssue, ""},
  {kMapState_unifiedSymbolMapEx_usedInputOutputFormalArgument /* 12 */, kMapState_unifiedSymbolMapEx_droppedInputOutputFormalArgument /* 13 */, kMapState_unifiedSymbolMapEx_droppedInputOutputFormalArgument /* 13 */, kMapAutomatonNoIssue, ""},
  {kMapState_unifiedSymbolMapEx_droppedInputOutputFormalArgument /* 13 */, kMapState_unifiedSymbolMapEx_usedInputOutputFormalArgument /* 12 */, kMapState_unifiedSymbolMapEx_usedInputOutputFormalArgument /* 12 */, kMapAutomatonNoIssue, ""},
  {kMapState_unifiedSymbolMapEx_inputOutputFormalArgumentDeclaredAsUnused /* 14 */, kMapState_unifiedSymbolMapEx_usedInputOutputFormalArgument /* 12 */, kMapState_unifiedSymbolMapEx_usedInputOutputFormalArgument /* 12 */, kMapAutomatonNoIssue, ""},
  {kMapState_unifiedSymbolMapEx_inputOutputFormalArgumentDeclaredAsUnused /* 14 */, kMapState_unifiedSymbolMapEx_droppedInputOutputFormalArgument /* 13 */, kMapState_unifiedSymbolMapEx_droppedInputOutputFormalArgument /* 13 */, kMapAutomatonNoIssue, ""},
  {kMapState_unifiedSymbolMapEx_constantInputFormalArgument /* 15 */, kMapState_unifiedSymbolMapEx_usedConstantInputFormalArgument /* 16 */, kMapState_unifiedSymbolMapEx_usedConstantInputFormalArgument /* 16 */, kMapAutomatonNoIssue, ""},
  {kMapState_unifiedSymbolMapEx_constantInputFormalArgumentDeclaredAsUnused /* 17 */, kMapState_unifiedSymbolMapEx_usedConstantInputFormalArgument /* 16 */, kMapState_unifiedSymbolMapEx_usedConstantInputFormalArgument /* 16 */, kMapAutomatonNoIssue, ""},
  {kMapState_unifiedSymbolMapEx_inputFormalParameter /* 18 */, kMapState_unifiedSymbolMapEx_usedInputFormalArgument /* 19 */, kMapState_unifiedSymbolMapEx_usedInputFormalArgument /* 19 */, kMapAutomatonNoIssue, ""},
  {kMapState_unifiedSymbolMapEx_inputFormalParameter /* 18 */, kMapState_unifiedSymbolMapEx_droppedInputFormalArgument /* 20 */, kMapState_unifiedSymbolMapEx_droppedInputFormalArgument /* 20 */, kMapAutomatonNoIssue, ""},
  {kMapState_unifiedSymbolMapEx_usedInputFormalArgument /* 19 */, kMapState_unifiedSymbolMapEx_droppedInputFormalArgument /* 20 */, kMapState_unifiedSymbolMapEx_droppedInputFormalArgument /* 20 */, kMapAutomatonNoIssue, ""},
  {kMapState_unifiedSymbolMapEx_droppedInputFormalArgument /* 20 */, kMapState_unifiedSymbolMapEx_usedInputFormalArgument /* 19 */, kMapState_unifiedSymbolMapEx_usedInputFormalArgument /* 19 */, kMapAutomatonNoIssue, ""},
  {kMapState_unifiedSymbolMapEx_inputFormalArgumentDeclaredAsUnused /* 21 */, kMapState_unifiedSymbolMapEx_usedInputFormalArgument /* 19 */, kMapState_unifiedSymbolMapEx_usedInputFormalArgument /* 19 */, kMapAutomatonNoIssue, ""},
  {kMapState_unifiedSymbolMapEx_inputFormalArgumentDeclaredAsUnused /* 21 */, kMapState_unifiedSymbolMapEx_droppedInputFormalArgument /* 20 */, kMapState_unifiedSymbolMapEx_droppedInputFormalArgument /* 20 */, kMapAutomatonNoIssue, ""},
} ;

//---------------------------------------------------------------------------------------------------------------------*

static const cBranchOverrideCompatibilityDescriptor kBranchCombinationForOverride_unifiedSymbolMapEx_selectBlock [40] = {
  {kMapState_unifiedSymbolMapEx_usedLocalConstant /* 2 */, kMapState_unifiedSymbolMapEx_localConstant /* 3 */, kMapState_unifiedSymbolMapEx_usedLocalConstant /* 2 */, kMapAutomatonNoIssue, ""},
  {kMapState_unifiedSymbolMapEx_localConstant /* 3 */, kMapState_unifiedSymbolMapEx_usedLocalConstant /* 2 */, kMapState_unifiedSymbolMapEx_usedLocalConstant /* 2 */, kMapAutomatonNoIssue, ""},
  {kMapState_unifiedSymbolMapEx_undefinedLocalVariable /* 5 */, kMapState_unifiedSymbolMapEx_definedLocalVariable /* 6 */, kMapState_unifiedSymbolMapEx_definedLocalVariable /* 6 */, kMapAutomatonIssueError, "this branch defines the '%K' variable, while previous ones let it undefined"},
  {kMapState_unifiedSymbolMapEx_undefinedLocalVariable /* 5 */, kMapState_unifiedSymbolMapEx_usedLocalVariable /* 7 */, kMapState_unifiedSymbolMapEx_undefinedLocalVariable /* 5 */, kMapAutomatonIssueError, "this branch defines the '%K' variable, while previous ones let it undefined"},
  {kMapState_unifiedSymbolMapEx_undefinedLocalVariable /* 5 */, kMapState_unifiedSymbolMapEx_droppedLocalVariable /* 8 */, kMapState_unifiedSymbolMapEx_droppedLocalVariable /* 8 */, kMapAutomatonNoIssue, ""},
  {kMapState_unifiedSymbolMapEx_definedLocalVariable /* 6 */, kMapState_unifiedSymbolMapEx_undefinedLocalVariable /* 5 */, kMapState_unifiedSymbolMapEx_definedLocalVariable /* 6 */, kMapAutomatonIssueError, "this branch lets the '%K' variable undefined, while previous ones define it"},
  {kMapState_unifiedSymbolMapEx_definedLocalVariable /* 6 */, kMapState_unifiedSymbolMapEx_usedLocalVariable /* 7 */, kMapState_unifiedSymbolMapEx_usedLocalVariable /* 7 */, kMapAutomatonNoIssue, ""},
  {kMapState_unifiedSymbolMapEx_definedLocalVariable /* 6 */, kMapState_unifiedSymbolMapEx_droppedLocalVariable /* 8 */, kMapState_unifiedSymbolMapEx_definedLocalVariable /* 6 */, kMapAutomatonIssueError, "this branch drops the '%K' variable, while previous ones let it defined"},
  {kMapState_unifiedSymbolMapEx_usedLocalVariable /* 7 */, kMapState_unifiedSymbolMapEx_undefinedLocalVariable /* 5 */, kMapState_unifiedSymbolMapEx_usedLocalVariable /* 7 */, kMapAutomatonIssueError, "this branch lets the '%K' variable undefined, while previous defines let it"},
  {kMapState_unifiedSymbolMapEx_usedLocalVariable /* 7 */, kMapState_unifiedSymbolMapEx_definedLocalVariable /* 6 */, kMapState_unifiedSymbolMapEx_usedLocalVariable /* 7 */, kMapAutomatonNoIssue, ""},
  {kMapState_unifiedSymbolMapEx_usedLocalVariable /* 7 */, kMapState_unifiedSymbolMapEx_droppedLocalVariable /* 8 */, kMapState_unifiedSymbolMapEx_usedLocalVariable /* 7 */, kMapAutomatonIssueError, "this branch drops the '%K' variable, while previous ones let it defined"},
  {kMapState_unifiedSymbolMapEx_droppedLocalVariable /* 8 */, kMapState_unifiedSymbolMapEx_undefinedLocalVariable /* 5 */, kMapState_unifiedSymbolMapEx_droppedLocalVariable /* 8 */, kMapAutomatonNoIssue, ""},
  {kMapState_unifiedSymbolMapEx_droppedLocalVariable /* 8 */, kMapState_unifiedSymbolMapEx_definedLocalVariable /* 6 */, kMapState_unifiedSymbolMapEx_droppedLocalVariable /* 8 */, kMapAutomatonIssueError, "this branch defines the '%K' variable, while previous ones drop it"},
  {kMapState_unifiedSymbolMapEx_droppedLocalVariable /* 8 */, kMapState_unifiedSymbolMapEx_usedLocalVariable /* 7 */, kMapState_unifiedSymbolMapEx_droppedLocalVariable /* 8 */, kMapAutomatonIssueError, "this branch defines the '%K' variable, while previous ones drop it"},
  {kMapState_unifiedSymbolMapEx_undefinedOutputFormalArgument /* 9 */, kMapState_unifiedSymbolMapEx_definedOutputFormalArgument /* 10 */, kMapState_unifiedSymbolMapEx_definedOutputFormalArgument /* 10 */, kMapAutomatonIssueError, "this branch defines the '%K' output formal argument, while previous ones let it undefined"},
  {kMapState_unifiedSymbolMapEx_definedOutputFormalArgument /* 10 */, kMapState_unifiedSymbolMapEx_undefinedOutputFormalArgument /* 9 */, kMapState_unifiedSymbolMapEx_definedOutputFormalArgument /* 10 */, kMapAutomatonIssueError, "this branch lets the '%K' variable undefined, while previous ones define it"},
  {kMapState_unifiedSymbolMapEx_unusedInputOutputFormalArgument /* 11 */, kMapState_unifiedSymbolMapEx_usedInputOutputFormalArgument /* 12 */, kMapState_unifiedSymbolMapEx_usedInputOutputFormalArgument /* 12 */, kMapAutomatonNoIssue, ""},
  {kMapState_unifiedSymbolMapEx_unusedInputOutputFormalArgument /* 11 */, kMapState_unifiedSymbolMapEx_droppedInputOutputFormalArgument /* 13 */, kMapState_unifiedSymbolMapEx_unusedInputOutputFormalArgument /* 11 */, kMapAutomatonIssueError, "this branch drops the '%K' input/output formal argument, while previous ones let it undefined"},
  {kMapState_unifiedSymbolMapEx_usedInputOutputFormalArgument /* 12 */, kMapState_unifiedSymbolMapEx_unusedInputOutputFormalArgument /* 11 */, kMapState_unifiedSymbolMapEx_usedInputOutputFormalArgument /* 12 */, kMapAutomatonNoIssue, ""},
  {kMapState_unifiedSymbolMapEx_usedInputOutputFormalArgument /* 12 */, kMapState_unifiedSymbolMapEx_droppedInputOutputFormalArgument /* 13 */, kMapState_unifiedSymbolMapEx_usedInputOutputFormalArgument /* 12 */, kMapAutomatonIssueError, "this branch drops the '%K' input/output formal argument, while previous ones let it defined"},
  {kMapState_unifiedSymbolMapEx_usedInputOutputFormalArgument /* 12 */, kMapState_unifiedSymbolMapEx_inputOutputFormalArgumentDeclaredAsUnused /* 14 */, kMapState_unifiedSymbolMapEx_inputOutputFormalArgumentDeclaredAsUnused /* 14 */, kMapAutomatonNoIssue, ""},
  {kMapState_unifiedSymbolMapEx_droppedInputOutputFormalArgument /* 13 */, kMapState_unifiedSymbolMapEx_unusedInputOutputFormalArgument /* 11 */, kMapState_unifiedSymbolMapEx_unusedInputOutputFormalArgument /* 11 */, kMapAutomatonIssueError, "this branch lets the '%K' input/output formal argument defined, while previous ones drop it"},
  {kMapState_unifiedSymbolMapEx_droppedInputOutputFormalArgument /* 13 */, kMapState_unifiedSymbolMapEx_usedInputOutputFormalArgument /* 12 */, kMapState_unifiedSymbolMapEx_usedInputOutputFormalArgument /* 12 */, kMapAutomatonIssueError, "this branch lets the '%K' input/output formal argument defined, while previous ones drop it"},
  {kMapState_unifiedSymbolMapEx_droppedInputOutputFormalArgument /* 13 */, kMapState_unifiedSymbolMapEx_inputOutputFormalArgumentDeclaredAsUnused /* 14 */, kMapState_unifiedSymbolMapEx_inputOutputFormalArgumentDeclaredAsUnused /* 14 */, kMapAutomatonIssueError, "this branch lets the '%K' input formal argument defined, while previous ones drop it"},
  {kMapState_unifiedSymbolMapEx_inputOutputFormalArgumentDeclaredAsUnused /* 14 */, kMapState_unifiedSymbolMapEx_usedInputOutputFormalArgument /* 12 */, kMapState_unifiedSymbolMapEx_inputOutputFormalArgumentDeclaredAsUnused /* 14 */, kMapAutomatonNoIssue, ""},
  {kMapState_unifiedSymbolMapEx_inputOutputFormalArgumentDeclaredAsUnused /* 14 */, kMapState_unifiedSymbolMapEx_droppedInputOutputFormalArgument /* 13 */, kMapState_unifiedSymbolMapEx_inputOutputFormalArgumentDeclaredAsUnused /* 14 */, kMapAutomatonIssueError, "this branch drops the '%K' input formal argument defined, while previous ones let it defined"},
  {kMapState_unifiedSymbolMapEx_constantInputFormalArgument /* 15 */, kMapState_unifiedSymbolMapEx_usedConstantInputFormalArgument /* 16 */, kMapState_unifiedSymbolMapEx_usedConstantInputFormalArgument /* 16 */, kMapAutomatonNoIssue, ""},
  {kMapState_unifiedSymbolMapEx_usedConstantInputFormalArgument /* 16 */, kMapState_unifiedSymbolMapEx_constantInputFormalArgument /* 15 */, kMapState_unifiedSymbolMapEx_usedConstantInputFormalArgument /* 16 */, kMapAutomatonNoIssue, ""},
  {kMapState_unifiedSymbolMapEx_usedConstantInputFormalArgument /* 16 */, kMapState_unifiedSymbolMapEx_constantInputFormalArgumentDeclaredAsUnused /* 17 */, kMapState_unifiedSymbolMapEx_usedConstantInputFormalArgument /* 16 */, kMapAutomatonNoIssue, ""},
  {kMapState_unifiedSymbolMapEx_constantInputFormalArgumentDeclaredAsUnused /* 17 */, kMapState_unifiedSymbolMapEx_usedConstantInputFormalArgument /* 16 */, kMapState_unifiedSymbolMapEx_usedConstantInputFormalArgument /* 16 */, kMapAutomatonNoIssue, ""},
  {kMapState_unifiedSymbolMapEx_inputFormalParameter /* 18 */, kMapState_unifiedSymbolMapEx_usedInputFormalArgument /* 19 */, kMapState_unifiedSymbolMapEx_usedInputFormalArgument /* 19 */, kMapAutomatonNoIssue, ""},
  {kMapState_unifiedSymbolMapEx_inputFormalParameter /* 18 */, kMapState_unifiedSymbolMapEx_droppedInputFormalArgument /* 20 */, kMapState_unifiedSymbolMapEx_inputFormalParameter /* 18 */, kMapAutomatonIssueError, "this branch drops the '%K' input formal argument, while previous let it defined"},
  {kMapState_unifiedSymbolMapEx_usedInputFormalArgument /* 19 */, kMapState_unifiedSymbolMapEx_inputFormalParameter /* 18 */, kMapState_unifiedSymbolMapEx_usedInputFormalArgument /* 19 */, kMapAutomatonNoIssue, ""},
  {kMapState_unifiedSymbolMapEx_usedInputFormalArgument /* 19 */, kMapState_unifiedSymbolMapEx_droppedInputFormalArgument /* 20 */, kMapState_unifiedSymbolMapEx_usedInputFormalArgument /* 19 */, kMapAutomatonIssueError, "this branch drops the '%K' input formal argument, while previous ones let it defined"},
  {kMapState_unifiedSymbolMapEx_usedInputFormalArgument /* 19 */, kMapState_unifiedSymbolMapEx_inputFormalArgumentDeclaredAsUnused /* 21 */, kMapState_unifiedSymbolMapEx_usedInputFormalArgument /* 19 */, kMapAutomatonNoIssue, ""},
  {kMapState_unifiedSymbolMapEx_droppedInputFormalArgument /* 20 */, kMapState_unifiedSymbolMapEx_inputFormalParameter /* 18 */, kMapState_unifiedSymbolMapEx_droppedInputFormalArgument /* 20 */, kMapAutomatonIssueError, "this branch drops the '%K' input formal argument, while previous ones let it defined"},
  {kMapState_unifiedSymbolMapEx_droppedInputFormalArgument /* 20 */, kMapState_unifiedSymbolMapEx_usedInputFormalArgument /* 19 */, kMapState_unifiedSymbolMapEx_usedInputFormalArgument /* 19 */, kMapAutomatonIssueError, "this branch defines the '%K' input formal argument, while previous ones let it dropped"},
  {kMapState_unifiedSymbolMapEx_droppedInputFormalArgument /* 20 */, kMapState_unifiedSymbolMapEx_inputFormalArgumentDeclaredAsUnused /* 21 */, kMapState_unifiedSymbolMapEx_droppedInputFormalArgument /* 20 */, kMapAutomatonNoIssue, ""},
  {kMapState_unifiedSymbolMapEx_inputFormalArgumentDeclaredAsUnused /* 21 */, kMapState_unifiedSymbolMapEx_usedInputFormalArgument /* 19 */, kMapState_unifiedSymbolMapEx_usedInputFormalArgument /* 19 */, kMapAutomatonNoIssue, ""},
  {kMapState_unifiedSymbolMapEx_inputFormalArgumentDeclaredAsUnused /* 21 */, kMapState_unifiedSymbolMapEx_droppedInputFormalArgument /* 20 */, kMapState_unifiedSymbolMapEx_droppedInputFormalArgument /* 20 */, kMapAutomatonNoIssue, ""},
} ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedSymbolMapEx::setter_openOverrideForSelectBlock (C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  openOverride (kBranchBehaviourForOverride_unifiedSymbolMapEx_selectBlock, 28,
                kBranchCombinationForOverride_unifiedSymbolMapEx_selectBlock, 40,
                "selectBlock",
                inCompiler
                COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                             map override 'repeatBlock'                                              *
//---------------------------------------------------------------------------------------------------------------------*

static const cBranchOverrideTransformationDescriptor kBranchBehaviourForOverride_unifiedSymbolMapEx_repeatBlock [28] = {
  {kMapState_unifiedSymbolMapEx_localConstant /* 3 */, kMapState_unifiedSymbolMapEx_usedLocalConstant /* 2 */, kMapState_unifiedSymbolMapEx_usedLocalConstant /* 2 */, kMapAutomatonNoIssue, ""},
  {kMapState_unifiedSymbolMapEx_undefinedLocalConstant /* 4 */, kMapState_unifiedSymbolMapEx_usedLocalConstant /* 2 */, kMapState_unifiedSymbolMapEx_undefinedLocalConstant /* 4 */, kMapAutomatonIssueError, "the repeated branch should not define the '%K' variable"},
  {kMapState_unifiedSymbolMapEx_undefinedLocalConstant /* 4 */, kMapState_unifiedSymbolMapEx_localConstant /* 3 */, kMapState_unifiedSymbolMapEx_undefinedLocalConstant /* 4 */, kMapAutomatonIssueError, "the repeated branch should not define the '%K' variable"},
  {kMapState_unifiedSymbolMapEx_undefinedLocalVariable /* 5 */, kMapState_unifiedSymbolMapEx_definedLocalVariable /* 6 */, kMapState_unifiedSymbolMapEx_undefinedLocalVariable /* 5 */, kMapAutomatonIssueError, "the repeated branch should not define the '%K' variable"},
  {kMapState_unifiedSymbolMapEx_undefinedLocalVariable /* 5 */, kMapState_unifiedSymbolMapEx_usedLocalVariable /* 7 */, kMapState_unifiedSymbolMapEx_undefinedLocalVariable /* 5 */, kMapAutomatonIssueError, "the repeated branch should not define the '%K' variable"},
  {kMapState_unifiedSymbolMapEx_undefinedLocalVariable /* 5 */, kMapState_unifiedSymbolMapEx_droppedLocalVariable /* 8 */, kMapState_unifiedSymbolMapEx_droppedLocalVariable /* 8 */, kMapAutomatonNoIssue, ""},
  {kMapState_unifiedSymbolMapEx_definedLocalVariable /* 6 */, kMapState_unifiedSymbolMapEx_usedLocalVariable /* 7 */, kMapState_unifiedSymbolMapEx_usedLocalVariable /* 7 */, kMapAutomatonNoIssue, ""},
  {kMapState_unifiedSymbolMapEx_definedLocalVariable /* 6 */, kMapState_unifiedSymbolMapEx_droppedLocalVariable /* 8 */, kMapState_unifiedSymbolMapEx_definedLocalVariable /* 6 */, kMapAutomatonIssueError, "the repeated branch should not drop the '%K' variable"},
  {kMapState_unifiedSymbolMapEx_usedLocalVariable /* 7 */, kMapState_unifiedSymbolMapEx_definedLocalVariable /* 6 */, kMapState_unifiedSymbolMapEx_definedLocalVariable /* 6 */, kMapAutomatonNoIssue, ""},
  {kMapState_unifiedSymbolMapEx_usedLocalVariable /* 7 */, kMapState_unifiedSymbolMapEx_droppedLocalVariable /* 8 */, kMapState_unifiedSymbolMapEx_usedLocalVariable /* 7 */, kMapAutomatonIssueError, "the repeated branch should not drop the '%K' variable"},
  {kMapState_unifiedSymbolMapEx_droppedLocalVariable /* 8 */, kMapState_unifiedSymbolMapEx_definedLocalVariable /* 6 */, kMapState_unifiedSymbolMapEx_droppedLocalVariable /* 8 */, kMapAutomatonIssueError, "the repeated branch should not drop the '%K' variable"},
  {kMapState_unifiedSymbolMapEx_droppedLocalVariable /* 8 */, kMapState_unifiedSymbolMapEx_usedLocalVariable /* 7 */, kMapState_unifiedSymbolMapEx_droppedLocalVariable /* 8 */, kMapAutomatonIssueError, "the repeated branch should not define the dropped '%K' variable"},
  {kMapState_unifiedSymbolMapEx_undefinedOutputFormalArgument /* 9 */, kMapState_unifiedSymbolMapEx_definedOutputFormalArgument /* 10 */, kMapState_unifiedSymbolMapEx_undefinedOutputFormalArgument /* 9 */, kMapAutomatonIssueError, "the repeated branch should not define the '%K' output formal argument"},
  {kMapState_unifiedSymbolMapEx_definedOutputFormalArgument /* 10 */, kMapState_unifiedSymbolMapEx_undefinedOutputFormalArgument /* 9 */, kMapState_unifiedSymbolMapEx_definedOutputFormalArgument /* 10 */, kMapAutomatonIssueError, "the repeated branch should not drop the '%K' output formal argument"},
  {kMapState_unifiedSymbolMapEx_unusedInputOutputFormalArgument /* 11 */, kMapState_unifiedSymbolMapEx_usedInputOutputFormalArgument /* 12 */, kMapState_unifiedSymbolMapEx_usedInputOutputFormalArgument /* 12 */, kMapAutomatonNoIssue, ""},
  {kMapState_unifiedSymbolMapEx_unusedInputOutputFormalArgument /* 11 */, kMapState_unifiedSymbolMapEx_droppedInputOutputFormalArgument /* 13 */, kMapState_unifiedSymbolMapEx_unusedInputOutputFormalArgument /* 11 */, kMapAutomatonIssueError, "the repeated branch should not drop the '%K' input/output formal argument"},
  {kMapState_unifiedSymbolMapEx_usedInputOutputFormalArgument /* 12 */, kMapState_unifiedSymbolMapEx_droppedInputOutputFormalArgument /* 13 */, kMapState_unifiedSymbolMapEx_usedInputOutputFormalArgument /* 12 */, kMapAutomatonIssueError, "the repeated branch should not drop the '%K' input/output formal argument"},
  {kMapState_unifiedSymbolMapEx_droppedInputOutputFormalArgument /* 13 */, kMapState_unifiedSymbolMapEx_usedInputOutputFormalArgument /* 12 */, kMapState_unifiedSymbolMapEx_droppedInputOutputFormalArgument /* 13 */, kMapAutomatonIssueError, "the repeated branch should define the '%K' input formal argument"},
  {kMapState_unifiedSymbolMapEx_inputOutputFormalArgumentDeclaredAsUnused /* 14 */, kMapState_unifiedSymbolMapEx_usedInputOutputFormalArgument /* 12 */, kMapState_unifiedSymbolMapEx_usedInputOutputFormalArgument /* 12 */, kMapAutomatonNoIssue, ""},
  {kMapState_unifiedSymbolMapEx_inputOutputFormalArgumentDeclaredAsUnused /* 14 */, kMapState_unifiedSymbolMapEx_droppedInputOutputFormalArgument /* 13 */, kMapState_unifiedSymbolMapEx_inputOutputFormalArgumentDeclaredAsUnused /* 14 */, kMapAutomatonIssueError, "the repeated branch should not drop the '%K' input/output formal argument"},
  {kMapState_unifiedSymbolMapEx_constantInputFormalArgument /* 15 */, kMapState_unifiedSymbolMapEx_usedConstantInputFormalArgument /* 16 */, kMapState_unifiedSymbolMapEx_usedConstantInputFormalArgument /* 16 */, kMapAutomatonNoIssue, ""},
  {kMapState_unifiedSymbolMapEx_constantInputFormalArgumentDeclaredAsUnused /* 17 */, kMapState_unifiedSymbolMapEx_usedConstantInputFormalArgument /* 16 */, kMapState_unifiedSymbolMapEx_usedConstantInputFormalArgument /* 16 */, kMapAutomatonNoIssue, ""},
  {kMapState_unifiedSymbolMapEx_inputFormalParameter /* 18 */, kMapState_unifiedSymbolMapEx_usedInputFormalArgument /* 19 */, kMapState_unifiedSymbolMapEx_usedInputFormalArgument /* 19 */, kMapAutomatonNoIssue, ""},
  {kMapState_unifiedSymbolMapEx_inputFormalParameter /* 18 */, kMapState_unifiedSymbolMapEx_droppedInputFormalArgument /* 20 */, kMapState_unifiedSymbolMapEx_inputFormalParameter /* 18 */, kMapAutomatonIssueError, "the repeated branch should not drop the '%K' input formal argument"},
  {kMapState_unifiedSymbolMapEx_usedInputFormalArgument /* 19 */, kMapState_unifiedSymbolMapEx_droppedInputFormalArgument /* 20 */, kMapState_unifiedSymbolMapEx_usedInputFormalArgument /* 19 */, kMapAutomatonIssueError, "the repeated branch should not drop the '%K' input formal argument"},
  {kMapState_unifiedSymbolMapEx_droppedInputFormalArgument /* 20 */, kMapState_unifiedSymbolMapEx_usedInputFormalArgument /* 19 */, kMapState_unifiedSymbolMapEx_droppedInputFormalArgument /* 20 */, kMapAutomatonIssueError, "the repeated branch should not drop the '%K' input formal argument"},
  {kMapState_unifiedSymbolMapEx_inputFormalArgumentDeclaredAsUnused /* 21 */, kMapState_unifiedSymbolMapEx_usedInputFormalArgument /* 19 */, kMapState_unifiedSymbolMapEx_usedInputFormalArgument /* 19 */, kMapAutomatonNoIssue, ""},
  {kMapState_unifiedSymbolMapEx_inputFormalArgumentDeclaredAsUnused /* 21 */, kMapState_unifiedSymbolMapEx_droppedInputFormalArgument /* 20 */, kMapState_unifiedSymbolMapEx_inputFormalArgumentDeclaredAsUnused /* 21 */, kMapAutomatonIssueError, "the repeated branch should not drop the '%K' input formal argument"},
} ;

//---------------------------------------------------------------------------------------------------------------------*

static const cBranchOverrideCompatibilityDescriptor kBranchCombinationForOverride_unifiedSymbolMapEx_repeatBlock [18] = {
  {kMapState_unifiedSymbolMapEx_usedLocalConstant /* 2 */, kMapState_unifiedSymbolMapEx_localConstant /* 3 */, kMapState_unifiedSymbolMapEx_usedLocalConstant /* 2 */, kMapAutomatonNoIssue, ""},
  {kMapState_unifiedSymbolMapEx_localConstant /* 3 */, kMapState_unifiedSymbolMapEx_usedLocalConstant /* 2 */, kMapState_unifiedSymbolMapEx_usedLocalConstant /* 2 */, kMapAutomatonNoIssue, ""},
  {kMapState_unifiedSymbolMapEx_undefinedLocalVariable /* 5 */, kMapState_unifiedSymbolMapEx_droppedLocalVariable /* 8 */, kMapState_unifiedSymbolMapEx_droppedLocalVariable /* 8 */, kMapAutomatonNoIssue, ""},
  {kMapState_unifiedSymbolMapEx_definedLocalVariable /* 6 */, kMapState_unifiedSymbolMapEx_usedLocalVariable /* 7 */, kMapState_unifiedSymbolMapEx_usedLocalVariable /* 7 */, kMapAutomatonNoIssue, ""},
  {kMapState_unifiedSymbolMapEx_usedLocalVariable /* 7 */, kMapState_unifiedSymbolMapEx_definedLocalVariable /* 6 */, kMapState_unifiedSymbolMapEx_usedLocalVariable /* 7 */, kMapAutomatonNoIssue, ""},
  {kMapState_unifiedSymbolMapEx_droppedLocalVariable /* 8 */, kMapState_unifiedSymbolMapEx_undefinedLocalVariable /* 5 */, kMapState_unifiedSymbolMapEx_droppedLocalVariable /* 8 */, kMapAutomatonNoIssue, ""},
  {kMapState_unifiedSymbolMapEx_unusedInputOutputFormalArgument /* 11 */, kMapState_unifiedSymbolMapEx_usedInputOutputFormalArgument /* 12 */, kMapState_unifiedSymbolMapEx_usedInputOutputFormalArgument /* 12 */, kMapAutomatonNoIssue, ""},
  {kMapState_unifiedSymbolMapEx_usedInputOutputFormalArgument /* 12 */, kMapState_unifiedSymbolMapEx_unusedInputOutputFormalArgument /* 11 */, kMapState_unifiedSymbolMapEx_usedInputOutputFormalArgument /* 12 */, kMapAutomatonNoIssue, ""},
  {kMapState_unifiedSymbolMapEx_usedInputOutputFormalArgument /* 12 */, kMapState_unifiedSymbolMapEx_inputOutputFormalArgumentDeclaredAsUnused /* 14 */, kMapState_unifiedSymbolMapEx_usedInputOutputFormalArgument /* 12 */, kMapAutomatonNoIssue, ""},
  {kMapState_unifiedSymbolMapEx_inputOutputFormalArgumentDeclaredAsUnused /* 14 */, kMapState_unifiedSymbolMapEx_usedInputOutputFormalArgument /* 12 */, kMapState_unifiedSymbolMapEx_usedInputOutputFormalArgument /* 12 */, kMapAutomatonNoIssue, ""},
  {kMapState_unifiedSymbolMapEx_constantInputFormalArgument /* 15 */, kMapState_unifiedSymbolMapEx_usedConstantInputFormalArgument /* 16 */, kMapState_unifiedSymbolMapEx_usedConstantInputFormalArgument /* 16 */, kMapAutomatonNoIssue, ""},
  {kMapState_unifiedSymbolMapEx_usedConstantInputFormalArgument /* 16 */, kMapState_unifiedSymbolMapEx_constantInputFormalArgument /* 15 */, kMapState_unifiedSymbolMapEx_usedConstantInputFormalArgument /* 16 */, kMapAutomatonNoIssue, ""},
  {kMapState_unifiedSymbolMapEx_usedConstantInputFormalArgument /* 16 */, kMapState_unifiedSymbolMapEx_constantInputFormalArgumentDeclaredAsUnused /* 17 */, kMapState_unifiedSymbolMapEx_usedConstantInputFormalArgument /* 16 */, kMapAutomatonNoIssue, ""},
  {kMapState_unifiedSymbolMapEx_constantInputFormalArgumentDeclaredAsUnused /* 17 */, kMapState_unifiedSymbolMapEx_usedConstantInputFormalArgument /* 16 */, kMapState_unifiedSymbolMapEx_usedConstantInputFormalArgument /* 16 */, kMapAutomatonNoIssue, ""},
  {kMapState_unifiedSymbolMapEx_inputFormalParameter /* 18 */, kMapState_unifiedSymbolMapEx_usedInputFormalArgument /* 19 */, kMapState_unifiedSymbolMapEx_usedInputFormalArgument /* 19 */, kMapAutomatonNoIssue, ""},
  {kMapState_unifiedSymbolMapEx_usedInputFormalArgument /* 19 */, kMapState_unifiedSymbolMapEx_inputFormalParameter /* 18 */, kMapState_unifiedSymbolMapEx_usedInputFormalArgument /* 19 */, kMapAutomatonNoIssue, ""},
  {kMapState_unifiedSymbolMapEx_usedInputFormalArgument /* 19 */, kMapState_unifiedSymbolMapEx_inputFormalArgumentDeclaredAsUnused /* 21 */, kMapState_unifiedSymbolMapEx_usedInputFormalArgument /* 19 */, kMapAutomatonNoIssue, ""},
  {kMapState_unifiedSymbolMapEx_inputFormalArgumentDeclaredAsUnused /* 21 */, kMapState_unifiedSymbolMapEx_usedInputFormalArgument /* 19 */, kMapState_unifiedSymbolMapEx_usedInputFormalArgument /* 19 */, kMapAutomatonNoIssue, ""},
} ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedSymbolMapEx::setter_openOverrideForRepeatBlock (C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  openOverride (kBranchBehaviourForOverride_unifiedSymbolMapEx_repeatBlock, 28,
                kBranchCombinationForOverride_unifiedSymbolMapEx_repeatBlock, 18,
                "repeatBlock",
                inCompiler
                COMMA_THERE) ;
}


//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedSymbolMapEx::setter_insertInaccessibleControlRegister (GALGAS_lstring inKey,
                                                                          GALGAS_PLMType inArgument0,
                                                                          GALGAS_bool inArgument1,
                                                                          GALGAS_objectIR inArgument2,
                                                                          GALGAS_bool inArgument3,
                                                                          GALGAS_bool inArgument4,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  cMapElement_unifiedSymbolMapEx * p = NULL ;
  macroMyNew (p, cMapElement_unifiedSymbolMapEx (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "redefinition of '%K' object (previous declaration was in %L)" ;
  insertInSharedMap (attributes,
                     inCompiler,
                     kMapState_unifiedSymbolMapEx_inaccessibleControlRegister,
                     kMapStateNames_unifiedSymbolMapEx [kMapState_unifiedSymbolMapEx_inaccessibleControlRegister],
                     kInsertErrorMessage
                     COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedSymbolMapEx::setter_insertModule (GALGAS_lstring inKey,
                                                     GALGAS_PLMType inArgument0,
                                                     GALGAS_bool inArgument1,
                                                     GALGAS_objectIR inArgument2,
                                                     GALGAS_bool inArgument3,
                                                     GALGAS_bool inArgument4,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  cMapElement_unifiedSymbolMapEx * p = NULL ;
  macroMyNew (p, cMapElement_unifiedSymbolMapEx (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "redefinition of '%K' object (previous declaration was in %L)" ;
  insertInSharedMap (attributes,
                     inCompiler,
                     kMapState_unifiedSymbolMapEx_module,
                     kMapStateNames_unifiedSymbolMapEx [kMapState_unifiedSymbolMapEx_module],
                     kInsertErrorMessage
                     COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedSymbolMapEx::setter_insertUndefinedVariable (GALGAS_lstring inKey,
                                                                GALGAS_PLMType inArgument0,
                                                                GALGAS_bool inArgument1,
                                                                GALGAS_objectIR inArgument2,
                                                                GALGAS_bool inArgument3,
                                                                GALGAS_bool inArgument4,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  cMapElement_unifiedSymbolMapEx * p = NULL ;
  macroMyNew (p, cMapElement_unifiedSymbolMapEx (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "redefinition of '%K' object (previous declaration was in %L)" ;
  insertInSharedMap (attributes,
                     inCompiler,
                     kMapState_unifiedSymbolMapEx_undefinedLocalVariable,
                     kMapStateNames_unifiedSymbolMapEx [kMapState_unifiedSymbolMapEx_undefinedLocalVariable],
                     kInsertErrorMessage
                     COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedSymbolMapEx::setter_insertDefinedVariable (GALGAS_lstring inKey,
                                                              GALGAS_PLMType inArgument0,
                                                              GALGAS_bool inArgument1,
                                                              GALGAS_objectIR inArgument2,
                                                              GALGAS_bool inArgument3,
                                                              GALGAS_bool inArgument4,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cMapElement_unifiedSymbolMapEx * p = NULL ;
  macroMyNew (p, cMapElement_unifiedSymbolMapEx (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "redefinition of '%K' object (previous declaration was in %L)" ;
  insertInSharedMap (attributes,
                     inCompiler,
                     kMapState_unifiedSymbolMapEx_definedLocalVariable,
                     kMapStateNames_unifiedSymbolMapEx [kMapState_unifiedSymbolMapEx_definedLocalVariable],
                     kInsertErrorMessage
                     COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedSymbolMapEx::setter_insertUndefinedConstant (GALGAS_lstring inKey,
                                                                GALGAS_PLMType inArgument0,
                                                                GALGAS_bool inArgument1,
                                                                GALGAS_objectIR inArgument2,
                                                                GALGAS_bool inArgument3,
                                                                GALGAS_bool inArgument4,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  cMapElement_unifiedSymbolMapEx * p = NULL ;
  macroMyNew (p, cMapElement_unifiedSymbolMapEx (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "redefinition of '%K' object (previous declaration was in %L)" ;
  insertInSharedMap (attributes,
                     inCompiler,
                     kMapState_unifiedSymbolMapEx_undefinedLocalConstant,
                     kMapStateNames_unifiedSymbolMapEx [kMapState_unifiedSymbolMapEx_undefinedLocalConstant],
                     kInsertErrorMessage
                     COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedSymbolMapEx::setter_insertConstant (GALGAS_lstring inKey,
                                                       GALGAS_PLMType inArgument0,
                                                       GALGAS_bool inArgument1,
                                                       GALGAS_objectIR inArgument2,
                                                       GALGAS_bool inArgument3,
                                                       GALGAS_bool inArgument4,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  cMapElement_unifiedSymbolMapEx * p = NULL ;
  macroMyNew (p, cMapElement_unifiedSymbolMapEx (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "redefinition of '%K' object (previous declaration was in %L)" ;
  insertInSharedMap (attributes,
                     inCompiler,
                     kMapState_unifiedSymbolMapEx_localConstant,
                     kMapStateNames_unifiedSymbolMapEx [kMapState_unifiedSymbolMapEx_localConstant],
                     kInsertErrorMessage
                     COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedSymbolMapEx::setter_insertUsedConstant (GALGAS_lstring inKey,
                                                           GALGAS_PLMType inArgument0,
                                                           GALGAS_bool inArgument1,
                                                           GALGAS_objectIR inArgument2,
                                                           GALGAS_bool inArgument3,
                                                           GALGAS_bool inArgument4,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  cMapElement_unifiedSymbolMapEx * p = NULL ;
  macroMyNew (p, cMapElement_unifiedSymbolMapEx (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "redefinition of '%K' object (previous declaration was in %L)" ;
  insertInSharedMap (attributes,
                     inCompiler,
                     kMapState_unifiedSymbolMapEx_usedLocalConstant,
                     kMapStateNames_unifiedSymbolMapEx [kMapState_unifiedSymbolMapEx_usedLocalConstant],
                     kInsertErrorMessage
                     COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedSymbolMapEx::setter_insertInputFormalArgument (GALGAS_lstring inKey,
                                                                  GALGAS_PLMType inArgument0,
                                                                  GALGAS_bool inArgument1,
                                                                  GALGAS_objectIR inArgument2,
                                                                  GALGAS_bool inArgument3,
                                                                  GALGAS_bool inArgument4,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  cMapElement_unifiedSymbolMapEx * p = NULL ;
  macroMyNew (p, cMapElement_unifiedSymbolMapEx (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "redefinition of '%K' object (previous declaration was in %L)" ;
  insertInSharedMap (attributes,
                     inCompiler,
                     kMapState_unifiedSymbolMapEx_inputFormalParameter,
                     kMapStateNames_unifiedSymbolMapEx [kMapState_unifiedSymbolMapEx_inputFormalParameter],
                     kInsertErrorMessage
                     COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedSymbolMapEx::setter_insertInputFormalArgumentDeclaredAsUnused (GALGAS_lstring inKey,
                                                                                  GALGAS_PLMType inArgument0,
                                                                                  GALGAS_bool inArgument1,
                                                                                  GALGAS_objectIR inArgument2,
                                                                                  GALGAS_bool inArgument3,
                                                                                  GALGAS_bool inArgument4,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  cMapElement_unifiedSymbolMapEx * p = NULL ;
  macroMyNew (p, cMapElement_unifiedSymbolMapEx (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "redefinition of '%K' object (previous declaration was in %L)" ;
  insertInSharedMap (attributes,
                     inCompiler,
                     kMapState_unifiedSymbolMapEx_inputFormalArgumentDeclaredAsUnused,
                     kMapStateNames_unifiedSymbolMapEx [kMapState_unifiedSymbolMapEx_inputFormalArgumentDeclaredAsUnused],
                     kInsertErrorMessage
                     COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedSymbolMapEx::setter_insertConstantInputFormalArgument (GALGAS_lstring inKey,
                                                                          GALGAS_PLMType inArgument0,
                                                                          GALGAS_bool inArgument1,
                                                                          GALGAS_objectIR inArgument2,
                                                                          GALGAS_bool inArgument3,
                                                                          GALGAS_bool inArgument4,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  cMapElement_unifiedSymbolMapEx * p = NULL ;
  macroMyNew (p, cMapElement_unifiedSymbolMapEx (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "redefinition of '%K' object (previous declaration was in %L)" ;
  insertInSharedMap (attributes,
                     inCompiler,
                     kMapState_unifiedSymbolMapEx_constantInputFormalArgument,
                     kMapStateNames_unifiedSymbolMapEx [kMapState_unifiedSymbolMapEx_constantInputFormalArgument],
                     kInsertErrorMessage
                     COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedSymbolMapEx::setter_insertUsedConstantInputFormalArgument (GALGAS_lstring inKey,
                                                                              GALGAS_PLMType inArgument0,
                                                                              GALGAS_bool inArgument1,
                                                                              GALGAS_objectIR inArgument2,
                                                                              GALGAS_bool inArgument3,
                                                                              GALGAS_bool inArgument4,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  cMapElement_unifiedSymbolMapEx * p = NULL ;
  macroMyNew (p, cMapElement_unifiedSymbolMapEx (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "redefinition of '%K' object (previous declaration was in %L)" ;
  insertInSharedMap (attributes,
                     inCompiler,
                     kMapState_unifiedSymbolMapEx_usedConstantInputFormalArgument,
                     kMapStateNames_unifiedSymbolMapEx [kMapState_unifiedSymbolMapEx_usedConstantInputFormalArgument],
                     kInsertErrorMessage
                     COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedSymbolMapEx::setter_insertConstantInputFormalArgumentDeclaredAsUnused (GALGAS_lstring inKey,
                                                                                          GALGAS_PLMType inArgument0,
                                                                                          GALGAS_bool inArgument1,
                                                                                          GALGAS_objectIR inArgument2,
                                                                                          GALGAS_bool inArgument3,
                                                                                          GALGAS_bool inArgument4,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  cMapElement_unifiedSymbolMapEx * p = NULL ;
  macroMyNew (p, cMapElement_unifiedSymbolMapEx (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "redefinition of '%K' object (previous declaration was in %L)" ;
  insertInSharedMap (attributes,
                     inCompiler,
                     kMapState_unifiedSymbolMapEx_constantInputFormalArgumentDeclaredAsUnused,
                     kMapStateNames_unifiedSymbolMapEx [kMapState_unifiedSymbolMapEx_constantInputFormalArgumentDeclaredAsUnused],
                     kInsertErrorMessage
                     COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedSymbolMapEx::setter_insertOutputFormalArgument (GALGAS_lstring inKey,
                                                                   GALGAS_PLMType inArgument0,
                                                                   GALGAS_bool inArgument1,
                                                                   GALGAS_objectIR inArgument2,
                                                                   GALGAS_bool inArgument3,
                                                                   GALGAS_bool inArgument4,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  cMapElement_unifiedSymbolMapEx * p = NULL ;
  macroMyNew (p, cMapElement_unifiedSymbolMapEx (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "redefinition of '%K' object (previous declaration was in %L)" ;
  insertInSharedMap (attributes,
                     inCompiler,
                     kMapState_unifiedSymbolMapEx_undefinedOutputFormalArgument,
                     kMapStateNames_unifiedSymbolMapEx [kMapState_unifiedSymbolMapEx_undefinedOutputFormalArgument],
                     kInsertErrorMessage
                     COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedSymbolMapEx::setter_insertInputOutputFormalArgument (GALGAS_lstring inKey,
                                                                        GALGAS_PLMType inArgument0,
                                                                        GALGAS_bool inArgument1,
                                                                        GALGAS_objectIR inArgument2,
                                                                        GALGAS_bool inArgument3,
                                                                        GALGAS_bool inArgument4,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  cMapElement_unifiedSymbolMapEx * p = NULL ;
  macroMyNew (p, cMapElement_unifiedSymbolMapEx (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "redefinition of '%K' object (previous declaration was in %L)" ;
  insertInSharedMap (attributes,
                     inCompiler,
                     kMapState_unifiedSymbolMapEx_unusedInputOutputFormalArgument,
                     kMapStateNames_unifiedSymbolMapEx [kMapState_unifiedSymbolMapEx_unusedInputOutputFormalArgument],
                     kInsertErrorMessage
                     COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedSymbolMapEx::setter_insertInputOutputFormalArgumentDeclaredAsUnused (GALGAS_lstring inKey,
                                                                                        GALGAS_PLMType inArgument0,
                                                                                        GALGAS_bool inArgument1,
                                                                                        GALGAS_objectIR inArgument2,
                                                                                        GALGAS_bool inArgument3,
                                                                                        GALGAS_bool inArgument4,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  cMapElement_unifiedSymbolMapEx * p = NULL ;
  macroMyNew (p, cMapElement_unifiedSymbolMapEx (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "redefinition of '%K' object (previous declaration was in %L)" ;
  insertInSharedMap (attributes,
                     inCompiler,
                     kMapState_unifiedSymbolMapEx_inputOutputFormalArgumentDeclaredAsUnused,
                     kMapStateNames_unifiedSymbolMapEx [kMapState_unifiedSymbolMapEx_inputOutputFormalArgumentDeclaredAsUnused],
                     kInsertErrorMessage
                     COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_unifiedSymbolMapEx_searchForReadAccess = "the '%K' variable is not declared" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedSymbolMapEx::setter_searchForReadAccess (GALGAS_lstring inKey,
                                                            GALGAS_PLMType & outArgument0,
                                                            GALGAS_bool & outArgument1,
                                                            GALGAS_objectIR & outArgument2,
                                                            GALGAS_bool & outArgument3,
                                                            GALGAS_bool & outArgument4,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  const cMapElement_unifiedSymbolMapEx * p = (const cMapElement_unifiedSymbolMapEx *) performSearch (inKey,
                                                                                                       inCompiler,
                                                                                                       kMapAction_unifiedSymbolMapEx_readAccess,
                                                                                                       kMapTransitions_unifiedSymbolMapEx,
                                                                                                       kMapActionCount_unifiedSymbolMapEx,
                                                                                                       #ifndef DO_NOT_GENERATE_CHECKINGS
                                                                                                         kMapStateCount_unifiedSymbolMapEx,
                                                                                                       #endif
                                                                                                       kSearchErrorMessage_unifiedSymbolMapEx_searchForReadAccess
                                                                                                       COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
    outArgument4.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_unifiedSymbolMapEx) ;
    outArgument0 = p->mProperty_type ;
    outArgument1 = p->mProperty_readAccessAllowed ;
    outArgument2 = p->mProperty_objectIR ;
    outArgument3 = p->mProperty_copyable ;
    outArgument4 = p->mProperty_canBeUsedAsInputParameter ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_unifiedSymbolMapEx_searchForWriteAccess = "the '%K' variable is not declared" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedSymbolMapEx::setter_searchForWriteAccess (GALGAS_lstring inKey,
                                                             GALGAS_PLMType & outArgument0,
                                                             GALGAS_bool & outArgument1,
                                                             GALGAS_objectIR & outArgument2,
                                                             GALGAS_bool & outArgument3,
                                                             GALGAS_bool & outArgument4,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  const cMapElement_unifiedSymbolMapEx * p = (const cMapElement_unifiedSymbolMapEx *) performSearch (inKey,
                                                                                                       inCompiler,
                                                                                                       kMapAction_unifiedSymbolMapEx_writeAccess,
                                                                                                       kMapTransitions_unifiedSymbolMapEx,
                                                                                                       kMapActionCount_unifiedSymbolMapEx,
                                                                                                       #ifndef DO_NOT_GENERATE_CHECKINGS
                                                                                                         kMapStateCount_unifiedSymbolMapEx,
                                                                                                       #endif
                                                                                                       kSearchErrorMessage_unifiedSymbolMapEx_searchForWriteAccess
                                                                                                       COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
    outArgument4.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_unifiedSymbolMapEx) ;
    outArgument0 = p->mProperty_type ;
    outArgument1 = p->mProperty_readAccessAllowed ;
    outArgument2 = p->mProperty_objectIR ;
    outArgument3 = p->mProperty_copyable ;
    outArgument4 = p->mProperty_canBeUsedAsInputParameter ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_unifiedSymbolMapEx_searchForReadWriteAccess = "the '%K' variable is not declared" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedSymbolMapEx::setter_searchForReadWriteAccess (GALGAS_lstring inKey,
                                                                 GALGAS_PLMType & outArgument0,
                                                                 GALGAS_bool & outArgument1,
                                                                 GALGAS_objectIR & outArgument2,
                                                                 GALGAS_bool & outArgument3,
                                                                 GALGAS_bool & outArgument4,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  const cMapElement_unifiedSymbolMapEx * p = (const cMapElement_unifiedSymbolMapEx *) performSearch (inKey,
                                                                                                       inCompiler,
                                                                                                       kMapAction_unifiedSymbolMapEx_readWriteAccess,
                                                                                                       kMapTransitions_unifiedSymbolMapEx,
                                                                                                       kMapActionCount_unifiedSymbolMapEx,
                                                                                                       #ifndef DO_NOT_GENERATE_CHECKINGS
                                                                                                         kMapStateCount_unifiedSymbolMapEx,
                                                                                                       #endif
                                                                                                       kSearchErrorMessage_unifiedSymbolMapEx_searchForReadWriteAccess
                                                                                                       COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
    outArgument4.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_unifiedSymbolMapEx) ;
    outArgument0 = p->mProperty_type ;
    outArgument1 = p->mProperty_readAccessAllowed ;
    outArgument2 = p->mProperty_objectIR ;
    outArgument3 = p->mProperty_copyable ;
    outArgument4 = p->mProperty_canBeUsedAsInputParameter ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_unifiedSymbolMapEx_searchForDropAccess = "the '%K' variable is not declared" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedSymbolMapEx::setter_searchForDropAccess (GALGAS_lstring inKey,
                                                            GALGAS_PLMType & outArgument0,
                                                            GALGAS_bool & outArgument1,
                                                            GALGAS_objectIR & outArgument2,
                                                            GALGAS_bool & outArgument3,
                                                            GALGAS_bool & outArgument4,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  const cMapElement_unifiedSymbolMapEx * p = (const cMapElement_unifiedSymbolMapEx *) performSearch (inKey,
                                                                                                       inCompiler,
                                                                                                       kMapAction_unifiedSymbolMapEx_dropAccess,
                                                                                                       kMapTransitions_unifiedSymbolMapEx,
                                                                                                       kMapActionCount_unifiedSymbolMapEx,
                                                                                                       #ifndef DO_NOT_GENERATE_CHECKINGS
                                                                                                         kMapStateCount_unifiedSymbolMapEx,
                                                                                                       #endif
                                                                                                       kSearchErrorMessage_unifiedSymbolMapEx_searchForDropAccess
                                                                                                       COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
    outArgument4.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_unifiedSymbolMapEx) ;
    outArgument0 = p->mProperty_type ;
    outArgument1 = p->mProperty_readAccessAllowed ;
    outArgument2 = p->mProperty_objectIR ;
    outArgument3 = p->mProperty_copyable ;
    outArgument4 = p->mProperty_canBeUsedAsInputParameter ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_unifiedSymbolMapEx_searchForConstantMethodCall = "the '%K' object is not declared" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedSymbolMapEx::setter_searchForConstantMethodCall (GALGAS_lstring inKey,
                                                                    GALGAS_PLMType & outArgument0,
                                                                    GALGAS_bool & outArgument1,
                                                                    GALGAS_objectIR & outArgument2,
                                                                    GALGAS_bool & outArgument3,
                                                                    GALGAS_bool & outArgument4,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  const cMapElement_unifiedSymbolMapEx * p = (const cMapElement_unifiedSymbolMapEx *) performSearch (inKey,
                                                                                                       inCompiler,
                                                                                                       kMapAction_unifiedSymbolMapEx_constMethodCall,
                                                                                                       kMapTransitions_unifiedSymbolMapEx,
                                                                                                       kMapActionCount_unifiedSymbolMapEx,
                                                                                                       #ifndef DO_NOT_GENERATE_CHECKINGS
                                                                                                         kMapStateCount_unifiedSymbolMapEx,
                                                                                                       #endif
                                                                                                       kSearchErrorMessage_unifiedSymbolMapEx_searchForConstantMethodCall
                                                                                                       COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
    outArgument4.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_unifiedSymbolMapEx) ;
    outArgument0 = p->mProperty_type ;
    outArgument1 = p->mProperty_readAccessAllowed ;
    outArgument2 = p->mProperty_objectIR ;
    outArgument3 = p->mProperty_copyable ;
    outArgument4 = p->mProperty_canBeUsedAsInputParameter ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_unifiedSymbolMapEx_searchForMethodCall = "the '%K' object is not declared" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedSymbolMapEx::setter_searchForMethodCall (GALGAS_lstring inKey,
                                                            GALGAS_PLMType & outArgument0,
                                                            GALGAS_bool & outArgument1,
                                                            GALGAS_objectIR & outArgument2,
                                                            GALGAS_bool & outArgument3,
                                                            GALGAS_bool & outArgument4,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  const cMapElement_unifiedSymbolMapEx * p = (const cMapElement_unifiedSymbolMapEx *) performSearch (inKey,
                                                                                                       inCompiler,
                                                                                                       kMapAction_unifiedSymbolMapEx_methodCall,
                                                                                                       kMapTransitions_unifiedSymbolMapEx,
                                                                                                       kMapActionCount_unifiedSymbolMapEx,
                                                                                                       #ifndef DO_NOT_GENERATE_CHECKINGS
                                                                                                         kMapStateCount_unifiedSymbolMapEx,
                                                                                                       #endif
                                                                                                       kSearchErrorMessage_unifiedSymbolMapEx_searchForMethodCall
                                                                                                       COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
    outArgument4.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_unifiedSymbolMapEx) ;
    outArgument0 = p->mProperty_type ;
    outArgument1 = p->mProperty_readAccessAllowed ;
    outArgument2 = p->mProperty_objectIR ;
    outArgument3 = p->mProperty_copyable ;
    outArgument4 = p->mProperty_canBeUsedAsInputParameter ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_unifiedSymbolMapEx_neutralAccess = "the '%K' variable is not declared" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedSymbolMapEx::setter_neutralAccess (GALGAS_lstring inKey,
                                                      GALGAS_PLMType & outArgument0,
                                                      GALGAS_bool & outArgument1,
                                                      GALGAS_objectIR & outArgument2,
                                                      GALGAS_bool & outArgument3,
                                                      GALGAS_bool & outArgument4,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  const cMapElement_unifiedSymbolMapEx * p = (const cMapElement_unifiedSymbolMapEx *) performSearch (inKey,
                                                                                                       inCompiler,
                                                                                                       kMapAction_unifiedSymbolMapEx_neutralAccess,
                                                                                                       kMapTransitions_unifiedSymbolMapEx,
                                                                                                       kMapActionCount_unifiedSymbolMapEx,
                                                                                                       #ifndef DO_NOT_GENERATE_CHECKINGS
                                                                                                         kMapStateCount_unifiedSymbolMapEx,
                                                                                                       #endif
                                                                                                       kSearchErrorMessage_unifiedSymbolMapEx_neutralAccess
                                                                                                       COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
    outArgument4.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_unifiedSymbolMapEx) ;
    outArgument0 = p->mProperty_type ;
    outArgument1 = p->mProperty_readAccessAllowed ;
    outArgument2 = p->mProperty_objectIR ;
    outArgument3 = p->mProperty_copyable ;
    outArgument4 = p->mProperty_canBeUsedAsInputParameter ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMType GALGAS_unifiedSymbolMapEx::getter_typeForKey (const GALGAS_string & inKey,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_unifiedSymbolMapEx * p = (const cMapElement_unifiedSymbolMapEx *) attributes ;
  GALGAS_PLMType result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedSymbolMapEx) ;
    result = p->mProperty_type ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_unifiedSymbolMapEx::getter_readAccessAllowedForKey (const GALGAS_string & inKey,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_unifiedSymbolMapEx * p = (const cMapElement_unifiedSymbolMapEx *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedSymbolMapEx) ;
    result = p->mProperty_readAccessAllowed ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_unifiedSymbolMapEx::getter_objectIRForKey (const GALGAS_string & inKey,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_unifiedSymbolMapEx * p = (const cMapElement_unifiedSymbolMapEx *) attributes ;
  GALGAS_objectIR result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedSymbolMapEx) ;
    result = p->mProperty_objectIR ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_unifiedSymbolMapEx::getter_copyableForKey (const GALGAS_string & inKey,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_unifiedSymbolMapEx * p = (const cMapElement_unifiedSymbolMapEx *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedSymbolMapEx) ;
    result = p->mProperty_copyable ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_unifiedSymbolMapEx::getter_canBeUsedAsInputParameterForKey (const GALGAS_string & inKey,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_unifiedSymbolMapEx * p = (const cMapElement_unifiedSymbolMapEx *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedSymbolMapEx) ;
    result = p->mProperty_canBeUsedAsInputParameter ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedSymbolMapEx::setter_setTypeForKey (GALGAS_PLMType inAttributeValue,
                                                      GALGAS_string inKey,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_unifiedSymbolMapEx * p = (cMapElement_unifiedSymbolMapEx *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedSymbolMapEx) ;
    p->mProperty_type = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedSymbolMapEx::setter_setReadAccessAllowedForKey (GALGAS_bool inAttributeValue,
                                                                   GALGAS_string inKey,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_unifiedSymbolMapEx * p = (cMapElement_unifiedSymbolMapEx *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedSymbolMapEx) ;
    p->mProperty_readAccessAllowed = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedSymbolMapEx::setter_setObjectIRForKey (GALGAS_objectIR inAttributeValue,
                                                          GALGAS_string inKey,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_unifiedSymbolMapEx * p = (cMapElement_unifiedSymbolMapEx *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedSymbolMapEx) ;
    p->mProperty_objectIR = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedSymbolMapEx::setter_setCopyableForKey (GALGAS_bool inAttributeValue,
                                                          GALGAS_string inKey,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_unifiedSymbolMapEx * p = (cMapElement_unifiedSymbolMapEx *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedSymbolMapEx) ;
    p->mProperty_copyable = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedSymbolMapEx::setter_setCanBeUsedAsInputParameterForKey (GALGAS_bool inAttributeValue,
                                                                           GALGAS_string inKey,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_unifiedSymbolMapEx * p = (cMapElement_unifiedSymbolMapEx *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedSymbolMapEx) ;
    p->mProperty_canBeUsedAsInputParameter = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_unifiedSymbolMapEx * GALGAS_unifiedSymbolMapEx::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                               const GALGAS_string & inKey
                                                                                               COMMA_LOCATION_ARGS) {
  cMapElement_unifiedSymbolMapEx * result = (cMapElement_unifiedSymbolMapEx *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_unifiedSymbolMapEx) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_unifiedSymbolMapEx::cEnumerator_unifiedSymbolMapEx (const GALGAS_unifiedSymbolMapEx & inEnumeratedObject,
                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_unifiedSymbolMapEx::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMType cEnumerator_unifiedSymbolMapEx::current_type (LOCATION_ARGS) const {
  const cMapElement_unifiedSymbolMapEx * p = (const cMapElement_unifiedSymbolMapEx *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_unifiedSymbolMapEx) ;
  return p->mProperty_type ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_unifiedSymbolMapEx::current_readAccessAllowed (LOCATION_ARGS) const {
  const cMapElement_unifiedSymbolMapEx * p = (const cMapElement_unifiedSymbolMapEx *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_unifiedSymbolMapEx) ;
  return p->mProperty_readAccessAllowed ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR cEnumerator_unifiedSymbolMapEx::current_objectIR (LOCATION_ARGS) const {
  const cMapElement_unifiedSymbolMapEx * p = (const cMapElement_unifiedSymbolMapEx *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_unifiedSymbolMapEx) ;
  return p->mProperty_objectIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_unifiedSymbolMapEx::current_copyable (LOCATION_ARGS) const {
  const cMapElement_unifiedSymbolMapEx * p = (const cMapElement_unifiedSymbolMapEx *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_unifiedSymbolMapEx) ;
  return p->mProperty_copyable ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_unifiedSymbolMapEx::current_canBeUsedAsInputParameter (LOCATION_ARGS) const {
  const cMapElement_unifiedSymbolMapEx * p = (const cMapElement_unifiedSymbolMapEx *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_unifiedSymbolMapEx) ;
  return p->mProperty_canBeUsedAsInputParameter ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @unifiedSymbolMapEx type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_unifiedSymbolMapEx ("unifiedSymbolMapEx",
                                           NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_unifiedSymbolMapEx::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unifiedSymbolMapEx ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_unifiedSymbolMapEx::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_unifiedSymbolMapEx (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedSymbolMapEx GALGAS_unifiedSymbolMapEx::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_unifiedSymbolMapEx result ;
  const GALGAS_unifiedSymbolMapEx * p = (const GALGAS_unifiedSymbolMapEx *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_unifiedSymbolMapEx *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("unifiedSymbolMapEx", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedSymbolMapEx_2D_proxy::GALGAS_unifiedSymbolMapEx_2D_proxy (void) :
AC_GALGAS_uniqueMapProxy () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedSymbolMapEx_2D_proxy GALGAS_unifiedSymbolMapEx_2D_proxy::constructor_null (LOCATION_ARGS) {
  GALGAS_unifiedSymbolMapEx_2D_proxy result ;
  result.makeNullProxy (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedSymbolMapEx_2D_proxy::class_method_makeOptionalProxy (GALGAS_unifiedSymbolMapEx & ioMap,
                                                                         GALGAS_lstring inKey,
                                                                         GALGAS_unifiedSymbolMapEx_2D_proxy & outProxy
                                                                         COMMA_LOCATION_ARGS) {
  outProxy.internalMakeOptionalProxy (ioMap, inKey COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedSymbolMapEx_2D_proxy::class_method_makeProxy (GALGAS_unifiedSymbolMapEx & ioMap,
                                                                 GALGAS_lstring inKey,
                                                                 GALGAS_unifiedSymbolMapEx_2D_proxy & outProxy
                                                                 COMMA_LOCATION_ARGS) {
  outProxy.internalMakeProxy (ioMap, inKey COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedSymbolMapEx_2D_proxy::class_method_makeProxyFromString (GALGAS_unifiedSymbolMapEx & ioMap,
                                                                           GALGAS_string inKey,
                                                                           GALGAS_unifiedSymbolMapEx_2D_proxy & outProxy
                                                                           COMMA_LOCATION_ARGS) {
  outProxy.internalMakeProxyFromString (ioMap, inKey COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMType GALGAS_unifiedSymbolMapEx_2D_proxy::getter_type (C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_PLMType result ;
  const cMapElement_unifiedSymbolMapEx * p = (const cMapElement_unifiedSymbolMapEx *) getAttributeListPointer (inCompiler, "type" COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedSymbolMapEx) ;
    result = p->mProperty_type;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_unifiedSymbolMapEx_2D_proxy::getter_readAccessAllowed (C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_bool result ;
  const cMapElement_unifiedSymbolMapEx * p = (const cMapElement_unifiedSymbolMapEx *) getAttributeListPointer (inCompiler, "readAccessAllowed" COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedSymbolMapEx) ;
    result = p->mProperty_readAccessAllowed;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_unifiedSymbolMapEx_2D_proxy::getter_objectIR (C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  GALGAS_objectIR result ;
  const cMapElement_unifiedSymbolMapEx * p = (const cMapElement_unifiedSymbolMapEx *) getAttributeListPointer (inCompiler, "objectIR" COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedSymbolMapEx) ;
    result = p->mProperty_objectIR;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_unifiedSymbolMapEx_2D_proxy::getter_copyable (C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  GALGAS_bool result ;
  const cMapElement_unifiedSymbolMapEx * p = (const cMapElement_unifiedSymbolMapEx *) getAttributeListPointer (inCompiler, "copyable" COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedSymbolMapEx) ;
    result = p->mProperty_copyable;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_unifiedSymbolMapEx_2D_proxy::getter_canBeUsedAsInputParameter (C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_bool result ;
  const cMapElement_unifiedSymbolMapEx * p = (const cMapElement_unifiedSymbolMapEx *) getAttributeListPointer (inCompiler, "canBeUsedAsInputParameter" COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedSymbolMapEx) ;
    result = p->mProperty_canBeUsedAsInputParameter;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedSymbolMapEx_2D_proxy GALGAS_unifiedSymbolMapEx_2D_proxy::constructor_searchForReadAccess (const GALGAS_unifiedSymbolMapEx & inMap,
                                                                                                        const GALGAS_lstring & inKey,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_unifiedSymbolMapEx_2D_proxy result ;
  result.internalMakeRegularProxyBySearchingKey (inMap, inKey, kSearchErrorMessage_unifiedSymbolMapEx_searchForReadAccess, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedSymbolMapEx_2D_proxy GALGAS_unifiedSymbolMapEx_2D_proxy::constructor_searchForWriteAccess (const GALGAS_unifiedSymbolMapEx & inMap,
                                                                                                         const GALGAS_lstring & inKey,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_unifiedSymbolMapEx_2D_proxy result ;
  result.internalMakeRegularProxyBySearchingKey (inMap, inKey, kSearchErrorMessage_unifiedSymbolMapEx_searchForWriteAccess, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedSymbolMapEx_2D_proxy GALGAS_unifiedSymbolMapEx_2D_proxy::constructor_searchForReadWriteAccess (const GALGAS_unifiedSymbolMapEx & inMap,
                                                                                                             const GALGAS_lstring & inKey,
                                                                                                             C_Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_unifiedSymbolMapEx_2D_proxy result ;
  result.internalMakeRegularProxyBySearchingKey (inMap, inKey, kSearchErrorMessage_unifiedSymbolMapEx_searchForReadWriteAccess, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedSymbolMapEx_2D_proxy GALGAS_unifiedSymbolMapEx_2D_proxy::constructor_searchForDropAccess (const GALGAS_unifiedSymbolMapEx & inMap,
                                                                                                        const GALGAS_lstring & inKey,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_unifiedSymbolMapEx_2D_proxy result ;
  result.internalMakeRegularProxyBySearchingKey (inMap, inKey, kSearchErrorMessage_unifiedSymbolMapEx_searchForDropAccess, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedSymbolMapEx_2D_proxy GALGAS_unifiedSymbolMapEx_2D_proxy::constructor_searchForConstantMethodCall (const GALGAS_unifiedSymbolMapEx & inMap,
                                                                                                                const GALGAS_lstring & inKey,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_unifiedSymbolMapEx_2D_proxy result ;
  result.internalMakeRegularProxyBySearchingKey (inMap, inKey, kSearchErrorMessage_unifiedSymbolMapEx_searchForConstantMethodCall, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedSymbolMapEx_2D_proxy GALGAS_unifiedSymbolMapEx_2D_proxy::constructor_searchForMethodCall (const GALGAS_unifiedSymbolMapEx & inMap,
                                                                                                        const GALGAS_lstring & inKey,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_unifiedSymbolMapEx_2D_proxy result ;
  result.internalMakeRegularProxyBySearchingKey (inMap, inKey, kSearchErrorMessage_unifiedSymbolMapEx_searchForMethodCall, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedSymbolMapEx_2D_proxy GALGAS_unifiedSymbolMapEx_2D_proxy::constructor_neutralAccess (const GALGAS_unifiedSymbolMapEx & inMap,
                                                                                                  const GALGAS_lstring & inKey,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_unifiedSymbolMapEx_2D_proxy result ;
  result.internalMakeRegularProxyBySearchingKey (inMap, inKey, kSearchErrorMessage_unifiedSymbolMapEx_neutralAccess, inCompiler COMMA_THERE) ;
  return result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @unifiedSymbolMapEx-proxy type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_unifiedSymbolMapEx_2D_proxy ("unifiedSymbolMapEx-proxy",
                                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_unifiedSymbolMapEx_2D_proxy::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unifiedSymbolMapEx_2D_proxy ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_unifiedSymbolMapEx_2D_proxy::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_unifiedSymbolMapEx_2D_proxy (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedSymbolMapEx_2D_proxy GALGAS_unifiedSymbolMapEx_2D_proxy::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_unifiedSymbolMapEx_2D_proxy result ;
  const GALGAS_unifiedSymbolMapEx_2D_proxy * p = (const GALGAS_unifiedSymbolMapEx_2D_proxy *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_unifiedSymbolMapEx_2D_proxy *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("unifiedSymbolMapEx-proxy", p->dynamicTypeDescriptor () COMMA_THERE) ;
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
  capCollectionElementArray sortedList ;
  capCollectionElementArray unsortedList ;
  internalTopologicalSort (sortedList, outSortedKeyList, unsortedList, outUnsortedKeyList, inCompiler COMMA_THERE) ;
  outSortedList = GALGAS_declarationListAST (sortedList) ;
  outUnsortedList = GALGAS_declarationListAST (unsortedList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticTypePrecedenceGraph::method_depthFirstTopologicalSort (GALGAS_declarationListAST & outSortedList,
                                                                           GALGAS_lstringlist & outSortedKeyList,
                                                                           GALGAS_declarationListAST & outUnsortedList,
                                                                           GALGAS_lstringlist & outUnsortedKeyList,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElementArray sortedList ;
  capCollectionElementArray unsortedList ;
  internalDepthFirstTopologicalSort (sortedList, outSortedKeyList, unsortedList, outUnsortedKeyList, inCompiler COMMA_THERE) ;
  outSortedList = GALGAS_declarationListAST (sortedList) ;
  outUnsortedList = GALGAS_declarationListAST (unsortedList) ;
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
  capCollectionElementArray infoList ;
  internalFindCircularities (infoList, outKeyList COMMA_THERE) ;
  outInfoList = GALGAS_declarationListAST (infoList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticTypePrecedenceGraph::method_nodesWithNoSuccessor (GALGAS_declarationListAST & outInfoList,
                                                                      GALGAS_lstringlist & outKeyList
                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElementArray infoList ;
  internalNodesWithNoSuccessor (infoList, outKeyList COMMA_THERE) ;
  outInfoList = GALGAS_declarationListAST (infoList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticTypePrecedenceGraph::method_nodesWithNoPredecessor (GALGAS_declarationListAST & outInfoList,
                                                                        GALGAS_lstringlist & outKeyList
                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElementArray infoList ;
  internalNodesWithNoPredecessor (infoList, outKeyList COMMA_THERE) ;
  outInfoList = GALGAS_declarationListAST (infoList) ;
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

cMapElement_prefixOperatorMap::cMapElement_prefixOperatorMap (const GALGAS_lstring & inKey
                                                              COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_prefixOperatorMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_prefixOperatorMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_prefixOperatorMap (mProperty_lkey COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_prefixOperatorMap::description (C_String & /* ioString */, const int32_t /* inIndentation */) const {
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_prefixOperatorMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_prefixOperatorMap * operand = (cMapElement_prefixOperatorMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
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
  cMapElement_prefixOperatorMap * result = (cMapElement_prefixOperatorMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_prefixOperatorMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_prefixOperatorMap::cEnumerator_prefixOperatorMap (const GALGAS_prefixOperatorMap & inEnumeratedObject,
                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefixOperatorMap_2D_element cEnumerator_prefixOperatorMap::current (LOCATION_ARGS) const {
  const cMapElement_prefixOperatorMap * p = (const cMapElement_prefixOperatorMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_prefixOperatorMap) ;
  return GALGAS_prefixOperatorMap_2D_element (p->mProperty_lkey) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_prefixOperatorMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
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
mProperty_mIndex (in_mIndex) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_staticStringMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mIndex.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_staticStringMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_staticStringMap (mProperty_lkey, mProperty_mIndex COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_staticStringMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIndex" ":" ;
  mProperty_mIndex.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_staticStringMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_staticStringMap * operand = (cMapElement_staticStringMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mIndex.objectCompare (operand->mProperty_mIndex) ;
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
    outArgument0 = p->mProperty_mIndex ;
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
    result = p->mProperty_mIndex ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_staticStringMap::setter_setMIndexForKey (GALGAS_uint inAttributeValue,
                                                     GALGAS_string inKey,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_staticStringMap * p = (cMapElement_staticStringMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_staticStringMap) ;
    p->mProperty_mIndex = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_staticStringMap * GALGAS_staticStringMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                         const GALGAS_string & inKey
                                                                                         COMMA_LOCATION_ARGS) {
  cMapElement_staticStringMap * result = (cMapElement_staticStringMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_staticStringMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_staticStringMap::cEnumerator_staticStringMap (const GALGAS_staticStringMap & inEnumeratedObject,
                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticStringMap_2D_element cEnumerator_staticStringMap::current (LOCATION_ARGS) const {
  const cMapElement_staticStringMap * p = (const cMapElement_staticStringMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_staticStringMap) ;
  return GALGAS_staticStringMap_2D_element (p->mProperty_lkey, p->mProperty_mIndex) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_staticStringMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cEnumerator_staticStringMap::current_mIndex (LOCATION_ARGS) const {
  const cMapElement_staticStringMap * p = (const cMapElement_staticStringMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_staticStringMap) ;
  return p->mProperty_mIndex ;
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
  const enumGalgasBool test_1 = temp_0.getter_hasKey (inArgument_inString COMMA_SOURCE_FILE ("context.galgas", 34)).boolEnum () ;
  if (kBoolTrue == test_1) {
    const GALGAS_staticStringMap temp_2 = ioObject ;
    temp_2.method_searchKey (inArgument_inString.getter_nowhere (SOURCE_FILE ("context.galgas", 35)), outArgument_outIndex, inCompiler COMMA_SOURCE_FILE ("context.galgas", 35)) ;
  }else if (kBoolFalse == test_1) {
    const GALGAS_staticStringMap temp_3 = ioObject ;
    outArgument_outIndex = temp_3.getter_count (SOURCE_FILE ("context.galgas", 37)) ;
    {
    ioObject.setter_insertKey (inArgument_inString.getter_nowhere (SOURCE_FILE ("context.galgas", 38)), outArgument_outIndex, inCompiler COMMA_SOURCE_FILE ("context.galgas", 38)) ;
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*

cMapElement_globalConstantMap::cMapElement_globalConstantMap (const GALGAS_lstring & inKey,
                                                              const GALGAS_objectIR & in_mValue
                                                              COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mValue (in_mValue) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_globalConstantMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mValue.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_globalConstantMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_globalConstantMap (mProperty_lkey, mProperty_mValue COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_globalConstantMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mValue" ":" ;
  mProperty_mValue.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_globalConstantMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_globalConstantMap * operand = (cMapElement_globalConstantMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mValue.objectCompare (operand->mProperty_mValue) ;
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
    outArgument0 = p->mProperty_mValue ;
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
    result = p->mProperty_mValue ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_globalConstantMap::setter_setMValueForKey (GALGAS_objectIR inAttributeValue,
                                                       GALGAS_string inKey,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_globalConstantMap * p = (cMapElement_globalConstantMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_globalConstantMap) ;
    p->mProperty_mValue = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_globalConstantMap * GALGAS_globalConstantMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                             const GALGAS_string & inKey
                                                                                             COMMA_LOCATION_ARGS) {
  cMapElement_globalConstantMap * result = (cMapElement_globalConstantMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_globalConstantMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_globalConstantMap::cEnumerator_globalConstantMap (const GALGAS_globalConstantMap & inEnumeratedObject,
                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalConstantMap_2D_element cEnumerator_globalConstantMap::current (LOCATION_ARGS) const {
  const cMapElement_globalConstantMap * p = (const cMapElement_globalConstantMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_globalConstantMap) ;
  return GALGAS_globalConstantMap_2D_element (p->mProperty_lkey, p->mProperty_mValue) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_globalConstantMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR cEnumerator_globalConstantMap::current_mValue (LOCATION_ARGS) const {
  const cMapElement_globalConstantMap * p = (const cMapElement_globalConstantMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_globalConstantMap) ;
  return p->mProperty_mValue ;
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
  return mProperty_lkey.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_allowedGuardMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_allowedGuardMap (mProperty_lkey COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_allowedGuardMap::description (C_String & /* ioString */, const int32_t /* inIndentation */) const {
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_allowedGuardMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_allowedGuardMap * operand = (cMapElement_allowedGuardMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
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
  cMapElement_allowedGuardMap * result = (cMapElement_allowedGuardMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_allowedGuardMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_allowedGuardMap::cEnumerator_allowedGuardMap (const GALGAS_allowedGuardMap & inEnumeratedObject,
                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedGuardMap_2D_element cEnumerator_allowedGuardMap::current (LOCATION_ARGS) const {
  const cMapElement_allowedGuardMap * p = (const cMapElement_allowedGuardMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_allowedGuardMap) ;
  return GALGAS_allowedGuardMap_2D_element (p->mProperty_lkey) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_allowedGuardMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
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
                                                              const GALGAS_PLMType & in_type,
                                                              const GALGAS_stringset & in_executionModeSet,
                                                              const GALGAS_allowedGuardMap & in_allowedGuardMap,
                                                              const GALGAS_objectIR & in_initialValue,
                                                              const GALGAS_bool & in_isConstant,
                                                              const GALGAS_bool & in_allowedAccessToAll
                                                              COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_type (in_type),
mProperty_executionModeSet (in_executionModeSet),
mProperty_allowedGuardMap (in_allowedGuardMap),
mProperty_initialValue (in_initialValue),
mProperty_isConstant (in_isConstant),
mProperty_allowedAccessToAll (in_allowedAccessToAll) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_globalVariableMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_type.isValid () && mProperty_executionModeSet.isValid () && mProperty_allowedGuardMap.isValid () && mProperty_initialValue.isValid () && mProperty_isConstant.isValid () && mProperty_allowedAccessToAll.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_globalVariableMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_globalVariableMap (mProperty_lkey, mProperty_type, mProperty_executionModeSet, mProperty_allowedGuardMap, mProperty_initialValue, mProperty_isConstant, mProperty_allowedAccessToAll COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_globalVariableMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "type" ":" ;
  mProperty_type.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "executionModeSet" ":" ;
  mProperty_executionModeSet.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "allowedGuardMap" ":" ;
  mProperty_allowedGuardMap.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "initialValue" ":" ;
  mProperty_initialValue.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "isConstant" ":" ;
  mProperty_isConstant.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "allowedAccessToAll" ":" ;
  mProperty_allowedAccessToAll.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_globalVariableMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_globalVariableMap * operand = (cMapElement_globalVariableMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_type.objectCompare (operand->mProperty_type) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_executionModeSet.objectCompare (operand->mProperty_executionModeSet) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_allowedGuardMap.objectCompare (operand->mProperty_allowedGuardMap) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_initialValue.objectCompare (operand->mProperty_initialValue) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_isConstant.objectCompare (operand->mProperty_isConstant) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_allowedAccessToAll.objectCompare (operand->mProperty_allowedAccessToAll) ;
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
                                                    const GALGAS_PLMType & inArgument0,
                                                    const GALGAS_stringset & inArgument1,
                                                    const GALGAS_allowedGuardMap & inArgument2,
                                                    const GALGAS_objectIR & inArgument3,
                                                    const GALGAS_bool & inArgument4,
                                                    const GALGAS_bool & inArgument5,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  cMapElement_globalVariableMap * p = NULL ;
  macroMyNew (p, cMapElement_globalVariableMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4, inArgument5 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@globalVariableMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_globalVariableMap::setter_insertKey (GALGAS_lstring inKey,
                                                 GALGAS_PLMType inArgument0,
                                                 GALGAS_stringset inArgument1,
                                                 GALGAS_allowedGuardMap inArgument2,
                                                 GALGAS_objectIR inArgument3,
                                                 GALGAS_bool inArgument4,
                                                 GALGAS_bool inArgument5,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  cMapElement_globalVariableMap * p = NULL ;
  macroMyNew (p, cMapElement_globalVariableMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4, inArgument5 COMMA_HERE)) ;
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
                                                 GALGAS_PLMType & outArgument0,
                                                 GALGAS_stringset & outArgument1,
                                                 GALGAS_allowedGuardMap & outArgument2,
                                                 GALGAS_objectIR & outArgument3,
                                                 GALGAS_bool & outArgument4,
                                                 GALGAS_bool & outArgument5,
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
  }else{
    macroValidSharedObject (p, cMapElement_globalVariableMap) ;
    outArgument0 = p->mProperty_type ;
    outArgument1 = p->mProperty_executionModeSet ;
    outArgument2 = p->mProperty_allowedGuardMap ;
    outArgument3 = p->mProperty_initialValue ;
    outArgument4 = p->mProperty_isConstant ;
    outArgument5 = p->mProperty_allowedAccessToAll ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMType GALGAS_globalVariableMap::getter_typeForKey (const GALGAS_string & inKey,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_globalVariableMap * p = (const cMapElement_globalVariableMap *) attributes ;
  GALGAS_PLMType result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_globalVariableMap) ;
    result = p->mProperty_type ;
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
    result = p->mProperty_executionModeSet ;
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
    result = p->mProperty_allowedGuardMap ;
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
    result = p->mProperty_initialValue ;
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
    result = p->mProperty_isConstant ;
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
    result = p->mProperty_allowedAccessToAll ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_globalVariableMap::setter_setTypeForKey (GALGAS_PLMType inAttributeValue,
                                                     GALGAS_string inKey,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_globalVariableMap * p = (cMapElement_globalVariableMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_globalVariableMap) ;
    p->mProperty_type = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_globalVariableMap::setter_setExecutionModeSetForKey (GALGAS_stringset inAttributeValue,
                                                                 GALGAS_string inKey,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_globalVariableMap * p = (cMapElement_globalVariableMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_globalVariableMap) ;
    p->mProperty_executionModeSet = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_globalVariableMap::setter_setAllowedGuardMapForKey (GALGAS_allowedGuardMap inAttributeValue,
                                                                GALGAS_string inKey,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_globalVariableMap * p = (cMapElement_globalVariableMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_globalVariableMap) ;
    p->mProperty_allowedGuardMap = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_globalVariableMap::setter_setInitialValueForKey (GALGAS_objectIR inAttributeValue,
                                                             GALGAS_string inKey,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_globalVariableMap * p = (cMapElement_globalVariableMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_globalVariableMap) ;
    p->mProperty_initialValue = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_globalVariableMap::setter_setIsConstantForKey (GALGAS_bool inAttributeValue,
                                                           GALGAS_string inKey,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_globalVariableMap * p = (cMapElement_globalVariableMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_globalVariableMap) ;
    p->mProperty_isConstant = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_globalVariableMap::setter_setAllowedAccessToAllForKey (GALGAS_bool inAttributeValue,
                                                                   GALGAS_string inKey,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_globalVariableMap * p = (cMapElement_globalVariableMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_globalVariableMap) ;
    p->mProperty_allowedAccessToAll = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_globalVariableMap * GALGAS_globalVariableMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                             const GALGAS_string & inKey
                                                                                             COMMA_LOCATION_ARGS) {
  cMapElement_globalVariableMap * result = (cMapElement_globalVariableMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_globalVariableMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_globalVariableMap::cEnumerator_globalVariableMap (const GALGAS_globalVariableMap & inEnumeratedObject,
                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalVariableMap_2D_element cEnumerator_globalVariableMap::current (LOCATION_ARGS) const {
  const cMapElement_globalVariableMap * p = (const cMapElement_globalVariableMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_globalVariableMap) ;
  return GALGAS_globalVariableMap_2D_element (p->mProperty_lkey, p->mProperty_type, p->mProperty_executionModeSet, p->mProperty_allowedGuardMap, p->mProperty_initialValue, p->mProperty_isConstant, p->mProperty_allowedAccessToAll) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_globalVariableMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMType cEnumerator_globalVariableMap::current_type (LOCATION_ARGS) const {
  const cMapElement_globalVariableMap * p = (const cMapElement_globalVariableMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_globalVariableMap) ;
  return p->mProperty_type ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringset cEnumerator_globalVariableMap::current_executionModeSet (LOCATION_ARGS) const {
  const cMapElement_globalVariableMap * p = (const cMapElement_globalVariableMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_globalVariableMap) ;
  return p->mProperty_executionModeSet ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedGuardMap cEnumerator_globalVariableMap::current_allowedGuardMap (LOCATION_ARGS) const {
  const cMapElement_globalVariableMap * p = (const cMapElement_globalVariableMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_globalVariableMap) ;
  return p->mProperty_allowedGuardMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR cEnumerator_globalVariableMap::current_initialValue (LOCATION_ARGS) const {
  const cMapElement_globalVariableMap * p = (const cMapElement_globalVariableMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_globalVariableMap) ;
  return p->mProperty_initialValue ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_globalVariableMap::current_isConstant (LOCATION_ARGS) const {
  const cMapElement_globalVariableMap * p = (const cMapElement_globalVariableMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_globalVariableMap) ;
  return p->mProperty_isConstant ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_globalVariableMap::current_allowedAccessToAll (LOCATION_ARGS) const {
  const cMapElement_globalVariableMap * p = (const cMapElement_globalVariableMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_globalVariableMap) ;
  return p->mProperty_allowedAccessToAll ;
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
  macroMyNew (result, cCollectionElement_operandList (mObject.mProperty_mOperand COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_operandList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOperand" ":" ;
  mObject.mProperty_mOperand.description (ioString, inIndentation) ;
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

GALGAS_operandList::GALGAS_operandList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandList GALGAS_operandList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_operandList  (capCollectionElementArray ()) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandList GALGAS_operandList::constructor_listWithValue (const GALGAS_objectIR & inOperand0
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_operandList result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_operandList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_operandList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
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
    appendObject (attributes) ;
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
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
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
      outOperand0 = p->mObject.mProperty_mOperand ;
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
    outOperand0 = p->mObject.mProperty_mOperand ;
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
    outOperand0 = p->mObject.mProperty_mOperand ;
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
    outOperand0 = p->mObject.mProperty_mOperand ;
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
    outOperand0 = p->mObject.mProperty_mOperand ;
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
    result = p->mObject.mProperty_mOperand ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_operandList::cEnumerator_operandList (const GALGAS_operandList & inEnumeratedObject,
                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
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
  return p->mObject.mProperty_mOperand ;
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
mProperty_mInitValue (in_mInitValue) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_constructorMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mInitValue.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_constructorMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_constructorMap (mProperty_lkey, mProperty_mInitValue COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_constructorMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInitValue" ":" ;
  mProperty_mInitValue.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_constructorMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_constructorMap * operand = (cMapElement_constructorMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mInitValue.objectCompare (operand->mProperty_mInitValue) ;
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
    outArgument0 = p->mProperty_mInitValue ;
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
    result = p->mProperty_mInitValue ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_constructorMap::setter_setMInitValueForKey (GALGAS_constructorValue inAttributeValue,
                                                        GALGAS_string inKey,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_constructorMap * p = (cMapElement_constructorMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_constructorMap) ;
    p->mProperty_mInitValue = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_constructorMap * GALGAS_constructorMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                       const GALGAS_string & inKey
                                                                                       COMMA_LOCATION_ARGS) {
  cMapElement_constructorMap * result = (cMapElement_constructorMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_constructorMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_constructorMap::cEnumerator_constructorMap (const GALGAS_constructorMap & inEnumeratedObject,
                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorMap_2D_element cEnumerator_constructorMap::current (LOCATION_ARGS) const {
  const cMapElement_constructorMap * p = (const cMapElement_constructorMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_constructorMap) ;
  return GALGAS_constructorMap_2D_element (p->mProperty_lkey, p->mProperty_mInitValue) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_constructorMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorValue cEnumerator_constructorMap::current_mInitValue (LOCATION_ARGS) const {
  const cMapElement_constructorMap * p = (const cMapElement_constructorMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_constructorMap) ;
  return p->mProperty_mInitValue ;
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
mProperty_mInterruptionPanicCode (in_mInterruptionPanicCode) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_availableInterruptMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mInterruptionPanicCode.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_availableInterruptMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_availableInterruptMap (mProperty_lkey, mProperty_mInterruptionPanicCode COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_availableInterruptMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInterruptionPanicCode" ":" ;
  mProperty_mInterruptionPanicCode.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_availableInterruptMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_availableInterruptMap * operand = (cMapElement_availableInterruptMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mInterruptionPanicCode.objectCompare (operand->mProperty_mInterruptionPanicCode) ;
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
    outArgument0 = p->mProperty_mInterruptionPanicCode ;
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
    result = p->mProperty_mInterruptionPanicCode ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_availableInterruptMap::setter_setMInterruptionPanicCodeForKey (GALGAS_interruptionPanicCode inAttributeValue,
                                                                           GALGAS_string inKey,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_availableInterruptMap * p = (cMapElement_availableInterruptMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_availableInterruptMap) ;
    p->mProperty_mInterruptionPanicCode = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_availableInterruptMap * GALGAS_availableInterruptMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                     const GALGAS_string & inKey
                                                                                                     COMMA_LOCATION_ARGS) {
  cMapElement_availableInterruptMap * result = (cMapElement_availableInterruptMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_availableInterruptMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_availableInterruptMap::cEnumerator_availableInterruptMap (const GALGAS_availableInterruptMap & inEnumeratedObject,
                                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_availableInterruptMap_2D_element cEnumerator_availableInterruptMap::current (LOCATION_ARGS) const {
  const cMapElement_availableInterruptMap * p = (const cMapElement_availableInterruptMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_availableInterruptMap) ;
  return GALGAS_availableInterruptMap_2D_element (p->mProperty_lkey, p->mProperty_mInterruptionPanicCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_availableInterruptMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_interruptionPanicCode cEnumerator_availableInterruptMap::current_mInterruptionPanicCode (LOCATION_ARGS) const {
  const cMapElement_availableInterruptMap * p = (const cMapElement_availableInterruptMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_availableInterruptMap) ;
  return p->mProperty_mInterruptionPanicCode ;
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
  macroMyNew (result, cCollectionElement_globalTaskVariableList (mObject.mProperty_mTaskName, mObject.mProperty_mTaskTypeName, mObject.mProperty_mInitialValue COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_globalTaskVariableList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTaskName" ":" ;
  mObject.mProperty_mTaskName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTaskTypeName" ":" ;
  mObject.mProperty_mTaskTypeName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInitialValue" ":" ;
  mObject.mProperty_mInitialValue.description (ioString, inIndentation) ;
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

GALGAS_globalTaskVariableList::GALGAS_globalTaskVariableList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalTaskVariableList GALGAS_globalTaskVariableList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_globalTaskVariableList  (capCollectionElementArray ()) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalTaskVariableList GALGAS_globalTaskVariableList::constructor_listWithValue (const GALGAS_string & inOperand0,
                                                                                        const GALGAS_string & inOperand1,
                                                                                        const GALGAS_objectIR & inOperand2
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_globalTaskVariableList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_globalTaskVariableList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_globalTaskVariableList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
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
    appendObject (attributes) ;
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
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
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
      outOperand0 = p->mObject.mProperty_mTaskName ;
      outOperand1 = p->mObject.mProperty_mTaskTypeName ;
      outOperand2 = p->mObject.mProperty_mInitialValue ;
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
    outOperand0 = p->mObject.mProperty_mTaskName ;
    outOperand1 = p->mObject.mProperty_mTaskTypeName ;
    outOperand2 = p->mObject.mProperty_mInitialValue ;
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
    outOperand0 = p->mObject.mProperty_mTaskName ;
    outOperand1 = p->mObject.mProperty_mTaskTypeName ;
    outOperand2 = p->mObject.mProperty_mInitialValue ;
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
    outOperand0 = p->mObject.mProperty_mTaskName ;
    outOperand1 = p->mObject.mProperty_mTaskTypeName ;
    outOperand2 = p->mObject.mProperty_mInitialValue ;
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
    outOperand0 = p->mObject.mProperty_mTaskName ;
    outOperand1 = p->mObject.mProperty_mTaskTypeName ;
    outOperand2 = p->mObject.mProperty_mInitialValue ;
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
    result = p->mObject.mProperty_mTaskName ;
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
    result = p->mObject.mProperty_mTaskTypeName ;
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
    result = p->mObject.mProperty_mInitialValue ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_globalTaskVariableList::cEnumerator_globalTaskVariableList (const GALGAS_globalTaskVariableList & inEnumeratedObject,
                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
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
  return p->mObject.mProperty_mTaskName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_globalTaskVariableList::current_mTaskTypeName (LOCATION_ARGS) const {
  const cCollectionElement_globalTaskVariableList * p = (const cCollectionElement_globalTaskVariableList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_globalTaskVariableList) ;
  return p->mObject.mProperty_mTaskTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR cEnumerator_globalTaskVariableList::current_mInitialValue (LOCATION_ARGS) const {
  const cCollectionElement_globalTaskVariableList * p = (const cCollectionElement_globalTaskVariableList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_globalTaskVariableList) ;
  return p->mObject.mProperty_mInitialValue ;
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

cMapElement_unifiedTypeMap::cMapElement_unifiedTypeMap (const GALGAS_lstring & inKey,
                                                        const GALGAS_PLMType & in_type
                                                        COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_type (in_type) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_unifiedTypeMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_type.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_unifiedTypeMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_unifiedTypeMap (mProperty_lkey, mProperty_type COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_unifiedTypeMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "type" ":" ;
  mProperty_type.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_unifiedTypeMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_unifiedTypeMap * operand = (cMapElement_unifiedTypeMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_type.objectCompare (operand->mProperty_type) ;
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
                                               GALGAS_PLMType inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  cMapElement_unifiedTypeMap * p = NULL ;
  macroMyNew (p, cMapElement_unifiedTypeMap (inKey, inArgument0 COMMA_HERE)) ;
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
                                              GALGAS_PLMType & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) performSearch (inKey,
                                                                                               inCompiler,
                                                                                               kSearchErrorMessage_unifiedTypeMap_searchKey
                                                                                               COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    outArgument0 = p->mProperty_type ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMType GALGAS_unifiedTypeMap::getter_typeForKey (const GALGAS_string & inKey,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) attributes ;
  GALGAS_PLMType result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mProperty_type ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMap::setter_setTypeForKey (GALGAS_PLMType inAttributeValue,
                                                  GALGAS_string inKey,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_unifiedTypeMap * p = (cMapElement_unifiedTypeMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    p->mProperty_type = inAttributeValue ;
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
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_unifiedTypeMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMType cEnumerator_unifiedTypeMap::current_type (LOCATION_ARGS) const {
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
  return p->mProperty_type ;
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
                                         GALGAS_staticlistValues_5F_listMap & io_ioStaticListValueMap,
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
      f (inObject, constin_inProcedureListAST, io_ioContext, io_ioStaticListValueMap, io_ioGlobalLiteralStringMap, inCompiler COMMA_THERE) ;
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
//                                        Extension Getter '@PLMType equatable'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool extensionGetter_equatable (const GALGAS_PLMType & inObject,
                                       C_Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  const GALGAS_PLMType temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_PLMType::kNotBuilt:
    break ;
  case GALGAS_PLMType::kEnum_void:
    {
      result_result = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_PLMType::kEnum_boolean:
    {
      result_result = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_PLMType::kEnum_literalString:
  case GALGAS_PLMType::kEnum_staticInteger:
    {
      result_result = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_PLMType::kEnum_enumeration:
    {
      result_result = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_PLMType::kEnum_structure:
    {
      const cEnumAssociatedValues_PLMType_structure * extractPtr_2514 = (const cEnumAssociatedValues_PLMType_structure *) (temp_0.unsafePointer ()) ;
      const GALGAS_uint extractedValue_flags = extractPtr_2514->mAssociatedValue4 ;
      result_result = GALGAS_bool (kIsNotEqual, extractedValue_flags.operator_and (function_equatableFlag (inCompiler COMMA_SOURCE_FILE ("types.galgas", 60)) COMMA_SOURCE_FILE ("types.galgas", 60)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
    }
    break ;
  case GALGAS_PLMType::kEnum_integer:
    {
      result_result = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_PLMType::kEnum_opaque:
    {
      const cEnumAssociatedValues_PLMType_opaque * extractPtr_2640 = (const cEnumAssociatedValues_PLMType_opaque *) (temp_0.unsafePointer ()) ;
      const GALGAS_uint extractedValue_flags = extractPtr_2640->mAssociatedValue1 ;
      result_result = GALGAS_bool (kIsNotEqual, extractedValue_flags.operator_and (function_equatableFlag (inCompiler COMMA_SOURCE_FILE ("types.galgas", 64)) COMMA_SOURCE_FILE ("types.galgas", 64)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
    }
    break ;
  case GALGAS_PLMType::kEnum_arrayType:
    {
      const cEnumAssociatedValues_PLMType_arrayType * extractPtr_2728 = (const cEnumAssociatedValues_PLMType_arrayType *) (temp_0.unsafePointer ()) ;
      const GALGAS_uint extractedValue_flags = extractPtr_2728->mAssociatedValue4 ;
      result_result = GALGAS_bool (kIsNotEqual, extractedValue_flags.operator_and (function_equatableFlag (inCompiler COMMA_SOURCE_FILE ("types.galgas", 66)) COMMA_SOURCE_FILE ("types.galgas", 66)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
    }
    break ;
  case GALGAS_PLMType::kEnum_function:
    {
      result_result = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_PLMType::kEnum_pointer:
    {
      result_result = GALGAS_bool (false) ;
    }
    break ;
  }
//---
  return result_result ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Extension Getter '@PLMType instanciable'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool extensionGetter_instanciable (const GALGAS_PLMType & inObject,
                                          C_Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  const GALGAS_PLMType temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_PLMType::kNotBuilt:
    break ;
  case GALGAS_PLMType::kEnum_void:
    {
      result_result = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_PLMType::kEnum_boolean:
    {
      result_result = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_PLMType::kEnum_literalString:
  case GALGAS_PLMType::kEnum_staticInteger:
    {
      result_result = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_PLMType::kEnum_enumeration:
    {
      result_result = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_PLMType::kEnum_structure:
    {
      const cEnumAssociatedValues_PLMType_structure * extractPtr_3471 = (const cEnumAssociatedValues_PLMType_structure *) (temp_0.unsafePointer ()) ;
      const GALGAS_uint extractedValue_flags = extractPtr_3471->mAssociatedValue4 ;
      result_result = GALGAS_bool (kIsNotEqual, extractedValue_flags.operator_and (function_instanciableFlag (inCompiler COMMA_SOURCE_FILE ("types.galgas", 93)) COMMA_SOURCE_FILE ("types.galgas", 93)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
    }
    break ;
  case GALGAS_PLMType::kEnum_integer:
    {
      result_result = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_PLMType::kEnum_opaque:
    {
      const cEnumAssociatedValues_PLMType_opaque * extractPtr_3600 = (const cEnumAssociatedValues_PLMType_opaque *) (temp_0.unsafePointer ()) ;
      const GALGAS_uint extractedValue_flags = extractPtr_3600->mAssociatedValue1 ;
      result_result = GALGAS_bool (kIsNotEqual, extractedValue_flags.operator_and (function_instanciableFlag (inCompiler COMMA_SOURCE_FILE ("types.galgas", 97)) COMMA_SOURCE_FILE ("types.galgas", 97)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
    }
    break ;
  case GALGAS_PLMType::kEnum_arrayType:
    {
      const cEnumAssociatedValues_PLMType_arrayType * extractPtr_3691 = (const cEnumAssociatedValues_PLMType_arrayType *) (temp_0.unsafePointer ()) ;
      const GALGAS_uint extractedValue_flags = extractPtr_3691->mAssociatedValue4 ;
      result_result = GALGAS_bool (kIsNotEqual, extractedValue_flags.operator_and (function_instanciableFlag (inCompiler COMMA_SOURCE_FILE ("types.galgas", 99)) COMMA_SOURCE_FILE ("types.galgas", 99)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
    }
    break ;
  case GALGAS_PLMType::kEnum_function:
    {
      result_result = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_PLMType::kEnum_pointer:
    {
      result_result = GALGAS_bool (false) ;
    }
    break ;
  }
//---
  return result_result ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Extension Getter '@PLMType copyable'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool extensionGetter_copyable (const GALGAS_PLMType & inObject,
                                      C_Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  const GALGAS_PLMType temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_PLMType::kNotBuilt:
    break ;
  case GALGAS_PLMType::kEnum_void:
    {
      result_result = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_PLMType::kEnum_boolean:
    {
      result_result = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_PLMType::kEnum_literalString:
  case GALGAS_PLMType::kEnum_staticInteger:
    {
      result_result = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_PLMType::kEnum_enumeration:
    {
      result_result = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_PLMType::kEnum_structure:
    {
      const cEnumAssociatedValues_PLMType_structure * extractPtr_4418 = (const cEnumAssociatedValues_PLMType_structure *) (temp_0.unsafePointer ()) ;
      const GALGAS_uint extractedValue_flags = extractPtr_4418->mAssociatedValue4 ;
      result_result = GALGAS_bool (kIsNotEqual, extractedValue_flags.operator_and (function_copyableFlag (inCompiler COMMA_SOURCE_FILE ("types.galgas", 126)) COMMA_SOURCE_FILE ("types.galgas", 126)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
    }
    break ;
  case GALGAS_PLMType::kEnum_integer:
    {
      result_result = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_PLMType::kEnum_opaque:
    {
      const cEnumAssociatedValues_PLMType_opaque * extractPtr_4543 = (const cEnumAssociatedValues_PLMType_opaque *) (temp_0.unsafePointer ()) ;
      const GALGAS_uint extractedValue_flags = extractPtr_4543->mAssociatedValue1 ;
      result_result = GALGAS_bool (kIsNotEqual, extractedValue_flags.operator_and (function_copyableFlag (inCompiler COMMA_SOURCE_FILE ("types.galgas", 130)) COMMA_SOURCE_FILE ("types.galgas", 130)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
    }
    break ;
  case GALGAS_PLMType::kEnum_arrayType:
    {
      const cEnumAssociatedValues_PLMType_arrayType * extractPtr_4630 = (const cEnumAssociatedValues_PLMType_arrayType *) (temp_0.unsafePointer ()) ;
      const GALGAS_uint extractedValue_flags = extractPtr_4630->mAssociatedValue4 ;
      result_result = GALGAS_bool (kIsNotEqual, extractedValue_flags.operator_and (function_copyableFlag (inCompiler COMMA_SOURCE_FILE ("types.galgas", 132)) COMMA_SOURCE_FILE ("types.galgas", 132)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
    }
    break ;
  case GALGAS_PLMType::kEnum_function:
    {
      result_result = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_PLMType::kEnum_pointer:
    {
      result_result = GALGAS_bool (false) ;
    }
    break ;
  }
//---
  return result_result ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Extension Getter '@PLMType classConstantMap'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constantMap extensionGetter_classConstantMap (const GALGAS_PLMType & inObject,
                                                     C_Compiler * /* inCompiler */
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_constantMap result_result ; // Returned variable
  const GALGAS_PLMType temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_PLMType::kNotBuilt:
    break ;
  case GALGAS_PLMType::kEnum_boolean:
  case GALGAS_PLMType::kEnum_literalString:
  case GALGAS_PLMType::kEnum_staticInteger:
  case GALGAS_PLMType::kEnum_void:
    {
      result_result = GALGAS_constantMap::constructor_emptyMap (SOURCE_FILE ("types.galgas", 145)) ;
    }
    break ;
  case GALGAS_PLMType::kEnum_enumeration:
    {
      const cEnumAssociatedValues_PLMType_enumeration * extractPtr_5040 = (const cEnumAssociatedValues_PLMType_enumeration *) (temp_0.unsafePointer ()) ;
      const GALGAS_constantMap extractedValue_constantMap = extractPtr_5040->mAssociatedValue0 ;
      result_result = extractedValue_constantMap ;
    }
    break ;
  case GALGAS_PLMType::kEnum_structure:
    {
      result_result = GALGAS_constantMap::constructor_emptyMap (SOURCE_FILE ("types.galgas", 149)) ;
    }
    break ;
  case GALGAS_PLMType::kEnum_integer:
    {
      result_result = GALGAS_constantMap::constructor_emptyMap (SOURCE_FILE ("types.galgas", 151)) ;
    }
    break ;
  case GALGAS_PLMType::kEnum_opaque:
    {
      result_result = GALGAS_constantMap::constructor_emptyMap (SOURCE_FILE ("types.galgas", 153)) ;
    }
    break ;
  case GALGAS_PLMType::kEnum_arrayType:
    {
      const cEnumAssociatedValues_PLMType_arrayType * extractPtr_5255 = (const cEnumAssociatedValues_PLMType_arrayType *) (temp_0.unsafePointer ()) ;
      const GALGAS_constantMap extractedValue_constantMap = extractPtr_5255->mAssociatedValue3 ;
      result_result = extractedValue_constantMap ;
    }
    break ;
  case GALGAS_PLMType::kEnum_function:
    {
      result_result = GALGAS_constantMap::constructor_emptyMap (SOURCE_FILE ("types.galgas", 157)) ;
    }
    break ;
  case GALGAS_PLMType::kEnum_pointer:
    {
      result_result = GALGAS_constantMap::constructor_emptyMap (SOURCE_FILE ("types.galgas", 159)) ;
    }
    break ;
  }
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
  switch (temp_0.enumValue ()) {
  case GALGAS_PLMType::kNotBuilt:
    break ;
  case GALGAS_PLMType::kEnum_void:
    {
      result_result = GALGAS_string ("void") ;
    }
    break ;
  case GALGAS_PLMType::kEnum_boolean:
    {
      result_result = GALGAS_string ("i1") ;
    }
    break ;
  case GALGAS_PLMType::kEnum_literalString:
    {
      result_result = GALGAS_string ("i8*") ;
    }
    break ;
  case GALGAS_PLMType::kEnum_enumeration:
    {
      const cEnumAssociatedValues_PLMType_enumeration * extractPtr_5745 = (const cEnumAssociatedValues_PLMType_enumeration *) (temp_0.unsafePointer ()) ;
      const GALGAS_constantMap extractedValue_constantMap = extractPtr_5745->mAssociatedValue0 ;
      result_result = GALGAS_string ("i").add_operation (extractedValue_constantMap.getter_count (SOURCE_FILE ("types.galgas", 174)).substract_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("types.galgas", 174)).getter_significantBitCount (SOURCE_FILE ("types.galgas", 174)).getter_string (SOURCE_FILE ("types.galgas", 174)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 174)) ;
    }
    break ;
  case GALGAS_PLMType::kEnum_structure:
    {
      const cEnumAssociatedValues_PLMType_structure * extractPtr_5886 = (const cEnumAssociatedValues_PLMType_structure *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_typeName = extractPtr_5886->mAssociatedValue0 ;
      result_result = GALGAS_string ("%").add_operation (function_llvmRegularTypeMangledNameFromName (extractedValue_typeName, inCompiler COMMA_SOURCE_FILE ("types.galgas", 176)).getter_string (HERE).getter_assemblerRepresentation (SOURCE_FILE ("types.galgas", 176)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 176)) ;
    }
    break ;
  case GALGAS_PLMType::kEnum_integer:
    {
      const cEnumAssociatedValues_PLMType_integer * extractPtr_6010 = (const cEnumAssociatedValues_PLMType_integer *) (temp_0.unsafePointer ()) ;
      const GALGAS_bigint extractedValue_min = extractPtr_6010->mAssociatedValue0 ;
      const GALGAS_bigint extractedValue_max = extractPtr_6010->mAssociatedValue1 ;
      const GALGAS_bool extractedValue_unsigned = extractPtr_6010->mAssociatedValue2 ;
      const GALGAS_uint extractedValue_bitCount = extractPtr_6010->mAssociatedValue3 ;
      result_result = GALGAS_string ("i").add_operation (extractedValue_bitCount.getter_string (SOURCE_FILE ("types.galgas", 178)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 178)) ;
    }
    break ;
  case GALGAS_PLMType::kEnum_staticInteger:
    {
      result_result = GALGAS_string ("\xE2""\x80""\x94""") ;
    }
    break ;
  case GALGAS_PLMType::kEnum_opaque:
    {
      const cEnumAssociatedValues_PLMType_opaque * extractPtr_6117 = (const cEnumAssociatedValues_PLMType_opaque *) (temp_0.unsafePointer ()) ;
      const GALGAS_bigint extractedValue_bitCount = extractPtr_6117->mAssociatedValue0 ;
      result_result = GALGAS_string ("i").add_operation (extractedValue_bitCount.getter_string (SOURCE_FILE ("types.galgas", 182)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 182)) ;
    }
    break ;
  case GALGAS_PLMType::kEnum_arrayType:
    {
      const cEnumAssociatedValues_PLMType_arrayType * extractPtr_6220 = (const cEnumAssociatedValues_PLMType_arrayType *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_typeName = extractPtr_6220->mAssociatedValue0 ;
      result_result = GALGAS_string ("%").add_operation (extractedValue_typeName.getter_string (HERE).getter_assemblerRepresentation (SOURCE_FILE ("types.galgas", 184)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 184)) ;
    }
    break ;
  case GALGAS_PLMType::kEnum_function:
    {
      const cEnumAssociatedValues_PLMType_function * extractPtr_6685 = (const cEnumAssociatedValues_PLMType_function *) (temp_0.unsafePointer ()) ;
      const GALGAS_routineDescriptor extractedValue_descriptor = extractPtr_6685->mAssociatedValue0 ;
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, extractedValue_descriptor.getter_mReturnTypeProxy (HERE).objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("types.galgas", 186)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        result_result = GALGAS_string ("void") ;
      }else if (kBoolFalse == test_1) {
        result_result = extensionGetter_llvmTypeName (extractedValue_descriptor.getter_mReturnTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("types.galgas", 189)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 189)) ;
      }
      result_result.plusAssign_operation(GALGAS_string ("("), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 191)) ;
      cEnumerator_routineTypedSignature enumerator_6458 (extractedValue_descriptor.getter_mSignature (HERE), kENUMERATION_UP) ;
      while (enumerator_6458.hasCurrentObject ()) {
        result_result.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_6458.current_mTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("types.galgas", 194)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 194)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 194)) ;
        switch (enumerator_6458.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
        case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
          break ;
        case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
        case GALGAS_procFormalArgumentPassingMode::kEnum_output:
          {
            result_result.plusAssign_operation(GALGAS_string ("*"), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 196)) ;
          }
          break ;
        case GALGAS_procFormalArgumentPassingMode::kEnum_input:
          {
          }
          break ;
        }
        if (enumerator_6458.hasNextObject ()) {
          result_result.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 199)) ;
        }
        enumerator_6458.gotoNextObject () ;
      }
      result_result.plusAssign_operation(GALGAS_string (")*"), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 201)) ;
    }
    break ;
  case GALGAS_PLMType::kEnum_pointer:
    {
      const cEnumAssociatedValues_PLMType_pointer * extractPtr_6754 = (const cEnumAssociatedValues_PLMType_pointer *) (temp_0.unsafePointer ()) ;
      const GALGAS_PLMType extractedValue_pointee = extractPtr_6754->mAssociatedValue0 ;
      result_result = extensionGetter_llvmTypeName (extractedValue_pointee, inCompiler COMMA_SOURCE_FILE ("types.galgas", 203)).add_operation (GALGAS_string ("*"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 203)) ;
    }
    break ;
  }
//---
  return result_result ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Extension Getter '@PLMType key'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string extensionGetter_key (const GALGAS_PLMType & inObject,
                                   C_Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_PLMType temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_PLMType::kNotBuilt:
    break ;
  case GALGAS_PLMType::kEnum_void:
    {
      result_result = GALGAS_string ("void") ;
    }
    break ;
  case GALGAS_PLMType::kEnum_boolean:
    {
      result_result = function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("types.galgas", 214)) ;
    }
    break ;
  case GALGAS_PLMType::kEnum_literalString:
    {
      result_result = function_staticStringTypeName (inCompiler COMMA_SOURCE_FILE ("types.galgas", 216)) ;
    }
    break ;
  case GALGAS_PLMType::kEnum_enumeration:
    {
      const cEnumAssociatedValues_PLMType_enumeration * extractPtr_7134 = (const cEnumAssociatedValues_PLMType_enumeration *) (temp_0.unsafePointer ()) ;
      const GALGAS_string extractedValue_plmTypeName = extractPtr_7134->mAssociatedValue1 ;
      result_result = extractedValue_plmTypeName ;
    }
    break ;
  case GALGAS_PLMType::kEnum_structure:
    {
      const cEnumAssociatedValues_PLMType_structure * extractPtr_7202 = (const cEnumAssociatedValues_PLMType_structure *) (temp_0.unsafePointer ()) ;
      const GALGAS_string extractedValue_plmTypeName = extractPtr_7202->mAssociatedValue5 ;
      result_result = extractedValue_plmTypeName ;
    }
    break ;
  case GALGAS_PLMType::kEnum_integer:
    {
      const cEnumAssociatedValues_PLMType_integer * extractPtr_7266 = (const cEnumAssociatedValues_PLMType_integer *) (temp_0.unsafePointer ()) ;
      const GALGAS_string extractedValue_plmTypeName = extractPtr_7266->mAssociatedValue4 ;
      result_result = extractedValue_plmTypeName ;
    }
    break ;
  case GALGAS_PLMType::kEnum_staticInteger:
    {
      result_result = function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("types.galgas", 224)) ;
    }
    break ;
  case GALGAS_PLMType::kEnum_opaque:
    {
      const cEnumAssociatedValues_PLMType_opaque * extractPtr_7386 = (const cEnumAssociatedValues_PLMType_opaque *) (temp_0.unsafePointer ()) ;
      const GALGAS_string extractedValue_plmTypeName = extractPtr_7386->mAssociatedValue2 ;
      result_result = extractedValue_plmTypeName ;
    }
    break ;
  case GALGAS_PLMType::kEnum_arrayType:
    {
      const cEnumAssociatedValues_PLMType_arrayType * extractPtr_7454 = (const cEnumAssociatedValues_PLMType_arrayType *) (temp_0.unsafePointer ()) ;
      const GALGAS_string extractedValue_plmTypeName = extractPtr_7454->mAssociatedValue5 ;
      result_result = extractedValue_plmTypeName ;
    }
    break ;
  case GALGAS_PLMType::kEnum_function:
    {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("types.galgas", 230)).getter_location (SOURCE_FILE ("types.galgas", 230)), GALGAS_string ("\xC2""\xAB""internal error @PLMType key function\xC2""\xBB"""), fixItArray1  COMMA_SOURCE_FILE ("types.galgas", 230)) ;
      result_result.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_PLMType::kEnum_pointer:
    {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("types.galgas", 232)).getter_location (SOURCE_FILE ("types.galgas", 232)), GALGAS_string ("\xC2""\xAB""internal error @PLMType key pointer\xC2""\xBB"""), fixItArray2  COMMA_SOURCE_FILE ("types.galgas", 232)) ;
      result_result.drop () ; // Release error dropped variable
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
  switch (temp_0.enumValue ()) {
  case GALGAS_PLMType::kNotBuilt:
    break ;
  case GALGAS_PLMType::kEnum_void:
    {
      result_result = GALGAS_string ("Void") ;
    }
    break ;
  case GALGAS_PLMType::kEnum_boolean:
    {
      result_result = GALGAS_string ("Boolean") ;
    }
    break ;
  case GALGAS_PLMType::kEnum_literalString:
    {
      result_result = GALGAS_string ("Literal String") ;
    }
    break ;
  case GALGAS_PLMType::kEnum_enumeration:
    {
      result_result = GALGAS_string ("Enumeration") ;
    }
    break ;
  case GALGAS_PLMType::kEnum_structure:
    {
      result_result = GALGAS_string ("Structure") ;
    }
    break ;
  case GALGAS_PLMType::kEnum_integer:
    {
      const cEnumAssociatedValues_PLMType_integer * extractPtr_8293 = (const cEnumAssociatedValues_PLMType_integer *) (temp_0.unsafePointer ()) ;
      const GALGAS_bool extractedValue_unsigned = extractPtr_8293->mAssociatedValue2 ;
      const GALGAS_uint extractedValue_bitCount = extractPtr_8293->mAssociatedValue3 ;
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
      result_result = GALGAS_string ("Integer (").add_operation (extractedValue_bitCount.getter_string (SOURCE_FILE ("types.galgas", 251)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 251)).add_operation (GALGAS_string (" bit"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 251)).add_operation (temp_1, inCompiler COMMA_SOURCE_FILE ("types.galgas", 251)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 251)).add_operation (temp_3, inCompiler COMMA_SOURCE_FILE ("types.galgas", 252)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 252)) ;
    }
    break ;
  case GALGAS_PLMType::kEnum_staticInteger:
    {
      result_result = GALGAS_string ("Static Integer") ;
    }
    break ;
  case GALGAS_PLMType::kEnum_opaque:
    {
      const cEnumAssociatedValues_PLMType_opaque * extractPtr_8431 = (const cEnumAssociatedValues_PLMType_opaque *) (temp_0.unsafePointer ()) ;
      const GALGAS_bigint extractedValue_bitCount = extractPtr_8431->mAssociatedValue0 ;
      result_result = GALGAS_string ("Opaque (").add_operation (extractedValue_bitCount.getter_string (SOURCE_FILE ("types.galgas", 256)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 256)).add_operation (GALGAS_string (" bits)"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 256)) ;
    }
    break ;
  case GALGAS_PLMType::kEnum_arrayType:
    {
      result_result = GALGAS_string ("Array") ;
    }
    break ;
  case GALGAS_PLMType::kEnum_function:
    {
      result_result = GALGAS_string ("Function") ;
    }
    break ;
  case GALGAS_PLMType::kEnum_pointer:
    {
      const cEnumAssociatedValues_PLMType_pointer * extractPtr_8610 = (const cEnumAssociatedValues_PLMType_pointer *) (temp_0.unsafePointer ()) ;
      const GALGAS_PLMType extractedValue_pointee = extractPtr_8610->mAssociatedValue0 ;
      result_result = GALGAS_string ("Pointer to ").add_operation (extensionGetter_llvmTypeName (extractedValue_pointee, inCompiler COMMA_SOURCE_FILE ("types.galgas", 262)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 262)) ;
    }
    break ;
  }
//---
  return result_result ;
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
  const char * kErrorMessage = "the '%K' routine is already declared at %L" ;
  internalAddNode (inKey, kErrorMessage, attributes, inCompiler COMMA_THERE) ;
}


//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_subprogramInvocationGraph::method_topologicalSort (GALGAS_lstringlist & outSortedList,
                                                               GALGAS_lstringlist & outSortedKeyList,
                                                               GALGAS_lstringlist & outUnsortedList,
                                                               GALGAS_lstringlist & outUnsortedKeyList,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElementArray sortedList ;
  capCollectionElementArray unsortedList ;
  internalTopologicalSort (sortedList, outSortedKeyList, unsortedList, outUnsortedKeyList, inCompiler COMMA_THERE) ;
  outSortedList = GALGAS_lstringlist (sortedList) ;
  outUnsortedList = GALGAS_lstringlist (unsortedList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_subprogramInvocationGraph::method_depthFirstTopologicalSort (GALGAS_lstringlist & outSortedList,
                                                                         GALGAS_lstringlist & outSortedKeyList,
                                                                         GALGAS_lstringlist & outUnsortedList,
                                                                         GALGAS_lstringlist & outUnsortedKeyList,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElementArray sortedList ;
  capCollectionElementArray unsortedList ;
  internalDepthFirstTopologicalSort (sortedList, outSortedKeyList, unsortedList, outUnsortedKeyList, inCompiler COMMA_THERE) ;
  outSortedList = GALGAS_lstringlist (sortedList) ;
  outUnsortedList = GALGAS_lstringlist (unsortedList) ;
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
  capCollectionElementArray infoList ;
  internalFindCircularities (infoList, outKeyList COMMA_THERE) ;
  outInfoList = GALGAS_lstringlist (infoList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_subprogramInvocationGraph::method_nodesWithNoSuccessor (GALGAS_lstringlist & outInfoList,
                                                                    GALGAS_lstringlist & outKeyList
                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElementArray infoList ;
  internalNodesWithNoSuccessor (infoList, outKeyList COMMA_THERE) ;
  outInfoList = GALGAS_lstringlist (infoList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_subprogramInvocationGraph::method_nodesWithNoPredecessor (GALGAS_lstringlist & outInfoList,
                                                                      GALGAS_lstringlist & outKeyList
                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElementArray infoList ;
  internalNodesWithNoPredecessor (infoList, outKeyList COMMA_THERE) ;
  outInfoList = GALGAS_lstringlist (infoList) ;
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
  cEnumerator_routineMapIR enumerator_8967 (temp_0, kENUMERATION_UP) ;
  while (enumerator_8967.hasCurrentObject ()) {
    extensionMethod_llvmCodeGeneration (enumerator_8967.current (HERE), ioArgument_ioLLVMcode, ioArgument_ioAssemblerCode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 239)) ;
    enumerator_8967.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Extension Getter '@objectIR location'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location extensionGetter_location (const GALGAS_objectIR & inObject,
                                          C_Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_result ; // Returned variable
  const GALGAS_objectIR temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_objectIR::kNotBuilt:
    break ;
  case GALGAS_objectIR::kEnum_null:
    {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (GALGAS_location::constructor_nowhere (SOURCE_FILE ("intermediate-value-representation.galgas", 38)), GALGAS_string ("<<@objectIR location null>>"), fixItArray1  COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 38)) ;
      result_result.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_objectIR::kEnum_possibleFunction:
    {
      const cEnumAssociatedValues_objectIR_possibleFunction * extractPtr_1737 = (const cEnumAssociatedValues_objectIR_possibleFunction *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_functionName = extractPtr_1737->mAssociatedValue1 ;
      result_result = extractedValue_functionName.getter_location (SOURCE_FILE ("intermediate-value-representation.galgas", 40)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_property:
    {
      const cEnumAssociatedValues_objectIR_property * extractPtr_1790 = (const cEnumAssociatedValues_objectIR_property *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_plmName = extractPtr_1790->mAssociatedValue1 ;
      result_result = extractedValue_plmName.getter_location (SOURCE_FILE ("intermediate-value-representation.galgas", 42)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_globalVariableReference:
    {
      const cEnumAssociatedValues_objectIR_globalVariableReference * extractPtr_1856 = (const cEnumAssociatedValues_objectIR_globalVariableReference *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_plmName = extractPtr_1856->mAssociatedValue1 ;
      result_result = extractedValue_plmName.getter_location (SOURCE_FILE ("intermediate-value-representation.galgas", 44)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_localVariableReference:
    {
      const cEnumAssociatedValues_objectIR_localVariableReference * extractPtr_1921 = (const cEnumAssociatedValues_objectIR_localVariableReference *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_plmName = extractPtr_1921->mAssociatedValue1 ;
      result_result = extractedValue_plmName.getter_location (SOURCE_FILE ("intermediate-value-representation.galgas", 46)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_registerReference:
    {
      const cEnumAssociatedValues_objectIR_registerReference * extractPtr_1987 = (const cEnumAssociatedValues_objectIR_registerReference *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_plmName = extractPtr_1987->mAssociatedValue1 ;
      result_result = extractedValue_plmName.getter_location (SOURCE_FILE ("intermediate-value-representation.galgas", 48)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_zero:
    {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (GALGAS_location::constructor_nowhere (SOURCE_FILE ("intermediate-value-representation.galgas", 50)), GALGAS_string ("<<@objectIR location zero>>"), fixItArray2  COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 50)) ;
      result_result.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_objectIR::kEnum_selfObject:
    {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (GALGAS_location::constructor_nowhere (SOURCE_FILE ("intermediate-value-representation.galgas", 52)), GALGAS_string ("<<@objectIR location selfObject>>"), fixItArray3  COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 52)) ;
      result_result.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_objectIR::kEnum_literalInteger:
    {
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (GALGAS_location::constructor_nowhere (SOURCE_FILE ("intermediate-value-representation.galgas", 54)), GALGAS_string ("<<@objectIR location literalInteger>>"), fixItArray4  COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 54)) ;
      result_result.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmTemporaryValue:
    {
      const cEnumAssociatedValues_objectIR_llvmTemporaryValue * extractPtr_2320 = (const cEnumAssociatedValues_objectIR_llvmTemporaryValue *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_llvmName = extractPtr_2320->mAssociatedValue1 ;
      result_result = extractedValue_llvmName.getter_location (SOURCE_FILE ("intermediate-value-representation.galgas", 56)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_temporaryReference:
    {
      const cEnumAssociatedValues_objectIR_temporaryReference * extractPtr_2387 = (const cEnumAssociatedValues_objectIR_temporaryReference *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_llvmName = extractPtr_2387->mAssociatedValue1 ;
      result_result = extractedValue_llvmName.getter_location (SOURCE_FILE ("intermediate-value-representation.galgas", 58)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmStructureConstant:
    {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (GALGAS_location::constructor_nowhere (SOURCE_FILE ("intermediate-value-representation.galgas", 60)), GALGAS_string ("<<@objectIR location llvmStructureConstant>>"), fixItArray5  COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 60)) ;
      result_result.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_objectIR::kEnum_literalString:
    {
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (GALGAS_location::constructor_nowhere (SOURCE_FILE ("intermediate-value-representation.galgas", 62)), GALGAS_string ("<<@objectIR location literalString>>"), fixItArray6  COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 62)) ;
      result_result.drop () ; // Release error dropped variable
    }
    break ;
  }
//---
  return result_result ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Extension Getter '@objectIR isGlobalVariable'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool extensionGetter_isGlobalVariable (const GALGAS_objectIR & inObject,
                                              C_Compiler * /* inCompiler */
                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  const GALGAS_objectIR temp_0 = inObject ;
  result_result = temp_0.getter_isGlobalVariableReference (SOURCE_FILE ("intermediate-value-representation.galgas", 69)) ;
//---
  return result_result ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Extension Getter '@objectIR llvmName'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string extensionGetter_llvmName (const GALGAS_objectIR & inObject,
                                        C_Compiler * inCompiler
                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_objectIR temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_objectIR::kNotBuilt:
    break ;
  case GALGAS_objectIR::kEnum_null:
    {
      const GALGAS_objectIR temp_1 = inObject ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (extensionGetter_location (temp_1, inCompiler COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 76)), GALGAS_string ("<<@objectIR llvmName null>>"), fixItArray2  COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 76)) ;
      result_result.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_objectIR::kEnum_possibleFunction:
    {
      const GALGAS_objectIR temp_3 = inObject ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (extensionGetter_location (temp_3, inCompiler COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 78)), GALGAS_string ("<<@objectIR llvmName possibleFunction>>"), fixItArray4  COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 78)) ;
      result_result.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_objectIR::kEnum_property:
    {
      const GALGAS_objectIR temp_5 = inObject ;
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (extensionGetter_location (temp_5, inCompiler COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 79)), GALGAS_string ("<<@objectIR property llvmName>>"), fixItArray6  COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 79)) ;
      result_result.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_objectIR::kEnum_globalVariableReference:
    {
      const cEnumAssociatedValues_objectIR_globalVariableReference * extractPtr_3375 = (const cEnumAssociatedValues_objectIR_globalVariableReference *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_plmName = extractPtr_3375->mAssociatedValue1 ;
      result_result = GALGAS_string ("@").add_operation (function_llvmNameForGlobalVariable (extractedValue_plmName.getter_string (SOURCE_FILE ("intermediate-value-representation.galgas", 80)), inCompiler COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 80)), inCompiler COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 80)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_localVariableReference:
    {
      const cEnumAssociatedValues_objectIR_localVariableReference * extractPtr_3470 = (const cEnumAssociatedValues_objectIR_localVariableReference *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_plmName = extractPtr_3470->mAssociatedValue1 ;
      result_result = GALGAS_string ("%").add_operation (function_llvmNameForLocalVariable (extractedValue_plmName.getter_string (SOURCE_FILE ("intermediate-value-representation.galgas", 81)), inCompiler COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 81)), inCompiler COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 81)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_registerReference:
    {
      const GALGAS_objectIR temp_7 = inObject ;
      TC_Array <C_FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (extensionGetter_location (temp_7, inCompiler COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 82)), GALGAS_string ("<<@objectIR llvmName>>"), fixItArray8  COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 82)) ;
      result_result.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_objectIR::kEnum_zero:
    {
      result_result = GALGAS_string ("zeroinitializer") ;
    }
    break ;
  case GALGAS_objectIR::kEnum_selfObject:
    {
      result_result = GALGAS_string ("%self") ;
    }
    break ;
  case GALGAS_objectIR::kEnum_literalInteger:
    {
      const cEnumAssociatedValues_objectIR_literalInteger * extractPtr_3717 = (const cEnumAssociatedValues_objectIR_literalInteger *) (temp_0.unsafePointer ()) ;
      const GALGAS_bigint extractedValue_value = extractPtr_3717->mAssociatedValue1 ;
      result_result = extractedValue_value.getter_string (SOURCE_FILE ("intermediate-value-representation.galgas", 85)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmTemporaryValue:
    {
      const cEnumAssociatedValues_objectIR_llvmTemporaryValue * extractPtr_3784 = (const cEnumAssociatedValues_objectIR_llvmTemporaryValue *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_llvmName = extractPtr_3784->mAssociatedValue1 ;
      result_result = GALGAS_string ("%").add_operation (extractedValue_llvmName.getter_string (SOURCE_FILE ("intermediate-value-representation.galgas", 86)), inCompiler COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 86)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_temporaryReference:
    {
      const cEnumAssociatedValues_objectIR_temporaryReference * extractPtr_3853 = (const cEnumAssociatedValues_objectIR_temporaryReference *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_llvmName = extractPtr_3853->mAssociatedValue1 ;
      result_result = GALGAS_string ("%").add_operation (extractedValue_llvmName.getter_string (SOURCE_FILE ("intermediate-value-representation.galgas", 87)), inCompiler COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 87)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmStructureConstant:
    {
      const cEnumAssociatedValues_objectIR_llvmStructureConstant * extractPtr_4078 = (const cEnumAssociatedValues_objectIR_llvmStructureConstant *) (temp_0.unsafePointer ()) ;
      const GALGAS_operandIRList extractedValue_inValues = extractPtr_4078->mAssociatedValue1 ;
      result_result = GALGAS_string ("{") ;
      cEnumerator_operandIRList enumerator_3952 (extractedValue_inValues, kENUMERATION_UP) ;
      while (enumerator_3952.hasCurrentObject ()) {
        result_result.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_3952.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 91)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 91)).add_operation (extensionGetter_llvmName (enumerator_3952.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 91)), inCompiler COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 91)), inCompiler  COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 91)) ;
        if (enumerator_3952.hasNextObject ()) {
          result_result.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 92)) ;
        }
        enumerator_3952.gotoNextObject () ;
      }
      result_result.plusAssign_operation(GALGAS_string ("}"), inCompiler  COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 94)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_literalString:
    {
      const cEnumAssociatedValues_objectIR_literalString * extractPtr_4318 = (const cEnumAssociatedValues_objectIR_literalString *) (temp_0.unsafePointer ()) ;
      const GALGAS_uint extractedValue_size = extractPtr_4318->mAssociatedValue1 ;
      const GALGAS_uint extractedValue_index = extractPtr_4318->mAssociatedValue2 ;
      GALGAS_string var_sizeStr_4145 = extractedValue_size.getter_string (SOURCE_FILE ("intermediate-value-representation.galgas", 96)) ;
      result_result = GALGAS_string ("getelementptr inbounds ([").add_operation (var_sizeStr_4145, inCompiler COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 97)).add_operation (GALGAS_string (" x i8], ["), inCompiler COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 97)).add_operation (var_sizeStr_4145, inCompiler COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 97)).add_operation (GALGAS_string (" x i8]* "), inCompiler COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 97)) ;
      result_result.plusAssign_operation(function_literalCharacterArrayName (extractedValue_index, inCompiler COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 98)).add_operation (GALGAS_string (", i32 0, i32 0)"), inCompiler COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 98)), inCompiler  COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 98)) ;
    }
    break ;
  }
//---
  return result_result ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Extension Getter '@objectIR sliceMap'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sliceMap extensionGetter_sliceMap (const GALGAS_objectIR & inObject,
                                          const GALGAS_location & constinArgument_inErrorLocation,
                                          C_Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_sliceMap result_result ; // Returned variable
  const GALGAS_objectIR temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_objectIR::kNotBuilt:
    break ;
  case GALGAS_objectIR::kEnum_null:
    {
      const GALGAS_objectIR temp_1 = inObject ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (extensionGetter_location (temp_1, inCompiler COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 106)), GALGAS_string ("<<@objectIR sliceMap null>>"), fixItArray2  COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 106)) ;
      result_result.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_objectIR::kEnum_possibleFunction:
    {
      const GALGAS_objectIR temp_3 = inObject ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (extensionGetter_location (temp_3, inCompiler COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 108)), GALGAS_string ("<<@objectIR sliceMap possibleFunction>>"), fixItArray4  COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 108)) ;
      result_result.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_objectIR::kEnum_property:
    {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("<<@objectIR sliceMap>>"), fixItArray5  COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 109)) ;
      result_result.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_objectIR::kEnum_globalVariableReference:
    {
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("<<@objectIR sliceMap>>"), fixItArray6  COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 110)) ;
      result_result.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_objectIR::kEnum_localVariableReference:
    {
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("<<@objectIR sliceMap>>"), fixItArray7  COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 111)) ;
      result_result.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_objectIR::kEnum_registerReference:
    {
      const cEnumAssociatedValues_objectIR_registerReference * extractPtr_5060 = (const cEnumAssociatedValues_objectIR_registerReference *) (temp_0.unsafePointer ()) ;
      const GALGAS_sliceMap extractedValue_sliceMap = extractPtr_5060->mAssociatedValue5 ;
      result_result = extractedValue_sliceMap ;
    }
    break ;
  case GALGAS_objectIR::kEnum_zero:
    {
      TC_Array <C_FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("<<@objectIR sliceMap>>"), fixItArray8  COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 113)) ;
      result_result.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_objectIR::kEnum_selfObject:
    {
      TC_Array <C_FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("<<@objectIR sliceMap>>"), fixItArray9  COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 114)) ;
      result_result.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_objectIR::kEnum_literalInteger:
    {
      TC_Array <C_FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("<<@objectIR sliceMap>>"), fixItArray10  COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 115)) ;
      result_result.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmTemporaryValue:
    {
      const cEnumAssociatedValues_objectIR_llvmTemporaryValue * extractPtr_5367 = (const cEnumAssociatedValues_objectIR_llvmTemporaryValue *) (temp_0.unsafePointer ()) ;
      const GALGAS_sliceMap extractedValue_sliceMap = extractPtr_5367->mAssociatedValue2 ;
      result_result = extractedValue_sliceMap ;
    }
    break ;
  case GALGAS_objectIR::kEnum_temporaryReference:
    {
      const cEnumAssociatedValues_objectIR_temporaryReference * extractPtr_5430 = (const cEnumAssociatedValues_objectIR_temporaryReference *) (temp_0.unsafePointer ()) ;
      const GALGAS_sliceMap extractedValue_sliceMap = extractPtr_5430->mAssociatedValue2 ;
      result_result = extractedValue_sliceMap ;
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmStructureConstant:
    {
      TC_Array <C_FixItDescription> fixItArray11 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("<<@objectIR sliceMap>>"), fixItArray11  COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 118)) ;
      result_result.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_objectIR::kEnum_literalString:
    {
      TC_Array <C_FixItDescription> fixItArray12 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("<<@objectIR sliceMap>>"), fixItArray12  COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 119)) ;
      result_result.drop () ; // Release error dropped variable
    }
    break ;
  }
//---
  return result_result ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Extension Getter '@objectIR type'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMType extensionGetter_type (const GALGAS_objectIR & inObject,
                                     C_Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_PLMType result_result ; // Returned variable
  const GALGAS_objectIR temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_objectIR::kNotBuilt:
    break ;
  case GALGAS_objectIR::kEnum_null:
    {
      const GALGAS_objectIR temp_1 = inObject ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (extensionGetter_location (temp_1, inCompiler COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 128)), GALGAS_string ("<<@objectIR type null>>"), fixItArray2  COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 128)) ;
      result_result.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_objectIR::kEnum_possibleFunction:
    {
      const GALGAS_objectIR temp_3 = inObject ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (extensionGetter_location (temp_3, inCompiler COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 130)), GALGAS_string ("<<@objectIR type possibleFunction>>"), fixItArray4  COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 130)) ;
      result_result.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_objectIR::kEnum_temporaryReference:
    {
      const cEnumAssociatedValues_objectIR_temporaryReference * extractPtr_6034 = (const cEnumAssociatedValues_objectIR_temporaryReference *) (temp_0.unsafePointer ()) ;
      const GALGAS_PLMType extractedValue_type = extractPtr_6034->mAssociatedValue0 ;
      result_result = extractedValue_type ;
    }
    break ;
  case GALGAS_objectIR::kEnum_property:
    {
      const cEnumAssociatedValues_objectIR_property * extractPtr_6076 = (const cEnumAssociatedValues_objectIR_property *) (temp_0.unsafePointer ()) ;
      const GALGAS_PLMType extractedValue_type = extractPtr_6076->mAssociatedValue0 ;
      result_result = extractedValue_type ;
    }
    break ;
  case GALGAS_objectIR::kEnum_registerReference:
    {
      const cEnumAssociatedValues_objectIR_registerReference * extractPtr_6132 = (const cEnumAssociatedValues_objectIR_registerReference *) (temp_0.unsafePointer ()) ;
      const GALGAS_PLMType extractedValue_type = extractPtr_6132->mAssociatedValue0 ;
      result_result = extractedValue_type ;
    }
    break ;
  case GALGAS_objectIR::kEnum_globalVariableReference:
    {
      const cEnumAssociatedValues_objectIR_globalVariableReference * extractPtr_6188 = (const cEnumAssociatedValues_objectIR_globalVariableReference *) (temp_0.unsafePointer ()) ;
      const GALGAS_PLMType extractedValue_type = extractPtr_6188->mAssociatedValue0 ;
      result_result = extractedValue_type ;
    }
    break ;
  case GALGAS_objectIR::kEnum_localVariableReference:
    {
      const cEnumAssociatedValues_objectIR_localVariableReference * extractPtr_6243 = (const cEnumAssociatedValues_objectIR_localVariableReference *) (temp_0.unsafePointer ()) ;
      const GALGAS_PLMType extractedValue_type = extractPtr_6243->mAssociatedValue0 ;
      result_result = extractedValue_type ;
    }
    break ;
  case GALGAS_objectIR::kEnum_zero:
    {
      const cEnumAssociatedValues_objectIR_zero * extractPtr_6278 = (const cEnumAssociatedValues_objectIR_zero *) (temp_0.unsafePointer ()) ;
      const GALGAS_PLMType extractedValue_type = extractPtr_6278->mAssociatedValue0 ;
      result_result = extractedValue_type ;
    }
    break ;
  case GALGAS_objectIR::kEnum_selfObject:
    {
      const cEnumAssociatedValues_objectIR_selfObject * extractPtr_6319 = (const cEnumAssociatedValues_objectIR_selfObject *) (temp_0.unsafePointer ()) ;
      const GALGAS_PLMType extractedValue_type = extractPtr_6319->mAssociatedValue0 ;
      result_result = extractedValue_type ;
    }
    break ;
  case GALGAS_objectIR::kEnum_literalInteger:
    {
      const cEnumAssociatedValues_objectIR_literalInteger * extractPtr_6366 = (const cEnumAssociatedValues_objectIR_literalInteger *) (temp_0.unsafePointer ()) ;
      const GALGAS_PLMType extractedValue_type = extractPtr_6366->mAssociatedValue0 ;
      result_result = extractedValue_type ;
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmTemporaryValue:
    {
      const cEnumAssociatedValues_objectIR_llvmTemporaryValue * extractPtr_6419 = (const cEnumAssociatedValues_objectIR_llvmTemporaryValue *) (temp_0.unsafePointer ()) ;
      const GALGAS_PLMType extractedValue_type = extractPtr_6419->mAssociatedValue0 ;
      result_result = extractedValue_type ;
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmStructureConstant:
    {
      const cEnumAssociatedValues_objectIR_llvmStructureConstant * extractPtr_6473 = (const cEnumAssociatedValues_objectIR_llvmStructureConstant *) (temp_0.unsafePointer ()) ;
      const GALGAS_PLMType extractedValue_type = extractPtr_6473->mAssociatedValue0 ;
      result_result = extractedValue_type ;
    }
    break ;
  case GALGAS_objectIR::kEnum_literalString:
    {
      const cEnumAssociatedValues_objectIR_literalString * extractPtr_6522 = (const cEnumAssociatedValues_objectIR_literalString *) (temp_0.unsafePointer ()) ;
      const GALGAS_PLMType extractedValue_type = extractPtr_6522->mAssociatedValue0 ;
      result_result = extractedValue_type ;
    }
    break ;
  }
//---
  return result_result ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Extension Getter '@objectIR llvmTypeName'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string extensionGetter_llvmTypeName (const GALGAS_objectIR & inObject,
                                            C_Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_objectIR temp_0 = inObject ;
  result_result = extensionGetter_llvmTypeName (extensionGetter_type (temp_0, inCompiler COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 148)), inCompiler COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 148)) ;
//---
  return result_result ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Extension Getter '@objectIR key'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string extensionGetter_key (const GALGAS_objectIR & inObject,
                                   C_Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_objectIR temp_0 = inObject ;
  result_result = extensionGetter_key (extensionGetter_type (temp_0, inCompiler COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 154)), inCompiler COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 154)) ;
//---
  return result_result ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Extension Getter '@objectIR withType'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR extensionGetter_withType (const GALGAS_objectIR & inObject,
                                          const GALGAS_PLMType & constinArgument_inType,
                                          C_Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_objectIR result_result ; // Returned variable
  const GALGAS_objectIR temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_objectIR::kNotBuilt:
    break ;
  case GALGAS_objectIR::kEnum_null:
    {
      const GALGAS_objectIR temp_1 = inObject ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (extensionGetter_location (temp_1, inCompiler COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 183)), GALGAS_string ("<<@objectIR withType null>>"), fixItArray2  COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 183)) ;
      result_result.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_objectIR::kEnum_possibleFunction:
    {
      const GALGAS_objectIR temp_3 = inObject ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (extensionGetter_location (temp_3, inCompiler COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 185)), GALGAS_string ("<<@objectIR withType possibleFunction>>"), fixItArray4  COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 185)) ;
      result_result.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_objectIR::kEnum_temporaryReference:
    {
      const cEnumAssociatedValues_objectIR_temporaryReference * extractPtr_8492 = (const cEnumAssociatedValues_objectIR_temporaryReference *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_llvmName = extractPtr_8492->mAssociatedValue1 ;
      const GALGAS_sliceMap extractedValue_sliceMap = extractPtr_8492->mAssociatedValue2 ;
      const GALGAS_bool extractedValue_volatile = extractPtr_8492->mAssociatedValue3 ;
      result_result = GALGAS_objectIR::constructor_temporaryReference (constinArgument_inType, extractedValue_llvmName, extractedValue_sliceMap, extractedValue_volatile  COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 187)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_property:
    {
      const cEnumAssociatedValues_objectIR_property * extractPtr_8596 = (const cEnumAssociatedValues_objectIR_property *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_plmName = extractPtr_8596->mAssociatedValue1 ;
      const GALGAS_uint extractedValue_index = extractPtr_8596->mAssociatedValue2 ;
      result_result = GALGAS_objectIR::constructor_property (constinArgument_inType, extractedValue_plmName, extractedValue_index  COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 189)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_registerReference:
    {
      const cEnumAssociatedValues_objectIR_registerReference * extractPtr_8938 = (const cEnumAssociatedValues_objectIR_registerReference *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_plmName = extractPtr_8938->mAssociatedValue1 ;
      const GALGAS_bool extractedValue_readable = extractPtr_8938->mAssociatedValue2 ;
      const GALGAS_bool extractedValue_writable = extractPtr_8938->mAssociatedValue3 ;
      const GALGAS_bigint extractedValue_address = extractPtr_8938->mAssociatedValue4 ;
      const GALGAS_sliceMap extractedValue_sliceMap = extractPtr_8938->mAssociatedValue5 ;
      const GALGAS_uint extractedValue_arraySize = extractPtr_8938->mAssociatedValue6 ;
      const GALGAS_uint extractedValue_elementSize = extractPtr_8938->mAssociatedValue7 ;
      result_result = GALGAS_objectIR::constructor_registerReference (constinArgument_inType, extractedValue_plmName, extractedValue_readable, extractedValue_writable, extractedValue_address, extractedValue_sliceMap, extractedValue_arraySize, extractedValue_elementSize  COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 191)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_localVariableReference:
    {
      const cEnumAssociatedValues_objectIR_localVariableReference * extractPtr_9047 = (const cEnumAssociatedValues_objectIR_localVariableReference *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_name = extractPtr_9047->mAssociatedValue1 ;
      result_result = GALGAS_objectIR::constructor_localVariableReference (constinArgument_inType, extractedValue_name  COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 202)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_globalVariableReference:
    {
      const cEnumAssociatedValues_objectIR_globalVariableReference * extractPtr_9158 = (const cEnumAssociatedValues_objectIR_globalVariableReference *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_name = extractPtr_9158->mAssociatedValue1 ;
      result_result = GALGAS_objectIR::constructor_globalVariableReference (constinArgument_inType, extractedValue_name  COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 204)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_literalInteger:
    {
      const cEnumAssociatedValues_objectIR_literalInteger * extractPtr_9259 = (const cEnumAssociatedValues_objectIR_literalInteger *) (temp_0.unsafePointer ()) ;
      const GALGAS_bigint extractedValue_value = extractPtr_9259->mAssociatedValue1 ;
      result_result = GALGAS_objectIR::constructor_literalInteger (constinArgument_inType, extractedValue_value  COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 206)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmTemporaryValue:
    {
      const cEnumAssociatedValues_objectIR_llvmTemporaryValue * extractPtr_9397 = (const cEnumAssociatedValues_objectIR_llvmTemporaryValue *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_llvmName = extractPtr_9397->mAssociatedValue1 ;
      const GALGAS_sliceMap extractedValue_sliceMap = extractPtr_9397->mAssociatedValue2 ;
      result_result = GALGAS_objectIR::constructor_llvmTemporaryValue (constinArgument_inType, extractedValue_llvmName, extractedValue_sliceMap  COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 208)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_zero:
    {
      result_result = GALGAS_objectIR::constructor_zero (constinArgument_inType  COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 210)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_selfObject:
    {
      result_result = GALGAS_objectIR::constructor_selfObject (constinArgument_inType  COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 212)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmStructureConstant:
    {
      const cEnumAssociatedValues_objectIR_llvmStructureConstant * extractPtr_9639 = (const cEnumAssociatedValues_objectIR_llvmStructureConstant *) (temp_0.unsafePointer ()) ;
      const GALGAS_operandIRList extractedValue_values = extractPtr_9639->mAssociatedValue1 ;
      result_result = GALGAS_objectIR::constructor_llvmStructureConstant (constinArgument_inType, extractedValue_values  COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 214)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_literalString:
    {
      const cEnumAssociatedValues_objectIR_literalString * extractPtr_9760 = (const cEnumAssociatedValues_objectIR_literalString *) (temp_0.unsafePointer ()) ;
      const GALGAS_uint extractedValue_size = extractPtr_9760->mAssociatedValue1 ;
      const GALGAS_uint extractedValue_index = extractPtr_9760->mAssociatedValue2 ;
      result_result = GALGAS_objectIR::constructor_literalString (constinArgument_inType, extractedValue_size, extractedValue_index  COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 216)) ;
    }
    break ;
  }
//---
  return result_result ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Extension Getter '@objectIR name'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string extensionGetter_name (const GALGAS_objectIR & inObject,
                                    C_Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_objectIR temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_objectIR::kNotBuilt:
    break ;
  case GALGAS_objectIR::kEnum_null:
    {
      const GALGAS_objectIR temp_1 = inObject ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (extensionGetter_location (temp_1, inCompiler COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 224)), GALGAS_string ("<<@objectIR name null>>"), fixItArray2  COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 224)) ;
      result_result.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_objectIR::kEnum_possibleFunction:
    {
      const GALGAS_objectIR temp_3 = inObject ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (extensionGetter_location (temp_3, inCompiler COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 226)), GALGAS_string ("<<@objectIR name possibleFunction>>"), fixItArray4  COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 226)) ;
      result_result.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_objectIR::kEnum_temporaryReference:
    {
      const cEnumAssociatedValues_objectIR_temporaryReference * extractPtr_10181 = (const cEnumAssociatedValues_objectIR_temporaryReference *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_llvmName = extractPtr_10181->mAssociatedValue1 ;
      result_result = extractedValue_llvmName.getter_string (SOURCE_FILE ("intermediate-value-representation.galgas", 227)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_property:
    {
      const cEnumAssociatedValues_objectIR_property * extractPtr_10224 = (const cEnumAssociatedValues_objectIR_property *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_name = extractPtr_10224->mAssociatedValue1 ;
      result_result = extractedValue_name.getter_string (SOURCE_FILE ("intermediate-value-representation.galgas", 228)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_registerReference:
    {
      const cEnumAssociatedValues_objectIR_registerReference * extractPtr_10281 = (const cEnumAssociatedValues_objectIR_registerReference *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_name = extractPtr_10281->mAssociatedValue1 ;
      result_result = extractedValue_name.getter_string (SOURCE_FILE ("intermediate-value-representation.galgas", 229)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_localVariableReference:
    {
      const cEnumAssociatedValues_objectIR_localVariableReference * extractPtr_10336 = (const cEnumAssociatedValues_objectIR_localVariableReference *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_name = extractPtr_10336->mAssociatedValue1 ;
      result_result = extractedValue_name.getter_string (SOURCE_FILE ("intermediate-value-representation.galgas", 230)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_globalVariableReference:
    {
      const cEnumAssociatedValues_objectIR_globalVariableReference * extractPtr_10392 = (const cEnumAssociatedValues_objectIR_globalVariableReference *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_name = extractPtr_10392->mAssociatedValue1 ;
      result_result = extractedValue_name.getter_string (SOURCE_FILE ("intermediate-value-representation.galgas", 231)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_zero:
    {
      result_result = GALGAS_string ("zeroinitializer") ;
    }
    break ;
  case GALGAS_objectIR::kEnum_selfObject:
    {
      result_result = GALGAS_string ("self") ;
    }
    break ;
  case GALGAS_objectIR::kEnum_literalInteger:
    {
      const cEnumAssociatedValues_objectIR_literalInteger * extractPtr_10543 = (const cEnumAssociatedValues_objectIR_literalInteger *) (temp_0.unsafePointer ()) ;
      const GALGAS_bigint extractedValue_value = extractPtr_10543->mAssociatedValue1 ;
      result_result = extractedValue_value.getter_string (SOURCE_FILE ("intermediate-value-representation.galgas", 234)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmTemporaryValue:
    {
      const cEnumAssociatedValues_objectIR_llvmTemporaryValue * extractPtr_10596 = (const cEnumAssociatedValues_objectIR_llvmTemporaryValue *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_name = extractPtr_10596->mAssociatedValue1 ;
      result_result = extractedValue_name.getter_string (SOURCE_FILE ("intermediate-value-representation.galgas", 235)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmStructureConstant:
    {
      result_result = GALGAS_string ("{...}") ;
    }
    break ;
  case GALGAS_objectIR::kEnum_literalString:
    {
      const cEnumAssociatedValues_objectIR_literalString * extractPtr_10728 = (const cEnumAssociatedValues_objectIR_literalString *) (temp_0.unsafePointer ()) ;
      const GALGAS_uint extractedValue_index = extractPtr_10728->mAssociatedValue2 ;
      result_result = function_literalStringName (extractedValue_index, inCompiler COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 237)) ;
    }
    break ;
  }
//---
  return result_result ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Extension Getter '@objectIR isStatic'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool extensionGetter_isStatic (const GALGAS_objectIR & inObject,
                                      C_Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  const GALGAS_objectIR temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_objectIR::kNotBuilt:
    break ;
  case GALGAS_objectIR::kEnum_null:
    {
      const GALGAS_objectIR temp_1 = inObject ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (extensionGetter_location (temp_1, inCompiler COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 245)), GALGAS_string ("<<@objectIR isStatic null>>"), fixItArray2  COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 245)) ;
      result_result.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_objectIR::kEnum_possibleFunction:
    {
      result_result = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_temporaryReference:
    {
      result_result = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_property:
    {
      result_result = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_registerReference:
    {
      result_result = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_localVariableReference:
    {
      result_result = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_globalVariableReference:
    {
      result_result = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_zero:
    {
      result_result = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_selfObject:
    {
      result_result = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_literalInteger:
    {
      result_result = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmTemporaryValue:
    {
      result_result = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmStructureConstant:
    {
      result_result = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_literalString:
    {
      result_result = GALGAS_bool (true) ;
    }
    break ;
  }
//---
  return result_result ;
}




//---------------------------------------------------------------------------------------------------------------------*

cMapElement_globalVariableMapIR::cMapElement_globalVariableMapIR (const GALGAS_lstring & inKey,
                                                                  const GALGAS_PLMType & in_mType,
                                                                  const GALGAS_bool & in_mGenerateVolatile,
                                                                  const GALGAS_objectIR & in_mInitialValue
                                                                  COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mType (in_mType),
mProperty_mGenerateVolatile (in_mGenerateVolatile),
mProperty_mInitialValue (in_mInitialValue) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_globalVariableMapIR::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mType.isValid () && mProperty_mGenerateVolatile.isValid () && mProperty_mInitialValue.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_globalVariableMapIR::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_globalVariableMapIR (mProperty_lkey, mProperty_mType, mProperty_mGenerateVolatile, mProperty_mInitialValue COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_globalVariableMapIR::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mType" ":" ;
  mProperty_mType.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mGenerateVolatile" ":" ;
  mProperty_mGenerateVolatile.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInitialValue" ":" ;
  mProperty_mInitialValue.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_globalVariableMapIR::compare (const cCollectionElement * inOperand) const {
  cMapElement_globalVariableMapIR * operand = (cMapElement_globalVariableMapIR *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mType.objectCompare (operand->mProperty_mType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mGenerateVolatile.objectCompare (operand->mProperty_mGenerateVolatile) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInitialValue.objectCompare (operand->mProperty_mInitialValue) ;
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
                                                      const GALGAS_PLMType & inArgument0,
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
                                                   GALGAS_PLMType inArgument0,
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
                                                   GALGAS_PLMType & outArgument0,
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
    outArgument0 = p->mProperty_mType ;
    outArgument1 = p->mProperty_mGenerateVolatile ;
    outArgument2 = p->mProperty_mInitialValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMType GALGAS_globalVariableMapIR::getter_mTypeForKey (const GALGAS_string & inKey,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_globalVariableMapIR * p = (const cMapElement_globalVariableMapIR *) attributes ;
  GALGAS_PLMType result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_globalVariableMapIR) ;
    result = p->mProperty_mType ;
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
    result = p->mProperty_mGenerateVolatile ;
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
    result = p->mProperty_mInitialValue ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_globalVariableMapIR::setter_setMTypeForKey (GALGAS_PLMType inAttributeValue,
                                                        GALGAS_string inKey,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_globalVariableMapIR * p = (cMapElement_globalVariableMapIR *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_globalVariableMapIR) ;
    p->mProperty_mType = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_globalVariableMapIR::setter_setMGenerateVolatileForKey (GALGAS_bool inAttributeValue,
                                                                    GALGAS_string inKey,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_globalVariableMapIR * p = (cMapElement_globalVariableMapIR *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_globalVariableMapIR) ;
    p->mProperty_mGenerateVolatile = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_globalVariableMapIR::setter_setMInitialValueForKey (GALGAS_objectIR inAttributeValue,
                                                                GALGAS_string inKey,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_globalVariableMapIR * p = (cMapElement_globalVariableMapIR *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_globalVariableMapIR) ;
    p->mProperty_mInitialValue = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_globalVariableMapIR * GALGAS_globalVariableMapIR::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                 const GALGAS_string & inKey
                                                                                                 COMMA_LOCATION_ARGS) {
  cMapElement_globalVariableMapIR * result = (cMapElement_globalVariableMapIR *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_globalVariableMapIR) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_globalVariableMapIR::cEnumerator_globalVariableMapIR (const GALGAS_globalVariableMapIR & inEnumeratedObject,
                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalVariableMapIR_2D_element cEnumerator_globalVariableMapIR::current (LOCATION_ARGS) const {
  const cMapElement_globalVariableMapIR * p = (const cMapElement_globalVariableMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_globalVariableMapIR) ;
  return GALGAS_globalVariableMapIR_2D_element (p->mProperty_lkey, p->mProperty_mType, p->mProperty_mGenerateVolatile, p->mProperty_mInitialValue) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_globalVariableMapIR::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMType cEnumerator_globalVariableMapIR::current_mType (LOCATION_ARGS) const {
  const cMapElement_globalVariableMapIR * p = (const cMapElement_globalVariableMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_globalVariableMapIR) ;
  return p->mProperty_mType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_globalVariableMapIR::current_mGenerateVolatile (LOCATION_ARGS) const {
  const cMapElement_globalVariableMapIR * p = (const cMapElement_globalVariableMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_globalVariableMapIR) ;
  return p->mProperty_mGenerateVolatile ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR cEnumerator_globalVariableMapIR::current_mInitialValue (LOCATION_ARGS) const {
  const cMapElement_globalVariableMapIR * p = (const cMapElement_globalVariableMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_globalVariableMapIR) ;
  return p->mProperty_mInitialValue ;
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

