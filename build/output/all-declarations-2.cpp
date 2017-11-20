#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-2.h"


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
//                               Extension method '@taskList noteTypesInPrecedenceGraph'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_noteTypesInPrecedenceGraph (const GALGAS_taskList inObject,
                                                 GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_taskList temp_0 = inObject ;
  cEnumerator_taskList enumerator_4489 (temp_0, kENUMERATION_UP) ;
  while (enumerator_4489.hasCurrentObject ()) {
    cEnumerator_structurePropertyListAST enumerator_4521 (enumerator_4489.current_mVarList (HERE), kENUMERATION_UP) ;
    while (enumerator_4521.hasCurrentObject ()) {
      const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, enumerator_4521.current (HERE).getter_mPropertyTypeName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_1) {
        GALGAS_lstring var_typeName_4599 = function_llvmRegularTypeMangledNameFromName (enumerator_4521.current (HERE).getter_mPropertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 125)) ;
        {
        ioArgument_ioGraph.setter_noteNode (var_typeName_4599 COMMA_SOURCE_FILE ("declaration-task.galgas", 126)) ;
        }
      }
      enumerator_4521.gotoNextObject () ;
    }
    cEnumerator_functionDeclarationListAST enumerator_4758 (enumerator_4489.current_mTaskProcList (HERE), kENUMERATION_UP) ;
    while (enumerator_4758.hasCurrentObject ()) {
      extensionMethod_noteInstructionListTypesInPrecedenceGraph (enumerator_4758.current (HERE).getter_mFunctionInstructionList (HERE), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 130)) ;
      enumerator_4758.gotoNextObject () ;
    }
    cEnumerator_syncInstructionBranchListAST enumerator_4910 (enumerator_4489.current_mGuardedCommandList (HERE), kENUMERATION_UP) ;
    while (enumerator_4910.hasCurrentObject ()) {
      extensionMethod_noteInstructionListTypesInPrecedenceGraph (enumerator_4910.current (HERE).getter_mInstructionList (HERE), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 133)) ;
      enumerator_4910.gotoNextObject () ;
    }
    enumerator_4489.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*

cMapElement_taskProcedureMap::cMapElement_taskProcedureMap (const GALGAS_lstring & inKey
                                                            COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_taskProcedureMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_taskProcedureMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_taskProcedureMap (mProperty_lkey COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_taskProcedureMap::description (C_String & /* ioString */, const int32_t /* inIndentation */) const {
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_taskProcedureMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_taskProcedureMap * operand = (cMapElement_taskProcedureMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskProcedureMap::GALGAS_taskProcedureMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskProcedureMap::GALGAS_taskProcedureMap (const GALGAS_taskProcedureMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskProcedureMap & GALGAS_taskProcedureMap::operator = (const GALGAS_taskProcedureMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskProcedureMap GALGAS_taskProcedureMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_taskProcedureMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskProcedureMap GALGAS_taskProcedureMap::constructor_mapWithMapToOverride (const GALGAS_taskProcedureMap & inMapToOverride
                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_taskProcedureMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskProcedureMap GALGAS_taskProcedureMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  GALGAS_taskProcedureMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskProcedureMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  cMapElement_taskProcedureMap * p = NULL ;
  macroMyNew (p, cMapElement_taskProcedureMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@taskProcedureMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskProcedureMap::setter_insertKey (GALGAS_lstring inKey,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  cMapElement_taskProcedureMap * p = NULL ;
  macroMyNew (p, cMapElement_taskProcedureMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' proc is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_taskProcedureMap_searchKey = "there is no '%K' proc" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskProcedureMap::method_searchKey (GALGAS_lstring inKey,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  const cMapElement_taskProcedureMap * p = (const cMapElement_taskProcedureMap *) performSearch (inKey,
                                                                                                 inCompiler,
                                                                                                 kSearchErrorMessage_taskProcedureMap_searchKey
                                                                                                 COMMA_THERE) ;
  if (NULL == p) {
  }else{
    macroValidSharedObject (p, cMapElement_taskProcedureMap) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_taskProcedureMap * GALGAS_taskProcedureMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                           const GALGAS_string & inKey
                                                                                           COMMA_LOCATION_ARGS) {
  cMapElement_taskProcedureMap * result = (cMapElement_taskProcedureMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_taskProcedureMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_taskProcedureMap::cEnumerator_taskProcedureMap (const GALGAS_taskProcedureMap & inEnumeratedObject,
                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskProcedureMap_2D_element cEnumerator_taskProcedureMap::current (LOCATION_ARGS) const {
  const cMapElement_taskProcedureMap * p = (const cMapElement_taskProcedureMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_taskProcedureMap) ;
  return GALGAS_taskProcedureMap_2D_element (p->mProperty_lkey) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_taskProcedureMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @taskProcedureMap type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_taskProcedureMap ("taskProcedureMap",
                                         NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_taskProcedureMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_taskProcedureMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_taskProcedureMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_taskProcedureMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskProcedureMap GALGAS_taskProcedureMap::extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_taskProcedureMap result ;
  const GALGAS_taskProcedureMap * p = (const GALGAS_taskProcedureMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_taskProcedureMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("taskProcedureMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_taskMap::cMapElement_taskMap (const GALGAS_lstring & inKey,
                                          const GALGAS_taskProcedureMap & in_mTaskProcedureMap
                                          COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mTaskProcedureMap (in_mTaskProcedureMap) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_taskMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mTaskProcedureMap.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_taskMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_taskMap (mProperty_lkey, mProperty_mTaskProcedureMap COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_taskMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTaskProcedureMap" ":" ;
  mProperty_mTaskProcedureMap.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_taskMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_taskMap * operand = (cMapElement_taskMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mTaskProcedureMap.objectCompare (operand->mProperty_mTaskProcedureMap) ;
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
                                          const GALGAS_taskProcedureMap & inArgument0,
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
                                       GALGAS_taskProcedureMap inArgument0,
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
                                       GALGAS_taskProcedureMap & outArgument0,
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
    outArgument0 = p->mProperty_mTaskProcedureMap ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskProcedureMap GALGAS_taskMap::getter_mTaskProcedureMapForKey (const GALGAS_string & inKey,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_taskMap * p = (const cMapElement_taskMap *) attributes ;
  GALGAS_taskProcedureMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_taskMap) ;
    result = p->mProperty_mTaskProcedureMap ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskMap::setter_setMTaskProcedureMapForKey (GALGAS_taskProcedureMap inAttributeValue,
                                                        GALGAS_string inKey,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_taskMap * p = (cMapElement_taskMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_taskMap) ;
    p->mProperty_mTaskProcedureMap = inAttributeValue ;
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
  return GALGAS_taskMap_2D_element (p->mProperty_lkey, p->mProperty_mTaskProcedureMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_taskMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskProcedureMap cEnumerator_taskMap::current_mTaskProcedureMap (LOCATION_ARGS) const {
  const cMapElement_taskMap * p = (const cMapElement_taskMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_taskMap) ;
  return p->mProperty_mTaskProcedureMap ;
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
//                                     Extension method '@taskList enterInContext'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_enterInContext (const GALGAS_taskList inObject,
                                     GALGAS_semanticContext & ioArgument_ioContext,
                                     GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                     C_Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_taskList temp_0 = inObject ;
  cEnumerator_taskList enumerator_6132 (temp_0, kENUMERATION_UP) ;
  while (enumerator_6132.hasCurrentObject ()) {
    GALGAS_propertyList var_propertyList_6188 = GALGAS_propertyList::constructor_emptyList (SOURCE_FILE ("declaration-task.galgas", 163)) ;
    GALGAS_propertyMap var_propertyMap_6222 = GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("declaration-task.galgas", 164)) ;
    GALGAS_sortedOperandIRList var_initialValueList_6269 = GALGAS_sortedOperandIRList::constructor_emptySortedList (SOURCE_FILE ("declaration-task.galgas", 165)) ;
    cEnumerator_structurePropertyListAST enumerator_6308 (enumerator_6132.current (HERE).getter_mVarList (HERE), kENUMERATION_UP) ;
    while (enumerator_6308.hasCurrentObject ()) {
      GALGAS_constructorSignature joker_6528 = GALGAS_constructorSignature::constructor_emptyList (SOURCE_FILE ("declaration-task.galgas", 174)) ;
      GALGAS_string joker_6540 = GALGAS_string::constructor_default (SOURCE_FILE ("declaration-task.galgas", 175)) ;
      GALGAS_bool joker_6552 = GALGAS_bool::constructor_default (SOURCE_FILE ("declaration-task.galgas", 176)) ;
      extensionMethod_enterInContext (enumerator_6308.current (HERE), enumerator_6132.current (HERE).getter_mTaskName (HERE), ioArgument_ioContext, ioArgument_ioGlobalLiteralStringMap, var_propertyList_6188, var_propertyMap_6222, var_initialValueList_6269, joker_6528, joker_6540, joker_6552, inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 167)) ;
      enumerator_6308.gotoNextObject () ;
    }
    GALGAS_PLMType var_taskType_6647 = GALGAS_PLMType::constructor_new (var_propertyMap_6222, GALGAS_classConstantMap::constructor_emptyMap (SOURCE_FILE ("declaration-task.galgas", 182)), GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("declaration-task.galgas", 183)), GALGAS_PLMTypeAttributes::constructor_none (SOURCE_FILE ("declaration-task.galgas", 184)), enumerator_6132.current (HERE).getter_mTaskName (HERE).getter_string (SOURCE_FILE ("declaration-task.galgas", 185)), GALGAS_typeKind::constructor_structure (var_propertyList_6188, GALGAS_guardMapForContext::constructor_emptyMap (SOURCE_FILE ("declaration-task.galgas", 186))  COMMA_SOURCE_FILE ("declaration-task.galgas", 186))  COMMA_SOURCE_FILE ("declaration-task.galgas", 180)) ;
    {
    ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (enumerator_6132.current (HERE).getter_mTaskName (HERE), var_taskType_6647, ioArgument_ioContext.getter_mTypeMap (HERE).getter_count (SOURCE_FILE ("declaration-task.galgas", 191)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 188)) ;
    }
    ioArgument_ioContext.mProperty_mGlobalTaskVariableList.addAssign_operation (enumerator_6132.current (HERE).getter_mTaskName (HERE).getter_string (HERE), enumerator_6132.current (HERE).getter_mTaskName (HERE).getter_string (HERE), GALGAS_objectIR::constructor_llvmStructureConstant (var_taskType_6647, var_initialValueList_6269  COMMA_SOURCE_FILE ("declaration-task.galgas", 196))  COMMA_SOURCE_FILE ("declaration-task.galgas", 193)) ;
    extensionMethod_enterFunctionInContext (enumerator_6132.current (HERE).getter_mTaskProcList (HERE), GALGAS_string ("$").add_operation (enumerator_6132.current (HERE).getter_mTaskName (HERE).getter_string (SOURCE_FILE ("declaration-task.galgas", 198)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 198)), ioArgument_ioContext, inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 198)) ;
    enumerator_6132.gotoNextObject () ;
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
  GALGAS_stringset var_prioritySet_7873 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("declaration-task.galgas", 211)) ;
  const GALGAS_taskList temp_0 = inObject ;
  cEnumerator_taskList enumerator_7897 (temp_0, kENUMERATION_UP) ;
  while (enumerator_7897.hasCurrentObject ()) {
    extensionMethod_semanticAnalysis (enumerator_7897.current (HERE), constinArgument_inContext, ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 213)) ;
    GALGAS_string var_priorityString_8063 = enumerator_7897.current (HERE).getter_mPriority (HERE).getter_bigint (HERE).getter_string (SOURCE_FILE ("declaration-task.galgas", 218)) ;
    const enumGalgasBool test_1 = var_prioritySet_7873.getter_hasKey (var_priorityString_8063 COMMA_SOURCE_FILE ("declaration-task.galgas", 219)).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (enumerator_7897.current (HERE).getter_mPriority (HERE).getter_location (SOURCE_FILE ("declaration-task.galgas", 220)), GALGAS_string ("duplicate priority"), fixItArray2  COMMA_SOURCE_FILE ("declaration-task.galgas", 220)) ;
    }
    var_prioritySet_7873.addAssign_operation (var_priorityString_8063  COMMA_SOURCE_FILE ("declaration-task.galgas", 222)) ;
    enumerator_7897.gotoNextObject () ;
  }
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
                                          const GALGAS_string & in_mLLVMTypeName
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
                                                              const GALGAS_string & in_mLLVMTypeName
                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mVarLLVMName, in_mLLVMTypeName) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_allocaList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_allocaList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_allocaList (mObject.mProperty_mVarLLVMName, mObject.mProperty_mLLVMTypeName COMMA_HERE)) ;
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
  ioString << "mLLVMTypeName" ":" ;
  mObject.mProperty_mLLVMTypeName.description (ioString, inIndentation) ;
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
                                                                const GALGAS_string & inOperand1
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_allocaList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_allocaList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_allocaList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allocaList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                   const GALGAS_string & in_mVarLLVMName,
                                                   const GALGAS_string & in_mLLVMTypeName
                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_allocaList * p = NULL ;
  macroMyNew (p, cCollectionElement_allocaList (in_mVarLLVMName,
                                                in_mLLVMTypeName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allocaList::addAssign_operation (const GALGAS_string & inOperand0,
                                             const GALGAS_string & inOperand1
                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_allocaList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allocaList::setter_insertAtIndex (const GALGAS_string inOperand0,
                                              const GALGAS_string inOperand1,
                                              const GALGAS_uint inInsertionIndex,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_allocaList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allocaList::setter_removeAtIndex (GALGAS_string & outOperand0,
                                              GALGAS_string & outOperand1,
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
    }else{
      macroValidSharedObject (p, cCollectionElement_allocaList) ;
      outOperand0 = p->mObject.mProperty_mVarLLVMName ;
      outOperand1 = p->mObject.mProperty_mLLVMTypeName ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allocaList::setter_popFirst (GALGAS_string & outOperand0,
                                         GALGAS_string & outOperand1,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_allocaList * p = (cCollectionElement_allocaList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_allocaList) ;
    outOperand0 = p->mObject.mProperty_mVarLLVMName ;
    outOperand1 = p->mObject.mProperty_mLLVMTypeName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allocaList::setter_popLast (GALGAS_string & outOperand0,
                                        GALGAS_string & outOperand1,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_allocaList * p = (cCollectionElement_allocaList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_allocaList) ;
    outOperand0 = p->mObject.mProperty_mVarLLVMName ;
    outOperand1 = p->mObject.mProperty_mLLVMTypeName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allocaList::method_first (GALGAS_string & outOperand0,
                                      GALGAS_string & outOperand1,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_allocaList * p = (cCollectionElement_allocaList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_allocaList) ;
    outOperand0 = p->mObject.mProperty_mVarLLVMName ;
    outOperand1 = p->mObject.mProperty_mLLVMTypeName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allocaList::method_last (GALGAS_string & outOperand0,
                                     GALGAS_string & outOperand1,
                                     C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_allocaList * p = (cCollectionElement_allocaList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_allocaList) ;
    outOperand0 = p->mObject.mProperty_mVarLLVMName ;
    outOperand1 = p->mObject.mProperty_mLLVMTypeName ;
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

GALGAS_string GALGAS_allocaList::getter_mLLVMTypeNameAtIndex (const GALGAS_uint & inIndex,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_allocaList * p = (cCollectionElement_allocaList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_allocaList) ;
    result = p->mObject.mProperty_mLLVMTypeName ;
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

GALGAS_string cEnumerator_allocaList::current_mLLVMTypeName (LOCATION_ARGS) const {
  const cCollectionElement_allocaList * p = (const cCollectionElement_allocaList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_allocaList) ;
  return p->mObject.mProperty_mLLVMTypeName ;
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
                                   GALGAS__32_stringlist & ioArgument_ioServiceList,
                                   C_Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("Task self terminate service"), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 358)), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 358)) ;
  GALGAS_string var_selfTerminateImplementationName_13477 = function_llvmNameForServiceImplementation (function_llvmNameForTaskSelfTerminateService (inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 359)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 359)) ;
  GALGAS_string var_selfTerminateCallName_13582 = function_llvmNameForServiceCall (function_llvmNameForTaskSelfTerminateService (inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 360)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 360)) ;
  ioArgument_ioServiceList.addAssign_operation (var_selfTerminateCallName_13582, var_selfTerminateImplementationName_13477  COMMA_SOURCE_FILE ("declaration-task.galgas", 361)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("declare void @").add_operation (var_selfTerminateCallName_13582, inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 362)).add_operation (GALGAS_string (" () nounwind noreturn\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 362)), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 362)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("Task variables"), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 364)), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 364)) ;
  cEnumerator_globalTaskVariableList enumerator_13983 (constinArgument_inGenerationContext.getter_mGlobalTaskVariableList (HERE), kENUMERATION_UP) ;
  while (enumerator_13983.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("@").add_operation (function_llvmNameForTaskGlobalVar (enumerator_13983.current_mTaskName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 366)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 366)), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 366)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" = internal global %"), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 367)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("$").add_operation (enumerator_13983.current_mTaskTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 368)).getter_assemblerRepresentation (SOURCE_FILE ("declaration-task.galgas", 368)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 368)), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 368)) ;
    GALGAS_string var_initialString_14179 = extensionGetter_llvmName (enumerator_13983.current_mInitialValue (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 369)) ;
    const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_initialString_14179.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("zeroinitializer"), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 371)) ;
    }else if (kBoolFalse == test_0) {
      ioArgument_ioLLVMcode.plusAssign_operation(var_initialString_14179, inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 373)) ;
    }
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 375)) ;
    enumerator_13983.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 377)) ;
  GALGAS_taskSortedListIR var_orderedTaskList_14442 = GALGAS_taskSortedListIR::constructor_emptySortedList (SOURCE_FILE ("declaration-task.galgas", 379)) ;
  const GALGAS_taskMapIR temp_1 = inObject ;
  cEnumerator_taskMapIR enumerator_14466 (temp_1, kENUMERATION_UP) ;
  while (enumerator_14466.hasCurrentObject ()) {
    var_orderedTaskList_14442.addAssign_operation (enumerator_14466.current (HERE).getter_lkey (HERE).getter_string (HERE), enumerator_14466.current (HERE).getter_mPriority (HERE), enumerator_14466.current (HERE).getter_mStackSize (HERE), enumerator_14466.current (HERE).getter_mAllocaList (HERE), enumerator_14466.current (HERE).getter_mInitInstructionListIR (HERE), enumerator_14466.current (HERE).getter_mTaskNameStringIndex (HERE)  COMMA_SOURCE_FILE ("declaration-task.galgas", 381)) ;
    enumerator_14466.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("Create task extern routine"), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 390)), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 390)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("declare void @kernel_create_task (i32 %inTaskIndex, i8* %inTaskName, i32* %inStackBufferAddress, "), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 391)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("i32 %inStackBufferSize, void ()* %inTaskRoutine) nounwind\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 392)) ;
  cEnumerator_taskSortedListIR enumerator_14992 (var_orderedTaskList_14442, kENUMERATION_UP) ;
  while (enumerator_14992.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("Task ").add_operation (enumerator_14992.current (HERE).getter_mTaskName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 394)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 394)), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 394)) ;
    GALGAS_string var_assemblerTaskName_15084 = GALGAS_string ("$").add_operation (enumerator_14992.current (HERE).getter_mTaskName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 395)).getter_assemblerRepresentation (SOURCE_FILE ("declaration-task.galgas", 395)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(function_stackNameForTask (enumerator_14992.current (HERE).getter_mTaskName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 396)).add_operation (GALGAS_string (" = global ["), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 396)).add_operation (enumerator_14992.current (HERE).getter_mStackSize (HERE).divide_operation (GALGAS_uint ((uint32_t) 4U).getter_bigint (SOURCE_FILE ("declaration-task.galgas", 396)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 396)).getter_string (SOURCE_FILE ("declaration-task.galgas", 396)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 396)).add_operation (GALGAS_string (" x i32] zeroinitializer\n"), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 396)), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 396)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 397)) ;
    GALGAS_string var_effectiveParameter_15306 = GALGAS_string ("(%").add_operation (var_assemblerTaskName_15084, inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 398)).add_operation (GALGAS_string (" * @"), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 398)).add_operation (function_llvmNameForTaskGlobalVar (enumerator_14992.current (HERE).getter_mTaskName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 398)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 398)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 398)) ;
    GALGAS_string var_formalArgument_15416 = GALGAS_string ("(%").add_operation (var_assemblerTaskName_15084, inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 399)).add_operation (GALGAS_string (" * %self)"), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 399)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(function_llvmSeparatorLine (inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 400)), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 400)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 401)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal void ").add_operation (function_initNameForTaskType (enumerator_14992.current (HERE).getter_mTaskName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 402)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 402)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 402)).add_operation (var_formalArgument_15416, inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 402)).add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 402)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 402)).add_operation (GALGAS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 402)), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 402)) ;
    cEnumerator_allocaList enumerator_15711 (enumerator_14992.current (HERE).getter_mAllocaList (HERE), kENUMERATION_UP) ;
    while (enumerator_15711.hasCurrentObject ()) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (enumerator_15711.current_mVarLLVMName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 404)).add_operation (GALGAS_string (" = alloca "), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 404)).add_operation (enumerator_15711.current_mLLVMTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 404)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 404)), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 404)) ;
      enumerator_15711.gotoNextObject () ;
    }
    extensionMethod_instructionListLLVMCode (enumerator_14992.current (HERE).getter_mSetupInstructionListIR (HERE), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 406)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 407)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
      "\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 408)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(function_llvmSeparatorLine (inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 409)), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 409)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 410)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal void ").add_operation (function_mainRoutineNameForTask (enumerator_14992.current (HERE).getter_mTaskName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 411)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 411)).add_operation (GALGAS_string (" ()"), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 411)).add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 411)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 411)).add_operation (GALGAS_string ("noreturn {\n"), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 411)), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 411)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void ").add_operation (function_initNameForTaskType (enumerator_14992.current (HERE).getter_mTaskName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 412)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 412)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 412)).add_operation (var_effectiveParameter_15306, inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 412)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 412)), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 412)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @").add_operation (function_llvmNameForFunction (GALGAS_string ("$").add_operation (enumerator_14992.current (HERE).getter_mTaskName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 413)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 413)).add_operation (function_llvmNameForTaskLoopFunction (inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 413)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 413)).add_operation (GALGAS_string ("()"), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 413)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 413)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 413)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 413)).add_operation (var_effectiveParameter_15306, inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 413)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 413)), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 413)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @").add_operation (var_selfTerminateCallName_13582, inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 414)).add_operation (GALGAS_string (" ()\n"), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 414)), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 414)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  unreachable\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 415)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
      "\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 416)) ;
    enumerator_14992.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("Start tasks"), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 419)), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 419)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal void @start.tasks ()").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 420)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 420)).add_operation (GALGAS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 420)), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 420)) ;
  cEnumerator_taskSortedListIR enumerator_16755 (var_orderedTaskList_14442, kENUMERATION_UP) ;
  GALGAS_uint index_16731 ((uint32_t) 0) ;
  while (enumerator_16755.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (function_stackAddressForTask (enumerator_16755.current (HERE).getter_mTaskName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 422)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 422)), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 422)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" = getelementptr inbounds [").add_operation (enumerator_16755.current (HERE).getter_mStackSize (HERE).divide_operation (GALGAS_uint ((uint32_t) 4U).getter_bigint (SOURCE_FILE ("declaration-task.galgas", 423)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 423)).getter_string (SOURCE_FILE ("declaration-task.galgas", 423)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 423)).add_operation (GALGAS_string (" x i32], "), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 423)), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 423)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("[").add_operation (enumerator_16755.current (HERE).getter_mStackSize (HERE).divide_operation (GALGAS_uint ((uint32_t) 4U).getter_bigint (SOURCE_FILE ("declaration-task.galgas", 424)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 424)).getter_string (SOURCE_FILE ("declaration-task.galgas", 424)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 424)).add_operation (GALGAS_string (" x i32]* "), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 424)).add_operation (function_stackNameForTask (enumerator_16755.current (HERE).getter_mTaskName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 424)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 424)), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 424)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", i32 0, i32 0\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 425)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %task.name.").add_operation (index_16731.getter_string (SOURCE_FILE ("declaration-task.galgas", 426)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 426)).add_operation (GALGAS_string (" = load i8*, i8** "), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 426)).add_operation (function_literalStringName (enumerator_16755.current (HERE).getter_mTaskNameStringIndex (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 426)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 426)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 426)), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 426)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @kernel_create_task ("), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 427)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("i32 ").add_operation (index_16731.getter_string (SOURCE_FILE ("declaration-task.galgas", 428)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 428)), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 428)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", i8* %task.name.").add_operation (index_16731.getter_string (SOURCE_FILE ("declaration-task.galgas", 429)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 429)), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 429)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", i32* ").add_operation (function_stackAddressForTask (enumerator_16755.current (HERE).getter_mTaskName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 430)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 430)), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 430)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", i32 ").add_operation (enumerator_16755.current (HERE).getter_mStackSize (HERE).getter_string (SOURCE_FILE ("declaration-task.galgas", 431)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 431)), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 431)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", void ()* ").add_operation (function_mainRoutineNameForTask (enumerator_16755.current (HERE).getter_mTaskName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 432)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 432)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 432)), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 432)) ;
    enumerator_16755.gotoNextObject () ;
    index_16731.increment_operation (inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 421)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 434)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 435)) ;
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

