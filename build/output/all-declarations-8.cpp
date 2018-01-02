#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-8.h"


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskMap_2D_element::GALGAS_taskMap_2D_element (void) :
mProperty_lkey (),
mProperty_mTaskType () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskMap_2D_element::~ GALGAS_taskMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskMap_2D_element::GALGAS_taskMap_2D_element (const GALGAS_lstring & inOperand0,
                                                      const GALGAS_PLMType & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mTaskType (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskMap_2D_element GALGAS_taskMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                      const GALGAS_PLMType & inOperand1 
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
    result = mProperty_mTaskType.objectCompare (inOperand.mProperty_mTaskType) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_taskMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mTaskType.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mTaskType.drop () ;
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
    mProperty_mTaskType.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_taskMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMType GALGAS_taskMap_2D_element::getter_mTaskType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTaskType ;
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

GALGAS_initListIR_2D_element::GALGAS_initListIR_2D_element (void) :
mProperty_mSelfType (),
mProperty_mDriverName (),
mProperty_mAllocaList (),
mProperty_mInstructionListIR () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initListIR_2D_element::~ GALGAS_initListIR_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initListIR_2D_element::GALGAS_initListIR_2D_element (const GALGAS_PLMType & inOperand0,
                                                            const GALGAS_string & inOperand1,
                                                            const GALGAS_allocaList & inOperand2,
                                                            const GALGAS_instructionListIR & inOperand3) :
mProperty_mSelfType (inOperand0),
mProperty_mDriverName (inOperand1),
mProperty_mAllocaList (inOperand2),
mProperty_mInstructionListIR (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initListIR_2D_element GALGAS_initListIR_2D_element::constructor_new (const GALGAS_PLMType & inOperand0,
                                                                            const GALGAS_string & inOperand1,
                                                                            const GALGAS_allocaList & inOperand2,
                                                                            const GALGAS_instructionListIR & inOperand3 
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
    result = mProperty_mSelfType.objectCompare (inOperand.mProperty_mSelfType) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mDriverName.objectCompare (inOperand.mProperty_mDriverName) ;
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
  return mProperty_mSelfType.isValid () && mProperty_mDriverName.isValid () && mProperty_mAllocaList.isValid () && mProperty_mInstructionListIR.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_initListIR_2D_element::drop (void) {
  mProperty_mSelfType.drop () ;
  mProperty_mDriverName.drop () ;
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
    mProperty_mDriverName.description (ioString, inIndentation+1) ;
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

GALGAS_string GALGAS_initListIR_2D_element::getter_mDriverName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDriverName ;
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
mProperty_mIsSafe (),
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
                                                                                                              const GALGAS_bool & inOperand3,
                                                                                                              const GALGAS_routineFormalArgumentListAST & inOperand4,
                                                                                                              const GALGAS_location & inOperand5) :
mProperty_mName (inOperand0),
mProperty_mExecutionMode (inOperand1),
mProperty_mIsExported (inOperand2),
mProperty_mIsSafe (inOperand3),
mProperty_mFormalArgumentList (inOperand4),
mProperty_mEndOfProcLocation (inOperand5) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_requiredProcedureDeclarationListAST_2D_element GALGAS_requiredProcedureDeclarationListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                              const GALGAS_mode & inOperand1,
                                                                                                                              const GALGAS_bool & inOperand2,
                                                                                                                              const GALGAS_bool & inOperand3,
                                                                                                                              const GALGAS_routineFormalArgumentListAST & inOperand4,
                                                                                                                              const GALGAS_location & inOperand5 
                                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_requiredProcedureDeclarationListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid ()) {
    result = GALGAS_requiredProcedureDeclarationListAST_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5) ;
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
    result = mProperty_mIsSafe.objectCompare (inOperand.mProperty_mIsSafe) ;
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
  return mProperty_mName.isValid () && mProperty_mExecutionMode.isValid () && mProperty_mIsExported.isValid () && mProperty_mIsSafe.isValid () && mProperty_mFormalArgumentList.isValid () && mProperty_mEndOfProcLocation.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_requiredProcedureDeclarationListAST_2D_element::drop (void) {
  mProperty_mName.drop () ;
  mProperty_mExecutionMode.drop () ;
  mProperty_mIsExported.drop () ;
  mProperty_mIsSafe.drop () ;
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
    mProperty_mIsSafe.description (ioString, inIndentation+1) ;
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

GALGAS_bool GALGAS_requiredProcedureDeclarationListAST_2D_element::getter_mIsSafe (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIsSafe ;
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

GALGAS_integerSliceFieldListAST_2D_element::GALGAS_integerSliceFieldListAST_2D_element (void) :
mProperty_mSliceWidth (),
mProperty_mExpression (),
mProperty_mExpressionLocation () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_integerSliceFieldListAST_2D_element::~ GALGAS_integerSliceFieldListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_integerSliceFieldListAST_2D_element::GALGAS_integerSliceFieldListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                        const GALGAS_expressionAST & inOperand1,
                                                                                        const GALGAS_location & inOperand2) :
mProperty_mSliceWidth (inOperand0),
mProperty_mExpression (inOperand1),
mProperty_mExpressionLocation (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_integerSliceFieldListAST_2D_element GALGAS_integerSliceFieldListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                        const GALGAS_expressionAST & inOperand1,
                                                                                                        const GALGAS_location & inOperand2 
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_integerSliceFieldListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_integerSliceFieldListAST_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_integerSliceFieldListAST_2D_element::objectCompare (const GALGAS_integerSliceFieldListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mSliceWidth.objectCompare (inOperand.mProperty_mSliceWidth) ;
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

bool GALGAS_integerSliceFieldListAST_2D_element::isValid (void) const {
  return mProperty_mSliceWidth.isValid () && mProperty_mExpression.isValid () && mProperty_mExpressionLocation.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_integerSliceFieldListAST_2D_element::drop (void) {
  mProperty_mSliceWidth.drop () ;
  mProperty_mExpression.drop () ;
  mProperty_mExpressionLocation.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_integerSliceFieldListAST_2D_element::description (C_String & ioString,
                                                              const int32_t inIndentation) const {
  ioString << "<struct @integerSliceFieldListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mSliceWidth.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mExpression.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mExpressionLocation.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_integerSliceFieldListAST_2D_element::getter_mSliceWidth (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSliceWidth ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST GALGAS_integerSliceFieldListAST_2D_element::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_integerSliceFieldListAST_2D_element::getter_mExpressionLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExpressionLocation ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @integerSliceFieldListAST-element type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_integerSliceFieldListAST_2D_element ("integerSliceFieldListAST-element",
                                                            NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_integerSliceFieldListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_integerSliceFieldListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_integerSliceFieldListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_integerSliceFieldListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_integerSliceFieldListAST_2D_element GALGAS_integerSliceFieldListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_integerSliceFieldListAST_2D_element result ;
  const GALGAS_integerSliceFieldListAST_2D_element * p = (const GALGAS_integerSliceFieldListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_integerSliceFieldListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("integerSliceFieldListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

GALGAS_sliceAssignmentListAST_2D_element::GALGAS_sliceAssignmentListAST_2D_element (void) :
mProperty_mSliceWidth (),
mProperty_mSliceKind () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sliceAssignmentListAST_2D_element::~ GALGAS_sliceAssignmentListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sliceAssignmentListAST_2D_element::GALGAS_sliceAssignmentListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                    const GALGAS_sliceTargetAST & inOperand1) :
mProperty_mSliceWidth (inOperand0),
mProperty_mSliceKind (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sliceAssignmentListAST_2D_element GALGAS_sliceAssignmentListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                    const GALGAS_sliceTargetAST & inOperand1 
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_sliceAssignmentListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_sliceAssignmentListAST_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_sliceAssignmentListAST_2D_element::objectCompare (const GALGAS_sliceAssignmentListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mSliceWidth.objectCompare (inOperand.mProperty_mSliceWidth) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSliceKind.objectCompare (inOperand.mProperty_mSliceKind) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_sliceAssignmentListAST_2D_element::isValid (void) const {
  return mProperty_mSliceWidth.isValid () && mProperty_mSliceKind.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_sliceAssignmentListAST_2D_element::drop (void) {
  mProperty_mSliceWidth.drop () ;
  mProperty_mSliceKind.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_sliceAssignmentListAST_2D_element::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "<struct @sliceAssignmentListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mSliceWidth.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSliceKind.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_sliceAssignmentListAST_2D_element::getter_mSliceWidth (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSliceWidth ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sliceTargetAST GALGAS_sliceAssignmentListAST_2D_element::getter_mSliceKind (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSliceKind ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @sliceAssignmentListAST-element type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_sliceAssignmentListAST_2D_element ("sliceAssignmentListAST-element",
                                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_sliceAssignmentListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sliceAssignmentListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_sliceAssignmentListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sliceAssignmentListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sliceAssignmentListAST_2D_element GALGAS_sliceAssignmentListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_sliceAssignmentListAST_2D_element result ;
  const GALGAS_sliceAssignmentListAST_2D_element * p = (const GALGAS_sliceAssignmentListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_sliceAssignmentListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sliceAssignmentListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

GALGAS_flatValuedObjectMap_2D_element::GALGAS_flatValuedObjectMap_2D_element (void) :
mProperty_lkey (),
mProperty_mObjectState (),
mProperty_mObjectShouldBeValuedAtEndOfScope (),
mProperty_mValuedObject () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_flatValuedObjectMap_2D_element::~ GALGAS_flatValuedObjectMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_flatValuedObjectMap_2D_element::GALGAS_flatValuedObjectMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                              const GALGAS_valuedObjectState & inOperand1,
                                                                              const GALGAS_bool & inOperand2,
                                                                              const GALGAS_valuedObject & inOperand3) :
mProperty_lkey (inOperand0),
mProperty_mObjectState (inOperand1),
mProperty_mObjectShouldBeValuedAtEndOfScope (inOperand2),
mProperty_mValuedObject (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_flatValuedObjectMap_2D_element GALGAS_flatValuedObjectMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                              const GALGAS_valuedObjectState & inOperand1,
                                                                                              const GALGAS_bool & inOperand2,
                                                                                              const GALGAS_valuedObject & inOperand3 
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_flatValuedObjectMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_flatValuedObjectMap_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_flatValuedObjectMap_2D_element::objectCompare (const GALGAS_flatValuedObjectMap_2D_element & inOperand) const {
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
    result = mProperty_mValuedObject.objectCompare (inOperand.mProperty_mValuedObject) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_flatValuedObjectMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mObjectState.isValid () && mProperty_mObjectShouldBeValuedAtEndOfScope.isValid () && mProperty_mValuedObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_flatValuedObjectMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mObjectState.drop () ;
  mProperty_mObjectShouldBeValuedAtEndOfScope.drop () ;
  mProperty_mValuedObject.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_flatValuedObjectMap_2D_element::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "<struct @flatValuedObjectMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mObjectState.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mObjectShouldBeValuedAtEndOfScope.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mValuedObject.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_flatValuedObjectMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_valuedObjectState GALGAS_flatValuedObjectMap_2D_element::getter_mObjectState (UNUSED_LOCATION_ARGS) const {
  return mProperty_mObjectState ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_flatValuedObjectMap_2D_element::getter_mObjectShouldBeValuedAtEndOfScope (UNUSED_LOCATION_ARGS) const {
  return mProperty_mObjectShouldBeValuedAtEndOfScope ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_valuedObject GALGAS_flatValuedObjectMap_2D_element::getter_mValuedObject (UNUSED_LOCATION_ARGS) const {
  return mProperty_mValuedObject ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @flatValuedObjectMap-element type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_flatValuedObjectMap_2D_element ("flatValuedObjectMap-element",
                                                       NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_flatValuedObjectMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_flatValuedObjectMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_flatValuedObjectMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_flatValuedObjectMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_flatValuedObjectMap_2D_element GALGAS_flatValuedObjectMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_flatValuedObjectMap_2D_element result ;
  const GALGAS_flatValuedObjectMap_2D_element * p = (const GALGAS_flatValuedObjectMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_flatValuedObjectMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("flatValuedObjectMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_referenceStateMap_2D_element::GALGAS_referenceStateMap_2D_element (void) :
mProperty_lkey (),
mProperty_mState () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_referenceStateMap_2D_element::~ GALGAS_referenceStateMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_referenceStateMap_2D_element::GALGAS_referenceStateMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                          const GALGAS_valuedObjectState & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mState (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_referenceStateMap_2D_element GALGAS_referenceStateMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                          const GALGAS_valuedObjectState & inOperand1 
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_referenceStateMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_referenceStateMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_referenceStateMap_2D_element::objectCompare (const GALGAS_referenceStateMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mState.objectCompare (inOperand.mProperty_mState) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_referenceStateMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mState.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_referenceStateMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mState.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_referenceStateMap_2D_element::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "<struct @referenceStateMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mState.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_referenceStateMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_valuedObjectState GALGAS_referenceStateMap_2D_element::getter_mState (UNUSED_LOCATION_ARGS) const {
  return mProperty_mState ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @referenceStateMap-element type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_referenceStateMap_2D_element ("referenceStateMap-element",
                                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_referenceStateMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_referenceStateMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_referenceStateMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_referenceStateMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_referenceStateMap_2D_element GALGAS_referenceStateMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_referenceStateMap_2D_element result ;
  const GALGAS_referenceStateMap_2D_element * p = (const GALGAS_referenceStateMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_referenceStateMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("referenceStateMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap_2D_element::GALGAS_infixOperatorMap_2D_element (void) :
mProperty_lkey (),
mProperty_mResultType (),
mProperty_mOperation () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap_2D_element::~ GALGAS_infixOperatorMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap_2D_element::GALGAS_infixOperatorMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                        const GALGAS_PLMType & inOperand1,
                                                                        const GALGAS_infixOperatorDescription & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mResultType (inOperand1),
mProperty_mOperation (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap_2D_element GALGAS_infixOperatorMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                        const GALGAS_PLMType & inOperand1,
                                                                                        const GALGAS_infixOperatorDescription & inOperand2 
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_infixOperatorMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_infixOperatorMap_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_infixOperatorMap_2D_element::objectCompare (const GALGAS_infixOperatorMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mResultType.objectCompare (inOperand.mProperty_mResultType) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mOperation.objectCompare (inOperand.mProperty_mOperation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_infixOperatorMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mResultType.isValid () && mProperty_mOperation.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_infixOperatorMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mResultType.drop () ;
  mProperty_mOperation.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_infixOperatorMap_2D_element::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "<struct @infixOperatorMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mResultType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mOperation.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_infixOperatorMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMType GALGAS_infixOperatorMap_2D_element::getter_mResultType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mResultType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorDescription GALGAS_infixOperatorMap_2D_element::getter_mOperation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOperation ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @infixOperatorMap-element type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_infixOperatorMap_2D_element ("infixOperatorMap-element",
                                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_infixOperatorMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_infixOperatorMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_infixOperatorMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_infixOperatorMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap_2D_element GALGAS_infixOperatorMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_infixOperatorMap_2D_element result ;
  const GALGAS_infixOperatorMap_2D_element * p = (const GALGAS_infixOperatorMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_infixOperatorMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("infixOperatorMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefixOperatorMap_2D_element::GALGAS_prefixOperatorMap_2D_element (void) :
mProperty_lkey () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefixOperatorMap_2D_element::~ GALGAS_prefixOperatorMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefixOperatorMap_2D_element::GALGAS_prefixOperatorMap_2D_element (const GALGAS_lstring & inOperand0) :
mProperty_lkey (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefixOperatorMap_2D_element GALGAS_prefixOperatorMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_prefixOperatorMap_2D_element (GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefixOperatorMap_2D_element GALGAS_prefixOperatorMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0 
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_prefixOperatorMap_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_prefixOperatorMap_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_prefixOperatorMap_2D_element::objectCompare (const GALGAS_prefixOperatorMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_prefixOperatorMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_prefixOperatorMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_prefixOperatorMap_2D_element::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "<struct @prefixOperatorMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_prefixOperatorMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @prefixOperatorMap-element type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_prefixOperatorMap_2D_element ("prefixOperatorMap-element",
                                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_prefixOperatorMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_prefixOperatorMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_prefixOperatorMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_prefixOperatorMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefixOperatorMap_2D_element GALGAS_prefixOperatorMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_prefixOperatorMap_2D_element result ;
  const GALGAS_prefixOperatorMap_2D_element * p = (const GALGAS_prefixOperatorMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_prefixOperatorMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("prefixOperatorMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalStructuredConstantList_2D_element::GALGAS_globalStructuredConstantList_2D_element (void) :
mProperty_mType (),
mProperty_mOperandIRList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalStructuredConstantList_2D_element::~ GALGAS_globalStructuredConstantList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalStructuredConstantList_2D_element::GALGAS_globalStructuredConstantList_2D_element (const GALGAS_PLMType & inOperand0,
                                                                                                const GALGAS_operandIRList & inOperand1) :
mProperty_mType (inOperand0),
mProperty_mOperandIRList (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalStructuredConstantList_2D_element GALGAS_globalStructuredConstantList_2D_element::constructor_new (const GALGAS_PLMType & inOperand0,
                                                                                                                const GALGAS_operandIRList & inOperand1 
                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_globalStructuredConstantList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_globalStructuredConstantList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_globalStructuredConstantList_2D_element::objectCompare (const GALGAS_globalStructuredConstantList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mType.objectCompare (inOperand.mProperty_mType) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mOperandIRList.objectCompare (inOperand.mProperty_mOperandIRList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_globalStructuredConstantList_2D_element::isValid (void) const {
  return mProperty_mType.isValid () && mProperty_mOperandIRList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_globalStructuredConstantList_2D_element::drop (void) {
  mProperty_mType.drop () ;
  mProperty_mOperandIRList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_globalStructuredConstantList_2D_element::description (C_String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString << "<struct @globalStructuredConstantList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mOperandIRList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMType GALGAS_globalStructuredConstantList_2D_element::getter_mType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandIRList GALGAS_globalStructuredConstantList_2D_element::getter_mOperandIRList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOperandIRList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @globalStructuredConstantList-element type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_globalStructuredConstantList_2D_element ("globalStructuredConstantList-element",
                                                                NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_globalStructuredConstantList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_globalStructuredConstantList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_globalStructuredConstantList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_globalStructuredConstantList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalStructuredConstantList_2D_element GALGAS_globalStructuredConstantList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_globalStructuredConstantList_2D_element result ;
  const GALGAS_globalStructuredConstantList_2D_element * p = (const GALGAS_globalStructuredConstantList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_globalStructuredConstantList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("globalStructuredConstantList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticStringMap_2D_element::GALGAS_staticStringMap_2D_element (void) :
mProperty_lkey (),
mProperty_mIndex () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticStringMap_2D_element::~ GALGAS_staticStringMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticStringMap_2D_element::GALGAS_staticStringMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                      const GALGAS_uint & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mIndex (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticStringMap_2D_element GALGAS_staticStringMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_staticStringMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                            GALGAS_uint::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticStringMap_2D_element GALGAS_staticStringMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                      const GALGAS_uint & inOperand1 
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_staticStringMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_staticStringMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_staticStringMap_2D_element::objectCompare (const GALGAS_staticStringMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mIndex.objectCompare (inOperand.mProperty_mIndex) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_staticStringMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mIndex.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_staticStringMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mIndex.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_staticStringMap_2D_element::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "<struct @staticStringMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mIndex.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_staticStringMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_staticStringMap_2D_element::getter_mIndex (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIndex ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @staticStringMap-element type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_staticStringMap_2D_element ("staticStringMap-element",
                                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_staticStringMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_staticStringMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_staticStringMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_staticStringMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticStringMap_2D_element GALGAS_staticStringMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_staticStringMap_2D_element result ;
  const GALGAS_staticStringMap_2D_element * p = (const GALGAS_staticStringMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_staticStringMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("staticStringMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalConstantMap_2D_element::GALGAS_globalConstantMap_2D_element (void) :
mProperty_lkey (),
mProperty_mValue () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalConstantMap_2D_element::~ GALGAS_globalConstantMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalConstantMap_2D_element::GALGAS_globalConstantMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                          const GALGAS_objectIR & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mValue (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalConstantMap_2D_element GALGAS_globalConstantMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                          const GALGAS_objectIR & inOperand1 
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_globalConstantMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_globalConstantMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_globalConstantMap_2D_element::objectCompare (const GALGAS_globalConstantMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mValue.objectCompare (inOperand.mProperty_mValue) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_globalConstantMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mValue.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_globalConstantMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mValue.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_globalConstantMap_2D_element::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "<struct @globalConstantMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mValue.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_globalConstantMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_globalConstantMap_2D_element::getter_mValue (UNUSED_LOCATION_ARGS) const {
  return mProperty_mValue ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @globalConstantMap-element type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_globalConstantMap_2D_element ("globalConstantMap-element",
                                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_globalConstantMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_globalConstantMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_globalConstantMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_globalConstantMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalConstantMap_2D_element GALGAS_globalConstantMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_globalConstantMap_2D_element result ;
  const GALGAS_globalConstantMap_2D_element * p = (const GALGAS_globalConstantMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_globalConstantMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("globalConstantMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_availableInterruptMap_2D_element::GALGAS_availableInterruptMap_2D_element (void) :
mProperty_lkey (),
mProperty_mInterruptionPanicCode () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_availableInterruptMap_2D_element::~ GALGAS_availableInterruptMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_availableInterruptMap_2D_element::GALGAS_availableInterruptMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                  const GALGAS_interruptionPanicCode & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mInterruptionPanicCode (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_availableInterruptMap_2D_element GALGAS_availableInterruptMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                  const GALGAS_interruptionPanicCode & inOperand1 
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_availableInterruptMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_availableInterruptMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_availableInterruptMap_2D_element::objectCompare (const GALGAS_availableInterruptMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mInterruptionPanicCode.objectCompare (inOperand.mProperty_mInterruptionPanicCode) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_availableInterruptMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mInterruptionPanicCode.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_availableInterruptMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mInterruptionPanicCode.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_availableInterruptMap_2D_element::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "<struct @availableInterruptMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mInterruptionPanicCode.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_availableInterruptMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_interruptionPanicCode GALGAS_availableInterruptMap_2D_element::getter_mInterruptionPanicCode (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInterruptionPanicCode ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @availableInterruptMap-element type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_availableInterruptMap_2D_element ("availableInterruptMap-element",
                                                         NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_availableInterruptMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_availableInterruptMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_availableInterruptMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_availableInterruptMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_availableInterruptMap_2D_element GALGAS_availableInterruptMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_availableInterruptMap_2D_element result ;
  const GALGAS_availableInterruptMap_2D_element * p = (const GALGAS_availableInterruptMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_availableInterruptMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("availableInterruptMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arcAssignmentList_2D_element::GALGAS_arcAssignmentList_2D_element (void) :
mProperty_mPropertyName (),
mProperty_mPropertyType (),
mProperty_mPropertyIndexPath () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arcAssignmentList_2D_element::~ GALGAS_arcAssignmentList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arcAssignmentList_2D_element::GALGAS_arcAssignmentList_2D_element (const GALGAS_string & inOperand0,
                                                                          const GALGAS_PLMType & inOperand1,
                                                                          const GALGAS_uintlist & inOperand2) :
mProperty_mPropertyName (inOperand0),
mProperty_mPropertyType (inOperand1),
mProperty_mPropertyIndexPath (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arcAssignmentList_2D_element GALGAS_arcAssignmentList_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                          const GALGAS_PLMType & inOperand1,
                                                                                          const GALGAS_uintlist & inOperand2 
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_arcAssignmentList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_arcAssignmentList_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_arcAssignmentList_2D_element::objectCompare (const GALGAS_arcAssignmentList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mPropertyName.objectCompare (inOperand.mProperty_mPropertyName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mPropertyType.objectCompare (inOperand.mProperty_mPropertyType) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mPropertyIndexPath.objectCompare (inOperand.mProperty_mPropertyIndexPath) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_arcAssignmentList_2D_element::isValid (void) const {
  return mProperty_mPropertyName.isValid () && mProperty_mPropertyType.isValid () && mProperty_mPropertyIndexPath.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_arcAssignmentList_2D_element::drop (void) {
  mProperty_mPropertyName.drop () ;
  mProperty_mPropertyType.drop () ;
  mProperty_mPropertyIndexPath.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_arcAssignmentList_2D_element::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "<struct @arcAssignmentList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mPropertyName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mPropertyType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mPropertyIndexPath.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_arcAssignmentList_2D_element::getter_mPropertyName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPropertyName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMType GALGAS_arcAssignmentList_2D_element::getter_mPropertyType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPropertyType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uintlist GALGAS_arcAssignmentList_2D_element::getter_mPropertyIndexPath (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPropertyIndexPath ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @arcAssignmentList-element type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_arcAssignmentList_2D_element ("arcAssignmentList-element",
                                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_arcAssignmentList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arcAssignmentList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_arcAssignmentList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_arcAssignmentList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arcAssignmentList_2D_element GALGAS_arcAssignmentList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_arcAssignmentList_2D_element result ;
  const GALGAS_arcAssignmentList_2D_element * p = (const GALGAS_arcAssignmentList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_arcAssignmentList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("arcAssignmentList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyMap_2D_element::GALGAS_propertyMap_2D_element (void) :
mProperty_lkey (),
mProperty_mIsPublic (),
mProperty_mAccess () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyMap_2D_element::~ GALGAS_propertyMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyMap_2D_element::GALGAS_propertyMap_2D_element (const GALGAS_lstring & inOperand0,
                                                              const GALGAS_bool & inOperand1,
                                                              const GALGAS_propertyAccessKind & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mIsPublic (inOperand1),
mProperty_mAccess (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyMap_2D_element GALGAS_propertyMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                              const GALGAS_bool & inOperand1,
                                                                              const GALGAS_propertyAccessKind & inOperand2 
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
    result = mProperty_mAccess.objectCompare (inOperand.mProperty_mAccess) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_propertyMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mIsPublic.isValid () && mProperty_mAccess.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_propertyMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mIsPublic.drop () ;
  mProperty_mAccess.drop () ;
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
    mProperty_mAccess.description (ioString, inIndentation+1) ;
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

GALGAS_propertyAccessKind GALGAS_propertyMap_2D_element::getter_mAccess (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAccess ;
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

GALGAS_constructorSignature_2D_element::GALGAS_constructorSignature_2D_element (void) :
mProperty_mSelector (),
mProperty_mType (),
mProperty_mFieldIndex () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorSignature_2D_element::~ GALGAS_constructorSignature_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorSignature_2D_element::GALGAS_constructorSignature_2D_element (const GALGAS_string & inOperand0,
                                                                                const GALGAS_PLMType & inOperand1,
                                                                                const GALGAS_uint & inOperand2) :
mProperty_mSelector (inOperand0),
mProperty_mType (inOperand1),
mProperty_mFieldIndex (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorSignature_2D_element GALGAS_constructorSignature_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                const GALGAS_PLMType & inOperand1,
                                                                                                const GALGAS_uint & inOperand2 
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_constructorSignature_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_constructorSignature_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_constructorSignature_2D_element::objectCompare (const GALGAS_constructorSignature_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mSelector.objectCompare (inOperand.mProperty_mSelector) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mType.objectCompare (inOperand.mProperty_mType) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFieldIndex.objectCompare (inOperand.mProperty_mFieldIndex) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_constructorSignature_2D_element::isValid (void) const {
  return mProperty_mSelector.isValid () && mProperty_mType.isValid () && mProperty_mFieldIndex.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_constructorSignature_2D_element::drop (void) {
  mProperty_mSelector.drop () ;
  mProperty_mType.drop () ;
  mProperty_mFieldIndex.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_constructorSignature_2D_element::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "<struct @constructorSignature-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mSelector.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFieldIndex.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_constructorSignature_2D_element::getter_mSelector (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSelector ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMType GALGAS_constructorSignature_2D_element::getter_mType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_constructorSignature_2D_element::getter_mFieldIndex (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFieldIndex ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @constructorSignature-element type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_constructorSignature_2D_element ("constructorSignature-element",
                                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_constructorSignature_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constructorSignature_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_constructorSignature_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_constructorSignature_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorSignature_2D_element GALGAS_constructorSignature_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_constructorSignature_2D_element result ;
  const GALGAS_constructorSignature_2D_element * p = (const GALGAS_constructorSignature_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_constructorSignature_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("constructorSignature-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorMap_2D_element::GALGAS_constructorMap_2D_element (void) :
mProperty_lkey (),
mProperty_mSignature (),
mProperty_mInitValue () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorMap_2D_element::~ GALGAS_constructorMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorMap_2D_element::GALGAS_constructorMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                    const GALGAS_constructorSignature & inOperand1,
                                                                    const GALGAS_constructorValue & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mSignature (inOperand1),
mProperty_mInitValue (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorMap_2D_element GALGAS_constructorMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                    const GALGAS_constructorSignature & inOperand1,
                                                                                    const GALGAS_constructorValue & inOperand2 
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_constructorMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_constructorMap_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_constructorMap_2D_element::objectCompare (const GALGAS_constructorMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSignature.objectCompare (inOperand.mProperty_mSignature) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mInitValue.objectCompare (inOperand.mProperty_mInitValue) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_constructorMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mSignature.isValid () && mProperty_mInitValue.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_constructorMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mSignature.drop () ;
  mProperty_mInitValue.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_constructorMap_2D_element::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "<struct @constructorMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSignature.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mInitValue.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_constructorMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorSignature GALGAS_constructorMap_2D_element::getter_mSignature (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSignature ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorValue GALGAS_constructorMap_2D_element::getter_mInitValue (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInitValue ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @constructorMap-element type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_constructorMap_2D_element ("constructorMap-element",
                                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_constructorMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constructorMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_constructorMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_constructorMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorMap_2D_element GALGAS_constructorMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_constructorMap_2D_element result ;
  const GALGAS_constructorMap_2D_element * p = (const GALGAS_constructorMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_constructorMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("constructorMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineFormalArgumentListIR_2D_element::GALGAS_routineFormalArgumentListIR_2D_element (void) :
mProperty_mFormalArgumentKind (),
mProperty_mFormalArgumentType (),
mProperty_mFormalArgumentName () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineFormalArgumentListIR_2D_element::~ GALGAS_routineFormalArgumentListIR_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineFormalArgumentListIR_2D_element::GALGAS_routineFormalArgumentListIR_2D_element (const GALGAS_procFormalArgumentPassingMode & inOperand0,
                                                                                              const GALGAS_PLMType & inOperand1,
                                                                                              const GALGAS_string & inOperand2) :
mProperty_mFormalArgumentKind (inOperand0),
mProperty_mFormalArgumentType (inOperand1),
mProperty_mFormalArgumentName (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineFormalArgumentListIR_2D_element GALGAS_routineFormalArgumentListIR_2D_element::constructor_new (const GALGAS_procFormalArgumentPassingMode & inOperand0,
                                                                                                              const GALGAS_PLMType & inOperand1,
                                                                                                              const GALGAS_string & inOperand2 
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_routineFormalArgumentListIR_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_routineFormalArgumentListIR_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_routineFormalArgumentListIR_2D_element::objectCompare (const GALGAS_routineFormalArgumentListIR_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mFormalArgumentKind.objectCompare (inOperand.mProperty_mFormalArgumentKind) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFormalArgumentType.objectCompare (inOperand.mProperty_mFormalArgumentType) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFormalArgumentName.objectCompare (inOperand.mProperty_mFormalArgumentName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_routineFormalArgumentListIR_2D_element::isValid (void) const {
  return mProperty_mFormalArgumentKind.isValid () && mProperty_mFormalArgumentType.isValid () && mProperty_mFormalArgumentName.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineFormalArgumentListIR_2D_element::drop (void) {
  mProperty_mFormalArgumentKind.drop () ;
  mProperty_mFormalArgumentType.drop () ;
  mProperty_mFormalArgumentName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineFormalArgumentListIR_2D_element::description (C_String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString << "<struct @routineFormalArgumentListIR-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mFormalArgumentKind.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFormalArgumentType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFormalArgumentName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentPassingMode GALGAS_routineFormalArgumentListIR_2D_element::getter_mFormalArgumentKind (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFormalArgumentKind ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMType GALGAS_routineFormalArgumentListIR_2D_element::getter_mFormalArgumentType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFormalArgumentType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_routineFormalArgumentListIR_2D_element::getter_mFormalArgumentName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFormalArgumentName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @routineFormalArgumentListIR-element type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_routineFormalArgumentListIR_2D_element ("routineFormalArgumentListIR-element",
                                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_routineFormalArgumentListIR_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineFormalArgumentListIR_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_routineFormalArgumentListIR_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_routineFormalArgumentListIR_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineFormalArgumentListIR_2D_element GALGAS_routineFormalArgumentListIR_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_routineFormalArgumentListIR_2D_element result ;
  const GALGAS_routineFormalArgumentListIR_2D_element * p = (const GALGAS_routineFormalArgumentListIR_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_routineFormalArgumentListIR_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineFormalArgumentListIR-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allocaList_2D_element::GALGAS_allocaList_2D_element (void) :
mProperty_mVarLLVMName (),
mProperty_mLLVMType (),
mProperty_mFormalInputArgument () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allocaList_2D_element::~ GALGAS_allocaList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allocaList_2D_element::GALGAS_allocaList_2D_element (const GALGAS_string & inOperand0,
                                                            const GALGAS_PLMType & inOperand1,
                                                            const GALGAS_bool & inOperand2) :
mProperty_mVarLLVMName (inOperand0),
mProperty_mLLVMType (inOperand1),
mProperty_mFormalInputArgument (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allocaList_2D_element GALGAS_allocaList_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                            const GALGAS_PLMType & inOperand1,
                                                                            const GALGAS_bool & inOperand2 
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_allocaList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_allocaList_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_allocaList_2D_element::objectCompare (const GALGAS_allocaList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mVarLLVMName.objectCompare (inOperand.mProperty_mVarLLVMName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mLLVMType.objectCompare (inOperand.mProperty_mLLVMType) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFormalInputArgument.objectCompare (inOperand.mProperty_mFormalInputArgument) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_allocaList_2D_element::isValid (void) const {
  return mProperty_mVarLLVMName.isValid () && mProperty_mLLVMType.isValid () && mProperty_mFormalInputArgument.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allocaList_2D_element::drop (void) {
  mProperty_mVarLLVMName.drop () ;
  mProperty_mLLVMType.drop () ;
  mProperty_mFormalInputArgument.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allocaList_2D_element::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "<struct @allocaList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mVarLLVMName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mLLVMType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFormalInputArgument.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_allocaList_2D_element::getter_mVarLLVMName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mVarLLVMName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMType GALGAS_allocaList_2D_element::getter_mLLVMType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLLVMType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_allocaList_2D_element::getter_mFormalInputArgument (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFormalInputArgument ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @allocaList-element type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_allocaList_2D_element ("allocaList-element",
                                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_allocaList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_allocaList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_allocaList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_allocaList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allocaList_2D_element GALGAS_allocaList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_allocaList_2D_element result ;
  const GALGAS_allocaList_2D_element * p = (const GALGAS_allocaList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_allocaList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("allocaList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalConstantMapIR_2D_element::GALGAS_globalConstantMapIR_2D_element (void) :
mProperty_lkey (),
mProperty_mType (),
mProperty_mSourceExpression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalConstantMapIR_2D_element::~ GALGAS_globalConstantMapIR_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalConstantMapIR_2D_element::GALGAS_globalConstantMapIR_2D_element (const GALGAS_lstring & inOperand0,
                                                                              const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                              const GALGAS_objectIR & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mType (inOperand1),
mProperty_mSourceExpression (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalConstantMapIR_2D_element GALGAS_globalConstantMapIR_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                              const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                                              const GALGAS_objectIR & inOperand2 
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
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mType.objectCompare (inOperand.mProperty_mType) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSourceExpression.objectCompare (inOperand.mProperty_mSourceExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_globalConstantMapIR_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mType.isValid () && mProperty_mSourceExpression.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_globalConstantMapIR_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mType.drop () ;
  mProperty_mSourceExpression.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_globalConstantMapIR_2D_element::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "<struct @globalConstantMapIR-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSourceExpression.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_globalConstantMapIR_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_globalConstantMapIR_2D_element::getter_mType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_globalConstantMapIR_2D_element::getter_mSourceExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSourceExpression ;
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

GALGAS_interruptMapIR_2D_element::GALGAS_interruptMapIR_2D_element (void) :
mProperty_lkey (),
mProperty_mSelfType (),
mProperty_mGlobalVariableName (),
mProperty_mAllocaList (),
mProperty_mInstructionGenerationList (),
mProperty_mMode () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_interruptMapIR_2D_element::~ GALGAS_interruptMapIR_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_interruptMapIR_2D_element::GALGAS_interruptMapIR_2D_element (const GALGAS_lstring & inOperand0,
                                                                    const GALGAS_PLMType & inOperand1,
                                                                    const GALGAS_string & inOperand2,
                                                                    const GALGAS_allocaList & inOperand3,
                                                                    const GALGAS_instructionListIR & inOperand4,
                                                                    const GALGAS_mode & inOperand5) :
mProperty_lkey (inOperand0),
mProperty_mSelfType (inOperand1),
mProperty_mGlobalVariableName (inOperand2),
mProperty_mAllocaList (inOperand3),
mProperty_mInstructionGenerationList (inOperand4),
mProperty_mMode (inOperand5) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_interruptMapIR_2D_element GALGAS_interruptMapIR_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                    const GALGAS_PLMType & inOperand1,
                                                                                    const GALGAS_string & inOperand2,
                                                                                    const GALGAS_allocaList & inOperand3,
                                                                                    const GALGAS_instructionListIR & inOperand4,
                                                                                    const GALGAS_mode & inOperand5 
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_interruptMapIR_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid ()) {
    result = GALGAS_interruptMapIR_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_interruptMapIR_2D_element::objectCompare (const GALGAS_interruptMapIR_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSelfType.objectCompare (inOperand.mProperty_mSelfType) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mGlobalVariableName.objectCompare (inOperand.mProperty_mGlobalVariableName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mAllocaList.objectCompare (inOperand.mProperty_mAllocaList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mInstructionGenerationList.objectCompare (inOperand.mProperty_mInstructionGenerationList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mMode.objectCompare (inOperand.mProperty_mMode) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_interruptMapIR_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mSelfType.isValid () && mProperty_mGlobalVariableName.isValid () && mProperty_mAllocaList.isValid () && mProperty_mInstructionGenerationList.isValid () && mProperty_mMode.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_interruptMapIR_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mSelfType.drop () ;
  mProperty_mGlobalVariableName.drop () ;
  mProperty_mAllocaList.drop () ;
  mProperty_mInstructionGenerationList.drop () ;
  mProperty_mMode.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_interruptMapIR_2D_element::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "<struct @interruptMapIR-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSelfType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mGlobalVariableName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mAllocaList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mInstructionGenerationList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mMode.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_interruptMapIR_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMType GALGAS_interruptMapIR_2D_element::getter_mSelfType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSelfType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_interruptMapIR_2D_element::getter_mGlobalVariableName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGlobalVariableName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allocaList GALGAS_interruptMapIR_2D_element::getter_mAllocaList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAllocaList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR GALGAS_interruptMapIR_2D_element::getter_mInstructionGenerationList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInstructionGenerationList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mode GALGAS_interruptMapIR_2D_element::getter_mMode (UNUSED_LOCATION_ARGS) const {
  return mProperty_mMode ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @interruptMapIR-element type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_interruptMapIR_2D_element ("interruptMapIR-element",
                                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_interruptMapIR_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_interruptMapIR_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_interruptMapIR_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_interruptMapIR_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_interruptMapIR_2D_element GALGAS_interruptMapIR_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_interruptMapIR_2D_element result ;
  const GALGAS_interruptMapIR_2D_element * p = (const GALGAS_interruptMapIR_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_interruptMapIR_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("interruptMapIR-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_orderedTypeList_2D_element::GALGAS_orderedTypeList_2D_element (void) :
mProperty_mType (),
mProperty_mIndex () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_orderedTypeList_2D_element::~ GALGAS_orderedTypeList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_orderedTypeList_2D_element::GALGAS_orderedTypeList_2D_element (const GALGAS_PLMType & inOperand0,
                                                                      const GALGAS_uint & inOperand1) :
mProperty_mType (inOperand0),
mProperty_mIndex (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_orderedTypeList_2D_element GALGAS_orderedTypeList_2D_element::constructor_new (const GALGAS_PLMType & inOperand0,
                                                                                      const GALGAS_uint & inOperand1 
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_orderedTypeList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_orderedTypeList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_orderedTypeList_2D_element::objectCompare (const GALGAS_orderedTypeList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mType.objectCompare (inOperand.mProperty_mType) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mIndex.objectCompare (inOperand.mProperty_mIndex) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_orderedTypeList_2D_element::isValid (void) const {
  return mProperty_mType.isValid () && mProperty_mIndex.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_orderedTypeList_2D_element::drop (void) {
  mProperty_mType.drop () ;
  mProperty_mIndex.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_orderedTypeList_2D_element::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "<struct @orderedTypeList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mIndex.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMType GALGAS_orderedTypeList_2D_element::getter_mType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_orderedTypeList_2D_element::getter_mIndex (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIndex ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @orderedTypeList-element type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_orderedTypeList_2D_element ("orderedTypeList-element",
                                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_orderedTypeList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_orderedTypeList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_orderedTypeList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_orderedTypeList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_orderedTypeList_2D_element GALGAS_orderedTypeList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_orderedTypeList_2D_element result ;
  const GALGAS_orderedTypeList_2D_element * p = (const GALGAS_orderedTypeList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_orderedTypeList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("orderedTypeList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_targetParameters::GALGAS_targetParameters (void) :
mProperty_mConfigurationLocation (),
mProperty_mPython_5F_utilityToolList (),
mProperty_mPython_5F_build (),
mProperty_mLinkerScript (),
mProperty_mPointerSize (),
mProperty_mHandleDynamicArray (),
mProperty_mSystemStackSize (),
mProperty_mStackedUserRegisterOnInterruptByteSize (),
mProperty_mNopInstructionStringInLLVM (),
mProperty_mBitbandRegisterBaseAddress (),
mProperty_mBitbandRegisterEndAddress (),
mProperty_mBitbandRegisterRelocationAddress (),
mProperty_mBitbandRegisterOffsetMultiplier (),
mProperty_mBitbandRegisterBitMultiplier (),
mProperty_mSectionHandler (),
mProperty_mSectionPushedRegisterByteSize (),
mProperty_mSectionDispatcherHeader (),
mProperty_mSectionDispatcherEntry (),
mProperty_mSectionDispatcherInvocationFromAnyMode (),
mProperty_mSectionDispatcherInvocationFromUserMode (),
mProperty_m_5F_C_5F_definitionFiles (),
mProperty_m_5F_S_5F_definitionFiles (),
mProperty_m_5F_LL_5F_definitionFiles (),
mProperty_mXtrInterruptHandler (),
mProperty_mUndefinedInterruptHandler (),
mProperty_mServiceHandler (),
mProperty_mServicePushedRegisterByteSize (),
mProperty_mServiceDispatcherEntry (),
mProperty_mServiceDispatcherHeader (),
mProperty_mServiceEntryNoReturnedValue (),
mProperty_mServiceEntryWithReturnValue () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_targetParameters::~ GALGAS_targetParameters (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_targetParameters::GALGAS_targetParameters (const GALGAS_location & inOperand0,
                                                  const GALGAS__32_lstringlist & inOperand1,
                                                  const GALGAS_lstring & inOperand2,
                                                  const GALGAS_lstring & inOperand3,
                                                  const GALGAS_uint & inOperand4,
                                                  const GALGAS_bool & inOperand5,
                                                  const GALGAS_lbigint & inOperand6,
                                                  const GALGAS_lbigint & inOperand7,
                                                  const GALGAS_lstring & inOperand8,
                                                  const GALGAS_lbigint & inOperand9,
                                                  const GALGAS_lbigint & inOperand10,
                                                  const GALGAS_lbigint & inOperand11,
                                                  const GALGAS_lbigint & inOperand12,
                                                  const GALGAS_lbigint & inOperand13,
                                                  const GALGAS_lstring & inOperand14,
                                                  const GALGAS_lbigint & inOperand15,
                                                  const GALGAS_lstring & inOperand16,
                                                  const GALGAS_lstring & inOperand17,
                                                  const GALGAS_lstring & inOperand18,
                                                  const GALGAS_lstring & inOperand19,
                                                  const GALGAS_lstringlist & inOperand20,
                                                  const GALGAS_lstringlist & inOperand21,
                                                  const GALGAS_lstringlist & inOperand22,
                                                  const GALGAS_lstring & inOperand23,
                                                  const GALGAS_lstring & inOperand24,
                                                  const GALGAS_lstring & inOperand25,
                                                  const GALGAS_lbigint & inOperand26,
                                                  const GALGAS_lstring & inOperand27,
                                                  const GALGAS_lstring & inOperand28,
                                                  const GALGAS_lstring & inOperand29,
                                                  const GALGAS_lstring & inOperand30) :
mProperty_mConfigurationLocation (inOperand0),
mProperty_mPython_5F_utilityToolList (inOperand1),
mProperty_mPython_5F_build (inOperand2),
mProperty_mLinkerScript (inOperand3),
mProperty_mPointerSize (inOperand4),
mProperty_mHandleDynamicArray (inOperand5),
mProperty_mSystemStackSize (inOperand6),
mProperty_mStackedUserRegisterOnInterruptByteSize (inOperand7),
mProperty_mNopInstructionStringInLLVM (inOperand8),
mProperty_mBitbandRegisterBaseAddress (inOperand9),
mProperty_mBitbandRegisterEndAddress (inOperand10),
mProperty_mBitbandRegisterRelocationAddress (inOperand11),
mProperty_mBitbandRegisterOffsetMultiplier (inOperand12),
mProperty_mBitbandRegisterBitMultiplier (inOperand13),
mProperty_mSectionHandler (inOperand14),
mProperty_mSectionPushedRegisterByteSize (inOperand15),
mProperty_mSectionDispatcherHeader (inOperand16),
mProperty_mSectionDispatcherEntry (inOperand17),
mProperty_mSectionDispatcherInvocationFromAnyMode (inOperand18),
mProperty_mSectionDispatcherInvocationFromUserMode (inOperand19),
mProperty_m_5F_C_5F_definitionFiles (inOperand20),
mProperty_m_5F_S_5F_definitionFiles (inOperand21),
mProperty_m_5F_LL_5F_definitionFiles (inOperand22),
mProperty_mXtrInterruptHandler (inOperand23),
mProperty_mUndefinedInterruptHandler (inOperand24),
mProperty_mServiceHandler (inOperand25),
mProperty_mServicePushedRegisterByteSize (inOperand26),
mProperty_mServiceDispatcherEntry (inOperand27),
mProperty_mServiceDispatcherHeader (inOperand28),
mProperty_mServiceEntryNoReturnedValue (inOperand29),
mProperty_mServiceEntryWithReturnValue (inOperand30) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_targetParameters GALGAS_targetParameters::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_targetParameters (GALGAS_location::constructor_nowhere (HERE),
                                  GALGAS__32_lstringlist::constructor_emptyList (HERE),
                                  GALGAS_lstring::constructor_default (HERE),
                                  GALGAS_lstring::constructor_default (HERE),
                                  GALGAS_uint::constructor_default (HERE),
                                  GALGAS_bool::constructor_default (HERE),
                                  GALGAS_lbigint::constructor_default (HERE),
                                  GALGAS_lbigint::constructor_default (HERE),
                                  GALGAS_lstring::constructor_default (HERE),
                                  GALGAS_lbigint::constructor_default (HERE),
                                  GALGAS_lbigint::constructor_default (HERE),
                                  GALGAS_lbigint::constructor_default (HERE),
                                  GALGAS_lbigint::constructor_default (HERE),
                                  GALGAS_lbigint::constructor_default (HERE),
                                  GALGAS_lstring::constructor_default (HERE),
                                  GALGAS_lbigint::constructor_default (HERE),
                                  GALGAS_lstring::constructor_default (HERE),
                                  GALGAS_lstring::constructor_default (HERE),
                                  GALGAS_lstring::constructor_default (HERE),
                                  GALGAS_lstring::constructor_default (HERE),
                                  GALGAS_lstringlist::constructor_emptyList (HERE),
                                  GALGAS_lstringlist::constructor_emptyList (HERE),
                                  GALGAS_lstringlist::constructor_emptyList (HERE),
                                  GALGAS_lstring::constructor_default (HERE),
                                  GALGAS_lstring::constructor_default (HERE),
                                  GALGAS_lstring::constructor_default (HERE),
                                  GALGAS_lbigint::constructor_default (HERE),
                                  GALGAS_lstring::constructor_default (HERE),
                                  GALGAS_lstring::constructor_default (HERE),
                                  GALGAS_lstring::constructor_default (HERE),
                                  GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_targetParameters GALGAS_targetParameters::constructor_new (const GALGAS_location & inOperand0,
                                                                  const GALGAS__32_lstringlist & inOperand1,
                                                                  const GALGAS_lstring & inOperand2,
                                                                  const GALGAS_lstring & inOperand3,
                                                                  const GALGAS_uint & inOperand4,
                                                                  const GALGAS_bool & inOperand5,
                                                                  const GALGAS_lbigint & inOperand6,
                                                                  const GALGAS_lbigint & inOperand7,
                                                                  const GALGAS_lstring & inOperand8,
                                                                  const GALGAS_lbigint & inOperand9,
                                                                  const GALGAS_lbigint & inOperand10,
                                                                  const GALGAS_lbigint & inOperand11,
                                                                  const GALGAS_lbigint & inOperand12,
                                                                  const GALGAS_lbigint & inOperand13,
                                                                  const GALGAS_lstring & inOperand14,
                                                                  const GALGAS_lbigint & inOperand15,
                                                                  const GALGAS_lstring & inOperand16,
                                                                  const GALGAS_lstring & inOperand17,
                                                                  const GALGAS_lstring & inOperand18,
                                                                  const GALGAS_lstring & inOperand19,
                                                                  const GALGAS_lstringlist & inOperand20,
                                                                  const GALGAS_lstringlist & inOperand21,
                                                                  const GALGAS_lstringlist & inOperand22,
                                                                  const GALGAS_lstring & inOperand23,
                                                                  const GALGAS_lstring & inOperand24,
                                                                  const GALGAS_lstring & inOperand25,
                                                                  const GALGAS_lbigint & inOperand26,
                                                                  const GALGAS_lstring & inOperand27,
                                                                  const GALGAS_lstring & inOperand28,
                                                                  const GALGAS_lstring & inOperand29,
                                                                  const GALGAS_lstring & inOperand30 
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_targetParameters result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid () && inOperand10.isValid () && inOperand11.isValid () && inOperand12.isValid () && inOperand13.isValid () && inOperand14.isValid () && inOperand15.isValid () && inOperand16.isValid () && inOperand17.isValid () && inOperand18.isValid () && inOperand19.isValid () && inOperand20.isValid () && inOperand21.isValid () && inOperand22.isValid () && inOperand23.isValid () && inOperand24.isValid () && inOperand25.isValid () && inOperand26.isValid () && inOperand27.isValid () && inOperand28.isValid () && inOperand29.isValid () && inOperand30.isValid ()) {
    result = GALGAS_targetParameters (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10, inOperand11, inOperand12, inOperand13, inOperand14, inOperand15, inOperand16, inOperand17, inOperand18, inOperand19, inOperand20, inOperand21, inOperand22, inOperand23, inOperand24, inOperand25, inOperand26, inOperand27, inOperand28, inOperand29, inOperand30) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_targetParameters::objectCompare (const GALGAS_targetParameters & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mConfigurationLocation.objectCompare (inOperand.mProperty_mConfigurationLocation) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mPython_5F_utilityToolList.objectCompare (inOperand.mProperty_mPython_5F_utilityToolList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mPython_5F_build.objectCompare (inOperand.mProperty_mPython_5F_build) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mLinkerScript.objectCompare (inOperand.mProperty_mLinkerScript) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mPointerSize.objectCompare (inOperand.mProperty_mPointerSize) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mHandleDynamicArray.objectCompare (inOperand.mProperty_mHandleDynamicArray) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSystemStackSize.objectCompare (inOperand.mProperty_mSystemStackSize) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mStackedUserRegisterOnInterruptByteSize.objectCompare (inOperand.mProperty_mStackedUserRegisterOnInterruptByteSize) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mNopInstructionStringInLLVM.objectCompare (inOperand.mProperty_mNopInstructionStringInLLVM) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBitbandRegisterBaseAddress.objectCompare (inOperand.mProperty_mBitbandRegisterBaseAddress) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBitbandRegisterEndAddress.objectCompare (inOperand.mProperty_mBitbandRegisterEndAddress) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBitbandRegisterRelocationAddress.objectCompare (inOperand.mProperty_mBitbandRegisterRelocationAddress) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBitbandRegisterOffsetMultiplier.objectCompare (inOperand.mProperty_mBitbandRegisterOffsetMultiplier) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBitbandRegisterBitMultiplier.objectCompare (inOperand.mProperty_mBitbandRegisterBitMultiplier) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSectionHandler.objectCompare (inOperand.mProperty_mSectionHandler) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSectionPushedRegisterByteSize.objectCompare (inOperand.mProperty_mSectionPushedRegisterByteSize) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSectionDispatcherHeader.objectCompare (inOperand.mProperty_mSectionDispatcherHeader) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSectionDispatcherEntry.objectCompare (inOperand.mProperty_mSectionDispatcherEntry) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSectionDispatcherInvocationFromAnyMode.objectCompare (inOperand.mProperty_mSectionDispatcherInvocationFromAnyMode) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSectionDispatcherInvocationFromUserMode.objectCompare (inOperand.mProperty_mSectionDispatcherInvocationFromUserMode) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_m_5F_C_5F_definitionFiles.objectCompare (inOperand.mProperty_m_5F_C_5F_definitionFiles) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_m_5F_S_5F_definitionFiles.objectCompare (inOperand.mProperty_m_5F_S_5F_definitionFiles) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_m_5F_LL_5F_definitionFiles.objectCompare (inOperand.mProperty_m_5F_LL_5F_definitionFiles) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mXtrInterruptHandler.objectCompare (inOperand.mProperty_mXtrInterruptHandler) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mUndefinedInterruptHandler.objectCompare (inOperand.mProperty_mUndefinedInterruptHandler) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mServiceHandler.objectCompare (inOperand.mProperty_mServiceHandler) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mServicePushedRegisterByteSize.objectCompare (inOperand.mProperty_mServicePushedRegisterByteSize) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mServiceDispatcherEntry.objectCompare (inOperand.mProperty_mServiceDispatcherEntry) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mServiceDispatcherHeader.objectCompare (inOperand.mProperty_mServiceDispatcherHeader) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mServiceEntryNoReturnedValue.objectCompare (inOperand.mProperty_mServiceEntryNoReturnedValue) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mServiceEntryWithReturnValue.objectCompare (inOperand.mProperty_mServiceEntryWithReturnValue) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_targetParameters::isValid (void) const {
  return mProperty_mConfigurationLocation.isValid () && mProperty_mPython_5F_utilityToolList.isValid () && mProperty_mPython_5F_build.isValid () && mProperty_mLinkerScript.isValid () && mProperty_mPointerSize.isValid () && mProperty_mHandleDynamicArray.isValid () && mProperty_mSystemStackSize.isValid () && mProperty_mStackedUserRegisterOnInterruptByteSize.isValid () && mProperty_mNopInstructionStringInLLVM.isValid () && mProperty_mBitbandRegisterBaseAddress.isValid () && mProperty_mBitbandRegisterEndAddress.isValid () && mProperty_mBitbandRegisterRelocationAddress.isValid () && mProperty_mBitbandRegisterOffsetMultiplier.isValid () && mProperty_mBitbandRegisterBitMultiplier.isValid () && mProperty_mSectionHandler.isValid () && mProperty_mSectionPushedRegisterByteSize.isValid () && mProperty_mSectionDispatcherHeader.isValid () && mProperty_mSectionDispatcherEntry.isValid () && mProperty_mSectionDispatcherInvocationFromAnyMode.isValid () && mProperty_mSectionDispatcherInvocationFromUserMode.isValid () && mProperty_m_5F_C_5F_definitionFiles.isValid () && mProperty_m_5F_S_5F_definitionFiles.isValid () && mProperty_m_5F_LL_5F_definitionFiles.isValid () && mProperty_mXtrInterruptHandler.isValid () && mProperty_mUndefinedInterruptHandler.isValid () && mProperty_mServiceHandler.isValid () && mProperty_mServicePushedRegisterByteSize.isValid () && mProperty_mServiceDispatcherEntry.isValid () && mProperty_mServiceDispatcherHeader.isValid () && mProperty_mServiceEntryNoReturnedValue.isValid () && mProperty_mServiceEntryWithReturnValue.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_targetParameters::drop (void) {
  mProperty_mConfigurationLocation.drop () ;
  mProperty_mPython_5F_utilityToolList.drop () ;
  mProperty_mPython_5F_build.drop () ;
  mProperty_mLinkerScript.drop () ;
  mProperty_mPointerSize.drop () ;
  mProperty_mHandleDynamicArray.drop () ;
  mProperty_mSystemStackSize.drop () ;
  mProperty_mStackedUserRegisterOnInterruptByteSize.drop () ;
  mProperty_mNopInstructionStringInLLVM.drop () ;
  mProperty_mBitbandRegisterBaseAddress.drop () ;
  mProperty_mBitbandRegisterEndAddress.drop () ;
  mProperty_mBitbandRegisterRelocationAddress.drop () ;
  mProperty_mBitbandRegisterOffsetMultiplier.drop () ;
  mProperty_mBitbandRegisterBitMultiplier.drop () ;
  mProperty_mSectionHandler.drop () ;
  mProperty_mSectionPushedRegisterByteSize.drop () ;
  mProperty_mSectionDispatcherHeader.drop () ;
  mProperty_mSectionDispatcherEntry.drop () ;
  mProperty_mSectionDispatcherInvocationFromAnyMode.drop () ;
  mProperty_mSectionDispatcherInvocationFromUserMode.drop () ;
  mProperty_m_5F_C_5F_definitionFiles.drop () ;
  mProperty_m_5F_S_5F_definitionFiles.drop () ;
  mProperty_m_5F_LL_5F_definitionFiles.drop () ;
  mProperty_mXtrInterruptHandler.drop () ;
  mProperty_mUndefinedInterruptHandler.drop () ;
  mProperty_mServiceHandler.drop () ;
  mProperty_mServicePushedRegisterByteSize.drop () ;
  mProperty_mServiceDispatcherEntry.drop () ;
  mProperty_mServiceDispatcherHeader.drop () ;
  mProperty_mServiceEntryNoReturnedValue.drop () ;
  mProperty_mServiceEntryWithReturnValue.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_targetParameters::description (C_String & ioString,
                                           const int32_t inIndentation) const {
  ioString << "<struct @targetParameters:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mConfigurationLocation.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mPython_5F_utilityToolList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mPython_5F_build.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mLinkerScript.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mPointerSize.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mHandleDynamicArray.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSystemStackSize.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mStackedUserRegisterOnInterruptByteSize.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mNopInstructionStringInLLVM.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBitbandRegisterBaseAddress.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBitbandRegisterEndAddress.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBitbandRegisterRelocationAddress.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBitbandRegisterOffsetMultiplier.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBitbandRegisterBitMultiplier.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSectionHandler.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSectionPushedRegisterByteSize.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSectionDispatcherHeader.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSectionDispatcherEntry.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSectionDispatcherInvocationFromAnyMode.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSectionDispatcherInvocationFromUserMode.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_m_5F_C_5F_definitionFiles.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_m_5F_S_5F_definitionFiles.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_m_5F_LL_5F_definitionFiles.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mXtrInterruptHandler.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mUndefinedInterruptHandler.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mServiceHandler.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mServicePushedRegisterByteSize.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mServiceDispatcherEntry.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mServiceDispatcherHeader.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mServiceEntryNoReturnedValue.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mServiceEntryWithReturnValue.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_targetParameters::getter_mConfigurationLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mConfigurationLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS__32_lstringlist GALGAS_targetParameters::getter_mPython_5F_utilityToolList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPython_5F_utilityToolList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_targetParameters::getter_mPython_5F_build (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPython_5F_build ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_targetParameters::getter_mLinkerScript (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLinkerScript ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_targetParameters::getter_mPointerSize (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPointerSize ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_targetParameters::getter_mHandleDynamicArray (UNUSED_LOCATION_ARGS) const {
  return mProperty_mHandleDynamicArray ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbigint GALGAS_targetParameters::getter_mSystemStackSize (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSystemStackSize ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbigint GALGAS_targetParameters::getter_mStackedUserRegisterOnInterruptByteSize (UNUSED_LOCATION_ARGS) const {
  return mProperty_mStackedUserRegisterOnInterruptByteSize ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_targetParameters::getter_mNopInstructionStringInLLVM (UNUSED_LOCATION_ARGS) const {
  return mProperty_mNopInstructionStringInLLVM ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbigint GALGAS_targetParameters::getter_mBitbandRegisterBaseAddress (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBitbandRegisterBaseAddress ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbigint GALGAS_targetParameters::getter_mBitbandRegisterEndAddress (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBitbandRegisterEndAddress ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbigint GALGAS_targetParameters::getter_mBitbandRegisterRelocationAddress (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBitbandRegisterRelocationAddress ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbigint GALGAS_targetParameters::getter_mBitbandRegisterOffsetMultiplier (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBitbandRegisterOffsetMultiplier ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbigint GALGAS_targetParameters::getter_mBitbandRegisterBitMultiplier (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBitbandRegisterBitMultiplier ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_targetParameters::getter_mSectionHandler (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSectionHandler ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbigint GALGAS_targetParameters::getter_mSectionPushedRegisterByteSize (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSectionPushedRegisterByteSize ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_targetParameters::getter_mSectionDispatcherHeader (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSectionDispatcherHeader ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_targetParameters::getter_mSectionDispatcherEntry (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSectionDispatcherEntry ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_targetParameters::getter_mSectionDispatcherInvocationFromAnyMode (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSectionDispatcherInvocationFromAnyMode ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_targetParameters::getter_mSectionDispatcherInvocationFromUserMode (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSectionDispatcherInvocationFromUserMode ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_targetParameters::getter_m_5F_C_5F_definitionFiles (UNUSED_LOCATION_ARGS) const {
  return mProperty_m_5F_C_5F_definitionFiles ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_targetParameters::getter_m_5F_S_5F_definitionFiles (UNUSED_LOCATION_ARGS) const {
  return mProperty_m_5F_S_5F_definitionFiles ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_targetParameters::getter_m_5F_LL_5F_definitionFiles (UNUSED_LOCATION_ARGS) const {
  return mProperty_m_5F_LL_5F_definitionFiles ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_targetParameters::getter_mXtrInterruptHandler (UNUSED_LOCATION_ARGS) const {
  return mProperty_mXtrInterruptHandler ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_targetParameters::getter_mUndefinedInterruptHandler (UNUSED_LOCATION_ARGS) const {
  return mProperty_mUndefinedInterruptHandler ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_targetParameters::getter_mServiceHandler (UNUSED_LOCATION_ARGS) const {
  return mProperty_mServiceHandler ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbigint GALGAS_targetParameters::getter_mServicePushedRegisterByteSize (UNUSED_LOCATION_ARGS) const {
  return mProperty_mServicePushedRegisterByteSize ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_targetParameters::getter_mServiceDispatcherEntry (UNUSED_LOCATION_ARGS) const {
  return mProperty_mServiceDispatcherEntry ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_targetParameters::getter_mServiceDispatcherHeader (UNUSED_LOCATION_ARGS) const {
  return mProperty_mServiceDispatcherHeader ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_targetParameters::getter_mServiceEntryNoReturnedValue (UNUSED_LOCATION_ARGS) const {
  return mProperty_mServiceEntryNoReturnedValue ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_targetParameters::getter_mServiceEntryWithReturnValue (UNUSED_LOCATION_ARGS) const {
  return mProperty_mServiceEntryWithReturnValue ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @targetParameters type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_targetParameters ("targetParameters",
                                         NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_targetParameters::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_targetParameters ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_targetParameters::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_targetParameters (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_targetParameters GALGAS_targetParameters::extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_targetParameters result ;
  const GALGAS_targetParameters * p = (const GALGAS_targetParameters *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_targetParameters *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("targetParameters", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_configurationDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_configurationDeclarationAST * p = (const cPtr_configurationDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_configurationDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mPanicCodeTypeName.objectCompare (p->mProperty_mPanicCodeTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPanicLineTypeName.objectCompare (p->mProperty_mPanicLineTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTargetParameters.objectCompare (p->mProperty_mTargetParameters) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInterruptionConfigurationList.objectCompare (p->mProperty_mInterruptionConfigurationList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_configurationDeclarationAST::objectCompare (const GALGAS_configurationDeclarationAST & inOperand) const {
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

GALGAS_configurationDeclarationAST::GALGAS_configurationDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_configurationDeclarationAST GALGAS_configurationDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_configurationDeclarationAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                              GALGAS_lstring::constructor_default (HERE),
                                                              GALGAS_targetParameters::constructor_default (HERE),
                                                              GALGAS_interruptionConfigurationList::constructor_emptyList (HERE)
                                                              COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_configurationDeclarationAST::GALGAS_configurationDeclarationAST (const cPtr_configurationDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_configurationDeclarationAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_configurationDeclarationAST GALGAS_configurationDeclarationAST::constructor_new (const GALGAS_lstring & inAttribute_mPanicCodeTypeName,
                                                                                        const GALGAS_lstring & inAttribute_mPanicLineTypeName,
                                                                                        const GALGAS_targetParameters & inAttribute_mTargetParameters,
                                                                                        const GALGAS_interruptionConfigurationList & inAttribute_mInterruptionConfigurationList
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_configurationDeclarationAST result ;
  if (inAttribute_mPanicCodeTypeName.isValid () && inAttribute_mPanicLineTypeName.isValid () && inAttribute_mTargetParameters.isValid () && inAttribute_mInterruptionConfigurationList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_configurationDeclarationAST (inAttribute_mPanicCodeTypeName, inAttribute_mPanicLineTypeName, inAttribute_mTargetParameters, inAttribute_mInterruptionConfigurationList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_configurationDeclarationAST::getter_mPanicCodeTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_configurationDeclarationAST * p = (const cPtr_configurationDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_configurationDeclarationAST) ;
    result = p->mProperty_mPanicCodeTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_configurationDeclarationAST::getter_mPanicCodeTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPanicCodeTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_configurationDeclarationAST::getter_mPanicLineTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_configurationDeclarationAST * p = (const cPtr_configurationDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_configurationDeclarationAST) ;
    result = p->mProperty_mPanicLineTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_configurationDeclarationAST::getter_mPanicLineTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPanicLineTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_targetParameters GALGAS_configurationDeclarationAST::getter_mTargetParameters (UNUSED_LOCATION_ARGS) const {
  GALGAS_targetParameters result ;
  if (NULL != mObjectPtr) {
    const cPtr_configurationDeclarationAST * p = (const cPtr_configurationDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_configurationDeclarationAST) ;
    result = p->mProperty_mTargetParameters ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_targetParameters cPtr_configurationDeclarationAST::getter_mTargetParameters (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTargetParameters ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_interruptionConfigurationList GALGAS_configurationDeclarationAST::getter_mInterruptionConfigurationList (UNUSED_LOCATION_ARGS) const {
  GALGAS_interruptionConfigurationList result ;
  if (NULL != mObjectPtr) {
    const cPtr_configurationDeclarationAST * p = (const cPtr_configurationDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_configurationDeclarationAST) ;
    result = p->mProperty_mInterruptionConfigurationList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_interruptionConfigurationList cPtr_configurationDeclarationAST::getter_mInterruptionConfigurationList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInterruptionConfigurationList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                Pointer class for @configurationDeclarationAST class                                 *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_configurationDeclarationAST::cPtr_configurationDeclarationAST (const GALGAS_lstring & in_mPanicCodeTypeName,
                                                                    const GALGAS_lstring & in_mPanicLineTypeName,
                                                                    const GALGAS_targetParameters & in_mTargetParameters,
                                                                    const GALGAS_interruptionConfigurationList & in_mInterruptionConfigurationList
                                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (THERE),
mProperty_mPanicCodeTypeName (in_mPanicCodeTypeName),
mProperty_mPanicLineTypeName (in_mPanicLineTypeName),
mProperty_mTargetParameters (in_mTargetParameters),
mProperty_mInterruptionConfigurationList (in_mInterruptionConfigurationList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_configurationDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_configurationDeclarationAST ;
}

void cPtr_configurationDeclarationAST::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "[@configurationDeclarationAST:" ;
  mProperty_mPanicCodeTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mPanicLineTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTargetParameters.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mInterruptionConfigurationList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_configurationDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_configurationDeclarationAST (mProperty_mPanicCodeTypeName, mProperty_mPanicLineTypeName, mProperty_mTargetParameters, mProperty_mInterruptionConfigurationList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @configurationDeclarationAST type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_configurationDeclarationAST ("configurationDeclarationAST",
                                                    & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_configurationDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_configurationDeclarationAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_configurationDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_configurationDeclarationAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_configurationDeclarationAST GALGAS_configurationDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_configurationDeclarationAST result ;
  const GALGAS_configurationDeclarationAST * p = (const GALGAS_configurationDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_configurationDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("configurationDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_decoratedTypeDynamicArrayDeclaration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_decoratedTypeDynamicArrayDeclaration * p = (const cPtr_decoratedTypeDynamicArrayDeclaration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_decoratedTypeDynamicArrayDeclaration) ;
  if (kOperandEqual == result) {
    result = mProperty_mAnonymousDynamicArrayTypeName.objectCompare (p->mProperty_mAnonymousDynamicArrayTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPtrSize.objectCompare (p->mProperty_mPtrSize) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mElementType.objectCompare (p->mProperty_mElementType) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_decoratedTypeDynamicArrayDeclaration::objectCompare (const GALGAS_decoratedTypeDynamicArrayDeclaration & inOperand) const {
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

GALGAS_decoratedTypeDynamicArrayDeclaration::GALGAS_decoratedTypeDynamicArrayDeclaration (void) :
GALGAS_abstractDecoratedDeclaration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedTypeDynamicArrayDeclaration::GALGAS_decoratedTypeDynamicArrayDeclaration (const cPtr_decoratedTypeDynamicArrayDeclaration * inSourcePtr) :
GALGAS_abstractDecoratedDeclaration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_decoratedTypeDynamicArrayDeclaration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedTypeDynamicArrayDeclaration GALGAS_decoratedTypeDynamicArrayDeclaration::constructor_new (const GALGAS_string & inAttribute_mAnonymousDynamicArrayTypeName,
                                                                                                          const GALGAS_bigint & inAttribute_mPtrSize,
                                                                                                          const GALGAS_PLMType & inAttribute_mElementType
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_decoratedTypeDynamicArrayDeclaration result ;
  if (inAttribute_mAnonymousDynamicArrayTypeName.isValid () && inAttribute_mPtrSize.isValid () && inAttribute_mElementType.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_decoratedTypeDynamicArrayDeclaration (inAttribute_mAnonymousDynamicArrayTypeName, inAttribute_mPtrSize, inAttribute_mElementType COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_decoratedTypeDynamicArrayDeclaration::getter_mAnonymousDynamicArrayTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_decoratedTypeDynamicArrayDeclaration * p = (const cPtr_decoratedTypeDynamicArrayDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedTypeDynamicArrayDeclaration) ;
    result = p->mProperty_mAnonymousDynamicArrayTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_decoratedTypeDynamicArrayDeclaration::getter_mAnonymousDynamicArrayTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAnonymousDynamicArrayTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint GALGAS_decoratedTypeDynamicArrayDeclaration::getter_mPtrSize (UNUSED_LOCATION_ARGS) const {
  GALGAS_bigint result ;
  if (NULL != mObjectPtr) {
    const cPtr_decoratedTypeDynamicArrayDeclaration * p = (const cPtr_decoratedTypeDynamicArrayDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedTypeDynamicArrayDeclaration) ;
    result = p->mProperty_mPtrSize ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint cPtr_decoratedTypeDynamicArrayDeclaration::getter_mPtrSize (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPtrSize ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMType GALGAS_decoratedTypeDynamicArrayDeclaration::getter_mElementType (UNUSED_LOCATION_ARGS) const {
  GALGAS_PLMType result ;
  if (NULL != mObjectPtr) {
    const cPtr_decoratedTypeDynamicArrayDeclaration * p = (const cPtr_decoratedTypeDynamicArrayDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedTypeDynamicArrayDeclaration) ;
    result = p->mProperty_mElementType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMType cPtr_decoratedTypeDynamicArrayDeclaration::getter_mElementType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mElementType ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                            Pointer class for @decoratedTypeDynamicArrayDeclaration class                            *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_decoratedTypeDynamicArrayDeclaration::cPtr_decoratedTypeDynamicArrayDeclaration (const GALGAS_string & in_mAnonymousDynamicArrayTypeName,
                                                                                      const GALGAS_bigint & in_mPtrSize,
                                                                                      const GALGAS_PLMType & in_mElementType
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_abstractDecoratedDeclaration (THERE),
mProperty_mAnonymousDynamicArrayTypeName (in_mAnonymousDynamicArrayTypeName),
mProperty_mPtrSize (in_mPtrSize),
mProperty_mElementType (in_mElementType) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_decoratedTypeDynamicArrayDeclaration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedTypeDynamicArrayDeclaration ;
}

void cPtr_decoratedTypeDynamicArrayDeclaration::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "[@decoratedTypeDynamicArrayDeclaration:" ;
  mProperty_mAnonymousDynamicArrayTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mPtrSize.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mElementType.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_decoratedTypeDynamicArrayDeclaration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_decoratedTypeDynamicArrayDeclaration (mProperty_mAnonymousDynamicArrayTypeName, mProperty_mPtrSize, mProperty_mElementType COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @decoratedTypeDynamicArrayDeclaration type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_decoratedTypeDynamicArrayDeclaration ("decoratedTypeDynamicArrayDeclaration",
                                                             & kTypeDescriptor_GALGAS_abstractDecoratedDeclaration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_decoratedTypeDynamicArrayDeclaration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedTypeDynamicArrayDeclaration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_decoratedTypeDynamicArrayDeclaration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_decoratedTypeDynamicArrayDeclaration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedTypeDynamicArrayDeclaration GALGAS_decoratedTypeDynamicArrayDeclaration::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_decoratedTypeDynamicArrayDeclaration result ;
  const GALGAS_decoratedTypeDynamicArrayDeclaration * p = (const GALGAS_decoratedTypeDynamicArrayDeclaration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_decoratedTypeDynamicArrayDeclaration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("decoratedTypeDynamicArrayDeclaration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Extension method '@structurePropertyListAST-element enterInContext'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_enterInContext (const GALGAS_structurePropertyListAST_2D_element inObject,
                                     const GALGAS_lstring constinArgument_inStructureName,
                                     GALGAS_semanticContext & ioArgument_ioContext,
                                     GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                     GALGAS_propertyList & ioArgument_propertyList,
                                     GALGAS_propertyMap & ioArgument_propertyMap,
                                     GALGAS_sortedOperandIRList & ioArgument_sortedOperandIRList,
                                     GALGAS_constructorSignature & ioArgument_constructorSignature,
                                     GALGAS_string & ioArgument_ioConstructorKey,
                                     GALGAS_bool & ioArgument_canBeCopied,
                                     C_Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_PLMType temp_0 ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, inObject.mProperty_mPropertyTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = function_voidType (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 425)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), inObject.mProperty_mPropertyTypeName, inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 426)).getter_type (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 426)) ;
  }
  GALGAS_PLMType var_optionalPropertyType_15641 = temp_0 ;
  switch (inObject.mProperty_mInitialisation.enumValue ()) {
  case GALGAS_structurePropertyInitOptionalExpressionAST::kNotBuilt:
    break ;
  case GALGAS_structurePropertyInitOptionalExpressionAST::kEnum_expression:
    {
      const cEnumAssociatedValues_structurePropertyInitOptionalExpressionAST_expression * extractPtr_17489 = (const cEnumAssociatedValues_structurePropertyInitOptionalExpressionAST_expression *) (inObject.mProperty_mInitialisation.unsafePointer ()) ;
      const GALGAS_expressionAST extractedValue_initExpression = extractPtr_17489->mAssociatedValue0 ;
      GALGAS_semanticTemporariesStruct joker_16193 = GALGAS_semanticTemporariesStruct::constructor_default (SOURCE_FILE ("type-structure-declaration.galgas", 438)) ;
      GALGAS_allocaList joker_16299 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("type-structure-declaration.galgas", 441)) ;
      GALGAS_instructionListIR joker_16327 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("type-structure-declaration.galgas", 442)) ;
      GALGAS_objectIR var_expressionIR_16369 ;
      callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) extractedValue_initExpression.ptr (), function_voidType (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 432)), GALGAS_routineAttributes::constructor_none (SOURCE_FILE ("type-structure-declaration.galgas", 433)), GALGAS_lstring::constructor_new (constinArgument_inStructureName.getter_string (HERE).add_operation (GALGAS_string (" init"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 434)), constinArgument_inStructureName.getter_location (HERE)  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 434)), var_optionalPropertyType_15641, ioArgument_ioContext, GALGAS_mode::constructor_bootMode (SOURCE_FILE ("type-structure-declaration.galgas", 437)), joker_16193, ioArgument_ioStaticEntityMap, ioArgument_ioContext.mProperty_mValuedObjectMap, joker_16299, joker_16327, var_expressionIR_16369, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 431)) ;
      const enumGalgasBool test_2 = extensionGetter_isStatic (var_expressionIR_16369, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 445)).operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 445)).boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (inObject.mProperty_mPropertyName.getter_location (SOURCE_FILE ("type-structure-declaration.galgas", 446)), GALGAS_string ("initialization expression cannot be computed statically"), fixItArray3  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 446)) ;
      }
      GALGAS_PLMType var_actualPropertyType_16541 ;
      const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, var_optionalPropertyType_15641.getter_kind (HERE).objectCompare (GALGAS_typeKind::constructor_void (SOURCE_FILE ("type-structure-declaration.galgas", 449)))).boolEnum () ;
      if (kBoolTrue == test_4) {
        var_actualPropertyType_16541 = var_optionalPropertyType_15641 ;
      }else if (kBoolFalse == test_4) {
        var_actualPropertyType_16541 = extensionGetter_type (var_expressionIR_16369, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 452)) ;
      }
      const enumGalgasBool test_5 = extensionGetter_instanciable (var_actualPropertyType_16541, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 454)).operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 454)).boolEnum () ;
      if (kBoolTrue == test_5) {
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (inObject.mProperty_mPropertyName.getter_location (SOURCE_FILE ("type-structure-declaration.galgas", 455)), GALGAS_string ("$").add_operation (var_actualPropertyType_16541.getter_plmOriginalTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 455)).add_operation (GALGAS_string (" type is not instanciable"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 455)), fixItArray6  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 455)) ;
      }
      const enumGalgasBool test_7 = extensionGetter_copyable (var_actualPropertyType_16541, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 457)).operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 457)).boolEnum () ;
      if (kBoolTrue == test_7) {
        ioArgument_canBeCopied = GALGAS_bool (false) ;
      }
      const enumGalgasBool test_8 = inObject.mProperty_mIsConstant.boolEnum () ;
      if (kBoolTrue == test_8) {
        {
        ioArgument_propertyMap.setter_insertKey (inObject.mProperty_mPropertyName, inObject.mProperty_mIsPublic, GALGAS_propertyAccessKind::constructor_constantProperty (extensionGetter_withType (var_expressionIR_16369, var_actualPropertyType_16541, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 464))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 464)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 461)) ;
        }
      }else if (kBoolFalse == test_8) {
        GALGAS_uint var_propertyIndex_17158 = ioArgument_propertyList.getter_length (SOURCE_FILE ("type-structure-declaration.galgas", 467)) ;
        ioArgument_propertyList.addAssign_operation (inObject.mProperty_mPropertyName.getter_string (HERE), var_actualPropertyType_16541  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 468)) ;
        {
        ioArgument_propertyMap.setter_insertKey (inObject.mProperty_mPropertyName, inObject.mProperty_mIsPublic, GALGAS_propertyAccessKind::constructor_indexed (var_actualPropertyType_16541, var_propertyIndex_17158  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 472)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 469)) ;
        }
        ioArgument_sortedOperandIRList.addAssign_operation (extensionGetter_withType (var_expressionIR_16369, var_actualPropertyType_16541, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 474)), var_propertyIndex_17158  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 474)) ;
      }
    }
    break ;
  case GALGAS_structurePropertyInitOptionalExpressionAST::kEnum_noExpression:
    {
      const enumGalgasBool test_9 = extensionGetter_instanciable (var_optionalPropertyType_15641, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 477)).operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 477)).boolEnum () ;
      if (kBoolTrue == test_9) {
        TC_Array <C_FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticError (inObject.mProperty_mPropertyName.getter_location (SOURCE_FILE ("type-structure-declaration.galgas", 478)), GALGAS_string ("$").add_operation (var_optionalPropertyType_15641.getter_plmOriginalTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 478)).add_operation (GALGAS_string (" type is not instanciable"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 478)), fixItArray10  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 478)) ;
      }
      GALGAS_uint var_propertyIndex_17698 = ioArgument_propertyList.getter_length (SOURCE_FILE ("type-structure-declaration.galgas", 480)) ;
      ioArgument_propertyList.addAssign_operation (inObject.mProperty_mPropertyName.getter_string (HERE), var_optionalPropertyType_15641  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 481)) ;
      {
      ioArgument_propertyMap.setter_insertKey (inObject.mProperty_mPropertyName, inObject.mProperty_mIsPublic, GALGAS_propertyAccessKind::constructor_indexed (var_optionalPropertyType_15641, var_propertyIndex_17698  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 485)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 482)) ;
      }
      ioArgument_constructorSignature.addAssign_operation (inObject.mProperty_mPropertyName.getter_string (HERE), var_optionalPropertyType_15641, var_propertyIndex_17698  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 487)) ;
      ioArgument_ioConstructorKey.plusAssign_operation(GALGAS_string ("!").add_operation (inObject.mProperty_mPropertyName.getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 488)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 488)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 488)) ;
    }
    break ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_infixObjectObjectOperatorDescription::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_infixObjectObjectOperatorDescription * p = (const cPtr_infixObjectObjectOperatorDescription *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_infixObjectObjectOperatorDescription) ;
  if (kOperandEqual == result) {
    result = mProperty_mOperator.objectCompare (p->mProperty_mOperator) ;
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
//                            Pointer class for @infixObjectObjectOperatorDescription class                            *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_infixObjectObjectOperatorDescription::cPtr_infixObjectObjectOperatorDescription (const GALGAS_llvmBinaryOperation & in_mOperator
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_infixOperatorDescription (in_mOperator COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_infixObjectObjectOperatorDescription::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_infixObjectObjectOperatorDescription ;
}

void cPtr_infixObjectObjectOperatorDescription::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "[@infixObjectObjectOperatorDescription:" ;
  mProperty_mOperator.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_infixObjectObjectOperatorDescription::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_infixObjectObjectOperatorDescription (mProperty_mOperator COMMA_THERE)) ;
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
//                                                                                                                     *
//                      Extension method '@controlRegisterDeclarationList-element enterInContext'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_enterInContext (const GALGAS_controlRegisterDeclarationList_2D_element inObject,
                                     GALGAS_semanticContext & ioArgument_ioContext,
                                     GALGAS_controlRegisterMap & ioArgument_ioControlRegisterMap,
                                     GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                     C_Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_PLMType var_registerType_15585 ;
  GALGAS_uint var_registerBitCount_15616 ;
  {
  routine_controlRegisterType (inObject.mProperty_mRegisterTypeName, ioArgument_ioContext, var_registerType_15585, var_registerBitCount_15616, inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 390)) ;
  }
  GALGAS_controlRegisterFieldMap var_registerFieldMap_15842 ;
  GALGAS_sliceMap var_registerBitSliceMap_15871 ;
  GALGAS_controlRegisterFieldList var_controlRegisterFieldList_15905 ;
  {
  routine_buildControlRegisterSliceMap (inObject.mProperty_mRegisterBitSliceList, inObject.mProperty_mRegisterBitSliceListLocation, ioArgument_ioContext, var_registerType_15585, var_registerBitCount_15616, var_registerFieldMap_15842, var_registerBitSliceMap_15871, var_controlRegisterFieldList_15905, inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 392)) ;
  }
  GALGAS_bigint var_maxRegisterAddress_15971 = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 403)).left_shift_operation (ioArgument_ioContext.getter_mTargetParameters (HERE).getter_mPointerSize (HERE) COMMA_SOURCE_FILE ("declaration-control-register.galgas", 403)).substract_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 403)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 403)) ;
  cEnumerator_controlRegisterNameListAST enumerator_16064 (inObject.mProperty_mRegisterArrayList, kENUMERATION_UP) ;
  while (enumerator_16064.hasCurrentObject ()) {
    GALGAS_bool var_isReadOnly_16112 = GALGAS_bool (false) ;
    GALGAS_bool var_userAccess_16139 = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_16188 (enumerator_16064.current (HERE).getter_mAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_16188.hasCurrentObject ()) {
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_16188.current_mValue (HERE).getter_string (HERE).objectCompare (GALGAS_string ("ro"))).boolEnum () ;
      if (kBoolTrue == test_0) {
        const enumGalgasBool test_1 = var_isReadOnly_16112.boolEnum () ;
        if (kBoolTrue == test_1) {
          TC_Array <C_FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (enumerator_16188.current_mValue (HERE).getter_location (SOURCE_FILE ("declaration-control-register.galgas", 411)), GALGAS_string ("duplicated attribute"), fixItArray2  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 411)) ;
        }else if (kBoolFalse == test_1) {
          var_isReadOnly_16112 = GALGAS_bool (true) ;
        }
      }else if (kBoolFalse == test_0) {
        const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_16188.current_mValue (HERE).getter_string (HERE).objectCompare (function_userAttributeForRegister (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 415)))).boolEnum () ;
        if (kBoolTrue == test_3) {
          const enumGalgasBool test_4 = var_userAccess_16139.boolEnum () ;
          if (kBoolTrue == test_4) {
            TC_Array <C_FixItDescription> fixItArray5 ;
            inCompiler->emitSemanticError (enumerator_16188.current_mValue (HERE).getter_location (SOURCE_FILE ("declaration-control-register.galgas", 417)), GALGAS_string ("duplicated attribute"), fixItArray5  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 417)) ;
          }else if (kBoolFalse == test_4) {
            var_userAccess_16139 = GALGAS_bool (true) ;
          }
        }else if (kBoolFalse == test_3) {
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (enumerator_16188.current_mValue (HERE).getter_location (SOURCE_FILE ("declaration-control-register.galgas", 422)), GALGAS_string ("only @ro (read only) and @").add_operation (function_userAttributeForRegister (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 422)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 422)).add_operation (GALGAS_string (" attributes are accepted here"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 422)), fixItArray6  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 422)) ;
        }
      }
      enumerator_16188.gotoNextObject () ;
    }
    GALGAS_objectIR var_addressExpressionResult_16947 ;
    callExtensionMethod_analyzeStaticExpression ((const cPtr_expressionAST *) enumerator_16064.current (HERE).getter_mRegisterAddress (HERE).ptr (), enumerator_16064.current (HERE).getter_mRegisterAddressLocation (HERE), ioArgument_ioContext, ioArgument_ioStaticEntityMap, var_addressExpressionResult_16947, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 426)) ;
    GALGAS_bigint var_registerAddress_16981 ;
    const enumGalgasBool test_7 = var_addressExpressionResult_16947.getter_isLiteralInteger (SOURCE_FILE ("declaration-control-register.galgas", 433)).operator_not (SOURCE_FILE ("declaration-control-register.galgas", 433)).boolEnum () ;
    if (kBoolTrue == test_7) {
      TC_Array <C_FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (enumerator_16064.current (HERE).getter_mRegisterAddressLocation (HERE), GALGAS_string ("control register address is not a static integer expression"), fixItArray8  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 434)) ;
      var_registerAddress_16981.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_7) {
      GALGAS_PLMType joker_17241_1 ; // Joker input parameter
      var_addressExpressionResult_16947.method_literalInteger (joker_17241_1, var_registerAddress_16981, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 438)) ;
      const enumGalgasBool test_9 = GALGAS_bool (kIsStrictSup, var_registerAddress_16981.objectCompare (var_maxRegisterAddress_15971)).boolEnum () ;
      if (kBoolTrue == test_9) {
        TC_Array <C_FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticError (enumerator_16064.current (HERE).getter_mRegisterAddressLocation (HERE), GALGAS_string ("register address should be lower or equal to ").add_operation (var_maxRegisterAddress_15971.getter_hexString (SOURCE_FILE ("declaration-control-register.galgas", 442)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 442)), fixItArray10  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 441)) ;
      }
    }
    GALGAS_bigint var_arraySize_17526 ;
    GALGAS_uint var_elementArraySize_17553 ;
    switch (enumerator_16064.current (HERE).getter_mControlRegisterKind (HERE).enumValue ()) {
    case GALGAS_controlRegisterKind::kNotBuilt:
      break ;
    case GALGAS_controlRegisterKind::kEnum_scalar:
      {
        var_arraySize_17526 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 449)) ;
        var_elementArraySize_17553 = GALGAS_uint ((uint32_t) 0U) ;
      }
      break ;
    case GALGAS_controlRegisterKind::kEnum_registerArray:
      {
        const cEnumAssociatedValues_controlRegisterKind_registerArray * extractPtr_20068 = (const cEnumAssociatedValues_controlRegisterKind_registerArray *) (enumerator_16064.current (HERE).getter_mControlRegisterKind (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_arraySizeExpression = extractPtr_20068->mAssociatedValue0 ;
        const GALGAS_location extractedValue_arraySizeLocation = extractPtr_20068->mAssociatedValue1 ;
        const GALGAS_expressionAST extractedValue_arrayElementSizeExpression = extractPtr_20068->mAssociatedValue2 ;
        const GALGAS_location extractedValue_arrayElementSizeLocation = extractPtr_20068->mAssociatedValue3 ;
        GALGAS_semanticTemporariesStruct var_temporaries_17944 = GALGAS_semanticTemporariesStruct::constructor_default (SOURCE_FILE ("declaration-control-register.galgas", 454)) ;
        GALGAS_instructionListIR var_instructionGenerationList_18006 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("declaration-control-register.galgas", 455)) ;
        GALGAS_allocaList var_allocaList_18040 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("declaration-control-register.galgas", 456)) ;
        GALGAS_objectIR var_sizeExpressionResult_18569 ;
        callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) extractedValue_arraySizeExpression.ptr (), function_voidType (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 458)), GALGAS_routineAttributes::constructor_none (SOURCE_FILE ("declaration-control-register.galgas", 459)), GALGAS_string ("compiler").getter_nowhere (SOURCE_FILE ("declaration-control-register.galgas", 460)), function_voidType (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 461)), ioArgument_ioContext, GALGAS_mode::constructor_bootMode (SOURCE_FILE ("declaration-control-register.galgas", 463)), var_temporaries_17944, ioArgument_ioStaticEntityMap, ioArgument_ioContext.mProperty_mValuedObjectMap, var_allocaList_18040, var_instructionGenerationList_18006, var_sizeExpressionResult_18569, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 457)) ;
        const enumGalgasBool test_11 = var_sizeExpressionResult_18569.getter_isLiteralInteger (SOURCE_FILE ("declaration-control-register.galgas", 471)).operator_not (SOURCE_FILE ("declaration-control-register.galgas", 471)).boolEnum () ;
        if (kBoolTrue == test_11) {
          TC_Array <C_FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticError (extractedValue_arraySizeLocation, GALGAS_string ("control register address is not a static integer expression"), fixItArray12  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 472)) ;
          var_arraySize_17526.drop () ; // Release error dropped variable
        }else if (kBoolFalse == test_11) {
          GALGAS_PLMType joker_18801_1 ; // Joker input parameter
          var_sizeExpressionResult_18569.method_literalInteger (joker_18801_1, var_arraySize_17526, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 474)) ;
          const enumGalgasBool test_13 = GALGAS_bool (kIsStrictInf, var_arraySize_17526.objectCompare (GALGAS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 475)))).boolEnum () ;
          if (kBoolTrue == test_13) {
            TC_Array <C_FixItDescription> fixItArray14 ;
            inCompiler->emitSemanticError (extractedValue_arraySizeLocation, GALGAS_string ("control register array size should be a static integer expression >= 2, equal to a power of 2"), fixItArray14  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 476)) ;
            var_arraySize_17526.drop () ; // Release error dropped variable
          }else if (kBoolFalse == test_13) {
            GALGAS_uint var_powerOfTwoForArraySize_19070 = var_arraySize_17526.substract_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 480)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 480)).getter_bitCountForUnsignedRepresentation (SOURCE_FILE ("declaration-control-register.galgas", 480)) ;
            const enumGalgasBool test_15 = GALGAS_bool (kIsNotEqual, var_arraySize_17526.objectCompare (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 481)).left_shift_operation (var_powerOfTwoForArraySize_19070 COMMA_SOURCE_FILE ("declaration-control-register.galgas", 481)))).boolEnum () ;
            if (kBoolTrue == test_15) {
              TC_Array <C_FixItDescription> fixItArray16 ;
              inCompiler->emitSemanticError (extractedValue_arraySizeLocation, GALGAS_string ("control register array size should be a static integer expression >= 2, equal to a power of 2"), fixItArray16  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 482)) ;
              var_arraySize_17526.drop () ; // Release error dropped variable
            }
          }
        }
        GALGAS_objectIR var_elementArraySizeExpressionResult_19682 ;
        callExtensionMethod_analyzeStaticExpression ((const cPtr_expressionAST *) extractedValue_arrayElementSizeExpression.ptr (), extractedValue_arrayElementSizeLocation, ioArgument_ioContext, ioArgument_ioStaticEntityMap, var_elementArraySizeExpressionResult_19682, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 489)) ;
        const enumGalgasBool test_17 = var_elementArraySizeExpressionResult_19682.getter_isLiteralInteger (SOURCE_FILE ("declaration-control-register.galgas", 495)).operator_not (SOURCE_FILE ("declaration-control-register.galgas", 495)).boolEnum () ;
        if (kBoolTrue == test_17) {
          TC_Array <C_FixItDescription> fixItArray18 ;
          inCompiler->emitSemanticError (extractedValue_arrayElementSizeLocation, GALGAS_string ("element size is not a static integer expression"), fixItArray18  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 496)) ;
          var_elementArraySize_17553.drop () ; // Release error dropped variable
        }else if (kBoolFalse == test_17) {
          GALGAS_bigint var_elementArraySizeAsBigInt_19998 ;
          GALGAS_PLMType joker_19960_1 ; // Joker input parameter
          var_elementArraySizeExpressionResult_19682.method_literalInteger (joker_19960_1, var_elementArraySizeAsBigInt_19998, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 500)) ;
          var_elementArraySize_17553 = var_elementArraySizeAsBigInt_19998.getter_uint (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 501)) ;
        }
      }
      break ;
    }
    {
    ioArgument_ioControlRegisterMap.setter_insertKey (enumerator_16064.current (HERE).getter_mRegisterName (HERE), var_registerType_15585, var_isReadOnly_16112, var_userAccess_16139, var_registerBitSliceMap_15871, var_registerFieldMap_15842, var_registerAddress_16981, var_controlRegisterFieldList_15905, var_registerBitCount_15616, var_arraySize_17526.getter_uint (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 514)), var_elementArraySize_17553, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 504)) ;
    }
    enumerator_16064.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Extension method '@globalSyncInstanceMapIR-element generateLLVM'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_generateLLVM (const GALGAS_globalSyncInstanceMapIR_2D_element inObject,
                                   GALGAS_string & ioArgument_ioLLVMcode,
                                   C_Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmNameForGlobalSyncInstance (inObject.mProperty_lkey.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 180)).add_operation (GALGAS_string (" = internal global "), inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 180)), inCompiler  COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 180)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (extensionGetter_type (inObject.mProperty_mInitialValue, inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 181)), inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 181)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 181)).add_operation (extensionGetter_llvmValue (inObject.mProperty_mInitialValue, inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 181)), inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 181)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 181)), inCompiler  COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 181)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Extension method '@driverListIR-element generateLLVM'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_generateLLVM (const GALGAS_driverListIR_2D_element inObject,
                                   GALGAS_string & ioArgument_ioLLVMcode,
                                   C_Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmNameForGlobalVariable (inObject.mProperty_mDriverName, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 406)).add_operation (GALGAS_string (" = internal global "), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 406)), inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 406)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (inObject.mProperty_mType.getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 407)), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 407)).add_operation (GALGAS_string (" {"), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 407)), inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 407)) ;
  cEnumerator_operandIRList enumerator_16850 (inObject.mProperty_mInitialValueList, kENUMERATION_UP) ;
  while (enumerator_16850.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_16850.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 409)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 409)).add_operation (extensionGetter_llvmValue (enumerator_16850.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 409)), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 409)), inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 409)) ;
    if (enumerator_16850.hasNextObject ()) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 410)) ;
    }
    enumerator_16850.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 412)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Extension method '@decoratedTaskList-element semanticAnalysis'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_semanticAnalysis (const GALGAS_decoratedTaskList_2D_element inObject,
                                       const GALGAS_semanticContext constinArgument_inContext,
                                       GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                       GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                       C_Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint var_stackSize_10064 = inObject.mProperty_mStackSize.getter_bigint (HERE) ;
  GALGAS_bool test_0 = GALGAS_bool (kIsStrictInf, var_stackSize_10064.objectCompare (GALGAS_bigint ("64", inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 270)))) ;
  if (kBoolTrue != test_0.boolEnum ()) {
    test_0 = GALGAS_bool (kIsNotEqual, var_stackSize_10064.modulo_operation (GALGAS_bigint ("8", inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 270)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 270)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 270)))) ;
  }
  const enumGalgasBool test_1 = test_0.boolEnum () ;
  if (kBoolTrue == test_1) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (inObject.mProperty_mStackSize.getter_location (SOURCE_FILE ("task-declaration.galgas", 271)), GALGAS_string ("stack size should be a multiple of 8, and >= 64"), fixItArray2  COMMA_SOURCE_FILE ("task-declaration.galgas", 271)) ;
  }
  GALGAS_PLMType var_taskType_10309 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), inObject.mProperty_mTaskName, inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 274)).getter_type (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 274)) ;
  GALGAS_taskSetupSortedListAST var_taskInitSortedListAST_10431 = GALGAS_taskSetupSortedListAST::constructor_emptySortedList (SOURCE_FILE ("task-declaration.galgas", 275)) ;
  cEnumerator_taskSetupListAST enumerator_10507 (inObject.mProperty_mTaskSetupListAST, kENUMERATION_UP) ;
  while (enumerator_10507.hasCurrentObject ()) {
    var_taskInitSortedListAST_10431.addAssign_operation (enumerator_10507.current_mTaskSetupPriority (HERE), enumerator_10507.current_mTaskSetupInstructionList (HERE), enumerator_10507.current_mEndOfTaskSetupDeclaration (HERE), enumerator_10507.current_mTaskSetupPriority (HERE).getter_bigint (HERE)  COMMA_SOURCE_FILE ("task-declaration.galgas", 277)) ;
    enumerator_10507.gotoNextObject () ;
  }
  GALGAS_instructionListIR var_setupInstructionListIR_10651 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("task-declaration.galgas", 279)) ;
  GALGAS_allocaList var_setupAllocaList_10686 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("task-declaration.galgas", 280)) ;
  cEnumerator_taskSetupSortedListAST enumerator_10792 (var_taskInitSortedListAST_10431, kENUMERATION_UP) ;
  while (enumerator_10792.hasCurrentObject ()) {
    GALGAS_allocaList var_partialAllocaList_11135 ;
    GALGAS_instructionListIR var_partialInstructionGenerationList_11198 ;
    {
    routine_setupSemanticAnalysis (constinArgument_inContext, ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct, var_taskType_10309, enumerator_10792.current_mTaskSetupPriority (HERE), GALGAS_mode::constructor_userMode (SOURCE_FILE ("task-declaration.galgas", 288)), enumerator_10792.current_mTaskSetupInstructionList (HERE), enumerator_10792.current_mEndOfTaskSetupDeclaration (HERE), var_partialAllocaList_11135, var_partialInstructionGenerationList_11198, inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 282)) ;
    }
    var_setupInstructionListIR_10651.plusAssign_operation(var_partialInstructionGenerationList_11198, inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 294)) ;
    var_setupAllocaList_10686.plusAssign_operation(var_partialAllocaList_11135, inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 295)) ;
    enumerator_10792.gotoNextObject () ;
  }
  GALGAS_instructionListAST var_taskListInstructionList_11499 = GALGAS_instructionListAST::constructor_emptyList (SOURCE_FILE ("task-declaration.galgas", 299)) ;
  const enumGalgasBool test_3 = GALGAS_bool (kIsStrictSup, inObject.mProperty_mGuardedCommandList.getter_length (SOURCE_FILE ("task-declaration.galgas", 300)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_3) {
    GALGAS_syncInstructionAST var_syncInstruction_11571 = GALGAS_syncInstructionAST::constructor_new (inObject.mProperty_mTaskName.getter_location (HERE), inObject.mProperty_mGuardedCommandList, inObject.mProperty_mTaskName.getter_location (HERE)  COMMA_SOURCE_FILE ("task-declaration.galgas", 301)) ;
    var_taskListInstructionList_11499.addAssign_operation (var_syncInstruction_11571  COMMA_SOURCE_FILE ("task-declaration.galgas", 302)) ;
  }
  {
  routine_routineSemanticAnalysis (var_taskType_10309, GALGAS_routineKind::constructor_function (GALGAS_mode::constructor_userMode (SOURCE_FILE ("task-declaration.galgas", 306))  COMMA_SOURCE_FILE ("task-declaration.galgas", 306)), GALGAS_mode::constructor_userMode (SOURCE_FILE ("task-declaration.galgas", 307)), GALGAS_lstring::constructor_new (function_llvmNameForTaskLoopFunction (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 308)), inObject.mProperty_mTaskName.getter_location (HERE)  COMMA_SOURCE_FILE ("task-declaration.galgas", 308)), GALGAS_routineFormalArgumentListAST::constructor_emptyList (SOURCE_FILE ("task-declaration.galgas", 309)), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("task-declaration.galgas", 310)), var_taskListInstructionList_11499, inObject.mProperty_mTaskName.getter_location (HERE), GALGAS_routineAttributes::constructor_mutating (SOURCE_FILE ("task-declaration.galgas", 313)).operator_or (GALGAS_routineAttributes::constructor_directPropertyAccess (SOURCE_FILE ("task-declaration.galgas", 313)) COMMA_SOURCE_FILE ("task-declaration.galgas", 313)).operator_or (GALGAS_routineAttributes::constructor_panicAllowed (SOURCE_FILE ("task-declaration.galgas", 313)) COMMA_SOURCE_FILE ("task-declaration.galgas", 313)), GALGAS_bool (true), GALGAS_bool (false), constinArgument_inContext, ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct, inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 304)) ;
  }
  GALGAS_uint var_taskNameStringIndex_12413 ;
  {
  extensionSetter_findOrAddStaticString (ioArgument_ioIntermediateCodeStruct.mProperty_mStaticEntityMap, inObject.mProperty_mTaskName.getter_string (HERE), var_taskNameStringIndex_12413, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 321)) ;
  }
  {
  ioArgument_ioIntermediateCodeStruct.mProperty_mTaskMapIR.setter_insertKey (inObject.mProperty_mTaskName, var_taskType_10309, inObject.mProperty_mPriority.getter_bigint (HERE), inObject.mProperty_mStackSize.getter_bigint (HERE), var_setupAllocaList_10686, var_setupInstructionListIR_10651, var_taskNameStringIndex_12413, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 323)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Extension method '@externProcedureDeclarationListAST-element enterExternProcInContext'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_enterExternProcInContext (const GALGAS_externProcedureDeclarationListAST_2D_element inObject,
                                               GALGAS_semanticContext & ioArgument_ioContext,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_routineTypedSignature var_signature_3557 ;
  {
  routine_routineSignature (ioArgument_ioContext.mProperty_mTypeMap, inObject.mProperty_mProcFormalArgumentList, var_signature_3557, inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 79)) ;
  }
  GALGAS_bool var_safe_3574 = GALGAS_bool (false) ;
  cEnumerator_lstringlist enumerator_3618 (inObject.mProperty_mAttributeList, kENUMERATION_UP) ;
  while (enumerator_3618.hasCurrentObject ()) {
    const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_3618.current_mValue (HERE).getter_string (HERE).objectCompare (function_safeAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 83)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_safe_3574 = GALGAS_bool (true) ;
    }
    enumerator_3618.gotoNextObject () ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_returnTypeProxy_3826 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeOptionalProxy (ioArgument_ioContext.mProperty_mTypeMap, inObject.mProperty_mReturnTypeName, var_returnTypeProxy_3826 COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 88)) ;
  }
  {
  extensionSetter_insertRoutine (ioArgument_ioContext.mProperty_mRoutineMapForContext, GALGAS_string::makeEmptyString (), inObject.mProperty_mExternProcedureName, extensionGetter_routineSignature (inObject.mProperty_mProcFormalArgumentList, inObject.mProperty_mExternProcedureName.getter_location (SOURCE_FILE ("declaration-extern-proc.galgas", 92)), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 92)), inObject.mProperty_mRoutineNameForGeneration, GALGAS_routineDescriptor::constructor_new (GALGAS_bool (true), GALGAS_bool (false), inObject.mProperty_mExternProcedureName.getter_string (SOURCE_FILE ("declaration-extern-proc.galgas", 97)), GALGAS_routineKind::constructor_function (inObject.mProperty_mMode  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 98)), var_signature_3557, var_returnTypeProxy_3826, GALGAS_bool (false), GALGAS_bool (false), var_safe_3574  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 94)), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 89)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Extension method '@externProcedureMapIR-element llvmPrototypeGeneration'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_llvmPrototypeGeneration (const GALGAS_externProcedureMapIR_2D_element inObject,
                                              GALGAS_string & ioArgument_ioLLVMcode,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_procName_7629 = function_llvmNameForFunction (inObject.mProperty_lkey.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 191)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("declare"), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 192)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, inObject.mProperty_mReturnType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-extern-proc.galgas", 193)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" void"), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 194)) ;
  }else if (kBoolFalse == test_0) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_llvmTypeName (inObject.mProperty_mReturnType.getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 196)), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 196)), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 196)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 196)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" @").add_operation (var_procName_7629, inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 198)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 198)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 198)) ;
  cEnumerator_routineFormalArgumentListIR enumerator_7906 (inObject.mProperty_mFormalArgumentListForGeneration, kENUMERATION_UP) ;
  while (enumerator_7906.hasCurrentObject ()) {
    switch (enumerator_7906.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_7906.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 203)).add_operation (GALGAS_string (" %in."), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 203)).add_operation (enumerator_7906.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 203)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 203)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_7906.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 205)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 205)).add_operation (function_llvmNameForLocalVariable (enumerator_7906.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 205)), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 205)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 205)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_7906.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 207)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 207)).add_operation (function_llvmNameForLocalVariable (enumerator_7906.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 207)), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 207)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 207)) ;
      }
      break ;
    }
    if (enumerator_7906.hasNextObject ()) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 210)) ;
    }
    enumerator_7906.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 212)), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 212)).add_operation (GALGAS_string ("; declared by extern PLM function declaration\n"), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 212)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 212)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Abstract extension method '@callInstructionAST baseGuardAnalyze'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_callInstructionAST_baseGuardAnalyze> gExtensionMethodTable_callInstructionAST_baseGuardAnalyze ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_baseGuardAnalyze (const int32_t inClassIndex,
                                            extensionMethodSignature_callInstructionAST_baseGuardAnalyze inMethod) {
  gExtensionMethodTable_callInstructionAST_baseGuardAnalyze.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_callInstructionAST_baseGuardAnalyze (void) {
  gExtensionMethodTable_callInstructionAST_baseGuardAnalyze.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_callInstructionAST_baseGuardAnalyze (NULL,
                                                                freeExtensionMethod_callInstructionAST_baseGuardAnalyze) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_baseGuardAnalyze (const cPtr_callInstructionAST * inObject,
                                           const GALGAS_PLMType constin_inSelfType,
                                           const GALGAS_routineAttributes constin_inRoutineAttributes,
                                           const GALGAS_lstring constin_inCallerNameForInvocationGraph,
                                           const GALGAS_semanticContext constin_inContext,
                                           const GALGAS_mode constin_inMode,
                                           GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                           GALGAS_staticEntityMap & io_ioStaticEntityMap,
                                           GALGAS_universalValuedObjectMap & io_ioUniversalMap,
                                           GALGAS_guardKindGenerationIR & out_outConvenienceGuardGenerationIR,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_outConvenienceGuardGenerationIR.drop () ;
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_callInstructionAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_callInstructionAST_baseGuardAnalyze f = NULL ;
    if (classIndex < gExtensionMethodTable_callInstructionAST_baseGuardAnalyze.count ()) {
      f = gExtensionMethodTable_callInstructionAST_baseGuardAnalyze (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
      const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
      while ((NULL == f) && (NULL != p)) {
        if (p->mSlotID < gExtensionMethodTable_callInstructionAST_baseGuardAnalyze.count ()) {
          f = gExtensionMethodTable_callInstructionAST_baseGuardAnalyze (p->mSlotID COMMA_HERE) ;
        }
        p = p->mSuperclassDescriptor ;
      }
      gExtensionMethodTable_callInstructionAST_baseGuardAnalyze.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inSelfType, constin_inRoutineAttributes, constin_inCallerNameForInvocationGraph, constin_inContext, constin_inMode, io_ioTemporaries, io_ioStaticEntityMap, io_ioUniversalMap, out_outConvenienceGuardGenerationIR, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Extension method '@guardMapIR-element llvmCodeGeneration'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_llvmCodeGeneration (const GALGAS_guardMapIR_2D_element inObject,
                                         GALGAS_string & ioArgument_ioLLVMcode,
                                         const GALGAS_generationContext constinArgument_inGenerationContext,
                                         GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                         C_Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_guardRoutineName_19796 ;
  switch (inObject.mProperty_mGuardKindGenerationIR.enumValue ()) {
  case GALGAS_guardKindGenerationIR::kNotBuilt:
    break ;
  case GALGAS_guardKindGenerationIR::kEnum_convenienceGuard:
    {
      var_guardRoutineName_19796 = function_llvmNameForGuardCall (inObject.mProperty_lkey.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 497)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (var_guardRoutineName_19796, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 498)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 498)) ;
    }
    break ;
  case GALGAS_guardKindGenerationIR::kEnum_baseGuard:
    {
      var_guardRoutineName_19796 = function_llvmNameForGuardImplementation (inObject.mProperty_lkey.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 500)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (var_guardRoutineName_19796, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 501)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 501)) ;
      GALGAS_string var_prototype_20139 = function_llvmFunctionPrototype (GALGAS_string ("i1"), function_llvmNameForGuardCall (inObject.mProperty_lkey.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 504)), inObject.mProperty_mReceiverType, inObject.mProperty_mFormalArgumentListForGeneration, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 502)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("declare ").add_operation (var_prototype_20139, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 508)).add_operation (GALGAS_string ("\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 508)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 508)) ;
    }
    break ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define i1 @").add_operation (var_guardRoutineName_19796, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 510)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 510)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 510)) ;
  GALGAS_string temp_0 ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, inObject.mProperty_mReceiverType.getter_kind (HERE).objectCompare (GALGAS_typeKind::constructor_void (SOURCE_FILE ("declaration-guard.galgas", 511)))).boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_string::makeEmptyString () ;
  }else if (kBoolFalse == test_1) {
    temp_0 = function_llvmTypeStringFromPLMname (inObject.mProperty_mReceiverType.getter_plmOriginalTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 514)) ;
  }
  GALGAS_string var_receiverTypeName_20432 = temp_0 ;
  GALGAS_bool var_first_20569 = GALGAS_bool (true) ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_receiverTypeName_20432.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_2) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("%").add_operation (var_receiverTypeName_20432.getter_assemblerRepresentation (SOURCE_FILE ("declaration-guard.galgas", 518)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 518)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 518)).add_operation (function_llvmNameForSelf (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 518)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 518)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 518)) ;
    var_first_20569 = GALGAS_bool (false) ;
  }
  cEnumerator_routineFormalArgumentListIR enumerator_20773 (inObject.mProperty_mFormalArgumentListForGeneration, kENUMERATION_UP) ;
  while (enumerator_20773.hasCurrentObject ()) {
    const enumGalgasBool test_3 = var_first_20569.boolEnum () ;
    if (kBoolTrue == test_3) {
      var_first_20569 = GALGAS_bool (false) ;
    }else if (kBoolFalse == test_3) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 525)) ;
    }
    switch (enumerator_20773.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_20773.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 529)).add_operation (GALGAS_string (" %in."), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 529)).add_operation (enumerator_20773.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 529)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 529)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_20773.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 531)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 531)).add_operation (function_llvmNameForLocalVariable (enumerator_20773.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 531)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 531)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 531)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_20773.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 533)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 533)).add_operation (function_llvmNameForLocalVariable (enumerator_20773.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 533)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 533)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 533)) ;
      }
      break ;
    }
    enumerator_20773.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 536)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 536)).add_operation (GALGAS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 536)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 536)) ;
  GALGAS_allocaList var_allocaList_21372 = inObject.mProperty_mAllocaList ;
  cEnumerator_routineFormalArgumentListIR enumerator_21468 (inObject.mProperty_mFormalArgumentListForGeneration, kENUMERATION_UP) ;
  while (enumerator_21468.hasCurrentObject ()) {
    switch (enumerator_21468.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        var_allocaList_21372.addAssign_operation (function_llvmNameForLocalVariable (enumerator_21468.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 543)), enumerator_21468.current_mFormalArgumentType (HERE), GALGAS_bool (true)  COMMA_SOURCE_FILE ("declaration-guard.galgas", 543)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
      }
      break ;
    }
    enumerator_21468.gotoNextObject () ;
  }
  extensionMethod_generateAllocaList (var_allocaList_21372, ioArgument_ioLLVMcode, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 548)) ;
  cEnumerator_routineFormalArgumentListIR enumerator_21788 (inObject.mProperty_mFormalArgumentListForGeneration, kENUMERATION_UP) ;
  while (enumerator_21788.hasCurrentObject ()) {
    switch (enumerator_21788.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        GALGAS_string var_llvmType_21858 = extensionGetter_llvmTypeName (enumerator_21788.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 553)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_llvmType_21858, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 554)).add_operation (GALGAS_string (" %in."), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 554)).add_operation (enumerator_21788.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 554)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 554)).add_operation (var_llvmType_21858, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 554)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 555)).add_operation (function_llvmNameForLocalVariable (enumerator_21788.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 555)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 555)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 555)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 554)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
      }
      break ;
    }
    enumerator_21788.gotoNextObject () ;
  }
  GALGAS_string var_accepted_5F_llvmName_22162 = function_llvmNameForLocalVariable (function_acceptVariablePLMName (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 560)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 560)) ;
  GALGAS_string var_accepted_5F_llvmName_5F_loaded_22248 = function_llvmNameForLocalVariable (function_acceptVariablePLMName (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 561)).add_operation (GALGAS_string (".loaded"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 561)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 561)) ;
  switch (inObject.mProperty_mGuardKindGenerationIR.enumValue ()) {
  case GALGAS_guardKindGenerationIR::kNotBuilt:
    break ;
  case GALGAS_guardKindGenerationIR::kEnum_baseGuard:
    {
      extensionMethod_instructionListLLVMCode (inObject.mProperty_mInstructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 566)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_accepted_5F_llvmName_5F_loaded_22248, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 567)).add_operation (GALGAS_string (" = load i1, i1* "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 567)).add_operation (var_accepted_5F_llvmName_22162, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 567)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 567)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 567)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @note.guard.state (i1 ").add_operation (var_accepted_5F_llvmName_5F_loaded_22248, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 568)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 568)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 568)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret i1 ").add_operation (var_accepted_5F_llvmName_5F_loaded_22248, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 569)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 569)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 569)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
        "\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 570)) ;
    }
    break ;
  case GALGAS_guardKindGenerationIR::kEnum_convenienceGuard:
    {
      const cEnumAssociatedValues_guardKindGenerationIR_convenienceGuard * extractPtr_24200 = (const cEnumAssociatedValues_guardKindGenerationIR_convenienceGuard *) (inObject.mProperty_mGuardKindGenerationIR.unsafePointer ()) ;
      const GALGAS_allocaList extractedValue_baseGuardAllocaList = extractPtr_24200->mAssociatedValue0 ;
      const GALGAS_instructionListIR extractedValue_baseGuardInstructionGenerationList = extractPtr_24200->mAssociatedValue1 ;
      const GALGAS_string extractedValue_baseGuardMangledName = extractPtr_24200->mAssociatedValue2 ;
      const GALGAS_procCallEffectiveParameterListIR extractedValue_baseGuardEffectiveParameterList = extractPtr_24200->mAssociatedValue3 ;
      extensionMethod_generateAllocaList (extractedValue_baseGuardAllocaList, ioArgument_ioLLVMcode, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 572)) ;
      extensionMethod_instructionListLLVMCode (extractedValue_baseGuardInstructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 573)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %invoked.guard.result = call i1 @").add_operation (function_llvmNameForGuardCall (extractedValue_baseGuardMangledName, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 574)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 574)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 574)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ("), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 575)) ;
      cEnumerator_procCallEffectiveParameterListIR enumerator_23348 (extractedValue_baseGuardEffectiveParameterList, kENUMERATION_UP) ;
      while (enumerator_23348.hasCurrentObject ()) {
        switch (enumerator_23348.current_mEffectiveParameterPassingMode (HERE).enumValue ()) {
        case GALGAS_procEffectiveParameterPassingModeIR::kNotBuilt:
          break ;
        case GALGAS_procEffectiveParameterPassingModeIR::kEnum_input:
          {
            ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_23348.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 579)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 579)).add_operation (extensionGetter_llvmName (enumerator_23348.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 579)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 579)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 579)) ;
          }
          break ;
        case GALGAS_procEffectiveParameterPassingModeIR::kEnum_output:
          {
            ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_23348.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 581)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 581)).add_operation (extensionGetter_llvmName (enumerator_23348.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 581)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 581)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 581)) ;
          }
          break ;
        case GALGAS_procEffectiveParameterPassingModeIR::kEnum_outputInput:
          {
            ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_23348.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 583)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 583)).add_operation (extensionGetter_llvmName (enumerator_23348.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 583)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 583)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 583)) ;
          }
          break ;
        }
        if (enumerator_23348.hasNextObject ()) {
          ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 586)) ;
        }
        enumerator_23348.gotoNextObject () ;
      }
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 588)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %invoked.guard.result, label %invoked.guard.acceptation, label %invoked.guard.rejection\n"
        "\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 589)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("invoked.guard.acceptation:\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 590)) ;
      extensionMethod_instructionListLLVMCode (inObject.mProperty_mInstructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 591)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret i1 true\n"
        "\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 592)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("invoked.guard.rejection:\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 593)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret i1 false\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 594)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
        "\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 595)) ;
    }
    break ;
  }
  ioArgument_ioGenerationAdds.mProperty_mExternFunctionDeclarationSet.addAssign_operation (GALGAS_string ("void @note.guard.state (i1 %inAccepted)")  COMMA_SOURCE_FILE ("declaration-guard.galgas", 597)) ;
  ioArgument_ioGenerationAdds.mProperty_mExternFunctionDeclarationSet.addAssign_operation (GALGAS_string ("i1 @xtr.user.result ()")  COMMA_SOURCE_FILE ("declaration-guard.galgas", 598)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_addressofExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_addressofExpressionAST * p = (const cPtr_addressofExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_addressofExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mLValue.objectCompare (p->mProperty_mLValue) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_addressofExpressionAST::objectCompare (const GALGAS_addressofExpressionAST & inOperand) const {
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

GALGAS_addressofExpressionAST::GALGAS_addressofExpressionAST (void) :
GALGAS_expressionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_addressofExpressionAST GALGAS_addressofExpressionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_addressofExpressionAST::constructor_new (GALGAS_LValueAST::constructor_default (HERE)
                                                         COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_addressofExpressionAST::GALGAS_addressofExpressionAST (const cPtr_addressofExpressionAST * inSourcePtr) :
GALGAS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_addressofExpressionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_addressofExpressionAST GALGAS_addressofExpressionAST::constructor_new (const GALGAS_LValueAST & inAttribute_mLValue
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_addressofExpressionAST result ;
  if (inAttribute_mLValue.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_addressofExpressionAST (inAttribute_mLValue COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_LValueAST GALGAS_addressofExpressionAST::getter_mLValue (UNUSED_LOCATION_ARGS) const {
  GALGAS_LValueAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_addressofExpressionAST * p = (const cPtr_addressofExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_addressofExpressionAST) ;
    result = p->mProperty_mLValue ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_LValueAST cPtr_addressofExpressionAST::getter_mLValue (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLValue ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                   Pointer class for @addressofExpressionAST class                                   *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_addressofExpressionAST::cPtr_addressofExpressionAST (const GALGAS_LValueAST & in_mLValue
                                                          COMMA_LOCATION_ARGS) :
cPtr_expressionAST (THERE),
mProperty_mLValue (in_mLValue) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_addressofExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_addressofExpressionAST ;
}

void cPtr_addressofExpressionAST::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "[@addressofExpressionAST:" ;
  mProperty_mLValue.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_addressofExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_addressofExpressionAST (mProperty_mLValue COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @addressofExpressionAST type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_addressofExpressionAST ("addressofExpressionAST",
                                               & kTypeDescriptor_GALGAS_expressionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_addressofExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_addressofExpressionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_addressofExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_addressofExpressionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_addressofExpressionAST GALGAS_addressofExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_addressofExpressionAST result ;
  const GALGAS_addressofExpressionAST * p = (const GALGAS_addressofExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_addressofExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("addressofExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticContext::GALGAS_semanticContext (void) :
mProperty_mTargetParameters (),
mProperty_mPanicCodeType (),
mProperty_mPanicLineType (),
mProperty_mPanicSetupRoutinePriorityMap (),
mProperty_mPanicLoopRoutinePriorityMap (),
mProperty_mRoutineMapForContext (),
mProperty_mGuardMapForContext (),
mProperty_mControlRegisterGroupMap (),
mProperty_mGlobalConstantMap (),
mProperty_mGlobalSyncInstanceMap (),
mProperty_mDriverMap (),
mProperty_mStaticListMap (),
mProperty_mTypeMap (),
mProperty_mDefinedInterruptSet (),
mProperty_mAvailableInterruptMap (),
mProperty_mEqualOperatorMap (),
mProperty_mNonEqualOperatorMap (),
mProperty_mStrictInfOperatorMap (),
mProperty_mInfEqualOperatorMap (),
mProperty_mStrictSupOperatorMap (),
mProperty_mSupEqualOperatorMap (),
mProperty_mAndOperatorMap (),
mProperty_mOrOperatorMap (),
mProperty_mXorOperatorMap (),
mProperty_mBooleanXorOperatorMap (),
mProperty_mAddOperatorMap (),
mProperty_mAddNoOvfOperatorMap (),
mProperty_mSubOperatorMap (),
mProperty_mSubNoOvfOperatorMap (),
mProperty_mMulOperatorMap (),
mProperty_mMulNoOvfOperatorMap (),
mProperty_mDivOperatorMap (),
mProperty_mDivNoOvfOperatorMap (),
mProperty_mModOperatorMap (),
mProperty_mModNoOvfOperatorMap (),
mProperty_mLeftShiftOperatorMap (),
mProperty_mRightShiftOperatorMap (),
mProperty_mUnaryMinusOperatorMap (),
mProperty_mNotOperatorMap (),
mProperty_mUnsignedComplementOperatorMap (),
mProperty_mTaskMap (),
mProperty_mGlobalTaskVariableList (),
mProperty_mValuedObjectMap () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticContext::~ GALGAS_semanticContext (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticContext::GALGAS_semanticContext (const GALGAS_targetParameters & inOperand0,
                                                const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                const GALGAS_unifiedTypeMap_2D_proxy & inOperand2,
                                                const GALGAS_panicRoutinePriorityMap & inOperand3,
                                                const GALGAS_panicRoutinePriorityMap & inOperand4,
                                                const GALGAS_routineMapForContext & inOperand5,
                                                const GALGAS_guardMapForContext & inOperand6,
                                                const GALGAS_controlRegisterGroupMap & inOperand7,
                                                const GALGAS_globalConstantMap & inOperand8,
                                                const GALGAS_globalSyncInstanceMap & inOperand9,
                                                const GALGAS_driverMap & inOperand10,
                                                const GALGAS_staticlistMap & inOperand11,
                                                const GALGAS_unifiedTypeMap & inOperand12,
                                                const GALGAS_stringset & inOperand13,
                                                const GALGAS_availableInterruptMap & inOperand14,
                                                const GALGAS_infixOperatorMap & inOperand15,
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
                                                const GALGAS_prefixOperatorMap & inOperand37,
                                                const GALGAS_prefixOperatorMap & inOperand38,
                                                const GALGAS_prefixOperatorMap & inOperand39,
                                                const GALGAS_taskMap & inOperand40,
                                                const GALGAS_globalTaskVariableList & inOperand41,
                                                const GALGAS_universalValuedObjectMap & inOperand42) :
mProperty_mTargetParameters (inOperand0),
mProperty_mPanicCodeType (inOperand1),
mProperty_mPanicLineType (inOperand2),
mProperty_mPanicSetupRoutinePriorityMap (inOperand3),
mProperty_mPanicLoopRoutinePriorityMap (inOperand4),
mProperty_mRoutineMapForContext (inOperand5),
mProperty_mGuardMapForContext (inOperand6),
mProperty_mControlRegisterGroupMap (inOperand7),
mProperty_mGlobalConstantMap (inOperand8),
mProperty_mGlobalSyncInstanceMap (inOperand9),
mProperty_mDriverMap (inOperand10),
mProperty_mStaticListMap (inOperand11),
mProperty_mTypeMap (inOperand12),
mProperty_mDefinedInterruptSet (inOperand13),
mProperty_mAvailableInterruptMap (inOperand14),
mProperty_mEqualOperatorMap (inOperand15),
mProperty_mNonEqualOperatorMap (inOperand16),
mProperty_mStrictInfOperatorMap (inOperand17),
mProperty_mInfEqualOperatorMap (inOperand18),
mProperty_mStrictSupOperatorMap (inOperand19),
mProperty_mSupEqualOperatorMap (inOperand20),
mProperty_mAndOperatorMap (inOperand21),
mProperty_mOrOperatorMap (inOperand22),
mProperty_mXorOperatorMap (inOperand23),
mProperty_mBooleanXorOperatorMap (inOperand24),
mProperty_mAddOperatorMap (inOperand25),
mProperty_mAddNoOvfOperatorMap (inOperand26),
mProperty_mSubOperatorMap (inOperand27),
mProperty_mSubNoOvfOperatorMap (inOperand28),
mProperty_mMulOperatorMap (inOperand29),
mProperty_mMulNoOvfOperatorMap (inOperand30),
mProperty_mDivOperatorMap (inOperand31),
mProperty_mDivNoOvfOperatorMap (inOperand32),
mProperty_mModOperatorMap (inOperand33),
mProperty_mModNoOvfOperatorMap (inOperand34),
mProperty_mLeftShiftOperatorMap (inOperand35),
mProperty_mRightShiftOperatorMap (inOperand36),
mProperty_mUnaryMinusOperatorMap (inOperand37),
mProperty_mNotOperatorMap (inOperand38),
mProperty_mUnsignedComplementOperatorMap (inOperand39),
mProperty_mTaskMap (inOperand40),
mProperty_mGlobalTaskVariableList (inOperand41),
mProperty_mValuedObjectMap (inOperand42) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticContext GALGAS_semanticContext::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_semanticContext (GALGAS_targetParameters::constructor_default (HERE),
                                 GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                 GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                 GALGAS_panicRoutinePriorityMap::constructor_emptyMap (HERE),
                                 GALGAS_panicRoutinePriorityMap::constructor_emptyMap (HERE),
                                 GALGAS_routineMapForContext::constructor_default (HERE),
                                 GALGAS_guardMapForContext::constructor_emptyMap (HERE),
                                 GALGAS_controlRegisterGroupMap::constructor_emptyMap (HERE),
                                 GALGAS_globalConstantMap::constructor_emptyMap (HERE),
                                 GALGAS_globalSyncInstanceMap::constructor_emptyMap (HERE),
                                 GALGAS_driverMap::constructor_emptyMap (HERE),
                                 GALGAS_staticlistMap::constructor_emptyMap (HERE),
                                 GALGAS_unifiedTypeMap::constructor_emptyMap (HERE),
                                 GALGAS_stringset::constructor_emptySet (HERE),
                                 GALGAS_availableInterruptMap::constructor_emptyMap (HERE),
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
                                 GALGAS_globalTaskVariableList::constructor_emptyList (HERE),
                                 GALGAS_universalValuedObjectMap::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticContext GALGAS_semanticContext::constructor_new (const GALGAS_targetParameters & inOperand0,
                                                                const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                const GALGAS_unifiedTypeMap_2D_proxy & inOperand2,
                                                                const GALGAS_panicRoutinePriorityMap & inOperand3,
                                                                const GALGAS_panicRoutinePriorityMap & inOperand4,
                                                                const GALGAS_routineMapForContext & inOperand5,
                                                                const GALGAS_guardMapForContext & inOperand6,
                                                                const GALGAS_controlRegisterGroupMap & inOperand7,
                                                                const GALGAS_globalConstantMap & inOperand8,
                                                                const GALGAS_globalSyncInstanceMap & inOperand9,
                                                                const GALGAS_driverMap & inOperand10,
                                                                const GALGAS_staticlistMap & inOperand11,
                                                                const GALGAS_unifiedTypeMap & inOperand12,
                                                                const GALGAS_stringset & inOperand13,
                                                                const GALGAS_availableInterruptMap & inOperand14,
                                                                const GALGAS_infixOperatorMap & inOperand15,
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
                                                                const GALGAS_prefixOperatorMap & inOperand37,
                                                                const GALGAS_prefixOperatorMap & inOperand38,
                                                                const GALGAS_prefixOperatorMap & inOperand39,
                                                                const GALGAS_taskMap & inOperand40,
                                                                const GALGAS_globalTaskVariableList & inOperand41,
                                                                const GALGAS_universalValuedObjectMap & inOperand42 
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
    result = mProperty_mTargetParameters.objectCompare (inOperand.mProperty_mTargetParameters) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mPanicCodeType.objectCompare (inOperand.mProperty_mPanicCodeType) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mPanicLineType.objectCompare (inOperand.mProperty_mPanicLineType) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mPanicSetupRoutinePriorityMap.objectCompare (inOperand.mProperty_mPanicSetupRoutinePriorityMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mPanicLoopRoutinePriorityMap.objectCompare (inOperand.mProperty_mPanicLoopRoutinePriorityMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mRoutineMapForContext.objectCompare (inOperand.mProperty_mRoutineMapForContext) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mGuardMapForContext.objectCompare (inOperand.mProperty_mGuardMapForContext) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mControlRegisterGroupMap.objectCompare (inOperand.mProperty_mControlRegisterGroupMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mGlobalConstantMap.objectCompare (inOperand.mProperty_mGlobalConstantMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mGlobalSyncInstanceMap.objectCompare (inOperand.mProperty_mGlobalSyncInstanceMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mDriverMap.objectCompare (inOperand.mProperty_mDriverMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mStaticListMap.objectCompare (inOperand.mProperty_mStaticListMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mTypeMap.objectCompare (inOperand.mProperty_mTypeMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mDefinedInterruptSet.objectCompare (inOperand.mProperty_mDefinedInterruptSet) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mAvailableInterruptMap.objectCompare (inOperand.mProperty_mAvailableInterruptMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mEqualOperatorMap.objectCompare (inOperand.mProperty_mEqualOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mNonEqualOperatorMap.objectCompare (inOperand.mProperty_mNonEqualOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mStrictInfOperatorMap.objectCompare (inOperand.mProperty_mStrictInfOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mInfEqualOperatorMap.objectCompare (inOperand.mProperty_mInfEqualOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mStrictSupOperatorMap.objectCompare (inOperand.mProperty_mStrictSupOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSupEqualOperatorMap.objectCompare (inOperand.mProperty_mSupEqualOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mAndOperatorMap.objectCompare (inOperand.mProperty_mAndOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mOrOperatorMap.objectCompare (inOperand.mProperty_mOrOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mXorOperatorMap.objectCompare (inOperand.mProperty_mXorOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBooleanXorOperatorMap.objectCompare (inOperand.mProperty_mBooleanXorOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mAddOperatorMap.objectCompare (inOperand.mProperty_mAddOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mAddNoOvfOperatorMap.objectCompare (inOperand.mProperty_mAddNoOvfOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSubOperatorMap.objectCompare (inOperand.mProperty_mSubOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSubNoOvfOperatorMap.objectCompare (inOperand.mProperty_mSubNoOvfOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mMulOperatorMap.objectCompare (inOperand.mProperty_mMulOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mMulNoOvfOperatorMap.objectCompare (inOperand.mProperty_mMulNoOvfOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mDivOperatorMap.objectCompare (inOperand.mProperty_mDivOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mDivNoOvfOperatorMap.objectCompare (inOperand.mProperty_mDivNoOvfOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mModOperatorMap.objectCompare (inOperand.mProperty_mModOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mModNoOvfOperatorMap.objectCompare (inOperand.mProperty_mModNoOvfOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mLeftShiftOperatorMap.objectCompare (inOperand.mProperty_mLeftShiftOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mRightShiftOperatorMap.objectCompare (inOperand.mProperty_mRightShiftOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mUnaryMinusOperatorMap.objectCompare (inOperand.mProperty_mUnaryMinusOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mNotOperatorMap.objectCompare (inOperand.mProperty_mNotOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mUnsignedComplementOperatorMap.objectCompare (inOperand.mProperty_mUnsignedComplementOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mTaskMap.objectCompare (inOperand.mProperty_mTaskMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mGlobalTaskVariableList.objectCompare (inOperand.mProperty_mGlobalTaskVariableList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mValuedObjectMap.objectCompare (inOperand.mProperty_mValuedObjectMap) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_semanticContext::isValid (void) const {
  return mProperty_mTargetParameters.isValid () && mProperty_mPanicCodeType.isValid () && mProperty_mPanicLineType.isValid () && mProperty_mPanicSetupRoutinePriorityMap.isValid () && mProperty_mPanicLoopRoutinePriorityMap.isValid () && mProperty_mRoutineMapForContext.isValid () && mProperty_mGuardMapForContext.isValid () && mProperty_mControlRegisterGroupMap.isValid () && mProperty_mGlobalConstantMap.isValid () && mProperty_mGlobalSyncInstanceMap.isValid () && mProperty_mDriverMap.isValid () && mProperty_mStaticListMap.isValid () && mProperty_mTypeMap.isValid () && mProperty_mDefinedInterruptSet.isValid () && mProperty_mAvailableInterruptMap.isValid () && mProperty_mEqualOperatorMap.isValid () && mProperty_mNonEqualOperatorMap.isValid () && mProperty_mStrictInfOperatorMap.isValid () && mProperty_mInfEqualOperatorMap.isValid () && mProperty_mStrictSupOperatorMap.isValid () && mProperty_mSupEqualOperatorMap.isValid () && mProperty_mAndOperatorMap.isValid () && mProperty_mOrOperatorMap.isValid () && mProperty_mXorOperatorMap.isValid () && mProperty_mBooleanXorOperatorMap.isValid () && mProperty_mAddOperatorMap.isValid () && mProperty_mAddNoOvfOperatorMap.isValid () && mProperty_mSubOperatorMap.isValid () && mProperty_mSubNoOvfOperatorMap.isValid () && mProperty_mMulOperatorMap.isValid () && mProperty_mMulNoOvfOperatorMap.isValid () && mProperty_mDivOperatorMap.isValid () && mProperty_mDivNoOvfOperatorMap.isValid () && mProperty_mModOperatorMap.isValid () && mProperty_mModNoOvfOperatorMap.isValid () && mProperty_mLeftShiftOperatorMap.isValid () && mProperty_mRightShiftOperatorMap.isValid () && mProperty_mUnaryMinusOperatorMap.isValid () && mProperty_mNotOperatorMap.isValid () && mProperty_mUnsignedComplementOperatorMap.isValid () && mProperty_mTaskMap.isValid () && mProperty_mGlobalTaskVariableList.isValid () && mProperty_mValuedObjectMap.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticContext::drop (void) {
  mProperty_mTargetParameters.drop () ;
  mProperty_mPanicCodeType.drop () ;
  mProperty_mPanicLineType.drop () ;
  mProperty_mPanicSetupRoutinePriorityMap.drop () ;
  mProperty_mPanicLoopRoutinePriorityMap.drop () ;
  mProperty_mRoutineMapForContext.drop () ;
  mProperty_mGuardMapForContext.drop () ;
  mProperty_mControlRegisterGroupMap.drop () ;
  mProperty_mGlobalConstantMap.drop () ;
  mProperty_mGlobalSyncInstanceMap.drop () ;
  mProperty_mDriverMap.drop () ;
  mProperty_mStaticListMap.drop () ;
  mProperty_mTypeMap.drop () ;
  mProperty_mDefinedInterruptSet.drop () ;
  mProperty_mAvailableInterruptMap.drop () ;
  mProperty_mEqualOperatorMap.drop () ;
  mProperty_mNonEqualOperatorMap.drop () ;
  mProperty_mStrictInfOperatorMap.drop () ;
  mProperty_mInfEqualOperatorMap.drop () ;
  mProperty_mStrictSupOperatorMap.drop () ;
  mProperty_mSupEqualOperatorMap.drop () ;
  mProperty_mAndOperatorMap.drop () ;
  mProperty_mOrOperatorMap.drop () ;
  mProperty_mXorOperatorMap.drop () ;
  mProperty_mBooleanXorOperatorMap.drop () ;
  mProperty_mAddOperatorMap.drop () ;
  mProperty_mAddNoOvfOperatorMap.drop () ;
  mProperty_mSubOperatorMap.drop () ;
  mProperty_mSubNoOvfOperatorMap.drop () ;
  mProperty_mMulOperatorMap.drop () ;
  mProperty_mMulNoOvfOperatorMap.drop () ;
  mProperty_mDivOperatorMap.drop () ;
  mProperty_mDivNoOvfOperatorMap.drop () ;
  mProperty_mModOperatorMap.drop () ;
  mProperty_mModNoOvfOperatorMap.drop () ;
  mProperty_mLeftShiftOperatorMap.drop () ;
  mProperty_mRightShiftOperatorMap.drop () ;
  mProperty_mUnaryMinusOperatorMap.drop () ;
  mProperty_mNotOperatorMap.drop () ;
  mProperty_mUnsignedComplementOperatorMap.drop () ;
  mProperty_mTaskMap.drop () ;
  mProperty_mGlobalTaskVariableList.drop () ;
  mProperty_mValuedObjectMap.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticContext::description (C_String & ioString,
                                          const int32_t inIndentation) const {
  ioString << "<struct @semanticContext:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mTargetParameters.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mPanicCodeType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mPanicLineType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mPanicSetupRoutinePriorityMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mPanicLoopRoutinePriorityMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mRoutineMapForContext.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mGuardMapForContext.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mControlRegisterGroupMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mGlobalConstantMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mGlobalSyncInstanceMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mDriverMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mStaticListMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mTypeMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mDefinedInterruptSet.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mAvailableInterruptMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mEqualOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mNonEqualOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mStrictInfOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mInfEqualOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mStrictSupOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSupEqualOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mAndOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mOrOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mXorOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBooleanXorOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mAddOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mAddNoOvfOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSubOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSubNoOvfOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mMulOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mMulNoOvfOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mDivOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mDivNoOvfOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mModOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mModNoOvfOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mLeftShiftOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mRightShiftOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mUnaryMinusOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mNotOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mUnsignedComplementOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mTaskMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mGlobalTaskVariableList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mValuedObjectMap.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_targetParameters GALGAS_semanticContext::getter_mTargetParameters (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTargetParameters ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_semanticContext::getter_mPanicCodeType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPanicCodeType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_semanticContext::getter_mPanicLineType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPanicLineType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_panicRoutinePriorityMap GALGAS_semanticContext::getter_mPanicSetupRoutinePriorityMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPanicSetupRoutinePriorityMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_panicRoutinePriorityMap GALGAS_semanticContext::getter_mPanicLoopRoutinePriorityMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPanicLoopRoutinePriorityMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineMapForContext GALGAS_semanticContext::getter_mRoutineMapForContext (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRoutineMapForContext ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardMapForContext GALGAS_semanticContext::getter_mGuardMapForContext (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGuardMapForContext ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterGroupMap GALGAS_semanticContext::getter_mControlRegisterGroupMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mControlRegisterGroupMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalConstantMap GALGAS_semanticContext::getter_mGlobalConstantMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGlobalConstantMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalSyncInstanceMap GALGAS_semanticContext::getter_mGlobalSyncInstanceMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGlobalSyncInstanceMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_driverMap GALGAS_semanticContext::getter_mDriverMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDriverMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticlistMap GALGAS_semanticContext::getter_mStaticListMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mStaticListMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap GALGAS_semanticContext::getter_mTypeMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTypeMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringset GALGAS_semanticContext::getter_mDefinedInterruptSet (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDefinedInterruptSet ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_availableInterruptMap GALGAS_semanticContext::getter_mAvailableInterruptMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAvailableInterruptMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::getter_mEqualOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEqualOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::getter_mNonEqualOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mNonEqualOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::getter_mStrictInfOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mStrictInfOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::getter_mInfEqualOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInfEqualOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::getter_mStrictSupOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mStrictSupOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::getter_mSupEqualOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSupEqualOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::getter_mAndOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAndOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::getter_mOrOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOrOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::getter_mXorOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mXorOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::getter_mBooleanXorOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBooleanXorOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::getter_mAddOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAddOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::getter_mAddNoOvfOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAddNoOvfOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::getter_mSubOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSubOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::getter_mSubNoOvfOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSubNoOvfOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::getter_mMulOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mMulOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::getter_mMulNoOvfOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mMulNoOvfOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::getter_mDivOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDivOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::getter_mDivNoOvfOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDivNoOvfOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::getter_mModOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mModOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::getter_mModNoOvfOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mModNoOvfOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::getter_mLeftShiftOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLeftShiftOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::getter_mRightShiftOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRightShiftOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefixOperatorMap GALGAS_semanticContext::getter_mUnaryMinusOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mUnaryMinusOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefixOperatorMap GALGAS_semanticContext::getter_mNotOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mNotOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefixOperatorMap GALGAS_semanticContext::getter_mUnsignedComplementOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mUnsignedComplementOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskMap GALGAS_semanticContext::getter_mTaskMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTaskMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalTaskVariableList GALGAS_semanticContext::getter_mGlobalTaskVariableList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGlobalTaskVariableList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_universalValuedObjectMap GALGAS_semanticContext::getter_mValuedObjectMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mValuedObjectMap ;
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
//                                                                                                                     *
//                                   Extension Getter '@semanticContext booleanType'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMType extensionGetter_booleanType (const GALGAS_semanticContext & inObject,
                                            C_Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_PLMType result_result ; // Returned variable
  GALGAS_uint joker_6111_1 ; // Joker input parameter
  inObject.mProperty_mTypeMap.method_searchKey (function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("context.galgas", 152)).getter_nowhere (SOURCE_FILE ("context.galgas", 152)), result_result, joker_6111_1, inCompiler COMMA_SOURCE_FILE ("context.galgas", 152)) ;
//---
  return result_result ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Extension method '@routineMapIR-element llvmCodeGeneration'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_llvmCodeGeneration (const GALGAS_routineMapIR_2D_element inObject,
                                         GALGAS_string & ioArgument_ioLLVMcode,
                                         GALGAS_string & /* ioArgument_ioAssemblerCode */,
                                         const GALGAS_generationContext constinArgument_inGenerationContext,
                                         GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                         C_Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_routineName_6457 ;
  switch (inObject.mProperty_mKind.enumValue ()) {
  case GALGAS_routineKind::kNotBuilt:
    break ;
  case GALGAS_routineKind::kEnum_function:
    {
      var_routineName_6457 = function_llvmNameForFunction (inObject.mProperty_mRoutineNameForGeneration.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 163)) ;
    }
    break ;
  case GALGAS_routineKind::kEnum_section:
    {
      var_routineName_6457 = function_llvmNameForSectionImplementation (inObject.mProperty_mRoutineNameForGeneration.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 164)) ;
    }
    break ;
  case GALGAS_routineKind::kEnum_service:
    {
      var_routineName_6457 = function_llvmNameForServiceImplementation (inObject.mProperty_mRoutineNameForGeneration.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 165)) ;
    }
    break ;
  case GALGAS_routineKind::kEnum_primitive:
    {
      var_routineName_6457 = function_llvmNameForPrimitiveImplementation (inObject.mProperty_mRoutineNameForGeneration.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 166)) ;
    }
    break ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (var_routineName_6457, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 168)), inCompiler  COMMA_SOURCE_FILE ("semantic-routines.galgas", 168)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define"), inCompiler  COMMA_SOURCE_FILE ("semantic-routines.galgas", 169)) ;
  const enumGalgasBool test_0 = inObject.mProperty_mGlobal.operator_not (SOURCE_FILE ("semantic-routines.galgas", 170)).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" internal"), inCompiler  COMMA_SOURCE_FILE ("semantic-routines.galgas", 171)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_llvmTypeName (inObject.mProperty_mReturnType, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 173)), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 173)), inCompiler  COMMA_SOURCE_FILE ("semantic-routines.galgas", 173)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" @").add_operation (var_routineName_6457, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 174)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 174)), inCompiler  COMMA_SOURCE_FILE ("semantic-routines.galgas", 174)) ;
  GALGAS_string temp_1 ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, inObject.mProperty_mReceiverType.getter_kind (HERE).objectCompare (GALGAS_typeKind::constructor_void (SOURCE_FILE ("semantic-routines.galgas", 175)))).boolEnum () ;
  if (kBoolTrue == test_2) {
    temp_1 = GALGAS_string::makeEmptyString () ;
  }else if (kBoolFalse == test_2) {
    temp_1 = function_llvmTypeStringFromPLMname (inObject.mProperty_mReceiverType.getter_plmOriginalTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 177)) ;
  }
  GALGAS_string var_receiverTypeName_7119 = temp_1 ;
  GALGAS_bool var_first_7254 = GALGAS_bool (true) ;
  const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, var_receiverTypeName_7119.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_3) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("%").add_operation (var_receiverTypeName_7119.getter_assemblerRepresentation (SOURCE_FILE ("semantic-routines.galgas", 181)), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 181)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 181)).add_operation (function_llvmNameForSelf (inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 181)), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 181)), inCompiler  COMMA_SOURCE_FILE ("semantic-routines.galgas", 181)) ;
    var_first_7254 = GALGAS_bool (false) ;
  }
  cEnumerator_routineFormalArgumentListIR enumerator_7458 (inObject.mProperty_mFormalArgumentListForGeneration, kENUMERATION_UP) ;
  while (enumerator_7458.hasCurrentObject ()) {
    const enumGalgasBool test_4 = var_first_7254.boolEnum () ;
    if (kBoolTrue == test_4) {
      var_first_7254 = GALGAS_bool (false) ;
    }else if (kBoolFalse == test_4) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("semantic-routines.galgas", 188)) ;
    }
    switch (enumerator_7458.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_7458.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 192)).add_operation (GALGAS_string (" %in."), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 192)).add_operation (enumerator_7458.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 192)), inCompiler  COMMA_SOURCE_FILE ("semantic-routines.galgas", 192)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_7458.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 194)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 194)).add_operation (function_llvmNameForLocalVariable (enumerator_7458.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 194)), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 194)), inCompiler  COMMA_SOURCE_FILE ("semantic-routines.galgas", 194)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_7458.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 196)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 196)).add_operation (function_llvmNameForLocalVariable (enumerator_7458.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 196)), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 196)), inCompiler  COMMA_SOURCE_FILE ("semantic-routines.galgas", 196)) ;
      }
      break ;
    }
    enumerator_7458.gotoNextObject () ;
  }
  GALGAS_bool test_5 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).operator_not (SOURCE_FILE ("semantic-routines.galgas", 199)) ;
  if (kBoolTrue == test_5.boolEnum ()) {
    test_5 = inObject.mProperty_mAppendFileAndLineArgumentForPanicLocation ;
  }
  const enumGalgasBool test_6 = test_5.boolEnum () ;
  if (kBoolTrue == test_6) {
    const enumGalgasBool test_7 = var_first_7254.operator_not (SOURCE_FILE ("semantic-routines.galgas", 200)).boolEnum () ;
    if (kBoolTrue == test_7) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("semantic-routines.galgas", 201)) ;
    }
    ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (constinArgument_inGenerationContext.getter_mPanicLineLLVMType (HERE), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 203)).add_operation (GALGAS_string (" %LINE, i8* %FILE"), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 203)), inCompiler  COMMA_SOURCE_FILE ("semantic-routines.galgas", 203)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 205)), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 205)).add_operation (GALGAS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 205)), inCompiler  COMMA_SOURCE_FILE ("semantic-routines.galgas", 205)) ;
  GALGAS_allocaList var_allocaList_8315 = inObject.mProperty_mAllocaList ;
  const enumGalgasBool test_8 = GALGAS_bool (kIsNotEqual, inObject.mProperty_mReturnType.getter_kind (HERE).objectCompare (GALGAS_typeKind::constructor_void (SOURCE_FILE ("semantic-routines.galgas", 208)))).boolEnum () ;
  if (kBoolTrue == test_8) {
    var_allocaList_8315.addAssign_operation (function_llvmNameForLocalVariable (function_functionResultVariableName (inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 209)), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 209)), inObject.mProperty_mReturnType, GALGAS_bool (false)  COMMA_SOURCE_FILE ("semantic-routines.galgas", 209)) ;
  }
  cEnumerator_routineFormalArgumentListIR enumerator_8550 (inObject.mProperty_mFormalArgumentListForGeneration, kENUMERATION_UP) ;
  while (enumerator_8550.hasCurrentObject ()) {
    switch (enumerator_8550.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        var_allocaList_8315.addAssign_operation (function_llvmNameForLocalVariable (enumerator_8550.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 215)), enumerator_8550.current_mFormalArgumentType (HERE), GALGAS_bool (true)  COMMA_SOURCE_FILE ("semantic-routines.galgas", 215)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
      }
      break ;
    }
    enumerator_8550.gotoNextObject () ;
  }
  extensionMethod_generateAllocaList (var_allocaList_8315, ioArgument_ioLLVMcode, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 219)) ;
  cEnumerator_routineFormalArgumentListIR enumerator_8960 (inObject.mProperty_mFormalArgumentListForGeneration, kENUMERATION_UP) ;
  while (enumerator_8960.hasCurrentObject ()) {
    switch (enumerator_8960.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--------- Input argument '").add_operation (enumerator_8960.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 225)).add_operation (GALGAS_string ("'\n"), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 225)), inCompiler  COMMA_SOURCE_FILE ("semantic-routines.galgas", 225)) ;
        GALGAS_string var_llvmType_9110 = extensionGetter_llvmTypeName (enumerator_8960.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 226)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_llvmType_9110, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 227)).add_operation (GALGAS_string (" %in."), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 227)).add_operation (enumerator_8960.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 227)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 227)).add_operation (var_llvmType_9110, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 227)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 227)).add_operation (function_llvmNameForLocalVariable (enumerator_8960.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 228)), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 227)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 228)), inCompiler  COMMA_SOURCE_FILE ("semantic-routines.galgas", 227)) ;
        extensionMethod_generateRetain (enumerator_8960.current_mFormalArgumentType (HERE), enumerator_8960.current_mFormalArgumentName (HERE), ioArgument_ioLLVMcode, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 229)) ;
        const enumGalgasBool test_9 = GALGAS_bool (kIsEqual, inObject.mProperty_mKind.objectCompare (GALGAS_routineKind::constructor_section (SOURCE_FILE ("semantic-routines.galgas", 230)))).boolEnum () ;
        if (kBoolTrue == test_9) {
          extensionMethod_generateInsulate (enumerator_8960.current_mFormalArgumentType (HERE), enumerator_8960.current_mFormalArgumentName (HERE), ioArgument_ioLLVMcode, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 231)) ;
        }
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
        const enumGalgasBool test_10 = GALGAS_bool (kIsEqual, inObject.mProperty_mKind.objectCompare (GALGAS_routineKind::constructor_section (SOURCE_FILE ("semantic-routines.galgas", 234)))).boolEnum () ;
        if (kBoolTrue == test_10) {
          ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--------- Insulate input/output argument '").add_operation (enumerator_8960.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 235)).add_operation (GALGAS_string ("'\n"), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 235)), inCompiler  COMMA_SOURCE_FILE ("semantic-routines.galgas", 235)) ;
          extensionMethod_generateInsulate (enumerator_8960.current_mFormalArgumentType (HERE), enumerator_8960.current_mFormalArgumentName (HERE), ioArgument_ioLLVMcode, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 236)) ;
        }
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
      {
      }
      break ;
    }
    enumerator_8960.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--------- Function instruction list\n"), inCompiler  COMMA_SOURCE_FILE ("semantic-routines.galgas", 242)) ;
  extensionMethod_instructionListLLVMCode (inObject.mProperty_mInstructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 243)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--------- Release input arguments\n"), inCompiler  COMMA_SOURCE_FILE ("semantic-routines.galgas", 246)) ;
  cEnumerator_routineFormalArgumentListIR enumerator_10242 (inObject.mProperty_mFormalArgumentListForGeneration, kENUMERATION_UP) ;
  while (enumerator_10242.hasCurrentObject ()) {
    switch (enumerator_10242.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        extensionMethod_generateRelease (enumerator_10242.current_mFormalArgumentType (HERE), enumerator_10242.current_mFormalArgumentName (HERE), ioArgument_ioLLVMcode, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 250)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
        const enumGalgasBool test_11 = GALGAS_bool (kIsEqual, inObject.mProperty_mKind.objectCompare (GALGAS_routineKind::constructor_section (SOURCE_FILE ("semantic-routines.galgas", 252)))).boolEnum () ;
        if (kBoolTrue == test_11) {
          ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--------- Insulate input/output argument '").add_operation (enumerator_10242.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 253)).add_operation (GALGAS_string ("'\n"), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 253)), inCompiler  COMMA_SOURCE_FILE ("semantic-routines.galgas", 253)) ;
          extensionMethod_generateInsulate (enumerator_10242.current_mFormalArgumentType (HERE), enumerator_10242.current_mFormalArgumentName (HERE), ioArgument_ioLLVMcode, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 254)) ;
        }
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
      {
        const enumGalgasBool test_12 = GALGAS_bool (kIsEqual, inObject.mProperty_mKind.objectCompare (GALGAS_routineKind::constructor_section (SOURCE_FILE ("semantic-routines.galgas", 257)))).boolEnum () ;
        if (kBoolTrue == test_12) {
          ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--------- Insulate output argument '").add_operation (enumerator_10242.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 258)).add_operation (GALGAS_string ("'\n"), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 258)), inCompiler  COMMA_SOURCE_FILE ("semantic-routines.galgas", 258)) ;
          extensionMethod_generateInsulate (enumerator_10242.current_mFormalArgumentType (HERE), enumerator_10242.current_mFormalArgumentName (HERE), ioArgument_ioLLVMcode, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 259)) ;
        }
      }
      break ;
    }
    enumerator_10242.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--------- Return\n"), inCompiler  COMMA_SOURCE_FILE ("semantic-routines.galgas", 264)) ;
  const enumGalgasBool test_13 = GALGAS_bool (kIsEqual, inObject.mProperty_mReturnType.getter_kind (HERE).objectCompare (GALGAS_typeKind::constructor_void (SOURCE_FILE ("semantic-routines.galgas", 265)))).boolEnum () ;
  if (kBoolTrue == test_13) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("semantic-routines.galgas", 266)) ;
  }else if (kBoolFalse == test_13) {
    GALGAS_string var_resultVarLLVMName_11067 = function_llvmNameForLocalVariable (function_functionResultVariableName (inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 268)), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 268)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %result = load ").add_operation (extensionGetter_llvmTypeName (inObject.mProperty_mReturnType, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 269)), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 269)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 269)).add_operation (extensionGetter_llvmTypeName (inObject.mProperty_mReturnType, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 269)), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 269)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 269)).add_operation (var_resultVarLLVMName_11067, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 269)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 269)), inCompiler  COMMA_SOURCE_FILE ("semantic-routines.galgas", 269)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret ").add_operation (extensionGetter_llvmTypeName (inObject.mProperty_mReturnType, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 270)), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 270)).add_operation (GALGAS_string (" %result\n"), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 270)), inCompiler  COMMA_SOURCE_FILE ("semantic-routines.galgas", 270)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("semantic-routines.galgas", 272)) ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_intermediateCodeStruct::GALGAS_intermediateCodeStruct (void) :
mProperty_mStaticEntityMap (),
mProperty_mGlobalConstantMap (),
mProperty_mRoutineMapIR (),
mProperty_mGuardMapIR (),
mProperty_mInterruptMapIR (),
mProperty_mExternProcedureMapIR (),
mProperty_mRequiredProcedureSet (),
mProperty_mBootList (),
mProperty_mInitList (),
mProperty_mPanicSetupInstructionListIR (),
mProperty_mPanicLoopInstructionListIR (),
mProperty_mTaskMapIR (),
mProperty_mGlobalTaskVariableList (),
mProperty_mMaxBranchOfOnInstructions (),
mProperty_mTargetParameters (),
mProperty_mDriverList (),
mProperty_mStaticArrayMapForIntermediate (),
mProperty_mGenerationListIR (),
mProperty_mGlobalSyncInstanceMap () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_intermediateCodeStruct::~ GALGAS_intermediateCodeStruct (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_intermediateCodeStruct::GALGAS_intermediateCodeStruct (const GALGAS_staticEntityMap & inOperand0,
                                                              const GALGAS_globalConstantMapIR & inOperand1,
                                                              const GALGAS_routineMapIR & inOperand2,
                                                              const GALGAS_guardMapIR & inOperand3,
                                                              const GALGAS_interruptMapIR & inOperand4,
                                                              const GALGAS_externProcedureMapIR & inOperand5,
                                                              const GALGAS_stringset & inOperand6,
                                                              const GALGAS_bootListIR & inOperand7,
                                                              const GALGAS_initListIR & inOperand8,
                                                              const GALGAS_instructionListSortedListIR & inOperand9,
                                                              const GALGAS_instructionListSortedListIR & inOperand10,
                                                              const GALGAS_taskMapIR & inOperand11,
                                                              const GALGAS_globalTaskVariableList & inOperand12,
                                                              const GALGAS_uint & inOperand13,
                                                              const GALGAS_targetParameters & inOperand14,
                                                              const GALGAS_driverListIR & inOperand15,
                                                              const GALGAS_staticListInvokedFunctionSetMap & inOperand16,
                                                              const GALGAS_generationListIR & inOperand17,
                                                              const GALGAS_globalSyncInstanceMapIR & inOperand18) :
mProperty_mStaticEntityMap (inOperand0),
mProperty_mGlobalConstantMap (inOperand1),
mProperty_mRoutineMapIR (inOperand2),
mProperty_mGuardMapIR (inOperand3),
mProperty_mInterruptMapIR (inOperand4),
mProperty_mExternProcedureMapIR (inOperand5),
mProperty_mRequiredProcedureSet (inOperand6),
mProperty_mBootList (inOperand7),
mProperty_mInitList (inOperand8),
mProperty_mPanicSetupInstructionListIR (inOperand9),
mProperty_mPanicLoopInstructionListIR (inOperand10),
mProperty_mTaskMapIR (inOperand11),
mProperty_mGlobalTaskVariableList (inOperand12),
mProperty_mMaxBranchOfOnInstructions (inOperand13),
mProperty_mTargetParameters (inOperand14),
mProperty_mDriverList (inOperand15),
mProperty_mStaticArrayMapForIntermediate (inOperand16),
mProperty_mGenerationListIR (inOperand17),
mProperty_mGlobalSyncInstanceMap (inOperand18) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_intermediateCodeStruct GALGAS_intermediateCodeStruct::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_intermediateCodeStruct (GALGAS_staticEntityMap::constructor_default (HERE),
                                        GALGAS_globalConstantMapIR::constructor_emptyMap (HERE),
                                        GALGAS_routineMapIR::constructor_emptyMap (HERE),
                                        GALGAS_guardMapIR::constructor_emptyMap (HERE),
                                        GALGAS_interruptMapIR::constructor_emptyMap (HERE),
                                        GALGAS_externProcedureMapIR::constructor_emptyMap (HERE),
                                        GALGAS_stringset::constructor_emptySet (HERE),
                                        GALGAS_bootListIR::constructor_emptyList (HERE),
                                        GALGAS_initListIR::constructor_emptyList (HERE),
                                        GALGAS_instructionListSortedListIR::constructor_emptySortedList (HERE),
                                        GALGAS_instructionListSortedListIR::constructor_emptySortedList (HERE),
                                        GALGAS_taskMapIR::constructor_emptyMap (HERE),
                                        GALGAS_globalTaskVariableList::constructor_emptyList (HERE),
                                        GALGAS_uint::constructor_default (HERE),
                                        GALGAS_targetParameters::constructor_default (HERE),
                                        GALGAS_driverListIR::constructor_emptyList (HERE),
                                        GALGAS_staticListInvokedFunctionSetMap::constructor_emptyMap (HERE),
                                        GALGAS_generationListIR::constructor_emptyList (HERE),
                                        GALGAS_globalSyncInstanceMapIR::constructor_emptyMap (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_intermediateCodeStruct GALGAS_intermediateCodeStruct::constructor_new (const GALGAS_staticEntityMap & inOperand0,
                                                                              const GALGAS_globalConstantMapIR & inOperand1,
                                                                              const GALGAS_routineMapIR & inOperand2,
                                                                              const GALGAS_guardMapIR & inOperand3,
                                                                              const GALGAS_interruptMapIR & inOperand4,
                                                                              const GALGAS_externProcedureMapIR & inOperand5,
                                                                              const GALGAS_stringset & inOperand6,
                                                                              const GALGAS_bootListIR & inOperand7,
                                                                              const GALGAS_initListIR & inOperand8,
                                                                              const GALGAS_instructionListSortedListIR & inOperand9,
                                                                              const GALGAS_instructionListSortedListIR & inOperand10,
                                                                              const GALGAS_taskMapIR & inOperand11,
                                                                              const GALGAS_globalTaskVariableList & inOperand12,
                                                                              const GALGAS_uint & inOperand13,
                                                                              const GALGAS_targetParameters & inOperand14,
                                                                              const GALGAS_driverListIR & inOperand15,
                                                                              const GALGAS_staticListInvokedFunctionSetMap & inOperand16,
                                                                              const GALGAS_generationListIR & inOperand17,
                                                                              const GALGAS_globalSyncInstanceMapIR & inOperand18 
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_intermediateCodeStruct result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid () && inOperand10.isValid () && inOperand11.isValid () && inOperand12.isValid () && inOperand13.isValid () && inOperand14.isValid () && inOperand15.isValid () && inOperand16.isValid () && inOperand17.isValid () && inOperand18.isValid ()) {
    result = GALGAS_intermediateCodeStruct (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10, inOperand11, inOperand12, inOperand13, inOperand14, inOperand15, inOperand16, inOperand17, inOperand18) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_intermediateCodeStruct::objectCompare (const GALGAS_intermediateCodeStruct & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mStaticEntityMap.objectCompare (inOperand.mProperty_mStaticEntityMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mGlobalConstantMap.objectCompare (inOperand.mProperty_mGlobalConstantMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mRoutineMapIR.objectCompare (inOperand.mProperty_mRoutineMapIR) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mGuardMapIR.objectCompare (inOperand.mProperty_mGuardMapIR) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mInterruptMapIR.objectCompare (inOperand.mProperty_mInterruptMapIR) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mExternProcedureMapIR.objectCompare (inOperand.mProperty_mExternProcedureMapIR) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mRequiredProcedureSet.objectCompare (inOperand.mProperty_mRequiredProcedureSet) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBootList.objectCompare (inOperand.mProperty_mBootList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mInitList.objectCompare (inOperand.mProperty_mInitList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mPanicSetupInstructionListIR.objectCompare (inOperand.mProperty_mPanicSetupInstructionListIR) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mPanicLoopInstructionListIR.objectCompare (inOperand.mProperty_mPanicLoopInstructionListIR) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mTaskMapIR.objectCompare (inOperand.mProperty_mTaskMapIR) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mGlobalTaskVariableList.objectCompare (inOperand.mProperty_mGlobalTaskVariableList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mMaxBranchOfOnInstructions.objectCompare (inOperand.mProperty_mMaxBranchOfOnInstructions) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mTargetParameters.objectCompare (inOperand.mProperty_mTargetParameters) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mDriverList.objectCompare (inOperand.mProperty_mDriverList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mStaticArrayMapForIntermediate.objectCompare (inOperand.mProperty_mStaticArrayMapForIntermediate) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mGenerationListIR.objectCompare (inOperand.mProperty_mGenerationListIR) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mGlobalSyncInstanceMap.objectCompare (inOperand.mProperty_mGlobalSyncInstanceMap) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_intermediateCodeStruct::isValid (void) const {
  return mProperty_mStaticEntityMap.isValid () && mProperty_mGlobalConstantMap.isValid () && mProperty_mRoutineMapIR.isValid () && mProperty_mGuardMapIR.isValid () && mProperty_mInterruptMapIR.isValid () && mProperty_mExternProcedureMapIR.isValid () && mProperty_mRequiredProcedureSet.isValid () && mProperty_mBootList.isValid () && mProperty_mInitList.isValid () && mProperty_mPanicSetupInstructionListIR.isValid () && mProperty_mPanicLoopInstructionListIR.isValid () && mProperty_mTaskMapIR.isValid () && mProperty_mGlobalTaskVariableList.isValid () && mProperty_mMaxBranchOfOnInstructions.isValid () && mProperty_mTargetParameters.isValid () && mProperty_mDriverList.isValid () && mProperty_mStaticArrayMapForIntermediate.isValid () && mProperty_mGenerationListIR.isValid () && mProperty_mGlobalSyncInstanceMap.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_intermediateCodeStruct::drop (void) {
  mProperty_mStaticEntityMap.drop () ;
  mProperty_mGlobalConstantMap.drop () ;
  mProperty_mRoutineMapIR.drop () ;
  mProperty_mGuardMapIR.drop () ;
  mProperty_mInterruptMapIR.drop () ;
  mProperty_mExternProcedureMapIR.drop () ;
  mProperty_mRequiredProcedureSet.drop () ;
  mProperty_mBootList.drop () ;
  mProperty_mInitList.drop () ;
  mProperty_mPanicSetupInstructionListIR.drop () ;
  mProperty_mPanicLoopInstructionListIR.drop () ;
  mProperty_mTaskMapIR.drop () ;
  mProperty_mGlobalTaskVariableList.drop () ;
  mProperty_mMaxBranchOfOnInstructions.drop () ;
  mProperty_mTargetParameters.drop () ;
  mProperty_mDriverList.drop () ;
  mProperty_mStaticArrayMapForIntermediate.drop () ;
  mProperty_mGenerationListIR.drop () ;
  mProperty_mGlobalSyncInstanceMap.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_intermediateCodeStruct::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "<struct @intermediateCodeStruct:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mStaticEntityMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mGlobalConstantMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mRoutineMapIR.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mGuardMapIR.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mInterruptMapIR.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mExternProcedureMapIR.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mRequiredProcedureSet.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBootList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mInitList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mPanicSetupInstructionListIR.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mPanicLoopInstructionListIR.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mTaskMapIR.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mGlobalTaskVariableList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mMaxBranchOfOnInstructions.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mTargetParameters.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mDriverList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mStaticArrayMapForIntermediate.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mGenerationListIR.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mGlobalSyncInstanceMap.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticEntityMap GALGAS_intermediateCodeStruct::getter_mStaticEntityMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mStaticEntityMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalConstantMapIR GALGAS_intermediateCodeStruct::getter_mGlobalConstantMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGlobalConstantMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineMapIR GALGAS_intermediateCodeStruct::getter_mRoutineMapIR (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRoutineMapIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardMapIR GALGAS_intermediateCodeStruct::getter_mGuardMapIR (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGuardMapIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_interruptMapIR GALGAS_intermediateCodeStruct::getter_mInterruptMapIR (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInterruptMapIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externProcedureMapIR GALGAS_intermediateCodeStruct::getter_mExternProcedureMapIR (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExternProcedureMapIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringset GALGAS_intermediateCodeStruct::getter_mRequiredProcedureSet (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRequiredProcedureSet ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootListIR GALGAS_intermediateCodeStruct::getter_mBootList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBootList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initListIR GALGAS_intermediateCodeStruct::getter_mInitList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInitList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListSortedListIR GALGAS_intermediateCodeStruct::getter_mPanicSetupInstructionListIR (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPanicSetupInstructionListIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListSortedListIR GALGAS_intermediateCodeStruct::getter_mPanicLoopInstructionListIR (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPanicLoopInstructionListIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskMapIR GALGAS_intermediateCodeStruct::getter_mTaskMapIR (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTaskMapIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalTaskVariableList GALGAS_intermediateCodeStruct::getter_mGlobalTaskVariableList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGlobalTaskVariableList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_intermediateCodeStruct::getter_mMaxBranchOfOnInstructions (UNUSED_LOCATION_ARGS) const {
  return mProperty_mMaxBranchOfOnInstructions ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_targetParameters GALGAS_intermediateCodeStruct::getter_mTargetParameters (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTargetParameters ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_driverListIR GALGAS_intermediateCodeStruct::getter_mDriverList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDriverList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticListInvokedFunctionSetMap GALGAS_intermediateCodeStruct::getter_mStaticArrayMapForIntermediate (UNUSED_LOCATION_ARGS) const {
  return mProperty_mStaticArrayMapForIntermediate ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_generationListIR GALGAS_intermediateCodeStruct::getter_mGenerationListIR (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGenerationListIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalSyncInstanceMapIR GALGAS_intermediateCodeStruct::getter_mGlobalSyncInstanceMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGlobalSyncInstanceMap ;
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
//                               Bool options                                                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

C_BoolCommandLineOption gOption_plm_5F_options_doNotDetectRecursiveCalls ("plm_options",
                                         "doNotDetectRecursiveCalls",
                                         114,
                                         "do-not-detect-recursive-calls",
                                         "Do not detect recursive calls") ;

C_BoolCommandLineOption gOption_plm_5F_options_emitGlobalConstantHTMLDumpFile ("plm_options",
                                         "emitGlobalConstantHTMLDumpFile",
                                         0,
                                         "emit-global-constant-map",
                                         "Emit global constant map in an HTML file") ;

C_BoolCommandLineOption gOption_plm_5F_options_emitTypeMap ("plm_options",
                                         "emitTypeMap",
                                         116,
                                         "emit-type-map",
                                         "Emit type map in an HTML file") ;

C_BoolCommandLineOption gOption_plm_5F_options_listEmbeddedSampleFiles ("plm_options",
                                         "listEmbeddedSampleFiles",
                                         108,
                                         "list-embedded-samples",
                                         "List embedded sample files") ;

C_BoolCommandLineOption gOption_plm_5F_options_listTargets ("plm_options",
                                         "listTargets",
                                         76,
                                         "list-targets",
                                         "List targets") ;

C_BoolCommandLineOption gOption_plm_5F_options_noPanicGeneration ("plm_options",
                                         "noPanicGeneration",
                                         0,
                                         "no-panic-generation",
                                         "Do not generate panic code") ;

C_BoolCommandLineOption gOption_plm_5F_options_optimization_31_ ("plm_options",
                                         "optimization1",
                                         0,
                                         "O1",
                                         "Optimization level 1") ;

C_BoolCommandLineOption gOption_plm_5F_options_optimization_32_ ("plm_options",
                                         "optimization2",
                                         0,
                                         "O2",
                                         "Optimization level 2") ;

C_BoolCommandLineOption gOption_plm_5F_options_optimizationS ("plm_options",
                                         "optimizationS",
                                         0,
                                         "Os",
                                         "Like previous option with extra optimizations for size") ;

C_BoolCommandLineOption gOption_plm_5F_options_optimizationZ ("plm_options",
                                         "optimizationZ",
                                         0,
                                         "Oz",
                                         "Like previous option but reduces code size further") ;

C_BoolCommandLineOption gOption_plm_5F_options_optimizationZ_33_ ("plm_options",
                                         "optimizationZ3",
                                         0,
                                         "O3",
                                         "Optimization level 3") ;

C_BoolCommandLineOption gOption_plm_5F_options_optimization_5F_displayDeadCodeElimination ("plm_options",
                                         "optimization_displayDeadCodeElimination",
                                         122,
                                         "display-deadcode-elimination",
                                         "Display dead code elimination") ;

C_BoolCommandLineOption gOption_plm_5F_options_writeControlRegisterHTMLDumpFile ("plm_options",
                                         "writeControlRegisterHTMLDumpFile",
                                         0,
                                         "emit-control-register-map",
                                         "Emit control register map in an HTML file") ;

C_BoolCommandLineOption gOption_plm_5F_options_writeDeclarationDependencyGraphFile ("plm_options",
                                         "writeDeclarationDependencyGraphFile",
                                         100,
                                         "emit-declaration-dependency-graph",
                                         "Emit declaration dependency graph file") ;

C_BoolCommandLineOption gOption_plm_5F_options_writeRoutineInvocationGraphFile ("plm_options",
                                         "writeRoutineInvocationGraphFile",
                                         105,
                                         "emit-routine-invocation-graph",
                                         "Emit routine invocation graph file") ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               UInt options                                                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              String options                                                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

C_StringCommandLineOption gOption_plm_5F_options_extractEmbeddedSampleFile ("plm_options",
                                         "extractEmbeddedSampleFile",
                                         120,
                                         "extract-embedded-sample-code",
                                         "Extract an embedded sample file",
                                         "") ;

C_StringCommandLineOption gOption_plm_5F_options_extractEmbeddedTargets ("plm_options",
                                         "extractEmbeddedTargets",
                                         88,
                                         "extract-embedded-targets",
                                         "Extract embedded targets",
                                         "") ;

C_StringCommandLineOption gOption_plm_5F_options_useDirAsTargetDir ("plm_options",
                                         "useDirAsTargetDir",
                                         84,
                                         "use-target-dir",
                                         "Use directory as target definition directory, instead of using embedded targets",
                                         "") ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              String List options                                                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

C_StringListCommandLineOption gOption_plm_5F_options_pathList ("plm_options",
                                         "pathList",
                                         0,
                                         "path",
                                         "Search pathes for source files") ;

//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Bool options                                                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

C_BoolCommandLineOption gOption_plm_5F_option_5F_not_5F_appearing_5F_in_5F_cocoa_performFlashing ("plm_option_not_appearing_in_cocoa",
                                         "performFlashing",
                                         102,
                                         "flash-target",
                                         "After successful compilation, flash target") ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               UInt options                                                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              String options                                                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              String List options                                                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@configurationDeclarationAST addExtension'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_configurationDeclarationAST_addExtension (const cPtr_abstractDeclarationAST * inObject,
                                                                      GALGAS_extensionDeclarationListAST & /* ioArgument_ioExtensionDeclarationListAST */,
                                                                      GALGAS_extendStaticArrayDeclarationAST & /* ioArgument_ioExtendStaticArrayDeclarationAST */,
                                                                      GALGAS_abstractDeclarationAST & outArgument_outNewDeclaration,
                                                                      C_Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_configurationDeclarationAST * object = (const cPtr_configurationDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_configurationDeclarationAST) ;
  const GALGAS_configurationDeclarationAST temp_0 = object ;
  outArgument_outNewDeclaration = temp_0 ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_configurationDeclarationAST_addExtension (void) {
  enterExtensionMethod_addExtension (kTypeDescriptor_GALGAS_configurationDeclarationAST.mSlotID,
                                     extensionMethod_configurationDeclarationAST_addExtension) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_configurationDeclarationAST_addExtension (defineExtensionMethod_configurationDeclarationAST_addExtension, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Once function 'configurationNodeNameForPrecedenceGraph'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string onceFunction_configurationNodeNameForPrecedenceGraph (C_Compiler * /* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("config") ;
//---
  return result_result ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_configurationNodeNameForPrecedenceGraph = false ;
static GALGAS_string gOnceFunctionResult_configurationNodeNameForPrecedenceGraph ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_configurationNodeNameForPrecedenceGraph (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_configurationNodeNameForPrecedenceGraph) {
    gOnceFunctionResult_configurationNodeNameForPrecedenceGraph = onceFunction_configurationNodeNameForPrecedenceGraph (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_configurationNodeNameForPrecedenceGraph = true ;
  }
  return gOnceFunctionResult_configurationNodeNameForPrecedenceGraph ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_configurationNodeNameForPrecedenceGraph (void) {
  gOnceFunctionResult_configurationNodeNameForPrecedenceGraph.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_configurationNodeNameForPrecedenceGraph (NULL,
                                                                                     releaseOnceFunctionResult_configurationNodeNameForPrecedenceGraph) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_configurationNodeNameForPrecedenceGraph [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_configurationNodeNameForPrecedenceGraph (C_Compiler * inCompiler,
                                                                                        const cObjectArray & /* inEffectiveParameterArray */,
                                                                                        const GALGAS_location & /* inErrorLocation */
                                                                                        COMMA_LOCATION_ARGS) {
  return function_configurationNodeNameForPrecedenceGraph (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_configurationNodeNameForPrecedenceGraph ("configurationNodeNameForPrecedenceGraph",
                                                                                         functionWithGenericHeader_configurationNodeNameForPrecedenceGraph,
                                                                                         & kTypeDescriptor_GALGAS_string,
                                                                                         0,
                                                                                         functionArgs_configurationNodeNameForPrecedenceGraph) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Once function 'isrSlotTypeName'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string onceFunction_isrSlotTypeName (C_Compiler * /* inCompiler */
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("isrSlot") ;
//---
  return result_result ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_isrSlotTypeName = false ;
static GALGAS_string gOnceFunctionResult_isrSlotTypeName ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_isrSlotTypeName (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_isrSlotTypeName) {
    gOnceFunctionResult_isrSlotTypeName = onceFunction_isrSlotTypeName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_isrSlotTypeName = true ;
  }
  return gOnceFunctionResult_isrSlotTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_isrSlotTypeName (void) {
  gOnceFunctionResult_isrSlotTypeName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_isrSlotTypeName (NULL,
                                                             releaseOnceFunctionResult_isrSlotTypeName) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_isrSlotTypeName [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_isrSlotTypeName (C_Compiler * inCompiler,
                                                                const cObjectArray & /* inEffectiveParameterArray */,
                                                                const GALGAS_location & /* inErrorLocation */
                                                                COMMA_LOCATION_ARGS) {
  return function_isrSlotTypeName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_isrSlotTypeName ("isrSlotTypeName",
                                                                 functionWithGenericHeader_isrSlotTypeName,
                                                                 & kTypeDescriptor_GALGAS_string,
                                                                 0,
                                                                 functionArgs_isrSlotTypeName) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@configurationDeclarationAST enterInPrecedenceGraph'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_configurationDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                                GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_configurationDeclarationAST * object = (const cPtr_configurationDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_configurationDeclarationAST) ;
  GALGAS_lstring var_rootNode_11524 = GALGAS_lstring::constructor_new (function_configurationNodeNameForPrecedenceGraph (inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 321)), object->mProperty_mPanicCodeTypeName.getter_location (HERE)  COMMA_SOURCE_FILE ("configuration.galgas", 321)) ;
  {
  const GALGAS_configurationDeclarationAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (var_rootNode_11524, temp_0, inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 322)) ;
  }
  GALGAS_lstring var_panicCodeTypeName_11677 = function_llvmTypeNameFromPLMname (object->mProperty_mPanicCodeTypeName, inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 323)) ;
  {
  ioArgument_ioGraph.setter_addEdge (var_rootNode_11524, var_panicCodeTypeName_11677 COMMA_SOURCE_FILE ("configuration.galgas", 324)) ;
  }
  GALGAS_lstring var_panicLineTypeName_11800 = function_llvmTypeNameFromPLMname (object->mProperty_mPanicLineTypeName, inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 325)) ;
  {
  ioArgument_ioGraph.setter_addEdge (var_rootNode_11524, var_panicLineTypeName_11800 COMMA_SOURCE_FILE ("configuration.galgas", 326)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_configurationDeclarationAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_configurationDeclarationAST.mSlotID,
                                               extensionMethod_configurationDeclarationAST_enterInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_configurationDeclarationAST_enterInPrecedenceGraph (defineExtensionMethod_configurationDeclarationAST_enterInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension getter '@configurationDeclarationAST location'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_location extensionGetter_configurationDeclarationAST_location (const cPtr_abstractDeclarationAST * inObject,
                                                                             C_Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_configurationDeclarationAST * object = (const cPtr_configurationDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_configurationDeclarationAST) ;
  result_outLocation = object->mProperty_mPanicCodeTypeName.getter_location (HERE) ;
//---
  return result_outLocation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_configurationDeclarationAST_location (void) {
  enterExtensionGetter_location (kTypeDescriptor_GALGAS_configurationDeclarationAST.mSlotID,
                                 extensionGetter_configurationDeclarationAST_location) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_configurationDeclarationAST_location (defineExtensionGetter_configurationDeclarationAST_location, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding extension getter '@configurationDeclarationAST keyRepresentationForErrorSignaling'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_configurationDeclarationAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * /* inObject */,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  result_outRepresentation = function_configurationNodeNameForPrecedenceGraph (inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 338)) ;
//---
  return result_outRepresentation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_configurationDeclarationAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_configurationDeclarationAST.mSlotID,
                                                           extensionGetter_configurationDeclarationAST_keyRepresentationForErrorSignaling) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_configurationDeclarationAST_keyRepresentationForErrorSignaling (defineExtensionGetter_configurationDeclarationAST_keyRepresentationForErrorSignaling, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@configurationDeclarationAST enterInContext'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_configurationDeclarationAST_enterInContext (const cPtr_abstractDeclarationAST * inObject,
                                                                        const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                        GALGAS_semanticContext & ioArgument_ioContext,
                                                                        GALGAS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                                        GALGAS_subprogramInvocationGraph & /* ioArgument_ioSubprogramInvocationGraph */,
                                                                        GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                                        GALGAS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_configurationDeclarationAST * object = (const cPtr_configurationDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_configurationDeclarationAST) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, ioArgument_ioContext.getter_mTargetParameters (HERE).getter_mPointerSize (HERE).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mTargetParameters.getter_mConfigurationLocation (HERE), GALGAS_string ("duplicate configuration"), fixItArray1  COMMA_SOURCE_FILE ("configuration.galgas", 355)) ;
  }
  ioArgument_ioContext.mProperty_mTargetParameters = object->mProperty_mTargetParameters ;
  ioArgument_ioContext.mProperty_mPanicCodeType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), object->mProperty_mPanicCodeTypeName, inCompiler  COMMA_SOURCE_FILE ("configuration.galgas", 359)) ;
  const enumGalgasBool test_2 = ioArgument_ioContext.getter_mPanicCodeType (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 360)).getter_kind (HERE).getter_isInteger (SOURCE_FILE ("configuration.galgas", 360)).boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_bool var_unsigned_13795 ;
    GALGAS_bigint joker_13770_2 ; // Joker input parameter
    GALGAS_bigint joker_13770_1 ; // Joker input parameter
    GALGAS_uint joker_13797_1 ; // Joker input parameter
    ioArgument_ioContext.getter_mPanicCodeType (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 361)).getter_kind (HERE).method_integer (joker_13770_2, joker_13770_1, var_unsigned_13795, joker_13797_1, inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 361)) ;
    const enumGalgasBool test_3 = var_unsigned_13795.operator_not (SOURCE_FILE ("configuration.galgas", 362)).boolEnum () ;
    if (kBoolTrue == test_3) {
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (object->mProperty_mPanicCodeTypeName.getter_location (SOURCE_FILE ("configuration.galgas", 363)), GALGAS_string ("this type should be an unsigned integer type"), fixItArray4  COMMA_SOURCE_FILE ("configuration.galgas", 363)) ;
    }
  }else if (kBoolFalse == test_2) {
    TC_Array <C_FixItDescription> fixItArray5 ;
    inCompiler->emitSemanticError (object->mProperty_mPanicCodeTypeName.getter_location (SOURCE_FILE ("configuration.galgas", 366)), GALGAS_string ("this type should be an unsigned integer type"), fixItArray5  COMMA_SOURCE_FILE ("configuration.galgas", 366)) ;
  }
  ioArgument_ioContext.mProperty_mPanicLineType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), object->mProperty_mPanicLineTypeName, inCompiler  COMMA_SOURCE_FILE ("configuration.galgas", 369)) ;
  const enumGalgasBool test_6 = ioArgument_ioContext.getter_mPanicLineType (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 370)).getter_kind (HERE).getter_isInteger (SOURCE_FILE ("configuration.galgas", 370)).boolEnum () ;
  if (kBoolTrue == test_6) {
    GALGAS_bool var_unsigned_14264 ;
    GALGAS_bigint joker_14239_2 ; // Joker input parameter
    GALGAS_bigint joker_14239_1 ; // Joker input parameter
    GALGAS_uint joker_14266_1 ; // Joker input parameter
    ioArgument_ioContext.getter_mPanicLineType (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 371)).getter_kind (HERE).method_integer (joker_14239_2, joker_14239_1, var_unsigned_14264, joker_14266_1, inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 371)) ;
    const enumGalgasBool test_7 = var_unsigned_14264.operator_not (SOURCE_FILE ("configuration.galgas", 372)).boolEnum () ;
    if (kBoolTrue == test_7) {
      TC_Array <C_FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (object->mProperty_mPanicLineTypeName.getter_location (SOURCE_FILE ("configuration.galgas", 373)), GALGAS_string ("this type should be an unsigned integer type"), fixItArray8  COMMA_SOURCE_FILE ("configuration.galgas", 373)) ;
    }
  }else if (kBoolFalse == test_6) {
    TC_Array <C_FixItDescription> fixItArray9 ;
    inCompiler->emitSemanticError (object->mProperty_mPanicLineTypeName.getter_location (SOURCE_FILE ("configuration.galgas", 376)), GALGAS_string ("this type should be an unsigned integer type"), fixItArray9  COMMA_SOURCE_FILE ("configuration.galgas", 376)) ;
  }
  GALGAS_stringset var_panicCodeSet_14556 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("configuration.galgas", 379)) ;
  cEnumerator_interruptionConfigurationList enumerator_14618 (object->mProperty_mInterruptionConfigurationList, kENUMERATION_UP) ;
  while (enumerator_14618.hasCurrentObject ()) {
    {
    ioArgument_ioContext.mProperty_mAvailableInterruptMap.setter_insertKey (enumerator_14618.current_mInterruptName (HERE), enumerator_14618.current_mInterruptionPanicCode (HERE), inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 381)) ;
    }
    switch (enumerator_14618.current_mInterruptionPanicCode (HERE).enumValue ()) {
    case GALGAS_interruptionPanicCode::kNotBuilt:
      break ;
    case GALGAS_interruptionPanicCode::kEnum_noCode:
      {
      }
      break ;
    case GALGAS_interruptionPanicCode::kEnum_code:
      {
        const cEnumAssociatedValues_interruptionPanicCode_code * extractPtr_14911 = (const cEnumAssociatedValues_interruptionPanicCode_code *) (enumerator_14618.current_mInterruptionPanicCode (HERE).unsafePointer ()) ;
        const GALGAS_lbigint extractedValue_value = extractPtr_14911->mAssociatedValue0 ;
        GALGAS_string var_s_14764 = extractedValue_value.getter_bigint (HERE).getter_string (SOURCE_FILE ("configuration.galgas", 385)) ;
        const enumGalgasBool test_10 = var_panicCodeSet_14556.getter_hasKey (var_s_14764 COMMA_SOURCE_FILE ("configuration.galgas", 386)).boolEnum () ;
        if (kBoolTrue == test_10) {
          TC_Array <C_FixItDescription> fixItArray11 ;
          inCompiler->emitSemanticError (extractedValue_value.getter_location (SOURCE_FILE ("configuration.galgas", 387)), GALGAS_string ("duplicate interrupt code"), fixItArray11  COMMA_SOURCE_FILE ("configuration.galgas", 387)) ;
        }
        var_panicCodeSet_14556.addAssign_operation (var_s_14764  COMMA_SOURCE_FILE ("configuration.galgas", 389)) ;
      }
      break ;
    }
    enumerator_14618.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_configurationDeclarationAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_configurationDeclarationAST.mSlotID,
                                       extensionMethod_configurationDeclarationAST_enterInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_configurationDeclarationAST_enterInContext (defineExtensionMethod_configurationDeclarationAST_enterInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Overriding extension getter '@newTypeDeclaration location'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_location extensionGetter_newTypeDeclaration_location (const cPtr_abstractDeclarationAST * inObject,
                                                                    C_Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_newTypeDeclaration * object = (const cPtr_newTypeDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_newTypeDeclaration) ;
  result_outLocation = object->mProperty_mAliasTypeName.getter_location (HERE) ;
//---
  return result_outLocation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_newTypeDeclaration_location (void) {
  enterExtensionGetter_location (kTypeDescriptor_GALGAS_newTypeDeclaration.mSlotID,
                                 extensionGetter_newTypeDeclaration_location) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_newTypeDeclaration_location (defineExtensionGetter_newTypeDeclaration_location, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding extension method '@newTypeDeclaration addExtension'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_newTypeDeclaration_addExtension (const cPtr_abstractDeclarationAST * inObject,
                                                             GALGAS_extensionDeclarationListAST & /* ioArgument_ioExtensionDeclarationListAST */,
                                                             GALGAS_extendStaticArrayDeclarationAST & /* ioArgument_ioExtendStaticArrayDeclarationAST */,
                                                             GALGAS_abstractDeclarationAST & outArgument_outNewDeclaration,
                                                             C_Compiler * /* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_newTypeDeclaration * object = (const cPtr_newTypeDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_newTypeDeclaration) ;
  const GALGAS_newTypeDeclaration temp_0 = object ;
  outArgument_outNewDeclaration = temp_0 ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_newTypeDeclaration_addExtension (void) {
  enterExtensionMethod_addExtension (kTypeDescriptor_GALGAS_newTypeDeclaration.mSlotID,
                                     extensionMethod_newTypeDeclaration_addExtension) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_newTypeDeclaration_addExtension (defineExtensionMethod_newTypeDeclaration_addExtension, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@newTypeDeclaration enterInPrecedenceGraph'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_newTypeDeclaration_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                       GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_newTypeDeclaration * object = (const cPtr_newTypeDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_newTypeDeclaration) ;
  GALGAS_lstring var_newTypeName_2951 = function_llvmTypeNameFromPLMname (object->mProperty_mAliasTypeName, inCompiler COMMA_SOURCE_FILE ("declaration-type.galgas", 61)) ;
  GALGAS_lstring var_originalTypeName_3018 = function_llvmTypeNameFromPLMname (object->mProperty_mOriginalTypeName, inCompiler COMMA_SOURCE_FILE ("declaration-type.galgas", 62)) ;
  {
  const GALGAS_newTypeDeclaration temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (var_newTypeName_2951, temp_0, inCompiler COMMA_SOURCE_FILE ("declaration-type.galgas", 63)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_newTypeName_2951, var_originalTypeName_3018 COMMA_SOURCE_FILE ("declaration-type.galgas", 64)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_newTypeDeclaration_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_newTypeDeclaration.mSlotID,
                                               extensionMethod_newTypeDeclaration_enterInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_newTypeDeclaration_enterInPrecedenceGraph (defineExtensionMethod_newTypeDeclaration_enterInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension getter '@newTypeDeclaration keyRepresentationForErrorSignaling'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_newTypeDeclaration_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_newTypeDeclaration * object = (const cPtr_newTypeDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_newTypeDeclaration) ;
  result_outRepresentation = GALGAS_string ("typealias $").add_operation (object->mProperty_mAliasTypeName.getter_string (SOURCE_FILE ("declaration-type.galgas", 70)), inCompiler COMMA_SOURCE_FILE ("declaration-type.galgas", 70)) ;
//---
  return result_outRepresentation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_newTypeDeclaration_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_newTypeDeclaration.mSlotID,
                                                           extensionGetter_newTypeDeclaration_keyRepresentationForErrorSignaling) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_newTypeDeclaration_keyRepresentationForErrorSignaling (defineExtensionGetter_newTypeDeclaration_keyRepresentationForErrorSignaling, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding extension method '@newTypeDeclaration enterInContext'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_newTypeDeclaration_enterInContext (const cPtr_abstractDeclarationAST * inObject,
                                                               const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                               GALGAS_semanticContext & ioArgument_ioContext,
                                                               GALGAS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                               GALGAS_subprogramInvocationGraph & /* ioArgument_ioSubprogramInvocationGraph */,
                                                               GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                               GALGAS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_newTypeDeclaration * object = (const cPtr_newTypeDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_newTypeDeclaration) ;
  GALGAS_PLMType var_type_4358 ;
  GALGAS_uint joker_4360_1 ; // Joker input parameter
  ioArgument_ioContext.getter_mTypeMap (HERE).method_searchKey (object->mProperty_mOriginalTypeName, var_type_4358, joker_4360_1, inCompiler COMMA_SOURCE_FILE ("declaration-type.galgas", 86)) ;
  var_type_4358.mProperty_plmAliasedTypeName = object->mProperty_mAliasTypeName.getter_string (HERE) ;
  var_type_4358.mProperty_attributes = var_type_4358.getter_attributes (HERE).substract_operation (GALGAS_PLMTypeAttributes::constructor_generateAssignmentRoutine (SOURCE_FILE ("declaration-type.galgas", 89)), inCompiler COMMA_SOURCE_FILE ("declaration-type.galgas", 89)) ;
  {
  ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (object->mProperty_mAliasTypeName, var_type_4358, ioArgument_ioContext.getter_mTypeMap (HERE).getter_count (SOURCE_FILE ("declaration-type.galgas", 91)), inCompiler COMMA_SOURCE_FILE ("declaration-type.galgas", 91)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_newTypeDeclaration_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_newTypeDeclaration.mSlotID,
                                       extensionMethod_newTypeDeclaration_enterInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_newTypeDeclaration_enterInContext (defineExtensionMethod_newTypeDeclaration_enterInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@typeArrayDeclarationAST addExtension'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_typeArrayDeclarationAST_addExtension (const cPtr_abstractDeclarationAST * inObject,
                                                                  GALGAS_extensionDeclarationListAST & /* ioArgument_ioExtensionDeclarationListAST */,
                                                                  GALGAS_extendStaticArrayDeclarationAST & /* ioArgument_ioExtendStaticArrayDeclarationAST */,
                                                                  GALGAS_abstractDeclarationAST & outArgument_outNewDeclaration,
                                                                  C_Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_typeArrayDeclarationAST * object = (const cPtr_typeArrayDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_typeArrayDeclarationAST) ;
  const GALGAS_typeArrayDeclarationAST temp_0 = object ;
  outArgument_outNewDeclaration = temp_0 ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_typeArrayDeclarationAST_addExtension (void) {
  enterExtensionMethod_addExtension (kTypeDescriptor_GALGAS_typeArrayDeclarationAST.mSlotID,
                                     extensionMethod_typeArrayDeclarationAST_addExtension) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_typeArrayDeclarationAST_addExtension (defineExtensionMethod_typeArrayDeclarationAST_addExtension, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@typeArrayDeclarationAST enterInPrecedenceGraph'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_typeArrayDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                            GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_typeArrayDeclarationAST * object = (const cPtr_typeArrayDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_typeArrayDeclarationAST) ;
  GALGAS_lstring var_newTypeName_2806 = function_llvmTypeNameFromPLMname (object->mProperty_mAnonymousArrayTypeName, inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 57)) ;
  GALGAS_lstring var_elementTypeName_2881 = function_llvmTypeNameFromPLMname (object->mProperty_mElementTypeName, inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 58)) ;
  {
  const GALGAS_typeArrayDeclarationAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (var_newTypeName_2806, temp_0, inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 59)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_newTypeName_2806, var_elementTypeName_2881 COMMA_SOURCE_FILE ("type-array.galgas", 60)) ;
  }
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mProperty_mSizeExpression.ptr (), var_newTypeName_2806, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 61)) ;
  GALGAS_lstring var_rootNode_3115 = GALGAS_lstring::constructor_new (function_configurationNodeNameForPrecedenceGraph (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 62)), object->mProperty_mAnonymousArrayTypeName.getter_location (HERE)  COMMA_SOURCE_FILE ("type-array.galgas", 62)) ;
  {
  ioArgument_ioGraph.setter_addEdge (var_newTypeName_2806, var_rootNode_3115 COMMA_SOURCE_FILE ("type-array.galgas", 63)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_typeArrayDeclarationAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_typeArrayDeclarationAST.mSlotID,
                                               extensionMethod_typeArrayDeclarationAST_enterInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_typeArrayDeclarationAST_enterInPrecedenceGraph (defineExtensionMethod_typeArrayDeclarationAST_enterInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension getter '@typeArrayDeclarationAST keyRepresentationForErrorSignaling'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_typeArrayDeclarationAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_typeArrayDeclarationAST * object = (const cPtr_typeArrayDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_typeArrayDeclarationAST) ;
  result_outRepresentation = GALGAS_string ("anonymous $").add_operation (object->mProperty_mAnonymousArrayTypeName.getter_string (SOURCE_FILE ("type-array.galgas", 69)), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 69)) ;
//---
  return result_outRepresentation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_typeArrayDeclarationAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_typeArrayDeclarationAST.mSlotID,
                                                           extensionGetter_typeArrayDeclarationAST_keyRepresentationForErrorSignaling) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_typeArrayDeclarationAST_keyRepresentationForErrorSignaling (defineExtensionGetter_typeArrayDeclarationAST_keyRepresentationForErrorSignaling, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding extension getter '@typeArrayDeclarationAST location'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_location extensionGetter_typeArrayDeclarationAST_location (const cPtr_abstractDeclarationAST * inObject,
                                                                         C_Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_typeArrayDeclarationAST * object = (const cPtr_typeArrayDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_typeArrayDeclarationAST) ;
  result_outLocation = object->mProperty_mAnonymousArrayTypeName.getter_location (HERE) ;
//---
  return result_outLocation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_typeArrayDeclarationAST_location (void) {
  enterExtensionGetter_location (kTypeDescriptor_GALGAS_typeArrayDeclarationAST.mSlotID,
                                 extensionGetter_typeArrayDeclarationAST_location) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_typeArrayDeclarationAST_location (defineExtensionGetter_typeArrayDeclarationAST_location, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@typeArrayDeclarationAST enterInContext'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_typeArrayDeclarationAST_enterInContext (const cPtr_abstractDeclarationAST * inObject,
                                                                    const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                    GALGAS_semanticContext & ioArgument_ioContext,
                                                                    GALGAS_declarationDecorationList & ioArgument_ioDecoratedDeclarationList,
                                                                    GALGAS_subprogramInvocationGraph & /* ioArgument_ioSubprogramInvocationGraph */,
                                                                    GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                                    GALGAS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_typeArrayDeclarationAST * object = (const cPtr_typeArrayDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_typeArrayDeclarationAST) ;
  GALGAS_PLMType var_elementType_4714 ;
  GALGAS_uint joker_4716_1 ; // Joker input parameter
  ioArgument_ioContext.getter_mTypeMap (HERE).method_searchKey (object->mProperty_mElementTypeName, var_elementType_4714, joker_4716_1, inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 91)) ;
  const enumGalgasBool test_0 = extensionGetter_copyable (var_elementType_4714, inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 92)).operator_not (SOURCE_FILE ("type-array.galgas", 92)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mElementTypeName.getter_location (SOURCE_FILE ("type-array.galgas", 93)), GALGAS_string ("an array element should be copyable"), fixItArray1  COMMA_SOURCE_FILE ("type-array.galgas", 93)) ;
  }
  const enumGalgasBool test_2 = extensionGetter_instanciable (var_elementType_4714, inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 95)).operator_not (SOURCE_FILE ("type-array.galgas", 95)).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mProperty_mElementTypeName.getter_location (SOURCE_FILE ("type-array.galgas", 96)), GALGAS_string ("an array element should be instanciable"), fixItArray3  COMMA_SOURCE_FILE ("type-array.galgas", 96)) ;
  }
  GALGAS_instructionListIR var_initInstructionGenerationList_5022 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("type-array.galgas", 99)) ;
  GALGAS_allocaList var_allocaList_5052 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("type-array.galgas", 100)) ;
  GALGAS_semanticTemporariesStruct var_temporaries_5098 = GALGAS_semanticTemporariesStruct::constructor_default (SOURCE_FILE ("type-array.galgas", 101)) ;
  GALGAS_staticEntityMap joker_5445 = GALGAS_staticEntityMap::constructor_default (SOURCE_FILE ("type-array.galgas", 110)) ;
  GALGAS_objectIR var_sizeExpressionIR_5627 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mSizeExpression.ptr (), function_voidType (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 103)), GALGAS_routineAttributes::constructor_none (SOURCE_FILE ("type-array.galgas", 104)), GALGAS_lstring::constructor_new (object->mProperty_mAnonymousArrayTypeName.getter_string (HERE).add_operation (GALGAS_string (" init"), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 105)), object->mProperty_mAnonymousArrayTypeName.getter_location (HERE)  COMMA_SOURCE_FILE ("type-array.galgas", 105)), function_voidType (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 106)), ioArgument_ioContext, GALGAS_mode::constructor_bootMode (SOURCE_FILE ("type-array.galgas", 108)), var_temporaries_5098, joker_5445, ioArgument_ioContext.mProperty_mValuedObjectMap, var_allocaList_5052, var_initInstructionGenerationList_5022, var_sizeExpressionIR_5627, inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 102)) ;
  const enumGalgasBool test_4 = var_sizeExpressionIR_5627.getter_isLiteralInteger (SOURCE_FILE ("type-array.galgas", 116)).operator_not (SOURCE_FILE ("type-array.galgas", 116)).boolEnum () ;
  if (kBoolTrue == test_4) {
    TC_Array <C_FixItDescription> fixItArray5 ;
    inCompiler->emitSemanticError (object->mProperty_mSizeExpressionLocation, GALGAS_string ("array size expression is not static"), fixItArray5  COMMA_SOURCE_FILE ("type-array.galgas", 117)) ;
  }else if (kBoolFalse == test_4) {
    GALGAS_bigint var_arraySize_5824 ;
    GALGAS_PLMType joker_5801_1 ; // Joker input parameter
    var_sizeExpressionIR_5627.method_literalInteger (joker_5801_1, var_arraySize_5824, inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 119)) ;
    GALGAS_lstring var_originalTypeName_5917 = GALGAS_lstring::constructor_new (GALGAS_string ("array.").add_operation (var_elementType_4714.getter_plmOriginalTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 121)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 121)).add_operation (var_arraySize_5824.getter_string (SOURCE_FILE ("type-array.galgas", 121)), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 121)), object->mProperty_mAnonymousArrayTypeName.getter_location (SOURCE_FILE ("type-array.galgas", 121))  COMMA_SOURCE_FILE ("type-array.galgas", 121)) ;
    const enumGalgasBool test_6 = ioArgument_ioContext.getter_mTypeMap (HERE).getter_hasKey (var_originalTypeName_5917.getter_string (SOURCE_FILE ("type-array.galgas", 122)) COMMA_SOURCE_FILE ("type-array.galgas", 122)).boolEnum () ;
    if (kBoolTrue == test_6) {
      GALGAS_PLMType var_type_6153 ;
      GALGAS_uint joker_6155_1 ; // Joker input parameter
      ioArgument_ioContext.getter_mTypeMap (HERE).method_searchKey (var_originalTypeName_5917, var_type_6153, joker_6155_1, inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 123)) ;
      var_type_6153.mProperty_plmAliasedTypeName = object->mProperty_mAnonymousArrayTypeName.getter_string (SOURCE_FILE ("type-array.galgas", 124)) ;
      var_type_6153.mProperty_attributes = var_type_6153.getter_attributes (HERE).substract_operation (GALGAS_PLMTypeAttributes::constructor_generateAssignmentRoutine (SOURCE_FILE ("type-array.galgas", 125)), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 125)) ;
      {
      ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (object->mProperty_mAnonymousArrayTypeName, var_type_6153, ioArgument_ioContext.getter_mTypeMap (HERE).getter_count (SOURCE_FILE ("type-array.galgas", 129)), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 126)) ;
      }
    }else if (kBoolFalse == test_6) {
      GALGAS_classConstantMap var_classConstantMap_6572 = GALGAS_classConstantMap::constructor_emptyMap (SOURCE_FILE ("type-array.galgas", 133)) ;
      {
      var_classConstantMap_6572.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("count"), var_originalTypeName_5917.getter_location (SOURCE_FILE ("type-array.galgas", 134))  COMMA_SOURCE_FILE ("type-array.galgas", 134)), var_arraySize_5824, function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 134)).getter_nowhere (SOURCE_FILE ("type-array.galgas", 134)), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 134)) ;
      }
      GALGAS_propertyMap var_arrayTypePropertyMap_6798 = GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-array.galgas", 136)) ;
      {
      var_arrayTypePropertyMap_6798.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("count"), var_originalTypeName_5917.getter_location (HERE)  COMMA_SOURCE_FILE ("type-array.galgas", 138)), GALGAS_bool (true), GALGAS_propertyAccessKind::constructor_constantProperty (GALGAS_objectIR::constructor_literalInteger (function_staticIntegerType (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 140)), var_arraySize_5824  COMMA_SOURCE_FILE ("type-array.galgas", 140))  COMMA_SOURCE_FILE ("type-array.galgas", 140)), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 137)) ;
      }
      GALGAS_constructorMap var_constructorMap_7146 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-array.galgas", 143)) ;
      {
      var_constructorMap_7146.setter_insertKey (GALGAS_string ("(!repeated)").getter_nowhere (SOURCE_FILE ("type-array.galgas", 145)), GALGAS_constructorSignature::constructor_emptyList (SOURCE_FILE ("type-array.galgas", 145)), GALGAS_constructorValue::constructor_arrayValue (var_elementType_4714, var_arraySize_5824.getter_uint (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 145))  COMMA_SOURCE_FILE ("type-array.galgas", 145)), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 145)) ;
      }
      GALGAS_string var_constructorName_7358 = GALGAS_string ("(") ;
      cEnumerator_range enumerator_7402 (GALGAS_range (GALGAS_uint ((uint32_t) 0U), var_arraySize_5824.getter_uint (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 148)).substract_operation (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 148))), kENUMERATION_UP) ;
      while (enumerator_7402.hasCurrentObject ()) {
        var_constructorName_7358.plusAssign_operation(GALGAS_string ("!"), inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 149)) ;
        enumerator_7402.gotoNextObject () ;
      }
      var_constructorName_7358.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 151)) ;
      {
      var_constructorMap_7146.setter_insertKey (var_constructorName_7358.getter_nowhere (SOURCE_FILE ("type-array.galgas", 152)), GALGAS_constructorSignature::constructor_emptyList (SOURCE_FILE ("type-array.galgas", 152)), GALGAS_constructorValue::constructor_arrayValue (var_elementType_4714, var_arraySize_5824.getter_uint (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 152))  COMMA_SOURCE_FILE ("type-array.galgas", 152)), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 152)) ;
      }
      GALGAS_PLMTypeAttributes var_typeAttributes_7703 = GALGAS_PLMTypeAttributes::constructor_instanciable (SOURCE_FILE ("type-array.galgas", 154)).operator_or (GALGAS_PLMTypeAttributes::constructor_generateAssignmentRoutine (SOURCE_FILE ("type-array.galgas", 154)) COMMA_SOURCE_FILE ("type-array.galgas", 154)).operator_or (GALGAS_PLMTypeAttributes::constructor_copyable (SOURCE_FILE ("type-array.galgas", 154)) COMMA_SOURCE_FILE ("type-array.galgas", 154)) ;
      GALGAS_PLMType var_arrayType_7848 = GALGAS_PLMType::constructor_new (var_arrayTypePropertyMap_6798, var_classConstantMap_6572, var_constructorMap_7146, GALGAS_guardMapForContext::constructor_emptyMap (SOURCE_FILE ("type-array.galgas", 160)), var_typeAttributes_7703, var_originalTypeName_5917.getter_string (SOURCE_FILE ("type-array.galgas", 162)), GALGAS_typeKind::constructor_arrayType (var_elementType_4714, var_arraySize_5824  COMMA_SOURCE_FILE ("type-array.galgas", 163)), var_originalTypeName_5917.getter_string (SOURCE_FILE ("type-array.galgas", 164))  COMMA_SOURCE_FILE ("type-array.galgas", 156)) ;
      {
      ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (var_originalTypeName_5917, var_arrayType_7848, ioArgument_ioContext.getter_mTypeMap (HERE).getter_count (SOURCE_FILE ("type-array.galgas", 169)), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 166)) ;
      }
      GALGAS_PLMType var_aliasedArrayType_8383 = GALGAS_PLMType::constructor_new (var_arrayTypePropertyMap_6798, var_classConstantMap_6572, var_constructorMap_7146, GALGAS_guardMapForContext::constructor_emptyMap (SOURCE_FILE ("type-array.galgas", 175)), var_typeAttributes_7703.substract_operation (GALGAS_PLMTypeAttributes::constructor_generateAssignmentRoutine (SOURCE_FILE ("type-array.galgas", 176)), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 176)), var_originalTypeName_5917.getter_string (SOURCE_FILE ("type-array.galgas", 177)), GALGAS_typeKind::constructor_arrayType (var_elementType_4714, var_arraySize_5824  COMMA_SOURCE_FILE ("type-array.galgas", 178)), object->mProperty_mAnonymousArrayTypeName.getter_string (SOURCE_FILE ("type-array.galgas", 179))  COMMA_SOURCE_FILE ("type-array.galgas", 171)) ;
      {
      ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (object->mProperty_mAnonymousArrayTypeName, var_aliasedArrayType_8383, ioArgument_ioContext.getter_mTypeMap (HERE).getter_count (SOURCE_FILE ("type-array.galgas", 184)), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 181)) ;
      }
      ioArgument_ioDecoratedDeclarationList.addAssign_operation (GALGAS_decoratedTypeArrayDeclaration::constructor_new (var_originalTypeName_5917, var_arraySize_5824.getter_uint (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 187))  COMMA_SOURCE_FILE ("type-array.galgas", 187))  COMMA_SOURCE_FILE ("type-array.galgas", 187)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_typeArrayDeclarationAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_typeArrayDeclarationAST.mSlotID,
                                       extensionMethod_typeArrayDeclarationAST_enterInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_typeArrayDeclarationAST_enterInContext (defineExtensionMethod_typeArrayDeclarationAST_enterInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@decoratedTypeArrayDeclaration semanticAnalysis'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_decoratedTypeArrayDeclaration_semanticAnalysis (const cPtr_abstractDecoratedDeclaration * inObject,
                                                                            const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                            GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                            GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_decoratedTypeArrayDeclaration * object = (const cPtr_decoratedTypeArrayDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_decoratedTypeArrayDeclaration) ;
  ioArgument_ioIntermediateCodeStruct.mProperty_mGenerationListIR.addAssign_operation (GALGAS_arrayIR::constructor_new (object->mProperty_mOriginalArrayTypeName.getter_string (SOURCE_FILE ("type-array.galgas", 209)), object->mProperty_mArraySize.getter_bigint (SOURCE_FILE ("type-array.galgas", 209))  COMMA_SOURCE_FILE ("type-array.galgas", 209))  COMMA_SOURCE_FILE ("type-array.galgas", 209)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_decoratedTypeArrayDeclaration_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_decoratedTypeArrayDeclaration.mSlotID,
                                         extensionMethod_decoratedTypeArrayDeclaration_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_decoratedTypeArrayDeclaration_semanticAnalysis (defineExtensionMethod_decoratedTypeArrayDeclaration_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Overriding extension method '@arrayIR generateLLVMcode'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_arrayIR_generateLLVMcode (const cPtr_abstractGenerationIR * inObject,
                                                      GALGAS_string & ioArgument_ioLLVMcode,
                                                      GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_arrayIR * object = (const cPtr_arrayIR *) inObject ;
  macroValidSharedObject (object, cPtr_arrayIR) ;
  GALGAS_lstring var_routineMangledName_10835 = function_routineMangledNameFromAST (function_llvmTypeStringFromPLMname (object->mProperty_mOriginalArrayTypeName, inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 225)), GALGAS_string ("count").getter_nowhere (SOURCE_FILE ("type-array.galgas", 226)), GALGAS_routineFormalArgumentListAST::constructor_emptyList (SOURCE_FILE ("type-array.galgas", 227)), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 224)) ;
  GALGAS_string var_routineLLVMName_10979 = function_llvmNameForFunction (var_routineMangledName_10835.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 229)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (var_routineMangledName_10835.getter_string (SOURCE_FILE ("type-array.galgas", 230)), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 230)), inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 230)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal i32  @").add_operation (var_routineLLVMName_10979, inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 231)).add_operation (GALGAS_string (" (%"), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 231)).add_operation (function_llvmTypeStringFromPLMname (object->mProperty_mOriginalArrayTypeName, inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 231)), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 231)).add_operation (GALGAS_string ("* %inUnusedValue) nounwind {\n"), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 231)), inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 231)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret i32 ").add_operation (object->mProperty_mArraySize.getter_string (SOURCE_FILE ("type-array.galgas", 232)), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 232)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 232)), inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 232)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 233)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_arrayIR_generateLLVMcode (void) {
  enterExtensionMethod_generateLLVMcode (kTypeDescriptor_GALGAS_arrayIR.mSlotID,
                                         extensionMethod_arrayIR_generateLLVMcode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_arrayIR_generateLLVMcode (defineExtensionMethod_arrayIR_generateLLVMcode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@typeDynamicArrayDeclarationAST addExtension'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_typeDynamicArrayDeclarationAST_addExtension (const cPtr_abstractDeclarationAST * inObject,
                                                                         GALGAS_extensionDeclarationListAST & /* ioArgument_ioExtensionDeclarationListAST */,
                                                                         GALGAS_extendStaticArrayDeclarationAST & /* ioArgument_ioExtendStaticArrayDeclarationAST */,
                                                                         GALGAS_abstractDeclarationAST & outArgument_outNewDeclaration,
                                                                         C_Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_typeDynamicArrayDeclarationAST * object = (const cPtr_typeDynamicArrayDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_typeDynamicArrayDeclarationAST) ;
  const GALGAS_typeDynamicArrayDeclarationAST temp_0 = object ;
  outArgument_outNewDeclaration = temp_0 ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_typeDynamicArrayDeclarationAST_addExtension (void) {
  enterExtensionMethod_addExtension (kTypeDescriptor_GALGAS_typeDynamicArrayDeclarationAST.mSlotID,
                                     extensionMethod_typeDynamicArrayDeclarationAST_addExtension) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_typeDynamicArrayDeclarationAST_addExtension (defineExtensionMethod_typeDynamicArrayDeclarationAST_addExtension, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@typeDynamicArrayDeclarationAST enterInPrecedenceGraph'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_typeDynamicArrayDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                                   GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_typeDynamicArrayDeclarationAST * object = (const cPtr_typeDynamicArrayDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_typeDynamicArrayDeclarationAST) ;
  GALGAS_lstring var_newTypeName_2609 = function_llvmTypeNameFromPLMname (object->mProperty_mAnonymousDynamicArrayTypeName, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 48)) ;
  GALGAS_lstring var_elementTypeName_2691 = function_llvmTypeNameFromPLMname (object->mProperty_mElementTypeName, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 49)) ;
  {
  const GALGAS_typeDynamicArrayDeclarationAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (var_newTypeName_2609, temp_0, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 50)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_newTypeName_2609, var_elementTypeName_2691 COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 51)) ;
  }
  GALGAS_lstring var_rootNode_2845 = GALGAS_lstring::constructor_new (function_configurationNodeNameForPrecedenceGraph (inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 52)), object->mProperty_mAnonymousDynamicArrayTypeName.getter_location (HERE)  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 52)) ;
  {
  ioArgument_ioGraph.setter_addEdge (var_newTypeName_2609, var_rootNode_2845 COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 53)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_typeDynamicArrayDeclarationAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_typeDynamicArrayDeclarationAST.mSlotID,
                                               extensionMethod_typeDynamicArrayDeclarationAST_enterInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_typeDynamicArrayDeclarationAST_enterInPrecedenceGraph (defineExtensionMethod_typeDynamicArrayDeclarationAST_enterInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension getter '@typeDynamicArrayDeclarationAST keyRepresentationForErrorSignaling'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_typeDynamicArrayDeclarationAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_typeDynamicArrayDeclarationAST * object = (const cPtr_typeDynamicArrayDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_typeDynamicArrayDeclarationAST) ;
  result_outRepresentation = GALGAS_string ("anonymous $").add_operation (object->mProperty_mAnonymousDynamicArrayTypeName.getter_string (SOURCE_FILE ("type-dynamic-array.galgas", 59)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 59)) ;
//---
  return result_outRepresentation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_typeDynamicArrayDeclarationAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_typeDynamicArrayDeclarationAST.mSlotID,
                                                           extensionGetter_typeDynamicArrayDeclarationAST_keyRepresentationForErrorSignaling) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_typeDynamicArrayDeclarationAST_keyRepresentationForErrorSignaling (defineExtensionGetter_typeDynamicArrayDeclarationAST_keyRepresentationForErrorSignaling, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension getter '@typeDynamicArrayDeclarationAST location'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_location extensionGetter_typeDynamicArrayDeclarationAST_location (const cPtr_abstractDeclarationAST * inObject,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_typeDynamicArrayDeclarationAST * object = (const cPtr_typeDynamicArrayDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_typeDynamicArrayDeclarationAST) ;
  result_outLocation = object->mProperty_mAnonymousDynamicArrayTypeName.getter_location (HERE) ;
//---
  return result_outLocation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_typeDynamicArrayDeclarationAST_location (void) {
  enterExtensionGetter_location (kTypeDescriptor_GALGAS_typeDynamicArrayDeclarationAST.mSlotID,
                                 extensionGetter_typeDynamicArrayDeclarationAST_location) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_typeDynamicArrayDeclarationAST_location (defineExtensionGetter_typeDynamicArrayDeclarationAST_location, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@typeDynamicArrayDeclarationAST enterInContext'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_typeDynamicArrayDeclarationAST_enterInContext (const cPtr_abstractDeclarationAST * inObject,
                                                                           const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                           GALGAS_semanticContext & ioArgument_ioContext,
                                                                           GALGAS_declarationDecorationList & ioArgument_ioDecoratedDeclarationList,
                                                                           GALGAS_subprogramInvocationGraph & ioArgument_ioSubprogramInvocationGraph,
                                                                           GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                                           GALGAS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_typeDynamicArrayDeclarationAST * object = (const cPtr_typeDynamicArrayDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_typeDynamicArrayDeclarationAST) ;
  const enumGalgasBool test_0 = ioArgument_ioContext.getter_mTargetParameters (HERE).getter_mHandleDynamicArray (HERE).operator_not (SOURCE_FILE ("type-dynamic-array.galgas", 80)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mElementTypeName.getter_location (SOURCE_FILE ("type-dynamic-array.galgas", 81)), GALGAS_string ("this target does not handle dynamic array"), fixItArray1  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 81)) ;
  }
  GALGAS_PLMType var_elementType_4661 ;
  GALGAS_uint joker_4663_1 ; // Joker input parameter
  ioArgument_ioContext.getter_mTypeMap (HERE).method_searchKey (object->mProperty_mElementTypeName, var_elementType_4661, joker_4663_1, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 84)) ;
  const enumGalgasBool test_2 = extensionGetter_copyable (var_elementType_4661, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 85)).operator_not (SOURCE_FILE ("type-dynamic-array.galgas", 85)).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mProperty_mElementTypeName.getter_location (SOURCE_FILE ("type-dynamic-array.galgas", 86)), GALGAS_string ("an array element should be copyable"), fixItArray3  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 86)) ;
  }
  const enumGalgasBool test_4 = extensionGetter_instanciable (var_elementType_4661, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 88)).operator_not (SOURCE_FILE ("type-dynamic-array.galgas", 88)).boolEnum () ;
  if (kBoolTrue == test_4) {
    TC_Array <C_FixItDescription> fixItArray5 ;
    inCompiler->emitSemanticError (object->mProperty_mElementTypeName.getter_location (SOURCE_FILE ("type-dynamic-array.galgas", 89)), GALGAS_string ("an array element should be instanciable"), fixItArray5  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 89)) ;
  }
  GALGAS_lstring var_originalTypeName_4982 = GALGAS_lstring::constructor_new (GALGAS_string ("dynarray.").add_operation (var_elementType_4661.getter_plmOriginalTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 92)), object->mProperty_mAnonymousDynamicArrayTypeName.getter_location (SOURCE_FILE ("type-dynamic-array.galgas", 92))  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 92)) ;
  const enumGalgasBool test_6 = ioArgument_ioContext.getter_mTypeMap (HERE).getter_hasKey (var_originalTypeName_4982.getter_string (SOURCE_FILE ("type-dynamic-array.galgas", 94)) COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 94)).boolEnum () ;
  if (kBoolTrue == test_6) {
    GALGAS_PLMType var_type_5271 ;
    GALGAS_uint joker_5273_1 ; // Joker input parameter
    ioArgument_ioContext.getter_mTypeMap (HERE).method_searchKey (var_originalTypeName_4982, var_type_5271, joker_5273_1, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 95)) ;
    var_type_5271.mProperty_plmAliasedTypeName = object->mProperty_mAnonymousDynamicArrayTypeName.getter_string (SOURCE_FILE ("type-dynamic-array.galgas", 96)) ;
    var_type_5271.mProperty_attributes = var_type_5271.getter_attributes (HERE).substract_operation (GALGAS_PLMTypeAttributes::constructor_generateAssignmentRoutine (SOURCE_FILE ("type-dynamic-array.galgas", 97)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 97)) ;
    {
    ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (object->mProperty_mAnonymousDynamicArrayTypeName, var_type_5271, ioArgument_ioContext.getter_mTypeMap (HERE).getter_count (SOURCE_FILE ("type-dynamic-array.galgas", 101)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 98)) ;
    }
  }else if (kBoolFalse == test_6) {
    GALGAS_unifiedTypeMap_2D_proxy var_arrayTypeProxy_5650 ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioContext.mProperty_mTypeMap, var_originalTypeName_4982, var_arrayTypeProxy_5650 COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 104)) ;
    }
    GALGAS_unifiedTypeMap_2D_proxy var_uint_33__32_TypeProxy_5750 ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioContext.mProperty_mTypeMap, GALGAS_string ("uint32").getter_nowhere (SOURCE_FILE ("type-dynamic-array.galgas", 105)), var_uint_33__32_TypeProxy_5750 COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 105)) ;
    }
    GALGAS_unifiedTypeMap_2D_proxy var_elementTypeProxy_5849 ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioContext.mProperty_mTypeMap, object->mProperty_mElementTypeName, var_elementTypeProxy_5849 COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 106)) ;
    }
    GALGAS_propertyMap var_propertyMap_5940 = GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-dynamic-array.galgas", 108)) ;
    {
    extensionSetter_addFunctionWithoutArgument (var_propertyMap_5940, ioArgument_ioSubprogramInvocationGraph, var_arrayTypeProxy_5650, GALGAS_string ("removeAll"), GALGAS_bool (false), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-dynamic-array.galgas", 115)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 110)) ;
    }
    {
    extensionSetter_addFunctionWithoutArgument (var_propertyMap_5940, ioArgument_ioSubprogramInvocationGraph, var_arrayTypeProxy_5650, GALGAS_string ("length"), GALGAS_bool (false), var_uint_33__32_TypeProxy_5750, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 119)) ;
    }
    {
    extensionSetter_addFunctionWithInputArgument (var_propertyMap_5940, ioArgument_ioContext, ioArgument_ioSubprogramInvocationGraph, var_arrayTypeProxy_5650, GALGAS_string ("append"), GALGAS_bool (false), GALGAS_string::makeEmptyString (), var_elementTypeProxy_5849, GALGAS_string ("inValue"), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-dynamic-array.galgas", 137)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 128)) ;
    }
    {
    extensionSetter_addFunctionWithTwoInputArguments (var_propertyMap_5940, ioArgument_ioContext, ioArgument_ioSubprogramInvocationGraph, var_arrayTypeProxy_5650, GALGAS_string ("insert"), GALGAS_bool (false), GALGAS_string::makeEmptyString (), var_elementTypeProxy_5849, GALGAS_string ("inValue"), GALGAS_string ("atIndex"), var_uint_33__32_TypeProxy_5750, GALGAS_string ("inIndex"), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-dynamic-array.galgas", 153)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 141)) ;
    }
    GALGAS_constructorMap var_constructorMap_7526 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-dynamic-array.galgas", 157)) ;
    {
    var_constructorMap_7526.setter_insertKey (GALGAS_string ("()").getter_nowhere (SOURCE_FILE ("type-dynamic-array.galgas", 158)), GALGAS_constructorSignature::constructor_emptyList (SOURCE_FILE ("type-dynamic-array.galgas", 158)), GALGAS_constructorValue::constructor_null (SOURCE_FILE ("type-dynamic-array.galgas", 158)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 158)) ;
    }
    GALGAS_PLMTypeAttributes var_typeAttributes_7697 = GALGAS_PLMTypeAttributes::constructor_instanciable (SOURCE_FILE ("type-dynamic-array.galgas", 160)).operator_or (GALGAS_PLMTypeAttributes::constructor_copyable (SOURCE_FILE ("type-dynamic-array.galgas", 160)) COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 160)).operator_or (GALGAS_PLMTypeAttributes::constructor_generateAssignmentRoutine (SOURCE_FILE ("type-dynamic-array.galgas", 160)) COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 160)) ;
    GALGAS_PLMType var_arrayType_7838 = GALGAS_PLMType::constructor_new (var_propertyMap_5940, GALGAS_classConstantMap::constructor_emptyMap (SOURCE_FILE ("type-dynamic-array.galgas", 164)), var_constructorMap_7526, GALGAS_guardMapForContext::constructor_emptyMap (SOURCE_FILE ("type-dynamic-array.galgas", 166)), var_typeAttributes_7697, var_originalTypeName_4982.getter_string (SOURCE_FILE ("type-dynamic-array.galgas", 168)), GALGAS_typeKind::constructor_dynamicArrayType (var_elementType_4661, ioArgument_ioContext.getter_mTargetParameters (HERE).getter_mPointerSize (HERE).getter_bigint (SOURCE_FILE ("type-dynamic-array.galgas", 169))  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 169)), var_originalTypeName_4982.getter_string (SOURCE_FILE ("type-dynamic-array.galgas", 170))  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 162)) ;
    {
    ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (var_originalTypeName_4982, var_arrayType_7838, ioArgument_ioContext.getter_mTypeMap (HERE).getter_count (SOURCE_FILE ("type-dynamic-array.galgas", 175)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 172)) ;
    }
    GALGAS_PLMType var_aliasedArrayType_8361 = GALGAS_PLMType::constructor_new (var_propertyMap_5940, GALGAS_classConstantMap::constructor_emptyMap (SOURCE_FILE ("type-dynamic-array.galgas", 179)), var_constructorMap_7526, GALGAS_guardMapForContext::constructor_emptyMap (SOURCE_FILE ("type-dynamic-array.galgas", 181)), var_typeAttributes_7697.substract_operation (GALGAS_PLMTypeAttributes::constructor_generateAssignmentRoutine (SOURCE_FILE ("type-dynamic-array.galgas", 182)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 182)), var_originalTypeName_4982.getter_string (SOURCE_FILE ("type-dynamic-array.galgas", 183)), GALGAS_typeKind::constructor_dynamicArrayType (var_elementType_4661, ioArgument_ioContext.getter_mTargetParameters (HERE).getter_mPointerSize (HERE).getter_bigint (SOURCE_FILE ("type-dynamic-array.galgas", 184))  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 184)), object->mProperty_mAnonymousDynamicArrayTypeName.getter_string (SOURCE_FILE ("type-dynamic-array.galgas", 185))  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 177)) ;
    {
    ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (object->mProperty_mAnonymousDynamicArrayTypeName, var_aliasedArrayType_8361, ioArgument_ioContext.getter_mTypeMap (HERE).getter_count (SOURCE_FILE ("type-dynamic-array.galgas", 190)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 187)) ;
    }
    ioArgument_ioDecoratedDeclarationList.addAssign_operation (GALGAS_decoratedTypeDynamicArrayDeclaration::constructor_new (var_originalTypeName_4982.getter_string (SOURCE_FILE ("type-dynamic-array.galgas", 194)), ioArgument_ioContext.getter_mTargetParameters (HERE).getter_mPointerSize (HERE).getter_bigint (SOURCE_FILE ("type-dynamic-array.galgas", 195)), var_elementType_4661  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 193))  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 193)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_typeDynamicArrayDeclarationAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_typeDynamicArrayDeclarationAST.mSlotID,
                                       extensionMethod_typeDynamicArrayDeclarationAST_enterInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_typeDynamicArrayDeclarationAST_enterInContext (defineExtensionMethod_typeDynamicArrayDeclarationAST_enterInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@decoratedTypeDynamicArrayDeclaration semanticAnalysis'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_decoratedTypeDynamicArrayDeclaration_semanticAnalysis (const cPtr_abstractDecoratedDeclaration * inObject,
                                                                                   const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                                   GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                                   GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_decoratedTypeDynamicArrayDeclaration * object = (const cPtr_decoratedTypeDynamicArrayDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_decoratedTypeDynamicArrayDeclaration) ;
  ioArgument_ioIntermediateCodeStruct.mProperty_mGenerationListIR.addAssign_operation (GALGAS_dynamicArrayIR::constructor_new (object->mProperty_mAnonymousDynamicArrayTypeName, object->mProperty_mPtrSize.getter_uint (inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 221)), object->mProperty_mElementType  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 219))  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 219)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_decoratedTypeDynamicArrayDeclaration_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_decoratedTypeDynamicArrayDeclaration.mSlotID,
                                         extensionMethod_decoratedTypeDynamicArrayDeclaration_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_decoratedTypeDynamicArrayDeclaration_semanticAnalysis (defineExtensionMethod_decoratedTypeDynamicArrayDeclaration_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding extension method '@dynamicArrayIR generateLLVMcode'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_dynamicArrayIR_generateLLVMcode (const cPtr_abstractGenerationIR * inObject,
                                                             GALGAS_string & ioArgument_ioLLVMcode,
                                                             GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_dynamicArrayIR * object = (const cPtr_dynamicArrayIR *) inObject ;
  macroValidSharedObject (object, cPtr_dynamicArrayIR) ;
  ioArgument_ioGenerationAdds.mProperty_mNeedsDynamicMemoryAllocation = GALGAS_bool (true) ;
  GALGAS_string var_elementLLVMTypeName_11064 = extensionGetter_llvmTypeName (object->mProperty_mElementType, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 243)) ;
  GALGAS_lstring var_removeAllRoutineMangledName_11161 = function_routineMangledNameFromAST (function_llvmTypeStringFromPLMname (object->mProperty_mAnonymousDynamicArrayTypeName, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 246)), GALGAS_string ("removeAll").getter_nowhere (SOURCE_FILE ("type-dynamic-array.galgas", 247)), GALGAS_routineFormalArgumentListAST::constructor_emptyList (SOURCE_FILE ("type-dynamic-array.galgas", 248)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 245)) ;
  GALGAS_string var_removeAllRoutineLLVMName_11326 = function_llvmNameForFunction (var_removeAllRoutineMangledName_11161.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 250)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (var_removeAllRoutineMangledName_11161.getter_string (SOURCE_FILE ("type-dynamic-array.galgas", 251)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 251)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 251)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal void @").add_operation (var_removeAllRoutineLLVMName_11326, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 252)).add_operation (GALGAS_string (" (%ptrtype* %ioArray)"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 252)).add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 252)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 252)).add_operation (GALGAS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 252)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 252)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %buffer.pointer = load %ptrtype, %ptrtype* %ioArray\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 253)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @arc.release (%ptrtype %buffer.pointer)\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 254)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store %ptrtype null, %ptrtype* %ioArray\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 255)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 256)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 257)) ;
  GALGAS_lstring var_lengthRoutineMangledName_11903 = function_routineMangledNameFromAST (function_llvmTypeStringFromPLMname (object->mProperty_mAnonymousDynamicArrayTypeName, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 260)), GALGAS_string ("length").getter_nowhere (SOURCE_FILE ("type-dynamic-array.galgas", 261)), GALGAS_routineFormalArgumentListAST::constructor_emptyList (SOURCE_FILE ("type-dynamic-array.galgas", 262)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 259)) ;
  GALGAS_string var_lengthRoutineLLVMName_12062 = function_llvmNameForFunction (var_lengthRoutineMangledName_11903.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 264)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (var_lengthRoutineMangledName_11903.getter_string (SOURCE_FILE ("type-dynamic-array.galgas", 265)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 265)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 265)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal i32 @").add_operation (var_lengthRoutineLLVMName_12062, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 266)).add_operation (GALGAS_string (" (%ptrtype* %ioArray)"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 266)).add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 266)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 266)).add_operation (GALGAS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 266)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 266)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %buffer.pointer = load %ptrtype, %ptrtype* %ioArray\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 267)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %length = call i32 @arc.length (%ptrtype %buffer.pointer)\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 268)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret i32 %length\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 269)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 270)) ;
  GALGAS_routineFormalArgumentListAST temp_0 = GALGAS_routineFormalArgumentListAST::constructor_emptyList (SOURCE_FILE ("type-dynamic-array.galgas", 281)) ;
  temp_0.addAssign_operation (GALGAS_procFormalArgumentPassingMode::constructor_input (SOURCE_FILE ("type-dynamic-array.galgas", 273)), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dynamic-array.galgas", 274)), object->mProperty_mElementType.getter_plmOriginalTypeName (HERE).getter_nowhere (SOURCE_FILE ("type-dynamic-array.galgas", 275)), GALGAS_string ("inValue").getter_nowhere (SOURCE_FILE ("type-dynamic-array.galgas", 276))  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 276)) ;
  temp_0.addAssign_operation (GALGAS_procFormalArgumentPassingMode::constructor_input (SOURCE_FILE ("type-dynamic-array.galgas", 278)), GALGAS_string ("atIndex").getter_nowhere (SOURCE_FILE ("type-dynamic-array.galgas", 279)), GALGAS_string ("uint32").getter_nowhere (SOURCE_FILE ("type-dynamic-array.galgas", 280)), GALGAS_string ("inIndex").getter_nowhere (SOURCE_FILE ("type-dynamic-array.galgas", 281))  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 281)) ;
  GALGAS_routineFormalArgumentListAST var_argumentList_12607 = temp_0 ;
  GALGAS_lstring var_insertRoutineMangledName_12839 = function_routineMangledNameFromAST (function_llvmTypeStringFromPLMname (object->mProperty_mAnonymousDynamicArrayTypeName, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 284)), GALGAS_string ("insert").getter_nowhere (SOURCE_FILE ("type-dynamic-array.galgas", 285)), var_argumentList_12607, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 283)) ;
  GALGAS_string var_insertRoutineLLVMName_13008 = function_llvmNameForFunction (var_insertRoutineMangledName_12839.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 288)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (var_insertRoutineMangledName_12839.getter_string (SOURCE_FILE ("type-dynamic-array.galgas", 289)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 289)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 289)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal void @").add_operation (var_insertRoutineLLVMName_13008, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 290)).add_operation (GALGAS_string (" (%ptrtype* %ioArray"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 290)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 290)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", ").add_operation (var_elementLLVMTypeName_11064, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 291)).add_operation (GALGAS_string (" %inValue"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 291)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 291)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", i32 %inIndex"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 292)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 293)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 293)).add_operation (GALGAS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 293)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 293)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- Inserted element pointer\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 294)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %insert.address = alloca %ptrtype\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 295)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- value pointer\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 296)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %value.pointer = alloca ").add_operation (var_elementLLVMTypeName_11064, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 297)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 297)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 297)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_elementLLVMTypeName_11064, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 298)).add_operation (GALGAS_string (" %inValue, "), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 298)).add_operation (var_elementLLVMTypeName_11064, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 298)).add_operation (GALGAS_string ("* %value.pointer\n"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 298)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 298)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- Size of element\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 299)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %sizeAsPtr = getelementptr inbounds ").add_operation (var_elementLLVMTypeName_11064, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 300)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 300)).add_operation (var_elementLLVMTypeName_11064, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 300)).add_operation (GALGAS_string ("* null, i32 1\n"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 300)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 300)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %element.byte.size = ptrtoint ").add_operation (var_elementLLVMTypeName_11064, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 301)).add_operation (GALGAS_string ("* %sizeAsPtr to i32\n"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 301)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 301)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- Get inserted element pointer\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 302)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %current.buffer.pointer = load %ptrtype, %ptrtype* %ioArray\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 303)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %new.buffer.pointer = call %ptrtype @arc.insert.at.index ").add_operation (GALGAS_string ("(%ptrtype %current.buffer.pointer, i32 %inIndex, i32 %element.byte.size, %ptrtype* %insert.address)\n"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 304)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 304)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- Perform copy\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 306)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %typed.insert.address = bitcast %ptrtype* %insert.address to ").add_operation (var_elementLLVMTypeName_11064, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 307)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 307)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 307)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @plm.assign.").add_operation (object->mProperty_mElementType.getter_plmOriginalTypeName (HERE).getter_assemblerRepresentation (SOURCE_FILE ("type-dynamic-array.galgas", 308)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 308)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 308)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" (").add_operation (var_elementLLVMTypeName_11064, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 309)).add_operation (GALGAS_string ("* %typed.insert.address, "), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 309)).add_operation (var_elementLLVMTypeName_11064, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 309)).add_operation (GALGAS_string ("* %value.pointer)\n"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 309)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 309)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- Store new buffer pointer\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 310)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store %ptrtype %new.buffer.pointer, %ptrtype* %ioArray\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 311)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- Return\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 312)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 313)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 314)) ;
  GALGAS_routineFormalArgumentListAST temp_1 = GALGAS_routineFormalArgumentListAST::constructor_emptyList (SOURCE_FILE ("type-dynamic-array.galgas", 320)) ;
  temp_1.addAssign_operation (GALGAS_procFormalArgumentPassingMode::constructor_input (SOURCE_FILE ("type-dynamic-array.galgas", 317)), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dynamic-array.galgas", 318)), object->mProperty_mElementType.getter_plmOriginalTypeName (HERE).getter_nowhere (SOURCE_FILE ("type-dynamic-array.galgas", 319)), GALGAS_string ("inValue").getter_nowhere (SOURCE_FILE ("type-dynamic-array.galgas", 320))  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 320)) ;
  var_argumentList_12607 = temp_1 ;
  GALGAS_lstring var_routineMangledName_15061 = function_routineMangledNameFromAST (function_llvmTypeStringFromPLMname (object->mProperty_mAnonymousDynamicArrayTypeName, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 323)), GALGAS_string ("append").getter_nowhere (SOURCE_FILE ("type-dynamic-array.galgas", 324)), var_argumentList_12607, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 322)) ;
  GALGAS_string var_routineLLVMName_15224 = function_llvmNameForFunction (var_routineMangledName_15061.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 327)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (var_routineMangledName_15061.getter_string (SOURCE_FILE ("type-dynamic-array.galgas", 328)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 328)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 328)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal void @").add_operation (var_routineLLVMName_15224, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 329)).add_operation (GALGAS_string (" (%ptrtype* %ioArray, "), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 329)).add_operation (var_elementLLVMTypeName_11064, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 330)).add_operation (GALGAS_string (" %inValue)"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 330)).add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 330)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 330)).add_operation (GALGAS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 330)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 329)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- Get buffer length\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 331)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %current.buffer.pointer = load %ptrtype, %ptrtype* %ioArray\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 332)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %current.buffer.length = call i32 @arc.length (%ptrtype %current.buffer.pointer)\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 333)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- Insert\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 334)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @").add_operation (var_insertRoutineLLVMName_13008, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 335)).add_operation (GALGAS_string ("(%ptrtype* %ioArray, "), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 335)).add_operation (var_elementLLVMTypeName_11064, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 336)).add_operation (GALGAS_string (" %inValue, i32 %current.buffer.length)\n"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 336)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 335)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- Return\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 337)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 338)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 339)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_dynamicArrayIR_generateLLVMcode (void) {
  enterExtensionMethod_generateLLVMcode (kTypeDescriptor_GALGAS_dynamicArrayIR.mSlotID,
                                         extensionMethod_dynamicArrayIR_generateLLVMcode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_dynamicArrayIR_generateLLVMcode (defineExtensionMethod_dynamicArrayIR_generateLLVMcode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Overriding extension getter '@booleanDeclarationAST location'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_location extensionGetter_booleanDeclarationAST_location (const cPtr_abstractDeclarationAST * inObject,
                                                                       C_Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_booleanDeclarationAST * object = (const cPtr_booleanDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_booleanDeclarationAST) ;
  result_outLocation = object->mProperty_mBooleanTypeName.getter_location (HERE) ;
//---
  return result_outLocation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_booleanDeclarationAST_location (void) {
  enterExtensionGetter_location (kTypeDescriptor_GALGAS_booleanDeclarationAST.mSlotID,
                                 extensionGetter_booleanDeclarationAST_location) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_booleanDeclarationAST_location (defineExtensionGetter_booleanDeclarationAST_location, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding extension method '@booleanDeclarationAST addExtension'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_booleanDeclarationAST_addExtension (const cPtr_abstractDeclarationAST * inObject,
                                                                GALGAS_extensionDeclarationListAST & /* ioArgument_ioExtensionDeclarationListAST */,
                                                                GALGAS_extendStaticArrayDeclarationAST & /* ioArgument_ioExtendStaticArrayDeclarationAST */,
                                                                GALGAS_abstractDeclarationAST & outArgument_outNewDeclaration,
                                                                C_Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_booleanDeclarationAST * object = (const cPtr_booleanDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_booleanDeclarationAST) ;
  const GALGAS_booleanDeclarationAST temp_0 = object ;
  outArgument_outNewDeclaration = temp_0 ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_booleanDeclarationAST_addExtension (void) {
  enterExtensionMethod_addExtension (kTypeDescriptor_GALGAS_booleanDeclarationAST.mSlotID,
                                     extensionMethod_booleanDeclarationAST_addExtension) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_booleanDeclarationAST_addExtension (defineExtensionMethod_booleanDeclarationAST_addExtension, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@booleanDeclarationAST enterInPrecedenceGraph'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_booleanDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                          GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_booleanDeclarationAST * object = (const cPtr_booleanDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_booleanDeclarationAST) ;
  GALGAS_lstring var_boolTypeName_1821 = function_llvmTypeNameFromPLMname (object->mProperty_mBooleanTypeName, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 34)) ;
  {
  const GALGAS_booleanDeclarationAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (var_boolTypeName_1821, temp_0, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 35)) ;
  }
  GALGAS_lstring var_uint_31_TypeName_1929 = function_llvmTypeNameFromPLMname (GALGAS_lstring::constructor_new (GALGAS_string ("uint1"), object->mProperty_mBooleanTypeName.getter_location (HERE)  COMMA_SOURCE_FILE ("type-bool.galgas", 36)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 36)) ;
  {
  ioArgument_ioGraph.setter_noteNode (var_uint_31_TypeName_1929 COMMA_SOURCE_FILE ("type-bool.galgas", 37)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_booleanDeclarationAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_booleanDeclarationAST.mSlotID,
                                               extensionMethod_booleanDeclarationAST_enterInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_booleanDeclarationAST_enterInPrecedenceGraph (defineExtensionMethod_booleanDeclarationAST_enterInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension getter '@booleanDeclarationAST keyRepresentationForErrorSignaling'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_booleanDeclarationAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_booleanDeclarationAST * object = (const cPtr_booleanDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_booleanDeclarationAST) ;
  result_outRepresentation = GALGAS_string ("bool ").add_operation (function_llvmTypeNameFromPLMname (object->mProperty_mBooleanTypeName, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 43)).getter_string (SOURCE_FILE ("type-bool.galgas", 43)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 43)) ;
//---
  return result_outRepresentation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_booleanDeclarationAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_booleanDeclarationAST.mSlotID,
                                                           extensionGetter_booleanDeclarationAST_keyRepresentationForErrorSignaling) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_booleanDeclarationAST_keyRepresentationForErrorSignaling (defineExtensionGetter_booleanDeclarationAST_keyRepresentationForErrorSignaling, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@booleanDeclarationAST enterInContext'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_booleanDeclarationAST_enterInContext (const cPtr_abstractDeclarationAST * inObject,
                                                                  const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                  GALGAS_semanticContext & ioArgument_ioContext,
                                                                  GALGAS_declarationDecorationList & ioArgument_ioDecoratedDeclarationList,
                                                                  GALGAS_subprogramInvocationGraph & ioArgument_ioSubprogramInvocationGraph,
                                                                  GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                                  GALGAS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_booleanDeclarationAST * object = (const cPtr_booleanDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_booleanDeclarationAST) ;
  GALGAS_propertyMap var_propertyMap_3202 = GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-bool.galgas", 59)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_boolTypeProxy_3300 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioContext.mProperty_mTypeMap, object->mProperty_mBooleanTypeName, var_boolTypeProxy_3300 COMMA_SOURCE_FILE ("type-bool.galgas", 60)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_uint_31_TypeProxy_3412 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioContext.mProperty_mTypeMap, GALGAS_lstring::constructor_new (GALGAS_string ("uint1"), object->mProperty_mBooleanTypeName.getter_location (SOURCE_FILE ("type-bool.galgas", 61))  COMMA_SOURCE_FILE ("type-bool.galgas", 61)), var_uint_31_TypeProxy_3412 COMMA_SOURCE_FILE ("type-bool.galgas", 61)) ;
  }
  {
  extensionSetter_addFunctionWithoutArgument (var_propertyMap_3202, ioArgument_ioSubprogramInvocationGraph, var_boolTypeProxy_3300, GALGAS_string ("uint1"), GALGAS_bool (true), var_uint_31_TypeProxy_3412, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 63)) ;
  }
  GALGAS_PLMType var_booleanType_3724 = GALGAS_PLMType::constructor_new (var_propertyMap_3202, GALGAS_classConstantMap::constructor_emptyMap (SOURCE_FILE ("type-bool.galgas", 74)), GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-bool.galgas", 75)), GALGAS_guardMapForContext::constructor_emptyMap (SOURCE_FILE ("type-bool.galgas", 76)), GALGAS_PLMTypeAttributes::constructor_instanciable (SOURCE_FILE ("type-bool.galgas", 77)).operator_or (GALGAS_PLMTypeAttributes::constructor_equatable (SOURCE_FILE ("type-bool.galgas", 77)) COMMA_SOURCE_FILE ("type-bool.galgas", 77)).operator_or (GALGAS_PLMTypeAttributes::constructor_copyable (SOURCE_FILE ("type-bool.galgas", 77)) COMMA_SOURCE_FILE ("type-bool.galgas", 77)).operator_or (GALGAS_PLMTypeAttributes::constructor_generateAssignmentRoutine (SOURCE_FILE ("type-bool.galgas", 77)) COMMA_SOURCE_FILE ("type-bool.galgas", 77)), function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 78)), GALGAS_typeKind::constructor_boolean (SOURCE_FILE ("type-bool.galgas", 79)), function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 80))  COMMA_SOURCE_FILE ("type-bool.galgas", 72)) ;
  {
  ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (object->mProperty_mBooleanTypeName, var_booleanType_3724, ioArgument_ioContext.getter_mTypeMap (HERE).getter_count (SOURCE_FILE ("type-bool.galgas", 83)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 83)) ;
  }
  {
  routine_enterBooleanOperators (object->mProperty_mBooleanTypeName, ioArgument_ioContext, inCompiler  COMMA_SOURCE_FILE ("type-bool.galgas", 85)) ;
  }
  ioArgument_ioDecoratedDeclarationList.addAssign_operation (GALGAS_boolDecoratedDeclaration::constructor_new (SOURCE_FILE ("type-bool.galgas", 87))  COMMA_SOURCE_FILE ("type-bool.galgas", 87)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_booleanDeclarationAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_booleanDeclarationAST.mSlotID,
                                       extensionMethod_booleanDeclarationAST_enterInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_booleanDeclarationAST_enterInContext (defineExtensionMethod_booleanDeclarationAST_enterInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Routine 'enterBooleanOperators'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterBooleanOperators (GALGAS_lstring inArgument_inBooleanTypeName,
                                    GALGAS_semanticContext & ioArgument_ioContext,
                                    C_Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_PLMType var_selfType_4642 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), inArgument_inBooleanTypeName, inCompiler  COMMA_SOURCE_FILE ("type-bool.galgas", 96)).getter_type (inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 96)) ;
  GALGAS_lstring var_boolBoolOp_4741 = function_combineTypeNamesForInfixOperator (inArgument_inBooleanTypeName.getter_string (HERE), inArgument_inBooleanTypeName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 97)) ;
  {
  ioArgument_ioContext.mProperty_mEqualOperatorMap.setter_insertKey (var_boolBoolOp_4741, var_selfType_4642, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_eq (SOURCE_FILE ("type-bool.galgas", 101))  COMMA_SOURCE_FILE ("type-bool.galgas", 101)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 98)) ;
  }
  {
  ioArgument_ioContext.mProperty_mNonEqualOperatorMap.setter_insertKey (var_boolBoolOp_4741, var_selfType_4642, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ne (SOURCE_FILE ("type-bool.galgas", 106))  COMMA_SOURCE_FILE ("type-bool.galgas", 106)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 103)) ;
  }
  {
  ioArgument_ioContext.mProperty_mStrictInfOperatorMap.setter_insertKey (var_boolBoolOp_4741, var_selfType_4642, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ult (SOURCE_FILE ("type-bool.galgas", 111))  COMMA_SOURCE_FILE ("type-bool.galgas", 111)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 108)) ;
  }
  {
  ioArgument_ioContext.mProperty_mInfEqualOperatorMap.setter_insertKey (var_boolBoolOp_4741, var_selfType_4642, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ule (SOURCE_FILE ("type-bool.galgas", 116))  COMMA_SOURCE_FILE ("type-bool.galgas", 116)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 113)) ;
  }
  {
  ioArgument_ioContext.mProperty_mStrictSupOperatorMap.setter_insertKey (var_boolBoolOp_4741, var_selfType_4642, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ugt (SOURCE_FILE ("type-bool.galgas", 121))  COMMA_SOURCE_FILE ("type-bool.galgas", 121)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 118)) ;
  }
  {
  ioArgument_ioContext.mProperty_mSupEqualOperatorMap.setter_insertKey (var_boolBoolOp_4741, var_selfType_4642, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_uge (SOURCE_FILE ("type-bool.galgas", 126))  COMMA_SOURCE_FILE ("type-bool.galgas", 126)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 123)) ;
  }
  {
  ioArgument_ioContext.mProperty_mBooleanXorOperatorMap.setter_insertKey (var_boolBoolOp_4741, var_selfType_4642, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_xor (SOURCE_FILE ("type-bool.galgas", 131))  COMMA_SOURCE_FILE ("type-bool.galgas", 131)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 128)) ;
  }
  {
  ioArgument_ioContext.mProperty_mOrOperatorMap.setter_insertKey (var_boolBoolOp_4741, var_selfType_4642, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_ior (SOURCE_FILE ("type-bool.galgas", 136))  COMMA_SOURCE_FILE ("type-bool.galgas", 136)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 133)) ;
  }
  {
  ioArgument_ioContext.mProperty_mAndOperatorMap.setter_insertKey (var_boolBoolOp_4741, var_selfType_4642, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_and (SOURCE_FILE ("type-bool.galgas", 141))  COMMA_SOURCE_FILE ("type-bool.galgas", 141)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 138)) ;
  }
  {
  ioArgument_ioContext.mProperty_mNotOperatorMap.setter_insertKey (inArgument_inBooleanTypeName, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 143)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@boolDecoratedDeclaration semanticAnalysis'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_boolDecoratedDeclaration_semanticAnalysis (const cPtr_abstractDecoratedDeclaration * /* inObject */,
                                                                       const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                       GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                       GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                                       C_Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioIntermediateCodeStruct.mProperty_mGenerationListIR.addAssign_operation (GALGAS_boolIR::constructor_new (SOURCE_FILE ("type-bool.galgas", 162))  COMMA_SOURCE_FILE ("type-bool.galgas", 162)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_boolDecoratedDeclaration_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_boolDecoratedDeclaration.mSlotID,
                                         extensionMethod_boolDecoratedDeclaration_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_boolDecoratedDeclaration_semanticAnalysis (defineExtensionMethod_boolDecoratedDeclaration_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Overriding extension method '@boolIR generateLLVMcode'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_boolIR_generateLLVMcode (const cPtr_abstractGenerationIR * /* inObject */,
                                                     GALGAS_string & ioArgument_ioLLVMcode,
                                                     GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring var_routineMangledName_7711 = function_routineMangledNameFromAST (function_llvmTypeStringFromPLMname (function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 177)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 177)), GALGAS_string ("uint1").getter_nowhere (SOURCE_FILE ("type-bool.galgas", 178)), GALGAS_routineFormalArgumentListAST::constructor_emptyList (SOURCE_FILE ("type-bool.galgas", 179)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 176)) ;
  GALGAS_string var_functionName_7845 = function_llvmNameForFunction (var_routineMangledName_7711.getter_string (SOURCE_FILE ("type-bool.galgas", 181)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 181)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal i1 @").add_operation (var_functionName_7845, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 182)).add_operation (GALGAS_string (" (i1* %inValue) {\n"), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 182)), inCompiler  COMMA_SOURCE_FILE ("type-bool.galgas", 182)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %value = load i1, i1* %inValue\n"), inCompiler  COMMA_SOURCE_FILE ("type-bool.galgas", 183)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret i1 %value\n"), inCompiler  COMMA_SOURCE_FILE ("type-bool.galgas", 184)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("type-bool.galgas", 185)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_boolIR_generateLLVMcode (void) {
  enterExtensionMethod_generateLLVMcode (kTypeDescriptor_GALGAS_boolIR.mSlotID,
                                         extensionMethod_boolIR_generateLLVMcode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_boolIR_generateLLVMcode (defineExtensionMethod_boolIR_generateLLVMcode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@enumerationDeclarationAST addExtension'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_enumerationDeclarationAST_addExtension (const cPtr_abstractDeclarationAST * inObject,
                                                                    GALGAS_extensionDeclarationListAST & /* ioArgument_ioExtensionDeclarationListAST */,
                                                                    GALGAS_extendStaticArrayDeclarationAST & /* ioArgument_ioExtendStaticArrayDeclarationAST */,
                                                                    GALGAS_abstractDeclarationAST & outArgument_outNewDeclaration,
                                                                    C_Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumerationDeclarationAST * object = (const cPtr_enumerationDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_enumerationDeclarationAST) ;
  const GALGAS_enumerationDeclarationAST temp_0 = object ;
  outArgument_outNewDeclaration = temp_0 ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_enumerationDeclarationAST_addExtension (void) {
  enterExtensionMethod_addExtension (kTypeDescriptor_GALGAS_enumerationDeclarationAST.mSlotID,
                                     extensionMethod_enumerationDeclarationAST_addExtension) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_enumerationDeclarationAST_addExtension (defineExtensionMethod_enumerationDeclarationAST_addExtension, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@enumerationDeclarationAST enterInPrecedenceGraph'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_enumerationDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                              GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumerationDeclarationAST * object = (const cPtr_enumerationDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_enumerationDeclarationAST) ;
  GALGAS_lstring var_typeName_2871 = function_llvmTypeNameFromPLMname (object->mProperty_mEnumerationName, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 65)) ;
  {
  const GALGAS_enumerationDeclarationAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (var_typeName_2871, temp_0, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 66)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_typeName_2871, function_llvmTypeNameFromPLMname (function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 67)).getter_nowhere (SOURCE_FILE ("type-enumeration-declaration.galgas", 67)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 67)) COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 67)) ;
  }
  GALGAS_bigint var_maxValue_3117 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 69)) ;
  cEnumerator_enumerationConstantList enumerator_3155 (object->mProperty_mCaseNameList, kENUMERATION_UP) ;
  while (enumerator_3155.hasCurrentObject ()) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsStrictInf, var_maxValue_3117.objectCompare (enumerator_3155.current_mConstantValue (HERE))).boolEnum () ;
    if (kBoolTrue == test_1) {
      var_maxValue_3117 = enumerator_3155.current_mConstantValue (HERE) ;
    }
    enumerator_3155.gotoNextObject () ;
  }
  GALGAS_uint var_representationBitCount_3255 = GALGAS_uint ((uint32_t) 0U) ;
  if (GALGAS_uint::constructor_max (SOURCE_FILE ("type-enumeration-declaration.galgas", 76)).isValid ()) {
    uint32_t variant_3266 = GALGAS_uint::constructor_max (SOURCE_FILE ("type-enumeration-declaration.galgas", 76)).uintValue () ;
    bool loop_3266 = true ;
    while (loop_3266) {
      loop_3266 = GALGAS_bool (kIsStrictSup, var_maxValue_3117.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 76)))).isValid () ;
      if (loop_3266) {
        loop_3266 = GALGAS_bool (kIsStrictSup, var_maxValue_3117.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 76)))).boolValue () ;
      }
      if (loop_3266 && (0 == variant_3266)) {
        loop_3266 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("type-enumeration-declaration.galgas", 76)) ;
      }
      if (loop_3266) {
        variant_3266 -- ;
        var_representationBitCount_3255.increment_operation (inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 77)) ;
        var_maxValue_3117 = var_maxValue_3117.divide_operation (GALGAS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 78)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 78)) ;
      }
    }
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_typeName_2871, function_llvmTypeNameFromPLMname (GALGAS_string ("uint").add_operation (var_representationBitCount_3255.getter_string (SOURCE_FILE ("type-enumeration-declaration.galgas", 80)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 80)).getter_nowhere (SOURCE_FILE ("type-enumeration-declaration.galgas", 80)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 80)) COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 80)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_enumerationDeclarationAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_enumerationDeclarationAST.mSlotID,
                                               extensionMethod_enumerationDeclarationAST_enterInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_enumerationDeclarationAST_enterInPrecedenceGraph (defineExtensionMethod_enumerationDeclarationAST_enterInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding extension getter '@enumerationDeclarationAST location'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_location extensionGetter_enumerationDeclarationAST_location (const cPtr_abstractDeclarationAST * inObject,
                                                                           C_Compiler * /* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_enumerationDeclarationAST * object = (const cPtr_enumerationDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_enumerationDeclarationAST) ;
  result_outLocation = object->mProperty_mEnumerationName.getter_location (HERE) ;
//---
  return result_outLocation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_enumerationDeclarationAST_location (void) {
  enterExtensionGetter_location (kTypeDescriptor_GALGAS_enumerationDeclarationAST.mSlotID,
                                 extensionGetter_enumerationDeclarationAST_location) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_enumerationDeclarationAST_location (defineExtensionGetter_enumerationDeclarationAST_location, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension getter '@enumerationDeclarationAST keyRepresentationForErrorSignaling'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_enumerationDeclarationAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_enumerationDeclarationAST * object = (const cPtr_enumerationDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_enumerationDeclarationAST) ;
  result_outRepresentation = GALGAS_string ("enum $").add_operation (object->mProperty_mEnumerationName.getter_string (SOURCE_FILE ("type-enumeration-declaration.galgas", 92)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 92)) ;
//---
  return result_outRepresentation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_enumerationDeclarationAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_enumerationDeclarationAST.mSlotID,
                                                           extensionGetter_enumerationDeclarationAST_keyRepresentationForErrorSignaling) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_enumerationDeclarationAST_keyRepresentationForErrorSignaling (defineExtensionGetter_enumerationDeclarationAST_keyRepresentationForErrorSignaling, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Function 'integerEnumAccessorName'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_integerEnumAccessorName (const GALGAS_uint & constinArgument_inBitCount,
                                                C_Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("uint").add_operation (constinArgument_inBitCount.getter_string (SOURCE_FILE ("type-enumeration-declaration.galgas", 100)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 100)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_integerEnumAccessorName [2] = {
  & kTypeDescriptor_GALGAS_uint,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_integerEnumAccessorName (C_Compiler * inCompiler,
                                                                        const cObjectArray & inEffectiveParameterArray,
                                                                        const GALGAS_location & /* inErrorLocation */
                                                                        COMMA_LOCATION_ARGS) {
  const GALGAS_uint operand0 = GALGAS_uint::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  return function_integerEnumAccessorName (operand0,
                                           inCompiler
                                           COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_integerEnumAccessorName ("integerEnumAccessorName",
                                                                         functionWithGenericHeader_integerEnumAccessorName,
                                                                         & kTypeDescriptor_GALGAS_string,
                                                                         1,
                                                                         functionArgs_integerEnumAccessorName) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@enumerationDeclarationAST enterInContext'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_enumerationDeclarationAST_enterInContext (const cPtr_abstractDeclarationAST * inObject,
                                                                      const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                      GALGAS_semanticContext & ioArgument_ioContext,
                                                                      GALGAS_declarationDecorationList & ioArgument_ioDecoratedDeclarationList,
                                                                      GALGAS_subprogramInvocationGraph & ioArgument_ioSubprogramInvocationGraph,
                                                                      GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                                      GALGAS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumerationDeclarationAST * object = (const cPtr_enumerationDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_enumerationDeclarationAST) ;
  GALGAS_classConstantMap var_enumConstantMap_5678 = GALGAS_classConstantMap::constructor_emptyMap (SOURCE_FILE ("type-enumeration-declaration.galgas", 125)) ;
  GALGAS_bigint var_maxValue_5702 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 126)) ;
  cEnumerator_enumerationConstantList enumerator_5743 (object->mProperty_mCaseNameList, kENUMERATION_UP) ;
  while (enumerator_5743.hasCurrentObject ()) {
    {
    var_enumConstantMap_5678.setter_insertKey (enumerator_5743.current_mConstantName (HERE), enumerator_5743.current_mConstantValue (HERE), object->mProperty_mEnumerationName, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 128)) ;
    }
    const enumGalgasBool test_0 = GALGAS_bool (kIsStrictInf, var_maxValue_5702.objectCompare (enumerator_5743.current_mConstantValue (HERE))).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_maxValue_5702 = enumerator_5743.current_mConstantValue (HERE) ;
    }
    enumerator_5743.gotoNextObject () ;
  }
  GALGAS_uint var_representationBitCount_5959 = GALGAS_uint ((uint32_t) 0U) ;
  if (GALGAS_uint::constructor_max (SOURCE_FILE ("type-enumeration-declaration.galgas", 135)).isValid ()) {
    uint32_t variant_5970 = GALGAS_uint::constructor_max (SOURCE_FILE ("type-enumeration-declaration.galgas", 135)).uintValue () ;
    bool loop_5970 = true ;
    while (loop_5970) {
      loop_5970 = GALGAS_bool (kIsStrictSup, var_maxValue_5702.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 135)))).isValid () ;
      if (loop_5970) {
        loop_5970 = GALGAS_bool (kIsStrictSup, var_maxValue_5702.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 135)))).boolValue () ;
      }
      if (loop_5970 && (0 == variant_5970)) {
        loop_5970 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("type-enumeration-declaration.galgas", 135)) ;
      }
      if (loop_5970) {
        variant_5970 -- ;
        var_representationBitCount_5959.increment_operation (inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 136)) ;
        var_maxValue_5702 = var_maxValue_5702.divide_operation (GALGAS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 137)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 137)) ;
      }
    }
  }
  GALGAS_propertyMap var_propertyMap_6152 = GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-enumeration-declaration.galgas", 140)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_integerTypeProxy_6180 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), GALGAS_lstring::constructor_new (GALGAS_string ("uint").add_operation (var_representationBitCount_5959.getter_string (SOURCE_FILE ("type-enumeration-declaration.galgas", 143)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 143)), object->mProperty_mEnumerationName.getter_location (SOURCE_FILE ("type-enumeration-declaration.galgas", 143))  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 143)), inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 141)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_enumTypeProxy_6400 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioContext.mProperty_mTypeMap, object->mProperty_mEnumerationName, var_enumTypeProxy_6400 COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 145)) ;
  }
  {
  extensionSetter_addFunctionWithoutArgument (var_propertyMap_6152, ioArgument_ioSubprogramInvocationGraph, var_enumTypeProxy_6400, function_integerEnumAccessorName (var_representationBitCount_5959, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 149)), GALGAS_bool (true), var_integerTypeProxy_6180, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 146)) ;
  }
  GALGAS_PLMType var_enumerationType_6753 = GALGAS_PLMType::constructor_new (var_propertyMap_6152, var_enumConstantMap_5678, GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-enumeration-declaration.galgas", 158)), GALGAS_guardMapForContext::constructor_emptyMap (SOURCE_FILE ("type-enumeration-declaration.galgas", 159)), GALGAS_PLMTypeAttributes::constructor_instanciable (SOURCE_FILE ("type-enumeration-declaration.galgas", 160)).operator_or (GALGAS_PLMTypeAttributes::constructor_equatable (SOURCE_FILE ("type-enumeration-declaration.galgas", 160)) COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 160)).operator_or (GALGAS_PLMTypeAttributes::constructor_copyable (SOURCE_FILE ("type-enumeration-declaration.galgas", 160)) COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 160)).operator_or (GALGAS_PLMTypeAttributes::constructor_generateAssignmentRoutine (SOURCE_FILE ("type-enumeration-declaration.galgas", 160)) COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 160)), object->mProperty_mEnumerationName.getter_string (SOURCE_FILE ("type-enumeration-declaration.galgas", 161)), GALGAS_typeKind::constructor_enumeration (var_representationBitCount_5959  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 162)), object->mProperty_mEnumerationName.getter_string (SOURCE_FILE ("type-enumeration-declaration.galgas", 163))  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 155)) ;
  {
  ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (object->mProperty_mEnumerationName, var_enumerationType_6753, ioArgument_ioContext.getter_mTypeMap (HERE).getter_count (SOURCE_FILE ("type-enumeration-declaration.galgas", 168)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 165)) ;
  }
  {
  routine_enterEnumerationComparisonOperators (object->mProperty_mEnumerationName, ioArgument_ioContext, inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 171)) ;
  }
  ioArgument_ioDecoratedDeclarationList.addAssign_operation (GALGAS_enumerationDecoratedDeclaration::constructor_new (object->mProperty_mEnumerationName, var_representationBitCount_5959  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 173))  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 173)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_enumerationDeclarationAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_enumerationDeclarationAST.mSlotID,
                                       extensionMethod_enumerationDeclarationAST_enterInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_enumerationDeclarationAST_enterInContext (defineExtensionMethod_enumerationDeclarationAST_enterInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Routine 'enterEnumerationComparisonOperators'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterEnumerationComparisonOperators (GALGAS_lstring inArgument_inTypeName,
                                                  GALGAS_semanticContext & ioArgument_ioContext,
                                                  C_Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring var_key_7764 = function_combineTypeNamesForInfixOperator (inArgument_inTypeName.getter_string (HERE), inArgument_inTypeName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 182)) ;
  GALGAS_PLMType var_booleanType_7857 = extensionGetter_booleanType (ioArgument_ioContext, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 183)) ;
  {
  ioArgument_ioContext.mProperty_mEqualOperatorMap.setter_insertKey (var_key_7764, var_booleanType_7857, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_eq (SOURCE_FILE ("type-enumeration-declaration.galgas", 187))  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 187)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 184)) ;
  }
  {
  ioArgument_ioContext.mProperty_mNonEqualOperatorMap.setter_insertKey (var_key_7764, var_booleanType_7857, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ne (SOURCE_FILE ("type-enumeration-declaration.galgas", 192))  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 192)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 189)) ;
  }
  {
  ioArgument_ioContext.mProperty_mStrictInfOperatorMap.setter_insertKey (var_key_7764, var_booleanType_7857, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ult (SOURCE_FILE ("type-enumeration-declaration.galgas", 197))  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 197)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 194)) ;
  }
  {
  ioArgument_ioContext.mProperty_mInfEqualOperatorMap.setter_insertKey (var_key_7764, var_booleanType_7857, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ule (SOURCE_FILE ("type-enumeration-declaration.galgas", 202))  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 202)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 199)) ;
  }
  {
  ioArgument_ioContext.mProperty_mStrictSupOperatorMap.setter_insertKey (var_key_7764, var_booleanType_7857, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ugt (SOURCE_FILE ("type-enumeration-declaration.galgas", 207))  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 207)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 204)) ;
  }
  {
  ioArgument_ioContext.mProperty_mSupEqualOperatorMap.setter_insertKey (var_key_7764, var_booleanType_7857, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_uge (SOURCE_FILE ("type-enumeration-declaration.galgas", 212))  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 212)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 209)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@enumerationDecoratedDeclaration semanticAnalysis'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_enumerationDecoratedDeclaration_semanticAnalysis (const cPtr_abstractDecoratedDeclaration * inObject,
                                                                              const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                              GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                              GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                                              C_Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumerationDecoratedDeclaration * object = (const cPtr_enumerationDecoratedDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_enumerationDecoratedDeclaration) ;
  ioArgument_ioIntermediateCodeStruct.mProperty_mGenerationListIR.addAssign_operation (GALGAS_enumerationIR::constructor_new (object->mProperty_mEnumerationName, object->mProperty_mRepresentationBitCount  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 233))  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 233)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_enumerationDecoratedDeclaration_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_enumerationDecoratedDeclaration.mSlotID,
                                         extensionMethod_enumerationDecoratedDeclaration_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_enumerationDecoratedDeclaration_semanticAnalysis (defineExtensionMethod_enumerationDecoratedDeclaration_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Overriding extension method '@enumerationIR generateLLVMcode'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_enumerationIR_generateLLVMcode (const cPtr_abstractGenerationIR * inObject,
                                                            GALGAS_string & ioArgument_ioLLVMcode,
                                                            GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                            C_Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumerationIR * object = (const cPtr_enumerationIR *) inObject ;
  macroValidSharedObject (object, cPtr_enumerationIR) ;
  GALGAS_lstring var_routineMangledName_10454 = function_routineMangledNameFromAST (function_llvmTypeStringFromPLMname (object->mProperty_mEnumerationName.getter_string (SOURCE_FILE ("type-enumeration-declaration.galgas", 249)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 249)), GALGAS_lstring::constructor_new (function_integerEnumAccessorName (object->mProperty_mBitCount, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 250)), object->mProperty_mEnumerationName.getter_location (SOURCE_FILE ("type-enumeration-declaration.galgas", 250))  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 250)), GALGAS_routineFormalArgumentListAST::constructor_emptyList (SOURCE_FILE ("type-enumeration-declaration.galgas", 251)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 248)) ;
  GALGAS_string var_routineLLVMName_10649 = function_llvmNameForFunction (var_routineMangledName_10454.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 253)) ;
  GALGAS_string var_type_10711 = GALGAS_string ("i").add_operation (object->mProperty_mBitCount.getter_string (SOURCE_FILE ("type-enumeration-declaration.galgas", 254)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 254)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (var_routineMangledName_10454.getter_string (SOURCE_FILE ("type-enumeration-declaration.galgas", 255)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 255)), inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 255)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal ").add_operation (var_type_10711, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 256)).add_operation (GALGAS_string ("  @"), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 256)).add_operation (var_routineLLVMName_10649, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 256)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 256)).add_operation (var_type_10711, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 256)).add_operation (GALGAS_string ("* %inValue) nounwind {\n"), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 256)), inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 256)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %r = load ").add_operation (var_type_10711, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 257)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 257)).add_operation (var_type_10711, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 257)).add_operation (GALGAS_string ("* %inValue\n"), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 257)), inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 257)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret ").add_operation (var_type_10711, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 258)).add_operation (GALGAS_string (" %r\n"), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 258)), inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 258)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 259)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_enumerationIR_generateLLVMcode (void) {
  enterExtensionMethod_generateLLVMcode (kTypeDescriptor_GALGAS_enumerationIR.mSlotID,
                                         extensionMethod_enumerationIR_generateLLVMcode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_enumerationIR_generateLLVMcode (defineExtensionMethod_enumerationIR_generateLLVMcode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@structureDeclarationAST addExtension'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_structureDeclarationAST_addExtension (const cPtr_abstractDeclarationAST * inObject,
                                                                  GALGAS_extensionDeclarationListAST & ioArgument_ioExtensionDeclarationListAST,
                                                                  GALGAS_extendStaticArrayDeclarationAST & /* ioArgument_ioExtendStaticArrayDeclarationAST */,
                                                                  GALGAS_abstractDeclarationAST & outArgument_outNewDeclaration,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_structureDeclarationAST * object = (const cPtr_structureDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_structureDeclarationAST) ;
  const GALGAS_structureDeclarationAST temp_0 = object ;
  GALGAS_structureDeclarationAST var_newDeclaration_6017 = temp_0 ;
  GALGAS_extensionDeclarationListAST var_currentExtensionDeclarationListAST_6065 = ioArgument_ioExtensionDeclarationListAST ;
  ioArgument_ioExtensionDeclarationListAST = GALGAS_extensionDeclarationListAST::constructor_emptyList (SOURCE_FILE ("type-structure-declaration.galgas", 176)) ;
  cEnumerator_extensionDeclarationListAST enumerator_6222 (var_currentExtensionDeclarationListAST_6065, kENUMERATION_UP) ;
  while (enumerator_6222.hasCurrentObject ()) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, object->mProperty_mStructureName.getter_string (HERE).objectCompare (enumerator_6222.current_mTypeName (HERE).getter_string (HERE))).boolEnum () ;
    if (kBoolTrue == test_1) {
      var_newDeclaration_6017 = GALGAS_structureDeclarationAST::constructor_new (var_newDeclaration_6017.getter_mStructureName (HERE), var_newDeclaration_6017.getter_mAttributeListAST (HERE), var_newDeclaration_6017.getter_mGenerateAssignmentRoutine (HERE), var_newDeclaration_6017.getter_mStructurePropertyListAST (HERE).add_operation (enumerator_6222.current_mPropertyList (HERE), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 183)), var_newDeclaration_6017.getter_mFunctionDeclarationListAST (HERE).add_operation (enumerator_6222.current_mProcedureDeclarationListAST (HERE), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 184)), var_newDeclaration_6017.getter_mSystemRoutineListAST (HERE).add_operation (enumerator_6222.current_mSVCListAST (HERE), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 185)), var_newDeclaration_6017.getter_mGuardListAST (HERE).add_operation (enumerator_6222.current_mGuardListAST (HERE), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 186)), var_newDeclaration_6017.getter_mMayImplementDeinit (HERE)  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 179)) ;
    }else if (kBoolFalse == test_1) {
      ioArgument_ioExtensionDeclarationListAST.addAssign_operation (enumerator_6222.current_mTypeName (HERE), enumerator_6222.current_mProcedureDeclarationListAST (HERE), enumerator_6222.current_mPropertyList (HERE), enumerator_6222.current_mSVCListAST (HERE), enumerator_6222.current_mGuardListAST (HERE)  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 190)) ;
    }
    enumerator_6222.gotoNextObject () ;
  }
  outArgument_outNewDeclaration = var_newDeclaration_6017 ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_structureDeclarationAST_addExtension (void) {
  enterExtensionMethod_addExtension (kTypeDescriptor_GALGAS_structureDeclarationAST.mSlotID,
                                     extensionMethod_structureDeclarationAST_addExtension) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_structureDeclarationAST_addExtension (defineExtensionMethod_structureDeclarationAST_addExtension, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@structureDeclarationAST enterInPrecedenceGraph'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_structureDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                            GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_structureDeclarationAST * object = (const cPtr_structureDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_structureDeclarationAST) ;
  GALGAS_lstring var_structureTypeName_7365 = function_llvmTypeNameFromPLMname (object->mProperty_mStructureName, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 201)) ;
  {
  const GALGAS_structureDeclarationAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (var_structureTypeName_7365, temp_0, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 203)) ;
  }
  cEnumerator_structurePropertyListAST enumerator_7589 (object->mProperty_mStructurePropertyListAST, kENUMERATION_UP) ;
  while (enumerator_7589.hasCurrentObject ()) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, enumerator_7589.current_mPropertyTypeName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_lstring var_typeName_7650 = function_llvmTypeNameFromPLMname (enumerator_7589.current_mPropertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 207)) ;
      {
      ioArgument_ioGraph.setter_addEdge (var_structureTypeName_7365, var_typeName_7650 COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 208)) ;
      }
    }
    switch (enumerator_7589.current_mInitialisation (HERE).enumValue ()) {
    case GALGAS_structurePropertyInitOptionalExpressionAST::kNotBuilt:
      break ;
    case GALGAS_structurePropertyInitOptionalExpressionAST::kEnum_noExpression:
      {
      }
      break ;
    case GALGAS_structurePropertyInitOptionalExpressionAST::kEnum_expression:
      {
        const cEnumAssociatedValues_structurePropertyInitOptionalExpressionAST_expression * extractPtr_7934 = (const cEnumAssociatedValues_structurePropertyInitOptionalExpressionAST_expression *) (enumerator_7589.current_mInitialisation (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_initExpression = extractPtr_7934->mAssociatedValue0 ;
        callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) extractedValue_initExpression.ptr (), var_structureTypeName_7365, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 213)) ;
      }
      break ;
    }
    enumerator_7589.gotoNextObject () ;
  }
  cEnumerator_functionDeclarationListAST enumerator_8017 (object->mProperty_mFunctionDeclarationListAST, kENUMERATION_UP) ;
  while (enumerator_8017.hasCurrentObject ()) {
    cEnumerator_routineFormalArgumentListAST enumerator_8090 (enumerator_8017.current_mFunctionFormalArgumentList (HERE), kENUMERATION_UP) ;
    while (enumerator_8090.hasCurrentObject ()) {
      GALGAS_lstring var_typeName_8112 = function_llvmTypeNameFromPLMname (enumerator_8090.current_mFormalArgumentTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 219)) ;
      {
      ioArgument_ioGraph.setter_noteNode (var_typeName_8112 COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 220)) ;
      }
      enumerator_8090.gotoNextObject () ;
    }
    const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, enumerator_8017.current_mFunctionReturnTypeName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_lstring var_typeName_8277 = function_llvmTypeNameFromPLMname (enumerator_8017.current_mFunctionReturnTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 223)) ;
      {
      ioArgument_ioGraph.setter_noteNode (var_typeName_8277 COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 224)) ;
      }
    }
    extensionMethod_noteInstructionListTypesInPrecedenceGraph (enumerator_8017.current_mFunctionInstructionList (HERE), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 226)) ;
    enumerator_8017.gotoNextObject () ;
  }
  extensionMethod_noteTypesInPrecedenceGraph (object->mProperty_mSystemRoutineListAST, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 229)) ;
  extensionMethod_noteTypesInPrecedenceGraph (object->mProperty_mGuardListAST, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 230)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_structureDeclarationAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_structureDeclarationAST.mSlotID,
                                               extensionMethod_structureDeclarationAST_enterInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_structureDeclarationAST_enterInPrecedenceGraph (defineExtensionMethod_structureDeclarationAST_enterInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension getter '@structureDeclarationAST keyRepresentationForErrorSignaling'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_structureDeclarationAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_structureDeclarationAST * object = (const cPtr_structureDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_structureDeclarationAST) ;
  result_outRepresentation = GALGAS_string ("struct $").add_operation (object->mProperty_mStructureName.getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 236)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 236)) ;
//---
  return result_outRepresentation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_structureDeclarationAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_structureDeclarationAST.mSlotID,
                                                           extensionGetter_structureDeclarationAST_keyRepresentationForErrorSignaling) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_structureDeclarationAST_keyRepresentationForErrorSignaling (defineExtensionGetter_structureDeclarationAST_keyRepresentationForErrorSignaling, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding extension getter '@structureDeclarationAST location'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_location extensionGetter_structureDeclarationAST_location (const cPtr_abstractDeclarationAST * inObject,
                                                                         C_Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_structureDeclarationAST * object = (const cPtr_structureDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_structureDeclarationAST) ;
  result_outLocation = object->mProperty_mStructureName.getter_location (HERE) ;
//---
  return result_outLocation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_structureDeclarationAST_location (void) {
  enterExtensionGetter_location (kTypeDescriptor_GALGAS_structureDeclarationAST.mSlotID,
                                 extensionGetter_structureDeclarationAST_location) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_structureDeclarationAST_location (defineExtensionGetter_structureDeclarationAST_location, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@structureDeclarationAST enterInContext'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_structureDeclarationAST_enterInContext (const cPtr_abstractDeclarationAST * inObject,
                                                                    const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                    GALGAS_semanticContext & ioArgument_ioContext,
                                                                    GALGAS_declarationDecorationList & ioArgument_ioDecoratedDeclarationList,
                                                                    GALGAS_subprogramInvocationGraph & /* ioArgument_ioSubprogramInvocationGraph */,
                                                                    GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                                    GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_structureDeclarationAST * object = (const cPtr_structureDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_structureDeclarationAST) ;
  GALGAS_propertyList var_propertyList_10453 = GALGAS_propertyList::constructor_emptyList (SOURCE_FILE ("type-structure-declaration.galgas", 274)) ;
  GALGAS_propertyMap var_propertyMap_10485 = GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-structure-declaration.galgas", 275)) ;
  GALGAS_sortedOperandIRList var_sortedOperandIRList_10533 = GALGAS_sortedOperandIRList::constructor_emptySortedList (SOURCE_FILE ("type-structure-declaration.galgas", 276)) ;
  GALGAS_constructorSignature var_constructorSignature_10583 = GALGAS_constructorSignature::constructor_emptyList (SOURCE_FILE ("type-structure-declaration.galgas", 277)) ;
  GALGAS_string var_constructorKey_10613 = GALGAS_string ("(") ;
  GALGAS_bool var_canBeCopied_10637 = GALGAS_bool (true) ;
  cEnumerator_structurePropertyListAST enumerator_10688 (object->mProperty_mStructurePropertyListAST, kENUMERATION_UP) ;
  while (enumerator_10688.hasCurrentObject ()) {
    extensionMethod_enterInContext (enumerator_10688.current (HERE), object->mProperty_mStructureName, ioArgument_ioContext, ioArgument_ioStaticEntityMap, var_propertyList_10453, var_propertyMap_10485, var_sortedOperandIRList_10533, var_constructorSignature_10583, var_constructorKey_10613, var_canBeCopied_10637, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 281)) ;
    enumerator_10688.gotoNextObject () ;
  }
  var_constructorKey_10613.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 293)) ;
  GALGAS_constructorMap var_constructorMap_11078 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-structure-declaration.galgas", 295)) ;
  {
  var_constructorMap_11078.setter_insertKey (GALGAS_lstring::constructor_new (var_constructorKey_10613, object->mProperty_mStructureName.getter_location (HERE)  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 297)), var_constructorSignature_10583, GALGAS_constructorValue::constructor_structure (var_sortedOperandIRList_10533  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 299)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 296)) ;
  }
  GALGAS_PLMTypeAttributes var_typeAttributes_11354 = GALGAS_PLMTypeAttributes::constructor_instanciable (SOURCE_FILE ("type-structure-declaration.galgas", 302)) ;
  const enumGalgasBool test_0 = object->mProperty_mGenerateAssignmentRoutine.boolEnum () ;
  if (kBoolTrue == test_0) {
    var_typeAttributes_11354 = var_typeAttributes_11354.operator_or (GALGAS_PLMTypeAttributes::constructor_generateAssignmentRoutine (SOURCE_FILE ("type-structure-declaration.galgas", 304)) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 304)) ;
  }
  cEnumerator_lstringlist enumerator_11590 (object->mProperty_mAttributeListAST, kENUMERATION_UP) ;
  while (enumerator_11590.hasCurrentObject ()) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_11590.current_mValue (HERE).getter_string (HERE).objectCompare (function_copyableAttribute (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 308)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const enumGalgasBool test_2 = var_typeAttributes_11354.getter_copyable (SOURCE_FILE ("type-structure-declaration.galgas", 309)).boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (enumerator_11590.current_mValue (HERE).getter_location (SOURCE_FILE ("type-structure-declaration.galgas", 310)), GALGAS_string ("duplicated attribute"), fixItArray3  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 310)) ;
      }else if (kBoolFalse == test_2) {
        const enumGalgasBool test_4 = var_canBeCopied_10637.operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 311)).boolEnum () ;
        if (kBoolTrue == test_4) {
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (object->mProperty_mStructureName.getter_location (SOURCE_FILE ("type-structure-declaration.galgas", 312)), GALGAS_string ("this structure cannot be copied, one field is not copyable"), fixItArray5  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 312)) ;
        }else if (kBoolFalse == test_4) {
          var_typeAttributes_11354 = var_typeAttributes_11354.operator_or (GALGAS_PLMTypeAttributes::constructor_copyable (SOURCE_FILE ("type-structure-declaration.galgas", 314)) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 314)) ;
        }
      }
    }else if (kBoolFalse == test_1) {
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (enumerator_11590.current_mValue (HERE).getter_location (SOURCE_FILE ("type-structure-declaration.galgas", 317)), GALGAS_string ("only @copyable attribute is allowed here"), fixItArray6  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 317)) ;
    }
    enumerator_11590.gotoNextObject () ;
  }
  extensionMethod_enterFunctionsInPropertyMap (object->mProperty_mFunctionDeclarationListAST, ioArgument_ioContext, var_propertyMap_10485, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 321)) ;
  cEnumerator_systemRoutineDeclarationListAST enumerator_12285 (object->mProperty_mSystemRoutineListAST, kENUMERATION_UP) ;
  while (enumerator_12285.hasCurrentObject ()) {
    GALGAS_stringset var_attributeSet_12334 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-structure-declaration.galgas", 325)) ;
    cEnumerator_lstringlist enumerator_12382 (enumerator_12285.current (HERE).getter_mAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_12382.hasCurrentObject ()) {
      var_attributeSet_12334.addAssign_operation (enumerator_12382.current (HERE).getter_mValue (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 327)) ;
      enumerator_12382.gotoNextObject () ;
    }
    GALGAS_bool var_exportedRoutine_12464 = var_attributeSet_12334.getter_hasKey (function_exportedAttribute (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 329)) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 329)) ;
    GALGAS_bool var_canMutateProperties_12538 = var_attributeSet_12334.getter_hasKey (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 330)) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 330)) ;
    GALGAS_lstring var_routineMangledName_12639 = function_routineMangledNameFromAST (GALGAS_string::makeEmptyString (), enumerator_12285.current (HERE).getter_mName (HERE), enumerator_12285.current (HERE).getter_mFormalArgumentList (HERE), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 332)) ;
    GALGAS_routineTypedSignature var_signature_12860 ;
    {
    routine_routineSignature (ioArgument_ioContext.mProperty_mTypeMap, enumerator_12285.current (HERE).getter_mFormalArgumentList (HERE), var_signature_12860, inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 338)) ;
    }
    GALGAS_unifiedTypeMap_2D_proxy var_returnTypeProxy_12991 ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeOptionalProxy (ioArgument_ioContext.mProperty_mTypeMap, enumerator_12285.current (HERE).getter_mReturnTypeName (HERE), var_returnTypeProxy_12991 COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 340)) ;
    }
    GALGAS_bool var_mutating_13027 = GALGAS_bool (false) ;
    GALGAS_bool var_safe_13048 = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_13101 (enumerator_12285.current (HERE).getter_mAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_13101.hasCurrentObject ()) {
      const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, enumerator_13101.current_mValue (HERE).getter_string (HERE).objectCompare (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 345)))).boolEnum () ;
      if (kBoolTrue == test_7) {
        var_mutating_13027 = GALGAS_bool (true) ;
      }else if (kBoolFalse == test_7) {
        const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, enumerator_13101.current_mValue (HERE).getter_string (HERE).objectCompare (function_safeAttribute (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 347)))).boolEnum () ;
        if (kBoolTrue == test_8) {
          var_safe_13048 = GALGAS_bool (true) ;
        }
      }
      enumerator_13101.gotoNextObject () ;
    }
    GALGAS_routineDescriptor var_descriptor_13328 = GALGAS_routineDescriptor::constructor_new (enumerator_12285.current (HERE).getter_mPublic (HERE), var_exportedRoutine_12464, enumerator_12285.current (HERE).getter_mName (HERE).getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 355)), enumerator_12285.current (HERE).getter_mRoutineKind (HERE), var_signature_12860, var_returnTypeProxy_12991, GALGAS_bool (true), var_canMutateProperties_12538, var_safe_13048  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 352)) ;
    {
    var_propertyMap_10485.setter_insertKey (var_routineMangledName_12639, enumerator_12285.current (HERE).getter_mPublic (HERE), GALGAS_propertyAccessKind::constructor_nonVirtualMethod (var_descriptor_13328  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 364)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 364)) ;
    }
    enumerator_12285.gotoNextObject () ;
  }
  GALGAS_guardMapForContext var_guardMap_13895 = GALGAS_guardMapForContext::constructor_emptyMap (SOURCE_FILE ("type-structure-declaration.galgas", 367)) ;
  cEnumerator_guardDeclarationListAST enumerator_13929 (object->mProperty_mGuardListAST, kENUMERATION_UP) ;
  while (enumerator_13929.hasCurrentObject ()) {
    GALGAS_lstring var_guardMangledName_13983 = function_routineMangledNameFromAST (GALGAS_string::makeEmptyString (), enumerator_13929.current (HERE).getter_mGuardName (HERE), enumerator_13929.current (HERE).getter_mGuardFormalArgumentList (HERE), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 370)) ;
    GALGAS_routineTypedSignature var_signature_14199 ;
    {
    routine_routineSignature (ioArgument_ioContext.mProperty_mTypeMap, enumerator_13929.current (HERE).getter_mGuardFormalArgumentList (HERE), var_signature_14199, inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 376)) ;
    }
    {
    var_guardMap_13895.setter_insertKey (var_guardMangledName_13983, enumerator_13929.current (HERE).getter_mIsPublic (HERE), var_signature_14199, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 378)) ;
    }
    enumerator_13929.gotoNextObject () ;
  }
  GALGAS_PLMType var_structureType_14406 = GALGAS_PLMType::constructor_new (var_propertyMap_10485, GALGAS_classConstantMap::constructor_emptyMap (SOURCE_FILE ("type-structure-declaration.galgas", 387)), var_constructorMap_11078, var_guardMap_13895, var_typeAttributes_11354, object->mProperty_mStructureName.getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 391)), GALGAS_typeKind::constructor_structure (var_propertyList_10453  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 392)), object->mProperty_mStructureName.getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 393))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 385)) ;
  {
  ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (object->mProperty_mStructureName, var_structureType_14406, ioArgument_ioContext.getter_mTypeMap (HERE).getter_count (SOURCE_FILE ("type-structure-declaration.galgas", 398)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 395)) ;
  }
  ioArgument_ioDecoratedDeclarationList.addAssign_operation (GALGAS_decoratedStructureDeclaration::constructor_new (object->mProperty_mStructureName, object->mProperty_mFunctionDeclarationListAST, object->mProperty_mSystemRoutineListAST, object->mProperty_mGuardListAST, object->mProperty_mMayImplementDeinit  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 401))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 401)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_structureDeclarationAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_structureDeclarationAST.mSlotID,
                                       extensionMethod_structureDeclarationAST_enterInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_structureDeclarationAST_enterInContext (defineExtensionMethod_structureDeclarationAST_enterInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@decoratedStructureDeclaration semanticAnalysis'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_decoratedStructureDeclaration_semanticAnalysis (const cPtr_abstractDecoratedDeclaration * inObject,
                                                                            const GALGAS_semanticContext constinArgument_inContext,
                                                                            GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                            GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_decoratedStructureDeclaration * object = (const cPtr_decoratedStructureDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_decoratedStructureDeclaration) ;
  GALGAS_PLMType var_structureType_19088 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), object->mProperty_mStructureName, inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 511)).getter_type (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 511)) ;
  const GALGAS_decoratedStructureDeclaration temp_0 = object ;
  callExtensionMethod_functionSemanticAnalysis ((const cPtr_decoratedStructureDeclaration *) temp_0.ptr (), var_structureType_19088, constinArgument_inContext, ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 513)) ;
  extensionMethod_systemRoutineSemanticAnalysis (object->mProperty_mSystemRoutineListAST, var_structureType_19088, constinArgument_inContext, ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 520)) ;
  extensionMethod_guardSemanticAnalysis (object->mProperty_mGuardListAST, var_structureType_19088, constinArgument_inContext, ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 527)) ;
  GALGAS_bool test_1 = object->mProperty_mMayImplementDeinit ;
  if (kBoolTrue == test_1.boolEnum ()) {
    test_1 = extensionGetter_deinitNeeded (var_structureType_19088, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 534)) ;
  }
  const enumGalgasBool test_2 = test_1.boolEnum () ;
  if (kBoolTrue == test_2) {
    ioArgument_ioIntermediateCodeStruct.mProperty_mGenerationListIR.addAssign_operation (GALGAS_structureIR::constructor_new (var_structureType_19088, constinArgument_inContext.getter_mTargetParameters (HERE).getter_mPointerSize (HERE)  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 535))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 535)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_decoratedStructureDeclaration_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_decoratedStructureDeclaration.mSlotID,
                                         extensionMethod_decoratedStructureDeclaration_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_decoratedStructureDeclaration_semanticAnalysis (defineExtensionMethod_decoratedStructureDeclaration_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Overriding extension method '@structureIR generateLLVMcode'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_structureIR_generateLLVMcode (const cPtr_abstractGenerationIR * inObject,
                                                          GALGAS_string & ioArgument_ioLLVMcode,
                                                          GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_structureIR * object = (const cPtr_structureIR *) inObject ;
  macroValidSharedObject (object, cPtr_structureIR) ;
  GALGAS_string var_llvmTypeName_23261 = extensionGetter_llvmTypeName (object->mProperty_mStructureType, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 608)) ;
  GALGAS_string var_deinitName_23310 = GALGAS_string ("@deinit.").add_operation (object->mProperty_mStructureType.getter_plmOriginalTypeName (SOURCE_FILE ("type-structure-declaration.galgas", 609)).getter_assemblerRepresentation (SOURCE_FILE ("type-structure-declaration.galgas", 609)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 609)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (var_deinitName_23310, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 610)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 610)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal void ").add_operation (var_deinitName_23310, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 611)).add_operation (GALGAS_string (" (i"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 611)).add_operation (object->mProperty_mPointerSize.getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 611)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 611)).add_operation (GALGAS_string (" %inPointer) nounwind {\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 611)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 611)) ;
  GALGAS_string var_arg_23551 = GALGAS_string ("ptr") ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (function_llvmNameForLocalVariable (var_arg_23551, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 613)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 613)).add_operation (GALGAS_string (" = inttoptr i"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 613)).add_operation (object->mProperty_mPointerSize.getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 613)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 613)).add_operation (GALGAS_string (" %inPointer to "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 613)).add_operation (var_llvmTypeName_23261, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 613)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 613)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 613)) ;
  extensionMethod_generateRelease (object->mProperty_mStructureType, var_arg_23551, ioArgument_ioLLVMcode, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 614)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 615)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 616)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_structureIR_generateLLVMcode (void) {
  enterExtensionMethod_generateLLVMcode (kTypeDescriptor_GALGAS_structureIR.mSlotID,
                                         extensionMethod_structureIR_generateLLVMcode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_structureIR_generateLLVMcode (defineExtensionMethod_structureIR_generateLLVMcode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding extension method '@syncDeclarationAST addExtension'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_syncDeclarationAST_addExtension (const cPtr_abstractDeclarationAST * inObject,
                                                             GALGAS_extensionDeclarationListAST & /* ioArgument_ioExtensionDeclarationListAST */,
                                                             GALGAS_extendStaticArrayDeclarationAST & /* ioArgument_ioExtendStaticArrayDeclarationAST */,
                                                             GALGAS_abstractDeclarationAST & outArgument_outNewDeclaration,
                                                             C_Compiler * /* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_syncDeclarationAST * object = (const cPtr_syncDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_syncDeclarationAST) ;
  const GALGAS_syncDeclarationAST temp_0 = object ;
  outArgument_outNewDeclaration = temp_0 ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_syncDeclarationAST_addExtension (void) {
  enterExtensionMethod_addExtension (kTypeDescriptor_GALGAS_syncDeclarationAST.mSlotID,
                                     extensionMethod_syncDeclarationAST_addExtension) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_syncDeclarationAST_addExtension (defineExtensionMethod_syncDeclarationAST_addExtension, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@syncDeclarationAST enterInPrecedenceGraph'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_syncDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                       GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_syncDeclarationAST * object = (const cPtr_syncDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_syncDeclarationAST) ;
  GALGAS_lstring var_structureTypeName_3232 = function_llvmTypeNameFromPLMname (object->mProperty_mSyncToolName, inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 72)) ;
  {
  const GALGAS_syncDeclarationAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (var_structureTypeName_3232, temp_0, inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 74)) ;
  }
  cEnumerator_structurePropertyListAST enumerator_3471 (object->mProperty_mStructurePropertyListAST, kENUMERATION_UP) ;
  while (enumerator_3471.hasCurrentObject ()) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, enumerator_3471.current_mPropertyTypeName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_lstring var_typeName_3532 = function_llvmTypeNameFromPLMname (enumerator_3471.current_mPropertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 78)) ;
      {
      ioArgument_ioGraph.setter_addEdge (var_structureTypeName_3232, var_typeName_3532 COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 79)) ;
      }
    }
    const enumGalgasBool test_2 = enumerator_3471.current_mIsPublic (HERE).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (enumerator_3471.current_mPropertyName (HERE).getter_location (SOURCE_FILE ("type-sync-declaration.galgas", 82)), GALGAS_string ("a sync tool property cannot be public (should be private)"), fixItArray3  COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 82)) ;
    }
    switch (enumerator_3471.current_mInitialisation (HERE).enumValue ()) {
    case GALGAS_structurePropertyInitOptionalExpressionAST::kNotBuilt:
      break ;
    case GALGAS_structurePropertyInitOptionalExpressionAST::kEnum_noExpression:
      {
      }
      break ;
    case GALGAS_structurePropertyInitOptionalExpressionAST::kEnum_expression:
      {
        const cEnumAssociatedValues_structurePropertyInitOptionalExpressionAST_expression * extractPtr_3930 = (const cEnumAssociatedValues_structurePropertyInitOptionalExpressionAST_expression *) (enumerator_3471.current_mInitialisation (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_initExpression = extractPtr_3930->mAssociatedValue0 ;
        callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) extractedValue_initExpression.ptr (), var_structureTypeName_3232, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 87)) ;
      }
      break ;
    }
    enumerator_3471.gotoNextObject () ;
  }
  cEnumerator_functionDeclarationListAST enumerator_4013 (object->mProperty_mFunctionDeclarationListAST, kENUMERATION_UP) ;
  while (enumerator_4013.hasCurrentObject ()) {
    cEnumerator_routineFormalArgumentListAST enumerator_4086 (enumerator_4013.current_mFunctionFormalArgumentList (HERE), kENUMERATION_UP) ;
    while (enumerator_4086.hasCurrentObject ()) {
      GALGAS_lstring var_typeName_4108 = function_llvmTypeNameFromPLMname (enumerator_4086.current_mFormalArgumentTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 93)) ;
      {
      ioArgument_ioGraph.setter_noteNode (var_typeName_4108 COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 94)) ;
      }
      enumerator_4086.gotoNextObject () ;
    }
    const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, enumerator_4013.current_mFunctionReturnTypeName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_4) {
      GALGAS_lstring var_typeName_4273 = function_llvmTypeNameFromPLMname (enumerator_4013.current_mFunctionReturnTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 97)) ;
      {
      ioArgument_ioGraph.setter_noteNode (var_typeName_4273 COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 98)) ;
      }
    }
    extensionMethod_noteInstructionListTypesInPrecedenceGraph (enumerator_4013.current_mFunctionInstructionList (HERE), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 100)) ;
    enumerator_4013.gotoNextObject () ;
  }
  extensionMethod_noteTypesInPrecedenceGraph (object->mProperty_mSystemRoutineListAST, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 103)) ;
  extensionMethod_noteTypesInPrecedenceGraph (object->mProperty_mGuardListAST, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 104)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_syncDeclarationAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_syncDeclarationAST.mSlotID,
                                               extensionMethod_syncDeclarationAST_enterInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_syncDeclarationAST_enterInPrecedenceGraph (defineExtensionMethod_syncDeclarationAST_enterInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension getter '@syncDeclarationAST keyRepresentationForErrorSignaling'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_syncDeclarationAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_syncDeclarationAST * object = (const cPtr_syncDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_syncDeclarationAST) ;
  result_outRepresentation = GALGAS_string ("sync $").add_operation (object->mProperty_mSyncToolName.getter_string (SOURCE_FILE ("type-sync-declaration.galgas", 110)), inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 110)) ;
//---
  return result_outRepresentation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_syncDeclarationAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_syncDeclarationAST.mSlotID,
                                                           extensionGetter_syncDeclarationAST_keyRepresentationForErrorSignaling) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_syncDeclarationAST_keyRepresentationForErrorSignaling (defineExtensionGetter_syncDeclarationAST_keyRepresentationForErrorSignaling, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Overriding extension getter '@syncDeclarationAST location'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_location extensionGetter_syncDeclarationAST_location (const cPtr_abstractDeclarationAST * inObject,
                                                                    C_Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_syncDeclarationAST * object = (const cPtr_syncDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_syncDeclarationAST) ;
  result_outLocation = object->mProperty_mSyncToolName.getter_location (HERE) ;
//---
  return result_outLocation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_syncDeclarationAST_location (void) {
  enterExtensionGetter_location (kTypeDescriptor_GALGAS_syncDeclarationAST.mSlotID,
                                 extensionGetter_syncDeclarationAST_location) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_syncDeclarationAST_location (defineExtensionGetter_syncDeclarationAST_location, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding extension method '@syncDeclarationAST enterInContext'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_syncDeclarationAST_enterInContext (const cPtr_abstractDeclarationAST * inObject,
                                                               const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                               GALGAS_semanticContext & ioArgument_ioContext,
                                                               GALGAS_declarationDecorationList & ioArgument_ioDecoratedDeclarationList,
                                                               GALGAS_subprogramInvocationGraph & /* ioArgument_ioSubprogramInvocationGraph */,
                                                               GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                               GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_syncDeclarationAST * object = (const cPtr_syncDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_syncDeclarationAST) ;
  GALGAS_propertyList var_propertyList_6034 = GALGAS_propertyList::constructor_emptyList (SOURCE_FILE ("type-sync-declaration.galgas", 132)) ;
  GALGAS_propertyMap var_propertyMap_6066 = GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-sync-declaration.galgas", 133)) ;
  GALGAS_sortedOperandIRList var_sortedOperandIRList_6114 = GALGAS_sortedOperandIRList::constructor_emptySortedList (SOURCE_FILE ("type-sync-declaration.galgas", 134)) ;
  GALGAS_constructorSignature var_constructorSignature_6164 = GALGAS_constructorSignature::constructor_emptyList (SOURCE_FILE ("type-sync-declaration.galgas", 135)) ;
  GALGAS_string var_constructorKey_6194 = GALGAS_string ("(") ;
  cEnumerator_structurePropertyListAST enumerator_6244 (object->mProperty_mStructurePropertyListAST, kENUMERATION_UP) ;
  while (enumerator_6244.hasCurrentObject ()) {
    GALGAS_bool joker_6495 = GALGAS_bool::constructor_default (SOURCE_FILE ("type-sync-declaration.galgas", 147)) ;
    extensionMethod_enterInContext (enumerator_6244.current (HERE), object->mProperty_mSyncToolName, ioArgument_ioContext, ioArgument_ioStaticEntityMap, var_propertyList_6034, var_propertyMap_6066, var_sortedOperandIRList_6114, var_constructorSignature_6164, var_constructorKey_6194, joker_6495, inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 138)) ;
    enumerator_6244.gotoNextObject () ;
  }
  var_constructorKey_6194.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 150)) ;
  GALGAS_constructorMap var_constructorMap_6623 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-sync-declaration.galgas", 152)) ;
  {
  var_constructorMap_6623.setter_insertKey (GALGAS_lstring::constructor_new (var_constructorKey_6194, object->mProperty_mSyncToolName.getter_location (HERE)  COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 154)), var_constructorSignature_6164, GALGAS_constructorValue::constructor_structure (var_sortedOperandIRList_6114  COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 156)), inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 153)) ;
  }
  extensionMethod_enterFunctionsInPropertyMap (object->mProperty_mFunctionDeclarationListAST, ioArgument_ioContext, var_propertyMap_6066, inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 159)) ;
  cEnumerator_systemRoutineDeclarationListAST enumerator_7083 (object->mProperty_mSystemRoutineListAST, kENUMERATION_UP) ;
  while (enumerator_7083.hasCurrentObject ()) {
    GALGAS_stringset var_attributeSet_7132 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-sync-declaration.galgas", 163)) ;
    cEnumerator_lstringlist enumerator_7180 (enumerator_7083.current (HERE).getter_mAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_7180.hasCurrentObject ()) {
      var_attributeSet_7132.addAssign_operation (enumerator_7180.current (HERE).getter_mValue (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 165)) ;
      enumerator_7180.gotoNextObject () ;
    }
    GALGAS_bool var_exportedRoutine_7262 = var_attributeSet_7132.getter_hasKey (function_exportedAttribute (inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 167)) COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 167)) ;
    GALGAS_bool var_canMutateProperties_7336 = var_attributeSet_7132.getter_hasKey (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 168)) COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 168)) ;
    GALGAS_lstring var_routineMangledName_7437 = function_routineMangledNameFromAST (GALGAS_string::makeEmptyString (), enumerator_7083.current (HERE).getter_mName (HERE), enumerator_7083.current (HERE).getter_mFormalArgumentList (HERE), inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 170)) ;
    GALGAS_routineTypedSignature var_signature_7658 ;
    {
    routine_routineSignature (ioArgument_ioContext.mProperty_mTypeMap, enumerator_7083.current (HERE).getter_mFormalArgumentList (HERE), var_signature_7658, inCompiler  COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 176)) ;
    }
    GALGAS_unifiedTypeMap_2D_proxy var_returnTypeProxy_7789 ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeOptionalProxy (ioArgument_ioContext.mProperty_mTypeMap, enumerator_7083.current (HERE).getter_mReturnTypeName (HERE), var_returnTypeProxy_7789 COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 178)) ;
    }
    GALGAS_bool var_mutating_7825 = GALGAS_bool (false) ;
    GALGAS_bool var_safe_7846 = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_7899 (enumerator_7083.current (HERE).getter_mAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_7899.hasCurrentObject ()) {
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_7899.current_mValue (HERE).getter_string (HERE).objectCompare (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 183)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        var_mutating_7825 = GALGAS_bool (true) ;
      }else if (kBoolFalse == test_0) {
        const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_7899.current_mValue (HERE).getter_string (HERE).objectCompare (function_safeAttribute (inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 185)))).boolEnum () ;
        if (kBoolTrue == test_1) {
          var_safe_7846 = GALGAS_bool (true) ;
        }
      }
      enumerator_7899.gotoNextObject () ;
    }
    GALGAS_routineDescriptor var_descriptor_8126 = GALGAS_routineDescriptor::constructor_new (enumerator_7083.current (HERE).getter_mPublic (HERE), var_exportedRoutine_7262, enumerator_7083.current (HERE).getter_mName (HERE).getter_string (SOURCE_FILE ("type-sync-declaration.galgas", 193)), enumerator_7083.current (HERE).getter_mRoutineKind (HERE), var_signature_7658, var_returnTypeProxy_7789, GALGAS_bool (true), var_canMutateProperties_7336, var_safe_7846  COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 190)) ;
    {
    var_propertyMap_6066.setter_insertKey (var_routineMangledName_7437, enumerator_7083.current (HERE).getter_mPublic (HERE), GALGAS_propertyAccessKind::constructor_nonVirtualMethod (var_descriptor_8126  COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 202)), inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 202)) ;
    }
    enumerator_7083.gotoNextObject () ;
  }
  GALGAS_guardMapForContext var_guardMap_8693 = GALGAS_guardMapForContext::constructor_emptyMap (SOURCE_FILE ("type-sync-declaration.galgas", 205)) ;
  cEnumerator_guardDeclarationListAST enumerator_8727 (object->mProperty_mGuardListAST, kENUMERATION_UP) ;
  while (enumerator_8727.hasCurrentObject ()) {
    GALGAS_lstring var_guardMangledName_8781 = function_routineMangledNameFromAST (GALGAS_string::makeEmptyString (), enumerator_8727.current (HERE).getter_mGuardName (HERE), enumerator_8727.current (HERE).getter_mGuardFormalArgumentList (HERE), inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 208)) ;
    GALGAS_routineTypedSignature var_signature_8997 ;
    {
    routine_routineSignature (ioArgument_ioContext.mProperty_mTypeMap, enumerator_8727.current (HERE).getter_mGuardFormalArgumentList (HERE), var_signature_8997, inCompiler  COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 214)) ;
    }
    {
    var_guardMap_8693.setter_insertKey (var_guardMangledName_8781, enumerator_8727.current (HERE).getter_mIsPublic (HERE), var_signature_8997, inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 216)) ;
    }
    enumerator_8727.gotoNextObject () ;
  }
  GALGAS_PLMType var_structureType_9204 = GALGAS_PLMType::constructor_new (var_propertyMap_6066, GALGAS_classConstantMap::constructor_emptyMap (SOURCE_FILE ("type-sync-declaration.galgas", 225)), var_constructorMap_6623, var_guardMap_8693, GALGAS_PLMTypeAttributes::constructor_instanciable (SOURCE_FILE ("type-sync-declaration.galgas", 228)), object->mProperty_mSyncToolName.getter_string (SOURCE_FILE ("type-sync-declaration.galgas", 229)), GALGAS_typeKind::constructor_syncTool (var_propertyList_6034  COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 230)), object->mProperty_mSyncToolName.getter_string (SOURCE_FILE ("type-sync-declaration.galgas", 231))  COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 223)) ;
  {
  ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (object->mProperty_mSyncToolName, var_structureType_9204, ioArgument_ioContext.getter_mTypeMap (HERE).getter_count (SOURCE_FILE ("type-sync-declaration.galgas", 236)), inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 233)) ;
  }
  ioArgument_ioDecoratedDeclarationList.addAssign_operation (GALGAS_decoratedStructureDeclaration::constructor_new (object->mProperty_mSyncToolName, object->mProperty_mFunctionDeclarationListAST, object->mProperty_mSystemRoutineListAST, object->mProperty_mGuardListAST, GALGAS_bool (false)  COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 239))  COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 239)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_syncDeclarationAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_syncDeclarationAST.mSlotID,
                                       extensionMethod_syncDeclarationAST_enterInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_syncDeclarationAST_enterInContext (defineExtensionMethod_syncDeclarationAST_enterInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Overriding extension getter '@integerDeclarationAST location'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_location extensionGetter_integerDeclarationAST_location (const cPtr_abstractDeclarationAST * /* inObject */,
                                                                       C_Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  result_outLocation = GALGAS_location::constructor_nowhere (SOURCE_FILE ("type-integer.galgas", 13)) ;
//---
  return result_outLocation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_integerDeclarationAST_location (void) {
  enterExtensionGetter_location (kTypeDescriptor_GALGAS_integerDeclarationAST.mSlotID,
                                 extensionGetter_integerDeclarationAST_location) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_integerDeclarationAST_location (defineExtensionGetter_integerDeclarationAST_location, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding extension method '@integerDeclarationAST addExtension'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_integerDeclarationAST_addExtension (const cPtr_abstractDeclarationAST * inObject,
                                                                GALGAS_extensionDeclarationListAST & /* ioArgument_ioExtensionDeclarationListAST */,
                                                                GALGAS_extendStaticArrayDeclarationAST & /* ioArgument_ioExtendStaticArrayDeclarationAST */,
                                                                GALGAS_abstractDeclarationAST & outArgument_outNewDeclaration,
                                                                C_Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_integerDeclarationAST * object = (const cPtr_integerDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_integerDeclarationAST) ;
  const GALGAS_integerDeclarationAST temp_0 = object ;
  outArgument_outNewDeclaration = temp_0 ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_integerDeclarationAST_addExtension (void) {
  enterExtensionMethod_addExtension (kTypeDescriptor_GALGAS_integerDeclarationAST.mSlotID,
                                     extensionMethod_integerDeclarationAST_addExtension) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_integerDeclarationAST_addExtension (defineExtensionMethod_integerDeclarationAST_addExtension, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@integerDeclarationAST enterInPrecedenceGraph'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_integerDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                          GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_integerDeclarationAST * object = (const cPtr_integerDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_integerDeclarationAST) ;
  const GALGAS_integerDeclarationAST temp_0 = object ;
  GALGAS_lstring var_integerTypeName_2056 = function_llvmTypeNameFromPLMname (callExtensionGetter_typeName ((const cPtr_integerDeclarationAST *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 41)).getter_nowhere (SOURCE_FILE ("type-integer.galgas", 41)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 41)) ;
  {
  const GALGAS_integerDeclarationAST temp_1 = object ;
  ioArgument_ioGraph.setter_addNode (var_integerTypeName_2056, temp_1, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 42)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_integerTypeName_2056, function_llvmTypeNameFromPLMname (function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 43)).getter_nowhere (SOURCE_FILE ("type-integer.galgas", 43)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 43)) COMMA_SOURCE_FILE ("type-integer.galgas", 43)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_integerDeclarationAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_integerDeclarationAST.mSlotID,
                                               extensionMethod_integerDeclarationAST_enterInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_integerDeclarationAST_enterInPrecedenceGraph (defineExtensionMethod_integerDeclarationAST_enterInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension getter '@integerDeclarationAST keyRepresentationForErrorSignaling'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_integerDeclarationAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_integerDeclarationAST * object = (const cPtr_integerDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_integerDeclarationAST) ;
  const GALGAS_integerDeclarationAST temp_0 = object ;
  result_outRepresentation = GALGAS_string ("integer ").add_operation (function_llvmTypeNameFromPLMname (callExtensionGetter_typeName ((const cPtr_integerDeclarationAST *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 49)).getter_nowhere (SOURCE_FILE ("type-integer.galgas", 49)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 49)).getter_string (SOURCE_FILE ("type-integer.galgas", 49)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 49)) ;
//---
  return result_outRepresentation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_integerDeclarationAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_integerDeclarationAST.mSlotID,
                                                           extensionGetter_integerDeclarationAST_keyRepresentationForErrorSignaling) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_integerDeclarationAST_keyRepresentationForErrorSignaling (defineExtensionGetter_integerDeclarationAST_keyRepresentationForErrorSignaling, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Function 'minValueForInteger'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint function_minValueForInteger (const GALGAS_bool & constinArgument_inIsUnsigned,
                                           const GALGAS_uint & constinArgument_inBitCount,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  const enumGalgasBool test_0 = constinArgument_inIsUnsigned.boolEnum () ;
  if (kBoolTrue == test_0) {
    result_result = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 58)) ;
  }else if (kBoolFalse == test_0) {
    result_result = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 60)).left_shift_operation (constinArgument_inBitCount.substract_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 60)) COMMA_SOURCE_FILE ("type-integer.galgas", 60)).operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 60)) ;
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_minValueForInteger [3] = {
  & kTypeDescriptor_GALGAS_bool,
  & kTypeDescriptor_GALGAS_uint,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_minValueForInteger (C_Compiler * inCompiler,
                                                                   const cObjectArray & inEffectiveParameterArray,
                                                                   const GALGAS_location & /* inErrorLocation */
                                                                   COMMA_LOCATION_ARGS) {
  const GALGAS_bool operand0 = GALGAS_bool::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  const GALGAS_uint operand1 = GALGAS_uint::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  return function_minValueForInteger (operand0,
                                      operand1,
                                      inCompiler
                                      COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_minValueForInteger ("minValueForInteger",
                                                                    functionWithGenericHeader_minValueForInteger,
                                                                    & kTypeDescriptor_GALGAS_bigint,
                                                                    2,
                                                                    functionArgs_minValueForInteger) ;

