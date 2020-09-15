#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-3.h"

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@registerGroupListAST' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_registerGroupListAST : public cCollectionElement {
  public : GALGAS_registerGroupListAST_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_registerGroupListAST (const GALGAS_lstring & in_mRegisterGroupName,
                                                    const GALGAS_controlRegisterGroupKindAST & in_mControlRegisterGroupKind
                                                    COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_registerGroupListAST (const GALGAS_registerGroupListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_registerGroupListAST::cCollectionElement_registerGroupListAST (const GALGAS_lstring & in_mRegisterGroupName,
                                                                                  const GALGAS_controlRegisterGroupKindAST & in_mControlRegisterGroupKind
                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mRegisterGroupName, in_mControlRegisterGroupKind) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_registerGroupListAST::cCollectionElement_registerGroupListAST (const GALGAS_registerGroupListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mRegisterGroupName, inElement.mProperty_mControlRegisterGroupKind) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_registerGroupListAST::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_registerGroupListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_registerGroupListAST (mObject.mProperty_mRegisterGroupName, mObject.mProperty_mControlRegisterGroupKind COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_registerGroupListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mRegisterGroupName" ":" ;
  mObject.mProperty_mRegisterGroupName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mControlRegisterGroupKind" ":" ;
  mObject.mProperty_mControlRegisterGroupKind.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_registerGroupListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_registerGroupListAST * operand = (cCollectionElement_registerGroupListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_registerGroupListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_registerGroupListAST::GALGAS_registerGroupListAST (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_registerGroupListAST::GALGAS_registerGroupListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_registerGroupListAST GALGAS_registerGroupListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_registerGroupListAST  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_registerGroupListAST GALGAS_registerGroupListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                    const GALGAS_controlRegisterGroupKindAST & inOperand1
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_registerGroupListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_registerGroupListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_registerGroupListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_registerGroupListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                             const GALGAS_lstring & in_mRegisterGroupName,
                                                             const GALGAS_controlRegisterGroupKindAST & in_mControlRegisterGroupKind
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_registerGroupListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_registerGroupListAST (in_mRegisterGroupName,
                                                          in_mControlRegisterGroupKind COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_registerGroupListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                       const GALGAS_controlRegisterGroupKindAST & inOperand1
                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_registerGroupListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_registerGroupListAST::setter_append (GALGAS_registerGroupListAST_2D_element inElement,
                                                 C_Compiler * /* inCompiler */
                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_registerGroupListAST (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_registerGroupListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                        const GALGAS_controlRegisterGroupKindAST inOperand1,
                                                        const GALGAS_uint inInsertionIndex,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_registerGroupListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_registerGroupListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                        GALGAS_controlRegisterGroupKindAST & outOperand1,
                                                        const GALGAS_uint inRemoveIndex,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_registerGroupListAST * p = (cCollectionElement_registerGroupListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_registerGroupListAST) ;
      outOperand0 = p->mObject.mProperty_mRegisterGroupName ;
      outOperand1 = p->mObject.mProperty_mControlRegisterGroupKind ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_registerGroupListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                   GALGAS_controlRegisterGroupKindAST & outOperand1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_registerGroupListAST * p = (cCollectionElement_registerGroupListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_registerGroupListAST) ;
    outOperand0 = p->mObject.mProperty_mRegisterGroupName ;
    outOperand1 = p->mObject.mProperty_mControlRegisterGroupKind ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_registerGroupListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                  GALGAS_controlRegisterGroupKindAST & outOperand1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_registerGroupListAST * p = (cCollectionElement_registerGroupListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_registerGroupListAST) ;
    outOperand0 = p->mObject.mProperty_mRegisterGroupName ;
    outOperand1 = p->mObject.mProperty_mControlRegisterGroupKind ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_registerGroupListAST::method_first (GALGAS_lstring & outOperand0,
                                                GALGAS_controlRegisterGroupKindAST & outOperand1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_registerGroupListAST * p = (cCollectionElement_registerGroupListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_registerGroupListAST) ;
    outOperand0 = p->mObject.mProperty_mRegisterGroupName ;
    outOperand1 = p->mObject.mProperty_mControlRegisterGroupKind ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_registerGroupListAST::method_last (GALGAS_lstring & outOperand0,
                                               GALGAS_controlRegisterGroupKindAST & outOperand1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_registerGroupListAST * p = (cCollectionElement_registerGroupListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_registerGroupListAST) ;
    outOperand0 = p->mObject.mProperty_mRegisterGroupName ;
    outOperand1 = p->mObject.mProperty_mControlRegisterGroupKind ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_registerGroupListAST GALGAS_registerGroupListAST::add_operation (const GALGAS_registerGroupListAST & inOperand,
                                                                        C_Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_registerGroupListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_registerGroupListAST GALGAS_registerGroupListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_registerGroupListAST result = GALGAS_registerGroupListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_registerGroupListAST GALGAS_registerGroupListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_registerGroupListAST result = GALGAS_registerGroupListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_registerGroupListAST GALGAS_registerGroupListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_registerGroupListAST result = GALGAS_registerGroupListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_registerGroupListAST::plusAssign_operation (const GALGAS_registerGroupListAST inOperand,
                                                        C_Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_registerGroupListAST::setter_setMRegisterGroupNameAtIndex (GALGAS_lstring inOperand,
                                                                       GALGAS_uint inIndex,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_registerGroupListAST * p = (cCollectionElement_registerGroupListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_registerGroupListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mRegisterGroupName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_registerGroupListAST::getter_mRegisterGroupNameAtIndex (const GALGAS_uint & inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_registerGroupListAST * p = (cCollectionElement_registerGroupListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_registerGroupListAST) ;
    result = p->mObject.mProperty_mRegisterGroupName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_registerGroupListAST::setter_setMControlRegisterGroupKindAtIndex (GALGAS_controlRegisterGroupKindAST inOperand,
                                                                              GALGAS_uint inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_registerGroupListAST * p = (cCollectionElement_registerGroupListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_registerGroupListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mControlRegisterGroupKind = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterGroupKindAST GALGAS_registerGroupListAST::getter_mControlRegisterGroupKindAtIndex (const GALGAS_uint & inIndex,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_registerGroupListAST * p = (cCollectionElement_registerGroupListAST *) attributes.ptr () ;
  GALGAS_controlRegisterGroupKindAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_registerGroupListAST) ;
    result = p->mObject.mProperty_mControlRegisterGroupKind ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_registerGroupListAST::cEnumerator_registerGroupListAST (const GALGAS_registerGroupListAST & inEnumeratedObject,
                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_registerGroupListAST_2D_element cEnumerator_registerGroupListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_registerGroupListAST * p = (const cCollectionElement_registerGroupListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_registerGroupListAST) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_registerGroupListAST::current_mRegisterGroupName (LOCATION_ARGS) const {
  const cCollectionElement_registerGroupListAST * p = (const cCollectionElement_registerGroupListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_registerGroupListAST) ;
  return p->mObject.mProperty_mRegisterGroupName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterGroupKindAST cEnumerator_registerGroupListAST::current_mControlRegisterGroupKind (LOCATION_ARGS) const {
  const cCollectionElement_registerGroupListAST * p = (const cCollectionElement_registerGroupListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_registerGroupListAST) ;
  return p->mObject.mProperty_mControlRegisterGroupKind ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@registerGroupListAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_registerGroupListAST ("registerGroupListAST",
                                             NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_registerGroupListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_registerGroupListAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_registerGroupListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_registerGroupListAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_registerGroupListAST GALGAS_registerGroupListAST::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_registerGroupListAST result ;
  const GALGAS_registerGroupListAST * p = (const GALGAS_registerGroupListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_registerGroupListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("registerGroupListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_controlRegisterGroupDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_controlRegisterGroupDeclarationAST * p = (const cPtr_controlRegisterGroupDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_controlRegisterGroupDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mRegisterGroupList.objectCompare (p->mProperty_mRegisterGroupList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRegisters.objectCompare (p->mProperty_mRegisters) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_controlRegisterGroupDeclarationAST::objectCompare (const GALGAS_controlRegisterGroupDeclarationAST & inOperand) const {
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterGroupDeclarationAST::GALGAS_controlRegisterGroupDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterGroupDeclarationAST GALGAS_controlRegisterGroupDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_controlRegisterGroupDeclarationAST::constructor_new (GALGAS_registerGroupListAST::constructor_emptyList (HERE),
                                                                     GALGAS_controlRegisterDeclarationList::constructor_emptyList (HERE)
                                                                     COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterGroupDeclarationAST::GALGAS_controlRegisterGroupDeclarationAST (const cPtr_controlRegisterGroupDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_controlRegisterGroupDeclarationAST) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterGroupDeclarationAST GALGAS_controlRegisterGroupDeclarationAST::constructor_new (const GALGAS_registerGroupListAST & inAttribute_mRegisterGroupList,
                                                                                                      const GALGAS_controlRegisterDeclarationList & inAttribute_mRegisters
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterGroupDeclarationAST result ;
  if (inAttribute_mRegisterGroupList.isValid () && inAttribute_mRegisters.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_controlRegisterGroupDeclarationAST (inAttribute_mRegisterGroupList, inAttribute_mRegisters COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_registerGroupListAST GALGAS_controlRegisterGroupDeclarationAST::getter_mRegisterGroupList (UNUSED_LOCATION_ARGS) const {
  GALGAS_registerGroupListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_controlRegisterGroupDeclarationAST * p = (const cPtr_controlRegisterGroupDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_controlRegisterGroupDeclarationAST) ;
    result = p->mProperty_mRegisterGroupList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_registerGroupListAST cPtr_controlRegisterGroupDeclarationAST::getter_mRegisterGroupList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRegisterGroupList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterDeclarationList GALGAS_controlRegisterGroupDeclarationAST::getter_mRegisters (UNUSED_LOCATION_ARGS) const {
  GALGAS_controlRegisterDeclarationList result ;
  if (NULL != mObjectPtr) {
    const cPtr_controlRegisterGroupDeclarationAST * p = (const cPtr_controlRegisterGroupDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_controlRegisterGroupDeclarationAST) ;
    result = p->mProperty_mRegisters ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterDeclarationList cPtr_controlRegisterGroupDeclarationAST::getter_mRegisters (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRegisters ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterGroupDeclarationAST::setter_setMRegisterGroupList (GALGAS_registerGroupListAST inValue
                                                                              COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_controlRegisterGroupDeclarationAST * p = (cPtr_controlRegisterGroupDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_controlRegisterGroupDeclarationAST) ;
    p->mProperty_mRegisterGroupList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_controlRegisterGroupDeclarationAST::setter_setMRegisterGroupList (GALGAS_registerGroupListAST inValue
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mRegisterGroupList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterGroupDeclarationAST::setter_setMRegisters (GALGAS_controlRegisterDeclarationList inValue
                                                                      COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_controlRegisterGroupDeclarationAST * p = (cPtr_controlRegisterGroupDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_controlRegisterGroupDeclarationAST) ;
    p->mProperty_mRegisters = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_controlRegisterGroupDeclarationAST::setter_setMRegisters (GALGAS_controlRegisterDeclarationList inValue
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mRegisters = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @controlRegisterGroupDeclarationAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_controlRegisterGroupDeclarationAST::cPtr_controlRegisterGroupDeclarationAST (const GALGAS_registerGroupListAST & in_mRegisterGroupList,
                                                                                  const GALGAS_controlRegisterDeclarationList & in_mRegisters
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (THERE),
mProperty_mRegisterGroupList (in_mRegisterGroupList),
mProperty_mRegisters (in_mRegisters) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_controlRegisterGroupDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterGroupDeclarationAST ;
}

void cPtr_controlRegisterGroupDeclarationAST::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "[@controlRegisterGroupDeclarationAST:" ;
  mProperty_mRegisterGroupList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRegisters.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_controlRegisterGroupDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_controlRegisterGroupDeclarationAST (mProperty_mRegisterGroupList, mProperty_mRegisters COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@controlRegisterGroupDeclarationAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_controlRegisterGroupDeclarationAST ("controlRegisterGroupDeclarationAST",
                                                           & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_controlRegisterGroupDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterGroupDeclarationAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_controlRegisterGroupDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_controlRegisterGroupDeclarationAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterGroupDeclarationAST GALGAS_controlRegisterGroupDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterGroupDeclarationAST result ;
  const GALGAS_controlRegisterGroupDeclarationAST * p = (const GALGAS_controlRegisterGroupDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_controlRegisterGroupDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterGroupDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@controlRegisterFieldList' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_controlRegisterFieldList : public cCollectionElement {
  public : GALGAS_controlRegisterFieldList_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_controlRegisterFieldList (const GALGAS_uint & in_mFieldBitCount,
                                                        const GALGAS_string & in_mFieldName
                                                        COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_controlRegisterFieldList (const GALGAS_controlRegisterFieldList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_controlRegisterFieldList::cCollectionElement_controlRegisterFieldList (const GALGAS_uint & in_mFieldBitCount,
                                                                                          const GALGAS_string & in_mFieldName
                                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mFieldBitCount, in_mFieldName) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_controlRegisterFieldList::cCollectionElement_controlRegisterFieldList (const GALGAS_controlRegisterFieldList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mFieldBitCount, inElement.mProperty_mFieldName) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_controlRegisterFieldList::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_controlRegisterFieldList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_controlRegisterFieldList (mObject.mProperty_mFieldBitCount, mObject.mProperty_mFieldName COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_controlRegisterFieldList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFieldBitCount" ":" ;
  mObject.mProperty_mFieldBitCount.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFieldName" ":" ;
  mObject.mProperty_mFieldName.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_controlRegisterFieldList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_controlRegisterFieldList * operand = (cCollectionElement_controlRegisterFieldList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_controlRegisterFieldList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterFieldList::GALGAS_controlRegisterFieldList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterFieldList::GALGAS_controlRegisterFieldList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterFieldList GALGAS_controlRegisterFieldList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_controlRegisterFieldList  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterFieldList GALGAS_controlRegisterFieldList::constructor_listWithValue (const GALGAS_uint & inOperand0,
                                                                                            const GALGAS_string & inOperand1
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterFieldList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_controlRegisterFieldList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_controlRegisterFieldList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterFieldList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                 const GALGAS_uint & in_mFieldBitCount,
                                                                 const GALGAS_string & in_mFieldName
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_controlRegisterFieldList * p = NULL ;
  macroMyNew (p, cCollectionElement_controlRegisterFieldList (in_mFieldBitCount,
                                                              in_mFieldName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterFieldList::addAssign_operation (const GALGAS_uint & inOperand0,
                                                           const GALGAS_string & inOperand1
                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_controlRegisterFieldList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterFieldList::setter_append (GALGAS_controlRegisterFieldList_2D_element inElement,
                                                     C_Compiler * /* inCompiler */
                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_controlRegisterFieldList (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterFieldList::setter_insertAtIndex (const GALGAS_uint inOperand0,
                                                            const GALGAS_string inOperand1,
                                                            const GALGAS_uint inInsertionIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_controlRegisterFieldList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterFieldList::setter_removeAtIndex (GALGAS_uint & outOperand0,
                                                            GALGAS_string & outOperand1,
                                                            const GALGAS_uint inRemoveIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_controlRegisterFieldList * p = (cCollectionElement_controlRegisterFieldList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_controlRegisterFieldList) ;
      outOperand0 = p->mObject.mProperty_mFieldBitCount ;
      outOperand1 = p->mObject.mProperty_mFieldName ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterFieldList::setter_popFirst (GALGAS_uint & outOperand0,
                                                       GALGAS_string & outOperand1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_controlRegisterFieldList * p = (cCollectionElement_controlRegisterFieldList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_controlRegisterFieldList) ;
    outOperand0 = p->mObject.mProperty_mFieldBitCount ;
    outOperand1 = p->mObject.mProperty_mFieldName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterFieldList::setter_popLast (GALGAS_uint & outOperand0,
                                                      GALGAS_string & outOperand1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_controlRegisterFieldList * p = (cCollectionElement_controlRegisterFieldList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_controlRegisterFieldList) ;
    outOperand0 = p->mObject.mProperty_mFieldBitCount ;
    outOperand1 = p->mObject.mProperty_mFieldName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterFieldList::method_first (GALGAS_uint & outOperand0,
                                                    GALGAS_string & outOperand1,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_controlRegisterFieldList * p = (cCollectionElement_controlRegisterFieldList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_controlRegisterFieldList) ;
    outOperand0 = p->mObject.mProperty_mFieldBitCount ;
    outOperand1 = p->mObject.mProperty_mFieldName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterFieldList::method_last (GALGAS_uint & outOperand0,
                                                   GALGAS_string & outOperand1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_controlRegisterFieldList * p = (cCollectionElement_controlRegisterFieldList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_controlRegisterFieldList) ;
    outOperand0 = p->mObject.mProperty_mFieldBitCount ;
    outOperand1 = p->mObject.mProperty_mFieldName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterFieldList GALGAS_controlRegisterFieldList::add_operation (const GALGAS_controlRegisterFieldList & inOperand,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_controlRegisterFieldList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterFieldList GALGAS_controlRegisterFieldList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_controlRegisterFieldList result = GALGAS_controlRegisterFieldList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterFieldList GALGAS_controlRegisterFieldList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_controlRegisterFieldList result = GALGAS_controlRegisterFieldList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterFieldList GALGAS_controlRegisterFieldList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_controlRegisterFieldList result = GALGAS_controlRegisterFieldList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterFieldList::plusAssign_operation (const GALGAS_controlRegisterFieldList inOperand,
                                                            C_Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterFieldList::setter_setMFieldBitCountAtIndex (GALGAS_uint inOperand,
                                                                       GALGAS_uint inIndex,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_controlRegisterFieldList * p = (cCollectionElement_controlRegisterFieldList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_controlRegisterFieldList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFieldBitCount = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_controlRegisterFieldList::getter_mFieldBitCountAtIndex (const GALGAS_uint & inIndex,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_controlRegisterFieldList * p = (cCollectionElement_controlRegisterFieldList *) attributes.ptr () ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_controlRegisterFieldList) ;
    result = p->mObject.mProperty_mFieldBitCount ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterFieldList::setter_setMFieldNameAtIndex (GALGAS_string inOperand,
                                                                   GALGAS_uint inIndex,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_controlRegisterFieldList * p = (cCollectionElement_controlRegisterFieldList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_controlRegisterFieldList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFieldName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_controlRegisterFieldList::getter_mFieldNameAtIndex (const GALGAS_uint & inIndex,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_controlRegisterFieldList * p = (cCollectionElement_controlRegisterFieldList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_controlRegisterFieldList) ;
    result = p->mObject.mProperty_mFieldName ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_controlRegisterFieldList::cEnumerator_controlRegisterFieldList (const GALGAS_controlRegisterFieldList & inEnumeratedObject,
                                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterFieldList_2D_element cEnumerator_controlRegisterFieldList::current (LOCATION_ARGS) const {
  const cCollectionElement_controlRegisterFieldList * p = (const cCollectionElement_controlRegisterFieldList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_controlRegisterFieldList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_controlRegisterFieldList::current_mFieldBitCount (LOCATION_ARGS) const {
  const cCollectionElement_controlRegisterFieldList * p = (const cCollectionElement_controlRegisterFieldList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_controlRegisterFieldList) ;
  return p->mObject.mProperty_mFieldBitCount ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_controlRegisterFieldList::current_mFieldName (LOCATION_ARGS) const {
  const cCollectionElement_controlRegisterFieldList * p = (const cCollectionElement_controlRegisterFieldList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_controlRegisterFieldList) ;
  return p->mObject.mProperty_mFieldName ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@controlRegisterFieldList type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_controlRegisterFieldList ("controlRegisterFieldList",
                                                 NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_controlRegisterFieldList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterFieldList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_controlRegisterFieldList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_controlRegisterFieldList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterFieldList GALGAS_controlRegisterFieldList::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterFieldList result ;
  const GALGAS_controlRegisterFieldList * p = (const GALGAS_controlRegisterFieldList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_controlRegisterFieldList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterFieldList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_controlRegisterFieldMap::cMapElement_controlRegisterFieldMap (const GALGAS_lstring & inKey,
                                                                          const GALGAS_uint & in_mBitIndex,
                                                                          const GALGAS_uint & in_mBitCount
                                                                          COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mBitIndex (in_mBitIndex),
mProperty_mBitCount (in_mBitCount) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_controlRegisterFieldMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mBitIndex.isValid () && mProperty_mBitCount.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_controlRegisterFieldMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_controlRegisterFieldMap (mProperty_lkey, mProperty_mBitIndex, mProperty_mBitCount COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_controlRegisterFieldMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBitIndex" ":" ;
  mProperty_mBitIndex.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBitCount" ":" ;
  mProperty_mBitCount.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_controlRegisterFieldMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_controlRegisterFieldMap * operand = (cMapElement_controlRegisterFieldMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mBitIndex.objectCompare (operand->mProperty_mBitIndex) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mBitCount.objectCompare (operand->mProperty_mBitCount) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterFieldMap::GALGAS_controlRegisterFieldMap (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterFieldMap::GALGAS_controlRegisterFieldMap (const GALGAS_controlRegisterFieldMap & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterFieldMap & GALGAS_controlRegisterFieldMap::operator = (const GALGAS_controlRegisterFieldMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterFieldMap GALGAS_controlRegisterFieldMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_controlRegisterFieldMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterFieldMap GALGAS_controlRegisterFieldMap::constructor_mapWithMapToOverride (const GALGAS_controlRegisterFieldMap & inMapToOverride
                                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterFieldMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterFieldMap GALGAS_controlRegisterFieldMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  GALGAS_controlRegisterFieldMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterFieldMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                          const GALGAS_uint & inArgument0,
                                                          const GALGAS_uint & inArgument1,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  cMapElement_controlRegisterFieldMap * p = NULL ;
  macroMyNew (p, cMapElement_controlRegisterFieldMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@controlRegisterFieldMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterFieldMap::setter_insertKey (GALGAS_lstring inKey,
                                                       GALGAS_uint inArgument0,
                                                       GALGAS_uint inArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  cMapElement_controlRegisterFieldMap * p = NULL ;
  macroMyNew (p, cMapElement_controlRegisterFieldMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' slice has been already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_controlRegisterFieldMap_searchKey = "the '%K' slice is not declared" ;

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterFieldMap::method_searchKey (GALGAS_lstring inKey,
                                                       GALGAS_uint & outArgument0,
                                                       GALGAS_uint & outArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  const cMapElement_controlRegisterFieldMap * p = (const cMapElement_controlRegisterFieldMap *) performSearch (inKey,
                                                                                                               inCompiler,
                                                                                                               kSearchErrorMessage_controlRegisterFieldMap_searchKey
                                                                                                               COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_controlRegisterFieldMap) ;
    outArgument0 = p->mProperty_mBitIndex ;
    outArgument1 = p->mProperty_mBitCount ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_controlRegisterFieldMap::getter_mBitIndexForKey (const GALGAS_string & inKey,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_controlRegisterFieldMap * p = (const cMapElement_controlRegisterFieldMap *) attributes ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_controlRegisterFieldMap) ;
    result = p->mProperty_mBitIndex ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_controlRegisterFieldMap::getter_mBitCountForKey (const GALGAS_string & inKey,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_controlRegisterFieldMap * p = (const cMapElement_controlRegisterFieldMap *) attributes ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_controlRegisterFieldMap) ;
    result = p->mProperty_mBitCount ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterFieldMap::setter_setMBitIndexForKey (GALGAS_uint inAttributeValue,
                                                                GALGAS_string inKey,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_controlRegisterFieldMap * p = (cMapElement_controlRegisterFieldMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_controlRegisterFieldMap) ;
    p->mProperty_mBitIndex = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterFieldMap::setter_setMBitCountForKey (GALGAS_uint inAttributeValue,
                                                                GALGAS_string inKey,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_controlRegisterFieldMap * p = (cMapElement_controlRegisterFieldMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_controlRegisterFieldMap) ;
    p->mProperty_mBitCount = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_controlRegisterFieldMap * GALGAS_controlRegisterFieldMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                         const GALGAS_string & inKey
                                                                                                         COMMA_LOCATION_ARGS) {
  cMapElement_controlRegisterFieldMap * result = (cMapElement_controlRegisterFieldMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_controlRegisterFieldMap) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_controlRegisterFieldMap::cEnumerator_controlRegisterFieldMap (const GALGAS_controlRegisterFieldMap & inEnumeratedObject,
                                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterFieldMap_2D_element cEnumerator_controlRegisterFieldMap::current (LOCATION_ARGS) const {
  const cMapElement_controlRegisterFieldMap * p = (const cMapElement_controlRegisterFieldMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_controlRegisterFieldMap) ;
  return GALGAS_controlRegisterFieldMap_2D_element (p->mProperty_lkey, p->mProperty_mBitIndex, p->mProperty_mBitCount) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_controlRegisterFieldMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_controlRegisterFieldMap::current_mBitIndex (LOCATION_ARGS) const {
  const cMapElement_controlRegisterFieldMap * p = (const cMapElement_controlRegisterFieldMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_controlRegisterFieldMap) ;
  return p->mProperty_mBitIndex ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_controlRegisterFieldMap::current_mBitCount (LOCATION_ARGS) const {
  const cMapElement_controlRegisterFieldMap * p = (const cMapElement_controlRegisterFieldMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_controlRegisterFieldMap) ;
  return p->mProperty_mBitCount ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_controlRegisterFieldMap::optional_searchKey (const GALGAS_string & inKey,
                                                         GALGAS_uint & outArgument0,
                                                         GALGAS_uint & outArgument1) const {
  const cMapElement_controlRegisterFieldMap * p = (const cMapElement_controlRegisterFieldMap *) searchForKey (inKey) ;
  const bool result = NULL != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_controlRegisterFieldMap) ;
    outArgument0 = p->mProperty_mBitIndex ;
    outArgument1 = p->mProperty_mBitCount ;
  }else{
    outArgument0.drop () ;
    outArgument1.drop () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@controlRegisterFieldMap type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_controlRegisterFieldMap ("controlRegisterFieldMap",
                                                NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_controlRegisterFieldMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterFieldMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_controlRegisterFieldMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_controlRegisterFieldMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterFieldMap GALGAS_controlRegisterFieldMap::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterFieldMap result ;
  const GALGAS_controlRegisterFieldMap * p = (const GALGAS_controlRegisterFieldMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_controlRegisterFieldMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterFieldMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_sliceMap::cMapElement_sliceMap (const GALGAS_lstring & inKey,
                                            const GALGAS_llvmBinaryOperation & in_mAccessOperator,
                                            const GALGAS_bigint & in_mAccessRightOperand,
                                            const GALGAS_omnibusType & in_mResultType
                                            COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mAccessOperator (in_mAccessOperator),
mProperty_mAccessRightOperand (in_mAccessRightOperand),
mProperty_mResultType (in_mResultType) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_sliceMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mAccessOperator.isValid () && mProperty_mAccessRightOperand.isValid () && mProperty_mResultType.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_sliceMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_sliceMap (mProperty_lkey, mProperty_mAccessOperator, mProperty_mAccessRightOperand, mProperty_mResultType COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_sliceMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAccessOperator" ":" ;
  mProperty_mAccessOperator.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAccessRightOperand" ":" ;
  mProperty_mAccessRightOperand.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mResultType" ":" ;
  mProperty_mResultType.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_sliceMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_sliceMap * operand = (cMapElement_sliceMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mAccessOperator.objectCompare (operand->mProperty_mAccessOperator) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAccessRightOperand.objectCompare (operand->mProperty_mAccessRightOperand) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mResultType.objectCompare (operand->mProperty_mResultType) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sliceMap::GALGAS_sliceMap (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sliceMap::GALGAS_sliceMap (const GALGAS_sliceMap & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sliceMap & GALGAS_sliceMap::operator = (const GALGAS_sliceMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sliceMap GALGAS_sliceMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_sliceMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sliceMap GALGAS_sliceMap::constructor_mapWithMapToOverride (const GALGAS_sliceMap & inMapToOverride
                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_sliceMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sliceMap GALGAS_sliceMap::getter_overriddenMap (C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GALGAS_sliceMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sliceMap::addAssign_operation (const GALGAS_lstring & inKey,
                                           const GALGAS_llvmBinaryOperation & inArgument0,
                                           const GALGAS_bigint & inArgument1,
                                           const GALGAS_omnibusType & inArgument2,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  cMapElement_sliceMap * p = NULL ;
  macroMyNew (p, cMapElement_sliceMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@sliceMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sliceMap::setter_insertKey (GALGAS_lstring inKey,
                                        GALGAS_llvmBinaryOperation inArgument0,
                                        GALGAS_bigint inArgument1,
                                        GALGAS_omnibusType inArgument2,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  cMapElement_sliceMap * p = NULL ;
  macroMyNew (p, cMapElement_sliceMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' slice has been already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_sliceMap_searchKey = "the '%K' slice is not declared" ;

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sliceMap::method_searchKey (GALGAS_lstring inKey,
                                        GALGAS_llvmBinaryOperation & outArgument0,
                                        GALGAS_bigint & outArgument1,
                                        GALGAS_omnibusType & outArgument2,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  const cMapElement_sliceMap * p = (const cMapElement_sliceMap *) performSearch (inKey,
                                                                                 inCompiler,
                                                                                 kSearchErrorMessage_sliceMap_searchKey
                                                                                 COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_sliceMap) ;
    outArgument0 = p->mProperty_mAccessOperator ;
    outArgument1 = p->mProperty_mAccessRightOperand ;
    outArgument2 = p->mProperty_mResultType ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmBinaryOperation GALGAS_sliceMap::getter_mAccessOperatorForKey (const GALGAS_string & inKey,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_sliceMap * p = (const cMapElement_sliceMap *) attributes ;
  GALGAS_llvmBinaryOperation result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_sliceMap) ;
    result = p->mProperty_mAccessOperator ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bigint GALGAS_sliceMap::getter_mAccessRightOperandForKey (const GALGAS_string & inKey,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_sliceMap * p = (const cMapElement_sliceMap *) attributes ;
  GALGAS_bigint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_sliceMap) ;
    result = p->mProperty_mAccessRightOperand ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_omnibusType GALGAS_sliceMap::getter_mResultTypeForKey (const GALGAS_string & inKey,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_sliceMap * p = (const cMapElement_sliceMap *) attributes ;
  GALGAS_omnibusType result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_sliceMap) ;
    result = p->mProperty_mResultType ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sliceMap::setter_setMAccessOperatorForKey (GALGAS_llvmBinaryOperation inAttributeValue,
                                                       GALGAS_string inKey,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_sliceMap * p = (cMapElement_sliceMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_sliceMap) ;
    p->mProperty_mAccessOperator = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sliceMap::setter_setMAccessRightOperandForKey (GALGAS_bigint inAttributeValue,
                                                           GALGAS_string inKey,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_sliceMap * p = (cMapElement_sliceMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_sliceMap) ;
    p->mProperty_mAccessRightOperand = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sliceMap::setter_setMResultTypeForKey (GALGAS_omnibusType inAttributeValue,
                                                   GALGAS_string inKey,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_sliceMap * p = (cMapElement_sliceMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_sliceMap) ;
    p->mProperty_mResultType = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_sliceMap * GALGAS_sliceMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                           const GALGAS_string & inKey
                                                                           COMMA_LOCATION_ARGS) {
  cMapElement_sliceMap * result = (cMapElement_sliceMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_sliceMap) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_sliceMap::cEnumerator_sliceMap (const GALGAS_sliceMap & inEnumeratedObject,
                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sliceMap_2D_element cEnumerator_sliceMap::current (LOCATION_ARGS) const {
  const cMapElement_sliceMap * p = (const cMapElement_sliceMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_sliceMap) ;
  return GALGAS_sliceMap_2D_element (p->mProperty_lkey, p->mProperty_mAccessOperator, p->mProperty_mAccessRightOperand, p->mProperty_mResultType) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_sliceMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmBinaryOperation cEnumerator_sliceMap::current_mAccessOperator (LOCATION_ARGS) const {
  const cMapElement_sliceMap * p = (const cMapElement_sliceMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_sliceMap) ;
  return p->mProperty_mAccessOperator ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bigint cEnumerator_sliceMap::current_mAccessRightOperand (LOCATION_ARGS) const {
  const cMapElement_sliceMap * p = (const cMapElement_sliceMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_sliceMap) ;
  return p->mProperty_mAccessRightOperand ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_omnibusType cEnumerator_sliceMap::current_mResultType (LOCATION_ARGS) const {
  const cMapElement_sliceMap * p = (const cMapElement_sliceMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_sliceMap) ;
  return p->mProperty_mResultType ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_sliceMap::optional_searchKey (const GALGAS_string & inKey,
                                          GALGAS_llvmBinaryOperation & outArgument0,
                                          GALGAS_bigint & outArgument1,
                                          GALGAS_omnibusType & outArgument2) const {
  const cMapElement_sliceMap * p = (const cMapElement_sliceMap *) searchForKey (inKey) ;
  const bool result = NULL != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_sliceMap) ;
    outArgument0 = p->mProperty_mAccessOperator ;
    outArgument1 = p->mProperty_mAccessRightOperand ;
    outArgument2 = p->mProperty_mResultType ;
  }else{
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@sliceMap type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_sliceMap ("sliceMap",
                                 NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_sliceMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sliceMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_sliceMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sliceMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sliceMap GALGAS_sliceMap::extractObject (const GALGAS_object & inObject,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  GALGAS_sliceMap result ;
  const GALGAS_sliceMap * p = (const GALGAS_sliceMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_sliceMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sliceMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmBinaryOperation::GALGAS_llvmBinaryOperation (void) :
mEnum (kNotBuilt) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_addNoOVF (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_addNoOVF ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_subNoOVF (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_subNoOVF ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_mulNoOVF (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_mulNoOVF ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_udivNoOVF (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_udivNoOVF ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_sdivNoOVF (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_sdivNoOVF ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_uremNoOVF (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_uremNoOVF ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_sremNoOVF (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_sremNoOVF ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_uaddOVF (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_uaddOVF ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_saddOVF (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_saddOVF ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_usubOVF (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_usubOVF ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_ssubOVF (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_ssubOVF ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_umulOVF (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_umulOVF ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_smulOVF (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_smulOVF ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_udivOVF (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_udivOVF ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_sdivOVF (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_sdivOVF ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_uremOVF (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_uremOVF ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_sremOVF (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_sremOVF ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_and (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_and ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_ior (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_ior ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_xor (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_xor ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_shl (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_shl ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_ashr (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_ashr ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_lshr (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_lshr ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_icmp_5F_eq (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_icmp_5F_eq ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_icmp_5F_ult (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_icmp_5F_ult ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_icmp_5F_ule (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_icmp_5F_ule ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_icmp_5F_slt (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_icmp_5F_slt ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_icmp_5F_sle (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_icmp_5F_sle ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_llvmBinaryOperation [29] = {
  "(not built)",
  "addNoOVF",
  "subNoOVF",
  "mulNoOVF",
  "udivNoOVF",
  "sdivNoOVF",
  "uremNoOVF",
  "sremNoOVF",
  "uaddOVF",
  "saddOVF",
  "usubOVF",
  "ssubOVF",
  "umulOVF",
  "smulOVF",
  "udivOVF",
  "sdivOVF",
  "uremOVF",
  "sremOVF",
  "and",
  "ior",
  "xor",
  "shl",
  "ashr",
  "lshr",
  "icmp_eq",
  "icmp_ult",
  "icmp_ule",
  "icmp_slt",
  "icmp_sle"
} ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isAddNoOVF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_addNoOVF == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isSubNoOVF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_subNoOVF == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isMulNoOVF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_mulNoOVF == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isUdivNoOVF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_udivNoOVF == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isSdivNoOVF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_sdivNoOVF == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isUremNoOVF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_uremNoOVF == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isSremNoOVF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_sremNoOVF == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isUaddOVF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_uaddOVF == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isSaddOVF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_saddOVF == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isUsubOVF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_usubOVF == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isSsubOVF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_ssubOVF == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isUmulOVF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_umulOVF == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isSmulOVF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_smulOVF == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isUdivOVF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_udivOVF == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isSdivOVF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_sdivOVF == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isUremOVF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_uremOVF == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isSremOVF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_sremOVF == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isAnd (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_and == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isIor (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_ior == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isXor (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_xor == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isShl (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_shl == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isAshr (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_ashr == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isLshr (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_lshr == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isIcmp_5F_eq (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_icmp_5F_eq == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isIcmp_5F_ult (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_icmp_5F_ult == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isIcmp_5F_ule (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_icmp_5F_ule == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isIcmp_5F_slt (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_icmp_5F_slt == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isIcmp_5F_sle (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_icmp_5F_sle == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_llvmBinaryOperation::description (C_String & ioString,
                                              const int32_t /* inIndentation */) const {
  ioString << "<enum @llvmBinaryOperation: " << gEnumNameArrayFor_llvmBinaryOperation [mEnum] ;
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_llvmBinaryOperation::objectCompare (const GALGAS_llvmBinaryOperation & inOperand) const {
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

//----------------------------------------------------------------------------------------------------------------------
//
//@llvmBinaryOperation type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_llvmBinaryOperation ("llvmBinaryOperation",
                                            NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_llvmBinaryOperation::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmBinaryOperation ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_llvmBinaryOperation::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_llvmBinaryOperation (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  const GALGAS_llvmBinaryOperation * p = (const GALGAS_llvmBinaryOperation *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_llvmBinaryOperation *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("llvmBinaryOperation", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@controlRegisterGroupDeclarationAST noteTypesInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionMethodSignature_controlRegisterGroupDeclarationAST_noteTypesInPrecedenceGraph> gExtensionMethodTable_controlRegisterGroupDeclarationAST_noteTypesInPrecedenceGraph ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_noteTypesInPrecedenceGraph (const int32_t inClassIndex,
                                                      extensionMethodSignature_controlRegisterGroupDeclarationAST_noteTypesInPrecedenceGraph inMethod) {
  gExtensionMethodTable_controlRegisterGroupDeclarationAST_noteTypesInPrecedenceGraph.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_noteTypesInPrecedenceGraph (const cPtr_controlRegisterGroupDeclarationAST * inObject,
                                                     GALGAS_semanticTypePrecedenceGraph & io_ioGraph,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_controlRegisterGroupDeclarationAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_controlRegisterGroupDeclarationAST_noteTypesInPrecedenceGraph f = NULL ;
    if (classIndex < gExtensionMethodTable_controlRegisterGroupDeclarationAST_noteTypesInPrecedenceGraph.count ()) {
      f = gExtensionMethodTable_controlRegisterGroupDeclarationAST_noteTypesInPrecedenceGraph (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_controlRegisterGroupDeclarationAST_noteTypesInPrecedenceGraph.count ()) {
           f = gExtensionMethodTable_controlRegisterGroupDeclarationAST_noteTypesInPrecedenceGraph (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_controlRegisterGroupDeclarationAST_noteTypesInPrecedenceGraph.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioGraph, inCompiler COMMA_THERE) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_controlRegisterGroupDeclarationAST_noteTypesInPrecedenceGraph (const cPtr_controlRegisterGroupDeclarationAST * inObject,
                                                                                           GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_controlRegisterGroupDeclarationAST * object = inObject ;
  macroValidSharedObject (object, cPtr_controlRegisterGroupDeclarationAST) ;
  cEnumerator_controlRegisterDeclarationList enumerator_11323 (object->mProperty_mRegisters, kENUMERATION_UP) ;
  while (enumerator_11323.hasCurrentObject ()) {
    {
    ioArgument_ioGraph.setter_noteNode (enumerator_11323.current (HERE).getter_mRegisterTypeName (HERE) COMMA_SOURCE_FILE ("declaration-control-register.galgas", 297)) ;
    }
    {
    ioArgument_ioGraph.setter_addEdge (function_compileTimeDeclarationBarrier (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 298)), enumerator_11323.current (HERE).getter_mRegisterTypeName (HERE) COMMA_SOURCE_FILE ("declaration-control-register.galgas", 298)) ;
    }
    enumerator_11323.gotoNextObject () ;
  }
}
//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_controlRegisterGroupDeclarationAST_noteTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_controlRegisterGroupDeclarationAST.mSlotID,
                                                   extensionMethod_controlRegisterGroupDeclarationAST_noteTypesInPrecedenceGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionMethod_controlRegisterGroupDeclarationAST_noteTypesInPrecedenceGraph (void) {
  gExtensionMethodTable_controlRegisterGroupDeclarationAST_noteTypesInPrecedenceGraph.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_controlRegisterGroupDeclarationAST_noteTypesInPrecedenceGraph (defineExtensionMethod_controlRegisterGroupDeclarationAST_noteTypesInPrecedenceGraph,
                                                                                          freeExtensionMethod_controlRegisterGroupDeclarationAST_noteTypesInPrecedenceGraph) ;

//----------------------------------------------------------------------------------------------------------------------

cMapElement_controlRegisterMap::cMapElement_controlRegisterMap (const GALGAS_lstring & inKey,
                                                                const GALGAS_omnibusType & in_mType,
                                                                const GALGAS_bool & in_mIsReadOnly,
                                                                const GALGAS_bool & in_mUserAccess,
                                                                const GALGAS_sliceMap & in_mRegisterFieldAccessMap,
                                                                const GALGAS_controlRegisterFieldMap & in_mRegisterFieldMap,
                                                                const GALGAS_bigint & in_mAddressOffset,
                                                                const GALGAS_controlRegisterFieldList & in_mControlRegisterFieldList,
                                                                const GALGAS_uint & in_mRegisterBitCount,
                                                                const GALGAS_uint & in_mArraySize,
                                                                const GALGAS_uint & in_mElementArraySize
                                                                COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mType (in_mType),
mProperty_mIsReadOnly (in_mIsReadOnly),
mProperty_mUserAccess (in_mUserAccess),
mProperty_mRegisterFieldAccessMap (in_mRegisterFieldAccessMap),
mProperty_mRegisterFieldMap (in_mRegisterFieldMap),
mProperty_mAddressOffset (in_mAddressOffset),
mProperty_mControlRegisterFieldList (in_mControlRegisterFieldList),
mProperty_mRegisterBitCount (in_mRegisterBitCount),
mProperty_mArraySize (in_mArraySize),
mProperty_mElementArraySize (in_mElementArraySize) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_controlRegisterMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mType.isValid () && mProperty_mIsReadOnly.isValid () && mProperty_mUserAccess.isValid () && mProperty_mRegisterFieldAccessMap.isValid () && mProperty_mRegisterFieldMap.isValid () && mProperty_mAddressOffset.isValid () && mProperty_mControlRegisterFieldList.isValid () && mProperty_mRegisterBitCount.isValid () && mProperty_mArraySize.isValid () && mProperty_mElementArraySize.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_controlRegisterMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_controlRegisterMap (mProperty_lkey, mProperty_mType, mProperty_mIsReadOnly, mProperty_mUserAccess, mProperty_mRegisterFieldAccessMap, mProperty_mRegisterFieldMap, mProperty_mAddressOffset, mProperty_mControlRegisterFieldList, mProperty_mRegisterBitCount, mProperty_mArraySize, mProperty_mElementArraySize COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_controlRegisterMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mType" ":" ;
  mProperty_mType.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIsReadOnly" ":" ;
  mProperty_mIsReadOnly.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mUserAccess" ":" ;
  mProperty_mUserAccess.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mRegisterFieldAccessMap" ":" ;
  mProperty_mRegisterFieldAccessMap.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mRegisterFieldMap" ":" ;
  mProperty_mRegisterFieldMap.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAddressOffset" ":" ;
  mProperty_mAddressOffset.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mControlRegisterFieldList" ":" ;
  mProperty_mControlRegisterFieldList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mRegisterBitCount" ":" ;
  mProperty_mRegisterBitCount.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mArraySize" ":" ;
  mProperty_mArraySize.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mElementArraySize" ":" ;
  mProperty_mElementArraySize.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_controlRegisterMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_controlRegisterMap * operand = (cMapElement_controlRegisterMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mType.objectCompare (operand->mProperty_mType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIsReadOnly.objectCompare (operand->mProperty_mIsReadOnly) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mUserAccess.objectCompare (operand->mProperty_mUserAccess) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRegisterFieldAccessMap.objectCompare (operand->mProperty_mRegisterFieldAccessMap) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRegisterFieldMap.objectCompare (operand->mProperty_mRegisterFieldMap) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAddressOffset.objectCompare (operand->mProperty_mAddressOffset) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mControlRegisterFieldList.objectCompare (operand->mProperty_mControlRegisterFieldList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRegisterBitCount.objectCompare (operand->mProperty_mRegisterBitCount) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mArraySize.objectCompare (operand->mProperty_mArraySize) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mElementArraySize.objectCompare (operand->mProperty_mElementArraySize) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterMap::GALGAS_controlRegisterMap (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterMap::GALGAS_controlRegisterMap (const GALGAS_controlRegisterMap & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterMap & GALGAS_controlRegisterMap::operator = (const GALGAS_controlRegisterMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterMap GALGAS_controlRegisterMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_controlRegisterMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterMap GALGAS_controlRegisterMap::constructor_mapWithMapToOverride (const GALGAS_controlRegisterMap & inMapToOverride
                                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterMap GALGAS_controlRegisterMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  GALGAS_controlRegisterMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                     const GALGAS_omnibusType & inArgument0,
                                                     const GALGAS_bool & inArgument1,
                                                     const GALGAS_bool & inArgument2,
                                                     const GALGAS_sliceMap & inArgument3,
                                                     const GALGAS_controlRegisterFieldMap & inArgument4,
                                                     const GALGAS_bigint & inArgument5,
                                                     const GALGAS_controlRegisterFieldList & inArgument6,
                                                     const GALGAS_uint & inArgument7,
                                                     const GALGAS_uint & inArgument8,
                                                     const GALGAS_uint & inArgument9,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  cMapElement_controlRegisterMap * p = NULL ;
  macroMyNew (p, cMapElement_controlRegisterMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4, inArgument5, inArgument6, inArgument7, inArgument8, inArgument9 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@controlRegisterMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterMap::setter_insertKey (GALGAS_lstring inKey,
                                                  GALGAS_omnibusType inArgument0,
                                                  GALGAS_bool inArgument1,
                                                  GALGAS_bool inArgument2,
                                                  GALGAS_sliceMap inArgument3,
                                                  GALGAS_controlRegisterFieldMap inArgument4,
                                                  GALGAS_bigint inArgument5,
                                                  GALGAS_controlRegisterFieldList inArgument6,
                                                  GALGAS_uint inArgument7,
                                                  GALGAS_uint inArgument8,
                                                  GALGAS_uint inArgument9,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cMapElement_controlRegisterMap * p = NULL ;
  macroMyNew (p, cMapElement_controlRegisterMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4, inArgument5, inArgument6, inArgument7, inArgument8, inArgument9 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' control register has been already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_controlRegisterMap_searchKey = "the '%K' control register is not declared" ;

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterMap::method_searchKey (GALGAS_lstring inKey,
                                                  GALGAS_omnibusType & outArgument0,
                                                  GALGAS_bool & outArgument1,
                                                  GALGAS_bool & outArgument2,
                                                  GALGAS_sliceMap & outArgument3,
                                                  GALGAS_controlRegisterFieldMap & outArgument4,
                                                  GALGAS_bigint & outArgument5,
                                                  GALGAS_controlRegisterFieldList & outArgument6,
                                                  GALGAS_uint & outArgument7,
                                                  GALGAS_uint & outArgument8,
                                                  GALGAS_uint & outArgument9,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  const cMapElement_controlRegisterMap * p = (const cMapElement_controlRegisterMap *) performSearch (inKey,
                                                                                                     inCompiler,
                                                                                                     kSearchErrorMessage_controlRegisterMap_searchKey
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
  }else{
    macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
    outArgument0 = p->mProperty_mType ;
    outArgument1 = p->mProperty_mIsReadOnly ;
    outArgument2 = p->mProperty_mUserAccess ;
    outArgument3 = p->mProperty_mRegisterFieldAccessMap ;
    outArgument4 = p->mProperty_mRegisterFieldMap ;
    outArgument5 = p->mProperty_mAddressOffset ;
    outArgument6 = p->mProperty_mControlRegisterFieldList ;
    outArgument7 = p->mProperty_mRegisterBitCount ;
    outArgument8 = p->mProperty_mArraySize ;
    outArgument9 = p->mProperty_mElementArraySize ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_omnibusType GALGAS_controlRegisterMap::getter_mTypeForKey (const GALGAS_string & inKey,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_controlRegisterMap * p = (const cMapElement_controlRegisterMap *) attributes ;
  GALGAS_omnibusType result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
    result = p->mProperty_mType ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_controlRegisterMap::getter_mIsReadOnlyForKey (const GALGAS_string & inKey,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_controlRegisterMap * p = (const cMapElement_controlRegisterMap *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
    result = p->mProperty_mIsReadOnly ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_controlRegisterMap::getter_mUserAccessForKey (const GALGAS_string & inKey,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_controlRegisterMap * p = (const cMapElement_controlRegisterMap *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
    result = p->mProperty_mUserAccess ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sliceMap GALGAS_controlRegisterMap::getter_mRegisterFieldAccessMapForKey (const GALGAS_string & inKey,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_controlRegisterMap * p = (const cMapElement_controlRegisterMap *) attributes ;
  GALGAS_sliceMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
    result = p->mProperty_mRegisterFieldAccessMap ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterFieldMap GALGAS_controlRegisterMap::getter_mRegisterFieldMapForKey (const GALGAS_string & inKey,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_controlRegisterMap * p = (const cMapElement_controlRegisterMap *) attributes ;
  GALGAS_controlRegisterFieldMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
    result = p->mProperty_mRegisterFieldMap ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bigint GALGAS_controlRegisterMap::getter_mAddressOffsetForKey (const GALGAS_string & inKey,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_controlRegisterMap * p = (const cMapElement_controlRegisterMap *) attributes ;
  GALGAS_bigint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
    result = p->mProperty_mAddressOffset ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterFieldList GALGAS_controlRegisterMap::getter_mControlRegisterFieldListForKey (const GALGAS_string & inKey,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_controlRegisterMap * p = (const cMapElement_controlRegisterMap *) attributes ;
  GALGAS_controlRegisterFieldList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
    result = p->mProperty_mControlRegisterFieldList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_controlRegisterMap::getter_mRegisterBitCountForKey (const GALGAS_string & inKey,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_controlRegisterMap * p = (const cMapElement_controlRegisterMap *) attributes ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
    result = p->mProperty_mRegisterBitCount ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_controlRegisterMap::getter_mArraySizeForKey (const GALGAS_string & inKey,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_controlRegisterMap * p = (const cMapElement_controlRegisterMap *) attributes ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
    result = p->mProperty_mArraySize ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_controlRegisterMap::getter_mElementArraySizeForKey (const GALGAS_string & inKey,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_controlRegisterMap * p = (const cMapElement_controlRegisterMap *) attributes ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
    result = p->mProperty_mElementArraySize ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterMap::setter_setMTypeForKey (GALGAS_omnibusType inAttributeValue,
                                                       GALGAS_string inKey,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_controlRegisterMap * p = (cMapElement_controlRegisterMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
    p->mProperty_mType = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterMap::setter_setMIsReadOnlyForKey (GALGAS_bool inAttributeValue,
                                                             GALGAS_string inKey,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_controlRegisterMap * p = (cMapElement_controlRegisterMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
    p->mProperty_mIsReadOnly = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterMap::setter_setMUserAccessForKey (GALGAS_bool inAttributeValue,
                                                             GALGAS_string inKey,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_controlRegisterMap * p = (cMapElement_controlRegisterMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
    p->mProperty_mUserAccess = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterMap::setter_setMRegisterFieldAccessMapForKey (GALGAS_sliceMap inAttributeValue,
                                                                         GALGAS_string inKey,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_controlRegisterMap * p = (cMapElement_controlRegisterMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
    p->mProperty_mRegisterFieldAccessMap = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterMap::setter_setMRegisterFieldMapForKey (GALGAS_controlRegisterFieldMap inAttributeValue,
                                                                   GALGAS_string inKey,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_controlRegisterMap * p = (cMapElement_controlRegisterMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
    p->mProperty_mRegisterFieldMap = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterMap::setter_setMAddressOffsetForKey (GALGAS_bigint inAttributeValue,
                                                                GALGAS_string inKey,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_controlRegisterMap * p = (cMapElement_controlRegisterMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
    p->mProperty_mAddressOffset = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterMap::setter_setMControlRegisterFieldListForKey (GALGAS_controlRegisterFieldList inAttributeValue,
                                                                           GALGAS_string inKey,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_controlRegisterMap * p = (cMapElement_controlRegisterMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
    p->mProperty_mControlRegisterFieldList = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterMap::setter_setMRegisterBitCountForKey (GALGAS_uint inAttributeValue,
                                                                   GALGAS_string inKey,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_controlRegisterMap * p = (cMapElement_controlRegisterMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
    p->mProperty_mRegisterBitCount = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterMap::setter_setMArraySizeForKey (GALGAS_uint inAttributeValue,
                                                            GALGAS_string inKey,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_controlRegisterMap * p = (cMapElement_controlRegisterMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
    p->mProperty_mArraySize = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterMap::setter_setMElementArraySizeForKey (GALGAS_uint inAttributeValue,
                                                                   GALGAS_string inKey,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_controlRegisterMap * p = (cMapElement_controlRegisterMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
    p->mProperty_mElementArraySize = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_controlRegisterMap * GALGAS_controlRegisterMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                               const GALGAS_string & inKey
                                                                                               COMMA_LOCATION_ARGS) {
  cMapElement_controlRegisterMap * result = (cMapElement_controlRegisterMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_controlRegisterMap) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_controlRegisterMap::cEnumerator_controlRegisterMap (const GALGAS_controlRegisterMap & inEnumeratedObject,
                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterMap_2D_element cEnumerator_controlRegisterMap::current (LOCATION_ARGS) const {
  const cMapElement_controlRegisterMap * p = (const cMapElement_controlRegisterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
  return GALGAS_controlRegisterMap_2D_element (p->mProperty_lkey, p->mProperty_mType, p->mProperty_mIsReadOnly, p->mProperty_mUserAccess, p->mProperty_mRegisterFieldAccessMap, p->mProperty_mRegisterFieldMap, p->mProperty_mAddressOffset, p->mProperty_mControlRegisterFieldList, p->mProperty_mRegisterBitCount, p->mProperty_mArraySize, p->mProperty_mElementArraySize) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_controlRegisterMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_omnibusType cEnumerator_controlRegisterMap::current_mType (LOCATION_ARGS) const {
  const cMapElement_controlRegisterMap * p = (const cMapElement_controlRegisterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
  return p->mProperty_mType ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_controlRegisterMap::current_mIsReadOnly (LOCATION_ARGS) const {
  const cMapElement_controlRegisterMap * p = (const cMapElement_controlRegisterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
  return p->mProperty_mIsReadOnly ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_controlRegisterMap::current_mUserAccess (LOCATION_ARGS) const {
  const cMapElement_controlRegisterMap * p = (const cMapElement_controlRegisterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
  return p->mProperty_mUserAccess ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sliceMap cEnumerator_controlRegisterMap::current_mRegisterFieldAccessMap (LOCATION_ARGS) const {
  const cMapElement_controlRegisterMap * p = (const cMapElement_controlRegisterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
  return p->mProperty_mRegisterFieldAccessMap ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterFieldMap cEnumerator_controlRegisterMap::current_mRegisterFieldMap (LOCATION_ARGS) const {
  const cMapElement_controlRegisterMap * p = (const cMapElement_controlRegisterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
  return p->mProperty_mRegisterFieldMap ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bigint cEnumerator_controlRegisterMap::current_mAddressOffset (LOCATION_ARGS) const {
  const cMapElement_controlRegisterMap * p = (const cMapElement_controlRegisterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
  return p->mProperty_mAddressOffset ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterFieldList cEnumerator_controlRegisterMap::current_mControlRegisterFieldList (LOCATION_ARGS) const {
  const cMapElement_controlRegisterMap * p = (const cMapElement_controlRegisterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
  return p->mProperty_mControlRegisterFieldList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_controlRegisterMap::current_mRegisterBitCount (LOCATION_ARGS) const {
  const cMapElement_controlRegisterMap * p = (const cMapElement_controlRegisterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
  return p->mProperty_mRegisterBitCount ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_controlRegisterMap::current_mArraySize (LOCATION_ARGS) const {
  const cMapElement_controlRegisterMap * p = (const cMapElement_controlRegisterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
  return p->mProperty_mArraySize ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_controlRegisterMap::current_mElementArraySize (LOCATION_ARGS) const {
  const cMapElement_controlRegisterMap * p = (const cMapElement_controlRegisterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
  return p->mProperty_mElementArraySize ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_controlRegisterMap::optional_searchKey (const GALGAS_string & inKey,
                                                    GALGAS_omnibusType & outArgument0,
                                                    GALGAS_bool & outArgument1,
                                                    GALGAS_bool & outArgument2,
                                                    GALGAS_sliceMap & outArgument3,
                                                    GALGAS_controlRegisterFieldMap & outArgument4,
                                                    GALGAS_bigint & outArgument5,
                                                    GALGAS_controlRegisterFieldList & outArgument6,
                                                    GALGAS_uint & outArgument7,
                                                    GALGAS_uint & outArgument8,
                                                    GALGAS_uint & outArgument9) const {
  const cMapElement_controlRegisterMap * p = (const cMapElement_controlRegisterMap *) searchForKey (inKey) ;
  const bool result = NULL != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
    outArgument0 = p->mProperty_mType ;
    outArgument1 = p->mProperty_mIsReadOnly ;
    outArgument2 = p->mProperty_mUserAccess ;
    outArgument3 = p->mProperty_mRegisterFieldAccessMap ;
    outArgument4 = p->mProperty_mRegisterFieldMap ;
    outArgument5 = p->mProperty_mAddressOffset ;
    outArgument6 = p->mProperty_mControlRegisterFieldList ;
    outArgument7 = p->mProperty_mRegisterBitCount ;
    outArgument8 = p->mProperty_mArraySize ;
    outArgument9 = p->mProperty_mElementArraySize ;
  }else{
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
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@controlRegisterMap type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_controlRegisterMap ("controlRegisterMap",
                                           NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_controlRegisterMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_controlRegisterMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_controlRegisterMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterMap GALGAS_controlRegisterMap::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterMap result ;
  const GALGAS_controlRegisterMap * p = (const GALGAS_controlRegisterMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_controlRegisterMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumAssociatedValues_registerGroupKind_single::cEnumAssociatedValues_registerGroupKind_single (const GALGAS_bigint & inAssociatedValue0
                                                                                                COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_registerGroupKind_single::description (C_String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_registerGroupKind_single::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_registerGroupKind_single * ptr = dynamic_cast<const cEnumAssociatedValues_registerGroupKind_single *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumAssociatedValues_registerGroupKind_arrayGroup::cEnumAssociatedValues_registerGroupKind_arrayGroup (const GALGAS_lbigintlist & inAssociatedValue0
                                                                                                        COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_registerGroupKind_arrayGroup::description (C_String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_registerGroupKind_arrayGroup::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_registerGroupKind_arrayGroup * ptr = dynamic_cast<const cEnumAssociatedValues_registerGroupKind_arrayGroup *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_registerGroupKind::GALGAS_registerGroupKind (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_registerGroupKind GALGAS_registerGroupKind::constructor_single (const GALGAS_bigint & inAssociatedValue0
                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_registerGroupKind result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_single ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_registerGroupKind_single (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_registerGroupKind GALGAS_registerGroupKind::constructor_arrayGroup (const GALGAS_lbigintlist & inAssociatedValue0
                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_registerGroupKind result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_arrayGroup ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_registerGroupKind_arrayGroup (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_registerGroupKind::method_single (GALGAS_bigint & outAssociatedValue0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_single) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @registerGroupKind single invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_registerGroupKind_single * ptr = (const cEnumAssociatedValues_registerGroupKind_single *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_registerGroupKind::method_arrayGroup (GALGAS_lbigintlist & outAssociatedValue0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_arrayGroup) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @registerGroupKind arrayGroup invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_registerGroupKind_arrayGroup * ptr = (const cEnumAssociatedValues_registerGroupKind_arrayGroup *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_registerGroupKind [3] = {
  "(not built)",
  "single",
  "arrayGroup"
} ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_registerGroupKind::getter_isSingle (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_single == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_registerGroupKind::getter_isArrayGroup (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_arrayGroup == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_registerGroupKind::description (C_String & ioString,
                                            const int32_t inIndentation) const {
  ioString << "<enum @registerGroupKind: " << gEnumNameArrayFor_registerGroupKind [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_registerGroupKind::objectCompare (const GALGAS_registerGroupKind & inOperand) const {
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

//----------------------------------------------------------------------------------------------------------------------
//
//@registerGroupKind type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_registerGroupKind ("registerGroupKind",
                                          NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_registerGroupKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_registerGroupKind ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_registerGroupKind::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_registerGroupKind (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_registerGroupKind GALGAS_registerGroupKind::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_registerGroupKind result ;
  const GALGAS_registerGroupKind * p = (const GALGAS_registerGroupKind *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_registerGroupKind *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("registerGroupKind", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@controlRegisterGroupArrayList' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_controlRegisterGroupArrayList : public cCollectionElement {
  public : GALGAS_controlRegisterGroupArrayList_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_controlRegisterGroupArrayList (const GALGAS_lstring & in_mGroupName,
                                                             const GALGAS_lbigintlist & in_mBaseAddresses
                                                             COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_controlRegisterGroupArrayList (const GALGAS_controlRegisterGroupArrayList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_controlRegisterGroupArrayList::cCollectionElement_controlRegisterGroupArrayList (const GALGAS_lstring & in_mGroupName,
                                                                                                    const GALGAS_lbigintlist & in_mBaseAddresses
                                                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mGroupName, in_mBaseAddresses) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_controlRegisterGroupArrayList::cCollectionElement_controlRegisterGroupArrayList (const GALGAS_controlRegisterGroupArrayList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mGroupName, inElement.mProperty_mBaseAddresses) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_controlRegisterGroupArrayList::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_controlRegisterGroupArrayList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_controlRegisterGroupArrayList (mObject.mProperty_mGroupName, mObject.mProperty_mBaseAddresses COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_controlRegisterGroupArrayList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mGroupName" ":" ;
  mObject.mProperty_mGroupName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBaseAddresses" ":" ;
  mObject.mProperty_mBaseAddresses.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_controlRegisterGroupArrayList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_controlRegisterGroupArrayList * operand = (cCollectionElement_controlRegisterGroupArrayList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_controlRegisterGroupArrayList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterGroupArrayList::GALGAS_controlRegisterGroupArrayList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterGroupArrayList::GALGAS_controlRegisterGroupArrayList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterGroupArrayList GALGAS_controlRegisterGroupArrayList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_controlRegisterGroupArrayList  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterGroupArrayList GALGAS_controlRegisterGroupArrayList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                      const GALGAS_lbigintlist & inOperand1
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterGroupArrayList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_controlRegisterGroupArrayList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_controlRegisterGroupArrayList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterGroupArrayList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                      const GALGAS_lstring & in_mGroupName,
                                                                      const GALGAS_lbigintlist & in_mBaseAddresses
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_controlRegisterGroupArrayList * p = NULL ;
  macroMyNew (p, cCollectionElement_controlRegisterGroupArrayList (in_mGroupName,
                                                                   in_mBaseAddresses COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterGroupArrayList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                                const GALGAS_lbigintlist & inOperand1
                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_controlRegisterGroupArrayList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterGroupArrayList::setter_append (GALGAS_controlRegisterGroupArrayList_2D_element inElement,
                                                          C_Compiler * /* inCompiler */
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_controlRegisterGroupArrayList (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterGroupArrayList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                 const GALGAS_lbigintlist inOperand1,
                                                                 const GALGAS_uint inInsertionIndex,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_controlRegisterGroupArrayList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterGroupArrayList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                 GALGAS_lbigintlist & outOperand1,
                                                                 const GALGAS_uint inRemoveIndex,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_controlRegisterGroupArrayList * p = (cCollectionElement_controlRegisterGroupArrayList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_controlRegisterGroupArrayList) ;
      outOperand0 = p->mObject.mProperty_mGroupName ;
      outOperand1 = p->mObject.mProperty_mBaseAddresses ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterGroupArrayList::setter_popFirst (GALGAS_lstring & outOperand0,
                                                            GALGAS_lbigintlist & outOperand1,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_controlRegisterGroupArrayList * p = (cCollectionElement_controlRegisterGroupArrayList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_controlRegisterGroupArrayList) ;
    outOperand0 = p->mObject.mProperty_mGroupName ;
    outOperand1 = p->mObject.mProperty_mBaseAddresses ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterGroupArrayList::setter_popLast (GALGAS_lstring & outOperand0,
                                                           GALGAS_lbigintlist & outOperand1,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_controlRegisterGroupArrayList * p = (cCollectionElement_controlRegisterGroupArrayList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_controlRegisterGroupArrayList) ;
    outOperand0 = p->mObject.mProperty_mGroupName ;
    outOperand1 = p->mObject.mProperty_mBaseAddresses ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterGroupArrayList::method_first (GALGAS_lstring & outOperand0,
                                                         GALGAS_lbigintlist & outOperand1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_controlRegisterGroupArrayList * p = (cCollectionElement_controlRegisterGroupArrayList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_controlRegisterGroupArrayList) ;
    outOperand0 = p->mObject.mProperty_mGroupName ;
    outOperand1 = p->mObject.mProperty_mBaseAddresses ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterGroupArrayList::method_last (GALGAS_lstring & outOperand0,
                                                        GALGAS_lbigintlist & outOperand1,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_controlRegisterGroupArrayList * p = (cCollectionElement_controlRegisterGroupArrayList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_controlRegisterGroupArrayList) ;
    outOperand0 = p->mObject.mProperty_mGroupName ;
    outOperand1 = p->mObject.mProperty_mBaseAddresses ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterGroupArrayList GALGAS_controlRegisterGroupArrayList::add_operation (const GALGAS_controlRegisterGroupArrayList & inOperand,
                                                                                          C_Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_controlRegisterGroupArrayList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterGroupArrayList GALGAS_controlRegisterGroupArrayList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_controlRegisterGroupArrayList result = GALGAS_controlRegisterGroupArrayList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterGroupArrayList GALGAS_controlRegisterGroupArrayList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_controlRegisterGroupArrayList result = GALGAS_controlRegisterGroupArrayList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterGroupArrayList GALGAS_controlRegisterGroupArrayList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_controlRegisterGroupArrayList result = GALGAS_controlRegisterGroupArrayList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterGroupArrayList::plusAssign_operation (const GALGAS_controlRegisterGroupArrayList inOperand,
                                                                 C_Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterGroupArrayList::setter_setMGroupNameAtIndex (GALGAS_lstring inOperand,
                                                                        GALGAS_uint inIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_controlRegisterGroupArrayList * p = (cCollectionElement_controlRegisterGroupArrayList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_controlRegisterGroupArrayList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mGroupName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_controlRegisterGroupArrayList::getter_mGroupNameAtIndex (const GALGAS_uint & inIndex,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_controlRegisterGroupArrayList * p = (cCollectionElement_controlRegisterGroupArrayList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_controlRegisterGroupArrayList) ;
    result = p->mObject.mProperty_mGroupName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterGroupArrayList::setter_setMBaseAddressesAtIndex (GALGAS_lbigintlist inOperand,
                                                                            GALGAS_uint inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_controlRegisterGroupArrayList * p = (cCollectionElement_controlRegisterGroupArrayList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_controlRegisterGroupArrayList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBaseAddresses = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lbigintlist GALGAS_controlRegisterGroupArrayList::getter_mBaseAddressesAtIndex (const GALGAS_uint & inIndex,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_controlRegisterGroupArrayList * p = (cCollectionElement_controlRegisterGroupArrayList *) attributes.ptr () ;
  GALGAS_lbigintlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_controlRegisterGroupArrayList) ;
    result = p->mObject.mProperty_mBaseAddresses ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_controlRegisterGroupArrayList::cEnumerator_controlRegisterGroupArrayList (const GALGAS_controlRegisterGroupArrayList & inEnumeratedObject,
                                                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterGroupArrayList_2D_element cEnumerator_controlRegisterGroupArrayList::current (LOCATION_ARGS) const {
  const cCollectionElement_controlRegisterGroupArrayList * p = (const cCollectionElement_controlRegisterGroupArrayList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_controlRegisterGroupArrayList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_controlRegisterGroupArrayList::current_mGroupName (LOCATION_ARGS) const {
  const cCollectionElement_controlRegisterGroupArrayList * p = (const cCollectionElement_controlRegisterGroupArrayList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_controlRegisterGroupArrayList) ;
  return p->mObject.mProperty_mGroupName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lbigintlist cEnumerator_controlRegisterGroupArrayList::current_mBaseAddresses (LOCATION_ARGS) const {
  const cCollectionElement_controlRegisterGroupArrayList * p = (const cCollectionElement_controlRegisterGroupArrayList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_controlRegisterGroupArrayList) ;
  return p->mObject.mProperty_mBaseAddresses ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@controlRegisterGroupArrayList type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_controlRegisterGroupArrayList ("controlRegisterGroupArrayList",
                                                      NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_controlRegisterGroupArrayList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterGroupArrayList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_controlRegisterGroupArrayList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_controlRegisterGroupArrayList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterGroupArrayList GALGAS_controlRegisterGroupArrayList::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterGroupArrayList result ;
  const GALGAS_controlRegisterGroupArrayList * p = (const GALGAS_controlRegisterGroupArrayList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_controlRegisterGroupArrayList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterGroupArrayList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@controlRegisterByAddress' sorted list
//
//----------------------------------------------------------------------------------------------------------------------

class cSortedListElement_controlRegisterByAddress : public cSortedListElement {
  public : GALGAS_controlRegisterByAddress_2D_element mObject ;

//--- Constructor
  public : cSortedListElement_controlRegisterByAddress (const GALGAS_bigint & in_mAddress,
                                                        const GALGAS_string & in_mHTML
                                                        COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cSortedListElement * copy (void) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;

//--- Virtual method that comparing element for sorting
  public : virtual typeComparisonResult compareForSorting (const cSortedListElement * inOperand) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cSortedListElement_controlRegisterByAddress::cSortedListElement_controlRegisterByAddress (const GALGAS_bigint & in_mAddress,
                                                                                          const GALGAS_string & in_mHTML
                                                                                          COMMA_LOCATION_ARGS) :
cSortedListElement (THERE),
mObject (in_mAddress, in_mHTML) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cSortedListElement_controlRegisterByAddress::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cSortedListElement * cSortedListElement_controlRegisterByAddress::copy (void) {
  cSortedListElement * result = NULL ;
  macroMyNew (result, cSortedListElement_controlRegisterByAddress (mObject.mProperty_mAddress, mObject.mProperty_mHTML COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cSortedListElement_controlRegisterByAddress::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAddress" ":" ;
  mObject.mProperty_mAddress.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mHTML" ":" ;
  mObject.mProperty_mHTML.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cSortedListElement_controlRegisterByAddress::compare (const cCollectionElement * inOperand) const {
  cSortedListElement_controlRegisterByAddress * operand = (cSortedListElement_controlRegisterByAddress *) inOperand ;
  macroValidSharedObject (operand, cSortedListElement_controlRegisterByAddress) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterByAddress::GALGAS_controlRegisterByAddress (void) :
AC_GALGAS_sortedlist () {
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cSortedListElement_controlRegisterByAddress::compareForSorting (const cSortedListElement * inOperand) const {
  typeComparisonResult result = kOperandEqual ;
  const cSortedListElement_controlRegisterByAddress * operand = (const cSortedListElement_controlRegisterByAddress *) inOperand ;
  macroValidSharedObject (operand, cSortedListElement_controlRegisterByAddress) ;
  if (result == kOperandEqual) {
    result = mObject.mProperty_mAddress.objectCompare (operand->mObject.mProperty_mAddress) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterByAddress GALGAS_controlRegisterByAddress::constructor_emptySortedList (LOCATION_ARGS) {
  GALGAS_controlRegisterByAddress result ;
  result.createNewEmptySortedList (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterByAddress GALGAS_controlRegisterByAddress::constructor_sortedListWithValue (const GALGAS_bigint & inOperand0,
                                                                                                  const GALGAS_string & inOperand1
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterByAddress result = constructor_emptySortedList (THERE) ;
  cSortedListElement * p = NULL ;
  macroMyNew (p, cSortedListElement_controlRegisterByAddress (inOperand0, inOperand1 COMMA_THERE)) ;
  capSortedListElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  result.appendObject (attributes) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterByAddress::addAssign_operation (const GALGAS_bigint & inOperand0,
                                                           const GALGAS_string & inOperand1
                                                           COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cSortedListElement * p = NULL ;
    macroMyNew (p, cSortedListElement_controlRegisterByAddress (inOperand0, inOperand1 COMMA_THERE)) ;
    capSortedListElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterByAddress::plusAssign_operation (const GALGAS_controlRegisterByAddress inOperand,
                                                            C_Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid ()) {
    appendSortedList (inOperand) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterByAddress::setter_popSmallest (GALGAS_bigint & outOperand0,
                                                          GALGAS_string & outOperand1,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  capSortedListElement attributes ;
  removeSmallestObject (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_controlRegisterByAddress * p = (cSortedListElement_controlRegisterByAddress *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_controlRegisterByAddress) ;
    outOperand0 = p->mObject.mProperty_mAddress ;
    outOperand1 = p->mObject.mProperty_mHTML ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterByAddress::setter_popGreatest (GALGAS_bigint & outOperand0,
                                                          GALGAS_string & outOperand1,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  capSortedListElement attributes ;
  removeGreatestObject (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_controlRegisterByAddress * p = (cSortedListElement_controlRegisterByAddress *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_controlRegisterByAddress) ;
    outOperand0 = p->mObject.mProperty_mAddress ;
    outOperand1 = p->mObject.mProperty_mHTML ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterByAddress::method_smallest (GALGAS_bigint & outOperand0,
                                                       GALGAS_string & outOperand1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  capSortedListElement attributes ;
  smallestObjectAttributeList (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_controlRegisterByAddress * p = (cSortedListElement_controlRegisterByAddress *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_controlRegisterByAddress) ;
    outOperand0 = p->mObject.mProperty_mAddress ;
    outOperand1 = p->mObject.mProperty_mHTML ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterByAddress::method_greatest (GALGAS_bigint & outOperand0,
                                                       GALGAS_string & outOperand1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  capSortedListElement attributes ;
  greatestObjectAttributeList (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_controlRegisterByAddress * p = (cSortedListElement_controlRegisterByAddress *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_controlRegisterByAddress) ;
    outOperand0 = p->mObject.mProperty_mAddress ;
    outOperand1 = p->mObject.mProperty_mHTML ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_controlRegisterByAddress::cEnumerator_controlRegisterByAddress (const GALGAS_controlRegisterByAddress & inEnumeratedObject,
                                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterByAddress_2D_element cEnumerator_controlRegisterByAddress::current (LOCATION_ARGS) const {
  const cSortedListElement_controlRegisterByAddress * p = (const cSortedListElement_controlRegisterByAddress *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_controlRegisterByAddress) ;
  return p->mObject ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bigint cEnumerator_controlRegisterByAddress::current_mAddress (LOCATION_ARGS) const {
  const cSortedListElement_controlRegisterByAddress * p = (const cSortedListElement_controlRegisterByAddress *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_controlRegisterByAddress) ;
  return p->mObject.mProperty_mAddress ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_controlRegisterByAddress::current_mHTML (LOCATION_ARGS) const {
  const cSortedListElement_controlRegisterByAddress * p = (const cSortedListElement_controlRegisterByAddress *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_controlRegisterByAddress) ;
  return p->mObject.mProperty_mHTML ;
}



//----------------------------------------------------------------------------------------------------------------------
//
//@controlRegisterByAddress type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_controlRegisterByAddress ("controlRegisterByAddress",
                                                 NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_controlRegisterByAddress::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterByAddress ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_controlRegisterByAddress::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_controlRegisterByAddress (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterByAddress GALGAS_controlRegisterByAddress::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterByAddress result ;
  const GALGAS_controlRegisterByAddress * p = (const GALGAS_controlRegisterByAddress *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_controlRegisterByAddress *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterByAddress", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@controlRegisterByName' sorted list
//
//----------------------------------------------------------------------------------------------------------------------

class cSortedListElement_controlRegisterByName : public cSortedListElement {
  public : GALGAS_controlRegisterByName_2D_element mObject ;

//--- Constructor
  public : cSortedListElement_controlRegisterByName (const GALGAS_bigint & in_mAddress,
                                                     const GALGAS_string & in_mHTML,
                                                     const GALGAS_string & in_mName
                                                     COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cSortedListElement * copy (void) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;

//--- Virtual method that comparing element for sorting
  public : virtual typeComparisonResult compareForSorting (const cSortedListElement * inOperand) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cSortedListElement_controlRegisterByName::cSortedListElement_controlRegisterByName (const GALGAS_bigint & in_mAddress,
                                                                                    const GALGAS_string & in_mHTML,
                                                                                    const GALGAS_string & in_mName
                                                                                    COMMA_LOCATION_ARGS) :
cSortedListElement (THERE),
mObject (in_mAddress, in_mHTML, in_mName) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cSortedListElement_controlRegisterByName::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cSortedListElement * cSortedListElement_controlRegisterByName::copy (void) {
  cSortedListElement * result = NULL ;
  macroMyNew (result, cSortedListElement_controlRegisterByName (mObject.mProperty_mAddress, mObject.mProperty_mHTML, mObject.mProperty_mName COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cSortedListElement_controlRegisterByName::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAddress" ":" ;
  mObject.mProperty_mAddress.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mHTML" ":" ;
  mObject.mProperty_mHTML.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mName" ":" ;
  mObject.mProperty_mName.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cSortedListElement_controlRegisterByName::compare (const cCollectionElement * inOperand) const {
  cSortedListElement_controlRegisterByName * operand = (cSortedListElement_controlRegisterByName *) inOperand ;
  macroValidSharedObject (operand, cSortedListElement_controlRegisterByName) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterByName::GALGAS_controlRegisterByName (void) :
AC_GALGAS_sortedlist () {
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cSortedListElement_controlRegisterByName::compareForSorting (const cSortedListElement * inOperand) const {
  typeComparisonResult result = kOperandEqual ;
  const cSortedListElement_controlRegisterByName * operand = (const cSortedListElement_controlRegisterByName *) inOperand ;
  macroValidSharedObject (operand, cSortedListElement_controlRegisterByName) ;
  if (result == kOperandEqual) {
    result = mObject.mProperty_mName.objectCompare (operand->mObject.mProperty_mName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterByName GALGAS_controlRegisterByName::constructor_emptySortedList (LOCATION_ARGS) {
  GALGAS_controlRegisterByName result ;
  result.createNewEmptySortedList (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterByName GALGAS_controlRegisterByName::constructor_sortedListWithValue (const GALGAS_bigint & inOperand0,
                                                                                            const GALGAS_string & inOperand1,
                                                                                            const GALGAS_string & inOperand2
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterByName result = constructor_emptySortedList (THERE) ;
  cSortedListElement * p = NULL ;
  macroMyNew (p, cSortedListElement_controlRegisterByName (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
  capSortedListElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  result.appendObject (attributes) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterByName::addAssign_operation (const GALGAS_bigint & inOperand0,
                                                        const GALGAS_string & inOperand1,
                                                        const GALGAS_string & inOperand2
                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cSortedListElement * p = NULL ;
    macroMyNew (p, cSortedListElement_controlRegisterByName (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capSortedListElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterByName::plusAssign_operation (const GALGAS_controlRegisterByName inOperand,
                                                         C_Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid ()) {
    appendSortedList (inOperand) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterByName::setter_popSmallest (GALGAS_bigint & outOperand0,
                                                       GALGAS_string & outOperand1,
                                                       GALGAS_string & outOperand2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  capSortedListElement attributes ;
  removeSmallestObject (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_controlRegisterByName * p = (cSortedListElement_controlRegisterByName *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_controlRegisterByName) ;
    outOperand0 = p->mObject.mProperty_mAddress ;
    outOperand1 = p->mObject.mProperty_mHTML ;
    outOperand2 = p->mObject.mProperty_mName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterByName::setter_popGreatest (GALGAS_bigint & outOperand0,
                                                       GALGAS_string & outOperand1,
                                                       GALGAS_string & outOperand2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  capSortedListElement attributes ;
  removeGreatestObject (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_controlRegisterByName * p = (cSortedListElement_controlRegisterByName *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_controlRegisterByName) ;
    outOperand0 = p->mObject.mProperty_mAddress ;
    outOperand1 = p->mObject.mProperty_mHTML ;
    outOperand2 = p->mObject.mProperty_mName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterByName::method_smallest (GALGAS_bigint & outOperand0,
                                                    GALGAS_string & outOperand1,
                                                    GALGAS_string & outOperand2,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  capSortedListElement attributes ;
  smallestObjectAttributeList (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_controlRegisterByName * p = (cSortedListElement_controlRegisterByName *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_controlRegisterByName) ;
    outOperand0 = p->mObject.mProperty_mAddress ;
    outOperand1 = p->mObject.mProperty_mHTML ;
    outOperand2 = p->mObject.mProperty_mName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterByName::method_greatest (GALGAS_bigint & outOperand0,
                                                    GALGAS_string & outOperand1,
                                                    GALGAS_string & outOperand2,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  capSortedListElement attributes ;
  greatestObjectAttributeList (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_controlRegisterByName * p = (cSortedListElement_controlRegisterByName *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_controlRegisterByName) ;
    outOperand0 = p->mObject.mProperty_mAddress ;
    outOperand1 = p->mObject.mProperty_mHTML ;
    outOperand2 = p->mObject.mProperty_mName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_controlRegisterByName::cEnumerator_controlRegisterByName (const GALGAS_controlRegisterByName & inEnumeratedObject,
                                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterByName_2D_element cEnumerator_controlRegisterByName::current (LOCATION_ARGS) const {
  const cSortedListElement_controlRegisterByName * p = (const cSortedListElement_controlRegisterByName *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_controlRegisterByName) ;
  return p->mObject ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bigint cEnumerator_controlRegisterByName::current_mAddress (LOCATION_ARGS) const {
  const cSortedListElement_controlRegisterByName * p = (const cSortedListElement_controlRegisterByName *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_controlRegisterByName) ;
  return p->mObject.mProperty_mAddress ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_controlRegisterByName::current_mHTML (LOCATION_ARGS) const {
  const cSortedListElement_controlRegisterByName * p = (const cSortedListElement_controlRegisterByName *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_controlRegisterByName) ;
  return p->mObject.mProperty_mHTML ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_controlRegisterByName::current_mName (LOCATION_ARGS) const {
  const cSortedListElement_controlRegisterByName * p = (const cSortedListElement_controlRegisterByName *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_controlRegisterByName) ;
  return p->mObject.mProperty_mName ;
}



//----------------------------------------------------------------------------------------------------------------------
//
//@controlRegisterByName type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_controlRegisterByName ("controlRegisterByName",
                                              NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_controlRegisterByName::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterByName ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_controlRegisterByName::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_controlRegisterByName (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterByName GALGAS_controlRegisterByName::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterByName result ;
  const GALGAS_controlRegisterByName * p = (const GALGAS_controlRegisterByName *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_controlRegisterByName *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterByName", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@expressionAST addDependenceEdgeForStaticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionMethodSignature_expressionAST_addDependenceEdgeForStaticExpression> gExtensionMethodTable_expressionAST_addDependenceEdgeForStaticExpression ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_addDependenceEdgeForStaticExpression (const int32_t inClassIndex,
                                                                extensionMethodSignature_expressionAST_addDependenceEdgeForStaticExpression inMethod) {
  gExtensionMethodTable_expressionAST_addDependenceEdgeForStaticExpression.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionMethod_expressionAST_addDependenceEdgeForStaticExpression (void) {
  gExtensionMethodTable_expressionAST_addDependenceEdgeForStaticExpression.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_expressionAST_addDependenceEdgeForStaticExpression (NULL,
                                                                               freeExtensionMethod_expressionAST_addDependenceEdgeForStaticExpression) ;

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

cMapElement_globalSyncInstanceMapIR::cMapElement_globalSyncInstanceMapIR (const GALGAS_lstring & inKey,
                                                                          const GALGAS_objectIR & in_mInitialValue
                                                                          COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mInitialValue (in_mInitialValue) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_globalSyncInstanceMapIR::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mInitialValue.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_globalSyncInstanceMapIR::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_globalSyncInstanceMapIR (mProperty_lkey, mProperty_mInitialValue COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_globalSyncInstanceMapIR::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInitialValue" ":" ;
  mProperty_mInitialValue.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_globalSyncInstanceMapIR::compare (const cCollectionElement * inOperand) const {
  cMapElement_globalSyncInstanceMapIR * operand = (cMapElement_globalSyncInstanceMapIR *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mInitialValue.objectCompare (operand->mProperty_mInitialValue) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_globalSyncInstanceMapIR::GALGAS_globalSyncInstanceMapIR (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_globalSyncInstanceMapIR::GALGAS_globalSyncInstanceMapIR (const GALGAS_globalSyncInstanceMapIR & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_globalSyncInstanceMapIR & GALGAS_globalSyncInstanceMapIR::operator = (const GALGAS_globalSyncInstanceMapIR & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_globalSyncInstanceMapIR GALGAS_globalSyncInstanceMapIR::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_globalSyncInstanceMapIR result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_globalSyncInstanceMapIR GALGAS_globalSyncInstanceMapIR::constructor_mapWithMapToOverride (const GALGAS_globalSyncInstanceMapIR & inMapToOverride
                                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_globalSyncInstanceMapIR result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_globalSyncInstanceMapIR GALGAS_globalSyncInstanceMapIR::getter_overriddenMap (C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  GALGAS_globalSyncInstanceMapIR result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_globalSyncInstanceMapIR::addAssign_operation (const GALGAS_lstring & inKey,
                                                          const GALGAS_objectIR & inArgument0,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  cMapElement_globalSyncInstanceMapIR * p = NULL ;
  macroMyNew (p, cMapElement_globalSyncInstanceMapIR (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@globalSyncInstanceMapIR insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_globalSyncInstanceMapIR::setter_insertKey (GALGAS_lstring inKey,
                                                       GALGAS_objectIR inArgument0,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  cMapElement_globalSyncInstanceMapIR * p = NULL ;
  macroMyNew (p, cMapElement_globalSyncInstanceMapIR (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "** internal error **" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_objectIR GALGAS_globalSyncInstanceMapIR::getter_mInitialValueForKey (const GALGAS_string & inKey,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_globalSyncInstanceMapIR * p = (const cMapElement_globalSyncInstanceMapIR *) attributes ;
  GALGAS_objectIR result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_globalSyncInstanceMapIR) ;
    result = p->mProperty_mInitialValue ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_globalSyncInstanceMapIR::setter_setMInitialValueForKey (GALGAS_objectIR inAttributeValue,
                                                                    GALGAS_string inKey,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_globalSyncInstanceMapIR * p = (cMapElement_globalSyncInstanceMapIR *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_globalSyncInstanceMapIR) ;
    p->mProperty_mInitialValue = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_globalSyncInstanceMapIR * GALGAS_globalSyncInstanceMapIR::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                         const GALGAS_string & inKey
                                                                                                         COMMA_LOCATION_ARGS) {
  cMapElement_globalSyncInstanceMapIR * result = (cMapElement_globalSyncInstanceMapIR *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_globalSyncInstanceMapIR) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_globalSyncInstanceMapIR::cEnumerator_globalSyncInstanceMapIR (const GALGAS_globalSyncInstanceMapIR & inEnumeratedObject,
                                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_globalSyncInstanceMapIR_2D_element cEnumerator_globalSyncInstanceMapIR::current (LOCATION_ARGS) const {
  const cMapElement_globalSyncInstanceMapIR * p = (const cMapElement_globalSyncInstanceMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_globalSyncInstanceMapIR) ;
  return GALGAS_globalSyncInstanceMapIR_2D_element (p->mProperty_lkey, p->mProperty_mInitialValue) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_globalSyncInstanceMapIR::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_objectIR cEnumerator_globalSyncInstanceMapIR::current_mInitialValue (LOCATION_ARGS) const {
  const cMapElement_globalSyncInstanceMapIR * p = (const cMapElement_globalSyncInstanceMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_globalSyncInstanceMapIR) ;
  return p->mProperty_mInitialValue ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_globalSyncInstanceMapIR::optional_searchKey (const GALGAS_string & inKey,
                                                         GALGAS_objectIR & outArgument0) const {
  const cMapElement_globalSyncInstanceMapIR * p = (const cMapElement_globalSyncInstanceMapIR *) searchForKey (inKey) ;
  const bool result = NULL != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_globalSyncInstanceMapIR) ;
    outArgument0 = p->mProperty_mInitialValue ;
  }else{
    outArgument0.drop () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@globalSyncInstanceMapIR type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_globalSyncInstanceMapIR ("globalSyncInstanceMapIR",
                                                NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_globalSyncInstanceMapIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_globalSyncInstanceMapIR ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_globalSyncInstanceMapIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_globalSyncInstanceMapIR (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_globalSyncInstanceMapIR GALGAS_globalSyncInstanceMapIR::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_globalSyncInstanceMapIR result ;
  const GALGAS_globalSyncInstanceMapIR * p = (const GALGAS_globalSyncInstanceMapIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_globalSyncInstanceMapIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("globalSyncInstanceMapIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@instructionListAST' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_instructionListAST : public cCollectionElement {
  public : GALGAS_instructionListAST_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_instructionListAST (const GALGAS_instructionAST & in_mInstruction
                                                  COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_instructionListAST (const GALGAS_instructionListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_instructionListAST::cCollectionElement_instructionListAST (const GALGAS_instructionAST & in_mInstruction
                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mInstruction) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_instructionListAST::cCollectionElement_instructionListAST (const GALGAS_instructionListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mInstruction) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_instructionListAST::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_instructionListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_instructionListAST (mObject.mProperty_mInstruction COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_instructionListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInstruction" ":" ;
  mObject.mProperty_mInstruction.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_instructionListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_instructionListAST * operand = (cCollectionElement_instructionListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_instructionListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_instructionListAST::GALGAS_instructionListAST (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_instructionListAST::GALGAS_instructionListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_instructionListAST GALGAS_instructionListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_instructionListAST  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_instructionListAST GALGAS_instructionListAST::constructor_listWithValue (const GALGAS_instructionAST & inOperand0
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_instructionListAST result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_instructionListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_instructionListAST::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_instructionListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                           const GALGAS_instructionAST & in_mInstruction
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_instructionListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_instructionListAST (in_mInstruction COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_instructionListAST::addAssign_operation (const GALGAS_instructionAST & inOperand0
                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_instructionListAST (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_instructionListAST::setter_append (GALGAS_instructionListAST_2D_element inElement,
                                               C_Compiler * /* inCompiler */
                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_instructionListAST (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_instructionListAST::setter_insertAtIndex (const GALGAS_instructionAST inOperand0,
                                                      const GALGAS_uint inInsertionIndex,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_instructionListAST (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_instructionListAST::setter_removeAtIndex (GALGAS_instructionAST & outOperand0,
                                                      const GALGAS_uint inRemoveIndex,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_instructionListAST * p = (cCollectionElement_instructionListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_instructionListAST) ;
      outOperand0 = p->mObject.mProperty_mInstruction ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_instructionListAST::setter_popFirst (GALGAS_instructionAST & outOperand0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_instructionListAST * p = (cCollectionElement_instructionListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_instructionListAST) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_instructionListAST::setter_popLast (GALGAS_instructionAST & outOperand0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_instructionListAST * p = (cCollectionElement_instructionListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_instructionListAST) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_instructionListAST::method_first (GALGAS_instructionAST & outOperand0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_instructionListAST * p = (cCollectionElement_instructionListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_instructionListAST) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_instructionListAST::method_last (GALGAS_instructionAST & outOperand0,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_instructionListAST * p = (cCollectionElement_instructionListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_instructionListAST) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_instructionListAST GALGAS_instructionListAST::add_operation (const GALGAS_instructionListAST & inOperand,
                                                                    C_Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_instructionListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_instructionListAST GALGAS_instructionListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_instructionListAST result = GALGAS_instructionListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_instructionListAST GALGAS_instructionListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_instructionListAST result = GALGAS_instructionListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_instructionListAST GALGAS_instructionListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_instructionListAST result = GALGAS_instructionListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_instructionListAST::plusAssign_operation (const GALGAS_instructionListAST inOperand,
                                                      C_Compiler * /* inCompiler */
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_instructionListAST::setter_setMInstructionAtIndex (GALGAS_instructionAST inOperand,
                                                               GALGAS_uint inIndex,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_instructionListAST * p = (cCollectionElement_instructionListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_instructionListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInstruction = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_instructionAST GALGAS_instructionListAST::getter_mInstructionAtIndex (const GALGAS_uint & inIndex,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_instructionListAST * p = (cCollectionElement_instructionListAST *) attributes.ptr () ;
  GALGAS_instructionAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_instructionListAST) ;
    result = p->mObject.mProperty_mInstruction ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_instructionListAST::cEnumerator_instructionListAST (const GALGAS_instructionListAST & inEnumeratedObject,
                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_instructionListAST_2D_element cEnumerator_instructionListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_instructionListAST * p = (const cCollectionElement_instructionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_instructionListAST) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_instructionAST cEnumerator_instructionListAST::current_mInstruction (LOCATION_ARGS) const {
  const cCollectionElement_instructionListAST * p = (const cCollectionElement_instructionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_instructionListAST) ;
  return p->mObject.mProperty_mInstruction ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@instructionListAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_instructionListAST ("instructionListAST",
                                           NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_instructionListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_instructionListAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_instructionListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_instructionListAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_instructionListAST GALGAS_instructionListAST::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_instructionListAST result ;
  const GALGAS_instructionListAST * p = (const GALGAS_instructionListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_instructionListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("instructionListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@driverInstanciationArgumentListAST' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_driverInstanciationArgumentListAST : public cCollectionElement {
  public : GALGAS_driverInstanciationArgumentListAST_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_driverInstanciationArgumentListAST (const GALGAS_lstring & in_mSelector,
                                                                  const GALGAS_expressionAST & in_mExpression
                                                                  COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_driverInstanciationArgumentListAST (const GALGAS_driverInstanciationArgumentListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_driverInstanciationArgumentListAST::cCollectionElement_driverInstanciationArgumentListAST (const GALGAS_lstring & in_mSelector,
                                                                                                              const GALGAS_expressionAST & in_mExpression
                                                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mSelector, in_mExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_driverInstanciationArgumentListAST::cCollectionElement_driverInstanciationArgumentListAST (const GALGAS_driverInstanciationArgumentListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mSelector, inElement.mProperty_mExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_driverInstanciationArgumentListAST::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_driverInstanciationArgumentListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_driverInstanciationArgumentListAST (mObject.mProperty_mSelector, mObject.mProperty_mExpression COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_driverInstanciationArgumentListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSelector" ":" ;
  mObject.mProperty_mSelector.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mExpression" ":" ;
  mObject.mProperty_mExpression.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_driverInstanciationArgumentListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_driverInstanciationArgumentListAST * operand = (cCollectionElement_driverInstanciationArgumentListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_driverInstanciationArgumentListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_driverInstanciationArgumentListAST::GALGAS_driverInstanciationArgumentListAST (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_driverInstanciationArgumentListAST::GALGAS_driverInstanciationArgumentListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_driverInstanciationArgumentListAST GALGAS_driverInstanciationArgumentListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_driverInstanciationArgumentListAST  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_driverInstanciationArgumentListAST GALGAS_driverInstanciationArgumentListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                                const GALGAS_expressionAST & inOperand1
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_driverInstanciationArgumentListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_driverInstanciationArgumentListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_driverInstanciationArgumentListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_driverInstanciationArgumentListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                           const GALGAS_lstring & in_mSelector,
                                                                           const GALGAS_expressionAST & in_mExpression
                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_driverInstanciationArgumentListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_driverInstanciationArgumentListAST (in_mSelector,
                                                                        in_mExpression COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_driverInstanciationArgumentListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                                     const GALGAS_expressionAST & inOperand1
                                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_driverInstanciationArgumentListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_driverInstanciationArgumentListAST::setter_append (GALGAS_driverInstanciationArgumentListAST_2D_element inElement,
                                                               C_Compiler * /* inCompiler */
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_driverInstanciationArgumentListAST (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_driverInstanciationArgumentListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                      const GALGAS_expressionAST inOperand1,
                                                                      const GALGAS_uint inInsertionIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_driverInstanciationArgumentListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_driverInstanciationArgumentListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                      GALGAS_expressionAST & outOperand1,
                                                                      const GALGAS_uint inRemoveIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_driverInstanciationArgumentListAST * p = (cCollectionElement_driverInstanciationArgumentListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_driverInstanciationArgumentListAST) ;
      outOperand0 = p->mObject.mProperty_mSelector ;
      outOperand1 = p->mObject.mProperty_mExpression ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_driverInstanciationArgumentListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                                 GALGAS_expressionAST & outOperand1,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_driverInstanciationArgumentListAST * p = (cCollectionElement_driverInstanciationArgumentListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_driverInstanciationArgumentListAST) ;
    outOperand0 = p->mObject.mProperty_mSelector ;
    outOperand1 = p->mObject.mProperty_mExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_driverInstanciationArgumentListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                                GALGAS_expressionAST & outOperand1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_driverInstanciationArgumentListAST * p = (cCollectionElement_driverInstanciationArgumentListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_driverInstanciationArgumentListAST) ;
    outOperand0 = p->mObject.mProperty_mSelector ;
    outOperand1 = p->mObject.mProperty_mExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_driverInstanciationArgumentListAST::method_first (GALGAS_lstring & outOperand0,
                                                              GALGAS_expressionAST & outOperand1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_driverInstanciationArgumentListAST * p = (cCollectionElement_driverInstanciationArgumentListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_driverInstanciationArgumentListAST) ;
    outOperand0 = p->mObject.mProperty_mSelector ;
    outOperand1 = p->mObject.mProperty_mExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_driverInstanciationArgumentListAST::method_last (GALGAS_lstring & outOperand0,
                                                             GALGAS_expressionAST & outOperand1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_driverInstanciationArgumentListAST * p = (cCollectionElement_driverInstanciationArgumentListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_driverInstanciationArgumentListAST) ;
    outOperand0 = p->mObject.mProperty_mSelector ;
    outOperand1 = p->mObject.mProperty_mExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_driverInstanciationArgumentListAST GALGAS_driverInstanciationArgumentListAST::add_operation (const GALGAS_driverInstanciationArgumentListAST & inOperand,
                                                                                                    C_Compiler * /* inCompiler */
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_driverInstanciationArgumentListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_driverInstanciationArgumentListAST GALGAS_driverInstanciationArgumentListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_driverInstanciationArgumentListAST result = GALGAS_driverInstanciationArgumentListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_driverInstanciationArgumentListAST GALGAS_driverInstanciationArgumentListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_driverInstanciationArgumentListAST result = GALGAS_driverInstanciationArgumentListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_driverInstanciationArgumentListAST GALGAS_driverInstanciationArgumentListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_driverInstanciationArgumentListAST result = GALGAS_driverInstanciationArgumentListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_driverInstanciationArgumentListAST::plusAssign_operation (const GALGAS_driverInstanciationArgumentListAST inOperand,
                                                                      C_Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_driverInstanciationArgumentListAST::setter_setMSelectorAtIndex (GALGAS_lstring inOperand,
                                                                            GALGAS_uint inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_driverInstanciationArgumentListAST * p = (cCollectionElement_driverInstanciationArgumentListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_driverInstanciationArgumentListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mSelector = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_driverInstanciationArgumentListAST::getter_mSelectorAtIndex (const GALGAS_uint & inIndex,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_driverInstanciationArgumentListAST * p = (cCollectionElement_driverInstanciationArgumentListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_driverInstanciationArgumentListAST) ;
    result = p->mObject.mProperty_mSelector ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_driverInstanciationArgumentListAST::setter_setMExpressionAtIndex (GALGAS_expressionAST inOperand,
                                                                              GALGAS_uint inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_driverInstanciationArgumentListAST * p = (cCollectionElement_driverInstanciationArgumentListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_driverInstanciationArgumentListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mExpression = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_expressionAST GALGAS_driverInstanciationArgumentListAST::getter_mExpressionAtIndex (const GALGAS_uint & inIndex,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_driverInstanciationArgumentListAST * p = (cCollectionElement_driverInstanciationArgumentListAST *) attributes.ptr () ;
  GALGAS_expressionAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_driverInstanciationArgumentListAST) ;
    result = p->mObject.mProperty_mExpression ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_driverInstanciationArgumentListAST::cEnumerator_driverInstanciationArgumentListAST (const GALGAS_driverInstanciationArgumentListAST & inEnumeratedObject,
                                                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_driverInstanciationArgumentListAST_2D_element cEnumerator_driverInstanciationArgumentListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_driverInstanciationArgumentListAST * p = (const cCollectionElement_driverInstanciationArgumentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_driverInstanciationArgumentListAST) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_driverInstanciationArgumentListAST::current_mSelector (LOCATION_ARGS) const {
  const cCollectionElement_driverInstanciationArgumentListAST * p = (const cCollectionElement_driverInstanciationArgumentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_driverInstanciationArgumentListAST) ;
  return p->mObject.mProperty_mSelector ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_expressionAST cEnumerator_driverInstanciationArgumentListAST::current_mExpression (LOCATION_ARGS) const {
  const cCollectionElement_driverInstanciationArgumentListAST * p = (const cCollectionElement_driverInstanciationArgumentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_driverInstanciationArgumentListAST) ;
  return p->mObject.mProperty_mExpression ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@driverInstanciationArgumentListAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_driverInstanciationArgumentListAST ("driverInstanciationArgumentListAST",
                                                           NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_driverInstanciationArgumentListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_driverInstanciationArgumentListAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_driverInstanciationArgumentListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_driverInstanciationArgumentListAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_driverInstanciationArgumentListAST GALGAS_driverInstanciationArgumentListAST::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_driverInstanciationArgumentListAST result ;
  const GALGAS_driverInstanciationArgumentListAST * p = (const GALGAS_driverInstanciationArgumentListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_driverInstanciationArgumentListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("driverInstanciationArgumentListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_driverInstanciationArgumentMap::cMapElement_driverInstanciationArgumentMap (const GALGAS_lstring & inKey,
                                                                                        const GALGAS_expressionAST & in_mExpression
                                                                                        COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mExpression (in_mExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_driverInstanciationArgumentMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mExpression.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_driverInstanciationArgumentMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_driverInstanciationArgumentMap (mProperty_lkey, mProperty_mExpression COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_driverInstanciationArgumentMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mExpression" ":" ;
  mProperty_mExpression.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_driverInstanciationArgumentMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_driverInstanciationArgumentMap * operand = (cMapElement_driverInstanciationArgumentMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mExpression.objectCompare (operand->mProperty_mExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_driverInstanciationArgumentMap::GALGAS_driverInstanciationArgumentMap (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_driverInstanciationArgumentMap::GALGAS_driverInstanciationArgumentMap (const GALGAS_driverInstanciationArgumentMap & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_driverInstanciationArgumentMap & GALGAS_driverInstanciationArgumentMap::operator = (const GALGAS_driverInstanciationArgumentMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_driverInstanciationArgumentMap GALGAS_driverInstanciationArgumentMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_driverInstanciationArgumentMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_driverInstanciationArgumentMap GALGAS_driverInstanciationArgumentMap::constructor_mapWithMapToOverride (const GALGAS_driverInstanciationArgumentMap & inMapToOverride
                                                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_driverInstanciationArgumentMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_driverInstanciationArgumentMap GALGAS_driverInstanciationArgumentMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const {
  GALGAS_driverInstanciationArgumentMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_driverInstanciationArgumentMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                                 const GALGAS_expressionAST & inArgument0,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cMapElement_driverInstanciationArgumentMap * p = NULL ;
  macroMyNew (p, cMapElement_driverInstanciationArgumentMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@driverInstanciationArgumentMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_driverInstanciationArgumentMap::setter_insertKey (GALGAS_lstring inKey,
                                                              GALGAS_expressionAST inArgument0,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cMapElement_driverInstanciationArgumentMap * p = NULL ;
  macroMyNew (p, cMapElement_driverInstanciationArgumentMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "duplicated '%K' selector" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_driverInstanciationArgumentMap_searchKey = "uninitialized '%K' property" ;

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_driverInstanciationArgumentMap::method_searchKey (GALGAS_lstring inKey,
                                                              GALGAS_expressionAST & outArgument0,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  const cMapElement_driverInstanciationArgumentMap * p = (const cMapElement_driverInstanciationArgumentMap *) performSearch (inKey,
                                                                                                                             inCompiler,
                                                                                                                             kSearchErrorMessage_driverInstanciationArgumentMap_searchKey
                                                                                                                             COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_driverInstanciationArgumentMap) ;
    outArgument0 = p->mProperty_mExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_expressionAST GALGAS_driverInstanciationArgumentMap::getter_mExpressionForKey (const GALGAS_string & inKey,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_driverInstanciationArgumentMap * p = (const cMapElement_driverInstanciationArgumentMap *) attributes ;
  GALGAS_expressionAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_driverInstanciationArgumentMap) ;
    result = p->mProperty_mExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_driverInstanciationArgumentMap::setter_setMExpressionForKey (GALGAS_expressionAST inAttributeValue,
                                                                         GALGAS_string inKey,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_driverInstanciationArgumentMap * p = (cMapElement_driverInstanciationArgumentMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_driverInstanciationArgumentMap) ;
    p->mProperty_mExpression = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_driverInstanciationArgumentMap * GALGAS_driverInstanciationArgumentMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                                       const GALGAS_string & inKey
                                                                                                                       COMMA_LOCATION_ARGS) {
  cMapElement_driverInstanciationArgumentMap * result = (cMapElement_driverInstanciationArgumentMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_driverInstanciationArgumentMap) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_driverInstanciationArgumentMap::cEnumerator_driverInstanciationArgumentMap (const GALGAS_driverInstanciationArgumentMap & inEnumeratedObject,
                                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_driverInstanciationArgumentMap_2D_element cEnumerator_driverInstanciationArgumentMap::current (LOCATION_ARGS) const {
  const cMapElement_driverInstanciationArgumentMap * p = (const cMapElement_driverInstanciationArgumentMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_driverInstanciationArgumentMap) ;
  return GALGAS_driverInstanciationArgumentMap_2D_element (p->mProperty_lkey, p->mProperty_mExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_driverInstanciationArgumentMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_expressionAST cEnumerator_driverInstanciationArgumentMap::current_mExpression (LOCATION_ARGS) const {
  const cMapElement_driverInstanciationArgumentMap * p = (const cMapElement_driverInstanciationArgumentMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_driverInstanciationArgumentMap) ;
  return p->mProperty_mExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_driverInstanciationArgumentMap::optional_searchKey (const GALGAS_string & inKey,
                                                                GALGAS_expressionAST & outArgument0) const {
  const cMapElement_driverInstanciationArgumentMap * p = (const cMapElement_driverInstanciationArgumentMap *) searchForKey (inKey) ;
  const bool result = NULL != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_driverInstanciationArgumentMap) ;
    outArgument0 = p->mProperty_mExpression ;
  }else{
    outArgument0.drop () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@driverInstanciationArgumentMap type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_driverInstanciationArgumentMap ("driverInstanciationArgumentMap",
                                                       NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_driverInstanciationArgumentMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_driverInstanciationArgumentMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_driverInstanciationArgumentMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_driverInstanciationArgumentMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_driverInstanciationArgumentMap GALGAS_driverInstanciationArgumentMap::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_driverInstanciationArgumentMap result ;
  const GALGAS_driverInstanciationArgumentMap * p = (const GALGAS_driverInstanciationArgumentMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_driverInstanciationArgumentMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("driverInstanciationArgumentMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_instanciedDriverMap::cMapElement_instanciedDriverMap (const GALGAS_lstring & inKey,
                                                                  const GALGAS_driverInstanciationArgumentMap & in_mDriverInstanciationArgumentMap
                                                                  COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mDriverInstanciationArgumentMap (in_mDriverInstanciationArgumentMap) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_instanciedDriverMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mDriverInstanciationArgumentMap.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_instanciedDriverMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_instanciedDriverMap (mProperty_lkey, mProperty_mDriverInstanciationArgumentMap COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_instanciedDriverMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mDriverInstanciationArgumentMap" ":" ;
  mProperty_mDriverInstanciationArgumentMap.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_instanciedDriverMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_instanciedDriverMap * operand = (cMapElement_instanciedDriverMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mDriverInstanciationArgumentMap.objectCompare (operand->mProperty_mDriverInstanciationArgumentMap) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_instanciedDriverMap::GALGAS_instanciedDriverMap (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_instanciedDriverMap::GALGAS_instanciedDriverMap (const GALGAS_instanciedDriverMap & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_instanciedDriverMap & GALGAS_instanciedDriverMap::operator = (const GALGAS_instanciedDriverMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_instanciedDriverMap GALGAS_instanciedDriverMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_instanciedDriverMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_instanciedDriverMap GALGAS_instanciedDriverMap::constructor_mapWithMapToOverride (const GALGAS_instanciedDriverMap & inMapToOverride
                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_instanciedDriverMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_instanciedDriverMap GALGAS_instanciedDriverMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  GALGAS_instanciedDriverMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_instanciedDriverMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                      const GALGAS_driverInstanciationArgumentMap & inArgument0,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  cMapElement_instanciedDriverMap * p = NULL ;
  macroMyNew (p, cMapElement_instanciedDriverMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@instanciedDriverMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_instanciedDriverMap::setter_insertKey (GALGAS_lstring inKey,
                                                   GALGAS_driverInstanciationArgumentMap inArgument0,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  cMapElement_instanciedDriverMap * p = NULL ;
  macroMyNew (p, cMapElement_instanciedDriverMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' driver is already instancied in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_instanciedDriverMap_searchKey = "internal error %K" ;

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_instanciedDriverMap::method_searchKey (GALGAS_lstring inKey,
                                                   GALGAS_driverInstanciationArgumentMap & outArgument0,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  const cMapElement_instanciedDriverMap * p = (const cMapElement_instanciedDriverMap *) performSearch (inKey,
                                                                                                       inCompiler,
                                                                                                       kSearchErrorMessage_instanciedDriverMap_searchKey
                                                                                                       COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_instanciedDriverMap) ;
    outArgument0 = p->mProperty_mDriverInstanciationArgumentMap ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_driverInstanciationArgumentMap GALGAS_instanciedDriverMap::getter_mDriverInstanciationArgumentMapForKey (const GALGAS_string & inKey,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_instanciedDriverMap * p = (const cMapElement_instanciedDriverMap *) attributes ;
  GALGAS_driverInstanciationArgumentMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_instanciedDriverMap) ;
    result = p->mProperty_mDriverInstanciationArgumentMap ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_instanciedDriverMap::setter_setMDriverInstanciationArgumentMapForKey (GALGAS_driverInstanciationArgumentMap inAttributeValue,
                                                                                  GALGAS_string inKey,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_instanciedDriverMap * p = (cMapElement_instanciedDriverMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_instanciedDriverMap) ;
    p->mProperty_mDriverInstanciationArgumentMap = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_instanciedDriverMap * GALGAS_instanciedDriverMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                 const GALGAS_string & inKey
                                                                                                 COMMA_LOCATION_ARGS) {
  cMapElement_instanciedDriverMap * result = (cMapElement_instanciedDriverMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_instanciedDriverMap) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_instanciedDriverMap::cEnumerator_instanciedDriverMap (const GALGAS_instanciedDriverMap & inEnumeratedObject,
                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_instanciedDriverMap_2D_element cEnumerator_instanciedDriverMap::current (LOCATION_ARGS) const {
  const cMapElement_instanciedDriverMap * p = (const cMapElement_instanciedDriverMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_instanciedDriverMap) ;
  return GALGAS_instanciedDriverMap_2D_element (p->mProperty_lkey, p->mProperty_mDriverInstanciationArgumentMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_instanciedDriverMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_driverInstanciationArgumentMap cEnumerator_instanciedDriverMap::current_mDriverInstanciationArgumentMap (LOCATION_ARGS) const {
  const cMapElement_instanciedDriverMap * p = (const cMapElement_instanciedDriverMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_instanciedDriverMap) ;
  return p->mProperty_mDriverInstanciationArgumentMap ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_instanciedDriverMap::optional_searchKey (const GALGAS_string & inKey,
                                                     GALGAS_driverInstanciationArgumentMap & outArgument0) const {
  const cMapElement_instanciedDriverMap * p = (const cMapElement_instanciedDriverMap *) searchForKey (inKey) ;
  const bool result = NULL != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_instanciedDriverMap) ;
    outArgument0 = p->mProperty_mDriverInstanciationArgumentMap ;
  }else{
    outArgument0.drop () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@instanciedDriverMap type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_instanciedDriverMap ("instanciedDriverMap",
                                            NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_instanciedDriverMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_instanciedDriverMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_instanciedDriverMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_instanciedDriverMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_instanciedDriverMap GALGAS_instanciedDriverMap::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_instanciedDriverMap result ;
  const GALGAS_instanciedDriverMap * p = (const GALGAS_instanciedDriverMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_instanciedDriverMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("instanciedDriverMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@driverListIR' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_driverListIR : public cCollectionElement {
  public : GALGAS_driverListIR_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_driverListIR (const GALGAS_lstring & in_mDriverName,
                                            const GALGAS_omnibusType & in_mType,
                                            const GALGAS_operandIRList & in_mInitialValueList
                                            COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_driverListIR (const GALGAS_driverListIR_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_driverListIR::cCollectionElement_driverListIR (const GALGAS_lstring & in_mDriverName,
                                                                  const GALGAS_omnibusType & in_mType,
                                                                  const GALGAS_operandIRList & in_mInitialValueList
                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mDriverName, in_mType, in_mInitialValueList) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_driverListIR::cCollectionElement_driverListIR (const GALGAS_driverListIR_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mDriverName, inElement.mProperty_mType, inElement.mProperty_mInitialValueList) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_driverListIR::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_driverListIR::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_driverListIR (mObject.mProperty_mDriverName, mObject.mProperty_mType, mObject.mProperty_mInitialValueList COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_driverListIR::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mDriverName" ":" ;
  mObject.mProperty_mDriverName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mType" ":" ;
  mObject.mProperty_mType.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInitialValueList" ":" ;
  mObject.mProperty_mInitialValueList.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_driverListIR::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_driverListIR * operand = (cCollectionElement_driverListIR *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_driverListIR) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_driverListIR::GALGAS_driverListIR (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_driverListIR::GALGAS_driverListIR (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_driverListIR GALGAS_driverListIR::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_driverListIR  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_driverListIR GALGAS_driverListIR::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                    const GALGAS_omnibusType & inOperand1,
                                                                    const GALGAS_operandIRList & inOperand2
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_driverListIR result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_driverListIR (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_driverListIR::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_driverListIR::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                     const GALGAS_lstring & in_mDriverName,
                                                     const GALGAS_omnibusType & in_mType,
                                                     const GALGAS_operandIRList & in_mInitialValueList
                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_driverListIR * p = NULL ;
  macroMyNew (p, cCollectionElement_driverListIR (in_mDriverName,
                                                  in_mType,
                                                  in_mInitialValueList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_driverListIR::addAssign_operation (const GALGAS_lstring & inOperand0,
                                               const GALGAS_omnibusType & inOperand1,
                                               const GALGAS_operandIRList & inOperand2
                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_driverListIR (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_driverListIR::setter_append (GALGAS_driverListIR_2D_element inElement,
                                         C_Compiler * /* inCompiler */
                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_driverListIR (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_driverListIR::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                const GALGAS_omnibusType inOperand1,
                                                const GALGAS_operandIRList inOperand2,
                                                const GALGAS_uint inInsertionIndex,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_driverListIR (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_driverListIR::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                GALGAS_omnibusType & outOperand1,
                                                GALGAS_operandIRList & outOperand2,
                                                const GALGAS_uint inRemoveIndex,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_driverListIR * p = (cCollectionElement_driverListIR *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_driverListIR) ;
      outOperand0 = p->mObject.mProperty_mDriverName ;
      outOperand1 = p->mObject.mProperty_mType ;
      outOperand2 = p->mObject.mProperty_mInitialValueList ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_driverListIR::setter_popFirst (GALGAS_lstring & outOperand0,
                                           GALGAS_omnibusType & outOperand1,
                                           GALGAS_operandIRList & outOperand2,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_driverListIR * p = (cCollectionElement_driverListIR *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_driverListIR) ;
    outOperand0 = p->mObject.mProperty_mDriverName ;
    outOperand1 = p->mObject.mProperty_mType ;
    outOperand2 = p->mObject.mProperty_mInitialValueList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_driverListIR::setter_popLast (GALGAS_lstring & outOperand0,
                                          GALGAS_omnibusType & outOperand1,
                                          GALGAS_operandIRList & outOperand2,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_driverListIR * p = (cCollectionElement_driverListIR *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_driverListIR) ;
    outOperand0 = p->mObject.mProperty_mDriverName ;
    outOperand1 = p->mObject.mProperty_mType ;
    outOperand2 = p->mObject.mProperty_mInitialValueList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_driverListIR::method_first (GALGAS_lstring & outOperand0,
                                        GALGAS_omnibusType & outOperand1,
                                        GALGAS_operandIRList & outOperand2,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_driverListIR * p = (cCollectionElement_driverListIR *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_driverListIR) ;
    outOperand0 = p->mObject.mProperty_mDriverName ;
    outOperand1 = p->mObject.mProperty_mType ;
    outOperand2 = p->mObject.mProperty_mInitialValueList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_driverListIR::method_last (GALGAS_lstring & outOperand0,
                                       GALGAS_omnibusType & outOperand1,
                                       GALGAS_operandIRList & outOperand2,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_driverListIR * p = (cCollectionElement_driverListIR *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_driverListIR) ;
    outOperand0 = p->mObject.mProperty_mDriverName ;
    outOperand1 = p->mObject.mProperty_mType ;
    outOperand2 = p->mObject.mProperty_mInitialValueList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_driverListIR GALGAS_driverListIR::add_operation (const GALGAS_driverListIR & inOperand,
                                                        C_Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_driverListIR result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_driverListIR GALGAS_driverListIR::getter_subListWithRange (const GALGAS_range & inRange,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_driverListIR result = GALGAS_driverListIR::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_driverListIR GALGAS_driverListIR::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_driverListIR result = GALGAS_driverListIR::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_driverListIR GALGAS_driverListIR::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_driverListIR result = GALGAS_driverListIR::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_driverListIR::plusAssign_operation (const GALGAS_driverListIR inOperand,
                                                C_Compiler * /* inCompiler */
                                                COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_driverListIR::setter_setMDriverNameAtIndex (GALGAS_lstring inOperand,
                                                        GALGAS_uint inIndex,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_driverListIR * p = (cCollectionElement_driverListIR *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_driverListIR) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mDriverName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_driverListIR::getter_mDriverNameAtIndex (const GALGAS_uint & inIndex,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_driverListIR * p = (cCollectionElement_driverListIR *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_driverListIR) ;
    result = p->mObject.mProperty_mDriverName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_driverListIR::setter_setMTypeAtIndex (GALGAS_omnibusType inOperand,
                                                  GALGAS_uint inIndex,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_driverListIR * p = (cCollectionElement_driverListIR *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_driverListIR) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mType = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_omnibusType GALGAS_driverListIR::getter_mTypeAtIndex (const GALGAS_uint & inIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_driverListIR * p = (cCollectionElement_driverListIR *) attributes.ptr () ;
  GALGAS_omnibusType result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_driverListIR) ;
    result = p->mObject.mProperty_mType ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_driverListIR::setter_setMInitialValueListAtIndex (GALGAS_operandIRList inOperand,
                                                              GALGAS_uint inIndex,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_driverListIR * p = (cCollectionElement_driverListIR *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_driverListIR) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInitialValueList = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_operandIRList GALGAS_driverListIR::getter_mInitialValueListAtIndex (const GALGAS_uint & inIndex,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_driverListIR * p = (cCollectionElement_driverListIR *) attributes.ptr () ;
  GALGAS_operandIRList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_driverListIR) ;
    result = p->mObject.mProperty_mInitialValueList ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_driverListIR::cEnumerator_driverListIR (const GALGAS_driverListIR & inEnumeratedObject,
                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_driverListIR_2D_element cEnumerator_driverListIR::current (LOCATION_ARGS) const {
  const cCollectionElement_driverListIR * p = (const cCollectionElement_driverListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_driverListIR) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_driverListIR::current_mDriverName (LOCATION_ARGS) const {
  const cCollectionElement_driverListIR * p = (const cCollectionElement_driverListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_driverListIR) ;
  return p->mObject.mProperty_mDriverName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_omnibusType cEnumerator_driverListIR::current_mType (LOCATION_ARGS) const {
  const cCollectionElement_driverListIR * p = (const cCollectionElement_driverListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_driverListIR) ;
  return p->mObject.mProperty_mType ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_operandIRList cEnumerator_driverListIR::current_mInitialValueList (LOCATION_ARGS) const {
  const cCollectionElement_driverListIR * p = (const cCollectionElement_driverListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_driverListIR) ;
  return p->mObject.mProperty_mInitialValueList ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@driverListIR type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_driverListIR ("driverListIR",
                                     NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_driverListIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_driverListIR ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_driverListIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_driverListIR (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_driverListIR GALGAS_driverListIR::extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GALGAS_driverListIR result ;
  const GALGAS_driverListIR * p = (const GALGAS_driverListIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_driverListIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("driverListIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@driverListIR generateLLVMDriverCode'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_generateLLVMDriverCode (const GALGAS_driverListIR inObject,
                                             GALGAS_string & ioArgument_ioLLVMcode,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("Boot"), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 439)), inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 439)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal void @boot ()").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 440)), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 440)).add_operation (GALGAS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 440)), inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 440)) ;
  const GALGAS_driverListIR temp_0 = inObject ;
  cEnumerator_driverListIR enumerator_18442 (temp_0, kENUMERATION_UP) ;
  while (enumerator_18442.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @").add_operation (function_llvmBootRoutineNameFromDriver (enumerator_18442.current (HERE).getter_mDriverName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 442)).getter_string (HERE).getter_assemblerRepresentation (SOURCE_FILE ("declaration-driver.galgas", 442)), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 442)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 442)), inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 442)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_18442.current (HERE).getter_mType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 443)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 443)).add_operation (function_llvmNameForGlobalVariable (enumerator_18442.current (HERE).getter_mDriverName (HERE).getter_string (SOURCE_FILE ("declaration-driver.galgas", 443)), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 443)), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 443)), inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 443)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 444)) ;
    enumerator_18442.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 446)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 447)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("Startup"), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 449)), inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 449)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal void @startup ()").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 450)), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 450)).add_operation (GALGAS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 450)), inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 450)) ;
  const GALGAS_driverListIR temp_1 = inObject ;
  cEnumerator_driverListIR enumerator_18915 (temp_1, kENUMERATION_UP) ;
  while (enumerator_18915.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @").add_operation (function_llvmStartupRoutineNameFromDriver (enumerator_18915.current (HERE).getter_mDriverName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 452)).getter_string (HERE).getter_assemblerRepresentation (SOURCE_FILE ("declaration-driver.galgas", 452)), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 452)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 452)), inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 452)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_18915.current (HERE).getter_mType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 453)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 453)).add_operation (function_llvmNameForGlobalVariable (enumerator_18915.current (HERE).getter_mDriverName (HERE).getter_string (SOURCE_FILE ("declaration-driver.galgas", 453)), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 453)), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 453)), inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 453)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 454)) ;
    enumerator_18915.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 456)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 457)) ;
}


//----------------------------------------------------------------------------------------------------------------------

cEnumAssociatedValues_staticListPropertyTypeAST_valueType::cEnumAssociatedValues_staticListPropertyTypeAST_valueType (const GALGAS_lstring & inAssociatedValue0
                                                                                                                      COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_staticListPropertyTypeAST_valueType::description (C_String & ioString,
                                                                             const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_staticListPropertyTypeAST_valueType::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_staticListPropertyTypeAST_valueType * ptr = dynamic_cast<const cEnumAssociatedValues_staticListPropertyTypeAST_valueType *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumAssociatedValues_staticListPropertyTypeAST_function::cEnumAssociatedValues_staticListPropertyTypeAST_function (const GALGAS_mode & inAssociatedValue0,
                                                                                                                    const GALGAS_routineFormalArgumentListAST & inAssociatedValue1,
                                                                                                                    const GALGAS_lstring & inAssociatedValue2
                                                                                                                    COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1),
mAssociatedValue2 (inAssociatedValue2) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_staticListPropertyTypeAST_function::description (C_String & ioString,
                                                                            const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  mAssociatedValue2.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_staticListPropertyTypeAST_function::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_staticListPropertyTypeAST_function * ptr = dynamic_cast<const cEnumAssociatedValues_staticListPropertyTypeAST_function *> (inOperand) ;
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_staticListPropertyTypeAST::GALGAS_staticListPropertyTypeAST (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_staticListPropertyTypeAST GALGAS_staticListPropertyTypeAST::constructor_valueType (const GALGAS_lstring & inAssociatedValue0
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_staticListPropertyTypeAST result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_valueType ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_staticListPropertyTypeAST_valueType (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_staticListPropertyTypeAST GALGAS_staticListPropertyTypeAST::constructor_function (const GALGAS_mode & inAssociatedValue0,
                                                                                         const GALGAS_routineFormalArgumentListAST & inAssociatedValue1,
                                                                                         const GALGAS_lstring & inAssociatedValue2
                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_staticListPropertyTypeAST result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid () && inAssociatedValue2.isValid ()) {
    result.mEnum = kEnum_function ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_staticListPropertyTypeAST_function (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_staticListPropertyTypeAST::method_valueType (GALGAS_lstring & outAssociatedValue0,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_valueType) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @staticListPropertyTypeAST valueType invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_staticListPropertyTypeAST_valueType * ptr = (const cEnumAssociatedValues_staticListPropertyTypeAST_valueType *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_staticListPropertyTypeAST::method_function (GALGAS_mode & outAssociatedValue0,
                                                        GALGAS_routineFormalArgumentListAST & outAssociatedValue1,
                                                        GALGAS_lstring & outAssociatedValue2,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_function) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    outAssociatedValue2.drop () ;
    C_String s ;
    s << "method @staticListPropertyTypeAST function invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_staticListPropertyTypeAST_function * ptr = (const cEnumAssociatedValues_staticListPropertyTypeAST_function *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_staticListPropertyTypeAST [3] = {
  "(not built)",
  "valueType",
  "function"
} ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_staticListPropertyTypeAST::getter_isValueType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_valueType == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_staticListPropertyTypeAST::getter_isFunction (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_function == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_staticListPropertyTypeAST::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "<enum @staticListPropertyTypeAST: " << gEnumNameArrayFor_staticListPropertyTypeAST [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_staticListPropertyTypeAST::objectCompare (const GALGAS_staticListPropertyTypeAST & inOperand) const {
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

//----------------------------------------------------------------------------------------------------------------------
//
//@staticListPropertyTypeAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_staticListPropertyTypeAST ("staticListPropertyTypeAST",
                                                  NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_staticListPropertyTypeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_staticListPropertyTypeAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_staticListPropertyTypeAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_staticListPropertyTypeAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_staticListPropertyTypeAST GALGAS_staticListPropertyTypeAST::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_staticListPropertyTypeAST result ;
  const GALGAS_staticListPropertyTypeAST * p = (const GALGAS_staticListPropertyTypeAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_staticListPropertyTypeAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("staticListPropertyTypeAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@staticListPropertyListAST' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_staticListPropertyListAST : public cCollectionElement {
  public : GALGAS_staticListPropertyListAST_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_staticListPropertyListAST (const GALGAS_lstring & in_mPropertyName,
                                                         const GALGAS_staticListPropertyTypeAST & in_mPropertyType
                                                         COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_staticListPropertyListAST (const GALGAS_staticListPropertyListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_staticListPropertyListAST::cCollectionElement_staticListPropertyListAST (const GALGAS_lstring & in_mPropertyName,
                                                                                            const GALGAS_staticListPropertyTypeAST & in_mPropertyType
                                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mPropertyName, in_mPropertyType) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_staticListPropertyListAST::cCollectionElement_staticListPropertyListAST (const GALGAS_staticListPropertyListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mPropertyName, inElement.mProperty_mPropertyType) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_staticListPropertyListAST::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_staticListPropertyListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_staticListPropertyListAST (mObject.mProperty_mPropertyName, mObject.mProperty_mPropertyType COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_staticListPropertyListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mPropertyName" ":" ;
  mObject.mProperty_mPropertyName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mPropertyType" ":" ;
  mObject.mProperty_mPropertyType.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_staticListPropertyListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_staticListPropertyListAST * operand = (cCollectionElement_staticListPropertyListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_staticListPropertyListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_staticListPropertyListAST::GALGAS_staticListPropertyListAST (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_staticListPropertyListAST::GALGAS_staticListPropertyListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_staticListPropertyListAST GALGAS_staticListPropertyListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_staticListPropertyListAST  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_staticListPropertyListAST GALGAS_staticListPropertyListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                              const GALGAS_staticListPropertyTypeAST & inOperand1
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_staticListPropertyListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_staticListPropertyListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_staticListPropertyListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_staticListPropertyListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                  const GALGAS_lstring & in_mPropertyName,
                                                                  const GALGAS_staticListPropertyTypeAST & in_mPropertyType
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_staticListPropertyListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_staticListPropertyListAST (in_mPropertyName,
                                                               in_mPropertyType COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_staticListPropertyListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                            const GALGAS_staticListPropertyTypeAST & inOperand1
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_staticListPropertyListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_staticListPropertyListAST::setter_append (GALGAS_staticListPropertyListAST_2D_element inElement,
                                                      C_Compiler * /* inCompiler */
                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_staticListPropertyListAST (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_staticListPropertyListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                             const GALGAS_staticListPropertyTypeAST inOperand1,
                                                             const GALGAS_uint inInsertionIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_staticListPropertyListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_staticListPropertyListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                             GALGAS_staticListPropertyTypeAST & outOperand1,
                                                             const GALGAS_uint inRemoveIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_staticListPropertyListAST * p = (cCollectionElement_staticListPropertyListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_staticListPropertyListAST) ;
      outOperand0 = p->mObject.mProperty_mPropertyName ;
      outOperand1 = p->mObject.mProperty_mPropertyType ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_staticListPropertyListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                        GALGAS_staticListPropertyTypeAST & outOperand1,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_staticListPropertyListAST * p = (cCollectionElement_staticListPropertyListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_staticListPropertyListAST) ;
    outOperand0 = p->mObject.mProperty_mPropertyName ;
    outOperand1 = p->mObject.mProperty_mPropertyType ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_staticListPropertyListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                       GALGAS_staticListPropertyTypeAST & outOperand1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_staticListPropertyListAST * p = (cCollectionElement_staticListPropertyListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_staticListPropertyListAST) ;
    outOperand0 = p->mObject.mProperty_mPropertyName ;
    outOperand1 = p->mObject.mProperty_mPropertyType ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_staticListPropertyListAST::method_first (GALGAS_lstring & outOperand0,
                                                     GALGAS_staticListPropertyTypeAST & outOperand1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_staticListPropertyListAST * p = (cCollectionElement_staticListPropertyListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_staticListPropertyListAST) ;
    outOperand0 = p->mObject.mProperty_mPropertyName ;
    outOperand1 = p->mObject.mProperty_mPropertyType ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_staticListPropertyListAST::method_last (GALGAS_lstring & outOperand0,
                                                    GALGAS_staticListPropertyTypeAST & outOperand1,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_staticListPropertyListAST * p = (cCollectionElement_staticListPropertyListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_staticListPropertyListAST) ;
    outOperand0 = p->mObject.mProperty_mPropertyName ;
    outOperand1 = p->mObject.mProperty_mPropertyType ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_staticListPropertyListAST GALGAS_staticListPropertyListAST::add_operation (const GALGAS_staticListPropertyListAST & inOperand,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_staticListPropertyListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_staticListPropertyListAST GALGAS_staticListPropertyListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_staticListPropertyListAST result = GALGAS_staticListPropertyListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_staticListPropertyListAST GALGAS_staticListPropertyListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_staticListPropertyListAST result = GALGAS_staticListPropertyListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_staticListPropertyListAST GALGAS_staticListPropertyListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_staticListPropertyListAST result = GALGAS_staticListPropertyListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_staticListPropertyListAST::plusAssign_operation (const GALGAS_staticListPropertyListAST inOperand,
                                                             C_Compiler * /* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_staticListPropertyListAST::setter_setMPropertyNameAtIndex (GALGAS_lstring inOperand,
                                                                       GALGAS_uint inIndex,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_staticListPropertyListAST * p = (cCollectionElement_staticListPropertyListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_staticListPropertyListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mPropertyName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_staticListPropertyListAST::getter_mPropertyNameAtIndex (const GALGAS_uint & inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_staticListPropertyListAST * p = (cCollectionElement_staticListPropertyListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_staticListPropertyListAST) ;
    result = p->mObject.mProperty_mPropertyName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_staticListPropertyListAST::setter_setMPropertyTypeAtIndex (GALGAS_staticListPropertyTypeAST inOperand,
                                                                       GALGAS_uint inIndex,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_staticListPropertyListAST * p = (cCollectionElement_staticListPropertyListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_staticListPropertyListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mPropertyType = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_staticListPropertyTypeAST GALGAS_staticListPropertyListAST::getter_mPropertyTypeAtIndex (const GALGAS_uint & inIndex,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_staticListPropertyListAST * p = (cCollectionElement_staticListPropertyListAST *) attributes.ptr () ;
  GALGAS_staticListPropertyTypeAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_staticListPropertyListAST) ;
    result = p->mObject.mProperty_mPropertyType ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_staticListPropertyListAST::cEnumerator_staticListPropertyListAST (const GALGAS_staticListPropertyListAST & inEnumeratedObject,
                                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_staticListPropertyListAST_2D_element cEnumerator_staticListPropertyListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_staticListPropertyListAST * p = (const cCollectionElement_staticListPropertyListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_staticListPropertyListAST) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_staticListPropertyListAST::current_mPropertyName (LOCATION_ARGS) const {
  const cCollectionElement_staticListPropertyListAST * p = (const cCollectionElement_staticListPropertyListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_staticListPropertyListAST) ;
  return p->mObject.mProperty_mPropertyName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_staticListPropertyTypeAST cEnumerator_staticListPropertyListAST::current_mPropertyType (LOCATION_ARGS) const {
  const cCollectionElement_staticListPropertyListAST * p = (const cCollectionElement_staticListPropertyListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_staticListPropertyListAST) ;
  return p->mObject.mProperty_mPropertyType ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@staticListPropertyListAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_staticListPropertyListAST ("staticListPropertyListAST",
                                                  NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_staticListPropertyListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_staticListPropertyListAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_staticListPropertyListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_staticListPropertyListAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_staticListPropertyListAST GALGAS_staticListPropertyListAST::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_staticListPropertyListAST result ;
  const GALGAS_staticListPropertyListAST * p = (const GALGAS_staticListPropertyListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_staticListPropertyListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("staticListPropertyListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@staticListValueListAST' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_staticListValueListAST : public cCollectionElement {
  public : GALGAS_staticListValueListAST_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_staticListValueListAST (const GALGAS_extendStaticListElementAST & in_mElement,
                                                      const GALGAS_location & in_mLocation
                                                      COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_staticListValueListAST (const GALGAS_staticListValueListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_staticListValueListAST::cCollectionElement_staticListValueListAST (const GALGAS_extendStaticListElementAST & in_mElement,
                                                                                      const GALGAS_location & in_mLocation
                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mElement, in_mLocation) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_staticListValueListAST::cCollectionElement_staticListValueListAST (const GALGAS_staticListValueListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mElement, inElement.mProperty_mLocation) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_staticListValueListAST::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_staticListValueListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_staticListValueListAST (mObject.mProperty_mElement, mObject.mProperty_mLocation COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_staticListValueListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mElement" ":" ;
  mObject.mProperty_mElement.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLocation" ":" ;
  mObject.mProperty_mLocation.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_staticListValueListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_staticListValueListAST * operand = (cCollectionElement_staticListValueListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_staticListValueListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_staticListValueListAST::GALGAS_staticListValueListAST (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_staticListValueListAST::GALGAS_staticListValueListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_staticListValueListAST GALGAS_staticListValueListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_staticListValueListAST  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_staticListValueListAST GALGAS_staticListValueListAST::constructor_listWithValue (const GALGAS_extendStaticListElementAST & inOperand0,
                                                                                        const GALGAS_location & inOperand1
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_staticListValueListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_staticListValueListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_staticListValueListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_staticListValueListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                               const GALGAS_extendStaticListElementAST & in_mElement,
                                                               const GALGAS_location & in_mLocation
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_staticListValueListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_staticListValueListAST (in_mElement,
                                                            in_mLocation COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_staticListValueListAST::addAssign_operation (const GALGAS_extendStaticListElementAST & inOperand0,
                                                         const GALGAS_location & inOperand1
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_staticListValueListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_staticListValueListAST::setter_append (GALGAS_staticListValueListAST_2D_element inElement,
                                                   C_Compiler * /* inCompiler */
                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_staticListValueListAST (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_staticListValueListAST::setter_insertAtIndex (const GALGAS_extendStaticListElementAST inOperand0,
                                                          const GALGAS_location inOperand1,
                                                          const GALGAS_uint inInsertionIndex,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_staticListValueListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_staticListValueListAST::setter_removeAtIndex (GALGAS_extendStaticListElementAST & outOperand0,
                                                          GALGAS_location & outOperand1,
                                                          const GALGAS_uint inRemoveIndex,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_staticListValueListAST * p = (cCollectionElement_staticListValueListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_staticListValueListAST) ;
      outOperand0 = p->mObject.mProperty_mElement ;
      outOperand1 = p->mObject.mProperty_mLocation ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_staticListValueListAST::setter_popFirst (GALGAS_extendStaticListElementAST & outOperand0,
                                                     GALGAS_location & outOperand1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_staticListValueListAST * p = (cCollectionElement_staticListValueListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_staticListValueListAST) ;
    outOperand0 = p->mObject.mProperty_mElement ;
    outOperand1 = p->mObject.mProperty_mLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_staticListValueListAST::setter_popLast (GALGAS_extendStaticListElementAST & outOperand0,
                                                    GALGAS_location & outOperand1,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_staticListValueListAST * p = (cCollectionElement_staticListValueListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_staticListValueListAST) ;
    outOperand0 = p->mObject.mProperty_mElement ;
    outOperand1 = p->mObject.mProperty_mLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_staticListValueListAST::method_first (GALGAS_extendStaticListElementAST & outOperand0,
                                                  GALGAS_location & outOperand1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_staticListValueListAST * p = (cCollectionElement_staticListValueListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_staticListValueListAST) ;
    outOperand0 = p->mObject.mProperty_mElement ;
    outOperand1 = p->mObject.mProperty_mLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_staticListValueListAST::method_last (GALGAS_extendStaticListElementAST & outOperand0,
                                                 GALGAS_location & outOperand1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_staticListValueListAST * p = (cCollectionElement_staticListValueListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_staticListValueListAST) ;
    outOperand0 = p->mObject.mProperty_mElement ;
    outOperand1 = p->mObject.mProperty_mLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_staticListValueListAST GALGAS_staticListValueListAST::add_operation (const GALGAS_staticListValueListAST & inOperand,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_staticListValueListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_staticListValueListAST GALGAS_staticListValueListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_staticListValueListAST result = GALGAS_staticListValueListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_staticListValueListAST GALGAS_staticListValueListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_staticListValueListAST result = GALGAS_staticListValueListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_staticListValueListAST GALGAS_staticListValueListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_staticListValueListAST result = GALGAS_staticListValueListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_staticListValueListAST::plusAssign_operation (const GALGAS_staticListValueListAST inOperand,
                                                          C_Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_staticListValueListAST::setter_setMElementAtIndex (GALGAS_extendStaticListElementAST inOperand,
                                                               GALGAS_uint inIndex,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_staticListValueListAST * p = (cCollectionElement_staticListValueListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_staticListValueListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mElement = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extendStaticListElementAST GALGAS_staticListValueListAST::getter_mElementAtIndex (const GALGAS_uint & inIndex,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_staticListValueListAST * p = (cCollectionElement_staticListValueListAST *) attributes.ptr () ;
  GALGAS_extendStaticListElementAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_staticListValueListAST) ;
    result = p->mObject.mProperty_mElement ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_staticListValueListAST::setter_setMLocationAtIndex (GALGAS_location inOperand,
                                                                GALGAS_uint inIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_staticListValueListAST * p = (cCollectionElement_staticListValueListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_staticListValueListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mLocation = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_staticListValueListAST::getter_mLocationAtIndex (const GALGAS_uint & inIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_staticListValueListAST * p = (cCollectionElement_staticListValueListAST *) attributes.ptr () ;
  GALGAS_location result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_staticListValueListAST) ;
    result = p->mObject.mProperty_mLocation ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_staticListValueListAST::cEnumerator_staticListValueListAST (const GALGAS_staticListValueListAST & inEnumeratedObject,
                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_staticListValueListAST_2D_element cEnumerator_staticListValueListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_staticListValueListAST * p = (const cCollectionElement_staticListValueListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_staticListValueListAST) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_extendStaticListElementAST cEnumerator_staticListValueListAST::current_mElement (LOCATION_ARGS) const {
  const cCollectionElement_staticListValueListAST * p = (const cCollectionElement_staticListValueListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_staticListValueListAST) ;
  return p->mObject.mProperty_mElement ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cEnumerator_staticListValueListAST::current_mLocation (LOCATION_ARGS) const {
  const cCollectionElement_staticListValueListAST * p = (const cCollectionElement_staticListValueListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_staticListValueListAST) ;
  return p->mObject.mProperty_mLocation ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@staticListValueListAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_staticListValueListAST ("staticListValueListAST",
                                               NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_staticListValueListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_staticListValueListAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_staticListValueListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_staticListValueListAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_staticListValueListAST GALGAS_staticListValueListAST::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_staticListValueListAST result ;
  const GALGAS_staticListValueListAST * p = (const GALGAS_staticListValueListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_staticListValueListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("staticListValueListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@extendStaticListElementAST' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_extendStaticListElementAST : public cCollectionElement {
  public : GALGAS_extendStaticListElementAST_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_extendStaticListElementAST (const GALGAS_extendStaticListExpressionAST & in_mExpression,
                                                          const GALGAS_location & in_mEndOfExpression
                                                          COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_extendStaticListElementAST (const GALGAS_extendStaticListElementAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_extendStaticListElementAST::cCollectionElement_extendStaticListElementAST (const GALGAS_extendStaticListExpressionAST & in_mExpression,
                                                                                              const GALGAS_location & in_mEndOfExpression
                                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mExpression, in_mEndOfExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_extendStaticListElementAST::cCollectionElement_extendStaticListElementAST (const GALGAS_extendStaticListElementAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mExpression, inElement.mProperty_mEndOfExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_extendStaticListElementAST::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_extendStaticListElementAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_extendStaticListElementAST (mObject.mProperty_mExpression, mObject.mProperty_mEndOfExpression COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_extendStaticListElementAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mExpression" ":" ;
  mObject.mProperty_mExpression.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEndOfExpression" ":" ;
  mObject.mProperty_mEndOfExpression.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_extendStaticListElementAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_extendStaticListElementAST * operand = (cCollectionElement_extendStaticListElementAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_extendStaticListElementAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extendStaticListElementAST::GALGAS_extendStaticListElementAST (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extendStaticListElementAST::GALGAS_extendStaticListElementAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extendStaticListElementAST GALGAS_extendStaticListElementAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_extendStaticListElementAST  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extendStaticListElementAST GALGAS_extendStaticListElementAST::constructor_listWithValue (const GALGAS_extendStaticListExpressionAST & inOperand0,
                                                                                                const GALGAS_location & inOperand1
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_extendStaticListElementAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_extendStaticListElementAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_extendStaticListElementAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extendStaticListElementAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                   const GALGAS_extendStaticListExpressionAST & in_mExpression,
                                                                   const GALGAS_location & in_mEndOfExpression
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_extendStaticListElementAST * p = NULL ;
  macroMyNew (p, cCollectionElement_extendStaticListElementAST (in_mExpression,
                                                                in_mEndOfExpression COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extendStaticListElementAST::addAssign_operation (const GALGAS_extendStaticListExpressionAST & inOperand0,
                                                             const GALGAS_location & inOperand1
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_extendStaticListElementAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extendStaticListElementAST::setter_append (GALGAS_extendStaticListElementAST_2D_element inElement,
                                                       C_Compiler * /* inCompiler */
                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_extendStaticListElementAST (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extendStaticListElementAST::setter_insertAtIndex (const GALGAS_extendStaticListExpressionAST inOperand0,
                                                              const GALGAS_location inOperand1,
                                                              const GALGAS_uint inInsertionIndex,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_extendStaticListElementAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extendStaticListElementAST::setter_removeAtIndex (GALGAS_extendStaticListExpressionAST & outOperand0,
                                                              GALGAS_location & outOperand1,
                                                              const GALGAS_uint inRemoveIndex,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_extendStaticListElementAST * p = (cCollectionElement_extendStaticListElementAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_extendStaticListElementAST) ;
      outOperand0 = p->mObject.mProperty_mExpression ;
      outOperand1 = p->mObject.mProperty_mEndOfExpression ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extendStaticListElementAST::setter_popFirst (GALGAS_extendStaticListExpressionAST & outOperand0,
                                                         GALGAS_location & outOperand1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_extendStaticListElementAST * p = (cCollectionElement_extendStaticListElementAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_extendStaticListElementAST) ;
    outOperand0 = p->mObject.mProperty_mExpression ;
    outOperand1 = p->mObject.mProperty_mEndOfExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extendStaticListElementAST::setter_popLast (GALGAS_extendStaticListExpressionAST & outOperand0,
                                                        GALGAS_location & outOperand1,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_extendStaticListElementAST * p = (cCollectionElement_extendStaticListElementAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_extendStaticListElementAST) ;
    outOperand0 = p->mObject.mProperty_mExpression ;
    outOperand1 = p->mObject.mProperty_mEndOfExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extendStaticListElementAST::method_first (GALGAS_extendStaticListExpressionAST & outOperand0,
                                                      GALGAS_location & outOperand1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_extendStaticListElementAST * p = (cCollectionElement_extendStaticListElementAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_extendStaticListElementAST) ;
    outOperand0 = p->mObject.mProperty_mExpression ;
    outOperand1 = p->mObject.mProperty_mEndOfExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extendStaticListElementAST::method_last (GALGAS_extendStaticListExpressionAST & outOperand0,
                                                     GALGAS_location & outOperand1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_extendStaticListElementAST * p = (cCollectionElement_extendStaticListElementAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_extendStaticListElementAST) ;
    outOperand0 = p->mObject.mProperty_mExpression ;
    outOperand1 = p->mObject.mProperty_mEndOfExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extendStaticListElementAST GALGAS_extendStaticListElementAST::add_operation (const GALGAS_extendStaticListElementAST & inOperand,
                                                                                    C_Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_extendStaticListElementAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extendStaticListElementAST GALGAS_extendStaticListElementAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_extendStaticListElementAST result = GALGAS_extendStaticListElementAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extendStaticListElementAST GALGAS_extendStaticListElementAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_extendStaticListElementAST result = GALGAS_extendStaticListElementAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extendStaticListElementAST GALGAS_extendStaticListElementAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_extendStaticListElementAST result = GALGAS_extendStaticListElementAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extendStaticListElementAST::plusAssign_operation (const GALGAS_extendStaticListElementAST inOperand,
                                                              C_Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extendStaticListElementAST::setter_setMExpressionAtIndex (GALGAS_extendStaticListExpressionAST inOperand,
                                                                      GALGAS_uint inIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_extendStaticListElementAST * p = (cCollectionElement_extendStaticListElementAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_extendStaticListElementAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mExpression = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extendStaticListExpressionAST GALGAS_extendStaticListElementAST::getter_mExpressionAtIndex (const GALGAS_uint & inIndex,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_extendStaticListElementAST * p = (cCollectionElement_extendStaticListElementAST *) attributes.ptr () ;
  GALGAS_extendStaticListExpressionAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_extendStaticListElementAST) ;
    result = p->mObject.mProperty_mExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extendStaticListElementAST::setter_setMEndOfExpressionAtIndex (GALGAS_location inOperand,
                                                                           GALGAS_uint inIndex,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_extendStaticListElementAST * p = (cCollectionElement_extendStaticListElementAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_extendStaticListElementAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mEndOfExpression = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_extendStaticListElementAST::getter_mEndOfExpressionAtIndex (const GALGAS_uint & inIndex,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_extendStaticListElementAST * p = (cCollectionElement_extendStaticListElementAST *) attributes.ptr () ;
  GALGAS_location result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_extendStaticListElementAST) ;
    result = p->mObject.mProperty_mEndOfExpression ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_extendStaticListElementAST::cEnumerator_extendStaticListElementAST (const GALGAS_extendStaticListElementAST & inEnumeratedObject,
                                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extendStaticListElementAST_2D_element cEnumerator_extendStaticListElementAST::current (LOCATION_ARGS) const {
  const cCollectionElement_extendStaticListElementAST * p = (const cCollectionElement_extendStaticListElementAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_extendStaticListElementAST) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_extendStaticListExpressionAST cEnumerator_extendStaticListElementAST::current_mExpression (LOCATION_ARGS) const {
  const cCollectionElement_extendStaticListElementAST * p = (const cCollectionElement_extendStaticListElementAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_extendStaticListElementAST) ;
  return p->mObject.mProperty_mExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cEnumerator_extendStaticListElementAST::current_mEndOfExpression (LOCATION_ARGS) const {
  const cCollectionElement_extendStaticListElementAST * p = (const cCollectionElement_extendStaticListElementAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_extendStaticListElementAST) ;
  return p->mObject.mProperty_mEndOfExpression ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@extendStaticListElementAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_extendStaticListElementAST ("extendStaticListElementAST",
                                                   NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_extendStaticListElementAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extendStaticListElementAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_extendStaticListElementAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_extendStaticListElementAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extendStaticListElementAST GALGAS_extendStaticListElementAST::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_extendStaticListElementAST result ;
  const GALGAS_extendStaticListElementAST * p = (const GALGAS_extendStaticListElementAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_extendStaticListElementAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extendStaticListElementAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumAssociatedValues_extendStaticListExpressionAST_expression::cEnumAssociatedValues_extendStaticListExpressionAST_expression (const GALGAS_expressionAST & inAssociatedValue0
                                                                                                                                COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_extendStaticListExpressionAST_expression::description (C_String & ioString,
                                                                                  const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_extendStaticListExpressionAST_expression::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_extendStaticListExpressionAST_expression * ptr = dynamic_cast<const cEnumAssociatedValues_extendStaticListExpressionAST_expression *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumAssociatedValues_extendStaticListExpressionAST_function::cEnumAssociatedValues_extendStaticListExpressionAST_function (const GALGAS_lstring & inAssociatedValue0,
                                                                                                                            const GALGAS_routineFormalArgumentListAST & inAssociatedValue1
                                                                                                                            COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_extendStaticListExpressionAST_function::description (C_String & ioString,
                                                                                const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_extendStaticListExpressionAST_function::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_extendStaticListExpressionAST_function * ptr = dynamic_cast<const cEnumAssociatedValues_extendStaticListExpressionAST_function *> (inOperand) ;
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extendStaticListExpressionAST::GALGAS_extendStaticListExpressionAST (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extendStaticListExpressionAST GALGAS_extendStaticListExpressionAST::constructor_expression (const GALGAS_expressionAST & inAssociatedValue0
                                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_extendStaticListExpressionAST result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_expression ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_extendStaticListExpressionAST_expression (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extendStaticListExpressionAST GALGAS_extendStaticListExpressionAST::constructor_function (const GALGAS_lstring & inAssociatedValue0,
                                                                                                 const GALGAS_routineFormalArgumentListAST & inAssociatedValue1
                                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_extendStaticListExpressionAST result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_function ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_extendStaticListExpressionAST_function (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extendStaticListExpressionAST::method_expression (GALGAS_expressionAST & outAssociatedValue0,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_expression) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @extendStaticListExpressionAST expression invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_extendStaticListExpressionAST_expression * ptr = (const cEnumAssociatedValues_extendStaticListExpressionAST_expression *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extendStaticListExpressionAST::method_function (GALGAS_lstring & outAssociatedValue0,
                                                            GALGAS_routineFormalArgumentListAST & outAssociatedValue1,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_function) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    C_String s ;
    s << "method @extendStaticListExpressionAST function invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_extendStaticListExpressionAST_function * ptr = (const cEnumAssociatedValues_extendStaticListExpressionAST_function *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_extendStaticListExpressionAST [3] = {
  "(not built)",
  "expression",
  "function"
} ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_extendStaticListExpressionAST::getter_isExpression (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_expression == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_extendStaticListExpressionAST::getter_isFunction (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_function == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extendStaticListExpressionAST::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "<enum @extendStaticListExpressionAST: " << gEnumNameArrayFor_extendStaticListExpressionAST [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_extendStaticListExpressionAST::objectCompare (const GALGAS_extendStaticListExpressionAST & inOperand) const {
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

//----------------------------------------------------------------------------------------------------------------------
//
//@extendStaticListExpressionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_extendStaticListExpressionAST ("extendStaticListExpressionAST",
                                                      NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_extendStaticListExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extendStaticListExpressionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_extendStaticListExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_extendStaticListExpressionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extendStaticListExpressionAST GALGAS_extendStaticListExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_extendStaticListExpressionAST result ;
  const GALGAS_extendStaticListExpressionAST * p = (const GALGAS_extendStaticListExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_extendStaticListExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extendStaticListExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_staticListInitializationMap::cMapElement_staticListInitializationMap (const GALGAS_lstring & inKey,
                                                                                  const GALGAS_stringlist & in_mInitializationList
                                                                                  COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mInitializationList (in_mInitializationList) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_staticListInitializationMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mInitializationList.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_staticListInitializationMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_staticListInitializationMap (mProperty_lkey, mProperty_mInitializationList COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_staticListInitializationMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInitializationList" ":" ;
  mProperty_mInitializationList.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_staticListInitializationMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_staticListInitializationMap * operand = (cMapElement_staticListInitializationMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mInitializationList.objectCompare (operand->mProperty_mInitializationList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_staticListInitializationMap::GALGAS_staticListInitializationMap (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_staticListInitializationMap::GALGAS_staticListInitializationMap (const GALGAS_staticListInitializationMap & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_staticListInitializationMap & GALGAS_staticListInitializationMap::operator = (const GALGAS_staticListInitializationMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_staticListInitializationMap GALGAS_staticListInitializationMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_staticListInitializationMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_staticListInitializationMap GALGAS_staticListInitializationMap::constructor_mapWithMapToOverride (const GALGAS_staticListInitializationMap & inMapToOverride
                                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_staticListInitializationMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_staticListInitializationMap GALGAS_staticListInitializationMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  GALGAS_staticListInitializationMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_staticListInitializationMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                              const GALGAS_stringlist & inArgument0,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cMapElement_staticListInitializationMap * p = NULL ;
  macroMyNew (p, cMapElement_staticListInitializationMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@staticListInitializationMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_staticListInitializationMap::setter_insertKey (GALGAS_lstring inKey,
                                                           GALGAS_stringlist inArgument0,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  cMapElement_staticListInitializationMap * p = NULL ;
  macroMyNew (p, cMapElement_staticListInitializationMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "static list '%K' is already defined" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringlist GALGAS_staticListInitializationMap::getter_mInitializationListForKey (const GALGAS_string & inKey,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_staticListInitializationMap * p = (const cMapElement_staticListInitializationMap *) attributes ;
  GALGAS_stringlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_staticListInitializationMap) ;
    result = p->mProperty_mInitializationList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_staticListInitializationMap::setter_setMInitializationListForKey (GALGAS_stringlist inAttributeValue,
                                                                              GALGAS_string inKey,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_staticListInitializationMap * p = (cMapElement_staticListInitializationMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_staticListInitializationMap) ;
    p->mProperty_mInitializationList = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_staticListInitializationMap * GALGAS_staticListInitializationMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                                 const GALGAS_string & inKey
                                                                                                                 COMMA_LOCATION_ARGS) {
  cMapElement_staticListInitializationMap * result = (cMapElement_staticListInitializationMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_staticListInitializationMap) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_staticListInitializationMap::cEnumerator_staticListInitializationMap (const GALGAS_staticListInitializationMap & inEnumeratedObject,
                                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_staticListInitializationMap_2D_element cEnumerator_staticListInitializationMap::current (LOCATION_ARGS) const {
  const cMapElement_staticListInitializationMap * p = (const cMapElement_staticListInitializationMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_staticListInitializationMap) ;
  return GALGAS_staticListInitializationMap_2D_element (p->mProperty_lkey, p->mProperty_mInitializationList) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_staticListInitializationMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringlist cEnumerator_staticListInitializationMap::current_mInitializationList (LOCATION_ARGS) const {
  const cMapElement_staticListInitializationMap * p = (const cMapElement_staticListInitializationMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_staticListInitializationMap) ;
  return p->mProperty_mInitializationList ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_staticListInitializationMap::optional_searchKey (const GALGAS_string & inKey,
                                                             GALGAS_stringlist & outArgument0) const {
  const cMapElement_staticListInitializationMap * p = (const cMapElement_staticListInitializationMap *) searchForKey (inKey) ;
  const bool result = NULL != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_staticListInitializationMap) ;
    outArgument0 = p->mProperty_mInitializationList ;
  }else{
    outArgument0.drop () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@staticListInitializationMap type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_staticListInitializationMap ("staticListInitializationMap",
                                                    NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_staticListInitializationMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_staticListInitializationMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_staticListInitializationMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_staticListInitializationMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_staticListInitializationMap GALGAS_staticListInitializationMap::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_staticListInitializationMap result ;
  const GALGAS_staticListInitializationMap * p = (const GALGAS_staticListInitializationMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_staticListInitializationMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("staticListInitializationMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@staticListInitializationMap generateLLVMForStaticLists'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_generateLLVMForStaticLists (const GALGAS_staticListInitializationMap inObject,
                                                 const GALGAS_staticListInvokedFunctionSetMap constinArgument_inUsefulStaticArrayMap,
                                                 GALGAS_string & ioArgument_ioLLVMcode,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool var_first_22795 = GALGAS_bool (true) ;
  const GALGAS_staticListInitializationMap temp_0 = inObject ;
  cEnumerator_staticListInitializationMap enumerator_22831 (temp_0, kENUMERATION_UP) ;
  while (enumerator_22831.hasCurrentObject ()) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = constinArgument_inUsefulStaticArrayMap.getter_hasKey (enumerator_22831.current_lkey (HERE).getter_string (SOURCE_FILE ("declaration-static-list.galgas", 544)) COMMA_SOURCE_FILE ("declaration-static-list.galgas", 544)).boolEnum () ;
      if (kBoolTrue == test_1) {
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = var_first_22795.boolEnum () ;
          if (kBoolTrue == test_2) {
            var_first_22795 = GALGAS_bool (false) ;
            ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("Static Arraies"), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 547)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 547)) ;
          }
        }
        ioArgument_ioLLVMcode.plusAssign_operation(function_llvmNameForGlobalVariable (enumerator_22831.current_lkey (HERE).getter_string (SOURCE_FILE ("declaration-static-list.galgas", 549)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 549)).add_operation (GALGAS_string (" = private unnamed_addr constant ["), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 549)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 549)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(enumerator_22831.current_mInitializationList (HERE).getter_length (SOURCE_FILE ("declaration-static-list.galgas", 550)).getter_string (SOURCE_FILE ("declaration-static-list.galgas", 550)).add_operation (GALGAS_string (" x %"), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 550)).add_operation (function_llvmNameForStaticListElementType (enumerator_22831.current_lkey (HERE).getter_string (HERE).getter_nowhere (SOURCE_FILE ("declaration-static-list.galgas", 550)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 550)).getter_string (SOURCE_FILE ("declaration-static-list.galgas", 550)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 550)).add_operation (GALGAS_string ("] [\n"), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 550)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 550)) ;
        cEnumerator_stringlist enumerator_23234 (enumerator_22831.current_mInitializationList (HERE), kENUMERATION_UP) ;
        while (enumerator_23234.hasCurrentObject ()) {
          ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (function_llvmNameForStaticListElementType (enumerator_22831.current_lkey (HERE).getter_string (HERE).getter_nowhere (SOURCE_FILE ("declaration-static-list.galgas", 553)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 553)).getter_string (SOURCE_FILE ("declaration-static-list.galgas", 553)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 553)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 553)).add_operation (enumerator_23234.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 553)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 553)) ;
          if (enumerator_23234.hasNextObject ()) {
            ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (",\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 555)) ;
          }
          enumerator_23234.gotoNextObject () ;
        }
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("\n"
          "]\n"
          "\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 557)) ;
      }
    }
    enumerator_22831.gotoNextObject () ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@routineTypedSignature' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_routineTypedSignature : public cCollectionElement {
  public : GALGAS_routineTypedSignature_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_routineTypedSignature (const GALGAS_procFormalArgumentPassingMode & in_mFormalArgumentPassingMode,
                                                     const GALGAS_lstring & in_mSelector,
                                                     const GALGAS_unifiedTypeMap_2D_proxy & in_mTypeProxy,
                                                     const GALGAS_lstring & in_mFormalArgumentName
                                                     COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_routineTypedSignature (const GALGAS_routineTypedSignature_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_routineTypedSignature::cCollectionElement_routineTypedSignature (const GALGAS_procFormalArgumentPassingMode & in_mFormalArgumentPassingMode,
                                                                                    const GALGAS_lstring & in_mSelector,
                                                                                    const GALGAS_unifiedTypeMap_2D_proxy & in_mTypeProxy,
                                                                                    const GALGAS_lstring & in_mFormalArgumentName
                                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mFormalArgumentPassingMode, in_mSelector, in_mTypeProxy, in_mFormalArgumentName) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_routineTypedSignature::cCollectionElement_routineTypedSignature (const GALGAS_routineTypedSignature_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mFormalArgumentPassingMode, inElement.mProperty_mSelector, inElement.mProperty_mTypeProxy, inElement.mProperty_mFormalArgumentName) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_routineTypedSignature::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_routineTypedSignature::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_routineTypedSignature (mObject.mProperty_mFormalArgumentPassingMode, mObject.mProperty_mSelector, mObject.mProperty_mTypeProxy, mObject.mProperty_mFormalArgumentName COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFormalArgumentName" ":" ;
  mObject.mProperty_mFormalArgumentName.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_routineTypedSignature::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_routineTypedSignature * operand = (cCollectionElement_routineTypedSignature *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_routineTypedSignature) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineTypedSignature::GALGAS_routineTypedSignature (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineTypedSignature::GALGAS_routineTypedSignature (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineTypedSignature GALGAS_routineTypedSignature::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_routineTypedSignature  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineTypedSignature GALGAS_routineTypedSignature::constructor_listWithValue (const GALGAS_procFormalArgumentPassingMode & inOperand0,
                                                                                      const GALGAS_lstring & inOperand1,
                                                                                      const GALGAS_unifiedTypeMap_2D_proxy & inOperand2,
                                                                                      const GALGAS_lstring & inOperand3
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_routineTypedSignature result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_routineTypedSignature (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_routineTypedSignature::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_routineTypedSignature::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                              const GALGAS_procFormalArgumentPassingMode & in_mFormalArgumentPassingMode,
                                                              const GALGAS_lstring & in_mSelector,
                                                              const GALGAS_unifiedTypeMap_2D_proxy & in_mTypeProxy,
                                                              const GALGAS_lstring & in_mFormalArgumentName
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_routineTypedSignature * p = NULL ;
  macroMyNew (p, cCollectionElement_routineTypedSignature (in_mFormalArgumentPassingMode,
                                                           in_mSelector,
                                                           in_mTypeProxy,
                                                           in_mFormalArgumentName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_routineTypedSignature::addAssign_operation (const GALGAS_procFormalArgumentPassingMode & inOperand0,
                                                        const GALGAS_lstring & inOperand1,
                                                        const GALGAS_unifiedTypeMap_2D_proxy & inOperand2,
                                                        const GALGAS_lstring & inOperand3
                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_routineTypedSignature (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_routineTypedSignature::setter_append (GALGAS_routineTypedSignature_2D_element inElement,
                                                  C_Compiler * /* inCompiler */
                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_routineTypedSignature (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_routineTypedSignature::setter_insertAtIndex (const GALGAS_procFormalArgumentPassingMode inOperand0,
                                                         const GALGAS_lstring inOperand1,
                                                         const GALGAS_unifiedTypeMap_2D_proxy inOperand2,
                                                         const GALGAS_lstring inOperand3,
                                                         const GALGAS_uint inInsertionIndex,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_routineTypedSignature (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_routineTypedSignature::setter_removeAtIndex (GALGAS_procFormalArgumentPassingMode & outOperand0,
                                                         GALGAS_lstring & outOperand1,
                                                         GALGAS_unifiedTypeMap_2D_proxy & outOperand2,
                                                         GALGAS_lstring & outOperand3,
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
      outOperand3.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_routineTypedSignature) ;
      outOperand0 = p->mObject.mProperty_mFormalArgumentPassingMode ;
      outOperand1 = p->mObject.mProperty_mSelector ;
      outOperand2 = p->mObject.mProperty_mTypeProxy ;
      outOperand3 = p->mObject.mProperty_mFormalArgumentName ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_routineTypedSignature::setter_popFirst (GALGAS_procFormalArgumentPassingMode & outOperand0,
                                                    GALGAS_lstring & outOperand1,
                                                    GALGAS_unifiedTypeMap_2D_proxy & outOperand2,
                                                    GALGAS_lstring & outOperand3,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_routineTypedSignature * p = (cCollectionElement_routineTypedSignature *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_routineTypedSignature) ;
    outOperand0 = p->mObject.mProperty_mFormalArgumentPassingMode ;
    outOperand1 = p->mObject.mProperty_mSelector ;
    outOperand2 = p->mObject.mProperty_mTypeProxy ;
    outOperand3 = p->mObject.mProperty_mFormalArgumentName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_routineTypedSignature::setter_popLast (GALGAS_procFormalArgumentPassingMode & outOperand0,
                                                   GALGAS_lstring & outOperand1,
                                                   GALGAS_unifiedTypeMap_2D_proxy & outOperand2,
                                                   GALGAS_lstring & outOperand3,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_routineTypedSignature * p = (cCollectionElement_routineTypedSignature *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_routineTypedSignature) ;
    outOperand0 = p->mObject.mProperty_mFormalArgumentPassingMode ;
    outOperand1 = p->mObject.mProperty_mSelector ;
    outOperand2 = p->mObject.mProperty_mTypeProxy ;
    outOperand3 = p->mObject.mProperty_mFormalArgumentName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_routineTypedSignature::method_first (GALGAS_procFormalArgumentPassingMode & outOperand0,
                                                 GALGAS_lstring & outOperand1,
                                                 GALGAS_unifiedTypeMap_2D_proxy & outOperand2,
                                                 GALGAS_lstring & outOperand3,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_routineTypedSignature * p = (cCollectionElement_routineTypedSignature *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_routineTypedSignature) ;
    outOperand0 = p->mObject.mProperty_mFormalArgumentPassingMode ;
    outOperand1 = p->mObject.mProperty_mSelector ;
    outOperand2 = p->mObject.mProperty_mTypeProxy ;
    outOperand3 = p->mObject.mProperty_mFormalArgumentName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_routineTypedSignature::method_last (GALGAS_procFormalArgumentPassingMode & outOperand0,
                                                GALGAS_lstring & outOperand1,
                                                GALGAS_unifiedTypeMap_2D_proxy & outOperand2,
                                                GALGAS_lstring & outOperand3,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_routineTypedSignature * p = (cCollectionElement_routineTypedSignature *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_routineTypedSignature) ;
    outOperand0 = p->mObject.mProperty_mFormalArgumentPassingMode ;
    outOperand1 = p->mObject.mProperty_mSelector ;
    outOperand2 = p->mObject.mProperty_mTypeProxy ;
    outOperand3 = p->mObject.mProperty_mFormalArgumentName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineTypedSignature GALGAS_routineTypedSignature::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_routineTypedSignature result = GALGAS_routineTypedSignature::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineTypedSignature GALGAS_routineTypedSignature::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_routineTypedSignature result = GALGAS_routineTypedSignature::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineTypedSignature GALGAS_routineTypedSignature::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_routineTypedSignature result = GALGAS_routineTypedSignature::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_routineTypedSignature::plusAssign_operation (const GALGAS_routineTypedSignature inOperand,
                                                         C_Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_routineTypedSignature::setter_setMFormalArgumentPassingModeAtIndex (GALGAS_procFormalArgumentPassingMode inOperand,
                                                                                GALGAS_uint inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_routineTypedSignature * p = (cCollectionElement_routineTypedSignature *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_routineTypedSignature) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFormalArgumentPassingMode = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_routineTypedSignature::setter_setMSelectorAtIndex (GALGAS_lstring inOperand,
                                                               GALGAS_uint inIndex,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_routineTypedSignature * p = (cCollectionElement_routineTypedSignature *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_routineTypedSignature) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mSelector = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_routineTypedSignature::setter_setMTypeProxyAtIndex (GALGAS_unifiedTypeMap_2D_proxy inOperand,
                                                                GALGAS_uint inIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_routineTypedSignature * p = (cCollectionElement_routineTypedSignature *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_routineTypedSignature) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mTypeProxy = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_routineTypedSignature::setter_setMFormalArgumentNameAtIndex (GALGAS_lstring inOperand,
                                                                         GALGAS_uint inIndex,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_routineTypedSignature * p = (cCollectionElement_routineTypedSignature *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_routineTypedSignature) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFormalArgumentName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_routineTypedSignature::getter_mFormalArgumentNameAtIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_routineTypedSignature * p = (cCollectionElement_routineTypedSignature *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_routineTypedSignature) ;
    result = p->mObject.mProperty_mFormalArgumentName ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_routineTypedSignature::cEnumerator_routineTypedSignature (const GALGAS_routineTypedSignature & inEnumeratedObject,
                                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineTypedSignature_2D_element cEnumerator_routineTypedSignature::current (LOCATION_ARGS) const {
  const cCollectionElement_routineTypedSignature * p = (const cCollectionElement_routineTypedSignature *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_routineTypedSignature) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_procFormalArgumentPassingMode cEnumerator_routineTypedSignature::current_mFormalArgumentPassingMode (LOCATION_ARGS) const {
  const cCollectionElement_routineTypedSignature * p = (const cCollectionElement_routineTypedSignature *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_routineTypedSignature) ;
  return p->mObject.mProperty_mFormalArgumentPassingMode ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_routineTypedSignature::current_mSelector (LOCATION_ARGS) const {
  const cCollectionElement_routineTypedSignature * p = (const cCollectionElement_routineTypedSignature *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_routineTypedSignature) ;
  return p->mObject.mProperty_mSelector ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_proxy cEnumerator_routineTypedSignature::current_mTypeProxy (LOCATION_ARGS) const {
  const cCollectionElement_routineTypedSignature * p = (const cCollectionElement_routineTypedSignature *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_routineTypedSignature) ;
  return p->mObject.mProperty_mTypeProxy ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_routineTypedSignature::current_mFormalArgumentName (LOCATION_ARGS) const {
  const cCollectionElement_routineTypedSignature * p = (const cCollectionElement_routineTypedSignature *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_routineTypedSignature) ;
  return p->mObject.mProperty_mFormalArgumentName ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@routineTypedSignature type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_routineTypedSignature ("routineTypedSignature",
                                              NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_routineTypedSignature::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineTypedSignature ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_routineTypedSignature::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_routineTypedSignature (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@taskSetupListAST' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_taskSetupListAST : public cCollectionElement {
  public : GALGAS_taskSetupListAST_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_taskSetupListAST (const GALGAS_lstring & in_mName,
                                                const GALGAS_lstringlist & in_mDependanceList
                                                COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_taskSetupListAST (const GALGAS_taskSetupListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_taskSetupListAST::cCollectionElement_taskSetupListAST (const GALGAS_lstring & in_mName,
                                                                          const GALGAS_lstringlist & in_mDependanceList
                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mName, in_mDependanceList) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_taskSetupListAST::cCollectionElement_taskSetupListAST (const GALGAS_taskSetupListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mName, inElement.mProperty_mDependanceList) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_taskSetupListAST::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_taskSetupListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_taskSetupListAST (mObject.mProperty_mName, mObject.mProperty_mDependanceList COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_taskSetupListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mName" ":" ;
  mObject.mProperty_mName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mDependanceList" ":" ;
  mObject.mProperty_mDependanceList.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_taskSetupListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_taskSetupListAST * operand = (cCollectionElement_taskSetupListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_taskSetupListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_taskSetupListAST::GALGAS_taskSetupListAST (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_taskSetupListAST::GALGAS_taskSetupListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_taskSetupListAST GALGAS_taskSetupListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_taskSetupListAST  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_taskSetupListAST GALGAS_taskSetupListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                            const GALGAS_lstringlist & inOperand1
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_taskSetupListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_taskSetupListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_taskSetupListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_taskSetupListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                         const GALGAS_lstring & in_mName,
                                                         const GALGAS_lstringlist & in_mDependanceList
                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_taskSetupListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_taskSetupListAST (in_mName,
                                                      in_mDependanceList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_taskSetupListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                   const GALGAS_lstringlist & inOperand1
                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_taskSetupListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_taskSetupListAST::setter_append (GALGAS_taskSetupListAST_2D_element inElement,
                                             C_Compiler * /* inCompiler */
                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_taskSetupListAST (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_taskSetupListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                    const GALGAS_lstringlist inOperand1,
                                                    const GALGAS_uint inInsertionIndex,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_taskSetupListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_taskSetupListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                    GALGAS_lstringlist & outOperand1,
                                                    const GALGAS_uint inRemoveIndex,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_taskSetupListAST * p = (cCollectionElement_taskSetupListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_taskSetupListAST) ;
      outOperand0 = p->mObject.mProperty_mName ;
      outOperand1 = p->mObject.mProperty_mDependanceList ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_taskSetupListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                               GALGAS_lstringlist & outOperand1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_taskSetupListAST * p = (cCollectionElement_taskSetupListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_taskSetupListAST) ;
    outOperand0 = p->mObject.mProperty_mName ;
    outOperand1 = p->mObject.mProperty_mDependanceList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_taskSetupListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                              GALGAS_lstringlist & outOperand1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_taskSetupListAST * p = (cCollectionElement_taskSetupListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_taskSetupListAST) ;
    outOperand0 = p->mObject.mProperty_mName ;
    outOperand1 = p->mObject.mProperty_mDependanceList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_taskSetupListAST::method_first (GALGAS_lstring & outOperand0,
                                            GALGAS_lstringlist & outOperand1,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_taskSetupListAST * p = (cCollectionElement_taskSetupListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_taskSetupListAST) ;
    outOperand0 = p->mObject.mProperty_mName ;
    outOperand1 = p->mObject.mProperty_mDependanceList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_taskSetupListAST::method_last (GALGAS_lstring & outOperand0,
                                           GALGAS_lstringlist & outOperand1,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_taskSetupListAST * p = (cCollectionElement_taskSetupListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_taskSetupListAST) ;
    outOperand0 = p->mObject.mProperty_mName ;
    outOperand1 = p->mObject.mProperty_mDependanceList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_taskSetupListAST GALGAS_taskSetupListAST::add_operation (const GALGAS_taskSetupListAST & inOperand,
                                                                C_Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_taskSetupListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_taskSetupListAST GALGAS_taskSetupListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_taskSetupListAST result = GALGAS_taskSetupListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_taskSetupListAST GALGAS_taskSetupListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_taskSetupListAST result = GALGAS_taskSetupListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_taskSetupListAST GALGAS_taskSetupListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_taskSetupListAST result = GALGAS_taskSetupListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_taskSetupListAST::plusAssign_operation (const GALGAS_taskSetupListAST inOperand,
                                                    C_Compiler * /* inCompiler */
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_taskSetupListAST::setter_setMNameAtIndex (GALGAS_lstring inOperand,
                                                      GALGAS_uint inIndex,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_taskSetupListAST * p = (cCollectionElement_taskSetupListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_taskSetupListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_taskSetupListAST::getter_mNameAtIndex (const GALGAS_uint & inIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_taskSetupListAST * p = (cCollectionElement_taskSetupListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_taskSetupListAST) ;
    result = p->mObject.mProperty_mName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_taskSetupListAST::setter_setMDependanceListAtIndex (GALGAS_lstringlist inOperand,
                                                                GALGAS_uint inIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_taskSetupListAST * p = (cCollectionElement_taskSetupListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_taskSetupListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mDependanceList = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_taskSetupListAST::getter_mDependanceListAtIndex (const GALGAS_uint & inIndex,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_taskSetupListAST * p = (cCollectionElement_taskSetupListAST *) attributes.ptr () ;
  GALGAS_lstringlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_taskSetupListAST) ;
    result = p->mObject.mProperty_mDependanceList ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_taskSetupListAST::cEnumerator_taskSetupListAST (const GALGAS_taskSetupListAST & inEnumeratedObject,
                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_taskSetupListAST_2D_element cEnumerator_taskSetupListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_taskSetupListAST * p = (const cCollectionElement_taskSetupListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_taskSetupListAST) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_taskSetupListAST::current_mName (LOCATION_ARGS) const {
  const cCollectionElement_taskSetupListAST * p = (const cCollectionElement_taskSetupListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_taskSetupListAST) ;
  return p->mObject.mProperty_mName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist cEnumerator_taskSetupListAST::current_mDependanceList (LOCATION_ARGS) const {
  const cCollectionElement_taskSetupListAST * p = (const cCollectionElement_taskSetupListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_taskSetupListAST) ;
  return p->mObject.mProperty_mDependanceList ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@taskSetupListAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_taskSetupListAST ("taskSetupListAST",
                                         NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_taskSetupListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_taskSetupListAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_taskSetupListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_taskSetupListAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_taskSetupListAST GALGAS_taskSetupListAST::extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_taskSetupListAST result ;
  const GALGAS_taskSetupListAST * p = (const GALGAS_taskSetupListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_taskSetupListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("taskSetupListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@syncInstructionBranchListAST' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_syncInstructionBranchListAST : public cCollectionElement {
  public : GALGAS_syncInstructionBranchListAST_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_syncInstructionBranchListAST (const GALGAS_guardedCommandAST & in_mGuardedCommand,
                                                            const GALGAS_instructionListAST & in_mInstructionList,
                                                            const GALGAS_location & in_mEndOfBranch
                                                            COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_syncInstructionBranchListAST (const GALGAS_syncInstructionBranchListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_syncInstructionBranchListAST::cCollectionElement_syncInstructionBranchListAST (const GALGAS_guardedCommandAST & in_mGuardedCommand,
                                                                                                  const GALGAS_instructionListAST & in_mInstructionList,
                                                                                                  const GALGAS_location & in_mEndOfBranch
                                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mGuardedCommand, in_mInstructionList, in_mEndOfBranch) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_syncInstructionBranchListAST::cCollectionElement_syncInstructionBranchListAST (const GALGAS_syncInstructionBranchListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mGuardedCommand, inElement.mProperty_mInstructionList, inElement.mProperty_mEndOfBranch) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_syncInstructionBranchListAST::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_syncInstructionBranchListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_syncInstructionBranchListAST (mObject.mProperty_mGuardedCommand, mObject.mProperty_mInstructionList, mObject.mProperty_mEndOfBranch COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_syncInstructionBranchListAST::description (C_String & ioString, const int32_t inIndentation) const {
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

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_syncInstructionBranchListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_syncInstructionBranchListAST * operand = (cCollectionElement_syncInstructionBranchListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_syncInstructionBranchListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syncInstructionBranchListAST::GALGAS_syncInstructionBranchListAST (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syncInstructionBranchListAST::GALGAS_syncInstructionBranchListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syncInstructionBranchListAST GALGAS_syncInstructionBranchListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_syncInstructionBranchListAST  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syncInstructionBranchListAST GALGAS_syncInstructionBranchListAST::constructor_listWithValue (const GALGAS_guardedCommandAST & inOperand0,
                                                                                                    const GALGAS_instructionListAST & inOperand1,
                                                                                                    const GALGAS_location & inOperand2
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_syncInstructionBranchListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_syncInstructionBranchListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_syncInstructionBranchListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_syncInstructionBranchListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                     const GALGAS_guardedCommandAST & in_mGuardedCommand,
                                                                     const GALGAS_instructionListAST & in_mInstructionList,
                                                                     const GALGAS_location & in_mEndOfBranch
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_syncInstructionBranchListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_syncInstructionBranchListAST (in_mGuardedCommand,
                                                                  in_mInstructionList,
                                                                  in_mEndOfBranch COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_syncInstructionBranchListAST::addAssign_operation (const GALGAS_guardedCommandAST & inOperand0,
                                                               const GALGAS_instructionListAST & inOperand1,
                                                               const GALGAS_location & inOperand2
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_syncInstructionBranchListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_syncInstructionBranchListAST::setter_append (GALGAS_syncInstructionBranchListAST_2D_element inElement,
                                                         C_Compiler * /* inCompiler */
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_syncInstructionBranchListAST (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_syncInstructionBranchListAST::setter_insertAtIndex (const GALGAS_guardedCommandAST inOperand0,
                                                                const GALGAS_instructionListAST inOperand1,
                                                                const GALGAS_location inOperand2,
                                                                const GALGAS_uint inInsertionIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_syncInstructionBranchListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_syncInstructionBranchListAST::setter_removeAtIndex (GALGAS_guardedCommandAST & outOperand0,
                                                                GALGAS_instructionListAST & outOperand1,
                                                                GALGAS_location & outOperand2,
                                                                const GALGAS_uint inRemoveIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_syncInstructionBranchListAST * p = (cCollectionElement_syncInstructionBranchListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_syncInstructionBranchListAST) ;
      outOperand0 = p->mObject.mProperty_mGuardedCommand ;
      outOperand1 = p->mObject.mProperty_mInstructionList ;
      outOperand2 = p->mObject.mProperty_mEndOfBranch ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_syncInstructionBranchListAST::setter_popFirst (GALGAS_guardedCommandAST & outOperand0,
                                                           GALGAS_instructionListAST & outOperand1,
                                                           GALGAS_location & outOperand2,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_syncInstructionBranchListAST * p = (cCollectionElement_syncInstructionBranchListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_syncInstructionBranchListAST) ;
    outOperand0 = p->mObject.mProperty_mGuardedCommand ;
    outOperand1 = p->mObject.mProperty_mInstructionList ;
    outOperand2 = p->mObject.mProperty_mEndOfBranch ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_syncInstructionBranchListAST::setter_popLast (GALGAS_guardedCommandAST & outOperand0,
                                                          GALGAS_instructionListAST & outOperand1,
                                                          GALGAS_location & outOperand2,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_syncInstructionBranchListAST * p = (cCollectionElement_syncInstructionBranchListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_syncInstructionBranchListAST) ;
    outOperand0 = p->mObject.mProperty_mGuardedCommand ;
    outOperand1 = p->mObject.mProperty_mInstructionList ;
    outOperand2 = p->mObject.mProperty_mEndOfBranch ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_syncInstructionBranchListAST::method_first (GALGAS_guardedCommandAST & outOperand0,
                                                        GALGAS_instructionListAST & outOperand1,
                                                        GALGAS_location & outOperand2,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_syncInstructionBranchListAST * p = (cCollectionElement_syncInstructionBranchListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_syncInstructionBranchListAST) ;
    outOperand0 = p->mObject.mProperty_mGuardedCommand ;
    outOperand1 = p->mObject.mProperty_mInstructionList ;
    outOperand2 = p->mObject.mProperty_mEndOfBranch ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_syncInstructionBranchListAST::method_last (GALGAS_guardedCommandAST & outOperand0,
                                                       GALGAS_instructionListAST & outOperand1,
                                                       GALGAS_location & outOperand2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_syncInstructionBranchListAST * p = (cCollectionElement_syncInstructionBranchListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_syncInstructionBranchListAST) ;
    outOperand0 = p->mObject.mProperty_mGuardedCommand ;
    outOperand1 = p->mObject.mProperty_mInstructionList ;
    outOperand2 = p->mObject.mProperty_mEndOfBranch ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syncInstructionBranchListAST GALGAS_syncInstructionBranchListAST::add_operation (const GALGAS_syncInstructionBranchListAST & inOperand,
                                                                                        C_Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_syncInstructionBranchListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syncInstructionBranchListAST GALGAS_syncInstructionBranchListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_syncInstructionBranchListAST result = GALGAS_syncInstructionBranchListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syncInstructionBranchListAST GALGAS_syncInstructionBranchListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_syncInstructionBranchListAST result = GALGAS_syncInstructionBranchListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syncInstructionBranchListAST GALGAS_syncInstructionBranchListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_syncInstructionBranchListAST result = GALGAS_syncInstructionBranchListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_syncInstructionBranchListAST::plusAssign_operation (const GALGAS_syncInstructionBranchListAST inOperand,
                                                                C_Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_syncInstructionBranchListAST::setter_setMGuardedCommandAtIndex (GALGAS_guardedCommandAST inOperand,
                                                                            GALGAS_uint inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_syncInstructionBranchListAST * p = (cCollectionElement_syncInstructionBranchListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_syncInstructionBranchListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mGuardedCommand = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_guardedCommandAST GALGAS_syncInstructionBranchListAST::getter_mGuardedCommandAtIndex (const GALGAS_uint & inIndex,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_syncInstructionBranchListAST * p = (cCollectionElement_syncInstructionBranchListAST *) attributes.ptr () ;
  GALGAS_guardedCommandAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_syncInstructionBranchListAST) ;
    result = p->mObject.mProperty_mGuardedCommand ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_syncInstructionBranchListAST::setter_setMInstructionListAtIndex (GALGAS_instructionListAST inOperand,
                                                                             GALGAS_uint inIndex,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_syncInstructionBranchListAST * p = (cCollectionElement_syncInstructionBranchListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_syncInstructionBranchListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInstructionList = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_instructionListAST GALGAS_syncInstructionBranchListAST::getter_mInstructionListAtIndex (const GALGAS_uint & inIndex,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_syncInstructionBranchListAST * p = (cCollectionElement_syncInstructionBranchListAST *) attributes.ptr () ;
  GALGAS_instructionListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_syncInstructionBranchListAST) ;
    result = p->mObject.mProperty_mInstructionList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_syncInstructionBranchListAST::setter_setMEndOfBranchAtIndex (GALGAS_location inOperand,
                                                                         GALGAS_uint inIndex,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_syncInstructionBranchListAST * p = (cCollectionElement_syncInstructionBranchListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_syncInstructionBranchListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mEndOfBranch = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_syncInstructionBranchListAST::getter_mEndOfBranchAtIndex (const GALGAS_uint & inIndex,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_syncInstructionBranchListAST * p = (cCollectionElement_syncInstructionBranchListAST *) attributes.ptr () ;
  GALGAS_location result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_syncInstructionBranchListAST) ;
    result = p->mObject.mProperty_mEndOfBranch ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_syncInstructionBranchListAST::cEnumerator_syncInstructionBranchListAST (const GALGAS_syncInstructionBranchListAST & inEnumeratedObject,
                                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syncInstructionBranchListAST_2D_element cEnumerator_syncInstructionBranchListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_syncInstructionBranchListAST * p = (const cCollectionElement_syncInstructionBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_syncInstructionBranchListAST) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_guardedCommandAST cEnumerator_syncInstructionBranchListAST::current_mGuardedCommand (LOCATION_ARGS) const {
  const cCollectionElement_syncInstructionBranchListAST * p = (const cCollectionElement_syncInstructionBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_syncInstructionBranchListAST) ;
  return p->mObject.mProperty_mGuardedCommand ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_instructionListAST cEnumerator_syncInstructionBranchListAST::current_mInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_syncInstructionBranchListAST * p = (const cCollectionElement_syncInstructionBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_syncInstructionBranchListAST) ;
  return p->mObject.mProperty_mInstructionList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cEnumerator_syncInstructionBranchListAST::current_mEndOfBranch (LOCATION_ARGS) const {
  const cCollectionElement_syncInstructionBranchListAST * p = (const cCollectionElement_syncInstructionBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_syncInstructionBranchListAST) ;
  return p->mObject.mProperty_mEndOfBranch ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@syncInstructionBranchListAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_syncInstructionBranchListAST ("syncInstructionBranchListAST",
                                                     NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_syncInstructionBranchListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syncInstructionBranchListAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_syncInstructionBranchListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_syncInstructionBranchListAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syncInstructionBranchListAST GALGAS_syncInstructionBranchListAST::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_syncInstructionBranchListAST result ;
  const GALGAS_syncInstructionBranchListAST * p = (const GALGAS_syncInstructionBranchListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_syncInstructionBranchListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syncInstructionBranchListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@taskListAST noteTypesInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_noteTypesInPrecedenceGraph (const GALGAS_taskListAST inObject,
                                                 GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_taskListAST temp_0 = inObject ;
  cEnumerator_taskListAST enumerator_4950 (temp_0, kENUMERATION_UP) ;
  while (enumerator_4950.hasCurrentObject ()) {
    cEnumerator_syncInstructionBranchListAST enumerator_4999 (enumerator_4950.current_mGuardedCommandList (HERE), kENUMERATION_UP) ;
    while (enumerator_4999.hasCurrentObject ()) {
      extensionMethod_noteInstructionListTypesInPrecedenceGraph (enumerator_4999.current (HERE).getter_mInstructionList (HERE), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 148)) ;
      enumerator_4999.gotoNextObject () ;
    }
    enumerator_4950.gotoNextObject () ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@taskListAST enterInContext'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_enterInContext (const GALGAS_taskListAST inObject,
                                     GALGAS_semanticContext & ioArgument_ioContext,
                                     GALGAS_declarationDecorationList & ioArgument_ioDecoratedDeclarationList,
                                     GALGAS_decoratedRegularRoutineList & ioArgument_ioDecoratedRoutineList,
                                     GALGAS_routineListIR & ioArgument_ioRoutineListIR,
                                     GALGAS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                     GALGAS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                     C_Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_taskListAST temp_0 = inObject ;
  GALGAS_taskListAST var_taskList_6233 = temp_0 ;
  GALGAS_taskListAST var_sortedTaskList_6270 = GALGAS_taskListAST::constructor_emptyList (SOURCE_FILE ("task-declaration.galgas", 175)) ;
  GALGAS_stringset var_handledTaskSet_6303 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("task-declaration.galgas", 176)) ;
  GALGAS_bool var_continue_6323 = GALGAS_bool (true) ;
  if (var_taskList_6233.getter_length (SOURCE_FILE ("task-declaration.galgas", 178)).isValid ()) {
    uint32_t variant_6337 = var_taskList_6233.getter_length (SOURCE_FILE ("task-declaration.galgas", 178)).uintValue () ;
    bool loop_6337 = true ;
    while (loop_6337) {
      GALGAS_bool test_1 = var_continue_6323 ;
      if (kBoolTrue == test_1.boolEnum ()) {
        test_1 = GALGAS_bool (kIsStrictSup, var_taskList_6233.getter_length (SOURCE_FILE ("task-declaration.galgas", 178)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
      }
      loop_6337 = test_1.isValid () ;
      if (loop_6337) {
        loop_6337 = test_1.boolValue () ;
      }
      if (loop_6337 && (0 == variant_6337)) {
        loop_6337 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("task-declaration.galgas", 178)) ;
      }
      if (loop_6337) {
        variant_6337 -- ;
        var_continue_6323 = GALGAS_bool (false) ;
        GALGAS_taskListAST var_candidateTaskList_6458 = GALGAS_taskListAST::constructor_emptyList (SOURCE_FILE ("task-declaration.galgas", 180)) ;
        GALGAS_uint var_idx_6475 = GALGAS_uint ((uint32_t) 0U) ;
        cEnumerator_taskListAST enumerator_6504 (var_taskList_6233, kENUMERATION_UP) ;
        while (enumerator_6504.hasCurrentObject ()) {
          GALGAS_bool var_allPrecedenceDefined_6538 = GALGAS_bool (true) ;
          cEnumerator_lstringlist enumerator_6603 (enumerator_6504.current (HERE).getter_mLowerPriorityTaskList (HERE), kENUMERATION_UP) ;
          bool bool_2 = var_allPrecedenceDefined_6538.isValidAndTrue () ;
          if (enumerator_6603.hasCurrentObject () && bool_2) {
            while (enumerator_6603.hasCurrentObject () && bool_2) {
              var_allPrecedenceDefined_6538 = var_handledTaskSet_6303.getter_hasKey (enumerator_6603.current_mValue (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("task-declaration.galgas", 185)) ;
              enumerator_6603.gotoNextObject () ;
              if (enumerator_6603.hasCurrentObject ()) {
                bool_2 = var_allPrecedenceDefined_6538.isValidAndTrue () ;
              }
            }
          }
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = var_allPrecedenceDefined_6538.boolEnum () ;
            if (kBoolTrue == test_3) {
              var_candidateTaskList_6458.addAssign_operation (enumerator_6504.current (HERE).getter_mTaskName (HERE), enumerator_6504.current (HERE).getter_mLowerPriorityTaskList (HERE), enumerator_6504.current (HERE).getter_mStackSize (HERE), enumerator_6504.current (HERE).getter_mTaskSetupListAST (HERE), enumerator_6504.current (HERE).getter_mTaskActivateListAST (HERE), enumerator_6504.current (HERE).getter_mTaskDeactivateListAST (HERE), enumerator_6504.current (HERE).getter_mGuardedCommandList (HERE), enumerator_6504.current (HERE).getter_mEndOfTaskDeclaration (HERE), enumerator_6504.current (HERE).getter_mAutoStart (HERE)  COMMA_SOURCE_FILE ("task-declaration.galgas", 188)) ;
              var_continue_6323 = GALGAS_bool (true) ;
              {
              GALGAS_lstring joker_7148_9 ; // Joker input parameter
              GALGAS_lstringlist joker_7148_8 ; // Joker input parameter
              GALGAS_lbigint joker_7148_7 ; // Joker input parameter
              GALGAS_taskSetupListAST joker_7148_6 ; // Joker input parameter
              GALGAS_taskSetupListAST joker_7148_5 ; // Joker input parameter
              GALGAS_taskSetupListAST joker_7148_4 ; // Joker input parameter
              GALGAS_syncInstructionBranchListAST joker_7148_3 ; // Joker input parameter
              GALGAS_location joker_7148_2 ; // Joker input parameter
              GALGAS_bool joker_7148_1 ; // Joker input parameter
              var_taskList_6233.setter_removeAtIndex (joker_7148_9, joker_7148_8, joker_7148_7, joker_7148_6, joker_7148_5, joker_7148_4, joker_7148_3, joker_7148_2, joker_7148_1, var_idx_6475, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 199)) ;
              }
            }
          }
          if (kBoolFalse == test_3) {
            var_idx_6475 = var_idx_6475.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 201)) ;
          }
          enumerator_6504.gotoNextObject () ;
        }
        enumGalgasBool test_4 = kBoolTrue ;
        if (kBoolTrue == test_4) {
          GALGAS_bool test_5 = GALGAS_bool (gOption_omnibus_5F_options_taskStrictPriorityOrder.getter_value ()) ;
          if (kBoolTrue == test_5.boolEnum ()) {
            test_5 = GALGAS_bool (kIsStrictSup, var_candidateTaskList_6458.getter_length (SOURCE_FILE ("task-declaration.galgas", 204)).objectCompare (GALGAS_uint ((uint32_t) 1U))) ;
          }
          test_4 = test_5.boolEnum () ;
          if (kBoolTrue == test_4) {
            cEnumerator_taskListAST enumerator_7346 (var_candidateTaskList_6458, kENUMERATION_UP) ;
            while (enumerator_7346.hasCurrentObject ()) {
              TC_Array <C_FixItDescription> fixItArray6 ;
              inCompiler->emitSemanticError (enumerator_7346.current (HERE).getter_mTaskName (HERE).getter_location (SOURCE_FILE ("task-declaration.galgas", 206)), GALGAS_string ("this task does not respect a strict priority order"), fixItArray6  COMMA_SOURCE_FILE ("task-declaration.galgas", 206)) ;
              enumerator_7346.gotoNextObject () ;
            }
          }
        }
        enumGalgasBool test_7 = kBoolTrue ;
        if (kBoolTrue == test_7) {
          test_7 = GALGAS_bool (kIsStrictSup, var_candidateTaskList_6458.getter_length (SOURCE_FILE ("task-declaration.galgas", 209)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
          if (kBoolTrue == test_7) {
            var_continue_6323 = GALGAS_bool (true) ;
            cEnumerator_taskListAST enumerator_7552 (var_candidateTaskList_6458, kENUMERATION_UP) ;
            while (enumerator_7552.hasCurrentObject ()) {
              var_handledTaskSet_6303.addAssign_operation (enumerator_7552.current (HERE).getter_mTaskName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("task-declaration.galgas", 212)) ;
              enumerator_7552.gotoNextObject () ;
            }
            var_sortedTaskList_6270.plusAssign_operation(var_candidateTaskList_6458, inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 214)) ;
          }
        }
      }
    }
  }
  cEnumerator_taskListAST enumerator_7736 (var_taskList_6233, kENUMERATION_UP) ;
  while (enumerator_7736.hasCurrentObject ()) {
    TC_Array <C_FixItDescription> fixItArray8 ;
    inCompiler->emitSemanticError (enumerator_7736.current_mTaskName (HERE).getter_location (SOURCE_FILE ("task-declaration.galgas", 219)), GALGAS_string ("this task is out of priority order"), fixItArray8  COMMA_SOURCE_FILE ("task-declaration.galgas", 219)) ;
    enumerator_7736.gotoNextObject () ;
  }
  GALGAS_decoratedTaskList var_decoratedTaskList_7843 = GALGAS_decoratedTaskList::constructor_emptyList (SOURCE_FILE ("task-declaration.galgas", 222)) ;
  cEnumerator_taskListAST enumerator_7877 (var_sortedTaskList_6270, kENUMERATION_UP) ;
  GALGAS_uint index_7854 ((uint32_t) 0) ;
  while (enumerator_7877.hasCurrentObject ()) {
    {
    GALGAS_lstring joker_8209 ; // Joker input parameter
    extensionSetter_addFunctionWithoutArgument (ioArgument_ioContext.mProperty_mRoutineMap, enumerator_7877.current (HERE).getter_mTaskName (HERE).getter_string (SOURCE_FILE ("task-declaration.galgas", 226)), enumerator_7877.current (HERE).getter_mTaskName (HERE).getter_string (SOURCE_FILE ("task-declaration.galgas", 227)), GALGAS_lstring::constructor_new (GALGAS_string ("activate"), enumerator_7877.current (HERE).getter_mTaskName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("task-declaration.galgas", 228)), GALGAS_mode::constructor_safeUserMode (SOURCE_FILE ("task-declaration.galgas", 229)), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("task-declaration.galgas", 230)), joker_8209, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 225)) ;
    }
    GALGAS_string var_assemblerTaskName_8242 = enumerator_7877.current (HERE).getter_mTaskName (HERE).getter_string (HERE).getter_assemblerRepresentation (SOURCE_FILE ("task-declaration.galgas", 233)) ;
    GALGAS_string var_activateTaskCallName_8314 = function_llvmNameForServiceCall (function_llvmNameForActivateTask (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 234)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 234)) ;
    ioArgument_ioRoutineListIR.addAssign_operation (GALGAS_taskActivateFunctionIR::constructor_new (function_routineMangledNameFromAST (enumerator_7877.current (HERE).getter_mTaskName (HERE).getter_string (SOURCE_FILE ("task-declaration.galgas", 236)), GALGAS_string ("activate").getter_nowhere (SOURCE_FILE ("task-declaration.galgas", 236)), GALGAS_routineFormalArgumentListAST::constructor_emptyList (SOURCE_FILE ("task-declaration.galgas", 236)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 236)), GALGAS_bool (false), GALGAS_bool (false), var_assemblerTaskName_8242, var_activateTaskCallName_8314, index_7854  COMMA_SOURCE_FILE ("task-declaration.galgas", 235))  COMMA_SOURCE_FILE ("task-declaration.galgas", 235)) ;
    GALGAS_instructionListAST var_taskListInstructionList_8818 = GALGAS_instructionListAST::constructor_emptyList (SOURCE_FILE ("task-declaration.galgas", 245)) ;
    enumGalgasBool test_9 = kBoolTrue ;
    if (kBoolTrue == test_9) {
      test_9 = GALGAS_bool (kIsStrictSup, enumerator_7877.current (HERE).getter_mGuardedCommandList (HERE).getter_length (SOURCE_FILE ("task-declaration.galgas", 246)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_9) {
        GALGAS_syncInstructionAST var_syncInstruction_8899 = GALGAS_syncInstructionAST::constructor_new (enumerator_7877.current (HERE).getter_mTaskName (HERE).getter_location (HERE), enumerator_7877.current (HERE).getter_mGuardedCommandList (HERE), enumerator_7877.current (HERE).getter_mTaskName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("task-declaration.galgas", 247)) ;
        var_taskListInstructionList_8818.addAssign_operation (var_syncInstruction_8899  COMMA_SOURCE_FILE ("task-declaration.galgas", 248)) ;
      }
    }
    GALGAS_lstring var_routineMangledName_9088 = function_routineMangledNameFromAST (enumerator_7877.current (HERE).getter_mTaskName (HERE).getter_string (SOURCE_FILE ("task-declaration.galgas", 250)), function_llvmNameForTaskLoopFunction (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 250)).getter_nowhere (SOURCE_FILE ("task-declaration.galgas", 250)), GALGAS_routineFormalArgumentListAST::constructor_emptyList (SOURCE_FILE ("task-declaration.galgas", 250)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 250)) ;
    ioArgument_ioDecoratedRoutineList.addAssign_operation (enumerator_7877.current (HERE).getter_mTaskName (HERE), GALGAS_mode::constructor_userMode (SOURCE_FILE ("task-declaration.galgas", 253)), GALGAS_bool (true), GALGAS_routineKind::constructor_function (SOURCE_FILE ("task-declaration.galgas", 255)), GALGAS_bool (true), GALGAS_bool (false), GALGAS_routineAttributes::constructor_mutating (SOURCE_FILE ("task-declaration.galgas", 258)), var_routineMangledName_9088, GALGAS_routineFormalArgumentListAST::constructor_emptyList (SOURCE_FILE ("task-declaration.galgas", 260)), GALGAS_bool (true), var_taskListInstructionList_8818, enumerator_7877.current (HERE).getter_mTaskName (HERE).getter_location (HERE), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("task-declaration.galgas", 264))  COMMA_SOURCE_FILE ("task-declaration.galgas", 251)) ;
    GALGAS_omnibusType var_taskType_9703 ;
    ioArgument_ioContext.getter_mTypeMap (HERE).method_searchKey (enumerator_7877.current (HERE).getter_mTaskName (HERE), var_taskType_9703, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 265)) ;
    {
    extensionSetter_insertTask (ioArgument_ioContext.mProperty_mValuedObjectMap, enumerator_7877.current (HERE).getter_mTaskName (HERE), var_taskType_9703, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 266)) ;
    }
    GALGAS_sortedOperandIRList var_initialValueList_9801 = GALGAS_sortedOperandIRList::constructor_emptySortedList (SOURCE_FILE ("task-declaration.galgas", 267)) ;
    GALGAS_lstring var_typeName_9844 = GALGAS_lstring::constructor_new (var_taskType_9703.getter_omnibusTypeDescriptionName (HERE), enumerator_7877.current (HERE).getter_mTaskName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("task-declaration.galgas", 268)) ;
    GALGAS_constructorMap var_constructorMap_9998 ;
    ioArgument_ioContext.getter_mTypeConstructorMap (HERE).method_searchKey (var_typeName_9844, var_constructorMap_9998, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 269)) ;
    cEnumerator_constructorMap enumerator_10041 (var_constructorMap_9998, kENUMERATION_UP) ;
    while (enumerator_10041.hasCurrentObject ()) {
      enumerator_10041.current_mInitValue (HERE).method_structure (var_initialValueList_9801, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 272)) ;
      enumerator_10041.gotoNextObject () ;
    }
    ioArgument_ioContext.mProperty_mGlobalTaskVariableList.addAssign_operation (enumerator_7877.current (HERE).getter_mTaskName (HERE).getter_string (HERE), enumerator_7877.current (HERE).getter_mTaskName (HERE).getter_string (HERE), GALGAS_objectIR::constructor_llvmStructureValue (var_taskType_9703, var_initialValueList_9801  COMMA_SOURCE_FILE ("task-declaration.galgas", 277))  COMMA_SOURCE_FILE ("task-declaration.galgas", 274)) ;
    var_decoratedTaskList_7843.addAssign_operation (enumerator_7877.current (HERE).getter_mTaskName (HERE), enumerator_7877.current (HERE).getter_mStackSize (HERE), enumerator_7877.current (HERE).getter_mTaskSetupListAST (HERE), enumerator_7877.current (HERE).getter_mTaskActivateListAST (HERE), enumerator_7877.current (HERE).getter_mTaskDeactivateListAST (HERE), enumerator_7877.current (HERE).getter_mEndOfTaskDeclaration (HERE), enumerator_7877.current (HERE).getter_mAutoStart (HERE)  COMMA_SOURCE_FILE ("task-declaration.galgas", 279)) ;
    enumerator_7877.gotoNextObject () ;
    index_7854.increment_operation (inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 223)) ;
  }
  ioArgument_ioDecoratedDeclarationList.addAssign_operation (GALGAS_decoratedTaskListDeclaration::constructor_new (var_decoratedTaskList_7843  COMMA_SOURCE_FILE ("task-declaration.galgas", 289))  COMMA_SOURCE_FILE ("task-declaration.galgas", 289)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@decoratedTaskList' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_decoratedTaskList : public cCollectionElement {
  public : GALGAS_decoratedTaskList_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_decoratedTaskList (const GALGAS_lstring & in_mTaskName,
                                                 const GALGAS_lbigint & in_mStackSize,
                                                 const GALGAS_taskSetupListAST & in_mTaskSetupListAST,
                                                 const GALGAS_taskSetupListAST & in_mTaskActivateListAST,
                                                 const GALGAS_taskSetupListAST & in_mTaskDeactivateListAST,
                                                 const GALGAS_location & in_mEndOfTaskDeclaration,
                                                 const GALGAS_bool & in_mAutoStart
                                                 COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_decoratedTaskList (const GALGAS_decoratedTaskList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_decoratedTaskList::cCollectionElement_decoratedTaskList (const GALGAS_lstring & in_mTaskName,
                                                                            const GALGAS_lbigint & in_mStackSize,
                                                                            const GALGAS_taskSetupListAST & in_mTaskSetupListAST,
                                                                            const GALGAS_taskSetupListAST & in_mTaskActivateListAST,
                                                                            const GALGAS_taskSetupListAST & in_mTaskDeactivateListAST,
                                                                            const GALGAS_location & in_mEndOfTaskDeclaration,
                                                                            const GALGAS_bool & in_mAutoStart
                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mTaskName, in_mStackSize, in_mTaskSetupListAST, in_mTaskActivateListAST, in_mTaskDeactivateListAST, in_mEndOfTaskDeclaration, in_mAutoStart) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_decoratedTaskList::cCollectionElement_decoratedTaskList (const GALGAS_decoratedTaskList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mTaskName, inElement.mProperty_mStackSize, inElement.mProperty_mTaskSetupListAST, inElement.mProperty_mTaskActivateListAST, inElement.mProperty_mTaskDeactivateListAST, inElement.mProperty_mEndOfTaskDeclaration, inElement.mProperty_mAutoStart) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_decoratedTaskList::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_decoratedTaskList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_decoratedTaskList (mObject.mProperty_mTaskName, mObject.mProperty_mStackSize, mObject.mProperty_mTaskSetupListAST, mObject.mProperty_mTaskActivateListAST, mObject.mProperty_mTaskDeactivateListAST, mObject.mProperty_mEndOfTaskDeclaration, mObject.mProperty_mAutoStart COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_decoratedTaskList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTaskName" ":" ;
  mObject.mProperty_mTaskName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mStackSize" ":" ;
  mObject.mProperty_mStackSize.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTaskSetupListAST" ":" ;
  mObject.mProperty_mTaskSetupListAST.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTaskActivateListAST" ":" ;
  mObject.mProperty_mTaskActivateListAST.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTaskDeactivateListAST" ":" ;
  mObject.mProperty_mTaskDeactivateListAST.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEndOfTaskDeclaration" ":" ;
  mObject.mProperty_mEndOfTaskDeclaration.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAutoStart" ":" ;
  mObject.mProperty_mAutoStart.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_decoratedTaskList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_decoratedTaskList * operand = (cCollectionElement_decoratedTaskList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_decoratedTaskList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedTaskList::GALGAS_decoratedTaskList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedTaskList::GALGAS_decoratedTaskList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedTaskList GALGAS_decoratedTaskList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_decoratedTaskList  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedTaskList GALGAS_decoratedTaskList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                              const GALGAS_lbigint & inOperand1,
                                                                              const GALGAS_taskSetupListAST & inOperand2,
                                                                              const GALGAS_taskSetupListAST & inOperand3,
                                                                              const GALGAS_taskSetupListAST & inOperand4,
                                                                              const GALGAS_location & inOperand5,
                                                                              const GALGAS_bool & inOperand6
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_decoratedTaskList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid ()) {
    result = GALGAS_decoratedTaskList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_decoratedTaskList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_decoratedTaskList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                          const GALGAS_lstring & in_mTaskName,
                                                          const GALGAS_lbigint & in_mStackSize,
                                                          const GALGAS_taskSetupListAST & in_mTaskSetupListAST,
                                                          const GALGAS_taskSetupListAST & in_mTaskActivateListAST,
                                                          const GALGAS_taskSetupListAST & in_mTaskDeactivateListAST,
                                                          const GALGAS_location & in_mEndOfTaskDeclaration,
                                                          const GALGAS_bool & in_mAutoStart
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_decoratedTaskList * p = NULL ;
  macroMyNew (p, cCollectionElement_decoratedTaskList (in_mTaskName,
                                                       in_mStackSize,
                                                       in_mTaskSetupListAST,
                                                       in_mTaskActivateListAST,
                                                       in_mTaskDeactivateListAST,
                                                       in_mEndOfTaskDeclaration,
                                                       in_mAutoStart COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_decoratedTaskList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                    const GALGAS_lbigint & inOperand1,
                                                    const GALGAS_taskSetupListAST & inOperand2,
                                                    const GALGAS_taskSetupListAST & inOperand3,
                                                    const GALGAS_taskSetupListAST & inOperand4,
                                                    const GALGAS_location & inOperand5,
                                                    const GALGAS_bool & inOperand6
                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_decoratedTaskList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_decoratedTaskList::setter_append (GALGAS_decoratedTaskList_2D_element inElement,
                                              C_Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_decoratedTaskList (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_decoratedTaskList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                     const GALGAS_lbigint inOperand1,
                                                     const GALGAS_taskSetupListAST inOperand2,
                                                     const GALGAS_taskSetupListAST inOperand3,
                                                     const GALGAS_taskSetupListAST inOperand4,
                                                     const GALGAS_location inOperand5,
                                                     const GALGAS_bool inOperand6,
                                                     const GALGAS_uint inInsertionIndex,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_decoratedTaskList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_decoratedTaskList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                     GALGAS_lbigint & outOperand1,
                                                     GALGAS_taskSetupListAST & outOperand2,
                                                     GALGAS_taskSetupListAST & outOperand3,
                                                     GALGAS_taskSetupListAST & outOperand4,
                                                     GALGAS_location & outOperand5,
                                                     GALGAS_bool & outOperand6,
                                                     const GALGAS_uint inRemoveIndex,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_decoratedTaskList * p = (cCollectionElement_decoratedTaskList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      outOperand4.drop () ;
      outOperand5.drop () ;
      outOperand6.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_decoratedTaskList) ;
      outOperand0 = p->mObject.mProperty_mTaskName ;
      outOperand1 = p->mObject.mProperty_mStackSize ;
      outOperand2 = p->mObject.mProperty_mTaskSetupListAST ;
      outOperand3 = p->mObject.mProperty_mTaskActivateListAST ;
      outOperand4 = p->mObject.mProperty_mTaskDeactivateListAST ;
      outOperand5 = p->mObject.mProperty_mEndOfTaskDeclaration ;
      outOperand6 = p->mObject.mProperty_mAutoStart ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_decoratedTaskList::setter_popFirst (GALGAS_lstring & outOperand0,
                                                GALGAS_lbigint & outOperand1,
                                                GALGAS_taskSetupListAST & outOperand2,
                                                GALGAS_taskSetupListAST & outOperand3,
                                                GALGAS_taskSetupListAST & outOperand4,
                                                GALGAS_location & outOperand5,
                                                GALGAS_bool & outOperand6,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_decoratedTaskList * p = (cCollectionElement_decoratedTaskList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_decoratedTaskList) ;
    outOperand0 = p->mObject.mProperty_mTaskName ;
    outOperand1 = p->mObject.mProperty_mStackSize ;
    outOperand2 = p->mObject.mProperty_mTaskSetupListAST ;
    outOperand3 = p->mObject.mProperty_mTaskActivateListAST ;
    outOperand4 = p->mObject.mProperty_mTaskDeactivateListAST ;
    outOperand5 = p->mObject.mProperty_mEndOfTaskDeclaration ;
    outOperand6 = p->mObject.mProperty_mAutoStart ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_decoratedTaskList::setter_popLast (GALGAS_lstring & outOperand0,
                                               GALGAS_lbigint & outOperand1,
                                               GALGAS_taskSetupListAST & outOperand2,
                                               GALGAS_taskSetupListAST & outOperand3,
                                               GALGAS_taskSetupListAST & outOperand4,
                                               GALGAS_location & outOperand5,
                                               GALGAS_bool & outOperand6,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_decoratedTaskList * p = (cCollectionElement_decoratedTaskList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_decoratedTaskList) ;
    outOperand0 = p->mObject.mProperty_mTaskName ;
    outOperand1 = p->mObject.mProperty_mStackSize ;
    outOperand2 = p->mObject.mProperty_mTaskSetupListAST ;
    outOperand3 = p->mObject.mProperty_mTaskActivateListAST ;
    outOperand4 = p->mObject.mProperty_mTaskDeactivateListAST ;
    outOperand5 = p->mObject.mProperty_mEndOfTaskDeclaration ;
    outOperand6 = p->mObject.mProperty_mAutoStart ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_decoratedTaskList::method_first (GALGAS_lstring & outOperand0,
                                             GALGAS_lbigint & outOperand1,
                                             GALGAS_taskSetupListAST & outOperand2,
                                             GALGAS_taskSetupListAST & outOperand3,
                                             GALGAS_taskSetupListAST & outOperand4,
                                             GALGAS_location & outOperand5,
                                             GALGAS_bool & outOperand6,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_decoratedTaskList * p = (cCollectionElement_decoratedTaskList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_decoratedTaskList) ;
    outOperand0 = p->mObject.mProperty_mTaskName ;
    outOperand1 = p->mObject.mProperty_mStackSize ;
    outOperand2 = p->mObject.mProperty_mTaskSetupListAST ;
    outOperand3 = p->mObject.mProperty_mTaskActivateListAST ;
    outOperand4 = p->mObject.mProperty_mTaskDeactivateListAST ;
    outOperand5 = p->mObject.mProperty_mEndOfTaskDeclaration ;
    outOperand6 = p->mObject.mProperty_mAutoStart ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_decoratedTaskList::method_last (GALGAS_lstring & outOperand0,
                                            GALGAS_lbigint & outOperand1,
                                            GALGAS_taskSetupListAST & outOperand2,
                                            GALGAS_taskSetupListAST & outOperand3,
                                            GALGAS_taskSetupListAST & outOperand4,
                                            GALGAS_location & outOperand5,
                                            GALGAS_bool & outOperand6,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_decoratedTaskList * p = (cCollectionElement_decoratedTaskList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_decoratedTaskList) ;
    outOperand0 = p->mObject.mProperty_mTaskName ;
    outOperand1 = p->mObject.mProperty_mStackSize ;
    outOperand2 = p->mObject.mProperty_mTaskSetupListAST ;
    outOperand3 = p->mObject.mProperty_mTaskActivateListAST ;
    outOperand4 = p->mObject.mProperty_mTaskDeactivateListAST ;
    outOperand5 = p->mObject.mProperty_mEndOfTaskDeclaration ;
    outOperand6 = p->mObject.mProperty_mAutoStart ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedTaskList GALGAS_decoratedTaskList::add_operation (const GALGAS_decoratedTaskList & inOperand,
                                                                  C_Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_decoratedTaskList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedTaskList GALGAS_decoratedTaskList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_decoratedTaskList result = GALGAS_decoratedTaskList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedTaskList GALGAS_decoratedTaskList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_decoratedTaskList result = GALGAS_decoratedTaskList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedTaskList GALGAS_decoratedTaskList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_decoratedTaskList result = GALGAS_decoratedTaskList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_decoratedTaskList::plusAssign_operation (const GALGAS_decoratedTaskList inOperand,
                                                     C_Compiler * /* inCompiler */
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_decoratedTaskList::setter_setMTaskNameAtIndex (GALGAS_lstring inOperand,
                                                           GALGAS_uint inIndex,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_decoratedTaskList * p = (cCollectionElement_decoratedTaskList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_decoratedTaskList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mTaskName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_decoratedTaskList::getter_mTaskNameAtIndex (const GALGAS_uint & inIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_decoratedTaskList * p = (cCollectionElement_decoratedTaskList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_decoratedTaskList) ;
    result = p->mObject.mProperty_mTaskName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_decoratedTaskList::setter_setMStackSizeAtIndex (GALGAS_lbigint inOperand,
                                                            GALGAS_uint inIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_decoratedTaskList * p = (cCollectionElement_decoratedTaskList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_decoratedTaskList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mStackSize = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lbigint GALGAS_decoratedTaskList::getter_mStackSizeAtIndex (const GALGAS_uint & inIndex,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_decoratedTaskList * p = (cCollectionElement_decoratedTaskList *) attributes.ptr () ;
  GALGAS_lbigint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_decoratedTaskList) ;
    result = p->mObject.mProperty_mStackSize ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_decoratedTaskList::setter_setMTaskSetupListASTAtIndex (GALGAS_taskSetupListAST inOperand,
                                                                   GALGAS_uint inIndex,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_decoratedTaskList * p = (cCollectionElement_decoratedTaskList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_decoratedTaskList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mTaskSetupListAST = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_taskSetupListAST GALGAS_decoratedTaskList::getter_mTaskSetupListASTAtIndex (const GALGAS_uint & inIndex,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_decoratedTaskList * p = (cCollectionElement_decoratedTaskList *) attributes.ptr () ;
  GALGAS_taskSetupListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_decoratedTaskList) ;
    result = p->mObject.mProperty_mTaskSetupListAST ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_decoratedTaskList::setter_setMTaskActivateListASTAtIndex (GALGAS_taskSetupListAST inOperand,
                                                                      GALGAS_uint inIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_decoratedTaskList * p = (cCollectionElement_decoratedTaskList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_decoratedTaskList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mTaskActivateListAST = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_taskSetupListAST GALGAS_decoratedTaskList::getter_mTaskActivateListASTAtIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_decoratedTaskList * p = (cCollectionElement_decoratedTaskList *) attributes.ptr () ;
  GALGAS_taskSetupListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_decoratedTaskList) ;
    result = p->mObject.mProperty_mTaskActivateListAST ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_decoratedTaskList::setter_setMTaskDeactivateListASTAtIndex (GALGAS_taskSetupListAST inOperand,
                                                                        GALGAS_uint inIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_decoratedTaskList * p = (cCollectionElement_decoratedTaskList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_decoratedTaskList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mTaskDeactivateListAST = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_taskSetupListAST GALGAS_decoratedTaskList::getter_mTaskDeactivateListASTAtIndex (const GALGAS_uint & inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_decoratedTaskList * p = (cCollectionElement_decoratedTaskList *) attributes.ptr () ;
  GALGAS_taskSetupListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_decoratedTaskList) ;
    result = p->mObject.mProperty_mTaskDeactivateListAST ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_decoratedTaskList::setter_setMEndOfTaskDeclarationAtIndex (GALGAS_location inOperand,
                                                                       GALGAS_uint inIndex,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_decoratedTaskList * p = (cCollectionElement_decoratedTaskList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_decoratedTaskList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mEndOfTaskDeclaration = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_decoratedTaskList::getter_mEndOfTaskDeclarationAtIndex (const GALGAS_uint & inIndex,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_decoratedTaskList * p = (cCollectionElement_decoratedTaskList *) attributes.ptr () ;
  GALGAS_location result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_decoratedTaskList) ;
    result = p->mObject.mProperty_mEndOfTaskDeclaration ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_decoratedTaskList::setter_setMAutoStartAtIndex (GALGAS_bool inOperand,
                                                            GALGAS_uint inIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_decoratedTaskList * p = (cCollectionElement_decoratedTaskList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_decoratedTaskList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mAutoStart = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_decoratedTaskList::getter_mAutoStartAtIndex (const GALGAS_uint & inIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_decoratedTaskList * p = (cCollectionElement_decoratedTaskList *) attributes.ptr () ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_decoratedTaskList) ;
    result = p->mObject.mProperty_mAutoStart ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_decoratedTaskList::cEnumerator_decoratedTaskList (const GALGAS_decoratedTaskList & inEnumeratedObject,
                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedTaskList_2D_element cEnumerator_decoratedTaskList::current (LOCATION_ARGS) const {
  const cCollectionElement_decoratedTaskList * p = (const cCollectionElement_decoratedTaskList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_decoratedTaskList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_decoratedTaskList::current_mTaskName (LOCATION_ARGS) const {
  const cCollectionElement_decoratedTaskList * p = (const cCollectionElement_decoratedTaskList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_decoratedTaskList) ;
  return p->mObject.mProperty_mTaskName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lbigint cEnumerator_decoratedTaskList::current_mStackSize (LOCATION_ARGS) const {
  const cCollectionElement_decoratedTaskList * p = (const cCollectionElement_decoratedTaskList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_decoratedTaskList) ;
  return p->mObject.mProperty_mStackSize ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_taskSetupListAST cEnumerator_decoratedTaskList::current_mTaskSetupListAST (LOCATION_ARGS) const {
  const cCollectionElement_decoratedTaskList * p = (const cCollectionElement_decoratedTaskList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_decoratedTaskList) ;
  return p->mObject.mProperty_mTaskSetupListAST ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_taskSetupListAST cEnumerator_decoratedTaskList::current_mTaskActivateListAST (LOCATION_ARGS) const {
  const cCollectionElement_decoratedTaskList * p = (const cCollectionElement_decoratedTaskList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_decoratedTaskList) ;
  return p->mObject.mProperty_mTaskActivateListAST ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_taskSetupListAST cEnumerator_decoratedTaskList::current_mTaskDeactivateListAST (LOCATION_ARGS) const {
  const cCollectionElement_decoratedTaskList * p = (const cCollectionElement_decoratedTaskList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_decoratedTaskList) ;
  return p->mObject.mProperty_mTaskDeactivateListAST ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cEnumerator_decoratedTaskList::current_mEndOfTaskDeclaration (LOCATION_ARGS) const {
  const cCollectionElement_decoratedTaskList * p = (const cCollectionElement_decoratedTaskList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_decoratedTaskList) ;
  return p->mObject.mProperty_mEndOfTaskDeclaration ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_decoratedTaskList::current_mAutoStart (LOCATION_ARGS) const {
  const cCollectionElement_decoratedTaskList * p = (const cCollectionElement_decoratedTaskList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_decoratedTaskList) ;
  return p->mObject.mProperty_mAutoStart ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@decoratedTaskList type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_decoratedTaskList ("decoratedTaskList",
                                          NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_decoratedTaskList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedTaskList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_decoratedTaskList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_decoratedTaskList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedTaskList GALGAS_decoratedTaskList::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_decoratedTaskList result ;
  const GALGAS_decoratedTaskList * p = (const GALGAS_decoratedTaskList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_decoratedTaskList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("decoratedTaskList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_decoratedTaskListDeclaration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_decoratedTaskListDeclaration * p = (const cPtr_decoratedTaskListDeclaration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_decoratedTaskListDeclaration) ;
  if (kOperandEqual == result) {
    result = mProperty_mTaskList.objectCompare (p->mProperty_mTaskList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_decoratedTaskListDeclaration::objectCompare (const GALGAS_decoratedTaskListDeclaration & inOperand) const {
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedTaskListDeclaration::GALGAS_decoratedTaskListDeclaration (void) :
GALGAS_abstractDecoratedDeclaration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedTaskListDeclaration GALGAS_decoratedTaskListDeclaration::constructor_default (LOCATION_ARGS) {
  return GALGAS_decoratedTaskListDeclaration::constructor_new (GALGAS_decoratedTaskList::constructor_emptyList (HERE)
                                                               COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedTaskListDeclaration::GALGAS_decoratedTaskListDeclaration (const cPtr_decoratedTaskListDeclaration * inSourcePtr) :
GALGAS_abstractDecoratedDeclaration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_decoratedTaskListDeclaration) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedTaskListDeclaration GALGAS_decoratedTaskListDeclaration::constructor_new (const GALGAS_decoratedTaskList & inAttribute_mTaskList
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_decoratedTaskListDeclaration result ;
  if (inAttribute_mTaskList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_decoratedTaskListDeclaration (inAttribute_mTaskList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedTaskList GALGAS_decoratedTaskListDeclaration::getter_mTaskList (UNUSED_LOCATION_ARGS) const {
  GALGAS_decoratedTaskList result ;
  if (NULL != mObjectPtr) {
    const cPtr_decoratedTaskListDeclaration * p = (const cPtr_decoratedTaskListDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedTaskListDeclaration) ;
    result = p->mProperty_mTaskList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedTaskList cPtr_decoratedTaskListDeclaration::getter_mTaskList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTaskList ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_decoratedTaskListDeclaration::setter_setMTaskList (GALGAS_decoratedTaskList inValue
                                                               COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_decoratedTaskListDeclaration * p = (cPtr_decoratedTaskListDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedTaskListDeclaration) ;
    p->mProperty_mTaskList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_decoratedTaskListDeclaration::setter_setMTaskList (GALGAS_decoratedTaskList inValue
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mTaskList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @decoratedTaskListDeclaration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_decoratedTaskListDeclaration::cPtr_decoratedTaskListDeclaration (const GALGAS_decoratedTaskList & in_mTaskList
                                                                      COMMA_LOCATION_ARGS) :
cPtr_abstractDecoratedDeclaration (THERE),
mProperty_mTaskList (in_mTaskList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_decoratedTaskListDeclaration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedTaskListDeclaration ;
}

void cPtr_decoratedTaskListDeclaration::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "[@decoratedTaskListDeclaration:" ;
  mProperty_mTaskList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_decoratedTaskListDeclaration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_decoratedTaskListDeclaration (mProperty_mTaskList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@decoratedTaskListDeclaration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_decoratedTaskListDeclaration ("decoratedTaskListDeclaration",
                                                     & kTypeDescriptor_GALGAS_abstractDecoratedDeclaration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_decoratedTaskListDeclaration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedTaskListDeclaration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_decoratedTaskListDeclaration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_decoratedTaskListDeclaration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedTaskListDeclaration GALGAS_decoratedTaskListDeclaration::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_decoratedTaskListDeclaration result ;
  const GALGAS_decoratedTaskListDeclaration * p = (const GALGAS_decoratedTaskListDeclaration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_decoratedTaskListDeclaration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("decoratedTaskListDeclaration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_taskMapIR::cMapElement_taskMapIR (const GALGAS_lstring & inKey,
                                              const GALGAS_omnibusType & in_mTaskType,
                                              const GALGAS_uint & in_mPriority,
                                              const GALGAS_bigint & in_mStackSize,
                                              const GALGAS_stringlist & in_mSetupOrderedList,
                                              const GALGAS_stringlist & in_mActivateOrderedList,
                                              const GALGAS_stringlist & in_mDeactivateOrderedList,
                                              const GALGAS_uint & in_mTaskNameStringIndex,
                                              const GALGAS_bool & in_mActivate
                                              COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mTaskType (in_mTaskType),
mProperty_mPriority (in_mPriority),
mProperty_mStackSize (in_mStackSize),
mProperty_mSetupOrderedList (in_mSetupOrderedList),
mProperty_mActivateOrderedList (in_mActivateOrderedList),
mProperty_mDeactivateOrderedList (in_mDeactivateOrderedList),
mProperty_mTaskNameStringIndex (in_mTaskNameStringIndex),
mProperty_mActivate (in_mActivate) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_taskMapIR::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mTaskType.isValid () && mProperty_mPriority.isValid () && mProperty_mStackSize.isValid () && mProperty_mSetupOrderedList.isValid () && mProperty_mActivateOrderedList.isValid () && mProperty_mDeactivateOrderedList.isValid () && mProperty_mTaskNameStringIndex.isValid () && mProperty_mActivate.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_taskMapIR::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_taskMapIR (mProperty_lkey, mProperty_mTaskType, mProperty_mPriority, mProperty_mStackSize, mProperty_mSetupOrderedList, mProperty_mActivateOrderedList, mProperty_mDeactivateOrderedList, mProperty_mTaskNameStringIndex, mProperty_mActivate COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_taskMapIR::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTaskType" ":" ;
  mProperty_mTaskType.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mPriority" ":" ;
  mProperty_mPriority.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mStackSize" ":" ;
  mProperty_mStackSize.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSetupOrderedList" ":" ;
  mProperty_mSetupOrderedList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mActivateOrderedList" ":" ;
  mProperty_mActivateOrderedList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mDeactivateOrderedList" ":" ;
  mProperty_mDeactivateOrderedList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTaskNameStringIndex" ":" ;
  mProperty_mTaskNameStringIndex.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mActivate" ":" ;
  mProperty_mActivate.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_taskMapIR::compare (const cCollectionElement * inOperand) const {
  cMapElement_taskMapIR * operand = (cMapElement_taskMapIR *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mTaskType.objectCompare (operand->mProperty_mTaskType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPriority.objectCompare (operand->mProperty_mPriority) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mStackSize.objectCompare (operand->mProperty_mStackSize) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSetupOrderedList.objectCompare (operand->mProperty_mSetupOrderedList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mActivateOrderedList.objectCompare (operand->mProperty_mActivateOrderedList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mDeactivateOrderedList.objectCompare (operand->mProperty_mDeactivateOrderedList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTaskNameStringIndex.objectCompare (operand->mProperty_mTaskNameStringIndex) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mActivate.objectCompare (operand->mProperty_mActivate) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_taskMapIR::GALGAS_taskMapIR (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_taskMapIR::GALGAS_taskMapIR (const GALGAS_taskMapIR & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_taskMapIR & GALGAS_taskMapIR::operator = (const GALGAS_taskMapIR & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_taskMapIR GALGAS_taskMapIR::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_taskMapIR result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_taskMapIR GALGAS_taskMapIR::constructor_mapWithMapToOverride (const GALGAS_taskMapIR & inMapToOverride
                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_taskMapIR result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_taskMapIR GALGAS_taskMapIR::getter_overriddenMap (C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  GALGAS_taskMapIR result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_taskMapIR::addAssign_operation (const GALGAS_lstring & inKey,
                                            const GALGAS_omnibusType & inArgument0,
                                            const GALGAS_uint & inArgument1,
                                            const GALGAS_bigint & inArgument2,
                                            const GALGAS_stringlist & inArgument3,
                                            const GALGAS_stringlist & inArgument4,
                                            const GALGAS_stringlist & inArgument5,
                                            const GALGAS_uint & inArgument6,
                                            const GALGAS_bool & inArgument7,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  cMapElement_taskMapIR * p = NULL ;
  macroMyNew (p, cMapElement_taskMapIR (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4, inArgument5, inArgument6, inArgument7 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@taskMapIR insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_taskMapIR::setter_insertKey (GALGAS_lstring inKey,
                                         GALGAS_omnibusType inArgument0,
                                         GALGAS_uint inArgument1,
                                         GALGAS_bigint inArgument2,
                                         GALGAS_stringlist inArgument3,
                                         GALGAS_stringlist inArgument4,
                                         GALGAS_stringlist inArgument5,
                                         GALGAS_uint inArgument6,
                                         GALGAS_bool inArgument7,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  cMapElement_taskMapIR * p = NULL ;
  macroMyNew (p, cMapElement_taskMapIR (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4, inArgument5, inArgument6, inArgument7 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "** internal error **" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_taskMapIR_searchKey = "** internal error **" ;

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_taskMapIR::method_searchKey (GALGAS_lstring inKey,
                                         GALGAS_omnibusType & outArgument0,
                                         GALGAS_uint & outArgument1,
                                         GALGAS_bigint & outArgument2,
                                         GALGAS_stringlist & outArgument3,
                                         GALGAS_stringlist & outArgument4,
                                         GALGAS_stringlist & outArgument5,
                                         GALGAS_uint & outArgument6,
                                         GALGAS_bool & outArgument7,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) const {
  const cMapElement_taskMapIR * p = (const cMapElement_taskMapIR *) performSearch (inKey,
                                                                                   inCompiler,
                                                                                   kSearchErrorMessage_taskMapIR_searchKey
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
    macroValidSharedObject (p, cMapElement_taskMapIR) ;
    outArgument0 = p->mProperty_mTaskType ;
    outArgument1 = p->mProperty_mPriority ;
    outArgument2 = p->mProperty_mStackSize ;
    outArgument3 = p->mProperty_mSetupOrderedList ;
    outArgument4 = p->mProperty_mActivateOrderedList ;
    outArgument5 = p->mProperty_mDeactivateOrderedList ;
    outArgument6 = p->mProperty_mTaskNameStringIndex ;
    outArgument7 = p->mProperty_mActivate ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_taskMapIR::setter_removeKey (GALGAS_lstring inKey,
                                         GALGAS_omnibusType & outArgument0,
                                         GALGAS_uint & outArgument1,
                                         GALGAS_bigint & outArgument2,
                                         GALGAS_stringlist & outArgument3,
                                         GALGAS_stringlist & outArgument4,
                                         GALGAS_stringlist & outArgument5,
                                         GALGAS_uint & outArgument6,
                                         GALGAS_bool & outArgument7,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  const char * kRemoveErrorMessage = "** internal error **" ;
  capCollectionElement attributes ;
  performRemove (inKey, attributes, inCompiler, kRemoveErrorMessage COMMA_THERE) ;
  cMapElement_taskMapIR * p = (cMapElement_taskMapIR *) attributes.ptr () ;
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
    macroValidSharedObject (p, cMapElement_taskMapIR) ;
    outArgument0 = p->mProperty_mTaskType ;
    outArgument1 = p->mProperty_mPriority ;
    outArgument2 = p->mProperty_mStackSize ;
    outArgument3 = p->mProperty_mSetupOrderedList ;
    outArgument4 = p->mProperty_mActivateOrderedList ;
    outArgument5 = p->mProperty_mDeactivateOrderedList ;
    outArgument6 = p->mProperty_mTaskNameStringIndex ;
    outArgument7 = p->mProperty_mActivate ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_omnibusType GALGAS_taskMapIR::getter_mTaskTypeForKey (const GALGAS_string & inKey,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_taskMapIR * p = (const cMapElement_taskMapIR *) attributes ;
  GALGAS_omnibusType result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_taskMapIR) ;
    result = p->mProperty_mTaskType ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_taskMapIR::getter_mPriorityForKey (const GALGAS_string & inKey,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_taskMapIR * p = (const cMapElement_taskMapIR *) attributes ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_taskMapIR) ;
    result = p->mProperty_mPriority ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bigint GALGAS_taskMapIR::getter_mStackSizeForKey (const GALGAS_string & inKey,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_taskMapIR * p = (const cMapElement_taskMapIR *) attributes ;
  GALGAS_bigint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_taskMapIR) ;
    result = p->mProperty_mStackSize ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringlist GALGAS_taskMapIR::getter_mSetupOrderedListForKey (const GALGAS_string & inKey,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_taskMapIR * p = (const cMapElement_taskMapIR *) attributes ;
  GALGAS_stringlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_taskMapIR) ;
    result = p->mProperty_mSetupOrderedList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringlist GALGAS_taskMapIR::getter_mActivateOrderedListForKey (const GALGAS_string & inKey,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_taskMapIR * p = (const cMapElement_taskMapIR *) attributes ;
  GALGAS_stringlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_taskMapIR) ;
    result = p->mProperty_mActivateOrderedList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringlist GALGAS_taskMapIR::getter_mDeactivateOrderedListForKey (const GALGAS_string & inKey,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_taskMapIR * p = (const cMapElement_taskMapIR *) attributes ;
  GALGAS_stringlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_taskMapIR) ;
    result = p->mProperty_mDeactivateOrderedList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_taskMapIR::getter_mTaskNameStringIndexForKey (const GALGAS_string & inKey,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_taskMapIR * p = (const cMapElement_taskMapIR *) attributes ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_taskMapIR) ;
    result = p->mProperty_mTaskNameStringIndex ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_taskMapIR::getter_mActivateForKey (const GALGAS_string & inKey,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_taskMapIR * p = (const cMapElement_taskMapIR *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_taskMapIR) ;
    result = p->mProperty_mActivate ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_taskMapIR::setter_setMTaskTypeForKey (GALGAS_omnibusType inAttributeValue,
                                                  GALGAS_string inKey,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_taskMapIR * p = (cMapElement_taskMapIR *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_taskMapIR) ;
    p->mProperty_mTaskType = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_taskMapIR::setter_setMPriorityForKey (GALGAS_uint inAttributeValue,
                                                  GALGAS_string inKey,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_taskMapIR * p = (cMapElement_taskMapIR *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_taskMapIR) ;
    p->mProperty_mPriority = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_taskMapIR::setter_setMStackSizeForKey (GALGAS_bigint inAttributeValue,
                                                   GALGAS_string inKey,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_taskMapIR * p = (cMapElement_taskMapIR *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_taskMapIR) ;
    p->mProperty_mStackSize = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_taskMapIR::setter_setMSetupOrderedListForKey (GALGAS_stringlist inAttributeValue,
                                                          GALGAS_string inKey,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_taskMapIR * p = (cMapElement_taskMapIR *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_taskMapIR) ;
    p->mProperty_mSetupOrderedList = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_taskMapIR::setter_setMActivateOrderedListForKey (GALGAS_stringlist inAttributeValue,
                                                             GALGAS_string inKey,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_taskMapIR * p = (cMapElement_taskMapIR *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_taskMapIR) ;
    p->mProperty_mActivateOrderedList = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_taskMapIR::setter_setMDeactivateOrderedListForKey (GALGAS_stringlist inAttributeValue,
                                                               GALGAS_string inKey,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_taskMapIR * p = (cMapElement_taskMapIR *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_taskMapIR) ;
    p->mProperty_mDeactivateOrderedList = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_taskMapIR::setter_setMTaskNameStringIndexForKey (GALGAS_uint inAttributeValue,
                                                             GALGAS_string inKey,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_taskMapIR * p = (cMapElement_taskMapIR *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_taskMapIR) ;
    p->mProperty_mTaskNameStringIndex = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_taskMapIR::setter_setMActivateForKey (GALGAS_bool inAttributeValue,
                                                  GALGAS_string inKey,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_taskMapIR * p = (cMapElement_taskMapIR *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_taskMapIR) ;
    p->mProperty_mActivate = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_taskMapIR * GALGAS_taskMapIR::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                             const GALGAS_string & inKey
                                                                             COMMA_LOCATION_ARGS) {
  cMapElement_taskMapIR * result = (cMapElement_taskMapIR *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_taskMapIR) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_taskMapIR::cEnumerator_taskMapIR (const GALGAS_taskMapIR & inEnumeratedObject,
                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_taskMapIR_2D_element cEnumerator_taskMapIR::current (LOCATION_ARGS) const {
  const cMapElement_taskMapIR * p = (const cMapElement_taskMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_taskMapIR) ;
  return GALGAS_taskMapIR_2D_element (p->mProperty_lkey, p->mProperty_mTaskType, p->mProperty_mPriority, p->mProperty_mStackSize, p->mProperty_mSetupOrderedList, p->mProperty_mActivateOrderedList, p->mProperty_mDeactivateOrderedList, p->mProperty_mTaskNameStringIndex, p->mProperty_mActivate) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_taskMapIR::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_omnibusType cEnumerator_taskMapIR::current_mTaskType (LOCATION_ARGS) const {
  const cMapElement_taskMapIR * p = (const cMapElement_taskMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_taskMapIR) ;
  return p->mProperty_mTaskType ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_taskMapIR::current_mPriority (LOCATION_ARGS) const {
  const cMapElement_taskMapIR * p = (const cMapElement_taskMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_taskMapIR) ;
  return p->mProperty_mPriority ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bigint cEnumerator_taskMapIR::current_mStackSize (LOCATION_ARGS) const {
  const cMapElement_taskMapIR * p = (const cMapElement_taskMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_taskMapIR) ;
  return p->mProperty_mStackSize ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringlist cEnumerator_taskMapIR::current_mSetupOrderedList (LOCATION_ARGS) const {
  const cMapElement_taskMapIR * p = (const cMapElement_taskMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_taskMapIR) ;
  return p->mProperty_mSetupOrderedList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringlist cEnumerator_taskMapIR::current_mActivateOrderedList (LOCATION_ARGS) const {
  const cMapElement_taskMapIR * p = (const cMapElement_taskMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_taskMapIR) ;
  return p->mProperty_mActivateOrderedList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringlist cEnumerator_taskMapIR::current_mDeactivateOrderedList (LOCATION_ARGS) const {
  const cMapElement_taskMapIR * p = (const cMapElement_taskMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_taskMapIR) ;
  return p->mProperty_mDeactivateOrderedList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_taskMapIR::current_mTaskNameStringIndex (LOCATION_ARGS) const {
  const cMapElement_taskMapIR * p = (const cMapElement_taskMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_taskMapIR) ;
  return p->mProperty_mTaskNameStringIndex ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_taskMapIR::current_mActivate (LOCATION_ARGS) const {
  const cMapElement_taskMapIR * p = (const cMapElement_taskMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_taskMapIR) ;
  return p->mProperty_mActivate ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_taskMapIR::optional_searchKey (const GALGAS_string & inKey,
                                           GALGAS_omnibusType & outArgument0,
                                           GALGAS_uint & outArgument1,
                                           GALGAS_bigint & outArgument2,
                                           GALGAS_stringlist & outArgument3,
                                           GALGAS_stringlist & outArgument4,
                                           GALGAS_stringlist & outArgument5,
                                           GALGAS_uint & outArgument6,
                                           GALGAS_bool & outArgument7) const {
  const cMapElement_taskMapIR * p = (const cMapElement_taskMapIR *) searchForKey (inKey) ;
  const bool result = NULL != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_taskMapIR) ;
    outArgument0 = p->mProperty_mTaskType ;
    outArgument1 = p->mProperty_mPriority ;
    outArgument2 = p->mProperty_mStackSize ;
    outArgument3 = p->mProperty_mSetupOrderedList ;
    outArgument4 = p->mProperty_mActivateOrderedList ;
    outArgument5 = p->mProperty_mDeactivateOrderedList ;
    outArgument6 = p->mProperty_mTaskNameStringIndex ;
    outArgument7 = p->mProperty_mActivate ;
  }else{
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
    outArgument4.drop () ;
    outArgument5.drop () ;
    outArgument6.drop () ;
    outArgument7.drop () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@taskMapIR type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_taskMapIR ("taskMapIR",
                                  NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_taskMapIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_taskMapIR ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_taskMapIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_taskMapIR (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_taskMapIR GALGAS_taskMapIR::extractObject (const GALGAS_object & inObject,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  GALGAS_taskMapIR result ;
  const GALGAS_taskMapIR * p = (const GALGAS_taskMapIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_taskMapIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("taskMapIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@taskSortedListIR' sorted list
//
//----------------------------------------------------------------------------------------------------------------------

class cSortedListElement_taskSortedListIR : public cSortedListElement {
  public : GALGAS_taskSortedListIR_2D_element mObject ;

//--- Constructor
  public : cSortedListElement_taskSortedListIR (const GALGAS_string & in_mTaskName,
                                                const GALGAS_uint & in_mPriority,
                                                const GALGAS_bigint & in_mStackSize,
                                                const GALGAS_stringlist & in_mSetupOrderedList,
                                                const GALGAS_stringlist & in_mActivateOrderedList,
                                                const GALGAS_stringlist & in_mDeactivateOrderedList,
                                                const GALGAS_uint & in_mTaskNameStringIndex,
                                                const GALGAS_bool & in_mActivate
                                                COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cSortedListElement * copy (void) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;

//--- Virtual method that comparing element for sorting
  public : virtual typeComparisonResult compareForSorting (const cSortedListElement * inOperand) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cSortedListElement_taskSortedListIR::cSortedListElement_taskSortedListIR (const GALGAS_string & in_mTaskName,
                                                                          const GALGAS_uint & in_mPriority,
                                                                          const GALGAS_bigint & in_mStackSize,
                                                                          const GALGAS_stringlist & in_mSetupOrderedList,
                                                                          const GALGAS_stringlist & in_mActivateOrderedList,
                                                                          const GALGAS_stringlist & in_mDeactivateOrderedList,
                                                                          const GALGAS_uint & in_mTaskNameStringIndex,
                                                                          const GALGAS_bool & in_mActivate
                                                                          COMMA_LOCATION_ARGS) :
cSortedListElement (THERE),
mObject (in_mTaskName, in_mPriority, in_mStackSize, in_mSetupOrderedList, in_mActivateOrderedList, in_mDeactivateOrderedList, in_mTaskNameStringIndex, in_mActivate) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cSortedListElement_taskSortedListIR::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cSortedListElement * cSortedListElement_taskSortedListIR::copy (void) {
  cSortedListElement * result = NULL ;
  macroMyNew (result, cSortedListElement_taskSortedListIR (mObject.mProperty_mTaskName, mObject.mProperty_mPriority, mObject.mProperty_mStackSize, mObject.mProperty_mSetupOrderedList, mObject.mProperty_mActivateOrderedList, mObject.mProperty_mDeactivateOrderedList, mObject.mProperty_mTaskNameStringIndex, mObject.mProperty_mActivate COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cSortedListElement_taskSortedListIR::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTaskName" ":" ;
  mObject.mProperty_mTaskName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mPriority" ":" ;
  mObject.mProperty_mPriority.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mStackSize" ":" ;
  mObject.mProperty_mStackSize.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSetupOrderedList" ":" ;
  mObject.mProperty_mSetupOrderedList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mActivateOrderedList" ":" ;
  mObject.mProperty_mActivateOrderedList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mDeactivateOrderedList" ":" ;
  mObject.mProperty_mDeactivateOrderedList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTaskNameStringIndex" ":" ;
  mObject.mProperty_mTaskNameStringIndex.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mActivate" ":" ;
  mObject.mProperty_mActivate.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cSortedListElement_taskSortedListIR::compare (const cCollectionElement * inOperand) const {
  cSortedListElement_taskSortedListIR * operand = (cSortedListElement_taskSortedListIR *) inOperand ;
  macroValidSharedObject (operand, cSortedListElement_taskSortedListIR) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_taskSortedListIR::GALGAS_taskSortedListIR (void) :
AC_GALGAS_sortedlist () {
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cSortedListElement_taskSortedListIR::compareForSorting (const cSortedListElement * inOperand) const {
  typeComparisonResult result = kOperandEqual ;
  const cSortedListElement_taskSortedListIR * operand = (const cSortedListElement_taskSortedListIR *) inOperand ;
  macroValidSharedObject (operand, cSortedListElement_taskSortedListIR) ;
  if (result == kOperandEqual) {
    result = operand->mObject.mProperty_mPriority.objectCompare (mObject.mProperty_mPriority) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_taskSortedListIR GALGAS_taskSortedListIR::constructor_emptySortedList (LOCATION_ARGS) {
  GALGAS_taskSortedListIR result ;
  result.createNewEmptySortedList (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_taskSortedListIR GALGAS_taskSortedListIR::constructor_sortedListWithValue (const GALGAS_string & inOperand0,
                                                                                  const GALGAS_uint & inOperand1,
                                                                                  const GALGAS_bigint & inOperand2,
                                                                                  const GALGAS_stringlist & inOperand3,
                                                                                  const GALGAS_stringlist & inOperand4,
                                                                                  const GALGAS_stringlist & inOperand5,
                                                                                  const GALGAS_uint & inOperand6,
                                                                                  const GALGAS_bool & inOperand7
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_taskSortedListIR result = constructor_emptySortedList (THERE) ;
  cSortedListElement * p = NULL ;
  macroMyNew (p, cSortedListElement_taskSortedListIR (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7 COMMA_THERE)) ;
  capSortedListElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  result.appendObject (attributes) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_taskSortedListIR::addAssign_operation (const GALGAS_string & inOperand0,
                                                   const GALGAS_uint & inOperand1,
                                                   const GALGAS_bigint & inOperand2,
                                                   const GALGAS_stringlist & inOperand3,
                                                   const GALGAS_stringlist & inOperand4,
                                                   const GALGAS_stringlist & inOperand5,
                                                   const GALGAS_uint & inOperand6,
                                                   const GALGAS_bool & inOperand7
                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cSortedListElement * p = NULL ;
    macroMyNew (p, cSortedListElement_taskSortedListIR (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7 COMMA_THERE)) ;
    capSortedListElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_taskSortedListIR::plusAssign_operation (const GALGAS_taskSortedListIR inOperand,
                                                    C_Compiler * /* inCompiler */
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid ()) {
    appendSortedList (inOperand) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_taskSortedListIR::setter_popSmallest (GALGAS_string & outOperand0,
                                                  GALGAS_uint & outOperand1,
                                                  GALGAS_bigint & outOperand2,
                                                  GALGAS_stringlist & outOperand3,
                                                  GALGAS_stringlist & outOperand4,
                                                  GALGAS_stringlist & outOperand5,
                                                  GALGAS_uint & outOperand6,
                                                  GALGAS_bool & outOperand7,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  capSortedListElement attributes ;
  removeSmallestObject (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_taskSortedListIR * p = (cSortedListElement_taskSortedListIR *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_taskSortedListIR) ;
    outOperand0 = p->mObject.mProperty_mTaskName ;
    outOperand1 = p->mObject.mProperty_mPriority ;
    outOperand2 = p->mObject.mProperty_mStackSize ;
    outOperand3 = p->mObject.mProperty_mSetupOrderedList ;
    outOperand4 = p->mObject.mProperty_mActivateOrderedList ;
    outOperand5 = p->mObject.mProperty_mDeactivateOrderedList ;
    outOperand6 = p->mObject.mProperty_mTaskNameStringIndex ;
    outOperand7 = p->mObject.mProperty_mActivate ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_taskSortedListIR::setter_popGreatest (GALGAS_string & outOperand0,
                                                  GALGAS_uint & outOperand1,
                                                  GALGAS_bigint & outOperand2,
                                                  GALGAS_stringlist & outOperand3,
                                                  GALGAS_stringlist & outOperand4,
                                                  GALGAS_stringlist & outOperand5,
                                                  GALGAS_uint & outOperand6,
                                                  GALGAS_bool & outOperand7,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  capSortedListElement attributes ;
  removeGreatestObject (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_taskSortedListIR * p = (cSortedListElement_taskSortedListIR *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_taskSortedListIR) ;
    outOperand0 = p->mObject.mProperty_mTaskName ;
    outOperand1 = p->mObject.mProperty_mPriority ;
    outOperand2 = p->mObject.mProperty_mStackSize ;
    outOperand3 = p->mObject.mProperty_mSetupOrderedList ;
    outOperand4 = p->mObject.mProperty_mActivateOrderedList ;
    outOperand5 = p->mObject.mProperty_mDeactivateOrderedList ;
    outOperand6 = p->mObject.mProperty_mTaskNameStringIndex ;
    outOperand7 = p->mObject.mProperty_mActivate ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_taskSortedListIR::method_smallest (GALGAS_string & outOperand0,
                                               GALGAS_uint & outOperand1,
                                               GALGAS_bigint & outOperand2,
                                               GALGAS_stringlist & outOperand3,
                                               GALGAS_stringlist & outOperand4,
                                               GALGAS_stringlist & outOperand5,
                                               GALGAS_uint & outOperand6,
                                               GALGAS_bool & outOperand7,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  capSortedListElement attributes ;
  smallestObjectAttributeList (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_taskSortedListIR * p = (cSortedListElement_taskSortedListIR *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_taskSortedListIR) ;
    outOperand0 = p->mObject.mProperty_mTaskName ;
    outOperand1 = p->mObject.mProperty_mPriority ;
    outOperand2 = p->mObject.mProperty_mStackSize ;
    outOperand3 = p->mObject.mProperty_mSetupOrderedList ;
    outOperand4 = p->mObject.mProperty_mActivateOrderedList ;
    outOperand5 = p->mObject.mProperty_mDeactivateOrderedList ;
    outOperand6 = p->mObject.mProperty_mTaskNameStringIndex ;
    outOperand7 = p->mObject.mProperty_mActivate ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_taskSortedListIR::method_greatest (GALGAS_string & outOperand0,
                                               GALGAS_uint & outOperand1,
                                               GALGAS_bigint & outOperand2,
                                               GALGAS_stringlist & outOperand3,
                                               GALGAS_stringlist & outOperand4,
                                               GALGAS_stringlist & outOperand5,
                                               GALGAS_uint & outOperand6,
                                               GALGAS_bool & outOperand7,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  capSortedListElement attributes ;
  greatestObjectAttributeList (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_taskSortedListIR * p = (cSortedListElement_taskSortedListIR *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_taskSortedListIR) ;
    outOperand0 = p->mObject.mProperty_mTaskName ;
    outOperand1 = p->mObject.mProperty_mPriority ;
    outOperand2 = p->mObject.mProperty_mStackSize ;
    outOperand3 = p->mObject.mProperty_mSetupOrderedList ;
    outOperand4 = p->mObject.mProperty_mActivateOrderedList ;
    outOperand5 = p->mObject.mProperty_mDeactivateOrderedList ;
    outOperand6 = p->mObject.mProperty_mTaskNameStringIndex ;
    outOperand7 = p->mObject.mProperty_mActivate ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_taskSortedListIR::cEnumerator_taskSortedListIR (const GALGAS_taskSortedListIR & inEnumeratedObject,
                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_taskSortedListIR_2D_element cEnumerator_taskSortedListIR::current (LOCATION_ARGS) const {
  const cSortedListElement_taskSortedListIR * p = (const cSortedListElement_taskSortedListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_taskSortedListIR) ;
  return p->mObject ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_taskSortedListIR::current_mTaskName (LOCATION_ARGS) const {
  const cSortedListElement_taskSortedListIR * p = (const cSortedListElement_taskSortedListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_taskSortedListIR) ;
  return p->mObject.mProperty_mTaskName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_taskSortedListIR::current_mPriority (LOCATION_ARGS) const {
  const cSortedListElement_taskSortedListIR * p = (const cSortedListElement_taskSortedListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_taskSortedListIR) ;
  return p->mObject.mProperty_mPriority ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bigint cEnumerator_taskSortedListIR::current_mStackSize (LOCATION_ARGS) const {
  const cSortedListElement_taskSortedListIR * p = (const cSortedListElement_taskSortedListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_taskSortedListIR) ;
  return p->mObject.mProperty_mStackSize ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringlist cEnumerator_taskSortedListIR::current_mSetupOrderedList (LOCATION_ARGS) const {
  const cSortedListElement_taskSortedListIR * p = (const cSortedListElement_taskSortedListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_taskSortedListIR) ;
  return p->mObject.mProperty_mSetupOrderedList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringlist cEnumerator_taskSortedListIR::current_mActivateOrderedList (LOCATION_ARGS) const {
  const cSortedListElement_taskSortedListIR * p = (const cSortedListElement_taskSortedListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_taskSortedListIR) ;
  return p->mObject.mProperty_mActivateOrderedList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringlist cEnumerator_taskSortedListIR::current_mDeactivateOrderedList (LOCATION_ARGS) const {
  const cSortedListElement_taskSortedListIR * p = (const cSortedListElement_taskSortedListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_taskSortedListIR) ;
  return p->mObject.mProperty_mDeactivateOrderedList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_taskSortedListIR::current_mTaskNameStringIndex (LOCATION_ARGS) const {
  const cSortedListElement_taskSortedListIR * p = (const cSortedListElement_taskSortedListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_taskSortedListIR) ;
  return p->mObject.mProperty_mTaskNameStringIndex ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_taskSortedListIR::current_mActivate (LOCATION_ARGS) const {
  const cSortedListElement_taskSortedListIR * p = (const cSortedListElement_taskSortedListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_taskSortedListIR) ;
  return p->mObject.mProperty_mActivate ;
}



//----------------------------------------------------------------------------------------------------------------------
//
//@taskSortedListIR type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_taskSortedListIR ("taskSortedListIR",
                                         NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_taskSortedListIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_taskSortedListIR ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_taskSortedListIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_taskSortedListIR (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_taskSortedListIR GALGAS_taskSortedListIR::extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_taskSortedListIR result ;
  const GALGAS_taskSortedListIR * p = (const GALGAS_taskSortedListIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_taskSortedListIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("taskSortedListIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@taskMapIR generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_generateCode (const GALGAS_taskMapIR inObject,
                                   GALGAS_string & ioArgument_ioLLVMcode,
                                   const GALGAS_generationContext constinArgument_inGenerationContext,
                                   GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                   GALGAS_primitiveAndServiceIRlist & ioArgument_ioServiceList,
                                   C_Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("Activate task service"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 480)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 480)) ;
  GALGAS_string var_activateTaskImplementationName_17718 = function_llvmNameForServiceImplementation (function_llvmNameForActivateTask (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 481)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 481)) ;
  GALGAS_string var_activateTaskCallName_17810 = function_llvmNameForServiceCall (function_llvmNameForActivateTask (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 482)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 482)) ;
  ioArgument_ioServiceList.addAssign_operation (var_activateTaskCallName_17810, var_activateTaskImplementationName_17718, GALGAS_bool (false)  COMMA_SOURCE_FILE ("task-declaration.galgas", 483)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("declare void @").add_operation (var_activateTaskCallName_17810, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 484)).add_operation (GALGAS_string (" (i8 %inTaskIndex) nounwind\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 484)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 484)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("Wait for activation service"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 486)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 486)) ;
  GALGAS_string var_waitForActivationImplementationName_18195 = function_llvmNameForServiceImplementation (function_llvmNameForTaskWaitsForActivation (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 487)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 487)) ;
  GALGAS_string var_waitForActivationCallName_18302 = function_llvmNameForServiceCall (function_llvmNameForTaskWaitsForActivation (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 488)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 488)) ;
  ioArgument_ioServiceList.addAssign_operation (var_waitForActivationCallName_18302, var_waitForActivationImplementationName_18195, GALGAS_bool (false)  COMMA_SOURCE_FILE ("task-declaration.galgas", 489)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("declare void @").add_operation (var_waitForActivationCallName_18302, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 490)).add_operation (GALGAS_string (" () nounwind\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 490)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 490)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("Task variables"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 492)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 492)) ;
  cEnumerator_globalTaskVariableList enumerator_18718 (constinArgument_inGenerationContext.getter_mGlobalTaskVariableList (HERE), kENUMERATION_UP) ;
  while (enumerator_18718.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssign_operation(function_llvmNameForGlobalVariable (enumerator_18718.current_mTaskName (HERE), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 494)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 494)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" = internal global %"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 495)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(enumerator_18718.current_mTaskTypeName (HERE).getter_assemblerRepresentation (SOURCE_FILE ("task-declaration.galgas", 496)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 496)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_llvmValue (enumerator_18718.current_mInitialValue (HERE), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 497)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 497)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 497)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 497)) ;
    enumerator_18718.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 499)) ;
  GALGAS_taskSortedListIR var_orderedTaskList_19031 = GALGAS_taskSortedListIR::constructor_emptySortedList (SOURCE_FILE ("task-declaration.galgas", 501)) ;
  const GALGAS_taskMapIR temp_0 = inObject ;
  cEnumerator_taskMapIR enumerator_19055 (temp_0, kENUMERATION_UP) ;
  while (enumerator_19055.hasCurrentObject ()) {
    var_orderedTaskList_19031.addAssign_operation (enumerator_19055.current (HERE).getter_lkey (HERE).getter_string (HERE), enumerator_19055.current (HERE).getter_mPriority (HERE), enumerator_19055.current (HERE).getter_mStackSize (HERE), enumerator_19055.current (HERE).getter_mSetupOrderedList (HERE), enumerator_19055.current (HERE).getter_mActivateOrderedList (HERE), enumerator_19055.current (HERE).getter_mDeactivateOrderedList (HERE), enumerator_19055.current (HERE).getter_mTaskNameStringIndex (HERE), enumerator_19055.current (HERE).getter_mActivate (HERE)  COMMA_SOURCE_FILE ("task-declaration.galgas", 503)) ;
    enumerator_19055.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("Create task extern routine"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 514)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 514)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("declare void @kernel_create_task (i32 %inTaskIndex, i8* %inTaskName, i32* %inStackBufferAddress, "), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 515)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("i32 %inStackBufferSize, void ()* %inTaskRoutine) nounwind\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 516)) ;
  cEnumerator_taskSortedListIR enumerator_19649 (var_orderedTaskList_19031, kENUMERATION_UP) ;
  while (enumerator_19649.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("Task ").add_operation (enumerator_19649.current (HERE).getter_mTaskName (HERE), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 518)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 518)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 518)) ;
    GALGAS_string var_assemblerTaskName_19741 = enumerator_19649.current (HERE).getter_mTaskName (HERE).getter_assemblerRepresentation (SOURCE_FILE ("task-declaration.galgas", 519)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(function_stackNameForTask (enumerator_19649.current (HERE).getter_mTaskName (HERE), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 520)).add_operation (GALGAS_string (" = global ["), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 520)).add_operation (enumerator_19649.current (HERE).getter_mStackSize (HERE).divide_operation (GALGAS_uint ((uint32_t) 4U).getter_bigint (SOURCE_FILE ("task-declaration.galgas", 520)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 520)).getter_string (SOURCE_FILE ("task-declaration.galgas", 520)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 520)).add_operation (GALGAS_string (" x i32] zeroinitializer\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 520)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 520)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 521)) ;
    GALGAS_string var_effectiveParameter_19957 = GALGAS_string ("(%").add_operation (var_assemblerTaskName_19741, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 522)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 522)).add_operation (function_llvmNameForGlobalVariable (enumerator_19649.current (HERE).getter_mTaskName (HERE), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 522)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 522)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 522)) ;
    GALGAS_string var_formalArgument_20066 = GALGAS_string (" (%").add_operation (var_assemblerTaskName_19741, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 523)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 523)).add_operation (function_llvmNameForSelf (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 523)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 523)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 523)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(function_llvmSeparatorLine (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 524)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 524)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 524)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal void ").add_operation (function_setupNameForTaskType (enumerator_19649.current (HERE).getter_mTaskName (HERE), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 526)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 526)).add_operation (var_formalArgument_20066, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 526)).add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 526)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 526)).add_operation (GALGAS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 526)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 526)) ;
    cEnumerator_stringlist enumerator_20375 (enumerator_19649.current (HERE).getter_mSetupOrderedList (HERE), kENUMERATION_UP) ;
    while (enumerator_20375.hasCurrentObject ()) {
      GALGAS_string var_mangledName_20400 = GALGAS_string ("task.setup.").add_operation (enumerator_19649.current (HERE).getter_mTaskName (HERE), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 528)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 528)).add_operation (enumerator_20375.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 528)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @").add_operation (var_mangledName_20400.getter_assemblerRepresentation (SOURCE_FILE ("task-declaration.galgas", 529)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 529)).add_operation (var_formalArgument_20066, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 529)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 529)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 529)) ;
      enumerator_20375.gotoNextObject () ;
    }
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 531)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
      "\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 532)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(function_llvmSeparatorLine (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 533)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 533)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 534)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal void @").add_operation (function_activateNameForTaskType (enumerator_19649.current (HERE).getter_mTaskName (HERE), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 536)).getter_assemblerRepresentation (SOURCE_FILE ("task-declaration.galgas", 536)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 536)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 536)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(var_formalArgument_20066.add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 537)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 537)).add_operation (GALGAS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 537)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 537)) ;
    cEnumerator_stringlist enumerator_20936 (enumerator_19649.current (HERE).getter_mActivateOrderedList (HERE), kENUMERATION_UP) ;
    while (enumerator_20936.hasCurrentObject ()) {
      GALGAS_string var_mangledName_20961 = GALGAS_string ("task.activate.").add_operation (enumerator_19649.current (HERE).getter_mTaskName (HERE), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 539)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 539)).add_operation (enumerator_20936.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 539)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @").add_operation (var_mangledName_20961.getter_assemblerRepresentation (SOURCE_FILE ("task-declaration.galgas", 540)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 540)).add_operation (var_formalArgument_20066, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 540)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 540)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 540)) ;
      enumerator_20936.gotoNextObject () ;
    }
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 542)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
      "\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 543)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(function_llvmSeparatorLine (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 544)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 544)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 545)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal void ").add_operation (function_deactivateNameForTaskType (enumerator_19649.current (HERE).getter_mTaskName (HERE), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 547)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 547)).add_operation (var_formalArgument_20066, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 547)).add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 547)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 547)).add_operation (GALGAS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 547)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 547)) ;
    cEnumerator_stringlist enumerator_21468 (enumerator_19649.current (HERE).getter_mDeactivateOrderedList (HERE), kENUMERATION_UP) ;
    while (enumerator_21468.hasCurrentObject ()) {
      GALGAS_string var_mangledName_21493 = GALGAS_string ("task.deactivate.").add_operation (enumerator_19649.current (HERE).getter_mTaskName (HERE), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 549)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 549)).add_operation (enumerator_21468.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 549)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @").add_operation (var_mangledName_21493.getter_assemblerRepresentation (SOURCE_FILE ("task-declaration.galgas", 550)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 550)).add_operation (var_formalArgument_20066, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 550)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 550)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 550)) ;
      enumerator_21468.gotoNextObject () ;
    }
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 552)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
      "\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 553)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(function_llvmSeparatorLine (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 554)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 554)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 555)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal void ").add_operation (function_mainRoutineNameForTask (enumerator_19649.current (HERE).getter_mTaskName (HERE), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 557)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 557)).add_operation (GALGAS_string (" ()"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 557)).add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 557)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 557)).add_operation (GALGAS_string ("noreturn {\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 557)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 557)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void ").add_operation (function_setupNameForTaskType (enumerator_19649.current (HERE).getter_mTaskName (HERE), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 558)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 558)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 558)).add_operation (var_effectiveParameter_19957, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 558)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 558)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 558)) ;
    GALGAS_string var_taskLoopLabel_22077 = GALGAS_string ("loop.").add_operation (enumerator_19649.current (HERE).getter_mTaskName (HERE).getter_assemblerRepresentation (SOURCE_FILE ("task-declaration.galgas", 559)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 559)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_taskLoopLabel_22077, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 560)).add_operation (GALGAS_string ("\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 560)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 560)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(var_taskLoopLabel_22077.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 561)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 561)) ;
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = enumerator_19649.current (HERE).getter_mActivate (HERE).operator_not (SOURCE_FILE ("task-declaration.galgas", 562)).boolEnum () ;
      if (kBoolTrue == test_1) {
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @").add_operation (var_waitForActivationCallName_18302, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 563)).add_operation (GALGAS_string (" ()\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 563)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 563)) ;
      }
    }
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @").add_operation (function_activateNameForTaskType (enumerator_19649.current (HERE).getter_mTaskName (HERE), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 565)).getter_assemblerRepresentation (SOURCE_FILE ("task-declaration.galgas", 565)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 565)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 565)).add_operation (var_effectiveParameter_19957, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 565)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 565)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 565)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @func.").add_operation (function_llvmNameForFunction (enumerator_19649.current (HERE).getter_mTaskName (HERE).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 566)).add_operation (function_llvmNameForTaskLoopFunction (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 566)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 566)).add_operation (GALGAS_string ("()"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 566)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 566)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 566)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 566)).add_operation (var_effectiveParameter_19957, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 566)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 566)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 566)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void ").add_operation (function_deactivateNameForTaskType (enumerator_19649.current (HERE).getter_mTaskName (HERE), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 567)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 567)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 567)).add_operation (var_effectiveParameter_19957, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 567)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 567)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 567)) ;
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = enumerator_19649.current (HERE).getter_mActivate (HERE).boolEnum () ;
      if (kBoolTrue == test_2) {
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @").add_operation (var_waitForActivationCallName_18302, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 569)).add_operation (GALGAS_string (" ()\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 569)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 569)) ;
      }
    }
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_taskLoopLabel_22077, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 571)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 571)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 571)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
      "\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 572)) ;
    enumerator_19649.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("Start tasks"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 575)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 575)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal void @start.tasks ()").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 576)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 576)).add_operation (GALGAS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 576)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 576)) ;
  cEnumerator_taskSortedListIR enumerator_23169 (var_orderedTaskList_19031, kENUMERATION_UP) ;
  GALGAS_uint index_23145 ((uint32_t) 0) ;
  while (enumerator_23169.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (function_stackAddressForTask (enumerator_23169.current (HERE).getter_mTaskName (HERE), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 578)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 578)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 578)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" = getelementptr inbounds [").add_operation (enumerator_23169.current (HERE).getter_mStackSize (HERE).divide_operation (GALGAS_uint ((uint32_t) 4U).getter_bigint (SOURCE_FILE ("task-declaration.galgas", 579)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 579)).getter_string (SOURCE_FILE ("task-declaration.galgas", 579)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 579)).add_operation (GALGAS_string (" x i32], "), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 579)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 579)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("[").add_operation (enumerator_23169.current (HERE).getter_mStackSize (HERE).divide_operation (GALGAS_uint ((uint32_t) 4U).getter_bigint (SOURCE_FILE ("task-declaration.galgas", 580)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 580)).getter_string (SOURCE_FILE ("task-declaration.galgas", 580)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 580)).add_operation (GALGAS_string (" x i32]* "), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 580)).add_operation (function_stackNameForTask (enumerator_23169.current (HERE).getter_mTaskName (HERE), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 580)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 580)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 580)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", i32 0, i32 0\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 581)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %task.name.").add_operation (index_23145.getter_string (SOURCE_FILE ("task-declaration.galgas", 582)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 582)).add_operation (GALGAS_string (" = load i8*, i8** "), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 582)).add_operation (function_literalStringName (enumerator_23169.current (HERE).getter_mTaskNameStringIndex (HERE), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 582)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 582)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 582)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 582)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @kernel_create_task ("), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 583)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("i32 ").add_operation (index_23145.getter_string (SOURCE_FILE ("task-declaration.galgas", 584)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 584)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 584)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", i8* %task.name.").add_operation (index_23145.getter_string (SOURCE_FILE ("task-declaration.galgas", 585)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 585)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 585)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", i32* ").add_operation (function_stackAddressForTask (enumerator_23169.current (HERE).getter_mTaskName (HERE), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 586)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 586)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 586)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", i32 ").add_operation (enumerator_23169.current (HERE).getter_mStackSize (HERE).getter_string (SOURCE_FILE ("task-declaration.galgas", 587)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 587)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 587)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", void ()* ").add_operation (function_mainRoutineNameForTask (enumerator_23169.current (HERE).getter_mTaskName (HERE), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 588)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 588)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 588)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 588)) ;
    enumerator_23169.gotoNextObject () ;
    index_23145.increment_operation (inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 577)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 590)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 591)) ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_mode::GALGAS_mode (void) :
mEnum (kNotBuilt) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mode GALGAS_mode::constructor_userMode (UNUSED_LOCATION_ARGS) {
  GALGAS_mode result ;
  result.mEnum = kEnum_userMode ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mode GALGAS_mode::constructor_sectionMode (UNUSED_LOCATION_ARGS) {
  GALGAS_mode result ;
  result.mEnum = kEnum_sectionMode ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mode GALGAS_mode::constructor_serviceMode (UNUSED_LOCATION_ARGS) {
  GALGAS_mode result ;
  result.mEnum = kEnum_serviceMode ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mode GALGAS_mode::constructor_primitiveMode (UNUSED_LOCATION_ARGS) {
  GALGAS_mode result ;
  result.mEnum = kEnum_primitiveMode ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mode GALGAS_mode::constructor_guardMode (UNUSED_LOCATION_ARGS) {
  GALGAS_mode result ;
  result.mEnum = kEnum_guardMode ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mode GALGAS_mode::constructor_anyMode (UNUSED_LOCATION_ARGS) {
  GALGAS_mode result ;
  result.mEnum = kEnum_anyMode ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mode GALGAS_mode::constructor_anySafeMode (UNUSED_LOCATION_ARGS) {
  GALGAS_mode result ;
  result.mEnum = kEnum_anySafeMode ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mode GALGAS_mode::constructor_safeUserMode (UNUSED_LOCATION_ARGS) {
  GALGAS_mode result ;
  result.mEnum = kEnum_safeUserMode ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mode GALGAS_mode::constructor_safeSectionMode (UNUSED_LOCATION_ARGS) {
  GALGAS_mode result ;
  result.mEnum = kEnum_safeSectionMode ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mode GALGAS_mode::constructor_safeServiceMode (UNUSED_LOCATION_ARGS) {
  GALGAS_mode result ;
  result.mEnum = kEnum_safeServiceMode ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mode GALGAS_mode::constructor_safePrimitiveMode (UNUSED_LOCATION_ARGS) {
  GALGAS_mode result ;
  result.mEnum = kEnum_safePrimitiveMode ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mode GALGAS_mode::constructor_safeGuardMode (UNUSED_LOCATION_ARGS) {
  GALGAS_mode result ;
  result.mEnum = kEnum_safeGuardMode ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mode GALGAS_mode::constructor_panicMode (UNUSED_LOCATION_ARGS) {
  GALGAS_mode result ;
  result.mEnum = kEnum_panicMode ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mode GALGAS_mode::constructor_bootMode (UNUSED_LOCATION_ARGS) {
  GALGAS_mode result ;
  result.mEnum = kEnum_bootMode ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mode GALGAS_mode::constructor_startupMode (UNUSED_LOCATION_ARGS) {
  GALGAS_mode result ;
  result.mEnum = kEnum_startupMode ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_mode [16] = {
  "(not built)",
  "userMode",
  "sectionMode",
  "serviceMode",
  "primitiveMode",
  "guardMode",
  "anyMode",
  "anySafeMode",
  "safeUserMode",
  "safeSectionMode",
  "safeServiceMode",
  "safePrimitiveMode",
  "safeGuardMode",
  "panicMode",
  "bootMode",
  "startupMode"
} ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_mode::getter_isUserMode (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_userMode == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_mode::getter_isSectionMode (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_sectionMode == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_mode::getter_isServiceMode (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_serviceMode == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_mode::getter_isPrimitiveMode (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_primitiveMode == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_mode::getter_isGuardMode (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_guardMode == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_mode::getter_isAnyMode (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_anyMode == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_mode::getter_isAnySafeMode (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_anySafeMode == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_mode::getter_isSafeUserMode (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_safeUserMode == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_mode::getter_isSafeSectionMode (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_safeSectionMode == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_mode::getter_isSafeServiceMode (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_safeServiceMode == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_mode::getter_isSafePrimitiveMode (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_safePrimitiveMode == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_mode::getter_isSafeGuardMode (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_safeGuardMode == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_mode::getter_isPanicMode (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_panicMode == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_mode::getter_isBootMode (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_bootMode == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_mode::getter_isStartupMode (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_startupMode == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mode::description (C_String & ioString,
                               const int32_t /* inIndentation */) const {
  ioString << "<enum @mode: " << gEnumNameArrayFor_mode [mEnum] ;
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_mode::objectCompare (const GALGAS_mode & inOperand) const {
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

//----------------------------------------------------------------------------------------------------------------------
//
//@mode type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_mode ("mode",
                             NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_mode::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mode ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_mode::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_mode (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mode GALGAS_mode::extractObject (const GALGAS_object & inObject,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  GALGAS_mode result ;
  const GALGAS_mode * p = (const GALGAS_mode *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_mode *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("mode", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@routineFormalArgumentListAST' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_routineFormalArgumentListAST : public cCollectionElement {
  public : GALGAS_routineFormalArgumentListAST_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_routineFormalArgumentListAST (const GALGAS_procFormalArgumentPassingMode & in_mFormalArgumentPassingMode,
                                                            const GALGAS_lstring & in_mSelector,
                                                            const GALGAS_lstring & in_mFormalArgumentTypeName,
                                                            const GALGAS_lstring & in_mFormalArgumentName
                                                            COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_routineFormalArgumentListAST (const GALGAS_routineFormalArgumentListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_routineFormalArgumentListAST::cCollectionElement_routineFormalArgumentListAST (const GALGAS_procFormalArgumentPassingMode & in_mFormalArgumentPassingMode,
                                                                                                  const GALGAS_lstring & in_mSelector,
                                                                                                  const GALGAS_lstring & in_mFormalArgumentTypeName,
                                                                                                  const GALGAS_lstring & in_mFormalArgumentName
                                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mFormalArgumentPassingMode, in_mSelector, in_mFormalArgumentTypeName, in_mFormalArgumentName) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_routineFormalArgumentListAST::cCollectionElement_routineFormalArgumentListAST (const GALGAS_routineFormalArgumentListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mFormalArgumentPassingMode, inElement.mProperty_mSelector, inElement.mProperty_mFormalArgumentTypeName, inElement.mProperty_mFormalArgumentName) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_routineFormalArgumentListAST::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_routineFormalArgumentListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_routineFormalArgumentListAST (mObject.mProperty_mFormalArgumentPassingMode, mObject.mProperty_mSelector, mObject.mProperty_mFormalArgumentTypeName, mObject.mProperty_mFormalArgumentName COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_routineFormalArgumentListAST::description (C_String & ioString, const int32_t inIndentation) const {
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
  ioString << "mFormalArgumentTypeName" ":" ;
  mObject.mProperty_mFormalArgumentTypeName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFormalArgumentName" ":" ;
  mObject.mProperty_mFormalArgumentName.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_routineFormalArgumentListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_routineFormalArgumentListAST * operand = (cCollectionElement_routineFormalArgumentListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_routineFormalArgumentListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineFormalArgumentListAST::GALGAS_routineFormalArgumentListAST (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineFormalArgumentListAST::GALGAS_routineFormalArgumentListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineFormalArgumentListAST GALGAS_routineFormalArgumentListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_routineFormalArgumentListAST  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineFormalArgumentListAST GALGAS_routineFormalArgumentListAST::constructor_listWithValue (const GALGAS_procFormalArgumentPassingMode & inOperand0,
                                                                                                    const GALGAS_lstring & inOperand1,
                                                                                                    const GALGAS_lstring & inOperand2,
                                                                                                    const GALGAS_lstring & inOperand3
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_routineFormalArgumentListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_routineFormalArgumentListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_routineFormalArgumentListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_routineFormalArgumentListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                     const GALGAS_procFormalArgumentPassingMode & in_mFormalArgumentPassingMode,
                                                                     const GALGAS_lstring & in_mSelector,
                                                                     const GALGAS_lstring & in_mFormalArgumentTypeName,
                                                                     const GALGAS_lstring & in_mFormalArgumentName
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_routineFormalArgumentListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_routineFormalArgumentListAST (in_mFormalArgumentPassingMode,
                                                                  in_mSelector,
                                                                  in_mFormalArgumentTypeName,
                                                                  in_mFormalArgumentName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_routineFormalArgumentListAST::addAssign_operation (const GALGAS_procFormalArgumentPassingMode & inOperand0,
                                                               const GALGAS_lstring & inOperand1,
                                                               const GALGAS_lstring & inOperand2,
                                                               const GALGAS_lstring & inOperand3
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_routineFormalArgumentListAST (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_routineFormalArgumentListAST::setter_append (GALGAS_routineFormalArgumentListAST_2D_element inElement,
                                                         C_Compiler * /* inCompiler */
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_routineFormalArgumentListAST (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_routineFormalArgumentListAST::setter_insertAtIndex (const GALGAS_procFormalArgumentPassingMode inOperand0,
                                                                const GALGAS_lstring inOperand1,
                                                                const GALGAS_lstring inOperand2,
                                                                const GALGAS_lstring inOperand3,
                                                                const GALGAS_uint inInsertionIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_routineFormalArgumentListAST (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_routineFormalArgumentListAST::setter_removeAtIndex (GALGAS_procFormalArgumentPassingMode & outOperand0,
                                                                GALGAS_lstring & outOperand1,
                                                                GALGAS_lstring & outOperand2,
                                                                GALGAS_lstring & outOperand3,
                                                                const GALGAS_uint inRemoveIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_routineFormalArgumentListAST * p = (cCollectionElement_routineFormalArgumentListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListAST) ;
      outOperand0 = p->mObject.mProperty_mFormalArgumentPassingMode ;
      outOperand1 = p->mObject.mProperty_mSelector ;
      outOperand2 = p->mObject.mProperty_mFormalArgumentTypeName ;
      outOperand3 = p->mObject.mProperty_mFormalArgumentName ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_routineFormalArgumentListAST::setter_popFirst (GALGAS_procFormalArgumentPassingMode & outOperand0,
                                                           GALGAS_lstring & outOperand1,
                                                           GALGAS_lstring & outOperand2,
                                                           GALGAS_lstring & outOperand3,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_routineFormalArgumentListAST * p = (cCollectionElement_routineFormalArgumentListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListAST) ;
    outOperand0 = p->mObject.mProperty_mFormalArgumentPassingMode ;
    outOperand1 = p->mObject.mProperty_mSelector ;
    outOperand2 = p->mObject.mProperty_mFormalArgumentTypeName ;
    outOperand3 = p->mObject.mProperty_mFormalArgumentName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_routineFormalArgumentListAST::setter_popLast (GALGAS_procFormalArgumentPassingMode & outOperand0,
                                                          GALGAS_lstring & outOperand1,
                                                          GALGAS_lstring & outOperand2,
                                                          GALGAS_lstring & outOperand3,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_routineFormalArgumentListAST * p = (cCollectionElement_routineFormalArgumentListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListAST) ;
    outOperand0 = p->mObject.mProperty_mFormalArgumentPassingMode ;
    outOperand1 = p->mObject.mProperty_mSelector ;
    outOperand2 = p->mObject.mProperty_mFormalArgumentTypeName ;
    outOperand3 = p->mObject.mProperty_mFormalArgumentName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_routineFormalArgumentListAST::method_first (GALGAS_procFormalArgumentPassingMode & outOperand0,
                                                        GALGAS_lstring & outOperand1,
                                                        GALGAS_lstring & outOperand2,
                                                        GALGAS_lstring & outOperand3,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_routineFormalArgumentListAST * p = (cCollectionElement_routineFormalArgumentListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListAST) ;
    outOperand0 = p->mObject.mProperty_mFormalArgumentPassingMode ;
    outOperand1 = p->mObject.mProperty_mSelector ;
    outOperand2 = p->mObject.mProperty_mFormalArgumentTypeName ;
    outOperand3 = p->mObject.mProperty_mFormalArgumentName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_routineFormalArgumentListAST::method_last (GALGAS_procFormalArgumentPassingMode & outOperand0,
                                                       GALGAS_lstring & outOperand1,
                                                       GALGAS_lstring & outOperand2,
                                                       GALGAS_lstring & outOperand3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_routineFormalArgumentListAST * p = (cCollectionElement_routineFormalArgumentListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListAST) ;
    outOperand0 = p->mObject.mProperty_mFormalArgumentPassingMode ;
    outOperand1 = p->mObject.mProperty_mSelector ;
    outOperand2 = p->mObject.mProperty_mFormalArgumentTypeName ;
    outOperand3 = p->mObject.mProperty_mFormalArgumentName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineFormalArgumentListAST GALGAS_routineFormalArgumentListAST::add_operation (const GALGAS_routineFormalArgumentListAST & inOperand,
                                                                                        C_Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_routineFormalArgumentListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineFormalArgumentListAST GALGAS_routineFormalArgumentListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_routineFormalArgumentListAST result = GALGAS_routineFormalArgumentListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineFormalArgumentListAST GALGAS_routineFormalArgumentListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_routineFormalArgumentListAST result = GALGAS_routineFormalArgumentListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineFormalArgumentListAST GALGAS_routineFormalArgumentListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_routineFormalArgumentListAST result = GALGAS_routineFormalArgumentListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_routineFormalArgumentListAST::plusAssign_operation (const GALGAS_routineFormalArgumentListAST inOperand,
                                                                C_Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_routineFormalArgumentListAST::setter_setMFormalArgumentPassingModeAtIndex (GALGAS_procFormalArgumentPassingMode inOperand,
                                                                                       GALGAS_uint inIndex,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_routineFormalArgumentListAST * p = (cCollectionElement_routineFormalArgumentListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFormalArgumentPassingMode = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_procFormalArgumentPassingMode GALGAS_routineFormalArgumentListAST::getter_mFormalArgumentPassingModeAtIndex (const GALGAS_uint & inIndex,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_routineFormalArgumentListAST * p = (cCollectionElement_routineFormalArgumentListAST *) attributes.ptr () ;
  GALGAS_procFormalArgumentPassingMode result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListAST) ;
    result = p->mObject.mProperty_mFormalArgumentPassingMode ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_routineFormalArgumentListAST::setter_setMSelectorAtIndex (GALGAS_lstring inOperand,
                                                                      GALGAS_uint inIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_routineFormalArgumentListAST * p = (cCollectionElement_routineFormalArgumentListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mSelector = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_routineFormalArgumentListAST::getter_mSelectorAtIndex (const GALGAS_uint & inIndex,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_routineFormalArgumentListAST * p = (cCollectionElement_routineFormalArgumentListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListAST) ;
    result = p->mObject.mProperty_mSelector ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_routineFormalArgumentListAST::setter_setMFormalArgumentTypeNameAtIndex (GALGAS_lstring inOperand,
                                                                                    GALGAS_uint inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_routineFormalArgumentListAST * p = (cCollectionElement_routineFormalArgumentListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFormalArgumentTypeName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_routineFormalArgumentListAST::getter_mFormalArgumentTypeNameAtIndex (const GALGAS_uint & inIndex,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_routineFormalArgumentListAST * p = (cCollectionElement_routineFormalArgumentListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListAST) ;
    result = p->mObject.mProperty_mFormalArgumentTypeName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_routineFormalArgumentListAST::setter_setMFormalArgumentNameAtIndex (GALGAS_lstring inOperand,
                                                                                GALGAS_uint inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_routineFormalArgumentListAST * p = (cCollectionElement_routineFormalArgumentListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFormalArgumentName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_routineFormalArgumentListAST::getter_mFormalArgumentNameAtIndex (const GALGAS_uint & inIndex,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_routineFormalArgumentListAST * p = (cCollectionElement_routineFormalArgumentListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListAST) ;
    result = p->mObject.mProperty_mFormalArgumentName ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_routineFormalArgumentListAST::cEnumerator_routineFormalArgumentListAST (const GALGAS_routineFormalArgumentListAST & inEnumeratedObject,
                                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineFormalArgumentListAST_2D_element cEnumerator_routineFormalArgumentListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_routineFormalArgumentListAST * p = (const cCollectionElement_routineFormalArgumentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListAST) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_procFormalArgumentPassingMode cEnumerator_routineFormalArgumentListAST::current_mFormalArgumentPassingMode (LOCATION_ARGS) const {
  const cCollectionElement_routineFormalArgumentListAST * p = (const cCollectionElement_routineFormalArgumentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListAST) ;
  return p->mObject.mProperty_mFormalArgumentPassingMode ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_routineFormalArgumentListAST::current_mSelector (LOCATION_ARGS) const {
  const cCollectionElement_routineFormalArgumentListAST * p = (const cCollectionElement_routineFormalArgumentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListAST) ;
  return p->mObject.mProperty_mSelector ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_routineFormalArgumentListAST::current_mFormalArgumentTypeName (LOCATION_ARGS) const {
  const cCollectionElement_routineFormalArgumentListAST * p = (const cCollectionElement_routineFormalArgumentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListAST) ;
  return p->mObject.mProperty_mFormalArgumentTypeName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_routineFormalArgumentListAST::current_mFormalArgumentName (LOCATION_ARGS) const {
  const cCollectionElement_routineFormalArgumentListAST * p = (const cCollectionElement_routineFormalArgumentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListAST) ;
  return p->mObject.mProperty_mFormalArgumentName ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@routineFormalArgumentListAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_routineFormalArgumentListAST ("routineFormalArgumentListAST",
                                                     NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_routineFormalArgumentListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineFormalArgumentListAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_routineFormalArgumentListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_routineFormalArgumentListAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineFormalArgumentListAST GALGAS_routineFormalArgumentListAST::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_routineFormalArgumentListAST result ;
  const GALGAS_routineFormalArgumentListAST * p = (const GALGAS_routineFormalArgumentListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_routineFormalArgumentListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineFormalArgumentListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

class cNode_routineLLVMNameDict : public GALGAS_routineLLVMNameDict_2D_element {
  public : cNode_routineLLVMNameDict * mInfPtr ;
  public : cNode_routineLLVMNameDict * mSupPtr ;
  public : int32_t mBalance ;

  public : cNode_routineLLVMNameDict (const GALGAS_mode & in_key,
                                      const GALGAS_string & inProperty_mRoutineLLVMName) :
  GALGAS_routineLLVMNameDict_2D_element (in_key, inProperty_mRoutineLLVMName),
  mInfPtr (NULL),
  mSupPtr (NULL),
  mBalance (0) {
  }

  public : cNode_routineLLVMNameDict (cNode_routineLLVMNameDict * inNode) ;

  public : virtual ~ cNode_routineLLVMNameDict (void) {
    macroMyDelete (mInfPtr) ;
    macroMyDelete (mSupPtr) ;
  }
} ;

//----------------------------------------------------------------------------------------------------------------------

class cSharedDictRoot_routineLLVMNameDict : public C_SharedObject {
//--------------------------------- Attributes
  private : cNode_routineLLVMNameDict * mRoot ;
  private : uint32_t mCount ;

//--------------------------------- Constructor
  protected : cSharedDictRoot_routineLLVMNameDict (LOCATION_ARGS) :
  C_SharedObject (THERE),
  mRoot (NULL),
  mCount (0) {
  }

//--------------------------------- Virtual destructor
  protected : virtual ~ cSharedDictRoot_routineLLVMNameDict (void) {
    macroMyDelete (mRoot) ;
  }

//--------------------------------- No copy
  private : cSharedDictRoot_routineLLVMNameDict (const cSharedDictRoot_routineLLVMNameDict &) ;
  private : cSharedDictRoot_routineLLVMNameDict & operator = (const cSharedDictRoot_routineLLVMNameDict &) ;

//--------------------------------- Copy a map
  protected : VIRTUAL_IN_DEBUG void copyFrom (const cSharedDictRoot_routineLLVMNameDict * inSource) ;

//--------------------------------- Insert
  protected : VIRTUAL_IN_DEBUG void performInsert (const GALGAS_routineLLVMNameDict_2D_element & inNewNode) {
    macroUniqueSharedObject (this) ;
    bool extension = false ;
    bool entryAdded = false ;
    recursiveAddEntry (mRoot, inNewNode, entryAdded, extension) ;
    if (entryAdded) {
      mCount ++ ;
    }
    #ifndef DO_NOT_GENERATE_CHECKINGS
      checkDict (HERE) ;
    #endif
  }

  protected : static void rotateLeft (cNode_routineLLVMNameDict * & ioRootPtr) {
    cNode_routineLLVMNameDict * ptr = ioRootPtr->mSupPtr ;
    ioRootPtr->mSupPtr = ptr->mInfPtr ;
    ptr->mInfPtr = ioRootPtr;

    if (ptr->mBalance >= 0) {
      ioRootPtr->mBalance ++ ;
    }else{
      ioRootPtr->mBalance += 1 - ptr->mBalance ;
    }

    if (ioRootPtr->mBalance > 0) {
      ptr->mBalance += ioRootPtr->mBalance + 1 ;
    }else{
      ptr->mBalance ++ ;
    }
    ioRootPtr = ptr ;
  }

  protected : static void rotateRight (cNode_routineLLVMNameDict * & ioRootPtr) {
    cNode_routineLLVMNameDict * ptr = ioRootPtr->mInfPtr ;
    ioRootPtr->mInfPtr = ptr->mSupPtr ;
    ptr->mSupPtr = ioRootPtr ;
   
    if (ptr->mBalance > 0) {
      ioRootPtr->mBalance += -ptr->mBalance - 1 ;
    }else{
      ioRootPtr->mBalance -- ;
    }
    if (ioRootPtr->mBalance >= 0) {
      ptr->mBalance -- ;
    }else{
      ptr->mBalance += ioRootPtr->mBalance - 1 ;
    }
    ioRootPtr = ptr ;
  }

  protected : static void recursiveAddEntry (cNode_routineLLVMNameDict * & ioRootPtr,
                                             const GALGAS_routineLLVMNameDict_2D_element & inNewNode,
                                             bool & outEntryAdded,
                                             bool & ioExtension) {
    if (ioRootPtr == NULL) {
      macroMyNew (ioRootPtr, cNode_routineLLVMNameDict (inNewNode.mProperty_key, inNewNode.mProperty_mRoutineLLVMName)) ;
      ioExtension = true ;
      outEntryAdded = true ;
    }else{
      macroValidPointer (ioRootPtr) ;
      const typeComparisonResult comparaison = ioRootPtr->mProperty_key.objectCompare (inNewNode.mProperty_key) ;
      if (comparaison == kFirstOperandGreaterThanSecond) {
        recursiveAddEntry (ioRootPtr->mInfPtr, inNewNode, outEntryAdded, ioExtension) ;
        if (ioExtension) {
          ioRootPtr->mBalance++;
          if (ioRootPtr->mBalance == 0) {
            ioExtension = false;
          }else if (ioRootPtr->mBalance == 2) {
            if (ioRootPtr->mInfPtr->mBalance == -1) {
              rotateLeft (ioRootPtr->mInfPtr) ;
            }
            rotateRight (ioRootPtr) ;
            ioExtension = false;
          }
        }
      }else if (comparaison == kFirstOperandLowerThanSecond) {
        recursiveAddEntry (ioRootPtr->mSupPtr, inNewNode, outEntryAdded, ioExtension) ;
        if (ioExtension) {
          ioRootPtr->mBalance-- ;
          if (ioRootPtr->mBalance == 0) {
            ioExtension = false ;
          }else if (ioRootPtr->mBalance == -2) {
            if (ioRootPtr->mSupPtr->mBalance == 1) {
              rotateRight (ioRootPtr->mSupPtr) ;
            }
            rotateLeft (ioRootPtr) ;
            ioExtension = false;
          }
        }
      }else{  // Found
        ioExtension = false ;
        outEntryAdded = false ;
        ioRootPtr->mProperty_mRoutineLLVMName = inNewNode.mProperty_mRoutineLLVMName ;
      }
    }
  }

//--------------------------------- Search
  private : VIRTUAL_IN_DEBUG cNode_routineLLVMNameDict * findEntryInDict (const GALGAS_mode & inKey) const {
    cNode_routineLLVMNameDict * result = NULL ;
    cNode_routineLLVMNameDict * currentNode = mRoot ;
    while ((currentNode != NULL) && (NULL == result)) {
      macroValidPointer (currentNode) ;
      const typeComparisonResult comparaison = currentNode->mProperty_key.objectCompare (inKey) ;
      if (comparaison == kFirstOperandGreaterThanSecond) {
        currentNode = currentNode->mInfPtr ;
      }else if (comparaison == kFirstOperandLowerThanSecond) {
        currentNode = currentNode->mSupPtr ;
      }else{ // Found
        result = currentNode ;
      }
    }
    return result ;
  }

//--------------------------------- Remove
  protected : VIRTUAL_IN_DEBUG void performRemove (const GALGAS_mode & inKey, cNode_routineLLVMNameDict * & outRemovedNodePtr) {
    bool branchHasBeenRemoved = false ; // Unused here
    internalRemoveRecursively (mRoot, inKey, outRemovedNodePtr, branchHasBeenRemoved) ;
    if (NULL != outRemovedNodePtr) {
      mCount -- ;
    }
  }

  protected : static void supBranchDecreased (cNode_routineLLVMNameDict * & ioRoot,
                                              bool & ioBranchHasBeenRemoved) {
    ioRoot->mBalance ++ ;
    switch (ioRoot->mBalance) {
    case 0:
      break;
    case 1:
      ioBranchHasBeenRemoved = false;
      break;
    case 2:
      switch (ioRoot->mInfPtr->mBalance) {
      case -1:
        rotateLeft (ioRoot->mInfPtr) ;
        rotateRight (ioRoot) ;
        break;
      case 0:
        rotateRight (ioRoot) ;
        ioBranchHasBeenRemoved = false;
        break;
      case 1:
        rotateRight (ioRoot) ;
        break;
      }
      break;
    }
  }

  protected : static void infBranchDecreased (cNode_routineLLVMNameDict * & ioRoot,
                                              bool & ioBranchHasBeenRemoved) {
    ioRoot->mBalance -- ;
    switch (ioRoot->mBalance) {
    case 0:
      break;
    case -1:
      ioBranchHasBeenRemoved = false;
      break;
    case -2:
      switch (ioRoot->mSupPtr->mBalance) {
      case 1:
        rotateRight (ioRoot->mSupPtr) ;
        rotateLeft (ioRoot) ;
        break;
      case 0:
        rotateLeft (ioRoot) ;
        ioBranchHasBeenRemoved = false;
        break;
      case -1:
        rotateLeft (ioRoot) ;
        break;
      }
      break;
    }
  }

  protected : static void  getPreviousElement (cNode_routineLLVMNameDict * & ioRoot,
                                               cNode_routineLLVMNameDict * & ioElement,
                                               bool & ioBranchHasBeenRemoved) {
    if (ioRoot->mSupPtr == NULL) {
      ioElement = ioRoot ;
      ioRoot = ioRoot->mInfPtr ;
      ioBranchHasBeenRemoved = true ;
    }else{
      getPreviousElement (ioRoot->mSupPtr, ioElement, ioBranchHasBeenRemoved) ;
      if (ioBranchHasBeenRemoved) {
        supBranchDecreased (ioRoot, ioBranchHasBeenRemoved) ;
      }
    }
  }

  protected : static void internalRemoveRecursively (cNode_routineLLVMNameDict * & ioRoot,
                                                     const GALGAS_mode & inKeyToRemove,
                                                     cNode_routineLLVMNameDict * & outRemovedNode,
                                                     bool & ioBranchHasBeenRemoved) {
    if (ioRoot != NULL) {
      const typeComparisonResult comparaison = ioRoot->mProperty_key.objectCompare (inKeyToRemove) ;
      if (comparaison == kFirstOperandGreaterThanSecond) {
        internalRemoveRecursively (ioRoot->mInfPtr, inKeyToRemove, outRemovedNode, ioBranchHasBeenRemoved);
        if (ioBranchHasBeenRemoved) {
          infBranchDecreased (ioRoot, ioBranchHasBeenRemoved) ;
        }
      }else if (comparaison == kFirstOperandLowerThanSecond) {
        internalRemoveRecursively (ioRoot->mSupPtr, inKeyToRemove, outRemovedNode, ioBranchHasBeenRemoved);
        if (ioBranchHasBeenRemoved) {
          supBranchDecreased (ioRoot, ioBranchHasBeenRemoved);
        }
      }else{
        cNode_routineLLVMNameDict * p = ioRoot ;
        if (p->mInfPtr == NULL) {
          ioRoot = p->mSupPtr;
          p->mSupPtr = NULL;
          ioBranchHasBeenRemoved = true;
        }else if (p->mSupPtr == NULL) {
          ioRoot = p->mInfPtr;
          p->mInfPtr = NULL;
          ioBranchHasBeenRemoved = true;
        }else{
          getPreviousElement (p->mInfPtr, ioRoot, ioBranchHasBeenRemoved) ;
          ioRoot->mSupPtr = p->mSupPtr;
          p->mSupPtr = NULL;
          ioRoot->mInfPtr = p->mInfPtr;
          p->mInfPtr = NULL;
          ioRoot->mBalance = p->mBalance;
          p->mBalance = 0;
          if (ioBranchHasBeenRemoved) {
            infBranchDecreased (ioRoot, ioBranchHasBeenRemoved) ;
          }
        }
        outRemovedNode = p ;
      }
    }
  }

//--------------------------------- Internal method for enumeration
  protected : VIRTUAL_IN_DEBUG void populateEnumerationArray (capCollectionElementArray & ioEnumerationArray) const ;

//--------------------------------- Check Dictionary
  #ifndef DO_NOT_GENERATE_CHECKINGS
      private : VIRTUAL_IN_DEBUG void checkDict (LOCATION_ARGS) const {
      uint32_t n = 0 ;
      checkNode (mRoot, n) ;
      MF_AssertThere (n == mCount, "n (%lld) != mCount (%lld)", n, mCount) ;
    }
  #endif


  #ifndef DO_NOT_GENERATE_CHECKINGS
    private : static void checkNode (const cNode_routineLLVMNameDict * inNode,
                                     uint32_t & ioCount) {
      if (NULL != inNode) {
        checkNode (inNode->mInfPtr, ioCount) ;
        ioCount ++ ;
        checkNode (inNode->mSupPtr, ioCount) ;
      }
    }
  #endif

//--------------------------------- Compare Dictionaries
  public : typeComparisonResult compare (const cSharedDictRoot_routineLLVMNameDict * inOperand) const {
    typeComparisonResult result = kOperandEqual ;
    if (mCount < inOperand->mCount) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mCount > inOperand->mCount) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      capCollectionElementArray enumerationArray ;
      populateEnumerationArray (enumerationArray) ;
      capCollectionElementArray operandEnumerationArray ;
      inOperand->populateEnumerationArray (operandEnumerationArray) ;
      result = enumerationArray.compareCollectionElementArray (operandEnumerationArray) ;
    }
    return result ;
  }

//--------------------------------- Friend
  friend class GALGAS_routineLLVMNameDict ;
} ;


//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineLLVMNameDict::GALGAS_routineLLVMNameDict (void) :
AC_GALGAS_root (),
mSharedDict (NULL) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineLLVMNameDict::~ GALGAS_routineLLVMNameDict (void) {
  macroDetachSharedObject (mSharedDict) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineLLVMNameDict::GALGAS_routineLLVMNameDict (const GALGAS_routineLLVMNameDict & inSource) :
AC_GALGAS_root (),
mSharedDict (NULL) {
  macroAssignSharedObject (mSharedDict, inSource.mSharedDict) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineLLVMNameDict & GALGAS_routineLLVMNameDict::operator = (const GALGAS_routineLLVMNameDict & inSource) {
  macroAssignSharedObject (mSharedDict, inSource.mSharedDict) ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_routineLLVMNameDict::drop (void) {
  macroDetachSharedObject (mSharedDict) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineLLVMNameDict GALGAS_routineLLVMNameDict::constructor_emptyDict (LOCATION_ARGS) {
  GALGAS_routineLLVMNameDict result ;
  macroMyNew (result.mSharedDict, cSharedDictRoot_routineLLVMNameDict (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Description
#endif

//----------------------------------------------------------------------------------------------------------------------

static void internalDescription_routineLLVMNameDict (const cNode_routineLLVMNameDict * inNode,
                                 C_String & ioString,
                                 const int32_t inIndentation) {
  if (NULL != inNode) {
    internalDescription_routineLLVMNameDict (inNode->mInfPtr, ioString, inIndentation) ;
    ioString << "\n" ;
    inNode->description (ioString, inIndentation) ;
    internalDescription_routineLLVMNameDict (inNode->mSupPtr, ioString, inIndentation) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_routineLLVMNameDict::description (C_String & ioString,
                                             const int32_t inIndentation) const {
  ioString << "<dict @" << staticTypeDescriptor ()->mGalgasTypeName << ":" ;
  if (isValid ()) {
    internalDescription_routineLLVMNameDict (mSharedDict->mRoot, ioString, inIndentation) ;
  }else{
    ioString << " not built" ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Insulate
#endif

//----------------------------------------------------------------------------------------------------------------------

cNode_routineLLVMNameDict::cNode_routineLLVMNameDict (cNode_routineLLVMNameDict * inNode) :
GALGAS_routineLLVMNameDict_2D_element (inNode->mProperty_key, inNode->mProperty_mRoutineLLVMName),
mInfPtr (NULL),
mSupPtr (NULL),
mBalance (inNode->mBalance) {
  if (inNode->mInfPtr != NULL) {
    macroMyNew (mInfPtr, cNode_routineLLVMNameDict (inNode->mInfPtr)) ;
  }
  if (inNode->mSupPtr != NULL) {
    macroMyNew (mSupPtr, cNode_routineLLVMNameDict (inNode->mSupPtr)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cSharedDictRoot_routineLLVMNameDict::copyFrom (const cSharedDictRoot_routineLLVMNameDict * inSource) {
  macroUniqueSharedObject (this) ;
  #ifndef DO_NOT_GENERATE_CHECKINGS
    inSource->checkDict (HERE) ;
  #endif
  macroValidSharedObject (inSource, cSharedDictRoot_routineLLVMNameDict) ;
  mCount = inSource->mCount ;
  if (NULL != inSource->mRoot) {
    macroMyNew (mRoot, cNode_routineLLVMNameDict (inSource->mRoot)) ;
  }
  #ifndef DO_NOT_GENERATE_CHECKINGS
    checkDict (HERE) ;
  #endif
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_routineLLVMNameDict::insulate (LOCATION_ARGS) {
  if ((NULL != mSharedDict) && !mSharedDict->isUniquelyReferenced ()) {
    cSharedDictRoot_routineLLVMNameDict * p = NULL ;
    macroMyNew (p, cSharedDictRoot_routineLLVMNameDict (THERE)) ;
    p->copyFrom (mSharedDict) ;
    macroAssignSharedObject (mSharedDict, p) ;
    macroDetachSharedObject (p) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Insert
#endif

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_routineLLVMNameDict::addAssign_operation (const GALGAS_mode & inKey,
                                                      const GALGAS_string & inArgument0,
                                                      C_Compiler * /* inCompiler */
                                                      COMMA_LOCATION_ARGS) {
  GALGAS_routineLLVMNameDict_2D_element newElement (inKey, inArgument0) ;
  if (isValid () && newElement.isValid ()) {
    insulate (THERE) ;
    macroUniqueSharedObject (mSharedDict) ;
    mSharedDict->performInsert (newElement) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_routineLLVMNameDict::getter_hasKey (const GALGAS_mode & inKey
                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (isValid () && inKey.isValid ()) {
    const cNode_routineLLVMNameDict * p = mSharedDict->findEntryInDict (inKey) ;
    result = GALGAS_bool (p != NULL) ;
   }
   return result ;
 }

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_routineLLVMNameDict::method_searchKey (GALGAS_mode inKey,
                                                   GALGAS_string & outArgument0,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  const cNode_routineLLVMNameDict * p = NULL ;
  if (isValid () && inKey.isValid ()) {
    p = mSharedDict->findEntryInDict (inKey) ;
    if (NULL == p) {
    //--- Build error message
      C_String message ;
      message << "cannot search in dict: the key does not exist" ;
    //--- Emit error message
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (NULL == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cNode_routineLLVMNameDict) ;
    outArgument0 = p->mProperty_mRoutineLLVMName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_routineLLVMNameDict::setter_removeKey (GALGAS_mode inKey,
                                                   GALGAS_string & outArgument0,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  cNode_routineLLVMNameDict * p = NULL ;
  if (isValid () && inKey.isValid ()) {
    insulate (THERE) ;
    macroUniqueSharedObject (mSharedDict) ;
    mSharedDict->performRemove (inKey, p) ;
    if (NULL == p) {
    //--- Build error message
      C_String message ;
      message << "cannot remove in dict: the key does not exist" ;
    //--- Emit error message
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (NULL == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cNode_routineLLVMNameDict) ;
    outArgument0 = p->mProperty_mRoutineLLVMName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_routineLLVMNameDict::getter_mRoutineLLVMNameForKey (const GALGAS_mode & inKey,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (isValid () && inKey.isValid ()) {
  const cNode_routineLLVMNameDict * p = mSharedDict->findEntryInDict (inKey) ;
   if (NULL == p) {
    //--- Build error message
      C_String message ;
      message << "cannot get mRoutineLLVMName ForKey in dict: the key does not exist" ;
    //--- Emit error message
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      macroValidSharedObject (p, cNode_routineLLVMNameDict) ;
      result = p->mProperty_mRoutineLLVMName  ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_routineLLVMNameDict::setter_setMRoutineLLVMNameForKey (GALGAS_string inPropertyValue,
                                                                   GALGAS_mode inKey,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    insulate (THERE) ;
    macroUniqueSharedObject (mSharedDict) ;
    cNode_routineLLVMNameDict * p = mSharedDict->findEntryInDict (inKey) ;
    if (NULL == p) {
    //--- Build error message
      C_String message ;
      message << "cannot setMRoutineLLVMNameForKey in dict: the key does not exist" ;
    //--- Emit error message
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      p->mProperty_mRoutineLLVMName = inPropertyValue ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Object compare
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_routineLLVMNameDict::objectCompare (const GALGAS_routineLLVMNameDict & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    result = mSharedDict->compare (inOperand.mSharedDict) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark map Enumeration
#endif

//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_routineLLVMNameDict : public cCollectionElement {
  public : GALGAS_routineLLVMNameDict_2D_element mElement ;

//--- Constructor
  public : cCollectionElement_routineLLVMNameDict (const GALGAS_routineLLVMNameDict_2D_element & inElement) :
  cCollectionElement (HERE),
  mElement (inElement) {
  }

//--- No copy
  private : cCollectionElement_routineLLVMNameDict (const cCollectionElement_routineLLVMNameDict &) ;
  private : cCollectionElement_routineLLVMNameDict & operator = (const cCollectionElement_routineLLVMNameDict &) ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const { return mElement.isValid () ; }

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const {
    const cCollectionElement_routineLLVMNameDict * p = (const cCollectionElement_routineLLVMNameDict *) inOperand ;
    return mElement.objectCompare (p->mElement) ;
  }

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_routineLLVMNameDict (mElement)) ;
    return p ;
  }

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const {
    mElement.description (ioString, inIndentation) ;
  }
} ;

//----------------------------------------------------------------------------------------------------------------------

static void enterAscendingEnumeration_routineLLVMNameDict (cNode_routineLLVMNameDict * inNode,
                                                       capCollectionElementArray & ioEnumerationArray) {
  if (inNode != NULL) {
    enterAscendingEnumeration_routineLLVMNameDict (inNode->mInfPtr, ioEnumerationArray) ;
    cCollectionElement_routineLLVMNameDict * p = NULL ;
    macroMyNew (p, cCollectionElement_routineLLVMNameDict (*inNode)) ;
    capCollectionElement element ;
    element.setPointer (p) ;
    macroDetachSharedObject (p) ;
    ioEnumerationArray.appendObject (element) ;
    enterAscendingEnumeration_routineLLVMNameDict (inNode->mSupPtr, ioEnumerationArray) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cSharedDictRoot_routineLLVMNameDict::populateEnumerationArray (capCollectionElementArray & ioEnumerationArray) const {
  #ifndef DO_NOT_GENERATE_CHECKINGS
    checkDict (HERE) ;
  #endif
  ioEnumerationArray.setCapacity (mCount) ;
  enterAscendingEnumeration_routineLLVMNameDict (mRoot, ioEnumerationArray) ;
  MF_Assert (mCount == ioEnumerationArray.count (), "mCount (%lld) != ioEnumerationArray.count () (%lld)", mCount, ioEnumerationArray.count ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_routineLLVMNameDict::populateEnumerationArray (capCollectionElementArray & ioEnumerationArray) const {
  if (NULL != mSharedDict) {
    mSharedDict->populateEnumerationArray (ioEnumerationArray) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_routineLLVMNameDict::cEnumerator_routineLLVMNameDict (const GALGAS_routineLLVMNameDict & inEnumeratedObject,
                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineLLVMNameDict_2D_element cEnumerator_routineLLVMNameDict::current (LOCATION_ARGS) const {
  const cCollectionElement_routineLLVMNameDict* p = dynamic_cast  <const cCollectionElement_routineLLVMNameDict*> (currentObjectPtr (THERE)) ;
  macroValidSharedObject (p, cCollectionElement_routineLLVMNameDict) ;
  return GALGAS_routineLLVMNameDict_2D_element (p->mElement) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mode cEnumerator_routineLLVMNameDict::current_key (LOCATION_ARGS) const {
  const cCollectionElement_routineLLVMNameDict* p = dynamic_cast  <const cCollectionElement_routineLLVMNameDict*> (currentObjectPtr (THERE)) ;
  macroValidSharedObject (p, cCollectionElement_routineLLVMNameDict) ;
  return p->mElement.mProperty_key ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_routineLLVMNameDict::current_mRoutineLLVMName (LOCATION_ARGS) const {
  const cCollectionElement_routineLLVMNameDict* p = dynamic_cast  <const cCollectionElement_routineLLVMNameDict*> (currentObjectPtr (THERE)) ;
  macroValidSharedObject (p, cCollectionElement_routineLLVMNameDict) ;
  return p->mElement.mProperty_mRoutineLLVMName ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_routineLLVMNameDict::optional_searchKey (const GALGAS_mode & inKey,
                                                     GALGAS_string & outArgument0) const {
  const cNode_routineLLVMNameDict * p = NULL ;
  if ((mSharedDict != NULL) && inKey.isValid ()) {
    p = (const cNode_routineLLVMNameDict *) mSharedDict->findEntryInDict (inKey) ;
  }
  const bool result = NULL != p ;
  if (result) {
    macroValidSharedObject (p, cNode_routineLLVMNameDict) ;
    outArgument0 = p->mProperty_mRoutineLLVMName ;
  }else{
    outArgument0.drop () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@routineLLVMNameDict type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_routineLLVMNameDict ("routineLLVMNameDict",
                                            NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_routineLLVMNameDict::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineLLVMNameDict ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_routineLLVMNameDict::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_routineLLVMNameDict (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineLLVMNameDict GALGAS_routineLLVMNameDict::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_routineLLVMNameDict result ;
  const GALGAS_routineLLVMNameDict * p = (const GALGAS_routineLLVMNameDict *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_routineLLVMNameDict *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineLLVMNameDict", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

