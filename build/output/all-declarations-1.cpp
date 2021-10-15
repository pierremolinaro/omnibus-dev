#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-1.h"

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@requiredFunctionDeclarationListAST' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_requiredFunctionDeclarationListAST : public cCollectionElement {
  public: GALGAS_requiredFunctionDeclarationListAST_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_requiredFunctionDeclarationListAST (const GALGAS_lstring & in_mName,
                                                                 const GALGAS_mode & in_mExecutionMode,
                                                                 const GALGAS_bool & in_mIsExported,
                                                                 const GALGAS_routineFormalArgumentListAST & in_mFormalArgumentList,
                                                                 const GALGAS_location & in_mEndOfProcLocation
                                                                 COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_requiredFunctionDeclarationListAST (const GALGAS_requiredFunctionDeclarationListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_requiredFunctionDeclarationListAST::cCollectionElement_requiredFunctionDeclarationListAST (const GALGAS_lstring & in_mName,
                                                                                                              const GALGAS_mode & in_mExecutionMode,
                                                                                                              const GALGAS_bool & in_mIsExported,
                                                                                                              const GALGAS_routineFormalArgumentListAST & in_mFormalArgumentList,
                                                                                                              const GALGAS_location & in_mEndOfProcLocation
                                                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mName, in_mExecutionMode, in_mIsExported, in_mFormalArgumentList, in_mEndOfProcLocation) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_requiredFunctionDeclarationListAST::cCollectionElement_requiredFunctionDeclarationListAST (const GALGAS_requiredFunctionDeclarationListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mName, inElement.mProperty_mExecutionMode, inElement.mProperty_mIsExported, inElement.mProperty_mFormalArgumentList, inElement.mProperty_mEndOfProcLocation) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_requiredFunctionDeclarationListAST::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_requiredFunctionDeclarationListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_requiredFunctionDeclarationListAST (mObject.mProperty_mName, mObject.mProperty_mExecutionMode, mObject.mProperty_mIsExported, mObject.mProperty_mFormalArgumentList, mObject.mProperty_mEndOfProcLocation COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_requiredFunctionDeclarationListAST::description (C_String & ioString, const int32_t inIndentation) const {
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
  ioString << "mFormalArgumentList" ":" ;
  mObject.mProperty_mFormalArgumentList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEndOfProcLocation" ":" ;
  mObject.mProperty_mEndOfProcLocation.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_requiredFunctionDeclarationListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_requiredFunctionDeclarationListAST * operand = (cCollectionElement_requiredFunctionDeclarationListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_requiredFunctionDeclarationListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_requiredFunctionDeclarationListAST::GALGAS_requiredFunctionDeclarationListAST (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_requiredFunctionDeclarationListAST::GALGAS_requiredFunctionDeclarationListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_requiredFunctionDeclarationListAST GALGAS_requiredFunctionDeclarationListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_requiredFunctionDeclarationListAST  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_requiredFunctionDeclarationListAST GALGAS_requiredFunctionDeclarationListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                                const GALGAS_mode & inOperand1,
                                                                                                                const GALGAS_bool & inOperand2,
                                                                                                                const GALGAS_routineFormalArgumentListAST & inOperand3,
                                                                                                                const GALGAS_location & inOperand4
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_requiredFunctionDeclarationListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_requiredFunctionDeclarationListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_requiredFunctionDeclarationListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_requiredFunctionDeclarationListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                           const GALGAS_lstring & in_mName,
                                                                           const GALGAS_mode & in_mExecutionMode,
                                                                           const GALGAS_bool & in_mIsExported,
                                                                           const GALGAS_routineFormalArgumentListAST & in_mFormalArgumentList,
                                                                           const GALGAS_location & in_mEndOfProcLocation
                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_requiredFunctionDeclarationListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_requiredFunctionDeclarationListAST (in_mName,
                                                                        in_mExecutionMode,
                                                                        in_mIsExported,
                                                                        in_mFormalArgumentList,
                                                                        in_mEndOfProcLocation COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_requiredFunctionDeclarationListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                                     const GALGAS_mode & inOperand1,
                                                                     const GALGAS_bool & inOperand2,
                                                                     const GALGAS_routineFormalArgumentListAST & inOperand3,
                                                                     const GALGAS_location & inOperand4
                                                                     COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_requiredFunctionDeclarationListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{ // Destroy receiver
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_requiredFunctionDeclarationListAST::setter_append (GALGAS_requiredFunctionDeclarationListAST_2D_element inElement,
                                                               C_Compiler * /* inCompiler */
                                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_requiredFunctionDeclarationListAST (inElement COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_requiredFunctionDeclarationListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                      const GALGAS_mode inOperand1,
                                                                      const GALGAS_bool inOperand2,
                                                                      const GALGAS_routineFormalArgumentListAST inOperand3,
                                                                      const GALGAS_location inOperand4,
                                                                      const GALGAS_uint inInsertionIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_requiredFunctionDeclarationListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_requiredFunctionDeclarationListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                      GALGAS_mode & outOperand1,
                                                                      GALGAS_bool & outOperand2,
                                                                      GALGAS_routineFormalArgumentListAST & outOperand3,
                                                                      GALGAS_location & outOperand4,
                                                                      const GALGAS_uint inRemoveIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_requiredFunctionDeclarationListAST * p = (cCollectionElement_requiredFunctionDeclarationListAST *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        outOperand3.drop () ;
        outOperand4.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_requiredFunctionDeclarationListAST) ;
        outOperand0 = p->mObject.mProperty_mName ;
        outOperand1 = p->mObject.mProperty_mExecutionMode ;
        outOperand2 = p->mObject.mProperty_mIsExported ;
        outOperand3 = p->mObject.mProperty_mFormalArgumentList ;
        outOperand4 = p->mObject.mProperty_mEndOfProcLocation ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      outOperand4.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_requiredFunctionDeclarationListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                                 GALGAS_mode & outOperand1,
                                                                 GALGAS_bool & outOperand2,
                                                                 GALGAS_routineFormalArgumentListAST & outOperand3,
                                                                 GALGAS_location & outOperand4,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_requiredFunctionDeclarationListAST * p = (cCollectionElement_requiredFunctionDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_requiredFunctionDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mName ;
    outOperand1 = p->mObject.mProperty_mExecutionMode ;
    outOperand2 = p->mObject.mProperty_mIsExported ;
    outOperand3 = p->mObject.mProperty_mFormalArgumentList ;
    outOperand4 = p->mObject.mProperty_mEndOfProcLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_requiredFunctionDeclarationListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                                GALGAS_mode & outOperand1,
                                                                GALGAS_bool & outOperand2,
                                                                GALGAS_routineFormalArgumentListAST & outOperand3,
                                                                GALGAS_location & outOperand4,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_requiredFunctionDeclarationListAST * p = (cCollectionElement_requiredFunctionDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_requiredFunctionDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mName ;
    outOperand1 = p->mObject.mProperty_mExecutionMode ;
    outOperand2 = p->mObject.mProperty_mIsExported ;
    outOperand3 = p->mObject.mProperty_mFormalArgumentList ;
    outOperand4 = p->mObject.mProperty_mEndOfProcLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_requiredFunctionDeclarationListAST::method_first (GALGAS_lstring & outOperand0,
                                                              GALGAS_mode & outOperand1,
                                                              GALGAS_bool & outOperand2,
                                                              GALGAS_routineFormalArgumentListAST & outOperand3,
                                                              GALGAS_location & outOperand4,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_requiredFunctionDeclarationListAST * p = (cCollectionElement_requiredFunctionDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_requiredFunctionDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mName ;
    outOperand1 = p->mObject.mProperty_mExecutionMode ;
    outOperand2 = p->mObject.mProperty_mIsExported ;
    outOperand3 = p->mObject.mProperty_mFormalArgumentList ;
    outOperand4 = p->mObject.mProperty_mEndOfProcLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_requiredFunctionDeclarationListAST::method_last (GALGAS_lstring & outOperand0,
                                                             GALGAS_mode & outOperand1,
                                                             GALGAS_bool & outOperand2,
                                                             GALGAS_routineFormalArgumentListAST & outOperand3,
                                                             GALGAS_location & outOperand4,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_requiredFunctionDeclarationListAST * p = (cCollectionElement_requiredFunctionDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_requiredFunctionDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mName ;
    outOperand1 = p->mObject.mProperty_mExecutionMode ;
    outOperand2 = p->mObject.mProperty_mIsExported ;
    outOperand3 = p->mObject.mProperty_mFormalArgumentList ;
    outOperand4 = p->mObject.mProperty_mEndOfProcLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_requiredFunctionDeclarationListAST GALGAS_requiredFunctionDeclarationListAST::add_operation (const GALGAS_requiredFunctionDeclarationListAST & inOperand,
                                                                                                    C_Compiler * /* inCompiler */
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_requiredFunctionDeclarationListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_requiredFunctionDeclarationListAST GALGAS_requiredFunctionDeclarationListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_requiredFunctionDeclarationListAST result = GALGAS_requiredFunctionDeclarationListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_requiredFunctionDeclarationListAST GALGAS_requiredFunctionDeclarationListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_requiredFunctionDeclarationListAST result = GALGAS_requiredFunctionDeclarationListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_requiredFunctionDeclarationListAST GALGAS_requiredFunctionDeclarationListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_requiredFunctionDeclarationListAST result = GALGAS_requiredFunctionDeclarationListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_requiredFunctionDeclarationListAST::plusAssign_operation (const GALGAS_requiredFunctionDeclarationListAST inOperand,
                                                                      C_Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_requiredFunctionDeclarationListAST::setter_setMNameAtIndex (GALGAS_lstring inOperand,
                                                                        GALGAS_uint inIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_requiredFunctionDeclarationListAST * p = (cCollectionElement_requiredFunctionDeclarationListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_requiredFunctionDeclarationListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_requiredFunctionDeclarationListAST::getter_mNameAtIndex (const GALGAS_uint & inIndex,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_requiredFunctionDeclarationListAST * p = (cCollectionElement_requiredFunctionDeclarationListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_requiredFunctionDeclarationListAST) ;
    result = p->mObject.mProperty_mName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_requiredFunctionDeclarationListAST::setter_setMExecutionModeAtIndex (GALGAS_mode inOperand,
                                                                                 GALGAS_uint inIndex,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_requiredFunctionDeclarationListAST * p = (cCollectionElement_requiredFunctionDeclarationListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_requiredFunctionDeclarationListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mExecutionMode = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mode GALGAS_requiredFunctionDeclarationListAST::getter_mExecutionModeAtIndex (const GALGAS_uint & inIndex,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_requiredFunctionDeclarationListAST * p = (cCollectionElement_requiredFunctionDeclarationListAST *) attributes.ptr () ;
  GALGAS_mode result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_requiredFunctionDeclarationListAST) ;
    result = p->mObject.mProperty_mExecutionMode ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_requiredFunctionDeclarationListAST::setter_setMIsExportedAtIndex (GALGAS_bool inOperand,
                                                                              GALGAS_uint inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_requiredFunctionDeclarationListAST * p = (cCollectionElement_requiredFunctionDeclarationListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_requiredFunctionDeclarationListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mIsExported = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_requiredFunctionDeclarationListAST::getter_mIsExportedAtIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_requiredFunctionDeclarationListAST * p = (cCollectionElement_requiredFunctionDeclarationListAST *) attributes.ptr () ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_requiredFunctionDeclarationListAST) ;
    result = p->mObject.mProperty_mIsExported ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_requiredFunctionDeclarationListAST::setter_setMFormalArgumentListAtIndex (GALGAS_routineFormalArgumentListAST inOperand,
                                                                                      GALGAS_uint inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_requiredFunctionDeclarationListAST * p = (cCollectionElement_requiredFunctionDeclarationListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_requiredFunctionDeclarationListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFormalArgumentList = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineFormalArgumentListAST GALGAS_requiredFunctionDeclarationListAST::getter_mFormalArgumentListAtIndex (const GALGAS_uint & inIndex,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_requiredFunctionDeclarationListAST * p = (cCollectionElement_requiredFunctionDeclarationListAST *) attributes.ptr () ;
  GALGAS_routineFormalArgumentListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_requiredFunctionDeclarationListAST) ;
    result = p->mObject.mProperty_mFormalArgumentList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_requiredFunctionDeclarationListAST::setter_setMEndOfProcLocationAtIndex (GALGAS_location inOperand,
                                                                                     GALGAS_uint inIndex,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_requiredFunctionDeclarationListAST * p = (cCollectionElement_requiredFunctionDeclarationListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_requiredFunctionDeclarationListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mEndOfProcLocation = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_requiredFunctionDeclarationListAST::getter_mEndOfProcLocationAtIndex (const GALGAS_uint & inIndex,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_requiredFunctionDeclarationListAST * p = (cCollectionElement_requiredFunctionDeclarationListAST *) attributes.ptr () ;
  GALGAS_location result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_requiredFunctionDeclarationListAST) ;
    result = p->mObject.mProperty_mEndOfProcLocation ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_requiredFunctionDeclarationListAST::cEnumerator_requiredFunctionDeclarationListAST (const GALGAS_requiredFunctionDeclarationListAST & inEnumeratedObject,
                                                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_requiredFunctionDeclarationListAST_2D_element cEnumerator_requiredFunctionDeclarationListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_requiredFunctionDeclarationListAST * p = (const cCollectionElement_requiredFunctionDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_requiredFunctionDeclarationListAST) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_requiredFunctionDeclarationListAST::current_mName (LOCATION_ARGS) const {
  const cCollectionElement_requiredFunctionDeclarationListAST * p = (const cCollectionElement_requiredFunctionDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_requiredFunctionDeclarationListAST) ;
  return p->mObject.mProperty_mName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mode cEnumerator_requiredFunctionDeclarationListAST::current_mExecutionMode (LOCATION_ARGS) const {
  const cCollectionElement_requiredFunctionDeclarationListAST * p = (const cCollectionElement_requiredFunctionDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_requiredFunctionDeclarationListAST) ;
  return p->mObject.mProperty_mExecutionMode ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_requiredFunctionDeclarationListAST::current_mIsExported (LOCATION_ARGS) const {
  const cCollectionElement_requiredFunctionDeclarationListAST * p = (const cCollectionElement_requiredFunctionDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_requiredFunctionDeclarationListAST) ;
  return p->mObject.mProperty_mIsExported ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineFormalArgumentListAST cEnumerator_requiredFunctionDeclarationListAST::current_mFormalArgumentList (LOCATION_ARGS) const {
  const cCollectionElement_requiredFunctionDeclarationListAST * p = (const cCollectionElement_requiredFunctionDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_requiredFunctionDeclarationListAST) ;
  return p->mObject.mProperty_mFormalArgumentList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cEnumerator_requiredFunctionDeclarationListAST::current_mEndOfProcLocation (LOCATION_ARGS) const {
  const cCollectionElement_requiredFunctionDeclarationListAST * p = (const cCollectionElement_requiredFunctionDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_requiredFunctionDeclarationListAST) ;
  return p->mObject.mProperty_mEndOfProcLocation ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@requiredFunctionDeclarationListAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_requiredFunctionDeclarationListAST ("requiredFunctionDeclarationListAST",
                                                           NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_requiredFunctionDeclarationListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_requiredFunctionDeclarationListAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_requiredFunctionDeclarationListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_requiredFunctionDeclarationListAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_requiredFunctionDeclarationListAST GALGAS_requiredFunctionDeclarationListAST::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_requiredFunctionDeclarationListAST result ;
  const GALGAS_requiredFunctionDeclarationListAST * p = (const GALGAS_requiredFunctionDeclarationListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_requiredFunctionDeclarationListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("requiredFunctionDeclarationListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@externFunctionDeclarationListAST' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_externFunctionDeclarationListAST : public cCollectionElement {
  public: GALGAS_externFunctionDeclarationListAST_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_externFunctionDeclarationListAST (const GALGAS_lstring & in_mExternProcedureName,
                                                               const GALGAS_mode & in_mMode,
                                                               const GALGAS_lstringlist & in_mAttributeList,
                                                               const GALGAS_routineFormalArgumentListAST & in_mProcFormalArgumentList,
                                                               const GALGAS_lstring & in_mReturnTypeName,
                                                               const GALGAS_lstring & in_mRoutineNameForGeneration,
                                                               const GALGAS_location & in_mEndOfProcLocation
                                                               COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_externFunctionDeclarationListAST (const GALGAS_externFunctionDeclarationListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_externFunctionDeclarationListAST::cCollectionElement_externFunctionDeclarationListAST (const GALGAS_lstring & in_mExternProcedureName,
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

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_externFunctionDeclarationListAST::cCollectionElement_externFunctionDeclarationListAST (const GALGAS_externFunctionDeclarationListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mExternProcedureName, inElement.mProperty_mMode, inElement.mProperty_mAttributeList, inElement.mProperty_mProcFormalArgumentList, inElement.mProperty_mReturnTypeName, inElement.mProperty_mRoutineNameForGeneration, inElement.mProperty_mEndOfProcLocation) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_externFunctionDeclarationListAST::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_externFunctionDeclarationListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_externFunctionDeclarationListAST (mObject.mProperty_mExternProcedureName, mObject.mProperty_mMode, mObject.mProperty_mAttributeList, mObject.mProperty_mProcFormalArgumentList, mObject.mProperty_mReturnTypeName, mObject.mProperty_mRoutineNameForGeneration, mObject.mProperty_mEndOfProcLocation COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_externFunctionDeclarationListAST::description (C_String & ioString, const int32_t inIndentation) const {
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

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_externFunctionDeclarationListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_externFunctionDeclarationListAST * operand = (cCollectionElement_externFunctionDeclarationListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_externFunctionDeclarationListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externFunctionDeclarationListAST::GALGAS_externFunctionDeclarationListAST (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externFunctionDeclarationListAST::GALGAS_externFunctionDeclarationListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externFunctionDeclarationListAST GALGAS_externFunctionDeclarationListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_externFunctionDeclarationListAST  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externFunctionDeclarationListAST GALGAS_externFunctionDeclarationListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                            const GALGAS_mode & inOperand1,
                                                                                                            const GALGAS_lstringlist & inOperand2,
                                                                                                            const GALGAS_routineFormalArgumentListAST & inOperand3,
                                                                                                            const GALGAS_lstring & inOperand4,
                                                                                                            const GALGAS_lstring & inOperand5,
                                                                                                            const GALGAS_location & inOperand6
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_externFunctionDeclarationListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid ()) {
    result = GALGAS_externFunctionDeclarationListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_externFunctionDeclarationListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_externFunctionDeclarationListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                         const GALGAS_lstring & in_mExternProcedureName,
                                                                         const GALGAS_mode & in_mMode,
                                                                         const GALGAS_lstringlist & in_mAttributeList,
                                                                         const GALGAS_routineFormalArgumentListAST & in_mProcFormalArgumentList,
                                                                         const GALGAS_lstring & in_mReturnTypeName,
                                                                         const GALGAS_lstring & in_mRoutineNameForGeneration,
                                                                         const GALGAS_location & in_mEndOfProcLocation
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_externFunctionDeclarationListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_externFunctionDeclarationListAST (in_mExternProcedureName,
                                                                      in_mMode,
                                                                      in_mAttributeList,
                                                                      in_mProcFormalArgumentList,
                                                                      in_mReturnTypeName,
                                                                      in_mRoutineNameForGeneration,
                                                                      in_mEndOfProcLocation COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_externFunctionDeclarationListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                                   const GALGAS_mode & inOperand1,
                                                                   const GALGAS_lstringlist & inOperand2,
                                                                   const GALGAS_routineFormalArgumentListAST & inOperand3,
                                                                   const GALGAS_lstring & inOperand4,
                                                                   const GALGAS_lstring & inOperand5,
                                                                   const GALGAS_location & inOperand6
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_externFunctionDeclarationListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{ // Destroy receiver
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_externFunctionDeclarationListAST::setter_append (GALGAS_externFunctionDeclarationListAST_2D_element inElement,
                                                             C_Compiler * /* inCompiler */
                                                             COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_externFunctionDeclarationListAST (inElement COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_externFunctionDeclarationListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                    const GALGAS_mode inOperand1,
                                                                    const GALGAS_lstringlist inOperand2,
                                                                    const GALGAS_routineFormalArgumentListAST inOperand3,
                                                                    const GALGAS_lstring inOperand4,
                                                                    const GALGAS_lstring inOperand5,
                                                                    const GALGAS_location inOperand6,
                                                                    const GALGAS_uint inInsertionIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_externFunctionDeclarationListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_externFunctionDeclarationListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                    GALGAS_mode & outOperand1,
                                                                    GALGAS_lstringlist & outOperand2,
                                                                    GALGAS_routineFormalArgumentListAST & outOperand3,
                                                                    GALGAS_lstring & outOperand4,
                                                                    GALGAS_lstring & outOperand5,
                                                                    GALGAS_location & outOperand6,
                                                                    const GALGAS_uint inRemoveIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_externFunctionDeclarationListAST * p = (cCollectionElement_externFunctionDeclarationListAST *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        outOperand3.drop () ;
        outOperand4.drop () ;
        outOperand5.drop () ;
        outOperand6.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_externFunctionDeclarationListAST) ;
        outOperand0 = p->mObject.mProperty_mExternProcedureName ;
        outOperand1 = p->mObject.mProperty_mMode ;
        outOperand2 = p->mObject.mProperty_mAttributeList ;
        outOperand3 = p->mObject.mProperty_mProcFormalArgumentList ;
        outOperand4 = p->mObject.mProperty_mReturnTypeName ;
        outOperand5 = p->mObject.mProperty_mRoutineNameForGeneration ;
        outOperand6 = p->mObject.mProperty_mEndOfProcLocation ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      outOperand4.drop () ;
      outOperand5.drop () ;
      outOperand6.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_externFunctionDeclarationListAST::setter_popFirst (GALGAS_lstring & outOperand0,
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
  cCollectionElement_externFunctionDeclarationListAST * p = (cCollectionElement_externFunctionDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_externFunctionDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mExternProcedureName ;
    outOperand1 = p->mObject.mProperty_mMode ;
    outOperand2 = p->mObject.mProperty_mAttributeList ;
    outOperand3 = p->mObject.mProperty_mProcFormalArgumentList ;
    outOperand4 = p->mObject.mProperty_mReturnTypeName ;
    outOperand5 = p->mObject.mProperty_mRoutineNameForGeneration ;
    outOperand6 = p->mObject.mProperty_mEndOfProcLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_externFunctionDeclarationListAST::setter_popLast (GALGAS_lstring & outOperand0,
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
  cCollectionElement_externFunctionDeclarationListAST * p = (cCollectionElement_externFunctionDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_externFunctionDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mExternProcedureName ;
    outOperand1 = p->mObject.mProperty_mMode ;
    outOperand2 = p->mObject.mProperty_mAttributeList ;
    outOperand3 = p->mObject.mProperty_mProcFormalArgumentList ;
    outOperand4 = p->mObject.mProperty_mReturnTypeName ;
    outOperand5 = p->mObject.mProperty_mRoutineNameForGeneration ;
    outOperand6 = p->mObject.mProperty_mEndOfProcLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_externFunctionDeclarationListAST::method_first (GALGAS_lstring & outOperand0,
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
  cCollectionElement_externFunctionDeclarationListAST * p = (cCollectionElement_externFunctionDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_externFunctionDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mExternProcedureName ;
    outOperand1 = p->mObject.mProperty_mMode ;
    outOperand2 = p->mObject.mProperty_mAttributeList ;
    outOperand3 = p->mObject.mProperty_mProcFormalArgumentList ;
    outOperand4 = p->mObject.mProperty_mReturnTypeName ;
    outOperand5 = p->mObject.mProperty_mRoutineNameForGeneration ;
    outOperand6 = p->mObject.mProperty_mEndOfProcLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_externFunctionDeclarationListAST::method_last (GALGAS_lstring & outOperand0,
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
  cCollectionElement_externFunctionDeclarationListAST * p = (cCollectionElement_externFunctionDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_externFunctionDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mExternProcedureName ;
    outOperand1 = p->mObject.mProperty_mMode ;
    outOperand2 = p->mObject.mProperty_mAttributeList ;
    outOperand3 = p->mObject.mProperty_mProcFormalArgumentList ;
    outOperand4 = p->mObject.mProperty_mReturnTypeName ;
    outOperand5 = p->mObject.mProperty_mRoutineNameForGeneration ;
    outOperand6 = p->mObject.mProperty_mEndOfProcLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externFunctionDeclarationListAST GALGAS_externFunctionDeclarationListAST::add_operation (const GALGAS_externFunctionDeclarationListAST & inOperand,
                                                                                                C_Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_externFunctionDeclarationListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externFunctionDeclarationListAST GALGAS_externFunctionDeclarationListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_externFunctionDeclarationListAST result = GALGAS_externFunctionDeclarationListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externFunctionDeclarationListAST GALGAS_externFunctionDeclarationListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_externFunctionDeclarationListAST result = GALGAS_externFunctionDeclarationListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externFunctionDeclarationListAST GALGAS_externFunctionDeclarationListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_externFunctionDeclarationListAST result = GALGAS_externFunctionDeclarationListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_externFunctionDeclarationListAST::plusAssign_operation (const GALGAS_externFunctionDeclarationListAST inOperand,
                                                                    C_Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_externFunctionDeclarationListAST::setter_setMExternProcedureNameAtIndex (GALGAS_lstring inOperand,
                                                                                     GALGAS_uint inIndex,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_externFunctionDeclarationListAST * p = (cCollectionElement_externFunctionDeclarationListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_externFunctionDeclarationListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mExternProcedureName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_externFunctionDeclarationListAST::getter_mExternProcedureNameAtIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_externFunctionDeclarationListAST * p = (cCollectionElement_externFunctionDeclarationListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_externFunctionDeclarationListAST) ;
    result = p->mObject.mProperty_mExternProcedureName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_externFunctionDeclarationListAST::setter_setMModeAtIndex (GALGAS_mode inOperand,
                                                                      GALGAS_uint inIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_externFunctionDeclarationListAST * p = (cCollectionElement_externFunctionDeclarationListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_externFunctionDeclarationListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mMode = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mode GALGAS_externFunctionDeclarationListAST::getter_mModeAtIndex (const GALGAS_uint & inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_externFunctionDeclarationListAST * p = (cCollectionElement_externFunctionDeclarationListAST *) attributes.ptr () ;
  GALGAS_mode result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_externFunctionDeclarationListAST) ;
    result = p->mObject.mProperty_mMode ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_externFunctionDeclarationListAST::setter_setMAttributeListAtIndex (GALGAS_lstringlist inOperand,
                                                                               GALGAS_uint inIndex,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_externFunctionDeclarationListAST * p = (cCollectionElement_externFunctionDeclarationListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_externFunctionDeclarationListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mAttributeList = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_externFunctionDeclarationListAST::getter_mAttributeListAtIndex (const GALGAS_uint & inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_externFunctionDeclarationListAST * p = (cCollectionElement_externFunctionDeclarationListAST *) attributes.ptr () ;
  GALGAS_lstringlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_externFunctionDeclarationListAST) ;
    result = p->mObject.mProperty_mAttributeList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_externFunctionDeclarationListAST::setter_setMProcFormalArgumentListAtIndex (GALGAS_routineFormalArgumentListAST inOperand,
                                                                                        GALGAS_uint inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_externFunctionDeclarationListAST * p = (cCollectionElement_externFunctionDeclarationListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_externFunctionDeclarationListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mProcFormalArgumentList = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineFormalArgumentListAST GALGAS_externFunctionDeclarationListAST::getter_mProcFormalArgumentListAtIndex (const GALGAS_uint & inIndex,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_externFunctionDeclarationListAST * p = (cCollectionElement_externFunctionDeclarationListAST *) attributes.ptr () ;
  GALGAS_routineFormalArgumentListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_externFunctionDeclarationListAST) ;
    result = p->mObject.mProperty_mProcFormalArgumentList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_externFunctionDeclarationListAST::setter_setMReturnTypeNameAtIndex (GALGAS_lstring inOperand,
                                                                                GALGAS_uint inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_externFunctionDeclarationListAST * p = (cCollectionElement_externFunctionDeclarationListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_externFunctionDeclarationListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mReturnTypeName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_externFunctionDeclarationListAST::getter_mReturnTypeNameAtIndex (const GALGAS_uint & inIndex,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_externFunctionDeclarationListAST * p = (cCollectionElement_externFunctionDeclarationListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_externFunctionDeclarationListAST) ;
    result = p->mObject.mProperty_mReturnTypeName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_externFunctionDeclarationListAST::setter_setMRoutineNameForGenerationAtIndex (GALGAS_lstring inOperand,
                                                                                          GALGAS_uint inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_externFunctionDeclarationListAST * p = (cCollectionElement_externFunctionDeclarationListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_externFunctionDeclarationListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mRoutineNameForGeneration = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_externFunctionDeclarationListAST::getter_mRoutineNameForGenerationAtIndex (const GALGAS_uint & inIndex,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_externFunctionDeclarationListAST * p = (cCollectionElement_externFunctionDeclarationListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_externFunctionDeclarationListAST) ;
    result = p->mObject.mProperty_mRoutineNameForGeneration ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_externFunctionDeclarationListAST::setter_setMEndOfProcLocationAtIndex (GALGAS_location inOperand,
                                                                                   GALGAS_uint inIndex,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_externFunctionDeclarationListAST * p = (cCollectionElement_externFunctionDeclarationListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_externFunctionDeclarationListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mEndOfProcLocation = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_externFunctionDeclarationListAST::getter_mEndOfProcLocationAtIndex (const GALGAS_uint & inIndex,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_externFunctionDeclarationListAST * p = (cCollectionElement_externFunctionDeclarationListAST *) attributes.ptr () ;
  GALGAS_location result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_externFunctionDeclarationListAST) ;
    result = p->mObject.mProperty_mEndOfProcLocation ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_externFunctionDeclarationListAST::cEnumerator_externFunctionDeclarationListAST (const GALGAS_externFunctionDeclarationListAST & inEnumeratedObject,
                                                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externFunctionDeclarationListAST_2D_element cEnumerator_externFunctionDeclarationListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_externFunctionDeclarationListAST * p = (const cCollectionElement_externFunctionDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externFunctionDeclarationListAST) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_externFunctionDeclarationListAST::current_mExternProcedureName (LOCATION_ARGS) const {
  const cCollectionElement_externFunctionDeclarationListAST * p = (const cCollectionElement_externFunctionDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externFunctionDeclarationListAST) ;
  return p->mObject.mProperty_mExternProcedureName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mode cEnumerator_externFunctionDeclarationListAST::current_mMode (LOCATION_ARGS) const {
  const cCollectionElement_externFunctionDeclarationListAST * p = (const cCollectionElement_externFunctionDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externFunctionDeclarationListAST) ;
  return p->mObject.mProperty_mMode ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist cEnumerator_externFunctionDeclarationListAST::current_mAttributeList (LOCATION_ARGS) const {
  const cCollectionElement_externFunctionDeclarationListAST * p = (const cCollectionElement_externFunctionDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externFunctionDeclarationListAST) ;
  return p->mObject.mProperty_mAttributeList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineFormalArgumentListAST cEnumerator_externFunctionDeclarationListAST::current_mProcFormalArgumentList (LOCATION_ARGS) const {
  const cCollectionElement_externFunctionDeclarationListAST * p = (const cCollectionElement_externFunctionDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externFunctionDeclarationListAST) ;
  return p->mObject.mProperty_mProcFormalArgumentList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_externFunctionDeclarationListAST::current_mReturnTypeName (LOCATION_ARGS) const {
  const cCollectionElement_externFunctionDeclarationListAST * p = (const cCollectionElement_externFunctionDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externFunctionDeclarationListAST) ;
  return p->mObject.mProperty_mReturnTypeName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_externFunctionDeclarationListAST::current_mRoutineNameForGeneration (LOCATION_ARGS) const {
  const cCollectionElement_externFunctionDeclarationListAST * p = (const cCollectionElement_externFunctionDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externFunctionDeclarationListAST) ;
  return p->mObject.mProperty_mRoutineNameForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cEnumerator_externFunctionDeclarationListAST::current_mEndOfProcLocation (LOCATION_ARGS) const {
  const cCollectionElement_externFunctionDeclarationListAST * p = (const cCollectionElement_externFunctionDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externFunctionDeclarationListAST) ;
  return p->mObject.mProperty_mEndOfProcLocation ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@externFunctionDeclarationListAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_externFunctionDeclarationListAST ("externFunctionDeclarationListAST",
                                                         NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_externFunctionDeclarationListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externFunctionDeclarationListAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_externFunctionDeclarationListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_externFunctionDeclarationListAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externFunctionDeclarationListAST GALGAS_externFunctionDeclarationListAST::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_externFunctionDeclarationListAST result ;
  const GALGAS_externFunctionDeclarationListAST * p = (const GALGAS_externFunctionDeclarationListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_externFunctionDeclarationListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externFunctionDeclarationListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@taskListAST' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_taskListAST : public cCollectionElement {
  public: GALGAS_taskListAST_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_taskListAST (const GALGAS_lstring & in_mTaskName,
                                          const GALGAS_lstringlist & in_mLowerPriorityTaskList,
                                          const GALGAS_lbigint & in_mStackSize,
                                          const GALGAS_taskSetupListAST & in_mTaskSetupListAST,
                                          const GALGAS_taskSetupListAST & in_mTaskActivateListAST,
                                          const GALGAS_taskSetupListAST & in_mTaskDeactivateListAST,
                                          const GALGAS_syncInstructionBranchListAST & in_mGuardedCommandList,
                                          const GALGAS_location & in_mEndOfTaskDeclaration,
                                          const GALGAS_bool & in_mAutoStart
                                          COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_taskListAST (const GALGAS_taskListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_taskListAST::cCollectionElement_taskListAST (const GALGAS_lstring & in_mTaskName,
                                                                const GALGAS_lstringlist & in_mLowerPriorityTaskList,
                                                                const GALGAS_lbigint & in_mStackSize,
                                                                const GALGAS_taskSetupListAST & in_mTaskSetupListAST,
                                                                const GALGAS_taskSetupListAST & in_mTaskActivateListAST,
                                                                const GALGAS_taskSetupListAST & in_mTaskDeactivateListAST,
                                                                const GALGAS_syncInstructionBranchListAST & in_mGuardedCommandList,
                                                                const GALGAS_location & in_mEndOfTaskDeclaration,
                                                                const GALGAS_bool & in_mAutoStart
                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mTaskName, in_mLowerPriorityTaskList, in_mStackSize, in_mTaskSetupListAST, in_mTaskActivateListAST, in_mTaskDeactivateListAST, in_mGuardedCommandList, in_mEndOfTaskDeclaration, in_mAutoStart) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_taskListAST::cCollectionElement_taskListAST (const GALGAS_taskListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mTaskName, inElement.mProperty_mLowerPriorityTaskList, inElement.mProperty_mStackSize, inElement.mProperty_mTaskSetupListAST, inElement.mProperty_mTaskActivateListAST, inElement.mProperty_mTaskDeactivateListAST, inElement.mProperty_mGuardedCommandList, inElement.mProperty_mEndOfTaskDeclaration, inElement.mProperty_mAutoStart) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_taskListAST::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_taskListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_taskListAST (mObject.mProperty_mTaskName, mObject.mProperty_mLowerPriorityTaskList, mObject.mProperty_mStackSize, mObject.mProperty_mTaskSetupListAST, mObject.mProperty_mTaskActivateListAST, mObject.mProperty_mTaskDeactivateListAST, mObject.mProperty_mGuardedCommandList, mObject.mProperty_mEndOfTaskDeclaration, mObject.mProperty_mAutoStart COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_taskListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTaskName" ":" ;
  mObject.mProperty_mTaskName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLowerPriorityTaskList" ":" ;
  mObject.mProperty_mLowerPriorityTaskList.description (ioString, inIndentation) ;
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
  ioString << "mGuardedCommandList" ":" ;
  mObject.mProperty_mGuardedCommandList.description (ioString, inIndentation) ;
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

typeComparisonResult cCollectionElement_taskListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_taskListAST * operand = (cCollectionElement_taskListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_taskListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_taskListAST::GALGAS_taskListAST (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_taskListAST::GALGAS_taskListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_taskListAST GALGAS_taskListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_taskListAST  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_taskListAST GALGAS_taskListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                  const GALGAS_lstringlist & inOperand1,
                                                                  const GALGAS_lbigint & inOperand2,
                                                                  const GALGAS_taskSetupListAST & inOperand3,
                                                                  const GALGAS_taskSetupListAST & inOperand4,
                                                                  const GALGAS_taskSetupListAST & inOperand5,
                                                                  const GALGAS_syncInstructionBranchListAST & inOperand6,
                                                                  const GALGAS_location & inOperand7,
                                                                  const GALGAS_bool & inOperand8
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_taskListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid ()) {
    result = GALGAS_taskListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_taskListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_taskListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                    const GALGAS_lstring & in_mTaskName,
                                                    const GALGAS_lstringlist & in_mLowerPriorityTaskList,
                                                    const GALGAS_lbigint & in_mStackSize,
                                                    const GALGAS_taskSetupListAST & in_mTaskSetupListAST,
                                                    const GALGAS_taskSetupListAST & in_mTaskActivateListAST,
                                                    const GALGAS_taskSetupListAST & in_mTaskDeactivateListAST,
                                                    const GALGAS_syncInstructionBranchListAST & in_mGuardedCommandList,
                                                    const GALGAS_location & in_mEndOfTaskDeclaration,
                                                    const GALGAS_bool & in_mAutoStart
                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_taskListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_taskListAST (in_mTaskName,
                                                 in_mLowerPriorityTaskList,
                                                 in_mStackSize,
                                                 in_mTaskSetupListAST,
                                                 in_mTaskActivateListAST,
                                                 in_mTaskDeactivateListAST,
                                                 in_mGuardedCommandList,
                                                 in_mEndOfTaskDeclaration,
                                                 in_mAutoStart COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_taskListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                              const GALGAS_lstringlist & inOperand1,
                                              const GALGAS_lbigint & inOperand2,
                                              const GALGAS_taskSetupListAST & inOperand3,
                                              const GALGAS_taskSetupListAST & inOperand4,
                                              const GALGAS_taskSetupListAST & inOperand5,
                                              const GALGAS_syncInstructionBranchListAST & inOperand6,
                                              const GALGAS_location & inOperand7,
                                              const GALGAS_bool & inOperand8
                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_taskListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{ // Destroy receiver
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_taskListAST::setter_append (GALGAS_taskListAST_2D_element inElement,
                                        C_Compiler * /* inCompiler */
                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_taskListAST (inElement COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_taskListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                               const GALGAS_lstringlist inOperand1,
                                               const GALGAS_lbigint inOperand2,
                                               const GALGAS_taskSetupListAST inOperand3,
                                               const GALGAS_taskSetupListAST inOperand4,
                                               const GALGAS_taskSetupListAST inOperand5,
                                               const GALGAS_syncInstructionBranchListAST inOperand6,
                                               const GALGAS_location inOperand7,
                                               const GALGAS_bool inOperand8,
                                               const GALGAS_uint inInsertionIndex,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_taskListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_taskListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                               GALGAS_lstringlist & outOperand1,
                                               GALGAS_lbigint & outOperand2,
                                               GALGAS_taskSetupListAST & outOperand3,
                                               GALGAS_taskSetupListAST & outOperand4,
                                               GALGAS_taskSetupListAST & outOperand5,
                                               GALGAS_syncInstructionBranchListAST & outOperand6,
                                               GALGAS_location & outOperand7,
                                               GALGAS_bool & outOperand8,
                                               const GALGAS_uint inRemoveIndex,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_taskListAST * p = (cCollectionElement_taskListAST *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        outOperand3.drop () ;
        outOperand4.drop () ;
        outOperand5.drop () ;
        outOperand6.drop () ;
        outOperand7.drop () ;
        outOperand8.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_taskListAST) ;
        outOperand0 = p->mObject.mProperty_mTaskName ;
        outOperand1 = p->mObject.mProperty_mLowerPriorityTaskList ;
        outOperand2 = p->mObject.mProperty_mStackSize ;
        outOperand3 = p->mObject.mProperty_mTaskSetupListAST ;
        outOperand4 = p->mObject.mProperty_mTaskActivateListAST ;
        outOperand5 = p->mObject.mProperty_mTaskDeactivateListAST ;
        outOperand6 = p->mObject.mProperty_mGuardedCommandList ;
        outOperand7 = p->mObject.mProperty_mEndOfTaskDeclaration ;
        outOperand8 = p->mObject.mProperty_mAutoStart ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      outOperand4.drop () ;
      outOperand5.drop () ;
      outOperand6.drop () ;
      outOperand7.drop () ;
      outOperand8.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
    outOperand8.drop () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_taskListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                          GALGAS_lstringlist & outOperand1,
                                          GALGAS_lbigint & outOperand2,
                                          GALGAS_taskSetupListAST & outOperand3,
                                          GALGAS_taskSetupListAST & outOperand4,
                                          GALGAS_taskSetupListAST & outOperand5,
                                          GALGAS_syncInstructionBranchListAST & outOperand6,
                                          GALGAS_location & outOperand7,
                                          GALGAS_bool & outOperand8,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_taskListAST * p = (cCollectionElement_taskListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
    outOperand8.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_taskListAST) ;
    outOperand0 = p->mObject.mProperty_mTaskName ;
    outOperand1 = p->mObject.mProperty_mLowerPriorityTaskList ;
    outOperand2 = p->mObject.mProperty_mStackSize ;
    outOperand3 = p->mObject.mProperty_mTaskSetupListAST ;
    outOperand4 = p->mObject.mProperty_mTaskActivateListAST ;
    outOperand5 = p->mObject.mProperty_mTaskDeactivateListAST ;
    outOperand6 = p->mObject.mProperty_mGuardedCommandList ;
    outOperand7 = p->mObject.mProperty_mEndOfTaskDeclaration ;
    outOperand8 = p->mObject.mProperty_mAutoStart ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_taskListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                         GALGAS_lstringlist & outOperand1,
                                         GALGAS_lbigint & outOperand2,
                                         GALGAS_taskSetupListAST & outOperand3,
                                         GALGAS_taskSetupListAST & outOperand4,
                                         GALGAS_taskSetupListAST & outOperand5,
                                         GALGAS_syncInstructionBranchListAST & outOperand6,
                                         GALGAS_location & outOperand7,
                                         GALGAS_bool & outOperand8,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_taskListAST * p = (cCollectionElement_taskListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
    outOperand8.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_taskListAST) ;
    outOperand0 = p->mObject.mProperty_mTaskName ;
    outOperand1 = p->mObject.mProperty_mLowerPriorityTaskList ;
    outOperand2 = p->mObject.mProperty_mStackSize ;
    outOperand3 = p->mObject.mProperty_mTaskSetupListAST ;
    outOperand4 = p->mObject.mProperty_mTaskActivateListAST ;
    outOperand5 = p->mObject.mProperty_mTaskDeactivateListAST ;
    outOperand6 = p->mObject.mProperty_mGuardedCommandList ;
    outOperand7 = p->mObject.mProperty_mEndOfTaskDeclaration ;
    outOperand8 = p->mObject.mProperty_mAutoStart ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_taskListAST::method_first (GALGAS_lstring & outOperand0,
                                       GALGAS_lstringlist & outOperand1,
                                       GALGAS_lbigint & outOperand2,
                                       GALGAS_taskSetupListAST & outOperand3,
                                       GALGAS_taskSetupListAST & outOperand4,
                                       GALGAS_taskSetupListAST & outOperand5,
                                       GALGAS_syncInstructionBranchListAST & outOperand6,
                                       GALGAS_location & outOperand7,
                                       GALGAS_bool & outOperand8,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_taskListAST * p = (cCollectionElement_taskListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
    outOperand8.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_taskListAST) ;
    outOperand0 = p->mObject.mProperty_mTaskName ;
    outOperand1 = p->mObject.mProperty_mLowerPriorityTaskList ;
    outOperand2 = p->mObject.mProperty_mStackSize ;
    outOperand3 = p->mObject.mProperty_mTaskSetupListAST ;
    outOperand4 = p->mObject.mProperty_mTaskActivateListAST ;
    outOperand5 = p->mObject.mProperty_mTaskDeactivateListAST ;
    outOperand6 = p->mObject.mProperty_mGuardedCommandList ;
    outOperand7 = p->mObject.mProperty_mEndOfTaskDeclaration ;
    outOperand8 = p->mObject.mProperty_mAutoStart ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_taskListAST::method_last (GALGAS_lstring & outOperand0,
                                      GALGAS_lstringlist & outOperand1,
                                      GALGAS_lbigint & outOperand2,
                                      GALGAS_taskSetupListAST & outOperand3,
                                      GALGAS_taskSetupListAST & outOperand4,
                                      GALGAS_taskSetupListAST & outOperand5,
                                      GALGAS_syncInstructionBranchListAST & outOperand6,
                                      GALGAS_location & outOperand7,
                                      GALGAS_bool & outOperand8,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_taskListAST * p = (cCollectionElement_taskListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
    outOperand8.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_taskListAST) ;
    outOperand0 = p->mObject.mProperty_mTaskName ;
    outOperand1 = p->mObject.mProperty_mLowerPriorityTaskList ;
    outOperand2 = p->mObject.mProperty_mStackSize ;
    outOperand3 = p->mObject.mProperty_mTaskSetupListAST ;
    outOperand4 = p->mObject.mProperty_mTaskActivateListAST ;
    outOperand5 = p->mObject.mProperty_mTaskDeactivateListAST ;
    outOperand6 = p->mObject.mProperty_mGuardedCommandList ;
    outOperand7 = p->mObject.mProperty_mEndOfTaskDeclaration ;
    outOperand8 = p->mObject.mProperty_mAutoStart ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_taskListAST GALGAS_taskListAST::add_operation (const GALGAS_taskListAST & inOperand,
                                                      C_Compiler * /* inCompiler */
                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_taskListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_taskListAST GALGAS_taskListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_taskListAST result = GALGAS_taskListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_taskListAST GALGAS_taskListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_taskListAST result = GALGAS_taskListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_taskListAST GALGAS_taskListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_taskListAST result = GALGAS_taskListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_taskListAST::plusAssign_operation (const GALGAS_taskListAST inOperand,
                                               C_Compiler * /* inCompiler */
                                               COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_taskListAST::setter_setMTaskNameAtIndex (GALGAS_lstring inOperand,
                                                     GALGAS_uint inIndex,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_taskListAST * p = (cCollectionElement_taskListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_taskListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mTaskName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_taskListAST::getter_mTaskNameAtIndex (const GALGAS_uint & inIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_taskListAST * p = (cCollectionElement_taskListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_taskListAST) ;
    result = p->mObject.mProperty_mTaskName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_taskListAST::setter_setMLowerPriorityTaskListAtIndex (GALGAS_lstringlist inOperand,
                                                                  GALGAS_uint inIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_taskListAST * p = (cCollectionElement_taskListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_taskListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mLowerPriorityTaskList = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_taskListAST::getter_mLowerPriorityTaskListAtIndex (const GALGAS_uint & inIndex,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_taskListAST * p = (cCollectionElement_taskListAST *) attributes.ptr () ;
  GALGAS_lstringlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_taskListAST) ;
    result = p->mObject.mProperty_mLowerPriorityTaskList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_taskListAST::setter_setMStackSizeAtIndex (GALGAS_lbigint inOperand,
                                                      GALGAS_uint inIndex,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_taskListAST * p = (cCollectionElement_taskListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_taskListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mStackSize = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lbigint GALGAS_taskListAST::getter_mStackSizeAtIndex (const GALGAS_uint & inIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_taskListAST * p = (cCollectionElement_taskListAST *) attributes.ptr () ;
  GALGAS_lbigint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_taskListAST) ;
    result = p->mObject.mProperty_mStackSize ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_taskListAST::setter_setMTaskSetupListASTAtIndex (GALGAS_taskSetupListAST inOperand,
                                                             GALGAS_uint inIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_taskListAST * p = (cCollectionElement_taskListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_taskListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mTaskSetupListAST = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_taskSetupListAST GALGAS_taskListAST::getter_mTaskSetupListASTAtIndex (const GALGAS_uint & inIndex,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_taskListAST * p = (cCollectionElement_taskListAST *) attributes.ptr () ;
  GALGAS_taskSetupListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_taskListAST) ;
    result = p->mObject.mProperty_mTaskSetupListAST ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_taskListAST::setter_setMTaskActivateListASTAtIndex (GALGAS_taskSetupListAST inOperand,
                                                                GALGAS_uint inIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_taskListAST * p = (cCollectionElement_taskListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_taskListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mTaskActivateListAST = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_taskSetupListAST GALGAS_taskListAST::getter_mTaskActivateListASTAtIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_taskListAST * p = (cCollectionElement_taskListAST *) attributes.ptr () ;
  GALGAS_taskSetupListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_taskListAST) ;
    result = p->mObject.mProperty_mTaskActivateListAST ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_taskListAST::setter_setMTaskDeactivateListASTAtIndex (GALGAS_taskSetupListAST inOperand,
                                                                  GALGAS_uint inIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_taskListAST * p = (cCollectionElement_taskListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_taskListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mTaskDeactivateListAST = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_taskSetupListAST GALGAS_taskListAST::getter_mTaskDeactivateListASTAtIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_taskListAST * p = (cCollectionElement_taskListAST *) attributes.ptr () ;
  GALGAS_taskSetupListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_taskListAST) ;
    result = p->mObject.mProperty_mTaskDeactivateListAST ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_taskListAST::setter_setMGuardedCommandListAtIndex (GALGAS_syncInstructionBranchListAST inOperand,
                                                               GALGAS_uint inIndex,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_taskListAST * p = (cCollectionElement_taskListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_taskListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mGuardedCommandList = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syncInstructionBranchListAST GALGAS_taskListAST::getter_mGuardedCommandListAtIndex (const GALGAS_uint & inIndex,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_taskListAST * p = (cCollectionElement_taskListAST *) attributes.ptr () ;
  GALGAS_syncInstructionBranchListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_taskListAST) ;
    result = p->mObject.mProperty_mGuardedCommandList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_taskListAST::setter_setMEndOfTaskDeclarationAtIndex (GALGAS_location inOperand,
                                                                 GALGAS_uint inIndex,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_taskListAST * p = (cCollectionElement_taskListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_taskListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mEndOfTaskDeclaration = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_taskListAST::getter_mEndOfTaskDeclarationAtIndex (const GALGAS_uint & inIndex,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_taskListAST * p = (cCollectionElement_taskListAST *) attributes.ptr () ;
  GALGAS_location result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_taskListAST) ;
    result = p->mObject.mProperty_mEndOfTaskDeclaration ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_taskListAST::setter_setMAutoStartAtIndex (GALGAS_bool inOperand,
                                                      GALGAS_uint inIndex,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_taskListAST * p = (cCollectionElement_taskListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_taskListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mAutoStart = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_taskListAST::getter_mAutoStartAtIndex (const GALGAS_uint & inIndex,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_taskListAST * p = (cCollectionElement_taskListAST *) attributes.ptr () ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_taskListAST) ;
    result = p->mObject.mProperty_mAutoStart ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_taskListAST::cEnumerator_taskListAST (const GALGAS_taskListAST & inEnumeratedObject,
                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_taskListAST_2D_element cEnumerator_taskListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_taskListAST * p = (const cCollectionElement_taskListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_taskListAST) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_taskListAST::current_mTaskName (LOCATION_ARGS) const {
  const cCollectionElement_taskListAST * p = (const cCollectionElement_taskListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_taskListAST) ;
  return p->mObject.mProperty_mTaskName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist cEnumerator_taskListAST::current_mLowerPriorityTaskList (LOCATION_ARGS) const {
  const cCollectionElement_taskListAST * p = (const cCollectionElement_taskListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_taskListAST) ;
  return p->mObject.mProperty_mLowerPriorityTaskList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lbigint cEnumerator_taskListAST::current_mStackSize (LOCATION_ARGS) const {
  const cCollectionElement_taskListAST * p = (const cCollectionElement_taskListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_taskListAST) ;
  return p->mObject.mProperty_mStackSize ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_taskSetupListAST cEnumerator_taskListAST::current_mTaskSetupListAST (LOCATION_ARGS) const {
  const cCollectionElement_taskListAST * p = (const cCollectionElement_taskListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_taskListAST) ;
  return p->mObject.mProperty_mTaskSetupListAST ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_taskSetupListAST cEnumerator_taskListAST::current_mTaskActivateListAST (LOCATION_ARGS) const {
  const cCollectionElement_taskListAST * p = (const cCollectionElement_taskListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_taskListAST) ;
  return p->mObject.mProperty_mTaskActivateListAST ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_taskSetupListAST cEnumerator_taskListAST::current_mTaskDeactivateListAST (LOCATION_ARGS) const {
  const cCollectionElement_taskListAST * p = (const cCollectionElement_taskListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_taskListAST) ;
  return p->mObject.mProperty_mTaskDeactivateListAST ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syncInstructionBranchListAST cEnumerator_taskListAST::current_mGuardedCommandList (LOCATION_ARGS) const {
  const cCollectionElement_taskListAST * p = (const cCollectionElement_taskListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_taskListAST) ;
  return p->mObject.mProperty_mGuardedCommandList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cEnumerator_taskListAST::current_mEndOfTaskDeclaration (LOCATION_ARGS) const {
  const cCollectionElement_taskListAST * p = (const cCollectionElement_taskListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_taskListAST) ;
  return p->mObject.mProperty_mEndOfTaskDeclaration ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_taskListAST::current_mAutoStart (LOCATION_ARGS) const {
  const cCollectionElement_taskListAST * p = (const cCollectionElement_taskListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_taskListAST) ;
  return p->mObject.mProperty_mAutoStart ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@taskListAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_taskListAST ("taskListAST",
                                    NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_taskListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_taskListAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_taskListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_taskListAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_taskListAST GALGAS_taskListAST::extractObject (const GALGAS_object & inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GALGAS_taskListAST result ;
  const GALGAS_taskListAST * p = (const GALGAS_taskListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_taskListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("taskListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@checkTargetListAST' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_checkTargetListAST : public cCollectionElement {
  public: GALGAS_checkTargetListAST_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_checkTargetListAST (const GALGAS_location & in_mTargetConstructLocation,
                                                 const GALGAS_lstringlist & in_mAcceptedTargetList
                                                 COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_checkTargetListAST (const GALGAS_checkTargetListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_checkTargetListAST::cCollectionElement_checkTargetListAST (const GALGAS_location & in_mTargetConstructLocation,
                                                                              const GALGAS_lstringlist & in_mAcceptedTargetList
                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mTargetConstructLocation, in_mAcceptedTargetList) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_checkTargetListAST::cCollectionElement_checkTargetListAST (const GALGAS_checkTargetListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mTargetConstructLocation, inElement.mProperty_mAcceptedTargetList) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_checkTargetListAST::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_checkTargetListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_checkTargetListAST (mObject.mProperty_mTargetConstructLocation, mObject.mProperty_mAcceptedTargetList COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_checkTargetListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTargetConstructLocation" ":" ;
  mObject.mProperty_mTargetConstructLocation.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAcceptedTargetList" ":" ;
  mObject.mProperty_mAcceptedTargetList.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_checkTargetListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_checkTargetListAST * operand = (cCollectionElement_checkTargetListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_checkTargetListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_checkTargetListAST::GALGAS_checkTargetListAST (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_checkTargetListAST::GALGAS_checkTargetListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_checkTargetListAST GALGAS_checkTargetListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_checkTargetListAST  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_checkTargetListAST GALGAS_checkTargetListAST::constructor_listWithValue (const GALGAS_location & inOperand0,
                                                                                const GALGAS_lstringlist & inOperand1
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_checkTargetListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_checkTargetListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_checkTargetListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_checkTargetListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                           const GALGAS_location & in_mTargetConstructLocation,
                                                           const GALGAS_lstringlist & in_mAcceptedTargetList
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_checkTargetListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_checkTargetListAST (in_mTargetConstructLocation,
                                                        in_mAcceptedTargetList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_checkTargetListAST::addAssign_operation (const GALGAS_location & inOperand0,
                                                     const GALGAS_lstringlist & inOperand1
                                                     COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_checkTargetListAST (inOperand0, inOperand1 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{ // Destroy receiver
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_checkTargetListAST::setter_append (GALGAS_checkTargetListAST_2D_element inElement,
                                               C_Compiler * /* inCompiler */
                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_checkTargetListAST (inElement COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_checkTargetListAST::setter_insertAtIndex (const GALGAS_location inOperand0,
                                                      const GALGAS_lstringlist inOperand1,
                                                      const GALGAS_uint inInsertionIndex,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_checkTargetListAST (inOperand0, inOperand1 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_checkTargetListAST::setter_removeAtIndex (GALGAS_location & outOperand0,
                                                      GALGAS_lstringlist & outOperand1,
                                                      const GALGAS_uint inRemoveIndex,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_checkTargetListAST * p = (cCollectionElement_checkTargetListAST *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_checkTargetListAST) ;
        outOperand0 = p->mObject.mProperty_mTargetConstructLocation ;
        outOperand1 = p->mObject.mProperty_mAcceptedTargetList ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_checkTargetListAST::setter_popFirst (GALGAS_location & outOperand0,
                                                 GALGAS_lstringlist & outOperand1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_checkTargetListAST * p = (cCollectionElement_checkTargetListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_checkTargetListAST) ;
    outOperand0 = p->mObject.mProperty_mTargetConstructLocation ;
    outOperand1 = p->mObject.mProperty_mAcceptedTargetList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_checkTargetListAST::setter_popLast (GALGAS_location & outOperand0,
                                                GALGAS_lstringlist & outOperand1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_checkTargetListAST * p = (cCollectionElement_checkTargetListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_checkTargetListAST) ;
    outOperand0 = p->mObject.mProperty_mTargetConstructLocation ;
    outOperand1 = p->mObject.mProperty_mAcceptedTargetList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_checkTargetListAST::method_first (GALGAS_location & outOperand0,
                                              GALGAS_lstringlist & outOperand1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_checkTargetListAST * p = (cCollectionElement_checkTargetListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_checkTargetListAST) ;
    outOperand0 = p->mObject.mProperty_mTargetConstructLocation ;
    outOperand1 = p->mObject.mProperty_mAcceptedTargetList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_checkTargetListAST::method_last (GALGAS_location & outOperand0,
                                             GALGAS_lstringlist & outOperand1,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_checkTargetListAST * p = (cCollectionElement_checkTargetListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_checkTargetListAST) ;
    outOperand0 = p->mObject.mProperty_mTargetConstructLocation ;
    outOperand1 = p->mObject.mProperty_mAcceptedTargetList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_checkTargetListAST GALGAS_checkTargetListAST::add_operation (const GALGAS_checkTargetListAST & inOperand,
                                                                    C_Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_checkTargetListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_checkTargetListAST GALGAS_checkTargetListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_checkTargetListAST result = GALGAS_checkTargetListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_checkTargetListAST GALGAS_checkTargetListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_checkTargetListAST result = GALGAS_checkTargetListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_checkTargetListAST GALGAS_checkTargetListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_checkTargetListAST result = GALGAS_checkTargetListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_checkTargetListAST::plusAssign_operation (const GALGAS_checkTargetListAST inOperand,
                                                      C_Compiler * /* inCompiler */
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_checkTargetListAST::setter_setMTargetConstructLocationAtIndex (GALGAS_location inOperand,
                                                                           GALGAS_uint inIndex,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_checkTargetListAST * p = (cCollectionElement_checkTargetListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_checkTargetListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mTargetConstructLocation = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_checkTargetListAST::getter_mTargetConstructLocationAtIndex (const GALGAS_uint & inIndex,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_checkTargetListAST * p = (cCollectionElement_checkTargetListAST *) attributes.ptr () ;
  GALGAS_location result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_checkTargetListAST) ;
    result = p->mObject.mProperty_mTargetConstructLocation ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_checkTargetListAST::setter_setMAcceptedTargetListAtIndex (GALGAS_lstringlist inOperand,
                                                                      GALGAS_uint inIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_checkTargetListAST * p = (cCollectionElement_checkTargetListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_checkTargetListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mAcceptedTargetList = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_checkTargetListAST::getter_mAcceptedTargetListAtIndex (const GALGAS_uint & inIndex,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_checkTargetListAST * p = (cCollectionElement_checkTargetListAST *) attributes.ptr () ;
  GALGAS_lstringlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_checkTargetListAST) ;
    result = p->mObject.mProperty_mAcceptedTargetList ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_checkTargetListAST::cEnumerator_checkTargetListAST (const GALGAS_checkTargetListAST & inEnumeratedObject,
                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_checkTargetListAST_2D_element cEnumerator_checkTargetListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_checkTargetListAST * p = (const cCollectionElement_checkTargetListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_checkTargetListAST) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cEnumerator_checkTargetListAST::current_mTargetConstructLocation (LOCATION_ARGS) const {
  const cCollectionElement_checkTargetListAST * p = (const cCollectionElement_checkTargetListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_checkTargetListAST) ;
  return p->mObject.mProperty_mTargetConstructLocation ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist cEnumerator_checkTargetListAST::current_mAcceptedTargetList (LOCATION_ARGS) const {
  const cCollectionElement_checkTargetListAST * p = (const cCollectionElement_checkTargetListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_checkTargetListAST) ;
  return p->mObject.mProperty_mAcceptedTargetList ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@checkTargetListAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_checkTargetListAST ("checkTargetListAST",
                                           NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_checkTargetListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_checkTargetListAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_checkTargetListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_checkTargetListAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_checkTargetListAST GALGAS_checkTargetListAST::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_checkTargetListAST result ;
  const GALGAS_checkTargetListAST * p = (const GALGAS_checkTargetListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_checkTargetListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("checkTargetListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@driverDeclarationListAST' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_driverDeclarationListAST : public cCollectionElement {
  public: GALGAS_driverDeclarationListAST_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_driverDeclarationListAST (const GALGAS_driverDeclarationAST & in_mDriver
                                                       COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_driverDeclarationListAST (const GALGAS_driverDeclarationListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_driverDeclarationListAST::cCollectionElement_driverDeclarationListAST (const GALGAS_driverDeclarationAST & in_mDriver
                                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mDriver) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_driverDeclarationListAST::cCollectionElement_driverDeclarationListAST (const GALGAS_driverDeclarationListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mDriver) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_driverDeclarationListAST::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_driverDeclarationListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_driverDeclarationListAST (mObject.mProperty_mDriver COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_driverDeclarationListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mDriver" ":" ;
  mObject.mProperty_mDriver.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_driverDeclarationListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_driverDeclarationListAST * operand = (cCollectionElement_driverDeclarationListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_driverDeclarationListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_driverDeclarationListAST::GALGAS_driverDeclarationListAST (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_driverDeclarationListAST::GALGAS_driverDeclarationListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_driverDeclarationListAST GALGAS_driverDeclarationListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_driverDeclarationListAST  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_driverDeclarationListAST GALGAS_driverDeclarationListAST::constructor_listWithValue (const GALGAS_driverDeclarationAST & inOperand0
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_driverDeclarationListAST result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_driverDeclarationListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_driverDeclarationListAST::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_driverDeclarationListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                 const GALGAS_driverDeclarationAST & in_mDriver
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_driverDeclarationListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_driverDeclarationListAST (in_mDriver COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_driverDeclarationListAST::addAssign_operation (const GALGAS_driverDeclarationAST & inOperand0
                                                           COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_driverDeclarationListAST (inOperand0 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{ // Destroy receiver
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_driverDeclarationListAST::setter_append (GALGAS_driverDeclarationListAST_2D_element inElement,
                                                     C_Compiler * /* inCompiler */
                                                     COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_driverDeclarationListAST (inElement COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_driverDeclarationListAST::setter_insertAtIndex (const GALGAS_driverDeclarationAST inOperand0,
                                                            const GALGAS_uint inInsertionIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_driverDeclarationListAST (inOperand0 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_driverDeclarationListAST::setter_removeAtIndex (GALGAS_driverDeclarationAST & outOperand0,
                                                            const GALGAS_uint inRemoveIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_driverDeclarationListAST * p = (cCollectionElement_driverDeclarationListAST *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_driverDeclarationListAST) ;
        outOperand0 = p->mObject.mProperty_mDriver ;
      }
    }else{
      outOperand0.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_driverDeclarationListAST::setter_popFirst (GALGAS_driverDeclarationAST & outOperand0,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_driverDeclarationListAST * p = (cCollectionElement_driverDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_driverDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mDriver ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_driverDeclarationListAST::setter_popLast (GALGAS_driverDeclarationAST & outOperand0,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_driverDeclarationListAST * p = (cCollectionElement_driverDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_driverDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mDriver ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_driverDeclarationListAST::method_first (GALGAS_driverDeclarationAST & outOperand0,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_driverDeclarationListAST * p = (cCollectionElement_driverDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_driverDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mDriver ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_driverDeclarationListAST::method_last (GALGAS_driverDeclarationAST & outOperand0,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_driverDeclarationListAST * p = (cCollectionElement_driverDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_driverDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mDriver ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_driverDeclarationListAST GALGAS_driverDeclarationListAST::add_operation (const GALGAS_driverDeclarationListAST & inOperand,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_driverDeclarationListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_driverDeclarationListAST GALGAS_driverDeclarationListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_driverDeclarationListAST result = GALGAS_driverDeclarationListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_driverDeclarationListAST GALGAS_driverDeclarationListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_driverDeclarationListAST result = GALGAS_driverDeclarationListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_driverDeclarationListAST GALGAS_driverDeclarationListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_driverDeclarationListAST result = GALGAS_driverDeclarationListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_driverDeclarationListAST::plusAssign_operation (const GALGAS_driverDeclarationListAST inOperand,
                                                            C_Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_driverDeclarationListAST::setter_setMDriverAtIndex (GALGAS_driverDeclarationAST inOperand,
                                                                GALGAS_uint inIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_driverDeclarationListAST * p = (cCollectionElement_driverDeclarationListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_driverDeclarationListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mDriver = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_driverDeclarationAST GALGAS_driverDeclarationListAST::getter_mDriverAtIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_driverDeclarationListAST * p = (cCollectionElement_driverDeclarationListAST *) attributes.ptr () ;
  GALGAS_driverDeclarationAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_driverDeclarationListAST) ;
    result = p->mObject.mProperty_mDriver ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_driverDeclarationListAST::cEnumerator_driverDeclarationListAST (const GALGAS_driverDeclarationListAST & inEnumeratedObject,
                                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_driverDeclarationListAST_2D_element cEnumerator_driverDeclarationListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_driverDeclarationListAST * p = (const cCollectionElement_driverDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_driverDeclarationListAST) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_driverDeclarationAST cEnumerator_driverDeclarationListAST::current_mDriver (LOCATION_ARGS) const {
  const cCollectionElement_driverDeclarationListAST * p = (const cCollectionElement_driverDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_driverDeclarationListAST) ;
  return p->mObject.mProperty_mDriver ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@driverDeclarationListAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_driverDeclarationListAST ("driverDeclarationListAST",
                                                 NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_driverDeclarationListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_driverDeclarationListAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_driverDeclarationListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_driverDeclarationListAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_driverDeclarationListAST GALGAS_driverDeclarationListAST::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_driverDeclarationListAST result ;
  const GALGAS_driverDeclarationListAST * p = (const GALGAS_driverDeclarationListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_driverDeclarationListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("driverDeclarationListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@driverInstanciationListAST' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_driverInstanciationListAST : public cCollectionElement {
  public: GALGAS_driverInstanciationListAST_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_driverInstanciationListAST (const GALGAS_lstring & in_mDriverName,
                                                         const GALGAS_driverInstanciationArgumentListAST & in_mDriverInstanciationArgumentList
                                                         COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_driverInstanciationListAST (const GALGAS_driverInstanciationListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_driverInstanciationListAST::cCollectionElement_driverInstanciationListAST (const GALGAS_lstring & in_mDriverName,
                                                                                              const GALGAS_driverInstanciationArgumentListAST & in_mDriverInstanciationArgumentList
                                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mDriverName, in_mDriverInstanciationArgumentList) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_driverInstanciationListAST::cCollectionElement_driverInstanciationListAST (const GALGAS_driverInstanciationListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mDriverName, inElement.mProperty_mDriverInstanciationArgumentList) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_driverInstanciationListAST::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_driverInstanciationListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_driverInstanciationListAST (mObject.mProperty_mDriverName, mObject.mProperty_mDriverInstanciationArgumentList COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_driverInstanciationListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mDriverName" ":" ;
  mObject.mProperty_mDriverName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mDriverInstanciationArgumentList" ":" ;
  mObject.mProperty_mDriverInstanciationArgumentList.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_driverInstanciationListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_driverInstanciationListAST * operand = (cCollectionElement_driverInstanciationListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_driverInstanciationListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_driverInstanciationListAST::GALGAS_driverInstanciationListAST (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_driverInstanciationListAST::GALGAS_driverInstanciationListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_driverInstanciationListAST GALGAS_driverInstanciationListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_driverInstanciationListAST  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_driverInstanciationListAST GALGAS_driverInstanciationListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                const GALGAS_driverInstanciationArgumentListAST & inOperand1
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_driverInstanciationListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_driverInstanciationListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_driverInstanciationListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_driverInstanciationListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                   const GALGAS_lstring & in_mDriverName,
                                                                   const GALGAS_driverInstanciationArgumentListAST & in_mDriverInstanciationArgumentList
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_driverInstanciationListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_driverInstanciationListAST (in_mDriverName,
                                                                in_mDriverInstanciationArgumentList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_driverInstanciationListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                             const GALGAS_driverInstanciationArgumentListAST & inOperand1
                                                             COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_driverInstanciationListAST (inOperand0, inOperand1 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{ // Destroy receiver
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_driverInstanciationListAST::setter_append (GALGAS_driverInstanciationListAST_2D_element inElement,
                                                       C_Compiler * /* inCompiler */
                                                       COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_driverInstanciationListAST (inElement COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_driverInstanciationListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                              const GALGAS_driverInstanciationArgumentListAST inOperand1,
                                                              const GALGAS_uint inInsertionIndex,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_driverInstanciationListAST (inOperand0, inOperand1 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_driverInstanciationListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                              GALGAS_driverInstanciationArgumentListAST & outOperand1,
                                                              const GALGAS_uint inRemoveIndex,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_driverInstanciationListAST * p = (cCollectionElement_driverInstanciationListAST *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_driverInstanciationListAST) ;
        outOperand0 = p->mObject.mProperty_mDriverName ;
        outOperand1 = p->mObject.mProperty_mDriverInstanciationArgumentList ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_driverInstanciationListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                         GALGAS_driverInstanciationArgumentListAST & outOperand1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_driverInstanciationListAST * p = (cCollectionElement_driverInstanciationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_driverInstanciationListAST) ;
    outOperand0 = p->mObject.mProperty_mDriverName ;
    outOperand1 = p->mObject.mProperty_mDriverInstanciationArgumentList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_driverInstanciationListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                        GALGAS_driverInstanciationArgumentListAST & outOperand1,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_driverInstanciationListAST * p = (cCollectionElement_driverInstanciationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_driverInstanciationListAST) ;
    outOperand0 = p->mObject.mProperty_mDriverName ;
    outOperand1 = p->mObject.mProperty_mDriverInstanciationArgumentList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_driverInstanciationListAST::method_first (GALGAS_lstring & outOperand0,
                                                      GALGAS_driverInstanciationArgumentListAST & outOperand1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_driverInstanciationListAST * p = (cCollectionElement_driverInstanciationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_driverInstanciationListAST) ;
    outOperand0 = p->mObject.mProperty_mDriverName ;
    outOperand1 = p->mObject.mProperty_mDriverInstanciationArgumentList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_driverInstanciationListAST::method_last (GALGAS_lstring & outOperand0,
                                                     GALGAS_driverInstanciationArgumentListAST & outOperand1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_driverInstanciationListAST * p = (cCollectionElement_driverInstanciationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_driverInstanciationListAST) ;
    outOperand0 = p->mObject.mProperty_mDriverName ;
    outOperand1 = p->mObject.mProperty_mDriverInstanciationArgumentList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_driverInstanciationListAST GALGAS_driverInstanciationListAST::add_operation (const GALGAS_driverInstanciationListAST & inOperand,
                                                                                    C_Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_driverInstanciationListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_driverInstanciationListAST GALGAS_driverInstanciationListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_driverInstanciationListAST result = GALGAS_driverInstanciationListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_driverInstanciationListAST GALGAS_driverInstanciationListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_driverInstanciationListAST result = GALGAS_driverInstanciationListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_driverInstanciationListAST GALGAS_driverInstanciationListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_driverInstanciationListAST result = GALGAS_driverInstanciationListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_driverInstanciationListAST::plusAssign_operation (const GALGAS_driverInstanciationListAST inOperand,
                                                              C_Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_driverInstanciationListAST::setter_setMDriverNameAtIndex (GALGAS_lstring inOperand,
                                                                      GALGAS_uint inIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_driverInstanciationListAST * p = (cCollectionElement_driverInstanciationListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_driverInstanciationListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mDriverName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_driverInstanciationListAST::getter_mDriverNameAtIndex (const GALGAS_uint & inIndex,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_driverInstanciationListAST * p = (cCollectionElement_driverInstanciationListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_driverInstanciationListAST) ;
    result = p->mObject.mProperty_mDriverName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_driverInstanciationListAST::setter_setMDriverInstanciationArgumentListAtIndex (GALGAS_driverInstanciationArgumentListAST inOperand,
                                                                                           GALGAS_uint inIndex,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_driverInstanciationListAST * p = (cCollectionElement_driverInstanciationListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_driverInstanciationListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mDriverInstanciationArgumentList = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_driverInstanciationArgumentListAST GALGAS_driverInstanciationListAST::getter_mDriverInstanciationArgumentListAtIndex (const GALGAS_uint & inIndex,
                                                                                                                             C_Compiler * inCompiler
                                                                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_driverInstanciationListAST * p = (cCollectionElement_driverInstanciationListAST *) attributes.ptr () ;
  GALGAS_driverInstanciationArgumentListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_driverInstanciationListAST) ;
    result = p->mObject.mProperty_mDriverInstanciationArgumentList ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_driverInstanciationListAST::cEnumerator_driverInstanciationListAST (const GALGAS_driverInstanciationListAST & inEnumeratedObject,
                                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_driverInstanciationListAST_2D_element cEnumerator_driverInstanciationListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_driverInstanciationListAST * p = (const cCollectionElement_driverInstanciationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_driverInstanciationListAST) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_driverInstanciationListAST::current_mDriverName (LOCATION_ARGS) const {
  const cCollectionElement_driverInstanciationListAST * p = (const cCollectionElement_driverInstanciationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_driverInstanciationListAST) ;
  return p->mObject.mProperty_mDriverName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_driverInstanciationArgumentListAST cEnumerator_driverInstanciationListAST::current_mDriverInstanciationArgumentList (LOCATION_ARGS) const {
  const cCollectionElement_driverInstanciationListAST * p = (const cCollectionElement_driverInstanciationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_driverInstanciationListAST) ;
  return p->mObject.mProperty_mDriverInstanciationArgumentList ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@driverInstanciationListAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_driverInstanciationListAST ("driverInstanciationListAST",
                                                   NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_driverInstanciationListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_driverInstanciationListAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_driverInstanciationListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_driverInstanciationListAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_driverInstanciationListAST GALGAS_driverInstanciationListAST::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_driverInstanciationListAST result ;
  const GALGAS_driverInstanciationListAST * p = (const GALGAS_driverInstanciationListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_driverInstanciationListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("driverInstanciationListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_controlRegisterUserAccesMapAST::cMapElement_controlRegisterUserAccesMapAST (const GALGAS_lstring & inKey
                                                                                        COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_controlRegisterUserAccesMapAST::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_controlRegisterUserAccesMapAST::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_controlRegisterUserAccesMapAST (mProperty_lkey COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_controlRegisterUserAccesMapAST::description (C_String & /* ioString */, const int32_t /* inIndentation */) const {
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_controlRegisterUserAccesMapAST::compare (const cCollectionElement * inOperand) const {
  cMapElement_controlRegisterUserAccesMapAST * operand = (cMapElement_controlRegisterUserAccesMapAST *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterUserAccesMapAST::GALGAS_controlRegisterUserAccesMapAST (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterUserAccesMapAST::GALGAS_controlRegisterUserAccesMapAST (const GALGAS_controlRegisterUserAccesMapAST & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterUserAccesMapAST & GALGAS_controlRegisterUserAccesMapAST::operator = (const GALGAS_controlRegisterUserAccesMapAST & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterUserAccesMapAST GALGAS_controlRegisterUserAccesMapAST::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_controlRegisterUserAccesMapAST result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterUserAccesMapAST GALGAS_controlRegisterUserAccesMapAST::constructor_mapWithMapToOverride (const GALGAS_controlRegisterUserAccesMapAST & inMapToOverride
                                                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterUserAccesMapAST result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterUserAccesMapAST GALGAS_controlRegisterUserAccesMapAST::getter_overriddenMap (C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const {
  GALGAS_controlRegisterUserAccesMapAST result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterUserAccesMapAST::addAssign_operation (const GALGAS_lstring & inKey,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cMapElement_controlRegisterUserAccesMapAST * p = NULL ;
  macroMyNew (p, cMapElement_controlRegisterUserAccesMapAST (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@controlRegisterUserAccesMapAST insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterUserAccesMapAST::setter_insertKey (GALGAS_lstring inKey,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cMapElement_controlRegisterUserAccesMapAST * p = NULL ;
  macroMyNew (p, cMapElement_controlRegisterUserAccesMapAST (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' register is already marked as @user in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterUserAccesMapAST::setter_removeKey (GALGAS_lstring inKey,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  const char * kRemoveErrorMessage = "-- INTERNAL ERROR ('%K') --" ;
  capCollectionElement attributes ;
  performRemove (inKey, attributes, inCompiler, kRemoveErrorMessage COMMA_THERE) ;
  cMapElement_controlRegisterUserAccesMapAST * p = (cMapElement_controlRegisterUserAccesMapAST *) attributes.ptr () ;
  if (NULL == p) {
  }else{
    macroValidSharedObject (p, cMapElement_controlRegisterUserAccesMapAST) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_controlRegisterUserAccesMapAST * GALGAS_controlRegisterUserAccesMapAST::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                                       const GALGAS_string & inKey
                                                                                                                       COMMA_LOCATION_ARGS) {
  cMapElement_controlRegisterUserAccesMapAST * result = (cMapElement_controlRegisterUserAccesMapAST *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_controlRegisterUserAccesMapAST) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_controlRegisterUserAccesMapAST::cEnumerator_controlRegisterUserAccesMapAST (const GALGAS_controlRegisterUserAccesMapAST & inEnumeratedObject,
                                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterUserAccesMapAST_2D_element cEnumerator_controlRegisterUserAccesMapAST::current (LOCATION_ARGS) const {
  const cMapElement_controlRegisterUserAccesMapAST * p = (const cMapElement_controlRegisterUserAccesMapAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_controlRegisterUserAccesMapAST) ;
  return GALGAS_controlRegisterUserAccesMapAST_2D_element (p->mProperty_lkey) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_controlRegisterUserAccesMapAST::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_controlRegisterUserAccesMapAST::optional_searchKey (const GALGAS_string & inKey) const {
  const cMapElement_controlRegisterUserAccesMapAST * p = (const cMapElement_controlRegisterUserAccesMapAST *) searchForKey (inKey) ;
  const bool result = NULL != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_controlRegisterUserAccesMapAST) ;
  }else{
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@controlRegisterUserAccesMapAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_controlRegisterUserAccesMapAST ("controlRegisterUserAccesMapAST",
                                                       NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_controlRegisterUserAccesMapAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterUserAccesMapAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_controlRegisterUserAccesMapAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_controlRegisterUserAccesMapAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterUserAccesMapAST GALGAS_controlRegisterUserAccesMapAST::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterUserAccesMapAST result ;
  const GALGAS_controlRegisterUserAccesMapAST * p = (const GALGAS_controlRegisterUserAccesMapAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_controlRegisterUserAccesMapAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterUserAccesMapAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@abstractDeclarationAST locationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <enterExtensionGetter_abstractDeclarationAST_locationForErrorSignaling> gExtensionGetterTable_abstractDeclarationAST_locationForErrorSignaling ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_locationForErrorSignaling (const int32_t inClassIndex,
                                                     enterExtensionGetter_abstractDeclarationAST_locationForErrorSignaling inGetter) {
  gExtensionGetterTable_abstractDeclarationAST_locationForErrorSignaling.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionGetter_abstractDeclarationAST_locationForErrorSignaling (void) {
  gExtensionGetterTable_abstractDeclarationAST_locationForErrorSignaling.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_abstractDeclarationAST_locationForErrorSignaling (NULL,
                                                                             freeExtensionGetter_abstractDeclarationAST_locationForErrorSignaling) ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location callExtensionGetter_locationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  GALGAS_location result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractDeclarationAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_abstractDeclarationAST_locationForErrorSignaling f = NULL ;
    if (classIndex < gExtensionGetterTable_abstractDeclarationAST_locationForErrorSignaling.count ()) {
      f = gExtensionGetterTable_abstractDeclarationAST_locationForErrorSignaling (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_abstractDeclarationAST_locationForErrorSignaling.count ()) {
           f = gExtensionGetterTable_abstractDeclarationAST_locationForErrorSignaling (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_abstractDeclarationAST_locationForErrorSignaling.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@abstractDeclarationAST enterExtension'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionMethodSignature_abstractDeclarationAST_enterExtension> gExtensionMethodTable_abstractDeclarationAST_enterExtension ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_enterExtension (const int32_t inClassIndex,
                                          extensionMethodSignature_abstractDeclarationAST_enterExtension inMethod) {
  gExtensionMethodTable_abstractDeclarationAST_enterExtension.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_enterExtension (const cPtr_abstractDeclarationAST * inObject,
                                         GALGAS_extendStaticArrayDeclarationDictAST & io_ioExtendStaticArrayDeclarationAST,
                                         GALGAS_abstractDeclarationAST & out_outNewDeclaration,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  out_outNewDeclaration.drop () ;
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractDeclarationAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_abstractDeclarationAST_enterExtension f = NULL ;
    if (classIndex < gExtensionMethodTable_abstractDeclarationAST_enterExtension.count ()) {
      f = gExtensionMethodTable_abstractDeclarationAST_enterExtension (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_abstractDeclarationAST_enterExtension.count ()) {
           f = gExtensionMethodTable_abstractDeclarationAST_enterExtension (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_abstractDeclarationAST_enterExtension.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioExtendStaticArrayDeclarationAST, out_outNewDeclaration, inCompiler COMMA_THERE) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_abstractDeclarationAST_enterExtension (const cPtr_abstractDeclarationAST * inObject,
                                                                   GALGAS_extendStaticArrayDeclarationDictAST & /* ioArgument_ioExtendStaticArrayDeclarationAST */,
                                                                   GALGAS_abstractDeclarationAST & outArgument_outNewDeclaration,
                                                                   C_Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_abstractDeclarationAST * object = inObject ;
  macroValidSharedObject (object, cPtr_abstractDeclarationAST) ;
  const GALGAS_abstractDeclarationAST temp_0 = object ;
  outArgument_outNewDeclaration = temp_0 ;
}
//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_abstractDeclarationAST_enterExtension (void) {
  enterExtensionMethod_enterExtension (kTypeDescriptor_GALGAS_abstractDeclarationAST.mSlotID,
                                       extensionMethod_abstractDeclarationAST_enterExtension) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionMethod_abstractDeclarationAST_enterExtension (void) {
  gExtensionMethodTable_abstractDeclarationAST_enterExtension.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_abstractDeclarationAST_enterExtension (defineExtensionMethod_abstractDeclarationAST_enterExtension,
                                                                  freeExtensionMethod_abstractDeclarationAST_enterExtension) ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineKind::GALGAS_routineKind (void) :
mEnum (kNotBuilt) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineKind GALGAS_routineKind::constructor_function (UNUSED_LOCATION_ARGS) {
  GALGAS_routineKind result ;
  result.mEnum = kEnum_function ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineKind GALGAS_routineKind::constructor_section (UNUSED_LOCATION_ARGS) {
  GALGAS_routineKind result ;
  result.mEnum = kEnum_section ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineKind GALGAS_routineKind::constructor_service (UNUSED_LOCATION_ARGS) {
  GALGAS_routineKind result ;
  result.mEnum = kEnum_service ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineKind GALGAS_routineKind::constructor_primitive (UNUSED_LOCATION_ARGS) {
  GALGAS_routineKind result ;
  result.mEnum = kEnum_primitive ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_routineKind::optional_function () const {
  const bool ok = mEnum == kEnum_function ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_routineKind::optional_section () const {
  const bool ok = mEnum == kEnum_section ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_routineKind::optional_service () const {
  const bool ok = mEnum == kEnum_service ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_routineKind::optional_primitive () const {
  const bool ok = mEnum == kEnum_primitive ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_routineKind [5] = {
  "(not built)",
  "function",
  "section",
  "service",
  "primitive"
} ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_routineKind::getter_isFunction (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_function == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_routineKind::getter_isSection (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_section == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_routineKind::getter_isService (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_service == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_routineKind::getter_isPrimitive (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_primitive == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_routineKind::description (C_String & ioString,
                                      const int32_t /* inIndentation */) const {
  ioString << "<enum @routineKind: " << gEnumNameArrayFor_routineKind [mEnum] ;
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_routineKind::objectCompare (const GALGAS_routineKind & inOperand) const {
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
//@routineKind type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_routineKind ("routineKind",
                                    NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_routineKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineKind ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_routineKind::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_routineKind (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

cMapElement_flatValuedObjectMap::cMapElement_flatValuedObjectMap (const GALGAS_lstring & inKey,
                                                                  const GALGAS_valuedObjectState & in_mObjectState,
                                                                  const GALGAS_bool & in_mObjectShouldBeValuedAtEndOfScope,
                                                                  const GALGAS_valuedObject & in_mValuedObject
                                                                  COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mObjectState (in_mObjectState),
mProperty_mObjectShouldBeValuedAtEndOfScope (in_mObjectShouldBeValuedAtEndOfScope),
mProperty_mValuedObject (in_mValuedObject) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_flatValuedObjectMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mObjectState.isValid () && mProperty_mObjectShouldBeValuedAtEndOfScope.isValid () && mProperty_mValuedObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_flatValuedObjectMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_flatValuedObjectMap (mProperty_lkey, mProperty_mObjectState, mProperty_mObjectShouldBeValuedAtEndOfScope, mProperty_mValuedObject COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_flatValuedObjectMap::description (C_String & ioString, const int32_t inIndentation) const {
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
  ioString << "mValuedObject" ":" ;
  mProperty_mValuedObject.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_flatValuedObjectMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_flatValuedObjectMap * operand = (cMapElement_flatValuedObjectMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mObjectState.objectCompare (operand->mProperty_mObjectState) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mObjectShouldBeValuedAtEndOfScope.objectCompare (operand->mProperty_mObjectShouldBeValuedAtEndOfScope) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mValuedObject.objectCompare (operand->mProperty_mValuedObject) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_flatValuedObjectMap::GALGAS_flatValuedObjectMap (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_flatValuedObjectMap::GALGAS_flatValuedObjectMap (const GALGAS_flatValuedObjectMap & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_flatValuedObjectMap & GALGAS_flatValuedObjectMap::operator = (const GALGAS_flatValuedObjectMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_flatValuedObjectMap GALGAS_flatValuedObjectMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_flatValuedObjectMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_flatValuedObjectMap GALGAS_flatValuedObjectMap::constructor_mapWithMapToOverride (const GALGAS_flatValuedObjectMap & inMapToOverride
                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_flatValuedObjectMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_flatValuedObjectMap GALGAS_flatValuedObjectMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  GALGAS_flatValuedObjectMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_flatValuedObjectMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                      const GALGAS_valuedObjectState & inArgument0,
                                                      const GALGAS_bool & inArgument1,
                                                      const GALGAS_valuedObject & inArgument2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  cMapElement_flatValuedObjectMap * p = NULL ;
  macroMyNew (p, cMapElement_flatValuedObjectMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@flatValuedObjectMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_flatValuedObjectMap::setter_insertKey (GALGAS_lstring inKey,
                                                   GALGAS_valuedObjectState inArgument0,
                                                   GALGAS_bool inArgument1,
                                                   GALGAS_valuedObject inArgument2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  cMapElement_flatValuedObjectMap * p = NULL ;
  macroMyNew (p, cMapElement_flatValuedObjectMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' entity is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_flatValuedObjectMap_searchKey = "there is no '%K' entity" ;

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_flatValuedObjectMap::method_searchKey (GALGAS_lstring inKey,
                                                   GALGAS_valuedObjectState & outArgument0,
                                                   GALGAS_bool & outArgument1,
                                                   GALGAS_valuedObject & outArgument2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  const cMapElement_flatValuedObjectMap * p = (const cMapElement_flatValuedObjectMap *) performSearch (inKey,
                                                                                                       inCompiler,
                                                                                                       kSearchErrorMessage_flatValuedObjectMap_searchKey
                                                                                                       COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_flatValuedObjectMap) ;
    outArgument0 = p->mProperty_mObjectState ;
    outArgument1 = p->mProperty_mObjectShouldBeValuedAtEndOfScope ;
    outArgument2 = p->mProperty_mValuedObject ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_flatValuedObjectMap::setter_removeKey (GALGAS_lstring inKey,
                                                   GALGAS_valuedObjectState & outArgument0,
                                                   GALGAS_bool & outArgument1,
                                                   GALGAS_valuedObject & outArgument2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  const char * kRemoveErrorMessage = "there is no '%K' entity" ;
  capCollectionElement attributes ;
  performRemove (inKey, attributes, inCompiler, kRemoveErrorMessage COMMA_THERE) ;
  cMapElement_flatValuedObjectMap * p = (cMapElement_flatValuedObjectMap *) attributes.ptr () ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_flatValuedObjectMap) ;
    outArgument0 = p->mProperty_mObjectState ;
    outArgument1 = p->mProperty_mObjectShouldBeValuedAtEndOfScope ;
    outArgument2 = p->mProperty_mValuedObject ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_valuedObjectState GALGAS_flatValuedObjectMap::getter_mObjectStateForKey (const GALGAS_string & inKey,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_flatValuedObjectMap * p = (const cMapElement_flatValuedObjectMap *) attributes ;
  GALGAS_valuedObjectState result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_flatValuedObjectMap) ;
    result = p->mProperty_mObjectState ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_flatValuedObjectMap::getter_mObjectShouldBeValuedAtEndOfScopeForKey (const GALGAS_string & inKey,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_flatValuedObjectMap * p = (const cMapElement_flatValuedObjectMap *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_flatValuedObjectMap) ;
    result = p->mProperty_mObjectShouldBeValuedAtEndOfScope ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_valuedObject GALGAS_flatValuedObjectMap::getter_mValuedObjectForKey (const GALGAS_string & inKey,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_flatValuedObjectMap * p = (const cMapElement_flatValuedObjectMap *) attributes ;
  GALGAS_valuedObject result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_flatValuedObjectMap) ;
    result = p->mProperty_mValuedObject ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_flatValuedObjectMap::setter_setMObjectStateForKey (GALGAS_valuedObjectState inAttributeValue,
                                                               GALGAS_string inKey,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_flatValuedObjectMap * p = (cMapElement_flatValuedObjectMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_flatValuedObjectMap) ;
    p->mProperty_mObjectState = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_flatValuedObjectMap::setter_setMObjectShouldBeValuedAtEndOfScopeForKey (GALGAS_bool inAttributeValue,
                                                                                    GALGAS_string inKey,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_flatValuedObjectMap * p = (cMapElement_flatValuedObjectMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_flatValuedObjectMap) ;
    p->mProperty_mObjectShouldBeValuedAtEndOfScope = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_flatValuedObjectMap::setter_setMValuedObjectForKey (GALGAS_valuedObject inAttributeValue,
                                                                GALGAS_string inKey,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_flatValuedObjectMap * p = (cMapElement_flatValuedObjectMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_flatValuedObjectMap) ;
    p->mProperty_mValuedObject = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_flatValuedObjectMap * GALGAS_flatValuedObjectMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                 const GALGAS_string & inKey
                                                                                                 COMMA_LOCATION_ARGS) {
  cMapElement_flatValuedObjectMap * result = (cMapElement_flatValuedObjectMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_flatValuedObjectMap) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_flatValuedObjectMap::cEnumerator_flatValuedObjectMap (const GALGAS_flatValuedObjectMap & inEnumeratedObject,
                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_flatValuedObjectMap_2D_element cEnumerator_flatValuedObjectMap::current (LOCATION_ARGS) const {
  const cMapElement_flatValuedObjectMap * p = (const cMapElement_flatValuedObjectMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_flatValuedObjectMap) ;
  return GALGAS_flatValuedObjectMap_2D_element (p->mProperty_lkey, p->mProperty_mObjectState, p->mProperty_mObjectShouldBeValuedAtEndOfScope, p->mProperty_mValuedObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_flatValuedObjectMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_valuedObjectState cEnumerator_flatValuedObjectMap::current_mObjectState (LOCATION_ARGS) const {
  const cMapElement_flatValuedObjectMap * p = (const cMapElement_flatValuedObjectMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_flatValuedObjectMap) ;
  return p->mProperty_mObjectState ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_flatValuedObjectMap::current_mObjectShouldBeValuedAtEndOfScope (LOCATION_ARGS) const {
  const cMapElement_flatValuedObjectMap * p = (const cMapElement_flatValuedObjectMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_flatValuedObjectMap) ;
  return p->mProperty_mObjectShouldBeValuedAtEndOfScope ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_valuedObject cEnumerator_flatValuedObjectMap::current_mValuedObject (LOCATION_ARGS) const {
  const cMapElement_flatValuedObjectMap * p = (const cMapElement_flatValuedObjectMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_flatValuedObjectMap) ;
  return p->mProperty_mValuedObject ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_flatValuedObjectMap::optional_searchKey (const GALGAS_string & inKey,
                                                     GALGAS_valuedObjectState & outArgument0,
                                                     GALGAS_bool & outArgument1,
                                                     GALGAS_valuedObject & outArgument2) const {
  const cMapElement_flatValuedObjectMap * p = (const cMapElement_flatValuedObjectMap *) searchForKey (inKey) ;
  const bool result = NULL != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_flatValuedObjectMap) ;
    outArgument0 = p->mProperty_mObjectState ;
    outArgument1 = p->mProperty_mObjectShouldBeValuedAtEndOfScope ;
    outArgument2 = p->mProperty_mValuedObject ;
  }else{
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@flatValuedObjectMap type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_flatValuedObjectMap ("flatValuedObjectMap",
                                            NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_flatValuedObjectMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_flatValuedObjectMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_flatValuedObjectMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_flatValuedObjectMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_flatValuedObjectMap GALGAS_flatValuedObjectMap::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_flatValuedObjectMap result ;
  const GALGAS_flatValuedObjectMap * p = (const GALGAS_flatValuedObjectMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_flatValuedObjectMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("flatValuedObjectMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@scopeStack' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_scopeStack : public cCollectionElement {
  public: GALGAS_scopeStack_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_scopeStack (const GALGAS_scopeKind & in_mScopeKind,
                                         const GALGAS_bool & in_mFirstBranch,
                                         const GALGAS_referenceStateMap & in_mInitialStateMap,
                                         const GALGAS_referenceStateMap & in_mReferenceStateMap,
                                         const GALGAS_lstringlist & in_mObjectList
                                         COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_scopeStack (const GALGAS_scopeStack_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_scopeStack::cCollectionElement_scopeStack (const GALGAS_scopeKind & in_mScopeKind,
                                                              const GALGAS_bool & in_mFirstBranch,
                                                              const GALGAS_referenceStateMap & in_mInitialStateMap,
                                                              const GALGAS_referenceStateMap & in_mReferenceStateMap,
                                                              const GALGAS_lstringlist & in_mObjectList
                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mScopeKind, in_mFirstBranch, in_mInitialStateMap, in_mReferenceStateMap, in_mObjectList) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_scopeStack::cCollectionElement_scopeStack (const GALGAS_scopeStack_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mScopeKind, inElement.mProperty_mFirstBranch, inElement.mProperty_mInitialStateMap, inElement.mProperty_mReferenceStateMap, inElement.mProperty_mObjectList) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_scopeStack::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_scopeStack::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_scopeStack (mObject.mProperty_mScopeKind, mObject.mProperty_mFirstBranch, mObject.mProperty_mInitialStateMap, mObject.mProperty_mReferenceStateMap, mObject.mProperty_mObjectList COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_scopeStack::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_scopeStack * operand = (cCollectionElement_scopeStack *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_scopeStack) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_scopeStack::GALGAS_scopeStack (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_scopeStack::GALGAS_scopeStack (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_scopeStack GALGAS_scopeStack::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_scopeStack  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_scopeStack::addAssign_operation (const GALGAS_scopeKind & inOperand0,
                                             const GALGAS_bool & inOperand1,
                                             const GALGAS_referenceStateMap & inOperand2,
                                             const GALGAS_referenceStateMap & inOperand3,
                                             const GALGAS_lstringlist & inOperand4
                                             COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_scopeStack (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{ // Destroy receiver
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_scopeStack::setter_append (GALGAS_scopeStack_2D_element inElement,
                                       C_Compiler * /* inCompiler */
                                       COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_scopeStack (inElement COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_scopeStack::setter_insertAtIndex (const GALGAS_scopeKind inOperand0,
                                              const GALGAS_bool inOperand1,
                                              const GALGAS_referenceStateMap inOperand2,
                                              const GALGAS_referenceStateMap inOperand3,
                                              const GALGAS_lstringlist inOperand4,
                                              const GALGAS_uint inInsertionIndex,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_scopeStack (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_scopeStack::setter_removeAtIndex (GALGAS_scopeKind & outOperand0,
                                              GALGAS_bool & outOperand1,
                                              GALGAS_referenceStateMap & outOperand2,
                                              GALGAS_referenceStateMap & outOperand3,
                                              GALGAS_lstringlist & outOperand4,
                                              const GALGAS_uint inRemoveIndex,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_scopeStack * p = (cCollectionElement_scopeStack *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        outOperand3.drop () ;
        outOperand4.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_scopeStack) ;
        outOperand0 = p->mObject.mProperty_mScopeKind ;
        outOperand1 = p->mObject.mProperty_mFirstBranch ;
        outOperand2 = p->mObject.mProperty_mInitialStateMap ;
        outOperand3 = p->mObject.mProperty_mReferenceStateMap ;
        outOperand4 = p->mObject.mProperty_mObjectList ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      outOperand4.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_scopeStack GALGAS_scopeStack::getter_subListWithRange (const GALGAS_range & inRange,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_scopeStack result = GALGAS_scopeStack::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_scopeStack GALGAS_scopeStack::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_scopeStack result = GALGAS_scopeStack::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_scopeStack GALGAS_scopeStack::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_scopeStack result = GALGAS_scopeStack::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_scopeStack::plusAssign_operation (const GALGAS_scopeStack inOperand,
                                              C_Compiler * /* inCompiler */
                                              COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_scopeStack::setter_setMScopeKindAtIndex (GALGAS_scopeKind inOperand,
                                                     GALGAS_uint inIndex,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_scopeStack * p = (cCollectionElement_scopeStack *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_scopeStack) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mScopeKind = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_scopeStack::setter_setMFirstBranchAtIndex (GALGAS_bool inOperand,
                                                       GALGAS_uint inIndex,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_scopeStack * p = (cCollectionElement_scopeStack *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_scopeStack) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFirstBranch = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_scopeStack::setter_setMInitialStateMapAtIndex (GALGAS_referenceStateMap inOperand,
                                                           GALGAS_uint inIndex,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_scopeStack * p = (cCollectionElement_scopeStack *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_scopeStack) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInitialStateMap = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_scopeStack::setter_setMReferenceStateMapAtIndex (GALGAS_referenceStateMap inOperand,
                                                             GALGAS_uint inIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_scopeStack * p = (cCollectionElement_scopeStack *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_scopeStack) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mReferenceStateMap = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_scopeStack::setter_setMObjectListAtIndex (GALGAS_lstringlist inOperand,
                                                      GALGAS_uint inIndex,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_scopeStack * p = (cCollectionElement_scopeStack *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_scopeStack) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mObjectList = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_scopeStack::cEnumerator_scopeStack (const GALGAS_scopeStack & inEnumeratedObject,
                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_scopeStack_2D_element cEnumerator_scopeStack::current (LOCATION_ARGS) const {
  const cCollectionElement_scopeStack * p = (const cCollectionElement_scopeStack *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_scopeStack) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_scopeKind cEnumerator_scopeStack::current_mScopeKind (LOCATION_ARGS) const {
  const cCollectionElement_scopeStack * p = (const cCollectionElement_scopeStack *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_scopeStack) ;
  return p->mObject.mProperty_mScopeKind ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_scopeStack::current_mFirstBranch (LOCATION_ARGS) const {
  const cCollectionElement_scopeStack * p = (const cCollectionElement_scopeStack *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_scopeStack) ;
  return p->mObject.mProperty_mFirstBranch ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_referenceStateMap cEnumerator_scopeStack::current_mInitialStateMap (LOCATION_ARGS) const {
  const cCollectionElement_scopeStack * p = (const cCollectionElement_scopeStack *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_scopeStack) ;
  return p->mObject.mProperty_mInitialStateMap ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_referenceStateMap cEnumerator_scopeStack::current_mReferenceStateMap (LOCATION_ARGS) const {
  const cCollectionElement_scopeStack * p = (const cCollectionElement_scopeStack *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_scopeStack) ;
  return p->mObject.mProperty_mReferenceStateMap ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist cEnumerator_scopeStack::current_mObjectList (LOCATION_ARGS) const {
  const cCollectionElement_scopeStack * p = (const cCollectionElement_scopeStack *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_scopeStack) ;
  return p->mObject.mProperty_mObjectList ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@scopeStack type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_scopeStack ("scopeStack",
                                   NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_scopeStack::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_scopeStack ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_scopeStack::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_scopeStack (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

cEnumAssociatedValues_LValueOperandAST_property::cEnumAssociatedValues_LValueOperandAST_property (const GALGAS_lstring & inAssociatedValue0,
                                                                                                  const GALGAS_LValueOperandAST & inAssociatedValue1
                                                                                                  COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_LValueOperandAST_property::description (C_String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_LValueOperandAST_property::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_LValueOperandAST_property * ptr = dynamic_cast<const cEnumAssociatedValues_LValueOperandAST_property *> (inOperand) ;
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

cEnumAssociatedValues_LValueOperandAST_arrayAccess::cEnumAssociatedValues_LValueOperandAST_arrayAccess (const GALGAS_expressionAST & inAssociatedValue0,
                                                                                                        const GALGAS_location & inAssociatedValue1,
                                                                                                        const GALGAS_bool & inAssociatedValue2,
                                                                                                        const GALGAS_LValueOperandAST & inAssociatedValue3
                                                                                                        COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1),
mAssociatedValue2 (inAssociatedValue2),
mAssociatedValue3 (inAssociatedValue3) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_LValueOperandAST_arrayAccess::description (C_String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  mAssociatedValue2.description (ioString, inIndentation) ;
  mAssociatedValue3.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_LValueOperandAST_arrayAccess::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_LValueOperandAST_arrayAccess * ptr = dynamic_cast<const cEnumAssociatedValues_LValueOperandAST_arrayAccess *> (inOperand) ;
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_LValueOperandAST::GALGAS_LValueOperandAST (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_LValueOperandAST GALGAS_LValueOperandAST::constructor_noOperand (UNUSED_LOCATION_ARGS) {
  GALGAS_LValueOperandAST result ;
  result.mEnum = kEnum_noOperand ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_LValueOperandAST GALGAS_LValueOperandAST::constructor_property (const GALGAS_lstring & inAssociatedValue0,
                                                                       const GALGAS_LValueOperandAST & inAssociatedValue1
                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_LValueOperandAST result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_property ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_LValueOperandAST_property (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_LValueOperandAST GALGAS_LValueOperandAST::constructor_arrayAccess (const GALGAS_expressionAST & inAssociatedValue0,
                                                                          const GALGAS_location & inAssociatedValue1,
                                                                          const GALGAS_bool & inAssociatedValue2,
                                                                          const GALGAS_LValueOperandAST & inAssociatedValue3
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_LValueOperandAST result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid () && inAssociatedValue2.isValid () && inAssociatedValue3.isValid ()) {
    result.mEnum = kEnum_arrayAccess ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_LValueOperandAST_arrayAccess (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2, inAssociatedValue3 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_LValueOperandAST::method_property (GALGAS_lstring & outAssociatedValue0,
                                               GALGAS_LValueOperandAST & outAssociatedValue1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_property) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    C_String s ;
    s << "method @LValueOperandAST property invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_LValueOperandAST_property * ptr = (const cEnumAssociatedValues_LValueOperandAST_property *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_LValueOperandAST::method_arrayAccess (GALGAS_expressionAST & outAssociatedValue0,
                                                  GALGAS_location & outAssociatedValue1,
                                                  GALGAS_bool & outAssociatedValue2,
                                                  GALGAS_LValueOperandAST & outAssociatedValue3,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_arrayAccess) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    outAssociatedValue2.drop () ;
    outAssociatedValue3.drop () ;
    C_String s ;
    s << "method @LValueOperandAST arrayAccess invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_LValueOperandAST_arrayAccess * ptr = (const cEnumAssociatedValues_LValueOperandAST_arrayAccess *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
    outAssociatedValue3 = ptr->mAssociatedValue3 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_LValueOperandAST::optional_noOperand () const {
  const bool ok = mEnum == kEnum_noOperand ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_LValueOperandAST::optional_property (GALGAS_lstring & outAssociatedValue0,
                                                 GALGAS_LValueOperandAST & outAssociatedValue1) const {
  const bool ok = mEnum == kEnum_property ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_LValueOperandAST_property *) unsafePointer () ;
    // const cEnumAssociatedValues_LValueOperandAST_property * ptr = (const cEnumAssociatedValues_LValueOperandAST_property *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_LValueOperandAST::optional_arrayAccess (GALGAS_expressionAST & outAssociatedValue0,
                                                    GALGAS_location & outAssociatedValue1,
                                                    GALGAS_bool & outAssociatedValue2,
                                                    GALGAS_LValueOperandAST & outAssociatedValue3) const {
  const bool ok = mEnum == kEnum_arrayAccess ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_LValueOperandAST_arrayAccess *) unsafePointer () ;
    // const cEnumAssociatedValues_LValueOperandAST_arrayAccess * ptr = (const cEnumAssociatedValues_LValueOperandAST_arrayAccess *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
    outAssociatedValue3 = ptr->mAssociatedValue3 ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_LValueOperandAST [4] = {
  "(not built)",
  "noOperand",
  "property",
  "arrayAccess"
} ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_LValueOperandAST::getter_isNoOperand (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_noOperand == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_LValueOperandAST::getter_isProperty (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_property == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_LValueOperandAST::getter_isArrayAccess (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_arrayAccess == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_LValueOperandAST::description (C_String & ioString,
                                           const int32_t inIndentation) const {
  ioString << "<enum @LValueOperandAST: " << gEnumNameArrayFor_LValueOperandAST [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_LValueOperandAST::objectCompare (const GALGAS_LValueOperandAST & inOperand) const {
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
//@LValueOperandAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_LValueOperandAST ("LValueOperandAST",
                                         NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_LValueOperandAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_LValueOperandAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_LValueOperandAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_LValueOperandAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_LValueOperandAST GALGAS_LValueOperandAST::extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_LValueOperandAST result ;
  const GALGAS_LValueOperandAST * p = (const GALGAS_LValueOperandAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_LValueOperandAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("LValueOperandAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_valuedObjectState::GALGAS_valuedObjectState (void) :
mEnum (kNotBuilt) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_valuedObjectState GALGAS_valuedObjectState::constructor_noValue (UNUSED_LOCATION_ARGS) {
  GALGAS_valuedObjectState result ;
  result.mEnum = kEnum_noValue ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_valuedObjectState GALGAS_valuedObjectState::constructor_hasUnreadValue (UNUSED_LOCATION_ARGS) {
  GALGAS_valuedObjectState result ;
  result.mEnum = kEnum_hasUnreadValue ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_valuedObjectState GALGAS_valuedObjectState::constructor_hasReadValue (UNUSED_LOCATION_ARGS) {
  GALGAS_valuedObjectState result ;
  result.mEnum = kEnum_hasReadValue ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_valuedObjectState::optional_noValue () const {
  const bool ok = mEnum == kEnum_noValue ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_valuedObjectState::optional_hasUnreadValue () const {
  const bool ok = mEnum == kEnum_hasUnreadValue ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_valuedObjectState::optional_hasReadValue () const {
  const bool ok = mEnum == kEnum_hasReadValue ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_valuedObjectState [4] = {
  "(not built)",
  "noValue",
  "hasUnreadValue",
  "hasReadValue"
} ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_valuedObjectState::getter_isNoValue (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_noValue == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_valuedObjectState::getter_isHasUnreadValue (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_hasUnreadValue == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_valuedObjectState::getter_isHasReadValue (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_hasReadValue == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_valuedObjectState::description (C_String & ioString,
                                            const int32_t /* inIndentation */) const {
  ioString << "<enum @valuedObjectState: " << gEnumNameArrayFor_valuedObjectState [mEnum] ;
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//@valuedObjectState type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_valuedObjectState ("valuedObjectState",
                                          NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_valuedObjectState::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_valuedObjectState ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_valuedObjectState::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_valuedObjectState (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

cEnumAssociatedValues_valuedObject_driver::cEnumAssociatedValues_valuedObject_driver (const GALGAS_omnibusType & inAssociatedValue0,
                                                                                      const GALGAS_bool & inAssociatedValue1
                                                                                      COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_valuedObject_driver::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_valuedObject_driver::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_valuedObject_driver * ptr = dynamic_cast<const cEnumAssociatedValues_valuedObject_driver *> (inOperand) ;
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

cEnumAssociatedValues_valuedObject_task::cEnumAssociatedValues_valuedObject_task (const GALGAS_omnibusType & inAssociatedValue0
                                                                                  COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_valuedObject_task::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_valuedObject_task::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_valuedObject_task * ptr = dynamic_cast<const cEnumAssociatedValues_valuedObject_task *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumAssociatedValues_valuedObject_globalConstant::cEnumAssociatedValues_valuedObject_globalConstant (const GALGAS_objectIR & inAssociatedValue0
                                                                                                      COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_valuedObject_globalConstant::description (C_String & ioString,
                                                                     const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_valuedObject_globalConstant::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_valuedObject_globalConstant * ptr = dynamic_cast<const cEnumAssociatedValues_valuedObject_globalConstant *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumAssociatedValues_valuedObject_localConstant::cEnumAssociatedValues_valuedObject_localConstant (const GALGAS_omnibusType & inAssociatedValue0,
                                                                                                    const GALGAS_lstring & inAssociatedValue1,
                                                                                                    const GALGAS_bool & inAssociatedValue2
                                                                                                    COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1),
mAssociatedValue2 (inAssociatedValue2) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_valuedObject_localConstant::description (C_String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  mAssociatedValue2.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_valuedObject_localConstant::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_valuedObject_localConstant * ptr = dynamic_cast<const cEnumAssociatedValues_valuedObject_localConstant *> (inOperand) ;
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

cEnumAssociatedValues_valuedObject_localVariable::cEnumAssociatedValues_valuedObject_localVariable (const GALGAS_omnibusType & inAssociatedValue0,
                                                                                                    const GALGAS_lstring & inAssociatedValue1
                                                                                                    COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_valuedObject_localVariable::description (C_String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_valuedObject_localVariable::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_valuedObject_localVariable * ptr = dynamic_cast<const cEnumAssociatedValues_valuedObject_localVariable *> (inOperand) ;
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

cEnumAssociatedValues_valuedObject_globalSyncInstance::cEnumAssociatedValues_valuedObject_globalSyncInstance (const GALGAS_omnibusType & inAssociatedValue0,
                                                                                                              const GALGAS_lstring & inAssociatedValue1
                                                                                                              COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_valuedObject_globalSyncInstance::description (C_String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_valuedObject_globalSyncInstance::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_valuedObject_globalSyncInstance * ptr = dynamic_cast<const cEnumAssociatedValues_valuedObject_globalSyncInstance *> (inOperand) ;
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

GALGAS_valuedObject::GALGAS_valuedObject (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_valuedObject GALGAS_valuedObject::constructor_driver (const GALGAS_omnibusType & inAssociatedValue0,
                                                             const GALGAS_bool & inAssociatedValue1
                                                             COMMA_LOCATION_ARGS) {
  GALGAS_valuedObject result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_driver ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_valuedObject_driver (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_valuedObject GALGAS_valuedObject::constructor_task (const GALGAS_omnibusType & inAssociatedValue0
                                                           COMMA_LOCATION_ARGS) {
  GALGAS_valuedObject result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_task ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_valuedObject_task (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_valuedObject GALGAS_valuedObject::constructor_globalConstant (const GALGAS_objectIR & inAssociatedValue0
                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_valuedObject result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_globalConstant ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_valuedObject_globalConstant (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_valuedObject GALGAS_valuedObject::constructor_localConstant (const GALGAS_omnibusType & inAssociatedValue0,
                                                                    const GALGAS_lstring & inAssociatedValue1,
                                                                    const GALGAS_bool & inAssociatedValue2
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_valuedObject result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid () && inAssociatedValue2.isValid ()) {
    result.mEnum = kEnum_localConstant ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_valuedObject_localConstant (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_valuedObject GALGAS_valuedObject::constructor_localVariable (const GALGAS_omnibusType & inAssociatedValue0,
                                                                    const GALGAS_lstring & inAssociatedValue1
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_valuedObject result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_localVariable ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_valuedObject_localVariable (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_valuedObject GALGAS_valuedObject::constructor_globalSyncInstance (const GALGAS_omnibusType & inAssociatedValue0,
                                                                         const GALGAS_lstring & inAssociatedValue1
                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_valuedObject result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_globalSyncInstance ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_valuedObject_globalSyncInstance (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_valuedObject::method_driver (GALGAS_omnibusType & outAssociatedValue0,
                                         GALGAS_bool & outAssociatedValue1,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_driver) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    C_String s ;
    s << "method @valuedObject driver invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_valuedObject_driver * ptr = (const cEnumAssociatedValues_valuedObject_driver *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_valuedObject::method_task (GALGAS_omnibusType & outAssociatedValue0,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_task) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @valuedObject task invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_valuedObject_task * ptr = (const cEnumAssociatedValues_valuedObject_task *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_valuedObject::method_globalConstant (GALGAS_objectIR & outAssociatedValue0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_globalConstant) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @valuedObject globalConstant invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_valuedObject_globalConstant * ptr = (const cEnumAssociatedValues_valuedObject_globalConstant *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_valuedObject::method_localConstant (GALGAS_omnibusType & outAssociatedValue0,
                                                GALGAS_lstring & outAssociatedValue1,
                                                GALGAS_bool & outAssociatedValue2,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_localConstant) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    outAssociatedValue2.drop () ;
    C_String s ;
    s << "method @valuedObject localConstant invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_valuedObject_localConstant * ptr = (const cEnumAssociatedValues_valuedObject_localConstant *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_valuedObject::method_localVariable (GALGAS_omnibusType & outAssociatedValue0,
                                                GALGAS_lstring & outAssociatedValue1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_localVariable) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    C_String s ;
    s << "method @valuedObject localVariable invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_valuedObject_localVariable * ptr = (const cEnumAssociatedValues_valuedObject_localVariable *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_valuedObject::method_globalSyncInstance (GALGAS_omnibusType & outAssociatedValue0,
                                                     GALGAS_lstring & outAssociatedValue1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_globalSyncInstance) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    C_String s ;
    s << "method @valuedObject globalSyncInstance invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_valuedObject_globalSyncInstance * ptr = (const cEnumAssociatedValues_valuedObject_globalSyncInstance *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_valuedObject::optional_driver (GALGAS_omnibusType & outAssociatedValue0,
                                           GALGAS_bool & outAssociatedValue1) const {
  const bool ok = mEnum == kEnum_driver ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_valuedObject_driver *) unsafePointer () ;
    // const cEnumAssociatedValues_valuedObject_driver * ptr = (const cEnumAssociatedValues_valuedObject_driver *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_valuedObject::optional_task (GALGAS_omnibusType & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_task ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_valuedObject_task *) unsafePointer () ;
    // const cEnumAssociatedValues_valuedObject_task * ptr = (const cEnumAssociatedValues_valuedObject_task *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_valuedObject::optional_globalConstant (GALGAS_objectIR & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_globalConstant ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_valuedObject_globalConstant *) unsafePointer () ;
    // const cEnumAssociatedValues_valuedObject_globalConstant * ptr = (const cEnumAssociatedValues_valuedObject_globalConstant *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_valuedObject::optional_localConstant (GALGAS_omnibusType & outAssociatedValue0,
                                                  GALGAS_lstring & outAssociatedValue1,
                                                  GALGAS_bool & outAssociatedValue2) const {
  const bool ok = mEnum == kEnum_localConstant ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_valuedObject_localConstant *) unsafePointer () ;
    // const cEnumAssociatedValues_valuedObject_localConstant * ptr = (const cEnumAssociatedValues_valuedObject_localConstant *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_valuedObject::optional_localVariable (GALGAS_omnibusType & outAssociatedValue0,
                                                  GALGAS_lstring & outAssociatedValue1) const {
  const bool ok = mEnum == kEnum_localVariable ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_valuedObject_localVariable *) unsafePointer () ;
    // const cEnumAssociatedValues_valuedObject_localVariable * ptr = (const cEnumAssociatedValues_valuedObject_localVariable *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_valuedObject::optional_globalSyncInstance (GALGAS_omnibusType & outAssociatedValue0,
                                                       GALGAS_lstring & outAssociatedValue1) const {
  const bool ok = mEnum == kEnum_globalSyncInstance ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_valuedObject_globalSyncInstance *) unsafePointer () ;
    // const cEnumAssociatedValues_valuedObject_globalSyncInstance * ptr = (const cEnumAssociatedValues_valuedObject_globalSyncInstance *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_valuedObject [7] = {
  "(not built)",
  "driver",
  "task",
  "globalConstant",
  "localConstant",
  "localVariable",
  "globalSyncInstance"
} ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_valuedObject::getter_isDriver (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_driver == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_valuedObject::getter_isTask (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_task == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_valuedObject::getter_isGlobalConstant (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_globalConstant == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_valuedObject::getter_isLocalConstant (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_localConstant == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_valuedObject::getter_isLocalVariable (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_localVariable == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_valuedObject::getter_isGlobalSyncInstance (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_globalSyncInstance == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_valuedObject::description (C_String & ioString,
                                       const int32_t inIndentation) const {
  ioString << "<enum @valuedObject: " << gEnumNameArrayFor_valuedObject [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_valuedObject::objectCompare (const GALGAS_valuedObject & inOperand) const {
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
//@valuedObject type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_valuedObject ("valuedObject",
                                     NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_valuedObject::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_valuedObject ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_valuedObject::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_valuedObject (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_valuedObject GALGAS_valuedObject::extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GALGAS_valuedObject result ;
  const GALGAS_valuedObject * p = (const GALGAS_valuedObject *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_valuedObject *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("valuedObject", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_scopeKind::GALGAS_scopeKind (void) :
mEnum (kNotBuilt) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_scopeKind GALGAS_scopeKind::constructor_selectScope (UNUSED_LOCATION_ARGS) {
  GALGAS_scopeKind result ;
  result.mEnum = kEnum_selectScope ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_scopeKind GALGAS_scopeKind::constructor_repeatScope (UNUSED_LOCATION_ARGS) {
  GALGAS_scopeKind result ;
  result.mEnum = kEnum_repeatScope ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_scopeKind::optional_selectScope () const {
  const bool ok = mEnum == kEnum_selectScope ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_scopeKind::optional_repeatScope () const {
  const bool ok = mEnum == kEnum_repeatScope ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_scopeKind [3] = {
  "(not built)",
  "selectScope",
  "repeatScope"
} ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_scopeKind::getter_isSelectScope (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_selectScope == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_scopeKind::getter_isRepeatScope (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_repeatScope == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_scopeKind::description (C_String & ioString,
                                    const int32_t /* inIndentation */) const {
  ioString << "<enum @scopeKind: " << gEnumNameArrayFor_scopeKind [mEnum] ;
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//@scopeKind type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_scopeKind ("scopeKind",
                                  NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_scopeKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_scopeKind ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_scopeKind::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_scopeKind (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

cMapElement_referenceStateMap::cMapElement_referenceStateMap (const GALGAS_lstring & inKey,
                                                              const GALGAS_valuedObjectState & in_mState
                                                              COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mState (in_mState) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_referenceStateMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mState.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_referenceStateMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_referenceStateMap (mProperty_lkey, mProperty_mState COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_referenceStateMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mState" ":" ;
  mProperty_mState.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_referenceStateMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_referenceStateMap * operand = (cMapElement_referenceStateMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mState.objectCompare (operand->mProperty_mState) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_referenceStateMap::GALGAS_referenceStateMap (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_referenceStateMap::GALGAS_referenceStateMap (const GALGAS_referenceStateMap & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_referenceStateMap & GALGAS_referenceStateMap::operator = (const GALGAS_referenceStateMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_referenceStateMap GALGAS_referenceStateMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_referenceStateMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_referenceStateMap GALGAS_referenceStateMap::constructor_mapWithMapToOverride (const GALGAS_referenceStateMap & inMapToOverride
                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_referenceStateMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_referenceStateMap GALGAS_referenceStateMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  GALGAS_referenceStateMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_referenceStateMap_searchKey = "INTERNAL ERROR" ;

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

cMapElement_referenceStateMap * GALGAS_referenceStateMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                             const GALGAS_string & inKey
                                                                                             COMMA_LOCATION_ARGS) {
  cMapElement_referenceStateMap * result = (cMapElement_referenceStateMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_referenceStateMap) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_referenceStateMap::cEnumerator_referenceStateMap (const GALGAS_referenceStateMap & inEnumeratedObject,
                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_referenceStateMap_2D_element cEnumerator_referenceStateMap::current (LOCATION_ARGS) const {
  const cMapElement_referenceStateMap * p = (const cMapElement_referenceStateMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_referenceStateMap) ;
  return GALGAS_referenceStateMap_2D_element (p->mProperty_lkey, p->mProperty_mState) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_referenceStateMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_valuedObjectState cEnumerator_referenceStateMap::current_mState (LOCATION_ARGS) const {
  const cMapElement_referenceStateMap * p = (const cMapElement_referenceStateMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_referenceStateMap) ;
  return p->mProperty_mState ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_referenceStateMap::optional_searchKey (const GALGAS_string & inKey,
                                                   GALGAS_valuedObjectState & outArgument0) const {
  const cMapElement_referenceStateMap * p = (const cMapElement_referenceStateMap *) searchForKey (inKey) ;
  const bool result = NULL != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_referenceStateMap) ;
    outArgument0 = p->mProperty_mState ;
  }else{
    outArgument0.drop () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@referenceStateMap type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_referenceStateMap ("referenceStateMap",
                                          NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_referenceStateMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_referenceStateMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_referenceStateMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_referenceStateMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//Extension Getter '@valuedObjectState string'
//
//----------------------------------------------------------------------------------------------------------------------

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




//----------------------------------------------------------------------------------------------------------------------
//
//'@semanticTypePrecedenceGraph' graph
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticTypePrecedenceGraph::GALGAS_semanticTypePrecedenceGraph (void) :
AC_GALGAS_graph () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticTypePrecedenceGraph GALGAS_semanticTypePrecedenceGraph::constructor_emptyGraph (LOCATION_ARGS) {
  GALGAS_semanticTypePrecedenceGraph result ;
  result.makeNewEmptyGraph (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_semanticTypePrecedenceGraph::setter_addNode (GALGAS_lstring inKey,
                                                         GALGAS_abstractDeclarationAST inArgument_0,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  GALGAS_declarationListAST::makeAttributesFromObjects (attributes, inArgument_0 COMMA_THERE) ;
  const char * kErrorMessage = "the '%K' symbol is already declared at %L" ;
  internalAddNode (inKey, kErrorMessage, attributes, inCompiler COMMA_THERE) ;
}


//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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


//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticTypePrecedenceGraph GALGAS_semanticTypePrecedenceGraph::getter_reversedGraph (LOCATION_ARGS) const {
  GALGAS_semanticTypePrecedenceGraph result ;
  result.reversedGraphFromGraph (*this COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_semanticTypePrecedenceGraph::method_circularities (GALGAS_declarationListAST & outInfoList,
                                                               GALGAS_lstringlist & outKeyList
                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElementArray infoList ;
  internalFindCircularities (infoList, outKeyList COMMA_THERE) ;
  outInfoList = GALGAS_declarationListAST (infoList) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_semanticTypePrecedenceGraph::method_nodesWithNoSuccessor (GALGAS_declarationListAST & outInfoList,
                                                                      GALGAS_lstringlist & outKeyList
                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElementArray infoList ;
  internalNodesWithNoSuccessor (infoList, outKeyList COMMA_THERE) ;
  outInfoList = GALGAS_declarationListAST (infoList) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_semanticTypePrecedenceGraph::method_nodesWithNoPredecessor (GALGAS_declarationListAST & outInfoList,
                                                                        GALGAS_lstringlist & outKeyList
                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElementArray infoList ;
  internalNodesWithNoPredecessor (infoList, outKeyList COMMA_THERE) ;
  outInfoList = GALGAS_declarationListAST (infoList) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticTypePrecedenceGraph GALGAS_semanticTypePrecedenceGraph::getter_subgraphFromNodes (const GALGAS_lstringlist & inStartKeyList,
                                                                                                 const GALGAS_stringset & inKeysToExclude,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const {
  GALGAS_semanticTypePrecedenceGraph result ;
  subGraph (result, inStartKeyList, inKeysToExclude, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//@semanticTypePrecedenceGraph type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_semanticTypePrecedenceGraph ("semanticTypePrecedenceGraph",
                                                    NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_semanticTypePrecedenceGraph::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticTypePrecedenceGraph ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_semanticTypePrecedenceGraph::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_semanticTypePrecedenceGraph (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@semanticTypePrecedenceGraph noteUINTType'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_noteUINTType (GALGAS_semanticTypePrecedenceGraph & ioObject,
                                   const GALGAS_uint constinArgument_inBitSize,
                                   const GALGAS_location constinArgument_inErrorLocation,
                                   C_Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring var_typeName_981 = GALGAS_lstring::constructor_new (GALGAS_string ("u").add_operation (constinArgument_inBitSize.getter_string (SOURCE_FILE ("ordered-declaration-list.galgas", 14)), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 14)), constinArgument_inErrorLocation  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 14)) ;
  {
  ioObject.setter_noteNode (var_typeName_981 COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 15)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractDeclarationAST enterInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionMethodSignature_abstractDeclarationAST_enterInPrecedenceGraph> gExtensionMethodTable_abstractDeclarationAST_enterInPrecedenceGraph ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_enterInPrecedenceGraph (const int32_t inClassIndex,
                                                  extensionMethodSignature_abstractDeclarationAST_enterInPrecedenceGraph inMethod) {
  gExtensionMethodTable_abstractDeclarationAST_enterInPrecedenceGraph.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionMethod_abstractDeclarationAST_enterInPrecedenceGraph (void) {
  gExtensionMethodTable_abstractDeclarationAST_enterInPrecedenceGraph.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_abstractDeclarationAST_enterInPrecedenceGraph (NULL,
                                                                          freeExtensionMethod_abstractDeclarationAST_enterInPrecedenceGraph) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                 GALGAS_semanticTypePrecedenceGraph & io_ioGraph,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractDeclarationAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_abstractDeclarationAST_enterInPrecedenceGraph f = NULL ;
    if (classIndex < gExtensionMethodTable_abstractDeclarationAST_enterInPrecedenceGraph.count ()) {
      f = gExtensionMethodTable_abstractDeclarationAST_enterInPrecedenceGraph (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
      const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
      while ((NULL == f) && (NULL != p)) {
        if (p->mSlotID < gExtensionMethodTable_abstractDeclarationAST_enterInPrecedenceGraph.count ()) {
          f = gExtensionMethodTable_abstractDeclarationAST_enterInPrecedenceGraph (p->mSlotID COMMA_HERE) ;
        }
        p = p->mSuperclassDescriptor ;
      }
      gExtensionMethodTable_abstractDeclarationAST_enterInPrecedenceGraph.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioGraph, inCompiler COMMA_THERE) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@abstractDeclarationAST keyRepresentationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <enterExtensionGetter_abstractDeclarationAST_keyRepresentationForErrorSignaling> gExtensionGetterTable_abstractDeclarationAST_keyRepresentationForErrorSignaling ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_keyRepresentationForErrorSignaling (const int32_t inClassIndex,
                                                              enterExtensionGetter_abstractDeclarationAST_keyRepresentationForErrorSignaling inGetter) {
  gExtensionGetterTable_abstractDeclarationAST_keyRepresentationForErrorSignaling.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionGetter_abstractDeclarationAST_keyRepresentationForErrorSignaling (void) {
  gExtensionGetterTable_abstractDeclarationAST_keyRepresentationForErrorSignaling.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_abstractDeclarationAST_keyRepresentationForErrorSignaling (NULL,
                                                                                      freeExtensionGetter_abstractDeclarationAST_keyRepresentationForErrorSignaling) ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string callExtensionGetter_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractDeclarationAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_abstractDeclarationAST_keyRepresentationForErrorSignaling f = NULL ;
    if (classIndex < gExtensionGetterTable_abstractDeclarationAST_keyRepresentationForErrorSignaling.count ()) {
      f = gExtensionGetterTable_abstractDeclarationAST_keyRepresentationForErrorSignaling (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_abstractDeclarationAST_keyRepresentationForErrorSignaling.count ()) {
           f = gExtensionGetterTable_abstractDeclarationAST_keyRepresentationForErrorSignaling (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_abstractDeclarationAST_keyRepresentationForErrorSignaling.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_compileTimeDeclarationBarrierAST::dynamicObjectCompare (const acPtr_class * /* inOperandPtr */) const {
  return kOperandEqual ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_compileTimeDeclarationBarrierAST::objectCompare (const GALGAS_compileTimeDeclarationBarrierAST & inOperand) const {
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

GALGAS_compileTimeDeclarationBarrierAST::GALGAS_compileTimeDeclarationBarrierAST (void) :
GALGAS_abstractDeclarationAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeDeclarationBarrierAST GALGAS_compileTimeDeclarationBarrierAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_compileTimeDeclarationBarrierAST::constructor_new (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeDeclarationBarrierAST::GALGAS_compileTimeDeclarationBarrierAST (const cPtr_compileTimeDeclarationBarrierAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_compileTimeDeclarationBarrierAST) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeDeclarationBarrierAST GALGAS_compileTimeDeclarationBarrierAST::constructor_new (LOCATION_ARGS) {
  GALGAS_compileTimeDeclarationBarrierAST result ;
  macroMyNew (result.mObjectPtr, cPtr_compileTimeDeclarationBarrierAST (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @compileTimeDeclarationBarrierAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_compileTimeDeclarationBarrierAST::cPtr_compileTimeDeclarationBarrierAST (LOCATION_ARGS) :
cPtr_abstractDeclarationAST (THERE) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_compileTimeDeclarationBarrierAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeDeclarationBarrierAST ;
}

void cPtr_compileTimeDeclarationBarrierAST::description (C_String & ioString,
                                                         const int32_t /* inIndentation */) const {
  ioString << "[@compileTimeDeclarationBarrierAST]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_compileTimeDeclarationBarrierAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_compileTimeDeclarationBarrierAST (THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@compileTimeDeclarationBarrierAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_compileTimeDeclarationBarrierAST ("compileTimeDeclarationBarrierAST",
                                                         & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_compileTimeDeclarationBarrierAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeDeclarationBarrierAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_compileTimeDeclarationBarrierAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_compileTimeDeclarationBarrierAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeDeclarationBarrierAST GALGAS_compileTimeDeclarationBarrierAST::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_compileTimeDeclarationBarrierAST result ;
  const GALGAS_compileTimeDeclarationBarrierAST * p = (const GALGAS_compileTimeDeclarationBarrierAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_compileTimeDeclarationBarrierAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeDeclarationBarrierAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_panicRoutinePriorityMap::cMapElement_panicRoutinePriorityMap (const GALGAS_lstring & inKey
                                                                          COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_panicRoutinePriorityMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_panicRoutinePriorityMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_panicRoutinePriorityMap (mProperty_lkey COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_panicRoutinePriorityMap::description (C_String & /* ioString */, const int32_t /* inIndentation */) const {
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_panicRoutinePriorityMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_panicRoutinePriorityMap * operand = (cMapElement_panicRoutinePriorityMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_panicRoutinePriorityMap::GALGAS_panicRoutinePriorityMap (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_panicRoutinePriorityMap::GALGAS_panicRoutinePriorityMap (const GALGAS_panicRoutinePriorityMap & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_panicRoutinePriorityMap & GALGAS_panicRoutinePriorityMap::operator = (const GALGAS_panicRoutinePriorityMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_panicRoutinePriorityMap GALGAS_panicRoutinePriorityMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_panicRoutinePriorityMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_panicRoutinePriorityMap GALGAS_panicRoutinePriorityMap::constructor_mapWithMapToOverride (const GALGAS_panicRoutinePriorityMap & inMapToOverride
                                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_panicRoutinePriorityMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_panicRoutinePriorityMap GALGAS_panicRoutinePriorityMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  GALGAS_panicRoutinePriorityMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_panicRoutinePriorityMap_searchSetupKey = "there is no panic setup routine with priority %K" ;

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_panicRoutinePriorityMap_searchLoopKey = "there is no panic loop routine with priority %K" ;

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

cMapElement_panicRoutinePriorityMap * GALGAS_panicRoutinePriorityMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                         const GALGAS_string & inKey
                                                                                                         COMMA_LOCATION_ARGS) {
  cMapElement_panicRoutinePriorityMap * result = (cMapElement_panicRoutinePriorityMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_panicRoutinePriorityMap) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_panicRoutinePriorityMap::cEnumerator_panicRoutinePriorityMap (const GALGAS_panicRoutinePriorityMap & inEnumeratedObject,
                                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_panicRoutinePriorityMap_2D_element cEnumerator_panicRoutinePriorityMap::current (LOCATION_ARGS) const {
  const cMapElement_panicRoutinePriorityMap * p = (const cMapElement_panicRoutinePriorityMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_panicRoutinePriorityMap) ;
  return GALGAS_panicRoutinePriorityMap_2D_element (p->mProperty_lkey) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_panicRoutinePriorityMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_panicRoutinePriorityMap::optional_searchKey (const GALGAS_string & inKey) const {
  const cMapElement_panicRoutinePriorityMap * p = (const cMapElement_panicRoutinePriorityMap *) searchForKey (inKey) ;
  const bool result = NULL != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_panicRoutinePriorityMap) ;
  }else{
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@panicRoutinePriorityMap type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_panicRoutinePriorityMap ("panicRoutinePriorityMap",
                                                NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_panicRoutinePriorityMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_panicRoutinePriorityMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_panicRoutinePriorityMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_panicRoutinePriorityMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

cMapElement_routineMapForContext::cMapElement_routineMapForContext (const GALGAS_lstring & inKey,
                                                                    const GALGAS_bool & in_mIsPublic,
                                                                    const GALGAS_routineTypedSignature & in_mSignature,
                                                                    const GALGAS_unifiedTypeMap_2D_entry & in_mReturnTypeProxy,
                                                                    const GALGAS_routineLLVMNameDict & in_mModeDictionary,
                                                                    const GALGAS_bool & in_mIsExported,
                                                                    const GALGAS_mode & in_mFunctionMode
                                                                    COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mIsPublic (in_mIsPublic),
mProperty_mSignature (in_mSignature),
mProperty_mReturnTypeProxy (in_mReturnTypeProxy),
mProperty_mModeDictionary (in_mModeDictionary),
mProperty_mIsExported (in_mIsExported),
mProperty_mFunctionMode (in_mFunctionMode) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_routineMapForContext::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mIsPublic.isValid () && mProperty_mSignature.isValid () && mProperty_mReturnTypeProxy.isValid () && mProperty_mModeDictionary.isValid () && mProperty_mIsExported.isValid () && mProperty_mFunctionMode.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_routineMapForContext::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_routineMapForContext (mProperty_lkey, mProperty_mIsPublic, mProperty_mSignature, mProperty_mReturnTypeProxy, mProperty_mModeDictionary, mProperty_mIsExported, mProperty_mFunctionMode COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_routineMapForContext::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIsPublic" ":" ;
  mProperty_mIsPublic.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSignature" ":" ;
  mProperty_mSignature.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mReturnTypeProxy" ":" ;
  mProperty_mReturnTypeProxy.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mModeDictionary" ":" ;
  mProperty_mModeDictionary.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIsExported" ":" ;
  mProperty_mIsExported.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFunctionMode" ":" ;
  mProperty_mFunctionMode.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_routineMapForContext::compare (const cCollectionElement * inOperand) const {
  cMapElement_routineMapForContext * operand = (cMapElement_routineMapForContext *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mIsPublic.objectCompare (operand->mProperty_mIsPublic) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSignature.objectCompare (operand->mProperty_mSignature) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mReturnTypeProxy.objectCompare (operand->mProperty_mReturnTypeProxy) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mModeDictionary.objectCompare (operand->mProperty_mModeDictionary) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIsExported.objectCompare (operand->mProperty_mIsExported) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mFunctionMode.objectCompare (operand->mProperty_mFunctionMode) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineMapForContext::GALGAS_routineMapForContext (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineMapForContext::GALGAS_routineMapForContext (const GALGAS_routineMapForContext & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineMapForContext & GALGAS_routineMapForContext::operator = (const GALGAS_routineMapForContext & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineMapForContext GALGAS_routineMapForContext::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_routineMapForContext result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineMapForContext GALGAS_routineMapForContext::constructor_mapWithMapToOverride (const GALGAS_routineMapForContext & inMapToOverride
                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_routineMapForContext result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineMapForContext GALGAS_routineMapForContext::getter_overriddenMap (C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  GALGAS_routineMapForContext result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_routineMapForContext::addAssign_operation (const GALGAS_lstring & inKey,
                                                       const GALGAS_bool & inArgument0,
                                                       const GALGAS_routineTypedSignature & inArgument1,
                                                       const GALGAS_unifiedTypeMap_2D_entry & inArgument2,
                                                       const GALGAS_routineLLVMNameDict & inArgument3,
                                                       const GALGAS_bool & inArgument4,
                                                       const GALGAS_mode & inArgument5,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  cMapElement_routineMapForContext * p = NULL ;
  macroMyNew (p, cMapElement_routineMapForContext (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4, inArgument5 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@routineMapForContext insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_routineMapForContext::setter_insertKey (GALGAS_lstring inKey,
                                                    GALGAS_bool inArgument0,
                                                    GALGAS_routineTypedSignature inArgument1,
                                                    GALGAS_unifiedTypeMap_2D_entry inArgument2,
                                                    GALGAS_routineLLVMNameDict inArgument3,
                                                    GALGAS_bool inArgument4,
                                                    GALGAS_mode inArgument5,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  cMapElement_routineMapForContext * p = NULL ;
  macroMyNew (p, cMapElement_routineMapForContext (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4, inArgument5 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' function is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_routineMapForContext_searchKey = "there is no '%K' function" ;

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_routineMapForContext::method_searchKey (GALGAS_lstring inKey,
                                                    GALGAS_bool & outArgument0,
                                                    GALGAS_routineTypedSignature & outArgument1,
                                                    GALGAS_unifiedTypeMap_2D_entry & outArgument2,
                                                    GALGAS_routineLLVMNameDict & outArgument3,
                                                    GALGAS_bool & outArgument4,
                                                    GALGAS_mode & outArgument5,
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
  }else{
    macroValidSharedObject (p, cMapElement_routineMapForContext) ;
    outArgument0 = p->mProperty_mIsPublic ;
    outArgument1 = p->mProperty_mSignature ;
    outArgument2 = p->mProperty_mReturnTypeProxy ;
    outArgument3 = p->mProperty_mModeDictionary ;
    outArgument4 = p->mProperty_mIsExported ;
    outArgument5 = p->mProperty_mFunctionMode ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_routineMapForContext::getter_mIsPublicForKey (const GALGAS_string & inKey,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_routineMapForContext * p = (const cMapElement_routineMapForContext *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_routineMapForContext) ;
    result = p->mProperty_mIsPublic ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineTypedSignature GALGAS_routineMapForContext::getter_mSignatureForKey (const GALGAS_string & inKey,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_routineMapForContext * p = (const cMapElement_routineMapForContext *) attributes ;
  GALGAS_routineTypedSignature result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_routineMapForContext) ;
    result = p->mProperty_mSignature ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_routineMapForContext::getter_mReturnTypeProxyForKey (const GALGAS_string & inKey,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_routineMapForContext * p = (const cMapElement_routineMapForContext *) attributes ;
  GALGAS_unifiedTypeMap_2D_entry result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_routineMapForContext) ;
    result = p->mProperty_mReturnTypeProxy ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineLLVMNameDict GALGAS_routineMapForContext::getter_mModeDictionaryForKey (const GALGAS_string & inKey,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_routineMapForContext * p = (const cMapElement_routineMapForContext *) attributes ;
  GALGAS_routineLLVMNameDict result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_routineMapForContext) ;
    result = p->mProperty_mModeDictionary ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_routineMapForContext::getter_mIsExportedForKey (const GALGAS_string & inKey,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_routineMapForContext * p = (const cMapElement_routineMapForContext *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_routineMapForContext) ;
    result = p->mProperty_mIsExported ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mode GALGAS_routineMapForContext::getter_mFunctionModeForKey (const GALGAS_string & inKey,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_routineMapForContext * p = (const cMapElement_routineMapForContext *) attributes ;
  GALGAS_mode result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_routineMapForContext) ;
    result = p->mProperty_mFunctionMode ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_routineMapForContext::setter_setMIsPublicForKey (GALGAS_bool inAttributeValue,
                                                             GALGAS_string inKey,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_routineMapForContext * p = (cMapElement_routineMapForContext *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_routineMapForContext) ;
    p->mProperty_mIsPublic = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_routineMapForContext::setter_setMSignatureForKey (GALGAS_routineTypedSignature inAttributeValue,
                                                              GALGAS_string inKey,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_routineMapForContext * p = (cMapElement_routineMapForContext *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_routineMapForContext) ;
    p->mProperty_mSignature = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_routineMapForContext::setter_setMReturnTypeProxyForKey (GALGAS_unifiedTypeMap_2D_entry inAttributeValue,
                                                                    GALGAS_string inKey,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_routineMapForContext * p = (cMapElement_routineMapForContext *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_routineMapForContext) ;
    p->mProperty_mReturnTypeProxy = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_routineMapForContext::setter_setMModeDictionaryForKey (GALGAS_routineLLVMNameDict inAttributeValue,
                                                                   GALGAS_string inKey,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_routineMapForContext * p = (cMapElement_routineMapForContext *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_routineMapForContext) ;
    p->mProperty_mModeDictionary = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_routineMapForContext::setter_setMIsExportedForKey (GALGAS_bool inAttributeValue,
                                                               GALGAS_string inKey,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_routineMapForContext * p = (cMapElement_routineMapForContext *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_routineMapForContext) ;
    p->mProperty_mIsExported = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_routineMapForContext::setter_setMFunctionModeForKey (GALGAS_mode inAttributeValue,
                                                                 GALGAS_string inKey,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_routineMapForContext * p = (cMapElement_routineMapForContext *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_routineMapForContext) ;
    p->mProperty_mFunctionMode = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_routineMapForContext * GALGAS_routineMapForContext::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                   const GALGAS_string & inKey
                                                                                                   COMMA_LOCATION_ARGS) {
  cMapElement_routineMapForContext * result = (cMapElement_routineMapForContext *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_routineMapForContext) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_routineMapForContext::cEnumerator_routineMapForContext (const GALGAS_routineMapForContext & inEnumeratedObject,
                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineMapForContext_2D_element cEnumerator_routineMapForContext::current (LOCATION_ARGS) const {
  const cMapElement_routineMapForContext * p = (const cMapElement_routineMapForContext *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_routineMapForContext) ;
  return GALGAS_routineMapForContext_2D_element (p->mProperty_lkey, p->mProperty_mIsPublic, p->mProperty_mSignature, p->mProperty_mReturnTypeProxy, p->mProperty_mModeDictionary, p->mProperty_mIsExported, p->mProperty_mFunctionMode) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_routineMapForContext::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_routineMapForContext::current_mIsPublic (LOCATION_ARGS) const {
  const cMapElement_routineMapForContext * p = (const cMapElement_routineMapForContext *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_routineMapForContext) ;
  return p->mProperty_mIsPublic ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineTypedSignature cEnumerator_routineMapForContext::current_mSignature (LOCATION_ARGS) const {
  const cMapElement_routineMapForContext * p = (const cMapElement_routineMapForContext *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_routineMapForContext) ;
  return p->mProperty_mSignature ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry cEnumerator_routineMapForContext::current_mReturnTypeProxy (LOCATION_ARGS) const {
  const cMapElement_routineMapForContext * p = (const cMapElement_routineMapForContext *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_routineMapForContext) ;
  return p->mProperty_mReturnTypeProxy ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineLLVMNameDict cEnumerator_routineMapForContext::current_mModeDictionary (LOCATION_ARGS) const {
  const cMapElement_routineMapForContext * p = (const cMapElement_routineMapForContext *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_routineMapForContext) ;
  return p->mProperty_mModeDictionary ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_routineMapForContext::current_mIsExported (LOCATION_ARGS) const {
  const cMapElement_routineMapForContext * p = (const cMapElement_routineMapForContext *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_routineMapForContext) ;
  return p->mProperty_mIsExported ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mode cEnumerator_routineMapForContext::current_mFunctionMode (LOCATION_ARGS) const {
  const cMapElement_routineMapForContext * p = (const cMapElement_routineMapForContext *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_routineMapForContext) ;
  return p->mProperty_mFunctionMode ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_routineMapForContext::optional_searchKey (const GALGAS_string & inKey,
                                                      GALGAS_bool & outArgument0,
                                                      GALGAS_routineTypedSignature & outArgument1,
                                                      GALGAS_unifiedTypeMap_2D_entry & outArgument2,
                                                      GALGAS_routineLLVMNameDict & outArgument3,
                                                      GALGAS_bool & outArgument4,
                                                      GALGAS_mode & outArgument5) const {
  const cMapElement_routineMapForContext * p = (const cMapElement_routineMapForContext *) searchForKey (inKey) ;
  const bool result = NULL != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_routineMapForContext) ;
    outArgument0 = p->mProperty_mIsPublic ;
    outArgument1 = p->mProperty_mSignature ;
    outArgument2 = p->mProperty_mReturnTypeProxy ;
    outArgument3 = p->mProperty_mModeDictionary ;
    outArgument4 = p->mProperty_mIsExported ;
    outArgument5 = p->mProperty_mFunctionMode ;
  }else{
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
    outArgument4.drop () ;
    outArgument5.drop () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@routineMapForContext type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_routineMapForContext ("routineMapForContext",
                                             NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_routineMapForContext::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineMapForContext ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_routineMapForContext::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_routineMapForContext (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

cMapElement_guardMapForContext::cMapElement_guardMapForContext (const GALGAS_lstring & inKey,
                                                                const GALGAS_bool & in_mIsPublic,
                                                                const GALGAS_routineTypedSignature & in_mSignature,
                                                                const GALGAS_lstring & in_mUserRoutineLLVMName,
                                                                const GALGAS_lstring & in_mImplementationRoutineLLVMName
                                                                COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mIsPublic (in_mIsPublic),
mProperty_mSignature (in_mSignature),
mProperty_mUserRoutineLLVMName (in_mUserRoutineLLVMName),
mProperty_mImplementationRoutineLLVMName (in_mImplementationRoutineLLVMName) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_guardMapForContext::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mIsPublic.isValid () && mProperty_mSignature.isValid () && mProperty_mUserRoutineLLVMName.isValid () && mProperty_mImplementationRoutineLLVMName.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_guardMapForContext::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_guardMapForContext (mProperty_lkey, mProperty_mIsPublic, mProperty_mSignature, mProperty_mUserRoutineLLVMName, mProperty_mImplementationRoutineLLVMName COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_guardMapForContext::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIsPublic" ":" ;
  mProperty_mIsPublic.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSignature" ":" ;
  mProperty_mSignature.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mUserRoutineLLVMName" ":" ;
  mProperty_mUserRoutineLLVMName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mImplementationRoutineLLVMName" ":" ;
  mProperty_mImplementationRoutineLLVMName.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_guardMapForContext::compare (const cCollectionElement * inOperand) const {
  cMapElement_guardMapForContext * operand = (cMapElement_guardMapForContext *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mIsPublic.objectCompare (operand->mProperty_mIsPublic) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSignature.objectCompare (operand->mProperty_mSignature) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mUserRoutineLLVMName.objectCompare (operand->mProperty_mUserRoutineLLVMName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mImplementationRoutineLLVMName.objectCompare (operand->mProperty_mImplementationRoutineLLVMName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_guardMapForContext::GALGAS_guardMapForContext (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_guardMapForContext::GALGAS_guardMapForContext (const GALGAS_guardMapForContext & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_guardMapForContext & GALGAS_guardMapForContext::operator = (const GALGAS_guardMapForContext & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_guardMapForContext GALGAS_guardMapForContext::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_guardMapForContext result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_guardMapForContext GALGAS_guardMapForContext::constructor_mapWithMapToOverride (const GALGAS_guardMapForContext & inMapToOverride
                                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_guardMapForContext result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_guardMapForContext GALGAS_guardMapForContext::getter_overriddenMap (C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  GALGAS_guardMapForContext result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_guardMapForContext::addAssign_operation (const GALGAS_lstring & inKey,
                                                     const GALGAS_bool & inArgument0,
                                                     const GALGAS_routineTypedSignature & inArgument1,
                                                     const GALGAS_lstring & inArgument2,
                                                     const GALGAS_lstring & inArgument3,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  cMapElement_guardMapForContext * p = NULL ;
  macroMyNew (p, cMapElement_guardMapForContext (inKey, inArgument0, inArgument1, inArgument2, inArgument3 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@guardMapForContext insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_guardMapForContext::setter_insertKey (GALGAS_lstring inKey,
                                                  GALGAS_bool inArgument0,
                                                  GALGAS_routineTypedSignature inArgument1,
                                                  GALGAS_lstring inArgument2,
                                                  GALGAS_lstring inArgument3,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cMapElement_guardMapForContext * p = NULL ;
  macroMyNew (p, cMapElement_guardMapForContext (inKey, inArgument0, inArgument1, inArgument2, inArgument3 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' guard is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_guardMapForContext_searchKey = "there is no '%K' guard" ;

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_guardMapForContext::method_searchKey (GALGAS_lstring inKey,
                                                  GALGAS_bool & outArgument0,
                                                  GALGAS_routineTypedSignature & outArgument1,
                                                  GALGAS_lstring & outArgument2,
                                                  GALGAS_lstring & outArgument3,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  const cMapElement_guardMapForContext * p = (const cMapElement_guardMapForContext *) performSearch (inKey,
                                                                                                     inCompiler,
                                                                                                     kSearchErrorMessage_guardMapForContext_searchKey
                                                                                                     COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_guardMapForContext) ;
    outArgument0 = p->mProperty_mIsPublic ;
    outArgument1 = p->mProperty_mSignature ;
    outArgument2 = p->mProperty_mUserRoutineLLVMName ;
    outArgument3 = p->mProperty_mImplementationRoutineLLVMName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_guardMapForContext::getter_mUserRoutineLLVMNameForKey (const GALGAS_string & inKey,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_guardMapForContext * p = (const cMapElement_guardMapForContext *) attributes ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_guardMapForContext) ;
    result = p->mProperty_mUserRoutineLLVMName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_guardMapForContext::getter_mImplementationRoutineLLVMNameForKey (const GALGAS_string & inKey,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_guardMapForContext * p = (const cMapElement_guardMapForContext *) attributes ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_guardMapForContext) ;
    result = p->mProperty_mImplementationRoutineLLVMName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_guardMapForContext::setter_setMUserRoutineLLVMNameForKey (GALGAS_lstring inAttributeValue,
                                                                      GALGAS_string inKey,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_guardMapForContext * p = (cMapElement_guardMapForContext *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_guardMapForContext) ;
    p->mProperty_mUserRoutineLLVMName = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_guardMapForContext::setter_setMImplementationRoutineLLVMNameForKey (GALGAS_lstring inAttributeValue,
                                                                                GALGAS_string inKey,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_guardMapForContext * p = (cMapElement_guardMapForContext *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_guardMapForContext) ;
    p->mProperty_mImplementationRoutineLLVMName = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_guardMapForContext * GALGAS_guardMapForContext::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                               const GALGAS_string & inKey
                                                                                               COMMA_LOCATION_ARGS) {
  cMapElement_guardMapForContext * result = (cMapElement_guardMapForContext *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_guardMapForContext) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_guardMapForContext::cEnumerator_guardMapForContext (const GALGAS_guardMapForContext & inEnumeratedObject,
                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_guardMapForContext_2D_element cEnumerator_guardMapForContext::current (LOCATION_ARGS) const {
  const cMapElement_guardMapForContext * p = (const cMapElement_guardMapForContext *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_guardMapForContext) ;
  return GALGAS_guardMapForContext_2D_element (p->mProperty_lkey, p->mProperty_mIsPublic, p->mProperty_mSignature, p->mProperty_mUserRoutineLLVMName, p->mProperty_mImplementationRoutineLLVMName) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_guardMapForContext::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_guardMapForContext::current_mIsPublic (LOCATION_ARGS) const {
  const cMapElement_guardMapForContext * p = (const cMapElement_guardMapForContext *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_guardMapForContext) ;
  return p->mProperty_mIsPublic ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineTypedSignature cEnumerator_guardMapForContext::current_mSignature (LOCATION_ARGS) const {
  const cMapElement_guardMapForContext * p = (const cMapElement_guardMapForContext *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_guardMapForContext) ;
  return p->mProperty_mSignature ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_guardMapForContext::current_mUserRoutineLLVMName (LOCATION_ARGS) const {
  const cMapElement_guardMapForContext * p = (const cMapElement_guardMapForContext *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_guardMapForContext) ;
  return p->mProperty_mUserRoutineLLVMName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_guardMapForContext::current_mImplementationRoutineLLVMName (LOCATION_ARGS) const {
  const cMapElement_guardMapForContext * p = (const cMapElement_guardMapForContext *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_guardMapForContext) ;
  return p->mProperty_mImplementationRoutineLLVMName ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_guardMapForContext::optional_searchKey (const GALGAS_string & inKey,
                                                    GALGAS_bool & outArgument0,
                                                    GALGAS_routineTypedSignature & outArgument1,
                                                    GALGAS_lstring & outArgument2,
                                                    GALGAS_lstring & outArgument3) const {
  const cMapElement_guardMapForContext * p = (const cMapElement_guardMapForContext *) searchForKey (inKey) ;
  const bool result = NULL != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_guardMapForContext) ;
    outArgument0 = p->mProperty_mIsPublic ;
    outArgument1 = p->mProperty_mSignature ;
    outArgument2 = p->mProperty_mUserRoutineLLVMName ;
    outArgument3 = p->mProperty_mImplementationRoutineLLVMName ;
  }else{
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@guardMapForContext type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_guardMapForContext ("guardMapForContext",
                                           NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_guardMapForContext::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guardMapForContext ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_guardMapForContext::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_guardMapForContext (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

cMapElement_controlRegisterGroupMap::cMapElement_controlRegisterGroupMap (const GALGAS_lstring & inKey,
                                                                          const GALGAS_registerGroupKind & in_mGroupKind,
                                                                          const GALGAS_controlRegisterMap & in_mControlRegisterMap
                                                                          COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mGroupKind (in_mGroupKind),
mProperty_mControlRegisterMap (in_mControlRegisterMap) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_controlRegisterGroupMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mGroupKind.isValid () && mProperty_mControlRegisterMap.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_controlRegisterGroupMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_controlRegisterGroupMap (mProperty_lkey, mProperty_mGroupKind, mProperty_mControlRegisterMap COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_controlRegisterGroupMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mGroupKind" ":" ;
  mProperty_mGroupKind.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mControlRegisterMap" ":" ;
  mProperty_mControlRegisterMap.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_controlRegisterGroupMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_controlRegisterGroupMap * operand = (cMapElement_controlRegisterGroupMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mGroupKind.objectCompare (operand->mProperty_mGroupKind) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mControlRegisterMap.objectCompare (operand->mProperty_mControlRegisterMap) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterGroupMap::GALGAS_controlRegisterGroupMap (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterGroupMap::GALGAS_controlRegisterGroupMap (const GALGAS_controlRegisterGroupMap & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterGroupMap & GALGAS_controlRegisterGroupMap::operator = (const GALGAS_controlRegisterGroupMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterGroupMap GALGAS_controlRegisterGroupMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_controlRegisterGroupMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterGroupMap GALGAS_controlRegisterGroupMap::constructor_mapWithMapToOverride (const GALGAS_controlRegisterGroupMap & inMapToOverride
                                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterGroupMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterGroupMap GALGAS_controlRegisterGroupMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  GALGAS_controlRegisterGroupMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterGroupMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                          const GALGAS_registerGroupKind & inArgument0,
                                                          const GALGAS_controlRegisterMap & inArgument1,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  cMapElement_controlRegisterGroupMap * p = NULL ;
  macroMyNew (p, cMapElement_controlRegisterGroupMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@controlRegisterGroupMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterGroupMap::setter_insertKey (GALGAS_lstring inKey,
                                                       GALGAS_registerGroupKind inArgument0,
                                                       GALGAS_controlRegisterMap inArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  cMapElement_controlRegisterGroupMap * p = NULL ;
  macroMyNew (p, cMapElement_controlRegisterGroupMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' control register group has been already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_controlRegisterGroupMap_searchKey = "** internal error **" ;

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterGroupMap::method_searchKey (GALGAS_lstring inKey,
                                                       GALGAS_registerGroupKind & outArgument0,
                                                       GALGAS_controlRegisterMap & outArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  const cMapElement_controlRegisterGroupMap * p = (const cMapElement_controlRegisterGroupMap *) performSearch (inKey,
                                                                                                               inCompiler,
                                                                                                               kSearchErrorMessage_controlRegisterGroupMap_searchKey
                                                                                                               COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_controlRegisterGroupMap) ;
    outArgument0 = p->mProperty_mGroupKind ;
    outArgument1 = p->mProperty_mControlRegisterMap ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_registerGroupKind GALGAS_controlRegisterGroupMap::getter_mGroupKindForKey (const GALGAS_string & inKey,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_controlRegisterGroupMap * p = (const cMapElement_controlRegisterGroupMap *) attributes ;
  GALGAS_registerGroupKind result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_controlRegisterGroupMap) ;
    result = p->mProperty_mGroupKind ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterMap GALGAS_controlRegisterGroupMap::getter_mControlRegisterMapForKey (const GALGAS_string & inKey,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_controlRegisterGroupMap * p = (const cMapElement_controlRegisterGroupMap *) attributes ;
  GALGAS_controlRegisterMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_controlRegisterGroupMap) ;
    result = p->mProperty_mControlRegisterMap ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterGroupMap::setter_setMGroupKindForKey (GALGAS_registerGroupKind inAttributeValue,
                                                                 GALGAS_string inKey,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_controlRegisterGroupMap * p = (cMapElement_controlRegisterGroupMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_controlRegisterGroupMap) ;
    p->mProperty_mGroupKind = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterGroupMap::setter_setMControlRegisterMapForKey (GALGAS_controlRegisterMap inAttributeValue,
                                                                          GALGAS_string inKey,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_controlRegisterGroupMap * p = (cMapElement_controlRegisterGroupMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_controlRegisterGroupMap) ;
    p->mProperty_mControlRegisterMap = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_controlRegisterGroupMap * GALGAS_controlRegisterGroupMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                         const GALGAS_string & inKey
                                                                                                         COMMA_LOCATION_ARGS) {
  cMapElement_controlRegisterGroupMap * result = (cMapElement_controlRegisterGroupMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_controlRegisterGroupMap) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_controlRegisterGroupMap::cEnumerator_controlRegisterGroupMap (const GALGAS_controlRegisterGroupMap & inEnumeratedObject,
                                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterGroupMap_2D_element cEnumerator_controlRegisterGroupMap::current (LOCATION_ARGS) const {
  const cMapElement_controlRegisterGroupMap * p = (const cMapElement_controlRegisterGroupMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_controlRegisterGroupMap) ;
  return GALGAS_controlRegisterGroupMap_2D_element (p->mProperty_lkey, p->mProperty_mGroupKind, p->mProperty_mControlRegisterMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_controlRegisterGroupMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_registerGroupKind cEnumerator_controlRegisterGroupMap::current_mGroupKind (LOCATION_ARGS) const {
  const cMapElement_controlRegisterGroupMap * p = (const cMapElement_controlRegisterGroupMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_controlRegisterGroupMap) ;
  return p->mProperty_mGroupKind ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterMap cEnumerator_controlRegisterGroupMap::current_mControlRegisterMap (LOCATION_ARGS) const {
  const cMapElement_controlRegisterGroupMap * p = (const cMapElement_controlRegisterGroupMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_controlRegisterGroupMap) ;
  return p->mProperty_mControlRegisterMap ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_controlRegisterGroupMap::optional_searchKey (const GALGAS_string & inKey,
                                                         GALGAS_registerGroupKind & outArgument0,
                                                         GALGAS_controlRegisterMap & outArgument1) const {
  const cMapElement_controlRegisterGroupMap * p = (const cMapElement_controlRegisterGroupMap *) searchForKey (inKey) ;
  const bool result = NULL != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_controlRegisterGroupMap) ;
    outArgument0 = p->mProperty_mGroupKind ;
    outArgument1 = p->mProperty_mControlRegisterMap ;
  }else{
    outArgument0.drop () ;
    outArgument1.drop () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@controlRegisterGroupMap type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_controlRegisterGroupMap ("controlRegisterGroupMap",
                                                NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_controlRegisterGroupMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterGroupMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_controlRegisterGroupMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_controlRegisterGroupMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterGroupMap GALGAS_controlRegisterGroupMap::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterGroupMap result ;
  const GALGAS_controlRegisterGroupMap * p = (const GALGAS_controlRegisterGroupMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_controlRegisterGroupMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterGroupMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_globalConstantMap::cMapElement_globalConstantMap (const GALGAS_lstring & inKey,
                                                              const GALGAS_objectIR & in_mValue
                                                              COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mValue (in_mValue) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_globalConstantMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mValue.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_globalConstantMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_globalConstantMap (mProperty_lkey, mProperty_mValue COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_globalConstantMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mValue" ":" ;
  mProperty_mValue.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_globalConstantMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_globalConstantMap * operand = (cMapElement_globalConstantMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mValue.objectCompare (operand->mProperty_mValue) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_globalConstantMap::GALGAS_globalConstantMap (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_globalConstantMap::GALGAS_globalConstantMap (const GALGAS_globalConstantMap & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_globalConstantMap & GALGAS_globalConstantMap::operator = (const GALGAS_globalConstantMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_globalConstantMap GALGAS_globalConstantMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_globalConstantMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_globalConstantMap GALGAS_globalConstantMap::constructor_mapWithMapToOverride (const GALGAS_globalConstantMap & inMapToOverride
                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_globalConstantMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_globalConstantMap GALGAS_globalConstantMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  GALGAS_globalConstantMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_globalConstantMap_searchKey = "there is no '%K' constant" ;

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

cMapElement_globalConstantMap * GALGAS_globalConstantMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                             const GALGAS_string & inKey
                                                                                             COMMA_LOCATION_ARGS) {
  cMapElement_globalConstantMap * result = (cMapElement_globalConstantMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_globalConstantMap) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_globalConstantMap::cEnumerator_globalConstantMap (const GALGAS_globalConstantMap & inEnumeratedObject,
                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_globalConstantMap_2D_element cEnumerator_globalConstantMap::current (LOCATION_ARGS) const {
  const cMapElement_globalConstantMap * p = (const cMapElement_globalConstantMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_globalConstantMap) ;
  return GALGAS_globalConstantMap_2D_element (p->mProperty_lkey, p->mProperty_mValue) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_globalConstantMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_objectIR cEnumerator_globalConstantMap::current_mValue (LOCATION_ARGS) const {
  const cMapElement_globalConstantMap * p = (const cMapElement_globalConstantMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_globalConstantMap) ;
  return p->mProperty_mValue ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_globalConstantMap::optional_searchKey (const GALGAS_string & inKey,
                                                   GALGAS_objectIR & outArgument0) const {
  const cMapElement_globalConstantMap * p = (const cMapElement_globalConstantMap *) searchForKey (inKey) ;
  const bool result = NULL != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_globalConstantMap) ;
    outArgument0 = p->mProperty_mValue ;
  }else{
    outArgument0.drop () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@globalConstantMap type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_globalConstantMap ("globalConstantMap",
                                          NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_globalConstantMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_globalConstantMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_globalConstantMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_globalConstantMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

cMapElement_globalSyncInstanceMap::cMapElement_globalSyncInstanceMap (const GALGAS_lstring & inKey,
                                                                      const GALGAS_omnibusType & in_type,
                                                                      const GALGAS_objectIR & in_initialValue
                                                                      COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_type (in_type),
mProperty_initialValue (in_initialValue) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_globalSyncInstanceMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_type.isValid () && mProperty_initialValue.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_globalSyncInstanceMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_globalSyncInstanceMap (mProperty_lkey, mProperty_type, mProperty_initialValue COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_globalSyncInstanceMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "type" ":" ;
  mProperty_type.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "initialValue" ":" ;
  mProperty_initialValue.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_globalSyncInstanceMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_globalSyncInstanceMap * operand = (cMapElement_globalSyncInstanceMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_type.objectCompare (operand->mProperty_type) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_initialValue.objectCompare (operand->mProperty_initialValue) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_globalSyncInstanceMap::GALGAS_globalSyncInstanceMap (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_globalSyncInstanceMap::GALGAS_globalSyncInstanceMap (const GALGAS_globalSyncInstanceMap & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_globalSyncInstanceMap & GALGAS_globalSyncInstanceMap::operator = (const GALGAS_globalSyncInstanceMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_globalSyncInstanceMap GALGAS_globalSyncInstanceMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_globalSyncInstanceMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_globalSyncInstanceMap GALGAS_globalSyncInstanceMap::constructor_mapWithMapToOverride (const GALGAS_globalSyncInstanceMap & inMapToOverride
                                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_globalSyncInstanceMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_globalSyncInstanceMap GALGAS_globalSyncInstanceMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  GALGAS_globalSyncInstanceMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_globalSyncInstanceMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                        const GALGAS_omnibusType & inArgument0,
                                                        const GALGAS_objectIR & inArgument1,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  cMapElement_globalSyncInstanceMap * p = NULL ;
  macroMyNew (p, cMapElement_globalSyncInstanceMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@globalSyncInstanceMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_globalSyncInstanceMap::setter_insertKey (GALGAS_lstring inKey,
                                                     GALGAS_omnibusType inArgument0,
                                                     GALGAS_objectIR inArgument1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  cMapElement_globalSyncInstanceMap * p = NULL ;
  macroMyNew (p, cMapElement_globalSyncInstanceMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' global variable is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_globalSyncInstanceMap_searchKey = "there is no '%K' global variable" ;

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_globalSyncInstanceMap::method_searchKey (GALGAS_lstring inKey,
                                                     GALGAS_omnibusType & outArgument0,
                                                     GALGAS_objectIR & outArgument1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  const cMapElement_globalSyncInstanceMap * p = (const cMapElement_globalSyncInstanceMap *) performSearch (inKey,
                                                                                                           inCompiler,
                                                                                                           kSearchErrorMessage_globalSyncInstanceMap_searchKey
                                                                                                           COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_globalSyncInstanceMap) ;
    outArgument0 = p->mProperty_type ;
    outArgument1 = p->mProperty_initialValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_omnibusType GALGAS_globalSyncInstanceMap::getter_typeForKey (const GALGAS_string & inKey,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_globalSyncInstanceMap * p = (const cMapElement_globalSyncInstanceMap *) attributes ;
  GALGAS_omnibusType result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_globalSyncInstanceMap) ;
    result = p->mProperty_type ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_objectIR GALGAS_globalSyncInstanceMap::getter_initialValueForKey (const GALGAS_string & inKey,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_globalSyncInstanceMap * p = (const cMapElement_globalSyncInstanceMap *) attributes ;
  GALGAS_objectIR result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_globalSyncInstanceMap) ;
    result = p->mProperty_initialValue ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_globalSyncInstanceMap::setter_setTypeForKey (GALGAS_omnibusType inAttributeValue,
                                                         GALGAS_string inKey,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_globalSyncInstanceMap * p = (cMapElement_globalSyncInstanceMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_globalSyncInstanceMap) ;
    p->mProperty_type = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_globalSyncInstanceMap::setter_setInitialValueForKey (GALGAS_objectIR inAttributeValue,
                                                                 GALGAS_string inKey,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_globalSyncInstanceMap * p = (cMapElement_globalSyncInstanceMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_globalSyncInstanceMap) ;
    p->mProperty_initialValue = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_globalSyncInstanceMap * GALGAS_globalSyncInstanceMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                     const GALGAS_string & inKey
                                                                                                     COMMA_LOCATION_ARGS) {
  cMapElement_globalSyncInstanceMap * result = (cMapElement_globalSyncInstanceMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_globalSyncInstanceMap) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_globalSyncInstanceMap::cEnumerator_globalSyncInstanceMap (const GALGAS_globalSyncInstanceMap & inEnumeratedObject,
                                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_globalSyncInstanceMap_2D_element cEnumerator_globalSyncInstanceMap::current (LOCATION_ARGS) const {
  const cMapElement_globalSyncInstanceMap * p = (const cMapElement_globalSyncInstanceMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_globalSyncInstanceMap) ;
  return GALGAS_globalSyncInstanceMap_2D_element (p->mProperty_lkey, p->mProperty_type, p->mProperty_initialValue) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_globalSyncInstanceMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_omnibusType cEnumerator_globalSyncInstanceMap::current_type (LOCATION_ARGS) const {
  const cMapElement_globalSyncInstanceMap * p = (const cMapElement_globalSyncInstanceMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_globalSyncInstanceMap) ;
  return p->mProperty_type ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_objectIR cEnumerator_globalSyncInstanceMap::current_initialValue (LOCATION_ARGS) const {
  const cMapElement_globalSyncInstanceMap * p = (const cMapElement_globalSyncInstanceMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_globalSyncInstanceMap) ;
  return p->mProperty_initialValue ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_globalSyncInstanceMap::optional_searchKey (const GALGAS_string & inKey,
                                                       GALGAS_omnibusType & outArgument0,
                                                       GALGAS_objectIR & outArgument1) const {
  const cMapElement_globalSyncInstanceMap * p = (const cMapElement_globalSyncInstanceMap *) searchForKey (inKey) ;
  const bool result = NULL != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_globalSyncInstanceMap) ;
    outArgument0 = p->mProperty_type ;
    outArgument1 = p->mProperty_initialValue ;
  }else{
    outArgument0.drop () ;
    outArgument1.drop () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@globalSyncInstanceMap type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_globalSyncInstanceMap ("globalSyncInstanceMap",
                                              NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_globalSyncInstanceMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_globalSyncInstanceMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_globalSyncInstanceMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_globalSyncInstanceMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_globalSyncInstanceMap GALGAS_globalSyncInstanceMap::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_globalSyncInstanceMap result ;
  const GALGAS_globalSyncInstanceMap * p = (const GALGAS_globalSyncInstanceMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_globalSyncInstanceMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("globalSyncInstanceMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_staticlistMap::cMapElement_staticlistMap (const GALGAS_lstring & inKey,
                                                      const GALGAS_propertyList & in_mStaticListPropertyList
                                                      COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mStaticListPropertyList (in_mStaticListPropertyList) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_staticlistMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mStaticListPropertyList.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_staticlistMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_staticlistMap (mProperty_lkey, mProperty_mStaticListPropertyList COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_staticlistMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mStaticListPropertyList" ":" ;
  mProperty_mStaticListPropertyList.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_staticlistMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_staticlistMap * operand = (cMapElement_staticlistMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mStaticListPropertyList.objectCompare (operand->mProperty_mStaticListPropertyList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_staticlistMap::GALGAS_staticlistMap (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_staticlistMap::GALGAS_staticlistMap (const GALGAS_staticlistMap & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_staticlistMap & GALGAS_staticlistMap::operator = (const GALGAS_staticlistMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_staticlistMap GALGAS_staticlistMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_staticlistMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_staticlistMap GALGAS_staticlistMap::constructor_mapWithMapToOverride (const GALGAS_staticlistMap & inMapToOverride
                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_staticlistMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_staticlistMap GALGAS_staticlistMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  GALGAS_staticlistMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_staticlistMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                const GALGAS_propertyList & inArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  cMapElement_staticlistMap * p = NULL ;
  macroMyNew (p, cMapElement_staticlistMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@staticlistMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_staticlistMap::setter_insertKey (GALGAS_lstring inKey,
                                             GALGAS_propertyList inArgument0,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  cMapElement_staticlistMap * p = NULL ;
  macroMyNew (p, cMapElement_staticlistMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "static list '%K' is already defined" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyList GALGAS_staticlistMap::getter_mStaticListPropertyListForKey (const GALGAS_string & inKey,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_staticlistMap * p = (const cMapElement_staticlistMap *) attributes ;
  GALGAS_propertyList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_staticlistMap) ;
    result = p->mProperty_mStaticListPropertyList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_staticlistMap::setter_setMStaticListPropertyListForKey (GALGAS_propertyList inAttributeValue,
                                                                    GALGAS_string inKey,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_staticlistMap * p = (cMapElement_staticlistMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_staticlistMap) ;
    p->mProperty_mStaticListPropertyList = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_staticlistMap * GALGAS_staticlistMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                     const GALGAS_string & inKey
                                                                                     COMMA_LOCATION_ARGS) {
  cMapElement_staticlistMap * result = (cMapElement_staticlistMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_staticlistMap) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_staticlistMap::cEnumerator_staticlistMap (const GALGAS_staticlistMap & inEnumeratedObject,
                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_staticlistMap_2D_element cEnumerator_staticlistMap::current (LOCATION_ARGS) const {
  const cMapElement_staticlistMap * p = (const cMapElement_staticlistMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_staticlistMap) ;
  return GALGAS_staticlistMap_2D_element (p->mProperty_lkey, p->mProperty_mStaticListPropertyList) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_staticlistMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyList cEnumerator_staticlistMap::current_mStaticListPropertyList (LOCATION_ARGS) const {
  const cMapElement_staticlistMap * p = (const cMapElement_staticlistMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_staticlistMap) ;
  return p->mProperty_mStaticListPropertyList ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_staticlistMap::optional_searchKey (const GALGAS_string & inKey,
                                               GALGAS_propertyList & outArgument0) const {
  const cMapElement_staticlistMap * p = (const cMapElement_staticlistMap *) searchForKey (inKey) ;
  const bool result = NULL != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_staticlistMap) ;
    outArgument0 = p->mProperty_mStaticListPropertyList ;
  }else{
    outArgument0.drop () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@staticlistMap type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_staticlistMap ("staticlistMap",
                                      NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_staticlistMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_staticlistMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_staticlistMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_staticlistMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_staticlistMap GALGAS_staticlistMap::extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GALGAS_staticlistMap result ;
  const GALGAS_staticlistMap * p = (const GALGAS_staticlistMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_staticlistMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("staticlistMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_unifiedTypeMap::cMapElement_unifiedTypeMap (const GALGAS_lstring & inKey,
                                                        const GALGAS_omnibusType & in_type
                                                        COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_type (in_type) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_unifiedTypeMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_type.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_unifiedTypeMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_unifiedTypeMap (mProperty_lkey, mProperty_type COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_unifiedTypeMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "type" ":" ;
  mProperty_type.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_unifiedTypeMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_unifiedTypeMap * operand = (cMapElement_unifiedTypeMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_type.objectCompare (operand->mProperty_type) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap::GALGAS_unifiedTypeMap (void) :
AC_GALGAS_uniqueMap (kMapAutomatonNoIssue, "") {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap::GALGAS_unifiedTypeMap (const GALGAS_unifiedTypeMap & inSource) :
AC_GALGAS_uniqueMap (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap & GALGAS_unifiedTypeMap::operator = (const GALGAS_unifiedTypeMap & inSource) {
  * ((AC_GALGAS_uniqueMap *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap GALGAS_unifiedTypeMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_unifiedTypeMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//  Map automaton states                                                                         
//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------
//  Map automaton state names                                                                    
//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------
//  Map automaton actions                                                                        
//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------
//  Map automaton transitions                                                                    
//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------
//  Map automaton final state issues                                                             
//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------

void GALGAS_unifiedTypeMap::setter_insertType (GALGAS_lstring inKey,
                                               GALGAS_omnibusType inArgument0,
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

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_unifiedTypeMap_searchKey = "there is no '%K' type" ;

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_unifiedTypeMap::method_searchKey (GALGAS_lstring inKey,
                                              GALGAS_omnibusType & outArgument0,
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_omnibusType GALGAS_unifiedTypeMap::getter_typeForKey (const GALGAS_string & inKey,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) attributes ;
  GALGAS_omnibusType result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mProperty_type ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_unifiedTypeMap::setter_setTypeForKey (GALGAS_omnibusType inAttributeValue,
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

//----------------------------------------------------------------------------------------------------------------------

cMapElement_unifiedTypeMap * GALGAS_unifiedTypeMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                       const GALGAS_string & inKey
                                                                                       COMMA_LOCATION_ARGS) {
  cMapElement_unifiedTypeMap * result = (cMapElement_unifiedTypeMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_unifiedTypeMap) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_unifiedTypeMap::cEnumerator_unifiedTypeMap (const GALGAS_unifiedTypeMap & inEnumeratedObject,
                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_unifiedTypeMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_omnibusType cEnumerator_unifiedTypeMap::current_type (LOCATION_ARGS) const {
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
  return p->mProperty_type ;
}



//----------------------------------------------------------------------------------------------------------------------
//
//@unifiedTypeMap type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_unifiedTypeMap ("unifiedTypeMap",
                                       NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_unifiedTypeMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unifiedTypeMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_unifiedTypeMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_unifiedTypeMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

cMapElement_typeConstantMap::cMapElement_typeConstantMap (const GALGAS_lstring & inKey,
                                                          const GALGAS_constantMap & in_mConstantMap
                                                          COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mConstantMap (in_mConstantMap) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_typeConstantMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mConstantMap.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_typeConstantMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_typeConstantMap (mProperty_lkey, mProperty_mConstantMap COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_typeConstantMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mConstantMap" ":" ;
  mProperty_mConstantMap.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_typeConstantMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_typeConstantMap * operand = (cMapElement_typeConstantMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mConstantMap.objectCompare (operand->mProperty_mConstantMap) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeConstantMap::GALGAS_typeConstantMap (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeConstantMap::GALGAS_typeConstantMap (const GALGAS_typeConstantMap & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeConstantMap & GALGAS_typeConstantMap::operator = (const GALGAS_typeConstantMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeConstantMap GALGAS_typeConstantMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_typeConstantMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeConstantMap GALGAS_typeConstantMap::constructor_mapWithMapToOverride (const GALGAS_typeConstantMap & inMapToOverride
                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_typeConstantMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeConstantMap GALGAS_typeConstantMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  GALGAS_typeConstantMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_typeConstantMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                  const GALGAS_constantMap & inArgument0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cMapElement_typeConstantMap * p = NULL ;
  macroMyNew (p, cMapElement_typeConstantMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@typeConstantMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_typeConstantMap::setter_insertKey (GALGAS_lstring inKey,
                                               GALGAS_constantMap inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  cMapElement_typeConstantMap * p = NULL ;
  macroMyNew (p, cMapElement_typeConstantMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the $%K type is already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_typeConstantMap_searchKey = "there is no $%K type" ;

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_typeConstantMap::method_searchKey (GALGAS_lstring inKey,
                                               GALGAS_constantMap & outArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  const cMapElement_typeConstantMap * p = (const cMapElement_typeConstantMap *) performSearch (inKey,
                                                                                               inCompiler,
                                                                                               kSearchErrorMessage_typeConstantMap_searchKey
                                                                                               COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_typeConstantMap) ;
    outArgument0 = p->mProperty_mConstantMap ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_constantMap GALGAS_typeConstantMap::getter_mConstantMapForKey (const GALGAS_string & inKey,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_typeConstantMap * p = (const cMapElement_typeConstantMap *) attributes ;
  GALGAS_constantMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_typeConstantMap) ;
    result = p->mProperty_mConstantMap ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_typeConstantMap::setter_setMConstantMapForKey (GALGAS_constantMap inAttributeValue,
                                                           GALGAS_string inKey,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_typeConstantMap * p = (cMapElement_typeConstantMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_typeConstantMap) ;
    p->mProperty_mConstantMap = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_typeConstantMap * GALGAS_typeConstantMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                         const GALGAS_string & inKey
                                                                                         COMMA_LOCATION_ARGS) {
  cMapElement_typeConstantMap * result = (cMapElement_typeConstantMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_typeConstantMap) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_typeConstantMap::cEnumerator_typeConstantMap (const GALGAS_typeConstantMap & inEnumeratedObject,
                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeConstantMap_2D_element cEnumerator_typeConstantMap::current (LOCATION_ARGS) const {
  const cMapElement_typeConstantMap * p = (const cMapElement_typeConstantMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_typeConstantMap) ;
  return GALGAS_typeConstantMap_2D_element (p->mProperty_lkey, p->mProperty_mConstantMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_typeConstantMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_constantMap cEnumerator_typeConstantMap::current_mConstantMap (LOCATION_ARGS) const {
  const cMapElement_typeConstantMap * p = (const cMapElement_typeConstantMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_typeConstantMap) ;
  return p->mProperty_mConstantMap ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_typeConstantMap::optional_searchKey (const GALGAS_string & inKey,
                                                 GALGAS_constantMap & outArgument0) const {
  const cMapElement_typeConstantMap * p = (const cMapElement_typeConstantMap *) searchForKey (inKey) ;
  const bool result = NULL != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_typeConstantMap) ;
    outArgument0 = p->mProperty_mConstantMap ;
  }else{
    outArgument0.drop () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@typeConstantMap type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_typeConstantMap ("typeConstantMap",
                                        NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_typeConstantMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeConstantMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_typeConstantMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typeConstantMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeConstantMap GALGAS_typeConstantMap::extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_typeConstantMap result ;
  const GALGAS_typeConstantMap * p = (const GALGAS_typeConstantMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_typeConstantMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeConstantMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_typeConstructorMap::cMapElement_typeConstructorMap (const GALGAS_lstring & inKey,
                                                                const GALGAS_constructorMap & in_mConstructorMap
                                                                COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mConstructorMap (in_mConstructorMap) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_typeConstructorMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mConstructorMap.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_typeConstructorMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_typeConstructorMap (mProperty_lkey, mProperty_mConstructorMap COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_typeConstructorMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mConstructorMap" ":" ;
  mProperty_mConstructorMap.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_typeConstructorMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_typeConstructorMap * operand = (cMapElement_typeConstructorMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mConstructorMap.objectCompare (operand->mProperty_mConstructorMap) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeConstructorMap::GALGAS_typeConstructorMap (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeConstructorMap::GALGAS_typeConstructorMap (const GALGAS_typeConstructorMap & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeConstructorMap & GALGAS_typeConstructorMap::operator = (const GALGAS_typeConstructorMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeConstructorMap GALGAS_typeConstructorMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_typeConstructorMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeConstructorMap GALGAS_typeConstructorMap::constructor_mapWithMapToOverride (const GALGAS_typeConstructorMap & inMapToOverride
                                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_typeConstructorMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeConstructorMap GALGAS_typeConstructorMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  GALGAS_typeConstructorMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_typeConstructorMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                     const GALGAS_constructorMap & inArgument0,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  cMapElement_typeConstructorMap * p = NULL ;
  macroMyNew (p, cMapElement_typeConstructorMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@typeConstructorMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_typeConstructorMap::setter_insertKey (GALGAS_lstring inKey,
                                                  GALGAS_constructorMap inArgument0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cMapElement_typeConstructorMap * p = NULL ;
  macroMyNew (p, cMapElement_typeConstructorMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the $%K type is already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_typeConstructorMap_searchKey = "there is no $%K type" ;

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_typeConstructorMap::method_searchKey (GALGAS_lstring inKey,
                                                  GALGAS_constructorMap & outArgument0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  const cMapElement_typeConstructorMap * p = (const cMapElement_typeConstructorMap *) performSearch (inKey,
                                                                                                     inCompiler,
                                                                                                     kSearchErrorMessage_typeConstructorMap_searchKey
                                                                                                     COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_typeConstructorMap) ;
    outArgument0 = p->mProperty_mConstructorMap ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_constructorMap GALGAS_typeConstructorMap::getter_mConstructorMapForKey (const GALGAS_string & inKey,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_typeConstructorMap * p = (const cMapElement_typeConstructorMap *) attributes ;
  GALGAS_constructorMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_typeConstructorMap) ;
    result = p->mProperty_mConstructorMap ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_typeConstructorMap::setter_setMConstructorMapForKey (GALGAS_constructorMap inAttributeValue,
                                                                 GALGAS_string inKey,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_typeConstructorMap * p = (cMapElement_typeConstructorMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_typeConstructorMap) ;
    p->mProperty_mConstructorMap = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_typeConstructorMap * GALGAS_typeConstructorMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                               const GALGAS_string & inKey
                                                                                               COMMA_LOCATION_ARGS) {
  cMapElement_typeConstructorMap * result = (cMapElement_typeConstructorMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_typeConstructorMap) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_typeConstructorMap::cEnumerator_typeConstructorMap (const GALGAS_typeConstructorMap & inEnumeratedObject,
                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeConstructorMap_2D_element cEnumerator_typeConstructorMap::current (LOCATION_ARGS) const {
  const cMapElement_typeConstructorMap * p = (const cMapElement_typeConstructorMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_typeConstructorMap) ;
  return GALGAS_typeConstructorMap_2D_element (p->mProperty_lkey, p->mProperty_mConstructorMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_typeConstructorMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_constructorMap cEnumerator_typeConstructorMap::current_mConstructorMap (LOCATION_ARGS) const {
  const cMapElement_typeConstructorMap * p = (const cMapElement_typeConstructorMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_typeConstructorMap) ;
  return p->mProperty_mConstructorMap ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_typeConstructorMap::optional_searchKey (const GALGAS_string & inKey,
                                                    GALGAS_constructorMap & outArgument0) const {
  const cMapElement_typeConstructorMap * p = (const cMapElement_typeConstructorMap *) searchForKey (inKey) ;
  const bool result = NULL != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_typeConstructorMap) ;
    outArgument0 = p->mProperty_mConstructorMap ;
  }else{
    outArgument0.drop () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@typeConstructorMap type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_typeConstructorMap ("typeConstructorMap",
                                           NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_typeConstructorMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeConstructorMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_typeConstructorMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typeConstructorMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeConstructorMap GALGAS_typeConstructorMap::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_typeConstructorMap result ;
  const GALGAS_typeConstructorMap * p = (const GALGAS_typeConstructorMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_typeConstructorMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeConstructorMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_typePropertySetterMap::cMapElement_typePropertySetterMap (const GALGAS_lstring & inKey,
                                                                      const GALGAS_propertySetterMap & in_mSetterMap
                                                                      COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mSetterMap (in_mSetterMap) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_typePropertySetterMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mSetterMap.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_typePropertySetterMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_typePropertySetterMap (mProperty_lkey, mProperty_mSetterMap COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_typePropertySetterMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSetterMap" ":" ;
  mProperty_mSetterMap.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_typePropertySetterMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_typePropertySetterMap * operand = (cMapElement_typePropertySetterMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mSetterMap.objectCompare (operand->mProperty_mSetterMap) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typePropertySetterMap::GALGAS_typePropertySetterMap (void) :
AC_GALGAS_map (false) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typePropertySetterMap::GALGAS_typePropertySetterMap (const GALGAS_typePropertySetterMap & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typePropertySetterMap & GALGAS_typePropertySetterMap::operator = (const GALGAS_typePropertySetterMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typePropertySetterMap GALGAS_typePropertySetterMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_typePropertySetterMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typePropertySetterMap GALGAS_typePropertySetterMap::constructor_mapWithMapToOverride (const GALGAS_typePropertySetterMap & inMapToOverride
                                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_typePropertySetterMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typePropertySetterMap GALGAS_typePropertySetterMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  GALGAS_typePropertySetterMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_typePropertySetterMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                        const GALGAS_propertySetterMap & inArgument0,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  cMapElement_typePropertySetterMap * p = NULL ;
  macroMyNew (p, cMapElement_typePropertySetterMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@typePropertySetterMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_typePropertySetterMap::setter_insertKey (GALGAS_lstring inKey,
                                                     GALGAS_propertySetterMap inArgument0,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  cMapElement_typePropertySetterMap * p = NULL ;
  macroMyNew (p, cMapElement_typePropertySetterMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the $%K type is already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_typePropertySetterMap_searchKey = "there is no $%K type" ;

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_typePropertySetterMap::method_searchKey (GALGAS_lstring inKey,
                                                     GALGAS_propertySetterMap & outArgument0,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  const cMapElement_typePropertySetterMap * p = (const cMapElement_typePropertySetterMap *) performSearch (inKey,
                                                                                                           inCompiler,
                                                                                                           kSearchErrorMessage_typePropertySetterMap_searchKey
                                                                                                           COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_typePropertySetterMap) ;
    outArgument0 = p->mProperty_mSetterMap ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_typePropertySetterMap::setter_insertOrReplace (GALGAS_lstring inKey,
                                                           GALGAS_propertySetterMap inArgument0
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  cMapElement_typePropertySetterMap * p = NULL ;
  macroMyNew (p, cMapElement_typePropertySetterMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  performInsertOrReplace (attributes) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertySetterMap GALGAS_typePropertySetterMap::getter_mSetterMapForKey (const GALGAS_string & inKey,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_typePropertySetterMap * p = (const cMapElement_typePropertySetterMap *) attributes ;
  GALGAS_propertySetterMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_typePropertySetterMap) ;
    result = p->mProperty_mSetterMap ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_typePropertySetterMap::setter_setMSetterMapForKey (GALGAS_propertySetterMap inAttributeValue,
                                                               GALGAS_string inKey,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_typePropertySetterMap * p = (cMapElement_typePropertySetterMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_typePropertySetterMap) ;
    p->mProperty_mSetterMap = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_typePropertySetterMap * GALGAS_typePropertySetterMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                     const GALGAS_string & inKey
                                                                                                     COMMA_LOCATION_ARGS) {
  cMapElement_typePropertySetterMap * result = (cMapElement_typePropertySetterMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_typePropertySetterMap) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_typePropertySetterMap::cEnumerator_typePropertySetterMap (const GALGAS_typePropertySetterMap & inEnumeratedObject,
                                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typePropertySetterMap_2D_element cEnumerator_typePropertySetterMap::current (LOCATION_ARGS) const {
  const cMapElement_typePropertySetterMap * p = (const cMapElement_typePropertySetterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_typePropertySetterMap) ;
  return GALGAS_typePropertySetterMap_2D_element (p->mProperty_lkey, p->mProperty_mSetterMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_typePropertySetterMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertySetterMap cEnumerator_typePropertySetterMap::current_mSetterMap (LOCATION_ARGS) const {
  const cMapElement_typePropertySetterMap * p = (const cMapElement_typePropertySetterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_typePropertySetterMap) ;
  return p->mProperty_mSetterMap ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_typePropertySetterMap::optional_searchKey (const GALGAS_string & inKey,
                                                       GALGAS_propertySetterMap & outArgument0) const {
  const cMapElement_typePropertySetterMap * p = (const cMapElement_typePropertySetterMap *) searchForKey (inKey) ;
  const bool result = NULL != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_typePropertySetterMap) ;
    outArgument0 = p->mProperty_mSetterMap ;
  }else{
    outArgument0.drop () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@typePropertySetterMap type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_typePropertySetterMap ("typePropertySetterMap",
                                              NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_typePropertySetterMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typePropertySetterMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_typePropertySetterMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typePropertySetterMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typePropertySetterMap GALGAS_typePropertySetterMap::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_typePropertySetterMap result ;
  const GALGAS_typePropertySetterMap * p = (const GALGAS_typePropertySetterMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_typePropertySetterMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typePropertySetterMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_typePropertyGetterMap::cMapElement_typePropertyGetterMap (const GALGAS_lstring & inKey,
                                                                      const GALGAS_propertyGetterMap & in_mGetterMap
                                                                      COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mGetterMap (in_mGetterMap) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_typePropertyGetterMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mGetterMap.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_typePropertyGetterMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_typePropertyGetterMap (mProperty_lkey, mProperty_mGetterMap COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_typePropertyGetterMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mGetterMap" ":" ;
  mProperty_mGetterMap.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_typePropertyGetterMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_typePropertyGetterMap * operand = (cMapElement_typePropertyGetterMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mGetterMap.objectCompare (operand->mProperty_mGetterMap) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typePropertyGetterMap::GALGAS_typePropertyGetterMap (void) :
AC_GALGAS_map (false) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typePropertyGetterMap::GALGAS_typePropertyGetterMap (const GALGAS_typePropertyGetterMap & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typePropertyGetterMap & GALGAS_typePropertyGetterMap::operator = (const GALGAS_typePropertyGetterMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typePropertyGetterMap GALGAS_typePropertyGetterMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_typePropertyGetterMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typePropertyGetterMap GALGAS_typePropertyGetterMap::constructor_mapWithMapToOverride (const GALGAS_typePropertyGetterMap & inMapToOverride
                                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_typePropertyGetterMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typePropertyGetterMap GALGAS_typePropertyGetterMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  GALGAS_typePropertyGetterMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_typePropertyGetterMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                        const GALGAS_propertyGetterMap & inArgument0,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  cMapElement_typePropertyGetterMap * p = NULL ;
  macroMyNew (p, cMapElement_typePropertyGetterMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@typePropertyGetterMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_typePropertyGetterMap::setter_insertKey (GALGAS_lstring inKey,
                                                     GALGAS_propertyGetterMap inArgument0,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  cMapElement_typePropertyGetterMap * p = NULL ;
  macroMyNew (p, cMapElement_typePropertyGetterMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the $%K type is already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_typePropertyGetterMap_searchKey = "there is no $%K type" ;

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_typePropertyGetterMap::method_searchKey (GALGAS_lstring inKey,
                                                     GALGAS_propertyGetterMap & outArgument0,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  const cMapElement_typePropertyGetterMap * p = (const cMapElement_typePropertyGetterMap *) performSearch (inKey,
                                                                                                           inCompiler,
                                                                                                           kSearchErrorMessage_typePropertyGetterMap_searchKey
                                                                                                           COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_typePropertyGetterMap) ;
    outArgument0 = p->mProperty_mGetterMap ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_typePropertyGetterMap::setter_insertOrReplace (GALGAS_lstring inKey,
                                                           GALGAS_propertyGetterMap inArgument0
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  cMapElement_typePropertyGetterMap * p = NULL ;
  macroMyNew (p, cMapElement_typePropertyGetterMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  performInsertOrReplace (attributes) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyGetterMap GALGAS_typePropertyGetterMap::getter_mGetterMapForKey (const GALGAS_string & inKey,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_typePropertyGetterMap * p = (const cMapElement_typePropertyGetterMap *) attributes ;
  GALGAS_propertyGetterMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_typePropertyGetterMap) ;
    result = p->mProperty_mGetterMap ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_typePropertyGetterMap::setter_setMGetterMapForKey (GALGAS_propertyGetterMap inAttributeValue,
                                                               GALGAS_string inKey,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_typePropertyGetterMap * p = (cMapElement_typePropertyGetterMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_typePropertyGetterMap) ;
    p->mProperty_mGetterMap = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_typePropertyGetterMap * GALGAS_typePropertyGetterMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                     const GALGAS_string & inKey
                                                                                                     COMMA_LOCATION_ARGS) {
  cMapElement_typePropertyGetterMap * result = (cMapElement_typePropertyGetterMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_typePropertyGetterMap) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_typePropertyGetterMap::cEnumerator_typePropertyGetterMap (const GALGAS_typePropertyGetterMap & inEnumeratedObject,
                                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typePropertyGetterMap_2D_element cEnumerator_typePropertyGetterMap::current (LOCATION_ARGS) const {
  const cMapElement_typePropertyGetterMap * p = (const cMapElement_typePropertyGetterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_typePropertyGetterMap) ;
  return GALGAS_typePropertyGetterMap_2D_element (p->mProperty_lkey, p->mProperty_mGetterMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_typePropertyGetterMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyGetterMap cEnumerator_typePropertyGetterMap::current_mGetterMap (LOCATION_ARGS) const {
  const cMapElement_typePropertyGetterMap * p = (const cMapElement_typePropertyGetterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_typePropertyGetterMap) ;
  return p->mProperty_mGetterMap ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_typePropertyGetterMap::optional_searchKey (const GALGAS_string & inKey,
                                                       GALGAS_propertyGetterMap & outArgument0) const {
  const cMapElement_typePropertyGetterMap * p = (const cMapElement_typePropertyGetterMap *) searchForKey (inKey) ;
  const bool result = NULL != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_typePropertyGetterMap) ;
    outArgument0 = p->mProperty_mGetterMap ;
  }else{
    outArgument0.drop () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@typePropertyGetterMap type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_typePropertyGetterMap ("typePropertyGetterMap",
                                              NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_typePropertyGetterMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typePropertyGetterMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_typePropertyGetterMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typePropertyGetterMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typePropertyGetterMap GALGAS_typePropertyGetterMap::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_typePropertyGetterMap result ;
  const GALGAS_typePropertyGetterMap * p = (const GALGAS_typePropertyGetterMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_typePropertyGetterMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typePropertyGetterMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_availableInterruptMap::cMapElement_availableInterruptMap (const GALGAS_lstring & inKey,
                                                                      const GALGAS_interruptionPanicCode & in_mInterruptionPanicCode
                                                                      COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mInterruptionPanicCode (in_mInterruptionPanicCode) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_availableInterruptMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mInterruptionPanicCode.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_availableInterruptMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_availableInterruptMap (mProperty_lkey, mProperty_mInterruptionPanicCode COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_availableInterruptMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInterruptionPanicCode" ":" ;
  mProperty_mInterruptionPanicCode.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_availableInterruptMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_availableInterruptMap * operand = (cMapElement_availableInterruptMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mInterruptionPanicCode.objectCompare (operand->mProperty_mInterruptionPanicCode) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_availableInterruptMap::GALGAS_availableInterruptMap (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_availableInterruptMap::GALGAS_availableInterruptMap (const GALGAS_availableInterruptMap & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_availableInterruptMap & GALGAS_availableInterruptMap::operator = (const GALGAS_availableInterruptMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_availableInterruptMap GALGAS_availableInterruptMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_availableInterruptMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_availableInterruptMap GALGAS_availableInterruptMap::constructor_mapWithMapToOverride (const GALGAS_availableInterruptMap & inMapToOverride
                                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_availableInterruptMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_availableInterruptMap GALGAS_availableInterruptMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  GALGAS_availableInterruptMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_availableInterruptMap_searchKey = "interrupt '%K' is not defined" ;

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

cMapElement_availableInterruptMap * GALGAS_availableInterruptMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                     const GALGAS_string & inKey
                                                                                                     COMMA_LOCATION_ARGS) {
  cMapElement_availableInterruptMap * result = (cMapElement_availableInterruptMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_availableInterruptMap) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_availableInterruptMap::cEnumerator_availableInterruptMap (const GALGAS_availableInterruptMap & inEnumeratedObject,
                                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_availableInterruptMap_2D_element cEnumerator_availableInterruptMap::current (LOCATION_ARGS) const {
  const cMapElement_availableInterruptMap * p = (const cMapElement_availableInterruptMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_availableInterruptMap) ;
  return GALGAS_availableInterruptMap_2D_element (p->mProperty_lkey, p->mProperty_mInterruptionPanicCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_availableInterruptMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_interruptionPanicCode cEnumerator_availableInterruptMap::current_mInterruptionPanicCode (LOCATION_ARGS) const {
  const cMapElement_availableInterruptMap * p = (const cMapElement_availableInterruptMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_availableInterruptMap) ;
  return p->mProperty_mInterruptionPanicCode ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_availableInterruptMap::optional_searchKey (const GALGAS_string & inKey,
                                                       GALGAS_interruptionPanicCode & outArgument0) const {
  const cMapElement_availableInterruptMap * p = (const cMapElement_availableInterruptMap *) searchForKey (inKey) ;
  const bool result = NULL != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_availableInterruptMap) ;
    outArgument0 = p->mProperty_mInterruptionPanicCode ;
  }else{
    outArgument0.drop () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@availableInterruptMap type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_availableInterruptMap ("availableInterruptMap",
                                              NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_availableInterruptMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_availableInterruptMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_availableInterruptMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_availableInterruptMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

cMapElement_infixOperatorMap::cMapElement_infixOperatorMap (const GALGAS_lstring & inKey,
                                                            const GALGAS_omnibusType & in_mResultType,
                                                            const GALGAS_omnibusInfixOperatorUsage & in_mOperatorUsage
                                                            COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mResultType (in_mResultType),
mProperty_mOperatorUsage (in_mOperatorUsage) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_infixOperatorMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mResultType.isValid () && mProperty_mOperatorUsage.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_infixOperatorMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_infixOperatorMap (mProperty_lkey, mProperty_mResultType, mProperty_mOperatorUsage COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_infixOperatorMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mResultType" ":" ;
  mProperty_mResultType.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOperatorUsage" ":" ;
  mProperty_mOperatorUsage.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_infixOperatorMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_infixOperatorMap * operand = (cMapElement_infixOperatorMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mResultType.objectCompare (operand->mProperty_mResultType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOperatorUsage.objectCompare (operand->mProperty_mOperatorUsage) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_infixOperatorMap::GALGAS_infixOperatorMap (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_infixOperatorMap::GALGAS_infixOperatorMap (const GALGAS_infixOperatorMap & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_infixOperatorMap & GALGAS_infixOperatorMap::operator = (const GALGAS_infixOperatorMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_infixOperatorMap GALGAS_infixOperatorMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_infixOperatorMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_infixOperatorMap GALGAS_infixOperatorMap::constructor_mapWithMapToOverride (const GALGAS_infixOperatorMap & inMapToOverride
                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_infixOperatorMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_infixOperatorMap GALGAS_infixOperatorMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  GALGAS_infixOperatorMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_infixOperatorMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                   const GALGAS_omnibusType & inArgument0,
                                                   const GALGAS_omnibusInfixOperatorUsage & inArgument1,
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_infixOperatorMap::setter_insertKey (GALGAS_lstring inKey,
                                                GALGAS_omnibusType inArgument0,
                                                GALGAS_omnibusInfixOperatorUsage inArgument1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  cMapElement_infixOperatorMap * p = NULL ;
  macroMyNew (p, cMapElement_infixOperatorMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' infix operator is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_infixOperatorMap_searchKey = "there is no '%K' infix operator" ;

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_infixOperatorMap::method_searchKey (GALGAS_lstring inKey,
                                                GALGAS_omnibusType & outArgument0,
                                                GALGAS_omnibusInfixOperatorUsage & outArgument1,
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
    outArgument1 = p->mProperty_mOperatorUsage ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_omnibusType GALGAS_infixOperatorMap::getter_mResultTypeForKey (const GALGAS_string & inKey,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_infixOperatorMap * p = (const cMapElement_infixOperatorMap *) attributes ;
  GALGAS_omnibusType result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_infixOperatorMap) ;
    result = p->mProperty_mResultType ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_omnibusInfixOperatorUsage GALGAS_infixOperatorMap::getter_mOperatorUsageForKey (const GALGAS_string & inKey,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_infixOperatorMap * p = (const cMapElement_infixOperatorMap *) attributes ;
  GALGAS_omnibusInfixOperatorUsage result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_infixOperatorMap) ;
    result = p->mProperty_mOperatorUsage ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_infixOperatorMap::setter_setMResultTypeForKey (GALGAS_omnibusType inAttributeValue,
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_infixOperatorMap::setter_setMOperatorUsageForKey (GALGAS_omnibusInfixOperatorUsage inAttributeValue,
                                                              GALGAS_string inKey,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_infixOperatorMap * p = (cMapElement_infixOperatorMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_infixOperatorMap) ;
    p->mProperty_mOperatorUsage = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_infixOperatorMap * GALGAS_infixOperatorMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                           const GALGAS_string & inKey
                                                                                           COMMA_LOCATION_ARGS) {
  cMapElement_infixOperatorMap * result = (cMapElement_infixOperatorMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_infixOperatorMap) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_infixOperatorMap::cEnumerator_infixOperatorMap (const GALGAS_infixOperatorMap & inEnumeratedObject,
                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_infixOperatorMap_2D_element cEnumerator_infixOperatorMap::current (LOCATION_ARGS) const {
  const cMapElement_infixOperatorMap * p = (const cMapElement_infixOperatorMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_infixOperatorMap) ;
  return GALGAS_infixOperatorMap_2D_element (p->mProperty_lkey, p->mProperty_mResultType, p->mProperty_mOperatorUsage) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_infixOperatorMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_omnibusType cEnumerator_infixOperatorMap::current_mResultType (LOCATION_ARGS) const {
  const cMapElement_infixOperatorMap * p = (const cMapElement_infixOperatorMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_infixOperatorMap) ;
  return p->mProperty_mResultType ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_omnibusInfixOperatorUsage cEnumerator_infixOperatorMap::current_mOperatorUsage (LOCATION_ARGS) const {
  const cMapElement_infixOperatorMap * p = (const cMapElement_infixOperatorMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_infixOperatorMap) ;
  return p->mProperty_mOperatorUsage ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_infixOperatorMap::optional_searchKey (const GALGAS_string & inKey,
                                                  GALGAS_omnibusType & outArgument0,
                                                  GALGAS_omnibusInfixOperatorUsage & outArgument1) const {
  const cMapElement_infixOperatorMap * p = (const cMapElement_infixOperatorMap *) searchForKey (inKey) ;
  const bool result = NULL != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_infixOperatorMap) ;
    outArgument0 = p->mProperty_mResultType ;
    outArgument1 = p->mProperty_mOperatorUsage ;
  }else{
    outArgument0.drop () ;
    outArgument1.drop () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@infixOperatorMap type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_infixOperatorMap ("infixOperatorMap",
                                         NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_infixOperatorMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_infixOperatorMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_infixOperatorMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_infixOperatorMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

cMapElement_prefixOperatorMap::cMapElement_prefixOperatorMap (const GALGAS_lstring & inKey,
                                                              const GALGAS_omnibusType & in_mReceiverType,
                                                              const GALGAS_omnibusType & in_mResultType,
                                                              const GALGAS_prefixOperatorUsage & in_mOperator
                                                              COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mReceiverType (in_mReceiverType),
mProperty_mResultType (in_mResultType),
mProperty_mOperator (in_mOperator) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_prefixOperatorMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mReceiverType.isValid () && mProperty_mResultType.isValid () && mProperty_mOperator.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_prefixOperatorMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_prefixOperatorMap (mProperty_lkey, mProperty_mReceiverType, mProperty_mResultType, mProperty_mOperator COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_prefixOperatorMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mReceiverType" ":" ;
  mProperty_mReceiverType.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mResultType" ":" ;
  mProperty_mResultType.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOperator" ":" ;
  mProperty_mOperator.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_prefixOperatorMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_prefixOperatorMap * operand = (cMapElement_prefixOperatorMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mReceiverType.objectCompare (operand->mProperty_mReceiverType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mResultType.objectCompare (operand->mProperty_mResultType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOperator.objectCompare (operand->mProperty_mOperator) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_prefixOperatorMap::GALGAS_prefixOperatorMap (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_prefixOperatorMap::GALGAS_prefixOperatorMap (const GALGAS_prefixOperatorMap & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_prefixOperatorMap & GALGAS_prefixOperatorMap::operator = (const GALGAS_prefixOperatorMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_prefixOperatorMap GALGAS_prefixOperatorMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_prefixOperatorMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_prefixOperatorMap GALGAS_prefixOperatorMap::constructor_mapWithMapToOverride (const GALGAS_prefixOperatorMap & inMapToOverride
                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_prefixOperatorMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_prefixOperatorMap GALGAS_prefixOperatorMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  GALGAS_prefixOperatorMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_prefixOperatorMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                    const GALGAS_omnibusType & inArgument0,
                                                    const GALGAS_omnibusType & inArgument1,
                                                    const GALGAS_prefixOperatorUsage & inArgument2,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  cMapElement_prefixOperatorMap * p = NULL ;
  macroMyNew (p, cMapElement_prefixOperatorMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@prefixOperatorMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_prefixOperatorMap::setter_insertKey (GALGAS_lstring inKey,
                                                 GALGAS_omnibusType inArgument0,
                                                 GALGAS_omnibusType inArgument1,
                                                 GALGAS_prefixOperatorUsage inArgument2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  cMapElement_prefixOperatorMap * p = NULL ;
  macroMyNew (p, cMapElement_prefixOperatorMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' infix operator is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_prefixOperatorMap_searchKey = "there is no '%K' infix operator" ;

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_prefixOperatorMap::method_searchKey (GALGAS_lstring inKey,
                                                 GALGAS_omnibusType & outArgument0,
                                                 GALGAS_omnibusType & outArgument1,
                                                 GALGAS_prefixOperatorUsage & outArgument2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  const cMapElement_prefixOperatorMap * p = (const cMapElement_prefixOperatorMap *) performSearch (inKey,
                                                                                                   inCompiler,
                                                                                                   kSearchErrorMessage_prefixOperatorMap_searchKey
                                                                                                   COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_prefixOperatorMap) ;
    outArgument0 = p->mProperty_mReceiverType ;
    outArgument1 = p->mProperty_mResultType ;
    outArgument2 = p->mProperty_mOperator ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_omnibusType GALGAS_prefixOperatorMap::getter_mReceiverTypeForKey (const GALGAS_string & inKey,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_prefixOperatorMap * p = (const cMapElement_prefixOperatorMap *) attributes ;
  GALGAS_omnibusType result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_prefixOperatorMap) ;
    result = p->mProperty_mReceiverType ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_omnibusType GALGAS_prefixOperatorMap::getter_mResultTypeForKey (const GALGAS_string & inKey,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_prefixOperatorMap * p = (const cMapElement_prefixOperatorMap *) attributes ;
  GALGAS_omnibusType result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_prefixOperatorMap) ;
    result = p->mProperty_mResultType ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_prefixOperatorUsage GALGAS_prefixOperatorMap::getter_mOperatorForKey (const GALGAS_string & inKey,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_prefixOperatorMap * p = (const cMapElement_prefixOperatorMap *) attributes ;
  GALGAS_prefixOperatorUsage result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_prefixOperatorMap) ;
    result = p->mProperty_mOperator ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_prefixOperatorMap::setter_setMReceiverTypeForKey (GALGAS_omnibusType inAttributeValue,
                                                              GALGAS_string inKey,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_prefixOperatorMap * p = (cMapElement_prefixOperatorMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_prefixOperatorMap) ;
    p->mProperty_mReceiverType = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_prefixOperatorMap::setter_setMResultTypeForKey (GALGAS_omnibusType inAttributeValue,
                                                            GALGAS_string inKey,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_prefixOperatorMap * p = (cMapElement_prefixOperatorMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_prefixOperatorMap) ;
    p->mProperty_mResultType = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_prefixOperatorMap::setter_setMOperatorForKey (GALGAS_prefixOperatorUsage inAttributeValue,
                                                          GALGAS_string inKey,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_prefixOperatorMap * p = (cMapElement_prefixOperatorMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_prefixOperatorMap) ;
    p->mProperty_mOperator = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_prefixOperatorMap * GALGAS_prefixOperatorMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                             const GALGAS_string & inKey
                                                                                             COMMA_LOCATION_ARGS) {
  cMapElement_prefixOperatorMap * result = (cMapElement_prefixOperatorMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_prefixOperatorMap) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_prefixOperatorMap::cEnumerator_prefixOperatorMap (const GALGAS_prefixOperatorMap & inEnumeratedObject,
                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_prefixOperatorMap_2D_element cEnumerator_prefixOperatorMap::current (LOCATION_ARGS) const {
  const cMapElement_prefixOperatorMap * p = (const cMapElement_prefixOperatorMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_prefixOperatorMap) ;
  return GALGAS_prefixOperatorMap_2D_element (p->mProperty_lkey, p->mProperty_mReceiverType, p->mProperty_mResultType, p->mProperty_mOperator) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_prefixOperatorMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_omnibusType cEnumerator_prefixOperatorMap::current_mReceiverType (LOCATION_ARGS) const {
  const cMapElement_prefixOperatorMap * p = (const cMapElement_prefixOperatorMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_prefixOperatorMap) ;
  return p->mProperty_mReceiverType ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_omnibusType cEnumerator_prefixOperatorMap::current_mResultType (LOCATION_ARGS) const {
  const cMapElement_prefixOperatorMap * p = (const cMapElement_prefixOperatorMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_prefixOperatorMap) ;
  return p->mProperty_mResultType ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_prefixOperatorUsage cEnumerator_prefixOperatorMap::current_mOperator (LOCATION_ARGS) const {
  const cMapElement_prefixOperatorMap * p = (const cMapElement_prefixOperatorMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_prefixOperatorMap) ;
  return p->mProperty_mOperator ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_prefixOperatorMap::optional_searchKey (const GALGAS_string & inKey,
                                                   GALGAS_omnibusType & outArgument0,
                                                   GALGAS_omnibusType & outArgument1,
                                                   GALGAS_prefixOperatorUsage & outArgument2) const {
  const cMapElement_prefixOperatorMap * p = (const cMapElement_prefixOperatorMap *) searchForKey (inKey) ;
  const bool result = NULL != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_prefixOperatorMap) ;
    outArgument0 = p->mProperty_mReceiverType ;
    outArgument1 = p->mProperty_mResultType ;
    outArgument2 = p->mProperty_mOperator ;
  }else{
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@prefixOperatorMap type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_prefixOperatorMap ("prefixOperatorMap",
                                          NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_prefixOperatorMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_prefixOperatorMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_prefixOperatorMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_prefixOperatorMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

cMapElement_assignmentOperatorMap::cMapElement_assignmentOperatorMap (const GALGAS_lstring & inKey,
                                                                      const GALGAS_abstractAssignmentOperatorUsage & in_mOperatorUsage
                                                                      COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mOperatorUsage (in_mOperatorUsage) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_assignmentOperatorMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mOperatorUsage.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_assignmentOperatorMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_assignmentOperatorMap (mProperty_lkey, mProperty_mOperatorUsage COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_assignmentOperatorMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOperatorUsage" ":" ;
  mProperty_mOperatorUsage.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_assignmentOperatorMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_assignmentOperatorMap * operand = (cMapElement_assignmentOperatorMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mOperatorUsage.objectCompare (operand->mProperty_mOperatorUsage) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_assignmentOperatorMap::GALGAS_assignmentOperatorMap (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_assignmentOperatorMap::GALGAS_assignmentOperatorMap (const GALGAS_assignmentOperatorMap & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_assignmentOperatorMap & GALGAS_assignmentOperatorMap::operator = (const GALGAS_assignmentOperatorMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_assignmentOperatorMap GALGAS_assignmentOperatorMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_assignmentOperatorMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_assignmentOperatorMap GALGAS_assignmentOperatorMap::constructor_mapWithMapToOverride (const GALGAS_assignmentOperatorMap & inMapToOverride
                                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_assignmentOperatorMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_assignmentOperatorMap GALGAS_assignmentOperatorMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  GALGAS_assignmentOperatorMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_assignmentOperatorMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                        const GALGAS_abstractAssignmentOperatorUsage & inArgument0,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  cMapElement_assignmentOperatorMap * p = NULL ;
  macroMyNew (p, cMapElement_assignmentOperatorMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@assignmentOperatorMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_assignmentOperatorMap::setter_insertKey (GALGAS_lstring inKey,
                                                     GALGAS_abstractAssignmentOperatorUsage inArgument0,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  cMapElement_assignmentOperatorMap * p = NULL ;
  macroMyNew (p, cMapElement_assignmentOperatorMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' assignment is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_assignmentOperatorMap_searchKey = "there is no '%K' assignment" ;

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_assignmentOperatorMap::method_searchKey (GALGAS_lstring inKey,
                                                     GALGAS_abstractAssignmentOperatorUsage & outArgument0,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  const cMapElement_assignmentOperatorMap * p = (const cMapElement_assignmentOperatorMap *) performSearch (inKey,
                                                                                                           inCompiler,
                                                                                                           kSearchErrorMessage_assignmentOperatorMap_searchKey
                                                                                                           COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_assignmentOperatorMap) ;
    outArgument0 = p->mProperty_mOperatorUsage ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractAssignmentOperatorUsage GALGAS_assignmentOperatorMap::getter_mOperatorUsageForKey (const GALGAS_string & inKey,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_assignmentOperatorMap * p = (const cMapElement_assignmentOperatorMap *) attributes ;
  GALGAS_abstractAssignmentOperatorUsage result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_assignmentOperatorMap) ;
    result = p->mProperty_mOperatorUsage ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_assignmentOperatorMap::setter_setMOperatorUsageForKey (GALGAS_abstractAssignmentOperatorUsage inAttributeValue,
                                                                   GALGAS_string inKey,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_assignmentOperatorMap * p = (cMapElement_assignmentOperatorMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_assignmentOperatorMap) ;
    p->mProperty_mOperatorUsage = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_assignmentOperatorMap * GALGAS_assignmentOperatorMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                     const GALGAS_string & inKey
                                                                                                     COMMA_LOCATION_ARGS) {
  cMapElement_assignmentOperatorMap * result = (cMapElement_assignmentOperatorMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_assignmentOperatorMap) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_assignmentOperatorMap::cEnumerator_assignmentOperatorMap (const GALGAS_assignmentOperatorMap & inEnumeratedObject,
                                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_assignmentOperatorMap_2D_element cEnumerator_assignmentOperatorMap::current (LOCATION_ARGS) const {
  const cMapElement_assignmentOperatorMap * p = (const cMapElement_assignmentOperatorMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_assignmentOperatorMap) ;
  return GALGAS_assignmentOperatorMap_2D_element (p->mProperty_lkey, p->mProperty_mOperatorUsage) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_assignmentOperatorMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractAssignmentOperatorUsage cEnumerator_assignmentOperatorMap::current_mOperatorUsage (LOCATION_ARGS) const {
  const cMapElement_assignmentOperatorMap * p = (const cMapElement_assignmentOperatorMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_assignmentOperatorMap) ;
  return p->mProperty_mOperatorUsage ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_assignmentOperatorMap::optional_searchKey (const GALGAS_string & inKey,
                                                       GALGAS_abstractAssignmentOperatorUsage & outArgument0) const {
  const cMapElement_assignmentOperatorMap * p = (const cMapElement_assignmentOperatorMap *) searchForKey (inKey) ;
  const bool result = NULL != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_assignmentOperatorMap) ;
    outArgument0 = p->mProperty_mOperatorUsage ;
  }else{
    outArgument0.drop () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@assignmentOperatorMap type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_assignmentOperatorMap ("assignmentOperatorMap",
                                              NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_assignmentOperatorMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assignmentOperatorMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_assignmentOperatorMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_assignmentOperatorMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_assignmentOperatorMap GALGAS_assignmentOperatorMap::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_assignmentOperatorMap result ;
  const GALGAS_assignmentOperatorMap * p = (const GALGAS_assignmentOperatorMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_assignmentOperatorMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("assignmentOperatorMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_implicitConversionToBooleanMap::cMapElement_implicitConversionToBooleanMap (const GALGAS_lstring & inKey,
                                                                                        const GALGAS_abstractImplicitConverterToBoolean & in_mConverter
                                                                                        COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mConverter (in_mConverter) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_implicitConversionToBooleanMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mConverter.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_implicitConversionToBooleanMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_implicitConversionToBooleanMap (mProperty_lkey, mProperty_mConverter COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_implicitConversionToBooleanMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mConverter" ":" ;
  mProperty_mConverter.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_implicitConversionToBooleanMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_implicitConversionToBooleanMap * operand = (cMapElement_implicitConversionToBooleanMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mConverter.objectCompare (operand->mProperty_mConverter) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_implicitConversionToBooleanMap::GALGAS_implicitConversionToBooleanMap (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_implicitConversionToBooleanMap::GALGAS_implicitConversionToBooleanMap (const GALGAS_implicitConversionToBooleanMap & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_implicitConversionToBooleanMap & GALGAS_implicitConversionToBooleanMap::operator = (const GALGAS_implicitConversionToBooleanMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_implicitConversionToBooleanMap GALGAS_implicitConversionToBooleanMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_implicitConversionToBooleanMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_implicitConversionToBooleanMap GALGAS_implicitConversionToBooleanMap::constructor_mapWithMapToOverride (const GALGAS_implicitConversionToBooleanMap & inMapToOverride
                                                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_implicitConversionToBooleanMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_implicitConversionToBooleanMap GALGAS_implicitConversionToBooleanMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const {
  GALGAS_implicitConversionToBooleanMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_implicitConversionToBooleanMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                                 const GALGAS_abstractImplicitConverterToBoolean & inArgument0,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cMapElement_implicitConversionToBooleanMap * p = NULL ;
  macroMyNew (p, cMapElement_implicitConversionToBooleanMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@implicitConversionToBooleanMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_implicitConversionToBooleanMap::setter_insertKey (GALGAS_lstring inKey,
                                                              GALGAS_abstractImplicitConverterToBoolean inArgument0,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cMapElement_implicitConversionToBooleanMap * p = NULL ;
  macroMyNew (p, cMapElement_implicitConversionToBooleanMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' type is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_implicitConversionToBooleanMap_searchKey = "the '%K' type cannot be implicitly converted to boolean" ;

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_implicitConversionToBooleanMap::method_searchKey (GALGAS_lstring inKey,
                                                              GALGAS_abstractImplicitConverterToBoolean & outArgument0,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  const cMapElement_implicitConversionToBooleanMap * p = (const cMapElement_implicitConversionToBooleanMap *) performSearch (inKey,
                                                                                                                             inCompiler,
                                                                                                                             kSearchErrorMessage_implicitConversionToBooleanMap_searchKey
                                                                                                                             COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_implicitConversionToBooleanMap) ;
    outArgument0 = p->mProperty_mConverter ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractImplicitConverterToBoolean GALGAS_implicitConversionToBooleanMap::getter_mConverterForKey (const GALGAS_string & inKey,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_implicitConversionToBooleanMap * p = (const cMapElement_implicitConversionToBooleanMap *) attributes ;
  GALGAS_abstractImplicitConverterToBoolean result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_implicitConversionToBooleanMap) ;
    result = p->mProperty_mConverter ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_implicitConversionToBooleanMap::setter_setMConverterForKey (GALGAS_abstractImplicitConverterToBoolean inAttributeValue,
                                                                        GALGAS_string inKey,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_implicitConversionToBooleanMap * p = (cMapElement_implicitConversionToBooleanMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_implicitConversionToBooleanMap) ;
    p->mProperty_mConverter = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_implicitConversionToBooleanMap * GALGAS_implicitConversionToBooleanMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                                       const GALGAS_string & inKey
                                                                                                                       COMMA_LOCATION_ARGS) {
  cMapElement_implicitConversionToBooleanMap * result = (cMapElement_implicitConversionToBooleanMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_implicitConversionToBooleanMap) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_implicitConversionToBooleanMap::cEnumerator_implicitConversionToBooleanMap (const GALGAS_implicitConversionToBooleanMap & inEnumeratedObject,
                                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_implicitConversionToBooleanMap_2D_element cEnumerator_implicitConversionToBooleanMap::current (LOCATION_ARGS) const {
  const cMapElement_implicitConversionToBooleanMap * p = (const cMapElement_implicitConversionToBooleanMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_implicitConversionToBooleanMap) ;
  return GALGAS_implicitConversionToBooleanMap_2D_element (p->mProperty_lkey, p->mProperty_mConverter) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_implicitConversionToBooleanMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractImplicitConverterToBoolean cEnumerator_implicitConversionToBooleanMap::current_mConverter (LOCATION_ARGS) const {
  const cMapElement_implicitConversionToBooleanMap * p = (const cMapElement_implicitConversionToBooleanMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_implicitConversionToBooleanMap) ;
  return p->mProperty_mConverter ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_implicitConversionToBooleanMap::optional_searchKey (const GALGAS_string & inKey,
                                                                GALGAS_abstractImplicitConverterToBoolean & outArgument0) const {
  const cMapElement_implicitConversionToBooleanMap * p = (const cMapElement_implicitConversionToBooleanMap *) searchForKey (inKey) ;
  const bool result = NULL != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_implicitConversionToBooleanMap) ;
    outArgument0 = p->mProperty_mConverter ;
  }else{
    outArgument0.drop () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@implicitConversionToBooleanMap type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_implicitConversionToBooleanMap ("implicitConversionToBooleanMap",
                                                       NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_implicitConversionToBooleanMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_implicitConversionToBooleanMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_implicitConversionToBooleanMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_implicitConversionToBooleanMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_implicitConversionToBooleanMap GALGAS_implicitConversionToBooleanMap::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_implicitConversionToBooleanMap result ;
  const GALGAS_implicitConversionToBooleanMap * p = (const GALGAS_implicitConversionToBooleanMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_implicitConversionToBooleanMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("implicitConversionToBooleanMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_taskMap::cMapElement_taskMap (const GALGAS_lstring & inKey,
                                          const GALGAS_omnibusType & in_mTaskType
                                          COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mTaskType (in_mTaskType) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_taskMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mTaskType.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_taskMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_taskMap (mProperty_lkey, mProperty_mTaskType COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_taskMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTaskType" ":" ;
  mProperty_mTaskType.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_taskMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_taskMap * operand = (cMapElement_taskMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mTaskType.objectCompare (operand->mProperty_mTaskType) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_taskMap::GALGAS_taskMap (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_taskMap::GALGAS_taskMap (const GALGAS_taskMap & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_taskMap & GALGAS_taskMap::operator = (const GALGAS_taskMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_taskMap GALGAS_taskMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_taskMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_taskMap GALGAS_taskMap::constructor_mapWithMapToOverride (const GALGAS_taskMap & inMapToOverride
                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_taskMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_taskMap GALGAS_taskMap::getter_overriddenMap (C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  GALGAS_taskMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_taskMap::addAssign_operation (const GALGAS_lstring & inKey,
                                          const GALGAS_omnibusType & inArgument0,
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_taskMap::setter_insertKey (GALGAS_lstring inKey,
                                       GALGAS_omnibusType inArgument0,
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

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_taskMap_searchKey = "there is no '%K' task" ;

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_taskMap::method_searchKey (GALGAS_lstring inKey,
                                       GALGAS_omnibusType & outArgument0,
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_omnibusType GALGAS_taskMap::getter_mTaskTypeForKey (const GALGAS_string & inKey,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_taskMap * p = (const cMapElement_taskMap *) attributes ;
  GALGAS_omnibusType result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_taskMap) ;
    result = p->mProperty_mTaskType ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_taskMap::setter_setMTaskTypeForKey (GALGAS_omnibusType inAttributeValue,
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

//----------------------------------------------------------------------------------------------------------------------

cMapElement_taskMap * GALGAS_taskMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                         const GALGAS_string & inKey
                                                                         COMMA_LOCATION_ARGS) {
  cMapElement_taskMap * result = (cMapElement_taskMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_taskMap) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_taskMap::cEnumerator_taskMap (const GALGAS_taskMap & inEnumeratedObject,
                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_taskMap_2D_element cEnumerator_taskMap::current (LOCATION_ARGS) const {
  const cMapElement_taskMap * p = (const cMapElement_taskMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_taskMap) ;
  return GALGAS_taskMap_2D_element (p->mProperty_lkey, p->mProperty_mTaskType) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_taskMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_omnibusType cEnumerator_taskMap::current_mTaskType (LOCATION_ARGS) const {
  const cMapElement_taskMap * p = (const cMapElement_taskMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_taskMap) ;
  return p->mProperty_mTaskType ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_taskMap::optional_searchKey (const GALGAS_string & inKey,
                                         GALGAS_omnibusType & outArgument0) const {
  const cMapElement_taskMap * p = (const cMapElement_taskMap *) searchForKey (inKey) ;
  const bool result = NULL != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_taskMap) ;
    outArgument0 = p->mProperty_mTaskType ;
  }else{
    outArgument0.drop () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@taskMap type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_taskMap ("taskMap",
                                NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_taskMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_taskMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_taskMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_taskMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@globalTaskVariableList' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_globalTaskVariableList : public cCollectionElement {
  public: GALGAS_globalTaskVariableList_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_globalTaskVariableList (const GALGAS_string & in_mTaskName,
                                                     const GALGAS_string & in_mTaskTypeName,
                                                     const GALGAS_objectIR & in_mInitialValue
                                                     COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_globalTaskVariableList (const GALGAS_globalTaskVariableList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_globalTaskVariableList::cCollectionElement_globalTaskVariableList (const GALGAS_string & in_mTaskName,
                                                                                      const GALGAS_string & in_mTaskTypeName,
                                                                                      const GALGAS_objectIR & in_mInitialValue
                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mTaskName, in_mTaskTypeName, in_mInitialValue) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_globalTaskVariableList::cCollectionElement_globalTaskVariableList (const GALGAS_globalTaskVariableList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mTaskName, inElement.mProperty_mTaskTypeName, inElement.mProperty_mInitialValue) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_globalTaskVariableList::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_globalTaskVariableList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_globalTaskVariableList (mObject.mProperty_mTaskName, mObject.mProperty_mTaskTypeName, mObject.mProperty_mInitialValue COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_globalTaskVariableList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_globalTaskVariableList * operand = (cCollectionElement_globalTaskVariableList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_globalTaskVariableList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_globalTaskVariableList::GALGAS_globalTaskVariableList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_globalTaskVariableList::GALGAS_globalTaskVariableList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_globalTaskVariableList GALGAS_globalTaskVariableList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_globalTaskVariableList  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_globalTaskVariableList::addAssign_operation (const GALGAS_string & inOperand0,
                                                         const GALGAS_string & inOperand1,
                                                         const GALGAS_objectIR & inOperand2
                                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_globalTaskVariableList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{ // Destroy receiver
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_globalTaskVariableList::setter_append (GALGAS_globalTaskVariableList_2D_element inElement,
                                                   C_Compiler * /* inCompiler */
                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_globalTaskVariableList (inElement COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_globalTaskVariableList::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                          const GALGAS_string inOperand1,
                                                          const GALGAS_objectIR inOperand2,
                                                          const GALGAS_uint inInsertionIndex,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_globalTaskVariableList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_globalTaskVariableList::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                          GALGAS_string & outOperand1,
                                                          GALGAS_objectIR & outOperand2,
                                                          const GALGAS_uint inRemoveIndex,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_globalTaskVariableList * p = (cCollectionElement_globalTaskVariableList *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_globalTaskVariableList) ;
        outOperand0 = p->mObject.mProperty_mTaskName ;
        outOperand1 = p->mObject.mProperty_mTaskTypeName ;
        outOperand2 = p->mObject.mProperty_mInitialValue ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_globalTaskVariableList GALGAS_globalTaskVariableList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_globalTaskVariableList result = GALGAS_globalTaskVariableList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_globalTaskVariableList GALGAS_globalTaskVariableList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_globalTaskVariableList result = GALGAS_globalTaskVariableList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_globalTaskVariableList GALGAS_globalTaskVariableList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_globalTaskVariableList result = GALGAS_globalTaskVariableList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_globalTaskVariableList::plusAssign_operation (const GALGAS_globalTaskVariableList inOperand,
                                                          C_Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_globalTaskVariableList::setter_setMTaskNameAtIndex (GALGAS_string inOperand,
                                                                GALGAS_uint inIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_globalTaskVariableList * p = (cCollectionElement_globalTaskVariableList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_globalTaskVariableList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mTaskName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_globalTaskVariableList::setter_setMTaskTypeNameAtIndex (GALGAS_string inOperand,
                                                                    GALGAS_uint inIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_globalTaskVariableList * p = (cCollectionElement_globalTaskVariableList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_globalTaskVariableList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mTaskTypeName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_globalTaskVariableList::setter_setMInitialValueAtIndex (GALGAS_objectIR inOperand,
                                                                    GALGAS_uint inIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_globalTaskVariableList * p = (cCollectionElement_globalTaskVariableList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_globalTaskVariableList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInitialValue = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_globalTaskVariableList::cEnumerator_globalTaskVariableList (const GALGAS_globalTaskVariableList & inEnumeratedObject,
                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_globalTaskVariableList_2D_element cEnumerator_globalTaskVariableList::current (LOCATION_ARGS) const {
  const cCollectionElement_globalTaskVariableList * p = (const cCollectionElement_globalTaskVariableList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_globalTaskVariableList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_globalTaskVariableList::current_mTaskName (LOCATION_ARGS) const {
  const cCollectionElement_globalTaskVariableList * p = (const cCollectionElement_globalTaskVariableList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_globalTaskVariableList) ;
  return p->mObject.mProperty_mTaskName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_globalTaskVariableList::current_mTaskTypeName (LOCATION_ARGS) const {
  const cCollectionElement_globalTaskVariableList * p = (const cCollectionElement_globalTaskVariableList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_globalTaskVariableList) ;
  return p->mObject.mProperty_mTaskTypeName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_objectIR cEnumerator_globalTaskVariableList::current_mInitialValue (LOCATION_ARGS) const {
  const cCollectionElement_globalTaskVariableList * p = (const cCollectionElement_globalTaskVariableList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_globalTaskVariableList) ;
  return p->mObject.mProperty_mInitialValue ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@globalTaskVariableList type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_globalTaskVariableList ("globalTaskVariableList",
                                               NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_globalTaskVariableList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_globalTaskVariableList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_globalTaskVariableList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_globalTaskVariableList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------



typeComparisonResult GALGAS_abstractDecoratedDeclaration::objectCompare (const GALGAS_abstractDecoratedDeclaration & inOperand) const {
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

GALGAS_abstractDecoratedDeclaration::GALGAS_abstractDecoratedDeclaration (void) :
AC_GALGAS_class (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractDecoratedDeclaration::GALGAS_abstractDecoratedDeclaration (const cPtr_abstractDecoratedDeclaration * inSourcePtr) :
AC_GALGAS_class (inSourcePtr, true) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractDecoratedDeclaration) ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @abstractDecoratedDeclaration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_abstractDecoratedDeclaration::cPtr_abstractDecoratedDeclaration (LOCATION_ARGS) :
acPtr_class (THERE) {
}


//----------------------------------------------------------------------------------------------------------------------
//
//@abstractDecoratedDeclaration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_abstractDecoratedDeclaration ("abstractDecoratedDeclaration",
                                                     NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_abstractDecoratedDeclaration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractDecoratedDeclaration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_abstractDecoratedDeclaration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractDecoratedDeclaration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractDecoratedDeclaration GALGAS_abstractDecoratedDeclaration::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_abstractDecoratedDeclaration result ;
  const GALGAS_abstractDecoratedDeclaration * p = (const GALGAS_abstractDecoratedDeclaration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_abstractDecoratedDeclaration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractDecoratedDeclaration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@declarationDecorationList' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_declarationDecorationList : public cCollectionElement {
  public: GALGAS_declarationDecorationList_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_declarationDecorationList (const GALGAS_abstractDecoratedDeclaration & in_mDeclaration
                                                        COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_declarationDecorationList (const GALGAS_declarationDecorationList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_declarationDecorationList::cCollectionElement_declarationDecorationList (const GALGAS_abstractDecoratedDeclaration & in_mDeclaration
                                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mDeclaration) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_declarationDecorationList::cCollectionElement_declarationDecorationList (const GALGAS_declarationDecorationList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mDeclaration) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_declarationDecorationList::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_declarationDecorationList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_declarationDecorationList (mObject.mProperty_mDeclaration COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_declarationDecorationList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mDeclaration" ":" ;
  mObject.mProperty_mDeclaration.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_declarationDecorationList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_declarationDecorationList * operand = (cCollectionElement_declarationDecorationList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_declarationDecorationList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_declarationDecorationList::GALGAS_declarationDecorationList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_declarationDecorationList::GALGAS_declarationDecorationList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_declarationDecorationList GALGAS_declarationDecorationList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_declarationDecorationList  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_declarationDecorationList GALGAS_declarationDecorationList::constructor_listWithValue (const GALGAS_abstractDecoratedDeclaration & inOperand0
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_declarationDecorationList result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_declarationDecorationList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_declarationDecorationList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_declarationDecorationList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                  const GALGAS_abstractDecoratedDeclaration & in_mDeclaration
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_declarationDecorationList * p = NULL ;
  macroMyNew (p, cCollectionElement_declarationDecorationList (in_mDeclaration COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_declarationDecorationList::addAssign_operation (const GALGAS_abstractDecoratedDeclaration & inOperand0
                                                            COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_declarationDecorationList (inOperand0 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{ // Destroy receiver
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_declarationDecorationList::setter_append (GALGAS_declarationDecorationList_2D_element inElement,
                                                      C_Compiler * /* inCompiler */
                                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_declarationDecorationList (inElement COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_declarationDecorationList::setter_insertAtIndex (const GALGAS_abstractDecoratedDeclaration inOperand0,
                                                             const GALGAS_uint inInsertionIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_declarationDecorationList (inOperand0 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_declarationDecorationList::setter_removeAtIndex (GALGAS_abstractDecoratedDeclaration & outOperand0,
                                                             const GALGAS_uint inRemoveIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_declarationDecorationList * p = (cCollectionElement_declarationDecorationList *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_declarationDecorationList) ;
        outOperand0 = p->mObject.mProperty_mDeclaration ;
      }
    }else{
      outOperand0.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_declarationDecorationList::setter_popFirst (GALGAS_abstractDecoratedDeclaration & outOperand0,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_declarationDecorationList * p = (cCollectionElement_declarationDecorationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_declarationDecorationList) ;
    outOperand0 = p->mObject.mProperty_mDeclaration ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_declarationDecorationList::setter_popLast (GALGAS_abstractDecoratedDeclaration & outOperand0,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_declarationDecorationList * p = (cCollectionElement_declarationDecorationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_declarationDecorationList) ;
    outOperand0 = p->mObject.mProperty_mDeclaration ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_declarationDecorationList::method_first (GALGAS_abstractDecoratedDeclaration & outOperand0,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_declarationDecorationList * p = (cCollectionElement_declarationDecorationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_declarationDecorationList) ;
    outOperand0 = p->mObject.mProperty_mDeclaration ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_declarationDecorationList::method_last (GALGAS_abstractDecoratedDeclaration & outOperand0,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_declarationDecorationList * p = (cCollectionElement_declarationDecorationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_declarationDecorationList) ;
    outOperand0 = p->mObject.mProperty_mDeclaration ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_declarationDecorationList GALGAS_declarationDecorationList::add_operation (const GALGAS_declarationDecorationList & inOperand,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_declarationDecorationList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_declarationDecorationList GALGAS_declarationDecorationList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_declarationDecorationList result = GALGAS_declarationDecorationList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_declarationDecorationList GALGAS_declarationDecorationList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_declarationDecorationList result = GALGAS_declarationDecorationList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_declarationDecorationList GALGAS_declarationDecorationList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_declarationDecorationList result = GALGAS_declarationDecorationList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_declarationDecorationList::plusAssign_operation (const GALGAS_declarationDecorationList inOperand,
                                                             C_Compiler * /* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_declarationDecorationList::setter_setMDeclarationAtIndex (GALGAS_abstractDecoratedDeclaration inOperand,
                                                                      GALGAS_uint inIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_declarationDecorationList * p = (cCollectionElement_declarationDecorationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_declarationDecorationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mDeclaration = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractDecoratedDeclaration GALGAS_declarationDecorationList::getter_mDeclarationAtIndex (const GALGAS_uint & inIndex,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_declarationDecorationList * p = (cCollectionElement_declarationDecorationList *) attributes.ptr () ;
  GALGAS_abstractDecoratedDeclaration result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_declarationDecorationList) ;
    result = p->mObject.mProperty_mDeclaration ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_declarationDecorationList::cEnumerator_declarationDecorationList (const GALGAS_declarationDecorationList & inEnumeratedObject,
                                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_declarationDecorationList_2D_element cEnumerator_declarationDecorationList::current (LOCATION_ARGS) const {
  const cCollectionElement_declarationDecorationList * p = (const cCollectionElement_declarationDecorationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_declarationDecorationList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractDecoratedDeclaration cEnumerator_declarationDecorationList::current_mDeclaration (LOCATION_ARGS) const {
  const cCollectionElement_declarationDecorationList * p = (const cCollectionElement_declarationDecorationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_declarationDecorationList) ;
  return p->mObject.mProperty_mDeclaration ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@declarationDecorationList type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_declarationDecorationList ("declarationDecorationList",
                                                  NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_declarationDecorationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_declarationDecorationList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_declarationDecorationList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_declarationDecorationList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_declarationDecorationList GALGAS_declarationDecorationList::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_declarationDecorationList result ;
  const GALGAS_declarationDecorationList * p = (const GALGAS_declarationDecorationList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_declarationDecorationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("declarationDecorationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_constantMap::cMapElement_constantMap (const GALGAS_lstring & inKey,
                                                  const GALGAS_bigint & in_mIndex,
                                                  const GALGAS_lstring & in_mClassTypeName
                                                  COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mIndex (in_mIndex),
mProperty_mClassTypeName (in_mClassTypeName) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_constantMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mIndex.isValid () && mProperty_mClassTypeName.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_constantMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_constantMap (mProperty_lkey, mProperty_mIndex, mProperty_mClassTypeName COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_constantMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIndex" ":" ;
  mProperty_mIndex.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mClassTypeName" ":" ;
  mProperty_mClassTypeName.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_constantMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_constantMap * operand = (cMapElement_constantMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mIndex.objectCompare (operand->mProperty_mIndex) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mClassTypeName.objectCompare (operand->mProperty_mClassTypeName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_constantMap::GALGAS_constantMap (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_constantMap::GALGAS_constantMap (const GALGAS_constantMap & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_constantMap & GALGAS_constantMap::operator = (const GALGAS_constantMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_constantMap GALGAS_constantMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_constantMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_constantMap GALGAS_constantMap::constructor_mapWithMapToOverride (const GALGAS_constantMap & inMapToOverride
                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_constantMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_constantMap GALGAS_constantMap::getter_overriddenMap (C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  GALGAS_constantMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_constantMap::addAssign_operation (const GALGAS_lstring & inKey,
                                              const GALGAS_bigint & inArgument0,
                                              const GALGAS_lstring & inArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  cMapElement_constantMap * p = NULL ;
  macroMyNew (p, cMapElement_constantMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@constantMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_constantMap::setter_insertKey (GALGAS_lstring inKey,
                                           GALGAS_bigint inArgument0,
                                           GALGAS_lstring inArgument1,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  cMapElement_constantMap * p = NULL ;
  macroMyNew (p, cMapElement_constantMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' constant is already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_constantMap_searchKey = "there is no '%K' constant" ;

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_constantMap::method_searchKey (GALGAS_lstring inKey,
                                           GALGAS_bigint & outArgument0,
                                           GALGAS_lstring & outArgument1,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  const cMapElement_constantMap * p = (const cMapElement_constantMap *) performSearch (inKey,
                                                                                       inCompiler,
                                                                                       kSearchErrorMessage_constantMap_searchKey
                                                                                       COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_constantMap) ;
    outArgument0 = p->mProperty_mIndex ;
    outArgument1 = p->mProperty_mClassTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bigint GALGAS_constantMap::getter_mIndexForKey (const GALGAS_string & inKey,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_constantMap * p = (const cMapElement_constantMap *) attributes ;
  GALGAS_bigint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_constantMap) ;
    result = p->mProperty_mIndex ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_constantMap::getter_mClassTypeNameForKey (const GALGAS_string & inKey,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_constantMap * p = (const cMapElement_constantMap *) attributes ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_constantMap) ;
    result = p->mProperty_mClassTypeName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_constantMap::setter_setMIndexForKey (GALGAS_bigint inAttributeValue,
                                                 GALGAS_string inKey,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_constantMap * p = (cMapElement_constantMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_constantMap) ;
    p->mProperty_mIndex = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_constantMap::setter_setMClassTypeNameForKey (GALGAS_lstring inAttributeValue,
                                                         GALGAS_string inKey,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_constantMap * p = (cMapElement_constantMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_constantMap) ;
    p->mProperty_mClassTypeName = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_constantMap * GALGAS_constantMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                 const GALGAS_string & inKey
                                                                                 COMMA_LOCATION_ARGS) {
  cMapElement_constantMap * result = (cMapElement_constantMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_constantMap) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_constantMap::cEnumerator_constantMap (const GALGAS_constantMap & inEnumeratedObject,
                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_constantMap_2D_element cEnumerator_constantMap::current (LOCATION_ARGS) const {
  const cMapElement_constantMap * p = (const cMapElement_constantMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_constantMap) ;
  return GALGAS_constantMap_2D_element (p->mProperty_lkey, p->mProperty_mIndex, p->mProperty_mClassTypeName) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_constantMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bigint cEnumerator_constantMap::current_mIndex (LOCATION_ARGS) const {
  const cMapElement_constantMap * p = (const cMapElement_constantMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_constantMap) ;
  return p->mProperty_mIndex ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_constantMap::current_mClassTypeName (LOCATION_ARGS) const {
  const cMapElement_constantMap * p = (const cMapElement_constantMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_constantMap) ;
  return p->mProperty_mClassTypeName ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_constantMap::optional_searchKey (const GALGAS_string & inKey,
                                             GALGAS_bigint & outArgument0,
                                             GALGAS_lstring & outArgument1) const {
  const cMapElement_constantMap * p = (const cMapElement_constantMap *) searchForKey (inKey) ;
  const bool result = NULL != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_constantMap) ;
    outArgument0 = p->mProperty_mIndex ;
    outArgument1 = p->mProperty_mClassTypeName ;
  }else{
    outArgument0.drop () ;
    outArgument1.drop () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@constantMap type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_constantMap ("constantMap",
                                    NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_constantMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constantMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_constantMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_constantMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_constantMap GALGAS_constantMap::extractObject (const GALGAS_object & inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GALGAS_constantMap result ;
  const GALGAS_constantMap * p = (const GALGAS_constantMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_constantMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("constantMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_constructorMap::cMapElement_constructorMap (const GALGAS_lstring & inKey,
                                                        const GALGAS_constructorSignature & in_mSignature,
                                                        const GALGAS_constructorValue & in_mInitValue
                                                        COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mSignature (in_mSignature),
mProperty_mInitValue (in_mInitValue) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_constructorMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mSignature.isValid () && mProperty_mInitValue.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_constructorMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_constructorMap (mProperty_lkey, mProperty_mSignature, mProperty_mInitValue COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_constructorMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSignature" ":" ;
  mProperty_mSignature.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInitValue" ":" ;
  mProperty_mInitValue.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_constructorMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_constructorMap * operand = (cMapElement_constructorMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mSignature.objectCompare (operand->mProperty_mSignature) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInitValue.objectCompare (operand->mProperty_mInitValue) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_constructorMap::GALGAS_constructorMap (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_constructorMap::GALGAS_constructorMap (const GALGAS_constructorMap & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_constructorMap & GALGAS_constructorMap::operator = (const GALGAS_constructorMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_constructorMap GALGAS_constructorMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_constructorMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_constructorMap GALGAS_constructorMap::constructor_mapWithMapToOverride (const GALGAS_constructorMap & inMapToOverride
                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_constructorMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_constructorMap GALGAS_constructorMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  GALGAS_constructorMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_constructorMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                 const GALGAS_constructorSignature & inArgument0,
                                                 const GALGAS_constructorValue & inArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  cMapElement_constructorMap * p = NULL ;
  macroMyNew (p, cMapElement_constructorMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@constructorMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_constructorMap::setter_insertKey (GALGAS_lstring inKey,
                                              GALGAS_constructorSignature inArgument0,
                                              GALGAS_constructorValue inArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  cMapElement_constructorMap * p = NULL ;
  macroMyNew (p, cMapElement_constructorMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "-- internal error --" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_constructorMap_searchKey = "constructor is not defined" ;

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_constructorMap::method_searchKey (GALGAS_lstring inKey,
                                              GALGAS_constructorSignature & outArgument0,
                                              GALGAS_constructorValue & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  const cMapElement_constructorMap * p = (const cMapElement_constructorMap *) performSearch (inKey,
                                                                                             inCompiler,
                                                                                             kSearchErrorMessage_constructorMap_searchKey
                                                                                             COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_constructorMap) ;
    outArgument0 = p->mProperty_mSignature ;
    outArgument1 = p->mProperty_mInitValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_constructorSignature GALGAS_constructorMap::getter_mSignatureForKey (const GALGAS_string & inKey,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_constructorMap * p = (const cMapElement_constructorMap *) attributes ;
  GALGAS_constructorSignature result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_constructorMap) ;
    result = p->mProperty_mSignature ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_constructorMap::setter_setMSignatureForKey (GALGAS_constructorSignature inAttributeValue,
                                                        GALGAS_string inKey,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_constructorMap * p = (cMapElement_constructorMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_constructorMap) ;
    p->mProperty_mSignature = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

cMapElement_constructorMap * GALGAS_constructorMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                       const GALGAS_string & inKey
                                                                                       COMMA_LOCATION_ARGS) {
  cMapElement_constructorMap * result = (cMapElement_constructorMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_constructorMap) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_constructorMap::cEnumerator_constructorMap (const GALGAS_constructorMap & inEnumeratedObject,
                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_constructorMap_2D_element cEnumerator_constructorMap::current (LOCATION_ARGS) const {
  const cMapElement_constructorMap * p = (const cMapElement_constructorMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_constructorMap) ;
  return GALGAS_constructorMap_2D_element (p->mProperty_lkey, p->mProperty_mSignature, p->mProperty_mInitValue) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_constructorMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_constructorSignature cEnumerator_constructorMap::current_mSignature (LOCATION_ARGS) const {
  const cMapElement_constructorMap * p = (const cMapElement_constructorMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_constructorMap) ;
  return p->mProperty_mSignature ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_constructorValue cEnumerator_constructorMap::current_mInitValue (LOCATION_ARGS) const {
  const cMapElement_constructorMap * p = (const cMapElement_constructorMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_constructorMap) ;
  return p->mProperty_mInitValue ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_constructorMap::optional_searchKey (const GALGAS_string & inKey,
                                                GALGAS_constructorSignature & outArgument0,
                                                GALGAS_constructorValue & outArgument1) const {
  const cMapElement_constructorMap * p = (const cMapElement_constructorMap *) searchForKey (inKey) ;
  const bool result = NULL != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_constructorMap) ;
    outArgument0 = p->mProperty_mSignature ;
    outArgument1 = p->mProperty_mInitValue ;
  }else{
    outArgument0.drop () ;
    outArgument1.drop () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@constructorMap type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_constructorMap ("constructorMap",
                                       NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_constructorMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constructorMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_constructorMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_constructorMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

cEnumAssociatedValues_constructorValue_simple::cEnumAssociatedValues_constructorValue_simple (const GALGAS_bigint & inAssociatedValue0
                                                                                              COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_constructorValue_simple::description (C_String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_constructorValue_simple::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_constructorValue_simple * ptr = dynamic_cast<const cEnumAssociatedValues_constructorValue_simple *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumAssociatedValues_constructorValue_structure::cEnumAssociatedValues_constructorValue_structure (const GALGAS_sortedOperandIRList & inAssociatedValue0
                                                                                                    COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_constructorValue_structure::description (C_String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_constructorValue_structure::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_constructorValue_structure * ptr = dynamic_cast<const cEnumAssociatedValues_constructorValue_structure *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumAssociatedValues_constructorValue_arrayValue::cEnumAssociatedValues_constructorValue_arrayValue (const GALGAS_omnibusType & inAssociatedValue0,
                                                                                                      const GALGAS_uint & inAssociatedValue1
                                                                                                      COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_constructorValue_arrayValue::description (C_String & ioString,
                                                                     const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_constructorValue_arrayValue::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_constructorValue_arrayValue * ptr = dynamic_cast<const cEnumAssociatedValues_constructorValue_arrayValue *> (inOperand) ;
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

GALGAS_constructorValue::GALGAS_constructorValue (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_constructorValue GALGAS_constructorValue::constructor_null (UNUSED_LOCATION_ARGS) {
  GALGAS_constructorValue result ;
  result.mEnum = kEnum_null ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_constructorValue GALGAS_constructorValue::constructor_structure (const GALGAS_sortedOperandIRList & inAssociatedValue0
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_constructorValue result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_structure ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_constructorValue_structure (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_constructorValue GALGAS_constructorValue::constructor_arrayValue (const GALGAS_omnibusType & inAssociatedValue0,
                                                                         const GALGAS_uint & inAssociatedValue1
                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_constructorValue result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_arrayValue ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_constructorValue_arrayValue (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_constructorValue::method_structure (GALGAS_sortedOperandIRList & outAssociatedValue0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_structure) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @constructorValue structure invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_constructorValue_structure * ptr = (const cEnumAssociatedValues_constructorValue_structure *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_constructorValue::method_arrayValue (GALGAS_omnibusType & outAssociatedValue0,
                                                 GALGAS_uint & outAssociatedValue1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_arrayValue) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    C_String s ;
    s << "method @constructorValue arrayValue invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_constructorValue_arrayValue * ptr = (const cEnumAssociatedValues_constructorValue_arrayValue *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_constructorValue::optional_null () const {
  const bool ok = mEnum == kEnum_null ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_constructorValue::optional_simple (GALGAS_bigint & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_simple ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_constructorValue_simple *) unsafePointer () ;
    // const cEnumAssociatedValues_constructorValue_simple * ptr = (const cEnumAssociatedValues_constructorValue_simple *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_constructorValue::optional_structure (GALGAS_sortedOperandIRList & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_structure ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_constructorValue_structure *) unsafePointer () ;
    // const cEnumAssociatedValues_constructorValue_structure * ptr = (const cEnumAssociatedValues_constructorValue_structure *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_constructorValue::optional_arrayValue (GALGAS_omnibusType & outAssociatedValue0,
                                                   GALGAS_uint & outAssociatedValue1) const {
  const bool ok = mEnum == kEnum_arrayValue ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_constructorValue_arrayValue *) unsafePointer () ;
    // const cEnumAssociatedValues_constructorValue_arrayValue * ptr = (const cEnumAssociatedValues_constructorValue_arrayValue *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_constructorValue [5] = {
  "(not built)",
  "null",
  "simple",
  "structure",
  "arrayValue"
} ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_constructorValue::getter_isNull (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_null == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_constructorValue::getter_isSimple (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_simple == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_constructorValue::getter_isStructure (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_structure == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_constructorValue::getter_isArrayValue (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_arrayValue == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_constructorValue::description (C_String & ioString,
                                           const int32_t inIndentation) const {
  ioString << "<enum @constructorValue: " << gEnumNameArrayFor_constructorValue [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//@constructorValue type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_constructorValue ("constructorValue",
                                         NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_constructorValue::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constructorValue ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_constructorValue::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_constructorValue (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@constructorSignature' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_constructorSignature : public cCollectionElement {
  public: GALGAS_constructorSignature_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_constructorSignature (const GALGAS_string & in_mSelector,
                                                   const GALGAS_omnibusType & in_mType,
                                                   const GALGAS_uint & in_mFieldIndex
                                                   COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_constructorSignature (const GALGAS_constructorSignature_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_constructorSignature::cCollectionElement_constructorSignature (const GALGAS_string & in_mSelector,
                                                                                  const GALGAS_omnibusType & in_mType,
                                                                                  const GALGAS_uint & in_mFieldIndex
                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mSelector, in_mType, in_mFieldIndex) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_constructorSignature::cCollectionElement_constructorSignature (const GALGAS_constructorSignature_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mSelector, inElement.mProperty_mType, inElement.mProperty_mFieldIndex) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_constructorSignature::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_constructorSignature::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_constructorSignature (mObject.mProperty_mSelector, mObject.mProperty_mType, mObject.mProperty_mFieldIndex COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_constructorSignature::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSelector" ":" ;
  mObject.mProperty_mSelector.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mType" ":" ;
  mObject.mProperty_mType.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFieldIndex" ":" ;
  mObject.mProperty_mFieldIndex.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_constructorSignature::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_constructorSignature * operand = (cCollectionElement_constructorSignature *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_constructorSignature) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_constructorSignature::GALGAS_constructorSignature (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_constructorSignature::GALGAS_constructorSignature (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_constructorSignature GALGAS_constructorSignature::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_constructorSignature  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_constructorSignature GALGAS_constructorSignature::constructor_listWithValue (const GALGAS_string & inOperand0,
                                                                                    const GALGAS_omnibusType & inOperand1,
                                                                                    const GALGAS_uint & inOperand2
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_constructorSignature result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_constructorSignature (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_constructorSignature::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_constructorSignature::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                             const GALGAS_string & in_mSelector,
                                                             const GALGAS_omnibusType & in_mType,
                                                             const GALGAS_uint & in_mFieldIndex
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_constructorSignature * p = NULL ;
  macroMyNew (p, cCollectionElement_constructorSignature (in_mSelector,
                                                          in_mType,
                                                          in_mFieldIndex COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_constructorSignature::addAssign_operation (const GALGAS_string & inOperand0,
                                                       const GALGAS_omnibusType & inOperand1,
                                                       const GALGAS_uint & inOperand2
                                                       COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_constructorSignature (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{ // Destroy receiver
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_constructorSignature::setter_append (GALGAS_constructorSignature_2D_element inElement,
                                                 C_Compiler * /* inCompiler */
                                                 COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_constructorSignature (inElement COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_constructorSignature::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                        const GALGAS_omnibusType inOperand1,
                                                        const GALGAS_uint inOperand2,
                                                        const GALGAS_uint inInsertionIndex,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_constructorSignature (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_constructorSignature::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                        GALGAS_omnibusType & outOperand1,
                                                        GALGAS_uint & outOperand2,
                                                        const GALGAS_uint inRemoveIndex,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_constructorSignature * p = (cCollectionElement_constructorSignature *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_constructorSignature) ;
        outOperand0 = p->mObject.mProperty_mSelector ;
        outOperand1 = p->mObject.mProperty_mType ;
        outOperand2 = p->mObject.mProperty_mFieldIndex ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_constructorSignature::setter_popFirst (GALGAS_string & outOperand0,
                                                   GALGAS_omnibusType & outOperand1,
                                                   GALGAS_uint & outOperand2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_constructorSignature * p = (cCollectionElement_constructorSignature *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_constructorSignature) ;
    outOperand0 = p->mObject.mProperty_mSelector ;
    outOperand1 = p->mObject.mProperty_mType ;
    outOperand2 = p->mObject.mProperty_mFieldIndex ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_constructorSignature::setter_popLast (GALGAS_string & outOperand0,
                                                  GALGAS_omnibusType & outOperand1,
                                                  GALGAS_uint & outOperand2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_constructorSignature * p = (cCollectionElement_constructorSignature *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_constructorSignature) ;
    outOperand0 = p->mObject.mProperty_mSelector ;
    outOperand1 = p->mObject.mProperty_mType ;
    outOperand2 = p->mObject.mProperty_mFieldIndex ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_constructorSignature::method_first (GALGAS_string & outOperand0,
                                                GALGAS_omnibusType & outOperand1,
                                                GALGAS_uint & outOperand2,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_constructorSignature * p = (cCollectionElement_constructorSignature *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_constructorSignature) ;
    outOperand0 = p->mObject.mProperty_mSelector ;
    outOperand1 = p->mObject.mProperty_mType ;
    outOperand2 = p->mObject.mProperty_mFieldIndex ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_constructorSignature::method_last (GALGAS_string & outOperand0,
                                               GALGAS_omnibusType & outOperand1,
                                               GALGAS_uint & outOperand2,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_constructorSignature * p = (cCollectionElement_constructorSignature *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_constructorSignature) ;
    outOperand0 = p->mObject.mProperty_mSelector ;
    outOperand1 = p->mObject.mProperty_mType ;
    outOperand2 = p->mObject.mProperty_mFieldIndex ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_constructorSignature GALGAS_constructorSignature::add_operation (const GALGAS_constructorSignature & inOperand,
                                                                        C_Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_constructorSignature result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_constructorSignature GALGAS_constructorSignature::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_constructorSignature result = GALGAS_constructorSignature::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_constructorSignature GALGAS_constructorSignature::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_constructorSignature result = GALGAS_constructorSignature::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_constructorSignature GALGAS_constructorSignature::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_constructorSignature result = GALGAS_constructorSignature::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_constructorSignature::plusAssign_operation (const GALGAS_constructorSignature inOperand,
                                                        C_Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_constructorSignature::setter_setMSelectorAtIndex (GALGAS_string inOperand,
                                                              GALGAS_uint inIndex,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_constructorSignature * p = (cCollectionElement_constructorSignature *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_constructorSignature) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mSelector = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_constructorSignature::getter_mSelectorAtIndex (const GALGAS_uint & inIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_constructorSignature * p = (cCollectionElement_constructorSignature *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_constructorSignature) ;
    result = p->mObject.mProperty_mSelector ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_constructorSignature::setter_setMTypeAtIndex (GALGAS_omnibusType inOperand,
                                                          GALGAS_uint inIndex,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_constructorSignature * p = (cCollectionElement_constructorSignature *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_constructorSignature) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mType = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_omnibusType GALGAS_constructorSignature::getter_mTypeAtIndex (const GALGAS_uint & inIndex,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_constructorSignature * p = (cCollectionElement_constructorSignature *) attributes.ptr () ;
  GALGAS_omnibusType result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_constructorSignature) ;
    result = p->mObject.mProperty_mType ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_constructorSignature::setter_setMFieldIndexAtIndex (GALGAS_uint inOperand,
                                                                GALGAS_uint inIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_constructorSignature * p = (cCollectionElement_constructorSignature *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_constructorSignature) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFieldIndex = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_constructorSignature::getter_mFieldIndexAtIndex (const GALGAS_uint & inIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_constructorSignature * p = (cCollectionElement_constructorSignature *) attributes.ptr () ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_constructorSignature) ;
    result = p->mObject.mProperty_mFieldIndex ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_constructorSignature::cEnumerator_constructorSignature (const GALGAS_constructorSignature & inEnumeratedObject,
                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_constructorSignature_2D_element cEnumerator_constructorSignature::current (LOCATION_ARGS) const {
  const cCollectionElement_constructorSignature * p = (const cCollectionElement_constructorSignature *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_constructorSignature) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_constructorSignature::current_mSelector (LOCATION_ARGS) const {
  const cCollectionElement_constructorSignature * p = (const cCollectionElement_constructorSignature *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_constructorSignature) ;
  return p->mObject.mProperty_mSelector ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_omnibusType cEnumerator_constructorSignature::current_mType (LOCATION_ARGS) const {
  const cCollectionElement_constructorSignature * p = (const cCollectionElement_constructorSignature *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_constructorSignature) ;
  return p->mObject.mProperty_mType ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_constructorSignature::current_mFieldIndex (LOCATION_ARGS) const {
  const cCollectionElement_constructorSignature * p = (const cCollectionElement_constructorSignature *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_constructorSignature) ;
  return p->mObject.mProperty_mFieldIndex ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@constructorSignature type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_constructorSignature ("constructorSignature",
                                             NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_constructorSignature::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constructorSignature ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_constructorSignature::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_constructorSignature (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_constructorSignature GALGAS_constructorSignature::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_constructorSignature result ;
  const GALGAS_constructorSignature * p = (const GALGAS_constructorSignature *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_constructorSignature *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("constructorSignature", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