GALGAS_mode GALGAS_mode::constructor_safeMode (UNUSED_LOCATION_ARGS) {
  GALGAS_mode result ;
  result.mEnum = kEnum_safeMode ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mode GALGAS_mode::constructor_anyMode (UNUSED_LOCATION_ARGS) {
  GALGAS_mode result ;
  result.mEnum = kEnum_anyMode ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * gEnumNameArrayFor_mode [11] = {
  "(not built)",
  "userMode",
  "sectionMode",
  "serviceMode",
  "primitiveMode",
  "guardMode",
  "panicMode",
  "bootMode",
  "initMode",
  "safeMode",
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

GALGAS_bool GALGAS_mode::getter_isSafeMode (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_safeMode == mEnum) ;
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
//                                        Extension Getter '@mode panicAllowed'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool extensionGetter_panicAllowed (const GALGAS_mode & inObject,
                                          C_Compiler * /* inCompiler */
                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  const GALGAS_mode temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_mode::kNotBuilt:
    break ;
  case GALGAS_mode::kEnum_userMode:
    {
      result_result = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_mode::kEnum_sectionMode:
    {
      result_result = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_mode::kEnum_serviceMode:
    {
      result_result = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_mode::kEnum_primitiveMode:
    {
      result_result = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_mode::kEnum_guardMode:
    {
      result_result = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_mode::kEnum_panicMode:
    {
      result_result = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_mode::kEnum_bootMode:
    {
      result_result = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_mode::kEnum_initMode:
    {
      result_result = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_mode::kEnum_safeMode:
    {
      result_result = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_mode::kEnum_anyMode:
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
  case GALGAS_mode::kEnum_safeMode:
    {
      result_result = GALGAS_string ("safe") ;
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
  case GALGAS_mode::kEnum_safeMode:
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
//                                                                                                                     *
//                               Class for element of '@panicClauseListAST' sorted list                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cSortedListElement_panicClauseListAST : public cSortedListElement {
  public : GALGAS_panicClauseListAST_2D_element mObject ;

//--- Constructor
  public : cSortedListElement_panicClauseListAST (const GALGAS_bool & in_mIsSetup,
                                                  const GALGAS_instructionListAST & in_mPanicInstructionList,
                                                  const GALGAS_location & in_mEndOfPanicInstructions,
                                                  const GALGAS_lbigint & in_mPriority
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

cSortedListElement_panicClauseListAST::cSortedListElement_panicClauseListAST (const GALGAS_bool & in_mIsSetup,
                                                                              const GALGAS_instructionListAST & in_mPanicInstructionList,
                                                                              const GALGAS_location & in_mEndOfPanicInstructions,
                                                                              const GALGAS_lbigint & in_mPriority
                                                                              COMMA_LOCATION_ARGS) :
cSortedListElement (THERE),
mObject (in_mIsSetup, in_mPanicInstructionList, in_mEndOfPanicInstructions, in_mPriority) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cSortedListElement_panicClauseListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cSortedListElement * cSortedListElement_panicClauseListAST::copy (void) {
  cSortedListElement * result = NULL ;
  macroMyNew (result, cSortedListElement_panicClauseListAST (mObject.mProperty_mIsSetup, mObject.mProperty_mPanicInstructionList, mObject.mProperty_mEndOfPanicInstructions, mObject.mProperty_mPriority COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cSortedListElement_panicClauseListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIsSetup" ":" ;
  mObject.mProperty_mIsSetup.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mPanicInstructionList" ":" ;
  mObject.mProperty_mPanicInstructionList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEndOfPanicInstructions" ":" ;
  mObject.mProperty_mEndOfPanicInstructions.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mPriority" ":" ;
  mObject.mProperty_mPriority.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cSortedListElement_panicClauseListAST::compare (const cCollectionElement * inOperand) const {
  cSortedListElement_panicClauseListAST * operand = (cSortedListElement_panicClauseListAST *) inOperand ;
  macroValidSharedObject (operand, cSortedListElement_panicClauseListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_panicClauseListAST::GALGAS_panicClauseListAST (void) :
AC_GALGAS_sortedlist () {
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cSortedListElement_panicClauseListAST::compareForSorting (const cSortedListElement * inOperand) const {
  typeComparisonResult result = kOperandEqual ;
  const cSortedListElement_panicClauseListAST * operand = (const cSortedListElement_panicClauseListAST *) inOperand ;
  macroValidSharedObject (operand, cSortedListElement_panicClauseListAST) ;
  if (result == kOperandEqual) {
    result = mObject.mProperty_mPriority.objectCompare (operand->mObject.mProperty_mPriority) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_panicClauseListAST GALGAS_panicClauseListAST::constructor_emptySortedList (LOCATION_ARGS) {
  GALGAS_panicClauseListAST result ;
  result.createNewEmptySortedList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_panicClauseListAST GALGAS_panicClauseListAST::constructor_sortedListWithValue (const GALGAS_bool & inOperand0,
                                                                                      const GALGAS_instructionListAST & inOperand1,
                                                                                      const GALGAS_location & inOperand2,
                                                                                      const GALGAS_lbigint & inOperand3
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_panicClauseListAST result = constructor_emptySortedList (THERE) ;
  cSortedListElement * p = NULL ;
  macroMyNew (p, cSortedListElement_panicClauseListAST (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
  capSortedListElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  result.appendObject (attributes) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_panicClauseListAST::addAssign_operation (const GALGAS_bool & inOperand0,
                                                     const GALGAS_instructionListAST & inOperand1,
                                                     const GALGAS_location & inOperand2,
                                                     const GALGAS_lbigint & inOperand3
                                                     COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cSortedListElement * p = NULL ;
    macroMyNew (p, cSortedListElement_panicClauseListAST (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capSortedListElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_panicClauseListAST::plusAssign_operation (const GALGAS_panicClauseListAST inOperand,
                                                      C_Compiler * /* inCompiler */
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid ()) {
    appendSortedList (inOperand) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_panicClauseListAST::setter_popSmallest (GALGAS_bool & outOperand0,
                                                    GALGAS_instructionListAST & outOperand1,
                                                    GALGAS_location & outOperand2,
                                                    GALGAS_lbigint & outOperand3,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  capSortedListElement attributes ;
  removeSmallestObject (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_panicClauseListAST * p = (cSortedListElement_panicClauseListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_panicClauseListAST) ;
    outOperand0 = p->mObject.mProperty_mIsSetup ;
    outOperand1 = p->mObject.mProperty_mPanicInstructionList ;
    outOperand2 = p->mObject.mProperty_mEndOfPanicInstructions ;
    outOperand3 = p->mObject.mProperty_mPriority ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_panicClauseListAST::setter_popGreatest (GALGAS_bool & outOperand0,
                                                    GALGAS_instructionListAST & outOperand1,
                                                    GALGAS_location & outOperand2,
                                                    GALGAS_lbigint & outOperand3,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  capSortedListElement attributes ;
  removeGreatestObject (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_panicClauseListAST * p = (cSortedListElement_panicClauseListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_panicClauseListAST) ;
    outOperand0 = p->mObject.mProperty_mIsSetup ;
    outOperand1 = p->mObject.mProperty_mPanicInstructionList ;
    outOperand2 = p->mObject.mProperty_mEndOfPanicInstructions ;
    outOperand3 = p->mObject.mProperty_mPriority ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_panicClauseListAST::method_smallest (GALGAS_bool & outOperand0,
                                                 GALGAS_instructionListAST & outOperand1,
                                                 GALGAS_location & outOperand2,
                                                 GALGAS_lbigint & outOperand3,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  capSortedListElement attributes ;
  smallestObjectAttributeList (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_panicClauseListAST * p = (cSortedListElement_panicClauseListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_panicClauseListAST) ;
    outOperand0 = p->mObject.mProperty_mIsSetup ;
    outOperand1 = p->mObject.mProperty_mPanicInstructionList ;
    outOperand2 = p->mObject.mProperty_mEndOfPanicInstructions ;
    outOperand3 = p->mObject.mProperty_mPriority ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_panicClauseListAST::method_greatest (GALGAS_bool & outOperand0,
                                                 GALGAS_instructionListAST & outOperand1,
                                                 GALGAS_location & outOperand2,
                                                 GALGAS_lbigint & outOperand3,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  capSortedListElement attributes ;
  greatestObjectAttributeList (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_panicClauseListAST * p = (cSortedListElement_panicClauseListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_panicClauseListAST) ;
    outOperand0 = p->mObject.mProperty_mIsSetup ;
    outOperand1 = p->mObject.mProperty_mPanicInstructionList ;
    outOperand2 = p->mObject.mProperty_mEndOfPanicInstructions ;
    outOperand3 = p->mObject.mProperty_mPriority ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_panicClauseListAST::cEnumerator_panicClauseListAST (const GALGAS_panicClauseListAST & inEnumeratedObject,
                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_panicClauseListAST_2D_element cEnumerator_panicClauseListAST::current (LOCATION_ARGS) const {
  const cSortedListElement_panicClauseListAST * p = (const cSortedListElement_panicClauseListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_panicClauseListAST) ;
  return p->mObject ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_panicClauseListAST::current_mIsSetup (LOCATION_ARGS) const {
  const cSortedListElement_panicClauseListAST * p = (const cSortedListElement_panicClauseListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_panicClauseListAST) ;
  return p->mObject.mProperty_mIsSetup ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST cEnumerator_panicClauseListAST::current_mPanicInstructionList (LOCATION_ARGS) const {
  const cSortedListElement_panicClauseListAST * p = (const cSortedListElement_panicClauseListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_panicClauseListAST) ;
  return p->mObject.mProperty_mPanicInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cEnumerator_panicClauseListAST::current_mEndOfPanicInstructions (LOCATION_ARGS) const {
  const cSortedListElement_panicClauseListAST * p = (const cSortedListElement_panicClauseListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_panicClauseListAST) ;
  return p->mObject.mProperty_mEndOfPanicInstructions ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbigint cEnumerator_panicClauseListAST::current_mPriority (LOCATION_ARGS) const {
  const cSortedListElement_panicClauseListAST * p = (const cSortedListElement_panicClauseListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_panicClauseListAST) ;
  return p->mObject.mProperty_mPriority ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @panicClauseListAST type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_panicClauseListAST ("panicClauseListAST",
                                           NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_panicClauseListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_panicClauseListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_panicClauseListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_panicClauseListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_panicClauseListAST GALGAS_panicClauseListAST::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_panicClauseListAST result ;
  const GALGAS_panicClauseListAST * p = (const GALGAS_panicClauseListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_panicClauseListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("panicClauseListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
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
  cEnumerator_panicClauseListAST enumerator_2420 (temp_0, kENUMERATION_UP) ;
  while (enumerator_2420.hasCurrentObject ()) {
    extensionMethod_noteInstructionListTypesInPrecedenceGraph (enumerator_2420.current_mPanicInstructionList (HERE), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("panic.galgas", 64)) ;
    enumerator_2420.gotoNextObject () ;
  }
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

GALGAS_routineKind GALGAS_routineKind::constructor_safe (UNUSED_LOCATION_ARGS) {
  GALGAS_routineKind result ;
  result.mEnum = kEnum_safe ;
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

static const char * gEnumNameArrayFor_routineKind [6] = {
  "(not built)",
  "function",
  "section",
  "safe",
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

GALGAS_bool GALGAS_routineKind::getter_isSafe (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_safe == mEnum) ;
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
  cEnumerator_systemRoutineDeclarationListAST enumerator_2816 (temp_0, kENUMERATION_UP) ;
  while (enumerator_2816.hasCurrentObject ()) {
    cEnumerator_routineFormalArgumentListAST enumerator_2881 (enumerator_2816.current_mFormalArgumentList (HERE), kENUMERATION_UP) ;
    while (enumerator_2881.hasCurrentObject ()) {
      GALGAS_lstring var_typeName_2903 = function_llvmRegularTypeMangledNameFromName (enumerator_2881.current_mFormalArgumentTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 87)) ;
      {
      ioArgument_ioGraph.setter_noteNode (var_typeName_2903 COMMA_SOURCE_FILE ("declaration-svc.galgas", 88)) ;
      }
      enumerator_2881.gotoNextObject () ;
    }
    extensionMethod_noteInstructionListTypesInPrecedenceGraph (enumerator_2816.current_mInstructionList (HERE), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 90)) ;
    enumerator_2816.gotoNextObject () ;
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
  cEnumerator_systemRoutineDeclarationListAST enumerator_3633 (temp_0, kENUMERATION_UP) ;
  while (enumerator_3633.hasCurrentObject ()) {
    GALGAS_lstring var_routineMangledName_3691 = function_routineMangledNameFromAST (constinArgument_inReceiverTypeName, enumerator_3633.current (HERE).getter_mName (HERE), enumerator_3633.current (HERE).getter_mFormalArgumentList (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 104)) ;
    GALGAS_routineTypedSignature var_signature_3902 ;
    {
    routine_routineSignature (ioArgument_ioContext.mProperty_mTypeMap, enumerator_3633.current (HERE).getter_mFormalArgumentList (HERE), var_signature_3902, inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 110)) ;
    }
    GALGAS_unifiedTypeMap_2D_proxy var_returnTypeProxy_4030 ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeOptionalProxy (ioArgument_ioContext.mProperty_mTypeMap, enumerator_3633.current (HERE).getter_mReturnTypeName (HERE), var_returnTypeProxy_4030 COMMA_SOURCE_FILE ("declaration-svc.galgas", 112)) ;
    }
    GALGAS_bool var_mutating_4066 = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_4116 (enumerator_3633.current (HERE).getter_mAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_4116.hasCurrentObject ()) {
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_4116.current_mValue (HERE).getter_string (HERE).objectCompare (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 116)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        var_mutating_4066 = GALGAS_bool (true) ;
      }
      enumerator_4116.gotoNextObject () ;
    }
    {
    extensionSetter_insertRoutine (ioArgument_ioContext.mProperty_mRoutineMapForContext, enumerator_3633.current (HERE).getter_mName (HERE), extensionGetter_routineSignature (enumerator_3633.current (HERE).getter_mFormalArgumentList (HERE), enumerator_3633.current (HERE).getter_mName (HERE).getter_location (SOURCE_FILE ("declaration-svc.galgas", 123)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 123)), var_routineMangledName_3691, GALGAS_routineDescriptor::constructor_new (enumerator_3633.current (HERE).getter_mPublic (HERE), GALGAS_bool (false), enumerator_3633.current (HERE).getter_mRoutineKind (HERE), var_signature_3902, var_returnTypeProxy_4030, var_mutating_4066, GALGAS_bool (true)  COMMA_SOURCE_FILE ("declaration-svc.galgas", 125)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 121)) ;
    }
    enumerator_3633.gotoNextObject () ;
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
  cEnumerator_systemRoutineDeclarationListAST enumerator_5299 (temp_0, kENUMERATION_UP) ;
  while (enumerator_5299.hasCurrentObject ()) {
    GALGAS_bool var_mutating_5319 = GALGAS_bool (false) ;
    GALGAS_bool var_noUnusedWarning_5351 = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_5401 (enumerator_5299.current (HERE).getter_mAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_5401.hasCurrentObject ()) {
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_5401.current_mValue (HERE).getter_string (HERE).objectCompare (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 152)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        const enumGalgasBool test_2 = var_noUnusedWarning_5351.boolEnum () ;
        if (kBoolTrue == test_2) {
          TC_Array <C_FixItDescription> fixItArray3 ;
          fixItArray3.appendObject (C_FixItDescription (kFixItRemove, "")) ;
          inCompiler->emitSemanticError (enumerator_5401.current_mValue (HERE).getter_location (SOURCE_FILE ("declaration-svc.galgas", 154)), GALGAS_string ("duplicated @").add_operation (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 154)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 154)).add_operation (GALGAS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 154)), fixItArray3  COMMA_SOURCE_FILE ("declaration-svc.galgas", 154)) ;
        }
        var_noUnusedWarning_5351 = GALGAS_bool (true) ;
      }else if (kBoolFalse == test_1) {
        const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, enumerator_5401.current_mValue (HERE).getter_string (HERE).objectCompare (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 157)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          const enumGalgasBool test_5 = var_mutating_5319.boolEnum () ;
          if (kBoolTrue == test_5) {
            TC_Array <C_FixItDescription> fixItArray6 ;
            fixItArray6.appendObject (C_FixItDescription (kFixItRemove, "")) ;
            inCompiler->emitSemanticError (enumerator_5401.current_mValue (HERE).getter_location (SOURCE_FILE ("declaration-svc.galgas", 159)), GALGAS_string ("duplicated @").add_operation (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 159)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 159)).add_operation (GALGAS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 159)), fixItArray6  COMMA_SOURCE_FILE ("declaration-svc.galgas", 159)) ;
          }
          var_mutating_5319 = GALGAS_bool (true) ;
        }else if (kBoolFalse == test_4) {
          TC_Array <C_FixItDescription> fixItArray7 ;
          fixItArray7.appendObject (C_FixItDescription (kFixItRemove, "")) ;
          inCompiler->emitSemanticError (enumerator_5401.current_mValue (HERE).getter_location (SOURCE_FILE ("declaration-svc.galgas", 163)), GALGAS_string ("unknown attribute; available attributes are @").add_operation (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 164)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 164)).add_operation (GALGAS_string (", @"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 164)).add_operation (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 164)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 164)), fixItArray7  COMMA_SOURCE_FILE ("declaration-svc.galgas", 163)) ;
        }
      }
      enumerator_5401.gotoNextObject () ;
    }
    GALGAS_mode var_mode_6077 ;
    switch (enumerator_5299.current (HERE).getter_mRoutineKind (HERE).enumValue ()) {
    case GALGAS_routineKind::kNotBuilt:
      break ;
    case GALGAS_routineKind::kEnum_section:
      {
        var_mode_6077 = GALGAS_mode::constructor_sectionMode (SOURCE_FILE ("declaration-svc.galgas", 170)) ;
      }
      break ;
    case GALGAS_routineKind::kEnum_primitive:
      {
        var_mode_6077 = GALGAS_mode::constructor_primitiveMode (SOURCE_FILE ("declaration-svc.galgas", 171)) ;
      }
      break ;
    case GALGAS_routineKind::kEnum_service:
      {
        var_mode_6077 = GALGAS_mode::constructor_serviceMode (SOURCE_FILE ("declaration-svc.galgas", 172)) ;
      }
      break ;
    case GALGAS_routineKind::kEnum_safe:
      {
        var_mode_6077 = GALGAS_mode::constructor_safeMode (SOURCE_FILE ("declaration-svc.galgas", 173)) ;
      }
      break ;
    case GALGAS_routineKind::kEnum_function:
      {
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (enumerator_5299.current (HERE).getter_mEndOfInstructionListLocation (HERE), GALGAS_string ("INTERNAL ERROR"), fixItArray8  COMMA_SOURCE_FILE ("declaration-svc.galgas", 174)) ;
        var_mode_6077.drop () ; // Release error dropped variable
      }
      break ;
    }
    {
    routine_routineSemanticAnalysis (inArgument_inReceiverType, enumerator_5299.current (HERE).getter_mRoutineKind (HERE), var_mode_6077, enumerator_5299.current (HERE).getter_mName (HERE), enumerator_5299.current (HERE).getter_mFormalArgumentList (HERE), enumerator_5299.current (HERE).getter_mReturnTypeName (HERE), enumerator_5299.current (HERE).getter_mInstructionList (HERE), enumerator_5299.current (HERE).getter_mEndOfInstructionListLocation (HERE), GALGAS_bool (true), var_mutating_5319, var_noUnusedWarning_5351.operator_not (SOURCE_FILE ("declaration-svc.galgas", 187)), GALGAS_bool (true), constinArgument_inSemanticContext, ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct, inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 176)) ;
    }
    enumerator_5299.gotoNextObject () ;
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
                                             const GALGAS_routineFormalArgumentListForGeneration & in_mFormalArgumentListForGeneration,
                                             const GALGAS_PLMType & in_mReturnType
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
                                                                    const GALGAS_routineFormalArgumentListForGeneration & in_mFormalArgumentListForGeneration,
                                                                    const GALGAS_PLMType & in_mReturnType
                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mSectionCallName, in_mSectionImplementationName, in_mReceiverType, in_mFormalArgumentListForGeneration, in_mReturnType) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_sectionIRlist::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_sectionIRlist::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_sectionIRlist (mObject.mProperty_mSectionCallName, mObject.mProperty_mSectionImplementationName, mObject.mProperty_mReceiverType, mObject.mProperty_mFormalArgumentListForGeneration, mObject.mProperty_mReturnType COMMA_HERE)) ;
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
                                                                      const GALGAS_routineFormalArgumentListForGeneration & inOperand3,
                                                                      const GALGAS_PLMType & inOperand4
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_sectionIRlist result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_sectionIRlist (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_sectionIRlist::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_sectionIRlist::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                      const GALGAS_string & in_mSectionCallName,
                                                      const GALGAS_string & in_mSectionImplementationName,
                                                      const GALGAS_PLMType & in_mReceiverType,
                                                      const GALGAS_routineFormalArgumentListForGeneration & in_mFormalArgumentListForGeneration,
                                                      const GALGAS_PLMType & in_mReturnType
                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_sectionIRlist * p = NULL ;
  macroMyNew (p, cCollectionElement_sectionIRlist (in_mSectionCallName,
                                                   in_mSectionImplementationName,
                                                   in_mReceiverType,
                                                   in_mFormalArgumentListForGeneration,
                                                   in_mReturnType COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_sectionIRlist::addAssign_operation (const GALGAS_string & inOperand0,
                                                const GALGAS_string & inOperand1,
                                                const GALGAS_PLMType & inOperand2,
                                                const GALGAS_routineFormalArgumentListForGeneration & inOperand3,
                                                const GALGAS_PLMType & inOperand4
                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_sectionIRlist (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
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
                                                 const GALGAS_routineFormalArgumentListForGeneration inOperand3,
                                                 const GALGAS_PLMType inOperand4,
                                                 const GALGAS_uint inInsertionIndex,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_sectionIRlist (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
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
                                                 GALGAS_routineFormalArgumentListForGeneration & outOperand3,
                                                 GALGAS_PLMType & outOperand4,
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
    }else{
      macroValidSharedObject (p, cCollectionElement_sectionIRlist) ;
      outOperand0 = p->mObject.mProperty_mSectionCallName ;
      outOperand1 = p->mObject.mProperty_mSectionImplementationName ;
      outOperand2 = p->mObject.mProperty_mReceiverType ;
      outOperand3 = p->mObject.mProperty_mFormalArgumentListForGeneration ;
      outOperand4 = p->mObject.mProperty_mReturnType ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_sectionIRlist::setter_popFirst (GALGAS_string & outOperand0,
                                            GALGAS_string & outOperand1,
                                            GALGAS_PLMType & outOperand2,
                                            GALGAS_routineFormalArgumentListForGeneration & outOperand3,
                                            GALGAS_PLMType & outOperand4,
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
  }else{
    macroValidSharedObject (p, cCollectionElement_sectionIRlist) ;
    outOperand0 = p->mObject.mProperty_mSectionCallName ;
    outOperand1 = p->mObject.mProperty_mSectionImplementationName ;
    outOperand2 = p->mObject.mProperty_mReceiverType ;
    outOperand3 = p->mObject.mProperty_mFormalArgumentListForGeneration ;
    outOperand4 = p->mObject.mProperty_mReturnType ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_sectionIRlist::setter_popLast (GALGAS_string & outOperand0,
                                           GALGAS_string & outOperand1,
                                           GALGAS_PLMType & outOperand2,
                                           GALGAS_routineFormalArgumentListForGeneration & outOperand3,
                                           GALGAS_PLMType & outOperand4,
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
  }else{
    macroValidSharedObject (p, cCollectionElement_sectionIRlist) ;
    outOperand0 = p->mObject.mProperty_mSectionCallName ;
    outOperand1 = p->mObject.mProperty_mSectionImplementationName ;
    outOperand2 = p->mObject.mProperty_mReceiverType ;
    outOperand3 = p->mObject.mProperty_mFormalArgumentListForGeneration ;
    outOperand4 = p->mObject.mProperty_mReturnType ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_sectionIRlist::method_first (GALGAS_string & outOperand0,
                                         GALGAS_string & outOperand1,
                                         GALGAS_PLMType & outOperand2,
                                         GALGAS_routineFormalArgumentListForGeneration & outOperand3,
                                         GALGAS_PLMType & outOperand4,
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
  }else{
    macroValidSharedObject (p, cCollectionElement_sectionIRlist) ;
    outOperand0 = p->mObject.mProperty_mSectionCallName ;
    outOperand1 = p->mObject.mProperty_mSectionImplementationName ;
    outOperand2 = p->mObject.mProperty_mReceiverType ;
    outOperand3 = p->mObject.mProperty_mFormalArgumentListForGeneration ;
    outOperand4 = p->mObject.mProperty_mReturnType ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_sectionIRlist::method_last (GALGAS_string & outOperand0,
                                        GALGAS_string & outOperand1,
                                        GALGAS_PLMType & outOperand2,
                                        GALGAS_routineFormalArgumentListForGeneration & outOperand3,
                                        GALGAS_PLMType & outOperand4,
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
  }else{
    macroValidSharedObject (p, cCollectionElement_sectionIRlist) ;
    outOperand0 = p->mObject.mProperty_mSectionCallName ;
    outOperand1 = p->mObject.mProperty_mSectionImplementationName ;
    outOperand2 = p->mObject.mProperty_mReceiverType ;
    outOperand3 = p->mObject.mProperty_mFormalArgumentListForGeneration ;
    outOperand4 = p->mObject.mProperty_mReturnType ;
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

GALGAS_routineFormalArgumentListForGeneration GALGAS_sectionIRlist::getter_mFormalArgumentListForGenerationAtIndex (const GALGAS_uint & inIndex,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_sectionIRlist * p = (cCollectionElement_sectionIRlist *) attributes.ptr () ;
  GALGAS_routineFormalArgumentListForGeneration result ;
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

GALGAS_routineFormalArgumentListForGeneration cEnumerator_sectionIRlist::current_mFormalArgumentListForGeneration (LOCATION_ARGS) const {
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
//                         Class for element of '@routineFormalArgumentListForGeneration' list                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_routineFormalArgumentListForGeneration : public cCollectionElement {
  public : GALGAS_routineFormalArgumentListForGeneration_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_routineFormalArgumentListForGeneration (const GALGAS_procFormalArgumentPassingMode & in_mFormalArgumentKind,
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

cCollectionElement_routineFormalArgumentListForGeneration::cCollectionElement_routineFormalArgumentListForGeneration (const GALGAS_procFormalArgumentPassingMode & in_mFormalArgumentKind,
                                                                                                                      const GALGAS_PLMType & in_mFormalArgumentType,
                                                                                                                      const GALGAS_string & in_mFormalArgumentName
                                                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mFormalArgumentKind, in_mFormalArgumentType, in_mFormalArgumentName) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_routineFormalArgumentListForGeneration::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_routineFormalArgumentListForGeneration::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_routineFormalArgumentListForGeneration (mObject.mProperty_mFormalArgumentKind, mObject.mProperty_mFormalArgumentType, mObject.mProperty_mFormalArgumentName COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_routineFormalArgumentListForGeneration::description (C_String & ioString, const int32_t inIndentation) const {
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

typeComparisonResult cCollectionElement_routineFormalArgumentListForGeneration::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_routineFormalArgumentListForGeneration * operand = (cCollectionElement_routineFormalArgumentListForGeneration *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_routineFormalArgumentListForGeneration) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineFormalArgumentListForGeneration::GALGAS_routineFormalArgumentListForGeneration (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineFormalArgumentListForGeneration::GALGAS_routineFormalArgumentListForGeneration (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineFormalArgumentListForGeneration GALGAS_routineFormalArgumentListForGeneration::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_routineFormalArgumentListForGeneration  (capCollectionElementArray ()) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineFormalArgumentListForGeneration GALGAS_routineFormalArgumentListForGeneration::constructor_listWithValue (const GALGAS_procFormalArgumentPassingMode & inOperand0,
                                                                                                                        const GALGAS_PLMType & inOperand1,
                                                                                                                        const GALGAS_string & inOperand2
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_routineFormalArgumentListForGeneration result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_routineFormalArgumentListForGeneration (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_routineFormalArgumentListForGeneration::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineFormalArgumentListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                               const GALGAS_procFormalArgumentPassingMode & in_mFormalArgumentKind,
                                                                               const GALGAS_PLMType & in_mFormalArgumentType,
                                                                               const GALGAS_string & in_mFormalArgumentName
                                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_routineFormalArgumentListForGeneration * p = NULL ;
  macroMyNew (p, cCollectionElement_routineFormalArgumentListForGeneration (in_mFormalArgumentKind,
                                                                            in_mFormalArgumentType,
                                                                            in_mFormalArgumentName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineFormalArgumentListForGeneration::addAssign_operation (const GALGAS_procFormalArgumentPassingMode & inOperand0,
                                                                         const GALGAS_PLMType & inOperand1,
                                                                         const GALGAS_string & inOperand2
                                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_routineFormalArgumentListForGeneration (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineFormalArgumentListForGeneration::setter_insertAtIndex (const GALGAS_procFormalArgumentPassingMode inOperand0,
                                                                          const GALGAS_PLMType inOperand1,
                                                                          const GALGAS_string inOperand2,
                                                                          const GALGAS_uint inInsertionIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_routineFormalArgumentListForGeneration (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineFormalArgumentListForGeneration::setter_removeAtIndex (GALGAS_procFormalArgumentPassingMode & outOperand0,
                                                                          GALGAS_PLMType & outOperand1,
                                                                          GALGAS_string & outOperand2,
                                                                          const GALGAS_uint inRemoveIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_routineFormalArgumentListForGeneration * p = (cCollectionElement_routineFormalArgumentListForGeneration *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListForGeneration) ;
      outOperand0 = p->mObject.mProperty_mFormalArgumentKind ;
      outOperand1 = p->mObject.mProperty_mFormalArgumentType ;
      outOperand2 = p->mObject.mProperty_mFormalArgumentName ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineFormalArgumentListForGeneration::setter_popFirst (GALGAS_procFormalArgumentPassingMode & outOperand0,
                                                                     GALGAS_PLMType & outOperand1,
                                                                     GALGAS_string & outOperand2,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_routineFormalArgumentListForGeneration * p = (cCollectionElement_routineFormalArgumentListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mFormalArgumentKind ;
    outOperand1 = p->mObject.mProperty_mFormalArgumentType ;
    outOperand2 = p->mObject.mProperty_mFormalArgumentName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineFormalArgumentListForGeneration::setter_popLast (GALGAS_procFormalArgumentPassingMode & outOperand0,
                                                                    GALGAS_PLMType & outOperand1,
                                                                    GALGAS_string & outOperand2,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_routineFormalArgumentListForGeneration * p = (cCollectionElement_routineFormalArgumentListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mFormalArgumentKind ;
    outOperand1 = p->mObject.mProperty_mFormalArgumentType ;
    outOperand2 = p->mObject.mProperty_mFormalArgumentName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineFormalArgumentListForGeneration::method_first (GALGAS_procFormalArgumentPassingMode & outOperand0,
                                                                  GALGAS_PLMType & outOperand1,
                                                                  GALGAS_string & outOperand2,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_routineFormalArgumentListForGeneration * p = (cCollectionElement_routineFormalArgumentListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mFormalArgumentKind ;
    outOperand1 = p->mObject.mProperty_mFormalArgumentType ;
    outOperand2 = p->mObject.mProperty_mFormalArgumentName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineFormalArgumentListForGeneration::method_last (GALGAS_procFormalArgumentPassingMode & outOperand0,
                                                                 GALGAS_PLMType & outOperand1,
                                                                 GALGAS_string & outOperand2,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_routineFormalArgumentListForGeneration * p = (cCollectionElement_routineFormalArgumentListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mFormalArgumentKind ;
    outOperand1 = p->mObject.mProperty_mFormalArgumentType ;
    outOperand2 = p->mObject.mProperty_mFormalArgumentName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineFormalArgumentListForGeneration GALGAS_routineFormalArgumentListForGeneration::add_operation (const GALGAS_routineFormalArgumentListForGeneration & inOperand,
                                                                                                            C_Compiler * /* inCompiler */
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_routineFormalArgumentListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineFormalArgumentListForGeneration GALGAS_routineFormalArgumentListForGeneration::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_routineFormalArgumentListForGeneration result = GALGAS_routineFormalArgumentListForGeneration::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineFormalArgumentListForGeneration GALGAS_routineFormalArgumentListForGeneration::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_routineFormalArgumentListForGeneration result = GALGAS_routineFormalArgumentListForGeneration::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineFormalArgumentListForGeneration GALGAS_routineFormalArgumentListForGeneration::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_routineFormalArgumentListForGeneration result = GALGAS_routineFormalArgumentListForGeneration::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineFormalArgumentListForGeneration::plusAssign_operation (const GALGAS_routineFormalArgumentListForGeneration inOperand,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentPassingMode GALGAS_routineFormalArgumentListForGeneration::getter_mFormalArgumentKindAtIndex (const GALGAS_uint & inIndex,
                                                                                                                       C_Compiler * inCompiler
                                                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_routineFormalArgumentListForGeneration * p = (cCollectionElement_routineFormalArgumentListForGeneration *) attributes.ptr () ;
  GALGAS_procFormalArgumentPassingMode result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListForGeneration) ;
    result = p->mObject.mProperty_mFormalArgumentKind ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMType GALGAS_routineFormalArgumentListForGeneration::getter_mFormalArgumentTypeAtIndex (const GALGAS_uint & inIndex,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_routineFormalArgumentListForGeneration * p = (cCollectionElement_routineFormalArgumentListForGeneration *) attributes.ptr () ;
  GALGAS_PLMType result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListForGeneration) ;
    result = p->mObject.mProperty_mFormalArgumentType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_routineFormalArgumentListForGeneration::getter_mFormalArgumentNameAtIndex (const GALGAS_uint & inIndex,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_routineFormalArgumentListForGeneration * p = (cCollectionElement_routineFormalArgumentListForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListForGeneration) ;
    result = p->mObject.mProperty_mFormalArgumentName ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_routineFormalArgumentListForGeneration::cEnumerator_routineFormalArgumentListForGeneration (const GALGAS_routineFormalArgumentListForGeneration & inEnumeratedObject,
                                                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineFormalArgumentListForGeneration_2D_element cEnumerator_routineFormalArgumentListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_routineFormalArgumentListForGeneration * p = (const cCollectionElement_routineFormalArgumentListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListForGeneration) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentPassingMode cEnumerator_routineFormalArgumentListForGeneration::current_mFormalArgumentKind (LOCATION_ARGS) const {
  const cCollectionElement_routineFormalArgumentListForGeneration * p = (const cCollectionElement_routineFormalArgumentListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListForGeneration) ;
  return p->mObject.mProperty_mFormalArgumentKind ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMType cEnumerator_routineFormalArgumentListForGeneration::current_mFormalArgumentType (LOCATION_ARGS) const {
  const cCollectionElement_routineFormalArgumentListForGeneration * p = (const cCollectionElement_routineFormalArgumentListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListForGeneration) ;
  return p->mObject.mProperty_mFormalArgumentType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_routineFormalArgumentListForGeneration::current_mFormalArgumentName (LOCATION_ARGS) const {
  const cCollectionElement_routineFormalArgumentListForGeneration * p = (const cCollectionElement_routineFormalArgumentListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListForGeneration) ;
  return p->mObject.mProperty_mFormalArgumentName ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @routineFormalArgumentListForGeneration type                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_routineFormalArgumentListForGeneration ("routineFormalArgumentListForGeneration",
                                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_routineFormalArgumentListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineFormalArgumentListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_routineFormalArgumentListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_routineFormalArgumentListForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineFormalArgumentListForGeneration GALGAS_routineFormalArgumentListForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_routineFormalArgumentListForGeneration result ;
  const GALGAS_routineFormalArgumentListForGeneration * p = (const GALGAS_routineFormalArgumentListForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_routineFormalArgumentListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineFormalArgumentListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_routineMapIR::cMapElement_routineMapIR (const GALGAS_lstring & inKey,
                                                    const GALGAS_PLMType & in_mReceiverType,
                                                    const GALGAS_lstring & in_mRoutineNameForGeneration,
                                                    const GALGAS_routineFormalArgumentListForGeneration & in_mFormalArgumentListForGeneration,
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
                                               const GALGAS_routineFormalArgumentListForGeneration & inArgument2,
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
                                            GALGAS_routineFormalArgumentListForGeneration inArgument2,
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
                                            GALGAS_routineFormalArgumentListForGeneration & outArgument2,
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
                                            GALGAS_routineFormalArgumentListForGeneration & outArgument2,
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

GALGAS_routineFormalArgumentListForGeneration GALGAS_routineMapIR::getter_mFormalArgumentListForGenerationForKey (const GALGAS_string & inKey,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_routineMapIR * p = (const cMapElement_routineMapIR *) attributes ;
  GALGAS_routineFormalArgumentListForGeneration result ;
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

void GALGAS_routineMapIR::setter_setMFormalArgumentListForGenerationForKey (GALGAS_routineFormalArgumentListForGeneration inAttributeValue,
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

GALGAS_routineFormalArgumentListForGeneration cEnumerator_routineMapIR::current_mFormalArgumentListForGeneration (LOCATION_ARGS) const {
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
//                                    Class for element of '@bootList' sorted list                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cSortedListElement_bootList : public cSortedListElement {
  public : GALGAS_bootList_2D_element mObject ;

//--- Constructor
  public : cSortedListElement_bootList (const GALGAS_location & in_mBootLocation,
                                        const GALGAS_instructionListAST & in_mInstructionList,
                                        const GALGAS_location & in_mEndOfBootLocation,
                                        const GALGAS_bigint & in_mPriority,
                                        const GALGAS_location & in_mPriorityLocation
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

cSortedListElement_bootList::cSortedListElement_bootList (const GALGAS_location & in_mBootLocation,
                                                          const GALGAS_instructionListAST & in_mInstructionList,
                                                          const GALGAS_location & in_mEndOfBootLocation,
                                                          const GALGAS_bigint & in_mPriority,
                                                          const GALGAS_location & in_mPriorityLocation
                                                          COMMA_LOCATION_ARGS) :
cSortedListElement (THERE),
mObject (in_mBootLocation, in_mInstructionList, in_mEndOfBootLocation, in_mPriority, in_mPriorityLocation) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cSortedListElement_bootList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cSortedListElement * cSortedListElement_bootList::copy (void) {
  cSortedListElement * result = NULL ;
  macroMyNew (result, cSortedListElement_bootList (mObject.mProperty_mBootLocation, mObject.mProperty_mInstructionList, mObject.mProperty_mEndOfBootLocation, mObject.mProperty_mPriority, mObject.mProperty_mPriorityLocation COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cSortedListElement_bootList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBootLocation" ":" ;
  mObject.mProperty_mBootLocation.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInstructionList" ":" ;
  mObject.mProperty_mInstructionList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEndOfBootLocation" ":" ;
  mObject.mProperty_mEndOfBootLocation.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mPriority" ":" ;
  mObject.mProperty_mPriority.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mPriorityLocation" ":" ;
  mObject.mProperty_mPriorityLocation.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cSortedListElement_bootList::compare (const cCollectionElement * inOperand) const {
  cSortedListElement_bootList * operand = (cSortedListElement_bootList *) inOperand ;
  macroValidSharedObject (operand, cSortedListElement_bootList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootList::GALGAS_bootList (void) :
AC_GALGAS_sortedlist () {
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cSortedListElement_bootList::compareForSorting (const cSortedListElement * inOperand) const {
  typeComparisonResult result = kOperandEqual ;
  const cSortedListElement_bootList * operand = (const cSortedListElement_bootList *) inOperand ;
  macroValidSharedObject (operand, cSortedListElement_bootList) ;
  if (result == kOperandEqual) {
    result = mObject.mProperty_mPriority.objectCompare (operand->mObject.mProperty_mPriority) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootList GALGAS_bootList::constructor_emptySortedList (LOCATION_ARGS) {
  GALGAS_bootList result ;
  result.createNewEmptySortedList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootList GALGAS_bootList::constructor_sortedListWithValue (const GALGAS_location & inOperand0,
                                                                  const GALGAS_instructionListAST & inOperand1,
                                                                  const GALGAS_location & inOperand2,
                                                                  const GALGAS_bigint & inOperand3,
                                                                  const GALGAS_location & inOperand4
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_bootList result = constructor_emptySortedList (THERE) ;
  cSortedListElement * p = NULL ;
  macroMyNew (p, cSortedListElement_bootList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
  capSortedListElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  result.appendObject (attributes) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_bootList::addAssign_operation (const GALGAS_location & inOperand0,
                                           const GALGAS_instructionListAST & inOperand1,
                                           const GALGAS_location & inOperand2,
                                           const GALGAS_bigint & inOperand3,
                                           const GALGAS_location & inOperand4
                                           COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cSortedListElement * p = NULL ;
    macroMyNew (p, cSortedListElement_bootList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capSortedListElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_bootList::plusAssign_operation (const GALGAS_bootList inOperand,
                                            C_Compiler * /* inCompiler */
                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid ()) {
    appendSortedList (inOperand) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_bootList::setter_popSmallest (GALGAS_location & outOperand0,
                                          GALGAS_instructionListAST & outOperand1,
                                          GALGAS_location & outOperand2,
                                          GALGAS_bigint & outOperand3,
                                          GALGAS_location & outOperand4,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  capSortedListElement attributes ;
  removeSmallestObject (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_bootList * p = (cSortedListElement_bootList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_bootList) ;
    outOperand0 = p->mObject.mProperty_mBootLocation ;
    outOperand1 = p->mObject.mProperty_mInstructionList ;
    outOperand2 = p->mObject.mProperty_mEndOfBootLocation ;
    outOperand3 = p->mObject.mProperty_mPriority ;
    outOperand4 = p->mObject.mProperty_mPriorityLocation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_bootList::setter_popGreatest (GALGAS_location & outOperand0,
                                          GALGAS_instructionListAST & outOperand1,
                                          GALGAS_location & outOperand2,
                                          GALGAS_bigint & outOperand3,
                                          GALGAS_location & outOperand4,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  capSortedListElement attributes ;
  removeGreatestObject (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_bootList * p = (cSortedListElement_bootList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_bootList) ;
    outOperand0 = p->mObject.mProperty_mBootLocation ;
    outOperand1 = p->mObject.mProperty_mInstructionList ;
    outOperand2 = p->mObject.mProperty_mEndOfBootLocation ;
    outOperand3 = p->mObject.mProperty_mPriority ;
    outOperand4 = p->mObject.mProperty_mPriorityLocation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_bootList::method_smallest (GALGAS_location & outOperand0,
                                       GALGAS_instructionListAST & outOperand1,
                                       GALGAS_location & outOperand2,
                                       GALGAS_bigint & outOperand3,
                                       GALGAS_location & outOperand4,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const {
  capSortedListElement attributes ;
  smallestObjectAttributeList (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_bootList * p = (cSortedListElement_bootList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_bootList) ;
    outOperand0 = p->mObject.mProperty_mBootLocation ;
    outOperand1 = p->mObject.mProperty_mInstructionList ;
    outOperand2 = p->mObject.mProperty_mEndOfBootLocation ;
    outOperand3 = p->mObject.mProperty_mPriority ;
    outOperand4 = p->mObject.mProperty_mPriorityLocation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_bootList::method_greatest (GALGAS_location & outOperand0,
                                       GALGAS_instructionListAST & outOperand1,
                                       GALGAS_location & outOperand2,
                                       GALGAS_bigint & outOperand3,
                                       GALGAS_location & outOperand4,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const {
  capSortedListElement attributes ;
  greatestObjectAttributeList (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_bootList * p = (cSortedListElement_bootList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_bootList) ;
    outOperand0 = p->mObject.mProperty_mBootLocation ;
    outOperand1 = p->mObject.mProperty_mInstructionList ;
    outOperand2 = p->mObject.mProperty_mEndOfBootLocation ;
    outOperand3 = p->mObject.mProperty_mPriority ;
    outOperand4 = p->mObject.mProperty_mPriorityLocation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_bootList::cEnumerator_bootList (const GALGAS_bootList & inEnumeratedObject,
                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootList_2D_element cEnumerator_bootList::current (LOCATION_ARGS) const {
  const cSortedListElement_bootList * p = (const cSortedListElement_bootList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_bootList) ;
  return p->mObject ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cEnumerator_bootList::current_mBootLocation (LOCATION_ARGS) const {
  const cSortedListElement_bootList * p = (const cSortedListElement_bootList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_bootList) ;
  return p->mObject.mProperty_mBootLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST cEnumerator_bootList::current_mInstructionList (LOCATION_ARGS) const {
  const cSortedListElement_bootList * p = (const cSortedListElement_bootList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_bootList) ;
  return p->mObject.mProperty_mInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cEnumerator_bootList::current_mEndOfBootLocation (LOCATION_ARGS) const {
  const cSortedListElement_bootList * p = (const cSortedListElement_bootList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_bootList) ;
  return p->mObject.mProperty_mEndOfBootLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint cEnumerator_bootList::current_mPriority (LOCATION_ARGS) const {
  const cSortedListElement_bootList * p = (const cSortedListElement_bootList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_bootList) ;
  return p->mObject.mProperty_mPriority ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cEnumerator_bootList::current_mPriorityLocation (LOCATION_ARGS) const {
  const cSortedListElement_bootList * p = (const cSortedListElement_bootList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_bootList) ;
  return p->mObject.mProperty_mPriorityLocation ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                   @bootList type                                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_bootList ("bootList",
                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_bootList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bootList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_bootList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_bootList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootList GALGAS_bootList::extractObject (const GALGAS_object & inObject,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  GALGAS_bootList result ;
  const GALGAS_bootList * p = (const GALGAS_bootList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_bootList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bootList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
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
  cEnumerator_bootList enumerator_1981 (temp_0, kENUMERATION_UP) ;
  while (enumerator_1981.hasCurrentObject ()) {
    extensionMethod_noteInstructionListTypesInPrecedenceGraph (enumerator_1981.current_mInstructionList (HERE), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-boot.galgas", 48)) ;
    enumerator_1981.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*

cMapElement_bootRoutinePriorityMap::cMapElement_bootRoutinePriorityMap (const GALGAS_lstring & inKey
                                                                        COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_bootRoutinePriorityMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_bootRoutinePriorityMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_bootRoutinePriorityMap (mProperty_lkey COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_bootRoutinePriorityMap::description (C_String & /* ioString */, const int32_t /* inIndentation */) const {
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_bootRoutinePriorityMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_bootRoutinePriorityMap * operand = (cMapElement_bootRoutinePriorityMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootRoutinePriorityMap::GALGAS_bootRoutinePriorityMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootRoutinePriorityMap::GALGAS_bootRoutinePriorityMap (const GALGAS_bootRoutinePriorityMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootRoutinePriorityMap & GALGAS_bootRoutinePriorityMap::operator = (const GALGAS_bootRoutinePriorityMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootRoutinePriorityMap GALGAS_bootRoutinePriorityMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_bootRoutinePriorityMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootRoutinePriorityMap GALGAS_bootRoutinePriorityMap::constructor_mapWithMapToOverride (const GALGAS_bootRoutinePriorityMap & inMapToOverride
                                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_bootRoutinePriorityMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootRoutinePriorityMap GALGAS_bootRoutinePriorityMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  GALGAS_bootRoutinePriorityMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_bootRoutinePriorityMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  cMapElement_bootRoutinePriorityMap * p = NULL ;
  macroMyNew (p, cMapElement_bootRoutinePriorityMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@bootRoutinePriorityMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_bootRoutinePriorityMap::setter_insertKey (GALGAS_lstring inKey,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  cMapElement_bootRoutinePriorityMap * p = NULL ;
  macroMyNew (p, cMapElement_bootRoutinePriorityMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "a boot routine with priority %K has been already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_bootRoutinePriorityMap * GALGAS_bootRoutinePriorityMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                       const GALGAS_string & inKey
                                                                                                       COMMA_LOCATION_ARGS) {
  cMapElement_bootRoutinePriorityMap * result = (cMapElement_bootRoutinePriorityMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_bootRoutinePriorityMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_bootRoutinePriorityMap::cEnumerator_bootRoutinePriorityMap (const GALGAS_bootRoutinePriorityMap & inEnumeratedObject,
                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootRoutinePriorityMap_2D_element cEnumerator_bootRoutinePriorityMap::current (LOCATION_ARGS) const {
  const cMapElement_bootRoutinePriorityMap * p = (const cMapElement_bootRoutinePriorityMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_bootRoutinePriorityMap) ;
  return GALGAS_bootRoutinePriorityMap_2D_element (p->mProperty_lkey) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_bootRoutinePriorityMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @bootRoutinePriorityMap type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_bootRoutinePriorityMap ("bootRoutinePriorityMap",
                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_bootRoutinePriorityMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bootRoutinePriorityMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_bootRoutinePriorityMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_bootRoutinePriorityMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootRoutinePriorityMap GALGAS_bootRoutinePriorityMap::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_bootRoutinePriorityMap result ;
  const GALGAS_bootRoutinePriorityMap * p = (const GALGAS_bootRoutinePriorityMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_bootRoutinePriorityMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bootRoutinePriorityMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootList_2D_element::GALGAS_bootList_2D_element (void) :
mProperty_mBootLocation (),
mProperty_mInstructionList (),
mProperty_mEndOfBootLocation (),
mProperty_mPriority (),
mProperty_mPriorityLocation () {
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
mProperty_mBootLocation (inOperand0),
mProperty_mInstructionList (inOperand1),
mProperty_mEndOfBootLocation (inOperand2),
mProperty_mPriority (inOperand3),
mProperty_mPriorityLocation (inOperand4) {
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
    result = mProperty_mBootLocation.objectCompare (inOperand.mProperty_mBootLocation) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mInstructionList.objectCompare (inOperand.mProperty_mInstructionList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mEndOfBootLocation.objectCompare (inOperand.mProperty_mEndOfBootLocation) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mPriority.objectCompare (inOperand.mProperty_mPriority) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mPriorityLocation.objectCompare (inOperand.mProperty_mPriorityLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_bootList_2D_element::isValid (void) const {
  return mProperty_mBootLocation.isValid () && mProperty_mInstructionList.isValid () && mProperty_mEndOfBootLocation.isValid () && mProperty_mPriority.isValid () && mProperty_mPriorityLocation.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_bootList_2D_element::drop (void) {
  mProperty_mBootLocation.drop () ;
  mProperty_mInstructionList.drop () ;
  mProperty_mEndOfBootLocation.drop () ;
  mProperty_mPriority.drop () ;
  mProperty_mPriorityLocation.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_bootList_2D_element::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "<struct @bootList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mBootLocation.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mInstructionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mEndOfBootLocation.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mPriority.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mPriorityLocation.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_bootList_2D_element::getter_mBootLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBootLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST GALGAS_bootList_2D_element::getter_mInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_bootList_2D_element::getter_mEndOfBootLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOfBootLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint GALGAS_bootList_2D_element::getter_mPriority (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPriority ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_bootList_2D_element::getter_mPriorityLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPriorityLocation ;
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
//                                       Class for element of '@bootListIR' list                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_bootListIR : public cCollectionElement {
  public : GALGAS_bootListIR_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_bootListIR (const GALGAS_bigint & in_mBootIndex,
                                          const GALGAS_location & in_mInitLocation,
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

cCollectionElement_bootListIR::cCollectionElement_bootListIR (const GALGAS_bigint & in_mBootIndex,
                                                              const GALGAS_location & in_mInitLocation,
                                                              const GALGAS_allocaList & in_mAllocaList,
                                                              const GALGAS_instructionListIR & in_mInstructionListIR,
                                                              const GALGAS_location & in_mEndOfInitLocation
                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mBootIndex, in_mInitLocation, in_mAllocaList, in_mInstructionListIR, in_mEndOfInitLocation) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_bootListIR::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_bootListIR::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_bootListIR (mObject.mProperty_mBootIndex, mObject.mProperty_mInitLocation, mObject.mProperty_mAllocaList, mObject.mProperty_mInstructionListIR, mObject.mProperty_mEndOfInitLocation COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_bootListIR::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBootIndex" ":" ;
  mObject.mProperty_mBootIndex.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInitLocation" ":" ;
  mObject.mProperty_mInitLocation.description (ioString, inIndentation) ;
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

GALGAS_bootListIR GALGAS_bootListIR::constructor_listWithValue (const GALGAS_bigint & inOperand0,
                                                                const GALGAS_location & inOperand1,
                                                                const GALGAS_allocaList & inOperand2,
                                                                const GALGAS_instructionListIR & inOperand3,
                                                                const GALGAS_location & inOperand4
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_bootListIR result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_bootListIR (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_bootListIR::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_bootListIR::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                   const GALGAS_bigint & in_mBootIndex,
                                                   const GALGAS_location & in_mInitLocation,
                                                   const GALGAS_allocaList & in_mAllocaList,
                                                   const GALGAS_instructionListIR & in_mInstructionListIR,
                                                   const GALGAS_location & in_mEndOfInitLocation
                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_bootListIR * p = NULL ;
  macroMyNew (p, cCollectionElement_bootListIR (in_mBootIndex,
                                                in_mInitLocation,
                                                in_mAllocaList,
                                                in_mInstructionListIR,
                                                in_mEndOfInitLocation COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_bootListIR::addAssign_operation (const GALGAS_bigint & inOperand0,
                                             const GALGAS_location & inOperand1,
                                             const GALGAS_allocaList & inOperand2,
                                             const GALGAS_instructionListIR & inOperand3,
                                             const GALGAS_location & inOperand4
                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_bootListIR (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_bootListIR::setter_insertAtIndex (const GALGAS_bigint inOperand0,
                                              const GALGAS_location inOperand1,
                                              const GALGAS_allocaList inOperand2,
                                              const GALGAS_instructionListIR inOperand3,
                                              const GALGAS_location inOperand4,
                                              const GALGAS_uint inInsertionIndex,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_bootListIR (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_bootListIR::setter_removeAtIndex (GALGAS_bigint & outOperand0,
                                              GALGAS_location & outOperand1,
                                              GALGAS_allocaList & outOperand2,
                                              GALGAS_instructionListIR & outOperand3,
                                              GALGAS_location & outOperand4,
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
      outOperand4.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_bootListIR) ;
      outOperand0 = p->mObject.mProperty_mBootIndex ;
      outOperand1 = p->mObject.mProperty_mInitLocation ;
      outOperand2 = p->mObject.mProperty_mAllocaList ;
      outOperand3 = p->mObject.mProperty_mInstructionListIR ;
      outOperand4 = p->mObject.mProperty_mEndOfInitLocation ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_bootListIR::setter_popFirst (GALGAS_bigint & outOperand0,
                                         GALGAS_location & outOperand1,
                                         GALGAS_allocaList & outOperand2,
                                         GALGAS_instructionListIR & outOperand3,
                                         GALGAS_location & outOperand4,
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
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_bootListIR) ;
    outOperand0 = p->mObject.mProperty_mBootIndex ;
    outOperand1 = p->mObject.mProperty_mInitLocation ;
    outOperand2 = p->mObject.mProperty_mAllocaList ;
    outOperand3 = p->mObject.mProperty_mInstructionListIR ;
    outOperand4 = p->mObject.mProperty_mEndOfInitLocation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_bootListIR::setter_popLast (GALGAS_bigint & outOperand0,
                                        GALGAS_location & outOperand1,
                                        GALGAS_allocaList & outOperand2,
                                        GALGAS_instructionListIR & outOperand3,
                                        GALGAS_location & outOperand4,
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
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_bootListIR) ;
    outOperand0 = p->mObject.mProperty_mBootIndex ;
    outOperand1 = p->mObject.mProperty_mInitLocation ;
    outOperand2 = p->mObject.mProperty_mAllocaList ;
    outOperand3 = p->mObject.mProperty_mInstructionListIR ;
    outOperand4 = p->mObject.mProperty_mEndOfInitLocation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_bootListIR::method_first (GALGAS_bigint & outOperand0,
                                      GALGAS_location & outOperand1,
                                      GALGAS_allocaList & outOperand2,
                                      GALGAS_instructionListIR & outOperand3,
                                      GALGAS_location & outOperand4,
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
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_bootListIR) ;
    outOperand0 = p->mObject.mProperty_mBootIndex ;
    outOperand1 = p->mObject.mProperty_mInitLocation ;
    outOperand2 = p->mObject.mProperty_mAllocaList ;
    outOperand3 = p->mObject.mProperty_mInstructionListIR ;
    outOperand4 = p->mObject.mProperty_mEndOfInitLocation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_bootListIR::method_last (GALGAS_bigint & outOperand0,
                                     GALGAS_location & outOperand1,
                                     GALGAS_allocaList & outOperand2,
                                     GALGAS_instructionListIR & outOperand3,
                                     GALGAS_location & outOperand4,
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
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_bootListIR) ;
    outOperand0 = p->mObject.mProperty_mBootIndex ;
    outOperand1 = p->mObject.mProperty_mInitLocation ;
    outOperand2 = p->mObject.mProperty_mAllocaList ;
    outOperand3 = p->mObject.mProperty_mInstructionListIR ;
    outOperand4 = p->mObject.mProperty_mEndOfInitLocation ;
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

GALGAS_bigint GALGAS_bootListIR::getter_mBootIndexAtIndex (const GALGAS_uint & inIndex,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_bootListIR * p = (cCollectionElement_bootListIR *) attributes.ptr () ;
  GALGAS_bigint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_bootListIR) ;
    result = p->mObject.mProperty_mBootIndex ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_bootListIR::getter_mInitLocationAtIndex (const GALGAS_uint & inIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_bootListIR * p = (cCollectionElement_bootListIR *) attributes.ptr () ;
  GALGAS_location result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_bootListIR) ;
    result = p->mObject.mProperty_mInitLocation ;
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

GALGAS_bigint cEnumerator_bootListIR::current_mBootIndex (LOCATION_ARGS) const {
  const cCollectionElement_bootListIR * p = (const cCollectionElement_bootListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_bootListIR) ;
  return p->mObject.mProperty_mBootIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cEnumerator_bootListIR::current_mInitLocation (LOCATION_ARGS) const {
  const cCollectionElement_bootListIR * p = (const cCollectionElement_bootListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_bootListIR) ;
  return p->mObject.mProperty_mInitLocation ;
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
//                               Extension method '@initList noteTypesInPrecedenceGraph'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_noteTypesInPrecedenceGraph (const GALGAS_initList inObject,
                                                 GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_initList temp_0 = inObject ;
  cEnumerator_initList enumerator_2247 (temp_0, kENUMERATION_UP) ;
  while (enumerator_2247.hasCurrentObject ()) {
    extensionMethod_noteInstructionListTypesInPrecedenceGraph (enumerator_2247.current_mInstructionList (HERE), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 56)) ;
    enumerator_2247.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*

cMapElement_initRoutineMap::cMapElement_initRoutineMap (const GALGAS_lstring & inKey
                                                        COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_initRoutineMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_initRoutineMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_initRoutineMap (mProperty_lkey COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_initRoutineMap::description (C_String & /* ioString */, const int32_t /* inIndentation */) const {
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_initRoutineMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_initRoutineMap * operand = (cMapElement_initRoutineMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initRoutineMap::GALGAS_initRoutineMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initRoutineMap::GALGAS_initRoutineMap (const GALGAS_initRoutineMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initRoutineMap & GALGAS_initRoutineMap::operator = (const GALGAS_initRoutineMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initRoutineMap GALGAS_initRoutineMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_initRoutineMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initRoutineMap GALGAS_initRoutineMap::constructor_mapWithMapToOverride (const GALGAS_initRoutineMap & inMapToOverride
                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_initRoutineMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initRoutineMap GALGAS_initRoutineMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  GALGAS_initRoutineMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_initRoutineMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  cMapElement_initRoutineMap * p = NULL ;
  macroMyNew (p, cMapElement_initRoutineMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@initRoutineMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_initRoutineMap::setter_insertKey (GALGAS_lstring inKey,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  cMapElement_initRoutineMap * p = NULL ;
  macroMyNew (p, cMapElement_initRoutineMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%%%K' init routine is already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_initRoutineMap_searchKey = "there is no '%%%K' init routine" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_initRoutineMap::method_searchKey (GALGAS_lstring inKey,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  const cMapElement_initRoutineMap * p = (const cMapElement_initRoutineMap *) performSearch (inKey,
                                                                                             inCompiler,
                                                                                             kSearchErrorMessage_initRoutineMap_searchKey
                                                                                             COMMA_THERE) ;
  if (NULL == p) {
  }else{
    macroValidSharedObject (p, cMapElement_initRoutineMap) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_initRoutineMap * GALGAS_initRoutineMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                       const GALGAS_string & inKey
                                                                                       COMMA_LOCATION_ARGS) {
  cMapElement_initRoutineMap * result = (cMapElement_initRoutineMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_initRoutineMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_initRoutineMap::cEnumerator_initRoutineMap (const GALGAS_initRoutineMap & inEnumeratedObject,
                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initRoutineMap_2D_element cEnumerator_initRoutineMap::current (LOCATION_ARGS) const {
  const cMapElement_initRoutineMap * p = (const cMapElement_initRoutineMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_initRoutineMap) ;
  return GALGAS_initRoutineMap_2D_element (p->mProperty_lkey) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_initRoutineMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @initRoutineMap type                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_initRoutineMap ("initRoutineMap",
                                       NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_initRoutineMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_initRoutineMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_initRoutineMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_initRoutineMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initRoutineMap GALGAS_initRoutineMap::extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_initRoutineMap result ;
  const GALGAS_initRoutineMap * p = (const GALGAS_initRoutineMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_initRoutineMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("initRoutineMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_initRoutinePriorityMap::cMapElement_initRoutinePriorityMap (const GALGAS_lstring & inKey
                                                                        COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_initRoutinePriorityMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_initRoutinePriorityMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_initRoutinePriorityMap (mProperty_lkey COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_initRoutinePriorityMap::description (C_String & /* ioString */, const int32_t /* inIndentation */) const {
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_initRoutinePriorityMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_initRoutinePriorityMap * operand = (cMapElement_initRoutinePriorityMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initRoutinePriorityMap::GALGAS_initRoutinePriorityMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initRoutinePriorityMap::GALGAS_initRoutinePriorityMap (const GALGAS_initRoutinePriorityMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initRoutinePriorityMap & GALGAS_initRoutinePriorityMap::operator = (const GALGAS_initRoutinePriorityMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initRoutinePriorityMap GALGAS_initRoutinePriorityMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_initRoutinePriorityMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initRoutinePriorityMap GALGAS_initRoutinePriorityMap::constructor_mapWithMapToOverride (const GALGAS_initRoutinePriorityMap & inMapToOverride
                                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_initRoutinePriorityMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initRoutinePriorityMap GALGAS_initRoutinePriorityMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  GALGAS_initRoutinePriorityMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_initRoutinePriorityMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  cMapElement_initRoutinePriorityMap * p = NULL ;
  macroMyNew (p, cMapElement_initRoutinePriorityMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@initRoutinePriorityMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_initRoutinePriorityMap::setter_insertKey (GALGAS_lstring inKey,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  cMapElement_initRoutinePriorityMap * p = NULL ;
  macroMyNew (p, cMapElement_initRoutinePriorityMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "an init routine with priority %K has been already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_initRoutinePriorityMap * GALGAS_initRoutinePriorityMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                       const GALGAS_string & inKey
                                                                                                       COMMA_LOCATION_ARGS) {
  cMapElement_initRoutinePriorityMap * result = (cMapElement_initRoutinePriorityMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_initRoutinePriorityMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_initRoutinePriorityMap::cEnumerator_initRoutinePriorityMap (const GALGAS_initRoutinePriorityMap & inEnumeratedObject,
                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initRoutinePriorityMap_2D_element cEnumerator_initRoutinePriorityMap::current (LOCATION_ARGS) const {
  const cMapElement_initRoutinePriorityMap * p = (const cMapElement_initRoutinePriorityMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_initRoutinePriorityMap) ;
  return GALGAS_initRoutinePriorityMap_2D_element (p->mProperty_lkey) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_initRoutinePriorityMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @initRoutinePriorityMap type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_initRoutinePriorityMap ("initRoutinePriorityMap",
                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_initRoutinePriorityMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_initRoutinePriorityMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_initRoutinePriorityMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_initRoutinePriorityMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initRoutinePriorityMap GALGAS_initRoutinePriorityMap::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_initRoutinePriorityMap result ;
  const GALGAS_initRoutinePriorityMap * p = (const GALGAS_initRoutinePriorityMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_initRoutinePriorityMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("initRoutinePriorityMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
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
                                          const GALGAS_string & in_mGlobalVariable,
                                          const GALGAS_bigint & in_mPriority,
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
                                                              const GALGAS_string & in_mGlobalVariable,
                                                              const GALGAS_bigint & in_mPriority,
                                                              const GALGAS_allocaList & in_mAllocaList,
                                                              const GALGAS_instructionListIR & in_mInstructionListIR
                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mSelfType, in_mGlobalVariable, in_mPriority, in_mAllocaList, in_mInstructionListIR) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_initListIR::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_initListIR::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_initListIR (mObject.mProperty_mSelfType, mObject.mProperty_mGlobalVariable, mObject.mProperty_mPriority, mObject.mProperty_mAllocaList, mObject.mProperty_mInstructionListIR COMMA_HERE)) ;
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
  ioString << "mGlobalVariable" ":" ;
  mObject.mProperty_mGlobalVariable.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mPriority" ":" ;
  mObject.mProperty_mPriority.description (ioString, inIndentation) ;
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
                                                                const GALGAS_bigint & inOperand2,
                                                                const GALGAS_allocaList & inOperand3,
                                                                const GALGAS_instructionListIR & inOperand4
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_initListIR result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_initListIR (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_initListIR::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_initListIR::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                   const GALGAS_PLMType & in_mSelfType,
                                                   const GALGAS_string & in_mGlobalVariable,
                                                   const GALGAS_bigint & in_mPriority,
                                                   const GALGAS_allocaList & in_mAllocaList,
                                                   const GALGAS_instructionListIR & in_mInstructionListIR
                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_initListIR * p = NULL ;
  macroMyNew (p, cCollectionElement_initListIR (in_mSelfType,
                                                in_mGlobalVariable,
                                                in_mPriority,
                                                in_mAllocaList,
                                                in_mInstructionListIR COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_initListIR::addAssign_operation (const GALGAS_PLMType & inOperand0,
                                             const GALGAS_string & inOperand1,
                                             const GALGAS_bigint & inOperand2,
                                             const GALGAS_allocaList & inOperand3,
                                             const GALGAS_instructionListIR & inOperand4
                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_initListIR (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_initListIR::setter_insertAtIndex (const GALGAS_PLMType inOperand0,
                                              const GALGAS_string inOperand1,
                                              const GALGAS_bigint inOperand2,
                                              const GALGAS_allocaList inOperand3,
                                              const GALGAS_instructionListIR inOperand4,
                                              const GALGAS_uint inInsertionIndex,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_initListIR (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_initListIR::setter_removeAtIndex (GALGAS_PLMType & outOperand0,
                                              GALGAS_string & outOperand1,
                                              GALGAS_bigint & outOperand2,
                                              GALGAS_allocaList & outOperand3,
                                              GALGAS_instructionListIR & outOperand4,
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
      outOperand4.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_initListIR) ;
      outOperand0 = p->mObject.mProperty_mSelfType ;
      outOperand1 = p->mObject.mProperty_mGlobalVariable ;
      outOperand2 = p->mObject.mProperty_mPriority ;
      outOperand3 = p->mObject.mProperty_mAllocaList ;
      outOperand4 = p->mObject.mProperty_mInstructionListIR ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_initListIR::setter_popFirst (GALGAS_PLMType & outOperand0,
                                         GALGAS_string & outOperand1,
                                         GALGAS_bigint & outOperand2,
                                         GALGAS_allocaList & outOperand3,
                                         GALGAS_instructionListIR & outOperand4,
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
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_initListIR) ;
    outOperand0 = p->mObject.mProperty_mSelfType ;
    outOperand1 = p->mObject.mProperty_mGlobalVariable ;
    outOperand2 = p->mObject.mProperty_mPriority ;
    outOperand3 = p->mObject.mProperty_mAllocaList ;
    outOperand4 = p->mObject.mProperty_mInstructionListIR ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_initListIR::setter_popLast (GALGAS_PLMType & outOperand0,
                                        GALGAS_string & outOperand1,
                                        GALGAS_bigint & outOperand2,
                                        GALGAS_allocaList & outOperand3,
                                        GALGAS_instructionListIR & outOperand4,
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
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_initListIR) ;
    outOperand0 = p->mObject.mProperty_mSelfType ;
    outOperand1 = p->mObject.mProperty_mGlobalVariable ;
    outOperand2 = p->mObject.mProperty_mPriority ;
    outOperand3 = p->mObject.mProperty_mAllocaList ;
    outOperand4 = p->mObject.mProperty_mInstructionListIR ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_initListIR::method_first (GALGAS_PLMType & outOperand0,
                                      GALGAS_string & outOperand1,
                                      GALGAS_bigint & outOperand2,
                                      GALGAS_allocaList & outOperand3,
                                      GALGAS_instructionListIR & outOperand4,
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
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_initListIR) ;
    outOperand0 = p->mObject.mProperty_mSelfType ;
    outOperand1 = p->mObject.mProperty_mGlobalVariable ;
    outOperand2 = p->mObject.mProperty_mPriority ;
    outOperand3 = p->mObject.mProperty_mAllocaList ;
    outOperand4 = p->mObject.mProperty_mInstructionListIR ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_initListIR::method_last (GALGAS_PLMType & outOperand0,
                                     GALGAS_string & outOperand1,
                                     GALGAS_bigint & outOperand2,
                                     GALGAS_allocaList & outOperand3,
                                     GALGAS_instructionListIR & outOperand4,
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
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_initListIR) ;
    outOperand0 = p->mObject.mProperty_mSelfType ;
    outOperand1 = p->mObject.mProperty_mGlobalVariable ;
    outOperand2 = p->mObject.mProperty_mPriority ;
    outOperand3 = p->mObject.mProperty_mAllocaList ;
    outOperand4 = p->mObject.mProperty_mInstructionListIR ;
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

GALGAS_string GALGAS_initListIR::getter_mGlobalVariableAtIndex (const GALGAS_uint & inIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_initListIR * p = (cCollectionElement_initListIR *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_initListIR) ;
    result = p->mObject.mProperty_mGlobalVariable ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint GALGAS_initListIR::getter_mPriorityAtIndex (const GALGAS_uint & inIndex,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_initListIR * p = (cCollectionElement_initListIR *) attributes.ptr () ;
  GALGAS_bigint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_initListIR) ;
    result = p->mObject.mProperty_mPriority ;
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

GALGAS_string cEnumerator_initListIR::current_mGlobalVariable (LOCATION_ARGS) const {
  const cCollectionElement_initListIR * p = (const cCollectionElement_initListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_initListIR) ;
  return p->mObject.mProperty_mGlobalVariable ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint cEnumerator_initListIR::current_mPriority (LOCATION_ARGS) const {
  const cCollectionElement_initListIR * p = (const cCollectionElement_initListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_initListIR) ;
  return p->mObject.mProperty_mPriority ;
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
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("Init"), inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 193)), inCompiler  COMMA_SOURCE_FILE ("declaration-init.galgas", 193)) ;
  const GALGAS_initListIR temp_0 = inObject ;
  cEnumerator_initListIR enumerator_7666 (temp_0, kENUMERATION_UP) ;
  while (enumerator_7666.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal void @init.").add_operation (enumerator_7666.current (HERE).getter_mPriority (HERE).getter_string (SOURCE_FILE ("declaration-init.galgas", 195)), inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 195)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 195)), inCompiler  COMMA_SOURCE_FILE ("declaration-init.galgas", 195)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, enumerator_7666.current (HERE).getter_mSelfType (HERE).getter_mKind (SOURCE_FILE ("declaration-init.galgas", 196)).objectCompare (GALGAS_typeKind::constructor_void (SOURCE_FILE ("declaration-init.galgas", 196)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_7666.current (HERE).getter_mSelfType (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 197)).add_operation (GALGAS_string (" * %self"), inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 197)), inCompiler  COMMA_SOURCE_FILE ("declaration-init.galgas", 197)) ;
    }
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 199)), inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 199)).add_operation (GALGAS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 199)), inCompiler  COMMA_SOURCE_FILE ("declaration-init.galgas", 199)) ;
    cEnumerator_allocaList enumerator_7965 (enumerator_7666.current (HERE).getter_mAllocaList (HERE), kENUMERATION_UP) ;
    while (enumerator_7965.hasCurrentObject ()) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (enumerator_7965.current_mVarLLVMName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 201)).add_operation (GALGAS_string (" = alloca "), inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 201)).add_operation (enumerator_7965.current_mLLVMTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 201)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 201)), inCompiler  COMMA_SOURCE_FILE ("declaration-init.galgas", 201)) ;
      enumerator_7965.gotoNextObject () ;
    }
    extensionMethod_instructionListLLVMCode (enumerator_7666.current (HERE).getter_mInstructionListIR (HERE), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 203)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-init.galgas", 204)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
      "\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-init.galgas", 205)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(function_llvmSeparatorLine (inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 206)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 206)), inCompiler  COMMA_SOURCE_FILE ("declaration-init.galgas", 206)) ;
    enumerator_7666.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal void @init ()").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 208)), inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 208)).add_operation (GALGAS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 208)), inCompiler  COMMA_SOURCE_FILE ("declaration-init.galgas", 208)) ;
  const GALGAS_initListIR temp_2 = inObject ;
  cEnumerator_initListIR enumerator_8369 (temp_2, kENUMERATION_UP) ;
  while (enumerator_8369.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @init.").add_operation (enumerator_8369.current (HERE).getter_mPriority (HERE).getter_string (SOURCE_FILE ("declaration-init.galgas", 210)), inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 210)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 210)), inCompiler  COMMA_SOURCE_FILE ("declaration-init.galgas", 210)) ;
    const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, enumerator_8369.current (HERE).getter_mSelfType (HERE).getter_mKind (SOURCE_FILE ("declaration-init.galgas", 211)).objectCompare (GALGAS_typeKind::constructor_void (SOURCE_FILE ("declaration-init.galgas", 211)))).boolEnum () ;
    if (kBoolTrue == test_3) {
      ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_8369.current (HERE).getter_mSelfType (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 212)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 212)).add_operation (function_llvmNameForGlobalVariable (enumerator_8369.current (HERE).getter_mGlobalVariable (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 212)), inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 212)), inCompiler  COMMA_SOURCE_FILE ("declaration-init.galgas", 212)) ;
    }
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-init.galgas", 214)) ;
    enumerator_8369.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-init.galgas", 216)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-init.galgas", 217)) ;
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
  cEnumerator_functionDeclarationListAST enumerator_6214 (temp_0, kENUMERATION_UP) ;
  while (enumerator_6214.hasCurrentObject ()) {
    cEnumerator_routineFormalArgumentListAST enumerator_6287 (enumerator_6214.current_mFunctionFormalArgumentList (HERE), kENUMERATION_UP) ;
    while (enumerator_6287.hasCurrentObject ()) {
      GALGAS_lstring var_typeName_6309 = function_llvmRegularTypeMangledNameFromName (enumerator_6287.current_mFormalArgumentTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 203)) ;
      {
      ioArgument_ioGraph.setter_noteNode (var_typeName_6309 COMMA_SOURCE_FILE ("declaration-func.galgas", 204)) ;
      }
      enumerator_6287.gotoNextObject () ;
    }
    extensionMethod_noteInstructionListTypesInPrecedenceGraph (enumerator_6214.current_mFunctionInstructionList (HERE), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 206)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, enumerator_6214.current_mFunctionReturnTypeName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_lstring var_typeName_6568 = function_llvmRegularTypeMangledNameFromName (enumerator_6214.current_mFunctionReturnTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 208)) ;
      {
      ioArgument_ioGraph.setter_noteNode (var_typeName_6568 COMMA_SOURCE_FILE ("declaration-func.galgas", 209)) ;
      }
    }
    enumerator_6214.gotoNextObject () ;
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
  cEnumerator_functionDeclarationListAST enumerator_7216 (temp_0, kENUMERATION_UP) ;
  while (enumerator_7216.hasCurrentObject ()) {
    GALGAS_routineTypedSignature var_signature_7332 ;
    {
    routine_routineSignature (ioArgument_ioContext.mProperty_mTypeMap, enumerator_7216.current (HERE).getter_mFunctionFormalArgumentList (HERE), var_signature_7332, inCompiler  COMMA_SOURCE_FILE ("declaration-func.galgas", 224)) ;
    }
    GALGAS_unifiedTypeMap_2D_proxy var_returnTypeProxy_7473 ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeOptionalProxy (ioArgument_ioContext.mProperty_mTypeMap, enumerator_7216.current (HERE).getter_mFunctionReturnTypeName (HERE), var_returnTypeProxy_7473 COMMA_SOURCE_FILE ("declaration-func.galgas", 226)) ;
    }
    GALGAS_bool var_globalFunction_7515 = GALGAS_bool (false) ;
    GALGAS_bool var_canMutateProperties_7551 = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_7614 (enumerator_7216.current (HERE).getter_mFunctionAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_7614.hasCurrentObject ()) {
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_7614.current_mValue (HERE).getter_string (HERE).objectCompare (function_exportedAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 231)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        var_globalFunction_7515 = GALGAS_bool (true) ;
      }else if (kBoolFalse == test_1) {
        const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_7614.current_mValue (HERE).getter_string (HERE).objectCompare (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 233)))).boolEnum () ;
        if (kBoolTrue == test_2) {
          var_canMutateProperties_7551 = GALGAS_bool (true) ;
        }
      }
      enumerator_7614.gotoNextObject () ;
    }
    GALGAS_bool var_canAccessProperties_7841 = GALGAS_bool (kIsNotEqual, enumerator_7216.current (HERE).getter_mMode (HERE).objectCompare (GALGAS_mode::constructor_userMode (SOURCE_FILE ("declaration-func.galgas", 237)))) ;
    GALGAS_lstring var_routineMangledName_7926 = function_routineMangledNameFromAST (constinArgument_inSelfTypeName, enumerator_7216.current (HERE).getter_mFunctionName (HERE), enumerator_7216.current (HERE).getter_mFunctionFormalArgumentList (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 239)) ;
    {
    extensionSetter_insertRoutine (ioArgument_ioContext.mProperty_mRoutineMapForContext, enumerator_7216.current (HERE).getter_mFunctionName (HERE), extensionGetter_routineSignature (enumerator_7216.current (HERE).getter_mFunctionFormalArgumentList (HERE), enumerator_7216.current (HERE).getter_mFunctionName (HERE).getter_location (SOURCE_FILE ("declaration-func.galgas", 247)), inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 247)), var_routineMangledName_7926, GALGAS_routineDescriptor::constructor_new (enumerator_7216.current (HERE).getter_mPublicFunction (HERE), var_globalFunction_7515, GALGAS_routineKind::constructor_function (enumerator_7216.current (HERE).getter_mMode (HERE)  COMMA_SOURCE_FILE ("declaration-func.galgas", 252)), var_signature_7332, var_returnTypeProxy_7473, var_canMutateProperties_7551, var_canAccessProperties_7841  COMMA_SOURCE_FILE ("declaration-func.galgas", 249)), inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 245)) ;
    }
    enumerator_7216.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Extension method '@functionDeclarationListAST functionSemanticAnalysis'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_functionSemanticAnalysis (const GALGAS_functionDeclarationListAST inObject,
                                               GALGAS_PLMType inArgument_inReceiverType,
                                               const GALGAS_semanticContext constinArgument_inSemanticContext,
                                               GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                               GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_functionDeclarationListAST temp_0 = inObject ;
  cEnumerator_functionDeclarationListAST enumerator_9221 (temp_0, kENUMERATION_UP) ;
  while (enumerator_9221.hasCurrentObject ()) {
    GALGAS_bool var_warnIfUnused_9245 = GALGAS_bool (true) ;
    GALGAS_bool var_globalProcedure_9276 = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_9340 (enumerator_9221.current (HERE).getter_mFunctionAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_9340.hasCurrentObject ()) {
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_9340.current_mValue (HERE).getter_string (HERE).objectCompare (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 276)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        const enumGalgasBool test_2 = var_warnIfUnused_9245.operator_not (SOURCE_FILE ("declaration-func.galgas", 277)).boolEnum () ;
        if (kBoolTrue == test_2) {
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (enumerator_9340.current_mValue (HERE).getter_location (SOURCE_FILE ("declaration-func.galgas", 278)), GALGAS_string ("duplicated @").add_operation (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 278)), inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 278)).add_operation (GALGAS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 278)), fixItArray3  COMMA_SOURCE_FILE ("declaration-func.galgas", 278)) ;
        }
        var_warnIfUnused_9245 = GALGAS_bool (false) ;
      }else if (kBoolFalse == test_1) {
        const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, enumerator_9340.current_mValue (HERE).getter_string (HERE).objectCompare (function_exportedAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 281)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          const enumGalgasBool test_5 = var_globalProcedure_9276.boolEnum () ;
          if (kBoolTrue == test_5) {
            TC_Array <C_FixItDescription> fixItArray6 ;
            inCompiler->emitSemanticError (enumerator_9340.current_mValue (HERE).getter_location (SOURCE_FILE ("declaration-func.galgas", 283)), GALGAS_string ("duplicated @").add_operation (function_exportedAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 283)), inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 283)).add_operation (GALGAS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 283)), fixItArray6  COMMA_SOURCE_FILE ("declaration-func.galgas", 283)) ;
          }
          var_globalProcedure_9276 = GALGAS_bool (true) ;
        }else if (kBoolFalse == test_4) {
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (enumerator_9340.current_mValue (HERE).getter_location (SOURCE_FILE ("declaration-func.galgas", 287)), GALGAS_string ("unknown attribute; available attributes are @").add_operation (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 288)), inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 287)).add_operation (GALGAS_string (", @"), inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 288)).add_operation (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 288)), inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 288)).add_operation (GALGAS_string (", @"), inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 288)).add_operation (function_exportedAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 288)), inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 288)), fixItArray7  COMMA_SOURCE_FILE ("declaration-func.galgas", 287)) ;
        }
      }
      enumerator_9340.gotoNextObject () ;
    }
    {
    routine_routineSemanticAnalysis (inArgument_inReceiverType, GALGAS_routineKind::constructor_function (enumerator_9221.current (HERE).getter_mMode (HERE)  COMMA_SOURCE_FILE ("declaration-func.galgas", 293)), enumerator_9221.current (HERE).getter_mMode (HERE), enumerator_9221.current (HERE).getter_mFunctionName (HERE), enumerator_9221.current (HERE).getter_mFunctionFormalArgumentList (HERE), enumerator_9221.current (HERE).getter_mFunctionReturnTypeName (HERE), enumerator_9221.current (HERE).getter_mFunctionInstructionList (HERE), enumerator_9221.current (HERE).getter_mEndOfFunctionDeclaration (HERE), GALGAS_bool (true), GALGAS_bool (true), var_warnIfUnused_9245, var_globalProcedure_9276, constinArgument_inSemanticContext, ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct, inCompiler  COMMA_SOURCE_FILE ("declaration-func.galgas", 291)) ;
    }
    enumerator_9221.gotoNextObject () ;
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
                                                                                                                const GALGAS_routineFormalArgumentListAST & in_mFormalArgumentList,
                                                                                                                const GALGAS_location & in_mEndOfProcLocation
                                                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mName, in_mExecutionMode, in_mIsExported, in_mFormalArgumentList, in_mEndOfProcLocation) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_requiredProcedureDeclarationListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_requiredProcedureDeclarationListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_requiredProcedureDeclarationListAST (mObject.mProperty_mName, mObject.mProperty_mExecutionMode, mObject.mProperty_mIsExported, mObject.mProperty_mFormalArgumentList, mObject.mProperty_mEndOfProcLocation COMMA_HERE)) ;
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
                                                                                                                  const GALGAS_routineFormalArgumentListAST & inOperand3,
                                                                                                                  const GALGAS_location & inOperand4
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_requiredProcedureDeclarationListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_requiredProcedureDeclarationListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_requiredProcedureDeclarationListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_requiredProcedureDeclarationListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                            const GALGAS_lstring & in_mName,
                                                                            const GALGAS_mode & in_mExecutionMode,
                                                                            const GALGAS_bool & in_mIsExported,
                                                                            const GALGAS_routineFormalArgumentListAST & in_mFormalArgumentList,
                                                                            const GALGAS_location & in_mEndOfProcLocation
                                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_requiredProcedureDeclarationListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_requiredProcedureDeclarationListAST (in_mName,
                                                                         in_mExecutionMode,
                                                                         in_mIsExported,
                                                                         in_mFormalArgumentList,
                                                                         in_mEndOfProcLocation COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_requiredProcedureDeclarationListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                                      const GALGAS_mode & inOperand1,
                                                                      const GALGAS_bool & inOperand2,
                                                                      const GALGAS_routineFormalArgumentListAST & inOperand3,
                                                                      const GALGAS_location & inOperand4
                                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_requiredProcedureDeclarationListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
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
                                                                       const GALGAS_routineFormalArgumentListAST inOperand3,
                                                                       const GALGAS_location inOperand4,
                                                                       const GALGAS_uint inInsertionIndex,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_requiredProcedureDeclarationListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
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
                                                                       GALGAS_routineFormalArgumentListAST & outOperand3,
                                                                       GALGAS_location & outOperand4,
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
    }else{
      macroValidSharedObject (p, cCollectionElement_requiredProcedureDeclarationListAST) ;
      outOperand0 = p->mObject.mProperty_mName ;
      outOperand1 = p->mObject.mProperty_mExecutionMode ;
      outOperand2 = p->mObject.mProperty_mIsExported ;
      outOperand3 = p->mObject.mProperty_mFormalArgumentList ;
      outOperand4 = p->mObject.mProperty_mEndOfProcLocation ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_requiredProcedureDeclarationListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                                  GALGAS_mode & outOperand1,
                                                                  GALGAS_bool & outOperand2,
                                                                  GALGAS_routineFormalArgumentListAST & outOperand3,
                                                                  GALGAS_location & outOperand4,
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
  }else{
    macroValidSharedObject (p, cCollectionElement_requiredProcedureDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mName ;
    outOperand1 = p->mObject.mProperty_mExecutionMode ;
    outOperand2 = p->mObject.mProperty_mIsExported ;
    outOperand3 = p->mObject.mProperty_mFormalArgumentList ;
    outOperand4 = p->mObject.mProperty_mEndOfProcLocation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_requiredProcedureDeclarationListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                                 GALGAS_mode & outOperand1,
                                                                 GALGAS_bool & outOperand2,
                                                                 GALGAS_routineFormalArgumentListAST & outOperand3,
                                                                 GALGAS_location & outOperand4,
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
  }else{
    macroValidSharedObject (p, cCollectionElement_requiredProcedureDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mName ;
    outOperand1 = p->mObject.mProperty_mExecutionMode ;
    outOperand2 = p->mObject.mProperty_mIsExported ;
    outOperand3 = p->mObject.mProperty_mFormalArgumentList ;
    outOperand4 = p->mObject.mProperty_mEndOfProcLocation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_requiredProcedureDeclarationListAST::method_first (GALGAS_lstring & outOperand0,
                                                               GALGAS_mode & outOperand1,
                                                               GALGAS_bool & outOperand2,
                                                               GALGAS_routineFormalArgumentListAST & outOperand3,
                                                               GALGAS_location & outOperand4,
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
  }else{
    macroValidSharedObject (p, cCollectionElement_requiredProcedureDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mName ;
    outOperand1 = p->mObject.mProperty_mExecutionMode ;
    outOperand2 = p->mObject.mProperty_mIsExported ;
    outOperand3 = p->mObject.mProperty_mFormalArgumentList ;
    outOperand4 = p->mObject.mProperty_mEndOfProcLocation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_requiredProcedureDeclarationListAST::method_last (GALGAS_lstring & outOperand0,
                                                              GALGAS_mode & outOperand1,
                                                              GALGAS_bool & outOperand2,
                                                              GALGAS_routineFormalArgumentListAST & outOperand3,
                                                              GALGAS_location & outOperand4,
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
  }else{
    macroValidSharedObject (p, cCollectionElement_requiredProcedureDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mName ;
    outOperand1 = p->mObject.mProperty_mExecutionMode ;
    outOperand2 = p->mObject.mProperty_mIsExported ;
    outOperand3 = p->mObject.mProperty_mFormalArgumentList ;
    outOperand4 = p->mObject.mProperty_mEndOfProcLocation ;
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
                                                                                                            const GALGAS_routineFormalArgumentListAST & in_mProcFormalArgumentList,
                                                                                                            const GALGAS_lstring & in_mReturnTypeName,
                                                                                                            const GALGAS_lstring & in_mRoutineNameForGeneration,
                                                                                                            const GALGAS_location & in_mEndOfProcLocation
                                                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mExternProcedureName, in_mMode, in_mProcFormalArgumentList, in_mReturnTypeName, in_mRoutineNameForGeneration, in_mEndOfProcLocation) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_externProcedureDeclarationListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_externProcedureDeclarationListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_externProcedureDeclarationListAST (mObject.mProperty_mExternProcedureName, mObject.mProperty_mMode, mObject.mProperty_mProcFormalArgumentList, mObject.mProperty_mReturnTypeName, mObject.mProperty_mRoutineNameForGeneration, mObject.mProperty_mEndOfProcLocation COMMA_HERE)) ;
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
                                                                                                              const GALGAS_routineFormalArgumentListAST & inOperand2,
                                                                                                              const GALGAS_lstring & inOperand3,
                                                                                                              const GALGAS_lstring & inOperand4,
                                                                                                              const GALGAS_location & inOperand5
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_externProcedureDeclarationListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid ()) {
    result = GALGAS_externProcedureDeclarationListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_externProcedureDeclarationListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externProcedureDeclarationListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                          const GALGAS_lstring & in_mExternProcedureName,
                                                                          const GALGAS_mode & in_mMode,
                                                                          const GALGAS_routineFormalArgumentListAST & in_mProcFormalArgumentList,
                                                                          const GALGAS_lstring & in_mReturnTypeName,
                                                                          const GALGAS_lstring & in_mRoutineNameForGeneration,
                                                                          const GALGAS_location & in_mEndOfProcLocation
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_externProcedureDeclarationListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_externProcedureDeclarationListAST (in_mExternProcedureName,
                                                                       in_mMode,
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
                                                                    const GALGAS_routineFormalArgumentListAST & inOperand2,
                                                                    const GALGAS_lstring & inOperand3,
                                                                    const GALGAS_lstring & inOperand4,
                                                                    const GALGAS_location & inOperand5
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_externProcedureDeclarationListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externProcedureDeclarationListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                     const GALGAS_mode inOperand1,
                                                                     const GALGAS_routineFormalArgumentListAST inOperand2,
                                                                     const GALGAS_lstring inOperand3,
                                                                     const GALGAS_lstring inOperand4,
                                                                     const GALGAS_location inOperand5,
                                                                     const GALGAS_uint inInsertionIndex,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_externProcedureDeclarationListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externProcedureDeclarationListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                     GALGAS_mode & outOperand1,
                                                                     GALGAS_routineFormalArgumentListAST & outOperand2,
                                                                     GALGAS_lstring & outOperand3,
                                                                     GALGAS_lstring & outOperand4,
                                                                     GALGAS_location & outOperand5,
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
    }else{
      macroValidSharedObject (p, cCollectionElement_externProcedureDeclarationListAST) ;
      outOperand0 = p->mObject.mProperty_mExternProcedureName ;
      outOperand1 = p->mObject.mProperty_mMode ;
      outOperand2 = p->mObject.mProperty_mProcFormalArgumentList ;
      outOperand3 = p->mObject.mProperty_mReturnTypeName ;
      outOperand4 = p->mObject.mProperty_mRoutineNameForGeneration ;
      outOperand5 = p->mObject.mProperty_mEndOfProcLocation ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externProcedureDeclarationListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                                GALGAS_mode & outOperand1,
                                                                GALGAS_routineFormalArgumentListAST & outOperand2,
                                                                GALGAS_lstring & outOperand3,
                                                                GALGAS_lstring & outOperand4,
                                                                GALGAS_location & outOperand5,
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
  }else{
    macroValidSharedObject (p, cCollectionElement_externProcedureDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mExternProcedureName ;
    outOperand1 = p->mObject.mProperty_mMode ;
    outOperand2 = p->mObject.mProperty_mProcFormalArgumentList ;
    outOperand3 = p->mObject.mProperty_mReturnTypeName ;
    outOperand4 = p->mObject.mProperty_mRoutineNameForGeneration ;
    outOperand5 = p->mObject.mProperty_mEndOfProcLocation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externProcedureDeclarationListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                               GALGAS_mode & outOperand1,
                                                               GALGAS_routineFormalArgumentListAST & outOperand2,
                                                               GALGAS_lstring & outOperand3,
                                                               GALGAS_lstring & outOperand4,
                                                               GALGAS_location & outOperand5,
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
  }else{
    macroValidSharedObject (p, cCollectionElement_externProcedureDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mExternProcedureName ;
    outOperand1 = p->mObject.mProperty_mMode ;
    outOperand2 = p->mObject.mProperty_mProcFormalArgumentList ;
    outOperand3 = p->mObject.mProperty_mReturnTypeName ;
    outOperand4 = p->mObject.mProperty_mRoutineNameForGeneration ;
    outOperand5 = p->mObject.mProperty_mEndOfProcLocation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externProcedureDeclarationListAST::method_first (GALGAS_lstring & outOperand0,
                                                             GALGAS_mode & outOperand1,
                                                             GALGAS_routineFormalArgumentListAST & outOperand2,
                                                             GALGAS_lstring & outOperand3,
                                                             GALGAS_lstring & outOperand4,
                                                             GALGAS_location & outOperand5,
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
  }else{
    macroValidSharedObject (p, cCollectionElement_externProcedureDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mExternProcedureName ;
    outOperand1 = p->mObject.mProperty_mMode ;
    outOperand2 = p->mObject.mProperty_mProcFormalArgumentList ;
    outOperand3 = p->mObject.mProperty_mReturnTypeName ;
    outOperand4 = p->mObject.mProperty_mRoutineNameForGeneration ;
    outOperand5 = p->mObject.mProperty_mEndOfProcLocation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externProcedureDeclarationListAST::method_last (GALGAS_lstring & outOperand0,
                                                            GALGAS_mode & outOperand1,
                                                            GALGAS_routineFormalArgumentListAST & outOperand2,
                                                            GALGAS_lstring & outOperand3,
                                                            GALGAS_lstring & outOperand4,
                                                            GALGAS_location & outOperand5,
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
  }else{
    macroValidSharedObject (p, cCollectionElement_externProcedureDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mExternProcedureName ;
    outOperand1 = p->mObject.mProperty_mMode ;
    outOperand2 = p->mObject.mProperty_mProcFormalArgumentList ;
    outOperand3 = p->mObject.mProperty_mReturnTypeName ;
    outOperand4 = p->mObject.mProperty_mRoutineNameForGeneration ;
    outOperand5 = p->mObject.mProperty_mEndOfProcLocation ;
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
  cEnumerator_externProcedureDeclarationListAST enumerator_2229 (temp_0, kENUMERATION_UP) ;
  while (enumerator_2229.hasCurrentObject ()) {
    cEnumerator_routineFormalArgumentListAST enumerator_2298 (enumerator_2229.current_mProcFormalArgumentList (HERE), kENUMERATION_UP) ;
    while (enumerator_2298.hasCurrentObject ()) {
      GALGAS_lstring var_typeName_2320 = function_llvmRegularTypeMangledNameFromName (enumerator_2298.current_mFormalArgumentTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 52)) ;
      {
      ioArgument_ioGraph.setter_noteNode (var_typeName_2320 COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 53)) ;
      }
      enumerator_2298.gotoNextObject () ;
    }
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, enumerator_2229.current_mReturnTypeName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_lstring var_typeName_2488 = function_llvmRegularTypeMangledNameFromName (enumerator_2229.current_mReturnTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 56)) ;
      {
      ioArgument_ioGraph.setter_noteNode (var_typeName_2488 COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 57)) ;
      }
    }
    enumerator_2229.gotoNextObject () ;
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
  cEnumerator_externProcedureDeclarationListAST enumerator_3100 (temp_0, kENUMERATION_UP) ;
  while (enumerator_3100.hasCurrentObject ()) {
    extensionMethod_enterExternProcInContext (enumerator_3100.current (HERE), ioArgument_ioContext, inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 70)) ;
    enumerator_3100.gotoNextObject () ;
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
  cEnumerator_externProcedureDeclarationListAST enumerator_4676 (temp_0, kENUMERATION_UP) ;
  while (enumerator_4676.hasCurrentObject ()) {
    extensionMethod_externProcedureSemanticAnalysis (enumerator_4676.current (HERE), constinArgument_inContext, ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 106)) ;
    enumerator_4676.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*

cMapElement_externProcedureMapIR::cMapElement_externProcedureMapIR (const GALGAS_lstring & inKey,
                                                                    const GALGAS_routineFormalArgumentListForGeneration & in_mFormalArgumentListForGeneration,
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
                                                       const GALGAS_routineFormalArgumentListForGeneration & inArgument0,
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
                                                    GALGAS_routineFormalArgumentListForGeneration inArgument0,
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

GALGAS_routineFormalArgumentListForGeneration GALGAS_externProcedureMapIR::getter_mFormalArgumentListForGenerationForKey (const GALGAS_string & inKey,
                                                                                                                          C_Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_externProcedureMapIR * p = (const cMapElement_externProcedureMapIR *) attributes ;
  GALGAS_routineFormalArgumentListForGeneration result ;
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

void GALGAS_externProcedureMapIR::setter_setMFormalArgumentListForGenerationForKey (GALGAS_routineFormalArgumentListForGeneration inAttributeValue,
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

GALGAS_routineFormalArgumentListForGeneration cEnumerator_externProcedureMapIR::current_mFormalArgumentListForGeneration (LOCATION_ARGS) const {
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
  const GALGAS_externProcedureMapIR temp_0 = inObject ;
  cEnumerator_externProcedureMapIR enumerator_7213 (temp_0, kENUMERATION_UP) ;
  while (enumerator_7213.hasCurrentObject ()) {
    extensionMethod_llvmPrototypeGeneration (enumerator_7213.current (HERE), ioArgument_ioLLVMcode, inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 178)) ;
    enumerator_7213.gotoNextObject () ;
  }
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
                                     C_Compiler * /* inCompiler */
                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_isrDeclarationListAST temp_0 = inObject ;
  cEnumerator_isrDeclarationListAST enumerator_2110 (temp_0, kENUMERATION_UP) ;
  while (enumerator_2110.hasCurrentObject ()) {
    ioArgument_ioSemanticContext.mProperty_mDefinedInterruptSet.addAssign_operation (enumerator_2110.current (HERE).getter_mISRName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("declaration-isr.galgas", 56)) ;
    enumerator_2110.gotoNextObject () ;
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
  cEnumerator_isrDeclarationListAST enumerator_2798 (temp_0, kENUMERATION_UP) ;
  while (enumerator_2798.hasCurrentObject ()) {
    GALGAS_lstring var_routineNameForInvocationGraph_2863 = function_interruptNameForInvocationGraph (enumerator_2798.current (HERE).getter_mISRName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 71)) ;
    const enumGalgasBool test_1 = ioArgument_ioTemporaries.getter_mSubprogramInvocationGraph (HERE).getter_isNodeDefined (var_routineNameForInvocationGraph_2863.getter_string (HERE) COMMA_SOURCE_FILE ("declaration-isr.galgas", 72)).operator_not (SOURCE_FILE ("declaration-isr.galgas", 72)).boolEnum () ;
    if (kBoolTrue == test_1) {
      {
      ioArgument_ioTemporaries.mProperty_mSubprogramInvocationGraph.setter_addNode (var_routineNameForInvocationGraph_2863, var_routineNameForInvocationGraph_2863, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 73)) ;
      }
    }
    GALGAS_universalValuedObjectMapForContext var_universalMap_3399 ;
    {
    routine_initialVariableMap (constinArgument_inSemanticContext, enumerator_2798.current (HERE).getter_mMode (HERE), GALGAS_bool (false), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-isr.galgas", 83)), var_universalMap_3399, inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 79)) ;
    }
    GALGAS_PLMType temp_2 ;
    const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_2798.current (HERE).getter_mModuleName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_3) {
      temp_2 = function_voidType (inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 88)) ;
    }else if (kBoolFalse == test_3) {
      temp_2 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), function_moduleMangledNameFromModuleName (enumerator_2798.current (HERE).getter_mModuleName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 90)), inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 90)).getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 90)) ;
    }
    GALGAS_PLMType var_selfType_3448 = temp_2 ;
    GALGAS_allocaList var_allocaList_3708 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("declaration-isr.galgas", 93)) ;
    GALGAS_instructionListIR var_instructionGenerationList_3762 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("declaration-isr.galgas", 94)) ;
    extensionMethod_analyzeRoutineInstructionList (enumerator_2798.current (HERE).getter_mISRInstructionList (HERE), var_selfType_3448, GALGAS_bool (true), GALGAS_bool (true), var_routineNameForInvocationGraph_2863, constinArgument_inSemanticContext, enumerator_2798.current (HERE).getter_mMode (HERE), ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct.mProperty_mStaticStringMap, var_universalMap_3399, var_allocaList_3708, var_instructionGenerationList_3762, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 95)) ;
    callExtensionMethod_checkLocalVariableFinalState ((const cPtr_universalValuedObjectMapForContext *) var_universalMap_3399.ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 110)) ;
    GALGAS_interruptionPanicCode joker_4547 ; // Joker input parameter
    constinArgument_inSemanticContext.getter_mAvailableInterruptMap (HERE).method_searchKey (enumerator_2798.current (HERE).getter_mISRName (HERE), joker_4547, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 114)) ;
    {
    ioArgument_ioIntermediateCodeStruct.mProperty_mInterruptMapIR.setter_insertKey (enumerator_2798.current (HERE).getter_mISRName (HERE), var_selfType_3448, enumerator_2798.current (HERE).getter_mModuleName (HERE).getter_string (SOURCE_FILE ("declaration-isr.galgas", 118)), var_allocaList_3708, var_instructionGenerationList_3762, enumerator_2798.current (HERE).getter_mMode (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 115)) ;
    }
    enumerator_2798.gotoNextObject () ;
  }
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
  GALGAS_stringset var_definedInterrupts_5846 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("declaration-isr.galgas", 147)) ;
  const GALGAS_interruptMapIR temp_0 = inObject ;
  cEnumerator_interruptMapIR enumerator_5875 (temp_0, kENUMERATION_UP) ;
  while (enumerator_5875.hasCurrentObject ()) {
    var_definedInterrupts_5846.addAssign_operation (enumerator_5875.current (HERE).getter_lkey (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("declaration-isr.galgas", 149)) ;
    GALGAS_string temp_1 ;
    const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_5875.current (HERE).getter_mMode (HERE).objectCompare (GALGAS_mode::constructor_serviceMode (SOURCE_FILE ("declaration-isr.galgas", 150)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      temp_1 = function_llvmNameForServiceInterrupt (enumerator_5875.current (HERE).getter_lkey (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 151)).getter_string (HERE) ;
    }else if (kBoolFalse == test_2) {
      temp_1 = function_llvmNameForSectionOrSafeInterrupt (enumerator_5875.current (HERE).getter_lkey (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 153)) ;
    }
    GALGAS_string var_interruptImplementationName_5962 = temp_1 ;
    ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (var_interruptImplementationName_5962, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 155)), inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 155)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define void @").add_operation (var_interruptImplementationName_5962, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 156)).add_operation (GALGAS_string (" ()"), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 156)).add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 156)), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 156)).add_operation (GALGAS_string (" {\n"), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 156)), inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 156)) ;
    cEnumerator_allocaList enumerator_6390 (enumerator_5875.current (HERE).getter_mAllocaList (HERE), kENUMERATION_UP) ;
    while (enumerator_6390.hasCurrentObject ()) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (enumerator_6390.current_mVarLLVMName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 159)).add_operation (GALGAS_string (" = alloca "), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 159)).add_operation (enumerator_6390.current_mLLVMTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 159)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 159)), inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 159)) ;
      enumerator_6390.gotoNextObject () ;
    }
    const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, enumerator_5875.current (HERE).getter_mSelfType (HERE).getter_mKind (SOURCE_FILE ("declaration-isr.galgas", 162)).objectCompare (GALGAS_typeKind::constructor_void (SOURCE_FILE ("declaration-isr.galgas", 162)))).boolEnum () ;
    if (kBoolTrue == test_3) {
      GALGAS_string var_varName_6560 = function_llvmNameForGlobalVariable (enumerator_5875.current (HERE).getter_mGlobalVariableName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 163)) ;
      GALGAS_string var_typeName_6640 = extensionGetter_llvmTypeName (enumerator_5875.current (HERE).getter_mSelfType (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 164)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %self = getelementptr inbounds ").add_operation (var_typeName_6640, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 165)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 165)).add_operation (var_typeName_6640, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 165)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 165)).add_operation (var_varName_6560, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 165)), inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 165)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", i32 0 ; Perform %self = @").add_operation (var_varName_6560, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 166)).add_operation (GALGAS_string (" \n"), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 166)), inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 166)) ;
    }
    extensionMethod_instructionListLLVMCode (enumerator_5875.current (HERE).getter_mInstructionGenerationList (HERE), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 169)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 171)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
      "\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 172)) ;
    const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, enumerator_5875.current (HERE).getter_mMode (HERE).objectCompare (GALGAS_mode::constructor_serviceMode (SOURCE_FILE ("declaration-isr.galgas", 174)))).boolEnum () ;
    if (kBoolTrue == test_4) {
      GALGAS_string var_interruptHandlerName_7191 = function_llvmNameForServiceInterrupt (enumerator_5875.current (HERE).getter_lkey (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 175)).getter_string (HERE) ;
      GALGAS_string var_isrName_7263 = function_llvmNameForSectionOrSafeInterrupt (enumerator_5875.current (HERE).getter_lkey (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 176)) ;
      GALGAS_string var_s_31__7336 = constinArgument_inXTRInterruptHandlerString.getter_stringByReplacingStringByString (GALGAS_string ("!ISR!"), var_isrName_7263, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 177)) ;
      GALGAS_string var_s_32__7430 = var_s_31__7336.getter_stringByReplacingStringByString (GALGAS_string ("!HANDLER!"), var_interruptHandlerName_7191, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 178)) ;
      ioArgument_ioAScode.plusAssign_operation(var_s_32__7430, inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 179)) ;
    }
    enumerator_5875.gotoNextObject () ;
  }
  cEnumerator_availableInterruptMap enumerator_7659 (constinArgument_inGenerationContext.getter_mAvailableInterruptMap (HERE), kENUMERATION_UP) ;
  while (enumerator_7659.hasCurrentObject ()) {
    const enumGalgasBool test_5 = var_definedInterrupts_5846.getter_hasKey (enumerator_7659.current_lkey (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("declaration-isr.galgas", 184)).operator_not (SOURCE_FILE ("declaration-isr.galgas", 184)).boolEnum () ;
    if (kBoolTrue == test_5) {
      switch (enumerator_7659.current_mInterruptionPanicCode (HERE).enumValue ()) {
      case GALGAS_interruptionPanicCode::kNotBuilt:
        break ;
      case GALGAS_interruptionPanicCode::kEnum_noCode:
        {
          GALGAS_string var_s_7775 = constinArgument_inUndefinedInterruptString.getter_stringByReplacingStringByString (GALGAS_string ("!ISR!"), function_llvmNameForSectionOrSafeInterrupt (enumerator_7659.current_lkey (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 187)), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 187)) ;
          ioArgument_ioAScode.plusAssign_operation(var_s_7775, inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 188)) ;
        }
        break ;
      case GALGAS_interruptionPanicCode::kEnum_code:
        {
          const cEnumAssociatedValues_interruptionPanicCode_code * extractPtr_8646 = (const cEnumAssociatedValues_interruptionPanicCode_code *) (enumerator_7659.current_mInterruptionPanicCode (HERE).unsafePointer ()) ;
          const GALGAS_lbigint extractedValue_value = extractPtr_8646->mAssociatedValue0 ;
          const enumGalgasBool test_6 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).boolEnum () ;
          if (kBoolTrue == test_6) {
            GALGAS_string var_s_8031 = constinArgument_inUndefinedInterruptString.getter_stringByReplacingStringByString (GALGAS_string ("!ISR!"), function_llvmNameForSectionOrSafeInterrupt (enumerator_7659.current_lkey (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 191)), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 191)) ;
            ioArgument_ioAScode.plusAssign_operation(var_s_8031, inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 192)) ;
          }else if (kBoolFalse == test_6) {
            GALGAS_string var_name_8209 = function_llvmNameForSectionOrSafeInterrupt (enumerator_7659.current_lkey (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 194)) ;
            ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("Panic code for ").add_operation (var_name_8209, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 195)), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 195)), inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 195)) ;
            ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define void @").add_operation (var_name_8209, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 196)).add_operation (GALGAS_string (" ()"), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 196)).add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 196)), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 196)).add_operation (GALGAS_string (" noreturn {\n"), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 196)), inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 196)) ;
            ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @panic.isr (").add_operation (constinArgument_inGenerationContext.getter_mPanicCodeLLVMType (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 197)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 197)).add_operation (extractedValue_value.getter_bigint (HERE).getter_string (SOURCE_FILE ("declaration-isr.galgas", 197)), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 197)).add_operation (GALGAS_string (") noreturn \n"), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 197)), inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 197)) ;
            ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  unreachable\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 198)) ;
            ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
              "\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 199)) ;
          }
        }
        break ;
      }
    }
    enumerator_7659.gotoNextObject () ;
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
  cEnumerator_guardDeclarationListAST enumerator_2988 (temp_0, kENUMERATION_UP) ;
  while (enumerator_2988.hasCurrentObject ()) {
    cEnumerator_routineFormalArgumentListAST enumerator_3058 (enumerator_2988.current_mGuardFormalArgumentList (HERE), kENUMERATION_UP) ;
    while (enumerator_3058.hasCurrentObject ()) {
      GALGAS_lstring var_typeName_3080 = function_llvmRegularTypeMangledNameFromName (enumerator_3058.current_mFormalArgumentTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 85)) ;
      {
      ioArgument_ioGraph.setter_noteNode (var_typeName_3080 COMMA_SOURCE_FILE ("declaration-guard.galgas", 86)) ;
      }
      enumerator_3058.gotoNextObject () ;
    }
    extensionMethod_noteInstructionListTypesInPrecedenceGraph (enumerator_2988.current_mGuardInstructionList (HERE), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 88)) ;
    enumerator_2988.gotoNextObject () ;
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
  cEnumerator_guardDeclarationListAST enumerator_3796 (temp_0, kENUMERATION_UP) ;
  while (enumerator_3796.hasCurrentObject ()) {
    GALGAS_lstring var_guardMangledName_3850 = function_routineMangledNameFromAST (constinArgument_inReceiverTypeName, enumerator_3796.current (HERE).getter_mGuardName (HERE), enumerator_3796.current (HERE).getter_mGuardFormalArgumentList (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 102)) ;
    GALGAS_routineTypedSignature var_signature_4082 ;
    {
    routine_routineSignature (ioArgument_ioContext.mProperty_mTypeMap, enumerator_3796.current (HERE).getter_mGuardFormalArgumentList (HERE), var_signature_4082, inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 108)) ;
    }
    {
    ioArgument_ioContext.mProperty_mGuardMapForContext.setter_insertKey (var_guardMangledName_3850, enumerator_3796.current (HERE).getter_mIsPublic (HERE), var_signature_4082, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 110)) ;
    }
    enumerator_3796.gotoNextObject () ;
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
  cEnumerator_guardDeclarationListAST enumerator_4889 (temp_0, kENUMERATION_UP) ;
  while (enumerator_4889.hasCurrentObject ()) {
    GALGAS_bool var_warnIfUnused_4913 = GALGAS_bool (true) ;
    cEnumerator_lstringlist enumerator_4969 (enumerator_4889.current (HERE).getter_mGuardAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_4969.hasCurrentObject ()) {
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_4969.current_mValue (HERE).getter_string (HERE).objectCompare (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 131)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        const enumGalgasBool test_2 = var_warnIfUnused_4913.operator_not (SOURCE_FILE ("declaration-guard.galgas", 132)).boolEnum () ;
        if (kBoolTrue == test_2) {
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (enumerator_4969.current_mValue (HERE).getter_location (SOURCE_FILE ("declaration-guard.galgas", 133)), GALGAS_string ("duplicate @").add_operation (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 133)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 133)).add_operation (GALGAS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 133)), fixItArray3  COMMA_SOURCE_FILE ("declaration-guard.galgas", 133)) ;
        }
        var_warnIfUnused_4913 = GALGAS_bool (false) ;
      }else if (kBoolFalse == test_1) {
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (enumerator_4969.current_mValue (HERE).getter_location (SOURCE_FILE ("declaration-guard.galgas", 137)), GALGAS_string ("unknown attribute; available attribute is @").add_operation (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 137)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 137)), fixItArray4  COMMA_SOURCE_FILE ("declaration-guard.galgas", 137)) ;
      }
      enumerator_4969.gotoNextObject () ;
    }
    {
    routine_guardSemanticAnalysis (inArgument_inReceiverType, enumerator_4889.current (HERE).getter_mGuardName (HERE), enumerator_4889.current (HERE).getter_mGuardFormalArgumentList (HERE), enumerator_4889.current (HERE).getter_mGuardKind (HERE), enumerator_4889.current (HERE).getter_mGuardInstructionList (HERE), enumerator_4889.current (HERE).getter_mEndOfGuardDeclaration (HERE), var_warnIfUnused_4913, constinArgument_inSemanticContext, ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct, inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 140)) ;
    }
    enumerator_4889.gotoNextObject () ;
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

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_guardMapIR::cMapElement_guardMapIR (const GALGAS_lstring & inKey,
                                                const GALGAS_routineFormalArgumentListForGeneration & in_mFormalArgumentListForGeneration,
                                                const GALGAS_PLMType & in_mReceiverType,
                                                const GALGAS_guardKindGenerationIR & in_mGuardKindGenerationIR,
                                                const GALGAS_allocaList & in_mAllocaList,
                                                const GALGAS_instructionListIR & in_mInstructionGenerationList,
                                                const GALGAS_bool & in_mWarnIfUnused
                                                COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mFormalArgumentListForGeneration (in_mFormalArgumentListForGeneration),
mProperty_mReceiverType (in_mReceiverType),
mProperty_mGuardKindGenerationIR (in_mGuardKindGenerationIR),
mProperty_mAllocaList (in_mAllocaList),
mProperty_mInstructionGenerationList (in_mInstructionGenerationList),
mProperty_mWarnIfUnused (in_mWarnIfUnused) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_guardMapIR::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mFormalArgumentListForGeneration.isValid () && mProperty_mReceiverType.isValid () && mProperty_mGuardKindGenerationIR.isValid () && mProperty_mAllocaList.isValid () && mProperty_mInstructionGenerationList.isValid () && mProperty_mWarnIfUnused.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_guardMapIR::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_guardMapIR (mProperty_lkey, mProperty_mFormalArgumentListForGeneration, mProperty_mReceiverType, mProperty_mGuardKindGenerationIR, mProperty_mAllocaList, mProperty_mInstructionGenerationList, mProperty_mWarnIfUnused COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_guardMapIR::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFormalArgumentListForGeneration" ":" ;
  mProperty_mFormalArgumentListForGeneration.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mReceiverType" ":" ;
  mProperty_mReceiverType.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mGuardKindGenerationIR" ":" ;
  mProperty_mGuardKindGenerationIR.description (ioString, inIndentation) ;
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
  ioString << "mWarnIfUnused" ":" ;
  mProperty_mWarnIfUnused.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_guardMapIR::compare (const cCollectionElement * inOperand) const {
  cMapElement_guardMapIR * operand = (cMapElement_guardMapIR *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mFormalArgumentListForGeneration.objectCompare (operand->mProperty_mFormalArgumentListForGeneration) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mReceiverType.objectCompare (operand->mProperty_mReceiverType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mGuardKindGenerationIR.objectCompare (operand->mProperty_mGuardKindGenerationIR) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAllocaList.objectCompare (operand->mProperty_mAllocaList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInstructionGenerationList.objectCompare (operand->mProperty_mInstructionGenerationList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mWarnIfUnused.objectCompare (operand->mProperty_mWarnIfUnused) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardMapIR::GALGAS_guardMapIR (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardMapIR::GALGAS_guardMapIR (const GALGAS_guardMapIR & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardMapIR & GALGAS_guardMapIR::operator = (const GALGAS_guardMapIR & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardMapIR GALGAS_guardMapIR::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_guardMapIR result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardMapIR GALGAS_guardMapIR::constructor_mapWithMapToOverride (const GALGAS_guardMapIR & inMapToOverride
                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_guardMapIR result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardMapIR GALGAS_guardMapIR::getter_overriddenMap (C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  GALGAS_guardMapIR result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guardMapIR::addAssign_operation (const GALGAS_lstring & inKey,
                                             const GALGAS_routineFormalArgumentListForGeneration & inArgument0,
                                             const GALGAS_PLMType & inArgument1,
                                             const GALGAS_guardKindGenerationIR & inArgument2,
                                             const GALGAS_allocaList & inArgument3,
                                             const GALGAS_instructionListIR & inArgument4,
                                             const GALGAS_bool & inArgument5,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  cMapElement_guardMapIR * p = NULL ;
  macroMyNew (p, cMapElement_guardMapIR (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4, inArgument5 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@guardMapIR insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guardMapIR::setter_insertKey (GALGAS_lstring inKey,
                                          GALGAS_routineFormalArgumentListForGeneration inArgument0,
                                          GALGAS_PLMType inArgument1,
                                          GALGAS_guardKindGenerationIR inArgument2,
                                          GALGAS_allocaList inArgument3,
                                          GALGAS_instructionListIR inArgument4,
                                          GALGAS_bool inArgument5,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  cMapElement_guardMapIR * p = NULL ;
  macroMyNew (p, cMapElement_guardMapIR (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4, inArgument5 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "guard '%K' is already defined" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_guardMapIR_searchKey = "** internal error **" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guardMapIR::method_searchKey (GALGAS_lstring inKey,
                                          GALGAS_routineFormalArgumentListForGeneration & outArgument0,
                                          GALGAS_PLMType & outArgument1,
                                          GALGAS_guardKindGenerationIR & outArgument2,
                                          GALGAS_allocaList & outArgument3,
                                          GALGAS_instructionListIR & outArgument4,
                                          GALGAS_bool & outArgument5,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const {
  const cMapElement_guardMapIR * p = (const cMapElement_guardMapIR *) performSearch (inKey,
                                                                                     inCompiler,
                                                                                     kSearchErrorMessage_guardMapIR_searchKey
                                                                                     COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
    outArgument4.drop () ;
    outArgument5.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_guardMapIR) ;
    outArgument0 = p->mProperty_mFormalArgumentListForGeneration ;
    outArgument1 = p->mProperty_mReceiverType ;
    outArgument2 = p->mProperty_mGuardKindGenerationIR ;
    outArgument3 = p->mProperty_mAllocaList ;
    outArgument4 = p->mProperty_mInstructionGenerationList ;
    outArgument5 = p->mProperty_mWarnIfUnused ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guardMapIR::setter_removeKey (GALGAS_lstring inKey,
                                          GALGAS_routineFormalArgumentListForGeneration & outArgument0,
                                          GALGAS_PLMType & outArgument1,
                                          GALGAS_guardKindGenerationIR & outArgument2,
                                          GALGAS_allocaList & outArgument3,
                                          GALGAS_instructionListIR & outArgument4,
                                          GALGAS_bool & outArgument5,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  const char * kRemoveErrorMessage = "** internal error **" ;
  capCollectionElement attributes ;
  performRemove (inKey, attributes, inCompiler, kRemoveErrorMessage COMMA_THERE) ;
  cMapElement_guardMapIR * p = (cMapElement_guardMapIR *) attributes.ptr () ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
    outArgument4.drop () ;
    outArgument5.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_guardMapIR) ;
    outArgument0 = p->mProperty_mFormalArgumentListForGeneration ;
    outArgument1 = p->mProperty_mReceiverType ;
    outArgument2 = p->mProperty_mGuardKindGenerationIR ;
    outArgument3 = p->mProperty_mAllocaList ;
    outArgument4 = p->mProperty_mInstructionGenerationList ;
    outArgument5 = p->mProperty_mWarnIfUnused ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineFormalArgumentListForGeneration GALGAS_guardMapIR::getter_mFormalArgumentListForGenerationForKey (const GALGAS_string & inKey,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_guardMapIR * p = (const cMapElement_guardMapIR *) attributes ;
  GALGAS_routineFormalArgumentListForGeneration result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_guardMapIR) ;
    result = p->mProperty_mFormalArgumentListForGeneration ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMType GALGAS_guardMapIR::getter_mReceiverTypeForKey (const GALGAS_string & inKey,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_guardMapIR * p = (const cMapElement_guardMapIR *) attributes ;
  GALGAS_PLMType result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_guardMapIR) ;
    result = p->mProperty_mReceiverType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardKindGenerationIR GALGAS_guardMapIR::getter_mGuardKindGenerationIRForKey (const GALGAS_string & inKey,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_guardMapIR * p = (const cMapElement_guardMapIR *) attributes ;
  GALGAS_guardKindGenerationIR result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_guardMapIR) ;
    result = p->mProperty_mGuardKindGenerationIR ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allocaList GALGAS_guardMapIR::getter_mAllocaListForKey (const GALGAS_string & inKey,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_guardMapIR * p = (const cMapElement_guardMapIR *) attributes ;
  GALGAS_allocaList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_guardMapIR) ;
    result = p->mProperty_mAllocaList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR GALGAS_guardMapIR::getter_mInstructionGenerationListForKey (const GALGAS_string & inKey,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_guardMapIR * p = (const cMapElement_guardMapIR *) attributes ;
  GALGAS_instructionListIR result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_guardMapIR) ;
    result = p->mProperty_mInstructionGenerationList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_guardMapIR::getter_mWarnIfUnusedForKey (const GALGAS_string & inKey,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_guardMapIR * p = (const cMapElement_guardMapIR *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_guardMapIR) ;
    result = p->mProperty_mWarnIfUnused ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guardMapIR::setter_setMFormalArgumentListForGenerationForKey (GALGAS_routineFormalArgumentListForGeneration inAttributeValue,
                                                                          GALGAS_string inKey,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_guardMapIR * p = (cMapElement_guardMapIR *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_guardMapIR) ;
    p->mProperty_mFormalArgumentListForGeneration = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guardMapIR::setter_setMReceiverTypeForKey (GALGAS_PLMType inAttributeValue,
                                                       GALGAS_string inKey,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_guardMapIR * p = (cMapElement_guardMapIR *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_guardMapIR) ;
    p->mProperty_mReceiverType = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guardMapIR::setter_setMGuardKindGenerationIRForKey (GALGAS_guardKindGenerationIR inAttributeValue,
                                                                GALGAS_string inKey,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_guardMapIR * p = (cMapElement_guardMapIR *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_guardMapIR) ;
    p->mProperty_mGuardKindGenerationIR = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guardMapIR::setter_setMAllocaListForKey (GALGAS_allocaList inAttributeValue,
                                                     GALGAS_string inKey,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_guardMapIR * p = (cMapElement_guardMapIR *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_guardMapIR) ;
    p->mProperty_mAllocaList = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guardMapIR::setter_setMInstructionGenerationListForKey (GALGAS_instructionListIR inAttributeValue,
                                                                    GALGAS_string inKey,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_guardMapIR * p = (cMapElement_guardMapIR *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_guardMapIR) ;
    p->mProperty_mInstructionGenerationList = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guardMapIR::setter_setMWarnIfUnusedForKey (GALGAS_bool inAttributeValue,
                                                       GALGAS_string inKey,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_guardMapIR * p = (cMapElement_guardMapIR *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_guardMapIR) ;
    p->mProperty_mWarnIfUnused = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_guardMapIR * GALGAS_guardMapIR::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                               const GALGAS_string & inKey
                                                                               COMMA_LOCATION_ARGS) {
  cMapElement_guardMapIR * result = (cMapElement_guardMapIR *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_guardMapIR) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_guardMapIR::cEnumerator_guardMapIR (const GALGAS_guardMapIR & inEnumeratedObject,
                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardMapIR_2D_element cEnumerator_guardMapIR::current (LOCATION_ARGS) const {
  const cMapElement_guardMapIR * p = (const cMapElement_guardMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_guardMapIR) ;
  return GALGAS_guardMapIR_2D_element (p->mProperty_lkey, p->mProperty_mFormalArgumentListForGeneration, p->mProperty_mReceiverType, p->mProperty_mGuardKindGenerationIR, p->mProperty_mAllocaList, p->mProperty_mInstructionGenerationList, p->mProperty_mWarnIfUnused) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_guardMapIR::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineFormalArgumentListForGeneration cEnumerator_guardMapIR::current_mFormalArgumentListForGeneration (LOCATION_ARGS) const {
  const cMapElement_guardMapIR * p = (const cMapElement_guardMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_guardMapIR) ;
  return p->mProperty_mFormalArgumentListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMType cEnumerator_guardMapIR::current_mReceiverType (LOCATION_ARGS) const {
  const cMapElement_guardMapIR * p = (const cMapElement_guardMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_guardMapIR) ;
  return p->mProperty_mReceiverType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardKindGenerationIR cEnumerator_guardMapIR::current_mGuardKindGenerationIR (LOCATION_ARGS) const {
  const cMapElement_guardMapIR * p = (const cMapElement_guardMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_guardMapIR) ;
  return p->mProperty_mGuardKindGenerationIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allocaList cEnumerator_guardMapIR::current_mAllocaList (LOCATION_ARGS) const {
  const cMapElement_guardMapIR * p = (const cMapElement_guardMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_guardMapIR) ;
  return p->mProperty_mAllocaList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR cEnumerator_guardMapIR::current_mInstructionGenerationList (LOCATION_ARGS) const {
  const cMapElement_guardMapIR * p = (const cMapElement_guardMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_guardMapIR) ;
  return p->mProperty_mInstructionGenerationList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_guardMapIR::current_mWarnIfUnused (LOCATION_ARGS) const {
  const cMapElement_guardMapIR * p = (const cMapElement_guardMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_guardMapIR) ;
  return p->mProperty_mWarnIfUnused ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  @guardMapIR type                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_guardMapIR ("guardMapIR",
                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_guardMapIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guardMapIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_guardMapIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_guardMapIR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardMapIR GALGAS_guardMapIR::extractObject (const GALGAS_object & inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  GALGAS_guardMapIR result ;
  const GALGAS_guardMapIR * p = (const GALGAS_guardMapIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_guardMapIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("guardMapIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
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
  cEnumerator_guardMapIR enumerator_18994 (temp_0, kENUMERATION_UP) ;
  while (enumerator_18994.hasCurrentObject ()) {
    switch (enumerator_18994.current (HERE).getter_mGuardKindGenerationIR (HERE).enumValue ()) {
    case GALGAS_guardKindGenerationIR::kNotBuilt:
      break ;
    case GALGAS_guardKindGenerationIR::kEnum_convenienceGuard:
      {
      }
      break ;
    case GALGAS_guardKindGenerationIR::kEnum_baseGuard:
      {
        GALGAS_string var_guardImplementationName_19130 = function_llvmNameForGuardImplementation (enumerator_18994.current (HERE).getter_lkey (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 482)) ;
        GALGAS_string var_guardCallName_19208 = function_llvmNameForGuardCall (enumerator_18994.current (HERE).getter_lkey (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 483)) ;
        ioArgument_ioServiceList.addAssign_operation (var_guardCallName_19208, var_guardImplementationName_19130  COMMA_SOURCE_FILE ("declaration-guard.galgas", 484)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (var_guardImplementationName_19130, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 485)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 485)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("declare i1 @").add_operation (var_guardCallName_19208, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 486)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 486)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 486)) ;
        GALGAS_string temp_1 ;
        const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_18994.current (HERE).getter_mReceiverType (HERE).getter_mKind (SOURCE_FILE ("declaration-guard.galgas", 487)).objectCompare (GALGAS_typeKind::constructor_void (SOURCE_FILE ("declaration-guard.galgas", 487)))).boolEnum () ;
        if (kBoolTrue == test_2) {
          temp_1 = GALGAS_string::makeEmptyString () ;
        }else if (kBoolFalse == test_2) {
          temp_1 = GALGAS_string ("$").add_operation (enumerator_18994.current (HERE).getter_mReceiverType (HERE).getter_mPLMTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 487)) ;
        }
        GALGAS_string var_typeName_19456 = temp_1 ;
        GALGAS_bool var_first_19570 = GALGAS_bool (kIsEqual, var_typeName_19456.objectCompare (GALGAS_string::makeEmptyString ())) ;
        const enumGalgasBool test_3 = var_first_19570.operator_not (SOURCE_FILE ("declaration-guard.galgas", 489)).boolEnum () ;
        if (kBoolTrue == test_3) {
          ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("%").add_operation (var_typeName_19456.getter_assemblerRepresentation (SOURCE_FILE ("declaration-guard.galgas", 490)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 490)).add_operation (GALGAS_string (" * %self"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 490)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 490)) ;
        }
        cEnumerator_routineFormalArgumentListForGeneration enumerator_19754 (enumerator_18994.current (HERE).getter_mFormalArgumentListForGeneration (HERE), kENUMERATION_UP) ;
        while (enumerator_19754.hasCurrentObject ()) {
          const enumGalgasBool test_4 = var_first_19570.boolEnum () ;
          if (kBoolTrue == test_4) {
            var_first_19570 = GALGAS_bool (false) ;
          }else if (kBoolFalse == test_4) {
            ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 493)) ;
          }
          switch (enumerator_19754.current_mFormalArgumentKind (HERE).enumValue ()) {
          case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
            break ;
          case GALGAS_procFormalArgumentPassingMode::kEnum_input:
            {
              ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_19754.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 496)).add_operation (GALGAS_string (" %in."), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 496)).add_operation (enumerator_19754.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 496)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 496)) ;
            }
            break ;
          case GALGAS_procFormalArgumentPassingMode::kEnum_output:
            {
              ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_19754.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 498)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 498)).add_operation (function_llvmNameForLocalVariable (enumerator_19754.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 498)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 498)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 498)) ;
            }
            break ;
          case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
            {
              ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_19754.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 500)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 500)).add_operation (function_llvmNameForLocalVariable (enumerator_19754.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 500)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 500)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 500)) ;
            }
            break ;
          }
          enumerator_19754.gotoNextObject () ;
        }
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 503)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 503)).add_operation (GALGAS_string ("\n"
          "\n"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 503)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 503)) ;
      }
      break ;
    }
    extensionMethod_llvmCodeGeneration (enumerator_18994.current (HERE), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 505)) ;
    enumerator_18994.gotoNextObject () ;
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
                                            const GALGAS_PLMType constin_inSelfType,
                                            const GALGAS_bool constin_inGuard,
                                            const GALGAS_lstring constin_inCallerNameForInvocationGraph,
                                            const GALGAS_PLMType constin_inTargetType,
                                            const GALGAS_semanticContext constin_inContext,
                                            const GALGAS_mode constin_inCurrentMode,
                                            GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                            GALGAS_staticStringMap & io_ioGlobalLiteralStringMap,
                                            GALGAS_universalValuedObjectMapForContext & io_ioUniversalMap,
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
      f (inObject, constin_inSelfType, constin_inGuard, constin_inCallerNameForInvocationGraph, constin_inTargetType, constin_inContext, constin_inCurrentMode, io_ioTemporaries, io_ioGlobalLiteralStringMap, io_ioUniversalMap, io_ioAllocaList, io_ioInstructionGenerationList, out_outResult, inCompiler COMMA_THERE) ;
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
  GALGAS_instructionListIR var_instructionGenerationList_13979 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("expression-operator-priority.galgas", 442)) ;
  GALGAS_allocaList var_allocaList_14009 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("expression-operator-priority.galgas", 443)) ;
  GALGAS_semanticTemporariesStruct joker_14233 = GALGAS_semanticTemporariesStruct::constructor_default (SOURCE_FILE ("expression-operator-priority.galgas", 451)) ;
  GALGAS_universalValuedObjectMapForContext joker_14300 = GALGAS_universalValuedObjectMapForContext::constructor_default (SOURCE_FILE ("expression-operator-priority.galgas", 453)) ;
  const GALGAS_expressionAST temp_0 = object ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) temp_0.ptr (), function_voidType (inCompiler COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 445)), GALGAS_bool (false), GALGAS_string ("compiler").getter_nowhere (SOURCE_FILE ("expression-operator-priority.galgas", 447)), function_voidType (inCompiler COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 448)), constinArgument_inContext, GALGAS_mode::constructor_bootMode (SOURCE_FILE ("expression-operator-priority.galgas", 450)), joker_14233, ioArgument_ioGlobalLiteralStringMap, joker_14300, var_allocaList_14009, var_instructionGenerationList_13979, outArgument_outResult, inCompiler COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 444)) ;
  GALGAS_bool test_1 = GALGAS_bool (kIsStrictSup, var_allocaList_14009.getter_length (SOURCE_FILE ("expression-operator-priority.galgas", 458)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  if (kBoolTrue != test_1.boolEnum ()) {
    test_1 = GALGAS_bool (kIsStrictSup, var_instructionGenerationList_13979.getter_length (SOURCE_FILE ("expression-operator-priority.galgas", 458)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  }
  GALGAS_bool test_2 = test_1 ;
  if (kBoolTrue != test_2.boolEnum ()) {
    test_2 = extensionGetter_isStatic (outArgument_outResult, inCompiler COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 458)).operator_not (SOURCE_FILE ("expression-operator-priority.galgas", 458)) ;
  }
  const enumGalgasBool test_3 = test_2.boolEnum () ;
  if (kBoolTrue == test_3) {
    TC_Array <C_FixItDescription> fixItArray4 ;
    inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("this expression should be a static expression"), fixItArray4  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 459)) ;
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
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*



typeComparisonResult GALGAS_abstractInstructionIR::objectCompare (const GALGAS_abstractInstructionIR & inOperand) const {
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

GALGAS_abstractInstructionIR::GALGAS_abstractInstructionIR (void) :
AC_GALGAS_class (false) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractInstructionIR::GALGAS_abstractInstructionIR (const cPtr_abstractInstructionIR * inSourcePtr) :
AC_GALGAS_class (inSourcePtr, false) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractInstructionIR) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                   Pointer class for @abstractInstructionIR class                                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_abstractInstructionIR::cPtr_abstractInstructionIR (LOCATION_ARGS) :
acPtr_class (THERE) {
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @abstractInstructionIR type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_abstractInstructionIR ("abstractInstructionIR",
                                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_abstractInstructionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractInstructionIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_abstractInstructionIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractInstructionIR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractInstructionIR GALGAS_abstractInstructionIR::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_abstractInstructionIR result ;
  const GALGAS_abstractInstructionIR * p = (const GALGAS_abstractInstructionIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_abstractInstructionIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractInstructionIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_truncateInstructionIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_truncateInstructionIR * p = (const cPtr_truncateInstructionIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_truncateInstructionIR) ;
  if (kOperandEqual == result) {
    result = mProperty_mTarget.objectCompare (p->mProperty_mTarget) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOperand.objectCompare (p->mProperty_mOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_truncateInstructionIR::objectCompare (const GALGAS_truncateInstructionIR & inOperand) const {
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

GALGAS_truncateInstructionIR::GALGAS_truncateInstructionIR (void) :
GALGAS_abstractInstructionIR () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_truncateInstructionIR::GALGAS_truncateInstructionIR (const cPtr_truncateInstructionIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_truncateInstructionIR) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_truncateInstructionIR GALGAS_truncateInstructionIR::constructor_new (const GALGAS_objectIR & inAttribute_mTarget,
                                                                            const GALGAS_objectIR & inAttribute_mOperand
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_truncateInstructionIR result ;
  if (inAttribute_mTarget.isValid () && inAttribute_mOperand.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_truncateInstructionIR (inAttribute_mTarget, inAttribute_mOperand COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_truncateInstructionIR::getter_mTarget (UNUSED_LOCATION_ARGS) const {
  GALGAS_objectIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_truncateInstructionIR * p = (const cPtr_truncateInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_truncateInstructionIR) ;
    result = p->mProperty_mTarget ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR cPtr_truncateInstructionIR::getter_mTarget (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTarget ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_truncateInstructionIR::getter_mOperand (UNUSED_LOCATION_ARGS) const {
  GALGAS_objectIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_truncateInstructionIR * p = (const cPtr_truncateInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_truncateInstructionIR) ;
    result = p->mProperty_mOperand ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR cPtr_truncateInstructionIR::getter_mOperand (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOperand ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                   Pointer class for @truncateInstructionIR class                                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_truncateInstructionIR::cPtr_truncateInstructionIR (const GALGAS_objectIR & in_mTarget,
                                                        const GALGAS_objectIR & in_mOperand
                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mTarget (in_mTarget),
mProperty_mOperand (in_mOperand) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_truncateInstructionIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_truncateInstructionIR ;
}

void cPtr_truncateInstructionIR::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "[@truncateInstructionIR:" ;
  mProperty_mTarget.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOperand.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_truncateInstructionIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_truncateInstructionIR (mProperty_mTarget, mProperty_mOperand COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @truncateInstructionIR type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_truncateInstructionIR ("truncateInstructionIR",
                                              & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_truncateInstructionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_truncateInstructionIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_truncateInstructionIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_truncateInstructionIR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_truncateInstructionIR GALGAS_truncateInstructionIR::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_truncateInstructionIR result ;
  const GALGAS_truncateInstructionIR * p = (const GALGAS_truncateInstructionIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_truncateInstructionIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("truncateInstructionIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_LValueRepresentation_volatileAbsoluteReference::cEnumAssociatedValues_LValueRepresentation_volatileAbsoluteReference (const GALGAS_PLMType & inAssociatedValue0,
                                                                                                                                            const GALGAS_uint & inAssociatedValue1
                                                                                                                                            COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_LValueRepresentation_volatileAbsoluteReference::description (C_String & ioString,
                                                                                        const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_LValueRepresentation_volatileAbsoluteReference::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_LValueRepresentation_volatileAbsoluteReference * ptr = dynamic_cast<const cEnumAssociatedValues_LValueRepresentation_volatileAbsoluteReference *> (inOperand) ;
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

cEnumAssociatedValues_LValueRepresentation_volatileIndirectReference::cEnumAssociatedValues_LValueRepresentation_volatileIndirectReference (const GALGAS_PLMType & inAssociatedValue0,
                                                                                                                                            const GALGAS_string & inAssociatedValue1
                                                                                                                                            COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_LValueRepresentation_volatileIndirectReference::description (C_String & ioString,
                                                                                        const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_LValueRepresentation_volatileIndirectReference::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_LValueRepresentation_volatileIndirectReference * ptr = dynamic_cast<const cEnumAssociatedValues_LValueRepresentation_volatileIndirectReference *> (inOperand) ;
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

cEnumAssociatedValues_LValueRepresentation_universalReference::cEnumAssociatedValues_LValueRepresentation_universalReference (const GALGAS_PLMType & inAssociatedValue0,
                                                                                                                              const GALGAS_string & inAssociatedValue1
                                                                                                                              COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_LValueRepresentation_universalReference::description (C_String & ioString,
                                                                                 const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_LValueRepresentation_universalReference::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_LValueRepresentation_universalReference * ptr = dynamic_cast<const cEnumAssociatedValues_LValueRepresentation_universalReference *> (inOperand) ;
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

GALGAS_LValueRepresentation::GALGAS_LValueRepresentation (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_LValueRepresentation GALGAS_LValueRepresentation::constructor_volatileAbsoluteReference (const GALGAS_PLMType & inAssociatedValue0,
                                                                                                const GALGAS_uint & inAssociatedValue1
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_LValueRepresentation result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_volatileAbsoluteReference ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_LValueRepresentation_volatileAbsoluteReference (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_LValueRepresentation GALGAS_LValueRepresentation::constructor_volatileIndirectReference (const GALGAS_PLMType & inAssociatedValue0,
                                                                                                const GALGAS_string & inAssociatedValue1
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_LValueRepresentation result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_volatileIndirectReference ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_LValueRepresentation_volatileIndirectReference (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_LValueRepresentation GALGAS_LValueRepresentation::constructor_universalReference (const GALGAS_PLMType & inAssociatedValue0,
                                                                                         const GALGAS_string & inAssociatedValue1
                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_LValueRepresentation result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_universalReference ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_LValueRepresentation_universalReference (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_LValueRepresentation::method_volatileAbsoluteReference (GALGAS_PLMType & outAssociatedValue0,
                                                                    GALGAS_uint & outAssociatedValue1,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_volatileAbsoluteReference) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    C_String s ;
    s << "method @LValueRepresentation volatileAbsoluteReference invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_LValueRepresentation_volatileAbsoluteReference * ptr = (const cEnumAssociatedValues_LValueRepresentation_volatileAbsoluteReference *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_LValueRepresentation::method_volatileIndirectReference (GALGAS_PLMType & outAssociatedValue0,
                                                                    GALGAS_string & outAssociatedValue1,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_volatileIndirectReference) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    C_String s ;
    s << "method @LValueRepresentation volatileIndirectReference invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_LValueRepresentation_volatileIndirectReference * ptr = (const cEnumAssociatedValues_LValueRepresentation_volatileIndirectReference *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_LValueRepresentation::method_universalReference (GALGAS_PLMType & outAssociatedValue0,
                                                             GALGAS_string & outAssociatedValue1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_universalReference) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    C_String s ;
    s << "method @LValueRepresentation universalReference invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_LValueRepresentation_universalReference * ptr = (const cEnumAssociatedValues_LValueRepresentation_universalReference *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * gEnumNameArrayFor_LValueRepresentation [4] = {
  "(not built)",
  "volatileAbsoluteReference",
  "volatileIndirectReference",
  "universalReference"
} ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_LValueRepresentation::getter_isVolatileAbsoluteReference (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_volatileAbsoluteReference == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_LValueRepresentation::getter_isVolatileIndirectReference (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_volatileIndirectReference == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_LValueRepresentation::getter_isUniversalReference (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_universalReference == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_LValueRepresentation::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "<enum @LValueRepresentation: " << gEnumNameArrayFor_LValueRepresentation [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_LValueRepresentation::objectCompare (const GALGAS_LValueRepresentation & inOperand) const {
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
//                                             @LValueRepresentation type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_LValueRepresentation ("LValueRepresentation",
                                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_LValueRepresentation::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_LValueRepresentation ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_LValueRepresentation::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_LValueRepresentation (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_LValueRepresentation GALGAS_LValueRepresentation::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_LValueRepresentation result ;
  const GALGAS_LValueRepresentation * p = (const GALGAS_LValueRepresentation *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_LValueRepresentation *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("LValueRepresentation", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

