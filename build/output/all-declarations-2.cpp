#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-2.h"


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Class for element of '@taskSetupListAST' list                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_taskSetupListAST : public cCollectionElement {
  public : GALGAS_taskSetupListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_taskSetupListAST (const GALGAS_lbigint & in_mTaskSetupPriority,
                                                const GALGAS_instructionListAST & in_mTaskSetupInstructionList,
                                                const GALGAS_location & in_mEndOfTaskSetupDeclaration
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

cCollectionElement_taskSetupListAST::cCollectionElement_taskSetupListAST (const GALGAS_lbigint & in_mTaskSetupPriority,
                                                                          const GALGAS_instructionListAST & in_mTaskSetupInstructionList,
                                                                          const GALGAS_location & in_mEndOfTaskSetupDeclaration
                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mTaskSetupPriority, in_mTaskSetupInstructionList, in_mEndOfTaskSetupDeclaration) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_taskSetupListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_taskSetupListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_taskSetupListAST (mObject.mProperty_mTaskSetupPriority, mObject.mProperty_mTaskSetupInstructionList, mObject.mProperty_mEndOfTaskSetupDeclaration COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_taskSetupListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTaskSetupPriority" ":" ;
  mObject.mProperty_mTaskSetupPriority.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTaskSetupInstructionList" ":" ;
  mObject.mProperty_mTaskSetupInstructionList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEndOfTaskSetupDeclaration" ":" ;
  mObject.mProperty_mEndOfTaskSetupDeclaration.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_taskSetupListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_taskSetupListAST * operand = (cCollectionElement_taskSetupListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_taskSetupListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskSetupListAST::GALGAS_taskSetupListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskSetupListAST::GALGAS_taskSetupListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskSetupListAST GALGAS_taskSetupListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_taskSetupListAST  (capCollectionElementArray ()) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskSetupListAST GALGAS_taskSetupListAST::constructor_listWithValue (const GALGAS_lbigint & inOperand0,
                                                                            const GALGAS_instructionListAST & inOperand1,
                                                                            const GALGAS_location & inOperand2
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_taskSetupListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_taskSetupListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_taskSetupListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskSetupListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                         const GALGAS_lbigint & in_mTaskSetupPriority,
                                                         const GALGAS_instructionListAST & in_mTaskSetupInstructionList,
                                                         const GALGAS_location & in_mEndOfTaskSetupDeclaration
                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_taskSetupListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_taskSetupListAST (in_mTaskSetupPriority,
                                                      in_mTaskSetupInstructionList,
                                                      in_mEndOfTaskSetupDeclaration COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskSetupListAST::addAssign_operation (const GALGAS_lbigint & inOperand0,
                                                   const GALGAS_instructionListAST & inOperand1,
                                                   const GALGAS_location & inOperand2
                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_taskSetupListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskSetupListAST::setter_insertAtIndex (const GALGAS_lbigint inOperand0,
                                                    const GALGAS_instructionListAST inOperand1,
                                                    const GALGAS_location inOperand2,
                                                    const GALGAS_uint inInsertionIndex,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_taskSetupListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskSetupListAST::setter_removeAtIndex (GALGAS_lbigint & outOperand0,
                                                    GALGAS_instructionListAST & outOperand1,
                                                    GALGAS_location & outOperand2,
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
      outOperand2.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_taskSetupListAST) ;
      outOperand0 = p->mObject.mProperty_mTaskSetupPriority ;
      outOperand1 = p->mObject.mProperty_mTaskSetupInstructionList ;
      outOperand2 = p->mObject.mProperty_mEndOfTaskSetupDeclaration ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskSetupListAST::setter_popFirst (GALGAS_lbigint & outOperand0,
                                               GALGAS_instructionListAST & outOperand1,
                                               GALGAS_location & outOperand2,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_taskSetupListAST * p = (cCollectionElement_taskSetupListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_taskSetupListAST) ;
    outOperand0 = p->mObject.mProperty_mTaskSetupPriority ;
    outOperand1 = p->mObject.mProperty_mTaskSetupInstructionList ;
    outOperand2 = p->mObject.mProperty_mEndOfTaskSetupDeclaration ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskSetupListAST::setter_popLast (GALGAS_lbigint & outOperand0,
                                              GALGAS_instructionListAST & outOperand1,
                                              GALGAS_location & outOperand2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_taskSetupListAST * p = (cCollectionElement_taskSetupListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_taskSetupListAST) ;
    outOperand0 = p->mObject.mProperty_mTaskSetupPriority ;
    outOperand1 = p->mObject.mProperty_mTaskSetupInstructionList ;
    outOperand2 = p->mObject.mProperty_mEndOfTaskSetupDeclaration ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskSetupListAST::method_first (GALGAS_lbigint & outOperand0,
                                            GALGAS_instructionListAST & outOperand1,
                                            GALGAS_location & outOperand2,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_taskSetupListAST * p = (cCollectionElement_taskSetupListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_taskSetupListAST) ;
    outOperand0 = p->mObject.mProperty_mTaskSetupPriority ;
    outOperand1 = p->mObject.mProperty_mTaskSetupInstructionList ;
    outOperand2 = p->mObject.mProperty_mEndOfTaskSetupDeclaration ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskSetupListAST::method_last (GALGAS_lbigint & outOperand0,
                                           GALGAS_instructionListAST & outOperand1,
                                           GALGAS_location & outOperand2,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_taskSetupListAST * p = (cCollectionElement_taskSetupListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_taskSetupListAST) ;
    outOperand0 = p->mObject.mProperty_mTaskSetupPriority ;
    outOperand1 = p->mObject.mProperty_mTaskSetupInstructionList ;
    outOperand2 = p->mObject.mProperty_mEndOfTaskSetupDeclaration ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskSetupListAST GALGAS_taskSetupListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_taskSetupListAST result = GALGAS_taskSetupListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskSetupListAST GALGAS_taskSetupListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_taskSetupListAST result = GALGAS_taskSetupListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskSetupListAST GALGAS_taskSetupListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_taskSetupListAST result = GALGAS_taskSetupListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskSetupListAST::plusAssign_operation (const GALGAS_taskSetupListAST inOperand,
                                                    C_Compiler * /* inCompiler */
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbigint GALGAS_taskSetupListAST::getter_mTaskSetupPriorityAtIndex (const GALGAS_uint & inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_taskSetupListAST * p = (cCollectionElement_taskSetupListAST *) attributes.ptr () ;
  GALGAS_lbigint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_taskSetupListAST) ;
    result = p->mObject.mProperty_mTaskSetupPriority ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST GALGAS_taskSetupListAST::getter_mTaskSetupInstructionListAtIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_taskSetupListAST * p = (cCollectionElement_taskSetupListAST *) attributes.ptr () ;
  GALGAS_instructionListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_taskSetupListAST) ;
    result = p->mObject.mProperty_mTaskSetupInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_taskSetupListAST::getter_mEndOfTaskSetupDeclarationAtIndex (const GALGAS_uint & inIndex,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_taskSetupListAST * p = (cCollectionElement_taskSetupListAST *) attributes.ptr () ;
  GALGAS_location result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_taskSetupListAST) ;
    result = p->mObject.mProperty_mEndOfTaskSetupDeclaration ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_taskSetupListAST::cEnumerator_taskSetupListAST (const GALGAS_taskSetupListAST & inEnumeratedObject,
                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskSetupListAST_2D_element cEnumerator_taskSetupListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_taskSetupListAST * p = (const cCollectionElement_taskSetupListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_taskSetupListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbigint cEnumerator_taskSetupListAST::current_mTaskSetupPriority (LOCATION_ARGS) const {
  const cCollectionElement_taskSetupListAST * p = (const cCollectionElement_taskSetupListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_taskSetupListAST) ;
  return p->mObject.mProperty_mTaskSetupPriority ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST cEnumerator_taskSetupListAST::current_mTaskSetupInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_taskSetupListAST * p = (const cCollectionElement_taskSetupListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_taskSetupListAST) ;
  return p->mObject.mProperty_mTaskSetupInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cEnumerator_taskSetupListAST::current_mEndOfTaskSetupDeclaration (LOCATION_ARGS) const {
  const cCollectionElement_taskSetupListAST * p = (const cCollectionElement_taskSetupListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_taskSetupListAST) ;
  return p->mObject.mProperty_mEndOfTaskSetupDeclaration ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @taskSetupListAST type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_taskSetupListAST ("taskSetupListAST",
                                         NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_taskSetupListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_taskSetupListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_taskSetupListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_taskSetupListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Class for element of '@syncInstructionBranchListAST' list                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_syncInstructionBranchListAST : public cCollectionElement {
  public : GALGAS_syncInstructionBranchListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_syncInstructionBranchListAST (const GALGAS_guardedCommandAST & in_mGuardedCommand,
                                                            const GALGAS_instructionListAST & in_mInstructionList,
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

cCollectionElement_syncInstructionBranchListAST::cCollectionElement_syncInstructionBranchListAST (const GALGAS_guardedCommandAST & in_mGuardedCommand,
                                                                                                  const GALGAS_instructionListAST & in_mInstructionList,
                                                                                                  const GALGAS_location & in_mEndOfBranch
                                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mGuardedCommand, in_mInstructionList, in_mEndOfBranch) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_syncInstructionBranchListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_syncInstructionBranchListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_syncInstructionBranchListAST (mObject.mProperty_mGuardedCommand, mObject.mProperty_mInstructionList, mObject.mProperty_mEndOfBranch COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_syncInstructionBranchListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_syncInstructionBranchListAST * operand = (cCollectionElement_syncInstructionBranchListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_syncInstructionBranchListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syncInstructionBranchListAST::GALGAS_syncInstructionBranchListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syncInstructionBranchListAST::GALGAS_syncInstructionBranchListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syncInstructionBranchListAST GALGAS_syncInstructionBranchListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_syncInstructionBranchListAST  (capCollectionElementArray ()) ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syncInstructionBranchListAST GALGAS_syncInstructionBranchListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_syncInstructionBranchListAST result = GALGAS_syncInstructionBranchListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syncInstructionBranchListAST GALGAS_syncInstructionBranchListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_syncInstructionBranchListAST result = GALGAS_syncInstructionBranchListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syncInstructionBranchListAST GALGAS_syncInstructionBranchListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_syncInstructionBranchListAST result = GALGAS_syncInstructionBranchListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_syncInstructionBranchListAST::plusAssign_operation (const GALGAS_syncInstructionBranchListAST inOperand,
                                                                C_Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_syncInstructionBranchListAST::cEnumerator_syncInstructionBranchListAST (const GALGAS_syncInstructionBranchListAST & inEnumeratedObject,
                                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syncInstructionBranchListAST_2D_element cEnumerator_syncInstructionBranchListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_syncInstructionBranchListAST * p = (const cCollectionElement_syncInstructionBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_syncInstructionBranchListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardedCommandAST cEnumerator_syncInstructionBranchListAST::current_mGuardedCommand (LOCATION_ARGS) const {
  const cCollectionElement_syncInstructionBranchListAST * p = (const cCollectionElement_syncInstructionBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_syncInstructionBranchListAST) ;
  return p->mObject.mProperty_mGuardedCommand ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST cEnumerator_syncInstructionBranchListAST::current_mInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_syncInstructionBranchListAST * p = (const cCollectionElement_syncInstructionBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_syncInstructionBranchListAST) ;
  return p->mObject.mProperty_mInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cEnumerator_syncInstructionBranchListAST::current_mEndOfBranch (LOCATION_ARGS) const {
  const cCollectionElement_syncInstructionBranchListAST * p = (const cCollectionElement_syncInstructionBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_syncInstructionBranchListAST) ;
  return p->mObject.mProperty_mEndOfBranch ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @syncInstructionBranchListAST type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_syncInstructionBranchListAST ("syncInstructionBranchListAST",
                                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_syncInstructionBranchListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syncInstructionBranchListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_syncInstructionBranchListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_syncInstructionBranchListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Class for element of '@instructionListAST' list                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_instructionListAST : public cCollectionElement {
  public : GALGAS_instructionListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_instructionListAST (const GALGAS_instructionAST & in_mInstruction
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

cCollectionElement_instructionListAST::cCollectionElement_instructionListAST (const GALGAS_instructionAST & in_mInstruction
                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mInstruction) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_instructionListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_instructionListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_instructionListAST (mObject.mProperty_mInstruction COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_instructionListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInstruction" ":" ;
  mObject.mProperty_mInstruction.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_instructionListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_instructionListAST * operand = (cCollectionElement_instructionListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_instructionListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST::GALGAS_instructionListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST::GALGAS_instructionListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST GALGAS_instructionListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_instructionListAST  (capCollectionElementArray ()) ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_instructionListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                           const GALGAS_instructionAST & in_mInstruction
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_instructionListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_instructionListAST (in_mInstruction COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST GALGAS_instructionListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_instructionListAST result = GALGAS_instructionListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST GALGAS_instructionListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_instructionListAST result = GALGAS_instructionListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST GALGAS_instructionListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_instructionListAST result = GALGAS_instructionListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_instructionListAST::plusAssign_operation (const GALGAS_instructionListAST inOperand,
                                                      C_Compiler * /* inCompiler */
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

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



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_instructionListAST::cEnumerator_instructionListAST (const GALGAS_instructionListAST & inEnumeratedObject,
                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST_2D_element cEnumerator_instructionListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_instructionListAST * p = (const cCollectionElement_instructionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_instructionListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionAST cEnumerator_instructionListAST::current_mInstruction (LOCATION_ARGS) const {
  const cCollectionElement_instructionListAST * p = (const cCollectionElement_instructionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_instructionListAST) ;
  return p->mObject.mProperty_mInstruction ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @instructionListAST type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_instructionListAST ("instructionListAST",
                                           NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_instructionListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_instructionListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_instructionListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_instructionListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Class for element of '@taskSetupSortedListAST' sorted list                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cSortedListElement_taskSetupSortedListAST : public cSortedListElement {
  public : GALGAS_taskSetupSortedListAST_2D_element mObject ;

//--- Constructor
  public : cSortedListElement_taskSetupSortedListAST (const GALGAS_lbigint & in_mTaskSetupPriority,
                                                      const GALGAS_instructionListAST & in_mTaskSetupInstructionList,
                                                      const GALGAS_location & in_mEndOfTaskSetupDeclaration,
                                                      const GALGAS_bigint & in_mSetupPriority
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

//---------------------------------------------------------------------------------------------------------------------*

cSortedListElement_taskSetupSortedListAST::cSortedListElement_taskSetupSortedListAST (const GALGAS_lbigint & in_mTaskSetupPriority,
                                                                                      const GALGAS_instructionListAST & in_mTaskSetupInstructionList,
                                                                                      const GALGAS_location & in_mEndOfTaskSetupDeclaration,
                                                                                      const GALGAS_bigint & in_mSetupPriority
                                                                                      COMMA_LOCATION_ARGS) :
cSortedListElement (THERE),
mObject (in_mTaskSetupPriority, in_mTaskSetupInstructionList, in_mEndOfTaskSetupDeclaration, in_mSetupPriority) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cSortedListElement_taskSetupSortedListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cSortedListElement * cSortedListElement_taskSetupSortedListAST::copy (void) {
  cSortedListElement * result = NULL ;
  macroMyNew (result, cSortedListElement_taskSetupSortedListAST (mObject.mProperty_mTaskSetupPriority, mObject.mProperty_mTaskSetupInstructionList, mObject.mProperty_mEndOfTaskSetupDeclaration, mObject.mProperty_mSetupPriority COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cSortedListElement_taskSetupSortedListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTaskSetupPriority" ":" ;
  mObject.mProperty_mTaskSetupPriority.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTaskSetupInstructionList" ":" ;
  mObject.mProperty_mTaskSetupInstructionList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEndOfTaskSetupDeclaration" ":" ;
  mObject.mProperty_mEndOfTaskSetupDeclaration.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSetupPriority" ":" ;
  mObject.mProperty_mSetupPriority.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cSortedListElement_taskSetupSortedListAST::compare (const cCollectionElement * inOperand) const {
  cSortedListElement_taskSetupSortedListAST * operand = (cSortedListElement_taskSetupSortedListAST *) inOperand ;
  macroValidSharedObject (operand, cSortedListElement_taskSetupSortedListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskSetupSortedListAST::GALGAS_taskSetupSortedListAST (void) :
AC_GALGAS_sortedlist () {
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cSortedListElement_taskSetupSortedListAST::compareForSorting (const cSortedListElement * inOperand) const {
  typeComparisonResult result = kOperandEqual ;
  const cSortedListElement_taskSetupSortedListAST * operand = (const cSortedListElement_taskSetupSortedListAST *) inOperand ;
  macroValidSharedObject (operand, cSortedListElement_taskSetupSortedListAST) ;
  if (result == kOperandEqual) {
    result = mObject.mProperty_mSetupPriority.objectCompare (operand->mObject.mProperty_mSetupPriority) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskSetupSortedListAST GALGAS_taskSetupSortedListAST::constructor_emptySortedList (LOCATION_ARGS) {
  GALGAS_taskSetupSortedListAST result ;
  result.createNewEmptySortedList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskSetupSortedListAST GALGAS_taskSetupSortedListAST::constructor_sortedListWithValue (const GALGAS_lbigint & inOperand0,
                                                                                              const GALGAS_instructionListAST & inOperand1,
                                                                                              const GALGAS_location & inOperand2,
                                                                                              const GALGAS_bigint & inOperand3
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_taskSetupSortedListAST result = constructor_emptySortedList (THERE) ;
  cSortedListElement * p = NULL ;
  macroMyNew (p, cSortedListElement_taskSetupSortedListAST (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
  capSortedListElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  result.appendObject (attributes) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskSetupSortedListAST::addAssign_operation (const GALGAS_lbigint & inOperand0,
                                                         const GALGAS_instructionListAST & inOperand1,
                                                         const GALGAS_location & inOperand2,
                                                         const GALGAS_bigint & inOperand3
                                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cSortedListElement * p = NULL ;
    macroMyNew (p, cSortedListElement_taskSetupSortedListAST (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capSortedListElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskSetupSortedListAST::plusAssign_operation (const GALGAS_taskSetupSortedListAST inOperand,
                                                          C_Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid ()) {
    appendSortedList (inOperand) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskSetupSortedListAST::setter_popSmallest (GALGAS_lbigint & outOperand0,
                                                        GALGAS_instructionListAST & outOperand1,
                                                        GALGAS_location & outOperand2,
                                                        GALGAS_bigint & outOperand3,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  capSortedListElement attributes ;
  removeSmallestObject (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_taskSetupSortedListAST * p = (cSortedListElement_taskSetupSortedListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_taskSetupSortedListAST) ;
    outOperand0 = p->mObject.mProperty_mTaskSetupPriority ;
    outOperand1 = p->mObject.mProperty_mTaskSetupInstructionList ;
    outOperand2 = p->mObject.mProperty_mEndOfTaskSetupDeclaration ;
    outOperand3 = p->mObject.mProperty_mSetupPriority ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskSetupSortedListAST::setter_popGreatest (GALGAS_lbigint & outOperand0,
                                                        GALGAS_instructionListAST & outOperand1,
                                                        GALGAS_location & outOperand2,
                                                        GALGAS_bigint & outOperand3,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  capSortedListElement attributes ;
  removeGreatestObject (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_taskSetupSortedListAST * p = (cSortedListElement_taskSetupSortedListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_taskSetupSortedListAST) ;
    outOperand0 = p->mObject.mProperty_mTaskSetupPriority ;
    outOperand1 = p->mObject.mProperty_mTaskSetupInstructionList ;
    outOperand2 = p->mObject.mProperty_mEndOfTaskSetupDeclaration ;
    outOperand3 = p->mObject.mProperty_mSetupPriority ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskSetupSortedListAST::method_smallest (GALGAS_lbigint & outOperand0,
                                                     GALGAS_instructionListAST & outOperand1,
                                                     GALGAS_location & outOperand2,
                                                     GALGAS_bigint & outOperand3,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  capSortedListElement attributes ;
  smallestObjectAttributeList (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_taskSetupSortedListAST * p = (cSortedListElement_taskSetupSortedListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_taskSetupSortedListAST) ;
    outOperand0 = p->mObject.mProperty_mTaskSetupPriority ;
    outOperand1 = p->mObject.mProperty_mTaskSetupInstructionList ;
    outOperand2 = p->mObject.mProperty_mEndOfTaskSetupDeclaration ;
    outOperand3 = p->mObject.mProperty_mSetupPriority ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskSetupSortedListAST::method_greatest (GALGAS_lbigint & outOperand0,
                                                     GALGAS_instructionListAST & outOperand1,
                                                     GALGAS_location & outOperand2,
                                                     GALGAS_bigint & outOperand3,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  capSortedListElement attributes ;
  greatestObjectAttributeList (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_taskSetupSortedListAST * p = (cSortedListElement_taskSetupSortedListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_taskSetupSortedListAST) ;
    outOperand0 = p->mObject.mProperty_mTaskSetupPriority ;
    outOperand1 = p->mObject.mProperty_mTaskSetupInstructionList ;
    outOperand2 = p->mObject.mProperty_mEndOfTaskSetupDeclaration ;
    outOperand3 = p->mObject.mProperty_mSetupPriority ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_taskSetupSortedListAST::cEnumerator_taskSetupSortedListAST (const GALGAS_taskSetupSortedListAST & inEnumeratedObject,
                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskSetupSortedListAST_2D_element cEnumerator_taskSetupSortedListAST::current (LOCATION_ARGS) const {
  const cSortedListElement_taskSetupSortedListAST * p = (const cSortedListElement_taskSetupSortedListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_taskSetupSortedListAST) ;
  return p->mObject ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbigint cEnumerator_taskSetupSortedListAST::current_mTaskSetupPriority (LOCATION_ARGS) const {
  const cSortedListElement_taskSetupSortedListAST * p = (const cSortedListElement_taskSetupSortedListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_taskSetupSortedListAST) ;
  return p->mObject.mProperty_mTaskSetupPriority ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST cEnumerator_taskSetupSortedListAST::current_mTaskSetupInstructionList (LOCATION_ARGS) const {
  const cSortedListElement_taskSetupSortedListAST * p = (const cSortedListElement_taskSetupSortedListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_taskSetupSortedListAST) ;
  return p->mObject.mProperty_mTaskSetupInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cEnumerator_taskSetupSortedListAST::current_mEndOfTaskSetupDeclaration (LOCATION_ARGS) const {
  const cSortedListElement_taskSetupSortedListAST * p = (const cSortedListElement_taskSetupSortedListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_taskSetupSortedListAST) ;
  return p->mObject.mProperty_mEndOfTaskSetupDeclaration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint cEnumerator_taskSetupSortedListAST::current_mSetupPriority (LOCATION_ARGS) const {
  const cSortedListElement_taskSetupSortedListAST * p = (const cSortedListElement_taskSetupSortedListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_taskSetupSortedListAST) ;
  return p->mObject.mProperty_mSetupPriority ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @taskSetupSortedListAST type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_taskSetupSortedListAST ("taskSetupSortedListAST",
                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_taskSetupSortedListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_taskSetupSortedListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_taskSetupSortedListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_taskSetupSortedListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskSetupSortedListAST GALGAS_taskSetupSortedListAST::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_taskSetupSortedListAST result ;
  const GALGAS_taskSetupSortedListAST * p = (const GALGAS_taskSetupSortedListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_taskSetupSortedListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("taskSetupSortedListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Extension method '@taskListAST noteTypesInPrecedenceGraph'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_noteTypesInPrecedenceGraph (const GALGAS_taskListAST inObject,
                                                 GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_taskListAST temp_0 = inObject ;
  cEnumerator_taskListAST enumerator_4069 (temp_0, kENUMERATION_UP) ;
  while (enumerator_4069.hasCurrentObject ()) {
    cEnumerator_structurePropertyListAST enumerator_4101 (enumerator_4069.current_mVarList (HERE), kENUMERATION_UP) ;
    while (enumerator_4101.hasCurrentObject ()) {
      const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, enumerator_4101.current (HERE).getter_mPropertyTypeName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_1) {
        GALGAS_lstring var_typeName_4179 = function_llvmTypeNameFromPLMname (enumerator_4101.current (HERE).getter_mPropertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 114)) ;
        {
        ioArgument_ioGraph.setter_noteNode (var_typeName_4179 COMMA_SOURCE_FILE ("task-declaration.galgas", 115)) ;
        }
      }
      enumerator_4101.gotoNextObject () ;
    }
    cEnumerator_taskSetupListAST enumerator_4327 (enumerator_4069.current_mTaskSetupListAST (HERE), kENUMERATION_UP) ;
    while (enumerator_4327.hasCurrentObject ()) {
      extensionMethod_noteInstructionListTypesInPrecedenceGraph (enumerator_4327.current (HERE).getter_mTaskSetupInstructionList (HERE), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 119)) ;
      enumerator_4327.gotoNextObject () ;
    }
    cEnumerator_functionDeclarationListAST enumerator_4468 (enumerator_4069.current_mTaskFunctionList (HERE), kENUMERATION_UP) ;
    while (enumerator_4468.hasCurrentObject ()) {
      extensionMethod_noteInstructionListTypesInPrecedenceGraph (enumerator_4468.current (HERE).getter_mFunctionInstructionList (HERE), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 122)) ;
      enumerator_4468.gotoNextObject () ;
    }
    cEnumerator_syncInstructionBranchListAST enumerator_4619 (enumerator_4069.current_mGuardedCommandList (HERE), kENUMERATION_UP) ;
    while (enumerator_4619.hasCurrentObject ()) {
      extensionMethod_noteInstructionListTypesInPrecedenceGraph (enumerator_4619.current (HERE).getter_mInstructionList (HERE), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 125)) ;
      enumerator_4619.gotoNextObject () ;
    }
    enumerator_4069.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*

cMapElement_taskMap::cMapElement_taskMap (const GALGAS_lstring & inKey,
                                          const GALGAS_PLMType & in_mTaskType
                                          COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mTaskType (in_mTaskType) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_taskMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mTaskType.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_taskMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_taskMap (mProperty_lkey, mProperty_mTaskType COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_taskMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTaskType" ":" ;
  mProperty_mTaskType.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_taskMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_taskMap * operand = (cMapElement_taskMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mTaskType.objectCompare (operand->mProperty_mTaskType) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskMap::GALGAS_taskMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskMap::GALGAS_taskMap (const GALGAS_taskMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskMap & GALGAS_taskMap::operator = (const GALGAS_taskMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskMap GALGAS_taskMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_taskMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskMap GALGAS_taskMap::constructor_mapWithMapToOverride (const GALGAS_taskMap & inMapToOverride
                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_taskMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskMap GALGAS_taskMap::getter_overriddenMap (C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  GALGAS_taskMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskMap::addAssign_operation (const GALGAS_lstring & inKey,
                                          const GALGAS_PLMType & inArgument0,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  cMapElement_taskMap * p = NULL ;
  macroMyNew (p, cMapElement_taskMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@taskMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskMap::setter_insertKey (GALGAS_lstring inKey,
                                       GALGAS_PLMType inArgument0,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
  cMapElement_taskMap * p = NULL ;
  macroMyNew (p, cMapElement_taskMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' task is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_taskMap_searchKey = "there is no '%K' task" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskMap::method_searchKey (GALGAS_lstring inKey,
                                       GALGAS_PLMType & outArgument0,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const {
  const cMapElement_taskMap * p = (const cMapElement_taskMap *) performSearch (inKey,
                                                                               inCompiler,
                                                                               kSearchErrorMessage_taskMap_searchKey
                                                                               COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_taskMap) ;
    outArgument0 = p->mProperty_mTaskType ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMType GALGAS_taskMap::getter_mTaskTypeForKey (const GALGAS_string & inKey,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_taskMap * p = (const cMapElement_taskMap *) attributes ;
  GALGAS_PLMType result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_taskMap) ;
    result = p->mProperty_mTaskType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskMap::setter_setMTaskTypeForKey (GALGAS_PLMType inAttributeValue,
                                                GALGAS_string inKey,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_taskMap * p = (cMapElement_taskMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_taskMap) ;
    p->mProperty_mTaskType = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_taskMap * GALGAS_taskMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                         const GALGAS_string & inKey
                                                                         COMMA_LOCATION_ARGS) {
  cMapElement_taskMap * result = (cMapElement_taskMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_taskMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_taskMap::cEnumerator_taskMap (const GALGAS_taskMap & inEnumeratedObject,
                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskMap_2D_element cEnumerator_taskMap::current (LOCATION_ARGS) const {
  const cMapElement_taskMap * p = (const cMapElement_taskMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_taskMap) ;
  return GALGAS_taskMap_2D_element (p->mProperty_lkey, p->mProperty_mTaskType) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_taskMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMType cEnumerator_taskMap::current_mTaskType (LOCATION_ARGS) const {
  const cMapElement_taskMap * p = (const cMapElement_taskMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_taskMap) ;
  return p->mProperty_mTaskType ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                    @taskMap type                                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_taskMap ("taskMap",
                                NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_taskMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_taskMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_taskMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_taskMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskMap GALGAS_taskMap::extractObject (const GALGAS_object & inObject,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  GALGAS_taskMap result ;
  const GALGAS_taskMap * p = (const GALGAS_taskMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_taskMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("taskMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Extension method '@taskListAST enterInContext'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_enterInContext (const GALGAS_taskListAST inObject,
                                     GALGAS_semanticContext & ioArgument_ioContext,
                                     GALGAS_declarationDecorationList & ioArgument_ioDecoratedDeclarationList,
                                     GALGAS_subprogramInvocationGraph & /* ioArgument_ioSubprogramInvocationGraph */,
                                     GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                     C_Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_decoratedTaskList var_decoratedTaskList_5690 = GALGAS_decoratedTaskList::constructor_emptyList (SOURCE_FILE ("task-declaration.galgas", 148)) ;
  const GALGAS_taskListAST temp_0 = inObject ;
  cEnumerator_taskListAST enumerator_5714 (temp_0, kENUMERATION_UP) ;
  while (enumerator_5714.hasCurrentObject ()) {
    GALGAS_propertyList var_propertyList_5770 = GALGAS_propertyList::constructor_emptyList (SOURCE_FILE ("task-declaration.galgas", 151)) ;
    GALGAS_propertyMap var_propertyMap_5804 = GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("task-declaration.galgas", 152)) ;
    GALGAS_sortedOperandIRList var_initialValueList_5851 = GALGAS_sortedOperandIRList::constructor_emptySortedList (SOURCE_FILE ("task-declaration.galgas", 153)) ;
    cEnumerator_structurePropertyListAST enumerator_5890 (enumerator_5714.current (HERE).getter_mVarList (HERE), kENUMERATION_UP) ;
    while (enumerator_5890.hasCurrentObject ()) {
      GALGAS_constructorSignature joker_6110 = GALGAS_constructorSignature::constructor_emptyList (SOURCE_FILE ("task-declaration.galgas", 162)) ;
      GALGAS_string joker_6122 = GALGAS_string::constructor_default (SOURCE_FILE ("task-declaration.galgas", 163)) ;
      GALGAS_bool joker_6134 = GALGAS_bool::constructor_default (SOURCE_FILE ("task-declaration.galgas", 164)) ;
      extensionMethod_enterInContext (enumerator_5890.current (HERE), enumerator_5714.current (HERE).getter_mTaskName (HERE), ioArgument_ioContext, ioArgument_ioGlobalLiteralStringMap, var_propertyList_5770, var_propertyMap_5804, var_initialValueList_5851, joker_6110, joker_6122, joker_6134, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 155)) ;
      enumerator_5890.gotoNextObject () ;
    }
    extensionMethod_enterFunctionsInPropertyMap (enumerator_5714.current (HERE).getter_mTaskFunctionList (HERE), ioArgument_ioContext, var_propertyMap_5804, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 168)) ;
    GALGAS_PLMType var_taskType_6390 = GALGAS_PLMType::constructor_new (var_propertyMap_5804, GALGAS_classConstantMap::constructor_emptyMap (SOURCE_FILE ("task-declaration.galgas", 172)), GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("task-declaration.galgas", 173)), GALGAS_guardMapForContext::constructor_emptyMap (SOURCE_FILE ("task-declaration.galgas", 174)), GALGAS_PLMTypeAttributes::constructor_none (SOURCE_FILE ("task-declaration.galgas", 175)), enumerator_5714.current (HERE).getter_mTaskName (HERE).getter_string (SOURCE_FILE ("task-declaration.galgas", 176)), GALGAS_typeKind::constructor_structure (var_propertyList_5770  COMMA_SOURCE_FILE ("task-declaration.galgas", 177))  COMMA_SOURCE_FILE ("task-declaration.galgas", 170)) ;
    {
    ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (enumerator_5714.current (HERE).getter_mTaskName (HERE), var_taskType_6390, ioArgument_ioContext.getter_mTypeMap (HERE).getter_count (SOURCE_FILE ("task-declaration.galgas", 182)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 179)) ;
    }
    {
    ioArgument_ioContext.mProperty_mTaskMap.setter_insertKey (enumerator_5714.current (HERE).getter_mTaskName (HERE), var_taskType_6390, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 184)) ;
    }
    {
    extensionSetter_insertTask (ioArgument_ioContext.mProperty_mValuedObjectMap, enumerator_5714.current (HERE).getter_mTaskName (HERE), var_taskType_6390, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 185)) ;
    }
    ioArgument_ioContext.mProperty_mGlobalTaskVariableList.addAssign_operation (enumerator_5714.current (HERE).getter_mTaskName (HERE).getter_string (HERE), enumerator_5714.current (HERE).getter_mTaskName (HERE).getter_string (HERE), GALGAS_objectIR::constructor_llvmStructureValue (var_taskType_6390, var_initialValueList_5851  COMMA_SOURCE_FILE ("task-declaration.galgas", 189))  COMMA_SOURCE_FILE ("task-declaration.galgas", 186)) ;
    extensionMethod_enterFunctionInContext (enumerator_5714.current (HERE).getter_mTaskFunctionList (HERE), enumerator_5714.current (HERE).getter_mTaskName (HERE).getter_string (SOURCE_FILE ("task-declaration.galgas", 192)), ioArgument_ioContext, ioArgument_ioDecoratedDeclarationList, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 191)) ;
    var_decoratedTaskList_5690.addAssign_operation (enumerator_5714.current (HERE).getter_mTaskName (HERE), enumerator_5714.current (HERE).getter_mPriority (HERE), enumerator_5714.current (HERE).getter_mStackSize (HERE), enumerator_5714.current (HERE).getter_mVarList (HERE), enumerator_5714.current (HERE).getter_mTaskFunctionList (HERE), enumerator_5714.current (HERE).getter_mTaskSetupListAST (HERE), enumerator_5714.current (HERE).getter_mGuardedCommandList (HERE), enumerator_5714.current (HERE).getter_mEndOfTaskDeclaration (HERE)  COMMA_SOURCE_FILE ("task-declaration.galgas", 197)) ;
    enumerator_5714.gotoNextObject () ;
  }
  ioArgument_ioDecoratedDeclarationList.addAssign_operation (GALGAS_decoratedTaskListDeclaration::constructor_new (var_decoratedTaskList_5690  COMMA_SOURCE_FILE ("task-declaration.galgas", 208))  COMMA_SOURCE_FILE ("task-declaration.galgas", 208)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Class for element of '@decoratedTaskList' list                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_decoratedTaskList : public cCollectionElement {
  public : GALGAS_decoratedTaskList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_decoratedTaskList (const GALGAS_lstring & in_mTaskName,
                                                 const GALGAS_lbigint & in_mPriority,
                                                 const GALGAS_lbigint & in_mStackSize,
                                                 const GALGAS_structurePropertyListAST & in_mVarList,
                                                 const GALGAS_functionDeclarationListAST & in_mTaskProcList,
                                                 const GALGAS_taskSetupListAST & in_mTaskSetupListAST,
                                                 const GALGAS_syncInstructionBranchListAST & in_mGuardedCommandList,
                                                 const GALGAS_location & in_mEndOfTaskDeclaration
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

cCollectionElement_decoratedTaskList::cCollectionElement_decoratedTaskList (const GALGAS_lstring & in_mTaskName,
                                                                            const GALGAS_lbigint & in_mPriority,
                                                                            const GALGAS_lbigint & in_mStackSize,
                                                                            const GALGAS_structurePropertyListAST & in_mVarList,
                                                                            const GALGAS_functionDeclarationListAST & in_mTaskProcList,
                                                                            const GALGAS_taskSetupListAST & in_mTaskSetupListAST,
                                                                            const GALGAS_syncInstructionBranchListAST & in_mGuardedCommandList,
                                                                            const GALGAS_location & in_mEndOfTaskDeclaration
                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mTaskName, in_mPriority, in_mStackSize, in_mVarList, in_mTaskProcList, in_mTaskSetupListAST, in_mGuardedCommandList, in_mEndOfTaskDeclaration) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_decoratedTaskList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_decoratedTaskList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_decoratedTaskList (mObject.mProperty_mTaskName, mObject.mProperty_mPriority, mObject.mProperty_mStackSize, mObject.mProperty_mVarList, mObject.mProperty_mTaskProcList, mObject.mProperty_mTaskSetupListAST, mObject.mProperty_mGuardedCommandList, mObject.mProperty_mEndOfTaskDeclaration COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_decoratedTaskList::description (C_String & ioString, const int32_t inIndentation) const {
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
  ioString << "mVarList" ":" ;
  mObject.mProperty_mVarList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTaskProcList" ":" ;
  mObject.mProperty_mTaskProcList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTaskSetupListAST" ":" ;
  mObject.mProperty_mTaskSetupListAST.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mGuardedCommandList" ":" ;
  mObject.mProperty_mGuardedCommandList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEndOfTaskDeclaration" ":" ;
  mObject.mProperty_mEndOfTaskDeclaration.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_decoratedTaskList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_decoratedTaskList * operand = (cCollectionElement_decoratedTaskList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_decoratedTaskList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedTaskList::GALGAS_decoratedTaskList (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedTaskList::GALGAS_decoratedTaskList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedTaskList GALGAS_decoratedTaskList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_decoratedTaskList  (capCollectionElementArray ()) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedTaskList GALGAS_decoratedTaskList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                              const GALGAS_lbigint & inOperand1,
                                                                              const GALGAS_lbigint & inOperand2,
                                                                              const GALGAS_structurePropertyListAST & inOperand3,
                                                                              const GALGAS_functionDeclarationListAST & inOperand4,
                                                                              const GALGAS_taskSetupListAST & inOperand5,
                                                                              const GALGAS_syncInstructionBranchListAST & inOperand6,
                                                                              const GALGAS_location & inOperand7
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_decoratedTaskList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid ()) {
    result = GALGAS_decoratedTaskList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_decoratedTaskList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_decoratedTaskList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                          const GALGAS_lstring & in_mTaskName,
                                                          const GALGAS_lbigint & in_mPriority,
                                                          const GALGAS_lbigint & in_mStackSize,
                                                          const GALGAS_structurePropertyListAST & in_mVarList,
                                                          const GALGAS_functionDeclarationListAST & in_mTaskProcList,
                                                          const GALGAS_taskSetupListAST & in_mTaskSetupListAST,
                                                          const GALGAS_syncInstructionBranchListAST & in_mGuardedCommandList,
                                                          const GALGAS_location & in_mEndOfTaskDeclaration
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_decoratedTaskList * p = NULL ;
  macroMyNew (p, cCollectionElement_decoratedTaskList (in_mTaskName,
                                                       in_mPriority,
                                                       in_mStackSize,
                                                       in_mVarList,
                                                       in_mTaskProcList,
                                                       in_mTaskSetupListAST,
                                                       in_mGuardedCommandList,
                                                       in_mEndOfTaskDeclaration COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_decoratedTaskList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                    const GALGAS_lbigint & inOperand1,
                                                    const GALGAS_lbigint & inOperand2,
                                                    const GALGAS_structurePropertyListAST & inOperand3,
                                                    const GALGAS_functionDeclarationListAST & inOperand4,
                                                    const GALGAS_taskSetupListAST & inOperand5,
                                                    const GALGAS_syncInstructionBranchListAST & inOperand6,
                                                    const GALGAS_location & inOperand7
                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_decoratedTaskList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_decoratedTaskList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                     const GALGAS_lbigint inOperand1,
                                                     const GALGAS_lbigint inOperand2,
                                                     const GALGAS_structurePropertyListAST inOperand3,
                                                     const GALGAS_functionDeclarationListAST inOperand4,
                                                     const GALGAS_taskSetupListAST inOperand5,
                                                     const GALGAS_syncInstructionBranchListAST inOperand6,
                                                     const GALGAS_location inOperand7,
                                                     const GALGAS_uint inInsertionIndex,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_decoratedTaskList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_decoratedTaskList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                     GALGAS_lbigint & outOperand1,
                                                     GALGAS_lbigint & outOperand2,
                                                     GALGAS_structurePropertyListAST & outOperand3,
                                                     GALGAS_functionDeclarationListAST & outOperand4,
                                                     GALGAS_taskSetupListAST & outOperand5,
                                                     GALGAS_syncInstructionBranchListAST & outOperand6,
                                                     GALGAS_location & outOperand7,
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
      outOperand7.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_decoratedTaskList) ;
      outOperand0 = p->mObject.mProperty_mTaskName ;
      outOperand1 = p->mObject.mProperty_mPriority ;
      outOperand2 = p->mObject.mProperty_mStackSize ;
      outOperand3 = p->mObject.mProperty_mVarList ;
      outOperand4 = p->mObject.mProperty_mTaskProcList ;
      outOperand5 = p->mObject.mProperty_mTaskSetupListAST ;
      outOperand6 = p->mObject.mProperty_mGuardedCommandList ;
      outOperand7 = p->mObject.mProperty_mEndOfTaskDeclaration ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_decoratedTaskList::setter_popFirst (GALGAS_lstring & outOperand0,
                                                GALGAS_lbigint & outOperand1,
                                                GALGAS_lbigint & outOperand2,
                                                GALGAS_structurePropertyListAST & outOperand3,
                                                GALGAS_functionDeclarationListAST & outOperand4,
                                                GALGAS_taskSetupListAST & outOperand5,
                                                GALGAS_syncInstructionBranchListAST & outOperand6,
                                                GALGAS_location & outOperand7,
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
    outOperand7.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_decoratedTaskList) ;
    outOperand0 = p->mObject.mProperty_mTaskName ;
    outOperand1 = p->mObject.mProperty_mPriority ;
    outOperand2 = p->mObject.mProperty_mStackSize ;
    outOperand3 = p->mObject.mProperty_mVarList ;
    outOperand4 = p->mObject.mProperty_mTaskProcList ;
    outOperand5 = p->mObject.mProperty_mTaskSetupListAST ;
    outOperand6 = p->mObject.mProperty_mGuardedCommandList ;
    outOperand7 = p->mObject.mProperty_mEndOfTaskDeclaration ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_decoratedTaskList::setter_popLast (GALGAS_lstring & outOperand0,
                                               GALGAS_lbigint & outOperand1,
                                               GALGAS_lbigint & outOperand2,
                                               GALGAS_structurePropertyListAST & outOperand3,
                                               GALGAS_functionDeclarationListAST & outOperand4,
                                               GALGAS_taskSetupListAST & outOperand5,
                                               GALGAS_syncInstructionBranchListAST & outOperand6,
                                               GALGAS_location & outOperand7,
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
    outOperand7.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_decoratedTaskList) ;
    outOperand0 = p->mObject.mProperty_mTaskName ;
    outOperand1 = p->mObject.mProperty_mPriority ;
    outOperand2 = p->mObject.mProperty_mStackSize ;
    outOperand3 = p->mObject.mProperty_mVarList ;
    outOperand4 = p->mObject.mProperty_mTaskProcList ;
    outOperand5 = p->mObject.mProperty_mTaskSetupListAST ;
    outOperand6 = p->mObject.mProperty_mGuardedCommandList ;
    outOperand7 = p->mObject.mProperty_mEndOfTaskDeclaration ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_decoratedTaskList::method_first (GALGAS_lstring & outOperand0,
                                             GALGAS_lbigint & outOperand1,
                                             GALGAS_lbigint & outOperand2,
                                             GALGAS_structurePropertyListAST & outOperand3,
                                             GALGAS_functionDeclarationListAST & outOperand4,
                                             GALGAS_taskSetupListAST & outOperand5,
                                             GALGAS_syncInstructionBranchListAST & outOperand6,
                                             GALGAS_location & outOperand7,
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
    outOperand7.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_decoratedTaskList) ;
    outOperand0 = p->mObject.mProperty_mTaskName ;
    outOperand1 = p->mObject.mProperty_mPriority ;
    outOperand2 = p->mObject.mProperty_mStackSize ;
    outOperand3 = p->mObject.mProperty_mVarList ;
    outOperand4 = p->mObject.mProperty_mTaskProcList ;
    outOperand5 = p->mObject.mProperty_mTaskSetupListAST ;
    outOperand6 = p->mObject.mProperty_mGuardedCommandList ;
    outOperand7 = p->mObject.mProperty_mEndOfTaskDeclaration ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_decoratedTaskList::method_last (GALGAS_lstring & outOperand0,
                                            GALGAS_lbigint & outOperand1,
                                            GALGAS_lbigint & outOperand2,
                                            GALGAS_structurePropertyListAST & outOperand3,
                                            GALGAS_functionDeclarationListAST & outOperand4,
                                            GALGAS_taskSetupListAST & outOperand5,
                                            GALGAS_syncInstructionBranchListAST & outOperand6,
                                            GALGAS_location & outOperand7,
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
    outOperand7.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_decoratedTaskList) ;
    outOperand0 = p->mObject.mProperty_mTaskName ;
    outOperand1 = p->mObject.mProperty_mPriority ;
    outOperand2 = p->mObject.mProperty_mStackSize ;
    outOperand3 = p->mObject.mProperty_mVarList ;
    outOperand4 = p->mObject.mProperty_mTaskProcList ;
    outOperand5 = p->mObject.mProperty_mTaskSetupListAST ;
    outOperand6 = p->mObject.mProperty_mGuardedCommandList ;
    outOperand7 = p->mObject.mProperty_mEndOfTaskDeclaration ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedTaskList GALGAS_decoratedTaskList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_decoratedTaskList result = GALGAS_decoratedTaskList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedTaskList GALGAS_decoratedTaskList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_decoratedTaskList result = GALGAS_decoratedTaskList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedTaskList GALGAS_decoratedTaskList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_decoratedTaskList result = GALGAS_decoratedTaskList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_decoratedTaskList::plusAssign_operation (const GALGAS_decoratedTaskList inOperand,
                                                     C_Compiler * /* inCompiler */
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbigint GALGAS_decoratedTaskList::getter_mPriorityAtIndex (const GALGAS_uint & inIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_decoratedTaskList * p = (cCollectionElement_decoratedTaskList *) attributes.ptr () ;
  GALGAS_lbigint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_decoratedTaskList) ;
    result = p->mObject.mProperty_mPriority ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structurePropertyListAST GALGAS_decoratedTaskList::getter_mVarListAtIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_decoratedTaskList * p = (cCollectionElement_decoratedTaskList *) attributes.ptr () ;
  GALGAS_structurePropertyListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_decoratedTaskList) ;
    result = p->mObject.mProperty_mVarList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionDeclarationListAST GALGAS_decoratedTaskList::getter_mTaskProcListAtIndex (const GALGAS_uint & inIndex,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_decoratedTaskList * p = (cCollectionElement_decoratedTaskList *) attributes.ptr () ;
  GALGAS_functionDeclarationListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_decoratedTaskList) ;
    result = p->mObject.mProperty_mTaskProcList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syncInstructionBranchListAST GALGAS_decoratedTaskList::getter_mGuardedCommandListAtIndex (const GALGAS_uint & inIndex,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_decoratedTaskList * p = (cCollectionElement_decoratedTaskList *) attributes.ptr () ;
  GALGAS_syncInstructionBranchListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_decoratedTaskList) ;
    result = p->mObject.mProperty_mGuardedCommandList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_decoratedTaskList::cEnumerator_decoratedTaskList (const GALGAS_decoratedTaskList & inEnumeratedObject,
                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedTaskList_2D_element cEnumerator_decoratedTaskList::current (LOCATION_ARGS) const {
  const cCollectionElement_decoratedTaskList * p = (const cCollectionElement_decoratedTaskList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_decoratedTaskList) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_decoratedTaskList::current_mTaskName (LOCATION_ARGS) const {
  const cCollectionElement_decoratedTaskList * p = (const cCollectionElement_decoratedTaskList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_decoratedTaskList) ;
  return p->mObject.mProperty_mTaskName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbigint cEnumerator_decoratedTaskList::current_mPriority (LOCATION_ARGS) const {
  const cCollectionElement_decoratedTaskList * p = (const cCollectionElement_decoratedTaskList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_decoratedTaskList) ;
  return p->mObject.mProperty_mPriority ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbigint cEnumerator_decoratedTaskList::current_mStackSize (LOCATION_ARGS) const {
  const cCollectionElement_decoratedTaskList * p = (const cCollectionElement_decoratedTaskList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_decoratedTaskList) ;
  return p->mObject.mProperty_mStackSize ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structurePropertyListAST cEnumerator_decoratedTaskList::current_mVarList (LOCATION_ARGS) const {
  const cCollectionElement_decoratedTaskList * p = (const cCollectionElement_decoratedTaskList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_decoratedTaskList) ;
  return p->mObject.mProperty_mVarList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionDeclarationListAST cEnumerator_decoratedTaskList::current_mTaskProcList (LOCATION_ARGS) const {
  const cCollectionElement_decoratedTaskList * p = (const cCollectionElement_decoratedTaskList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_decoratedTaskList) ;
  return p->mObject.mProperty_mTaskProcList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskSetupListAST cEnumerator_decoratedTaskList::current_mTaskSetupListAST (LOCATION_ARGS) const {
  const cCollectionElement_decoratedTaskList * p = (const cCollectionElement_decoratedTaskList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_decoratedTaskList) ;
  return p->mObject.mProperty_mTaskSetupListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syncInstructionBranchListAST cEnumerator_decoratedTaskList::current_mGuardedCommandList (LOCATION_ARGS) const {
  const cCollectionElement_decoratedTaskList * p = (const cCollectionElement_decoratedTaskList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_decoratedTaskList) ;
  return p->mObject.mProperty_mGuardedCommandList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cEnumerator_decoratedTaskList::current_mEndOfTaskDeclaration (LOCATION_ARGS) const {
  const cCollectionElement_decoratedTaskList * p = (const cCollectionElement_decoratedTaskList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_decoratedTaskList) ;
  return p->mObject.mProperty_mEndOfTaskDeclaration ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @decoratedTaskList type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_decoratedTaskList ("decoratedTaskList",
                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_decoratedTaskList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedTaskList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_decoratedTaskList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_decoratedTaskList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_decoratedTaskListDeclaration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_decoratedTaskListDeclaration * p = (const cPtr_decoratedTaskListDeclaration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_decoratedTaskListDeclaration) ;
  if (kOperandEqual == result) {
    result = mProperty_mTaskList.objectCompare (p->mProperty_mTaskList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedTaskListDeclaration::GALGAS_decoratedTaskListDeclaration (void) :
GALGAS_abstractDecoratedDeclaration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedTaskListDeclaration GALGAS_decoratedTaskListDeclaration::constructor_default (LOCATION_ARGS) {
  return GALGAS_decoratedTaskListDeclaration::constructor_new (GALGAS_decoratedTaskList::constructor_emptyList (HERE)
                                                               COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedTaskListDeclaration::GALGAS_decoratedTaskListDeclaration (const cPtr_decoratedTaskListDeclaration * inSourcePtr) :
GALGAS_abstractDecoratedDeclaration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_decoratedTaskListDeclaration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedTaskListDeclaration GALGAS_decoratedTaskListDeclaration::constructor_new (const GALGAS_decoratedTaskList & inAttribute_mTaskList
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_decoratedTaskListDeclaration result ;
  if (inAttribute_mTaskList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_decoratedTaskListDeclaration (inAttribute_mTaskList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedTaskList GALGAS_decoratedTaskListDeclaration::getter_mTaskList (UNUSED_LOCATION_ARGS) const {
  GALGAS_decoratedTaskList result ;
  if (NULL != mObjectPtr) {
    const cPtr_decoratedTaskListDeclaration * p = (const cPtr_decoratedTaskListDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedTaskListDeclaration) ;
    result = p->mProperty_mTaskList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedTaskList cPtr_decoratedTaskListDeclaration::getter_mTaskList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTaskList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                Pointer class for @decoratedTaskListDeclaration class                                *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_decoratedTaskListDeclaration::cPtr_decoratedTaskListDeclaration (const GALGAS_decoratedTaskList & in_mTaskList
                                                                      COMMA_LOCATION_ARGS) :
cPtr_abstractDecoratedDeclaration (THERE),
mProperty_mTaskList (in_mTaskList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_decoratedTaskListDeclaration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedTaskListDeclaration ;
}

void cPtr_decoratedTaskListDeclaration::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "[@decoratedTaskListDeclaration:" ;
  mProperty_mTaskList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_decoratedTaskListDeclaration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_decoratedTaskListDeclaration (mProperty_mTaskList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @decoratedTaskListDeclaration type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_decoratedTaskListDeclaration ("decoratedTaskListDeclaration",
                                                     & kTypeDescriptor_GALGAS_abstractDecoratedDeclaration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_decoratedTaskListDeclaration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedTaskListDeclaration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_decoratedTaskListDeclaration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_decoratedTaskListDeclaration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_taskMapIR::cMapElement_taskMapIR (const GALGAS_lstring & inKey,
                                              const GALGAS_PLMType & in_mTaskType,
                                              const GALGAS_bigint & in_mPriority,
                                              const GALGAS_bigint & in_mStackSize,
                                              const GALGAS_allocaList & in_mAllocaList,
                                              const GALGAS_instructionListIR & in_mInitInstructionListIR,
                                              const GALGAS_uint & in_mTaskNameStringIndex
                                              COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mTaskType (in_mTaskType),
mProperty_mPriority (in_mPriority),
mProperty_mStackSize (in_mStackSize),
mProperty_mAllocaList (in_mAllocaList),
mProperty_mInitInstructionListIR (in_mInitInstructionListIR),
mProperty_mTaskNameStringIndex (in_mTaskNameStringIndex) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_taskMapIR::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mTaskType.isValid () && mProperty_mPriority.isValid () && mProperty_mStackSize.isValid () && mProperty_mAllocaList.isValid () && mProperty_mInitInstructionListIR.isValid () && mProperty_mTaskNameStringIndex.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_taskMapIR::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_taskMapIR (mProperty_lkey, mProperty_mTaskType, mProperty_mPriority, mProperty_mStackSize, mProperty_mAllocaList, mProperty_mInitInstructionListIR, mProperty_mTaskNameStringIndex COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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
  ioString << "mAllocaList" ":" ;
  mProperty_mAllocaList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInitInstructionListIR" ":" ;
  mProperty_mInitInstructionListIR.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTaskNameStringIndex" ":" ;
  mProperty_mTaskNameStringIndex.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

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
    result = mProperty_mAllocaList.objectCompare (operand->mProperty_mAllocaList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInitInstructionListIR.objectCompare (operand->mProperty_mInitInstructionListIR) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTaskNameStringIndex.objectCompare (operand->mProperty_mTaskNameStringIndex) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskMapIR::GALGAS_taskMapIR (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskMapIR::GALGAS_taskMapIR (const GALGAS_taskMapIR & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskMapIR & GALGAS_taskMapIR::operator = (const GALGAS_taskMapIR & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskMapIR GALGAS_taskMapIR::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_taskMapIR result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskMapIR GALGAS_taskMapIR::constructor_mapWithMapToOverride (const GALGAS_taskMapIR & inMapToOverride
                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_taskMapIR result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskMapIR GALGAS_taskMapIR::getter_overriddenMap (C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  GALGAS_taskMapIR result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskMapIR::addAssign_operation (const GALGAS_lstring & inKey,
                                            const GALGAS_PLMType & inArgument0,
                                            const GALGAS_bigint & inArgument1,
                                            const GALGAS_bigint & inArgument2,
                                            const GALGAS_allocaList & inArgument3,
                                            const GALGAS_instructionListIR & inArgument4,
                                            const GALGAS_uint & inArgument5,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  cMapElement_taskMapIR * p = NULL ;
  macroMyNew (p, cMapElement_taskMapIR (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4, inArgument5 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@taskMapIR insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskMapIR::setter_insertKey (GALGAS_lstring inKey,
                                         GALGAS_PLMType inArgument0,
                                         GALGAS_bigint inArgument1,
                                         GALGAS_bigint inArgument2,
                                         GALGAS_allocaList inArgument3,
                                         GALGAS_instructionListIR inArgument4,
                                         GALGAS_uint inArgument5,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  cMapElement_taskMapIR * p = NULL ;
  macroMyNew (p, cMapElement_taskMapIR (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4, inArgument5 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "** internal error **" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_taskMapIR_searchKey = "** internal error **" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskMapIR::method_searchKey (GALGAS_lstring inKey,
                                         GALGAS_PLMType & outArgument0,
                                         GALGAS_bigint & outArgument1,
                                         GALGAS_bigint & outArgument2,
                                         GALGAS_allocaList & outArgument3,
                                         GALGAS_instructionListIR & outArgument4,
                                         GALGAS_uint & outArgument5,
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
  }else{
    macroValidSharedObject (p, cMapElement_taskMapIR) ;
    outArgument0 = p->mProperty_mTaskType ;
    outArgument1 = p->mProperty_mPriority ;
    outArgument2 = p->mProperty_mStackSize ;
    outArgument3 = p->mProperty_mAllocaList ;
    outArgument4 = p->mProperty_mInitInstructionListIR ;
    outArgument5 = p->mProperty_mTaskNameStringIndex ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskMapIR::setter_removeKey (GALGAS_lstring inKey,
                                         GALGAS_PLMType & outArgument0,
                                         GALGAS_bigint & outArgument1,
                                         GALGAS_bigint & outArgument2,
                                         GALGAS_allocaList & outArgument3,
                                         GALGAS_instructionListIR & outArgument4,
                                         GALGAS_uint & outArgument5,
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
  }else{
    macroValidSharedObject (p, cMapElement_taskMapIR) ;
    outArgument0 = p->mProperty_mTaskType ;
    outArgument1 = p->mProperty_mPriority ;
    outArgument2 = p->mProperty_mStackSize ;
    outArgument3 = p->mProperty_mAllocaList ;
    outArgument4 = p->mProperty_mInitInstructionListIR ;
    outArgument5 = p->mProperty_mTaskNameStringIndex ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMType GALGAS_taskMapIR::getter_mTaskTypeForKey (const GALGAS_string & inKey,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_taskMapIR * p = (const cMapElement_taskMapIR *) attributes ;
  GALGAS_PLMType result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_taskMapIR) ;
    result = p->mProperty_mTaskType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint GALGAS_taskMapIR::getter_mPriorityForKey (const GALGAS_string & inKey,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_taskMapIR * p = (const cMapElement_taskMapIR *) attributes ;
  GALGAS_bigint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_taskMapIR) ;
    result = p->mProperty_mPriority ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allocaList GALGAS_taskMapIR::getter_mAllocaListForKey (const GALGAS_string & inKey,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_taskMapIR * p = (const cMapElement_taskMapIR *) attributes ;
  GALGAS_allocaList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_taskMapIR) ;
    result = p->mProperty_mAllocaList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR GALGAS_taskMapIR::getter_mInitInstructionListIRForKey (const GALGAS_string & inKey,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_taskMapIR * p = (const cMapElement_taskMapIR *) attributes ;
  GALGAS_instructionListIR result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_taskMapIR) ;
    result = p->mProperty_mInitInstructionListIR ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskMapIR::setter_setMTaskTypeForKey (GALGAS_PLMType inAttributeValue,
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

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskMapIR::setter_setMPriorityForKey (GALGAS_bigint inAttributeValue,
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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskMapIR::setter_setMAllocaListForKey (GALGAS_allocaList inAttributeValue,
                                                    GALGAS_string inKey,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_taskMapIR * p = (cMapElement_taskMapIR *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_taskMapIR) ;
    p->mProperty_mAllocaList = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskMapIR::setter_setMInitInstructionListIRForKey (GALGAS_instructionListIR inAttributeValue,
                                                               GALGAS_string inKey,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_taskMapIR * p = (cMapElement_taskMapIR *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_taskMapIR) ;
    p->mProperty_mInitInstructionListIR = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_taskMapIR * GALGAS_taskMapIR::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                             const GALGAS_string & inKey
                                                                             COMMA_LOCATION_ARGS) {
  cMapElement_taskMapIR * result = (cMapElement_taskMapIR *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_taskMapIR) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_taskMapIR::cEnumerator_taskMapIR (const GALGAS_taskMapIR & inEnumeratedObject,
                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskMapIR_2D_element cEnumerator_taskMapIR::current (LOCATION_ARGS) const {
  const cMapElement_taskMapIR * p = (const cMapElement_taskMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_taskMapIR) ;
  return GALGAS_taskMapIR_2D_element (p->mProperty_lkey, p->mProperty_mTaskType, p->mProperty_mPriority, p->mProperty_mStackSize, p->mProperty_mAllocaList, p->mProperty_mInitInstructionListIR, p->mProperty_mTaskNameStringIndex) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_taskMapIR::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMType cEnumerator_taskMapIR::current_mTaskType (LOCATION_ARGS) const {
  const cMapElement_taskMapIR * p = (const cMapElement_taskMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_taskMapIR) ;
  return p->mProperty_mTaskType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint cEnumerator_taskMapIR::current_mPriority (LOCATION_ARGS) const {
  const cMapElement_taskMapIR * p = (const cMapElement_taskMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_taskMapIR) ;
  return p->mProperty_mPriority ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint cEnumerator_taskMapIR::current_mStackSize (LOCATION_ARGS) const {
  const cMapElement_taskMapIR * p = (const cMapElement_taskMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_taskMapIR) ;
  return p->mProperty_mStackSize ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allocaList cEnumerator_taskMapIR::current_mAllocaList (LOCATION_ARGS) const {
  const cMapElement_taskMapIR * p = (const cMapElement_taskMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_taskMapIR) ;
  return p->mProperty_mAllocaList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR cEnumerator_taskMapIR::current_mInitInstructionListIR (LOCATION_ARGS) const {
  const cMapElement_taskMapIR * p = (const cMapElement_taskMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_taskMapIR) ;
  return p->mProperty_mInitInstructionListIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cEnumerator_taskMapIR::current_mTaskNameStringIndex (LOCATION_ARGS) const {
  const cMapElement_taskMapIR * p = (const cMapElement_taskMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_taskMapIR) ;
  return p->mProperty_mTaskNameStringIndex ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                   @taskMapIR type                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_taskMapIR ("taskMapIR",
                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_taskMapIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_taskMapIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_taskMapIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_taskMapIR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Class for element of '@allocaList' list                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_allocaList : public cCollectionElement {
  public : GALGAS_allocaList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_allocaList (const GALGAS_string & in_mVarLLVMName,
                                          const GALGAS_PLMType & in_mLLVMType,
                                          const GALGAS_bool & in_mFormalInputArgument
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

cCollectionElement_allocaList::cCollectionElement_allocaList (const GALGAS_string & in_mVarLLVMName,
                                                              const GALGAS_PLMType & in_mLLVMType,
                                                              const GALGAS_bool & in_mFormalInputArgument
                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mVarLLVMName, in_mLLVMType, in_mFormalInputArgument) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_allocaList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_allocaList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_allocaList (mObject.mProperty_mVarLLVMName, mObject.mProperty_mLLVMType, mObject.mProperty_mFormalInputArgument COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_allocaList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mVarLLVMName" ":" ;
  mObject.mProperty_mVarLLVMName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLLVMType" ":" ;
  mObject.mProperty_mLLVMType.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFormalInputArgument" ":" ;
  mObject.mProperty_mFormalInputArgument.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_allocaList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_allocaList * operand = (cCollectionElement_allocaList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_allocaList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allocaList::GALGAS_allocaList (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allocaList::GALGAS_allocaList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allocaList GALGAS_allocaList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_allocaList  (capCollectionElementArray ()) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allocaList GALGAS_allocaList::constructor_listWithValue (const GALGAS_string & inOperand0,
                                                                const GALGAS_PLMType & inOperand1,
                                                                const GALGAS_bool & inOperand2
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_allocaList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_allocaList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_allocaList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allocaList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                   const GALGAS_string & in_mVarLLVMName,
                                                   const GALGAS_PLMType & in_mLLVMType,
                                                   const GALGAS_bool & in_mFormalInputArgument
                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_allocaList * p = NULL ;
  macroMyNew (p, cCollectionElement_allocaList (in_mVarLLVMName,
                                                in_mLLVMType,
                                                in_mFormalInputArgument COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allocaList::addAssign_operation (const GALGAS_string & inOperand0,
                                             const GALGAS_PLMType & inOperand1,
                                             const GALGAS_bool & inOperand2
                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_allocaList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allocaList::setter_insertAtIndex (const GALGAS_string inOperand0,
                                              const GALGAS_PLMType inOperand1,
                                              const GALGAS_bool inOperand2,
                                              const GALGAS_uint inInsertionIndex,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_allocaList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allocaList::setter_removeAtIndex (GALGAS_string & outOperand0,
                                              GALGAS_PLMType & outOperand1,
                                              GALGAS_bool & outOperand2,
                                              const GALGAS_uint inRemoveIndex,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_allocaList * p = (cCollectionElement_allocaList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_allocaList) ;
      outOperand0 = p->mObject.mProperty_mVarLLVMName ;
      outOperand1 = p->mObject.mProperty_mLLVMType ;
      outOperand2 = p->mObject.mProperty_mFormalInputArgument ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allocaList::setter_popFirst (GALGAS_string & outOperand0,
                                         GALGAS_PLMType & outOperand1,
                                         GALGAS_bool & outOperand2,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_allocaList * p = (cCollectionElement_allocaList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_allocaList) ;
    outOperand0 = p->mObject.mProperty_mVarLLVMName ;
    outOperand1 = p->mObject.mProperty_mLLVMType ;
    outOperand2 = p->mObject.mProperty_mFormalInputArgument ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allocaList::setter_popLast (GALGAS_string & outOperand0,
                                        GALGAS_PLMType & outOperand1,
                                        GALGAS_bool & outOperand2,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_allocaList * p = (cCollectionElement_allocaList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_allocaList) ;
    outOperand0 = p->mObject.mProperty_mVarLLVMName ;
    outOperand1 = p->mObject.mProperty_mLLVMType ;
    outOperand2 = p->mObject.mProperty_mFormalInputArgument ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allocaList::method_first (GALGAS_string & outOperand0,
                                      GALGAS_PLMType & outOperand1,
                                      GALGAS_bool & outOperand2,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_allocaList * p = (cCollectionElement_allocaList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_allocaList) ;
    outOperand0 = p->mObject.mProperty_mVarLLVMName ;
    outOperand1 = p->mObject.mProperty_mLLVMType ;
    outOperand2 = p->mObject.mProperty_mFormalInputArgument ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allocaList::method_last (GALGAS_string & outOperand0,
                                     GALGAS_PLMType & outOperand1,
                                     GALGAS_bool & outOperand2,
                                     C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_allocaList * p = (cCollectionElement_allocaList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_allocaList) ;
    outOperand0 = p->mObject.mProperty_mVarLLVMName ;
    outOperand1 = p->mObject.mProperty_mLLVMType ;
    outOperand2 = p->mObject.mProperty_mFormalInputArgument ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allocaList GALGAS_allocaList::add_operation (const GALGAS_allocaList & inOperand,
                                                    C_Compiler * /* inCompiler */
                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_allocaList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allocaList GALGAS_allocaList::getter_subListWithRange (const GALGAS_range & inRange,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_allocaList result = GALGAS_allocaList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allocaList GALGAS_allocaList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_allocaList result = GALGAS_allocaList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allocaList GALGAS_allocaList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_allocaList result = GALGAS_allocaList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allocaList::plusAssign_operation (const GALGAS_allocaList inOperand,
                                              C_Compiler * /* inCompiler */
                                              COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_allocaList::getter_mVarLLVMNameAtIndex (const GALGAS_uint & inIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_allocaList * p = (cCollectionElement_allocaList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_allocaList) ;
    result = p->mObject.mProperty_mVarLLVMName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMType GALGAS_allocaList::getter_mLLVMTypeAtIndex (const GALGAS_uint & inIndex,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_allocaList * p = (cCollectionElement_allocaList *) attributes.ptr () ;
  GALGAS_PLMType result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_allocaList) ;
    result = p->mObject.mProperty_mLLVMType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_allocaList::getter_mFormalInputArgumentAtIndex (const GALGAS_uint & inIndex,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_allocaList * p = (cCollectionElement_allocaList *) attributes.ptr () ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_allocaList) ;
    result = p->mObject.mProperty_mFormalInputArgument ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_allocaList::cEnumerator_allocaList (const GALGAS_allocaList & inEnumeratedObject,
                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allocaList_2D_element cEnumerator_allocaList::current (LOCATION_ARGS) const {
  const cCollectionElement_allocaList * p = (const cCollectionElement_allocaList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_allocaList) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_allocaList::current_mVarLLVMName (LOCATION_ARGS) const {
  const cCollectionElement_allocaList * p = (const cCollectionElement_allocaList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_allocaList) ;
  return p->mObject.mProperty_mVarLLVMName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMType cEnumerator_allocaList::current_mLLVMType (LOCATION_ARGS) const {
  const cCollectionElement_allocaList * p = (const cCollectionElement_allocaList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_allocaList) ;
  return p->mObject.mProperty_mLLVMType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_allocaList::current_mFormalInputArgument (LOCATION_ARGS) const {
  const cCollectionElement_allocaList * p = (const cCollectionElement_allocaList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_allocaList) ;
  return p->mObject.mProperty_mFormalInputArgument ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  @allocaList type                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_allocaList ("allocaList",
                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_allocaList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_allocaList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_allocaList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_allocaList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allocaList GALGAS_allocaList::extractObject (const GALGAS_object & inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  GALGAS_allocaList result ;
  const GALGAS_allocaList * p = (const GALGAS_allocaList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_allocaList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("allocaList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Class for element of '@instructionListIR' list                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_instructionListIR : public cCollectionElement {
  public : GALGAS_instructionListIR_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_instructionListIR (const GALGAS_abstractInstructionIR & in_mInstructionGeneration
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

cCollectionElement_instructionListIR::cCollectionElement_instructionListIR (const GALGAS_abstractInstructionIR & in_mInstructionGeneration
                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mInstructionGeneration) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_instructionListIR::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_instructionListIR::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_instructionListIR (mObject.mProperty_mInstructionGeneration COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_instructionListIR::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInstructionGeneration" ":" ;
  mObject.mProperty_mInstructionGeneration.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_instructionListIR::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_instructionListIR * operand = (cCollectionElement_instructionListIR *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_instructionListIR) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR::GALGAS_instructionListIR (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR::GALGAS_instructionListIR (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR GALGAS_instructionListIR::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_instructionListIR  (capCollectionElementArray ()) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR GALGAS_instructionListIR::constructor_listWithValue (const GALGAS_abstractInstructionIR & inOperand0
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_instructionListIR result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_instructionListIR (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_instructionListIR::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_instructionListIR::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                          const GALGAS_abstractInstructionIR & in_mInstructionGeneration
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_instructionListIR * p = NULL ;
  macroMyNew (p, cCollectionElement_instructionListIR (in_mInstructionGeneration COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_instructionListIR::addAssign_operation (const GALGAS_abstractInstructionIR & inOperand0
                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_instructionListIR (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_instructionListIR::setter_insertAtIndex (const GALGAS_abstractInstructionIR inOperand0,
                                                     const GALGAS_uint inInsertionIndex,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_instructionListIR (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_instructionListIR::setter_removeAtIndex (GALGAS_abstractInstructionIR & outOperand0,
                                                     const GALGAS_uint inRemoveIndex,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_instructionListIR * p = (cCollectionElement_instructionListIR *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_instructionListIR) ;
      outOperand0 = p->mObject.mProperty_mInstructionGeneration ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_instructionListIR::setter_popFirst (GALGAS_abstractInstructionIR & outOperand0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_instructionListIR * p = (cCollectionElement_instructionListIR *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_instructionListIR) ;
    outOperand0 = p->mObject.mProperty_mInstructionGeneration ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_instructionListIR::setter_popLast (GALGAS_abstractInstructionIR & outOperand0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_instructionListIR * p = (cCollectionElement_instructionListIR *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_instructionListIR) ;
    outOperand0 = p->mObject.mProperty_mInstructionGeneration ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_instructionListIR::method_first (GALGAS_abstractInstructionIR & outOperand0,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_instructionListIR * p = (cCollectionElement_instructionListIR *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_instructionListIR) ;
    outOperand0 = p->mObject.mProperty_mInstructionGeneration ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_instructionListIR::method_last (GALGAS_abstractInstructionIR & outOperand0,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_instructionListIR * p = (cCollectionElement_instructionListIR *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_instructionListIR) ;
    outOperand0 = p->mObject.mProperty_mInstructionGeneration ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR GALGAS_instructionListIR::add_operation (const GALGAS_instructionListIR & inOperand,
                                                                  C_Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_instructionListIR result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR GALGAS_instructionListIR::getter_subListWithRange (const GALGAS_range & inRange,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_instructionListIR result = GALGAS_instructionListIR::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR GALGAS_instructionListIR::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_instructionListIR result = GALGAS_instructionListIR::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR GALGAS_instructionListIR::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_instructionListIR result = GALGAS_instructionListIR::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_instructionListIR::plusAssign_operation (const GALGAS_instructionListIR inOperand,
                                                     C_Compiler * /* inCompiler */
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractInstructionIR GALGAS_instructionListIR::getter_mInstructionGenerationAtIndex (const GALGAS_uint & inIndex,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_instructionListIR * p = (cCollectionElement_instructionListIR *) attributes.ptr () ;
  GALGAS_abstractInstructionIR result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_instructionListIR) ;
    result = p->mObject.mProperty_mInstructionGeneration ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_instructionListIR::cEnumerator_instructionListIR (const GALGAS_instructionListIR & inEnumeratedObject,
                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR_2D_element cEnumerator_instructionListIR::current (LOCATION_ARGS) const {
  const cCollectionElement_instructionListIR * p = (const cCollectionElement_instructionListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_instructionListIR) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractInstructionIR cEnumerator_instructionListIR::current_mInstructionGeneration (LOCATION_ARGS) const {
  const cCollectionElement_instructionListIR * p = (const cCollectionElement_instructionListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_instructionListIR) ;
  return p->mObject.mProperty_mInstructionGeneration ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @instructionListIR type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_instructionListIR ("instructionListIR",
                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_instructionListIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_instructionListIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_instructionListIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_instructionListIR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR GALGAS_instructionListIR::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_instructionListIR result ;
  const GALGAS_instructionListIR * p = (const GALGAS_instructionListIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_instructionListIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("instructionListIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Class for element of '@taskSortedListIR' sorted list                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cSortedListElement_taskSortedListIR : public cSortedListElement {
  public : GALGAS_taskSortedListIR_2D_element mObject ;

//--- Constructor
  public : cSortedListElement_taskSortedListIR (const GALGAS_string & in_mTaskName,
                                                const GALGAS_bigint & in_mPriority,
                                                const GALGAS_bigint & in_mStackSize,
                                                const GALGAS_allocaList & in_mAllocaList,
                                                const GALGAS_instructionListIR & in_mSetupInstructionListIR,
                                                const GALGAS_uint & in_mTaskNameStringIndex
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

//---------------------------------------------------------------------------------------------------------------------*

cSortedListElement_taskSortedListIR::cSortedListElement_taskSortedListIR (const GALGAS_string & in_mTaskName,
                                                                          const GALGAS_bigint & in_mPriority,
                                                                          const GALGAS_bigint & in_mStackSize,
                                                                          const GALGAS_allocaList & in_mAllocaList,
                                                                          const GALGAS_instructionListIR & in_mSetupInstructionListIR,
                                                                          const GALGAS_uint & in_mTaskNameStringIndex
                                                                          COMMA_LOCATION_ARGS) :
cSortedListElement (THERE),
mObject (in_mTaskName, in_mPriority, in_mStackSize, in_mAllocaList, in_mSetupInstructionListIR, in_mTaskNameStringIndex) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cSortedListElement_taskSortedListIR::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cSortedListElement * cSortedListElement_taskSortedListIR::copy (void) {
  cSortedListElement * result = NULL ;
  macroMyNew (result, cSortedListElement_taskSortedListIR (mObject.mProperty_mTaskName, mObject.mProperty_mPriority, mObject.mProperty_mStackSize, mObject.mProperty_mAllocaList, mObject.mProperty_mSetupInstructionListIR, mObject.mProperty_mTaskNameStringIndex COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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
  ioString << "mAllocaList" ":" ;
  mObject.mProperty_mAllocaList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSetupInstructionListIR" ":" ;
  mObject.mProperty_mSetupInstructionListIR.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTaskNameStringIndex" ":" ;
  mObject.mProperty_mTaskNameStringIndex.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cSortedListElement_taskSortedListIR::compare (const cCollectionElement * inOperand) const {
  cSortedListElement_taskSortedListIR * operand = (cSortedListElement_taskSortedListIR *) inOperand ;
  macroValidSharedObject (operand, cSortedListElement_taskSortedListIR) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskSortedListIR::GALGAS_taskSortedListIR (void) :
AC_GALGAS_sortedlist () {
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cSortedListElement_taskSortedListIR::compareForSorting (const cSortedListElement * inOperand) const {
  typeComparisonResult result = kOperandEqual ;
  const cSortedListElement_taskSortedListIR * operand = (const cSortedListElement_taskSortedListIR *) inOperand ;
  macroValidSharedObject (operand, cSortedListElement_taskSortedListIR) ;
  if (result == kOperandEqual) {
    result = mObject.mProperty_mPriority.objectCompare (operand->mObject.mProperty_mPriority) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskSortedListIR GALGAS_taskSortedListIR::constructor_emptySortedList (LOCATION_ARGS) {
  GALGAS_taskSortedListIR result ;
  result.createNewEmptySortedList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskSortedListIR GALGAS_taskSortedListIR::constructor_sortedListWithValue (const GALGAS_string & inOperand0,
                                                                                  const GALGAS_bigint & inOperand1,
                                                                                  const GALGAS_bigint & inOperand2,
                                                                                  const GALGAS_allocaList & inOperand3,
                                                                                  const GALGAS_instructionListIR & inOperand4,
                                                                                  const GALGAS_uint & inOperand5
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_taskSortedListIR result = constructor_emptySortedList (THERE) ;
  cSortedListElement * p = NULL ;
  macroMyNew (p, cSortedListElement_taskSortedListIR (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5 COMMA_THERE)) ;
  capSortedListElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  result.appendObject (attributes) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskSortedListIR::addAssign_operation (const GALGAS_string & inOperand0,
                                                   const GALGAS_bigint & inOperand1,
                                                   const GALGAS_bigint & inOperand2,
                                                   const GALGAS_allocaList & inOperand3,
                                                   const GALGAS_instructionListIR & inOperand4,
                                                   const GALGAS_uint & inOperand5
                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cSortedListElement * p = NULL ;
    macroMyNew (p, cSortedListElement_taskSortedListIR (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5 COMMA_THERE)) ;
    capSortedListElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskSortedListIR::plusAssign_operation (const GALGAS_taskSortedListIR inOperand,
                                                    C_Compiler * /* inCompiler */
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid ()) {
    appendSortedList (inOperand) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskSortedListIR::setter_popSmallest (GALGAS_string & outOperand0,
                                                  GALGAS_bigint & outOperand1,
                                                  GALGAS_bigint & outOperand2,
                                                  GALGAS_allocaList & outOperand3,
                                                  GALGAS_instructionListIR & outOperand4,
                                                  GALGAS_uint & outOperand5,
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
  }else{
    macroValidSharedObject (p, cSortedListElement_taskSortedListIR) ;
    outOperand0 = p->mObject.mProperty_mTaskName ;
    outOperand1 = p->mObject.mProperty_mPriority ;
    outOperand2 = p->mObject.mProperty_mStackSize ;
    outOperand3 = p->mObject.mProperty_mAllocaList ;
    outOperand4 = p->mObject.mProperty_mSetupInstructionListIR ;
    outOperand5 = p->mObject.mProperty_mTaskNameStringIndex ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskSortedListIR::setter_popGreatest (GALGAS_string & outOperand0,
                                                  GALGAS_bigint & outOperand1,
                                                  GALGAS_bigint & outOperand2,
                                                  GALGAS_allocaList & outOperand3,
                                                  GALGAS_instructionListIR & outOperand4,
                                                  GALGAS_uint & outOperand5,
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
  }else{
    macroValidSharedObject (p, cSortedListElement_taskSortedListIR) ;
    outOperand0 = p->mObject.mProperty_mTaskName ;
    outOperand1 = p->mObject.mProperty_mPriority ;
    outOperand2 = p->mObject.mProperty_mStackSize ;
    outOperand3 = p->mObject.mProperty_mAllocaList ;
    outOperand4 = p->mObject.mProperty_mSetupInstructionListIR ;
    outOperand5 = p->mObject.mProperty_mTaskNameStringIndex ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskSortedListIR::method_smallest (GALGAS_string & outOperand0,
                                               GALGAS_bigint & outOperand1,
                                               GALGAS_bigint & outOperand2,
                                               GALGAS_allocaList & outOperand3,
                                               GALGAS_instructionListIR & outOperand4,
                                               GALGAS_uint & outOperand5,
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
  }else{
    macroValidSharedObject (p, cSortedListElement_taskSortedListIR) ;
    outOperand0 = p->mObject.mProperty_mTaskName ;
    outOperand1 = p->mObject.mProperty_mPriority ;
    outOperand2 = p->mObject.mProperty_mStackSize ;
    outOperand3 = p->mObject.mProperty_mAllocaList ;
    outOperand4 = p->mObject.mProperty_mSetupInstructionListIR ;
    outOperand5 = p->mObject.mProperty_mTaskNameStringIndex ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskSortedListIR::method_greatest (GALGAS_string & outOperand0,
                                               GALGAS_bigint & outOperand1,
                                               GALGAS_bigint & outOperand2,
                                               GALGAS_allocaList & outOperand3,
                                               GALGAS_instructionListIR & outOperand4,
                                               GALGAS_uint & outOperand5,
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
  }else{
    macroValidSharedObject (p, cSortedListElement_taskSortedListIR) ;
    outOperand0 = p->mObject.mProperty_mTaskName ;
    outOperand1 = p->mObject.mProperty_mPriority ;
    outOperand2 = p->mObject.mProperty_mStackSize ;
    outOperand3 = p->mObject.mProperty_mAllocaList ;
    outOperand4 = p->mObject.mProperty_mSetupInstructionListIR ;
    outOperand5 = p->mObject.mProperty_mTaskNameStringIndex ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_taskSortedListIR::cEnumerator_taskSortedListIR (const GALGAS_taskSortedListIR & inEnumeratedObject,
                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskSortedListIR_2D_element cEnumerator_taskSortedListIR::current (LOCATION_ARGS) const {
  const cSortedListElement_taskSortedListIR * p = (const cSortedListElement_taskSortedListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_taskSortedListIR) ;
  return p->mObject ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_taskSortedListIR::current_mTaskName (LOCATION_ARGS) const {
  const cSortedListElement_taskSortedListIR * p = (const cSortedListElement_taskSortedListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_taskSortedListIR) ;
  return p->mObject.mProperty_mTaskName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint cEnumerator_taskSortedListIR::current_mPriority (LOCATION_ARGS) const {
  const cSortedListElement_taskSortedListIR * p = (const cSortedListElement_taskSortedListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_taskSortedListIR) ;
  return p->mObject.mProperty_mPriority ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint cEnumerator_taskSortedListIR::current_mStackSize (LOCATION_ARGS) const {
  const cSortedListElement_taskSortedListIR * p = (const cSortedListElement_taskSortedListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_taskSortedListIR) ;
  return p->mObject.mProperty_mStackSize ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allocaList cEnumerator_taskSortedListIR::current_mAllocaList (LOCATION_ARGS) const {
  const cSortedListElement_taskSortedListIR * p = (const cSortedListElement_taskSortedListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_taskSortedListIR) ;
  return p->mObject.mProperty_mAllocaList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR cEnumerator_taskSortedListIR::current_mSetupInstructionListIR (LOCATION_ARGS) const {
  const cSortedListElement_taskSortedListIR * p = (const cSortedListElement_taskSortedListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_taskSortedListIR) ;
  return p->mObject.mProperty_mSetupInstructionListIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cEnumerator_taskSortedListIR::current_mTaskNameStringIndex (LOCATION_ARGS) const {
  const cSortedListElement_taskSortedListIR * p = (const cSortedListElement_taskSortedListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_taskSortedListIR) ;
  return p->mObject.mProperty_mTaskNameStringIndex ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @taskSortedListIR type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_taskSortedListIR ("taskSortedListIR",
                                         NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_taskSortedListIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_taskSortedListIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_taskSortedListIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_taskSortedListIR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Extension method '@taskMapIR generateCode'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_generateCode (const GALGAS_taskMapIR inObject,
                                   GALGAS_string & ioArgument_ioLLVMcode,
                                   const GALGAS_generationContext constinArgument_inGenerationContext,
                                   GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                   GALGAS_primitiveAndServiceIRlist & ioArgument_ioServiceList,
                                   C_Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("Task self terminate service"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 411)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 411)) ;
  GALGAS_string var_selfTerminateImplementationName_15787 = function_llvmNameForServiceImplementation (function_llvmNameForTaskAutoBlockService (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 412)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 412)) ;
  GALGAS_string var_selfTerminateCallName_15888 = function_llvmNameForServiceCall (function_llvmNameForTaskAutoBlockService (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 413)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 413)) ;
  ioArgument_ioServiceList.addAssign_operation (var_selfTerminateCallName_15888, var_selfTerminateImplementationName_15787, GALGAS_bool (false)  COMMA_SOURCE_FILE ("task-declaration.galgas", 414)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("declare void @").add_operation (var_selfTerminateCallName_15888, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 415)).add_operation (GALGAS_string (" () nounwind noreturn\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 415)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 415)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("Task variables"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 417)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 417)) ;
  cEnumerator_globalTaskVariableList enumerator_16292 (constinArgument_inGenerationContext.getter_mGlobalTaskVariableList (HERE), kENUMERATION_UP) ;
  while (enumerator_16292.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssign_operation(function_llvmNameForGlobalVariable (enumerator_16292.current_mTaskName (HERE), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 419)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 419)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" = internal global %"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 420)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTypeStringFromPLMname (enumerator_16292.current_mTaskTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 421)).getter_assemblerRepresentation (SOURCE_FILE ("task-declaration.galgas", 421)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 421)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 421)) ;
    GALGAS_string var_initialString_16506 = extensionGetter_llvmName (enumerator_16292.current_mInitialValue (HERE), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 422)) ;
    const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_initialString_16506.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("zeroinitializer"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 424)) ;
    }else if (kBoolFalse == test_0) {
      ioArgument_ioLLVMcode.plusAssign_operation(var_initialString_16506, inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 426)) ;
    }
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 428)) ;
    enumerator_16292.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 430)) ;
  GALGAS_taskSortedListIR var_orderedTaskList_16769 = GALGAS_taskSortedListIR::constructor_emptySortedList (SOURCE_FILE ("task-declaration.galgas", 432)) ;
  const GALGAS_taskMapIR temp_1 = inObject ;
  cEnumerator_taskMapIR enumerator_16793 (temp_1, kENUMERATION_UP) ;
  while (enumerator_16793.hasCurrentObject ()) {
    var_orderedTaskList_16769.addAssign_operation (enumerator_16793.current (HERE).getter_lkey (HERE).getter_string (HERE), enumerator_16793.current (HERE).getter_mPriority (HERE), enumerator_16793.current (HERE).getter_mStackSize (HERE), enumerator_16793.current (HERE).getter_mAllocaList (HERE), enumerator_16793.current (HERE).getter_mInitInstructionListIR (HERE), enumerator_16793.current (HERE).getter_mTaskNameStringIndex (HERE)  COMMA_SOURCE_FILE ("task-declaration.galgas", 434)) ;
    enumerator_16793.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("Create task extern routine"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 443)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 443)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("declare void @kernel_create_task (i32 %inTaskIndex, i8* %inTaskName, i32* %inStackBufferAddress, "), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 444)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("i32 %inStackBufferSize, void ()* %inTaskRoutine) nounwind\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 445)) ;
  cEnumerator_taskSortedListIR enumerator_17319 (var_orderedTaskList_16769, kENUMERATION_UP) ;
  while (enumerator_17319.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("Task ").add_operation (enumerator_17319.current (HERE).getter_mTaskName (HERE), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 447)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 447)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 447)) ;
    GALGAS_string var_assemblerTaskName_17411 = function_llvmTypeStringFromPLMname (enumerator_17319.current (HERE).getter_mTaskName (HERE), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 448)).getter_assemblerRepresentation (SOURCE_FILE ("task-declaration.galgas", 448)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(function_stackNameForTask (enumerator_17319.current (HERE).getter_mTaskName (HERE), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 449)).add_operation (GALGAS_string (" = global ["), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 449)).add_operation (enumerator_17319.current (HERE).getter_mStackSize (HERE).divide_operation (GALGAS_uint ((uint32_t) 4U).getter_bigint (SOURCE_FILE ("task-declaration.galgas", 449)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 449)).getter_string (SOURCE_FILE ("task-declaration.galgas", 449)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 449)).add_operation (GALGAS_string (" x i32] zeroinitializer\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 449)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 449)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 450)) ;
    GALGAS_string var_effectiveParameter_17656 = GALGAS_string ("(%").add_operation (var_assemblerTaskName_17411, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 451)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 451)).add_operation (function_llvmNameForGlobalVariable (enumerator_17319.current (HERE).getter_mTaskName (HERE), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 451)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 451)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 451)) ;
    GALGAS_string var_formalArgument_17765 = GALGAS_string ("(%").add_operation (var_assemblerTaskName_17411, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 452)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 452)).add_operation (function_llvmNameForSelf (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 452)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 452)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 452)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(function_llvmSeparatorLine (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 453)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 453)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 453)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal void ").add_operation (function_initNameForTaskType (enumerator_17319.current (HERE).getter_mTaskName (HERE), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 455)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 455)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 455)).add_operation (var_formalArgument_17765, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 455)).add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 455)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 455)).add_operation (GALGAS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 455)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 455)) ;
    extensionMethod_generateAllocaList (enumerator_17319.current (HERE).getter_mAllocaList (HERE), ioArgument_ioLLVMcode, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 456)) ;
    extensionMethod_instructionListLLVMCode (enumerator_17319.current (HERE).getter_mSetupInstructionListIR (HERE), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 457)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 458)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
      "\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 459)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(function_llvmSeparatorLine (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 460)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 460)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 461)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal void ").add_operation (function_mainRoutineNameForTask (enumerator_17319.current (HERE).getter_mTaskName (HERE), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 462)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 462)).add_operation (GALGAS_string (" ()"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 462)).add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 462)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 462)).add_operation (GALGAS_string ("noreturn {\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 462)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 462)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void ").add_operation (function_initNameForTaskType (enumerator_17319.current (HERE).getter_mTaskName (HERE), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 463)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 463)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 463)).add_operation (var_effectiveParameter_17656, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 463)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 463)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 463)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @").add_operation (function_llvmNameForFunction (function_llvmTypeStringFromPLMname (enumerator_17319.current (HERE).getter_mTaskName (HERE), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 464)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 464)).add_operation (function_llvmNameForTaskLoopFunction (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 464)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 464)).add_operation (GALGAS_string ("()"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 464)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 464)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 464)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 464)).add_operation (var_effectiveParameter_17656, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 464)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 464)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 464)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @").add_operation (var_selfTerminateCallName_15888, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 465)).add_operation (GALGAS_string (" ()\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 465)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 465)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  unreachable\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 466)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
      "\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 467)) ;
    enumerator_17319.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("Start tasks"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 470)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 470)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal void @start.tasks ()").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 471)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 471)).add_operation (GALGAS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 471)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 471)) ;
  cEnumerator_taskSortedListIR enumerator_19062 (var_orderedTaskList_16769, kENUMERATION_UP) ;
  GALGAS_uint index_19038 ((uint32_t) 0) ;
  while (enumerator_19062.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (function_stackAddressForTask (enumerator_19062.current (HERE).getter_mTaskName (HERE), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 473)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 473)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 473)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" = getelementptr inbounds [").add_operation (enumerator_19062.current (HERE).getter_mStackSize (HERE).divide_operation (GALGAS_uint ((uint32_t) 4U).getter_bigint (SOURCE_FILE ("task-declaration.galgas", 474)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 474)).getter_string (SOURCE_FILE ("task-declaration.galgas", 474)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 474)).add_operation (GALGAS_string (" x i32], "), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 474)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 474)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("[").add_operation (enumerator_19062.current (HERE).getter_mStackSize (HERE).divide_operation (GALGAS_uint ((uint32_t) 4U).getter_bigint (SOURCE_FILE ("task-declaration.galgas", 475)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 475)).getter_string (SOURCE_FILE ("task-declaration.galgas", 475)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 475)).add_operation (GALGAS_string (" x i32]* "), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 475)).add_operation (function_stackNameForTask (enumerator_19062.current (HERE).getter_mTaskName (HERE), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 475)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 475)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 475)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", i32 0, i32 0\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 476)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %task.name.").add_operation (index_19038.getter_string (SOURCE_FILE ("task-declaration.galgas", 477)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 477)).add_operation (GALGAS_string (" = load i8*, i8** "), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 477)).add_operation (function_literalStringName (enumerator_19062.current (HERE).getter_mTaskNameStringIndex (HERE), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 477)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 477)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 477)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 477)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @kernel_create_task ("), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 478)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("i32 ").add_operation (index_19038.getter_string (SOURCE_FILE ("task-declaration.galgas", 479)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 479)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 479)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", i8* %task.name.").add_operation (index_19038.getter_string (SOURCE_FILE ("task-declaration.galgas", 480)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 480)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 480)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", i32* ").add_operation (function_stackAddressForTask (enumerator_19062.current (HERE).getter_mTaskName (HERE), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 481)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 481)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 481)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", i32 ").add_operation (enumerator_19062.current (HERE).getter_mStackSize (HERE).getter_string (SOURCE_FILE ("task-declaration.galgas", 482)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 482)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 482)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", void ()* ").add_operation (function_mainRoutineNameForTask (enumerator_19062.current (HERE).getter_mTaskName (HERE), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 483)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 483)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 483)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 483)) ;
    enumerator_19062.gotoNextObject () ;
    index_19038.increment_operation (inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 472)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 485)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 486)) ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mode::GALGAS_mode (void) :
mEnum (kNotBuilt) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mode GALGAS_mode::constructor_userMode (UNUSED_LOCATION_ARGS) {
  GALGAS_mode result ;
  result.mEnum = kEnum_userMode ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mode GALGAS_mode::constructor_sectionMode (UNUSED_LOCATION_ARGS) {
  GALGAS_mode result ;
  result.mEnum = kEnum_sectionMode ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mode GALGAS_mode::constructor_serviceMode (UNUSED_LOCATION_ARGS) {
  GALGAS_mode result ;
  result.mEnum = kEnum_serviceMode ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mode GALGAS_mode::constructor_primitiveMode (UNUSED_LOCATION_ARGS) {
  GALGAS_mode result ;
  result.mEnum = kEnum_primitiveMode ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mode GALGAS_mode::constructor_guardMode (UNUSED_LOCATION_ARGS) {
  GALGAS_mode result ;
  result.mEnum = kEnum_guardMode ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mode GALGAS_mode::constructor_panicMode (UNUSED_LOCATION_ARGS) {
  GALGAS_mode result ;
  result.mEnum = kEnum_panicMode ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mode GALGAS_mode::constructor_bootMode (UNUSED_LOCATION_ARGS) {
  GALGAS_mode result ;
  result.mEnum = kEnum_bootMode ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mode GALGAS_mode::constructor_initMode (UNUSED_LOCATION_ARGS) {
  GALGAS_mode result ;
  result.mEnum = kEnum_initMode ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mode GALGAS_mode::constructor_anyMode (UNUSED_LOCATION_ARGS) {
  GALGAS_mode result ;
  result.mEnum = kEnum_anyMode ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * gEnumNameArrayFor_mode [10] = {
  "(not built)",
  "userMode",
  "sectionMode",
  "serviceMode",
  "primitiveMode",
  "guardMode",
  "panicMode",
  "bootMode",
  "initMode",
  "anyMode"
} ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_mode::getter_isUserMode (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_userMode == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_mode::getter_isSectionMode (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_sectionMode == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_mode::getter_isServiceMode (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_serviceMode == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_mode::getter_isPrimitiveMode (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_primitiveMode == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_mode::getter_isGuardMode (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_guardMode == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_mode::getter_isPanicMode (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_panicMode == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_mode::getter_isBootMode (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_bootMode == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_mode::getter_isInitMode (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_initMode == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_mode::getter_isAnyMode (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_anyMode == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mode::description (C_String & ioString,
                               const int32_t /* inIndentation */) const {
  ioString << "<enum @mode: " << gEnumNameArrayFor_mode [mEnum] ;
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                     @mode type                                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_mode ("mode",
                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_mode::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mode ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_mode::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_mode (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Extension Getter '@mode string'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string extensionGetter_string (const GALGAS_mode & inObject,
                                      C_Compiler * /* inCompiler */
                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_mode temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_mode::kNotBuilt:
    break ;
  case GALGAS_mode::kEnum_userMode:
    {
      result_result = GALGAS_string ("user") ;
    }
    break ;
  case GALGAS_mode::kEnum_sectionMode:
    {
      result_result = GALGAS_string ("section") ;
    }
    break ;
  case GALGAS_mode::kEnum_serviceMode:
    {
      result_result = GALGAS_string ("service") ;
    }
    break ;
  case GALGAS_mode::kEnum_primitiveMode:
    {
      result_result = GALGAS_string ("primitive") ;
    }
    break ;
  case GALGAS_mode::kEnum_guardMode:
    {
      result_result = GALGAS_string ("guard") ;
    }
    break ;
  case GALGAS_mode::kEnum_panicMode:
    {
      result_result = GALGAS_string ("panic") ;
    }
    break ;
  case GALGAS_mode::kEnum_bootMode:
    {
      result_result = GALGAS_string ("boot") ;
    }
    break ;
  case GALGAS_mode::kEnum_initMode:
    {
      result_result = GALGAS_string ("init") ;
    }
    break ;
  case GALGAS_mode::kEnum_anyMode:
    {
      result_result = GALGAS_string ("any") ;
    }
    break ;
  }
//---
  return result_result ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Extension Getter '@mode controlRegisterAccess'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool extensionGetter_controlRegisterAccess (const GALGAS_mode & inObject,
                                                   const GALGAS_bool & constinArgument_inIsAccessibleInUserMode,
                                                   C_Compiler * /* inCompiler */
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  const GALGAS_mode temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_mode::kNotBuilt:
    break ;
  case GALGAS_mode::kEnum_userMode:
  case GALGAS_mode::kEnum_anyMode:
    {
      result_result = constinArgument_inIsAccessibleInUserMode ;
    }
    break ;
  case GALGAS_mode::kEnum_sectionMode:
  case GALGAS_mode::kEnum_serviceMode:
  case GALGAS_mode::kEnum_primitiveMode:
  case GALGAS_mode::kEnum_panicMode:
  case GALGAS_mode::kEnum_bootMode:
  case GALGAS_mode::kEnum_initMode:
    {
      result_result = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_mode::kEnum_guardMode:
    {
      result_result = GALGAS_bool (false) ;
    }
    break ;
  }
//---
  return result_result ;
}




//---------------------------------------------------------------------------------------------------------------------*

cMapElement_panicRoutinePriorityMap::cMapElement_panicRoutinePriorityMap (const GALGAS_lstring & inKey
                                                                          COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_panicRoutinePriorityMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_panicRoutinePriorityMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_panicRoutinePriorityMap (mProperty_lkey COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_panicRoutinePriorityMap::description (C_String & /* ioString */, const int32_t /* inIndentation */) const {
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_panicRoutinePriorityMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_panicRoutinePriorityMap * operand = (cMapElement_panicRoutinePriorityMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_panicRoutinePriorityMap::GALGAS_panicRoutinePriorityMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_panicRoutinePriorityMap::GALGAS_panicRoutinePriorityMap (const GALGAS_panicRoutinePriorityMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_panicRoutinePriorityMap & GALGAS_panicRoutinePriorityMap::operator = (const GALGAS_panicRoutinePriorityMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_panicRoutinePriorityMap GALGAS_panicRoutinePriorityMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_panicRoutinePriorityMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_panicRoutinePriorityMap GALGAS_panicRoutinePriorityMap::constructor_mapWithMapToOverride (const GALGAS_panicRoutinePriorityMap & inMapToOverride
                                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_panicRoutinePriorityMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_panicRoutinePriorityMap GALGAS_panicRoutinePriorityMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  GALGAS_panicRoutinePriorityMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_panicRoutinePriorityMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  cMapElement_panicRoutinePriorityMap * p = NULL ;
  macroMyNew (p, cMapElement_panicRoutinePriorityMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@panicRoutinePriorityMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_panicRoutinePriorityMap::setter_insertSetupKey (GALGAS_lstring inKey,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  cMapElement_panicRoutinePriorityMap * p = NULL ;
  macroMyNew (p, cMapElement_panicRoutinePriorityMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "a panic setup routine with priority %K has been already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_panicRoutinePriorityMap::setter_insertLoopKey (GALGAS_lstring inKey,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  cMapElement_panicRoutinePriorityMap * p = NULL ;
  macroMyNew (p, cMapElement_panicRoutinePriorityMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "a panic loop routine with priority %K has been already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_panicRoutinePriorityMap_searchSetupKey = "there is no panic setup routine with priority %K" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_panicRoutinePriorityMap::method_searchSetupKey (GALGAS_lstring inKey,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  const cMapElement_panicRoutinePriorityMap * p = (const cMapElement_panicRoutinePriorityMap *) performSearch (inKey,
                                                                                                               inCompiler,
                                                                                                               kSearchErrorMessage_panicRoutinePriorityMap_searchSetupKey
                                                                                                               COMMA_THERE) ;
  if (NULL == p) {
  }else{
    macroValidSharedObject (p, cMapElement_panicRoutinePriorityMap) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_panicRoutinePriorityMap_searchLoopKey = "there is no panic loop routine with priority %K" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_panicRoutinePriorityMap::method_searchLoopKey (GALGAS_lstring inKey,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  const cMapElement_panicRoutinePriorityMap * p = (const cMapElement_panicRoutinePriorityMap *) performSearch (inKey,
                                                                                                               inCompiler,
                                                                                                               kSearchErrorMessage_panicRoutinePriorityMap_searchLoopKey
                                                                                                               COMMA_THERE) ;
  if (NULL == p) {
  }else{
    macroValidSharedObject (p, cMapElement_panicRoutinePriorityMap) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_panicRoutinePriorityMap * GALGAS_panicRoutinePriorityMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                         const GALGAS_string & inKey
                                                                                                         COMMA_LOCATION_ARGS) {
  cMapElement_panicRoutinePriorityMap * result = (cMapElement_panicRoutinePriorityMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_panicRoutinePriorityMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_panicRoutinePriorityMap::cEnumerator_panicRoutinePriorityMap (const GALGAS_panicRoutinePriorityMap & inEnumeratedObject,
                                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_panicRoutinePriorityMap_2D_element cEnumerator_panicRoutinePriorityMap::current (LOCATION_ARGS) const {
  const cMapElement_panicRoutinePriorityMap * p = (const cMapElement_panicRoutinePriorityMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_panicRoutinePriorityMap) ;
  return GALGAS_panicRoutinePriorityMap_2D_element (p->mProperty_lkey) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_panicRoutinePriorityMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @panicRoutinePriorityMap type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_panicRoutinePriorityMap ("panicRoutinePriorityMap",
                                                NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_panicRoutinePriorityMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_panicRoutinePriorityMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_panicRoutinePriorityMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_panicRoutinePriorityMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_panicRoutinePriorityMap GALGAS_panicRoutinePriorityMap::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_panicRoutinePriorityMap result ;
  const GALGAS_panicRoutinePriorityMap * p = (const GALGAS_panicRoutinePriorityMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_panicRoutinePriorityMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("panicRoutinePriorityMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Class for element of '@instructionListSortedListIR' sorted list                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cSortedListElement_instructionListSortedListIR : public cSortedListElement {
  public : GALGAS_instructionListSortedListIR_2D_element mObject ;

//--- Constructor
  public : cSortedListElement_instructionListSortedListIR (const GALGAS_instructionListIR & in_mInstructionList,
                                                           const GALGAS_bigint & in_mPriority
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

//---------------------------------------------------------------------------------------------------------------------*

cSortedListElement_instructionListSortedListIR::cSortedListElement_instructionListSortedListIR (const GALGAS_instructionListIR & in_mInstructionList,
                                                                                                const GALGAS_bigint & in_mPriority
                                                                                                COMMA_LOCATION_ARGS) :
cSortedListElement (THERE),
mObject (in_mInstructionList, in_mPriority) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cSortedListElement_instructionListSortedListIR::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cSortedListElement * cSortedListElement_instructionListSortedListIR::copy (void) {
  cSortedListElement * result = NULL ;
  macroMyNew (result, cSortedListElement_instructionListSortedListIR (mObject.mProperty_mInstructionList, mObject.mProperty_mPriority COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cSortedListElement_instructionListSortedListIR::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInstructionList" ":" ;
  mObject.mProperty_mInstructionList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mPriority" ":" ;
  mObject.mProperty_mPriority.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cSortedListElement_instructionListSortedListIR::compare (const cCollectionElement * inOperand) const {
  cSortedListElement_instructionListSortedListIR * operand = (cSortedListElement_instructionListSortedListIR *) inOperand ;
  macroValidSharedObject (operand, cSortedListElement_instructionListSortedListIR) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListSortedListIR::GALGAS_instructionListSortedListIR (void) :
AC_GALGAS_sortedlist () {
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cSortedListElement_instructionListSortedListIR::compareForSorting (const cSortedListElement * inOperand) const {
  typeComparisonResult result = kOperandEqual ;
  const cSortedListElement_instructionListSortedListIR * operand = (const cSortedListElement_instructionListSortedListIR *) inOperand ;
  macroValidSharedObject (operand, cSortedListElement_instructionListSortedListIR) ;
  if (result == kOperandEqual) {
    result = mObject.mProperty_mPriority.objectCompare (operand->mObject.mProperty_mPriority) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListSortedListIR GALGAS_instructionListSortedListIR::constructor_emptySortedList (LOCATION_ARGS) {
  GALGAS_instructionListSortedListIR result ;
  result.createNewEmptySortedList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListSortedListIR GALGAS_instructionListSortedListIR::constructor_sortedListWithValue (const GALGAS_instructionListIR & inOperand0,
                                                                                                        const GALGAS_bigint & inOperand1
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_instructionListSortedListIR result = constructor_emptySortedList (THERE) ;
  cSortedListElement * p = NULL ;
  macroMyNew (p, cSortedListElement_instructionListSortedListIR (inOperand0, inOperand1 COMMA_THERE)) ;
  capSortedListElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  result.appendObject (attributes) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_instructionListSortedListIR::addAssign_operation (const GALGAS_instructionListIR & inOperand0,
                                                              const GALGAS_bigint & inOperand1
                                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cSortedListElement * p = NULL ;
    macroMyNew (p, cSortedListElement_instructionListSortedListIR (inOperand0, inOperand1 COMMA_THERE)) ;
    capSortedListElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_instructionListSortedListIR::plusAssign_operation (const GALGAS_instructionListSortedListIR inOperand,
                                                               C_Compiler * /* inCompiler */
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid ()) {
    appendSortedList (inOperand) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_instructionListSortedListIR::setter_popSmallest (GALGAS_instructionListIR & outOperand0,
                                                             GALGAS_bigint & outOperand1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  capSortedListElement attributes ;
  removeSmallestObject (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_instructionListSortedListIR * p = (cSortedListElement_instructionListSortedListIR *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_instructionListSortedListIR) ;
    outOperand0 = p->mObject.mProperty_mInstructionList ;
    outOperand1 = p->mObject.mProperty_mPriority ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_instructionListSortedListIR::setter_popGreatest (GALGAS_instructionListIR & outOperand0,
                                                             GALGAS_bigint & outOperand1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  capSortedListElement attributes ;
  removeGreatestObject (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_instructionListSortedListIR * p = (cSortedListElement_instructionListSortedListIR *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_instructionListSortedListIR) ;
    outOperand0 = p->mObject.mProperty_mInstructionList ;
    outOperand1 = p->mObject.mProperty_mPriority ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_instructionListSortedListIR::method_smallest (GALGAS_instructionListIR & outOperand0,
                                                          GALGAS_bigint & outOperand1,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  capSortedListElement attributes ;
  smallestObjectAttributeList (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_instructionListSortedListIR * p = (cSortedListElement_instructionListSortedListIR *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_instructionListSortedListIR) ;
    outOperand0 = p->mObject.mProperty_mInstructionList ;
    outOperand1 = p->mObject.mProperty_mPriority ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_instructionListSortedListIR::method_greatest (GALGAS_instructionListIR & outOperand0,
                                                          GALGAS_bigint & outOperand1,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  capSortedListElement attributes ;
  greatestObjectAttributeList (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_instructionListSortedListIR * p = (cSortedListElement_instructionListSortedListIR *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_instructionListSortedListIR) ;
    outOperand0 = p->mObject.mProperty_mInstructionList ;
    outOperand1 = p->mObject.mProperty_mPriority ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_instructionListSortedListIR::cEnumerator_instructionListSortedListIR (const GALGAS_instructionListSortedListIR & inEnumeratedObject,
                                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListSortedListIR_2D_element cEnumerator_instructionListSortedListIR::current (LOCATION_ARGS) const {
  const cSortedListElement_instructionListSortedListIR * p = (const cSortedListElement_instructionListSortedListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_instructionListSortedListIR) ;
  return p->mObject ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR cEnumerator_instructionListSortedListIR::current_mInstructionList (LOCATION_ARGS) const {
  const cSortedListElement_instructionListSortedListIR * p = (const cSortedListElement_instructionListSortedListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_instructionListSortedListIR) ;
  return p->mObject.mProperty_mInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint cEnumerator_instructionListSortedListIR::current_mPriority (LOCATION_ARGS) const {
  const cSortedListElement_instructionListSortedListIR * p = (const cSortedListElement_instructionListSortedListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_instructionListSortedListIR) ;
  return p->mObject.mProperty_mPriority ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @instructionListSortedListIR type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_instructionListSortedListIR ("instructionListSortedListIR",
                                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_instructionListSortedListIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_instructionListSortedListIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_instructionListSortedListIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_instructionListSortedListIR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListSortedListIR GALGAS_instructionListSortedListIR::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_instructionListSortedListIR result ;
  const GALGAS_instructionListSortedListIR * p = (const GALGAS_instructionListSortedListIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_instructionListSortedListIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("instructionListSortedListIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_routineKind_function::cEnumAssociatedValues_routineKind_function (const GALGAS_mode & inAssociatedValue0
                                                                                        COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_routineKind_function::description (C_String & ioString,
                                                              const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_routineKind_function::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_routineKind_function * ptr = dynamic_cast<const cEnumAssociatedValues_routineKind_function *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineKind::GALGAS_routineKind (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineKind GALGAS_routineKind::constructor_function (const GALGAS_mode & inAssociatedValue0
                                                             COMMA_LOCATION_ARGS) {
  GALGAS_routineKind result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_function ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_routineKind_function (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineKind GALGAS_routineKind::constructor_section (UNUSED_LOCATION_ARGS) {
  GALGAS_routineKind result ;
  result.mEnum = kEnum_section ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineKind GALGAS_routineKind::constructor_service (UNUSED_LOCATION_ARGS) {
  GALGAS_routineKind result ;
  result.mEnum = kEnum_service ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineKind GALGAS_routineKind::constructor_primitive (UNUSED_LOCATION_ARGS) {
  GALGAS_routineKind result ;
  result.mEnum = kEnum_primitive ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineKind::method_function (GALGAS_mode & outAssociatedValue0,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_function) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @routineKind function invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_routineKind_function * ptr = (const cEnumAssociatedValues_routineKind_function *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * gEnumNameArrayFor_routineKind [5] = {
  "(not built)",
  "function",
  "section",
  "service",
  "primitive"
} ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_routineKind::getter_isFunction (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_function == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_routineKind::getter_isSection (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_section == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_routineKind::getter_isService (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_service == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_routineKind::getter_isPrimitive (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_primitive == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineKind::description (C_String & ioString,
                                      const int32_t inIndentation) const {
  ioString << "<enum @routineKind: " << gEnumNameArrayFor_routineKind [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_routineKind::objectCompare (const GALGAS_routineKind & inOperand) const {
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
//                                                  @routineKind type                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_routineKind ("routineKind",
                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_routineKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineKind ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_routineKind::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_routineKind (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineKind GALGAS_routineKind::extractObject (const GALGAS_object & inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GALGAS_routineKind result ;
  const GALGAS_routineKind * p = (const GALGAS_routineKind *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_routineKind *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineKind", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Class for element of '@routineFormalArgumentListAST' list                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_routineFormalArgumentListAST : public cCollectionElement {
  public : GALGAS_routineFormalArgumentListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_routineFormalArgumentListAST (const GALGAS_procFormalArgumentPassingMode & in_mFormalArgumentPassingMode,
                                                            const GALGAS_lstring & in_mSelector,
                                                            const GALGAS_lstring & in_mFormalArgumentTypeName,
                                                            const GALGAS_lstring & in_mFormalArgumentName
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

cCollectionElement_routineFormalArgumentListAST::cCollectionElement_routineFormalArgumentListAST (const GALGAS_procFormalArgumentPassingMode & in_mFormalArgumentPassingMode,
                                                                                                  const GALGAS_lstring & in_mSelector,
                                                                                                  const GALGAS_lstring & in_mFormalArgumentTypeName,
                                                                                                  const GALGAS_lstring & in_mFormalArgumentName
                                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mFormalArgumentPassingMode, in_mSelector, in_mFormalArgumentTypeName, in_mFormalArgumentName) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_routineFormalArgumentListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_routineFormalArgumentListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_routineFormalArgumentListAST (mObject.mProperty_mFormalArgumentPassingMode, mObject.mProperty_mSelector, mObject.mProperty_mFormalArgumentTypeName, mObject.mProperty_mFormalArgumentName COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_routineFormalArgumentListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_routineFormalArgumentListAST * operand = (cCollectionElement_routineFormalArgumentListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_routineFormalArgumentListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineFormalArgumentListAST::GALGAS_routineFormalArgumentListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineFormalArgumentListAST::GALGAS_routineFormalArgumentListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineFormalArgumentListAST GALGAS_routineFormalArgumentListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_routineFormalArgumentListAST  (capCollectionElementArray ()) ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineFormalArgumentListAST GALGAS_routineFormalArgumentListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_routineFormalArgumentListAST result = GALGAS_routineFormalArgumentListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineFormalArgumentListAST GALGAS_routineFormalArgumentListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_routineFormalArgumentListAST result = GALGAS_routineFormalArgumentListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineFormalArgumentListAST GALGAS_routineFormalArgumentListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_routineFormalArgumentListAST result = GALGAS_routineFormalArgumentListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineFormalArgumentListAST::plusAssign_operation (const GALGAS_routineFormalArgumentListAST inOperand,
                                                                C_Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_routineFormalArgumentListAST::cEnumerator_routineFormalArgumentListAST (const GALGAS_routineFormalArgumentListAST & inEnumeratedObject,
                                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineFormalArgumentListAST_2D_element cEnumerator_routineFormalArgumentListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_routineFormalArgumentListAST * p = (const cCollectionElement_routineFormalArgumentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentPassingMode cEnumerator_routineFormalArgumentListAST::current_mFormalArgumentPassingMode (LOCATION_ARGS) const {
  const cCollectionElement_routineFormalArgumentListAST * p = (const cCollectionElement_routineFormalArgumentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListAST) ;
  return p->mObject.mProperty_mFormalArgumentPassingMode ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_routineFormalArgumentListAST::current_mSelector (LOCATION_ARGS) const {
  const cCollectionElement_routineFormalArgumentListAST * p = (const cCollectionElement_routineFormalArgumentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListAST) ;
  return p->mObject.mProperty_mSelector ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_routineFormalArgumentListAST::current_mFormalArgumentTypeName (LOCATION_ARGS) const {
  const cCollectionElement_routineFormalArgumentListAST * p = (const cCollectionElement_routineFormalArgumentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListAST) ;
  return p->mObject.mProperty_mFormalArgumentTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_routineFormalArgumentListAST::current_mFormalArgumentName (LOCATION_ARGS) const {
  const cCollectionElement_routineFormalArgumentListAST * p = (const cCollectionElement_routineFormalArgumentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListAST) ;
  return p->mObject.mProperty_mFormalArgumentName ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @routineFormalArgumentListAST type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_routineFormalArgumentListAST ("routineFormalArgumentListAST",
                                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_routineFormalArgumentListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineFormalArgumentListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_routineFormalArgumentListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_routineFormalArgumentListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Extension method '@systemRoutineDeclarationListAST noteTypesInPrecedenceGraph'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_noteTypesInPrecedenceGraph (const GALGAS_systemRoutineDeclarationListAST inObject,
                                                 GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_systemRoutineDeclarationListAST temp_0 = inObject ;
  cEnumerator_systemRoutineDeclarationListAST enumerator_3723 (temp_0, kENUMERATION_UP) ;
  while (enumerator_3723.hasCurrentObject ()) {
    cEnumerator_routineFormalArgumentListAST enumerator_3788 (enumerator_3723.current_mFormalArgumentList (HERE), kENUMERATION_UP) ;
    while (enumerator_3788.hasCurrentObject ()) {
      GALGAS_lstring var_typeName_3810 = function_llvmTypeNameFromPLMname (enumerator_3788.current_mFormalArgumentTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 115)) ;
      {
      ioArgument_ioGraph.setter_noteNode (var_typeName_3810 COMMA_SOURCE_FILE ("declaration-svc.galgas", 116)) ;
      }
      enumerator_3788.gotoNextObject () ;
    }
    extensionMethod_noteInstructionListTypesInPrecedenceGraph (enumerator_3723.current_mInstructionList (HERE), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 118)) ;
    enumerator_3723.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Extension method '@systemRoutineDeclarationListAST enterSystemRoutineInContext'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_enterSystemRoutineInContext (const GALGAS_systemRoutineDeclarationListAST inObject,
                                                  const GALGAS_string constinArgument_inReceiverTypeName,
                                                  GALGAS_semanticContext & ioArgument_ioContext,
                                                  C_Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_systemRoutineDeclarationListAST temp_0 = inObject ;
  cEnumerator_systemRoutineDeclarationListAST enumerator_4529 (temp_0, kENUMERATION_UP) ;
  while (enumerator_4529.hasCurrentObject ()) {
    GALGAS_lstring var_routineMangledName_4587 = function_routineMangledNameFromAST (constinArgument_inReceiverTypeName, enumerator_4529.current (HERE).getter_mName (HERE), enumerator_4529.current (HERE).getter_mFormalArgumentList (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 132)) ;
    GALGAS_routineTypedSignature var_signature_4798 ;
    {
    routine_routineSignature (ioArgument_ioContext.mProperty_mTypeMap, enumerator_4529.current (HERE).getter_mFormalArgumentList (HERE), var_signature_4798, inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 138)) ;
    }
    GALGAS_unifiedTypeMap_2D_proxy var_returnTypeProxy_4926 ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeOptionalProxy (ioArgument_ioContext.mProperty_mTypeMap, enumerator_4529.current (HERE).getter_mReturnTypeName (HERE), var_returnTypeProxy_4926 COMMA_SOURCE_FILE ("declaration-svc.galgas", 140)) ;
    }
    GALGAS_bool var_mutating_4962 = GALGAS_bool (false) ;
    GALGAS_bool var_safe_4983 = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_5033 (enumerator_4529.current (HERE).getter_mAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_5033.hasCurrentObject ()) {
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_5033.current_mValue (HERE).getter_string (HERE).objectCompare (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 145)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        var_mutating_4962 = GALGAS_bool (true) ;
      }else if (kBoolFalse == test_1) {
        const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_5033.current_mValue (HERE).getter_string (HERE).objectCompare (function_safeAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 147)))).boolEnum () ;
        if (kBoolTrue == test_2) {
          var_safe_4983 = GALGAS_bool (true) ;
        }
      }
      enumerator_5033.gotoNextObject () ;
    }
    {
    extensionSetter_insertRoutine (ioArgument_ioContext.mProperty_mRoutineMapForContext, enumerator_4529.current (HERE).getter_mName (HERE), extensionGetter_routineSignature (enumerator_4529.current (HERE).getter_mFormalArgumentList (HERE), enumerator_4529.current (HERE).getter_mName (HERE).getter_location (SOURCE_FILE ("declaration-svc.galgas", 154)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 154)), var_routineMangledName_4587, GALGAS_routineDescriptor::constructor_new (enumerator_4529.current (HERE).getter_mPublic (HERE), GALGAS_bool (false), enumerator_4529.current (HERE).getter_mRoutineKind (HERE), var_signature_4798, var_returnTypeProxy_4926, GALGAS_bool (true), var_mutating_4962, var_safe_4983  COMMA_SOURCE_FILE ("declaration-svc.galgas", 156)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 152)) ;
    }
    enumerator_4529.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Extension method '@systemRoutineDeclarationListAST systemRoutineSemanticAnalysis'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_systemRoutineSemanticAnalysis (const GALGAS_systemRoutineDeclarationListAST inObject,
                                                    GALGAS_PLMType inArgument_inReceiverType,
                                                    const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                    GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                    GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_systemRoutineDeclarationListAST temp_0 = inObject ;
  cEnumerator_systemRoutineDeclarationListAST enumerator_6355 (temp_0, kENUMERATION_UP) ;
  while (enumerator_6355.hasCurrentObject ()) {
    GALGAS_bool var_mutating_6375 = GALGAS_bool (false) ;
    GALGAS_bool var_noUnusedWarning_6407 = GALGAS_bool (false) ;
    GALGAS_bool var_isSafe_6430 = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_6480 (enumerator_6355.current (HERE).getter_mAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_6480.hasCurrentObject ()) {
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_6480.current_mValue (HERE).getter_string (HERE).objectCompare (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 185)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        const enumGalgasBool test_2 = var_noUnusedWarning_6407.boolEnum () ;
        if (kBoolTrue == test_2) {
          TC_Array <C_FixItDescription> fixItArray3 ;
          fixItArray3.appendObject (C_FixItDescription (kFixItRemove, "")) ;
          inCompiler->emitSemanticError (enumerator_6480.current_mValue (HERE).getter_location (SOURCE_FILE ("declaration-svc.galgas", 187)), GALGAS_string ("duplicated @").add_operation (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 187)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 187)).add_operation (GALGAS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 187)), fixItArray3  COMMA_SOURCE_FILE ("declaration-svc.galgas", 187)) ;
        }
        var_noUnusedWarning_6407 = GALGAS_bool (true) ;
      }else if (kBoolFalse == test_1) {
        const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, enumerator_6480.current_mValue (HERE).getter_string (HERE).objectCompare (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 190)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          const enumGalgasBool test_5 = var_mutating_6375.boolEnum () ;
          if (kBoolTrue == test_5) {
            TC_Array <C_FixItDescription> fixItArray6 ;
            fixItArray6.appendObject (C_FixItDescription (kFixItRemove, "")) ;
            inCompiler->emitSemanticError (enumerator_6480.current_mValue (HERE).getter_location (SOURCE_FILE ("declaration-svc.galgas", 192)), GALGAS_string ("duplicated @").add_operation (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 192)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 192)).add_operation (GALGAS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 192)), fixItArray6  COMMA_SOURCE_FILE ("declaration-svc.galgas", 192)) ;
          }
          var_mutating_6375 = GALGAS_bool (true) ;
        }else if (kBoolFalse == test_4) {
          const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, enumerator_6480.current_mValue (HERE).getter_string (HERE).objectCompare (function_safeAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 195)))).boolEnum () ;
          if (kBoolTrue == test_7) {
            const enumGalgasBool test_8 = var_isSafe_6430.boolEnum () ;
            if (kBoolTrue == test_8) {
              TC_Array <C_FixItDescription> fixItArray9 ;
              fixItArray9.appendObject (C_FixItDescription (kFixItRemove, "")) ;
              inCompiler->emitSemanticError (enumerator_6480.current_mValue (HERE).getter_location (SOURCE_FILE ("declaration-svc.galgas", 197)), GALGAS_string ("duplicated @").add_operation (function_safeAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 197)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 197)).add_operation (GALGAS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 197)), fixItArray9  COMMA_SOURCE_FILE ("declaration-svc.galgas", 197)) ;
            }
            var_isSafe_6430 = GALGAS_bool (true) ;
          }else if (kBoolFalse == test_7) {
            TC_Array <C_FixItDescription> fixItArray10 ;
            fixItArray10.appendObject (C_FixItDescription (kFixItRemove, "")) ;
            inCompiler->emitSemanticError (enumerator_6480.current_mValue (HERE).getter_location (SOURCE_FILE ("declaration-svc.galgas", 201)), GALGAS_string ("unknown attribute; available attributes are @").add_operation (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 202)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 202)).add_operation (GALGAS_string (", @"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 202)).add_operation (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 202)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 202)), fixItArray10  COMMA_SOURCE_FILE ("declaration-svc.galgas", 201)) ;
          }
        }
      }
      enumerator_6480.gotoNextObject () ;
    }
    GALGAS_mode var_mode_7365 ;
    switch (enumerator_6355.current (HERE).getter_mRoutineKind (HERE).enumValue ()) {
    case GALGAS_routineKind::kNotBuilt:
      break ;
    case GALGAS_routineKind::kEnum_section:
      {
        var_mode_7365 = GALGAS_mode::constructor_sectionMode (SOURCE_FILE ("declaration-svc.galgas", 208)) ;
      }
      break ;
    case GALGAS_routineKind::kEnum_primitive:
      {
        var_mode_7365 = GALGAS_mode::constructor_primitiveMode (SOURCE_FILE ("declaration-svc.galgas", 209)) ;
      }
      break ;
    case GALGAS_routineKind::kEnum_service:
      {
        var_mode_7365 = GALGAS_mode::constructor_serviceMode (SOURCE_FILE ("declaration-svc.galgas", 210)) ;
      }
      break ;
    case GALGAS_routineKind::kEnum_function:
      {
        TC_Array <C_FixItDescription> fixItArray11 ;
        inCompiler->emitSemanticError (enumerator_6355.current (HERE).getter_mEndOfInstructionListLocation (HERE), GALGAS_string ("INTERNAL ERROR"), fixItArray11  COMMA_SOURCE_FILE ("declaration-svc.galgas", 211)) ;
        var_mode_7365.drop () ; // Release error dropped variable
      }
      break ;
    }
    GALGAS_routineAttributes var_attributes_7646 = GALGAS_routineAttributes::constructor_mutating (SOURCE_FILE ("declaration-svc.galgas", 213)).operator_or (GALGAS_routineAttributes::constructor_directPropertyAccess (SOURCE_FILE ("declaration-svc.galgas", 213)) COMMA_SOURCE_FILE ("declaration-svc.galgas", 213)).operator_or (GALGAS_routineAttributes::constructor_controlRegisterReadable (SOURCE_FILE ("declaration-svc.galgas", 213)) COMMA_SOURCE_FILE ("declaration-svc.galgas", 213)) ;
    const enumGalgasBool test_12 = var_isSafe_6430.operator_not (SOURCE_FILE ("declaration-svc.galgas", 214)).boolEnum () ;
    if (kBoolTrue == test_12) {
      var_attributes_7646 = var_attributes_7646.operator_or (GALGAS_routineAttributes::constructor_panicAllowed (SOURCE_FILE ("declaration-svc.galgas", 215)) COMMA_SOURCE_FILE ("declaration-svc.galgas", 215)) ;
    }
    {
    routine_routineSemanticAnalysis (inArgument_inReceiverType, enumerator_6355.current (HERE).getter_mRoutineKind (HERE), var_mode_7365, enumerator_6355.current (HERE).getter_mName (HERE), enumerator_6355.current (HERE).getter_mFormalArgumentList (HERE), enumerator_6355.current (HERE).getter_mReturnTypeName (HERE), enumerator_6355.current (HERE).getter_mInstructionList (HERE), enumerator_6355.current (HERE).getter_mEndOfInstructionListLocation (HERE), var_attributes_7646, var_noUnusedWarning_6407.operator_not (SOURCE_FILE ("declaration-svc.galgas", 227)), GALGAS_bool (true), constinArgument_inSemanticContext, ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct, inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 217)) ;
    }
    enumerator_6355.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Class for element of '@sectionIRlist' list                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_sectionIRlist : public cCollectionElement {
  public : GALGAS_sectionIRlist_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_sectionIRlist (const GALGAS_string & in_mSectionCallName,
                                             const GALGAS_string & in_mSectionImplementationName,
                                             const GALGAS_PLMType & in_mReceiverType,
                                             const GALGAS_routineFormalArgumentListIR & in_mFormalArgumentListForGeneration,
                                             const GALGAS_PLMType & in_mReturnType,
                                             const GALGAS_bool & in_mInvocationFromUserModeOnly
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

cCollectionElement_sectionIRlist::cCollectionElement_sectionIRlist (const GALGAS_string & in_mSectionCallName,
                                                                    const GALGAS_string & in_mSectionImplementationName,
                                                                    const GALGAS_PLMType & in_mReceiverType,
                                                                    const GALGAS_routineFormalArgumentListIR & in_mFormalArgumentListForGeneration,
                                                                    const GALGAS_PLMType & in_mReturnType,
                                                                    const GALGAS_bool & in_mInvocationFromUserModeOnly
                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mSectionCallName, in_mSectionImplementationName, in_mReceiverType, in_mFormalArgumentListForGeneration, in_mReturnType, in_mInvocationFromUserModeOnly) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_sectionIRlist::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_sectionIRlist::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_sectionIRlist (mObject.mProperty_mSectionCallName, mObject.mProperty_mSectionImplementationName, mObject.mProperty_mReceiverType, mObject.mProperty_mFormalArgumentListForGeneration, mObject.mProperty_mReturnType, mObject.mProperty_mInvocationFromUserModeOnly COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_sectionIRlist::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSectionCallName" ":" ;
  mObject.mProperty_mSectionCallName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSectionImplementationName" ":" ;
  mObject.mProperty_mSectionImplementationName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mReceiverType" ":" ;
  mObject.mProperty_mReceiverType.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFormalArgumentListForGeneration" ":" ;
  mObject.mProperty_mFormalArgumentListForGeneration.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mReturnType" ":" ;
  mObject.mProperty_mReturnType.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInvocationFromUserModeOnly" ":" ;
  mObject.mProperty_mInvocationFromUserModeOnly.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_sectionIRlist::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_sectionIRlist * operand = (cCollectionElement_sectionIRlist *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_sectionIRlist) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sectionIRlist::GALGAS_sectionIRlist (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sectionIRlist::GALGAS_sectionIRlist (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sectionIRlist GALGAS_sectionIRlist::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_sectionIRlist  (capCollectionElementArray ()) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sectionIRlist GALGAS_sectionIRlist::constructor_listWithValue (const GALGAS_string & inOperand0,
                                                                      const GALGAS_string & inOperand1,
                                                                      const GALGAS_PLMType & inOperand2,
                                                                      const GALGAS_routineFormalArgumentListIR & inOperand3,
                                                                      const GALGAS_PLMType & inOperand4,
                                                                      const GALGAS_bool & inOperand5
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_sectionIRlist result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid ()) {
    result = GALGAS_sectionIRlist (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_sectionIRlist::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_sectionIRlist::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                      const GALGAS_string & in_mSectionCallName,
                                                      const GALGAS_string & in_mSectionImplementationName,
                                                      const GALGAS_PLMType & in_mReceiverType,
                                                      const GALGAS_routineFormalArgumentListIR & in_mFormalArgumentListForGeneration,
                                                      const GALGAS_PLMType & in_mReturnType,
                                                      const GALGAS_bool & in_mInvocationFromUserModeOnly
                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_sectionIRlist * p = NULL ;
  macroMyNew (p, cCollectionElement_sectionIRlist (in_mSectionCallName,
                                                   in_mSectionImplementationName,
                                                   in_mReceiverType,
                                                   in_mFormalArgumentListForGeneration,
                                                   in_mReturnType,
                                                   in_mInvocationFromUserModeOnly COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_sectionIRlist::addAssign_operation (const GALGAS_string & inOperand0,
                                                const GALGAS_string & inOperand1,
                                                const GALGAS_PLMType & inOperand2,
                                                const GALGAS_routineFormalArgumentListIR & inOperand3,
                                                const GALGAS_PLMType & inOperand4,
                                                const GALGAS_bool & inOperand5
                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_sectionIRlist (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_sectionIRlist::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                 const GALGAS_string inOperand1,
                                                 const GALGAS_PLMType inOperand2,
                                                 const GALGAS_routineFormalArgumentListIR inOperand3,
                                                 const GALGAS_PLMType inOperand4,
                                                 const GALGAS_bool inOperand5,
                                                 const GALGAS_uint inInsertionIndex,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_sectionIRlist (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_sectionIRlist::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                 GALGAS_string & outOperand1,
                                                 GALGAS_PLMType & outOperand2,
                                                 GALGAS_routineFormalArgumentListIR & outOperand3,
                                                 GALGAS_PLMType & outOperand4,
                                                 GALGAS_bool & outOperand5,
                                                 const GALGAS_uint inRemoveIndex,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_sectionIRlist * p = (cCollectionElement_sectionIRlist *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      outOperand4.drop () ;
      outOperand5.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_sectionIRlist) ;
      outOperand0 = p->mObject.mProperty_mSectionCallName ;
      outOperand1 = p->mObject.mProperty_mSectionImplementationName ;
      outOperand2 = p->mObject.mProperty_mReceiverType ;
      outOperand3 = p->mObject.mProperty_mFormalArgumentListForGeneration ;
      outOperand4 = p->mObject.mProperty_mReturnType ;
      outOperand5 = p->mObject.mProperty_mInvocationFromUserModeOnly ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_sectionIRlist::setter_popFirst (GALGAS_string & outOperand0,
                                            GALGAS_string & outOperand1,
                                            GALGAS_PLMType & outOperand2,
                                            GALGAS_routineFormalArgumentListIR & outOperand3,
                                            GALGAS_PLMType & outOperand4,
                                            GALGAS_bool & outOperand5,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_sectionIRlist * p = (cCollectionElement_sectionIRlist *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_sectionIRlist) ;
    outOperand0 = p->mObject.mProperty_mSectionCallName ;
    outOperand1 = p->mObject.mProperty_mSectionImplementationName ;
    outOperand2 = p->mObject.mProperty_mReceiverType ;
    outOperand3 = p->mObject.mProperty_mFormalArgumentListForGeneration ;
    outOperand4 = p->mObject.mProperty_mReturnType ;
    outOperand5 = p->mObject.mProperty_mInvocationFromUserModeOnly ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_sectionIRlist::setter_popLast (GALGAS_string & outOperand0,
                                           GALGAS_string & outOperand1,
                                           GALGAS_PLMType & outOperand2,
                                           GALGAS_routineFormalArgumentListIR & outOperand3,
                                           GALGAS_PLMType & outOperand4,
                                           GALGAS_bool & outOperand5,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_sectionIRlist * p = (cCollectionElement_sectionIRlist *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_sectionIRlist) ;
    outOperand0 = p->mObject.mProperty_mSectionCallName ;
    outOperand1 = p->mObject.mProperty_mSectionImplementationName ;
    outOperand2 = p->mObject.mProperty_mReceiverType ;
    outOperand3 = p->mObject.mProperty_mFormalArgumentListForGeneration ;
    outOperand4 = p->mObject.mProperty_mReturnType ;
    outOperand5 = p->mObject.mProperty_mInvocationFromUserModeOnly ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_sectionIRlist::method_first (GALGAS_string & outOperand0,
                                         GALGAS_string & outOperand1,
                                         GALGAS_PLMType & outOperand2,
                                         GALGAS_routineFormalArgumentListIR & outOperand3,
                                         GALGAS_PLMType & outOperand4,
                                         GALGAS_bool & outOperand5,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_sectionIRlist * p = (cCollectionElement_sectionIRlist *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_sectionIRlist) ;
    outOperand0 = p->mObject.mProperty_mSectionCallName ;
    outOperand1 = p->mObject.mProperty_mSectionImplementationName ;
    outOperand2 = p->mObject.mProperty_mReceiverType ;
    outOperand3 = p->mObject.mProperty_mFormalArgumentListForGeneration ;
    outOperand4 = p->mObject.mProperty_mReturnType ;
    outOperand5 = p->mObject.mProperty_mInvocationFromUserModeOnly ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_sectionIRlist::method_last (GALGAS_string & outOperand0,
                                        GALGAS_string & outOperand1,
                                        GALGAS_PLMType & outOperand2,
                                        GALGAS_routineFormalArgumentListIR & outOperand3,
                                        GALGAS_PLMType & outOperand4,
                                        GALGAS_bool & outOperand5,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_sectionIRlist * p = (cCollectionElement_sectionIRlist *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_sectionIRlist) ;
    outOperand0 = p->mObject.mProperty_mSectionCallName ;
    outOperand1 = p->mObject.mProperty_mSectionImplementationName ;
    outOperand2 = p->mObject.mProperty_mReceiverType ;
    outOperand3 = p->mObject.mProperty_mFormalArgumentListForGeneration ;
    outOperand4 = p->mObject.mProperty_mReturnType ;
    outOperand5 = p->mObject.mProperty_mInvocationFromUserModeOnly ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sectionIRlist GALGAS_sectionIRlist::add_operation (const GALGAS_sectionIRlist & inOperand,
                                                          C_Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_sectionIRlist result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sectionIRlist GALGAS_sectionIRlist::getter_subListWithRange (const GALGAS_range & inRange,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_sectionIRlist result = GALGAS_sectionIRlist::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sectionIRlist GALGAS_sectionIRlist::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_sectionIRlist result = GALGAS_sectionIRlist::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sectionIRlist GALGAS_sectionIRlist::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_sectionIRlist result = GALGAS_sectionIRlist::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_sectionIRlist::plusAssign_operation (const GALGAS_sectionIRlist inOperand,
                                                 C_Compiler * /* inCompiler */
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_sectionIRlist::getter_mSectionCallNameAtIndex (const GALGAS_uint & inIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_sectionIRlist * p = (cCollectionElement_sectionIRlist *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_sectionIRlist) ;
    result = p->mObject.mProperty_mSectionCallName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_sectionIRlist::getter_mSectionImplementationNameAtIndex (const GALGAS_uint & inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_sectionIRlist * p = (cCollectionElement_sectionIRlist *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_sectionIRlist) ;
    result = p->mObject.mProperty_mSectionImplementationName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMType GALGAS_sectionIRlist::getter_mReceiverTypeAtIndex (const GALGAS_uint & inIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_sectionIRlist * p = (cCollectionElement_sectionIRlist *) attributes.ptr () ;
  GALGAS_PLMType result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_sectionIRlist) ;
    result = p->mObject.mProperty_mReceiverType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineFormalArgumentListIR GALGAS_sectionIRlist::getter_mFormalArgumentListForGenerationAtIndex (const GALGAS_uint & inIndex,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_sectionIRlist * p = (cCollectionElement_sectionIRlist *) attributes.ptr () ;
  GALGAS_routineFormalArgumentListIR result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_sectionIRlist) ;
    result = p->mObject.mProperty_mFormalArgumentListForGeneration ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMType GALGAS_sectionIRlist::getter_mReturnTypeAtIndex (const GALGAS_uint & inIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_sectionIRlist * p = (cCollectionElement_sectionIRlist *) attributes.ptr () ;
  GALGAS_PLMType result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_sectionIRlist) ;
    result = p->mObject.mProperty_mReturnType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_sectionIRlist::getter_mInvocationFromUserModeOnlyAtIndex (const GALGAS_uint & inIndex,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_sectionIRlist * p = (cCollectionElement_sectionIRlist *) attributes.ptr () ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_sectionIRlist) ;
    result = p->mObject.mProperty_mInvocationFromUserModeOnly ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_sectionIRlist::cEnumerator_sectionIRlist (const GALGAS_sectionIRlist & inEnumeratedObject,
                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sectionIRlist_2D_element cEnumerator_sectionIRlist::current (LOCATION_ARGS) const {
  const cCollectionElement_sectionIRlist * p = (const cCollectionElement_sectionIRlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_sectionIRlist) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_sectionIRlist::current_mSectionCallName (LOCATION_ARGS) const {
  const cCollectionElement_sectionIRlist * p = (const cCollectionElement_sectionIRlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_sectionIRlist) ;
  return p->mObject.mProperty_mSectionCallName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_sectionIRlist::current_mSectionImplementationName (LOCATION_ARGS) const {
  const cCollectionElement_sectionIRlist * p = (const cCollectionElement_sectionIRlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_sectionIRlist) ;
  return p->mObject.mProperty_mSectionImplementationName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMType cEnumerator_sectionIRlist::current_mReceiverType (LOCATION_ARGS) const {
  const cCollectionElement_sectionIRlist * p = (const cCollectionElement_sectionIRlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_sectionIRlist) ;
  return p->mObject.mProperty_mReceiverType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineFormalArgumentListIR cEnumerator_sectionIRlist::current_mFormalArgumentListForGeneration (LOCATION_ARGS) const {
  const cCollectionElement_sectionIRlist * p = (const cCollectionElement_sectionIRlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_sectionIRlist) ;
  return p->mObject.mProperty_mFormalArgumentListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMType cEnumerator_sectionIRlist::current_mReturnType (LOCATION_ARGS) const {
  const cCollectionElement_sectionIRlist * p = (const cCollectionElement_sectionIRlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_sectionIRlist) ;
  return p->mObject.mProperty_mReturnType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_sectionIRlist::current_mInvocationFromUserModeOnly (LOCATION_ARGS) const {
  const cCollectionElement_sectionIRlist * p = (const cCollectionElement_sectionIRlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_sectionIRlist) ;
  return p->mObject.mProperty_mInvocationFromUserModeOnly ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 @sectionIRlist type                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_sectionIRlist ("sectionIRlist",
                                      NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_sectionIRlist::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sectionIRlist ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_sectionIRlist::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sectionIRlist (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sectionIRlist GALGAS_sectionIRlist::extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GALGAS_sectionIRlist result ;
  const GALGAS_sectionIRlist * p = (const GALGAS_sectionIRlist *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_sectionIRlist *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sectionIRlist", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Class for element of '@routineFormalArgumentListIR' list                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_routineFormalArgumentListIR : public cCollectionElement {
  public : GALGAS_routineFormalArgumentListIR_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_routineFormalArgumentListIR (const GALGAS_procFormalArgumentPassingMode & in_mFormalArgumentKind,
                                                           const GALGAS_PLMType & in_mFormalArgumentType,
                                                           const GALGAS_string & in_mFormalArgumentName
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

cCollectionElement_routineFormalArgumentListIR::cCollectionElement_routineFormalArgumentListIR (const GALGAS_procFormalArgumentPassingMode & in_mFormalArgumentKind,
                                                                                                const GALGAS_PLMType & in_mFormalArgumentType,
                                                                                                const GALGAS_string & in_mFormalArgumentName
                                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mFormalArgumentKind, in_mFormalArgumentType, in_mFormalArgumentName) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_routineFormalArgumentListIR::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_routineFormalArgumentListIR::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_routineFormalArgumentListIR (mObject.mProperty_mFormalArgumentKind, mObject.mProperty_mFormalArgumentType, mObject.mProperty_mFormalArgumentName COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_routineFormalArgumentListIR::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFormalArgumentKind" ":" ;
  mObject.mProperty_mFormalArgumentKind.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFormalArgumentType" ":" ;
  mObject.mProperty_mFormalArgumentType.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFormalArgumentName" ":" ;
  mObject.mProperty_mFormalArgumentName.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_routineFormalArgumentListIR::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_routineFormalArgumentListIR * operand = (cCollectionElement_routineFormalArgumentListIR *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_routineFormalArgumentListIR) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineFormalArgumentListIR::GALGAS_routineFormalArgumentListIR (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineFormalArgumentListIR::GALGAS_routineFormalArgumentListIR (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineFormalArgumentListIR GALGAS_routineFormalArgumentListIR::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_routineFormalArgumentListIR  (capCollectionElementArray ()) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineFormalArgumentListIR GALGAS_routineFormalArgumentListIR::constructor_listWithValue (const GALGAS_procFormalArgumentPassingMode & inOperand0,
                                                                                                  const GALGAS_PLMType & inOperand1,
                                                                                                  const GALGAS_string & inOperand2
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_routineFormalArgumentListIR result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_routineFormalArgumentListIR (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_routineFormalArgumentListIR::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineFormalArgumentListIR::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                    const GALGAS_procFormalArgumentPassingMode & in_mFormalArgumentKind,
                                                                    const GALGAS_PLMType & in_mFormalArgumentType,
                                                                    const GALGAS_string & in_mFormalArgumentName
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_routineFormalArgumentListIR * p = NULL ;
  macroMyNew (p, cCollectionElement_routineFormalArgumentListIR (in_mFormalArgumentKind,
                                                                 in_mFormalArgumentType,
                                                                 in_mFormalArgumentName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineFormalArgumentListIR::addAssign_operation (const GALGAS_procFormalArgumentPassingMode & inOperand0,
                                                              const GALGAS_PLMType & inOperand1,
                                                              const GALGAS_string & inOperand2
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_routineFormalArgumentListIR (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineFormalArgumentListIR::setter_insertAtIndex (const GALGAS_procFormalArgumentPassingMode inOperand0,
                                                               const GALGAS_PLMType inOperand1,
                                                               const GALGAS_string inOperand2,
                                                               const GALGAS_uint inInsertionIndex,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_routineFormalArgumentListIR (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineFormalArgumentListIR::setter_removeAtIndex (GALGAS_procFormalArgumentPassingMode & outOperand0,
                                                               GALGAS_PLMType & outOperand1,
                                                               GALGAS_string & outOperand2,
                                                               const GALGAS_uint inRemoveIndex,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_routineFormalArgumentListIR * p = (cCollectionElement_routineFormalArgumentListIR *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListIR) ;
      outOperand0 = p->mObject.mProperty_mFormalArgumentKind ;
      outOperand1 = p->mObject.mProperty_mFormalArgumentType ;
      outOperand2 = p->mObject.mProperty_mFormalArgumentName ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineFormalArgumentListIR::setter_popFirst (GALGAS_procFormalArgumentPassingMode & outOperand0,
                                                          GALGAS_PLMType & outOperand1,
                                                          GALGAS_string & outOperand2,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_routineFormalArgumentListIR * p = (cCollectionElement_routineFormalArgumentListIR *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListIR) ;
    outOperand0 = p->mObject.mProperty_mFormalArgumentKind ;
    outOperand1 = p->mObject.mProperty_mFormalArgumentType ;
    outOperand2 = p->mObject.mProperty_mFormalArgumentName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineFormalArgumentListIR::setter_popLast (GALGAS_procFormalArgumentPassingMode & outOperand0,
                                                         GALGAS_PLMType & outOperand1,
                                                         GALGAS_string & outOperand2,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_routineFormalArgumentListIR * p = (cCollectionElement_routineFormalArgumentListIR *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListIR) ;
    outOperand0 = p->mObject.mProperty_mFormalArgumentKind ;
    outOperand1 = p->mObject.mProperty_mFormalArgumentType ;
    outOperand2 = p->mObject.mProperty_mFormalArgumentName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineFormalArgumentListIR::method_first (GALGAS_procFormalArgumentPassingMode & outOperand0,
                                                       GALGAS_PLMType & outOperand1,
                                                       GALGAS_string & outOperand2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_routineFormalArgumentListIR * p = (cCollectionElement_routineFormalArgumentListIR *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListIR) ;
    outOperand0 = p->mObject.mProperty_mFormalArgumentKind ;
    outOperand1 = p->mObject.mProperty_mFormalArgumentType ;
    outOperand2 = p->mObject.mProperty_mFormalArgumentName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineFormalArgumentListIR::method_last (GALGAS_procFormalArgumentPassingMode & outOperand0,
                                                      GALGAS_PLMType & outOperand1,
                                                      GALGAS_string & outOperand2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_routineFormalArgumentListIR * p = (cCollectionElement_routineFormalArgumentListIR *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListIR) ;
    outOperand0 = p->mObject.mProperty_mFormalArgumentKind ;
    outOperand1 = p->mObject.mProperty_mFormalArgumentType ;
    outOperand2 = p->mObject.mProperty_mFormalArgumentName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineFormalArgumentListIR GALGAS_routineFormalArgumentListIR::add_operation (const GALGAS_routineFormalArgumentListIR & inOperand,
                                                                                      C_Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_routineFormalArgumentListIR result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineFormalArgumentListIR GALGAS_routineFormalArgumentListIR::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_routineFormalArgumentListIR result = GALGAS_routineFormalArgumentListIR::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineFormalArgumentListIR GALGAS_routineFormalArgumentListIR::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_routineFormalArgumentListIR result = GALGAS_routineFormalArgumentListIR::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineFormalArgumentListIR GALGAS_routineFormalArgumentListIR::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_routineFormalArgumentListIR result = GALGAS_routineFormalArgumentListIR::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineFormalArgumentListIR::plusAssign_operation (const GALGAS_routineFormalArgumentListIR inOperand,
                                                               C_Compiler * /* inCompiler */
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentPassingMode GALGAS_routineFormalArgumentListIR::getter_mFormalArgumentKindAtIndex (const GALGAS_uint & inIndex,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_routineFormalArgumentListIR * p = (cCollectionElement_routineFormalArgumentListIR *) attributes.ptr () ;
  GALGAS_procFormalArgumentPassingMode result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListIR) ;
    result = p->mObject.mProperty_mFormalArgumentKind ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMType GALGAS_routineFormalArgumentListIR::getter_mFormalArgumentTypeAtIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_routineFormalArgumentListIR * p = (cCollectionElement_routineFormalArgumentListIR *) attributes.ptr () ;
  GALGAS_PLMType result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListIR) ;
    result = p->mObject.mProperty_mFormalArgumentType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_routineFormalArgumentListIR::getter_mFormalArgumentNameAtIndex (const GALGAS_uint & inIndex,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_routineFormalArgumentListIR * p = (cCollectionElement_routineFormalArgumentListIR *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListIR) ;
    result = p->mObject.mProperty_mFormalArgumentName ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_routineFormalArgumentListIR::cEnumerator_routineFormalArgumentListIR (const GALGAS_routineFormalArgumentListIR & inEnumeratedObject,
                                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineFormalArgumentListIR_2D_element cEnumerator_routineFormalArgumentListIR::current (LOCATION_ARGS) const {
  const cCollectionElement_routineFormalArgumentListIR * p = (const cCollectionElement_routineFormalArgumentListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListIR) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentPassingMode cEnumerator_routineFormalArgumentListIR::current_mFormalArgumentKind (LOCATION_ARGS) const {
  const cCollectionElement_routineFormalArgumentListIR * p = (const cCollectionElement_routineFormalArgumentListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListIR) ;
  return p->mObject.mProperty_mFormalArgumentKind ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMType cEnumerator_routineFormalArgumentListIR::current_mFormalArgumentType (LOCATION_ARGS) const {
  const cCollectionElement_routineFormalArgumentListIR * p = (const cCollectionElement_routineFormalArgumentListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListIR) ;
  return p->mObject.mProperty_mFormalArgumentType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_routineFormalArgumentListIR::current_mFormalArgumentName (LOCATION_ARGS) const {
  const cCollectionElement_routineFormalArgumentListIR * p = (const cCollectionElement_routineFormalArgumentListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListIR) ;
  return p->mObject.mProperty_mFormalArgumentName ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @routineFormalArgumentListIR type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_routineFormalArgumentListIR ("routineFormalArgumentListIR",
                                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_routineFormalArgumentListIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineFormalArgumentListIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_routineFormalArgumentListIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_routineFormalArgumentListIR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineFormalArgumentListIR GALGAS_routineFormalArgumentListIR::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_routineFormalArgumentListIR result ;
  const GALGAS_routineFormalArgumentListIR * p = (const GALGAS_routineFormalArgumentListIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_routineFormalArgumentListIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineFormalArgumentListIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Class for element of '@primitiveAndServiceIRlist' list                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_primitiveAndServiceIRlist : public cCollectionElement {
  public : GALGAS_primitiveAndServiceIRlist_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_primitiveAndServiceIRlist (const GALGAS_string & in_mCallName,
                                                         const GALGAS_string & in_mImplementationName,
                                                         const GALGAS_bool & in_mReturnValue
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

cCollectionElement_primitiveAndServiceIRlist::cCollectionElement_primitiveAndServiceIRlist (const GALGAS_string & in_mCallName,
                                                                                            const GALGAS_string & in_mImplementationName,
                                                                                            const GALGAS_bool & in_mReturnValue
                                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mCallName, in_mImplementationName, in_mReturnValue) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_primitiveAndServiceIRlist::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_primitiveAndServiceIRlist::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_primitiveAndServiceIRlist (mObject.mProperty_mCallName, mObject.mProperty_mImplementationName, mObject.mProperty_mReturnValue COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_primitiveAndServiceIRlist::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mCallName" ":" ;
  mObject.mProperty_mCallName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mImplementationName" ":" ;
  mObject.mProperty_mImplementationName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mReturnValue" ":" ;
  mObject.mProperty_mReturnValue.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_primitiveAndServiceIRlist::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_primitiveAndServiceIRlist * operand = (cCollectionElement_primitiveAndServiceIRlist *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_primitiveAndServiceIRlist) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_primitiveAndServiceIRlist::GALGAS_primitiveAndServiceIRlist (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_primitiveAndServiceIRlist::GALGAS_primitiveAndServiceIRlist (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_primitiveAndServiceIRlist GALGAS_primitiveAndServiceIRlist::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_primitiveAndServiceIRlist  (capCollectionElementArray ()) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_primitiveAndServiceIRlist GALGAS_primitiveAndServiceIRlist::constructor_listWithValue (const GALGAS_string & inOperand0,
                                                                                              const GALGAS_string & inOperand1,
                                                                                              const GALGAS_bool & inOperand2
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_primitiveAndServiceIRlist result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_primitiveAndServiceIRlist (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_primitiveAndServiceIRlist::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_primitiveAndServiceIRlist::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                  const GALGAS_string & in_mCallName,
                                                                  const GALGAS_string & in_mImplementationName,
                                                                  const GALGAS_bool & in_mReturnValue
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_primitiveAndServiceIRlist * p = NULL ;
  macroMyNew (p, cCollectionElement_primitiveAndServiceIRlist (in_mCallName,
                                                               in_mImplementationName,
                                                               in_mReturnValue COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_primitiveAndServiceIRlist::addAssign_operation (const GALGAS_string & inOperand0,
                                                            const GALGAS_string & inOperand1,
                                                            const GALGAS_bool & inOperand2
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_primitiveAndServiceIRlist (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_primitiveAndServiceIRlist::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                             const GALGAS_string inOperand1,
                                                             const GALGAS_bool inOperand2,
                                                             const GALGAS_uint inInsertionIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_primitiveAndServiceIRlist (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_primitiveAndServiceIRlist::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                             GALGAS_string & outOperand1,
                                                             GALGAS_bool & outOperand2,
                                                             const GALGAS_uint inRemoveIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_primitiveAndServiceIRlist * p = (cCollectionElement_primitiveAndServiceIRlist *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_primitiveAndServiceIRlist) ;
      outOperand0 = p->mObject.mProperty_mCallName ;
      outOperand1 = p->mObject.mProperty_mImplementationName ;
      outOperand2 = p->mObject.mProperty_mReturnValue ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_primitiveAndServiceIRlist::setter_popFirst (GALGAS_string & outOperand0,
                                                        GALGAS_string & outOperand1,
                                                        GALGAS_bool & outOperand2,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_primitiveAndServiceIRlist * p = (cCollectionElement_primitiveAndServiceIRlist *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_primitiveAndServiceIRlist) ;
    outOperand0 = p->mObject.mProperty_mCallName ;
    outOperand1 = p->mObject.mProperty_mImplementationName ;
    outOperand2 = p->mObject.mProperty_mReturnValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_primitiveAndServiceIRlist::setter_popLast (GALGAS_string & outOperand0,
                                                       GALGAS_string & outOperand1,
                                                       GALGAS_bool & outOperand2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_primitiveAndServiceIRlist * p = (cCollectionElement_primitiveAndServiceIRlist *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_primitiveAndServiceIRlist) ;
    outOperand0 = p->mObject.mProperty_mCallName ;
    outOperand1 = p->mObject.mProperty_mImplementationName ;
    outOperand2 = p->mObject.mProperty_mReturnValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_primitiveAndServiceIRlist::method_first (GALGAS_string & outOperand0,
                                                     GALGAS_string & outOperand1,
                                                     GALGAS_bool & outOperand2,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_primitiveAndServiceIRlist * p = (cCollectionElement_primitiveAndServiceIRlist *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_primitiveAndServiceIRlist) ;
    outOperand0 = p->mObject.mProperty_mCallName ;
    outOperand1 = p->mObject.mProperty_mImplementationName ;
    outOperand2 = p->mObject.mProperty_mReturnValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_primitiveAndServiceIRlist::method_last (GALGAS_string & outOperand0,
                                                    GALGAS_string & outOperand1,
                                                    GALGAS_bool & outOperand2,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_primitiveAndServiceIRlist * p = (cCollectionElement_primitiveAndServiceIRlist *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_primitiveAndServiceIRlist) ;
    outOperand0 = p->mObject.mProperty_mCallName ;
    outOperand1 = p->mObject.mProperty_mImplementationName ;
    outOperand2 = p->mObject.mProperty_mReturnValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_primitiveAndServiceIRlist GALGAS_primitiveAndServiceIRlist::add_operation (const GALGAS_primitiveAndServiceIRlist & inOperand,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_primitiveAndServiceIRlist result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_primitiveAndServiceIRlist GALGAS_primitiveAndServiceIRlist::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_primitiveAndServiceIRlist result = GALGAS_primitiveAndServiceIRlist::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_primitiveAndServiceIRlist GALGAS_primitiveAndServiceIRlist::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_primitiveAndServiceIRlist result = GALGAS_primitiveAndServiceIRlist::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_primitiveAndServiceIRlist GALGAS_primitiveAndServiceIRlist::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_primitiveAndServiceIRlist result = GALGAS_primitiveAndServiceIRlist::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_primitiveAndServiceIRlist::plusAssign_operation (const GALGAS_primitiveAndServiceIRlist inOperand,
                                                             C_Compiler * /* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_primitiveAndServiceIRlist::getter_mCallNameAtIndex (const GALGAS_uint & inIndex,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_primitiveAndServiceIRlist * p = (cCollectionElement_primitiveAndServiceIRlist *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_primitiveAndServiceIRlist) ;
    result = p->mObject.mProperty_mCallName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_primitiveAndServiceIRlist::getter_mImplementationNameAtIndex (const GALGAS_uint & inIndex,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_primitiveAndServiceIRlist * p = (cCollectionElement_primitiveAndServiceIRlist *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_primitiveAndServiceIRlist) ;
    result = p->mObject.mProperty_mImplementationName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_primitiveAndServiceIRlist::getter_mReturnValueAtIndex (const GALGAS_uint & inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_primitiveAndServiceIRlist * p = (cCollectionElement_primitiveAndServiceIRlist *) attributes.ptr () ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_primitiveAndServiceIRlist) ;
    result = p->mObject.mProperty_mReturnValue ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_primitiveAndServiceIRlist::cEnumerator_primitiveAndServiceIRlist (const GALGAS_primitiveAndServiceIRlist & inEnumeratedObject,
                                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_primitiveAndServiceIRlist_2D_element cEnumerator_primitiveAndServiceIRlist::current (LOCATION_ARGS) const {
  const cCollectionElement_primitiveAndServiceIRlist * p = (const cCollectionElement_primitiveAndServiceIRlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_primitiveAndServiceIRlist) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_primitiveAndServiceIRlist::current_mCallName (LOCATION_ARGS) const {
  const cCollectionElement_primitiveAndServiceIRlist * p = (const cCollectionElement_primitiveAndServiceIRlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_primitiveAndServiceIRlist) ;
  return p->mObject.mProperty_mCallName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_primitiveAndServiceIRlist::current_mImplementationName (LOCATION_ARGS) const {
  const cCollectionElement_primitiveAndServiceIRlist * p = (const cCollectionElement_primitiveAndServiceIRlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_primitiveAndServiceIRlist) ;
  return p->mObject.mProperty_mImplementationName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_primitiveAndServiceIRlist::current_mReturnValue (LOCATION_ARGS) const {
  const cCollectionElement_primitiveAndServiceIRlist * p = (const cCollectionElement_primitiveAndServiceIRlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_primitiveAndServiceIRlist) ;
  return p->mObject.mProperty_mReturnValue ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @primitiveAndServiceIRlist type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_primitiveAndServiceIRlist ("primitiveAndServiceIRlist",
                                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_primitiveAndServiceIRlist::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_primitiveAndServiceIRlist ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_primitiveAndServiceIRlist::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_primitiveAndServiceIRlist (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_primitiveAndServiceIRlist GALGAS_primitiveAndServiceIRlist::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_primitiveAndServiceIRlist result ;
  const GALGAS_primitiveAndServiceIRlist * p = (const GALGAS_primitiveAndServiceIRlist *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_primitiveAndServiceIRlist *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("primitiveAndServiceIRlist", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_routineMapIR::cMapElement_routineMapIR (const GALGAS_lstring & inKey,
                                                    const GALGAS_PLMType & in_mReceiverType,
                                                    const GALGAS_lstring & in_mRoutineNameForGeneration,
                                                    const GALGAS_routineFormalArgumentListIR & in_mFormalArgumentListForGeneration,
                                                    const GALGAS_allocaList & in_mAllocaList,
                                                    const GALGAS_instructionListIR & in_mInstructionGenerationList,
                                                    const GALGAS_bool & in_mIsRequired,
                                                    const GALGAS_bool & in_mWarnIfUnused,
                                                    const GALGAS_bool & in_mGlobal,
                                                    const GALGAS_routineKind & in_mKind,
                                                    const GALGAS_PLMType & in_mReturnType,
                                                    const GALGAS_bool & in_mAppendFileAndLineArgumentForPanicLocation
                                                    COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mReceiverType (in_mReceiverType),
mProperty_mRoutineNameForGeneration (in_mRoutineNameForGeneration),
mProperty_mFormalArgumentListForGeneration (in_mFormalArgumentListForGeneration),
mProperty_mAllocaList (in_mAllocaList),
mProperty_mInstructionGenerationList (in_mInstructionGenerationList),
mProperty_mIsRequired (in_mIsRequired),
mProperty_mWarnIfUnused (in_mWarnIfUnused),
mProperty_mGlobal (in_mGlobal),
mProperty_mKind (in_mKind),
mProperty_mReturnType (in_mReturnType),
mProperty_mAppendFileAndLineArgumentForPanicLocation (in_mAppendFileAndLineArgumentForPanicLocation) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_routineMapIR::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mReceiverType.isValid () && mProperty_mRoutineNameForGeneration.isValid () && mProperty_mFormalArgumentListForGeneration.isValid () && mProperty_mAllocaList.isValid () && mProperty_mInstructionGenerationList.isValid () && mProperty_mIsRequired.isValid () && mProperty_mWarnIfUnused.isValid () && mProperty_mGlobal.isValid () && mProperty_mKind.isValid () && mProperty_mReturnType.isValid () && mProperty_mAppendFileAndLineArgumentForPanicLocation.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_routineMapIR::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_routineMapIR (mProperty_lkey, mProperty_mReceiverType, mProperty_mRoutineNameForGeneration, mProperty_mFormalArgumentListForGeneration, mProperty_mAllocaList, mProperty_mInstructionGenerationList, mProperty_mIsRequired, mProperty_mWarnIfUnused, mProperty_mGlobal, mProperty_mKind, mProperty_mReturnType, mProperty_mAppendFileAndLineArgumentForPanicLocation COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_routineMapIR::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mReceiverType" ":" ;
  mProperty_mReceiverType.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mRoutineNameForGeneration" ":" ;
  mProperty_mRoutineNameForGeneration.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFormalArgumentListForGeneration" ":" ;
  mProperty_mFormalArgumentListForGeneration.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAllocaList" ":" ;
  mProperty_mAllocaList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInstructionGenerationList" ":" ;
  mProperty_mInstructionGenerationList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIsRequired" ":" ;
  mProperty_mIsRequired.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mWarnIfUnused" ":" ;
  mProperty_mWarnIfUnused.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mGlobal" ":" ;
  mProperty_mGlobal.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mKind" ":" ;
  mProperty_mKind.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mReturnType" ":" ;
  mProperty_mReturnType.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAppendFileAndLineArgumentForPanicLocation" ":" ;
  mProperty_mAppendFileAndLineArgumentForPanicLocation.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_routineMapIR::compare (const cCollectionElement * inOperand) const {
  cMapElement_routineMapIR * operand = (cMapElement_routineMapIR *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mReceiverType.objectCompare (operand->mProperty_mReceiverType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRoutineNameForGeneration.objectCompare (operand->mProperty_mRoutineNameForGeneration) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mFormalArgumentListForGeneration.objectCompare (operand->mProperty_mFormalArgumentListForGeneration) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAllocaList.objectCompare (operand->mProperty_mAllocaList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInstructionGenerationList.objectCompare (operand->mProperty_mInstructionGenerationList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIsRequired.objectCompare (operand->mProperty_mIsRequired) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mWarnIfUnused.objectCompare (operand->mProperty_mWarnIfUnused) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mGlobal.objectCompare (operand->mProperty_mGlobal) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mKind.objectCompare (operand->mProperty_mKind) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mReturnType.objectCompare (operand->mProperty_mReturnType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAppendFileAndLineArgumentForPanicLocation.objectCompare (operand->mProperty_mAppendFileAndLineArgumentForPanicLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineMapIR::GALGAS_routineMapIR (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineMapIR::GALGAS_routineMapIR (const GALGAS_routineMapIR & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineMapIR & GALGAS_routineMapIR::operator = (const GALGAS_routineMapIR & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineMapIR GALGAS_routineMapIR::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_routineMapIR result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineMapIR GALGAS_routineMapIR::constructor_mapWithMapToOverride (const GALGAS_routineMapIR & inMapToOverride
                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_routineMapIR result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineMapIR GALGAS_routineMapIR::getter_overriddenMap (C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  GALGAS_routineMapIR result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineMapIR::addAssign_operation (const GALGAS_lstring & inKey,
                                               const GALGAS_PLMType & inArgument0,
                                               const GALGAS_lstring & inArgument1,
                                               const GALGAS_routineFormalArgumentListIR & inArgument2,
                                               const GALGAS_allocaList & inArgument3,
                                               const GALGAS_instructionListIR & inArgument4,
                                               const GALGAS_bool & inArgument5,
                                               const GALGAS_bool & inArgument6,
                                               const GALGAS_bool & inArgument7,
                                               const GALGAS_routineKind & inArgument8,
                                               const GALGAS_PLMType & inArgument9,
                                               const GALGAS_bool & inArgument10,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  cMapElement_routineMapIR * p = NULL ;
  macroMyNew (p, cMapElement_routineMapIR (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4, inArgument5, inArgument6, inArgument7, inArgument8, inArgument9, inArgument10 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@routineMapIR insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineMapIR::setter_insertKey (GALGAS_lstring inKey,
                                            GALGAS_PLMType inArgument0,
                                            GALGAS_lstring inArgument1,
                                            GALGAS_routineFormalArgumentListIR inArgument2,
                                            GALGAS_allocaList inArgument3,
                                            GALGAS_instructionListIR inArgument4,
                                            GALGAS_bool inArgument5,
                                            GALGAS_bool inArgument6,
                                            GALGAS_bool inArgument7,
                                            GALGAS_routineKind inArgument8,
                                            GALGAS_PLMType inArgument9,
                                            GALGAS_bool inArgument10,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  cMapElement_routineMapIR * p = NULL ;
  macroMyNew (p, cMapElement_routineMapIR (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4, inArgument5, inArgument6, inArgument7, inArgument8, inArgument9, inArgument10 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "routine '%K' is already defined" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_routineMapIR_searchKey = "** internal error **" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineMapIR::method_searchKey (GALGAS_lstring inKey,
                                            GALGAS_PLMType & outArgument0,
                                            GALGAS_lstring & outArgument1,
                                            GALGAS_routineFormalArgumentListIR & outArgument2,
                                            GALGAS_allocaList & outArgument3,
                                            GALGAS_instructionListIR & outArgument4,
                                            GALGAS_bool & outArgument5,
                                            GALGAS_bool & outArgument6,
                                            GALGAS_bool & outArgument7,
                                            GALGAS_routineKind & outArgument8,
                                            GALGAS_PLMType & outArgument9,
                                            GALGAS_bool & outArgument10,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  const cMapElement_routineMapIR * p = (const cMapElement_routineMapIR *) performSearch (inKey,
                                                                                         inCompiler,
                                                                                         kSearchErrorMessage_routineMapIR_searchKey
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
    macroValidSharedObject (p, cMapElement_routineMapIR) ;
    outArgument0 = p->mProperty_mReceiverType ;
    outArgument1 = p->mProperty_mRoutineNameForGeneration ;
    outArgument2 = p->mProperty_mFormalArgumentListForGeneration ;
    outArgument3 = p->mProperty_mAllocaList ;
    outArgument4 = p->mProperty_mInstructionGenerationList ;
    outArgument5 = p->mProperty_mIsRequired ;
    outArgument6 = p->mProperty_mWarnIfUnused ;
    outArgument7 = p->mProperty_mGlobal ;
    outArgument8 = p->mProperty_mKind ;
    outArgument9 = p->mProperty_mReturnType ;
    outArgument10 = p->mProperty_mAppendFileAndLineArgumentForPanicLocation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineMapIR::setter_removeKey (GALGAS_lstring inKey,
                                            GALGAS_PLMType & outArgument0,
                                            GALGAS_lstring & outArgument1,
                                            GALGAS_routineFormalArgumentListIR & outArgument2,
                                            GALGAS_allocaList & outArgument3,
                                            GALGAS_instructionListIR & outArgument4,
                                            GALGAS_bool & outArgument5,
                                            GALGAS_bool & outArgument6,
                                            GALGAS_bool & outArgument7,
                                            GALGAS_routineKind & outArgument8,
                                            GALGAS_PLMType & outArgument9,
                                            GALGAS_bool & outArgument10,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  const char * kRemoveErrorMessage = "** internal error **" ;
  capCollectionElement attributes ;
  performRemove (inKey, attributes, inCompiler, kRemoveErrorMessage COMMA_THERE) ;
  cMapElement_routineMapIR * p = (cMapElement_routineMapIR *) attributes.ptr () ;
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
    macroValidSharedObject (p, cMapElement_routineMapIR) ;
    outArgument0 = p->mProperty_mReceiverType ;
    outArgument1 = p->mProperty_mRoutineNameForGeneration ;
    outArgument2 = p->mProperty_mFormalArgumentListForGeneration ;
    outArgument3 = p->mProperty_mAllocaList ;
    outArgument4 = p->mProperty_mInstructionGenerationList ;
    outArgument5 = p->mProperty_mIsRequired ;
    outArgument6 = p->mProperty_mWarnIfUnused ;
    outArgument7 = p->mProperty_mGlobal ;
    outArgument8 = p->mProperty_mKind ;
    outArgument9 = p->mProperty_mReturnType ;
    outArgument10 = p->mProperty_mAppendFileAndLineArgumentForPanicLocation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMType GALGAS_routineMapIR::getter_mReceiverTypeForKey (const GALGAS_string & inKey,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_routineMapIR * p = (const cMapElement_routineMapIR *) attributes ;
  GALGAS_PLMType result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_routineMapIR) ;
    result = p->mProperty_mReceiverType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_routineMapIR::getter_mRoutineNameForGenerationForKey (const GALGAS_string & inKey,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_routineMapIR * p = (const cMapElement_routineMapIR *) attributes ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_routineMapIR) ;
    result = p->mProperty_mRoutineNameForGeneration ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineFormalArgumentListIR GALGAS_routineMapIR::getter_mFormalArgumentListForGenerationForKey (const GALGAS_string & inKey,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_routineMapIR * p = (const cMapElement_routineMapIR *) attributes ;
  GALGAS_routineFormalArgumentListIR result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_routineMapIR) ;
    result = p->mProperty_mFormalArgumentListForGeneration ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allocaList GALGAS_routineMapIR::getter_mAllocaListForKey (const GALGAS_string & inKey,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_routineMapIR * p = (const cMapElement_routineMapIR *) attributes ;
  GALGAS_allocaList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_routineMapIR) ;
    result = p->mProperty_mAllocaList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR GALGAS_routineMapIR::getter_mInstructionGenerationListForKey (const GALGAS_string & inKey,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_routineMapIR * p = (const cMapElement_routineMapIR *) attributes ;
  GALGAS_instructionListIR result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_routineMapIR) ;
    result = p->mProperty_mInstructionGenerationList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_routineMapIR::getter_mIsRequiredForKey (const GALGAS_string & inKey,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_routineMapIR * p = (const cMapElement_routineMapIR *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_routineMapIR) ;
    result = p->mProperty_mIsRequired ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_routineMapIR::getter_mWarnIfUnusedForKey (const GALGAS_string & inKey,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_routineMapIR * p = (const cMapElement_routineMapIR *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_routineMapIR) ;
    result = p->mProperty_mWarnIfUnused ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_routineMapIR::getter_mGlobalForKey (const GALGAS_string & inKey,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_routineMapIR * p = (const cMapElement_routineMapIR *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_routineMapIR) ;
    result = p->mProperty_mGlobal ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineKind GALGAS_routineMapIR::getter_mKindForKey (const GALGAS_string & inKey,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_routineMapIR * p = (const cMapElement_routineMapIR *) attributes ;
  GALGAS_routineKind result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_routineMapIR) ;
    result = p->mProperty_mKind ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMType GALGAS_routineMapIR::getter_mReturnTypeForKey (const GALGAS_string & inKey,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_routineMapIR * p = (const cMapElement_routineMapIR *) attributes ;
  GALGAS_PLMType result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_routineMapIR) ;
    result = p->mProperty_mReturnType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_routineMapIR::getter_mAppendFileAndLineArgumentForPanicLocationForKey (const GALGAS_string & inKey,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_routineMapIR * p = (const cMapElement_routineMapIR *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_routineMapIR) ;
    result = p->mProperty_mAppendFileAndLineArgumentForPanicLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineMapIR::setter_setMReceiverTypeForKey (GALGAS_PLMType inAttributeValue,
                                                         GALGAS_string inKey,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_routineMapIR * p = (cMapElement_routineMapIR *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_routineMapIR) ;
    p->mProperty_mReceiverType = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineMapIR::setter_setMRoutineNameForGenerationForKey (GALGAS_lstring inAttributeValue,
                                                                     GALGAS_string inKey,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_routineMapIR * p = (cMapElement_routineMapIR *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_routineMapIR) ;
    p->mProperty_mRoutineNameForGeneration = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineMapIR::setter_setMFormalArgumentListForGenerationForKey (GALGAS_routineFormalArgumentListIR inAttributeValue,
                                                                            GALGAS_string inKey,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_routineMapIR * p = (cMapElement_routineMapIR *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_routineMapIR) ;
    p->mProperty_mFormalArgumentListForGeneration = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineMapIR::setter_setMAllocaListForKey (GALGAS_allocaList inAttributeValue,
                                                       GALGAS_string inKey,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_routineMapIR * p = (cMapElement_routineMapIR *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_routineMapIR) ;
    p->mProperty_mAllocaList = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineMapIR::setter_setMInstructionGenerationListForKey (GALGAS_instructionListIR inAttributeValue,
                                                                      GALGAS_string inKey,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_routineMapIR * p = (cMapElement_routineMapIR *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_routineMapIR) ;
    p->mProperty_mInstructionGenerationList = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineMapIR::setter_setMIsRequiredForKey (GALGAS_bool inAttributeValue,
                                                       GALGAS_string inKey,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_routineMapIR * p = (cMapElement_routineMapIR *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_routineMapIR) ;
    p->mProperty_mIsRequired = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineMapIR::setter_setMWarnIfUnusedForKey (GALGAS_bool inAttributeValue,
                                                         GALGAS_string inKey,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_routineMapIR * p = (cMapElement_routineMapIR *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_routineMapIR) ;
    p->mProperty_mWarnIfUnused = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineMapIR::setter_setMGlobalForKey (GALGAS_bool inAttributeValue,
                                                   GALGAS_string inKey,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_routineMapIR * p = (cMapElement_routineMapIR *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_routineMapIR) ;
    p->mProperty_mGlobal = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineMapIR::setter_setMKindForKey (GALGAS_routineKind inAttributeValue,
                                                 GALGAS_string inKey,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_routineMapIR * p = (cMapElement_routineMapIR *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_routineMapIR) ;
    p->mProperty_mKind = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineMapIR::setter_setMReturnTypeForKey (GALGAS_PLMType inAttributeValue,
                                                       GALGAS_string inKey,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_routineMapIR * p = (cMapElement_routineMapIR *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_routineMapIR) ;
    p->mProperty_mReturnType = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineMapIR::setter_setMAppendFileAndLineArgumentForPanicLocationForKey (GALGAS_bool inAttributeValue,
                                                                                      GALGAS_string inKey,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_routineMapIR * p = (cMapElement_routineMapIR *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_routineMapIR) ;
    p->mProperty_mAppendFileAndLineArgumentForPanicLocation = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_routineMapIR * GALGAS_routineMapIR::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                   const GALGAS_string & inKey
                                                                                   COMMA_LOCATION_ARGS) {
  cMapElement_routineMapIR * result = (cMapElement_routineMapIR *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_routineMapIR) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_routineMapIR::cEnumerator_routineMapIR (const GALGAS_routineMapIR & inEnumeratedObject,
                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineMapIR_2D_element cEnumerator_routineMapIR::current (LOCATION_ARGS) const {
  const cMapElement_routineMapIR * p = (const cMapElement_routineMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_routineMapIR) ;
  return GALGAS_routineMapIR_2D_element (p->mProperty_lkey, p->mProperty_mReceiverType, p->mProperty_mRoutineNameForGeneration, p->mProperty_mFormalArgumentListForGeneration, p->mProperty_mAllocaList, p->mProperty_mInstructionGenerationList, p->mProperty_mIsRequired, p->mProperty_mWarnIfUnused, p->mProperty_mGlobal, p->mProperty_mKind, p->mProperty_mReturnType, p->mProperty_mAppendFileAndLineArgumentForPanicLocation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_routineMapIR::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMType cEnumerator_routineMapIR::current_mReceiverType (LOCATION_ARGS) const {
  const cMapElement_routineMapIR * p = (const cMapElement_routineMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_routineMapIR) ;
  return p->mProperty_mReceiverType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_routineMapIR::current_mRoutineNameForGeneration (LOCATION_ARGS) const {
  const cMapElement_routineMapIR * p = (const cMapElement_routineMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_routineMapIR) ;
  return p->mProperty_mRoutineNameForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineFormalArgumentListIR cEnumerator_routineMapIR::current_mFormalArgumentListForGeneration (LOCATION_ARGS) const {
  const cMapElement_routineMapIR * p = (const cMapElement_routineMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_routineMapIR) ;
  return p->mProperty_mFormalArgumentListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allocaList cEnumerator_routineMapIR::current_mAllocaList (LOCATION_ARGS) const {
  const cMapElement_routineMapIR * p = (const cMapElement_routineMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_routineMapIR) ;
  return p->mProperty_mAllocaList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR cEnumerator_routineMapIR::current_mInstructionGenerationList (LOCATION_ARGS) const {
  const cMapElement_routineMapIR * p = (const cMapElement_routineMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_routineMapIR) ;
  return p->mProperty_mInstructionGenerationList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_routineMapIR::current_mIsRequired (LOCATION_ARGS) const {
  const cMapElement_routineMapIR * p = (const cMapElement_routineMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_routineMapIR) ;
  return p->mProperty_mIsRequired ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_routineMapIR::current_mWarnIfUnused (LOCATION_ARGS) const {
  const cMapElement_routineMapIR * p = (const cMapElement_routineMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_routineMapIR) ;
  return p->mProperty_mWarnIfUnused ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_routineMapIR::current_mGlobal (LOCATION_ARGS) const {
  const cMapElement_routineMapIR * p = (const cMapElement_routineMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_routineMapIR) ;
  return p->mProperty_mGlobal ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineKind cEnumerator_routineMapIR::current_mKind (LOCATION_ARGS) const {
  const cMapElement_routineMapIR * p = (const cMapElement_routineMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_routineMapIR) ;
  return p->mProperty_mKind ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMType cEnumerator_routineMapIR::current_mReturnType (LOCATION_ARGS) const {
  const cMapElement_routineMapIR * p = (const cMapElement_routineMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_routineMapIR) ;
  return p->mProperty_mReturnType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_routineMapIR::current_mAppendFileAndLineArgumentForPanicLocation (LOCATION_ARGS) const {
  const cMapElement_routineMapIR * p = (const cMapElement_routineMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_routineMapIR) ;
  return p->mProperty_mAppendFileAndLineArgumentForPanicLocation ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 @routineMapIR type                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_routineMapIR ("routineMapIR",
                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_routineMapIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineMapIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_routineMapIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_routineMapIR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineMapIR GALGAS_routineMapIR::extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GALGAS_routineMapIR result ;
  const GALGAS_routineMapIR * p = (const GALGAS_routineMapIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_routineMapIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineMapIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Class for element of '@bootListIR' list                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_bootListIR : public cCollectionElement {
  public : GALGAS_bootListIR_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_bootListIR (const GALGAS_string & in_mDriverName,
                                          const GALGAS_allocaList & in_mAllocaList,
                                          const GALGAS_instructionListIR & in_mInstructionListIR,
                                          const GALGAS_location & in_mEndOfInitLocation
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

cCollectionElement_bootListIR::cCollectionElement_bootListIR (const GALGAS_string & in_mDriverName,
                                                              const GALGAS_allocaList & in_mAllocaList,
                                                              const GALGAS_instructionListIR & in_mInstructionListIR,
                                                              const GALGAS_location & in_mEndOfInitLocation
                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mDriverName, in_mAllocaList, in_mInstructionListIR, in_mEndOfInitLocation) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_bootListIR::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_bootListIR::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_bootListIR (mObject.mProperty_mDriverName, mObject.mProperty_mAllocaList, mObject.mProperty_mInstructionListIR, mObject.mProperty_mEndOfInitLocation COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_bootListIR::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mDriverName" ":" ;
  mObject.mProperty_mDriverName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAllocaList" ":" ;
  mObject.mProperty_mAllocaList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInstructionListIR" ":" ;
  mObject.mProperty_mInstructionListIR.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEndOfInitLocation" ":" ;
  mObject.mProperty_mEndOfInitLocation.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_bootListIR::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_bootListIR * operand = (cCollectionElement_bootListIR *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_bootListIR) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootListIR::GALGAS_bootListIR (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootListIR::GALGAS_bootListIR (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootListIR GALGAS_bootListIR::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_bootListIR  (capCollectionElementArray ()) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootListIR GALGAS_bootListIR::constructor_listWithValue (const GALGAS_string & inOperand0,
                                                                const GALGAS_allocaList & inOperand1,
                                                                const GALGAS_instructionListIR & inOperand2,
                                                                const GALGAS_location & inOperand3
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_bootListIR result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_bootListIR (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_bootListIR::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_bootListIR::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                   const GALGAS_string & in_mDriverName,
                                                   const GALGAS_allocaList & in_mAllocaList,
                                                   const GALGAS_instructionListIR & in_mInstructionListIR,
                                                   const GALGAS_location & in_mEndOfInitLocation
                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_bootListIR * p = NULL ;
  macroMyNew (p, cCollectionElement_bootListIR (in_mDriverName,
                                                in_mAllocaList,
                                                in_mInstructionListIR,
                                                in_mEndOfInitLocation COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_bootListIR::addAssign_operation (const GALGAS_string & inOperand0,
                                             const GALGAS_allocaList & inOperand1,
                                             const GALGAS_instructionListIR & inOperand2,
                                             const GALGAS_location & inOperand3
                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_bootListIR (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_bootListIR::setter_insertAtIndex (const GALGAS_string inOperand0,
                                              const GALGAS_allocaList inOperand1,
                                              const GALGAS_instructionListIR inOperand2,
                                              const GALGAS_location inOperand3,
                                              const GALGAS_uint inInsertionIndex,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_bootListIR (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_bootListIR::setter_removeAtIndex (GALGAS_string & outOperand0,
                                              GALGAS_allocaList & outOperand1,
                                              GALGAS_instructionListIR & outOperand2,
                                              GALGAS_location & outOperand3,
                                              const GALGAS_uint inRemoveIndex,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_bootListIR * p = (cCollectionElement_bootListIR *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_bootListIR) ;
      outOperand0 = p->mObject.mProperty_mDriverName ;
      outOperand1 = p->mObject.mProperty_mAllocaList ;
      outOperand2 = p->mObject.mProperty_mInstructionListIR ;
      outOperand3 = p->mObject.mProperty_mEndOfInitLocation ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_bootListIR::setter_popFirst (GALGAS_string & outOperand0,
                                         GALGAS_allocaList & outOperand1,
                                         GALGAS_instructionListIR & outOperand2,
                                         GALGAS_location & outOperand3,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_bootListIR * p = (cCollectionElement_bootListIR *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_bootListIR) ;
    outOperand0 = p->mObject.mProperty_mDriverName ;
    outOperand1 = p->mObject.mProperty_mAllocaList ;
    outOperand2 = p->mObject.mProperty_mInstructionListIR ;
    outOperand3 = p->mObject.mProperty_mEndOfInitLocation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_bootListIR::setter_popLast (GALGAS_string & outOperand0,
                                        GALGAS_allocaList & outOperand1,
                                        GALGAS_instructionListIR & outOperand2,
                                        GALGAS_location & outOperand3,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_bootListIR * p = (cCollectionElement_bootListIR *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_bootListIR) ;
    outOperand0 = p->mObject.mProperty_mDriverName ;
    outOperand1 = p->mObject.mProperty_mAllocaList ;
    outOperand2 = p->mObject.mProperty_mInstructionListIR ;
    outOperand3 = p->mObject.mProperty_mEndOfInitLocation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_bootListIR::method_first (GALGAS_string & outOperand0,
                                      GALGAS_allocaList & outOperand1,
                                      GALGAS_instructionListIR & outOperand2,
                                      GALGAS_location & outOperand3,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_bootListIR * p = (cCollectionElement_bootListIR *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_bootListIR) ;
    outOperand0 = p->mObject.mProperty_mDriverName ;
    outOperand1 = p->mObject.mProperty_mAllocaList ;
    outOperand2 = p->mObject.mProperty_mInstructionListIR ;
    outOperand3 = p->mObject.mProperty_mEndOfInitLocation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_bootListIR::method_last (GALGAS_string & outOperand0,
                                     GALGAS_allocaList & outOperand1,
                                     GALGAS_instructionListIR & outOperand2,
                                     GALGAS_location & outOperand3,
                                     C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_bootListIR * p = (cCollectionElement_bootListIR *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_bootListIR) ;
    outOperand0 = p->mObject.mProperty_mDriverName ;
    outOperand1 = p->mObject.mProperty_mAllocaList ;
    outOperand2 = p->mObject.mProperty_mInstructionListIR ;
    outOperand3 = p->mObject.mProperty_mEndOfInitLocation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootListIR GALGAS_bootListIR::add_operation (const GALGAS_bootListIR & inOperand,
                                                    C_Compiler * /* inCompiler */
                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bootListIR result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootListIR GALGAS_bootListIR::getter_subListWithRange (const GALGAS_range & inRange,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_bootListIR result = GALGAS_bootListIR::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootListIR GALGAS_bootListIR::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_bootListIR result = GALGAS_bootListIR::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootListIR GALGAS_bootListIR::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_bootListIR result = GALGAS_bootListIR::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_bootListIR::plusAssign_operation (const GALGAS_bootListIR inOperand,
                                              C_Compiler * /* inCompiler */
                                              COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_bootListIR::getter_mDriverNameAtIndex (const GALGAS_uint & inIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_bootListIR * p = (cCollectionElement_bootListIR *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_bootListIR) ;
    result = p->mObject.mProperty_mDriverName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allocaList GALGAS_bootListIR::getter_mAllocaListAtIndex (const GALGAS_uint & inIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_bootListIR * p = (cCollectionElement_bootListIR *) attributes.ptr () ;
  GALGAS_allocaList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_bootListIR) ;
    result = p->mObject.mProperty_mAllocaList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR GALGAS_bootListIR::getter_mInstructionListIRAtIndex (const GALGAS_uint & inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_bootListIR * p = (cCollectionElement_bootListIR *) attributes.ptr () ;
  GALGAS_instructionListIR result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_bootListIR) ;
    result = p->mObject.mProperty_mInstructionListIR ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_bootListIR::getter_mEndOfInitLocationAtIndex (const GALGAS_uint & inIndex,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_bootListIR * p = (cCollectionElement_bootListIR *) attributes.ptr () ;
  GALGAS_location result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_bootListIR) ;
    result = p->mObject.mProperty_mEndOfInitLocation ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_bootListIR::cEnumerator_bootListIR (const GALGAS_bootListIR & inEnumeratedObject,
                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootListIR_2D_element cEnumerator_bootListIR::current (LOCATION_ARGS) const {
  const cCollectionElement_bootListIR * p = (const cCollectionElement_bootListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_bootListIR) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_bootListIR::current_mDriverName (LOCATION_ARGS) const {
  const cCollectionElement_bootListIR * p = (const cCollectionElement_bootListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_bootListIR) ;
  return p->mObject.mProperty_mDriverName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allocaList cEnumerator_bootListIR::current_mAllocaList (LOCATION_ARGS) const {
  const cCollectionElement_bootListIR * p = (const cCollectionElement_bootListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_bootListIR) ;
  return p->mObject.mProperty_mAllocaList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR cEnumerator_bootListIR::current_mInstructionListIR (LOCATION_ARGS) const {
  const cCollectionElement_bootListIR * p = (const cCollectionElement_bootListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_bootListIR) ;
  return p->mObject.mProperty_mInstructionListIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cEnumerator_bootListIR::current_mEndOfInitLocation (LOCATION_ARGS) const {
  const cCollectionElement_bootListIR * p = (const cCollectionElement_bootListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_bootListIR) ;
  return p->mObject.mProperty_mEndOfInitLocation ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  @bootListIR type                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_bootListIR ("bootListIR",
                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_bootListIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bootListIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_bootListIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_bootListIR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootListIR GALGAS_bootListIR::extractObject (const GALGAS_object & inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  GALGAS_bootListIR result ;
  const GALGAS_bootListIR * p = (const GALGAS_bootListIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_bootListIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bootListIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Extension method '@bootListIR generateCode'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_generateCode (const GALGAS_bootListIR inObject,
                                   GALGAS_string & ioArgument_ioLLVMcode,
                                   const GALGAS_generationContext constinArgument_inGenerationContext,
                                   GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                   C_Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("Boot routines"), inCompiler COMMA_SOURCE_FILE ("declaration-boot.galgas", 180)), inCompiler  COMMA_SOURCE_FILE ("declaration-boot.galgas", 180)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal void @boot ()").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("declaration-boot.galgas", 181)), inCompiler COMMA_SOURCE_FILE ("declaration-boot.galgas", 181)).add_operation (GALGAS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("declaration-boot.galgas", 181)), inCompiler  COMMA_SOURCE_FILE ("declaration-boot.galgas", 181)) ;
  const GALGAS_bootListIR temp_0 = inObject ;
  cEnumerator_bootListIR enumerator_8112 (temp_0, kENUMERATION_UP) ;
  while (enumerator_8112.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @boot.").add_operation (enumerator_8112.current (HERE).getter_mDriverName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-boot.galgas", 183)).add_operation (GALGAS_string (" ()\n"), inCompiler COMMA_SOURCE_FILE ("declaration-boot.galgas", 183)), inCompiler  COMMA_SOURCE_FILE ("declaration-boot.galgas", 183)) ;
    enumerator_8112.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-boot.galgas", 185)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-boot.galgas", 186)) ;
  const GALGAS_bootListIR temp_1 = inObject ;
  cEnumerator_bootListIR enumerator_8263 (temp_1, kENUMERATION_UP) ;
  while (enumerator_8263.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssign_operation(function_llvmSeparatorLine (inCompiler COMMA_SOURCE_FILE ("declaration-boot.galgas", 188)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("declaration-boot.galgas", 188)), inCompiler  COMMA_SOURCE_FILE ("declaration-boot.galgas", 188)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal void @boot.").add_operation (enumerator_8263.current (HERE).getter_mDriverName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-boot.galgas", 189)).add_operation (GALGAS_string (" ()"), inCompiler COMMA_SOURCE_FILE ("declaration-boot.galgas", 189)).add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("declaration-boot.galgas", 189)), inCompiler COMMA_SOURCE_FILE ("declaration-boot.galgas", 189)).add_operation (GALGAS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("declaration-boot.galgas", 189)), inCompiler  COMMA_SOURCE_FILE ("declaration-boot.galgas", 189)) ;
    extensionMethod_generateAllocaList (enumerator_8263.current (HERE).getter_mAllocaList (HERE), ioArgument_ioLLVMcode, inCompiler COMMA_SOURCE_FILE ("declaration-boot.galgas", 190)) ;
    extensionMethod_instructionListLLVMCode (enumerator_8263.current (HERE).getter_mInstructionListIR (HERE), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("declaration-boot.galgas", 191)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-boot.galgas", 192)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
      "\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-boot.galgas", 193)) ;
    enumerator_8263.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Class for element of '@initListIR' list                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_initListIR : public cCollectionElement {
  public : GALGAS_initListIR_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_initListIR (const GALGAS_PLMType & in_mSelfType,
                                          const GALGAS_string & in_mDriverName,
                                          const GALGAS_allocaList & in_mAllocaList,
                                          const GALGAS_instructionListIR & in_mInstructionListIR
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

cCollectionElement_initListIR::cCollectionElement_initListIR (const GALGAS_PLMType & in_mSelfType,
                                                              const GALGAS_string & in_mDriverName,
                                                              const GALGAS_allocaList & in_mAllocaList,
                                                              const GALGAS_instructionListIR & in_mInstructionListIR
                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mSelfType, in_mDriverName, in_mAllocaList, in_mInstructionListIR) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_initListIR::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_initListIR::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_initListIR (mObject.mProperty_mSelfType, mObject.mProperty_mDriverName, mObject.mProperty_mAllocaList, mObject.mProperty_mInstructionListIR COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_initListIR::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSelfType" ":" ;
  mObject.mProperty_mSelfType.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mDriverName" ":" ;
  mObject.mProperty_mDriverName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAllocaList" ":" ;
  mObject.mProperty_mAllocaList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInstructionListIR" ":" ;
  mObject.mProperty_mInstructionListIR.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_initListIR::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_initListIR * operand = (cCollectionElement_initListIR *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_initListIR) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initListIR::GALGAS_initListIR (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initListIR::GALGAS_initListIR (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initListIR GALGAS_initListIR::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_initListIR  (capCollectionElementArray ()) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initListIR GALGAS_initListIR::constructor_listWithValue (const GALGAS_PLMType & inOperand0,
                                                                const GALGAS_string & inOperand1,
                                                                const GALGAS_allocaList & inOperand2,
                                                                const GALGAS_instructionListIR & inOperand3
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_initListIR result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_initListIR (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_initListIR::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_initListIR::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                   const GALGAS_PLMType & in_mSelfType,
                                                   const GALGAS_string & in_mDriverName,
                                                   const GALGAS_allocaList & in_mAllocaList,
                                                   const GALGAS_instructionListIR & in_mInstructionListIR
                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_initListIR * p = NULL ;
  macroMyNew (p, cCollectionElement_initListIR (in_mSelfType,
                                                in_mDriverName,
                                                in_mAllocaList,
                                                in_mInstructionListIR COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_initListIR::addAssign_operation (const GALGAS_PLMType & inOperand0,
                                             const GALGAS_string & inOperand1,
                                             const GALGAS_allocaList & inOperand2,
                                             const GALGAS_instructionListIR & inOperand3
                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_initListIR (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_initListIR::setter_insertAtIndex (const GALGAS_PLMType inOperand0,
                                              const GALGAS_string inOperand1,
                                              const GALGAS_allocaList inOperand2,
                                              const GALGAS_instructionListIR inOperand3,
                                              const GALGAS_uint inInsertionIndex,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_initListIR (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_initListIR::setter_removeAtIndex (GALGAS_PLMType & outOperand0,
                                              GALGAS_string & outOperand1,
                                              GALGAS_allocaList & outOperand2,
                                              GALGAS_instructionListIR & outOperand3,
                                              const GALGAS_uint inRemoveIndex,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_initListIR * p = (cCollectionElement_initListIR *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_initListIR) ;
      outOperand0 = p->mObject.mProperty_mSelfType ;
      outOperand1 = p->mObject.mProperty_mDriverName ;
      outOperand2 = p->mObject.mProperty_mAllocaList ;
      outOperand3 = p->mObject.mProperty_mInstructionListIR ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_initListIR::setter_popFirst (GALGAS_PLMType & outOperand0,
                                         GALGAS_string & outOperand1,
                                         GALGAS_allocaList & outOperand2,
                                         GALGAS_instructionListIR & outOperand3,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_initListIR * p = (cCollectionElement_initListIR *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_initListIR) ;
    outOperand0 = p->mObject.mProperty_mSelfType ;
    outOperand1 = p->mObject.mProperty_mDriverName ;
    outOperand2 = p->mObject.mProperty_mAllocaList ;
    outOperand3 = p->mObject.mProperty_mInstructionListIR ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_initListIR::setter_popLast (GALGAS_PLMType & outOperand0,
                                        GALGAS_string & outOperand1,
                                        GALGAS_allocaList & outOperand2,
                                        GALGAS_instructionListIR & outOperand3,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_initListIR * p = (cCollectionElement_initListIR *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_initListIR) ;
    outOperand0 = p->mObject.mProperty_mSelfType ;
    outOperand1 = p->mObject.mProperty_mDriverName ;
    outOperand2 = p->mObject.mProperty_mAllocaList ;
    outOperand3 = p->mObject.mProperty_mInstructionListIR ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_initListIR::method_first (GALGAS_PLMType & outOperand0,
                                      GALGAS_string & outOperand1,
                                      GALGAS_allocaList & outOperand2,
                                      GALGAS_instructionListIR & outOperand3,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_initListIR * p = (cCollectionElement_initListIR *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_initListIR) ;
    outOperand0 = p->mObject.mProperty_mSelfType ;
    outOperand1 = p->mObject.mProperty_mDriverName ;
    outOperand2 = p->mObject.mProperty_mAllocaList ;
    outOperand3 = p->mObject.mProperty_mInstructionListIR ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_initListIR::method_last (GALGAS_PLMType & outOperand0,
                                     GALGAS_string & outOperand1,
                                     GALGAS_allocaList & outOperand2,
                                     GALGAS_instructionListIR & outOperand3,
                                     C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_initListIR * p = (cCollectionElement_initListIR *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_initListIR) ;
    outOperand0 = p->mObject.mProperty_mSelfType ;
    outOperand1 = p->mObject.mProperty_mDriverName ;
    outOperand2 = p->mObject.mProperty_mAllocaList ;
    outOperand3 = p->mObject.mProperty_mInstructionListIR ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initListIR GALGAS_initListIR::add_operation (const GALGAS_initListIR & inOperand,
                                                    C_Compiler * /* inCompiler */
                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_initListIR result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initListIR GALGAS_initListIR::getter_subListWithRange (const GALGAS_range & inRange,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_initListIR result = GALGAS_initListIR::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initListIR GALGAS_initListIR::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_initListIR result = GALGAS_initListIR::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initListIR GALGAS_initListIR::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_initListIR result = GALGAS_initListIR::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_initListIR::plusAssign_operation (const GALGAS_initListIR inOperand,
                                              C_Compiler * /* inCompiler */
                                              COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMType GALGAS_initListIR::getter_mSelfTypeAtIndex (const GALGAS_uint & inIndex,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_initListIR * p = (cCollectionElement_initListIR *) attributes.ptr () ;
  GALGAS_PLMType result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_initListIR) ;
    result = p->mObject.mProperty_mSelfType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_initListIR::getter_mDriverNameAtIndex (const GALGAS_uint & inIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_initListIR * p = (cCollectionElement_initListIR *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_initListIR) ;
    result = p->mObject.mProperty_mDriverName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allocaList GALGAS_initListIR::getter_mAllocaListAtIndex (const GALGAS_uint & inIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_initListIR * p = (cCollectionElement_initListIR *) attributes.ptr () ;
  GALGAS_allocaList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_initListIR) ;
    result = p->mObject.mProperty_mAllocaList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR GALGAS_initListIR::getter_mInstructionListIRAtIndex (const GALGAS_uint & inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_initListIR * p = (cCollectionElement_initListIR *) attributes.ptr () ;
  GALGAS_instructionListIR result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_initListIR) ;
    result = p->mObject.mProperty_mInstructionListIR ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_initListIR::cEnumerator_initListIR (const GALGAS_initListIR & inEnumeratedObject,
                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initListIR_2D_element cEnumerator_initListIR::current (LOCATION_ARGS) const {
  const cCollectionElement_initListIR * p = (const cCollectionElement_initListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_initListIR) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMType cEnumerator_initListIR::current_mSelfType (LOCATION_ARGS) const {
  const cCollectionElement_initListIR * p = (const cCollectionElement_initListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_initListIR) ;
  return p->mObject.mProperty_mSelfType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_initListIR::current_mDriverName (LOCATION_ARGS) const {
  const cCollectionElement_initListIR * p = (const cCollectionElement_initListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_initListIR) ;
  return p->mObject.mProperty_mDriverName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allocaList cEnumerator_initListIR::current_mAllocaList (LOCATION_ARGS) const {
  const cCollectionElement_initListIR * p = (const cCollectionElement_initListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_initListIR) ;
  return p->mObject.mProperty_mAllocaList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR cEnumerator_initListIR::current_mInstructionListIR (LOCATION_ARGS) const {
  const cCollectionElement_initListIR * p = (const cCollectionElement_initListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_initListIR) ;
  return p->mObject.mProperty_mInstructionListIR ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  @initListIR type                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_initListIR ("initListIR",
                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_initListIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_initListIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_initListIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_initListIR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initListIR GALGAS_initListIR::extractObject (const GALGAS_object & inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  GALGAS_initListIR result ;
  const GALGAS_initListIR * p = (const GALGAS_initListIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_initListIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("initListIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Extension method '@initListIR generateLLVMinitCode'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_generateLLVMinitCode (const GALGAS_initListIR inObject,
                                           GALGAS_string & ioArgument_ioLLVMcode,
                                           const GALGAS_routineMapIR /* constinArgument_inProcedureMapIR */,
                                           const GALGAS_generationContext constinArgument_inGenerationContext,
                                           GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("Init"), inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 211)), inCompiler  COMMA_SOURCE_FILE ("declaration-init.galgas", 211)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal void @init ()").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 212)), inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 212)).add_operation (GALGAS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 212)), inCompiler  COMMA_SOURCE_FILE ("declaration-init.galgas", 212)) ;
  const GALGAS_initListIR temp_0 = inObject ;
  cEnumerator_initListIR enumerator_9640 (temp_0, kENUMERATION_UP) ;
  while (enumerator_9640.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @init.").add_operation (enumerator_9640.current (HERE).getter_mDriverName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 214)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 214)), inCompiler  COMMA_SOURCE_FILE ("declaration-init.galgas", 214)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_9640.current (HERE).getter_mSelfType (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 215)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 215)).add_operation (function_llvmNameForGlobalVariable (enumerator_9640.current (HERE).getter_mDriverName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 215)), inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 215)), inCompiler  COMMA_SOURCE_FILE ("declaration-init.galgas", 215)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-init.galgas", 216)) ;
    enumerator_9640.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-init.galgas", 218)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-init.galgas", 219)) ;
  const GALGAS_initListIR temp_1 = inObject ;
  cEnumerator_initListIR enumerator_9915 (temp_1, kENUMERATION_UP) ;
  while (enumerator_9915.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssign_operation(function_llvmSeparatorLine (inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 221)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 221)), inCompiler  COMMA_SOURCE_FILE ("declaration-init.galgas", 221)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal void @init.").add_operation (enumerator_9915.current (HERE).getter_mDriverName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 222)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 222)), inCompiler  COMMA_SOURCE_FILE ("declaration-init.galgas", 222)) ;
    const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, enumerator_9915.current (HERE).getter_mSelfType (HERE).getter_kind (HERE).objectCompare (GALGAS_typeKind::constructor_void (SOURCE_FILE ("declaration-init.galgas", 223)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_9915.current (HERE).getter_mSelfType (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 224)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 224)).add_operation (function_llvmNameForSelf (inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 224)), inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 224)), inCompiler  COMMA_SOURCE_FILE ("declaration-init.galgas", 224)) ;
    }
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 226)), inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 226)).add_operation (GALGAS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 226)), inCompiler  COMMA_SOURCE_FILE ("declaration-init.galgas", 226)) ;
    extensionMethod_generateAllocaList (enumerator_9915.current (HERE).getter_mAllocaList (HERE), ioArgument_ioLLVMcode, inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 227)) ;
    extensionMethod_instructionListLLVMCode (enumerator_9915.current (HERE).getter_mInstructionListIR (HERE), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 228)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-init.galgas", 229)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
      "\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-init.galgas", 230)) ;
    enumerator_9915.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentPassingMode::GALGAS_procFormalArgumentPassingMode (void) :
mEnum (kNotBuilt) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentPassingMode GALGAS_procFormalArgumentPassingMode::constructor_input (UNUSED_LOCATION_ARGS) {
  GALGAS_procFormalArgumentPassingMode result ;
  result.mEnum = kEnum_input ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentPassingMode GALGAS_procFormalArgumentPassingMode::constructor_output (UNUSED_LOCATION_ARGS) {
  GALGAS_procFormalArgumentPassingMode result ;
  result.mEnum = kEnum_output ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentPassingMode GALGAS_procFormalArgumentPassingMode::constructor_inputOutput (UNUSED_LOCATION_ARGS) {
  GALGAS_procFormalArgumentPassingMode result ;
  result.mEnum = kEnum_inputOutput ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * gEnumNameArrayFor_procFormalArgumentPassingMode [4] = {
  "(not built)",
  "input",
  "output",
  "inputOutput"
} ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_procFormalArgumentPassingMode::getter_isInput (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_input == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_procFormalArgumentPassingMode::getter_isOutput (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_output == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_procFormalArgumentPassingMode::getter_isInputOutput (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_inputOutput == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procFormalArgumentPassingMode::description (C_String & ioString,
                                                        const int32_t /* inIndentation */) const {
  ioString << "<enum @procFormalArgumentPassingMode: " << gEnumNameArrayFor_procFormalArgumentPassingMode [mEnum] ;
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_procFormalArgumentPassingMode::objectCompare (const GALGAS_procFormalArgumentPassingMode & inOperand) const {
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
//                                         @procFormalArgumentPassingMode type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_procFormalArgumentPassingMode ("procFormalArgumentPassingMode",
                                                      NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_procFormalArgumentPassingMode::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procFormalArgumentPassingMode ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_procFormalArgumentPassingMode::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_procFormalArgumentPassingMode (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentPassingMode GALGAS_procFormalArgumentPassingMode::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_procFormalArgumentPassingMode result ;
  const GALGAS_procFormalArgumentPassingMode * p = (const GALGAS_procFormalArgumentPassingMode *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_procFormalArgumentPassingMode *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("procFormalArgumentPassingMode", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Extension Getter '@procFormalArgumentPassingMode formalPassingModeString'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string extensionGetter_formalPassingModeString (const GALGAS_procFormalArgumentPassingMode & inObject,
                                                       C_Compiler * /* inCompiler */
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_procFormalArgumentPassingMode temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
    break ;
  case GALGAS_procFormalArgumentPassingMode::kEnum_input:
    {
      result_result = GALGAS_string ("\?") ;
    }
    break ;
  case GALGAS_procFormalArgumentPassingMode::kEnum_output:
    {
      result_result = GALGAS_string ("!") ;
    }
    break ;
  case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
    {
      result_result = GALGAS_string ("\?!") ;
    }
    break ;
  }
//---
  return result_result ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Extension Getter '@procFormalArgumentPassingMode requiredActualPassingModeForSelector'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string extensionGetter_requiredActualPassingModeForSelector (const GALGAS_procFormalArgumentPassingMode & inObject,
                                                                    const GALGAS_string & constinArgument_inSelector,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_procFormalArgumentPassingMode temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
    break ;
  case GALGAS_procFormalArgumentPassingMode::kEnum_input:
    {
      result_result = GALGAS_string ("!") ;
    }
    break ;
  case GALGAS_procFormalArgumentPassingMode::kEnum_output:
    {
      result_result = GALGAS_string ("\?") ;
    }
    break ;
  case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
    {
      result_result = GALGAS_string ("!\?") ;
    }
    break ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, constinArgument_inSelector.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_1) {
    result_result.plusAssign_operation(constinArgument_inSelector.add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 52)), inCompiler  COMMA_SOURCE_FILE ("declaration-func.galgas", 52)) ;
  }
//---
  return result_result ;
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
  cEnumerator_functionDeclarationListAST enumerator_6280 (temp_0, kENUMERATION_UP) ;
  while (enumerator_6280.hasCurrentObject ()) {
    cEnumerator_routineFormalArgumentListAST enumerator_6353 (enumerator_6280.current_mFunctionFormalArgumentList (HERE), kENUMERATION_UP) ;
    while (enumerator_6353.hasCurrentObject ()) {
      GALGAS_lstring var_typeName_6375 = function_llvmTypeNameFromPLMname (enumerator_6353.current_mFormalArgumentTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 202)) ;
      {
      ioArgument_ioGraph.setter_noteNode (var_typeName_6375 COMMA_SOURCE_FILE ("declaration-func.galgas", 203)) ;
      }
      enumerator_6353.gotoNextObject () ;
    }
    extensionMethod_noteInstructionListTypesInPrecedenceGraph (enumerator_6280.current_mFunctionInstructionList (HERE), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 205)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, enumerator_6280.current_mFunctionReturnTypeName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_lstring var_typeName_6623 = function_llvmTypeNameFromPLMname (enumerator_6280.current_mFunctionReturnTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 207)) ;
      {
      ioArgument_ioGraph.setter_noteNode (var_typeName_6623 COMMA_SOURCE_FILE ("declaration-func.galgas", 208)) ;
      }
    }
    enumerator_6280.gotoNextObject () ;
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
                                             GALGAS_declarationDecorationList & ioArgument_ioDecoratedDeclarationList,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_functionDeclarationListAST temp_0 = inObject ;
  cEnumerator_functionDeclarationListAST enumerator_7318 (temp_0, kENUMERATION_UP) ;
  while (enumerator_7318.hasCurrentObject ()) {
    GALGAS_routineTypedSignature var_signature_7434 ;
    {
    routine_routineSignature (ioArgument_ioContext.mProperty_mTypeMap, enumerator_7318.current (HERE).getter_mFunctionFormalArgumentList (HERE), var_signature_7434, inCompiler  COMMA_SOURCE_FILE ("declaration-func.galgas", 224)) ;
    }
    GALGAS_unifiedTypeMap_2D_proxy var_returnTypeProxy_7575 ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeOptionalProxy (ioArgument_ioContext.mProperty_mTypeMap, enumerator_7318.current (HERE).getter_mFunctionReturnTypeName (HERE), var_returnTypeProxy_7575 COMMA_SOURCE_FILE ("declaration-func.galgas", 226)) ;
    }
    GALGAS_bool var_warnIfUnused_7615 = GALGAS_bool (true) ;
    GALGAS_bool var_globalFunction_7645 = GALGAS_bool (false) ;
    GALGAS_bool var_canMutateProperties_7681 = GALGAS_bool (false) ;
    GALGAS_bool var_isSafe_7704 = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_7767 (enumerator_7318.current (HERE).getter_mFunctionAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_7767.hasCurrentObject ()) {
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_7767.current_mValue (HERE).getter_string (HERE).objectCompare (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 233)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        const enumGalgasBool test_2 = var_warnIfUnused_7615.operator_not (SOURCE_FILE ("declaration-func.galgas", 234)).boolEnum () ;
        if (kBoolTrue == test_2) {
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (enumerator_7767.current_mValue (HERE).getter_location (SOURCE_FILE ("declaration-func.galgas", 235)), GALGAS_string ("duplicated @").add_operation (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 235)), inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 235)).add_operation (GALGAS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 235)), fixItArray3  COMMA_SOURCE_FILE ("declaration-func.galgas", 235)) ;
        }
        var_warnIfUnused_7615 = GALGAS_bool (false) ;
      }else if (kBoolFalse == test_1) {
        const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, enumerator_7767.current_mValue (HERE).getter_string (HERE).objectCompare (function_exportedAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 238)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          const enumGalgasBool test_5 = var_globalFunction_7645.boolEnum () ;
          if (kBoolTrue == test_5) {
            TC_Array <C_FixItDescription> fixItArray6 ;
            inCompiler->emitSemanticError (enumerator_7767.current_mValue (HERE).getter_location (SOURCE_FILE ("declaration-func.galgas", 240)), GALGAS_string ("duplicated @").add_operation (function_exportedAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 240)), inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 240)).add_operation (GALGAS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 240)), fixItArray6  COMMA_SOURCE_FILE ("declaration-func.galgas", 240)) ;
          }
          var_globalFunction_7645 = GALGAS_bool (true) ;
        }else if (kBoolFalse == test_4) {
          const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, enumerator_7767.current_mValue (HERE).getter_string (HERE).objectCompare (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 243)))).boolEnum () ;
          if (kBoolTrue == test_7) {
            const enumGalgasBool test_8 = var_canMutateProperties_7681.boolEnum () ;
            if (kBoolTrue == test_8) {
              TC_Array <C_FixItDescription> fixItArray9 ;
              inCompiler->emitSemanticError (enumerator_7767.current_mValue (HERE).getter_location (SOURCE_FILE ("declaration-func.galgas", 245)), GALGAS_string ("duplicated @").add_operation (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 245)), inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 245)).add_operation (GALGAS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 245)), fixItArray9  COMMA_SOURCE_FILE ("declaration-func.galgas", 245)) ;
            }
            var_canMutateProperties_7681 = GALGAS_bool (true) ;
          }else if (kBoolFalse == test_7) {
            const enumGalgasBool test_10 = GALGAS_bool (kIsEqual, enumerator_7767.current_mValue (HERE).getter_string (HERE).objectCompare (function_safeAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 248)))).boolEnum () ;
            if (kBoolTrue == test_10) {
              const enumGalgasBool test_11 = var_isSafe_7704.boolEnum () ;
              if (kBoolTrue == test_11) {
                TC_Array <C_FixItDescription> fixItArray12 ;
                fixItArray12.appendObject (C_FixItDescription (kFixItRemove, "")) ;
                inCompiler->emitSemanticError (enumerator_7767.current_mValue (HERE).getter_location (SOURCE_FILE ("declaration-func.galgas", 250)), GALGAS_string ("duplicated attribute"), fixItArray12  COMMA_SOURCE_FILE ("declaration-func.galgas", 250)) ;
              }else if (kBoolFalse == test_11) {
                var_isSafe_7704 = GALGAS_bool (true) ;
              }
            }else if (kBoolFalse == test_10) {
              TC_Array <C_FixItDescription> fixItArray13 ;
              inCompiler->emitSemanticError (enumerator_7767.current_mValue (HERE).getter_location (SOURCE_FILE ("declaration-func.galgas", 255)), GALGAS_string ("unknown attribute; available attributes are @").add_operation (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 256)), inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 255)).add_operation (GALGAS_string (", @"), inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 256)).add_operation (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 256)), inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 256)).add_operation (GALGAS_string (", @"), inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 256)).add_operation (function_exportedAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 256)), inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 256)).add_operation (GALGAS_string (", @"), inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 256)).add_operation (function_safeAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 256)), inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 256)), fixItArray13  COMMA_SOURCE_FILE ("declaration-func.galgas", 255)) ;
            }
          }
        }
      }
      enumerator_7767.gotoNextObject () ;
    }
    GALGAS_bool var_canAccessProperties_8892 = GALGAS_bool (kIsNotEqual, enumerator_7318.current (HERE).getter_mMode (HERE).objectCompare (GALGAS_mode::constructor_userMode (SOURCE_FILE ("declaration-func.galgas", 259)))) ;
    GALGAS_lstring var_routineMangledName_8977 = function_routineMangledNameFromAST (constinArgument_inSelfTypeName, enumerator_7318.current (HERE).getter_mFunctionName (HERE), enumerator_7318.current (HERE).getter_mFunctionFormalArgumentList (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 261)) ;
    {
    extensionSetter_insertRoutine (ioArgument_ioContext.mProperty_mRoutineMapForContext, enumerator_7318.current (HERE).getter_mFunctionName (HERE), extensionGetter_routineSignature (enumerator_7318.current (HERE).getter_mFunctionFormalArgumentList (HERE), enumerator_7318.current (HERE).getter_mFunctionName (HERE).getter_location (SOURCE_FILE ("declaration-func.galgas", 269)), inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 269)), var_routineMangledName_8977, GALGAS_routineDescriptor::constructor_new (enumerator_7318.current (HERE).getter_mPublicFunction (HERE), var_globalFunction_7645, GALGAS_routineKind::constructor_function (enumerator_7318.current (HERE).getter_mMode (HERE)  COMMA_SOURCE_FILE ("declaration-func.galgas", 274)), var_signature_7434, var_returnTypeProxy_7575, var_canAccessProperties_8892, var_canMutateProperties_7681, var_isSafe_7704  COMMA_SOURCE_FILE ("declaration-func.galgas", 271)), inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 267)) ;
    }
    ioArgument_ioDecoratedDeclarationList.addAssign_operation (GALGAS_decoratedFunction::constructor_new (constinArgument_inSelfTypeName, enumerator_7318.current (HERE).getter_mMode (HERE), enumerator_7318.current (HERE).getter_mPublicFunction (HERE), enumerator_7318.current (HERE).getter_mFunctionName (HERE), enumerator_7318.current (HERE).getter_mFunctionFormalArgumentList (HERE), enumerator_7318.current (HERE).getter_mFunctionReturnTypeName (HERE), enumerator_7318.current (HERE).getter_mFunctionInstructionList (HERE), enumerator_7318.current (HERE).getter_mEndOfFunctionDeclaration (HERE), var_warnIfUnused_7615, var_globalFunction_7645, var_isSafe_7704  COMMA_SOURCE_FILE ("declaration-func.galgas", 283))  COMMA_SOURCE_FILE ("declaration-func.galgas", 283)) ;
    enumerator_7318.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Extension method '@functionDeclarationListAST enterFunctionsInPropertyMap'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_enterFunctionsInPropertyMap (const GALGAS_functionDeclarationListAST inObject,
                                                  GALGAS_semanticContext & ioArgument_ioContext,
                                                  GALGAS_propertyMap & ioArgument_ioPropertyMap,
                                                  C_Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_functionDeclarationListAST temp_0 = inObject ;
  cEnumerator_functionDeclarationListAST enumerator_10445 (temp_0, kENUMERATION_UP) ;
  while (enumerator_10445.hasCurrentObject ()) {
    GALGAS_stringset var_attributeSet_10494 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("declaration-func.galgas", 307)) ;
    cEnumerator_lstringlist enumerator_10552 (enumerator_10445.current (HERE).getter_mFunctionAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_10552.hasCurrentObject ()) {
      var_attributeSet_10494.addAssign_operation (enumerator_10552.current (HERE).getter_mValue (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("declaration-func.galgas", 309)) ;
      enumerator_10552.gotoNextObject () ;
    }
    GALGAS_bool var_exportedFunction_10635 = var_attributeSet_10494.getter_hasKey (function_exportedAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 311)) COMMA_SOURCE_FILE ("declaration-func.galgas", 311)) ;
    GALGAS_bool var_canMutateProperties_10709 = var_attributeSet_10494.getter_hasKey (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 312)) COMMA_SOURCE_FILE ("declaration-func.galgas", 312)) ;
    GALGAS_bool var_safe_10768 = var_attributeSet_10494.getter_hasKey (function_safeAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 313)) COMMA_SOURCE_FILE ("declaration-func.galgas", 313)) ;
    GALGAS_bool var_canAccessProperties_10838 = GALGAS_bool (kIsNotEqual, enumerator_10445.current (HERE).getter_mMode (HERE).objectCompare (GALGAS_mode::constructor_userMode (SOURCE_FILE ("declaration-func.galgas", 314)))) ;
    GALGAS_routineTypedSignature var_signature_10981 ;
    {
    routine_routineSignature (ioArgument_ioContext.mProperty_mTypeMap, enumerator_10445.current (HERE).getter_mFunctionFormalArgumentList (HERE), var_signature_10981, inCompiler  COMMA_SOURCE_FILE ("declaration-func.galgas", 316)) ;
    }
    GALGAS_unifiedTypeMap_2D_proxy var_returnTypeProxy_11122 ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeOptionalProxy (ioArgument_ioContext.mProperty_mTypeMap, enumerator_10445.current (HERE).getter_mFunctionReturnTypeName (HERE), var_returnTypeProxy_11122 COMMA_SOURCE_FILE ("declaration-func.galgas", 318)) ;
    }
    GALGAS_lstring var_routineMangledName_11178 = function_routineMangledNameFromAST (GALGAS_string::makeEmptyString (), enumerator_10445.current (HERE).getter_mFunctionName (HERE), enumerator_10445.current (HERE).getter_mFunctionFormalArgumentList (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 320)) ;
    GALGAS_routineDescriptor var_descriptor_11343 = GALGAS_routineDescriptor::constructor_new (enumerator_10445.current (HERE).getter_mPublicFunction (HERE), var_exportedFunction_10635, GALGAS_routineKind::constructor_function (enumerator_10445.current (HERE).getter_mMode (HERE)  COMMA_SOURCE_FILE ("declaration-func.galgas", 329)), var_signature_10981, var_returnTypeProxy_11122, var_canAccessProperties_10838, var_canMutateProperties_10709, var_safe_10768  COMMA_SOURCE_FILE ("declaration-func.galgas", 326)) ;
    {
    ioArgument_ioPropertyMap.setter_insertKey (var_routineMangledName_11178, enumerator_10445.current (HERE).getter_mPublicFunction (HERE), GALGAS_propertyAccessKind::constructor_nonVirtualMethod (var_descriptor_11343  COMMA_SOURCE_FILE ("declaration-func.galgas", 337)), inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 337)) ;
    }
    enumerator_10445.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Class for element of '@requiredProcedureDeclarationListAST' list                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_requiredProcedureDeclarationListAST : public cCollectionElement {
  public : GALGAS_requiredProcedureDeclarationListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_requiredProcedureDeclarationListAST (const GALGAS_lstring & in_mName,
                                                                   const GALGAS_mode & in_mExecutionMode,
                                                                   const GALGAS_bool & in_mIsExported,
                                                                   const GALGAS_bool & in_mIsSafe,
                                                                   const GALGAS_routineFormalArgumentListAST & in_mFormalArgumentList,
                                                                   const GALGAS_location & in_mEndOfProcLocation
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

cCollectionElement_requiredProcedureDeclarationListAST::cCollectionElement_requiredProcedureDeclarationListAST (const GALGAS_lstring & in_mName,
                                                                                                                const GALGAS_mode & in_mExecutionMode,
                                                                                                                const GALGAS_bool & in_mIsExported,
                                                                                                                const GALGAS_bool & in_mIsSafe,
                                                                                                                const GALGAS_routineFormalArgumentListAST & in_mFormalArgumentList,
                                                                                                                const GALGAS_location & in_mEndOfProcLocation
                                                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mName, in_mExecutionMode, in_mIsExported, in_mIsSafe, in_mFormalArgumentList, in_mEndOfProcLocation) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_requiredProcedureDeclarationListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_requiredProcedureDeclarationListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_requiredProcedureDeclarationListAST (mObject.mProperty_mName, mObject.mProperty_mExecutionMode, mObject.mProperty_mIsExported, mObject.mProperty_mIsSafe, mObject.mProperty_mFormalArgumentList, mObject.mProperty_mEndOfProcLocation COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_requiredProcedureDeclarationListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mName" ":" ;
  mObject.mProperty_mName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mExecutionMode" ":" ;
  mObject.mProperty_mExecutionMode.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIsExported" ":" ;
  mObject.mProperty_mIsExported.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIsSafe" ":" ;
  mObject.mProperty_mIsSafe.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFormalArgumentList" ":" ;
  mObject.mProperty_mFormalArgumentList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEndOfProcLocation" ":" ;
  mObject.mProperty_mEndOfProcLocation.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_requiredProcedureDeclarationListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_requiredProcedureDeclarationListAST * operand = (cCollectionElement_requiredProcedureDeclarationListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_requiredProcedureDeclarationListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_requiredProcedureDeclarationListAST::GALGAS_requiredProcedureDeclarationListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_requiredProcedureDeclarationListAST::GALGAS_requiredProcedureDeclarationListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_requiredProcedureDeclarationListAST GALGAS_requiredProcedureDeclarationListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_requiredProcedureDeclarationListAST  (capCollectionElementArray ()) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_requiredProcedureDeclarationListAST GALGAS_requiredProcedureDeclarationListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                                  const GALGAS_mode & inOperand1,
                                                                                                                  const GALGAS_bool & inOperand2,
                                                                                                                  const GALGAS_bool & inOperand3,
                                                                                                                  const GALGAS_routineFormalArgumentListAST & inOperand4,
                                                                                                                  const GALGAS_location & inOperand5
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_requiredProcedureDeclarationListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid ()) {
    result = GALGAS_requiredProcedureDeclarationListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_requiredProcedureDeclarationListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_requiredProcedureDeclarationListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                            const GALGAS_lstring & in_mName,
                                                                            const GALGAS_mode & in_mExecutionMode,
                                                                            const GALGAS_bool & in_mIsExported,
                                                                            const GALGAS_bool & in_mIsSafe,
                                                                            const GALGAS_routineFormalArgumentListAST & in_mFormalArgumentList,
                                                                            const GALGAS_location & in_mEndOfProcLocation
                                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_requiredProcedureDeclarationListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_requiredProcedureDeclarationListAST (in_mName,
                                                                         in_mExecutionMode,
                                                                         in_mIsExported,
                                                                         in_mIsSafe,
                                                                         in_mFormalArgumentList,
                                                                         in_mEndOfProcLocation COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_requiredProcedureDeclarationListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                                      const GALGAS_mode & inOperand1,
                                                                      const GALGAS_bool & inOperand2,
                                                                      const GALGAS_bool & inOperand3,
                                                                      const GALGAS_routineFormalArgumentListAST & inOperand4,
                                                                      const GALGAS_location & inOperand5
                                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_requiredProcedureDeclarationListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_requiredProcedureDeclarationListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                       const GALGAS_mode inOperand1,
                                                                       const GALGAS_bool inOperand2,
                                                                       const GALGAS_bool inOperand3,
                                                                       const GALGAS_routineFormalArgumentListAST inOperand4,
                                                                       const GALGAS_location inOperand5,
                                                                       const GALGAS_uint inInsertionIndex,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_requiredProcedureDeclarationListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_requiredProcedureDeclarationListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                       GALGAS_mode & outOperand1,
                                                                       GALGAS_bool & outOperand2,
                                                                       GALGAS_bool & outOperand3,
                                                                       GALGAS_routineFormalArgumentListAST & outOperand4,
                                                                       GALGAS_location & outOperand5,
                                                                       const GALGAS_uint inRemoveIndex,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_requiredProcedureDeclarationListAST * p = (cCollectionElement_requiredProcedureDeclarationListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      outOperand4.drop () ;
      outOperand5.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_requiredProcedureDeclarationListAST) ;
      outOperand0 = p->mObject.mProperty_mName ;
      outOperand1 = p->mObject.mProperty_mExecutionMode ;
      outOperand2 = p->mObject.mProperty_mIsExported ;
      outOperand3 = p->mObject.mProperty_mIsSafe ;
      outOperand4 = p->mObject.mProperty_mFormalArgumentList ;
      outOperand5 = p->mObject.mProperty_mEndOfProcLocation ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_requiredProcedureDeclarationListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                                  GALGAS_mode & outOperand1,
                                                                  GALGAS_bool & outOperand2,
                                                                  GALGAS_bool & outOperand3,
                                                                  GALGAS_routineFormalArgumentListAST & outOperand4,
                                                                  GALGAS_location & outOperand5,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_requiredProcedureDeclarationListAST * p = (cCollectionElement_requiredProcedureDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_requiredProcedureDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mName ;
    outOperand1 = p->mObject.mProperty_mExecutionMode ;
    outOperand2 = p->mObject.mProperty_mIsExported ;
    outOperand3 = p->mObject.mProperty_mIsSafe ;
    outOperand4 = p->mObject.mProperty_mFormalArgumentList ;
    outOperand5 = p->mObject.mProperty_mEndOfProcLocation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_requiredProcedureDeclarationListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                                 GALGAS_mode & outOperand1,
                                                                 GALGAS_bool & outOperand2,
                                                                 GALGAS_bool & outOperand3,
                                                                 GALGAS_routineFormalArgumentListAST & outOperand4,
                                                                 GALGAS_location & outOperand5,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_requiredProcedureDeclarationListAST * p = (cCollectionElement_requiredProcedureDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_requiredProcedureDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mName ;
    outOperand1 = p->mObject.mProperty_mExecutionMode ;
    outOperand2 = p->mObject.mProperty_mIsExported ;
    outOperand3 = p->mObject.mProperty_mIsSafe ;
    outOperand4 = p->mObject.mProperty_mFormalArgumentList ;
    outOperand5 = p->mObject.mProperty_mEndOfProcLocation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_requiredProcedureDeclarationListAST::method_first (GALGAS_lstring & outOperand0,
                                                               GALGAS_mode & outOperand1,
                                                               GALGAS_bool & outOperand2,
                                                               GALGAS_bool & outOperand3,
                                                               GALGAS_routineFormalArgumentListAST & outOperand4,
                                                               GALGAS_location & outOperand5,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_requiredProcedureDeclarationListAST * p = (cCollectionElement_requiredProcedureDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_requiredProcedureDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mName ;
    outOperand1 = p->mObject.mProperty_mExecutionMode ;
    outOperand2 = p->mObject.mProperty_mIsExported ;
    outOperand3 = p->mObject.mProperty_mIsSafe ;
    outOperand4 = p->mObject.mProperty_mFormalArgumentList ;
    outOperand5 = p->mObject.mProperty_mEndOfProcLocation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_requiredProcedureDeclarationListAST::method_last (GALGAS_lstring & outOperand0,
                                                              GALGAS_mode & outOperand1,
                                                              GALGAS_bool & outOperand2,
                                                              GALGAS_bool & outOperand3,
                                                              GALGAS_routineFormalArgumentListAST & outOperand4,
                                                              GALGAS_location & outOperand5,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_requiredProcedureDeclarationListAST * p = (cCollectionElement_requiredProcedureDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_requiredProcedureDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mName ;
    outOperand1 = p->mObject.mProperty_mExecutionMode ;
    outOperand2 = p->mObject.mProperty_mIsExported ;
    outOperand3 = p->mObject.mProperty_mIsSafe ;
    outOperand4 = p->mObject.mProperty_mFormalArgumentList ;
    outOperand5 = p->mObject.mProperty_mEndOfProcLocation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_requiredProcedureDeclarationListAST GALGAS_requiredProcedureDeclarationListAST::add_operation (const GALGAS_requiredProcedureDeclarationListAST & inOperand,
                                                                                                      C_Compiler * /* inCompiler */
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_requiredProcedureDeclarationListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_requiredProcedureDeclarationListAST GALGAS_requiredProcedureDeclarationListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_requiredProcedureDeclarationListAST result = GALGAS_requiredProcedureDeclarationListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_requiredProcedureDeclarationListAST GALGAS_requiredProcedureDeclarationListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_requiredProcedureDeclarationListAST result = GALGAS_requiredProcedureDeclarationListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_requiredProcedureDeclarationListAST GALGAS_requiredProcedureDeclarationListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_requiredProcedureDeclarationListAST result = GALGAS_requiredProcedureDeclarationListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_requiredProcedureDeclarationListAST::plusAssign_operation (const GALGAS_requiredProcedureDeclarationListAST inOperand,
                                                                       C_Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_requiredProcedureDeclarationListAST::getter_mNameAtIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_requiredProcedureDeclarationListAST * p = (cCollectionElement_requiredProcedureDeclarationListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_requiredProcedureDeclarationListAST) ;
    result = p->mObject.mProperty_mName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mode GALGAS_requiredProcedureDeclarationListAST::getter_mExecutionModeAtIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_requiredProcedureDeclarationListAST * p = (cCollectionElement_requiredProcedureDeclarationListAST *) attributes.ptr () ;
  GALGAS_mode result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_requiredProcedureDeclarationListAST) ;
    result = p->mObject.mProperty_mExecutionMode ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_requiredProcedureDeclarationListAST::getter_mIsExportedAtIndex (const GALGAS_uint & inIndex,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_requiredProcedureDeclarationListAST * p = (cCollectionElement_requiredProcedureDeclarationListAST *) attributes.ptr () ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_requiredProcedureDeclarationListAST) ;
    result = p->mObject.mProperty_mIsExported ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_requiredProcedureDeclarationListAST::getter_mIsSafeAtIndex (const GALGAS_uint & inIndex,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_requiredProcedureDeclarationListAST * p = (cCollectionElement_requiredProcedureDeclarationListAST *) attributes.ptr () ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_requiredProcedureDeclarationListAST) ;
    result = p->mObject.mProperty_mIsSafe ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineFormalArgumentListAST GALGAS_requiredProcedureDeclarationListAST::getter_mFormalArgumentListAtIndex (const GALGAS_uint & inIndex,
                                                                                                                   C_Compiler * inCompiler
                                                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_requiredProcedureDeclarationListAST * p = (cCollectionElement_requiredProcedureDeclarationListAST *) attributes.ptr () ;
  GALGAS_routineFormalArgumentListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_requiredProcedureDeclarationListAST) ;
    result = p->mObject.mProperty_mFormalArgumentList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_requiredProcedureDeclarationListAST::getter_mEndOfProcLocationAtIndex (const GALGAS_uint & inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_requiredProcedureDeclarationListAST * p = (cCollectionElement_requiredProcedureDeclarationListAST *) attributes.ptr () ;
  GALGAS_location result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_requiredProcedureDeclarationListAST) ;
    result = p->mObject.mProperty_mEndOfProcLocation ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_requiredProcedureDeclarationListAST::cEnumerator_requiredProcedureDeclarationListAST (const GALGAS_requiredProcedureDeclarationListAST & inEnumeratedObject,
                                                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_requiredProcedureDeclarationListAST_2D_element cEnumerator_requiredProcedureDeclarationListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_requiredProcedureDeclarationListAST * p = (const cCollectionElement_requiredProcedureDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_requiredProcedureDeclarationListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_requiredProcedureDeclarationListAST::current_mName (LOCATION_ARGS) const {
  const cCollectionElement_requiredProcedureDeclarationListAST * p = (const cCollectionElement_requiredProcedureDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_requiredProcedureDeclarationListAST) ;
  return p->mObject.mProperty_mName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mode cEnumerator_requiredProcedureDeclarationListAST::current_mExecutionMode (LOCATION_ARGS) const {
  const cCollectionElement_requiredProcedureDeclarationListAST * p = (const cCollectionElement_requiredProcedureDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_requiredProcedureDeclarationListAST) ;
  return p->mObject.mProperty_mExecutionMode ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_requiredProcedureDeclarationListAST::current_mIsExported (LOCATION_ARGS) const {
  const cCollectionElement_requiredProcedureDeclarationListAST * p = (const cCollectionElement_requiredProcedureDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_requiredProcedureDeclarationListAST) ;
  return p->mObject.mProperty_mIsExported ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_requiredProcedureDeclarationListAST::current_mIsSafe (LOCATION_ARGS) const {
  const cCollectionElement_requiredProcedureDeclarationListAST * p = (const cCollectionElement_requiredProcedureDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_requiredProcedureDeclarationListAST) ;
  return p->mObject.mProperty_mIsSafe ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineFormalArgumentListAST cEnumerator_requiredProcedureDeclarationListAST::current_mFormalArgumentList (LOCATION_ARGS) const {
  const cCollectionElement_requiredProcedureDeclarationListAST * p = (const cCollectionElement_requiredProcedureDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_requiredProcedureDeclarationListAST) ;
  return p->mObject.mProperty_mFormalArgumentList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cEnumerator_requiredProcedureDeclarationListAST::current_mEndOfProcLocation (LOCATION_ARGS) const {
  const cCollectionElement_requiredProcedureDeclarationListAST * p = (const cCollectionElement_requiredProcedureDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_requiredProcedureDeclarationListAST) ;
  return p->mObject.mProperty_mEndOfProcLocation ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @requiredProcedureDeclarationListAST type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_requiredProcedureDeclarationListAST ("requiredProcedureDeclarationListAST",
                                                            NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_requiredProcedureDeclarationListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_requiredProcedureDeclarationListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_requiredProcedureDeclarationListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_requiredProcedureDeclarationListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_requiredProcedureDeclarationListAST GALGAS_requiredProcedureDeclarationListAST::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_requiredProcedureDeclarationListAST result ;
  const GALGAS_requiredProcedureDeclarationListAST * p = (const GALGAS_requiredProcedureDeclarationListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_requiredProcedureDeclarationListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("requiredProcedureDeclarationListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Class for element of '@externProcedureDeclarationListAST' list                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_externProcedureDeclarationListAST : public cCollectionElement {
  public : GALGAS_externProcedureDeclarationListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_externProcedureDeclarationListAST (const GALGAS_lstring & in_mExternProcedureName,
                                                                 const GALGAS_mode & in_mMode,
                                                                 const GALGAS_lstringlist & in_mAttributeList,
                                                                 const GALGAS_routineFormalArgumentListAST & in_mProcFormalArgumentList,
                                                                 const GALGAS_lstring & in_mReturnTypeName,
                                                                 const GALGAS_lstring & in_mRoutineNameForGeneration,
                                                                 const GALGAS_location & in_mEndOfProcLocation
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

cCollectionElement_externProcedureDeclarationListAST::cCollectionElement_externProcedureDeclarationListAST (const GALGAS_lstring & in_mExternProcedureName,
                                                                                                            const GALGAS_mode & in_mMode,
                                                                                                            const GALGAS_lstringlist & in_mAttributeList,
                                                                                                            const GALGAS_routineFormalArgumentListAST & in_mProcFormalArgumentList,
                                                                                                            const GALGAS_lstring & in_mReturnTypeName,
                                                                                                            const GALGAS_lstring & in_mRoutineNameForGeneration,
                                                                                                            const GALGAS_location & in_mEndOfProcLocation
                                                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mExternProcedureName, in_mMode, in_mAttributeList, in_mProcFormalArgumentList, in_mReturnTypeName, in_mRoutineNameForGeneration, in_mEndOfProcLocation) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_externProcedureDeclarationListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_externProcedureDeclarationListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_externProcedureDeclarationListAST (mObject.mProperty_mExternProcedureName, mObject.mProperty_mMode, mObject.mProperty_mAttributeList, mObject.mProperty_mProcFormalArgumentList, mObject.mProperty_mReturnTypeName, mObject.mProperty_mRoutineNameForGeneration, mObject.mProperty_mEndOfProcLocation COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_externProcedureDeclarationListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mExternProcedureName" ":" ;
  mObject.mProperty_mExternProcedureName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mMode" ":" ;
  mObject.mProperty_mMode.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAttributeList" ":" ;
  mObject.mProperty_mAttributeList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mProcFormalArgumentList" ":" ;
  mObject.mProperty_mProcFormalArgumentList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mReturnTypeName" ":" ;
  mObject.mProperty_mReturnTypeName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mRoutineNameForGeneration" ":" ;
  mObject.mProperty_mRoutineNameForGeneration.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEndOfProcLocation" ":" ;
  mObject.mProperty_mEndOfProcLocation.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_externProcedureDeclarationListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_externProcedureDeclarationListAST * operand = (cCollectionElement_externProcedureDeclarationListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_externProcedureDeclarationListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externProcedureDeclarationListAST::GALGAS_externProcedureDeclarationListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externProcedureDeclarationListAST::GALGAS_externProcedureDeclarationListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externProcedureDeclarationListAST GALGAS_externProcedureDeclarationListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_externProcedureDeclarationListAST  (capCollectionElementArray ()) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externProcedureDeclarationListAST GALGAS_externProcedureDeclarationListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                              const GALGAS_mode & inOperand1,
                                                                                                              const GALGAS_lstringlist & inOperand2,
                                                                                                              const GALGAS_routineFormalArgumentListAST & inOperand3,
                                                                                                              const GALGAS_lstring & inOperand4,
                                                                                                              const GALGAS_lstring & inOperand5,
                                                                                                              const GALGAS_location & inOperand6
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_externProcedureDeclarationListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid ()) {
    result = GALGAS_externProcedureDeclarationListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_externProcedureDeclarationListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externProcedureDeclarationListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                          const GALGAS_lstring & in_mExternProcedureName,
                                                                          const GALGAS_mode & in_mMode,
                                                                          const GALGAS_lstringlist & in_mAttributeList,
                                                                          const GALGAS_routineFormalArgumentListAST & in_mProcFormalArgumentList,
                                                                          const GALGAS_lstring & in_mReturnTypeName,
                                                                          const GALGAS_lstring & in_mRoutineNameForGeneration,
                                                                          const GALGAS_location & in_mEndOfProcLocation
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_externProcedureDeclarationListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_externProcedureDeclarationListAST (in_mExternProcedureName,
                                                                       in_mMode,
                                                                       in_mAttributeList,
                                                                       in_mProcFormalArgumentList,
                                                                       in_mReturnTypeName,
                                                                       in_mRoutineNameForGeneration,
                                                                       in_mEndOfProcLocation COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externProcedureDeclarationListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                                    const GALGAS_mode & inOperand1,
                                                                    const GALGAS_lstringlist & inOperand2,
                                                                    const GALGAS_routineFormalArgumentListAST & inOperand3,
                                                                    const GALGAS_lstring & inOperand4,
                                                                    const GALGAS_lstring & inOperand5,
                                                                    const GALGAS_location & inOperand6
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_externProcedureDeclarationListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externProcedureDeclarationListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                     const GALGAS_mode inOperand1,
                                                                     const GALGAS_lstringlist inOperand2,
                                                                     const GALGAS_routineFormalArgumentListAST inOperand3,
                                                                     const GALGAS_lstring inOperand4,
                                                                     const GALGAS_lstring inOperand5,
                                                                     const GALGAS_location inOperand6,
                                                                     const GALGAS_uint inInsertionIndex,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_externProcedureDeclarationListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externProcedureDeclarationListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                     GALGAS_mode & outOperand1,
                                                                     GALGAS_lstringlist & outOperand2,
                                                                     GALGAS_routineFormalArgumentListAST & outOperand3,
                                                                     GALGAS_lstring & outOperand4,
                                                                     GALGAS_lstring & outOperand5,
                                                                     GALGAS_location & outOperand6,
                                                                     const GALGAS_uint inRemoveIndex,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_externProcedureDeclarationListAST * p = (cCollectionElement_externProcedureDeclarationListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      outOperand4.drop () ;
      outOperand5.drop () ;
      outOperand6.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_externProcedureDeclarationListAST) ;
      outOperand0 = p->mObject.mProperty_mExternProcedureName ;
      outOperand1 = p->mObject.mProperty_mMode ;
      outOperand2 = p->mObject.mProperty_mAttributeList ;
      outOperand3 = p->mObject.mProperty_mProcFormalArgumentList ;
      outOperand4 = p->mObject.mProperty_mReturnTypeName ;
      outOperand5 = p->mObject.mProperty_mRoutineNameForGeneration ;
      outOperand6 = p->mObject.mProperty_mEndOfProcLocation ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externProcedureDeclarationListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                                GALGAS_mode & outOperand1,
                                                                GALGAS_lstringlist & outOperand2,
                                                                GALGAS_routineFormalArgumentListAST & outOperand3,
                                                                GALGAS_lstring & outOperand4,
                                                                GALGAS_lstring & outOperand5,
                                                                GALGAS_location & outOperand6,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_externProcedureDeclarationListAST * p = (cCollectionElement_externProcedureDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_externProcedureDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mExternProcedureName ;
    outOperand1 = p->mObject.mProperty_mMode ;
    outOperand2 = p->mObject.mProperty_mAttributeList ;
    outOperand3 = p->mObject.mProperty_mProcFormalArgumentList ;
    outOperand4 = p->mObject.mProperty_mReturnTypeName ;
    outOperand5 = p->mObject.mProperty_mRoutineNameForGeneration ;
    outOperand6 = p->mObject.mProperty_mEndOfProcLocation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externProcedureDeclarationListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                               GALGAS_mode & outOperand1,
                                                               GALGAS_lstringlist & outOperand2,
                                                               GALGAS_routineFormalArgumentListAST & outOperand3,
                                                               GALGAS_lstring & outOperand4,
                                                               GALGAS_lstring & outOperand5,
                                                               GALGAS_location & outOperand6,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_externProcedureDeclarationListAST * p = (cCollectionElement_externProcedureDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_externProcedureDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mExternProcedureName ;
    outOperand1 = p->mObject.mProperty_mMode ;
    outOperand2 = p->mObject.mProperty_mAttributeList ;
    outOperand3 = p->mObject.mProperty_mProcFormalArgumentList ;
    outOperand4 = p->mObject.mProperty_mReturnTypeName ;
    outOperand5 = p->mObject.mProperty_mRoutineNameForGeneration ;
    outOperand6 = p->mObject.mProperty_mEndOfProcLocation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externProcedureDeclarationListAST::method_first (GALGAS_lstring & outOperand0,
                                                             GALGAS_mode & outOperand1,
                                                             GALGAS_lstringlist & outOperand2,
                                                             GALGAS_routineFormalArgumentListAST & outOperand3,
                                                             GALGAS_lstring & outOperand4,
                                                             GALGAS_lstring & outOperand5,
                                                             GALGAS_location & outOperand6,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_externProcedureDeclarationListAST * p = (cCollectionElement_externProcedureDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_externProcedureDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mExternProcedureName ;
    outOperand1 = p->mObject.mProperty_mMode ;
    outOperand2 = p->mObject.mProperty_mAttributeList ;
    outOperand3 = p->mObject.mProperty_mProcFormalArgumentList ;
    outOperand4 = p->mObject.mProperty_mReturnTypeName ;
    outOperand5 = p->mObject.mProperty_mRoutineNameForGeneration ;
    outOperand6 = p->mObject.mProperty_mEndOfProcLocation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externProcedureDeclarationListAST::method_last (GALGAS_lstring & outOperand0,
                                                            GALGAS_mode & outOperand1,
                                                            GALGAS_lstringlist & outOperand2,
                                                            GALGAS_routineFormalArgumentListAST & outOperand3,
                                                            GALGAS_lstring & outOperand4,
                                                            GALGAS_lstring & outOperand5,
                                                            GALGAS_location & outOperand6,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_externProcedureDeclarationListAST * p = (cCollectionElement_externProcedureDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_externProcedureDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mExternProcedureName ;
    outOperand1 = p->mObject.mProperty_mMode ;
    outOperand2 = p->mObject.mProperty_mAttributeList ;
    outOperand3 = p->mObject.mProperty_mProcFormalArgumentList ;
    outOperand4 = p->mObject.mProperty_mReturnTypeName ;
    outOperand5 = p->mObject.mProperty_mRoutineNameForGeneration ;
    outOperand6 = p->mObject.mProperty_mEndOfProcLocation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externProcedureDeclarationListAST GALGAS_externProcedureDeclarationListAST::add_operation (const GALGAS_externProcedureDeclarationListAST & inOperand,
                                                                                                  C_Compiler * /* inCompiler */
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_externProcedureDeclarationListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externProcedureDeclarationListAST GALGAS_externProcedureDeclarationListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_externProcedureDeclarationListAST result = GALGAS_externProcedureDeclarationListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externProcedureDeclarationListAST GALGAS_externProcedureDeclarationListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_externProcedureDeclarationListAST result = GALGAS_externProcedureDeclarationListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externProcedureDeclarationListAST GALGAS_externProcedureDeclarationListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_externProcedureDeclarationListAST result = GALGAS_externProcedureDeclarationListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externProcedureDeclarationListAST::plusAssign_operation (const GALGAS_externProcedureDeclarationListAST inOperand,
                                                                     C_Compiler * /* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_externProcedureDeclarationListAST::getter_mExternProcedureNameAtIndex (const GALGAS_uint & inIndex,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_externProcedureDeclarationListAST * p = (cCollectionElement_externProcedureDeclarationListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_externProcedureDeclarationListAST) ;
    result = p->mObject.mProperty_mExternProcedureName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mode GALGAS_externProcedureDeclarationListAST::getter_mModeAtIndex (const GALGAS_uint & inIndex,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_externProcedureDeclarationListAST * p = (cCollectionElement_externProcedureDeclarationListAST *) attributes.ptr () ;
  GALGAS_mode result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_externProcedureDeclarationListAST) ;
    result = p->mObject.mProperty_mMode ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_externProcedureDeclarationListAST::getter_mAttributeListAtIndex (const GALGAS_uint & inIndex,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_externProcedureDeclarationListAST * p = (cCollectionElement_externProcedureDeclarationListAST *) attributes.ptr () ;
  GALGAS_lstringlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_externProcedureDeclarationListAST) ;
    result = p->mObject.mProperty_mAttributeList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineFormalArgumentListAST GALGAS_externProcedureDeclarationListAST::getter_mProcFormalArgumentListAtIndex (const GALGAS_uint & inIndex,
                                                                                                                     C_Compiler * inCompiler
                                                                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_externProcedureDeclarationListAST * p = (cCollectionElement_externProcedureDeclarationListAST *) attributes.ptr () ;
  GALGAS_routineFormalArgumentListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_externProcedureDeclarationListAST) ;
    result = p->mObject.mProperty_mProcFormalArgumentList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_externProcedureDeclarationListAST::getter_mReturnTypeNameAtIndex (const GALGAS_uint & inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_externProcedureDeclarationListAST * p = (cCollectionElement_externProcedureDeclarationListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_externProcedureDeclarationListAST) ;
    result = p->mObject.mProperty_mReturnTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_externProcedureDeclarationListAST::getter_mRoutineNameForGenerationAtIndex (const GALGAS_uint & inIndex,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_externProcedureDeclarationListAST * p = (cCollectionElement_externProcedureDeclarationListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_externProcedureDeclarationListAST) ;
    result = p->mObject.mProperty_mRoutineNameForGeneration ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_externProcedureDeclarationListAST::getter_mEndOfProcLocationAtIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_externProcedureDeclarationListAST * p = (cCollectionElement_externProcedureDeclarationListAST *) attributes.ptr () ;
  GALGAS_location result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_externProcedureDeclarationListAST) ;
    result = p->mObject.mProperty_mEndOfProcLocation ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_externProcedureDeclarationListAST::cEnumerator_externProcedureDeclarationListAST (const GALGAS_externProcedureDeclarationListAST & inEnumeratedObject,
                                                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externProcedureDeclarationListAST_2D_element cEnumerator_externProcedureDeclarationListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_externProcedureDeclarationListAST * p = (const cCollectionElement_externProcedureDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externProcedureDeclarationListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_externProcedureDeclarationListAST::current_mExternProcedureName (LOCATION_ARGS) const {
  const cCollectionElement_externProcedureDeclarationListAST * p = (const cCollectionElement_externProcedureDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externProcedureDeclarationListAST) ;
  return p->mObject.mProperty_mExternProcedureName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mode cEnumerator_externProcedureDeclarationListAST::current_mMode (LOCATION_ARGS) const {
  const cCollectionElement_externProcedureDeclarationListAST * p = (const cCollectionElement_externProcedureDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externProcedureDeclarationListAST) ;
  return p->mObject.mProperty_mMode ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist cEnumerator_externProcedureDeclarationListAST::current_mAttributeList (LOCATION_ARGS) const {
  const cCollectionElement_externProcedureDeclarationListAST * p = (const cCollectionElement_externProcedureDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externProcedureDeclarationListAST) ;
  return p->mObject.mProperty_mAttributeList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineFormalArgumentListAST cEnumerator_externProcedureDeclarationListAST::current_mProcFormalArgumentList (LOCATION_ARGS) const {
  const cCollectionElement_externProcedureDeclarationListAST * p = (const cCollectionElement_externProcedureDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externProcedureDeclarationListAST) ;
  return p->mObject.mProperty_mProcFormalArgumentList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_externProcedureDeclarationListAST::current_mReturnTypeName (LOCATION_ARGS) const {
  const cCollectionElement_externProcedureDeclarationListAST * p = (const cCollectionElement_externProcedureDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externProcedureDeclarationListAST) ;
  return p->mObject.mProperty_mReturnTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_externProcedureDeclarationListAST::current_mRoutineNameForGeneration (LOCATION_ARGS) const {
  const cCollectionElement_externProcedureDeclarationListAST * p = (const cCollectionElement_externProcedureDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externProcedureDeclarationListAST) ;
  return p->mObject.mProperty_mRoutineNameForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cEnumerator_externProcedureDeclarationListAST::current_mEndOfProcLocation (LOCATION_ARGS) const {
  const cCollectionElement_externProcedureDeclarationListAST * p = (const cCollectionElement_externProcedureDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externProcedureDeclarationListAST) ;
  return p->mObject.mProperty_mEndOfProcLocation ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @externProcedureDeclarationListAST type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_externProcedureDeclarationListAST ("externProcedureDeclarationListAST",
                                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_externProcedureDeclarationListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externProcedureDeclarationListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_externProcedureDeclarationListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_externProcedureDeclarationListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externProcedureDeclarationListAST GALGAS_externProcedureDeclarationListAST::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_externProcedureDeclarationListAST result ;
  const GALGAS_externProcedureDeclarationListAST * p = (const GALGAS_externProcedureDeclarationListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_externProcedureDeclarationListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externProcedureDeclarationListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
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
  cEnumerator_externProcedureDeclarationListAST enumerator_2298 (temp_0, kENUMERATION_UP) ;
  while (enumerator_2298.hasCurrentObject ()) {
    cEnumerator_routineFormalArgumentListAST enumerator_2367 (enumerator_2298.current_mProcFormalArgumentList (HERE), kENUMERATION_UP) ;
    while (enumerator_2367.hasCurrentObject ()) {
      GALGAS_lstring var_typeName_2389 = function_llvmTypeNameFromPLMname (enumerator_2367.current_mFormalArgumentTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 54)) ;
      {
      ioArgument_ioGraph.setter_noteNode (var_typeName_2389 COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 55)) ;
      }
      enumerator_2367.gotoNextObject () ;
    }
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, enumerator_2298.current_mReturnTypeName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_lstring var_typeName_2546 = function_llvmTypeNameFromPLMname (enumerator_2298.current_mReturnTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 58)) ;
      {
      ioArgument_ioGraph.setter_noteNode (var_typeName_2546 COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 59)) ;
      }
    }
    enumerator_2298.gotoNextObject () ;
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
  cEnumerator_externProcedureDeclarationListAST enumerator_3147 (temp_0, kENUMERATION_UP) ;
  while (enumerator_3147.hasCurrentObject ()) {
    extensionMethod_enterExternProcInContext (enumerator_3147.current (HERE), ioArgument_ioContext, inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 72)) ;
    enumerator_3147.gotoNextObject () ;
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
  cEnumerator_externProcedureDeclarationListAST enumerator_4906 (temp_0, kENUMERATION_UP) ;
  while (enumerator_4906.hasCurrentObject ()) {
    extensionMethod_externProcedureSemanticAnalysis (enumerator_4906.current (HERE), constinArgument_inContext, ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 116)) ;
    enumerator_4906.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*

cMapElement_externProcedureMapIR::cMapElement_externProcedureMapIR (const GALGAS_lstring & inKey,
                                                                    const GALGAS_routineFormalArgumentListIR & in_mFormalArgumentListForGeneration,
                                                                    const GALGAS_unifiedTypeMap_2D_proxy & in_mReturnType
                                                                    COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mFormalArgumentListForGeneration (in_mFormalArgumentListForGeneration),
mProperty_mReturnType (in_mReturnType) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_externProcedureMapIR::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mFormalArgumentListForGeneration.isValid () && mProperty_mReturnType.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_externProcedureMapIR::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_externProcedureMapIR (mProperty_lkey, mProperty_mFormalArgumentListForGeneration, mProperty_mReturnType COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_externProcedureMapIR::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFormalArgumentListForGeneration" ":" ;
  mProperty_mFormalArgumentListForGeneration.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mReturnType" ":" ;
  mProperty_mReturnType.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_externProcedureMapIR::compare (const cCollectionElement * inOperand) const {
  cMapElement_externProcedureMapIR * operand = (cMapElement_externProcedureMapIR *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mFormalArgumentListForGeneration.objectCompare (operand->mProperty_mFormalArgumentListForGeneration) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mReturnType.objectCompare (operand->mProperty_mReturnType) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externProcedureMapIR::GALGAS_externProcedureMapIR (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externProcedureMapIR::GALGAS_externProcedureMapIR (const GALGAS_externProcedureMapIR & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externProcedureMapIR & GALGAS_externProcedureMapIR::operator = (const GALGAS_externProcedureMapIR & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externProcedureMapIR GALGAS_externProcedureMapIR::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_externProcedureMapIR result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externProcedureMapIR GALGAS_externProcedureMapIR::constructor_mapWithMapToOverride (const GALGAS_externProcedureMapIR & inMapToOverride
                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_externProcedureMapIR result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externProcedureMapIR GALGAS_externProcedureMapIR::getter_overriddenMap (C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  GALGAS_externProcedureMapIR result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externProcedureMapIR::addAssign_operation (const GALGAS_lstring & inKey,
                                                       const GALGAS_routineFormalArgumentListIR & inArgument0,
                                                       const GALGAS_unifiedTypeMap_2D_proxy & inArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  cMapElement_externProcedureMapIR * p = NULL ;
  macroMyNew (p, cMapElement_externProcedureMapIR (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@externProcedureMapIR insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externProcedureMapIR::setter_insertKey (GALGAS_lstring inKey,
                                                    GALGAS_routineFormalArgumentListIR inArgument0,
                                                    GALGAS_unifiedTypeMap_2D_proxy inArgument1,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  cMapElement_externProcedureMapIR * p = NULL ;
  macroMyNew (p, cMapElement_externProcedureMapIR (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "extern procedure %K is already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineFormalArgumentListIR GALGAS_externProcedureMapIR::getter_mFormalArgumentListForGenerationForKey (const GALGAS_string & inKey,
                                                                                                               C_Compiler * inCompiler
                                                                                                               COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_externProcedureMapIR * p = (const cMapElement_externProcedureMapIR *) attributes ;
  GALGAS_routineFormalArgumentListIR result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_externProcedureMapIR) ;
    result = p->mProperty_mFormalArgumentListForGeneration ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_externProcedureMapIR::getter_mReturnTypeForKey (const GALGAS_string & inKey,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_externProcedureMapIR * p = (const cMapElement_externProcedureMapIR *) attributes ;
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_externProcedureMapIR) ;
    result = p->mProperty_mReturnType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externProcedureMapIR::setter_setMFormalArgumentListForGenerationForKey (GALGAS_routineFormalArgumentListIR inAttributeValue,
                                                                                    GALGAS_string inKey,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_externProcedureMapIR * p = (cMapElement_externProcedureMapIR *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_externProcedureMapIR) ;
    p->mProperty_mFormalArgumentListForGeneration = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externProcedureMapIR::setter_setMReturnTypeForKey (GALGAS_unifiedTypeMap_2D_proxy inAttributeValue,
                                                               GALGAS_string inKey,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_externProcedureMapIR * p = (cMapElement_externProcedureMapIR *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_externProcedureMapIR) ;
    p->mProperty_mReturnType = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_externProcedureMapIR * GALGAS_externProcedureMapIR::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                   const GALGAS_string & inKey
                                                                                                   COMMA_LOCATION_ARGS) {
  cMapElement_externProcedureMapIR * result = (cMapElement_externProcedureMapIR *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_externProcedureMapIR) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_externProcedureMapIR::cEnumerator_externProcedureMapIR (const GALGAS_externProcedureMapIR & inEnumeratedObject,
                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externProcedureMapIR_2D_element cEnumerator_externProcedureMapIR::current (LOCATION_ARGS) const {
  const cMapElement_externProcedureMapIR * p = (const cMapElement_externProcedureMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_externProcedureMapIR) ;
  return GALGAS_externProcedureMapIR_2D_element (p->mProperty_lkey, p->mProperty_mFormalArgumentListForGeneration, p->mProperty_mReturnType) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_externProcedureMapIR::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineFormalArgumentListIR cEnumerator_externProcedureMapIR::current_mFormalArgumentListForGeneration (LOCATION_ARGS) const {
  const cMapElement_externProcedureMapIR * p = (const cMapElement_externProcedureMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_externProcedureMapIR) ;
  return p->mProperty_mFormalArgumentListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cEnumerator_externProcedureMapIR::current_mReturnType (LOCATION_ARGS) const {
  const cMapElement_externProcedureMapIR * p = (const cMapElement_externProcedureMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_externProcedureMapIR) ;
  return p->mProperty_mReturnType ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @externProcedureMapIR type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_externProcedureMapIR ("externProcedureMapIR",
                                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_externProcedureMapIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externProcedureMapIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_externProcedureMapIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_externProcedureMapIR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externProcedureMapIR GALGAS_externProcedureMapIR::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_externProcedureMapIR result ;
  const GALGAS_externProcedureMapIR * p = (const GALGAS_externProcedureMapIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_externProcedureMapIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externProcedureMapIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
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
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("extern functions"), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 179)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 179)) ;
  const GALGAS_externProcedureMapIR temp_0 = inObject ;
  cEnumerator_externProcedureMapIR enumerator_7279 (temp_0, kENUMERATION_UP) ;
  while (enumerator_7279.hasCurrentObject ()) {
    extensionMethod_llvmPrototypeGeneration (enumerator_7279.current (HERE), ioArgument_ioLLVMcode, inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 181)) ;
    enumerator_7279.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 183)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Class for element of '@isrDeclarationListAST' list                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_isrDeclarationListAST : public cCollectionElement {
  public : GALGAS_isrDeclarationListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_isrDeclarationListAST (const GALGAS_lstring & in_mISRName,
                                                     const GALGAS_mode & in_mMode,
                                                     const GALGAS_lstring & in_mModuleName,
                                                     const GALGAS_instructionListAST & in_mISRInstructionList,
                                                     const GALGAS_location & in_mEndOfISRDeclaration
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

cCollectionElement_isrDeclarationListAST::cCollectionElement_isrDeclarationListAST (const GALGAS_lstring & in_mISRName,
                                                                                    const GALGAS_mode & in_mMode,
                                                                                    const GALGAS_lstring & in_mModuleName,
                                                                                    const GALGAS_instructionListAST & in_mISRInstructionList,
                                                                                    const GALGAS_location & in_mEndOfISRDeclaration
                                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mISRName, in_mMode, in_mModuleName, in_mISRInstructionList, in_mEndOfISRDeclaration) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_isrDeclarationListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_isrDeclarationListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_isrDeclarationListAST (mObject.mProperty_mISRName, mObject.mProperty_mMode, mObject.mProperty_mModuleName, mObject.mProperty_mISRInstructionList, mObject.mProperty_mEndOfISRDeclaration COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_isrDeclarationListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mISRName" ":" ;
  mObject.mProperty_mISRName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mMode" ":" ;
  mObject.mProperty_mMode.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mModuleName" ":" ;
  mObject.mProperty_mModuleName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mISRInstructionList" ":" ;
  mObject.mProperty_mISRInstructionList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEndOfISRDeclaration" ":" ;
  mObject.mProperty_mEndOfISRDeclaration.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_isrDeclarationListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_isrDeclarationListAST * operand = (cCollectionElement_isrDeclarationListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_isrDeclarationListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_isrDeclarationListAST::GALGAS_isrDeclarationListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_isrDeclarationListAST::GALGAS_isrDeclarationListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_isrDeclarationListAST GALGAS_isrDeclarationListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_isrDeclarationListAST  (capCollectionElementArray ()) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_isrDeclarationListAST GALGAS_isrDeclarationListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                      const GALGAS_mode & inOperand1,
                                                                                      const GALGAS_lstring & inOperand2,
                                                                                      const GALGAS_instructionListAST & inOperand3,
                                                                                      const GALGAS_location & inOperand4
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_isrDeclarationListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_isrDeclarationListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_isrDeclarationListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_isrDeclarationListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                              const GALGAS_lstring & in_mISRName,
                                                              const GALGAS_mode & in_mMode,
                                                              const GALGAS_lstring & in_mModuleName,
                                                              const GALGAS_instructionListAST & in_mISRInstructionList,
                                                              const GALGAS_location & in_mEndOfISRDeclaration
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_isrDeclarationListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_isrDeclarationListAST (in_mISRName,
                                                           in_mMode,
                                                           in_mModuleName,
                                                           in_mISRInstructionList,
                                                           in_mEndOfISRDeclaration COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_isrDeclarationListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                        const GALGAS_mode & inOperand1,
                                                        const GALGAS_lstring & inOperand2,
                                                        const GALGAS_instructionListAST & inOperand3,
                                                        const GALGAS_location & inOperand4
                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_isrDeclarationListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_isrDeclarationListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                         const GALGAS_mode inOperand1,
                                                         const GALGAS_lstring inOperand2,
                                                         const GALGAS_instructionListAST inOperand3,
                                                         const GALGAS_location inOperand4,
                                                         const GALGAS_uint inInsertionIndex,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_isrDeclarationListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_isrDeclarationListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                         GALGAS_mode & outOperand1,
                                                         GALGAS_lstring & outOperand2,
                                                         GALGAS_instructionListAST & outOperand3,
                                                         GALGAS_location & outOperand4,
                                                         const GALGAS_uint inRemoveIndex,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_isrDeclarationListAST * p = (cCollectionElement_isrDeclarationListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      outOperand4.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_isrDeclarationListAST) ;
      outOperand0 = p->mObject.mProperty_mISRName ;
      outOperand1 = p->mObject.mProperty_mMode ;
      outOperand2 = p->mObject.mProperty_mModuleName ;
      outOperand3 = p->mObject.mProperty_mISRInstructionList ;
      outOperand4 = p->mObject.mProperty_mEndOfISRDeclaration ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_isrDeclarationListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                    GALGAS_mode & outOperand1,
                                                    GALGAS_lstring & outOperand2,
                                                    GALGAS_instructionListAST & outOperand3,
                                                    GALGAS_location & outOperand4,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_isrDeclarationListAST * p = (cCollectionElement_isrDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_isrDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mISRName ;
    outOperand1 = p->mObject.mProperty_mMode ;
    outOperand2 = p->mObject.mProperty_mModuleName ;
    outOperand3 = p->mObject.mProperty_mISRInstructionList ;
    outOperand4 = p->mObject.mProperty_mEndOfISRDeclaration ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_isrDeclarationListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                   GALGAS_mode & outOperand1,
                                                   GALGAS_lstring & outOperand2,
                                                   GALGAS_instructionListAST & outOperand3,
                                                   GALGAS_location & outOperand4,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_isrDeclarationListAST * p = (cCollectionElement_isrDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_isrDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mISRName ;
    outOperand1 = p->mObject.mProperty_mMode ;
    outOperand2 = p->mObject.mProperty_mModuleName ;
    outOperand3 = p->mObject.mProperty_mISRInstructionList ;
    outOperand4 = p->mObject.mProperty_mEndOfISRDeclaration ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_isrDeclarationListAST::method_first (GALGAS_lstring & outOperand0,
                                                 GALGAS_mode & outOperand1,
                                                 GALGAS_lstring & outOperand2,
                                                 GALGAS_instructionListAST & outOperand3,
                                                 GALGAS_location & outOperand4,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_isrDeclarationListAST * p = (cCollectionElement_isrDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_isrDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mISRName ;
    outOperand1 = p->mObject.mProperty_mMode ;
    outOperand2 = p->mObject.mProperty_mModuleName ;
    outOperand3 = p->mObject.mProperty_mISRInstructionList ;
    outOperand4 = p->mObject.mProperty_mEndOfISRDeclaration ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_isrDeclarationListAST::method_last (GALGAS_lstring & outOperand0,
                                                GALGAS_mode & outOperand1,
                                                GALGAS_lstring & outOperand2,
                                                GALGAS_instructionListAST & outOperand3,
                                                GALGAS_location & outOperand4,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_isrDeclarationListAST * p = (cCollectionElement_isrDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_isrDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mISRName ;
    outOperand1 = p->mObject.mProperty_mMode ;
    outOperand2 = p->mObject.mProperty_mModuleName ;
    outOperand3 = p->mObject.mProperty_mISRInstructionList ;
    outOperand4 = p->mObject.mProperty_mEndOfISRDeclaration ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_isrDeclarationListAST GALGAS_isrDeclarationListAST::add_operation (const GALGAS_isrDeclarationListAST & inOperand,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_isrDeclarationListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_isrDeclarationListAST GALGAS_isrDeclarationListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_isrDeclarationListAST result = GALGAS_isrDeclarationListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_isrDeclarationListAST GALGAS_isrDeclarationListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_isrDeclarationListAST result = GALGAS_isrDeclarationListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_isrDeclarationListAST GALGAS_isrDeclarationListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_isrDeclarationListAST result = GALGAS_isrDeclarationListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_isrDeclarationListAST::plusAssign_operation (const GALGAS_isrDeclarationListAST inOperand,
                                                         C_Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_isrDeclarationListAST::getter_mISRNameAtIndex (const GALGAS_uint & inIndex,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_isrDeclarationListAST * p = (cCollectionElement_isrDeclarationListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_isrDeclarationListAST) ;
    result = p->mObject.mProperty_mISRName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mode GALGAS_isrDeclarationListAST::getter_mModeAtIndex (const GALGAS_uint & inIndex,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_isrDeclarationListAST * p = (cCollectionElement_isrDeclarationListAST *) attributes.ptr () ;
  GALGAS_mode result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_isrDeclarationListAST) ;
    result = p->mObject.mProperty_mMode ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_isrDeclarationListAST::getter_mModuleNameAtIndex (const GALGAS_uint & inIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_isrDeclarationListAST * p = (cCollectionElement_isrDeclarationListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_isrDeclarationListAST) ;
    result = p->mObject.mProperty_mModuleName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST GALGAS_isrDeclarationListAST::getter_mISRInstructionListAtIndex (const GALGAS_uint & inIndex,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_isrDeclarationListAST * p = (cCollectionElement_isrDeclarationListAST *) attributes.ptr () ;
  GALGAS_instructionListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_isrDeclarationListAST) ;
    result = p->mObject.mProperty_mISRInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_isrDeclarationListAST::getter_mEndOfISRDeclarationAtIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_isrDeclarationListAST * p = (cCollectionElement_isrDeclarationListAST *) attributes.ptr () ;
  GALGAS_location result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_isrDeclarationListAST) ;
    result = p->mObject.mProperty_mEndOfISRDeclaration ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_isrDeclarationListAST::cEnumerator_isrDeclarationListAST (const GALGAS_isrDeclarationListAST & inEnumeratedObject,
                                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_isrDeclarationListAST_2D_element cEnumerator_isrDeclarationListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_isrDeclarationListAST * p = (const cCollectionElement_isrDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_isrDeclarationListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_isrDeclarationListAST::current_mISRName (LOCATION_ARGS) const {
  const cCollectionElement_isrDeclarationListAST * p = (const cCollectionElement_isrDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_isrDeclarationListAST) ;
  return p->mObject.mProperty_mISRName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mode cEnumerator_isrDeclarationListAST::current_mMode (LOCATION_ARGS) const {
  const cCollectionElement_isrDeclarationListAST * p = (const cCollectionElement_isrDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_isrDeclarationListAST) ;
  return p->mObject.mProperty_mMode ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_isrDeclarationListAST::current_mModuleName (LOCATION_ARGS) const {
  const cCollectionElement_isrDeclarationListAST * p = (const cCollectionElement_isrDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_isrDeclarationListAST) ;
  return p->mObject.mProperty_mModuleName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST cEnumerator_isrDeclarationListAST::current_mISRInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_isrDeclarationListAST * p = (const cCollectionElement_isrDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_isrDeclarationListAST) ;
  return p->mObject.mProperty_mISRInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cEnumerator_isrDeclarationListAST::current_mEndOfISRDeclaration (LOCATION_ARGS) const {
  const cCollectionElement_isrDeclarationListAST * p = (const cCollectionElement_isrDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_isrDeclarationListAST) ;
  return p->mObject.mProperty_mEndOfISRDeclaration ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @isrDeclarationListAST type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_isrDeclarationListAST ("isrDeclarationListAST",
                                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_isrDeclarationListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_isrDeclarationListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_isrDeclarationListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_isrDeclarationListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_isrDeclarationListAST GALGAS_isrDeclarationListAST::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_isrDeclarationListAST result ;
  const GALGAS_isrDeclarationListAST * p = (const GALGAS_isrDeclarationListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_isrDeclarationListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("isrDeclarationListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Extension method '@isrDeclarationListAST enterInContext'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_enterInContext (const GALGAS_isrDeclarationListAST inObject,
                                     GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                     GALGAS_declarationDecorationList & ioArgument_ioDecoratedDeclarationList,
                                     C_Compiler * /* inCompiler */
                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_isrDeclarationListAST temp_0 = inObject ;
  cEnumerator_isrDeclarationListAST enumerator_2126 (temp_0, kENUMERATION_UP) ;
  while (enumerator_2126.hasCurrentObject ()) {
    ioArgument_ioSemanticContext.mProperty_mDefinedInterruptSet.addAssign_operation (enumerator_2126.current (HERE).getter_mISRName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("declaration-isr.galgas", 56)) ;
    enumerator_2126.gotoNextObject () ;
  }
  const GALGAS_isrDeclarationListAST temp_1 = inObject ;
  ioArgument_ioDecoratedDeclarationList.addAssign_operation (GALGAS_decoratedISRDeclarations::constructor_new (temp_1  COMMA_SOURCE_FILE ("declaration-isr.galgas", 59))  COMMA_SOURCE_FILE ("declaration-isr.galgas", 59)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_decoratedISRDeclarations::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_decoratedISRDeclarations * p = (const cPtr_decoratedISRDeclarations *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_decoratedISRDeclarations) ;
  if (kOperandEqual == result) {
    result = mProperty_mISRDeclarationList.objectCompare (p->mProperty_mISRDeclarationList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_decoratedISRDeclarations::objectCompare (const GALGAS_decoratedISRDeclarations & inOperand) const {
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

GALGAS_decoratedISRDeclarations::GALGAS_decoratedISRDeclarations (void) :
GALGAS_abstractDecoratedDeclaration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedISRDeclarations GALGAS_decoratedISRDeclarations::constructor_default (LOCATION_ARGS) {
  return GALGAS_decoratedISRDeclarations::constructor_new (GALGAS_isrDeclarationListAST::constructor_emptyList (HERE)
                                                           COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedISRDeclarations::GALGAS_decoratedISRDeclarations (const cPtr_decoratedISRDeclarations * inSourcePtr) :
GALGAS_abstractDecoratedDeclaration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_decoratedISRDeclarations) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedISRDeclarations GALGAS_decoratedISRDeclarations::constructor_new (const GALGAS_isrDeclarationListAST & inAttribute_mISRDeclarationList
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_decoratedISRDeclarations result ;
  if (inAttribute_mISRDeclarationList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_decoratedISRDeclarations (inAttribute_mISRDeclarationList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_isrDeclarationListAST GALGAS_decoratedISRDeclarations::getter_mISRDeclarationList (UNUSED_LOCATION_ARGS) const {
  GALGAS_isrDeclarationListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_decoratedISRDeclarations * p = (const cPtr_decoratedISRDeclarations *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedISRDeclarations) ;
    result = p->mProperty_mISRDeclarationList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_isrDeclarationListAST cPtr_decoratedISRDeclarations::getter_mISRDeclarationList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mISRDeclarationList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                  Pointer class for @decoratedISRDeclarations class                                  *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_decoratedISRDeclarations::cPtr_decoratedISRDeclarations (const GALGAS_isrDeclarationListAST & in_mISRDeclarationList
                                                              COMMA_LOCATION_ARGS) :
cPtr_abstractDecoratedDeclaration (THERE),
mProperty_mISRDeclarationList (in_mISRDeclarationList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_decoratedISRDeclarations::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedISRDeclarations ;
}

void cPtr_decoratedISRDeclarations::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "[@decoratedISRDeclarations:" ;
  mProperty_mISRDeclarationList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_decoratedISRDeclarations::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_decoratedISRDeclarations (mProperty_mISRDeclarationList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @decoratedISRDeclarations type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_decoratedISRDeclarations ("decoratedISRDeclarations",
                                                 & kTypeDescriptor_GALGAS_abstractDecoratedDeclaration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_decoratedISRDeclarations::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedISRDeclarations ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_decoratedISRDeclarations::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_decoratedISRDeclarations (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedISRDeclarations GALGAS_decoratedISRDeclarations::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_decoratedISRDeclarations result ;
  const GALGAS_decoratedISRDeclarations * p = (const GALGAS_decoratedISRDeclarations *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_decoratedISRDeclarations *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("decoratedISRDeclarations", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_interruptMapIR::cMapElement_interruptMapIR (const GALGAS_lstring & inKey,
                                                        const GALGAS_PLMType & in_mSelfType,
                                                        const GALGAS_string & in_mGlobalVariableName,
                                                        const GALGAS_allocaList & in_mAllocaList,
                                                        const GALGAS_instructionListIR & in_mInstructionGenerationList,
                                                        const GALGAS_mode & in_mMode
                                                        COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mSelfType (in_mSelfType),
mProperty_mGlobalVariableName (in_mGlobalVariableName),
mProperty_mAllocaList (in_mAllocaList),
mProperty_mInstructionGenerationList (in_mInstructionGenerationList),
mProperty_mMode (in_mMode) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_interruptMapIR::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mSelfType.isValid () && mProperty_mGlobalVariableName.isValid () && mProperty_mAllocaList.isValid () && mProperty_mInstructionGenerationList.isValid () && mProperty_mMode.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_interruptMapIR::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_interruptMapIR (mProperty_lkey, mProperty_mSelfType, mProperty_mGlobalVariableName, mProperty_mAllocaList, mProperty_mInstructionGenerationList, mProperty_mMode COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_interruptMapIR::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSelfType" ":" ;
  mProperty_mSelfType.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mGlobalVariableName" ":" ;
  mProperty_mGlobalVariableName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAllocaList" ":" ;
  mProperty_mAllocaList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInstructionGenerationList" ":" ;
  mProperty_mInstructionGenerationList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mMode" ":" ;
  mProperty_mMode.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_interruptMapIR::compare (const cCollectionElement * inOperand) const {
  cMapElement_interruptMapIR * operand = (cMapElement_interruptMapIR *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mSelfType.objectCompare (operand->mProperty_mSelfType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mGlobalVariableName.objectCompare (operand->mProperty_mGlobalVariableName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAllocaList.objectCompare (operand->mProperty_mAllocaList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInstructionGenerationList.objectCompare (operand->mProperty_mInstructionGenerationList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mMode.objectCompare (operand->mProperty_mMode) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_interruptMapIR::GALGAS_interruptMapIR (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_interruptMapIR::GALGAS_interruptMapIR (const GALGAS_interruptMapIR & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_interruptMapIR & GALGAS_interruptMapIR::operator = (const GALGAS_interruptMapIR & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_interruptMapIR GALGAS_interruptMapIR::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_interruptMapIR result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_interruptMapIR GALGAS_interruptMapIR::constructor_mapWithMapToOverride (const GALGAS_interruptMapIR & inMapToOverride
                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_interruptMapIR result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_interruptMapIR GALGAS_interruptMapIR::getter_overriddenMap (C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  GALGAS_interruptMapIR result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_interruptMapIR::addAssign_operation (const GALGAS_lstring & inKey,
                                                 const GALGAS_PLMType & inArgument0,
                                                 const GALGAS_string & inArgument1,
                                                 const GALGAS_allocaList & inArgument2,
                                                 const GALGAS_instructionListIR & inArgument3,
                                                 const GALGAS_mode & inArgument4,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  cMapElement_interruptMapIR * p = NULL ;
  macroMyNew (p, cMapElement_interruptMapIR (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@interruptMapIR insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_interruptMapIR::setter_insertKey (GALGAS_lstring inKey,
                                              GALGAS_PLMType inArgument0,
                                              GALGAS_string inArgument1,
                                              GALGAS_allocaList inArgument2,
                                              GALGAS_instructionListIR inArgument3,
                                              GALGAS_mode inArgument4,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  cMapElement_interruptMapIR * p = NULL ;
  macroMyNew (p, cMapElement_interruptMapIR (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "interrupt '%K' is already defined" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_interruptMapIR_searchKey = "** internal error **" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_interruptMapIR::method_searchKey (GALGAS_lstring inKey,
                                              GALGAS_PLMType & outArgument0,
                                              GALGAS_string & outArgument1,
                                              GALGAS_allocaList & outArgument2,
                                              GALGAS_instructionListIR & outArgument3,
                                              GALGAS_mode & outArgument4,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  const cMapElement_interruptMapIR * p = (const cMapElement_interruptMapIR *) performSearch (inKey,
                                                                                             inCompiler,
                                                                                             kSearchErrorMessage_interruptMapIR_searchKey
                                                                                             COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
    outArgument4.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_interruptMapIR) ;
    outArgument0 = p->mProperty_mSelfType ;
    outArgument1 = p->mProperty_mGlobalVariableName ;
    outArgument2 = p->mProperty_mAllocaList ;
    outArgument3 = p->mProperty_mInstructionGenerationList ;
    outArgument4 = p->mProperty_mMode ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_interruptMapIR::setter_removeKey (GALGAS_lstring inKey,
                                              GALGAS_PLMType & outArgument0,
                                              GALGAS_string & outArgument1,
                                              GALGAS_allocaList & outArgument2,
                                              GALGAS_instructionListIR & outArgument3,
                                              GALGAS_mode & outArgument4,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  const char * kRemoveErrorMessage = "** internal error **" ;
  capCollectionElement attributes ;
  performRemove (inKey, attributes, inCompiler, kRemoveErrorMessage COMMA_THERE) ;
  cMapElement_interruptMapIR * p = (cMapElement_interruptMapIR *) attributes.ptr () ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
    outArgument4.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_interruptMapIR) ;
    outArgument0 = p->mProperty_mSelfType ;
    outArgument1 = p->mProperty_mGlobalVariableName ;
    outArgument2 = p->mProperty_mAllocaList ;
    outArgument3 = p->mProperty_mInstructionGenerationList ;
    outArgument4 = p->mProperty_mMode ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMType GALGAS_interruptMapIR::getter_mSelfTypeForKey (const GALGAS_string & inKey,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_interruptMapIR * p = (const cMapElement_interruptMapIR *) attributes ;
  GALGAS_PLMType result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_interruptMapIR) ;
    result = p->mProperty_mSelfType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_interruptMapIR::getter_mGlobalVariableNameForKey (const GALGAS_string & inKey,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_interruptMapIR * p = (const cMapElement_interruptMapIR *) attributes ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_interruptMapIR) ;
    result = p->mProperty_mGlobalVariableName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allocaList GALGAS_interruptMapIR::getter_mAllocaListForKey (const GALGAS_string & inKey,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_interruptMapIR * p = (const cMapElement_interruptMapIR *) attributes ;
  GALGAS_allocaList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_interruptMapIR) ;
    result = p->mProperty_mAllocaList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR GALGAS_interruptMapIR::getter_mInstructionGenerationListForKey (const GALGAS_string & inKey,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_interruptMapIR * p = (const cMapElement_interruptMapIR *) attributes ;
  GALGAS_instructionListIR result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_interruptMapIR) ;
    result = p->mProperty_mInstructionGenerationList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mode GALGAS_interruptMapIR::getter_mModeForKey (const GALGAS_string & inKey,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_interruptMapIR * p = (const cMapElement_interruptMapIR *) attributes ;
  GALGAS_mode result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_interruptMapIR) ;
    result = p->mProperty_mMode ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_interruptMapIR::setter_setMSelfTypeForKey (GALGAS_PLMType inAttributeValue,
                                                       GALGAS_string inKey,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_interruptMapIR * p = (cMapElement_interruptMapIR *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_interruptMapIR) ;
    p->mProperty_mSelfType = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_interruptMapIR::setter_setMGlobalVariableNameForKey (GALGAS_string inAttributeValue,
                                                                 GALGAS_string inKey,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_interruptMapIR * p = (cMapElement_interruptMapIR *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_interruptMapIR) ;
    p->mProperty_mGlobalVariableName = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_interruptMapIR::setter_setMAllocaListForKey (GALGAS_allocaList inAttributeValue,
                                                         GALGAS_string inKey,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_interruptMapIR * p = (cMapElement_interruptMapIR *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_interruptMapIR) ;
    p->mProperty_mAllocaList = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_interruptMapIR::setter_setMInstructionGenerationListForKey (GALGAS_instructionListIR inAttributeValue,
                                                                        GALGAS_string inKey,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_interruptMapIR * p = (cMapElement_interruptMapIR *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_interruptMapIR) ;
    p->mProperty_mInstructionGenerationList = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_interruptMapIR::setter_setMModeForKey (GALGAS_mode inAttributeValue,
                                                   GALGAS_string inKey,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_interruptMapIR * p = (cMapElement_interruptMapIR *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_interruptMapIR) ;
    p->mProperty_mMode = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_interruptMapIR * GALGAS_interruptMapIR::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                       const GALGAS_string & inKey
                                                                                       COMMA_LOCATION_ARGS) {
  cMapElement_interruptMapIR * result = (cMapElement_interruptMapIR *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_interruptMapIR) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_interruptMapIR::cEnumerator_interruptMapIR (const GALGAS_interruptMapIR & inEnumeratedObject,
                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_interruptMapIR_2D_element cEnumerator_interruptMapIR::current (LOCATION_ARGS) const {
  const cMapElement_interruptMapIR * p = (const cMapElement_interruptMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_interruptMapIR) ;
  return GALGAS_interruptMapIR_2D_element (p->mProperty_lkey, p->mProperty_mSelfType, p->mProperty_mGlobalVariableName, p->mProperty_mAllocaList, p->mProperty_mInstructionGenerationList, p->mProperty_mMode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_interruptMapIR::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMType cEnumerator_interruptMapIR::current_mSelfType (LOCATION_ARGS) const {
  const cMapElement_interruptMapIR * p = (const cMapElement_interruptMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_interruptMapIR) ;
  return p->mProperty_mSelfType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_interruptMapIR::current_mGlobalVariableName (LOCATION_ARGS) const {
  const cMapElement_interruptMapIR * p = (const cMapElement_interruptMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_interruptMapIR) ;
  return p->mProperty_mGlobalVariableName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allocaList cEnumerator_interruptMapIR::current_mAllocaList (LOCATION_ARGS) const {
  const cMapElement_interruptMapIR * p = (const cMapElement_interruptMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_interruptMapIR) ;
  return p->mProperty_mAllocaList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR cEnumerator_interruptMapIR::current_mInstructionGenerationList (LOCATION_ARGS) const {
  const cMapElement_interruptMapIR * p = (const cMapElement_interruptMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_interruptMapIR) ;
  return p->mProperty_mInstructionGenerationList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mode cEnumerator_interruptMapIR::current_mMode (LOCATION_ARGS) const {
  const cMapElement_interruptMapIR * p = (const cMapElement_interruptMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_interruptMapIR) ;
  return p->mProperty_mMode ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @interruptMapIR type                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_interruptMapIR ("interruptMapIR",
                                       NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_interruptMapIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_interruptMapIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_interruptMapIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_interruptMapIR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_interruptMapIR GALGAS_interruptMapIR::extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_interruptMapIR result ;
  const GALGAS_interruptMapIR * p = (const GALGAS_interruptMapIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_interruptMapIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("interruptMapIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
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
  GALGAS_stringset var_definedInterrupts_6032 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("declaration-isr.galgas", 145)) ;
  const GALGAS_interruptMapIR temp_0 = inObject ;
  cEnumerator_interruptMapIR enumerator_6061 (temp_0, kENUMERATION_UP) ;
  while (enumerator_6061.hasCurrentObject ()) {
    var_definedInterrupts_6032.addAssign_operation (enumerator_6061.current (HERE).getter_lkey (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("declaration-isr.galgas", 147)) ;
    GALGAS_string temp_1 ;
    const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_6061.current (HERE).getter_mMode (HERE).objectCompare (GALGAS_mode::constructor_serviceMode (SOURCE_FILE ("declaration-isr.galgas", 148)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      temp_1 = function_llvmNameForServiceInterrupt (enumerator_6061.current (HERE).getter_lkey (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 149)).getter_string (HERE) ;
    }else if (kBoolFalse == test_2) {
      temp_1 = function_llvmNameForSectionOrSafeInterrupt (enumerator_6061.current (HERE).getter_lkey (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 151)) ;
    }
    GALGAS_string var_interruptImplementationName_6148 = temp_1 ;
    ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (var_interruptImplementationName_6148, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 153)), inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 153)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define void @").add_operation (var_interruptImplementationName_6148, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 154)).add_operation (GALGAS_string (" ()"), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 154)).add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 154)), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 154)).add_operation (GALGAS_string (" {\n"), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 154)), inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 154)) ;
    extensionMethod_generateAllocaList (enumerator_6061.current (HERE).getter_mAllocaList (HERE), ioArgument_ioLLVMcode, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 156)) ;
    const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, enumerator_6061.current (HERE).getter_mSelfType (HERE).getter_kind (HERE).objectCompare (GALGAS_typeKind::constructor_void (SOURCE_FILE ("declaration-isr.galgas", 158)))).boolEnum () ;
    if (kBoolTrue == test_3) {
      GALGAS_string var_varName_6662 = function_llvmNameForGlobalVariable (enumerator_6061.current (HERE).getter_mGlobalVariableName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 159)) ;
      GALGAS_string var_typeName_6742 = extensionGetter_llvmTypeName (enumerator_6061.current (HERE).getter_mSelfType (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 160)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (function_llvmNameForSelf (inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 161)), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 161)).add_operation (GALGAS_string (" = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 161)).add_operation (var_typeName_6742, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 161)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 161)).add_operation (var_typeName_6742, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 161)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 161)).add_operation (var_varName_6662, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 161)), inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 161)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", i32 0 ; Perform self = ").add_operation (var_varName_6662, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 162)).add_operation (GALGAS_string (" \n"), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 162)), inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 162)) ;
    }
    extensionMethod_instructionListLLVMCode (enumerator_6061.current (HERE).getter_mInstructionGenerationList (HERE), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 165)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 167)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
      "\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 168)) ;
    const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, enumerator_6061.current (HERE).getter_mMode (HERE).objectCompare (GALGAS_mode::constructor_serviceMode (SOURCE_FILE ("declaration-isr.galgas", 170)))).boolEnum () ;
    if (kBoolTrue == test_4) {
      GALGAS_string var_interruptHandlerName_7311 = function_llvmNameForServiceInterrupt (enumerator_6061.current (HERE).getter_lkey (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 171)).getter_string (HERE) ;
      GALGAS_string var_isrName_7383 = function_llvmNameForSectionOrSafeInterrupt (enumerator_6061.current (HERE).getter_lkey (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 172)) ;
      GALGAS_string var_s_31__7456 = constinArgument_inXTRInterruptHandlerString.getter_stringByReplacingStringByString (GALGAS_string ("!ISR!"), var_isrName_7383, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 173)) ;
      GALGAS_string var_s_32__7550 = var_s_31__7456.getter_stringByReplacingStringByString (GALGAS_string ("!HANDLER!"), var_interruptHandlerName_7311, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 174)) ;
      ioArgument_ioAScode.plusAssign_operation(var_s_32__7550, inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 175)) ;
    }
    enumerator_6061.gotoNextObject () ;
  }
  cEnumerator_availableInterruptMap enumerator_7779 (constinArgument_inGenerationContext.getter_mAvailableInterruptMap (HERE), kENUMERATION_UP) ;
  while (enumerator_7779.hasCurrentObject ()) {
    const enumGalgasBool test_5 = var_definedInterrupts_6032.getter_hasKey (enumerator_7779.current_lkey (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("declaration-isr.galgas", 180)).operator_not (SOURCE_FILE ("declaration-isr.galgas", 180)).boolEnum () ;
    if (kBoolTrue == test_5) {
      switch (enumerator_7779.current_mInterruptionPanicCode (HERE).enumValue ()) {
      case GALGAS_interruptionPanicCode::kNotBuilt:
        break ;
      case GALGAS_interruptionPanicCode::kEnum_noCode:
        {
          GALGAS_string var_s_7895 = constinArgument_inUndefinedInterruptString.getter_stringByReplacingStringByString (GALGAS_string ("!ISR!"), function_llvmNameForSectionOrSafeInterrupt (enumerator_7779.current_lkey (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 183)), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 183)) ;
          ioArgument_ioAScode.plusAssign_operation(var_s_7895, inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 184)) ;
        }
        break ;
      case GALGAS_interruptionPanicCode::kEnum_code:
        {
          const cEnumAssociatedValues_interruptionPanicCode_code * extractPtr_8781 = (const cEnumAssociatedValues_interruptionPanicCode_code *) (enumerator_7779.current_mInterruptionPanicCode (HERE).unsafePointer ()) ;
          const GALGAS_lbigint extractedValue_value = extractPtr_8781->mAssociatedValue0 ;
          const enumGalgasBool test_6 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).boolEnum () ;
          if (kBoolTrue == test_6) {
            GALGAS_string var_s_8151 = constinArgument_inUndefinedInterruptString.getter_stringByReplacingStringByString (GALGAS_string ("!ISR!"), function_llvmNameForSectionOrSafeInterrupt (enumerator_7779.current_lkey (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 187)), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 187)) ;
            ioArgument_ioAScode.plusAssign_operation(var_s_8151, inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 188)) ;
          }else if (kBoolFalse == test_6) {
            GALGAS_string var_name_8329 = function_llvmNameForSectionOrSafeInterrupt (enumerator_7779.current_lkey (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 190)) ;
            ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("Panic code for ").add_operation (var_name_8329, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 191)), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 191)), inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 191)) ;
            ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define void @").add_operation (var_name_8329, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 192)).add_operation (GALGAS_string (" ()"), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 192)).add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 192)), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 192)).add_operation (GALGAS_string (" noreturn {\n"), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 192)), inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 192)) ;
            ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @panic.isr (").add_operation (extensionGetter_llvmTypeName (constinArgument_inGenerationContext.getter_mPanicCodeLLVMType (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 193)), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 193)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 193)).add_operation (extractedValue_value.getter_bigint (HERE).getter_string (SOURCE_FILE ("declaration-isr.galgas", 193)), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 193)).add_operation (GALGAS_string (") noreturn \n"), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 193)), inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 193)) ;
            ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  unreachable\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 194)) ;
            ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
              "\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 195)) ;
          }
        }
        break ;
      }
    }
    enumerator_7779.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_guardKind_convenienceGuard::cEnumAssociatedValues_guardKind_convenienceGuard (const GALGAS_callInstructionAST & inAssociatedValue0
                                                                                                    COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_guardKind_convenienceGuard::description (C_String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_guardKind_convenienceGuard::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_guardKind_convenienceGuard * ptr = dynamic_cast<const cEnumAssociatedValues_guardKind_convenienceGuard *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardKind::GALGAS_guardKind (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardKind GALGAS_guardKind::constructor_baseGuard (UNUSED_LOCATION_ARGS) {
  GALGAS_guardKind result ;
  result.mEnum = kEnum_baseGuard ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardKind GALGAS_guardKind::constructor_convenienceGuard (const GALGAS_callInstructionAST & inAssociatedValue0
                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_guardKind result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_convenienceGuard ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_guardKind_convenienceGuard (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guardKind::method_convenienceGuard (GALGAS_callInstructionAST & outAssociatedValue0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_convenienceGuard) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @guardKind convenienceGuard invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_guardKind_convenienceGuard * ptr = (const cEnumAssociatedValues_guardKind_convenienceGuard *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * gEnumNameArrayFor_guardKind [3] = {
  "(not built)",
  "baseGuard",
  "convenienceGuard"
} ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_guardKind::getter_isBaseGuard (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_baseGuard == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_guardKind::getter_isConvenienceGuard (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_convenienceGuard == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guardKind::description (C_String & ioString,
                                    const int32_t inIndentation) const {
  ioString << "<enum @guardKind: " << gEnumNameArrayFor_guardKind [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_guardKind::objectCompare (const GALGAS_guardKind & inOperand) const {
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
//                                                   @guardKind type                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_guardKind ("guardKind",
                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_guardKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guardKind ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_guardKind::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_guardKind (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardKind GALGAS_guardKind::extractObject (const GALGAS_object & inObject,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  GALGAS_guardKind result ;
  const GALGAS_guardKind * p = (const GALGAS_guardKind *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_guardKind *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("guardKind", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
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
  cEnumerator_guardDeclarationListAST enumerator_2805 (temp_0, kENUMERATION_UP) ;
  while (enumerator_2805.hasCurrentObject ()) {
    cEnumerator_routineFormalArgumentListAST enumerator_2875 (enumerator_2805.current_mGuardFormalArgumentList (HERE), kENUMERATION_UP) ;
    while (enumerator_2875.hasCurrentObject ()) {
      GALGAS_lstring var_typeName_2897 = function_llvmTypeNameFromPLMname (enumerator_2875.current_mFormalArgumentTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 79)) ;
      {
      ioArgument_ioGraph.setter_noteNode (var_typeName_2897 COMMA_SOURCE_FILE ("declaration-guard.galgas", 80)) ;
      }
      enumerator_2875.gotoNextObject () ;
    }
    extensionMethod_noteInstructionListTypesInPrecedenceGraph (enumerator_2805.current_mGuardInstructionList (HERE), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 82)) ;
    enumerator_2805.gotoNextObject () ;
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
  cEnumerator_guardDeclarationListAST enumerator_3602 (temp_0, kENUMERATION_UP) ;
  while (enumerator_3602.hasCurrentObject ()) {
    GALGAS_lstring var_guardMangledName_3656 = function_routineMangledNameFromAST (constinArgument_inReceiverTypeName, enumerator_3602.current (HERE).getter_mGuardName (HERE), enumerator_3602.current (HERE).getter_mGuardFormalArgumentList (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 96)) ;
    GALGAS_routineTypedSignature var_signature_3888 ;
    {
    routine_routineSignature (ioArgument_ioContext.mProperty_mTypeMap, enumerator_3602.current (HERE).getter_mGuardFormalArgumentList (HERE), var_signature_3888, inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 102)) ;
    }
    {
    ioArgument_ioContext.mProperty_mGuardMapForContext.setter_insertKey (var_guardMangledName_3656, enumerator_3602.current (HERE).getter_mIsPublic (HERE), var_signature_3888, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 104)) ;
    }
    enumerator_3602.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Extension method '@guardDeclarationListAST guardSemanticAnalysis'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_guardSemanticAnalysis (const GALGAS_guardDeclarationListAST inObject,
                                            GALGAS_PLMType inArgument_inReceiverType,
                                            const GALGAS_semanticContext constinArgument_inSemanticContext,
                                            GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                            GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                            C_Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_guardDeclarationListAST temp_0 = inObject ;
  cEnumerator_guardDeclarationListAST enumerator_4695 (temp_0, kENUMERATION_UP) ;
  while (enumerator_4695.hasCurrentObject ()) {
    GALGAS_bool var_warnIfUnused_4719 = GALGAS_bool (true) ;
    cEnumerator_lstringlist enumerator_4775 (enumerator_4695.current (HERE).getter_mGuardAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_4775.hasCurrentObject ()) {
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_4775.current_mValue (HERE).getter_string (HERE).objectCompare (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 125)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        const enumGalgasBool test_2 = var_warnIfUnused_4719.operator_not (SOURCE_FILE ("declaration-guard.galgas", 126)).boolEnum () ;
        if (kBoolTrue == test_2) {
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (enumerator_4775.current_mValue (HERE).getter_location (SOURCE_FILE ("declaration-guard.galgas", 127)), GALGAS_string ("duplicate @").add_operation (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 127)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 127)).add_operation (GALGAS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 127)), fixItArray3  COMMA_SOURCE_FILE ("declaration-guard.galgas", 127)) ;
        }
        var_warnIfUnused_4719 = GALGAS_bool (false) ;
      }else if (kBoolFalse == test_1) {
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (enumerator_4775.current_mValue (HERE).getter_location (SOURCE_FILE ("declaration-guard.galgas", 131)), GALGAS_string ("unknown attribute; available attribute is @").add_operation (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 131)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 131)), fixItArray4  COMMA_SOURCE_FILE ("declaration-guard.galgas", 131)) ;
      }
      enumerator_4775.gotoNextObject () ;
    }
    {
    routine_guardSemanticAnalysis (inArgument_inReceiverType, enumerator_4695.current (HERE).getter_mGuardName (HERE), enumerator_4695.current (HERE).getter_mGuardFormalArgumentList (HERE), enumerator_4695.current (HERE).getter_mGuardKind (HERE), enumerator_4695.current (HERE).getter_mGuardInstructionList (HERE), enumerator_4695.current (HERE).getter_mEndOfGuardDeclaration (HERE), var_warnIfUnused_4719, constinArgument_inSemanticContext, ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct, inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 134)) ;
    }
    enumerator_4695.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_guardKindGenerationIR_convenienceGuard::cEnumAssociatedValues_guardKindGenerationIR_convenienceGuard (const GALGAS_allocaList & inAssociatedValue0,
                                                                                                                            const GALGAS_instructionListIR & inAssociatedValue1,
                                                                                                                            const GALGAS_string & inAssociatedValue2,
                                                                                                                            const GALGAS_procCallEffectiveParameterListIR & inAssociatedValue3
                                                                                                                            COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1),
mAssociatedValue2 (inAssociatedValue2),
mAssociatedValue3 (inAssociatedValue3) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_guardKindGenerationIR_convenienceGuard::description (C_String & ioString,
                                                                                const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  mAssociatedValue2.description (ioString, inIndentation) ;
  mAssociatedValue3.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_guardKindGenerationIR_convenienceGuard::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_guardKindGenerationIR_convenienceGuard * ptr = dynamic_cast<const cEnumAssociatedValues_guardKindGenerationIR_convenienceGuard *> (inOperand) ;
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

GALGAS_guardKindGenerationIR::GALGAS_guardKindGenerationIR (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardKindGenerationIR GALGAS_guardKindGenerationIR::constructor_baseGuard (UNUSED_LOCATION_ARGS) {
  GALGAS_guardKindGenerationIR result ;
  result.mEnum = kEnum_baseGuard ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardKindGenerationIR GALGAS_guardKindGenerationIR::constructor_convenienceGuard (const GALGAS_allocaList & inAssociatedValue0,
                                                                                         const GALGAS_instructionListIR & inAssociatedValue1,
                                                                                         const GALGAS_string & inAssociatedValue2,
                                                                                         const GALGAS_procCallEffectiveParameterListIR & inAssociatedValue3
                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_guardKindGenerationIR result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid () && inAssociatedValue2.isValid () && inAssociatedValue3.isValid ()) {
    result.mEnum = kEnum_convenienceGuard ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_guardKindGenerationIR_convenienceGuard (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2, inAssociatedValue3 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guardKindGenerationIR::method_convenienceGuard (GALGAS_allocaList & outAssociatedValue0,
                                                            GALGAS_instructionListIR & outAssociatedValue1,
                                                            GALGAS_string & outAssociatedValue2,
                                                            GALGAS_procCallEffectiveParameterListIR & outAssociatedValue3,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_convenienceGuard) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    outAssociatedValue2.drop () ;
    outAssociatedValue3.drop () ;
    C_String s ;
    s << "method @guardKindGenerationIR convenienceGuard invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_guardKindGenerationIR_convenienceGuard * ptr = (const cEnumAssociatedValues_guardKindGenerationIR_convenienceGuard *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
    outAssociatedValue3 = ptr->mAssociatedValue3 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * gEnumNameArrayFor_guardKindGenerationIR [3] = {
  "(not built)",
  "baseGuard",
  "convenienceGuard"
} ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_guardKindGenerationIR::getter_isBaseGuard (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_baseGuard == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_guardKindGenerationIR::getter_isConvenienceGuard (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_convenienceGuard == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guardKindGenerationIR::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "<enum @guardKindGenerationIR: " << gEnumNameArrayFor_guardKindGenerationIR [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_guardKindGenerationIR::objectCompare (const GALGAS_guardKindGenerationIR & inOperand) const {
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
//                                             @guardKindGenerationIR type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_guardKindGenerationIR ("guardKindGenerationIR",
                                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_guardKindGenerationIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guardKindGenerationIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_guardKindGenerationIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_guardKindGenerationIR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardKindGenerationIR GALGAS_guardKindGenerationIR::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_guardKindGenerationIR result ;
  const GALGAS_guardKindGenerationIR * p = (const GALGAS_guardKindGenerationIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_guardKindGenerationIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("guardKindGenerationIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

