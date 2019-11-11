#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

#include "all-declarations-10.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterGroupArrayList_2D_element::GALGAS_controlRegisterGroupArrayList_2D_element (void) :
mProperty_mGroupName (),
mProperty_mBaseAddresses () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterGroupArrayList_2D_element::~ GALGAS_controlRegisterGroupArrayList_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterGroupArrayList_2D_element::GALGAS_controlRegisterGroupArrayList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                  const GALGAS_lbigintlist & inOperand1) :
mProperty_mGroupName (inOperand0),
mProperty_mBaseAddresses (inOperand1) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterGroupArrayList_2D_element GALGAS_controlRegisterGroupArrayList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_controlRegisterGroupArrayList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                          GALGAS_lbigintlist::constructor_emptyList (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterGroupArrayList_2D_element GALGAS_controlRegisterGroupArrayList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                  const GALGAS_lbigintlist & inOperand1 
                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_controlRegisterGroupArrayList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_controlRegisterGroupArrayList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_controlRegisterGroupArrayList_2D_element::objectCompare (const GALGAS_controlRegisterGroupArrayList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mGroupName.objectCompare (inOperand.mProperty_mGroupName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBaseAddresses.objectCompare (inOperand.mProperty_mBaseAddresses) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_controlRegisterGroupArrayList_2D_element::isValid (void) const {
  return mProperty_mGroupName.isValid () && mProperty_mBaseAddresses.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controlRegisterGroupArrayList_2D_element::drop (void) {
  mProperty_mGroupName.drop () ;
  mProperty_mBaseAddresses.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controlRegisterGroupArrayList_2D_element::description (C_String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString << "<struct @controlRegisterGroupArrayList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mGroupName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBaseAddresses.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_controlRegisterGroupArrayList_2D_element::getter_mGroupName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGroupName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lbigintlist GALGAS_controlRegisterGroupArrayList_2D_element::getter_mBaseAddresses (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBaseAddresses ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     @controlRegisterGroupArrayList-element type                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_controlRegisterGroupArrayList_2D_element ("controlRegisterGroupArrayList-element",
                                                                 NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_controlRegisterGroupArrayList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterGroupArrayList_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_controlRegisterGroupArrayList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_controlRegisterGroupArrayList_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterGroupArrayList_2D_element GALGAS_controlRegisterGroupArrayList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterGroupArrayList_2D_element result ;
  const GALGAS_controlRegisterGroupArrayList_2D_element * p = (const GALGAS_controlRegisterGroupArrayList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_controlRegisterGroupArrayList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterGroupArrayList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineListIR_2D_element::GALGAS_routineListIR_2D_element (void) :
mProperty_mRoutine () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineListIR_2D_element::~ GALGAS_routineListIR_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineListIR_2D_element::GALGAS_routineListIR_2D_element (const GALGAS_abstractRoutineIR & inOperand0) :
mProperty_mRoutine (inOperand0) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineListIR_2D_element GALGAS_routineListIR_2D_element::constructor_new (const GALGAS_abstractRoutineIR & inOperand0 
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_routineListIR_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_routineListIR_2D_element (inOperand0) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_routineListIR_2D_element::objectCompare (const GALGAS_routineListIR_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mRoutine.objectCompare (inOperand.mProperty_mRoutine) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_routineListIR_2D_element::isValid (void) const {
  return mProperty_mRoutine.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_routineListIR_2D_element::drop (void) {
  mProperty_mRoutine.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_routineListIR_2D_element::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "<struct @routineListIR-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mRoutine.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractRoutineIR GALGAS_routineListIR_2D_element::getter_mRoutine (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRoutine ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @routineListIR-element type                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_routineListIR_2D_element ("routineListIR-element",
                                                 NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_routineListIR_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineListIR_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_routineListIR_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_routineListIR_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineListIR_2D_element GALGAS_routineListIR_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_routineListIR_2D_element result ;
  const GALGAS_routineListIR_2D_element * p = (const GALGAS_routineListIR_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_routineListIR_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineListIR-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineAccessibilityIR_2D_element::GALGAS_routineAccessibilityIR_2D_element (void) :
mProperty_mRoutine (),
mProperty_mAccessibleRoutineSet () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineAccessibilityIR_2D_element::~ GALGAS_routineAccessibilityIR_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineAccessibilityIR_2D_element::GALGAS_routineAccessibilityIR_2D_element (const GALGAS_abstractRoutineIR & inOperand0,
                                                                                    const GALGAS_stringset & inOperand1) :
mProperty_mRoutine (inOperand0),
mProperty_mAccessibleRoutineSet (inOperand1) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineAccessibilityIR_2D_element GALGAS_routineAccessibilityIR_2D_element::constructor_new (const GALGAS_abstractRoutineIR & inOperand0,
                                                                                                    const GALGAS_stringset & inOperand1 
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_routineAccessibilityIR_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_routineAccessibilityIR_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_routineAccessibilityIR_2D_element::objectCompare (const GALGAS_routineAccessibilityIR_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mRoutine.objectCompare (inOperand.mProperty_mRoutine) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mAccessibleRoutineSet.objectCompare (inOperand.mProperty_mAccessibleRoutineSet) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_routineAccessibilityIR_2D_element::isValid (void) const {
  return mProperty_mRoutine.isValid () && mProperty_mAccessibleRoutineSet.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_routineAccessibilityIR_2D_element::drop (void) {
  mProperty_mRoutine.drop () ;
  mProperty_mAccessibleRoutineSet.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_routineAccessibilityIR_2D_element::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "<struct @routineAccessibilityIR-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mRoutine.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mAccessibleRoutineSet.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractRoutineIR GALGAS_routineAccessibilityIR_2D_element::getter_mRoutine (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRoutine ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_stringset GALGAS_routineAccessibilityIR_2D_element::getter_mAccessibleRoutineSet (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAccessibleRoutineSet ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        @routineAccessibilityIR-element type                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_routineAccessibilityIR_2D_element ("routineAccessibilityIR-element",
                                                          NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_routineAccessibilityIR_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineAccessibilityIR_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_routineAccessibilityIR_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_routineAccessibilityIR_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineAccessibilityIR_2D_element GALGAS_routineAccessibilityIR_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_routineAccessibilityIR_2D_element result ;
  const GALGAS_routineAccessibilityIR_2D_element * p = (const GALGAS_routineAccessibilityIR_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_routineAccessibilityIR_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineAccessibilityIR-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ctCheckMap_2D_element::GALGAS_ctCheckMap_2D_element (void) :
mProperty_lkey () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ctCheckMap_2D_element::~ GALGAS_ctCheckMap_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ctCheckMap_2D_element::GALGAS_ctCheckMap_2D_element (const GALGAS_lstring & inOperand0) :
mProperty_lkey (inOperand0) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ctCheckMap_2D_element GALGAS_ctCheckMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_ctCheckMap_2D_element (GALGAS_lstring::constructor_default (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ctCheckMap_2D_element GALGAS_ctCheckMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0 
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_ctCheckMap_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_ctCheckMap_2D_element (inOperand0) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_ctCheckMap_2D_element::objectCompare (const GALGAS_ctCheckMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_ctCheckMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_ctCheckMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_ctCheckMap_2D_element::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "<struct @ctCheckMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_ctCheckMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              @ctCheckMap-element type                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ctCheckMap_2D_element ("ctCheckMap-element",
                                              NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_ctCheckMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ctCheckMap_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_ctCheckMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ctCheckMap_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ctCheckMap_2D_element GALGAS_ctCheckMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_ctCheckMap_2D_element result ;
  const GALGAS_ctCheckMap_2D_element * p = (const GALGAS_ctCheckMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_ctCheckMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ctCheckMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ctMap_2D_element::GALGAS_ctMap_2D_element (void) :
mProperty_lkey (),
mProperty_mValue () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ctMap_2D_element::~ GALGAS_ctMap_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ctMap_2D_element::GALGAS_ctMap_2D_element (const GALGAS_lstring & inOperand0,
                                                  const GALGAS_bigint & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mValue (inOperand1) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ctMap_2D_element GALGAS_ctMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_ctMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                  GALGAS_bigint::constructor_zero (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ctMap_2D_element GALGAS_ctMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                  const GALGAS_bigint & inOperand1 
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_ctMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_ctMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_ctMap_2D_element::objectCompare (const GALGAS_ctMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mValue.objectCompare (inOperand.mProperty_mValue) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_ctMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mValue.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_ctMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mValue.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_ctMap_2D_element::description (C_String & ioString,
                                           const int32_t inIndentation) const {
  ioString << "<struct @ctMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mValue.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_ctMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bigint GALGAS_ctMap_2D_element::getter_mValue (UNUSED_LOCATION_ARGS) const {
  return mProperty_mValue ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                 @ctMap-element type                                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ctMap_2D_element ("ctMap-element",
                                         NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_ctMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ctMap_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_ctMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ctMap_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ctMap_2D_element GALGAS_ctMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_ctMap_2D_element result ;
  const GALGAS_ctMap_2D_element * p = (const GALGAS_ctMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_ctMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ctMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_assignmentOperatorMap_2D_element::GALGAS_assignmentOperatorMap_2D_element (void) :
mProperty_lkey (),
mProperty_mOperatorUsage () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_assignmentOperatorMap_2D_element::~ GALGAS_assignmentOperatorMap_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_assignmentOperatorMap_2D_element::GALGAS_assignmentOperatorMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                  const GALGAS_abstractAssignmentOperatorUsage & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mOperatorUsage (inOperand1) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_assignmentOperatorMap_2D_element GALGAS_assignmentOperatorMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                  const GALGAS_abstractAssignmentOperatorUsage & inOperand1 
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_assignmentOperatorMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_assignmentOperatorMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_assignmentOperatorMap_2D_element::objectCompare (const GALGAS_assignmentOperatorMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mOperatorUsage.objectCompare (inOperand.mProperty_mOperatorUsage) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_assignmentOperatorMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mOperatorUsage.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_assignmentOperatorMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mOperatorUsage.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_assignmentOperatorMap_2D_element::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "<struct @assignmentOperatorMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mOperatorUsage.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_assignmentOperatorMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractAssignmentOperatorUsage GALGAS_assignmentOperatorMap_2D_element::getter_mOperatorUsage (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOperatorUsage ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         @assignmentOperatorMap-element type                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_assignmentOperatorMap_2D_element ("assignmentOperatorMap-element",
                                                         NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_assignmentOperatorMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assignmentOperatorMap_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_assignmentOperatorMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_assignmentOperatorMap_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_assignmentOperatorMap_2D_element GALGAS_assignmentOperatorMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_assignmentOperatorMap_2D_element result ;
  const GALGAS_assignmentOperatorMap_2D_element * p = (const GALGAS_assignmentOperatorMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_assignmentOperatorMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("assignmentOperatorMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_assignmentGenerationVarMap_2D_element::GALGAS_assignmentGenerationVarMap_2D_element (void) :
mProperty_lkey (),
mProperty_mValue () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_assignmentGenerationVarMap_2D_element::~ GALGAS_assignmentGenerationVarMap_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_assignmentGenerationVarMap_2D_element::GALGAS_assignmentGenerationVarMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                            const GALGAS_string & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mValue (inOperand1) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_assignmentGenerationVarMap_2D_element GALGAS_assignmentGenerationVarMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_assignmentGenerationVarMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                       GALGAS_string::constructor_default (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_assignmentGenerationVarMap_2D_element GALGAS_assignmentGenerationVarMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                            const GALGAS_string & inOperand1 
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_assignmentGenerationVarMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_assignmentGenerationVarMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_assignmentGenerationVarMap_2D_element::objectCompare (const GALGAS_assignmentGenerationVarMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mValue.objectCompare (inOperand.mProperty_mValue) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_assignmentGenerationVarMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mValue.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_assignmentGenerationVarMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mValue.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_assignmentGenerationVarMap_2D_element::description (C_String & ioString,
                                                                const int32_t inIndentation) const {
  ioString << "<struct @assignmentGenerationVarMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mValue.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_assignmentGenerationVarMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_assignmentGenerationVarMap_2D_element::getter_mValue (UNUSED_LOCATION_ARGS) const {
  return mProperty_mValue ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      @assignmentGenerationVarMap-element type                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_assignmentGenerationVarMap_2D_element ("assignmentGenerationVarMap-element",
                                                              NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_assignmentGenerationVarMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assignmentGenerationVarMap_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_assignmentGenerationVarMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_assignmentGenerationVarMap_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_assignmentGenerationVarMap_2D_element GALGAS_assignmentGenerationVarMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_assignmentGenerationVarMap_2D_element result ;
  const GALGAS_assignmentGenerationVarMap_2D_element * p = (const GALGAS_assignmentGenerationVarMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_assignmentGenerationVarMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("assignmentGenerationVarMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_targetParameters::~ GALGAS_targetParameters (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_targetParameters::isValid (void) const {
  return mProperty_mConfigurationLocation.isValid () && mProperty_mPython_5F_utilityToolList.isValid () && mProperty_mPython_5F_build.isValid () && mProperty_mLinkerScript.isValid () && mProperty_mPointerSize.isValid () && mProperty_mHandleDynamicArray.isValid () && mProperty_mSystemStackSize.isValid () && mProperty_mStackedUserRegisterOnInterruptByteSize.isValid () && mProperty_mNopInstructionStringInLLVM.isValid () && mProperty_mBitbandRegisterBaseAddress.isValid () && mProperty_mBitbandRegisterEndAddress.isValid () && mProperty_mBitbandRegisterRelocationAddress.isValid () && mProperty_mBitbandRegisterOffsetMultiplier.isValid () && mProperty_mBitbandRegisterBitMultiplier.isValid () && mProperty_mSectionHandler.isValid () && mProperty_mSectionPushedRegisterByteSize.isValid () && mProperty_mSectionDispatcherHeader.isValid () && mProperty_mSectionDispatcherEntry.isValid () && mProperty_mSectionDispatcherInvocationFromAnyMode.isValid () && mProperty_mSectionDispatcherInvocationFromUserMode.isValid () && mProperty_m_5F_C_5F_definitionFiles.isValid () && mProperty_m_5F_S_5F_definitionFiles.isValid () && mProperty_m_5F_LL_5F_definitionFiles.isValid () && mProperty_mXtrInterruptHandler.isValid () && mProperty_mUndefinedInterruptHandler.isValid () && mProperty_mServiceHandler.isValid () && mProperty_mServicePushedRegisterByteSize.isValid () && mProperty_mServiceDispatcherEntry.isValid () && mProperty_mServiceDispatcherHeader.isValid () && mProperty_mServiceEntryNoReturnedValue.isValid () && mProperty_mServiceEntryWithReturnValue.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_targetParameters::getter_mConfigurationLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mConfigurationLocation ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS__32_lstringlist GALGAS_targetParameters::getter_mPython_5F_utilityToolList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPython_5F_utilityToolList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_targetParameters::getter_mPython_5F_build (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPython_5F_build ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_targetParameters::getter_mLinkerScript (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLinkerScript ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint GALGAS_targetParameters::getter_mPointerSize (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPointerSize ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_targetParameters::getter_mHandleDynamicArray (UNUSED_LOCATION_ARGS) const {
  return mProperty_mHandleDynamicArray ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lbigint GALGAS_targetParameters::getter_mSystemStackSize (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSystemStackSize ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lbigint GALGAS_targetParameters::getter_mStackedUserRegisterOnInterruptByteSize (UNUSED_LOCATION_ARGS) const {
  return mProperty_mStackedUserRegisterOnInterruptByteSize ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_targetParameters::getter_mNopInstructionStringInLLVM (UNUSED_LOCATION_ARGS) const {
  return mProperty_mNopInstructionStringInLLVM ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lbigint GALGAS_targetParameters::getter_mBitbandRegisterBaseAddress (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBitbandRegisterBaseAddress ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lbigint GALGAS_targetParameters::getter_mBitbandRegisterEndAddress (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBitbandRegisterEndAddress ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lbigint GALGAS_targetParameters::getter_mBitbandRegisterRelocationAddress (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBitbandRegisterRelocationAddress ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lbigint GALGAS_targetParameters::getter_mBitbandRegisterOffsetMultiplier (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBitbandRegisterOffsetMultiplier ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lbigint GALGAS_targetParameters::getter_mBitbandRegisterBitMultiplier (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBitbandRegisterBitMultiplier ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_targetParameters::getter_mSectionHandler (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSectionHandler ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lbigint GALGAS_targetParameters::getter_mSectionPushedRegisterByteSize (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSectionPushedRegisterByteSize ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_targetParameters::getter_mSectionDispatcherHeader (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSectionDispatcherHeader ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_targetParameters::getter_mSectionDispatcherEntry (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSectionDispatcherEntry ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_targetParameters::getter_mSectionDispatcherInvocationFromAnyMode (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSectionDispatcherInvocationFromAnyMode ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_targetParameters::getter_mSectionDispatcherInvocationFromUserMode (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSectionDispatcherInvocationFromUserMode ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist GALGAS_targetParameters::getter_m_5F_C_5F_definitionFiles (UNUSED_LOCATION_ARGS) const {
  return mProperty_m_5F_C_5F_definitionFiles ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist GALGAS_targetParameters::getter_m_5F_S_5F_definitionFiles (UNUSED_LOCATION_ARGS) const {
  return mProperty_m_5F_S_5F_definitionFiles ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist GALGAS_targetParameters::getter_m_5F_LL_5F_definitionFiles (UNUSED_LOCATION_ARGS) const {
  return mProperty_m_5F_LL_5F_definitionFiles ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_targetParameters::getter_mXtrInterruptHandler (UNUSED_LOCATION_ARGS) const {
  return mProperty_mXtrInterruptHandler ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_targetParameters::getter_mUndefinedInterruptHandler (UNUSED_LOCATION_ARGS) const {
  return mProperty_mUndefinedInterruptHandler ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_targetParameters::getter_mServiceHandler (UNUSED_LOCATION_ARGS) const {
  return mProperty_mServiceHandler ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lbigint GALGAS_targetParameters::getter_mServicePushedRegisterByteSize (UNUSED_LOCATION_ARGS) const {
  return mProperty_mServicePushedRegisterByteSize ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_targetParameters::getter_mServiceDispatcherEntry (UNUSED_LOCATION_ARGS) const {
  return mProperty_mServiceDispatcherEntry ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_targetParameters::getter_mServiceDispatcherHeader (UNUSED_LOCATION_ARGS) const {
  return mProperty_mServiceDispatcherHeader ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_targetParameters::getter_mServiceEntryNoReturnedValue (UNUSED_LOCATION_ARGS) const {
  return mProperty_mServiceEntryNoReturnedValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_targetParameters::getter_mServiceEntryWithReturnValue (UNUSED_LOCATION_ARGS) const {
  return mProperty_mServiceEntryWithReturnValue ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                               @targetParameters type                                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_targetParameters ("targetParameters",
                                         NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_targetParameters::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_targetParameters ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_targetParameters::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_targetParameters (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_configurationDeclarationAST::GALGAS_configurationDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_configurationDeclarationAST GALGAS_configurationDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_configurationDeclarationAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                              GALGAS_lstring::constructor_default (HERE),
                                                              GALGAS_targetParameters::constructor_default (HERE),
                                                              GALGAS_interruptionConfigurationList::constructor_emptyList (HERE)
                                                              COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_configurationDeclarationAST::GALGAS_configurationDeclarationAST (const cPtr_configurationDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_configurationDeclarationAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_configurationDeclarationAST::getter_mPanicCodeTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_configurationDeclarationAST * p = (const cPtr_configurationDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_configurationDeclarationAST) ;
    result = p->mProperty_mPanicCodeTypeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_configurationDeclarationAST::getter_mPanicCodeTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPanicCodeTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_configurationDeclarationAST::getter_mPanicLineTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_configurationDeclarationAST * p = (const cPtr_configurationDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_configurationDeclarationAST) ;
    result = p->mProperty_mPanicLineTypeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_configurationDeclarationAST::getter_mPanicLineTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPanicLineTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_targetParameters GALGAS_configurationDeclarationAST::getter_mTargetParameters (UNUSED_LOCATION_ARGS) const {
  GALGAS_targetParameters result ;
  if (NULL != mObjectPtr) {
    const cPtr_configurationDeclarationAST * p = (const cPtr_configurationDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_configurationDeclarationAST) ;
    result = p->mProperty_mTargetParameters ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_targetParameters cPtr_configurationDeclarationAST::getter_mTargetParameters (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTargetParameters ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_interruptionConfigurationList GALGAS_configurationDeclarationAST::getter_mInterruptionConfigurationList (UNUSED_LOCATION_ARGS) const {
  GALGAS_interruptionConfigurationList result ;
  if (NULL != mObjectPtr) {
    const cPtr_configurationDeclarationAST * p = (const cPtr_configurationDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_configurationDeclarationAST) ;
    result = p->mProperty_mInterruptionConfigurationList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_interruptionConfigurationList cPtr_configurationDeclarationAST::getter_mInterruptionConfigurationList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInterruptionConfigurationList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                Pointer class for @configurationDeclarationAST class                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_configurationDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_configurationDeclarationAST (mProperty_mPanicCodeTypeName, mProperty_mPanicLineTypeName, mProperty_mTargetParameters, mProperty_mInterruptionConfigurationList COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          @configurationDeclarationAST type                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_configurationDeclarationAST ("configurationDeclarationAST",
                                                    & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_configurationDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_configurationDeclarationAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_configurationDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_configurationDeclarationAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticContext::GALGAS_semanticContext (void) :
mProperty_mTargetParameters (),
mProperty_mPanicCodeType (),
mProperty_mPanicLineType (),
mProperty_mPanicSetupRoutinePriorityMap (),
mProperty_mPanicLoopRoutinePriorityMap (),
mProperty_mRoutineMap (),
mProperty_mGuardMap (),
mProperty_mControlRegisterGroupMap (),
mProperty_mGlobalConstantMap (),
mProperty_mGlobalSyncInstanceMap (),
mProperty_mStaticListMap (),
mProperty_mRequiredRoutineSet (),
mProperty_mTypeMap (),
mProperty_mAvailableInterruptMap (),
mProperty_mEqualOperatorMap (),
mProperty_mStrictInfOperatorMap (),
mProperty_mInfEqualOperatorMap (),
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
mProperty_mInfixOperatorMap (),
mProperty_mPrefixOperatorMap (),
mProperty_mAssignmentOperatorMap (),
mProperty_mImplicitConversionToBooleanMap (),
mProperty_mTaskMap (),
mProperty_mGlobalTaskVariableList (),
mProperty_mValuedObjectMap () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticContext::~ GALGAS_semanticContext (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticContext::GALGAS_semanticContext (const GALGAS_targetParameters & inOperand0,
                                                const GALGAS_omnibusType & inOperand1,
                                                const GALGAS_omnibusType & inOperand2,
                                                const GALGAS_panicRoutinePriorityMap & inOperand3,
                                                const GALGAS_panicRoutinePriorityMap & inOperand4,
                                                const GALGAS_routineMapForContext & inOperand5,
                                                const GALGAS_guardMapForContext & inOperand6,
                                                const GALGAS_controlRegisterGroupMap & inOperand7,
                                                const GALGAS_globalConstantMap & inOperand8,
                                                const GALGAS_globalSyncInstanceMap & inOperand9,
                                                const GALGAS_staticlistMap & inOperand10,
                                                const GALGAS_stringset & inOperand11,
                                                const GALGAS_unifiedTypeMap & inOperand12,
                                                const GALGAS_availableInterruptMap & inOperand13,
                                                const GALGAS_infixOperatorMap_5F_EX & inOperand14,
                                                const GALGAS_infixOperatorMap_5F_EX & inOperand15,
                                                const GALGAS_infixOperatorMap_5F_EX & inOperand16,
                                                const GALGAS_infixOperatorMap_5F_EX & inOperand17,
                                                const GALGAS_infixOperatorMap_5F_EX & inOperand18,
                                                const GALGAS_infixOperatorMap_5F_EX & inOperand19,
                                                const GALGAS_infixOperatorMap_5F_EX & inOperand20,
                                                const GALGAS_infixOperatorMap_5F_EX & inOperand21,
                                                const GALGAS_infixOperatorMap_5F_EX & inOperand22,
                                                const GALGAS_infixOperatorMap_5F_EX & inOperand23,
                                                const GALGAS_infixOperatorMap_5F_EX & inOperand24,
                                                const GALGAS_infixOperatorMap_5F_EX & inOperand25,
                                                const GALGAS_infixOperatorMap_5F_EX & inOperand26,
                                                const GALGAS_infixOperatorMap_5F_EX & inOperand27,
                                                const GALGAS_infixOperatorMap_5F_EX & inOperand28,
                                                const GALGAS_infixOperatorMap_5F_EX & inOperand29,
                                                const GALGAS_infixOperatorMap_5F_EX & inOperand30,
                                                const GALGAS_infixOperatorMap_5F_EX & inOperand31,
                                                const GALGAS_infixOperatorMap_5F_EX & inOperand32,
                                                const GALGAS_infixOperatorMap & inOperand33,
                                                const GALGAS_prefixOperatorMap & inOperand34,
                                                const GALGAS_assignmentOperatorMap & inOperand35,
                                                const GALGAS_implicitConversionToBooleanMap & inOperand36,
                                                const GALGAS_taskMap & inOperand37,
                                                const GALGAS_globalTaskVariableList & inOperand38,
                                                const GALGAS_universalValuedObjectMap & inOperand39) :
mProperty_mTargetParameters (inOperand0),
mProperty_mPanicCodeType (inOperand1),
mProperty_mPanicLineType (inOperand2),
mProperty_mPanicSetupRoutinePriorityMap (inOperand3),
mProperty_mPanicLoopRoutinePriorityMap (inOperand4),
mProperty_mRoutineMap (inOperand5),
mProperty_mGuardMap (inOperand6),
mProperty_mControlRegisterGroupMap (inOperand7),
mProperty_mGlobalConstantMap (inOperand8),
mProperty_mGlobalSyncInstanceMap (inOperand9),
mProperty_mStaticListMap (inOperand10),
mProperty_mRequiredRoutineSet (inOperand11),
mProperty_mTypeMap (inOperand12),
mProperty_mAvailableInterruptMap (inOperand13),
mProperty_mEqualOperatorMap (inOperand14),
mProperty_mStrictInfOperatorMap (inOperand15),
mProperty_mInfEqualOperatorMap (inOperand16),
mProperty_mAndOperatorMap (inOperand17),
mProperty_mOrOperatorMap (inOperand18),
mProperty_mXorOperatorMap (inOperand19),
mProperty_mBooleanXorOperatorMap (inOperand20),
mProperty_mAddOperatorMap (inOperand21),
mProperty_mAddNoOvfOperatorMap (inOperand22),
mProperty_mSubOperatorMap (inOperand23),
mProperty_mSubNoOvfOperatorMap (inOperand24),
mProperty_mMulOperatorMap (inOperand25),
mProperty_mMulNoOvfOperatorMap (inOperand26),
mProperty_mDivOperatorMap (inOperand27),
mProperty_mDivNoOvfOperatorMap (inOperand28),
mProperty_mModOperatorMap (inOperand29),
mProperty_mModNoOvfOperatorMap (inOperand30),
mProperty_mLeftShiftOperatorMap (inOperand31),
mProperty_mRightShiftOperatorMap (inOperand32),
mProperty_mInfixOperatorMap (inOperand33),
mProperty_mPrefixOperatorMap (inOperand34),
mProperty_mAssignmentOperatorMap (inOperand35),
mProperty_mImplicitConversionToBooleanMap (inOperand36),
mProperty_mTaskMap (inOperand37),
mProperty_mGlobalTaskVariableList (inOperand38),
mProperty_mValuedObjectMap (inOperand39) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticContext GALGAS_semanticContext::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_semanticContext (GALGAS_targetParameters::constructor_default (HERE),
                                 GALGAS_omnibusType::constructor_default (HERE),
                                 GALGAS_omnibusType::constructor_default (HERE),
                                 GALGAS_panicRoutinePriorityMap::constructor_emptyMap (HERE),
                                 GALGAS_panicRoutinePriorityMap::constructor_emptyMap (HERE),
                                 GALGAS_routineMapForContext::constructor_emptyMap (HERE),
                                 GALGAS_guardMapForContext::constructor_emptyMap (HERE),
                                 GALGAS_controlRegisterGroupMap::constructor_emptyMap (HERE),
                                 GALGAS_globalConstantMap::constructor_emptyMap (HERE),
                                 GALGAS_globalSyncInstanceMap::constructor_emptyMap (HERE),
                                 GALGAS_staticlistMap::constructor_emptyMap (HERE),
                                 GALGAS_stringset::constructor_emptySet (HERE),
                                 GALGAS_unifiedTypeMap::constructor_emptyMap (HERE),
                                 GALGAS_availableInterruptMap::constructor_emptyMap (HERE),
                                 GALGAS_infixOperatorMap_5F_EX::constructor_emptyMap (HERE),
                                 GALGAS_infixOperatorMap_5F_EX::constructor_emptyMap (HERE),
                                 GALGAS_infixOperatorMap_5F_EX::constructor_emptyMap (HERE),
                                 GALGAS_infixOperatorMap_5F_EX::constructor_emptyMap (HERE),
                                 GALGAS_infixOperatorMap_5F_EX::constructor_emptyMap (HERE),
                                 GALGAS_infixOperatorMap_5F_EX::constructor_emptyMap (HERE),
                                 GALGAS_infixOperatorMap_5F_EX::constructor_emptyMap (HERE),
                                 GALGAS_infixOperatorMap_5F_EX::constructor_emptyMap (HERE),
                                 GALGAS_infixOperatorMap_5F_EX::constructor_emptyMap (HERE),
                                 GALGAS_infixOperatorMap_5F_EX::constructor_emptyMap (HERE),
                                 GALGAS_infixOperatorMap_5F_EX::constructor_emptyMap (HERE),
                                 GALGAS_infixOperatorMap_5F_EX::constructor_emptyMap (HERE),
                                 GALGAS_infixOperatorMap_5F_EX::constructor_emptyMap (HERE),
                                 GALGAS_infixOperatorMap_5F_EX::constructor_emptyMap (HERE),
                                 GALGAS_infixOperatorMap_5F_EX::constructor_emptyMap (HERE),
                                 GALGAS_infixOperatorMap_5F_EX::constructor_emptyMap (HERE),
                                 GALGAS_infixOperatorMap_5F_EX::constructor_emptyMap (HERE),
                                 GALGAS_infixOperatorMap_5F_EX::constructor_emptyMap (HERE),
                                 GALGAS_infixOperatorMap_5F_EX::constructor_emptyMap (HERE),
                                 GALGAS_infixOperatorMap::constructor_emptyMap (HERE),
                                 GALGAS_prefixOperatorMap::constructor_emptyMap (HERE),
                                 GALGAS_assignmentOperatorMap::constructor_emptyMap (HERE),
                                 GALGAS_implicitConversionToBooleanMap::constructor_emptyMap (HERE),
                                 GALGAS_taskMap::constructor_emptyMap (HERE),
                                 GALGAS_globalTaskVariableList::constructor_emptyList (HERE),
                                 GALGAS_universalValuedObjectMap::constructor_default (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticContext GALGAS_semanticContext::constructor_new (const GALGAS_targetParameters & inOperand0,
                                                                const GALGAS_omnibusType & inOperand1,
                                                                const GALGAS_omnibusType & inOperand2,
                                                                const GALGAS_panicRoutinePriorityMap & inOperand3,
                                                                const GALGAS_panicRoutinePriorityMap & inOperand4,
                                                                const GALGAS_routineMapForContext & inOperand5,
                                                                const GALGAS_guardMapForContext & inOperand6,
                                                                const GALGAS_controlRegisterGroupMap & inOperand7,
                                                                const GALGAS_globalConstantMap & inOperand8,
                                                                const GALGAS_globalSyncInstanceMap & inOperand9,
                                                                const GALGAS_staticlistMap & inOperand10,
                                                                const GALGAS_stringset & inOperand11,
                                                                const GALGAS_unifiedTypeMap & inOperand12,
                                                                const GALGAS_availableInterruptMap & inOperand13,
                                                                const GALGAS_infixOperatorMap_5F_EX & inOperand14,
                                                                const GALGAS_infixOperatorMap_5F_EX & inOperand15,
                                                                const GALGAS_infixOperatorMap_5F_EX & inOperand16,
                                                                const GALGAS_infixOperatorMap_5F_EX & inOperand17,
                                                                const GALGAS_infixOperatorMap_5F_EX & inOperand18,
                                                                const GALGAS_infixOperatorMap_5F_EX & inOperand19,
                                                                const GALGAS_infixOperatorMap_5F_EX & inOperand20,
                                                                const GALGAS_infixOperatorMap_5F_EX & inOperand21,
                                                                const GALGAS_infixOperatorMap_5F_EX & inOperand22,
                                                                const GALGAS_infixOperatorMap_5F_EX & inOperand23,
                                                                const GALGAS_infixOperatorMap_5F_EX & inOperand24,
                                                                const GALGAS_infixOperatorMap_5F_EX & inOperand25,
                                                                const GALGAS_infixOperatorMap_5F_EX & inOperand26,
                                                                const GALGAS_infixOperatorMap_5F_EX & inOperand27,
                                                                const GALGAS_infixOperatorMap_5F_EX & inOperand28,
                                                                const GALGAS_infixOperatorMap_5F_EX & inOperand29,
                                                                const GALGAS_infixOperatorMap_5F_EX & inOperand30,
                                                                const GALGAS_infixOperatorMap_5F_EX & inOperand31,
                                                                const GALGAS_infixOperatorMap_5F_EX & inOperand32,
                                                                const GALGAS_infixOperatorMap & inOperand33,
                                                                const GALGAS_prefixOperatorMap & inOperand34,
                                                                const GALGAS_assignmentOperatorMap & inOperand35,
                                                                const GALGAS_implicitConversionToBooleanMap & inOperand36,
                                                                const GALGAS_taskMap & inOperand37,
                                                                const GALGAS_globalTaskVariableList & inOperand38,
                                                                const GALGAS_universalValuedObjectMap & inOperand39 
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticContext result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid () && inOperand10.isValid () && inOperand11.isValid () && inOperand12.isValid () && inOperand13.isValid () && inOperand14.isValid () && inOperand15.isValid () && inOperand16.isValid () && inOperand17.isValid () && inOperand18.isValid () && inOperand19.isValid () && inOperand20.isValid () && inOperand21.isValid () && inOperand22.isValid () && inOperand23.isValid () && inOperand24.isValid () && inOperand25.isValid () && inOperand26.isValid () && inOperand27.isValid () && inOperand28.isValid () && inOperand29.isValid () && inOperand30.isValid () && inOperand31.isValid () && inOperand32.isValid () && inOperand33.isValid () && inOperand34.isValid () && inOperand35.isValid () && inOperand36.isValid () && inOperand37.isValid () && inOperand38.isValid () && inOperand39.isValid ()) {
    result = GALGAS_semanticContext (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10, inOperand11, inOperand12, inOperand13, inOperand14, inOperand15, inOperand16, inOperand17, inOperand18, inOperand19, inOperand20, inOperand21, inOperand22, inOperand23, inOperand24, inOperand25, inOperand26, inOperand27, inOperand28, inOperand29, inOperand30, inOperand31, inOperand32, inOperand33, inOperand34, inOperand35, inOperand36, inOperand37, inOperand38, inOperand39) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
    result = mProperty_mRoutineMap.objectCompare (inOperand.mProperty_mRoutineMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mGuardMap.objectCompare (inOperand.mProperty_mGuardMap) ;
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
    result = mProperty_mStaticListMap.objectCompare (inOperand.mProperty_mStaticListMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mRequiredRoutineSet.objectCompare (inOperand.mProperty_mRequiredRoutineSet) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mTypeMap.objectCompare (inOperand.mProperty_mTypeMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mAvailableInterruptMap.objectCompare (inOperand.mProperty_mAvailableInterruptMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mEqualOperatorMap.objectCompare (inOperand.mProperty_mEqualOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mStrictInfOperatorMap.objectCompare (inOperand.mProperty_mStrictInfOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mInfEqualOperatorMap.objectCompare (inOperand.mProperty_mInfEqualOperatorMap) ;
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
    result = mProperty_mInfixOperatorMap.objectCompare (inOperand.mProperty_mInfixOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mPrefixOperatorMap.objectCompare (inOperand.mProperty_mPrefixOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mAssignmentOperatorMap.objectCompare (inOperand.mProperty_mAssignmentOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mImplicitConversionToBooleanMap.objectCompare (inOperand.mProperty_mImplicitConversionToBooleanMap) ;
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_semanticContext::isValid (void) const {
  return mProperty_mTargetParameters.isValid () && mProperty_mPanicCodeType.isValid () && mProperty_mPanicLineType.isValid () && mProperty_mPanicSetupRoutinePriorityMap.isValid () && mProperty_mPanicLoopRoutinePriorityMap.isValid () && mProperty_mRoutineMap.isValid () && mProperty_mGuardMap.isValid () && mProperty_mControlRegisterGroupMap.isValid () && mProperty_mGlobalConstantMap.isValid () && mProperty_mGlobalSyncInstanceMap.isValid () && mProperty_mStaticListMap.isValid () && mProperty_mRequiredRoutineSet.isValid () && mProperty_mTypeMap.isValid () && mProperty_mAvailableInterruptMap.isValid () && mProperty_mEqualOperatorMap.isValid () && mProperty_mStrictInfOperatorMap.isValid () && mProperty_mInfEqualOperatorMap.isValid () && mProperty_mAndOperatorMap.isValid () && mProperty_mOrOperatorMap.isValid () && mProperty_mXorOperatorMap.isValid () && mProperty_mBooleanXorOperatorMap.isValid () && mProperty_mAddOperatorMap.isValid () && mProperty_mAddNoOvfOperatorMap.isValid () && mProperty_mSubOperatorMap.isValid () && mProperty_mSubNoOvfOperatorMap.isValid () && mProperty_mMulOperatorMap.isValid () && mProperty_mMulNoOvfOperatorMap.isValid () && mProperty_mDivOperatorMap.isValid () && mProperty_mDivNoOvfOperatorMap.isValid () && mProperty_mModOperatorMap.isValid () && mProperty_mModNoOvfOperatorMap.isValid () && mProperty_mLeftShiftOperatorMap.isValid () && mProperty_mRightShiftOperatorMap.isValid () && mProperty_mInfixOperatorMap.isValid () && mProperty_mPrefixOperatorMap.isValid () && mProperty_mAssignmentOperatorMap.isValid () && mProperty_mImplicitConversionToBooleanMap.isValid () && mProperty_mTaskMap.isValid () && mProperty_mGlobalTaskVariableList.isValid () && mProperty_mValuedObjectMap.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_semanticContext::drop (void) {
  mProperty_mTargetParameters.drop () ;
  mProperty_mPanicCodeType.drop () ;
  mProperty_mPanicLineType.drop () ;
  mProperty_mPanicSetupRoutinePriorityMap.drop () ;
  mProperty_mPanicLoopRoutinePriorityMap.drop () ;
  mProperty_mRoutineMap.drop () ;
  mProperty_mGuardMap.drop () ;
  mProperty_mControlRegisterGroupMap.drop () ;
  mProperty_mGlobalConstantMap.drop () ;
  mProperty_mGlobalSyncInstanceMap.drop () ;
  mProperty_mStaticListMap.drop () ;
  mProperty_mRequiredRoutineSet.drop () ;
  mProperty_mTypeMap.drop () ;
  mProperty_mAvailableInterruptMap.drop () ;
  mProperty_mEqualOperatorMap.drop () ;
  mProperty_mStrictInfOperatorMap.drop () ;
  mProperty_mInfEqualOperatorMap.drop () ;
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
  mProperty_mInfixOperatorMap.drop () ;
  mProperty_mPrefixOperatorMap.drop () ;
  mProperty_mAssignmentOperatorMap.drop () ;
  mProperty_mImplicitConversionToBooleanMap.drop () ;
  mProperty_mTaskMap.drop () ;
  mProperty_mGlobalTaskVariableList.drop () ;
  mProperty_mValuedObjectMap.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
    mProperty_mRoutineMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mGuardMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mControlRegisterGroupMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mGlobalConstantMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mGlobalSyncInstanceMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mStaticListMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mRequiredRoutineSet.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mTypeMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mAvailableInterruptMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mEqualOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mStrictInfOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mInfEqualOperatorMap.description (ioString, inIndentation+1) ;
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
    mProperty_mInfixOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mPrefixOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mAssignmentOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mImplicitConversionToBooleanMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mTaskMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mGlobalTaskVariableList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mValuedObjectMap.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_targetParameters GALGAS_semanticContext::getter_mTargetParameters (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTargetParameters ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_omnibusType GALGAS_semanticContext::getter_mPanicCodeType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPanicCodeType ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_omnibusType GALGAS_semanticContext::getter_mPanicLineType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPanicLineType ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_panicRoutinePriorityMap GALGAS_semanticContext::getter_mPanicSetupRoutinePriorityMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPanicSetupRoutinePriorityMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_panicRoutinePriorityMap GALGAS_semanticContext::getter_mPanicLoopRoutinePriorityMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPanicLoopRoutinePriorityMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineMapForContext GALGAS_semanticContext::getter_mRoutineMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRoutineMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_guardMapForContext GALGAS_semanticContext::getter_mGuardMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGuardMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterGroupMap GALGAS_semanticContext::getter_mControlRegisterGroupMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mControlRegisterGroupMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_globalConstantMap GALGAS_semanticContext::getter_mGlobalConstantMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGlobalConstantMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_globalSyncInstanceMap GALGAS_semanticContext::getter_mGlobalSyncInstanceMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGlobalSyncInstanceMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_staticlistMap GALGAS_semanticContext::getter_mStaticListMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mStaticListMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_stringset GALGAS_semanticContext::getter_mRequiredRoutineSet (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRequiredRoutineSet ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedTypeMap GALGAS_semanticContext::getter_mTypeMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTypeMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_availableInterruptMap GALGAS_semanticContext::getter_mAvailableInterruptMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAvailableInterruptMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_infixOperatorMap_5F_EX GALGAS_semanticContext::getter_mEqualOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEqualOperatorMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_infixOperatorMap_5F_EX GALGAS_semanticContext::getter_mStrictInfOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mStrictInfOperatorMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_infixOperatorMap_5F_EX GALGAS_semanticContext::getter_mInfEqualOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInfEqualOperatorMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_infixOperatorMap_5F_EX GALGAS_semanticContext::getter_mAndOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAndOperatorMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_infixOperatorMap_5F_EX GALGAS_semanticContext::getter_mOrOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOrOperatorMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_infixOperatorMap_5F_EX GALGAS_semanticContext::getter_mXorOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mXorOperatorMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_infixOperatorMap_5F_EX GALGAS_semanticContext::getter_mBooleanXorOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBooleanXorOperatorMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_infixOperatorMap_5F_EX GALGAS_semanticContext::getter_mAddOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAddOperatorMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_infixOperatorMap_5F_EX GALGAS_semanticContext::getter_mAddNoOvfOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAddNoOvfOperatorMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_infixOperatorMap_5F_EX GALGAS_semanticContext::getter_mSubOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSubOperatorMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_infixOperatorMap_5F_EX GALGAS_semanticContext::getter_mSubNoOvfOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSubNoOvfOperatorMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_infixOperatorMap_5F_EX GALGAS_semanticContext::getter_mMulOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mMulOperatorMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_infixOperatorMap_5F_EX GALGAS_semanticContext::getter_mMulNoOvfOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mMulNoOvfOperatorMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_infixOperatorMap_5F_EX GALGAS_semanticContext::getter_mDivOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDivOperatorMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_infixOperatorMap_5F_EX GALGAS_semanticContext::getter_mDivNoOvfOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDivNoOvfOperatorMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_infixOperatorMap_5F_EX GALGAS_semanticContext::getter_mModOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mModOperatorMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_infixOperatorMap_5F_EX GALGAS_semanticContext::getter_mModNoOvfOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mModNoOvfOperatorMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_infixOperatorMap_5F_EX GALGAS_semanticContext::getter_mLeftShiftOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLeftShiftOperatorMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_infixOperatorMap_5F_EX GALGAS_semanticContext::getter_mRightShiftOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRightShiftOperatorMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_infixOperatorMap GALGAS_semanticContext::getter_mInfixOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInfixOperatorMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_prefixOperatorMap GALGAS_semanticContext::getter_mPrefixOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPrefixOperatorMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_assignmentOperatorMap GALGAS_semanticContext::getter_mAssignmentOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAssignmentOperatorMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_implicitConversionToBooleanMap GALGAS_semanticContext::getter_mImplicitConversionToBooleanMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mImplicitConversionToBooleanMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_taskMap GALGAS_semanticContext::getter_mTaskMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTaskMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_globalTaskVariableList GALGAS_semanticContext::getter_mGlobalTaskVariableList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGlobalTaskVariableList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_universalValuedObjectMap GALGAS_semanticContext::getter_mValuedObjectMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mValuedObjectMap ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                @semanticContext type                                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_semanticContext ("semanticContext",
                                        NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_semanticContext::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticContext ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_semanticContext::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_semanticContext (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                   Extension Getter '@semanticContext booleanType'                                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_omnibusType extensionGetter_booleanType (const GALGAS_semanticContext & inObject,
                                                const GALGAS_location & /* constinArgument_inErrorLocation */,
                                                C_Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_omnibusType result_result ; // Returned variable
  inObject.mProperty_mTypeMap.method_searchKey (function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("context.galgas", 146)).getter_nowhere (SOURCE_FILE ("context.galgas", 146)), result_result, inCompiler COMMA_SOURCE_FILE ("context.galgas", 146)) ;
//---
  return result_result ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR * p = (const cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR) ;
  if (kOperandEqual == result) {
    result = mProperty_mRoutineMangledName.objectCompare (p->mProperty_mRoutineMangledName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_isRequired.objectCompare (p->mProperty_isRequired) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_warnsIfUnused.objectCompare (p->mProperty_warnsIfUnused) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mFixedSizeArrayType.objectCompare (p->mProperty_mFixedSizeArrayType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mElementType.objectCompare (p->mProperty_mElementType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mArraySize.objectCompare (p->mProperty_mArraySize) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR::objectCompare (const GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR & inOperand) const {
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR::GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR (void) :
GALGAS_abstractRoutineIR () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR::constructor_default (LOCATION_ARGS) {
  return GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                                                        GALGAS_bool::constructor_default (HERE),
                                                                                        GALGAS_bool::constructor_default (HERE),
                                                                                        GALGAS_omnibusType::constructor_default (HERE),
                                                                                        GALGAS_omnibusType::constructor_default (HERE),
                                                                                        GALGAS_uint::constructor_default (HERE)
                                                                                        COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR::GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR (const cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR * inSourcePtr) :
GALGAS_abstractRoutineIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR::constructor_new (const GALGAS_lstring & inAttribute_mRoutineMangledName,
                                                                                                                                            const GALGAS_bool & inAttribute_isRequired,
                                                                                                                                            const GALGAS_bool & inAttribute_warnsIfUnused,
                                                                                                                                            const GALGAS_omnibusType & inAttribute_mFixedSizeArrayType,
                                                                                                                                            const GALGAS_omnibusType & inAttribute_mElementType,
                                                                                                                                            const GALGAS_uint & inAttribute_mArraySize
                                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR result ;
  if (inAttribute_mRoutineMangledName.isValid () && inAttribute_isRequired.isValid () && inAttribute_warnsIfUnused.isValid () && inAttribute_mFixedSizeArrayType.isValid () && inAttribute_mElementType.isValid () && inAttribute_mArraySize.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR (inAttribute_mRoutineMangledName, inAttribute_isRequired, inAttribute_warnsIfUnused, inAttribute_mFixedSizeArrayType, inAttribute_mElementType, inAttribute_mArraySize COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_omnibusType GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR::getter_mFixedSizeArrayType (UNUSED_LOCATION_ARGS) const {
  GALGAS_omnibusType result ;
  if (NULL != mObjectPtr) {
    const cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR * p = (const cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR) ;
    result = p->mProperty_mFixedSizeArrayType ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_omnibusType cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR::getter_mFixedSizeArrayType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFixedSizeArrayType ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_omnibusType GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR::getter_mElementType (UNUSED_LOCATION_ARGS) const {
  GALGAS_omnibusType result ;
  if (NULL != mObjectPtr) {
    const cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR * p = (const cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR) ;
    result = p->mProperty_mElementType ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_omnibusType cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR::getter_mElementType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mElementType ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR::getter_mArraySize (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR * p = (const cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR) ;
    result = p->mProperty_mArraySize ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR::getter_mArraySize (UNUSED_LOCATION_ARGS) const {
  return mProperty_mArraySize ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                   Pointer class for @assignRepeatedValueToFixedSizeArrayElementsFunctionIR class                    *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR::cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR (const GALGAS_lstring & in_mRoutineMangledName,
                                                                                                                        const GALGAS_bool & in_isRequired,
                                                                                                                        const GALGAS_bool & in_warnsIfUnused,
                                                                                                                        const GALGAS_omnibusType & in_mFixedSizeArrayType,
                                                                                                                        const GALGAS_omnibusType & in_mElementType,
                                                                                                                        const GALGAS_uint & in_mArraySize
                                                                                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused COMMA_THERE),
mProperty_mFixedSizeArrayType (in_mFixedSizeArrayType),
mProperty_mElementType (in_mElementType),
mProperty_mArraySize (in_mArraySize) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR ;
}

void cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR::description (C_String & ioString,
                                                                              const int32_t inIndentation) const {
  ioString << "[@assignRepeatedValueToFixedSizeArrayElementsFunctionIR:" ;
  mProperty_mRoutineMangledName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_isRequired.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_warnsIfUnused.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mFixedSizeArrayType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mElementType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mArraySize.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR (mProperty_mRoutineMangledName, mProperty_isRequired, mProperty_warnsIfUnused, mProperty_mFixedSizeArrayType, mProperty_mElementType, mProperty_mArraySize COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                             @assignRepeatedValueToFixedSizeArrayElementsFunctionIR type                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR ("assignRepeatedValueToFixedSizeArrayElementsFunctionIR",
                                                                              & kTypeDescriptor_GALGAS_abstractRoutineIR) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR::extractObject (const GALGAS_object & inObject,
                                                                                                                                          C_Compiler * inCompiler
                                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR result ;
  const GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR * p = (const GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("assignRepeatedValueToFixedSizeArrayElementsFunctionIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     Extension method '@structurePropertyListAST-element enterPropertyInContext'                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionMethod_enterPropertyInContext (const GALGAS_structurePropertyListAST_2D_element inObject,
                                             GALGAS_semanticContext & ioArgument_ioContext,
                                             GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                             const GALGAS_lstring constinArgument_inReceiverTypeName,
                                             const GALGAS_string constinArgument_inReceiverLLVMBaseTypeName,
                                             GALGAS_decoratedRegularRoutineList & ioArgument_ioDecoratedRoutineList,
                                             GALGAS_propertyList & ioArgument_ioPropertyList,
                                             GALGAS_propertyGetterMap & ioArgument_ioPropertyGetterMap,
                                             GALGAS_propertySetterMap & ioArgument_ioPropertySetterMap,
                                             GALGAS_sortedOperandIRList & ioArgument_sortedOperandIRList,
                                             GALGAS_constructorSignature & ioArgument_constructorSignature,
                                             GALGAS_string & ioArgument_ioConstructorKey,
                                             GALGAS_bool & ioArgument_canBeCopied,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lbigint var_explicitAlignment_11946 = GALGAS_lbigint::constructor_new (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 340)), GALGAS_location::constructor_nowhere (SOURCE_FILE ("type-structure-declaration.galgas", 340))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 340)) ;
  GALGAS_bool var_alignmentDefined_11992 = GALGAS_bool (false) ;
  cEnumerator_propertyAttributeList enumerator_12050 (inObject.mProperty_mPropertyAttributeList, kENUMERATION_UP) ;
  while (enumerator_12050.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsNotEqual, enumerator_12050.current_mAttributeName (HERE).getter_string (HERE).objectCompare (GALGAS_string ("align"))).boolEnum () ;
      if (kBoolTrue == test_0) {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (enumerator_12050.current_mAttributeName (HERE).getter_location (SOURCE_FILE ("type-structure-declaration.galgas", 344)), GALGAS_string ("only the @align attribute is allowed here"), fixItArray1  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 344)) ;
      }
    }
    if (kBoolFalse == test_0) {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = var_alignmentDefined_11992.boolEnum () ;
        if (kBoolTrue == test_2) {
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (enumerator_12050.current_mAttributeName (HERE).getter_location (SOURCE_FILE ("type-structure-declaration.galgas", 346)), GALGAS_string ("@align attribute already defined"), fixItArray3  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 346)) ;
        }
      }
      if (kBoolFalse == test_2) {
        enumGalgasBool test_4 = kBoolTrue ;
        if (kBoolTrue == test_4) {
          test_4 = GALGAS_bool (kIsNotEqual, enumerator_12050.current_mAttributeValue (HERE).getter_bigint (HERE).objectCompare (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 349)).left_shift_operation (enumerator_12050.current_mAttributeValue (HERE).getter_bigint (HERE).substract_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 349)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 349)).getter_bitCountForUnsignedRepresentation (SOURCE_FILE ("type-structure-declaration.galgas", 349)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 349)))).boolEnum () ;
          if (kBoolTrue == test_4) {
            TC_Array <C_FixItDescription> fixItArray5 ;
            inCompiler->emitSemanticError (enumerator_12050.current_mAttributeValue (HERE).getter_location (SOURCE_FILE ("type-structure-declaration.galgas", 350)), GALGAS_string ("alignment should be a power of 2"), fixItArray5  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 350)) ;
          }
        }
        if (kBoolFalse == test_4) {
          var_explicitAlignment_11946 = enumerator_12050.current_mAttributeValue (HERE) ;
          var_alignmentDefined_11992 = GALGAS_bool (true) ;
        }
      }
    }
    enumerator_12050.gotoNextObject () ;
  }
  GALGAS_omnibusType temp_6 ;
  const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, inObject.mProperty_mPropertyTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_7) {
    temp_6 = function_voidType (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 359)) ;
  }else if (kBoolFalse == test_7) {
    temp_6 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), inObject.mProperty_mPropertyTypeName, inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 360)).getter_type (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 360)) ;
  }
  GALGAS_omnibusType var_optionalPropertyType_12618 = temp_6 ;
  switch (inObject.mProperty_mPropertyKind.enumValue ()) {
  case GALGAS_propertyKindAST::kNotBuilt:
    break ;
  case GALGAS_propertyKindAST::kEnum_initializedConstantProperty:
    {
      const cEnumAssociatedValues_propertyKindAST_initializedConstantProperty * extractPtr_13748 = (const cEnumAssociatedValues_propertyKindAST_initializedConstantProperty *) (inObject.mProperty_mPropertyKind.unsafePointer ()) ;
      const GALGAS_expressionAST extractedValue_initExpression = extractPtr_13748->mAssociatedValue0 ;
      GALGAS_objectIR var_expressionIR_13147 ;
      {
      routine_computeStaticExpression (ioArgument_ioContext, ioArgument_ioStaticEntityMap, extractedValue_initExpression, inObject.mProperty_mPropertyName.getter_location (HERE), inObject.mProperty_mPropertyTypeName, var_expressionIR_13147, inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 365)) ;
      }
      GALGAS_omnibusType var_actualPropertyType_13189 ;
      enumGalgasBool test_8 = kBoolTrue ;
      if (kBoolTrue == test_8) {
        test_8 = GALGAS_bool (kIsNotEqual, var_optionalPropertyType_12618.getter_kind (HERE).objectCompare (GALGAS_typeKind::constructor_void (SOURCE_FILE ("type-structure-declaration.galgas", 374)))).boolEnum () ;
        if (kBoolTrue == test_8) {
          var_actualPropertyType_13189 = var_optionalPropertyType_12618 ;
        }
      }
      if (kBoolFalse == test_8) {
        var_actualPropertyType_13189 = extensionGetter_type (var_expressionIR_13147, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 377)) ;
      }
      enumGalgasBool test_9 = kBoolTrue ;
      if (kBoolTrue == test_9) {
        test_9 = callExtensionGetter_instanciable ((const cPtr_omnibusType *) var_actualPropertyType_13189.ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 379)).operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 379)).boolEnum () ;
        if (kBoolTrue == test_9) {
          TC_Array <C_FixItDescription> fixItArray10 ;
          inCompiler->emitSemanticError (inObject.mProperty_mPropertyName.getter_location (SOURCE_FILE ("type-structure-declaration.galgas", 380)), var_actualPropertyType_13189.getter_omnibusTypeDescriptionName (HERE).add_operation (GALGAS_string (" type is not instanciable"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 380)), fixItArray10  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 380)) ;
        }
      }
      enumGalgasBool test_11 = kBoolTrue ;
      if (kBoolTrue == test_11) {
        test_11 = callExtensionGetter_copyable ((const cPtr_omnibusType *) var_actualPropertyType_13189.ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 382)).operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 382)).boolEnum () ;
        if (kBoolTrue == test_11) {
          ioArgument_canBeCopied = GALGAS_bool (false) ;
        }
      }
      {
      ioArgument_ioPropertyGetterMap.setter_insertKey (inObject.mProperty_mPropertyName, inObject.mProperty_mIsPublic, GALGAS_propertyGetterKind::constructor_constantProperty (extensionGetter_withType (var_expressionIR_13147, var_actualPropertyType_13189, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 388))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 388)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 385)) ;
      }
    }
    break ;
  case GALGAS_propertyKindAST::kEnum_initializedStoredProperty:
    {
      const cEnumAssociatedValues_propertyKindAST_initializedStoredProperty * extractPtr_15320 = (const cEnumAssociatedValues_propertyKindAST_initializedStoredProperty *) (inObject.mProperty_mPropertyKind.unsafePointer ()) ;
      const GALGAS_expressionAST extractedValue_initExpression = extractPtr_15320->mAssociatedValue0 ;
      GALGAS_objectIR var_expressionIR_14072 ;
      {
      routine_computeStaticExpression (ioArgument_ioContext, ioArgument_ioStaticEntityMap, extractedValue_initExpression, inObject.mProperty_mPropertyName.getter_location (HERE), inObject.mProperty_mPropertyTypeName, var_expressionIR_14072, inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 391)) ;
      }
      GALGAS_omnibusType var_actualPropertyType_14114 ;
      enumGalgasBool test_12 = kBoolTrue ;
      if (kBoolTrue == test_12) {
        test_12 = GALGAS_bool (kIsNotEqual, var_optionalPropertyType_12618.getter_kind (HERE).objectCompare (GALGAS_typeKind::constructor_void (SOURCE_FILE ("type-structure-declaration.galgas", 400)))).boolEnum () ;
        if (kBoolTrue == test_12) {
          var_actualPropertyType_14114 = var_optionalPropertyType_12618 ;
        }
      }
      if (kBoolFalse == test_12) {
        var_actualPropertyType_14114 = extensionGetter_type (var_expressionIR_14072, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 403)) ;
      }
      enumGalgasBool test_13 = kBoolTrue ;
      if (kBoolTrue == test_13) {
        test_13 = var_actualPropertyType_14114.getter_kind (HERE).getter_isCompileTimeBool (SOURCE_FILE ("type-structure-declaration.galgas", 405)).boolEnum () ;
        if (kBoolTrue == test_13) {
          var_actualPropertyType_14114 = function_boolType (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 406)) ;
        }
      }
      if (kBoolFalse == test_13) {
        enumGalgasBool test_14 = kBoolTrue ;
        if (kBoolTrue == test_14) {
          test_14 = var_actualPropertyType_14114.getter_kind (HERE).getter_isCompileTimeInteger (SOURCE_FILE ("type-structure-declaration.galgas", 407)).boolEnum () ;
          if (kBoolTrue == test_14) {
            TC_Array <C_FixItDescription> fixItArray15 ;
            inCompiler->emitSemanticError (inObject.mProperty_mPropertyName.getter_location (SOURCE_FILE ("type-structure-declaration.galgas", 408)), GALGAS_string ("$").add_operation (var_actualPropertyType_14114.getter_omnibusTypeDescriptionName (HERE), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 409)).add_operation (GALGAS_string (" type is a compile time type, and is not instanciable"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 409)), fixItArray15  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 408)) ;
          }
        }
        if (kBoolFalse == test_14) {
          enumGalgasBool test_16 = kBoolTrue ;
          if (kBoolTrue == test_16) {
            test_16 = callExtensionGetter_instanciable ((const cPtr_omnibusType *) var_actualPropertyType_14114.ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 410)).operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 410)).boolEnum () ;
            if (kBoolTrue == test_16) {
              TC_Array <C_FixItDescription> fixItArray17 ;
              inCompiler->emitSemanticError (inObject.mProperty_mPropertyName.getter_location (SOURCE_FILE ("type-structure-declaration.galgas", 411)), var_actualPropertyType_14114.getter_omnibusTypeDescriptionName (HERE).add_operation (GALGAS_string (" type is not instanciable"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 411)), fixItArray17  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 411)) ;
            }
          }
        }
      }
      enumGalgasBool test_18 = kBoolTrue ;
      if (kBoolTrue == test_18) {
        test_18 = callExtensionGetter_copyable ((const cPtr_omnibusType *) var_actualPropertyType_14114.ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 413)).operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 413)).boolEnum () ;
        if (kBoolTrue == test_18) {
          ioArgument_canBeCopied = GALGAS_bool (false) ;
        }
      }
      GALGAS_uint var_propertyIndex_14841 = ioArgument_ioPropertyList.getter_length (SOURCE_FILE ("type-structure-declaration.galgas", 416)) ;
      ioArgument_ioPropertyList.addAssign_operation (inObject.mProperty_mPropertyName.getter_string (HERE), var_actualPropertyType_14114  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 417)) ;
      {
      ioArgument_ioPropertyGetterMap.setter_insertKey (inObject.mProperty_mPropertyName, inObject.mProperty_mIsPublic, GALGAS_propertyGetterKind::constructor_storedProperty (var_actualPropertyType_14114, var_propertyIndex_14841  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 421)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 418)) ;
      }
      {
      ioArgument_ioPropertySetterMap.setter_insertKey (inObject.mProperty_mPropertyName, inObject.mProperty_mIsPublic, GALGAS_propertySetterKind::constructor_storedProperty (var_actualPropertyType_14114, var_propertyIndex_14841  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 426)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 423)) ;
      }
      ioArgument_sortedOperandIRList.addAssign_operation (extensionGetter_withType (var_expressionIR_14072, var_actualPropertyType_14114, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 428)), var_propertyIndex_14841  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 428)) ;
    }
    break ;
  case GALGAS_propertyKindAST::kEnum_uninitializedStoredProperty:
    {
      enumGalgasBool test_19 = kBoolTrue ;
      if (kBoolTrue == test_19) {
        test_19 = callExtensionGetter_instanciable ((const cPtr_omnibusType *) var_optionalPropertyType_12618.ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 430)).operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 430)).boolEnum () ;
        if (kBoolTrue == test_19) {
          TC_Array <C_FixItDescription> fixItArray20 ;
          inCompiler->emitSemanticError (inObject.mProperty_mPropertyName.getter_location (SOURCE_FILE ("type-structure-declaration.galgas", 431)), var_optionalPropertyType_12618.getter_omnibusTypeDescriptionName (HERE).add_operation (GALGAS_string (" type is not instanciable"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 431)), fixItArray20  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 431)) ;
        }
      }
      GALGAS_uint var_propertyIndex_15545 = ioArgument_ioPropertyList.getter_length (SOURCE_FILE ("type-structure-declaration.galgas", 433)) ;
      ioArgument_ioPropertyList.addAssign_operation (inObject.mProperty_mPropertyName.getter_string (HERE), var_optionalPropertyType_12618  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 434)) ;
      {
      ioArgument_ioPropertyGetterMap.setter_insertKey (inObject.mProperty_mPropertyName, inObject.mProperty_mIsPublic, GALGAS_propertyGetterKind::constructor_storedProperty (var_optionalPropertyType_12618, var_propertyIndex_15545  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 438)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 435)) ;
      }
      {
      ioArgument_ioPropertySetterMap.setter_insertKey (inObject.mProperty_mPropertyName, inObject.mProperty_mIsPublic, GALGAS_propertySetterKind::constructor_storedProperty (var_optionalPropertyType_12618, var_propertyIndex_15545  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 443)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 440)) ;
      }
      ioArgument_constructorSignature.addAssign_operation (inObject.mProperty_mPropertyName.getter_string (HERE), var_optionalPropertyType_12618, var_propertyIndex_15545  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 445)) ;
      ioArgument_ioConstructorKey.plusAssign_operation(GALGAS_string ("!").add_operation (inObject.mProperty_mPropertyName.getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 446)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 446)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 446)) ;
    }
    break ;
  case GALGAS_propertyKindAST::kEnum_uninitializedConstantProperty:
    {
      enumGalgasBool test_21 = kBoolTrue ;
      if (kBoolTrue == test_21) {
        test_21 = callExtensionGetter_instanciable ((const cPtr_omnibusType *) var_optionalPropertyType_12618.ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 448)).operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 448)).boolEnum () ;
        if (kBoolTrue == test_21) {
          TC_Array <C_FixItDescription> fixItArray22 ;
          inCompiler->emitSemanticError (inObject.mProperty_mPropertyName.getter_location (SOURCE_FILE ("type-structure-declaration.galgas", 449)), var_optionalPropertyType_12618.getter_omnibusTypeDescriptionName (HERE).add_operation (GALGAS_string (" type is not instanciable"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 449)), fixItArray22  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 449)) ;
        }
      }
      GALGAS_uint var_propertyIndex_16301 = ioArgument_ioPropertyList.getter_length (SOURCE_FILE ("type-structure-declaration.galgas", 451)) ;
      ioArgument_ioPropertyList.addAssign_operation (inObject.mProperty_mPropertyName.getter_string (HERE), var_optionalPropertyType_12618  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 452)) ;
      {
      ioArgument_ioPropertyGetterMap.setter_insertKey (inObject.mProperty_mPropertyName, inObject.mProperty_mIsPublic, GALGAS_propertyGetterKind::constructor_storedProperty (var_optionalPropertyType_12618, var_propertyIndex_16301  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 456)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 453)) ;
      }
      ioArgument_constructorSignature.addAssign_operation (inObject.mProperty_mPropertyName.getter_string (HERE), var_optionalPropertyType_12618, var_propertyIndex_16301  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 458)) ;
      ioArgument_ioConstructorKey.plusAssign_operation(GALGAS_string ("!").add_operation (inObject.mProperty_mPropertyName.getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 459)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 459)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 459)) ;
    }
    break ;
  case GALGAS_propertyKindAST::kEnum_readOnlyComputedProperty:
    {
      const cEnumAssociatedValues_propertyKindAST_readOnlyComputedProperty * extractPtr_17885 = (const cEnumAssociatedValues_propertyKindAST_readOnlyComputedProperty *) (inObject.mProperty_mPropertyKind.unsafePointer ()) ;
      const GALGAS_instructionListAST extractedValue_instructionList = extractPtr_17885->mAssociatedValue0 ;
      const GALGAS_location extractedValue_endOfInstructionList = extractPtr_17885->mAssociatedValue1 ;
      enumGalgasBool test_23 = kBoolTrue ;
      if (kBoolTrue == test_23) {
        test_23 = callExtensionGetter_instanciable ((const cPtr_omnibusType *) var_optionalPropertyType_12618.ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 461)).operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 461)).boolEnum () ;
        if (kBoolTrue == test_23) {
          TC_Array <C_FixItDescription> fixItArray24 ;
          inCompiler->emitSemanticError (inObject.mProperty_mPropertyName.getter_location (SOURCE_FILE ("type-structure-declaration.galgas", 462)), var_optionalPropertyType_12618.getter_omnibusTypeDescriptionName (HERE).add_operation (GALGAS_string (" type is not instanciable"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 462)), fixItArray24  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 462)) ;
        }
      }
      GALGAS_string var_llvmRoutineName_16940 = function_getterLLVMName (constinArgument_inReceiverLLVMBaseTypeName, inObject.mProperty_mPropertyName.getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 464)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 464)) ;
      GALGAS_routineLLVMNameDict var_modeDictionary_17025 = extensionGetter_routineLLVMDictionaryForFunction (GALGAS_mode::constructor_anyMode (SOURCE_FILE ("type-structure-declaration.galgas", 465)), var_llvmRoutineName_16940, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 465)) ;
      {
      ioArgument_ioPropertyGetterMap.setter_insertKey (inObject.mProperty_mPropertyName, inObject.mProperty_mIsPublic, GALGAS_propertyGetterKind::constructor_computedProperty (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), inObject.mProperty_mPropertyTypeName, inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 470)), var_modeDictionary_17025  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 469)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 466)) ;
      }
      GALGAS_lstring var_functionLLVMName_17365 = GALGAS_lstring::constructor_new (var_llvmRoutineName_16940, inObject.mProperty_mPropertyName.getter_location (HERE)  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 474)) ;
      ioArgument_ioDecoratedRoutineList.addAssign_operation (constinArgument_inReceiverTypeName, GALGAS_mode::constructor_anyMode (SOURCE_FILE ("type-structure-declaration.galgas", 480)), GALGAS_bool (false), GALGAS_routineKind::constructor_function (SOURCE_FILE ("type-structure-declaration.galgas", 482)), GALGAS_bool (false), GALGAS_bool (false), GALGAS_routineAttributes::constructor_none (SOURCE_FILE ("type-structure-declaration.galgas", 485)), var_functionLLVMName_17365, GALGAS_routineFormalArgumentListAST::constructor_emptyList (SOURCE_FILE ("type-structure-declaration.galgas", 487)), GALGAS_bool (false), extractedValue_instructionList, extractedValue_endOfInstructionList, inObject.mProperty_mPropertyTypeName  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 478)) ;
    }
    break ;
  case GALGAS_propertyKindAST::kEnum_writeComputedProperty:
    {
      const cEnumAssociatedValues_propertyKindAST_writeComputedProperty * extractPtr_19589 = (const cEnumAssociatedValues_propertyKindAST_writeComputedProperty *) (inObject.mProperty_mPropertyKind.unsafePointer ()) ;
      const GALGAS_instructionListAST extractedValue_writeInstructionList = extractPtr_19589->mAssociatedValue0 ;
      const GALGAS_location extractedValue_endOfWriteInstructionList = extractPtr_19589->mAssociatedValue1 ;
      enumGalgasBool test_25 = kBoolTrue ;
      if (kBoolTrue == test_25) {
        test_25 = callExtensionGetter_instanciable ((const cPtr_omnibusType *) var_optionalPropertyType_12618.ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 493)).operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 493)).boolEnum () ;
        if (kBoolTrue == test_25) {
          TC_Array <C_FixItDescription> fixItArray26 ;
          inCompiler->emitSemanticError (inObject.mProperty_mPropertyName.getter_location (SOURCE_FILE ("type-structure-declaration.galgas", 494)), var_optionalPropertyType_12618.getter_omnibusTypeDescriptionName (HERE).add_operation (GALGAS_string (" type is not instanciable"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 494)), fixItArray26  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 494)) ;
        }
      }
      GALGAS_string var_llvmGetterRoutineName_18161 = function_getterLLVMName (constinArgument_inReceiverLLVMBaseTypeName, inObject.mProperty_mPropertyName.getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 496)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 496)) ;
      GALGAS_routineLLVMNameDict var_getterModeDictionary_18252 = extensionGetter_routineLLVMDictionaryForFunction (GALGAS_mode::constructor_anyMode (SOURCE_FILE ("type-structure-declaration.galgas", 497)), var_llvmGetterRoutineName_18161, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 497)) ;
      GALGAS_string var_llvmSetterRoutineName_18356 = function_setterLLVMName (constinArgument_inReceiverLLVMBaseTypeName, inObject.mProperty_mPropertyName.getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 498)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 498)) ;
      GALGAS_routineLLVMNameDict var_setterModeDictionary_18447 = extensionGetter_routineLLVMDictionaryForFunction (GALGAS_mode::constructor_anyMode (SOURCE_FILE ("type-structure-declaration.galgas", 499)), var_llvmSetterRoutineName_18356, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 499)) ;
      {
      ioArgument_ioPropertySetterMap.setter_insertKey (inObject.mProperty_mPropertyName, inObject.mProperty_mIsPublic, GALGAS_propertySetterKind::constructor_computedProperty (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), inObject.mProperty_mPropertyTypeName, inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 504)), var_getterModeDictionary_18252, var_setterModeDictionary_18447  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 503)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 500)) ;
      }
      GALGAS_lstring var_functionLLVMName_18859 = GALGAS_lstring::constructor_new (var_llvmSetterRoutineName_18356, inObject.mProperty_mPropertyName.getter_location (HERE)  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 509)) ;
      GALGAS_routineFormalArgumentListAST temp_27 = GALGAS_routineFormalArgumentListAST::constructor_emptyList (SOURCE_FILE ("type-structure-declaration.galgas", 517)) ;
      temp_27.addAssign_operation (GALGAS_procFormalArgumentPassingMode::constructor_input (SOURCE_FILE ("type-structure-declaration.galgas", 514)), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-structure-declaration.galgas", 515)), inObject.mProperty_mPropertyTypeName, GALGAS_lstring::constructor_new (GALGAS_string ("newValue"), extractedValue_endOfWriteInstructionList  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 517))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 517)) ;
      GALGAS_routineFormalArgumentListAST var_formalArgumentList_18998 = temp_27 ;
      ioArgument_ioDecoratedRoutineList.addAssign_operation (constinArgument_inReceiverTypeName, GALGAS_mode::constructor_anyMode (SOURCE_FILE ("type-structure-declaration.galgas", 521)), GALGAS_bool (false), GALGAS_routineKind::constructor_function (SOURCE_FILE ("type-structure-declaration.galgas", 523)), GALGAS_bool (false), GALGAS_bool (false), GALGAS_routineAttributes::constructor_mutating (SOURCE_FILE ("type-structure-declaration.galgas", 526)), var_functionLLVMName_18859, var_formalArgumentList_18998, GALGAS_bool (false), extractedValue_writeInstructionList, extractedValue_endOfWriteInstructionList, GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-structure-declaration.galgas", 532))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 519)) ;
    }
    break ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//             Extension method '@controlRegisterDeclarationList-element buildControlRegisterMapForGroup'              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionMethod_buildControlRegisterMapForGroup (const GALGAS_controlRegisterDeclarationList_2D_element inObject,
                                                      GALGAS_semanticContext & ioArgument_ioContext,
                                                      GALGAS_controlRegisterMap & ioArgument_ioControlRegisterMap,
                                                      GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_omnibusType var_registerType_19852 ;
  GALGAS_uint var_registerBitCount_19883 ;
  {
  routine_controlRegisterType (inObject.mProperty_mRegisterTypeName, ioArgument_ioContext, var_registerType_19852, var_registerBitCount_19883, inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 492)) ;
  }
  GALGAS_controlRegisterFieldMap var_registerFieldMap_20109 ;
  GALGAS_sliceMap var_registerBitSliceMap_20138 ;
  GALGAS_controlRegisterFieldList var_controlRegisterFieldList_20172 ;
  {
  routine_buildControlRegisterSliceMap (inObject.mProperty_mRegisterBitSliceList, inObject.mProperty_mRegisterBitSliceListLocation, ioArgument_ioContext, var_registerType_19852, var_registerBitCount_19883, var_registerFieldMap_20109, var_registerBitSliceMap_20138, var_controlRegisterFieldList_20172, inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 494)) ;
  }
  cEnumerator_controlRegisterNameListAST enumerator_20242 (inObject.mProperty_mRegisterArrayList, kENUMERATION_UP) ;
  while (enumerator_20242.hasCurrentObject ()) {
    GALGAS_objectIR var_addressOffsetExpressionResult_20590 ;
    {
    routine_computeStaticExpression (ioArgument_ioContext, ioArgument_ioStaticEntityMap, enumerator_20242.current (HERE).getter_mRegisterOffset (HERE), enumerator_20242.current (HERE).getter_mRegisterOffsetLocation (HERE), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-control-register.galgas", 512)), var_addressOffsetExpressionResult_20590, inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 507)) ;
    }
    GALGAS_bigint var_registerAddressOffset_20630 ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = var_addressOffsetExpressionResult_20590.getter_isLiteralInteger (SOURCE_FILE ("declaration-control-register.galgas", 516)).operator_not (SOURCE_FILE ("declaration-control-register.galgas", 516)).boolEnum () ;
      if (kBoolTrue == test_0) {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (enumerator_20242.current (HERE).getter_mRegisterOffsetLocation (HERE), GALGAS_string ("control register address offset is not a static integer expression"), fixItArray1  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 517)) ;
        var_registerAddressOffset_20630.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_0) {
      GALGAS_omnibusType joker_20914_1 ; // Joker input parameter
      var_addressOffsetExpressionResult_20590.method_literalInteger (joker_20914_1, var_registerAddressOffset_20630, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 521)) ;
    }
    GALGAS_bigint var_arraySize_20976 ;
    GALGAS_uint var_elementArraySize_21003 ;
    switch (enumerator_20242.current (HERE).getter_mControlRegisterKind (HERE).enumValue ()) {
    case GALGAS_controlRegisterKind::kNotBuilt:
      break ;
    case GALGAS_controlRegisterKind::kEnum_scalar:
      {
        var_arraySize_20976 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 527)) ;
        var_elementArraySize_21003 = GALGAS_uint ((uint32_t) 0U) ;
      }
      break ;
    case GALGAS_controlRegisterKind::kEnum_registerArray:
      {
        const cEnumAssociatedValues_controlRegisterKind_registerArray * extractPtr_22853 = (const cEnumAssociatedValues_controlRegisterKind_registerArray *) (enumerator_20242.current (HERE).getter_mControlRegisterKind (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_arraySizeExpression = extractPtr_22853->mAssociatedValue0 ;
        const GALGAS_location extractedValue_arraySizeLocation = extractPtr_22853->mAssociatedValue1 ;
        const GALGAS_expressionAST extractedValue_arrayElementSizeExpression = extractPtr_22853->mAssociatedValue2 ;
        const GALGAS_location extractedValue_arrayElementSizeLocation = extractPtr_22853->mAssociatedValue3 ;
        GALGAS_objectIR var_sizeExpressionResult_21635 ;
        {
        routine_computeStaticExpression (ioArgument_ioContext, ioArgument_ioStaticEntityMap, extractedValue_arraySizeExpression, extractedValue_arraySizeLocation, GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-control-register.galgas", 537)), var_sizeExpressionResult_21635, inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 532)) ;
        }
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = var_sizeExpressionResult_21635.getter_isLiteralInteger (SOURCE_FILE ("declaration-control-register.galgas", 540)).operator_not (SOURCE_FILE ("declaration-control-register.galgas", 540)).boolEnum () ;
          if (kBoolTrue == test_2) {
            TC_Array <C_FixItDescription> fixItArray3 ;
            inCompiler->emitSemanticError (extractedValue_arraySizeLocation, GALGAS_string ("control register address is not a static integer expression"), fixItArray3  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 541)) ;
            var_arraySize_20976.drop () ; // Release error dropped variable
          }
        }
        if (kBoolFalse == test_2) {
          GALGAS_omnibusType joker_21867_1 ; // Joker input parameter
          var_sizeExpressionResult_21635.method_literalInteger (joker_21867_1, var_arraySize_20976, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 543)) ;
          enumGalgasBool test_4 = kBoolTrue ;
          if (kBoolTrue == test_4) {
            test_4 = GALGAS_bool (kIsStrictInf, var_arraySize_20976.objectCompare (GALGAS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 544)))).boolEnum () ;
            if (kBoolTrue == test_4) {
              TC_Array <C_FixItDescription> fixItArray5 ;
              inCompiler->emitSemanticError (extractedValue_arraySizeLocation, GALGAS_string ("control register array size should be a static integer expression >= 2, equal to a power of 2"), fixItArray5  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 545)) ;
              var_arraySize_20976.drop () ; // Release error dropped variable
            }
          }
        }
        GALGAS_objectIR var_elementArraySizeExpressionResult_22467 ;
        {
        routine_computeStaticExpression (ioArgument_ioContext, ioArgument_ioStaticEntityMap, extractedValue_arrayElementSizeExpression, extractedValue_arrayElementSizeLocation, GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-control-register.galgas", 556)), var_elementArraySizeExpressionResult_22467, inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 551)) ;
        }
        enumGalgasBool test_6 = kBoolTrue ;
        if (kBoolTrue == test_6) {
          test_6 = var_elementArraySizeExpressionResult_22467.getter_isLiteralInteger (SOURCE_FILE ("declaration-control-register.galgas", 559)).operator_not (SOURCE_FILE ("declaration-control-register.galgas", 559)).boolEnum () ;
          if (kBoolTrue == test_6) {
            TC_Array <C_FixItDescription> fixItArray7 ;
            inCompiler->emitSemanticError (extractedValue_arrayElementSizeLocation, GALGAS_string ("element size is not a static integer expression"), fixItArray7  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 560)) ;
            var_elementArraySize_21003.drop () ; // Release error dropped variable
          }
        }
        if (kBoolFalse == test_6) {
          GALGAS_bigint var_elementArraySizeAsBigInt_22783 ;
          GALGAS_omnibusType joker_22745_1 ; // Joker input parameter
          var_elementArraySizeExpressionResult_22467.method_literalInteger (joker_22745_1, var_elementArraySizeAsBigInt_22783, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 564)) ;
          var_elementArraySize_21003 = var_elementArraySizeAsBigInt_22783.getter_uint (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 565)) ;
        }
      }
      break ;
    }
    {
    ioArgument_ioControlRegisterMap.setter_insertKey (enumerator_20242.current (HERE).getter_mRegisterName (HERE), var_registerType_19852, enumerator_20242.current (HERE).getter_mIsReadOnly (HERE), GALGAS_bool (false), var_registerBitSliceMap_20138, var_registerFieldMap_20109, var_registerAddressOffset_20630, var_controlRegisterFieldList_20172, var_registerBitCount_19883, var_arraySize_20976.getter_uint (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 578)), var_elementArraySize_21003, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 568)) ;
    }
    enumerator_20242.gotoNextObject () ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                          Extension method '@globalSyncInstanceMapIR-element generateLLVM'                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionMethod_generateLLVM (const GALGAS_globalSyncInstanceMapIR_2D_element inObject,
                                   GALGAS_string & ioArgument_ioLLVMcode,
                                   C_Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmNameForGlobalSyncInstance (inObject.mProperty_lkey.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 163)).add_operation (GALGAS_string (" = internal global "), inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 163)), inCompiler  COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 163)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (inObject.mProperty_mInitialValue, inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 164)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 164)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 164)).add_operation (extensionGetter_llvmValue (inObject.mProperty_mInitialValue, inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 164)), inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 164)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 164)), inCompiler  COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 164)) ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                    Extension method '@driverListIR-element generateLLVMDriverVariableDefinition'                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionMethod_generateLLVMDriverVariableDefinition (const GALGAS_driverListIR_2D_element inObject,
                                                           GALGAS_string & ioArgument_ioLLVMcode,
                                                           C_Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmNameForGlobalVariable (inObject.mProperty_mDriverName.getter_string (SOURCE_FILE ("declaration-driver.galgas", 425)), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 425)).add_operation (GALGAS_string (" = internal global "), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 425)), inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 425)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) inObject.mProperty_mType.ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 426)).add_operation (GALGAS_string (" {"), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 426)), inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 426)) ;
  cEnumerator_operandIRList enumerator_17847 (inObject.mProperty_mInitialValueList, kENUMERATION_UP) ;
  while (enumerator_17847.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_17847.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 428)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 428)).add_operation (extensionGetter_llvmValue (enumerator_17847.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 428)), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 428)), inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 428)) ;
    if (enumerator_17847.hasNextObject ()) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 429)) ;
    }
    enumerator_17847.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 431)) ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                         Extension method '@decoratedTaskList-element taskSemanticAnalysis'                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionMethod_taskSemanticAnalysis (const GALGAS_decoratedTaskList_2D_element inObject,
                                           const GALGAS_semanticContext constinArgument_inContext,
                                           const GALGAS_uint constinArgument_inPriority,
                                           GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                           GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_omnibusType var_taskType_16396 ;
  constinArgument_inContext.getter_mTypeMap (HERE).method_searchKey (inObject.mProperty_mTaskName, var_taskType_16396, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 454)) ;
  GALGAS_bigint var_stackSize_16505 = inObject.mProperty_mStackSize.getter_bigint (HERE) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    GALGAS_bool test_1 = GALGAS_bool (kIsStrictInf, var_stackSize_16505.objectCompare (GALGAS_bigint ("64", inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 457)))) ;
    if (kBoolTrue != test_1.boolEnum ()) {
      test_1 = GALGAS_bool (kIsNotEqual, var_stackSize_16505.modulo_operation (GALGAS_bigint ("8", inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 457)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 457)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 457)))) ;
    }
    test_0 = test_1.boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (inObject.mProperty_mStackSize.getter_location (SOURCE_FILE ("task-declaration.galgas", 458)), GALGAS_string ("stack size should be a multiple of 8, and >= 64"), fixItArray2  COMMA_SOURCE_FILE ("task-declaration.galgas", 458)) ;
    }
  }
  GALGAS_stringlist var_setupOrderedList_16815 ;
  {
  routine_analyzeOrderedTaskRoutines (inObject.mProperty_mTaskSetupListAST, var_setupOrderedList_16815, inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 461)) ;
  }
  GALGAS_stringlist var_activateOrderedList_16981 ;
  {
  routine_analyzeOrderedTaskRoutines (inObject.mProperty_mTaskActivateListAST, var_activateOrderedList_16981, inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 466)) ;
  }
  GALGAS_stringlist var_deactivateOrderedList_17153 ;
  {
  routine_analyzeOrderedTaskRoutines (inObject.mProperty_mTaskDeactivateListAST, var_deactivateOrderedList_17153, inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 471)) ;
  }
  GALGAS_uint var_taskNameStringIndex_17346 ;
  {
  extensionSetter_findOrAddStaticString (ioArgument_ioIntermediateCodeStruct.mProperty_mStaticEntityMap, inObject.mProperty_mTaskName.getter_string (HERE), var_taskNameStringIndex_17346, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 476)) ;
  }
  {
  ioArgument_ioIntermediateCodeStruct.mProperty_mTaskMapIR.setter_insertKey (inObject.mProperty_mTaskName, var_taskType_16396, constinArgument_inPriority, inObject.mProperty_mStackSize.getter_bigint (HERE), var_setupOrderedList_16815, var_activateOrderedList_16981, var_deactivateOrderedList_17153, var_taskNameStringIndex_17346, inObject.mProperty_mAutoStart, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 478)) ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                Extension method '@externFunctionDeclarationListAST-element enterExternProcInContext'                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionMethod_enterExternProcInContext (const GALGAS_externFunctionDeclarationListAST_2D_element inObject,
                                               GALGAS_semanticContext & ioArgument_ioContext,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_routineTypedSignature var_signature_3497 ;
  {
  routine_routineTypedSignature (ioArgument_ioContext.mProperty_mTypeMap, inObject.mProperty_mProcFormalArgumentList, var_signature_3497, inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 87)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_returnTypeProxy_3617 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeOptionalProxy (ioArgument_ioContext.mProperty_mTypeMap, inObject.mProperty_mReturnTypeName, var_returnTypeProxy_3617 COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 89)) ;
  }
  GALGAS_routineLLVMNameDict var_routineLLVMNameDict_3687 = extensionGetter_routineLLVMDictionaryForFunction (inObject.mProperty_mMode, inObject.mProperty_mRoutineNameForGeneration.getter_string (SOURCE_FILE ("declaration-extern-proc.galgas", 91)), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 91)) ;
  GALGAS_lstring var_routineMangledName_3782 = extensionGetter_mangledName (var_signature_3497, GALGAS_string::makeEmptyString (), inObject.mProperty_mExternProcedureName, inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 92)) ;
  {
  ioArgument_ioContext.mProperty_mRoutineMap.setter_insertKey (var_routineMangledName_3782, GALGAS_bool (true), var_signature_3497, var_returnTypeProxy_3617, var_routineLLVMNameDict_3687, GALGAS_bool (false), inObject.mProperty_mMode, inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 93)) ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      Extension method '@externProcedureMapIR-element llvmPrototypeGeneration'                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionMethod_llvmPrototypeGeneration (const GALGAS_externProcedureMapIR_2D_element inObject,
                                              GALGAS_string & ioArgument_ioLLVMcode,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_procName_8423 = function_llvmNameForFunction (inObject.mProperty_lkey.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 214)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("declare"), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 215)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsEqual, inObject.mProperty_mReturnType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-extern-proc.galgas", 216)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" void"), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 217)) ;
    }
  }
  if (kBoolFalse == test_0) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) inObject.mProperty_mReturnType.getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 219)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 219)), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 219)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 219)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" @").add_operation (var_procName_8423, inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 221)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 221)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 221)) ;
  cEnumerator_routineFormalArgumentListIR enumerator_8700 (inObject.mProperty_mFormalArgumentListForGeneration, kENUMERATION_UP) ;
  while (enumerator_8700.hasCurrentObject ()) {
    switch (enumerator_8700.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_8700.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 226)).add_operation (GALGAS_string (" %in."), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 226)).add_operation (enumerator_8700.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 226)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 226)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_8700.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 228)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 228)).add_operation (function_llvmNameForLocalVariable (enumerator_8700.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 228)), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 228)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 228)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_8700.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 230)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 230)).add_operation (function_llvmNameForLocalVariable (enumerator_8700.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 230)), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 230)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 230)) ;
      }
      break ;
    }
    if (enumerator_8700.hasNextObject ()) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 233)) ;
    }
    enumerator_8700.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 235)), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 235)).add_operation (GALGAS_string ("; declared by extern Omnibus function declaration\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 235)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 235)) ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                          Abstract extension method '@callInstructionAST baseGuardAnalyze'                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static TC_UniqueArray <extensionMethodSignature_callInstructionAST_baseGuardAnalyze> gExtensionMethodTable_callInstructionAST_baseGuardAnalyze ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionMethod_baseGuardAnalyze (const int32_t inClassIndex,
                                            extensionMethodSignature_callInstructionAST_baseGuardAnalyze inMethod) {
  gExtensionMethodTable_callInstructionAST_baseGuardAnalyze.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void freeExtensionMethod_callInstructionAST_baseGuardAnalyze (void) {
  gExtensionMethodTable_callInstructionAST_baseGuardAnalyze.free () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_callInstructionAST_baseGuardAnalyze (NULL,
                                                                freeExtensionMethod_callInstructionAST_baseGuardAnalyze) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void callExtensionMethod_baseGuardAnalyze (const cPtr_callInstructionAST * inObject,
                                           const GALGAS_omnibusType constin_inSelfType,
                                           const GALGAS_routineAttributes constin_inRoutineAttributes,
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
      f (inObject, constin_inSelfType, constin_inRoutineAttributes, constin_inContext, constin_inMode, io_ioTemporaries, io_ioStaticEntityMap, io_ioUniversalMap, out_outConvenienceGuardGenerationIR, inCompiler COMMA_THERE) ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      Extension method '@decoratedRegularRoutineList-element semanticAnalysis'                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionMethod_semanticAnalysis (const GALGAS_decoratedRegularRoutineList_2D_element inObject,
                                       const GALGAS_semanticContext constinArgument_inContext,
                                       GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                       GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                       C_Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioTemporaries.mProperty_mTemporaryIndex = GALGAS_uint ((uint32_t) 0U) ;
  GALGAS_omnibusType temp_0 ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, inObject.mProperty_receiverTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = function_voidType (inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 48)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), inObject.mProperty_receiverTypeName, inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 49)).getter_type (inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 49)) ;
  }
  GALGAS_omnibusType var_receiverType_1960 = temp_0 ;
  GALGAS_universalValuedObjectMap var_universalMap_2149 = constinArgument_inContext.getter_mValuedObjectMap (HERE) ;
  {
  extensionSetter_openOverrideForSelectBlock (var_universalMap_2149, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 53)) ;
  }
  {
  extensionSetter_openBranch (var_universalMap_2149, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 54)) ;
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsNotEqual, inObject.mProperty_returnTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_lstring var_resultVarName_2334 = GALGAS_lstring::constructor_new (function_functionResultVariableName (inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 57)), inObject.mProperty_returnTypeName.getter_location (HERE)  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 57)) ;
      GALGAS_omnibusType var_resultType_2426 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), inObject.mProperty_returnTypeName, inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 58)).getter_type (inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 58)) ;
      {
      extensionSetter_insertLocalVariable (var_universalMap_2149, var_resultVarName_2334, var_resultType_2426, var_resultVarName_2334, GALGAS_valuedObjectState::constructor_noValue (SOURCE_FILE ("regular-routine-analysis.galgas", 59)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 59)) ;
      }
    }
  }
  GALGAS_routineFormalArgumentListIR var_formalArguments_2687 = GALGAS_routineFormalArgumentListIR::constructor_emptyList (SOURCE_FILE ("regular-routine-analysis.galgas", 62)) ;
  {
  routine_enterFormalArguments (constinArgument_inContext, inObject.mProperty_formalArgumentList, var_universalMap_2149, var_formalArguments_2687, inObject.mProperty_warningOnUnusedArgs, inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 63)) ;
  }
  GALGAS_allocaList var_allocaList_2910 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("regular-routine-analysis.galgas", 71)) ;
  GALGAS_instructionListIR var_instructionGenerationList_2962 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("regular-routine-analysis.galgas", 72)) ;
  extensionMethod_analyzeRoutineInstructionList (inObject.mProperty_mInstructionList, var_receiverType_1960, inObject.mProperty_routineAttributes, constinArgument_inContext, inObject.mProperty_mode, ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct.mProperty_mStaticEntityMap, var_universalMap_2149, var_allocaList_2910, var_instructionGenerationList_2962, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 73)) ;
  extensionMethod_checkLocalVariableFinalState (var_universalMap_2149, var_instructionGenerationList_2962, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 85)) ;
  {
  extensionSetter_closeBranch (var_universalMap_2149, inObject.mProperty_mEndOfRoutineDeclaration, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 86)) ;
  }
  {
  extensionSetter_closeOverride (var_universalMap_2149, inObject.mProperty_mEndOfRoutineDeclaration, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 87)) ;
  }
  GALGAS_omnibusType temp_3 ;
  const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, inObject.mProperty_returnTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_4) {
    temp_3 = function_voidType (inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 90)) ;
  }else if (kBoolFalse == test_4) {
    temp_3 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), inObject.mProperty_returnTypeName, inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 92)).getter_type (inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 92)) ;
  }
  GALGAS_omnibusType var_returnType_3571 = temp_3 ;
  ioArgument_ioIntermediateCodeStruct.mProperty_mRoutineListIR.addAssign_operation (GALGAS_regularRoutineIR::constructor_new (inObject.mProperty_routineMangledLLVMName, inObject.mProperty_isRequired, inObject.mProperty_warnIfUnused, var_receiverType_1960, var_formalArguments_2687, var_allocaList_2910, var_instructionGenerationList_2962, inObject.mProperty_exportedRoutine, inObject.mProperty_routineKind, var_returnType_3571, GALGAS_bool (false)  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 94))  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 94)) ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_addressofControlRegisterAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_addressofControlRegisterAST * p = (const cPtr_addressofControlRegisterAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_addressofControlRegisterAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mControlRegisterLValue.objectCompare (p->mProperty_mControlRegisterLValue) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_addressofControlRegisterAST::objectCompare (const GALGAS_addressofControlRegisterAST & inOperand) const {
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_addressofControlRegisterAST::GALGAS_addressofControlRegisterAST (void) :
GALGAS_expressionAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_addressofControlRegisterAST::GALGAS_addressofControlRegisterAST (const cPtr_addressofControlRegisterAST * inSourcePtr) :
GALGAS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_addressofControlRegisterAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_addressofControlRegisterAST GALGAS_addressofControlRegisterAST::constructor_new (const GALGAS_controlRegisterLValueAST & inAttribute_mControlRegisterLValue
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_addressofControlRegisterAST result ;
  if (inAttribute_mControlRegisterLValue.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_addressofControlRegisterAST (inAttribute_mControlRegisterLValue COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterLValueAST GALGAS_addressofControlRegisterAST::getter_mControlRegisterLValue (UNUSED_LOCATION_ARGS) const {
  GALGAS_controlRegisterLValueAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_addressofControlRegisterAST * p = (const cPtr_addressofControlRegisterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_addressofControlRegisterAST) ;
    result = p->mProperty_mControlRegisterLValue ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterLValueAST cPtr_addressofControlRegisterAST::getter_mControlRegisterLValue (UNUSED_LOCATION_ARGS) const {
  return mProperty_mControlRegisterLValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                Pointer class for @addressofControlRegisterAST class                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_addressofControlRegisterAST::cPtr_addressofControlRegisterAST (const GALGAS_controlRegisterLValueAST & in_mControlRegisterLValue
                                                                    COMMA_LOCATION_ARGS) :
cPtr_expressionAST (THERE),
mProperty_mControlRegisterLValue (in_mControlRegisterLValue) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_addressofControlRegisterAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_addressofControlRegisterAST ;
}

void cPtr_addressofControlRegisterAST::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "[@addressofControlRegisterAST:" ;
  mProperty_mControlRegisterLValue.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_addressofControlRegisterAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_addressofControlRegisterAST (mProperty_mControlRegisterLValue COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          @addressofControlRegisterAST type                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_addressofControlRegisterAST ("addressofControlRegisterAST",
                                                    & kTypeDescriptor_GALGAS_expressionAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_addressofControlRegisterAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_addressofControlRegisterAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_addressofControlRegisterAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_addressofControlRegisterAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_addressofControlRegisterAST GALGAS_addressofControlRegisterAST::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_addressofControlRegisterAST result ;
  const GALGAS_addressofControlRegisterAST * p = (const GALGAS_addressofControlRegisterAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_addressofControlRegisterAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("addressofControlRegisterAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_addressofExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_addressofExpressionAST * p = (const cPtr_addressofExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_addressofExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mLValue.objectCompare (p->mProperty_mLValue) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_addressofExpressionAST::GALGAS_addressofExpressionAST (void) :
GALGAS_expressionAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_addressofExpressionAST::GALGAS_addressofExpressionAST (const cPtr_addressofExpressionAST * inSourcePtr) :
GALGAS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_addressofExpressionAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_addressofExpressionAST GALGAS_addressofExpressionAST::constructor_new (const GALGAS_LValueAST & inAttribute_mLValue
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_addressofExpressionAST result ;
  if (inAttribute_mLValue.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_addressofExpressionAST (inAttribute_mLValue COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_LValueAST GALGAS_addressofExpressionAST::getter_mLValue (UNUSED_LOCATION_ARGS) const {
  GALGAS_LValueAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_addressofExpressionAST * p = (const cPtr_addressofExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_addressofExpressionAST) ;
    result = p->mProperty_mLValue ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_LValueAST cPtr_addressofExpressionAST::getter_mLValue (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                   Pointer class for @addressofExpressionAST class                                   *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_addressofExpressionAST::cPtr_addressofExpressionAST (const GALGAS_LValueAST & in_mLValue
                                                          COMMA_LOCATION_ARGS) :
cPtr_expressionAST (THERE),
mProperty_mLValue (in_mLValue) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_addressofExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_addressofExpressionAST ;
}

void cPtr_addressofExpressionAST::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "[@addressofExpressionAST:" ;
  mProperty_mLValue.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_addressofExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_addressofExpressionAST (mProperty_mLValue COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            @addressofExpressionAST type                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_addressofExpressionAST ("addressofExpressionAST",
                                               & kTypeDescriptor_GALGAS_expressionAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_addressofExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_addressofExpressionAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_addressofExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_addressofExpressionAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_addressofInstructionIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_addressofInstructionIR * p = (const cPtr_addressofInstructionIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_addressofInstructionIR) ;
  if (kOperandEqual == result) {
    result = mProperty_mTarget.objectCompare (p->mProperty_mTarget) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLValue.objectCompare (p->mProperty_mLValue) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_addressofInstructionIR::objectCompare (const GALGAS_addressofInstructionIR & inOperand) const {
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_addressofInstructionIR::GALGAS_addressofInstructionIR (void) :
GALGAS_abstractInstructionIR () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_addressofInstructionIR::GALGAS_addressofInstructionIR (const cPtr_addressofInstructionIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_addressofInstructionIR) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_addressofInstructionIR GALGAS_addressofInstructionIR::constructor_new (const GALGAS_objectIR & inAttribute_mTarget,
                                                                              const GALGAS_LValueRepresentation & inAttribute_mLValue
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_addressofInstructionIR result ;
  if (inAttribute_mTarget.isValid () && inAttribute_mLValue.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_addressofInstructionIR (inAttribute_mTarget, inAttribute_mLValue COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_objectIR GALGAS_addressofInstructionIR::getter_mTarget (UNUSED_LOCATION_ARGS) const {
  GALGAS_objectIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_addressofInstructionIR * p = (const cPtr_addressofInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_addressofInstructionIR) ;
    result = p->mProperty_mTarget ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_objectIR cPtr_addressofInstructionIR::getter_mTarget (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTarget ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_LValueRepresentation GALGAS_addressofInstructionIR::getter_mLValue (UNUSED_LOCATION_ARGS) const {
  GALGAS_LValueRepresentation result ;
  if (NULL != mObjectPtr) {
    const cPtr_addressofInstructionIR * p = (const cPtr_addressofInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_addressofInstructionIR) ;
    result = p->mProperty_mLValue ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_LValueRepresentation cPtr_addressofInstructionIR::getter_mLValue (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                   Pointer class for @addressofInstructionIR class                                   *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_addressofInstructionIR::cPtr_addressofInstructionIR (const GALGAS_objectIR & in_mTarget,
                                                          const GALGAS_LValueRepresentation & in_mLValue
                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mTarget (in_mTarget),
mProperty_mLValue (in_mLValue) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_addressofInstructionIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_addressofInstructionIR ;
}

void cPtr_addressofInstructionIR::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "[@addressofInstructionIR:" ;
  mProperty_mTarget.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLValue.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_addressofInstructionIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_addressofInstructionIR (mProperty_mTarget, mProperty_mLValue COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            @addressofInstructionIR type                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_addressofInstructionIR ("addressofInstructionIR",
                                               & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_addressofInstructionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_addressofInstructionIR ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_addressofInstructionIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_addressofInstructionIR (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_addressofInstructionIR GALGAS_addressofInstructionIR::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_addressofInstructionIR result ;
  const GALGAS_addressofInstructionIR * p = (const GALGAS_addressofInstructionIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_addressofInstructionIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("addressofInstructionIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_intermediateCodeStruct::GALGAS_intermediateCodeStruct (void) :
mProperty_mStaticEntityMap (),
mProperty_mInterruptMapIR (),
mProperty_mExternProcedureMapIR (),
mProperty_mPanicSetupListIR (),
mProperty_mPanicLoopListIR (),
mProperty_mTaskMapIR (),
mProperty_mGlobalTaskVariableList (),
mProperty_mMaxBranchOfOnInstructions (),
mProperty_mTargetParameters (),
mProperty_mDriverList (),
mProperty_mStaticArrayMapForIntermediate (),
mProperty_mGlobalSyncInstanceMap (),
mProperty_mControlRegisterGroupArrayList (),
mProperty_mRoutineListIR () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_intermediateCodeStruct::~ GALGAS_intermediateCodeStruct (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_intermediateCodeStruct::GALGAS_intermediateCodeStruct (const GALGAS_staticEntityMap & inOperand0,
                                                              const GALGAS_interruptMapIR & inOperand1,
                                                              const GALGAS_externProcedureMapIR & inOperand2,
                                                              const GALGAS_panicSortedListIR & inOperand3,
                                                              const GALGAS_panicSortedListIR & inOperand4,
                                                              const GALGAS_taskMapIR & inOperand5,
                                                              const GALGAS_globalTaskVariableList & inOperand6,
                                                              const GALGAS_uint & inOperand7,
                                                              const GALGAS_targetParameters & inOperand8,
                                                              const GALGAS_driverListIR & inOperand9,
                                                              const GALGAS_staticListInvokedFunctionSetMap & inOperand10,
                                                              const GALGAS_globalSyncInstanceMapIR & inOperand11,
                                                              const GALGAS_controlRegisterGroupArrayList & inOperand12,
                                                              const GALGAS_routineListIR & inOperand13) :
mProperty_mStaticEntityMap (inOperand0),
mProperty_mInterruptMapIR (inOperand1),
mProperty_mExternProcedureMapIR (inOperand2),
mProperty_mPanicSetupListIR (inOperand3),
mProperty_mPanicLoopListIR (inOperand4),
mProperty_mTaskMapIR (inOperand5),
mProperty_mGlobalTaskVariableList (inOperand6),
mProperty_mMaxBranchOfOnInstructions (inOperand7),
mProperty_mTargetParameters (inOperand8),
mProperty_mDriverList (inOperand9),
mProperty_mStaticArrayMapForIntermediate (inOperand10),
mProperty_mGlobalSyncInstanceMap (inOperand11),
mProperty_mControlRegisterGroupArrayList (inOperand12),
mProperty_mRoutineListIR (inOperand13) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_intermediateCodeStruct GALGAS_intermediateCodeStruct::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_intermediateCodeStruct (GALGAS_staticEntityMap::constructor_default (HERE),
                                        GALGAS_interruptMapIR::constructor_emptyMap (HERE),
                                        GALGAS_externProcedureMapIR::constructor_emptyMap (HERE),
                                        GALGAS_panicSortedListIR::constructor_emptySortedList (HERE),
                                        GALGAS_panicSortedListIR::constructor_emptySortedList (HERE),
                                        GALGAS_taskMapIR::constructor_emptyMap (HERE),
                                        GALGAS_globalTaskVariableList::constructor_emptyList (HERE),
                                        GALGAS_uint::constructor_default (HERE),
                                        GALGAS_targetParameters::constructor_default (HERE),
                                        GALGAS_driverListIR::constructor_emptyList (HERE),
                                        GALGAS_staticListInvokedFunctionSetMap::constructor_emptyMap (HERE),
                                        GALGAS_globalSyncInstanceMapIR::constructor_emptyMap (HERE),
                                        GALGAS_controlRegisterGroupArrayList::constructor_emptyList (HERE),
                                        GALGAS_routineListIR::constructor_emptyList (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_intermediateCodeStruct GALGAS_intermediateCodeStruct::constructor_new (const GALGAS_staticEntityMap & inOperand0,
                                                                              const GALGAS_interruptMapIR & inOperand1,
                                                                              const GALGAS_externProcedureMapIR & inOperand2,
                                                                              const GALGAS_panicSortedListIR & inOperand3,
                                                                              const GALGAS_panicSortedListIR & inOperand4,
                                                                              const GALGAS_taskMapIR & inOperand5,
                                                                              const GALGAS_globalTaskVariableList & inOperand6,
                                                                              const GALGAS_uint & inOperand7,
                                                                              const GALGAS_targetParameters & inOperand8,
                                                                              const GALGAS_driverListIR & inOperand9,
                                                                              const GALGAS_staticListInvokedFunctionSetMap & inOperand10,
                                                                              const GALGAS_globalSyncInstanceMapIR & inOperand11,
                                                                              const GALGAS_controlRegisterGroupArrayList & inOperand12,
                                                                              const GALGAS_routineListIR & inOperand13 
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_intermediateCodeStruct result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid () && inOperand10.isValid () && inOperand11.isValid () && inOperand12.isValid () && inOperand13.isValid ()) {
    result = GALGAS_intermediateCodeStruct (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10, inOperand11, inOperand12, inOperand13) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_intermediateCodeStruct::objectCompare (const GALGAS_intermediateCodeStruct & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mStaticEntityMap.objectCompare (inOperand.mProperty_mStaticEntityMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mInterruptMapIR.objectCompare (inOperand.mProperty_mInterruptMapIR) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mExternProcedureMapIR.objectCompare (inOperand.mProperty_mExternProcedureMapIR) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mPanicSetupListIR.objectCompare (inOperand.mProperty_mPanicSetupListIR) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mPanicLoopListIR.objectCompare (inOperand.mProperty_mPanicLoopListIR) ;
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
    result = mProperty_mGlobalSyncInstanceMap.objectCompare (inOperand.mProperty_mGlobalSyncInstanceMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mControlRegisterGroupArrayList.objectCompare (inOperand.mProperty_mControlRegisterGroupArrayList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mRoutineListIR.objectCompare (inOperand.mProperty_mRoutineListIR) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_intermediateCodeStruct::isValid (void) const {
  return mProperty_mStaticEntityMap.isValid () && mProperty_mInterruptMapIR.isValid () && mProperty_mExternProcedureMapIR.isValid () && mProperty_mPanicSetupListIR.isValid () && mProperty_mPanicLoopListIR.isValid () && mProperty_mTaskMapIR.isValid () && mProperty_mGlobalTaskVariableList.isValid () && mProperty_mMaxBranchOfOnInstructions.isValid () && mProperty_mTargetParameters.isValid () && mProperty_mDriverList.isValid () && mProperty_mStaticArrayMapForIntermediate.isValid () && mProperty_mGlobalSyncInstanceMap.isValid () && mProperty_mControlRegisterGroupArrayList.isValid () && mProperty_mRoutineListIR.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_intermediateCodeStruct::drop (void) {
  mProperty_mStaticEntityMap.drop () ;
  mProperty_mInterruptMapIR.drop () ;
  mProperty_mExternProcedureMapIR.drop () ;
  mProperty_mPanicSetupListIR.drop () ;
  mProperty_mPanicLoopListIR.drop () ;
  mProperty_mTaskMapIR.drop () ;
  mProperty_mGlobalTaskVariableList.drop () ;
  mProperty_mMaxBranchOfOnInstructions.drop () ;
  mProperty_mTargetParameters.drop () ;
  mProperty_mDriverList.drop () ;
  mProperty_mStaticArrayMapForIntermediate.drop () ;
  mProperty_mGlobalSyncInstanceMap.drop () ;
  mProperty_mControlRegisterGroupArrayList.drop () ;
  mProperty_mRoutineListIR.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_intermediateCodeStruct::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "<struct @intermediateCodeStruct:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mStaticEntityMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mInterruptMapIR.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mExternProcedureMapIR.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mPanicSetupListIR.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mPanicLoopListIR.description (ioString, inIndentation+1) ;
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
    mProperty_mGlobalSyncInstanceMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mControlRegisterGroupArrayList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mRoutineListIR.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_staticEntityMap GALGAS_intermediateCodeStruct::getter_mStaticEntityMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mStaticEntityMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_interruptMapIR GALGAS_intermediateCodeStruct::getter_mInterruptMapIR (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInterruptMapIR ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externProcedureMapIR GALGAS_intermediateCodeStruct::getter_mExternProcedureMapIR (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExternProcedureMapIR ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_panicSortedListIR GALGAS_intermediateCodeStruct::getter_mPanicSetupListIR (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPanicSetupListIR ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_panicSortedListIR GALGAS_intermediateCodeStruct::getter_mPanicLoopListIR (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPanicLoopListIR ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_taskMapIR GALGAS_intermediateCodeStruct::getter_mTaskMapIR (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTaskMapIR ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_globalTaskVariableList GALGAS_intermediateCodeStruct::getter_mGlobalTaskVariableList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGlobalTaskVariableList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint GALGAS_intermediateCodeStruct::getter_mMaxBranchOfOnInstructions (UNUSED_LOCATION_ARGS) const {
  return mProperty_mMaxBranchOfOnInstructions ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_targetParameters GALGAS_intermediateCodeStruct::getter_mTargetParameters (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTargetParameters ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_driverListIR GALGAS_intermediateCodeStruct::getter_mDriverList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDriverList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_staticListInvokedFunctionSetMap GALGAS_intermediateCodeStruct::getter_mStaticArrayMapForIntermediate (UNUSED_LOCATION_ARGS) const {
  return mProperty_mStaticArrayMapForIntermediate ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_globalSyncInstanceMapIR GALGAS_intermediateCodeStruct::getter_mGlobalSyncInstanceMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGlobalSyncInstanceMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterGroupArrayList GALGAS_intermediateCodeStruct::getter_mControlRegisterGroupArrayList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mControlRegisterGroupArrayList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineListIR GALGAS_intermediateCodeStruct::getter_mRoutineListIR (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRoutineListIR ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            @intermediateCodeStruct type                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_intermediateCodeStruct ("intermediateCodeStruct",
                                               NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_intermediateCodeStruct::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_intermediateCodeStruct ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_intermediateCodeStruct::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_intermediateCodeStruct (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                               Bool options                                                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_BoolCommandLineOption gOption_omnibus_5F_options_doNotDetectRecursiveCalls ("omnibus_options",
                                         "doNotDetectRecursiveCalls",
                                         114,
                                         "do-not-detect-recursive-calls",
                                         "Do not detect recursive calls") ;

C_BoolCommandLineOption gOption_omnibus_5F_options_emitControlRegisterHTMLDumpFile ("omnibus_options",
                                         "emitControlRegisterHTMLDumpFile",
                                         0,
                                         "emit-control-register-map",
                                         "Emit control register map in an HTML file") ;

C_BoolCommandLineOption gOption_omnibus_5F_options_emitDeclarationDependencyGraphFile ("omnibus_options",
                                         "emitDeclarationDependencyGraphFile",
                                         100,
                                         "emit-declaration-dependency-graph",
                                         "Emit declaration dependency graph file") ;

C_BoolCommandLineOption gOption_omnibus_5F_options_emitGlobalConstantHTMLDumpFile ("omnibus_options",
                                         "emitGlobalConstantHTMLDumpFile",
                                         0,
                                         "emit-global-constant-map",
                                         "Emit global constant map in an HTML file") ;

C_BoolCommandLineOption gOption_omnibus_5F_options_emitRoutineInvocationGraphFile ("omnibus_options",
                                         "emitRoutineInvocationGraphFile",
                                         105,
                                         "emit-routine-invocation-graph",
                                         "Emit routine invocation graph file") ;

C_BoolCommandLineOption gOption_omnibus_5F_options_emitTypeMap ("omnibus_options",
                                         "emitTypeMap",
                                         116,
                                         "emit-type-map",
                                         "Emit type map in an HTML file") ;

C_BoolCommandLineOption gOption_omnibus_5F_options_listEmbeddedSampleFiles ("omnibus_options",
                                         "listEmbeddedSampleFiles",
                                         108,
                                         "list-embedded-samples",
                                         "List embedded sample files") ;

C_BoolCommandLineOption gOption_omnibus_5F_options_listTargets ("omnibus_options",
                                         "listTargets",
                                         76,
                                         "list-targets",
                                         "List targets") ;

C_BoolCommandLineOption gOption_omnibus_5F_options_noDeadCodeElimination ("omnibus_options",
                                         "noDeadCodeElimination",
                                         0,
                                         "no-deadcode-elimination",
                                         "No dead code elimination") ;

C_BoolCommandLineOption gOption_omnibus_5F_options_noPanicGeneration ("omnibus_options",
                                         "noPanicGeneration",
                                         0,
                                         "no-panic-generation",
                                         "Do not generate panic code") ;

C_BoolCommandLineOption gOption_omnibus_5F_options_optimization_31_ ("omnibus_options",
                                         "optimization1",
                                         0,
                                         "O1",
                                         "Optimization level 1") ;

C_BoolCommandLineOption gOption_omnibus_5F_options_optimization_32_ ("omnibus_options",
                                         "optimization2",
                                         0,
                                         "O2",
                                         "Optimization level 2") ;

C_BoolCommandLineOption gOption_omnibus_5F_options_optimizationS ("omnibus_options",
                                         "optimizationS",
                                         0,
                                         "Os",
                                         "Like previous option with extra optimizations for size") ;

C_BoolCommandLineOption gOption_omnibus_5F_options_optimizationZ ("omnibus_options",
                                         "optimizationZ",
                                         0,
                                         "Oz",
                                         "Like previous option but reduces code size further") ;

C_BoolCommandLineOption gOption_omnibus_5F_options_optimizationZ_33_ ("omnibus_options",
                                         "optimizationZ3",
                                         0,
                                         "O3",
                                         "Optimization level 3") ;

C_BoolCommandLineOption gOption_omnibus_5F_options_printPasses ("omnibus_options",
                                         "printPasses",
                                         0,
                                         "print-passes",
                                         "Print pass information") ;

C_BoolCommandLineOption gOption_omnibus_5F_options_taskStrictPriorityOrder ("omnibus_options",
                                         "taskStrictPriorityOrder",
                                         0,
                                         "task-strict-priority-order",
                                         "Ensure task strict priority order") ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                               UInt options                                                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                              String options                                                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_StringCommandLineOption gOption_omnibus_5F_options_extractEmbeddedSampleFile ("omnibus_options",
                                         "extractEmbeddedSampleFile",
                                         120,
                                         "extract-embedded-sample-code",
                                         "Extract an embedded sample file",
                                         "") ;

C_StringCommandLineOption gOption_omnibus_5F_options_extractEmbeddedTargets ("omnibus_options",
                                         "extractEmbeddedTargets",
                                         88,
                                         "extract-embedded-targets",
                                         "Extract embedded targets",
                                         "") ;

C_StringCommandLineOption gOption_omnibus_5F_options_useDirAsTargetDir ("omnibus_options",
                                         "useDirAsTargetDir",
                                         84,
                                         "use-target-dir",
                                         "Use directory as target definition directory, instead of using embedded targets",
                                         "") ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                              String List options                                                                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_StringListCommandLineOption gOption_omnibus_5F_options_pathList ("omnibus_options",
                                         "pathList",
                                         0,
                                         "path",
                                         "Search pathes for source files") ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                               Bool options                                                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_BoolCommandLineOption gOption_omnibus_5F_option_5F_not_5F_appearing_5F_in_5F_cocoa_performFlashing ("omnibus_option_not_appearing_in_cocoa",
                                         "performFlashing",
                                         102,
                                         "flash-target",
                                         "After successful compilation, flash target") ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                               UInt options                                                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                              String options                                                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                              String List options                                                                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                               Once function 'configurationNodeNameForPrecedenceGraph'                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string onceFunction_configurationNodeNameForPrecedenceGraph (C_Compiler * /* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("config") ;
//---
  return result_result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function implementation                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static bool gOnceFunctionResultAvailable_configurationNodeNameForPrecedenceGraph = false ;
static GALGAS_string gOnceFunctionResult_configurationNodeNameForPrecedenceGraph ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string function_configurationNodeNameForPrecedenceGraph (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_configurationNodeNameForPrecedenceGraph) {
    gOnceFunctionResult_configurationNodeNameForPrecedenceGraph = onceFunction_configurationNodeNameForPrecedenceGraph (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_configurationNodeNameForPrecedenceGraph = true ;
  }
  return gOnceFunctionResult_configurationNodeNameForPrecedenceGraph ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void releaseOnceFunctionResult_configurationNodeNameForPrecedenceGraph (void) {
  gOnceFunctionResult_configurationNodeNameForPrecedenceGraph.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gEpilogueForOnceFunction_configurationNodeNameForPrecedenceGraph (NULL,
                                                                                     releaseOnceFunctionResult_configurationNodeNameForPrecedenceGraph) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_configurationNodeNameForPrecedenceGraph [1] = {
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_configurationNodeNameForPrecedenceGraph (C_Compiler * inCompiler,
                                                                                        const cObjectArray & /* inEffectiveParameterArray */,
                                                                                        const GALGAS_location & /* inErrorLocation */
                                                                                        COMMA_LOCATION_ARGS) {
  return function_configurationNodeNameForPrecedenceGraph (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_configurationNodeNameForPrecedenceGraph ("configurationNodeNameForPrecedenceGraph",
                                                                                         functionWithGenericHeader_configurationNodeNameForPrecedenceGraph,
                                                                                         & kTypeDescriptor_GALGAS_string,
                                                                                         0,
                                                                                         functionArgs_configurationNodeNameForPrecedenceGraph) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           Once function 'isrSlotTypeName'                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string onceFunction_isrSlotTypeName (C_Compiler * /* inCompiler */
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("ISRSlot") ;
//---
  return result_result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function implementation                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static bool gOnceFunctionResultAvailable_isrSlotTypeName = false ;
static GALGAS_string gOnceFunctionResult_isrSlotTypeName ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string function_isrSlotTypeName (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_isrSlotTypeName) {
    gOnceFunctionResult_isrSlotTypeName = onceFunction_isrSlotTypeName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_isrSlotTypeName = true ;
  }
  return gOnceFunctionResult_isrSlotTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void releaseOnceFunctionResult_isrSlotTypeName (void) {
  gOnceFunctionResult_isrSlotTypeName.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gEpilogueForOnceFunction_isrSlotTypeName (NULL,
                                                             releaseOnceFunctionResult_isrSlotTypeName) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_isrSlotTypeName [1] = {
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_isrSlotTypeName (C_Compiler * inCompiler,
                                                                const cObjectArray & /* inEffectiveParameterArray */,
                                                                const GALGAS_location & /* inErrorLocation */
                                                                COMMA_LOCATION_ARGS) {
  return function_isrSlotTypeName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_isrSlotTypeName ("isrSlotTypeName",
                                                                 functionWithGenericHeader_isrSlotTypeName,
                                                                 & kTypeDescriptor_GALGAS_string,
                                                                 0,
                                                                 functionArgs_isrSlotTypeName) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                  Overriding extension method '@configurationDeclarationAST enterInPrecedenceGraph'                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_configurationDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                                GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_configurationDeclarationAST * object = (const cPtr_configurationDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_configurationDeclarationAST) ;
  GALGAS_lstring var_rootNode_11178 = GALGAS_lstring::constructor_new (function_configurationNodeNameForPrecedenceGraph (inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 312)), object->mProperty_mPanicCodeTypeName.getter_location (HERE)  COMMA_SOURCE_FILE ("configuration.galgas", 312)) ;
  {
  const GALGAS_configurationDeclarationAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (var_rootNode_11178, temp_0, inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 313)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_rootNode_11178, object->mProperty_mPanicCodeTypeName COMMA_SOURCE_FILE ("configuration.galgas", 314)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_rootNode_11178, object->mProperty_mPanicCodeTypeName COMMA_SOURCE_FILE ("configuration.galgas", 315)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_rootNode_11178, function_ctBoolTypeName (inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 316)).getter_nowhere (SOURCE_FILE ("configuration.galgas", 316)) COMMA_SOURCE_FILE ("configuration.galgas", 316)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_configurationDeclarationAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_configurationDeclarationAST.mSlotID,
                                               extensionMethod_configurationDeclarationAST_enterInPrecedenceGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_configurationDeclarationAST_enterInPrecedenceGraph (defineExtensionMethod_configurationDeclarationAST_enterInPrecedenceGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                Overriding extension getter '@configurationDeclarationAST locationForErrorSignaling'                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_location extensionGetter_configurationDeclarationAST_locationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                              C_Compiler * /* inCompiler */
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_configurationDeclarationAST * object = (const cPtr_configurationDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_configurationDeclarationAST) ;
  result_outLocation = object->mProperty_mPanicCodeTypeName.getter_location (HERE) ;
//---
  return result_outLocation ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_configurationDeclarationAST_locationForErrorSignaling (void) {
  enterExtensionGetter_locationForErrorSignaling (kTypeDescriptor_GALGAS_configurationDeclarationAST.mSlotID,
                                                  extensionGetter_configurationDeclarationAST_locationForErrorSignaling) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_configurationDeclarationAST_locationForErrorSignaling (defineExtensionGetter_configurationDeclarationAST_locationForErrorSignaling, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//            Overriding extension getter '@configurationDeclarationAST keyRepresentationForErrorSignaling'            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_configurationDeclarationAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * /* inObject */,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  result_outRepresentation = function_configurationNodeNameForPrecedenceGraph (inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 328)) ;
//---
  return result_outRepresentation ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_configurationDeclarationAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_configurationDeclarationAST.mSlotID,
                                                           extensionGetter_configurationDeclarationAST_keyRepresentationForErrorSignaling) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_configurationDeclarationAST_keyRepresentationForErrorSignaling (defineExtensionGetter_configurationDeclarationAST_keyRepresentationForErrorSignaling, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      Overriding extension method '@configurationDeclarationAST enterInContext'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_configurationDeclarationAST_enterInContext (const cPtr_abstractDeclarationAST * inObject,
                                                                        GALGAS_semanticContext & ioArgument_ioContext,
                                                                        GALGAS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                                        GALGAS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                                                        GALGAS_routineListIR & /* ioArgument_ioRoutineListIR */,
                                                                        GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                                        GALGAS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                                        GALGAS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                                        GALGAS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_configurationDeclarationAST * object = (const cPtr_configurationDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_configurationDeclarationAST) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, ioArgument_ioContext.getter_mTargetParameters (HERE).getter_mPointerSize (HERE).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (object->mProperty_mTargetParameters.getter_mConfigurationLocation (HERE), GALGAS_string ("duplicate configuration"), fixItArray1  COMMA_SOURCE_FILE ("configuration.galgas", 348)) ;
    }
  }
  ioArgument_ioContext.mProperty_mTargetParameters = object->mProperty_mTargetParameters ;
  GALGAS_omnibusType var_panicCodeType_13377 ;
  ioArgument_ioContext.getter_mTypeMap (HERE).method_searchKey (object->mProperty_mPanicCodeTypeName, var_panicCodeType_13377, inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 352)) ;
  ioArgument_ioContext.mProperty_mPanicCodeType = var_panicCodeType_13377 ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = ioArgument_ioContext.getter_mPanicCodeType (HERE).getter_kind (HERE).getter_isInteger (SOURCE_FILE ("configuration.galgas", 357)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_bool var_unsigned_13546 ;
      GALGAS_bigint joker_13521_2 ; // Joker input parameter
      GALGAS_bigint joker_13521_1 ; // Joker input parameter
      GALGAS_uint joker_13548_1 ; // Joker input parameter
      ioArgument_ioContext.getter_mPanicCodeType (HERE).getter_kind (HERE).method_integer (joker_13521_2, joker_13521_1, var_unsigned_13546, joker_13548_1, inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 358)) ;
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = var_unsigned_13546.operator_not (SOURCE_FILE ("configuration.galgas", 359)).boolEnum () ;
        if (kBoolTrue == test_3) {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (object->mProperty_mPanicCodeTypeName.getter_location (SOURCE_FILE ("configuration.galgas", 360)), GALGAS_string ("this type should be an unsigned integer type"), fixItArray4  COMMA_SOURCE_FILE ("configuration.galgas", 360)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_2) {
    TC_Array <C_FixItDescription> fixItArray5 ;
    inCompiler->emitSemanticError (object->mProperty_mPanicCodeTypeName.getter_location (SOURCE_FILE ("configuration.galgas", 363)), GALGAS_string ("this type should be an unsigned integer type"), fixItArray5  COMMA_SOURCE_FILE ("configuration.galgas", 363)) ;
  }
  GALGAS_omnibusType var_panicLineType_13865 ;
  ioArgument_ioContext.getter_mTypeMap (HERE).method_searchKey (object->mProperty_mPanicLineTypeName, var_panicLineType_13865, inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 366)) ;
  ioArgument_ioContext.mProperty_mPanicLineType = var_panicLineType_13865 ;
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = ioArgument_ioContext.getter_mPanicLineType (HERE).getter_kind (HERE).getter_isInteger (SOURCE_FILE ("configuration.galgas", 371)).boolEnum () ;
    if (kBoolTrue == test_6) {
      GALGAS_bool var_unsigned_14034 ;
      GALGAS_bigint joker_14009_2 ; // Joker input parameter
      GALGAS_bigint joker_14009_1 ; // Joker input parameter
      GALGAS_uint joker_14036_1 ; // Joker input parameter
      ioArgument_ioContext.getter_mPanicLineType (HERE).getter_kind (HERE).method_integer (joker_14009_2, joker_14009_1, var_unsigned_14034, joker_14036_1, inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 372)) ;
      enumGalgasBool test_7 = kBoolTrue ;
      if (kBoolTrue == test_7) {
        test_7 = var_unsigned_14034.operator_not (SOURCE_FILE ("configuration.galgas", 373)).boolEnum () ;
        if (kBoolTrue == test_7) {
          TC_Array <C_FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (object->mProperty_mPanicLineTypeName.getter_location (SOURCE_FILE ("configuration.galgas", 374)), GALGAS_string ("this type should be an unsigned integer type"), fixItArray8  COMMA_SOURCE_FILE ("configuration.galgas", 374)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_6) {
    TC_Array <C_FixItDescription> fixItArray9 ;
    inCompiler->emitSemanticError (object->mProperty_mPanicLineTypeName.getter_location (SOURCE_FILE ("configuration.galgas", 377)), GALGAS_string ("this type should be an unsigned integer type"), fixItArray9  COMMA_SOURCE_FILE ("configuration.galgas", 377)) ;
  }
  GALGAS_stringset var_panicCodeSet_14326 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("configuration.galgas", 380)) ;
  cEnumerator_interruptionConfigurationList enumerator_14388 (object->mProperty_mInterruptionConfigurationList, kENUMERATION_UP) ;
  while (enumerator_14388.hasCurrentObject ()) {
    {
    ioArgument_ioContext.mProperty_mAvailableInterruptMap.setter_insertKey (enumerator_14388.current_mInterruptName (HERE), enumerator_14388.current_mInterruptionPanicCode (HERE), inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 382)) ;
    }
    switch (enumerator_14388.current_mInterruptionPanicCode (HERE).enumValue ()) {
    case GALGAS_interruptionPanicCode::kNotBuilt:
      break ;
    case GALGAS_interruptionPanicCode::kEnum_noCode:
      {
      }
      break ;
    case GALGAS_interruptionPanicCode::kEnum_code:
      {
        const cEnumAssociatedValues_interruptionPanicCode_code * extractPtr_14681 = (const cEnumAssociatedValues_interruptionPanicCode_code *) (enumerator_14388.current_mInterruptionPanicCode (HERE).unsafePointer ()) ;
        const GALGAS_lbigint extractedValue_value = extractPtr_14681->mAssociatedValue0 ;
        GALGAS_string var_s_14534 = extractedValue_value.getter_bigint (HERE).getter_string (SOURCE_FILE ("configuration.galgas", 386)) ;
        enumGalgasBool test_10 = kBoolTrue ;
        if (kBoolTrue == test_10) {
          test_10 = var_panicCodeSet_14326.getter_hasKey (var_s_14534 COMMA_SOURCE_FILE ("configuration.galgas", 387)).boolEnum () ;
          if (kBoolTrue == test_10) {
            TC_Array <C_FixItDescription> fixItArray11 ;
            inCompiler->emitSemanticError (extractedValue_value.getter_location (SOURCE_FILE ("configuration.galgas", 388)), GALGAS_string ("duplicate interrupt code"), fixItArray11  COMMA_SOURCE_FILE ("configuration.galgas", 388)) ;
          }
        }
        var_panicCodeSet_14326.addAssign_operation (var_s_14534  COMMA_SOURCE_FILE ("configuration.galgas", 390)) ;
      }
      break ;
    }
    enumerator_14388.gotoNextObject () ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_configurationDeclarationAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_configurationDeclarationAST.mSlotID,
                                       extensionMethod_configurationDeclarationAST_enterInContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_configurationDeclarationAST_enterInContext (defineExtensionMethod_configurationDeclarationAST_enterInContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        Function 'routineMangledNameFromAST'                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring function_routineMangledNameFromAST (const GALGAS_string & constinArgument_inReceiverTypeName,
                                                   const GALGAS_lstring & constinArgument_inRoutineName,
                                                   const GALGAS_routineFormalArgumentListAST & constinArgument_inFormalArgumentList,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  GALGAS_string var_s_559 = GALGAS_string ("func.") ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inReceiverTypeName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_s_559.plusAssign_operation(constinArgument_inReceiverTypeName.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 18)), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 18)) ;
    }
  }
  var_s_559.plusAssign_operation(constinArgument_inRoutineName.getter_string (HERE), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 20)) ;
  var_s_559.plusAssign_operation(GALGAS_string ("("), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 21)) ;
  cEnumerator_routineFormalArgumentListAST enumerator_775 (constinArgument_inFormalArgumentList, kENUMERATION_UP) ;
  while (enumerator_775.hasCurrentObject ()) {
    var_s_559.plusAssign_operation(extensionGetter_formalPassingModeString (enumerator_775.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 23)).add_operation (enumerator_775.current_mSelector (HERE).getter_string (SOURCE_FILE ("context-routines.galgas", 23)), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 23)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 23)), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 23)) ;
    enumerator_775.gotoNextObject () ;
  }
  var_s_559.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 25)) ;
  result_result = GALGAS_lstring::constructor_new (var_s_559, constinArgument_inRoutineName.getter_location (HERE)  COMMA_SOURCE_FILE ("context-routines.galgas", 26)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_routineMangledNameFromAST [4] = {
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_lstring,
  & kTypeDescriptor_GALGAS_routineFormalArgumentListAST,
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_routineMangledNameFromAST (C_Compiler * inCompiler,
                                                                          const cObjectArray & inEffectiveParameterArray,
                                                                          const GALGAS_location & /* inErrorLocation */
                                                                          COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  const GALGAS_lstring operand1 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  const GALGAS_routineFormalArgumentListAST operand2 = GALGAS_routineFormalArgumentListAST::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
                                                                                                           inCompiler
                                                                                                           COMMA_THERE) ;
  return function_routineMangledNameFromAST (operand0,
                                             operand1,
                                             operand2,
                                             inCompiler
                                             COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_routineMangledNameFromAST ("routineMangledNameFromAST",
                                                                           functionWithGenericHeader_routineMangledNameFromAST,
                                                                           & kTypeDescriptor_GALGAS_lstring,
                                                                           3,
                                                                           functionArgs_routineMangledNameFromAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        Function 'routineMangledNameFromCall'                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring function_routineMangledNameFromCall (const GALGAS_string & constinArgument_inReceiverTypeName,
                                                    const GALGAS_lstring & constinArgument_inRoutineName,
                                                    const GALGAS_effectiveArgumentListAST & constinArgument_inEffectiveParameterList,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  GALGAS_string var_s_1276 = GALGAS_string ("func.") ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inReceiverTypeName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_s_1276.plusAssign_operation(constinArgument_inReceiverTypeName.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 37)), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 37)) ;
    }
  }
  var_s_1276.plusAssign_operation(constinArgument_inRoutineName.getter_string (HERE), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 39)) ;
  var_s_1276.plusAssign_operation(GALGAS_string ("("), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 40)) ;
  cEnumerator_effectiveArgumentListAST enumerator_1457 (constinArgument_inEffectiveParameterList, kENUMERATION_UP) ;
  while (enumerator_1457.hasCurrentObject ()) {
    var_s_1276.plusAssign_operation(extensionGetter_matchingFormalArgument (enumerator_1457.current_mEffectiveParameterKind (HERE), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 42)).add_operation (enumerator_1457.current_mSelector (HERE).getter_string (SOURCE_FILE ("context-routines.galgas", 42)), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 42)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 42)), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 42)) ;
    enumerator_1457.gotoNextObject () ;
  }
  var_s_1276.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 44)) ;
  result_result = GALGAS_lstring::constructor_new (var_s_1276, constinArgument_inRoutineName.getter_location (HERE)  COMMA_SOURCE_FILE ("context-routines.galgas", 45)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_routineMangledNameFromCall [4] = {
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_lstring,
  & kTypeDescriptor_GALGAS_effectiveArgumentListAST,
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_routineMangledNameFromCall (C_Compiler * inCompiler,
                                                                           const cObjectArray & inEffectiveParameterArray,
                                                                           const GALGAS_location & /* inErrorLocation */
                                                                           COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  const GALGAS_lstring operand1 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  const GALGAS_effectiveArgumentListAST operand2 = GALGAS_effectiveArgumentListAST::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
                                                                                                   inCompiler
                                                                                                   COMMA_THERE) ;
  return function_routineMangledNameFromCall (operand0,
                                              operand1,
                                              operand2,
                                              inCompiler
                                              COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_routineMangledNameFromCall ("routineMangledNameFromCall",
                                                                            functionWithGenericHeader_routineMangledNameFromCall,
                                                                            & kTypeDescriptor_GALGAS_lstring,
                                                                            3,
                                                                            functionArgs_routineMangledNameFromCall) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//               Overriding extension method '@compileTimeDeclarationBarrierAST enterInPrecedenceGraph'                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_compileTimeDeclarationBarrierAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                                     GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_compileTimeDeclarationBarrierAST * object = (const cPtr_compileTimeDeclarationBarrierAST *) inObject ;
  macroValidSharedObject (object, cPtr_compileTimeDeclarationBarrierAST) ;
  {
  const GALGAS_compileTimeDeclarationBarrierAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (function_compileTimeDeclarationBarrier (inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 38)), temp_0, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 38)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_compileTimeDeclarationBarrierAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_compileTimeDeclarationBarrierAST.mSlotID,
                                               extensionMethod_compileTimeDeclarationBarrierAST_enterInPrecedenceGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_compileTimeDeclarationBarrierAST_enterInPrecedenceGraph (defineExtensionMethod_compileTimeDeclarationBarrierAST_enterInPrecedenceGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//         Overriding extension getter '@compileTimeDeclarationBarrierAST keyRepresentationForErrorSignaling'          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_compileTimeDeclarationBarrierAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * /* inObject */,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  result_outRepresentation = function_compileTimeDeclarationBarrier (inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 44)).getter_string (SOURCE_FILE ("ordered-declaration-list.galgas", 44)) ;
//---
  return result_outRepresentation ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_compileTimeDeclarationBarrierAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_compileTimeDeclarationBarrierAST.mSlotID,
                                                           extensionGetter_compileTimeDeclarationBarrierAST_keyRepresentationForErrorSignaling) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_compileTimeDeclarationBarrierAST_keyRepresentationForErrorSignaling (defineExtensionGetter_compileTimeDeclarationBarrierAST_keyRepresentationForErrorSignaling, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//              Overriding extension getter '@compileTimeDeclarationBarrierAST locationForErrorSignaling'              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_location extensionGetter_compileTimeDeclarationBarrierAST_locationForErrorSignaling (const cPtr_abstractDeclarationAST * /* inObject */,
                                                                                                   C_Compiler * /* inCompiler */
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  result_outLocation = GALGAS_location::constructor_nowhere (SOURCE_FILE ("ordered-declaration-list.galgas", 50)) ;
//---
  return result_outLocation ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_compileTimeDeclarationBarrierAST_locationForErrorSignaling (void) {
  enterExtensionGetter_locationForErrorSignaling (kTypeDescriptor_GALGAS_compileTimeDeclarationBarrierAST.mSlotID,
                                                  extensionGetter_compileTimeDeclarationBarrierAST_locationForErrorSignaling) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_compileTimeDeclarationBarrierAST_locationForErrorSignaling (defineExtensionGetter_compileTimeDeclarationBarrierAST_locationForErrorSignaling, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                   Overriding extension method '@compileTimeDeclarationBarrierAST enterInContext'                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_compileTimeDeclarationBarrierAST_enterInContext (const cPtr_abstractDeclarationAST * /* inObject */,
                                                                             GALGAS_semanticContext & /* ioArgument_ioContext */,
                                                                             GALGAS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                                             GALGAS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                                                             GALGAS_routineListIR & /* ioArgument_ioRoutineListIR */,
                                                                             GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                                             GALGAS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                                             GALGAS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                                             GALGAS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                                             C_Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_compileTimeDeclarationBarrierAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_compileTimeDeclarationBarrierAST.mSlotID,
                                       extensionMethod_compileTimeDeclarationBarrierAST_enterInContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_compileTimeDeclarationBarrierAST_enterInContext (defineExtensionMethod_compileTimeDeclarationBarrierAST_enterInContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         Routine 'appendUnsignedOperatorsTo'                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_appendUnsignedOperatorsTo (const GALGAS_string constinArgument_inTypeName,
                                        GALGAS_semanticTypePrecedenceGraph & ioArgument_ioPrecedenceGraph,
                                        C_Compiler * inCompiler
                                        COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_appendInfixOperatorDeclaration (GALGAS_omnibusInfixOperator::constructor_addOp (SOURCE_FILE ("ordered-declaration-list.galgas", 77)), GALGAS_string ("add"), constinArgument_inTypeName, constinArgument_inTypeName, ioArgument_ioPrecedenceGraph, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 77)) ;
  }
  {
  routine_appendInfixOperatorDeclaration (GALGAS_omnibusInfixOperator::constructor_subOp (SOURCE_FILE ("ordered-declaration-list.galgas", 80)), GALGAS_string ("sub"), constinArgument_inTypeName, constinArgument_inTypeName, ioArgument_ioPrecedenceGraph, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 80)) ;
  }
  {
  routine_appendInfixOperatorDeclaration (GALGAS_omnibusInfixOperator::constructor_mulOp (SOURCE_FILE ("ordered-declaration-list.galgas", 83)), GALGAS_string ("mul"), constinArgument_inTypeName, constinArgument_inTypeName, ioArgument_ioPrecedenceGraph, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 83)) ;
  }
  {
  routine_appendInfixOperatorDeclaration (GALGAS_omnibusInfixOperator::constructor_divOp (SOURCE_FILE ("ordered-declaration-list.galgas", 86)), GALGAS_string ("udiv"), constinArgument_inTypeName, constinArgument_inTypeName, ioArgument_ioPrecedenceGraph, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 86)) ;
  }
  {
  routine_appendInfixOperatorDeclaration (GALGAS_omnibusInfixOperator::constructor_divOpNoOvf (SOURCE_FILE ("ordered-declaration-list.galgas", 87)), GALGAS_string ("udiv"), constinArgument_inTypeName, constinArgument_inTypeName, ioArgument_ioPrecedenceGraph, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 87)) ;
  }
  {
  routine_appendInfixOperatorDeclaration (GALGAS_omnibusInfixOperator::constructor_modOp (SOURCE_FILE ("ordered-declaration-list.galgas", 89)), GALGAS_string ("urem"), constinArgument_inTypeName, constinArgument_inTypeName, ioArgument_ioPrecedenceGraph, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 89)) ;
  }
  {
  routine_appendInfixOperatorDeclaration (GALGAS_omnibusInfixOperator::constructor_modOpNoOvf (SOURCE_FILE ("ordered-declaration-list.galgas", 90)), GALGAS_string ("urem"), constinArgument_inTypeName, constinArgument_inTypeName, ioArgument_ioPrecedenceGraph, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 90)) ;
  }
  {
  routine_appendPrefixOperatorDeclaration_5F_bitWiseComplement (constinArgument_inTypeName, ioArgument_ioPrecedenceGraph, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 100)) ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          Routine 'appendSignedOperatorsTo'                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_appendSignedOperatorsTo (const GALGAS_string constinArgument_inTypeName,
                                      GALGAS_semanticTypePrecedenceGraph & ioArgument_ioPrecedenceGraph,
                                      C_Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_appendInfixOperatorDeclaration (GALGAS_omnibusInfixOperator::constructor_addOp (SOURCE_FILE ("ordered-declaration-list.galgas", 113)), GALGAS_string ("add"), constinArgument_inTypeName, constinArgument_inTypeName, ioArgument_ioPrecedenceGraph, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 113)) ;
  }
  {
  routine_appendInfixOperatorDeclaration (GALGAS_omnibusInfixOperator::constructor_subOp (SOURCE_FILE ("ordered-declaration-list.galgas", 116)), GALGAS_string ("sub"), constinArgument_inTypeName, constinArgument_inTypeName, ioArgument_ioPrecedenceGraph, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 116)) ;
  }
  {
  routine_appendInfixOperatorDeclaration (GALGAS_omnibusInfixOperator::constructor_mulOp (SOURCE_FILE ("ordered-declaration-list.galgas", 119)), GALGAS_string ("mul"), constinArgument_inTypeName, constinArgument_inTypeName, ioArgument_ioPrecedenceGraph, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 119)) ;
  }
  {
  routine_appendInfixOperatorDeclaration (GALGAS_omnibusInfixOperator::constructor_modOp (SOURCE_FILE ("ordered-declaration-list.galgas", 122)), GALGAS_string ("srem"), constinArgument_inTypeName, constinArgument_inTypeName, ioArgument_ioPrecedenceGraph, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 122)) ;
  }
  {
  routine_appendInfixOperatorDeclaration (GALGAS_omnibusInfixOperator::constructor_modOpNoOvf (SOURCE_FILE ("ordered-declaration-list.galgas", 123)), GALGAS_string ("srem"), constinArgument_inTypeName, constinArgument_inTypeName, ioArgument_ioPrecedenceGraph, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 123)) ;
  }
  {
  routine_appendInfixOperatorDeclaration (GALGAS_omnibusInfixOperator::constructor_divOp (SOURCE_FILE ("ordered-declaration-list.galgas", 125)), GALGAS_string ("sdiv"), constinArgument_inTypeName, constinArgument_inTypeName, ioArgument_ioPrecedenceGraph, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 125)) ;
  }
  {
  routine_appendInfixOperatorDeclaration (GALGAS_omnibusInfixOperator::constructor_divOpNoOvf (SOURCE_FILE ("ordered-declaration-list.galgas", 126)), GALGAS_string ("sdiv"), constinArgument_inTypeName, constinArgument_inTypeName, ioArgument_ioPrecedenceGraph, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 126)) ;
  }
  {
  routine_appendPrefixOperatorDeclaration_5F_minus (constinArgument_inTypeName, ioArgument_ioPrecedenceGraph, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 136)) ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        Routine 'buildOrderedDeclarationList'                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_buildOrderedDeclarationList (const GALGAS_ast constinArgument_inAST,
                                          const GALGAS_string constinArgument_inSourceFile,
                                          const GALGAS_location constinArgument_inEndOfSourceFile,
                                          GALGAS_declarationListAST & outArgument_outSortedDeclarationListAST,
                                          C_Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSortedDeclarationListAST.drop () ; // Release 'out' argument
  GALGAS_semanticTypePrecedenceGraph var_precedenceGraph_8132 = GALGAS_semanticTypePrecedenceGraph::constructor_emptyGraph (SOURCE_FILE ("ordered-declaration-list.galgas", 148)) ;
  cEnumerator_declarationListAST enumerator_8184 (constinArgument_inAST.getter_mDeclarationListAST (HERE), kENUMERATION_UP) ;
  while (enumerator_8184.hasCurrentObject ()) {
    callExtensionMethod_enterInPrecedenceGraph ((const cPtr_abstractDeclarationAST *) enumerator_8184.current_mDeclaration (HERE).ptr (), var_precedenceGraph_8132, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 150)) ;
    enumerator_8184.gotoNextObject () ;
  }
  extensionMethod_noteTypesInPrecedenceGraph (constinArgument_inAST.getter_mExternFunctionListAST (HERE), var_precedenceGraph_8132, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 153)) ;
  extensionMethod_noteTypesInPrecedenceGraph (constinArgument_inAST.getter_mTaskListAST (HERE), var_precedenceGraph_8132, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 154)) ;
  GALGAS_uint var_addintegerTypeCount_8589 = GALGAS_uint ((uint32_t) 0U) ;
  cEnumerator_stringlist enumerator_8644 (var_precedenceGraph_8132.getter_undefinedNodeKeyList (SOURCE_FILE ("ordered-declaration-list.galgas", 157)), kENUMERATION_UP) ;
  while (enumerator_8644.hasCurrentObject ()) {
    GALGAS_stringlist var_split_8661 = enumerator_8644.current_mValue (HERE).getter_componentsSeparatedByString (GALGAS_string ("int") COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 158)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      GALGAS_bool test_1 = GALGAS_bool (kIsEqual, var_split_8661.getter_length (SOURCE_FILE ("ordered-declaration-list.galgas", 159)).objectCompare (GALGAS_uint ((uint32_t) 2U))) ;
      if (kBoolTrue == test_1.boolEnum ()) {
        test_1 = var_split_8661.getter_mValueAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 159)).getter_isDecimalUnsignedNumber (SOURCE_FILE ("ordered-declaration-list.galgas", 159)) ;
      }
      test_0 = test_1.boolEnum () ;
      if (kBoolTrue == test_0) {
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = GALGAS_bool (kIsEqual, var_split_8661.getter_mValueAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 160)).objectCompare (GALGAS_string ("u"))).boolEnum () ;
          if (kBoolTrue == test_2) {
            GALGAS_uint var_n_8855 = var_split_8661.getter_mValueAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 161)).getter_decimalUnsignedNumber (inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 161)) ;
            GALGAS_integerDeclarationAST var_declaration_8930 = GALGAS_integerDeclarationAST::constructor_new (GALGAS_bool (false), var_n_8855  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 162)) ;
            callExtensionMethod_enterInPrecedenceGraph ((const cPtr_integerDeclarationAST *) var_declaration_8930.ptr (), var_precedenceGraph_8132, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 163)) ;
            {
            routine_appendUnsignedOperatorsTo (enumerator_8644.current_mValue (HERE), var_precedenceGraph_8132, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 165)) ;
            }
            var_addintegerTypeCount_8589.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 167)) ;
          }
        }
        if (kBoolFalse == test_2) {
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = GALGAS_bool (kIsEqual, var_split_8661.getter_mValueAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 168)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
            if (kBoolTrue == test_3) {
              GALGAS_uint var_n_9248 = var_split_8661.getter_mValueAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 169)).getter_decimalUnsignedNumber (inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 169)) ;
              GALGAS_integerDeclarationAST var_declaration_9323 = GALGAS_integerDeclarationAST::constructor_new (GALGAS_bool (true), var_n_9248  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 170)) ;
              callExtensionMethod_enterInPrecedenceGraph ((const cPtr_integerDeclarationAST *) var_declaration_9323.ptr (), var_precedenceGraph_8132, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 171)) ;
              {
              routine_appendSignedOperatorsTo (enumerator_8644.current_mValue (HERE), var_precedenceGraph_8132, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 173)) ;
              }
              var_addintegerTypeCount_8589.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 175)) ;
            }
          }
        }
      }
    }
    enumerator_8644.gotoNextObject () ;
  }
  GALGAS_compileTimeDeclarationBarrierAST var_compileTimeDeclarationBarrierAST_9708 = GALGAS_compileTimeDeclarationBarrierAST::constructor_new (SOURCE_FILE ("ordered-declaration-list.galgas", 180)) ;
  callExtensionMethod_enterInPrecedenceGraph ((const cPtr_compileTimeDeclarationBarrierAST *) var_compileTimeDeclarationBarrierAST_9708.ptr (), var_precedenceGraph_8132, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 181)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    GALGAS_bool test_5 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("ordered-declaration-list.galgas", 183)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
    if (kBoolTrue == test_5.boolEnum ()) {
      test_5 = GALGAS_bool (gOption_omnibus_5F_options_printPasses.getter_value ()) ;
    }
    test_4 = test_5.boolEnum () ;
    if (kBoolTrue == test_4) {
      inCompiler->printMessage (GALGAS_string ("    Added ").add_operation (var_addintegerTypeCount_8589.getter_string (SOURCE_FILE ("ordered-declaration-list.galgas", 184)), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 184)).add_operation (GALGAS_string (" integer types\n"), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 184))  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 184)) ;
    }
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    GALGAS_bool test_7 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("ordered-declaration-list.galgas", 187)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
    if (kBoolTrue == test_7.boolEnum ()) {
      test_7 = GALGAS_bool (gOption_omnibus_5F_options_emitDeclarationDependencyGraphFile.getter_value ()) ;
    }
    test_6 = test_7.boolEnum () ;
    if (kBoolTrue == test_6) {
      GALGAS_string var_s_10223 = var_precedenceGraph_8132.getter_graphviz (SOURCE_FILE ("ordered-declaration-list.galgas", 188)) ;
      GALGAS_string var_filePath_10269 = constinArgument_inSourceFile.add_operation (GALGAS_string (".declarationDependency.dot"), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 189)) ;
      GALGAS_bool joker_10367 ; // Joker input parameter
      var_s_10223.method_writeToFileWhenDifferentContents (var_filePath_10269, joker_10367, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 190)) ;
    }
  }
  outArgument_outSortedDeclarationListAST = GALGAS_declarationListAST::constructor_emptyList (SOURCE_FILE ("ordered-declaration-list.galgas", 193)) ;
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    test_8 = GALGAS_bool (kIsStrictSup, var_precedenceGraph_8132.getter_undefinedNodeCount (SOURCE_FILE ("ordered-declaration-list.galgas", 194)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_8) {
      cEnumerator_lstringlist enumerator_10595 (var_precedenceGraph_8132.getter_undefinedNodeReferenceList (SOURCE_FILE ("ordered-declaration-list.galgas", 195)), kENUMERATION_UP) ;
      while (enumerator_10595.hasCurrentObject ()) {
        TC_Array <C_FixItDescription> fixItArray9 ;
        inCompiler->emitSemanticError (enumerator_10595.current_mValue (HERE).getter_location (SOURCE_FILE ("ordered-declaration-list.galgas", 196)), enumerator_10595.current_mValue (HERE).getter_string (HERE).add_operation (GALGAS_string (" is not defined in declaration dependency graph"), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 196)), fixItArray9  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 196)) ;
        enumerator_10595.gotoNextObject () ;
      }
    }
  }
  if (kBoolFalse == test_8) {
    GALGAS_declarationListAST var_unsortedSemanticDeclarationListAST_10847 ;
    GALGAS_lstringlist joker_10780 ; // Joker input parameter
    GALGAS_lstringlist joker_10855 ; // Joker input parameter
    var_precedenceGraph_8132.method_topologicalSort (outArgument_outSortedDeclarationListAST, joker_10780, var_unsortedSemanticDeclarationListAST_10847, joker_10855, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 199)) ;
    enumGalgasBool test_10 = kBoolTrue ;
    if (kBoolTrue == test_10) {
      test_10 = GALGAS_bool (kIsStrictSup, var_unsortedSemanticDeclarationListAST_10847.getter_length (SOURCE_FILE ("ordered-declaration-list.galgas", 205)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_10) {
        GALGAS_string var_s_10934 = GALGAS_string ("semantic analysis not performed, ").add_operation (var_unsortedSemanticDeclarationListAST_10847.getter_length (SOURCE_FILE ("ordered-declaration-list.galgas", 207)).getter_string (SOURCE_FILE ("ordered-declaration-list.galgas", 206)), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 206)).add_operation (GALGAS_string (" declarations are involved in circular definition:"), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 207)) ;
        cEnumerator_declarationListAST enumerator_11148 (var_unsortedSemanticDeclarationListAST_10847, kENUMERATION_UP) ;
        while (enumerator_11148.hasCurrentObject ()) {
          var_s_10934.plusAssign_operation(GALGAS_string ("\n"
            "-  ").add_operation (callExtensionGetter_keyRepresentationForErrorSignaling ((const cPtr_abstractDeclarationAST *) enumerator_11148.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 210)), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 210)), inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 210)) ;
          enumerator_11148.gotoNextObject () ;
        }
        TC_Array <C_FixItDescription> fixItArray11 ;
        inCompiler->emitSemanticError (constinArgument_inEndOfSourceFile, var_s_10934, fixItArray11  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 212)) ;
        cEnumerator_declarationListAST enumerator_11320 (var_unsortedSemanticDeclarationListAST_10847, kENUMERATION_UP) ;
        while (enumerator_11320.hasCurrentObject ()) {
          TC_Array <C_FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticError (callExtensionGetter_locationForErrorSignaling ((const cPtr_abstractDeclarationAST *) enumerator_11320.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 214)), GALGAS_string ("the ").add_operation (callExtensionGetter_keyRepresentationForErrorSignaling ((const cPtr_abstractDeclarationAST *) enumerator_11320.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 214)), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 214)).add_operation (GALGAS_string (" is declared here"), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 214)), fixItArray12  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 214)) ;
          enumerator_11320.gotoNextObject () ;
        }
      }
    }
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           Routine 'buildSemanticContext'                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_buildSemanticContext (const GALGAS_lstring constinArgument_inSourceFile,
                                   const GALGAS_ast constinArgument_inAST,
                                   GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                   GALGAS_staticListInitializationMap & ioArgument_ioStaticListValueMap,
                                   GALGAS_semanticContext & outArgument_outSemanticContext,
                                   GALGAS_declarationDecorationList & outArgument_outDecoratedDeclarationList,
                                   GALGAS_decoratedRegularRoutineList & outArgument_outDecoratedRoutineList,
                                   GALGAS_routineListIR & outArgument_outRoutineListIR,
                                   GALGAS_userLLVMTypeDefinitionListIR & outArgument_outUserLLVMTypeDefinitionListIR,
                                   C_Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSemanticContext.drop () ; // Release 'out' argument
  outArgument_outDecoratedDeclarationList.drop () ; // Release 'out' argument
  outArgument_outDecoratedRoutineList.drop () ; // Release 'out' argument
  outArgument_outRoutineListIR.drop () ; // Release 'out' argument
  outArgument_outUserLLVMTypeDefinitionListIR.drop () ; // Release 'out' argument
  outArgument_outSemanticContext = GALGAS_semanticContext::constructor_default (SOURCE_FILE ("context.galgas", 182)) ;
  outArgument_outDecoratedDeclarationList = GALGAS_declarationDecorationList::constructor_emptyList (SOURCE_FILE ("context.galgas", 183)) ;
  outArgument_outDecoratedRoutineList = GALGAS_decoratedRegularRoutineList::constructor_emptyList (SOURCE_FILE ("context.galgas", 184)) ;
  outArgument_outRoutineListIR = GALGAS_routineListIR::constructor_emptyList (SOURCE_FILE ("context.galgas", 185)) ;
  outArgument_outUserLLVMTypeDefinitionListIR = GALGAS_userLLVMTypeDefinitionListIR::constructor_emptyList (SOURCE_FILE ("context.galgas", 186)) ;
  cEnumerator_requiredFunctionDeclarationListAST enumerator_7705 (constinArgument_inAST.getter_mRequiredFunctionListAST (HERE), kENUMERATION_UP) ;
  while (enumerator_7705.hasCurrentObject ()) {
    GALGAS_lstring var_procedureMangledName_7737 = function_routineMangledNameFromAST (GALGAS_string::makeEmptyString (), enumerator_7705.current (HERE).getter_mName (HERE), enumerator_7705.current (HERE).getter_mFormalArgumentList (HERE), inCompiler COMMA_SOURCE_FILE ("context.galgas", 189)) ;
    outArgument_outSemanticContext.mProperty_mRequiredRoutineSet.addAssign_operation (var_procedureMangledName_7737.getter_string (HERE)  COMMA_SOURCE_FILE ("context.galgas", 194)) ;
    enumerator_7705.gotoNextObject () ;
  }
  extensionMethod_enterExternProcInContext (constinArgument_inAST.getter_mExternFunctionListAST (HERE), outArgument_outSemanticContext, inCompiler COMMA_SOURCE_FILE ("context.galgas", 196)) ;
  GALGAS_controlRegisterUserAccesMapAST var_controlRegisterUserAccesMapAST_8068 = constinArgument_inAST.getter_mControlRegisterUserAccesMapAST (HERE) ;
  cEnumerator_declarationListAST enumerator_8157 (constinArgument_inAST.getter_mDeclarationListAST (HERE), kENUMERATION_UP) ;
  while (enumerator_8157.hasCurrentObject ()) {
    callExtensionMethod_enterInContext ((const cPtr_abstractDeclarationAST *) enumerator_8157.current_mDeclaration (HERE).ptr (), outArgument_outSemanticContext, outArgument_outDecoratedDeclarationList, outArgument_outDecoratedRoutineList, outArgument_outRoutineListIR, ioArgument_ioStaticListValueMap, ioArgument_ioStaticEntityMap, var_controlRegisterUserAccesMapAST_8068, outArgument_outUserLLVMTypeDefinitionListIR, inCompiler COMMA_SOURCE_FILE ("context.galgas", 202)) ;
    enumerator_8157.gotoNextObject () ;
  }
  cEnumerator_controlRegisterUserAccesMapAST enumerator_8647 (var_controlRegisterUserAccesMapAST_8068, kENUMERATION_UP) ;
  while (enumerator_8647.hasCurrentObject ()) {
    TC_Array <C_FixItDescription> fixItArray0 ;
    inCompiler->emitSemanticError (enumerator_8647.current_lkey (HERE).getter_location (SOURCE_FILE ("context.galgas", 215)), GALGAS_string ("this control register is not defined"), fixItArray0  COMMA_SOURCE_FILE ("context.galgas", 215)) ;
    enumerator_8647.gotoNextObject () ;
  }
  {
  routine_buildGlobalConstantMapHTMLFile (outArgument_outSemanticContext.getter_mGlobalConstantMap (HERE), constinArgument_inSourceFile, inCompiler  COMMA_SOURCE_FILE ("context.galgas", 218)) ;
  }
  {
  routine_buildTypeMapHTMLFile (outArgument_outSemanticContext.getter_mTypeMap (HERE), outArgument_outSemanticContext.getter_mRoutineMap (HERE), outArgument_outSemanticContext.getter_mInfixOperatorMap (HERE), outArgument_outSemanticContext.getter_mPrefixOperatorMap (HERE), outArgument_outSemanticContext.getter_mAssignmentOperatorMap (HERE), constinArgument_inSourceFile, inCompiler  COMMA_SOURCE_FILE ("context.galgas", 223)) ;
  }
  {
  routine_buildControlRegisterMapHTMLFile (outArgument_outSemanticContext.getter_mControlRegisterGroupMap (HERE), constinArgument_inSourceFile, inCompiler  COMMA_SOURCE_FILE ("context.galgas", 232)) ;
  }
  extensionMethod_enterInContext (constinArgument_inAST.getter_mTaskListAST (HERE), outArgument_outSemanticContext, outArgument_outDecoratedDeclarationList, outArgument_outDecoratedRoutineList, outArgument_outRoutineListIR, ioArgument_ioStaticEntityMap, outArgument_outUserLLVMTypeDefinitionListIR, inCompiler COMMA_SOURCE_FILE ("context.galgas", 237)) ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     Function 'combineTypeNamesForInfixOperator'                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring function_combineTypeNamesForInfixOperator (const GALGAS_string & constinArgument_inLeftTypeName,
                                                          const GALGAS_string & constinArgument_inRightTypeName,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = constinArgument_inLeftTypeName.add_operation (GALGAS_string (","), inCompiler COMMA_SOURCE_FILE ("context.galgas", 250)).add_operation (constinArgument_inRightTypeName, inCompiler COMMA_SOURCE_FILE ("context.galgas", 250)).getter_nowhere (SOURCE_FILE ("context.galgas", 250)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_combineTypeNamesForInfixOperator [3] = {
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_combineTypeNamesForInfixOperator (C_Compiler * inCompiler,
                                                                                 const cObjectArray & inEffectiveParameterArray,
                                                                                 const GALGAS_location & /* inErrorLocation */
                                                                                 COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  const GALGAS_string operand1 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_combineTypeNamesForInfixOperator (operand0,
                                                    operand1,
                                                    inCompiler
                                                    COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_combineTypeNamesForInfixOperator ("combineTypeNamesForInfixOperator",
                                                                                  functionWithGenericHeader_combineTypeNamesForInfixOperator,
                                                                                  & kTypeDescriptor_GALGAS_lstring,
                                                                                  2,
                                                                                  functionArgs_combineTypeNamesForInfixOperator) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       Once function 'compileTimeIntegerType'                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_omnibusType onceFunction_compileTimeIntegerType (C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_omnibusType result_result ; // Returned variable
  result_result = GALGAS_omnibusType::constructor_new (GALGAS_propertyGetterMap::constructor_emptyMap (SOURCE_FILE ("types.galgas", 171)), GALGAS_propertySetterMap::constructor_emptyMap (SOURCE_FILE ("types.galgas", 172)), GALGAS_classConstantMap::constructor_emptyMap (SOURCE_FILE ("types.galgas", 173)), GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("types.galgas", 174)), GALGAS_subscript::constructor_noSubscript (SOURCE_FILE ("types.galgas", 175)), GALGAS_omnibusTypeAttributes::constructor_equatable (SOURCE_FILE ("types.galgas", 176)).operator_or (GALGAS_omnibusTypeAttributes::constructor_copyable (SOURCE_FILE ("types.galgas", 176)) COMMA_SOURCE_FILE ("types.galgas", 176)), function_ctIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("types.galgas", 177)), GALGAS_typeKind::constructor_compileTimeInteger (SOURCE_FILE ("types.galgas", 178)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("types.galgas", 170)) ;
//---
  return result_result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function implementation                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static bool gOnceFunctionResultAvailable_compileTimeIntegerType = false ;
static GALGAS_omnibusType gOnceFunctionResult_compileTimeIntegerType ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_omnibusType function_compileTimeIntegerType (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_compileTimeIntegerType) {
    gOnceFunctionResult_compileTimeIntegerType = onceFunction_compileTimeIntegerType (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_compileTimeIntegerType = true ;
  }
  return gOnceFunctionResult_compileTimeIntegerType ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void releaseOnceFunctionResult_compileTimeIntegerType (void) {
  gOnceFunctionResult_compileTimeIntegerType.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gEpilogueForOnceFunction_compileTimeIntegerType (NULL,
                                                                    releaseOnceFunctionResult_compileTimeIntegerType) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_compileTimeIntegerType [1] = {
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_compileTimeIntegerType (C_Compiler * inCompiler,
                                                                       const cObjectArray & /* inEffectiveParameterArray */,
                                                                       const GALGAS_location & /* inErrorLocation */
                                                                       COMMA_LOCATION_ARGS) {
  return function_compileTimeIntegerType (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_compileTimeIntegerType ("compileTimeIntegerType",
                                                                        functionWithGenericHeader_compileTimeIntegerType,
                                                                        & kTypeDescriptor_GALGAS_omnibusType,
                                                                        0,
                                                                        functionArgs_compileTimeIntegerType) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         Once function 'compileTimeBoolType'                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_omnibusType onceFunction_compileTimeBoolType (C_Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_omnibusType result_result ; // Returned variable
  result_result = GALGAS_omnibusType::constructor_new (GALGAS_propertyGetterMap::constructor_emptyMap (SOURCE_FILE ("types.galgas", 187)), GALGAS_propertySetterMap::constructor_emptyMap (SOURCE_FILE ("types.galgas", 188)), GALGAS_classConstantMap::constructor_emptyMap (SOURCE_FILE ("types.galgas", 189)), GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("types.galgas", 190)), GALGAS_subscript::constructor_noSubscript (SOURCE_FILE ("types.galgas", 191)), GALGAS_omnibusTypeAttributes::constructor_equatable (SOURCE_FILE ("types.galgas", 192)).operator_or (GALGAS_omnibusTypeAttributes::constructor_copyable (SOURCE_FILE ("types.galgas", 192)) COMMA_SOURCE_FILE ("types.galgas", 192)), function_ctBoolTypeName (inCompiler COMMA_SOURCE_FILE ("types.galgas", 193)), GALGAS_typeKind::constructor_compileTimeBool (SOURCE_FILE ("types.galgas", 194)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("types.galgas", 186)) ;
//---
  return result_result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function implementation                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static bool gOnceFunctionResultAvailable_compileTimeBoolType = false ;
static GALGAS_omnibusType gOnceFunctionResult_compileTimeBoolType ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_omnibusType function_compileTimeBoolType (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_compileTimeBoolType) {
    gOnceFunctionResult_compileTimeBoolType = onceFunction_compileTimeBoolType (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_compileTimeBoolType = true ;
  }
  return gOnceFunctionResult_compileTimeBoolType ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void releaseOnceFunctionResult_compileTimeBoolType (void) {
  gOnceFunctionResult_compileTimeBoolType.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gEpilogueForOnceFunction_compileTimeBoolType (NULL,
                                                                 releaseOnceFunctionResult_compileTimeBoolType) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_compileTimeBoolType [1] = {
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_compileTimeBoolType (C_Compiler * inCompiler,
                                                                    const cObjectArray & /* inEffectiveParameterArray */,
                                                                    const GALGAS_location & /* inErrorLocation */
                                                                    COMMA_LOCATION_ARGS) {
  return function_compileTimeBoolType (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_compileTimeBoolType ("compileTimeBoolType",
                                                                     functionWithGenericHeader_compileTimeBoolType,
                                                                     & kTypeDescriptor_GALGAS_omnibusType,
                                                                     0,
                                                                     functionArgs_compileTimeBoolType) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              Once function 'boolType'                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_omnibusType onceFunction_boolType (C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_omnibusType result_result ; // Returned variable
  result_result = GALGAS_omnibusType::constructor_new (GALGAS_propertyGetterMap::constructor_emptyMap (SOURCE_FILE ("types.galgas", 203)), GALGAS_propertySetterMap::constructor_emptyMap (SOURCE_FILE ("types.galgas", 204)), GALGAS_classConstantMap::constructor_emptyMap (SOURCE_FILE ("types.galgas", 205)), GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("types.galgas", 206)), GALGAS_subscript::constructor_noSubscript (SOURCE_FILE ("types.galgas", 207)), GALGAS_omnibusTypeAttributes::constructor_equatable (SOURCE_FILE ("types.galgas", 208)).operator_or (GALGAS_omnibusTypeAttributes::constructor_copyable (SOURCE_FILE ("types.galgas", 208)) COMMA_SOURCE_FILE ("types.galgas", 208)).operator_or (GALGAS_omnibusTypeAttributes::constructor_instanciable (SOURCE_FILE ("types.galgas", 208)) COMMA_SOURCE_FILE ("types.galgas", 208)), function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("types.galgas", 209)), GALGAS_typeKind::constructor_boolean (SOURCE_FILE ("types.galgas", 210)), function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("types.galgas", 211))  COMMA_SOURCE_FILE ("types.galgas", 202)) ;
//---
  return result_result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function implementation                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static bool gOnceFunctionResultAvailable_boolType = false ;
static GALGAS_omnibusType gOnceFunctionResult_boolType ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_omnibusType function_boolType (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_boolType) {
    gOnceFunctionResult_boolType = onceFunction_boolType (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_boolType = true ;
  }
  return gOnceFunctionResult_boolType ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void releaseOnceFunctionResult_boolType (void) {
  gOnceFunctionResult_boolType.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gEpilogueForOnceFunction_boolType (NULL,
                                                      releaseOnceFunctionResult_boolType) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_boolType [1] = {
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_boolType (C_Compiler * inCompiler,
                                                         const cObjectArray & /* inEffectiveParameterArray */,
                                                         const GALGAS_location & /* inErrorLocation */
                                                         COMMA_LOCATION_ARGS) {
  return function_boolType (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_boolType ("boolType",
                                                          functionWithGenericHeader_boolType,
                                                          & kTypeDescriptor_GALGAS_omnibusType,
                                                          0,
                                                          functionArgs_boolType) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          Once function 'literalStringType'                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_omnibusType onceFunction_literalStringType (C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_omnibusType result_result ; // Returned variable
  result_result = GALGAS_omnibusType::constructor_new (GALGAS_propertyGetterMap::constructor_emptyMap (SOURCE_FILE ("types.galgas", 219)), GALGAS_propertySetterMap::constructor_emptyMap (SOURCE_FILE ("types.galgas", 220)), GALGAS_classConstantMap::constructor_emptyMap (SOURCE_FILE ("types.galgas", 221)), GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("types.galgas", 222)), GALGAS_subscript::constructor_literalString (SOURCE_FILE ("types.galgas", 223)), GALGAS_omnibusTypeAttributes::constructor_instanciable (SOURCE_FILE ("types.galgas", 224)).operator_or (GALGAS_omnibusTypeAttributes::constructor_equatable (SOURCE_FILE ("types.galgas", 224)) COMMA_SOURCE_FILE ("types.galgas", 224)).operator_or (GALGAS_omnibusTypeAttributes::constructor_copyable (SOURCE_FILE ("types.galgas", 224)) COMMA_SOURCE_FILE ("types.galgas", 224)), function_staticStringTypeName (inCompiler COMMA_SOURCE_FILE ("types.galgas", 225)), GALGAS_typeKind::constructor_literalString (SOURCE_FILE ("types.galgas", 226)), function_staticStringTypeName (inCompiler COMMA_SOURCE_FILE ("types.galgas", 227))  COMMA_SOURCE_FILE ("types.galgas", 218)) ;
//---
  return result_result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function implementation                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static bool gOnceFunctionResultAvailable_literalStringType = false ;
static GALGAS_omnibusType gOnceFunctionResult_literalStringType ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_omnibusType function_literalStringType (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_literalStringType) {
    gOnceFunctionResult_literalStringType = onceFunction_literalStringType (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_literalStringType = true ;
  }
  return gOnceFunctionResult_literalStringType ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void releaseOnceFunctionResult_literalStringType (void) {
  gOnceFunctionResult_literalStringType.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gEpilogueForOnceFunction_literalStringType (NULL,
                                                               releaseOnceFunctionResult_literalStringType) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_literalStringType [1] = {
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_literalStringType (C_Compiler * inCompiler,
                                                                  const cObjectArray & /* inEffectiveParameterArray */,
                                                                  const GALGAS_location & /* inErrorLocation */
                                                                  COMMA_LOCATION_ARGS) {
  return function_literalStringType (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_literalStringType ("literalStringType",
                                                                   functionWithGenericHeader_literalStringType,
                                                                   & kTypeDescriptor_GALGAS_omnibusType,
                                                                   0,
                                                                   functionArgs_literalStringType) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              Once function 'voidType'                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_omnibusType onceFunction_voidType (C_Compiler * /* inCompiler */
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_omnibusType result_result ; // Returned variable
  result_result = GALGAS_omnibusType::constructor_new (GALGAS_propertyGetterMap::constructor_emptyMap (SOURCE_FILE ("types.galgas", 235)), GALGAS_propertySetterMap::constructor_emptyMap (SOURCE_FILE ("types.galgas", 236)), GALGAS_classConstantMap::constructor_emptyMap (SOURCE_FILE ("types.galgas", 237)), GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("types.galgas", 238)), GALGAS_subscript::constructor_noSubscript (SOURCE_FILE ("types.galgas", 239)), GALGAS_omnibusTypeAttributes::constructor_none (SOURCE_FILE ("types.galgas", 240)), GALGAS_string::makeEmptyString (), GALGAS_typeKind::constructor_void (SOURCE_FILE ("types.galgas", 242)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("types.galgas", 234)) ;
//---
  return result_result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function implementation                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static bool gOnceFunctionResultAvailable_voidType = false ;
static GALGAS_omnibusType gOnceFunctionResult_voidType ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_omnibusType function_voidType (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_voidType) {
    gOnceFunctionResult_voidType = onceFunction_voidType (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_voidType = true ;
  }
  return gOnceFunctionResult_voidType ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void releaseOnceFunctionResult_voidType (void) {
  gOnceFunctionResult_voidType.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gEpilogueForOnceFunction_voidType (NULL,
                                                      releaseOnceFunctionResult_voidType) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_voidType [1] = {
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_voidType (C_Compiler * inCompiler,
                                                         const cObjectArray & /* inEffectiveParameterArray */,
                                                         const GALGAS_location & /* inErrorLocation */
                                                         COMMA_LOCATION_ARGS) {
  return function_voidType (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_voidType ("voidType",
                                                          functionWithGenericHeader_voidType,
                                                          & kTypeDescriptor_GALGAS_omnibusType,
                                                          0,
                                                          functionArgs_voidType) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           Routine 'buildTypeMapHTMLFile'                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_buildTypeMapHTMLFile (const GALGAS_unifiedTypeMap constinArgument_inTypeMap,
                                   const GALGAS_routineMapForContext constinArgument_inRoutineMap,
                                   const GALGAS_infixOperatorMap constinArgument_inTerminusInfixOperatorMap,
                                   const GALGAS_prefixOperatorMap constinArgument_inTerminusPrefixOperatorMap,
                                   const GALGAS_assignmentOperatorMap constinArgument_inAssignmentOperatorMap,
                                   const GALGAS_lstring constinArgument_inSourceFile,
                                   C_Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_typeDumpFilePath_18946 = constinArgument_inSourceFile.getter_string (HERE).add_operation (GALGAS_string (".types.html"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 473)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (gOption_omnibus_5F_options_emitTypeMap.getter_value ()).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_stringset var_firstLetterSet_19067 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("types.galgas", 475)) ;
      cEnumerator_unifiedTypeMap enumerator_19096 (constinArgument_inTypeMap, kENUMERATION_UP) ;
      while (enumerator_19096.hasCurrentObject ()) {
        var_firstLetterSet_19067.addAssign_operation (enumerator_19096.current_lkey (HERE).getter_string (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("types.galgas", 477)).getter_string (SOURCE_FILE ("types.galgas", 477))  COMMA_SOURCE_FILE ("types.galgas", 477)) ;
        enumerator_19096.gotoNextObject () ;
      }
      GALGAS_string var_tableOfTypeString_19204 = GALGAS_string::makeEmptyString () ;
      GALGAS_char var_currentFirstLetter_19238 = GALGAS_char (TO_UNICODE (32)) ;
      cEnumerator_unifiedTypeMap enumerator_19274 (constinArgument_inTypeMap, kENUMERATION_UP) ;
      while (enumerator_19274.hasCurrentObject ()) {
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = GALGAS_bool (kIsNotEqual, var_currentFirstLetter_19238.objectCompare (enumerator_19274.current_lkey (HERE).getter_string (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("types.galgas", 482)))).boolEnum () ;
          if (kBoolTrue == test_1) {
            var_currentFirstLetter_19238 = enumerator_19274.current_lkey (HERE).getter_string (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("types.galgas", 483)) ;
            var_tableOfTypeString_19204.plusAssign_operation(GALGAS_string ("<br><a name=\"").add_operation (var_currentFirstLetter_19238.getter_uint (SOURCE_FILE ("types.galgas", 484)).getter_string (SOURCE_FILE ("types.galgas", 484)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 484)).add_operation (GALGAS_string ("\"><b>"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 484)).add_operation (var_currentFirstLetter_19238.getter_string (SOURCE_FILE ("types.galgas", 484)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 484)).add_operation (GALGAS_string ("</b></a><br>"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 484)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 484)) ;
          }
        }
        var_tableOfTypeString_19204.plusAssign_operation(function_linkForHTMLTypeMap (enumerator_19274.current_lkey (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("types.galgas", 486)).add_operation (GALGAS_string ("<br>"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 486)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 486)) ;
        enumerator_19274.gotoNextObject () ;
      }
      GALGAS_string var_typeDumpString_19667 = GALGAS_string (filewrapperTemplate_typeDumpGenerationTemplate_dump (inCompiler, constinArgument_inSourceFile.getter_string (HERE).getter_lastPathComponent (SOURCE_FILE ("types.galgas", 489)), constinArgument_inTypeMap, var_firstLetterSet_19067, var_tableOfTypeString_19204, constinArgument_inRoutineMap, constinArgument_inTerminusInfixOperatorMap, constinArgument_inTerminusPrefixOperatorMap, constinArgument_inAssignmentOperatorMap COMMA_SOURCE_FILE ("types.galgas", 488))) ;
      GALGAS_bool joker_20017 ; // Joker input parameter
      var_typeDumpString_19667.method_writeToFileWhenDifferentContents (var_typeDumpFilePath_18946, joker_20017, inCompiler COMMA_SOURCE_FILE ("types.galgas", 498)) ;
    }
  }
  if (kBoolFalse == test_0) {
    {
    GALGAS_string::class_method_deleteFileIfExists (var_typeDumpFilePath_18946, inCompiler COMMA_SOURCE_FILE ("types.galgas", 500)) ;
    }
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      Filewrapper 'typeDumpGenerationTemplate'                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_typeDumpGenerationTemplate_0 [1] = {
  NULL
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_typeDumpGenerationTemplate_0 [1] = {
  NULL
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_typeDumpGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_typeDumpGenerationTemplate_0,
  0,
  gWrapperAllDirectories_typeDumpGenerationTemplate_0
) ;


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                               Filewrapper template 'typeDumpGenerationTemplate dump'                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string filewrapperTemplate_typeDumpGenerationTemplate_dump (C_Compiler * inCompiler,
                                                                   const GALGAS_string & in_PROJECT_5F_NAME,
                                                                   const GALGAS_unifiedTypeMap & in_GLOBAL_5F_TYPE_5F_MAP,
                                                                   const GALGAS_stringset & in_FIRST_5F_LETTER_5F_SET,
                                                                   const GALGAS_string & in_TABLE_5F_OF_5F_TYPES_5F_STRING,
                                                                   const GALGAS_routineMapForContext & in_ALL_5F_ROUTINE_5F_MAP,
                                                                   const GALGAS_infixOperatorMap & in_INFIX_5F_OPERATOR_5F_MAP,
                                                                   const GALGAS_prefixOperatorMap & in_PREFIX_5F_OPERATOR_5F_MAP,
                                                                   const GALGAS_assignmentOperatorMap & in_ASSIGNMENT_5F_OPERATOR_5F_MAP
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.01//EN\" \"http://www.w3.org/TR/html4/strict.dtd\">\n"
    "<html>\n"
    "<head>\n"
    "<meta http-equiv=\"Content-Type\" content=\"text/html; charset=utf-8\">\n"
    "<title>Global constants of " ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "</title>\n"
    "<style type=\"text/css\">body {\n"
    "  font-family: Georgia, sans-serif ;\n"
    "  font-size: small ;\n"
    "}\n"
    "\n"
    "h1 {\n"
    "  text-align: center ;\n"
    "}\n"
    "\n"
    ".selecteur {\n"
    "  color:green ;\n"
    "}\n"
    "\n"
    "a.header_link {\n"
    "  background-color: #FFFFCC ;\n"
    "}\n"
    "\n"
    "a:visited, a:link, a:active{\n"
    "  color: blue ;\n"
    "  text-decoration: underline ;\n"
    "}\n"
    "\n"
    "a:hover {\n"
    "  color:green ;\n"
    "  background-color: #FFFF00 ;\n"
    "  text-decoration: none ;\n"
    "}\n"
    "\n"
    "table.result {\n"
    "  border: 1px solid #666666 ;\n"
    "}\n"
    "\n"
    "td.result_title {\n"
    "  font-weight: bold ;\n"
    "  text-align: center ;\n"
    "  background-color: yellow ;\n"
    "}\n"
    "\n"
    "tr.result_line {\n"
    "  background-color: #EEEEEE ;\n"
    "}\n"
    "\n"
    "</style>\n"
    "</head>\n"
    "<body>\n"
    "<div>\n"
    "<h1>Types defined by " ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "</h1>\n"
    "<p>This document lists all " ;
  result << in_GLOBAL_5F_TYPE_5F_MAP.getter_count (SOURCE_FILE ("typeDump.html.galgasTemplate", 53)).getter_string (SOURCE_FILE ("typeDump.html.galgasTemplate", 53)).stringValue () ;
  result << " defined types, sorted by name.</p>\n"
    "<p>" ;
  GALGAS_uint index_987_ (0) ;
  if (in_FIRST_5F_LETTER_5F_SET.isValid ()) {
    cEnumerator_stringset enumerator_987 (in_FIRST_5F_LETTER_5F_SET, kENUMERATION_UP) ;
    while (enumerator_987.hasCurrentObject ()) {
      result << "<a class=\"header_link\" href=\"#" ;
      result << enumerator_987.current_key (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 56)).getter_uint (SOURCE_FILE ("typeDump.html.galgasTemplate", 56)).getter_string (SOURCE_FILE ("typeDump.html.galgasTemplate", 56)).stringValue () ;
      result << "\">" ;
      result << enumerator_987.current_key (HERE).stringValue () ;
      result << "</a>" ;
      if (enumerator_987.hasNextObject ()) {
        result << " - " ;
      }
      index_987_.increment () ;
      enumerator_987.gotoNextObject () ;
    }
  }
  result << "</p>\n"
    "<p>" ;
  result << in_TABLE_5F_OF_5F_TYPES_5F_STRING.stringValue () ;
  result << "\n"
    "</p>\n" ;
  GALGAS_uint index_1163_ (0) ;
  if (in_GLOBAL_5F_TYPE_5F_MAP.isValid ()) {
    cEnumerator_unifiedTypeMap enumerator_1163 (in_GLOBAL_5F_TYPE_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_1163.hasCurrentObject ()) {
      result << "\n"
        "<h2>\n"
        "  <a name=\"" ;
      result << enumerator_1163.current_lkey (HERE).getter_string (HERE).stringValue () ;
      result << "\">" ;
      result << enumerator_1163.current_lkey (HERE).getter_string (HERE).stringValue () ;
      result << "</a>\n"
        "</h2>\n"
        "<p>\n"
        "Kind: " ;
      result << callExtensionGetter_descriptionForHTMLFile ((const cPtr_omnibusType *) enumerator_1163.current_type (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 68)).stringValue () ;
      result << "<br>\n"
        "Description: " ;
      result << enumerator_1163.current_type (HERE).getter_omnibusTypeDescriptionName (SOURCE_FILE ("typeDump.html.galgasTemplate", 69)).stringValue () ;
      result << "<br>\n"
        "LLVM Base Name: " ;
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_1163.current_type (HERE).getter_llvmBaseTypeName (SOURCE_FILE ("typeDump.html.galgasTemplate", 70)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << GALGAS_string ("<i>none, compile time type</i>").stringValue () ;
      }else if (kBoolFalse == test_0) {
        result << enumerator_1163.current_type (HERE).getter_llvmBaseTypeName (SOURCE_FILE ("typeDump.html.galgasTemplate", 70)).stringValue () ;
      }
      result << "<br>\n"
        "LLVM Name: " ;
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_1163.current_type (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 71)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_1) {
        result << GALGAS_string ("<i>none, compile time type</i>").stringValue () ;
      }else if (kBoolFalse == test_1) {
        result << callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_1163.current_type (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 71)).stringValue () ;
      }
      result << "\n"
        "</p>\n"
        "  " ;
      const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, enumerator_1163.current_type (HERE).getter_propertyGetterMap (SOURCE_FILE ("typeDump.html.galgasTemplate", 73)).getter_count (SOURCE_FILE ("typeDump.html.galgasTemplate", 73)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_2) {
        result << "\n"
          "    <table class=\"result\">\n"
          "      <tr>\n"
          "        <td class=\"result_title\">Getter Name</td>\n"
          "        <td class=\"result_title\">Visibility</td>\n"
          "        <td class=\"result_title\">Kind</td>\n"
          "      </tr>\n"
          "    " ;
        GALGAS_uint index_1860_ (0) ;
        if (enumerator_1163.current_type (HERE).getter_propertyGetterMap (SOURCE_FILE ("typeDump.html.galgasTemplate", 80)).isValid ()) {
          cEnumerator_propertyGetterMap enumerator_1860 (enumerator_1163.current_type (HERE).getter_propertyGetterMap (SOURCE_FILE ("typeDump.html.galgasTemplate", 80)), kENUMERATION_UP) ;
          while (enumerator_1860.hasCurrentObject ()) {
            result << "\n"
              "      <tr class=\"result_line\">\n"
              "        <td>" ;
            result << enumerator_1860.current_lkey (HERE).getter_string (HERE).stringValue () ;
            result << "</td>\n"
              "        <td>" ;
            const enumGalgasBool test_3 = enumerator_1860.current_mIsPublic (HERE).boolEnum () ;
            if (kBoolTrue == test_3) {
              result << GALGAS_string ("public").stringValue () ;
            }else if (kBoolFalse == test_3) {
              result << GALGAS_string ("private").stringValue () ;
            }
            result << "</td>\n"
              "        <td>" ;
            switch (enumerator_1860.current_mAccess (HERE).enumValue ()) {
            case GALGAS_propertyGetterKind::kNotBuilt :
              break ;
            case GALGAS_propertyGetterKind::kEnum_storedProperty :
              {
                const cEnumAssociatedValues_propertyGetterKind_storedProperty * extractPtr_2204 = (const cEnumAssociatedValues_propertyGetterKind_storedProperty *) (enumerator_1860.current_mAccess (HERE).unsafePointer ()) ;
                const GALGAS_omnibusType extractedValue_propertyType = extractPtr_2204->mAssociatedValue0 ;
                const GALGAS_uint extractedValue_propertyIndex = extractPtr_2204->mAssociatedValue1 ;
                result << "Stored property, index " ;
                result << extractedValue_propertyIndex.getter_string (SOURCE_FILE ("typeDump.html.galgasTemplate", 87)).stringValue () ;
                result << ", type " ;
                result << callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extractedValue_propertyType.ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 87)).stringValue () ;
              }
              break ;
            case GALGAS_propertyGetterKind::kEnum_computedProperty :
              {
                const cEnumAssociatedValues_propertyGetterKind_computedProperty * extractPtr_2458 = (const cEnumAssociatedValues_propertyGetterKind_computedProperty *) (enumerator_1860.current_mAccess (HERE).unsafePointer ()) ;
                const GALGAS_unifiedTypeMap_2D_proxy extractedValue_propertyTypeProxy = extractPtr_2458->mAssociatedValue0 ;
                const GALGAS_routineLLVMNameDict extractedValue_modeDictionary = extractPtr_2458->mAssociatedValue1 ;
                result << "Computed property, type " ;
                result << extractedValue_propertyTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 89)).stringValue () ;
                result << ", routine LLVM name:" ;
                GALGAS_uint index_2400_ (0) ;
                if (extractedValue_modeDictionary.isValid ()) {
                  cEnumerator_routineLLVMNameDict enumerator_2400 (extractedValue_modeDictionary, kENUMERATION_UP) ;
                  while (enumerator_2400.hasCurrentObject ()) {
                    result << "<br>" ;
                    result << extensionGetter_string (enumerator_2400.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 90)).stringValue () ;
                    result << " : " ;
                    result << enumerator_2400.current_mRoutineLLVMName (HERE).stringValue () ;
                    index_2400_.increment () ;
                    enumerator_2400.gotoNextObject () ;
                  }
                }
              }
              break ;
            case GALGAS_propertyGetterKind::kEnum_constantProperty :
              {
                const cEnumAssociatedValues_propertyGetterKind_constantProperty * extractPtr_2614 = (const cEnumAssociatedValues_propertyGetterKind_constantProperty *) (enumerator_1860.current_mAccess (HERE).unsafePointer ()) ;
                const GALGAS_objectIR extractedValue_propertyValue = extractPtr_2614->mAssociatedValue0 ;
                result << "Constant property, type " ;
                result << callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (extractedValue_propertyValue, inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 92)).ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 92)).stringValue () ;
                result << ", value " ;
                result << extensionGetter_llvmName (extractedValue_propertyValue, inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 92)).stringValue () ;
              }
              break ;
            }
            result << "</td>\n"
              "      </tr>\n"
              "    " ;
            index_1860_.increment () ;
            enumerator_1860.gotoNextObject () ;
          }
        }
        result << "\n"
          "    </table>\n"
          "    <br>\n"
          "  " ;
      }else if (kBoolFalse == test_2) {
      }
      result << "\n"
        "  " ;
      const enumGalgasBool test_4 = GALGAS_bool (kIsStrictSup, enumerator_1163.current_type (HERE).getter_propertySetterMap (SOURCE_FILE ("typeDump.html.galgasTemplate", 100)).getter_count (SOURCE_FILE ("typeDump.html.galgasTemplate", 100)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_4) {
        result << "\n"
          "    <table class=\"result\">\n"
          "      <tr>\n"
          "        <td class=\"result_title\">Setter Name</td>\n"
          "        <td class=\"result_title\">Visibility</td>\n"
          "        <td class=\"result_title\">Kind</td>\n"
          "      </tr>\n"
          "    " ;
        GALGAS_uint index_2987_ (0) ;
        if (enumerator_1163.current_type (HERE).getter_propertySetterMap (SOURCE_FILE ("typeDump.html.galgasTemplate", 107)).isValid ()) {
          cEnumerator_propertySetterMap enumerator_2987 (enumerator_1163.current_type (HERE).getter_propertySetterMap (SOURCE_FILE ("typeDump.html.galgasTemplate", 107)), kENUMERATION_UP) ;
          while (enumerator_2987.hasCurrentObject ()) {
            result << "\n"
              "      <tr class=\"result_line\">\n"
              "        <td>" ;
            result << enumerator_2987.current_lkey (HERE).getter_string (HERE).stringValue () ;
            result << "</td>\n"
              "        <td>" ;
            const enumGalgasBool test_5 = enumerator_2987.current_mIsPublic (HERE).boolEnum () ;
            if (kBoolTrue == test_5) {
              result << GALGAS_string ("public").stringValue () ;
            }else if (kBoolFalse == test_5) {
              result << GALGAS_string ("private").stringValue () ;
            }
            result << "</td>\n"
              "        <td>" ;
            switch (enumerator_2987.current_mAccess (HERE).enumValue ()) {
            case GALGAS_propertySetterKind::kNotBuilt :
              break ;
            case GALGAS_propertySetterKind::kEnum_storedProperty :
              {
                const cEnumAssociatedValues_propertySetterKind_storedProperty * extractPtr_3331 = (const cEnumAssociatedValues_propertySetterKind_storedProperty *) (enumerator_2987.current_mAccess (HERE).unsafePointer ()) ;
                const GALGAS_omnibusType extractedValue_propertyType = extractPtr_3331->mAssociatedValue0 ;
                const GALGAS_uint extractedValue_propertyIndex = extractPtr_3331->mAssociatedValue1 ;
                result << "Stored property, index " ;
                result << extractedValue_propertyIndex.getter_string (SOURCE_FILE ("typeDump.html.galgasTemplate", 114)).stringValue () ;
                result << ", type " ;
                result << callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extractedValue_propertyType.ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 114)).stringValue () ;
              }
              break ;
            case GALGAS_propertySetterKind::kEnum_computedProperty :
              {
                const cEnumAssociatedValues_propertySetterKind_computedProperty * extractPtr_3618 = (const cEnumAssociatedValues_propertySetterKind_computedProperty *) (enumerator_2987.current_mAccess (HERE).unsafePointer ()) ;
                const GALGAS_unifiedTypeMap_2D_proxy extractedValue_propertyTypeProxy = extractPtr_3618->mAssociatedValue0 ;
                const GALGAS_routineLLVMNameDict extractedValue_getterModeDictionary = extractPtr_3618->mAssociatedValue1 ;
                const GALGAS_routineLLVMNameDict extractedValue_setterModeDictionary = extractPtr_3618->mAssociatedValue2 ;
                result << "Computed property, type " ;
                result << extractedValue_propertyTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 116)).stringValue () ;
                result << ", routine LLVM name:" ;
                GALGAS_uint index_3560_ (0) ;
                if (extractedValue_setterModeDictionary.isValid ()) {
                  cEnumerator_routineLLVMNameDict enumerator_3560 (extractedValue_setterModeDictionary, kENUMERATION_UP) ;
                  while (enumerator_3560.hasCurrentObject ()) {
                    result << "<br>" ;
                    result << extensionGetter_string (enumerator_3560.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 117)).stringValue () ;
                    result << " : " ;
                    result << enumerator_3560.current_mRoutineLLVMName (HERE).stringValue () ;
                    index_3560_.increment () ;
                    enumerator_3560.gotoNextObject () ;
                  }
                }
              }
              break ;
            }
            result << "</td>\n"
              "      </tr>\n"
              "    " ;
            index_2987_.increment () ;
            enumerator_2987.gotoNextObject () ;
          }
        }
        result << "\n"
          "    </table>\n"
          "    <br>\n"
          "  " ;
      }else if (kBoolFalse == test_4) {
      }
      result << "\n" ;
      index_1163_.increment () ;
      enumerator_1163.gotoNextObject () ;
    }
  }
  result << "\n"
    "<p>\n"
    "<h2>\n"
    "  Routines\n"
    "</h2>\n"
    "  <table class=\"result\">\n"
    "    <tr>\n"
    "      <td class=\"result_title\">Standalone routine Name</td>\n"
    "      <td class=\"result_title\">Visibility</td>\n"
    "      <td class=\"result_title\">Typed signature</td>\n"
    "      <td class=\"result_title\">Routine LLVM Name, by mode</td>\n"
    "    </tr>\n"
    "  " ;
  GALGAS_uint index_4037_ (0) ;
  if (in_ALL_5F_ROUTINE_5F_MAP.isValid ()) {
    cEnumerator_routineMapForContext enumerator_4037 (in_ALL_5F_ROUTINE_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_4037.hasCurrentObject ()) {
      result << "\n"
        "    <tr class=\"result_line\">\n"
        "      <td>" ;
      result << enumerator_4037.current_lkey (HERE).getter_string (HERE).stringValue () ;
      result << "</td>\n"
        "      <td>" ;
      const enumGalgasBool test_6 = enumerator_4037.current_mIsPublic (HERE).boolEnum () ;
      if (kBoolTrue == test_6) {
        result << GALGAS_string ("public").stringValue () ;
      }else if (kBoolFalse == test_6) {
        result << GALGAS_string ("private").stringValue () ;
      }
      result << "</td>\n"
        "      <td>" ;
      result << extensionGetter_typedString (enumerator_4037.current_mSignature (HERE), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 141)).stringValue () ;
      const enumGalgasBool test_7 = enumerator_4037.current_mReturnTypeProxy (HERE).getter_isNull (SOURCE_FILE ("typeDump.html.galgasTemplate", 141)).boolEnum () ;
      if (kBoolTrue == test_7) {
      }else if (kBoolFalse == test_7) {
        result << " -> " ;
        result << enumerator_4037.current_mReturnTypeProxy (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 141)).stringValue () ;
      }
      result << "</td>\n"
        "      <td>" ;
      GALGAS_uint index_4374_ (0) ;
      if (enumerator_4037.current_mModeDictionary (HERE).isValid ()) {
        cEnumerator_routineLLVMNameDict enumerator_4374 (enumerator_4037.current_mModeDictionary (HERE), kENUMERATION_UP) ;
        while (enumerator_4374.hasCurrentObject ()) {
          result << extensionGetter_string (enumerator_4374.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 142)).stringValue () ;
          result << " : " ;
          result << enumerator_4374.current_mRoutineLLVMName (HERE).stringValue () ;
          if (enumerator_4374.hasNextObject ()) {
            result << "<br>" ;
          }
          index_4374_.increment () ;
          enumerator_4374.gotoNextObject () ;
        }
      }
      result << "</td>\n"
        "    </tr>\n"
        "  " ;
      index_4037_.increment () ;
      enumerator_4037.gotoNextObject () ;
    }
  }
  result << "\n"
    "  </table>\n"
    "</p>\n"
    "<p>\n"
    "<h2>\n"
    "  Infix Operators\n"
    "</h2>\n"
    "  <table class=\"result\">\n"
    "    <tr>\n"
    "      <td class=\"result_title\">Infix operator</td>\n"
    "      <td class=\"result_title\">Result Type</td>\n"
    "    </tr>\n"
    "  " ;
  GALGAS_uint index_4697_ (0) ;
  if (in_INFIX_5F_OPERATOR_5F_MAP.isValid ()) {
    cEnumerator_infixOperatorMap enumerator_4697 (in_INFIX_5F_OPERATOR_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_4697.hasCurrentObject ()) {
      result << "\n"
        "    <tr class=\"result_line\">\n"
        "      <td>" ;
      result << enumerator_4697.current_lkey (HERE).getter_string (HERE).stringValue () ;
      result << "</td>\n"
        "      <td>" ;
      result << enumerator_4697.current_mResultType (HERE).getter_omnibusTypeDescriptionName (SOURCE_FILE ("typeDump.html.galgasTemplate", 159)).stringValue () ;
      result << "</td>\n"
        "    </tr>\n"
        "  " ;
      index_4697_.increment () ;
      enumerator_4697.gotoNextObject () ;
    }
  }
  result << "\n"
    "  </table>\n"
    "</p>\n"
    "<p>\n"
    "<h2>\n"
    "  Prefix Operators\n"
    "</h2>\n"
    "  <table class=\"result\">\n"
    "    <tr>\n"
    "      <td class=\"result_title\">Prefix operator</td>\n"
    "      <td class=\"result_title\">Result Type</td>\n"
    "    </tr>\n"
    "  " ;
  GALGAS_uint index_5075_ (0) ;
  if (in_PREFIX_5F_OPERATOR_5F_MAP.isValid ()) {
    cEnumerator_prefixOperatorMap enumerator_5075 (in_PREFIX_5F_OPERATOR_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_5075.hasCurrentObject ()) {
      result << "\n"
        "    <tr class=\"result_line\">\n"
        "      <td>" ;
      result << enumerator_5075.current_lkey (HERE).getter_string (HERE).stringValue () ;
      result << "</td>\n"
        "      <td>" ;
      result << enumerator_5075.current_mResultType (HERE).getter_omnibusTypeDescriptionName (SOURCE_FILE ("typeDump.html.galgasTemplate", 176)).stringValue () ;
      result << "</td>\n"
        "    </tr>\n"
        "  " ;
      index_5075_.increment () ;
      enumerator_5075.gotoNextObject () ;
    }
  }
  result << "\n"
    "  </table>\n"
    "</p>\n"
    "<h2>\n"
    "  Assignment Operators\n"
    "</h2>\n"
    "  <table class=\"result\">\n"
    "    <tr>\n"
    "      <td class=\"result_title\">Operator</td>\n"
    "    </tr>\n"
    "  " ;
  GALGAS_uint index_5402_ (0) ;
  if (in_ASSIGNMENT_5F_OPERATOR_5F_MAP.isValid ()) {
    cEnumerator_assignmentOperatorMap enumerator_5402 (in_ASSIGNMENT_5F_OPERATOR_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_5402.hasCurrentObject ()) {
      result << "\n"
        "    <tr class=\"result_line\">\n"
        "      <td>" ;
      result << enumerator_5402.current_lkey (HERE).getter_string (HERE).stringValue () ;
      result << "</td>\n"
        "    </tr>\n"
        "  " ;
      index_5402_.increment () ;
      enumerator_5402.gotoNextObject () ;
    }
  }
  result << "\n"
    "  </table>\n"
    "</p>\n"
    "</div>\n"
    "</body>\n"
    "</html>\n" ;
  return GALGAS_string (result) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            Function 'linkForHTMLTypeMap'                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string function_linkForHTMLTypeMap (const GALGAS_string & constinArgument_inTypeName,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("<a class=\"header_link\" href=\"#").add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("types.galgas", 523)).add_operation (GALGAS_string ("\">"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 523)).add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("types.galgas", 523)).add_operation (GALGAS_string ("</a>"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 523)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_linkForHTMLTypeMap [2] = {
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_linkForHTMLTypeMap (C_Compiler * inCompiler,
                                                                   const cObjectArray & inEffectiveParameterArray,
                                                                   const GALGAS_location & /* inErrorLocation */
                                                                   COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_linkForHTMLTypeMap (operand0,
                                      inCompiler
                                      COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_linkForHTMLTypeMap ("linkForHTMLTypeMap",
                                                                    functionWithGenericHeader_linkForHTMLTypeMap,
                                                                    & kTypeDescriptor_GALGAS_string,
                                                                    1,
                                                                    functionArgs_linkForHTMLTypeMap) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             Routine 'declareLLVMTypes'                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_declareLLVMTypes (const GALGAS_userLLVMTypeDefinitionListIR constinArgument_inUserLLVMTypeDefinitionListIR,
                               GALGAS_string & ioArgument_ioLLVMcode,
                               C_Compiler * inCompiler
                               COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("User Defined Types"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 535)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 535)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("%ptrtype = type i8* ; Generic pointer type for dynamic objects\n"), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 536)) ;
  cEnumerator_userLLVMTypeDefinitionListIR enumerator_21674 (constinArgument_inUserLLVMTypeDefinitionListIR, kENUMERATION_UP) ;
  while (enumerator_21674.hasCurrentObject ()) {
    callExtensionMethod_generateLLVMType ((const cPtr_userLLVMTypeDefinitionIR *) enumerator_21674.current_mType (HERE).ptr (), ioArgument_ioLLVMcode, inCompiler COMMA_SOURCE_FILE ("types.galgas", 538)) ;
    enumerator_21674.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 540)) ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       Function 'checkAssignmentCompatibility'                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_objectIR function_checkAssignmentCompatibility (const GALGAS_assignmentOperatorMap & constinArgument_inAssignmentOperatorMap,
                                                       const GALGAS_objectIR & constinArgument_inSourceValue,
                                                       const GALGAS_omnibusType & constinArgument_inOptionalTargetAnnotationType,
                                                       const GALGAS_location & constinArgument_inErrorLocation,
                                                       const GALGAS_bool & constinArgument_inStaticTypeAllowed,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_objectIR result_result ; // Returned variable
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inOptionalTargetAnnotationType.getter_kind (HERE).getter_isVoid (SOURCE_FILE ("semantic-analysis.galgas", 15)).boolEnum () ;
    if (kBoolTrue == test_0) {
      result_result = constinArgument_inSourceValue ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = constinArgument_inStaticTypeAllowed.boolEnum () ;
      if (kBoolTrue == test_1) {
        result_result = extensionGetter_withType (constinArgument_inSourceValue, constinArgument_inOptionalTargetAnnotationType, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 18)) ;
      }
    }
    if (kBoolFalse == test_1) {
      GALGAS_lstring var_key_1121 = function_assignmentOperatorKey (constinArgument_inOptionalTargetAnnotationType, GALGAS_location::constructor_nowhere (SOURCE_FILE ("semantic-analysis.galgas", 20)), extensionGetter_type (constinArgument_inSourceValue, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 20)), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 20)) ;
      GALGAS_abstractAssignmentOperatorUsage joker_1257 ; // Joker input parameter
      constinArgument_inAssignmentOperatorMap.method_searchKey (var_key_1121, joker_1257, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 21)) ;
      result_result = extensionGetter_withType (constinArgument_inSourceValue, constinArgument_inOptionalTargetAnnotationType, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 22)) ;
    }
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = constinArgument_inStaticTypeAllowed.operator_not (SOURCE_FILE ("semantic-analysis.galgas", 61)).boolEnum () ;
    if (kBoolTrue == test_2) {
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = GALGAS_bool (kIsEqual, extensionGetter_omnibusTypeDescriptionName (result_result, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 62)).objectCompare (function_ctIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 62)))).boolEnum () ;
        if (kBoolTrue == test_3) {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("the ").add_operation (function_ctIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 63)), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 63)).add_operation (GALGAS_string (" compile time type is not allowed here"), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 63)), fixItArray4  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 63)) ;
        }
      }
      if (kBoolFalse == test_3) {
        enumGalgasBool test_5 = kBoolTrue ;
        if (kBoolTrue == test_5) {
          test_5 = GALGAS_bool (kIsEqual, extensionGetter_omnibusTypeDescriptionName (result_result, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 64)).objectCompare (function_ctBoolTypeName (inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 64)))).boolEnum () ;
          if (kBoolTrue == test_5) {
            result_result = extensionGetter_withType (constinArgument_inSourceValue, function_boolType (inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 65)), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 65)) ;
          }
        }
      }
    }
  }
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_checkAssignmentCompatibility [6] = {
  & kTypeDescriptor_GALGAS_assignmentOperatorMap,
  & kTypeDescriptor_GALGAS_objectIR,
  & kTypeDescriptor_GALGAS_omnibusType,
  & kTypeDescriptor_GALGAS_location,
  & kTypeDescriptor_GALGAS_bool,
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_checkAssignmentCompatibility (C_Compiler * inCompiler,
                                                                             const cObjectArray & inEffectiveParameterArray,
                                                                             const GALGAS_location & /* inErrorLocation */
                                                                             COMMA_LOCATION_ARGS) {
  const GALGAS_assignmentOperatorMap operand0 = GALGAS_assignmentOperatorMap::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                                             inCompiler
                                                                                             COMMA_THERE) ;
  const GALGAS_objectIR operand1 = GALGAS_objectIR::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                   inCompiler
                                                                   COMMA_THERE) ;
  const GALGAS_omnibusType operand2 = GALGAS_omnibusType::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
                                                                         inCompiler
                                                                         COMMA_THERE) ;
  const GALGAS_location operand3 = GALGAS_location::extractObject (inEffectiveParameterArray.objectAtIndex (3 COMMA_HERE),
                                                                   inCompiler
                                                                   COMMA_THERE) ;
  const GALGAS_bool operand4 = GALGAS_bool::extractObject (inEffectiveParameterArray.objectAtIndex (4 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  return function_checkAssignmentCompatibility (operand0,
                                                operand1,
                                                operand2,
                                                operand3,
                                                operand4,
                                                inCompiler
                                                COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_checkAssignmentCompatibility ("checkAssignmentCompatibility",
                                                                              functionWithGenericHeader_checkAssignmentCompatibility,
                                                                              & kTypeDescriptor_GALGAS_objectIR,
                                                                              5,
                                                                              functionArgs_checkAssignmentCompatibility) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              Routine 'getNewTempValue'                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_getNewTempValue (const GALGAS_omnibusType constinArgument_inType,
                              GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                              GALGAS_objectIR & outArgument_outTempVariable,
                              C_Compiler * inCompiler
                              COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outTempVariable.drop () ; // Release 'out' argument
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsEqual, constinArgument_inType.getter_kind (HERE).objectCompare (GALGAS_typeKind::constructor_void (SOURCE_FILE ("semantic-analysis.galgas", 101)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      outArgument_outTempVariable = GALGAS_objectIR::constructor_void (SOURCE_FILE ("semantic-analysis.galgas", 102)) ;
    }
  }
  if (kBoolFalse == test_0) {
    GALGAS_string var_llvmName_4546 ;
    {
    extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_llvmName_4546, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 104)) ;
    }
    outArgument_outTempVariable = GALGAS_objectIR::constructor_llvmValue (constinArgument_inType, var_llvmName_4546  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 105)) ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            Routine 'getNewTempReference'                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_getNewTempReference (const GALGAS_omnibusType constinArgument_inType,
                                  GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                  GALGAS_objectIR & outArgument_outTempVariable,
                                  C_Compiler * inCompiler
                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outTempVariable.drop () ; // Release 'out' argument
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsEqual, constinArgument_inType.getter_kind (HERE).objectCompare (GALGAS_typeKind::constructor_void (SOURCE_FILE ("semantic-analysis.galgas", 116)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      outArgument_outTempVariable = GALGAS_objectIR::constructor_void (SOURCE_FILE ("semantic-analysis.galgas", 117)) ;
    }
  }
  if (kBoolFalse == test_0) {
    GALGAS_string var_llvmName_4990 ;
    {
    extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_llvmName_4990, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 119)) ;
    }
    outArgument_outTempVariable = GALGAS_objectIR::constructor_reference (constinArgument_inType, var_llvmName_4990  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 120)) ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             Routine 'semanticAnalysis'                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_semanticAnalysis (const GALGAS_string /* constinArgument_inSourceFile */,
                               const GALGAS_ast constinArgument_inAST,
                               const GALGAS_stringset constinArgument_inSourceFileAbsolutePathSet,
                               const GALGAS_declarationDecorationList constinArgument_inDecoratedDeclarationList,
                               const GALGAS_decoratedRegularRoutineList constinArgument_inDecoratedRoutineList,
                               const GALGAS_routineListIR constinArgument_inRoutineListIR,
                               const GALGAS_semanticContext constinArgument_inSemanticContext,
                               const GALGAS_location constinArgument_inEndOfSourceFile,
                               const GALGAS_staticEntityMap constinArgument_inStaticEntityMap,
                               GALGAS_intermediateCodeStruct & outArgument_outIntermediateCodeStruct,
                               C_Compiler * inCompiler
                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outIntermediateCodeStruct.drop () ; // Release 'out' argument
  outArgument_outIntermediateCodeStruct = GALGAS_intermediateCodeStruct::constructor_default (SOURCE_FILE ("semantic-analysis.galgas", 138)) ;
  outArgument_outIntermediateCodeStruct.mProperty_mRoutineListIR = constinArgument_inRoutineListIR ;
  outArgument_outIntermediateCodeStruct.mProperty_mTargetParameters = constinArgument_inSemanticContext.getter_mTargetParameters (HERE) ;
  outArgument_outIntermediateCodeStruct.mProperty_mStaticEntityMap = constinArgument_inStaticEntityMap ;
  outArgument_outIntermediateCodeStruct.mProperty_mGlobalTaskVariableList = constinArgument_inSemanticContext.getter_mGlobalTaskVariableList (HERE) ;
  GALGAS_semanticTemporariesStruct var_temporaries_6186 = GALGAS_semanticTemporariesStruct::constructor_default (SOURCE_FILE ("semantic-analysis.galgas", 144)) ;
  cEnumerator_declarationDecorationList enumerator_6247 (constinArgument_inDecoratedDeclarationList, kENUMERATION_UP) ;
  while (enumerator_6247.hasCurrentObject ()) {
    callExtensionMethod_semanticAnalysis ((const cPtr_abstractDecoratedDeclaration *) enumerator_6247.current_mDeclaration (HERE).ptr (), constinArgument_inSemanticContext, var_temporaries_6186, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 146)) ;
    enumerator_6247.gotoNextObject () ;
  }
  extensionMethod_routineSemanticAnalysis (constinArgument_inDecoratedRoutineList, constinArgument_inSemanticContext, var_temporaries_6186, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 153)) ;
  extensionMethod_externProcedureSemanticAnalysis (constinArgument_inAST.getter_mExternFunctionListAST (HERE), constinArgument_inSemanticContext, var_temporaries_6186, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 158)) ;
  {
  routine_appendPanicRoutines (constinArgument_inSourceFileAbsolutePathSet, outArgument_outIntermediateCodeStruct, inCompiler  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 164)) ;
  }
  {
  routine_checkRequiredProcedures (constinArgument_inAST, constinArgument_inSemanticContext, constinArgument_inEndOfSourceFile, inCompiler  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 169)) ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     Overriding extension getter '@compiletimeBoolAST locationForErrorSignaling'                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_location extensionGetter_compiletimeBoolAST_locationForErrorSignaling (const cPtr_abstractDeclarationAST * /* inObject */,
                                                                                     C_Compiler * /* inCompiler */
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  result_outLocation = GALGAS_location::constructor_nowhere (SOURCE_FILE ("compile-time-type-bool.galgas", 11)) ;
//---
  return result_outLocation ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_compiletimeBoolAST_locationForErrorSignaling (void) {
  enterExtensionGetter_locationForErrorSignaling (kTypeDescriptor_GALGAS_compiletimeBoolAST.mSlotID,
                                                  extensionGetter_compiletimeBoolAST_locationForErrorSignaling) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_compiletimeBoolAST_locationForErrorSignaling (defineExtensionGetter_compiletimeBoolAST_locationForErrorSignaling, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      Overriding extension method '@compiletimeBoolAST enterInPrecedenceGraph'                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_compiletimeBoolAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                       GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_compiletimeBoolAST * object = (const cPtr_compiletimeBoolAST *) inObject ;
  macroValidSharedObject (object, cPtr_compiletimeBoolAST) ;
  GALGAS_lstring var_nodeName_1126 = function_ctBoolTypeName (inCompiler COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 21)).getter_nowhere (SOURCE_FILE ("compile-time-type-bool.galgas", 21)) ;
  {
  const GALGAS_compiletimeBoolAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (var_nodeName_1126, temp_0, inCompiler COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 22)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_compiletimeBoolAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_compiletimeBoolAST.mSlotID,
                                               extensionMethod_compiletimeBoolAST_enterInPrecedenceGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_compiletimeBoolAST_enterInPrecedenceGraph (defineExtensionMethod_compiletimeBoolAST_enterInPrecedenceGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                Overriding extension getter '@compiletimeBoolAST keyRepresentationForErrorSignaling'                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_compiletimeBoolAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * /* inObject */,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  result_outRepresentation = function_ctBoolTypeName (inCompiler COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 28)) ;
//---
  return result_outRepresentation ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_compiletimeBoolAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_compiletimeBoolAST.mSlotID,
                                                           extensionGetter_compiletimeBoolAST_keyRepresentationForErrorSignaling) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_compiletimeBoolAST_keyRepresentationForErrorSignaling (defineExtensionGetter_compiletimeBoolAST_keyRepresentationForErrorSignaling, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           Once function 'ctBoolTypeName'                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string onceFunction_ctBoolTypeName (C_Compiler * /* inCompiler */
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("ctBool") ;
//---
  return result_result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function implementation                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static bool gOnceFunctionResultAvailable_ctBoolTypeName = false ;
static GALGAS_string gOnceFunctionResult_ctBoolTypeName ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string function_ctBoolTypeName (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_ctBoolTypeName) {
    gOnceFunctionResult_ctBoolTypeName = onceFunction_ctBoolTypeName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_ctBoolTypeName = true ;
  }
  return gOnceFunctionResult_ctBoolTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void releaseOnceFunctionResult_ctBoolTypeName (void) {
  gOnceFunctionResult_ctBoolTypeName.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gEpilogueForOnceFunction_ctBoolTypeName (NULL,
                                                            releaseOnceFunctionResult_ctBoolTypeName) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_ctBoolTypeName [1] = {
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_ctBoolTypeName (C_Compiler * inCompiler,
                                                               const cObjectArray & /* inEffectiveParameterArray */,
                                                               const GALGAS_location & /* inErrorLocation */
                                                               COMMA_LOCATION_ARGS) {
  return function_ctBoolTypeName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_ctBoolTypeName ("ctBoolTypeName",
                                                                functionWithGenericHeader_ctBoolTypeName,
                                                                & kTypeDescriptor_GALGAS_string,
                                                                0,
                                                                functionArgs_ctBoolTypeName) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                          Overriding extension method '@compiletimeBoolAST enterInContext'                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_compiletimeBoolAST_enterInContext (const cPtr_abstractDeclarationAST * /* inObject */,
                                                               GALGAS_semanticContext & ioArgument_ioContext,
                                                               GALGAS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                               GALGAS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                                               GALGAS_routineListIR & /* ioArgument_ioRoutineListIR */,
                                                               GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                               GALGAS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                               GALGAS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                               GALGAS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring var_ctBoolTypeName_2618 = function_ctBoolTypeName (inCompiler COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 51)).getter_nowhere (SOURCE_FILE ("compile-time-type-bool.galgas", 51)) ;
  GALGAS_omnibusType var_ctBoolType_2665 = function_compileTimeBoolType (inCompiler COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 52)) ;
  {
  ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (var_ctBoolTypeName_2618, var_ctBoolType_2665, inCompiler COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 54)) ;
  }
  GALGAS_lstring var_key_2825 = function_prefixOperatorMapKey (var_ctBoolType_2665, GALGAS_prefixOperator::constructor_notOp (SOURCE_FILE ("compile-time-type-bool.galgas", 56)), GALGAS_location::constructor_nowhere (SOURCE_FILE ("compile-time-type-bool.galgas", 56)), inCompiler COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 56)) ;
  {
  ioArgument_ioContext.mProperty_mPrefixOperatorMap.setter_insertKey (var_key_2825, var_ctBoolType_2665, var_ctBoolType_2665, GALGAS_compileTimeBoolNotOperator::constructor_new (SOURCE_FILE ("compile-time-type-bool.galgas", 57)), inCompiler COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 57)) ;
  }
  var_key_2825 = function_infixOperatorMapKey (var_ctBoolType_2665, GALGAS_omnibusInfixOperator::constructor_bitWiseOrOp (SOURCE_FILE ("compile-time-type-bool.galgas", 59)), GALGAS_location::constructor_nowhere (SOURCE_FILE ("compile-time-type-bool.galgas", 59)), var_ctBoolType_2665, inCompiler COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 59)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2825, var_ctBoolType_2665, GALGAS_compileTimeBoolOrOperator::constructor_new (SOURCE_FILE ("compile-time-type-bool.galgas", 60)), inCompiler COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 60)) ;
  }
  var_key_2825 = function_infixOperatorMapKey (var_ctBoolType_2665, GALGAS_omnibusInfixOperator::constructor_bitWiseXorOp (SOURCE_FILE ("compile-time-type-bool.galgas", 62)), GALGAS_location::constructor_nowhere (SOURCE_FILE ("compile-time-type-bool.galgas", 62)), var_ctBoolType_2665, inCompiler COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 62)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2825, var_ctBoolType_2665, GALGAS_compileTimeBoolXorOperator::constructor_new (SOURCE_FILE ("compile-time-type-bool.galgas", 63)), inCompiler COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 63)) ;
  }
  var_key_2825 = function_infixOperatorMapKey (var_ctBoolType_2665, GALGAS_omnibusInfixOperator::constructor_equal (SOURCE_FILE ("compile-time-type-bool.galgas", 65)), GALGAS_location::constructor_nowhere (SOURCE_FILE ("compile-time-type-bool.galgas", 65)), var_ctBoolType_2665, inCompiler COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 65)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2825, var_ctBoolType_2665, GALGAS_compileTimeBoolEqualOperator::constructor_new (SOURCE_FILE ("compile-time-type-bool.galgas", 66)), inCompiler COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 66)) ;
  }
  var_key_2825 = GALGAS_lstring::constructor_new (var_ctBoolType_2665.getter_omnibusTypeDescriptionName (SOURCE_FILE ("compile-time-type-bool.galgas", 68)), GALGAS_location::constructor_nowhere (SOURCE_FILE ("compile-time-type-bool.galgas", 68))  COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 68)) ;
  {
  ioArgument_ioContext.mProperty_mImplicitConversionToBooleanMap.setter_insertKey (var_key_2825, GALGAS_compileTimeBoolImplicitConverterToBoolean::constructor_new (SOURCE_FILE ("compile-time-type-bool.galgas", 69)), inCompiler COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 69)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_compiletimeBoolAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_compiletimeBoolAST.mSlotID,
                                       extensionMethod_compiletimeBoolAST_enterInContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_compiletimeBoolAST_enterInContext (defineExtensionMethod_compiletimeBoolAST_enterInContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//        Overriding extension method '@compileTimeBoolImplicitConverterToBoolean generateConvertToBooleanCode'        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_compileTimeBoolImplicitConverterToBoolean_generateConvertToBooleanCode (const cPtr_abstractImplicitConverterToBoolean * /* inObject */,
                                                                                                    const GALGAS_objectIR constinArgument_inReceiverOperand,
                                                                                                    const GALGAS_location /* constinArgument_inErrorLocation */,
                                                                                                    GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                                                    GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                                                    GALGAS_allocaList & /* ioArgument_ioAllocaList */,
                                                                                                    GALGAS_implicitBooleanConversionResult & outArgument_outResult,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint var_receiverValue_4743 ;
  GALGAS_omnibusType joker_4715_1 ; // Joker input parameter
  constinArgument_inReceiverOperand.method_literalInteger (joker_4715_1, var_receiverValue_4743, inCompiler COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 89)) ;
  outArgument_outResult = GALGAS_implicitBooleanConversionResult::constructor_compileTime (GALGAS_bool (kIsNotEqual, var_receiverValue_4743.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 90))))  COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 90)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_compileTimeBoolImplicitConverterToBoolean_generateConvertToBooleanCode (void) {
  enterExtensionMethod_generateConvertToBooleanCode (kTypeDescriptor_GALGAS_compileTimeBoolImplicitConverterToBoolean.mSlotID,
                                                     extensionMethod_compileTimeBoolImplicitConverterToBoolean_generateConvertToBooleanCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_compileTimeBoolImplicitConverterToBoolean_generateConvertToBooleanCode (defineExtensionMethod_compileTimeBoolImplicitConverterToBoolean_generateConvertToBooleanCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                       Overriding extension method '@compileTimeBoolNotOperator generateCode'                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_compileTimeBoolNotOperator_generateCode (const cPtr_prefixOperatorUsage * /* inObject */,
                                                                     const GALGAS_objectIR constinArgument_inReceiverOperand,
                                                                     const GALGAS_location /* constinArgument_inOperatorLocation */,
                                                                     const GALGAS_omnibusType constinArgument_inResultType,
                                                                     const GALGAS_bool /* constinArgument_inDoNotGeneratePanicCode */,
                                                                     GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                     GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                     GALGAS_objectIR & outArgument_outResultValue,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint var_receiverValue_5695 ;
  GALGAS_omnibusType joker_5667_1 ; // Joker input parameter
  constinArgument_inReceiverOperand.method_literalInteger (joker_5667_1, var_receiverValue_5695, inCompiler COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 111)) ;
  GALGAS_bigint temp_0 ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_receiverValue_5695.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 112)))).boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 112)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 112)) ;
  }
  outArgument_outResultValue = GALGAS_objectIR::constructor_literalInteger (constinArgument_inResultType, temp_0  COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 112)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_compileTimeBoolNotOperator_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_compileTimeBoolNotOperator.mSlotID,
                                     extensionMethod_compileTimeBoolNotOperator_generateCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_compileTimeBoolNotOperator_generateCode (defineExtensionMethod_compileTimeBoolNotOperator_generateCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      Overriding extension method '@compileTimeBoolEqualOperator generateCode'                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_compileTimeBoolEqualOperator_generateCode (const cPtr_omnibusInfixOperatorUsage * /* inObject */,
                                                                       const GALGAS_objectIR constinArgument_inLeftOperand,
                                                                       const GALGAS_location /* constinArgument_inOperatorLocation */,
                                                                       const GALGAS_objectIR constinArgument_inRightOperand,
                                                                       const GALGAS_omnibusType constinArgument_inResultType,
                                                                       GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                       GALGAS_allocaList & /* ioArgument_ioAllocaList */,
                                                                       GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                       GALGAS_objectIR & outArgument_outResultValue,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint var_leftValue_6706 ;
  GALGAS_omnibusType joker_6682_1 ; // Joker input parameter
  constinArgument_inLeftOperand.method_literalInteger (joker_6682_1, var_leftValue_6706, inCompiler COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 134)) ;
  GALGAS_bigint var_rightValue_6767 ;
  GALGAS_omnibusType joker_6742_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_literalInteger (joker_6742_1, var_rightValue_6767, inCompiler COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 135)) ;
  outArgument_outResultValue = GALGAS_objectIR::constructor_literalInteger (constinArgument_inResultType, GALGAS_bool (kIsEqual, var_leftValue_6706.objectCompare (var_rightValue_6767)).getter_bigint (SOURCE_FILE ("compile-time-type-bool.galgas", 136))  COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 136)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_compileTimeBoolEqualOperator_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_compileTimeBoolEqualOperator.mSlotID,
                                     extensionMethod_compileTimeBoolEqualOperator_generateCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_compileTimeBoolEqualOperator_generateCode (defineExtensionMethod_compileTimeBoolEqualOperator_generateCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                       Overriding extension method '@compileTimeBoolXorOperator generateCode'                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_compileTimeBoolXorOperator_generateCode (const cPtr_omnibusInfixOperatorUsage * /* inObject */,
                                                                     const GALGAS_objectIR constinArgument_inLeftOperand,
                                                                     const GALGAS_location /* constinArgument_inOperatorLocation */,
                                                                     const GALGAS_objectIR constinArgument_inRightOperand,
                                                                     const GALGAS_omnibusType constinArgument_inResultType,
                                                                     GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                     GALGAS_allocaList & /* ioArgument_ioAllocaList */,
                                                                     GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                     GALGAS_objectIR & outArgument_outResultValue,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint var_leftValue_7602 ;
  GALGAS_omnibusType joker_7578_1 ; // Joker input parameter
  constinArgument_inLeftOperand.method_literalInteger (joker_7578_1, var_leftValue_7602, inCompiler COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 156)) ;
  GALGAS_bigint var_rightValue_7663 ;
  GALGAS_omnibusType joker_7638_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_literalInteger (joker_7638_1, var_rightValue_7663, inCompiler COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 157)) ;
  outArgument_outResultValue = GALGAS_objectIR::constructor_literalInteger (constinArgument_inResultType, var_leftValue_7602.operator_xor (var_rightValue_7663 COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 158))  COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 158)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_compileTimeBoolXorOperator_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_compileTimeBoolXorOperator.mSlotID,
                                     extensionMethod_compileTimeBoolXorOperator_generateCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_compileTimeBoolXorOperator_generateCode (defineExtensionMethod_compileTimeBoolXorOperator_generateCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                        Overriding extension method '@compileTimeBoolOrOperator generateCode'                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_compileTimeBoolOrOperator_generateCode (const cPtr_omnibusInfixOperatorUsage * /* inObject */,
                                                                    const GALGAS_objectIR constinArgument_inLeftOperand,
                                                                    const GALGAS_location /* constinArgument_inOperatorLocation */,
                                                                    const GALGAS_objectIR constinArgument_inRightOperand,
                                                                    const GALGAS_omnibusType constinArgument_inResultType,
                                                                    GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                    GALGAS_allocaList & /* ioArgument_ioAllocaList */,
                                                                    GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                    GALGAS_objectIR & outArgument_outResultValue,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint var_leftValue_8495 ;
  GALGAS_omnibusType joker_8471_1 ; // Joker input parameter
  constinArgument_inLeftOperand.method_literalInteger (joker_8471_1, var_leftValue_8495, inCompiler COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 178)) ;
  GALGAS_bigint var_rightValue_8556 ;
  GALGAS_omnibusType joker_8531_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_literalInteger (joker_8531_1, var_rightValue_8556, inCompiler COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 179)) ;
  outArgument_outResultValue = GALGAS_objectIR::constructor_literalInteger (constinArgument_inResultType, var_leftValue_8495.operator_or (var_rightValue_8556 COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 180))  COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 180)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_compileTimeBoolOrOperator_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_compileTimeBoolOrOperator.mSlotID,
                                     extensionMethod_compileTimeBoolOrOperator_generateCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_compileTimeBoolOrOperator_generateCode (defineExtensionMethod_compileTimeBoolOrOperator_generateCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     Overriding extension getter '@compileTimeIntAST locationForErrorSignaling'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_location extensionGetter_compileTimeIntAST_locationForErrorSignaling (const cPtr_abstractDeclarationAST * /* inObject */,
                                                                                    C_Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  result_outLocation = GALGAS_location::constructor_nowhere (SOURCE_FILE ("compile-time-type-int.galgas", 11)) ;
//---
  return result_outLocation ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_compileTimeIntAST_locationForErrorSignaling (void) {
  enterExtensionGetter_locationForErrorSignaling (kTypeDescriptor_GALGAS_compileTimeIntAST.mSlotID,
                                                  extensionGetter_compileTimeIntAST_locationForErrorSignaling) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_compileTimeIntAST_locationForErrorSignaling (defineExtensionGetter_compileTimeIntAST_locationForErrorSignaling, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                       Overriding extension method '@compileTimeIntAST enterInPrecedenceGraph'                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_compileTimeIntAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                      GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_compileTimeIntAST * object = (const cPtr_compileTimeIntAST *) inObject ;
  macroValidSharedObject (object, cPtr_compileTimeIntAST) ;
  GALGAS_lstring var_nodeName_1123 = function_ctIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 21)).getter_nowhere (SOURCE_FILE ("compile-time-type-int.galgas", 21)) ;
  {
  const GALGAS_compileTimeIntAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (var_nodeName_1123, temp_0, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 22)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_nodeName_1123, function_ctBoolTypeName (inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 23)).getter_nowhere (SOURCE_FILE ("compile-time-type-int.galgas", 23)) COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 23)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_compileTimeIntAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_compileTimeIntAST.mSlotID,
                                               extensionMethod_compileTimeIntAST_enterInPrecedenceGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_compileTimeIntAST_enterInPrecedenceGraph (defineExtensionMethod_compileTimeIntAST_enterInPrecedenceGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                 Overriding extension getter '@compileTimeIntAST keyRepresentationForErrorSignaling'                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_compileTimeIntAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * /* inObject */,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  result_outRepresentation = function_ctIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 29)) ;
//---
  return result_outRepresentation ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_compileTimeIntAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_compileTimeIntAST.mSlotID,
                                                           extensionGetter_compileTimeIntAST_keyRepresentationForErrorSignaling) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_compileTimeIntAST_keyRepresentationForErrorSignaling (defineExtensionGetter_compileTimeIntAST_keyRepresentationForErrorSignaling, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          Once function 'ctIntegerTypeName'                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string onceFunction_ctIntegerTypeName (C_Compiler * /* inCompiler */
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("ctInt") ;
//---
  return result_result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function implementation                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static bool gOnceFunctionResultAvailable_ctIntegerTypeName = false ;
static GALGAS_string gOnceFunctionResult_ctIntegerTypeName ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string function_ctIntegerTypeName (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_ctIntegerTypeName) {
    gOnceFunctionResult_ctIntegerTypeName = onceFunction_ctIntegerTypeName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_ctIntegerTypeName = true ;
  }
  return gOnceFunctionResult_ctIntegerTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void releaseOnceFunctionResult_ctIntegerTypeName (void) {
  gOnceFunctionResult_ctIntegerTypeName.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gEpilogueForOnceFunction_ctIntegerTypeName (NULL,
                                                               releaseOnceFunctionResult_ctIntegerTypeName) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_ctIntegerTypeName [1] = {
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_ctIntegerTypeName (C_Compiler * inCompiler,
                                                                  const cObjectArray & /* inEffectiveParameterArray */,
                                                                  const GALGAS_location & /* inErrorLocation */
                                                                  COMMA_LOCATION_ARGS) {
  return function_ctIntegerTypeName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_ctIntegerTypeName ("ctIntegerTypeName",
                                                                   functionWithGenericHeader_ctIntegerTypeName,
                                                                   & kTypeDescriptor_GALGAS_string,
                                                                   0,
                                                                   functionArgs_ctIntegerTypeName) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                           Overriding extension method '@compileTimeIntAST enterInContext'                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_compileTimeIntAST_enterInContext (const cPtr_abstractDeclarationAST * /* inObject */,
                                                              GALGAS_semanticContext & ioArgument_ioContext,
                                                              GALGAS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                              GALGAS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                                              GALGAS_routineListIR & /* ioArgument_ioRoutineListIR */,
                                                              GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                              GALGAS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                              GALGAS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                              GALGAS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring var_ctIntegerTypeName_2685 = function_ctIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 52)).getter_nowhere (SOURCE_FILE ("compile-time-type-int.galgas", 52)) ;
  GALGAS_omnibusType var_ctInt_2730 = function_compileTimeIntegerType (inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 53)) ;
  {
  ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (var_ctIntegerTypeName_2685, var_ctInt_2730, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 55)) ;
  }
  GALGAS_lstring var_key_2889 = function_prefixOperatorMapKey (var_ctInt_2730, GALGAS_prefixOperator::constructor_minusOp (SOURCE_FILE ("compile-time-type-int.galgas", 57)), GALGAS_location::constructor_nowhere (SOURCE_FILE ("compile-time-type-int.galgas", 57)), inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 57)) ;
  {
  ioArgument_ioContext.mProperty_mPrefixOperatorMap.setter_insertKey (var_key_2889, var_ctInt_2730, var_ctInt_2730, GALGAS_compileTimeIntMinusOperator::constructor_new (SOURCE_FILE ("compile-time-type-int.galgas", 58)), inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 58)) ;
  }
  var_key_2889 = function_prefixOperatorMapKey (var_ctInt_2730, GALGAS_prefixOperator::constructor_minusNoOvf (SOURCE_FILE ("compile-time-type-int.galgas", 60)), GALGAS_location::constructor_nowhere (SOURCE_FILE ("compile-time-type-int.galgas", 60)), inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 60)) ;
  {
  ioArgument_ioContext.mProperty_mPrefixOperatorMap.setter_insertKey (var_key_2889, var_ctInt_2730, var_ctInt_2730, GALGAS_compileTimeIntMinusOperator::constructor_new (SOURCE_FILE ("compile-time-type-int.galgas", 61)), inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 61)) ;
  }
  var_key_2889 = function_infixOperatorMapKey (var_ctInt_2730, GALGAS_omnibusInfixOperator::constructor_bitWiseOrOp (SOURCE_FILE ("compile-time-type-int.galgas", 63)), GALGAS_location::constructor_nowhere (SOURCE_FILE ("compile-time-type-int.galgas", 63)), var_ctInt_2730, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 63)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2889, var_ctInt_2730, GALGAS_compileTimeIntBitWiseOrOperator::constructor_new (SOURCE_FILE ("compile-time-type-int.galgas", 64)), inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 64)) ;
  }
  var_key_2889 = function_infixOperatorMapKey (var_ctInt_2730, GALGAS_omnibusInfixOperator::constructor_bitWiseXorOp (SOURCE_FILE ("compile-time-type-int.galgas", 66)), GALGAS_location::constructor_nowhere (SOURCE_FILE ("compile-time-type-int.galgas", 66)), var_ctInt_2730, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 66)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2889, var_ctInt_2730, GALGAS_compileTimeIntXorOperator::constructor_new (SOURCE_FILE ("compile-time-type-int.galgas", 67)), inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 67)) ;
  }
  var_key_2889 = function_infixOperatorMapKey (var_ctInt_2730, GALGAS_omnibusInfixOperator::constructor_leftShiftOp (SOURCE_FILE ("compile-time-type-int.galgas", 69)), GALGAS_location::constructor_nowhere (SOURCE_FILE ("compile-time-type-int.galgas", 69)), var_ctInt_2730, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 69)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2889, var_ctInt_2730, GALGAS_compileTimeIntShiftLeftOperator::constructor_new (SOURCE_FILE ("compile-time-type-int.galgas", 70)), inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 70)) ;
  }
  var_key_2889 = function_infixOperatorMapKey (var_ctInt_2730, GALGAS_omnibusInfixOperator::constructor_rightShiftOp (SOURCE_FILE ("compile-time-type-int.galgas", 72)), GALGAS_location::constructor_nowhere (SOURCE_FILE ("compile-time-type-int.galgas", 72)), var_ctInt_2730, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 72)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2889, var_ctInt_2730, GALGAS_compileTimeIntShiftRightOperator::constructor_new (SOURCE_FILE ("compile-time-type-int.galgas", 73)), inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 73)) ;
  }
  var_key_2889 = function_infixOperatorMapKey (var_ctInt_2730, GALGAS_omnibusInfixOperator::constructor_addOp (SOURCE_FILE ("compile-time-type-int.galgas", 75)), GALGAS_location::constructor_nowhere (SOURCE_FILE ("compile-time-type-int.galgas", 75)), var_ctInt_2730, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 75)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2889, var_ctInt_2730, GALGAS_compileTimeIntAddOperator::constructor_new (SOURCE_FILE ("compile-time-type-int.galgas", 76)), inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 76)) ;
  }
  var_key_2889 = function_infixOperatorMapKey (var_ctInt_2730, GALGAS_omnibusInfixOperator::constructor_addOpNoOvf (SOURCE_FILE ("compile-time-type-int.galgas", 78)), GALGAS_location::constructor_nowhere (SOURCE_FILE ("compile-time-type-int.galgas", 78)), var_ctInt_2730, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 78)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2889, var_ctInt_2730, GALGAS_compileTimeIntAddOperator::constructor_new (SOURCE_FILE ("compile-time-type-int.galgas", 79)), inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 79)) ;
  }
  var_key_2889 = function_infixOperatorMapKey (var_ctInt_2730, GALGAS_omnibusInfixOperator::constructor_subOp (SOURCE_FILE ("compile-time-type-int.galgas", 81)), GALGAS_location::constructor_nowhere (SOURCE_FILE ("compile-time-type-int.galgas", 81)), var_ctInt_2730, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 81)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2889, var_ctInt_2730, GALGAS_compileTimeIntSubtractOperator::constructor_new (SOURCE_FILE ("compile-time-type-int.galgas", 82)), inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 82)) ;
  }
  var_key_2889 = function_infixOperatorMapKey (var_ctInt_2730, GALGAS_omnibusInfixOperator::constructor_subOpNoOvf (SOURCE_FILE ("compile-time-type-int.galgas", 84)), GALGAS_location::constructor_nowhere (SOURCE_FILE ("compile-time-type-int.galgas", 84)), var_ctInt_2730, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 84)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2889, var_ctInt_2730, GALGAS_compileTimeIntSubtractOperator::constructor_new (SOURCE_FILE ("compile-time-type-int.galgas", 85)), inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 85)) ;
  }
  var_key_2889 = function_infixOperatorMapKey (var_ctInt_2730, GALGAS_omnibusInfixOperator::constructor_mulOp (SOURCE_FILE ("compile-time-type-int.galgas", 87)), GALGAS_location::constructor_nowhere (SOURCE_FILE ("compile-time-type-int.galgas", 87)), var_ctInt_2730, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 87)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2889, var_ctInt_2730, GALGAS_compileTimeIntMultiplyOperator::constructor_new (SOURCE_FILE ("compile-time-type-int.galgas", 88)), inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 88)) ;
  }
  var_key_2889 = function_infixOperatorMapKey (var_ctInt_2730, GALGAS_omnibusInfixOperator::constructor_divOp (SOURCE_FILE ("compile-time-type-int.galgas", 90)), GALGAS_location::constructor_nowhere (SOURCE_FILE ("compile-time-type-int.galgas", 90)), var_ctInt_2730, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 90)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2889, var_ctInt_2730, GALGAS_compileTimeIntDivideOperator::constructor_new (SOURCE_FILE ("compile-time-type-int.galgas", 91)), inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 91)) ;
  }
  var_key_2889 = function_infixOperatorMapKey (var_ctInt_2730, GALGAS_omnibusInfixOperator::constructor_modOp (SOURCE_FILE ("compile-time-type-int.galgas", 93)), GALGAS_location::constructor_nowhere (SOURCE_FILE ("compile-time-type-int.galgas", 93)), var_ctInt_2730, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 93)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2889, var_ctInt_2730, GALGAS_compileTimeIntModuloOperator::constructor_new (SOURCE_FILE ("compile-time-type-int.galgas", 94)), inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 94)) ;
  }
  var_key_2889 = function_infixOperatorMapKey (var_ctInt_2730, GALGAS_omnibusInfixOperator::constructor_bitWiseAndOp (SOURCE_FILE ("compile-time-type-int.galgas", 96)), GALGAS_location::constructor_nowhere (SOURCE_FILE ("compile-time-type-int.galgas", 96)), var_ctInt_2730, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 96)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2889, var_ctInt_2730, GALGAS_compileTimeIntBitWiseAndOperator::constructor_new (SOURCE_FILE ("compile-time-type-int.galgas", 97)), inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 97)) ;
  }
  GALGAS_omnibusType var_ctBoolType_5518 = function_compileTimeBoolType (inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 99)) ;
  var_key_2889 = function_infixOperatorMapKey (var_ctInt_2730, GALGAS_omnibusInfixOperator::constructor_equal (SOURCE_FILE ("compile-time-type-int.galgas", 100)), GALGAS_location::constructor_nowhere (SOURCE_FILE ("compile-time-type-int.galgas", 100)), var_ctInt_2730, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 100)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2889, var_ctBoolType_5518, GALGAS_compileTimeIntEqualOperator::constructor_new (SOURCE_FILE ("compile-time-type-int.galgas", 101)), inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 101)) ;
  }
  var_key_2889 = function_infixOperatorMapKey (var_ctInt_2730, GALGAS_omnibusInfixOperator::constructor_lessThan (SOURCE_FILE ("compile-time-type-int.galgas", 103)), GALGAS_location::constructor_nowhere (SOURCE_FILE ("compile-time-type-int.galgas", 103)), var_ctInt_2730, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 103)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2889, var_ctBoolType_5518, GALGAS_compileTimeIntLessThanOperator::constructor_new (SOURCE_FILE ("compile-time-type-int.galgas", 104)), inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 104)) ;
  }
  var_key_2889 = function_infixOperatorMapKey (var_ctInt_2730, GALGAS_omnibusInfixOperator::constructor_infEqual (SOURCE_FILE ("compile-time-type-int.galgas", 106)), GALGAS_location::constructor_nowhere (SOURCE_FILE ("compile-time-type-int.galgas", 106)), var_ctInt_2730, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 106)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2889, var_ctBoolType_5518, GALGAS_compileTimeIntLowerOrEqualOperator::constructor_new (SOURCE_FILE ("compile-time-type-int.galgas", 107)), inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 107)) ;
  }
  {
  routine_enterLiteralIntegerOperators (ioArgument_ioContext, inCompiler  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 109)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_compileTimeIntAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_compileTimeIntAST.mSlotID,
                                       extensionMethod_compileTimeIntAST_enterInContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_compileTimeIntAST_enterInContext (defineExtensionMethod_compileTimeIntAST_enterInContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      Overriding extension method '@compileTimeIntModuloOperator generateCode'                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_compileTimeIntModuloOperator_generateCode (const cPtr_omnibusInfixOperatorUsage * /* inObject */,
                                                                       const GALGAS_objectIR constinArgument_inLeftOperand,
                                                                       const GALGAS_location constinArgument_inOperatorLocation,
                                                                       const GALGAS_objectIR constinArgument_inRightOperand,
                                                                       const GALGAS_omnibusType constinArgument_inResultType,
                                                                       GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                       GALGAS_allocaList & /* ioArgument_ioAllocaList */,
                                                                       GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                       GALGAS_objectIR & outArgument_outResultValue,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint var_rightValue_7072 ;
  GALGAS_omnibusType joker_7047_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_literalInteger (joker_7047_1, var_rightValue_7072, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 131)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsEqual, var_rightValue_7072.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 132)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("compile time divide by zero"), fixItArray1  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 133)) ;
      outArgument_outResultValue.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_0) {
    GALGAS_bigint var_leftValue_7245 ;
    GALGAS_omnibusType joker_7221_1 ; // Joker input parameter
    constinArgument_inLeftOperand.method_literalInteger (joker_7221_1, var_leftValue_7245, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 135)) ;
    outArgument_outResultValue = GALGAS_objectIR::constructor_literalInteger (constinArgument_inResultType, var_leftValue_7245.modulo_operation (var_rightValue_7072, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 136))  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 136)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_compileTimeIntModuloOperator_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_compileTimeIntModuloOperator.mSlotID,
                                     extensionMethod_compileTimeIntModuloOperator_generateCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_compileTimeIntModuloOperator_generateCode (defineExtensionMethod_compileTimeIntModuloOperator_generateCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      Overriding extension method '@compileTimeIntDivideOperator generateCode'                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_compileTimeIntDivideOperator_generateCode (const cPtr_omnibusInfixOperatorUsage * /* inObject */,
                                                                       const GALGAS_objectIR constinArgument_inLeftOperand,
                                                                       const GALGAS_location constinArgument_inOperatorLocation,
                                                                       const GALGAS_objectIR constinArgument_inRightOperand,
                                                                       const GALGAS_omnibusType constinArgument_inResultType,
                                                                       GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                       GALGAS_allocaList & /* ioArgument_ioAllocaList */,
                                                                       GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                       GALGAS_objectIR & outArgument_outResultValue,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint var_rightValue_8088 ;
  GALGAS_omnibusType joker_8063_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_literalInteger (joker_8063_1, var_rightValue_8088, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 157)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsEqual, var_rightValue_8088.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 158)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("compile time divide by zero"), fixItArray1  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 159)) ;
      outArgument_outResultValue.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_0) {
    GALGAS_bigint var_leftValue_8261 ;
    GALGAS_omnibusType joker_8237_1 ; // Joker input parameter
    constinArgument_inLeftOperand.method_literalInteger (joker_8237_1, var_leftValue_8261, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 161)) ;
    outArgument_outResultValue = GALGAS_objectIR::constructor_literalInteger (constinArgument_inResultType, var_leftValue_8261.divide_operation (var_rightValue_8088, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 162))  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 162)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_compileTimeIntDivideOperator_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_compileTimeIntDivideOperator.mSlotID,
                                     extensionMethod_compileTimeIntDivideOperator_generateCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_compileTimeIntDivideOperator_generateCode (defineExtensionMethod_compileTimeIntDivideOperator_generateCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     Overriding extension method '@compileTimeIntMultiplyOperator generateCode'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_compileTimeIntMultiplyOperator_generateCode (const cPtr_omnibusInfixOperatorUsage * /* inObject */,
                                                                         const GALGAS_objectIR constinArgument_inLeftOperand,
                                                                         const GALGAS_location /* constinArgument_inOperatorLocation */,
                                                                         const GALGAS_objectIR constinArgument_inRightOperand,
                                                                         const GALGAS_omnibusType constinArgument_inResultType,
                                                                         GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                         GALGAS_allocaList & /* ioArgument_ioAllocaList */,
                                                                         GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                         GALGAS_objectIR & outArgument_outResultValue,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint var_leftValue_9111 ;
  GALGAS_omnibusType joker_9087_1 ; // Joker input parameter
  constinArgument_inLeftOperand.method_literalInteger (joker_9087_1, var_leftValue_9111, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 183)) ;
  GALGAS_bigint var_rightValue_9172 ;
  GALGAS_omnibusType joker_9147_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_literalInteger (joker_9147_1, var_rightValue_9172, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 184)) ;
  outArgument_outResultValue = GALGAS_objectIR::constructor_literalInteger (constinArgument_inResultType, var_leftValue_9111.multiply_operation (var_rightValue_9172, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 185))  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 185)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_compileTimeIntMultiplyOperator_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_compileTimeIntMultiplyOperator.mSlotID,
                                     extensionMethod_compileTimeIntMultiplyOperator_generateCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_compileTimeIntMultiplyOperator_generateCode (defineExtensionMethod_compileTimeIntMultiplyOperator_generateCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     Overriding extension method '@compileTimeIntSubtractOperator generateCode'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_compileTimeIntSubtractOperator_generateCode (const cPtr_omnibusInfixOperatorUsage * /* inObject */,
                                                                         const GALGAS_objectIR constinArgument_inLeftOperand,
                                                                         const GALGAS_location /* constinArgument_inOperatorLocation */,
                                                                         const GALGAS_objectIR constinArgument_inRightOperand,
                                                                         const GALGAS_omnibusType constinArgument_inResultType,
                                                                         GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                         GALGAS_allocaList & /* ioArgument_ioAllocaList */,
                                                                         GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                         GALGAS_objectIR & outArgument_outResultValue,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint var_leftValue_10014 ;
  GALGAS_omnibusType joker_9990_1 ; // Joker input parameter
  constinArgument_inLeftOperand.method_literalInteger (joker_9990_1, var_leftValue_10014, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 205)) ;
  GALGAS_bigint var_rightValue_10075 ;
  GALGAS_omnibusType joker_10050_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_literalInteger (joker_10050_1, var_rightValue_10075, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 206)) ;
  outArgument_outResultValue = GALGAS_objectIR::constructor_literalInteger (constinArgument_inResultType, var_leftValue_10014.substract_operation (var_rightValue_10075, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 207))  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 207)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_compileTimeIntSubtractOperator_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_compileTimeIntSubtractOperator.mSlotID,
                                     extensionMethod_compileTimeIntSubtractOperator_generateCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_compileTimeIntSubtractOperator_generateCode (defineExtensionMethod_compileTimeIntSubtractOperator_generateCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                       Overriding extension method '@compileTimeIntEqualOperator generateCode'                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_compileTimeIntEqualOperator_generateCode (const cPtr_omnibusInfixOperatorUsage * /* inObject */,
                                                                      const GALGAS_objectIR constinArgument_inLeftOperand,
                                                                      const GALGAS_location /* constinArgument_inOperatorLocation */,
                                                                      const GALGAS_objectIR constinArgument_inRightOperand,
                                                                      const GALGAS_omnibusType constinArgument_inResultType,
                                                                      GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                      GALGAS_allocaList & /* ioArgument_ioAllocaList */,
                                                                      GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                      GALGAS_objectIR & outArgument_outResultValue,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint var_leftValue_10911 ;
  GALGAS_omnibusType joker_10887_1 ; // Joker input parameter
  constinArgument_inLeftOperand.method_literalInteger (joker_10887_1, var_leftValue_10911, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 227)) ;
  GALGAS_bigint var_rightValue_10972 ;
  GALGAS_omnibusType joker_10947_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_literalInteger (joker_10947_1, var_rightValue_10972, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 228)) ;
  outArgument_outResultValue = GALGAS_objectIR::constructor_literalInteger (constinArgument_inResultType, GALGAS_bool (kIsEqual, var_leftValue_10911.objectCompare (var_rightValue_10972)).getter_bigint (SOURCE_FILE ("compile-time-type-int.galgas", 229))  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 229)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_compileTimeIntEqualOperator_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_compileTimeIntEqualOperator.mSlotID,
                                     extensionMethod_compileTimeIntEqualOperator_generateCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_compileTimeIntEqualOperator_generateCode (defineExtensionMethod_compileTimeIntEqualOperator_generateCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                        Overriding extension method '@compileTimeIntAddOperator generateCode'                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_compileTimeIntAddOperator_generateCode (const cPtr_omnibusInfixOperatorUsage * /* inObject */,
                                                                    const GALGAS_objectIR constinArgument_inLeftOperand,
                                                                    const GALGAS_location /* constinArgument_inOperatorLocation */,
                                                                    const GALGAS_objectIR constinArgument_inRightOperand,
                                                                    const GALGAS_omnibusType constinArgument_inResultType,
                                                                    GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                    GALGAS_allocaList & /* ioArgument_ioAllocaList */,
                                                                    GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                    GALGAS_objectIR & outArgument_outResultValue,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint var_leftValue_11805 ;
  GALGAS_omnibusType joker_11781_1 ; // Joker input parameter
  constinArgument_inLeftOperand.method_literalInteger (joker_11781_1, var_leftValue_11805, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 249)) ;
  GALGAS_bigint var_rightValue_11866 ;
  GALGAS_omnibusType joker_11841_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_literalInteger (joker_11841_1, var_rightValue_11866, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 250)) ;
  outArgument_outResultValue = GALGAS_objectIR::constructor_literalInteger (constinArgument_inResultType, var_leftValue_11805.add_operation (var_rightValue_11866, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 251))  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 251)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_compileTimeIntAddOperator_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_compileTimeIntAddOperator.mSlotID,
                                     extensionMethod_compileTimeIntAddOperator_generateCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_compileTimeIntAddOperator_generateCode (defineExtensionMethod_compileTimeIntAddOperator_generateCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                    Overriding extension method '@compileTimeIntBitWiseAndOperator generateCode'                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_compileTimeIntBitWiseAndOperator_generateCode (const cPtr_omnibusInfixOperatorUsage * /* inObject */,
                                                                           const GALGAS_objectIR constinArgument_inLeftOperand,
                                                                           const GALGAS_location /* constinArgument_inOperatorLocation */,
                                                                           const GALGAS_objectIR constinArgument_inRightOperand,
                                                                           const GALGAS_omnibusType constinArgument_inResultType,
                                                                           GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                           GALGAS_allocaList & /* ioArgument_ioAllocaList */,
                                                                           GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                           GALGAS_objectIR & outArgument_outResultValue,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint var_leftValue_12712 ;
  GALGAS_omnibusType joker_12688_1 ; // Joker input parameter
  constinArgument_inLeftOperand.method_literalInteger (joker_12688_1, var_leftValue_12712, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 271)) ;
  GALGAS_bigint var_rightValue_12773 ;
  GALGAS_omnibusType joker_12748_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_literalInteger (joker_12748_1, var_rightValue_12773, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 272)) ;
  outArgument_outResultValue = GALGAS_objectIR::constructor_literalInteger (constinArgument_inResultType, var_leftValue_12712.operator_and (var_rightValue_12773 COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 273))  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 273)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_compileTimeIntBitWiseAndOperator_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_compileTimeIntBitWiseAndOperator.mSlotID,
                                     extensionMethod_compileTimeIntBitWiseAndOperator_generateCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_compileTimeIntBitWiseAndOperator_generateCode (defineExtensionMethod_compileTimeIntBitWiseAndOperator_generateCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     Overriding extension method '@compileTimeIntShiftLeftOperator generateCode'                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_compileTimeIntShiftLeftOperator_generateCode (const cPtr_omnibusInfixOperatorUsage * /* inObject */,
                                                                          const GALGAS_objectIR constinArgument_inLeftOperand,
                                                                          const GALGAS_location /* constinArgument_inOperatorLocation */,
                                                                          const GALGAS_objectIR constinArgument_inRightOperand,
                                                                          const GALGAS_omnibusType constinArgument_inResultType,
                                                                          GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                          GALGAS_allocaList & /* ioArgument_ioAllocaList */,
                                                                          GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                          GALGAS_objectIR & outArgument_outResultValue,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint var_leftValue_13617 ;
  GALGAS_omnibusType joker_13593_1 ; // Joker input parameter
  constinArgument_inLeftOperand.method_literalInteger (joker_13593_1, var_leftValue_13617, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 293)) ;
  GALGAS_bigint var_rightValue_13678 ;
  GALGAS_omnibusType joker_13653_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_literalInteger (joker_13653_1, var_rightValue_13678, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 294)) ;
  outArgument_outResultValue = GALGAS_objectIR::constructor_literalInteger (constinArgument_inResultType, var_leftValue_13617.left_shift_operation (var_rightValue_13678, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 295))  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 295)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_compileTimeIntShiftLeftOperator_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_compileTimeIntShiftLeftOperator.mSlotID,
                                     extensionMethod_compileTimeIntShiftLeftOperator_generateCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_compileTimeIntShiftLeftOperator_generateCode (defineExtensionMethod_compileTimeIntShiftLeftOperator_generateCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                    Overriding extension method '@compileTimeIntShiftRightOperator generateCode'                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_compileTimeIntShiftRightOperator_generateCode (const cPtr_omnibusInfixOperatorUsage * /* inObject */,
                                                                           const GALGAS_objectIR constinArgument_inLeftOperand,
                                                                           const GALGAS_location /* constinArgument_inOperatorLocation */,
                                                                           const GALGAS_objectIR constinArgument_inRightOperand,
                                                                           const GALGAS_omnibusType constinArgument_inResultType,
                                                                           GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                           GALGAS_allocaList & /* ioArgument_ioAllocaList */,
                                                                           GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                           GALGAS_objectIR & outArgument_outResultValue,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint var_leftValue_14525 ;
  GALGAS_omnibusType joker_14501_1 ; // Joker input parameter
  constinArgument_inLeftOperand.method_literalInteger (joker_14501_1, var_leftValue_14525, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 315)) ;
  GALGAS_bigint var_rightValue_14586 ;
  GALGAS_omnibusType joker_14561_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_literalInteger (joker_14561_1, var_rightValue_14586, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 316)) ;
  outArgument_outResultValue = GALGAS_objectIR::constructor_literalInteger (constinArgument_inResultType, var_leftValue_14525.right_shift_operation (var_rightValue_14586, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 317))  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 317)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_compileTimeIntShiftRightOperator_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_compileTimeIntShiftRightOperator.mSlotID,
                                     extensionMethod_compileTimeIntShiftRightOperator_generateCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_compileTimeIntShiftRightOperator_generateCode (defineExtensionMethod_compileTimeIntShiftRightOperator_generateCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     Overriding extension method '@compileTimeIntLessThanOperator generateCode'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_compileTimeIntLessThanOperator_generateCode (const cPtr_omnibusInfixOperatorUsage * /* inObject */,
                                                                         const GALGAS_objectIR constinArgument_inLeftOperand,
                                                                         const GALGAS_location /* constinArgument_inOperatorLocation */,
                                                                         const GALGAS_objectIR constinArgument_inRightOperand,
                                                                         const GALGAS_omnibusType constinArgument_inResultType,
                                                                         GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                         GALGAS_allocaList & /* ioArgument_ioAllocaList */,
                                                                         GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                         GALGAS_objectIR & outArgument_outResultValue,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint var_leftValue_15429 ;
  GALGAS_omnibusType joker_15405_1 ; // Joker input parameter
  constinArgument_inLeftOperand.method_literalInteger (joker_15405_1, var_leftValue_15429, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 337)) ;
  GALGAS_bigint var_rightValue_15490 ;
  GALGAS_omnibusType joker_15465_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_literalInteger (joker_15465_1, var_rightValue_15490, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 338)) ;
  outArgument_outResultValue = GALGAS_objectIR::constructor_literalInteger (constinArgument_inResultType, GALGAS_bool (kIsStrictInf, var_leftValue_15429.objectCompare (var_rightValue_15490)).getter_bigint (SOURCE_FILE ("compile-time-type-int.galgas", 339))  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 339)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_compileTimeIntLessThanOperator_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_compileTimeIntLessThanOperator.mSlotID,
                                     extensionMethod_compileTimeIntLessThanOperator_generateCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_compileTimeIntLessThanOperator_generateCode (defineExtensionMethod_compileTimeIntLessThanOperator_generateCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                   Overriding extension method '@compileTimeIntLowerOrEqualOperator generateCode'                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_compileTimeIntLowerOrEqualOperator_generateCode (const cPtr_omnibusInfixOperatorUsage * /* inObject */,
                                                                             const GALGAS_objectIR constinArgument_inLeftOperand,
                                                                             const GALGAS_location /* constinArgument_inOperatorLocation */,
                                                                             const GALGAS_objectIR constinArgument_inRightOperand,
                                                                             const GALGAS_omnibusType constinArgument_inResultType,
                                                                             GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                             GALGAS_allocaList & /* ioArgument_ioAllocaList */,
                                                                             GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                             GALGAS_objectIR & outArgument_outResultValue,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint var_leftValue_16340 ;
  GALGAS_omnibusType joker_16316_1 ; // Joker input parameter
  constinArgument_inLeftOperand.method_literalInteger (joker_16316_1, var_leftValue_16340, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 359)) ;
  GALGAS_bigint var_rightValue_16401 ;
  GALGAS_omnibusType joker_16376_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_literalInteger (joker_16376_1, var_rightValue_16401, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 360)) ;
  outArgument_outResultValue = GALGAS_objectIR::constructor_literalInteger (constinArgument_inResultType, GALGAS_bool (kIsInfOrEqual, var_leftValue_16340.objectCompare (var_rightValue_16401)).getter_bigint (SOURCE_FILE ("compile-time-type-int.galgas", 361))  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 361)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_compileTimeIntLowerOrEqualOperator_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_compileTimeIntLowerOrEqualOperator.mSlotID,
                                     extensionMethod_compileTimeIntLowerOrEqualOperator_generateCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_compileTimeIntLowerOrEqualOperator_generateCode (defineExtensionMethod_compileTimeIntLowerOrEqualOperator_generateCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                        Overriding extension method '@compileTimeIntXorOperator generateCode'                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_compileTimeIntXorOperator_generateCode (const cPtr_omnibusInfixOperatorUsage * /* inObject */,
                                                                    const GALGAS_objectIR constinArgument_inLeftOperand,
                                                                    const GALGAS_location /* constinArgument_inOperatorLocation */,
                                                                    const GALGAS_objectIR constinArgument_inRightOperand,
                                                                    const GALGAS_omnibusType constinArgument_inResultType,
                                                                    GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                    GALGAS_allocaList & /* ioArgument_ioAllocaList */,
                                                                    GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                    GALGAS_objectIR & outArgument_outResultValue,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint var_leftValue_17234 ;
  GALGAS_omnibusType joker_17210_1 ; // Joker input parameter
  constinArgument_inLeftOperand.method_literalInteger (joker_17210_1, var_leftValue_17234, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 381)) ;
  GALGAS_bigint var_rightValue_17295 ;
  GALGAS_omnibusType joker_17270_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_literalInteger (joker_17270_1, var_rightValue_17295, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 382)) ;
  outArgument_outResultValue = GALGAS_objectIR::constructor_literalInteger (constinArgument_inResultType, var_leftValue_17234.operator_xor (var_rightValue_17295 COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 383))  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 383)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_compileTimeIntXorOperator_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_compileTimeIntXorOperator.mSlotID,
                                     extensionMethod_compileTimeIntXorOperator_generateCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_compileTimeIntXorOperator_generateCode (defineExtensionMethod_compileTimeIntXorOperator_generateCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     Overriding extension method '@compileTimeIntBitWiseOrOperator generateCode'                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_compileTimeIntBitWiseOrOperator_generateCode (const cPtr_omnibusInfixOperatorUsage * /* inObject */,
                                                                          const GALGAS_objectIR constinArgument_inLeftOperand,
                                                                          const GALGAS_location /* constinArgument_inOperatorLocation */,
                                                                          const GALGAS_objectIR constinArgument_inRightOperand,
                                                                          const GALGAS_omnibusType constinArgument_inResultType,
                                                                          GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                          GALGAS_allocaList & /* ioArgument_ioAllocaList */,
                                                                          GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                          GALGAS_objectIR & outArgument_outResultValue,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint var_leftValue_18139 ;
  GALGAS_omnibusType joker_18115_1 ; // Joker input parameter
  constinArgument_inLeftOperand.method_literalInteger (joker_18115_1, var_leftValue_18139, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 403)) ;
  GALGAS_bigint var_rightValue_18200 ;
  GALGAS_omnibusType joker_18175_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_literalInteger (joker_18175_1, var_rightValue_18200, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 404)) ;
  outArgument_outResultValue = GALGAS_objectIR::constructor_literalInteger (constinArgument_inResultType, var_leftValue_18139.operator_or (var_rightValue_18200 COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 405))  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 405)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_compileTimeIntBitWiseOrOperator_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_compileTimeIntBitWiseOrOperator.mSlotID,
                                     extensionMethod_compileTimeIntBitWiseOrOperator_generateCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_compileTimeIntBitWiseOrOperator_generateCode (defineExtensionMethod_compileTimeIntBitWiseOrOperator_generateCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                       Overriding extension method '@compileTimeIntMinusOperator generateCode'                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_compileTimeIntMinusOperator_generateCode (const cPtr_prefixOperatorUsage * /* inObject */,
                                                                      const GALGAS_objectIR constinArgument_inReceiverOperand,
                                                                      const GALGAS_location /* constinArgument_inOperatorLocation */,
                                                                      const GALGAS_omnibusType constinArgument_inResultType,
                                                                      const GALGAS_bool /* constinArgument_inDoNotGeneratePanicCode */,
                                                                      GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                      GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                      GALGAS_objectIR & outArgument_outResultValue,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint var_receiverValue_19185 ;
  GALGAS_omnibusType joker_19157_1 ; // Joker input parameter
  constinArgument_inReceiverOperand.method_literalInteger (joker_19157_1, var_receiverValue_19185, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 426)) ;
  outArgument_outResultValue = GALGAS_objectIR::constructor_literalInteger (constinArgument_inResultType, var_receiverValue_19185.operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 427))  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 427)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_compileTimeIntMinusOperator_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_compileTimeIntMinusOperator.mSlotID,
                                     extensionMethod_compileTimeIntMinusOperator_generateCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_compileTimeIntMinusOperator_generateCode (defineExtensionMethod_compileTimeIntMinusOperator_generateCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       Routine 'enterLiteralIntegerOperators'                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_enterLiteralIntegerOperators (GALGAS_semanticContext & ioArgument_ioContext,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring var_literalIntegerTypeName_222 = function_ctIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-static-integer.galgas", 4)).getter_nowhere (SOURCE_FILE ("type-static-integer.galgas", 4)) ;
  GALGAS_lstring var_intIntOp_291 = function_combineTypeNamesForInfixOperator (var_literalIntegerTypeName_222.getter_string (HERE), var_literalIntegerTypeName_222.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-static-integer.galgas", 6)) ;
  GALGAS_omnibusType var_selfType_405 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), var_literalIntegerTypeName_222, inCompiler  COMMA_SOURCE_FILE ("type-static-integer.galgas", 7)).getter_type (inCompiler COMMA_SOURCE_FILE ("type-static-integer.galgas", 7)) ;
  GALGAS_omnibusType var_booleanType_541 = extensionGetter_booleanType (ioArgument_ioContext, GALGAS_location::constructor_nowhere (SOURCE_FILE ("type-static-integer.galgas", 9)), inCompiler COMMA_SOURCE_FILE ("type-static-integer.galgas", 9)) ;
  {
  ioArgument_ioContext.mProperty_mEqualOperatorMap.setter_insertKey (var_intIntOp_291, var_booleanType_541, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_eq (SOURCE_FILE ("type-static-integer.galgas", 13))  COMMA_SOURCE_FILE ("type-static-integer.galgas", 13)), inCompiler COMMA_SOURCE_FILE ("type-static-integer.galgas", 10)) ;
  }
  {
  ioArgument_ioContext.mProperty_mStrictInfOperatorMap.setter_insertKey (var_intIntOp_291, var_booleanType_541, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_slt (SOURCE_FILE ("type-static-integer.galgas", 18))  COMMA_SOURCE_FILE ("type-static-integer.galgas", 18)), inCompiler COMMA_SOURCE_FILE ("type-static-integer.galgas", 15)) ;
  }
  {
  ioArgument_ioContext.mProperty_mInfEqualOperatorMap.setter_insertKey (var_intIntOp_291, var_booleanType_541, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_sle (SOURCE_FILE ("type-static-integer.galgas", 23))  COMMA_SOURCE_FILE ("type-static-integer.galgas", 23)), inCompiler COMMA_SOURCE_FILE ("type-static-integer.galgas", 20)) ;
  }
  {
  ioArgument_ioContext.mProperty_mAndOperatorMap.setter_insertKey (var_intIntOp_291, var_selfType_405, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_and (SOURCE_FILE ("type-static-integer.galgas", 29))  COMMA_SOURCE_FILE ("type-static-integer.galgas", 29)), inCompiler COMMA_SOURCE_FILE ("type-static-integer.galgas", 26)) ;
  }
  {
  ioArgument_ioContext.mProperty_mOrOperatorMap.setter_insertKey (var_intIntOp_291, var_selfType_405, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_ior (SOURCE_FILE ("type-static-integer.galgas", 34))  COMMA_SOURCE_FILE ("type-static-integer.galgas", 34)), inCompiler COMMA_SOURCE_FILE ("type-static-integer.galgas", 31)) ;
  }
  {
  ioArgument_ioContext.mProperty_mXorOperatorMap.setter_insertKey (var_intIntOp_291, var_selfType_405, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_xor (SOURCE_FILE ("type-static-integer.galgas", 39))  COMMA_SOURCE_FILE ("type-static-integer.galgas", 39)), inCompiler COMMA_SOURCE_FILE ("type-static-integer.galgas", 36)) ;
  }
  {
  ioArgument_ioContext.mProperty_mAddOperatorMap.setter_insertKey (var_intIntOp_291, var_selfType_405, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_saddOVF (SOURCE_FILE ("type-static-integer.galgas", 45))  COMMA_SOURCE_FILE ("type-static-integer.galgas", 45)), inCompiler COMMA_SOURCE_FILE ("type-static-integer.galgas", 42)) ;
  }
  {
  ioArgument_ioContext.mProperty_mAddNoOvfOperatorMap.setter_insertKey (var_intIntOp_291, var_selfType_405, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_addNoOVF (SOURCE_FILE ("type-static-integer.galgas", 50))  COMMA_SOURCE_FILE ("type-static-integer.galgas", 50)), inCompiler COMMA_SOURCE_FILE ("type-static-integer.galgas", 47)) ;
  }
  {
  ioArgument_ioContext.mProperty_mSubOperatorMap.setter_insertKey (var_intIntOp_291, var_selfType_405, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_ssubOVF (SOURCE_FILE ("type-static-integer.galgas", 55))  COMMA_SOURCE_FILE ("type-static-integer.galgas", 55)), inCompiler COMMA_SOURCE_FILE ("type-static-integer.galgas", 52)) ;
  }
  {
  ioArgument_ioContext.mProperty_mSubNoOvfOperatorMap.setter_insertKey (var_intIntOp_291, var_selfType_405, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_subNoOVF (SOURCE_FILE ("type-static-integer.galgas", 60))  COMMA_SOURCE_FILE ("type-static-integer.galgas", 60)), inCompiler COMMA_SOURCE_FILE ("type-static-integer.galgas", 57)) ;
  }
  {
  ioArgument_ioContext.mProperty_mMulOperatorMap.setter_insertKey (var_intIntOp_291, var_selfType_405, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_smulOVF (SOURCE_FILE ("type-static-integer.galgas", 65))  COMMA_SOURCE_FILE ("type-static-integer.galgas", 65)), inCompiler COMMA_SOURCE_FILE ("type-static-integer.galgas", 62)) ;
  }
  {
  ioArgument_ioContext.mProperty_mMulNoOvfOperatorMap.setter_insertKey (var_intIntOp_291, var_selfType_405, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_mulNoOVF (SOURCE_FILE ("type-static-integer.galgas", 70))  COMMA_SOURCE_FILE ("type-static-integer.galgas", 70)), inCompiler COMMA_SOURCE_FILE ("type-static-integer.galgas", 67)) ;
  }
  {
  ioArgument_ioContext.mProperty_mDivOperatorMap.setter_insertKey (var_intIntOp_291, var_selfType_405, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_sdivOVF (SOURCE_FILE ("type-static-integer.galgas", 75))  COMMA_SOURCE_FILE ("type-static-integer.galgas", 75)), inCompiler COMMA_SOURCE_FILE ("type-static-integer.galgas", 72)) ;
  }
  {
  ioArgument_ioContext.mProperty_mDivNoOvfOperatorMap.setter_insertKey (var_intIntOp_291, var_selfType_405, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_sdivNoOVF (SOURCE_FILE ("type-static-integer.galgas", 80))  COMMA_SOURCE_FILE ("type-static-integer.galgas", 80)), inCompiler COMMA_SOURCE_FILE ("type-static-integer.galgas", 77)) ;
  }
  {
  ioArgument_ioContext.mProperty_mModOperatorMap.setter_insertKey (var_intIntOp_291, var_selfType_405, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_sremOVF (SOURCE_FILE ("type-static-integer.galgas", 85))  COMMA_SOURCE_FILE ("type-static-integer.galgas", 85)), inCompiler COMMA_SOURCE_FILE ("type-static-integer.galgas", 82)) ;
  }
  {
  ioArgument_ioContext.mProperty_mModNoOvfOperatorMap.setter_insertKey (var_intIntOp_291, var_selfType_405, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_sremNoOVF (SOURCE_FILE ("type-static-integer.galgas", 90))  COMMA_SOURCE_FILE ("type-static-integer.galgas", 90)), inCompiler COMMA_SOURCE_FILE ("type-static-integer.galgas", 87)) ;
  }
  {
  ioArgument_ioContext.mProperty_mLeftShiftOperatorMap.setter_insertKey (var_intIntOp_291, var_selfType_405, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_shl (SOURCE_FILE ("type-static-integer.galgas", 96))  COMMA_SOURCE_FILE ("type-static-integer.galgas", 96)), inCompiler COMMA_SOURCE_FILE ("type-static-integer.galgas", 93)) ;
  }
  {
  ioArgument_ioContext.mProperty_mRightShiftOperatorMap.setter_insertKey (var_intIntOp_291, var_selfType_405, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_lshr (SOURCE_FILE ("type-static-integer.galgas", 101))  COMMA_SOURCE_FILE ("type-static-integer.galgas", 101)), inCompiler COMMA_SOURCE_FILE ("type-static-integer.galgas", 98)) ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//           Overriding extension method '@literal_literal_integerInfixOperation generateInfixOperatorCode'            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_literal_5F_literal_5F_integerInfixOperation_generateInfixOperatorCode (const cPtr_omnibusInfixOperatorDescription * inObject,
                                                                                                   GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                                                   GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                                                   const GALGAS_objectIR constinArgument_inLeftOperand,
                                                                                                   const GALGAS_location /* constinArgument_inOperatorLocation */,
                                                                                                   const GALGAS_objectIR constinArgument_inRightOperand,
                                                                                                   const GALGAS_omnibusType constinArgument_inResultType,
                                                                                                   GALGAS_objectIR & outArgument_outResult,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literal_5F_literal_5F_integerInfixOperation * object = (const cPtr_literal_5F_literal_5F_integerInfixOperation *) inObject ;
  macroValidSharedObject (object, cPtr_literal_5F_literal_5F_integerInfixOperation) ;
  GALGAS_bigint var_leftValue_4110 ;
  GALGAS_omnibusType joker_4079_1 ; // Joker input parameter
  constinArgument_inLeftOperand.method_literalInteger (joker_4079_1, var_leftValue_4110, inCompiler COMMA_SOURCE_FILE ("type-static-integer.galgas", 123)) ;
  GALGAS_bigint var_rightValue_4178 ;
  GALGAS_omnibusType joker_4146_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_literalInteger (joker_4146_1, var_rightValue_4178, inCompiler COMMA_SOURCE_FILE ("type-static-integer.galgas", 124)) ;
  const GALGAS_literal_5F_literal_5F_integerInfixOperation temp_0 = object ;
  GALGAS_bigint var_result_4192 = callExtensionGetter_performStaticOperation ((const cPtr_literal_5F_literal_5F_integerInfixOperation *) temp_0.ptr (), var_leftValue_4110, var_rightValue_4178, inCompiler COMMA_SOURCE_FILE ("type-static-integer.galgas", 125)) ;
  outArgument_outResult = GALGAS_objectIR::constructor_literalInteger (constinArgument_inResultType, var_result_4192  COMMA_SOURCE_FILE ("type-static-integer.galgas", 126)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_literal_5F_literal_5F_integerInfixOperation_generateInfixOperatorCode (void) {
  enterExtensionMethod_generateInfixOperatorCode (kTypeDescriptor_GALGAS_literal_5F_literal_5F_integerInfixOperation.mSlotID,
                                                  extensionMethod_literal_5F_literal_5F_integerInfixOperation_generateInfixOperatorCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_literal_5F_literal_5F_integerInfixOperation_generateInfixOperatorCode (defineExtensionMethod_literal_5F_literal_5F_integerInfixOperation_generateInfixOperatorCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            Once function 'boolTypeName'                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string onceFunction_boolTypeName (C_Compiler * /* inCompiler */
                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("bool") ;
//---
  return result_result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function implementation                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static bool gOnceFunctionResultAvailable_boolTypeName = false ;
static GALGAS_string gOnceFunctionResult_boolTypeName ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string function_boolTypeName (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_boolTypeName) {
    gOnceFunctionResult_boolTypeName = onceFunction_boolTypeName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_boolTypeName = true ;
  }
  return gOnceFunctionResult_boolTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void releaseOnceFunctionResult_boolTypeName (void) {
  gOnceFunctionResult_boolTypeName.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gEpilogueForOnceFunction_boolTypeName (NULL,
                                                          releaseOnceFunctionResult_boolTypeName) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_boolTypeName [1] = {
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_boolTypeName (C_Compiler * inCompiler,
                                                             const cObjectArray & /* inEffectiveParameterArray */,
                                                             const GALGAS_location & /* inErrorLocation */
                                                             COMMA_LOCATION_ARGS) {
  return function_boolTypeName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_boolTypeName ("boolTypeName",
                                                              functionWithGenericHeader_boolTypeName,
                                                              & kTypeDescriptor_GALGAS_string,
                                                              0,
                                                              functionArgs_boolTypeName) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                        Overriding extension getter '@boolTypeAST locationForErrorSignaling'                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_location extensionGetter_boolTypeAST_locationForErrorSignaling (const cPtr_abstractDeclarationAST * /* inObject */,
                                                                              C_Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  result_outLocation = GALGAS_location::constructor_nowhere (SOURCE_FILE ("type-bool.galgas", 17)) ;
//---
  return result_outLocation ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_boolTypeAST_locationForErrorSignaling (void) {
  enterExtensionGetter_locationForErrorSignaling (kTypeDescriptor_GALGAS_boolTypeAST.mSlotID,
                                                  extensionGetter_boolTypeAST_locationForErrorSignaling) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_boolTypeAST_locationForErrorSignaling (defineExtensionGetter_boolTypeAST_locationForErrorSignaling, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                          Overriding extension method '@boolTypeAST enterInPrecedenceGraph'                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_boolTypeAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_boolTypeAST * object = (const cPtr_boolTypeAST *) inObject ;
  macroValidSharedObject (object, cPtr_boolTypeAST) ;
  GALGAS_lstring var_nodeName_1285 = function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 27)).getter_nowhere (SOURCE_FILE ("type-bool.galgas", 27)) ;
  {
  const GALGAS_boolTypeAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (var_nodeName_1285, temp_0, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 28)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_nodeName_1285, function_ctBoolTypeName (inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 29)).getter_nowhere (SOURCE_FILE ("type-bool.galgas", 29)) COMMA_SOURCE_FILE ("type-bool.galgas", 29)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_boolTypeAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_boolTypeAST.mSlotID,
                                               extensionMethod_boolTypeAST_enterInPrecedenceGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_boolTypeAST_enterInPrecedenceGraph (defineExtensionMethod_boolTypeAST_enterInPrecedenceGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                    Overriding extension getter '@boolTypeAST keyRepresentationForErrorSignaling'                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_boolTypeAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * /* inObject */,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  result_outRepresentation = function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 35)) ;
//---
  return result_outRepresentation ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_boolTypeAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_boolTypeAST.mSlotID,
                                                           extensionGetter_boolTypeAST_keyRepresentationForErrorSignaling) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_boolTypeAST_keyRepresentationForErrorSignaling (defineExtensionGetter_boolTypeAST_keyRepresentationForErrorSignaling, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                              Overriding extension method '@boolTypeAST enterInContext'                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_boolTypeAST_enterInContext (const cPtr_abstractDeclarationAST * /* inObject */,
                                                        GALGAS_semanticContext & ioArgument_ioContext,
                                                        GALGAS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                        GALGAS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                                        GALGAS_routineListIR & ioArgument_ioRoutineListIR,
                                                        GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                        GALGAS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                        GALGAS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                        GALGAS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                        C_Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring var_boolTypeName_2628 = function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 52)).getter_nowhere (SOURCE_FILE ("type-bool.galgas", 52)) ;
  GALGAS_omnibusType var_boolType_2671 = function_boolType (inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 53)) ;
  GALGAS_omnibusType var_ctBoolType_2702 = function_compileTimeBoolType (inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 54)) ;
  {
  ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (var_boolTypeName_2628, var_boolType_2671, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 56)) ;
  }
  GALGAS_lstring var_key_2858 = function_prefixOperatorMapKey (var_boolType_2671, GALGAS_prefixOperator::constructor_notOp (SOURCE_FILE ("type-bool.galgas", 58)), GALGAS_location::constructor_nowhere (SOURCE_FILE ("type-bool.galgas", 58)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 58)) ;
  {
  ioArgument_ioContext.mProperty_mPrefixOperatorMap.setter_insertKey (var_key_2858, var_boolType_2671, var_boolType_2671, GALGAS_boolNotOperator::constructor_new (SOURCE_FILE ("type-bool.galgas", 59)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 59)) ;
  }
  var_key_2858 = function_infixOperatorMapKey (var_boolType_2671, GALGAS_omnibusInfixOperator::constructor_bitWiseOrOp (SOURCE_FILE ("type-bool.galgas", 61)), GALGAS_location::constructor_nowhere (SOURCE_FILE ("type-bool.galgas", 61)), var_boolType_2671, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 61)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2858, var_boolType_2671, GALGAS_inlineInfixOperatorUsage::constructor_new (GALGAS_string ("or")  COMMA_SOURCE_FILE ("type-bool.galgas", 62)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 62)) ;
  }
  var_key_2858 = function_infixOperatorMapKey (var_ctBoolType_2702, GALGAS_omnibusInfixOperator::constructor_bitWiseOrOp (SOURCE_FILE ("type-bool.galgas", 63)), GALGAS_location::constructor_nowhere (SOURCE_FILE ("type-bool.galgas", 63)), var_boolType_2671, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 63)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2858, var_boolType_2671, GALGAS_inlineInfixOperatorUsage::constructor_new (GALGAS_string ("or")  COMMA_SOURCE_FILE ("type-bool.galgas", 64)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 64)) ;
  }
  var_key_2858 = function_infixOperatorMapKey (var_boolType_2671, GALGAS_omnibusInfixOperator::constructor_bitWiseOrOp (SOURCE_FILE ("type-bool.galgas", 65)), GALGAS_location::constructor_nowhere (SOURCE_FILE ("type-bool.galgas", 65)), var_ctBoolType_2702, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 65)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2858, var_boolType_2671, GALGAS_inlineInfixOperatorUsage::constructor_new (GALGAS_string ("or")  COMMA_SOURCE_FILE ("type-bool.galgas", 66)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 66)) ;
  }
  var_key_2858 = function_infixOperatorMapKey (var_boolType_2671, GALGAS_omnibusInfixOperator::constructor_bitWiseXorOp (SOURCE_FILE ("type-bool.galgas", 68)), GALGAS_location::constructor_nowhere (SOURCE_FILE ("type-bool.galgas", 68)), var_boolType_2671, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 68)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2858, var_boolType_2671, GALGAS_inlineInfixOperatorUsage::constructor_new (GALGAS_string ("xor")  COMMA_SOURCE_FILE ("type-bool.galgas", 69)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 69)) ;
  }
  var_key_2858 = function_infixOperatorMapKey (var_ctBoolType_2702, GALGAS_omnibusInfixOperator::constructor_bitWiseXorOp (SOURCE_FILE ("type-bool.galgas", 70)), GALGAS_location::constructor_nowhere (SOURCE_FILE ("type-bool.galgas", 70)), var_boolType_2671, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 70)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2858, var_boolType_2671, GALGAS_inlineInfixOperatorUsage::constructor_new (GALGAS_string ("xor")  COMMA_SOURCE_FILE ("type-bool.galgas", 71)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 71)) ;
  }
  var_key_2858 = function_infixOperatorMapKey (var_boolType_2671, GALGAS_omnibusInfixOperator::constructor_bitWiseXorOp (SOURCE_FILE ("type-bool.galgas", 72)), GALGAS_location::constructor_nowhere (SOURCE_FILE ("type-bool.galgas", 72)), var_ctBoolType_2702, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 72)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2858, var_boolType_2671, GALGAS_inlineInfixOperatorUsage::constructor_new (GALGAS_string ("xor")  COMMA_SOURCE_FILE ("type-bool.galgas", 73)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 73)) ;
  }
  var_key_2858 = function_infixOperatorMapKey (var_boolType_2671, GALGAS_omnibusInfixOperator::constructor_equal (SOURCE_FILE ("type-bool.galgas", 75)), GALGAS_location::constructor_nowhere (SOURCE_FILE ("type-bool.galgas", 75)), var_boolType_2671, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 75)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2858, var_boolType_2671, GALGAS_inlineInfixOperatorUsage::constructor_new (GALGAS_string ("icmp eq")  COMMA_SOURCE_FILE ("type-bool.galgas", 76)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 76)) ;
  }
  var_key_2858 = function_infixOperatorMapKey (var_ctBoolType_2702, GALGAS_omnibusInfixOperator::constructor_equal (SOURCE_FILE ("type-bool.galgas", 77)), GALGAS_location::constructor_nowhere (SOURCE_FILE ("type-bool.galgas", 77)), var_boolType_2671, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 77)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2858, var_boolType_2671, GALGAS_inlineInfixOperatorUsage::constructor_new (GALGAS_string ("icmp eq")  COMMA_SOURCE_FILE ("type-bool.galgas", 78)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 78)) ;
  }
  var_key_2858 = function_infixOperatorMapKey (var_boolType_2671, GALGAS_omnibusInfixOperator::constructor_equal (SOURCE_FILE ("type-bool.galgas", 79)), GALGAS_location::constructor_nowhere (SOURCE_FILE ("type-bool.galgas", 79)), var_ctBoolType_2702, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 79)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2858, var_boolType_2671, GALGAS_inlineInfixOperatorUsage::constructor_new (GALGAS_string ("icmp eq")  COMMA_SOURCE_FILE ("type-bool.galgas", 80)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 80)) ;
  }
  var_key_2858 = GALGAS_lstring::constructor_new (var_boolType_2671.getter_omnibusTypeDescriptionName (SOURCE_FILE ("type-bool.galgas", 82)), GALGAS_location::constructor_nowhere (SOURCE_FILE ("type-bool.galgas", 82))  COMMA_SOURCE_FILE ("type-bool.galgas", 82)) ;
  {
  ioArgument_ioContext.mProperty_mImplicitConversionToBooleanMap.setter_insertKey (var_key_2858, GALGAS_boolImplicitConverterToBoolean::constructor_new (SOURCE_FILE ("type-bool.galgas", 83)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 83)) ;
  }
  var_key_2858 = function_assignmentOperatorKey (var_boolType_2671, GALGAS_location::constructor_nowhere (SOURCE_FILE ("type-bool.galgas", 85)), var_boolType_2671, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 85)) ;
  {
  ioArgument_ioContext.mProperty_mAssignmentOperatorMap.setter_insertKey (var_key_2858, GALGAS_simpleCopyAssignmentOperatorUsage::constructor_new (SOURCE_FILE ("type-bool.galgas", 86)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 86)) ;
  }
  var_key_2858 = function_assignmentOperatorKey (var_boolType_2671, GALGAS_location::constructor_nowhere (SOURCE_FILE ("type-bool.galgas", 87)), var_ctBoolType_2702, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 87)) ;
  {
  ioArgument_ioContext.mProperty_mAssignmentOperatorMap.setter_insertKey (var_key_2858, GALGAS_simpleCopyAssignmentOperatorUsage::constructor_new (SOURCE_FILE ("type-bool.galgas", 88)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 88)) ;
  }
  GALGAS_string var_functionName_5296 = function_assignmentOperatorFuncName (var_boolType_2671, var_boolType_2671, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 90)) ;
  ioArgument_ioRoutineListIR.addAssign_operation (GALGAS_simpleAssignmentCopyRoutineIR::constructor_new (var_functionName_5296.getter_nowhere (SOURCE_FILE ("type-bool.galgas", 92)), GALGAS_bool (false), GALGAS_bool (false), var_boolType_2671  COMMA_SOURCE_FILE ("type-bool.galgas", 91))  COMMA_SOURCE_FILE ("type-bool.galgas", 91)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_boolTypeAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_boolTypeAST.mSlotID,
                                       extensionMethod_boolTypeAST_enterInContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_boolTypeAST_enterInContext (defineExtensionMethod_boolTypeAST_enterInContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//             Overriding extension method '@boolImplicitConverterToBoolean generateConvertToBooleanCode'              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_boolImplicitConverterToBoolean_generateConvertToBooleanCode (const cPtr_abstractImplicitConverterToBoolean * /* inObject */,
                                                                                         const GALGAS_objectIR constinArgument_inReceiverOperand,
                                                                                         const GALGAS_location /* constinArgument_inErrorLocation */,
                                                                                         GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                                         GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                                         GALGAS_allocaList & /* ioArgument_ioAllocaList */,
                                                                                         GALGAS_implicitBooleanConversionResult & outArgument_outResult,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outResult = GALGAS_implicitBooleanConversionResult::constructor_llvmVariable (extensionGetter_llvmName (constinArgument_inReceiverOperand, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 116))  COMMA_SOURCE_FILE ("type-bool.galgas", 116)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_boolImplicitConverterToBoolean_generateConvertToBooleanCode (void) {
  enterExtensionMethod_generateConvertToBooleanCode (kTypeDescriptor_GALGAS_boolImplicitConverterToBoolean.mSlotID,
                                                     extensionMethod_boolImplicitConverterToBoolean_generateConvertToBooleanCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_boolImplicitConverterToBoolean_generateConvertToBooleanCode (defineExtensionMethod_boolImplicitConverterToBoolean_generateConvertToBooleanCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                             Overriding extension method '@boolNotOperator generateCode'                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_boolNotOperator_generateCode (const cPtr_prefixOperatorUsage * /* inObject */,
                                                          const GALGAS_objectIR constinArgument_inReceiverOperand,
                                                          const GALGAS_location /* constinArgument_inOperatorLocation */,
                                                          const GALGAS_omnibusType constinArgument_inResultType,
                                                          const GALGAS_bool /* constinArgument_inDoNotGeneratePanicCode */,
                                                          GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                          GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                          GALGAS_objectIR & outArgument_outResultValue,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_objectIR var_receiverOperand_7212 = constinArgument_inReceiverOperand ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_receiverOperand_7212, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 138)) ;
  }
  {
  routine_getNewTempValue (constinArgument_inResultType, ioArgument_ioTemporaries, outArgument_outResultValue, inCompiler  COMMA_SOURCE_FILE ("type-bool.galgas", 139)) ;
  }
  GALGAS_string var_s_7398 = extensionGetter_llvmName (outArgument_outResultValue, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 140)).add_operation (GALGAS_string (" = xor i1 1, "), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 140)).add_operation (extensionGetter_llvmName (var_receiverOperand_7212, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 140)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 140)) ;
  {
  extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionGenerationList, var_s_7398, GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-bool.galgas", 141)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 141)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_boolNotOperator_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_boolNotOperator.mSlotID,
                                     extensionMethod_boolNotOperator_generateCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_boolNotOperator_generateCode (defineExtensionMethod_boolNotOperator_generateCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                  Overriding extension getter '@typeAliasDeclarationAST locationForErrorSignaling'                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_location extensionGetter_typeAliasDeclarationAST_locationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                          C_Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_result ; // Returned variable
  const cPtr_typeAliasDeclarationAST * object = (const cPtr_typeAliasDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_typeAliasDeclarationAST) ;
  result_result = object->mProperty_mAliasTypeName.getter_location (HERE) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_typeAliasDeclarationAST_locationForErrorSignaling (void) {
  enterExtensionGetter_locationForErrorSignaling (kTypeDescriptor_GALGAS_typeAliasDeclarationAST.mSlotID,
                                                  extensionGetter_typeAliasDeclarationAST_locationForErrorSignaling) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_typeAliasDeclarationAST_locationForErrorSignaling (defineExtensionGetter_typeAliasDeclarationAST_locationForErrorSignaling, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                    Overriding extension method '@typeAliasDeclarationAST enterInPrecedenceGraph'                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_typeAliasDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                            GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_typeAliasDeclarationAST * object = (const cPtr_typeAliasDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_typeAliasDeclarationAST) ;
  {
  const GALGAS_typeAliasDeclarationAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (object->mProperty_mAliasTypeName, temp_0, inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 49)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (object->mProperty_mAliasTypeName, object->mProperty_mOriginalTypeName COMMA_SOURCE_FILE ("type-alias.galgas", 50)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_typeAliasDeclarationAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_typeAliasDeclarationAST.mSlotID,
                                               extensionMethod_typeAliasDeclarationAST_enterInPrecedenceGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_typeAliasDeclarationAST_enterInPrecedenceGraph (defineExtensionMethod_typeAliasDeclarationAST_enterInPrecedenceGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//              Overriding extension getter '@typeAliasDeclarationAST keyRepresentationForErrorSignaling'              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_typeAliasDeclarationAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_typeAliasDeclarationAST * object = (const cPtr_typeAliasDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_typeAliasDeclarationAST) ;
  result_result = GALGAS_string ("typealias ").add_operation (object->mProperty_mAliasTypeName.getter_string (SOURCE_FILE ("type-alias.galgas", 56)), inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 56)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_typeAliasDeclarationAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_typeAliasDeclarationAST.mSlotID,
                                                           extensionGetter_typeAliasDeclarationAST_keyRepresentationForErrorSignaling) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_typeAliasDeclarationAST_keyRepresentationForErrorSignaling (defineExtensionGetter_typeAliasDeclarationAST_keyRepresentationForErrorSignaling, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                        Overriding extension method '@typeAliasDeclarationAST enterInContext'                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_typeAliasDeclarationAST_enterInContext (const cPtr_abstractDeclarationAST * inObject,
                                                                    GALGAS_semanticContext & ioArgument_ioContext,
                                                                    GALGAS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                                    GALGAS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                                                    GALGAS_routineListIR & /* ioArgument_ioRoutineListIR */,
                                                                    GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                                    GALGAS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                                    GALGAS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                                    GALGAS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_typeAliasDeclarationAST * object = (const cPtr_typeAliasDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_typeAliasDeclarationAST) ;
  GALGAS_omnibusType var_type_3736 ;
  ioArgument_ioContext.getter_mTypeMap (HERE).method_searchKey (object->mProperty_mOriginalTypeName, var_type_3736, inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 74)) ;
  {
  ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (object->mProperty_mAliasTypeName, var_type_3736, inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 76)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_typeAliasDeclarationAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_typeAliasDeclarationAST.mSlotID,
                                       extensionMethod_typeAliasDeclarationAST_enterInContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_typeAliasDeclarationAST_enterInContext (defineExtensionMethod_typeAliasDeclarationAST_enterInContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//               Overriding extension method '@fixedSizeArrayTypeDeclarationAST enterInPrecedenceGraph'                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_fixedSizeArrayTypeDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                                     GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_fixedSizeArrayTypeDeclarationAST * object = (const cPtr_fixedSizeArrayTypeDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_fixedSizeArrayTypeDeclarationAST) ;
  {
  const GALGAS_fixedSizeArrayTypeDeclarationAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (object->mProperty_mFixedSizeArrayType, temp_0, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 46)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (object->mProperty_mFixedSizeArrayType, object->mProperty_mElementTypeName COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 47)) ;
  }
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mProperty_mSizeExpression.ptr (), object->mProperty_mFixedSizeArrayType, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 48)) ;
  GALGAS_lstring var_rootNode_2410 = GALGAS_lstring::constructor_new (function_configurationNodeNameForPrecedenceGraph (inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 49)), object->mProperty_mFixedSizeArrayType.getter_location (HERE)  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 49)) ;
  {
  ioArgument_ioGraph.setter_addEdge (object->mProperty_mFixedSizeArrayType, var_rootNode_2410 COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 50)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_fixedSizeArrayTypeDeclarationAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_fixedSizeArrayTypeDeclarationAST.mSlotID,
                                               extensionMethod_fixedSizeArrayTypeDeclarationAST_enterInPrecedenceGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_fixedSizeArrayTypeDeclarationAST_enterInPrecedenceGraph (defineExtensionMethod_fixedSizeArrayTypeDeclarationAST_enterInPrecedenceGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//         Overriding extension getter '@fixedSizeArrayTypeDeclarationAST keyRepresentationForErrorSignaling'          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_fixedSizeArrayTypeDeclarationAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_fixedSizeArrayTypeDeclarationAST * object = (const cPtr_fixedSizeArrayTypeDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_fixedSizeArrayTypeDeclarationAST) ;
  result_outRepresentation = GALGAS_string ("anonymous $").add_operation (object->mProperty_mFixedSizeArrayType.getter_string (SOURCE_FILE ("type-fixed-size-array.galgas", 56)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 56)) ;
//---
  return result_outRepresentation ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_fixedSizeArrayTypeDeclarationAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_fixedSizeArrayTypeDeclarationAST.mSlotID,
                                                           extensionGetter_fixedSizeArrayTypeDeclarationAST_keyRepresentationForErrorSignaling) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_fixedSizeArrayTypeDeclarationAST_keyRepresentationForErrorSignaling (defineExtensionGetter_fixedSizeArrayTypeDeclarationAST_keyRepresentationForErrorSignaling, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//              Overriding extension getter '@fixedSizeArrayTypeDeclarationAST locationForErrorSignaling'              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_location extensionGetter_fixedSizeArrayTypeDeclarationAST_locationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                                   C_Compiler * /* inCompiler */
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_fixedSizeArrayTypeDeclarationAST * object = (const cPtr_fixedSizeArrayTypeDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_fixedSizeArrayTypeDeclarationAST) ;
  result_outLocation = object->mProperty_mFixedSizeArrayType.getter_location (HERE) ;
//---
  return result_outLocation ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_fixedSizeArrayTypeDeclarationAST_locationForErrorSignaling (void) {
  enterExtensionGetter_locationForErrorSignaling (kTypeDescriptor_GALGAS_fixedSizeArrayTypeDeclarationAST.mSlotID,
                                                  extensionGetter_fixedSizeArrayTypeDeclarationAST_locationForErrorSignaling) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_fixedSizeArrayTypeDeclarationAST_locationForErrorSignaling (defineExtensionGetter_fixedSizeArrayTypeDeclarationAST_locationForErrorSignaling, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                   Overriding extension method '@fixedSizeArrayTypeDeclarationAST enterInContext'                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_fixedSizeArrayTypeDeclarationAST_enterInContext (const cPtr_abstractDeclarationAST * inObject,
                                                                             GALGAS_semanticContext & ioArgument_ioContext,
                                                                             GALGAS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                                             GALGAS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                                                             GALGAS_routineListIR & ioArgument_ioRoutineListIR,
                                                                             GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                                             GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                             GALGAS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                                             GALGAS_userLLVMTypeDefinitionListIR & ioArgument_ioUserLLVMTypeDefinitionListIR,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_fixedSizeArrayTypeDeclarationAST * object = (const cPtr_fixedSizeArrayTypeDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_fixedSizeArrayTypeDeclarationAST) ;
  GALGAS_omnibusType var_elementType_4172 ;
  ioArgument_ioContext.getter_mTypeMap (HERE).method_searchKey (object->mProperty_mElementTypeName, var_elementType_4172, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 80)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = callExtensionGetter_copyable ((const cPtr_omnibusType *) var_elementType_4172.ptr (), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 81)).operator_not (SOURCE_FILE ("type-fixed-size-array.galgas", 81)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (object->mProperty_mElementTypeName.getter_location (SOURCE_FILE ("type-fixed-size-array.galgas", 82)), GALGAS_string ("an array element should be copyable"), fixItArray1  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 82)) ;
    }
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = callExtensionGetter_instanciable ((const cPtr_omnibusType *) var_elementType_4172.ptr (), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 84)).operator_not (SOURCE_FILE ("type-fixed-size-array.galgas", 84)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mProperty_mElementTypeName.getter_location (SOURCE_FILE ("type-fixed-size-array.galgas", 85)), GALGAS_string ("an array element should be instanciable"), fixItArray3  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 85)) ;
    }
  }
  GALGAS_objectIR var_sizeExpressionIR_4681 ;
  {
  routine_computeStaticExpression (ioArgument_ioContext, ioArgument_ioStaticEntityMap, object->mProperty_mSizeExpression, object->mProperty_mSizeExpressionLocation, GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-fixed-size-array.galgas", 93)), var_sizeExpressionIR_4681, inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 88)) ;
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = var_sizeExpressionIR_4681.getter_isLiteralInteger (SOURCE_FILE ("type-fixed-size-array.galgas", 96)).operator_not (SOURCE_FILE ("type-fixed-size-array.galgas", 96)).boolEnum () ;
    if (kBoolTrue == test_4) {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (object->mProperty_mSizeExpressionLocation, GALGAS_string ("array size expression is a literal interger expression"), fixItArray5  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 97)) ;
    }
  }
  if (kBoolFalse == test_4) {
    GALGAS_bigint var_arraySize_4897 ;
    GALGAS_omnibusType joker_4874_1 ; // Joker input parameter
    var_sizeExpressionIR_4681.method_literalInteger (joker_4874_1, var_arraySize_4897, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 99)) ;
    GALGAS_lstring var_omnibusTypeDescriptionName_5000 = GALGAS_lstring::constructor_new (GALGAS_string ("[").add_operation (var_arraySize_4897.getter_string (SOURCE_FILE ("type-fixed-size-array.galgas", 101)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 101)).add_operation (GALGAS_string (" \xE2""\x80""\xA2"" "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 101)).add_operation (var_elementType_4172.getter_omnibusTypeDescriptionName (HERE), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 101)).add_operation (GALGAS_string ("]"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 101)), object->mProperty_mFixedSizeArrayType.getter_location (SOURCE_FILE ("type-fixed-size-array.galgas", 101))  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 101)) ;
    GALGAS_lstring var_llvmBaseTypeName_5135 = GALGAS_lstring::constructor_new (var_elementType_4172.getter_llvmBaseTypeName (HERE).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 102)).add_operation (var_arraySize_4897.getter_string (SOURCE_FILE ("type-fixed-size-array.galgas", 102)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 102)), object->mProperty_mFixedSizeArrayType.getter_location (SOURCE_FILE ("type-fixed-size-array.galgas", 102))  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 102)) ;
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      test_6 = ioArgument_ioContext.getter_mTypeMap (HERE).getter_hasKey (var_omnibusTypeDescriptionName_5000.getter_string (SOURCE_FILE ("type-fixed-size-array.galgas", 103)) COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 103)).boolEnum () ;
      if (kBoolTrue == test_6) {
        GALGAS_omnibusType var_type_5374 ;
        ioArgument_ioContext.getter_mTypeMap (HERE).method_searchKey (var_omnibusTypeDescriptionName_5000, var_type_5374, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 104)) ;
        {
        ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (object->mProperty_mFixedSizeArrayType, var_type_5374, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 105)) ;
        }
      }
    }
    if (kBoolFalse == test_6) {
      GALGAS_classConstantMap var_classConstantMap_5618 = GALGAS_classConstantMap::constructor_emptyMap (SOURCE_FILE ("type-fixed-size-array.galgas", 111)) ;
      {
      var_classConstantMap_5618.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("count"), object->mProperty_mFixedSizeArrayType.getter_location (SOURCE_FILE ("type-fixed-size-array.galgas", 112))  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 112)), var_arraySize_4897, function_ctIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 112)).getter_nowhere (SOURCE_FILE ("type-fixed-size-array.galgas", 112)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 112)) ;
      }
      GALGAS_propertyGetterMap var_arrayTypePropertyMap_5849 = GALGAS_propertyGetterMap::constructor_emptyMap (SOURCE_FILE ("type-fixed-size-array.galgas", 114)) ;
      {
      var_arrayTypePropertyMap_5849.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("count"), var_omnibusTypeDescriptionName_5000.getter_location (HERE)  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 116)), GALGAS_bool (true), GALGAS_propertyGetterKind::constructor_constantProperty (GALGAS_objectIR::constructor_literalInteger (function_compileTimeIntegerType (inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 118)), var_arraySize_4897  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 118))  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 118)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 115)) ;
      }
      GALGAS_constructorMap var_constructorMap_6213 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-fixed-size-array.galgas", 121)) ;
      {
      var_constructorMap_6213.setter_insertKey (GALGAS_string ("(!repeated)").getter_nowhere (SOURCE_FILE ("type-fixed-size-array.galgas", 123)), GALGAS_constructorSignature::constructor_emptyList (SOURCE_FILE ("type-fixed-size-array.galgas", 123)), GALGAS_constructorValue::constructor_arrayValue (var_elementType_4172, var_arraySize_4897.getter_uint (inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 123))  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 123)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 123)) ;
      }
      GALGAS_string var_constructorName_6425 = GALGAS_string ("(") ;
      cEnumerator_range enumerator_6469 (GALGAS_range (GALGAS_uint ((uint32_t) 0U), var_arraySize_4897.getter_uint (inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 126)).substract_operation (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 126))), kENUMERATION_UP) ;
      while (enumerator_6469.hasCurrentObject ()) {
        var_constructorName_6425.plusAssign_operation(GALGAS_string ("!"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 127)) ;
        enumerator_6469.gotoNextObject () ;
      }
      var_constructorName_6425.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 129)) ;
      {
      var_constructorMap_6213.setter_insertKey (var_constructorName_6425.getter_nowhere (SOURCE_FILE ("type-fixed-size-array.galgas", 130)), GALGAS_constructorSignature::constructor_emptyList (SOURCE_FILE ("type-fixed-size-array.galgas", 130)), GALGAS_constructorValue::constructor_arrayValue (var_elementType_4172, var_arraySize_4897.getter_uint (inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 130))  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 130)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 130)) ;
      }
      GALGAS_omnibusTypeAttributes var_typeAttributes_6774 = GALGAS_omnibusTypeAttributes::constructor_instanciable (SOURCE_FILE ("type-fixed-size-array.galgas", 132)).operator_or (GALGAS_omnibusTypeAttributes::constructor_copyable (SOURCE_FILE ("type-fixed-size-array.galgas", 132)) COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 132)) ;
      GALGAS_omnibusType var_arrayType_6890 = GALGAS_omnibusType::constructor_new (var_arrayTypePropertyMap_5849, GALGAS_propertySetterMap::constructor_emptyMap (SOURCE_FILE ("type-fixed-size-array.galgas", 136)), var_classConstantMap_5618, var_constructorMap_6213, GALGAS_subscript::constructor_staticSubscript (var_elementType_4172, var_arraySize_4897  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 139)), var_typeAttributes_6774, var_omnibusTypeDescriptionName_5000.getter_string (SOURCE_FILE ("type-fixed-size-array.galgas", 141)), GALGAS_typeKind::constructor_staticArrayType (var_elementType_4172, var_arraySize_4897  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 142)), var_llvmBaseTypeName_5135.getter_string (SOURCE_FILE ("type-fixed-size-array.galgas", 143))  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 134)) ;
      {
      ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (object->mProperty_mFixedSizeArrayType, var_arrayType_6890, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 145)) ;
      }
      {
      ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (var_omnibusTypeDescriptionName_5000, var_arrayType_6890, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 149)) ;
      }
      ioArgument_ioUserLLVMTypeDefinitionListIR.addAssign_operation (GALGAS_userLLVMStaticArrayTypeDefinitionIR::constructor_new (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) var_arrayType_6890.ptr (), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 155)), var_elementType_4172, var_arraySize_4897  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 154))  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 154)) ;
      GALGAS_string var_assignValueToElements_5F_functionName_7954 = function_assignValueToFixedSizeArrayElements_5F_functionName (var_arrayType_6890, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 160)) ;
      ioArgument_ioRoutineListIR.addAssign_operation (GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR::constructor_new (var_assignValueToElements_5F_functionName_7954.getter_nowhere (SOURCE_FILE ("type-fixed-size-array.galgas", 162)), GALGAS_bool (false), GALGAS_bool (false), var_arrayType_6890, var_elementType_4172, var_arraySize_4897.getter_uint (inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 167))  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 161))  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 161)) ;
      GALGAS_string var_assignmentFunctionLLVMName_8320 = function_assignmentOperatorFuncName (var_arrayType_6890, var_arrayType_6890, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 169)) ;
      ioArgument_ioRoutineListIR.addAssign_operation (GALGAS_staticArrayTypeAssignFunctionIR::constructor_new (var_assignmentFunctionLLVMName_8320.getter_nowhere (SOURCE_FILE ("type-fixed-size-array.galgas", 171)), GALGAS_bool (false), GALGAS_bool (false), var_arrayType_6890  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 170))  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 170)) ;
      GALGAS_lstring var_key_8617 = function_assignmentOperatorKey (var_arrayType_6890, object->mProperty_mFixedSizeArrayType.getter_location (HERE), var_arrayType_6890, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 177)) ;
      {
      ioArgument_ioContext.mProperty_mAssignmentOperatorMap.setter_insertKey (var_key_8617, GALGAS_fixedSizeArrayAssignmentOperatorUsage::constructor_new (var_elementType_4172, var_arraySize_4897.getter_uint (inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 178)), var_assignValueToElements_5F_functionName_7954  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 178)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 178)) ;
      }
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_fixedSizeArrayTypeDeclarationAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_fixedSizeArrayTypeDeclarationAST.mSlotID,
                                       extensionMethod_fixedSizeArrayTypeDeclarationAST_enterInContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_fixedSizeArrayTypeDeclarationAST_enterInContext (defineExtensionMethod_fixedSizeArrayTypeDeclarationAST_enterInContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                             Function 'assignValueToFixedSizeArrayElements_functionName'                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string function_assignValueToFixedSizeArrayElements_5F_functionName (const GALGAS_omnibusType & constinArgument_inFixedSizeArrayType,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("assign.value.to.fixed.size.array.").add_operation (constinArgument_inFixedSizeArrayType.getter_llvmBaseTypeName (SOURCE_FILE ("type-fixed-size-array.galgas", 186)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 186)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_assignValueToFixedSizeArrayElements_5F_functionName [2] = {
  & kTypeDescriptor_GALGAS_omnibusType,
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_assignValueToFixedSizeArrayElements_5F_functionName (C_Compiler * inCompiler,
                                                                                                    const cObjectArray & inEffectiveParameterArray,
                                                                                                    const GALGAS_location & /* inErrorLocation */
                                                                                                    COMMA_LOCATION_ARGS) {
  const GALGAS_omnibusType operand0 = GALGAS_omnibusType::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                         inCompiler
                                                                         COMMA_THERE) ;
  return function_assignValueToFixedSizeArrayElements_5F_functionName (operand0,
                                                                       inCompiler
                                                                       COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_assignValueToFixedSizeArrayElements_5F_functionName ("assignValueToFixedSizeArrayElements_functionName",
                                                                                                     functionWithGenericHeader_assignValueToFixedSizeArrayElements_5F_functionName,
                                                                                                     & kTypeDescriptor_GALGAS_string,
                                                                                                     1,
                                                                                                     functionArgs_assignValueToFixedSizeArrayElements_5F_functionName) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                 Overriding extension method '@userLLVMStaticArrayTypeDefinitionIR generateLLVMType'                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_userLLVMStaticArrayTypeDefinitionIR_generateLLVMType (const cPtr_userLLVMTypeDefinitionIR * inObject,
                                                                                  GALGAS_string & ioArgument_ioLLVMcode,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_userLLVMStaticArrayTypeDefinitionIR * object = (const cPtr_userLLVMStaticArrayTypeDefinitionIR *) inObject ;
  macroValidSharedObject (object, cPtr_userLLVMStaticArrayTypeDefinitionIR) ;
  ioArgument_ioLLVMcode.plusAssign_operation(object->mProperty_mLLVMDefinedTypeName.add_operation (GALGAS_string (" = type ["), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 201)).add_operation (object->mProperty_mSize.getter_string (SOURCE_FILE ("type-fixed-size-array.galgas", 201)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 201)).add_operation (GALGAS_string (" x "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 201)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) object->mProperty_mElementType.ptr (), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 201)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 201)).add_operation (GALGAS_string ("]\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 201)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 201)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_userLLVMStaticArrayTypeDefinitionIR_generateLLVMType (void) {
  enterExtensionMethod_generateLLVMType (kTypeDescriptor_GALGAS_userLLVMStaticArrayTypeDefinitionIR.mSlotID,
                                         extensionMethod_userLLVMStaticArrayTypeDefinitionIR_generateLLVMType) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_userLLVMStaticArrayTypeDefinitionIR_generateLLVMType (defineExtensionMethod_userLLVMStaticArrayTypeDefinitionIR_generateLLVMType, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                  Overriding extension method '@fixedSizeArrayAssignmentOperatorUsage generateCode'                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_fixedSizeArrayAssignmentOperatorUsage_generateCode (const cPtr_abstractAssignmentOperatorUsage * inObject,
                                                                                GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                GALGAS_instructionListIR & ioArgument_ioInstructionListIR,
                                                                                GALGAS_allocaList & /* ioArgument_ioAllocaList */,
                                                                                const GALGAS_omnibusType constinArgument_inTargetType,
                                                                                const GALGAS_string constinArgument_inTargetLLVMName,
                                                                                const GALGAS_objectIR constinArgument_inSourcePossibleReference,
                                                                                const GALGAS_location constinArgument_inErrorLocation,
                                                                                const GALGAS_bool /* constinArgument_inTargetIsInitialized */,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_fixedSizeArrayAssignmentOperatorUsage * object = (const cPtr_fixedSizeArrayAssignmentOperatorUsage *) inObject ;
  macroValidSharedObject (object, cPtr_fixedSizeArrayAssignmentOperatorUsage) ;
  GALGAS_string var_arrayTypeName_10930 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inTargetType.ptr (), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 226)) ;
  GALGAS_string var_elementTypeName_10982 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) object->mProperty_mElementType.ptr (), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 227)) ;
  switch (constinArgument_inSourcePossibleReference.enumValue ()) {
  case GALGAS_objectIR::kNotBuilt:
    break ;
  case GALGAS_objectIR::kEnum_llvmArrayRepeatedDynamicValue:
    {
      const cEnumAssociatedValues_objectIR_llvmArrayRepeatedDynamicValue * extractPtr_11585 = (const cEnumAssociatedValues_objectIR_llvmArrayRepeatedDynamicValue *) (constinArgument_inSourcePossibleReference.unsafePointer ()) ;
      const GALGAS_objectIR extractedValue_sourceValuePossibleReference = extractPtr_11585->mAssociatedValue2 ;
      GALGAS_objectIR var_sourceValue_11156 = extractedValue_sourceValuePossibleReference ;
      {
      extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionListIR, ioArgument_ioTemporaries, var_sourceValue_11156, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 231)) ;
      }
      GALGAS_string var_s_11279 = GALGAS_string ("call void @").add_operation (object->mProperty_mAssignValueToElements_5F_functionName.getter_assemblerRepresentation (SOURCE_FILE ("type-fixed-size-array.galgas", 232)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 232)) ;
      var_s_11279.plusAssign_operation(GALGAS_string (" (").add_operation (var_arrayTypeName_10930, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 233)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 233)).add_operation (constinArgument_inTargetLLVMName, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 233)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 233)) ;
      var_s_11279.plusAssign_operation(GALGAS_string (", ").add_operation (var_elementTypeName_10982, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 234)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 234)).add_operation (extensionGetter_llvmName (var_sourceValue_11156, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 234)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 234)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 234)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 234)) ;
      {
      GALGAS_stringset temp_0 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-fixed-size-array.galgas", 235)) ;
      temp_0.addAssign_operation (object->mProperty_mAssignValueToElements_5F_functionName  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 235)) ;
      extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionListIR, var_s_11279, temp_0, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 235)) ;
      }
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmArrayDynamicValues:
    {
      const cEnumAssociatedValues_objectIR_llvmArrayDynamicValues * extractPtr_12319 = (const cEnumAssociatedValues_objectIR_llvmArrayDynamicValues *) (constinArgument_inSourcePossibleReference.unsafePointer ()) ;
      const GALGAS_operandIRList extractedValue_values = extractPtr_12319->mAssociatedValue1 ;
      GALGAS_uint var_uniqueValue_11664 = ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE) ;
      ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 238)) ;
      cEnumerator_operandIRList enumerator_11759 (extractedValue_values, kENUMERATION_UP) ;
      GALGAS_uint index_11741 ((uint32_t) 0) ;
      while (enumerator_11759.hasCurrentObject ()) {
        GALGAS_objectIR var_sourceValue_11796 = enumerator_11759.current_mOperand (HERE) ;
        {
        extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionListIR, ioArgument_ioTemporaries, var_sourceValue_11796, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 241)) ;
        }
        GALGAS_string var_ptr_11902 = GALGAS_string ("%ptr.").add_operation (var_uniqueValue_11664.getter_string (SOURCE_FILE ("type-fixed-size-array.galgas", 242)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 242)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 242)).add_operation (index_11741.getter_string (SOURCE_FILE ("type-fixed-size-array.galgas", 242)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 242)) ;
        GALGAS_string var_s_11950 = var_ptr_11902.add_operation (GALGAS_string (" = getelementptr "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 243)).add_operation (var_arrayTypeName_10930, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 243)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 243)).add_operation (var_arrayTypeName_10930, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 243)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 243)).add_operation (constinArgument_inTargetLLVMName, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 243)).add_operation (GALGAS_string (", i32 0, i32 "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 243)).add_operation (index_11741.getter_string (SOURCE_FILE ("type-fixed-size-array.galgas", 243)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 243)) ;
        {
        extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionListIR, var_s_11950, GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-fixed-size-array.galgas", 244)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 244)) ;
        }
        var_s_11950 = GALGAS_string ("store ").add_operation (var_elementTypeName_10982, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 245)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 245)).add_operation (extensionGetter_llvmName (var_sourceValue_11796, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 245)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 245)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 245)).add_operation (var_elementTypeName_10982, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 245)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 245)).add_operation (var_ptr_11902, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 245)) ;
        {
        extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionListIR, var_s_11950, GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-fixed-size-array.galgas", 246)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 246)) ;
        }
        enumerator_11759.gotoNextObject () ;
        index_11741.increment_operation (inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 239)) ;
      }
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmArrayStaticValues:
    {
      const cEnumAssociatedValues_objectIR_llvmArrayStaticValues * extractPtr_12929 = (const cEnumAssociatedValues_objectIR_llvmArrayStaticValues *) (constinArgument_inSourcePossibleReference.unsafePointer ()) ;
      const GALGAS_operandIRList extractedValue_values = extractPtr_12929->mAssociatedValue1 ;
      GALGAS_uint var_uniqueValue_12400 = ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE) ;
      ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 250)) ;
      cEnumerator_operandIRList enumerator_12495 (extractedValue_values, kENUMERATION_UP) ;
      GALGAS_uint index_12477 ((uint32_t) 0) ;
      while (enumerator_12495.hasCurrentObject ()) {
        GALGAS_string var_ptr_12518 = GALGAS_string ("%ptr.").add_operation (var_uniqueValue_12400.getter_string (SOURCE_FILE ("type-fixed-size-array.galgas", 252)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 252)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 252)).add_operation (index_12477.getter_string (SOURCE_FILE ("type-fixed-size-array.galgas", 252)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 252)) ;
        GALGAS_string var_s_12566 = var_ptr_12518.add_operation (GALGAS_string (" = getelementptr "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 253)).add_operation (var_arrayTypeName_10930, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 253)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 253)).add_operation (var_arrayTypeName_10930, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 253)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 253)).add_operation (constinArgument_inTargetLLVMName, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 253)).add_operation (GALGAS_string (", i32 0, i32 "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 253)).add_operation (index_12477.getter_string (SOURCE_FILE ("type-fixed-size-array.galgas", 253)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 253)) ;
        {
        extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionListIR, var_s_12566, GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-fixed-size-array.galgas", 254)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 254)) ;
        }
        var_s_12566 = GALGAS_string ("store ").add_operation (var_elementTypeName_10982, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 255)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 255)).add_operation (extensionGetter_llvmName (enumerator_12495.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 255)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 255)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 255)).add_operation (var_elementTypeName_10982, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 255)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 255)).add_operation (var_ptr_12518, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 255)) ;
        {
        extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionListIR, var_s_12566, GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-fixed-size-array.galgas", 256)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 256)) ;
        }
        enumerator_12495.gotoNextObject () ;
        index_12477.increment_operation (inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 251)) ;
      }
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmArrayRepeatedStaticValue:
    {
      const cEnumAssociatedValues_objectIR_llvmArrayRepeatedStaticValue * extractPtr_13399 = (const cEnumAssociatedValues_objectIR_llvmArrayRepeatedStaticValue *) (constinArgument_inSourcePossibleReference.unsafePointer ()) ;
      const GALGAS_uint extractedValue_idx = extractPtr_13399->mAssociatedValue3 ;
      GALGAS_string var_assignmentFunctionLLVMName_13017 = function_assignmentOperatorFuncName (constinArgument_inTargetType, constinArgument_inTargetType, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 259)) ;
      GALGAS_string var_s_13087 = GALGAS_string (" call void  @").add_operation (var_assignmentFunctionLLVMName_13017.getter_assemblerRepresentation (SOURCE_FILE ("type-fixed-size-array.galgas", 260)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 260)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 260)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inTargetType.ptr (), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 261)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 261)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 261)).add_operation (constinArgument_inTargetLLVMName, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 261)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 261)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inTargetType.ptr (), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 262)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 262)).add_operation (GALGAS_string ("* @gconst."), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 262)).add_operation (extractedValue_idx.getter_string (SOURCE_FILE ("type-fixed-size-array.galgas", 262)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 262)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 262)) ;
      {
      GALGAS_stringset temp_1 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-fixed-size-array.galgas", 263)) ;
      temp_1.addAssign_operation (var_assignmentFunctionLLVMName_13017  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 263)) ;
      extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionListIR, var_s_13087, temp_1, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 263)) ;
      }
    }
    break ;
  case GALGAS_objectIR::kEnum_reference:
    {
      GALGAS_string var_assignmentFunctionLLVMName_13458 = function_assignmentOperatorFuncName (constinArgument_inTargetType, constinArgument_inTargetType, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 265)) ;
      GALGAS_string var_s_13528 = GALGAS_string (" call void  @").add_operation (var_assignmentFunctionLLVMName_13458.getter_assemblerRepresentation (SOURCE_FILE ("type-fixed-size-array.galgas", 266)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 266)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 266)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inTargetType.ptr (), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 267)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 267)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 267)).add_operation (constinArgument_inTargetLLVMName, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 267)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 267)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inTargetType.ptr (), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 268)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 268)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 268)).add_operation (extensionGetter_llvmName (constinArgument_inSourcePossibleReference, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 268)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 268)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 268)) ;
      {
      GALGAS_stringset temp_2 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-fixed-size-array.galgas", 269)) ;
      temp_2.addAssign_operation (var_assignmentFunctionLLVMName_13458  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 269)) ;
      extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionListIR, var_s_13528, temp_2, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 269)) ;
      }
    }
    break ;
  case GALGAS_objectIR::kEnum_literalInteger:
    {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("invalid fixed array assignment source (literalInteger)"), fixItArray3  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 271)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_literalString:
    {
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("invalid fixed array assignment source (literalString)"), fixItArray4  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 273)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmStructureValue:
    {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("invalid fixed array assignment source (llvmStructureValue)"), fixItArray5  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 275)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmValue:
    {
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("invalid fixed array assignment source (llvmValue)"), fixItArray6  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 277)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_null:
    {
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("invalid fixed array assignment source (null)"), fixItArray7  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 279)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_void:
    {
      TC_Array <C_FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("invalid fixed array assignment source (void)"), fixItArray8  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 281)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_zero:
    {
      TC_Array <C_FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("invalid fixed array assignment source (zero)"), fixItArray9  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 283)) ;
    }
    break ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_fixedSizeArrayAssignmentOperatorUsage_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_fixedSizeArrayAssignmentOperatorUsage.mSlotID,
                                     extensionMethod_fixedSizeArrayAssignmentOperatorUsage_generateCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_fixedSizeArrayAssignmentOperatorUsage_generateCode (defineExtensionMethod_fixedSizeArrayAssignmentOperatorUsage_generateCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//       Overriding extension method '@assignRepeatedValueToFixedSizeArrayElementsFunctionIR llvmCodeGeneration'       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_llvmCodeGeneration (const cPtr_abstractRoutineIR * inObject,
                                                                                                      GALGAS_string & ioArgument_ioLLVMcode,
                                                                                                      const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                                                      GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR * object = (const cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR *) inObject ;
  macroValidSharedObject (object, cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR) ;
  GALGAS_string var_arrayTypeName_15246 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) object->mProperty_mFixedSizeArrayType.ptr (), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 302)) ;
  GALGAS_string var_elementTypeName_15305 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) object->mProperty_mElementType.ptr (), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 303)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal void @").add_operation (object->mProperty_mRoutineMangledName.getter_string (HERE).getter_assemblerRepresentation (SOURCE_FILE ("type-fixed-size-array.galgas", 304)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 304)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 304)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" (").add_operation (var_arrayTypeName_15246, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 305)).add_operation (GALGAS_string (" * %inTarget, "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 305)).add_operation (var_elementTypeName_15305, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 305)).add_operation (GALGAS_string (" %inRepeatedValue) nounwind optsize {\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 305)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 305)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %idx = alloca i32\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 306)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store i32 0, i32* %idx\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 307)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %loop\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 308)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("loop:\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 309)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %idxValue = load i32, i32* %idx\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 310)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %ptr = getelementptr ").add_operation (var_arrayTypeName_15246, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 311)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 311)).add_operation (var_arrayTypeName_15246, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 311)).add_operation (GALGAS_string ("* %inTarget, i32 0, i32 %idxValue\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 311)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 311)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_elementTypeName_15305, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 312)).add_operation (GALGAS_string (" %inRepeatedValue, "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 312)).add_operation (var_elementTypeName_15305, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 312)).add_operation (GALGAS_string ("* %ptr\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 312)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 312)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %nextIdxValue = add i32 %idxValue, 1\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 313)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store i32 %nextIdxValue, i32* %idx\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 314)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %continue = icmp ult i32 %nextIdxValue, ").add_operation (object->mProperty_mArraySize.getter_string (SOURCE_FILE ("type-fixed-size-array.galgas", 315)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 315)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 315)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 315)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %continue, label %loop, label %exit\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 316)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("exit:\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 317)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 318)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 319)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_llvmCodeGeneration (void) {
  enterExtensionMethod_llvmCodeGeneration (kTypeDescriptor_GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR.mSlotID,
                                           extensionMethod_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_llvmCodeGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_llvmCodeGeneration (defineExtensionMethod_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_llvmCodeGeneration, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                  Overriding extension method '@staticArrayTypeAssignFunctionIR llvmCodeGeneration'                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_staticArrayTypeAssignFunctionIR_llvmCodeGeneration (const cPtr_abstractRoutineIR * inObject,
                                                                                GALGAS_string & ioArgument_ioLLVMcode,
                                                                                const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                                GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_staticArrayTypeAssignFunctionIR * object = (const cPtr_staticArrayTypeAssignFunctionIR *) inObject ;
  macroValidSharedObject (object, cPtr_staticArrayTypeAssignFunctionIR) ;
  GALGAS_string var_llvmTypeName_16857 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) object->mProperty_mFixedSizeArrayType.ptr (), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 335)) ;
  GALGAS_arcAssignmentList var_arcAssignmentList_16918 = callExtensionGetter_arcList ((const cPtr_omnibusType *) object->mProperty_mFixedSizeArrayType.ptr (), GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("type-fixed-size-array.galgas", 336)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 336)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal void @").add_operation (object->mProperty_mRoutineMangledName.getter_string (HERE).getter_assemblerRepresentation (SOURCE_FILE ("type-fixed-size-array.galgas", 337)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 337)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 337)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" (").add_operation (var_llvmTypeName_16857, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 338)).add_operation (GALGAS_string (" * %inTarget, "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 338)).add_operation (var_llvmTypeName_16857, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 338)).add_operation (GALGAS_string ("* %inSource) nounwind optsize {\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 338)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 338)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- Handle ARC properties\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 339)) ;
  cEnumerator_arcAssignmentList enumerator_17263 (var_arcAssignmentList_16918, kENUMERATION_UP) ;
  while (enumerator_17263.hasCurrentObject ()) {
    GALGAS_string var_propertyTypeLLVMName_17295 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_17263.current_mPropertyType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 341)) ;
    GALGAS_string var_llvmVarName_17345 = GALGAS_string ("%arc.retain.").add_operation (enumerator_17263.current_mPropertyName (HERE).getter_assemblerRepresentation (SOURCE_FILE ("type-fixed-size-array.galgas", 342)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 342)).add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("type-fixed-size-array.galgas", 342)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 342)) ;
    ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 343)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_llvmVarName_17345, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 344)).add_operation (GALGAS_string (" = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 344)).add_operation (var_llvmTypeName_16857, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 344)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 344)).add_operation (var_llvmTypeName_16857, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 344)).add_operation (GALGAS_string ("* %inSource, i32 0"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 344)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 344)) ;
    cEnumerator_uintlist enumerator_17627 (enumerator_17263.current_mPropertyIndexPath (HERE), kENUMERATION_UP) ;
    while (enumerator_17627.hasCurrentObject ()) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", i32 ").add_operation (enumerator_17627.current_mValue (HERE).getter_string (SOURCE_FILE ("type-fixed-size-array.galgas", 346)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 346)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 346)) ;
      enumerator_17627.gotoNextObject () ;
    }
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ; ").add_operation (enumerator_17263.current_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 348)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 348)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 348)) ;
    GALGAS_string var_llvmLoadedVarName_17745 = var_llvmVarName_17345.add_operation (GALGAS_string (".loaded"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 349)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_llvmLoadedVarName_17745, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 350)).add_operation (GALGAS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 350)).add_operation (var_propertyTypeLLVMName_17295, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 350)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 350)).add_operation (var_propertyTypeLLVMName_17295, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 350)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 350)).add_operation (var_llvmVarName_17345, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 350)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 350)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 350)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @arc.retain (").add_operation (var_propertyTypeLLVMName_17295, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 351)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 351)).add_operation (var_llvmLoadedVarName_17745, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 351)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 351)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 351)) ;
    enumerator_17263.gotoNextObject () ;
  }
  cEnumerator_arcAssignmentList enumerator_18084 (var_arcAssignmentList_16918, kENUMERATION_UP) ;
  while (enumerator_18084.hasCurrentObject ()) {
    GALGAS_string var_llvmVarName_18107 = GALGAS_string ("%arc.release.").add_operation (enumerator_18084.current_mPropertyName (HERE).getter_assemblerRepresentation (SOURCE_FILE ("type-fixed-size-array.galgas", 354)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 354)).add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("type-fixed-size-array.galgas", 354)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 354)) ;
    ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 355)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_llvmVarName_18107, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 356)).add_operation (GALGAS_string (" = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 356)).add_operation (var_llvmTypeName_16857, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 356)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 356)).add_operation (var_llvmTypeName_16857, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 356)).add_operation (GALGAS_string ("* %inTarget, i32 0"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 356)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 356)) ;
    cEnumerator_uintlist enumerator_18390 (enumerator_18084.current_mPropertyIndexPath (HERE), kENUMERATION_UP) ;
    while (enumerator_18390.hasCurrentObject ()) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", i32 ").add_operation (enumerator_18390.current_mValue (HERE).getter_string (SOURCE_FILE ("type-fixed-size-array.galgas", 358)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 358)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 358)) ;
      enumerator_18390.gotoNextObject () ;
    }
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ; ").add_operation (enumerator_18084.current_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 360)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 360)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 360)) ;
    GALGAS_string var_propertyTypeLLVMName_18511 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_18084.current_mPropertyType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 361)) ;
    GALGAS_string var_llvmLoadedVarName_18567 = var_llvmVarName_18107.add_operation (GALGAS_string (".loaded"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 362)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_llvmLoadedVarName_18567, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 363)).add_operation (GALGAS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 363)).add_operation (var_propertyTypeLLVMName_18511, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 363)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 363)).add_operation (var_propertyTypeLLVMName_18511, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 363)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 363)).add_operation (var_llvmVarName_18107, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 363)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 363)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 363)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @arc.release (").add_operation (var_propertyTypeLLVMName_18511, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 364)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 364)).add_operation (var_llvmLoadedVarName_18567, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 364)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 364)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 364)) ;
    enumerator_18084.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- Compute type size\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 366)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %sizeAsPtr = getelementptr inbounds ").add_operation (var_llvmTypeName_16857, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 367)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 367)).add_operation (var_llvmTypeName_16857, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 367)).add_operation (GALGAS_string ("* null, i32 1\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 367)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 367)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %byteCount = ptrtoint ").add_operation (var_llvmTypeName_16857, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 368)).add_operation (GALGAS_string ("* %sizeAsPtr to i32\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 368)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 368)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %useLoadStore = icmp ule i32 %byteCount, 12\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 369)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %useLoadStore, label %loadStore, label %copyBytesOrCopyWords\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 370)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- Copy\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 371)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("loadStore:\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 372)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %v = load ").add_operation (var_llvmTypeName_16857, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 373)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 373)).add_operation (var_llvmTypeName_16857, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 373)).add_operation (GALGAS_string ("* %inSource\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 373)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 373)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_llvmTypeName_16857, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 374)).add_operation (GALGAS_string (" %v, "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 374)).add_operation (var_llvmTypeName_16857, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 374)).add_operation (GALGAS_string ("* %inTarget\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 374)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 374)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %copy.end\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 375)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("copyBytesOrCopyWords:\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 376)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %byteCountAnd3 = and i32 %byteCount, 3\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 377)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %byteCountIsMutipleOf4 = icmp eq i32 %byteCountAnd3, 0\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 378)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %byteCountIsMutipleOf4, label %testTarget, label %copyBytes\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 379)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("testTarget:\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 380)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %targetAsUnsigned = ptrtoint ").add_operation (var_llvmTypeName_16857, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 381)).add_operation (GALGAS_string ("* %inTarget to i32\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 381)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 381)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %targetAsUnsignedAnd3 = and i32 %targetAsUnsigned, 3\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 382)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %targetAsUnsignedIsMutipleOf4 = icmp eq i32%targetAsUnsignedAnd3, 0\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 383)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %targetAsUnsignedIsMutipleOf4, label %testSource, label %copyBytes\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 384)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("testSource:\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 385)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %sourceAsUnsigned = ptrtoint ").add_operation (var_llvmTypeName_16857, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 386)).add_operation (GALGAS_string ("* %inSource to i32\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 386)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 386)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %sourceAsUnsignedAnd3 = and i32 %sourceAsUnsigned, 3\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 387)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %sourceAsUnsignedIsMutipleOf4 = icmp eq i32 %sourceAsUnsignedAnd3, 0\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 388)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %targetAsUnsignedIsMutipleOf4, label %copyWords, label %copyBytes\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 389)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("copyWords:\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 390)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %target32 = bitcast ").add_operation (var_llvmTypeName_16857, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 391)).add_operation (GALGAS_string ("* %inTarget to i32*\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 391)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 391)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %source32 = bitcast ").add_operation (var_llvmTypeName_16857, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 392)).add_operation (GALGAS_string ("* %inSource to i32*\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 392)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 392)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %wordCount = udiv i32 %byteCount, 4\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 393)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %copyWords.loop\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 394)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("copyWords.loop:\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 395)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @copy.word.array (i32* %target32, i32* %source32, i32 %wordCount)\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 396)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %copy.end\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 397)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("copyBytes:\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 398)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %target8 = bitcast ").add_operation (var_llvmTypeName_16857, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 399)).add_operation (GALGAS_string ("* %inTarget to i8*\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 399)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 399)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %source8 = bitcast ").add_operation (var_llvmTypeName_16857, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 400)).add_operation (GALGAS_string ("* %inSource to i8*\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 400)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 400)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @copy.byte.array (i8* %target8, i8* %source8, i32 %byteCount)\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 401)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %copy.end\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 402)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("copy.end:\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 403)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 404)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 405)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_staticArrayTypeAssignFunctionIR_llvmCodeGeneration (void) {
  enterExtensionMethod_llvmCodeGeneration (kTypeDescriptor_GALGAS_staticArrayTypeAssignFunctionIR.mSlotID,
                                           extensionMethod_staticArrayTypeAssignFunctionIR_llvmCodeGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_staticArrayTypeAssignFunctionIR_llvmCodeGeneration (defineExtensionMethod_staticArrayTypeAssignFunctionIR_llvmCodeGeneration, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                Overriding extension method '@typeDynamicArrayDeclarationAST enterInPrecedenceGraph'                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_typeDynamicArrayDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                                   GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_typeDynamicArrayDeclarationAST * object = (const cPtr_typeDynamicArrayDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_typeDynamicArrayDeclarationAST) ;
  {
  const GALGAS_typeDynamicArrayDeclarationAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (object->mProperty_mDynamicArrayTypeName, temp_0, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 36)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (object->mProperty_mDynamicArrayTypeName, object->mProperty_mElementTypeName COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 37)) ;
  }
  GALGAS_lstring var_rootNode_2082 = GALGAS_lstring::constructor_new (function_configurationNodeNameForPrecedenceGraph (inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 38)), object->mProperty_mDynamicArrayTypeName.getter_location (HERE)  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 38)) ;
  {
  ioArgument_ioGraph.setter_addEdge (object->mProperty_mDynamicArrayTypeName, var_rootNode_2082 COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 39)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_typeDynamicArrayDeclarationAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_typeDynamicArrayDeclarationAST.mSlotID,
                                               extensionMethod_typeDynamicArrayDeclarationAST_enterInPrecedenceGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_typeDynamicArrayDeclarationAST_enterInPrecedenceGraph (defineExtensionMethod_typeDynamicArrayDeclarationAST_enterInPrecedenceGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//          Overriding extension getter '@typeDynamicArrayDeclarationAST keyRepresentationForErrorSignaling'           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_typeDynamicArrayDeclarationAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_typeDynamicArrayDeclarationAST * object = (const cPtr_typeDynamicArrayDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_typeDynamicArrayDeclarationAST) ;
  result_outRepresentation = GALGAS_string ("anonymous ").add_operation (object->mProperty_mDynamicArrayTypeName.getter_string (SOURCE_FILE ("type-dynamic-array.galgas", 45)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 45)) ;
//---
  return result_outRepresentation ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_typeDynamicArrayDeclarationAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_typeDynamicArrayDeclarationAST.mSlotID,
                                                           extensionGetter_typeDynamicArrayDeclarationAST_keyRepresentationForErrorSignaling) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_typeDynamicArrayDeclarationAST_keyRepresentationForErrorSignaling (defineExtensionGetter_typeDynamicArrayDeclarationAST_keyRepresentationForErrorSignaling, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//               Overriding extension getter '@typeDynamicArrayDeclarationAST locationForErrorSignaling'               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_location extensionGetter_typeDynamicArrayDeclarationAST_locationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                                 C_Compiler * /* inCompiler */
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_typeDynamicArrayDeclarationAST * object = (const cPtr_typeDynamicArrayDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_typeDynamicArrayDeclarationAST) ;
  result_outLocation = object->mProperty_mDynamicArrayTypeName.getter_location (HERE) ;
//---
  return result_outLocation ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_typeDynamicArrayDeclarationAST_locationForErrorSignaling (void) {
  enterExtensionGetter_locationForErrorSignaling (kTypeDescriptor_GALGAS_typeDynamicArrayDeclarationAST.mSlotID,
                                                  extensionGetter_typeDynamicArrayDeclarationAST_locationForErrorSignaling) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_typeDynamicArrayDeclarationAST_locationForErrorSignaling (defineExtensionGetter_typeDynamicArrayDeclarationAST_locationForErrorSignaling, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                    Overriding extension method '@typeDynamicArrayDeclarationAST enterInContext'                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_typeDynamicArrayDeclarationAST_enterInContext (const cPtr_abstractDeclarationAST * inObject,
                                                                           GALGAS_semanticContext & ioArgument_ioContext,
                                                                           GALGAS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                                           GALGAS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                                                           GALGAS_routineListIR & ioArgument_ioRoutineListIR,
                                                                           GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                                           GALGAS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                                           GALGAS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                                           GALGAS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_typeDynamicArrayDeclarationAST * object = (const cPtr_typeDynamicArrayDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_typeDynamicArrayDeclarationAST) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = ioArgument_ioContext.getter_mTargetParameters (HERE).getter_mHandleDynamicArray (HERE).operator_not (SOURCE_FILE ("type-dynamic-array.galgas", 68)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (object->mProperty_mElementTypeName.getter_location (SOURCE_FILE ("type-dynamic-array.galgas", 69)), GALGAS_string ("this target does not handle dynamic array"), fixItArray1  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 69)) ;
    }
  }
  GALGAS_unifiedTypeMap_2D_proxy var_arrayTypeProxy_4000 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioContext.mProperty_mTypeMap, object->mProperty_mDynamicArrayTypeName, var_arrayTypeProxy_4000 COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 71)) ;
  }
  GALGAS_omnibusType var_elementType_4141 ;
  ioArgument_ioContext.getter_mTypeMap (HERE).method_searchKey (object->mProperty_mElementTypeName, var_elementType_4141, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 73)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = callExtensionGetter_copyable ((const cPtr_omnibusType *) var_elementType_4141.ptr (), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 74)).operator_not (SOURCE_FILE ("type-dynamic-array.galgas", 74)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mProperty_mElementTypeName.getter_location (SOURCE_FILE ("type-dynamic-array.galgas", 75)), GALGAS_string ("an array element should be copyable"), fixItArray3  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 75)) ;
    }
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = callExtensionGetter_instanciable ((const cPtr_omnibusType *) var_elementType_4141.ptr (), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 77)).operator_not (SOURCE_FILE ("type-dynamic-array.galgas", 77)).boolEnum () ;
    if (kBoolTrue == test_4) {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (object->mProperty_mElementTypeName.getter_location (SOURCE_FILE ("type-dynamic-array.galgas", 78)), GALGAS_string ("an array element should be instanciable"), fixItArray5  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 78)) ;
    }
  }
  GALGAS_lstring var_omnibusTypeDescriptionName_4468 = GALGAS_lstring::constructor_new (GALGAS_string ("[").add_operation (var_elementType_4141.getter_omnibusTypeDescriptionName (HERE), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 81)).add_operation (GALGAS_string ("]"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 81)), object->mProperty_mDynamicArrayTypeName.getter_location (SOURCE_FILE ("type-dynamic-array.galgas", 81))  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 81)) ;
  GALGAS_lstring var_llvmBaseTypeName_4583 = GALGAS_lstring::constructor_new (GALGAS_string ("dyn-").add_operation (var_elementType_4141.getter_llvmBaseTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 82)), object->mProperty_mDynamicArrayTypeName.getter_location (SOURCE_FILE ("type-dynamic-array.galgas", 82))  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 82)) ;
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = ioArgument_ioContext.getter_mTypeMap (HERE).getter_hasKey (var_omnibusTypeDescriptionName_4468.getter_string (SOURCE_FILE ("type-dynamic-array.galgas", 84)) COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 84)).boolEnum () ;
    if (kBoolTrue == test_6) {
      GALGAS_omnibusType var_type_4875 ;
      ioArgument_ioContext.getter_mTypeMap (HERE).method_searchKey (var_omnibusTypeDescriptionName_4468, var_type_4875, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 85)) ;
      {
      ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (object->mProperty_mDynamicArrayTypeName, var_type_4875, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 86)) ;
      }
    }
  }
  if (kBoolFalse == test_6) {
    GALGAS_unifiedTypeMap_2D_proxy var_uint_33__32_TypeProxy_5076 ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioContext.mProperty_mTypeMap, GALGAS_string ("uint32").getter_nowhere (SOURCE_FILE ("type-dynamic-array.galgas", 91)), var_uint_33__32_TypeProxy_5076 COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 91)) ;
    }
    GALGAS_unifiedTypeMap_2D_proxy var_elementTypeProxy_5175 ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioContext.mProperty_mTypeMap, object->mProperty_mElementTypeName, var_elementTypeProxy_5175 COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 92)) ;
    }
    GALGAS_propertyGetterMap var_propertyGetterMap_5278 = GALGAS_propertyGetterMap::constructor_emptyMap (SOURCE_FILE ("type-dynamic-array.galgas", 94)) ;
    GALGAS_lstring var_routineLLVMName_5629 ;
    {
    extensionSetter_addFunctionWithoutArgument (ioArgument_ioContext.mProperty_mRoutineMap, var_omnibusTypeDescriptionName_4468.getter_string (SOURCE_FILE ("type-dynamic-array.galgas", 97)), var_llvmBaseTypeName_4583.getter_string (SOURCE_FILE ("type-dynamic-array.galgas", 98)), GALGAS_lstring::constructor_new (GALGAS_string ("removeAll"), object->mProperty_mDynamicArrayTypeName.getter_location (SOURCE_FILE ("type-dynamic-array.galgas", 99))  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 99)), GALGAS_mode::constructor_anySafeMode (SOURCE_FILE ("type-dynamic-array.galgas", 100)), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-dynamic-array.galgas", 101)), var_routineLLVMName_5629, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 96)) ;
    }
    ioArgument_ioRoutineListIR.addAssign_operation (GALGAS_dynArrayRemoveAllFunctionIR::constructor_new (var_routineLLVMName_5629, GALGAS_bool (false), GALGAS_bool (false)  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 104))  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 104)) ;
    {
    extensionSetter_addFunctionWithoutArgument (ioArgument_ioContext.mProperty_mRoutineMap, var_omnibusTypeDescriptionName_4468.getter_string (SOURCE_FILE ("type-dynamic-array.galgas", 111)), var_llvmBaseTypeName_4583.getter_string (SOURCE_FILE ("type-dynamic-array.galgas", 112)), GALGAS_lstring::constructor_new (GALGAS_string ("length"), object->mProperty_mDynamicArrayTypeName.getter_location (SOURCE_FILE ("type-dynamic-array.galgas", 113))  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 113)), GALGAS_mode::constructor_anySafeMode (SOURCE_FILE ("type-dynamic-array.galgas", 114)), var_uint_33__32_TypeProxy_5076, var_routineLLVMName_5629, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 110)) ;
    }
    ioArgument_ioRoutineListIR.addAssign_operation (GALGAS_dynArrayLengthFunctionIR::constructor_new (var_routineLLVMName_5629, GALGAS_bool (false), GALGAS_bool (false)  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 118))  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 118)) ;
    GALGAS_lstring var_insertFunctionMangledName_6897 ;
    {
    extensionSetter_addFunctionWithTwoInputArguments (ioArgument_ioContext.mProperty_mRoutineMap, var_omnibusTypeDescriptionName_4468.getter_string (SOURCE_FILE ("type-dynamic-array.galgas", 125)), ioArgument_ioContext, var_llvmBaseTypeName_4583.getter_string (SOURCE_FILE ("type-dynamic-array.galgas", 127)), GALGAS_lstring::constructor_new (GALGAS_string ("insert"), object->mProperty_mDynamicArrayTypeName.getter_location (SOURCE_FILE ("type-dynamic-array.galgas", 128))  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 128)), GALGAS_mode::constructor_anySafeMode (SOURCE_FILE ("type-dynamic-array.galgas", 129)), GALGAS_string::makeEmptyString (), var_elementTypeProxy_5175, GALGAS_string ("inValue"), GALGAS_string ("atIndex"), var_uint_33__32_TypeProxy_5076, GALGAS_string ("inIndex"), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-dynamic-array.galgas", 136)), var_insertFunctionMangledName_6897, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 124)) ;
    }
    ioArgument_ioRoutineListIR.addAssign_operation (GALGAS_dynArrayInsertFunctionIR::constructor_new (var_insertFunctionMangledName_6897, GALGAS_bool (false), GALGAS_bool (false), var_elementTypeProxy_5175  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 139))  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 139)) ;
    {
    extensionSetter_addFunctionWithInputArgument (ioArgument_ioContext.mProperty_mRoutineMap, var_omnibusTypeDescriptionName_4468.getter_string (SOURCE_FILE ("type-dynamic-array.galgas", 147)), ioArgument_ioContext, var_llvmBaseTypeName_4583.getter_string (SOURCE_FILE ("type-dynamic-array.galgas", 149)), GALGAS_lstring::constructor_new (GALGAS_string ("append"), object->mProperty_mDynamicArrayTypeName.getter_location (SOURCE_FILE ("type-dynamic-array.galgas", 150))  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 150)), GALGAS_mode::constructor_anySafeMode (SOURCE_FILE ("type-dynamic-array.galgas", 151)), GALGAS_string::makeEmptyString (), var_elementTypeProxy_5175, GALGAS_string ("inValue"), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-dynamic-array.galgas", 155)), var_routineLLVMName_5629, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 146)) ;
    }
    ioArgument_ioRoutineListIR.addAssign_operation (GALGAS_dynArrayAppendFunctionIR::constructor_new (var_routineLLVMName_5629, GALGAS_bool (false), GALGAS_bool (false), var_arrayTypeProxy_4000, var_elementTypeProxy_5175, var_insertFunctionMangledName_6897.getter_string (SOURCE_FILE ("type-dynamic-array.galgas", 164))  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 158))  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 158)) ;
    GALGAS_constructorMap var_constructorMap_7883 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-dynamic-array.galgas", 167)) ;
    {
    var_constructorMap_7883.setter_insertKey (GALGAS_string ("()").getter_nowhere (SOURCE_FILE ("type-dynamic-array.galgas", 168)), GALGAS_constructorSignature::constructor_emptyList (SOURCE_FILE ("type-dynamic-array.galgas", 168)), GALGAS_constructorValue::constructor_null (SOURCE_FILE ("type-dynamic-array.galgas", 168)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 168)) ;
    }
    GALGAS_omnibusTypeAttributes var_typeAttributes_8058 = GALGAS_omnibusTypeAttributes::constructor_instanciable (SOURCE_FILE ("type-dynamic-array.galgas", 170)).operator_or (GALGAS_omnibusTypeAttributes::constructor_copyable (SOURCE_FILE ("type-dynamic-array.galgas", 170)) COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 170)) ;
    GALGAS_omnibusType var_dynamicArrayType_8177 = GALGAS_omnibusType::constructor_new (var_propertyGetterMap_5278, GALGAS_propertySetterMap::constructor_emptyMap (SOURCE_FILE ("type-dynamic-array.galgas", 174)), GALGAS_classConstantMap::constructor_emptyMap (SOURCE_FILE ("type-dynamic-array.galgas", 175)), var_constructorMap_7883, GALGAS_subscript::constructor_noSubscript (SOURCE_FILE ("type-dynamic-array.galgas", 177)), var_typeAttributes_8058, var_omnibusTypeDescriptionName_4468.getter_string (SOURCE_FILE ("type-dynamic-array.galgas", 179)), GALGAS_typeKind::constructor_dynamicArrayType (var_elementType_4141  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 180)), var_llvmBaseTypeName_4583.getter_string (SOURCE_FILE ("type-dynamic-array.galgas", 181))  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 172)) ;
    {
    ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (object->mProperty_mDynamicArrayTypeName, var_dynamicArrayType_8177, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 183)) ;
    }
    GALGAS_string var_assignmentFunctionName_8756 = function_assignmentOperatorFuncName (var_dynamicArrayType_8177, var_dynamicArrayType_8177, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 188)) ;
    GALGAS_dynamicArrayTypeAssignGenericFunctionIR var_routine_8838 = GALGAS_dynamicArrayTypeAssignGenericFunctionIR::constructor_new (GALGAS_lstring::constructor_new (var_assignmentFunctionName_8756, object->mProperty_mDynamicArrayTypeName.getter_location (HERE)  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 190)), GALGAS_bool (false), GALGAS_bool (false)  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 189)) ;
    ioArgument_ioRoutineListIR.addAssign_operation (var_routine_8838  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 194)) ;
    GALGAS_dynamicArrayTypeAssignUsage var_operatorUsage_9071 = GALGAS_dynamicArrayTypeAssignUsage::constructor_new (var_dynamicArrayType_8177, var_assignmentFunctionName_8756  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 195)) ;
    GALGAS_lstring var_key_9179 = function_assignmentOperatorKey (var_dynamicArrayType_8177, object->mProperty_mDynamicArrayTypeName.getter_location (HERE), var_dynamicArrayType_8177, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 199)) ;
    {
    ioArgument_ioContext.mProperty_mAssignmentOperatorMap.setter_insertKey (var_key_9179, var_operatorUsage_9071, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 200)) ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_typeDynamicArrayDeclarationAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_typeDynamicArrayDeclarationAST.mSlotID,
                                       extensionMethod_typeDynamicArrayDeclarationAST_enterInContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_typeDynamicArrayDeclarationAST_enterInContext (defineExtensionMethod_typeDynamicArrayDeclarationAST_enterInContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                    Overriding extension method '@dynArrayRemoveAllFunctionIR llvmCodeGeneration'                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_dynArrayRemoveAllFunctionIR_llvmCodeGeneration (const cPtr_abstractRoutineIR * inObject,
                                                                            GALGAS_string & ioArgument_ioLLVMcode,
                                                                            const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                            GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_dynArrayRemoveAllFunctionIR * object = (const cPtr_dynArrayRemoveAllFunctionIR *) inObject ;
  macroValidSharedObject (object, cPtr_dynArrayRemoveAllFunctionIR) ;
  ioArgument_ioGenerationAdds.mProperty_mNeedsDynamicMemoryAllocation = GALGAS_bool (true) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal void @").add_operation (object->mProperty_mRoutineMangledName.getter_string (HERE).getter_assemblerRepresentation (SOURCE_FILE ("type-dynamic-array.galgas", 298)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 298)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 298)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" (%ptrtype* %ioArray)").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 299)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 299)).add_operation (GALGAS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 299)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 299)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %buffer.pointer = load %ptrtype, %ptrtype* %ioArray\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 300)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @arc.release (%ptrtype %buffer.pointer)\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 301)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store %ptrtype null, %ptrtype* %ioArray\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 302)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 303)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 304)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_dynArrayRemoveAllFunctionIR_llvmCodeGeneration (void) {
  enterExtensionMethod_llvmCodeGeneration (kTypeDescriptor_GALGAS_dynArrayRemoveAllFunctionIR.mSlotID,
                                           extensionMethod_dynArrayRemoveAllFunctionIR_llvmCodeGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_dynArrayRemoveAllFunctionIR_llvmCodeGeneration (defineExtensionMethod_dynArrayRemoveAllFunctionIR_llvmCodeGeneration, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     Overriding extension method '@dynArrayLengthFunctionIR llvmCodeGeneration'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_dynArrayLengthFunctionIR_llvmCodeGeneration (const cPtr_abstractRoutineIR * inObject,
                                                                         GALGAS_string & ioArgument_ioLLVMcode,
                                                                         const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                         GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_dynArrayLengthFunctionIR * object = (const cPtr_dynArrayLengthFunctionIR *) inObject ;
  macroValidSharedObject (object, cPtr_dynArrayLengthFunctionIR) ;
  ioArgument_ioGenerationAdds.mProperty_mNeedsDynamicMemoryAllocation = GALGAS_bool (true) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal i32 @").add_operation (object->mProperty_mRoutineMangledName.getter_string (HERE).getter_assemblerRepresentation (SOURCE_FILE ("type-dynamic-array.galgas", 322)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 322)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 322)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" (%ptrtype* %ioArray)").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 323)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 323)).add_operation (GALGAS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 323)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 323)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %buffer.pointer = load %ptrtype, %ptrtype* %ioArray\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 324)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %length = call i32 @arc.length (%ptrtype %buffer.pointer)\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 325)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret i32 %length\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 326)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 327)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_dynArrayLengthFunctionIR_llvmCodeGeneration (void) {
  enterExtensionMethod_llvmCodeGeneration (kTypeDescriptor_GALGAS_dynArrayLengthFunctionIR.mSlotID,
                                           extensionMethod_dynArrayLengthFunctionIR_llvmCodeGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_dynArrayLengthFunctionIR_llvmCodeGeneration (defineExtensionMethod_dynArrayLengthFunctionIR_llvmCodeGeneration, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                   Overriding extension method '@dynArrayAppendFunctionIR enterAccessibleEntities'                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_dynArrayAppendFunctionIR_enterAccessibleEntities (const cPtr_abstractRoutineIR * inObject,
                                                                              GALGAS_stringset & ioArgument_ioInvokedRoutineSet,
                                                                              GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                              C_Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_dynArrayAppendFunctionIR * object = (const cPtr_dynArrayAppendFunctionIR *) inObject ;
  macroValidSharedObject (object, cPtr_dynArrayAppendFunctionIR) ;
  ioArgument_ioInvokedRoutineSet.addAssign_operation (object->mProperty_mInsertFunctionMangledName  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 346)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_dynArrayAppendFunctionIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_dynArrayAppendFunctionIR.mSlotID,
                                                extensionMethod_dynArrayAppendFunctionIR_enterAccessibleEntities) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_dynArrayAppendFunctionIR_enterAccessibleEntities (defineExtensionMethod_dynArrayAppendFunctionIR_enterAccessibleEntities, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     Overriding extension method '@dynArrayAppendFunctionIR llvmCodeGeneration'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_dynArrayAppendFunctionIR_llvmCodeGeneration (const cPtr_abstractRoutineIR * inObject,
                                                                         GALGAS_string & ioArgument_ioLLVMcode,
                                                                         const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                         GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_dynArrayAppendFunctionIR * object = (const cPtr_dynArrayAppendFunctionIR *) inObject ;
  macroValidSharedObject (object, cPtr_dynArrayAppendFunctionIR) ;
  ioArgument_ioGenerationAdds.mProperty_mNeedsDynamicMemoryAllocation = GALGAS_bool (true) ;
  GALGAS_omnibusType var_elementType_16348 = object->mProperty_mElementTypeProxy.getter_type (inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 357)) ;
  GALGAS_routineFormalArgumentListAST temp_0 = GALGAS_routineFormalArgumentListAST::constructor_emptyList (SOURCE_FILE ("type-dynamic-array.galgas", 367)) ;
  temp_0.addAssign_operation (GALGAS_procFormalArgumentPassingMode::constructor_input (SOURCE_FILE ("type-dynamic-array.galgas", 359)), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dynamic-array.galgas", 360)), var_elementType_16348.getter_llvmBaseTypeName (HERE).getter_nowhere (SOURCE_FILE ("type-dynamic-array.galgas", 361)), GALGAS_string ("inValue").getter_nowhere (SOURCE_FILE ("type-dynamic-array.galgas", 362))  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 362)) ;
  temp_0.addAssign_operation (GALGAS_procFormalArgumentPassingMode::constructor_input (SOURCE_FILE ("type-dynamic-array.galgas", 364)), GALGAS_string ("atIndex").getter_nowhere (SOURCE_FILE ("type-dynamic-array.galgas", 365)), GALGAS_string ("uint32").getter_nowhere (SOURCE_FILE ("type-dynamic-array.galgas", 366)), GALGAS_string ("inIndex").getter_nowhere (SOURCE_FILE ("type-dynamic-array.galgas", 367))  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 367)) ;
  GALGAS_routineFormalArgumentListAST var_argumentList_16424 = temp_0 ;
  GALGAS_lstring var_insertRoutineMangledName_16652 = function_routineMangledNameFromAST (object->mProperty_mArrayTypeProxy.getter_type (inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 370)).getter_llvmBaseTypeName (HERE), GALGAS_string ("insert").getter_nowhere (SOURCE_FILE ("type-dynamic-array.galgas", 371)), var_argumentList_16424, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 369)) ;
  GALGAS_string var_insertRoutineLLVMName_16801 = function_llvmNameForFunction (var_insertRoutineMangledName_16652.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 374)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal void @").add_operation (object->mProperty_mRoutineMangledName.getter_string (HERE).getter_assemblerRepresentation (SOURCE_FILE ("type-dynamic-array.galgas", 375)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 375)).add_operation (GALGAS_string (" (%ptrtype* %ioArray, "), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 375)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) var_elementType_16348.ptr (), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 376)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 376)).add_operation (GALGAS_string (" %inValue)"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 376)).add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 376)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 376)).add_operation (GALGAS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 376)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 375)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- Get buffer length\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 377)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %current.buffer.pointer = load %ptrtype, %ptrtype* %ioArray\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 378)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %current.buffer.length = call i32 @arc.length (%ptrtype %current.buffer.pointer)\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 379)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- Insert\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 380)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @").add_operation (var_insertRoutineLLVMName_16801, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 381)).add_operation (GALGAS_string ("(%ptrtype* %ioArray, "), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 381)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) var_elementType_16348.ptr (), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 382)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 382)).add_operation (GALGAS_string (" %inValue, i32 %current.buffer.length)\n"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 382)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 381)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- Return\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 383)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 384)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 385)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_dynArrayAppendFunctionIR_llvmCodeGeneration (void) {
  enterExtensionMethod_llvmCodeGeneration (kTypeDescriptor_GALGAS_dynArrayAppendFunctionIR.mSlotID,
                                           extensionMethod_dynArrayAppendFunctionIR_llvmCodeGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_dynArrayAppendFunctionIR_llvmCodeGeneration (defineExtensionMethod_dynArrayAppendFunctionIR_llvmCodeGeneration, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                   Overriding extension method '@dynArrayInsertFunctionIR enterAccessibleEntities'                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_dynArrayInsertFunctionIR_enterAccessibleEntities (const cPtr_abstractRoutineIR * inObject,
                                                                              GALGAS_stringset & ioArgument_ioInvokedRoutineSet,
                                                                              GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_dynArrayInsertFunctionIR * object = (const cPtr_dynArrayInsertFunctionIR *) inObject ;
  macroValidSharedObject (object, cPtr_dynArrayInsertFunctionIR) ;
  GALGAS_string var_assignRoutineLLVMName_18259 = function_assignmentOperatorFuncName (object->mProperty_mElementTypeProxy.getter_type (inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 402)), object->mProperty_mElementTypeProxy.getter_type (inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 402)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 402)) ;
  ioArgument_ioInvokedRoutineSet.addAssign_operation (var_assignRoutineLLVMName_18259  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 403)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_dynArrayInsertFunctionIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_dynArrayInsertFunctionIR.mSlotID,
                                                extensionMethod_dynArrayInsertFunctionIR_enterAccessibleEntities) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_dynArrayInsertFunctionIR_enterAccessibleEntities (defineExtensionMethod_dynArrayInsertFunctionIR_enterAccessibleEntities, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     Overriding extension method '@dynArrayInsertFunctionIR llvmCodeGeneration'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_dynArrayInsertFunctionIR_llvmCodeGeneration (const cPtr_abstractRoutineIR * inObject,
                                                                         GALGAS_string & ioArgument_ioLLVMcode,
                                                                         const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                         GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_dynArrayInsertFunctionIR * object = (const cPtr_dynArrayInsertFunctionIR *) inObject ;
  macroValidSharedObject (object, cPtr_dynArrayInsertFunctionIR) ;
  ioArgument_ioGenerationAdds.mProperty_mNeedsDynamicMemoryAllocation = GALGAS_bool (true) ;
  GALGAS_string var_elementLLVMTypeName_18774 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) object->mProperty_mElementTypeProxy.getter_type (inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 414)).ptr (), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 414)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal void @").add_operation (object->mProperty_mRoutineMangledName.getter_string (HERE).getter_assemblerRepresentation (SOURCE_FILE ("type-dynamic-array.galgas", 415)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 415)).add_operation (GALGAS_string (" (%ptrtype* %ioArray"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 415)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 415)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", ").add_operation (var_elementLLVMTypeName_18774, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 416)).add_operation (GALGAS_string (" %inValue, i32 %inIndex)"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 416)).add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 416)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 416)).add_operation (GALGAS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 416)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 416)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- Inserted element pointer\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 417)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %insert.address = alloca %ptrtype\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 418)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- value pointer\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 419)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %value.pointer = alloca ").add_operation (var_elementLLVMTypeName_18774, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 420)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 420)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 420)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_elementLLVMTypeName_18774, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 421)).add_operation (GALGAS_string (" %inValue, "), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 421)).add_operation (var_elementLLVMTypeName_18774, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 421)).add_operation (GALGAS_string ("* %value.pointer\n"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 421)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 421)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- Size of element\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 422)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %sizeAsPtr = getelementptr inbounds ").add_operation (var_elementLLVMTypeName_18774, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 423)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 423)).add_operation (var_elementLLVMTypeName_18774, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 423)).add_operation (GALGAS_string ("* null, i32 1\n"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 423)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 423)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %element.byte.size = ptrtoint ").add_operation (var_elementLLVMTypeName_18774, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 424)).add_operation (GALGAS_string ("* %sizeAsPtr to i32\n"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 424)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 424)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- Get inserted element pointer\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 425)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %current.buffer.pointer = load %ptrtype, %ptrtype* %ioArray\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 426)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %new.buffer.pointer = call %ptrtype @arc.insert.at.index "), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 427)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("(%ptrtype %current.buffer.pointer, i32 %inIndex, i32 %element.byte.size, %ptrtype* %insert.address)\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 428)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- Perform copy\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 429)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %typed.insert.address = bitcast %ptrtype* %insert.address to ").add_operation (var_elementLLVMTypeName_18774, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 430)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 430)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 430)) ;
  GALGAS_string var_assignRoutineLLVMName_20146 = function_assignmentOperatorFuncName (object->mProperty_mElementTypeProxy.getter_type (inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 431)), object->mProperty_mElementTypeProxy.getter_type (inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 431)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 431)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @").add_operation (var_assignRoutineLLVMName_20146.getter_assemblerRepresentation (SOURCE_FILE ("type-dynamic-array.galgas", 432)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 432)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 432)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" (").add_operation (var_elementLLVMTypeName_18774, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 433)).add_operation (GALGAS_string ("* %typed.insert.address, "), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 433)).add_operation (var_elementLLVMTypeName_18774, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 433)).add_operation (GALGAS_string ("* %value.pointer)\n"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 433)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 433)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- Store new buffer pointer\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 434)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store %ptrtype %new.buffer.pointer, %ptrtype* %ioArray\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 435)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- Return\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 436)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 437)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 438)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_dynArrayInsertFunctionIR_llvmCodeGeneration (void) {
  enterExtensionMethod_llvmCodeGeneration (kTypeDescriptor_GALGAS_dynArrayInsertFunctionIR.mSlotID,
                                           extensionMethod_dynArrayInsertFunctionIR_llvmCodeGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_dynArrayInsertFunctionIR_llvmCodeGeneration (defineExtensionMethod_dynArrayInsertFunctionIR_llvmCodeGeneration, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                       Overriding extension method '@dynamicArrayTypeAssignUsage generateCode'                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_dynamicArrayTypeAssignUsage_generateCode (const cPtr_abstractAssignmentOperatorUsage * inObject,
                                                                      GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                      GALGAS_instructionListIR & ioArgument_ioInstructionListIR,
                                                                      GALGAS_allocaList & /* ioArgument_ioAllocaList */,
                                                                      const GALGAS_omnibusType constinArgument_inTargetType,
                                                                      const GALGAS_string constinArgument_inTargetLLVMName,
                                                                      const GALGAS_objectIR constinArgument_inSourcePossibleReference,
                                                                      const GALGAS_location /* constinArgument_inErrorLocation */,
                                                                      const GALGAS_bool constinArgument_inTargetIsInitialized,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_dynamicArrayTypeAssignUsage * object = (const cPtr_dynamicArrayTypeAssignUsage *) inObject ;
  macroValidSharedObject (object, cPtr_dynamicArrayTypeAssignUsage) ;
  GALGAS_string var_targetTypeName_21618 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inTargetType.ptr (), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 462)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inTargetIsInitialized.boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_string var_s_21690 = GALGAS_string (" call void  @").add_operation (object->mProperty_mAssignFunctionName.getter_assemblerRepresentation (SOURCE_FILE ("type-dynamic-array.galgas", 464)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 464)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 464)).add_operation (var_targetTypeName_21618, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 465)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 465)).add_operation (constinArgument_inTargetLLVMName, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 465)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 465)).add_operation (var_targetTypeName_21618, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 466)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 466)).add_operation (extensionGetter_llvmName (constinArgument_inSourcePossibleReference, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 466)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 466)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 466)) ;
      {
      GALGAS_stringset temp_1 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-dynamic-array.galgas", 467)) ;
      temp_1.addAssign_operation (object->mProperty_mAssignFunctionName  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 467)) ;
      extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionListIR, var_s_21690, temp_1, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 467)) ;
      }
    }
  }
  if (kBoolFalse == test_0) {
    GALGAS_objectIR var_sourceValue_22057 = constinArgument_inSourcePossibleReference ;
    {
    extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionListIR, ioArgument_ioTemporaries, var_sourceValue_22057, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 470)) ;
    }
    GALGAS_string var_s_22177 = GALGAS_string ("store ").add_operation (var_targetTypeName_21618, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 471)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 471)).add_operation (extensionGetter_llvmName (var_sourceValue_22057, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 471)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 471)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 471)).add_operation (var_targetTypeName_21618, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 471)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 471)).add_operation (constinArgument_inTargetLLVMName, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 471)) ;
    {
    extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionListIR, var_s_22177, GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-dynamic-array.galgas", 472)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 472)) ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_dynamicArrayTypeAssignUsage_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_dynamicArrayTypeAssignUsage.mSlotID,
                                     extensionMethod_dynamicArrayTypeAssignUsage_generateCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_dynamicArrayTypeAssignUsage_generateCode (defineExtensionMethod_dynamicArrayTypeAssignUsage_generateCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//              Overriding extension method '@dynamicArrayTypeAssignGenericFunctionIR llvmCodeGeneration'              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_dynamicArrayTypeAssignGenericFunctionIR_llvmCodeGeneration (const cPtr_abstractRoutineIR * inObject,
                                                                                        GALGAS_string & ioArgument_ioLLVMcode,
                                                                                        const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                                        GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_dynamicArrayTypeAssignGenericFunctionIR * object = (const cPtr_dynamicArrayTypeAssignGenericFunctionIR *) inObject ;
  macroValidSharedObject (object, cPtr_dynamicArrayTypeAssignGenericFunctionIR) ;
  ioArgument_ioGenerationAdds.mProperty_mNeedsDynamicMemoryAllocation = GALGAS_bool (true) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal void @").add_operation (object->mProperty_mRoutineMangledName.getter_string (HERE).getter_assemblerRepresentation (SOURCE_FILE ("type-dynamic-array.galgas", 490)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 490)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 490)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" (%ptrtype * %inTargetPtr, %ptrtype* %inSourcePtr) nounwind optsize {\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 491)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %source = load %ptrtype, %ptrtype* %inSourcePtr\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 492)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @arc.retain (%ptrtype %source)\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 493)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %target = load %ptrtype, %ptrtype* %inTargetPtr\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 494)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @arc.release (%ptrtype %target)\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 495)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store %ptrtype %source, %ptrtype* %inTargetPtr\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 496)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 497)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 498)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_dynamicArrayTypeAssignGenericFunctionIR_llvmCodeGeneration (void) {
  enterExtensionMethod_llvmCodeGeneration (kTypeDescriptor_GALGAS_dynamicArrayTypeAssignGenericFunctionIR.mSlotID,
                                           extensionMethod_dynamicArrayTypeAssignGenericFunctionIR_llvmCodeGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_dynamicArrayTypeAssignGenericFunctionIR_llvmCodeGeneration (defineExtensionMethod_dynamicArrayTypeAssignGenericFunctionIR_llvmCodeGeneration, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                   Overriding extension method '@enumerationDeclarationAST enterInPrecedenceGraph'                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_enumerationDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                              GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumerationDeclarationAST * object = (const cPtr_enumerationDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_enumerationDeclarationAST) ;
  {
  const GALGAS_enumerationDeclarationAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (object->mProperty_mEnumerationName, temp_0, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 53)) ;
  }
  GALGAS_bigint var_maxValue_2350 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 55)) ;
  cEnumerator_enumerationConstantList enumerator_2388 (object->mProperty_mCaseNameList, kENUMERATION_UP) ;
  while (enumerator_2388.hasCurrentObject ()) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GALGAS_bool (kIsStrictInf, var_maxValue_2350.objectCompare (enumerator_2388.current_mConstantValue (HERE))).boolEnum () ;
      if (kBoolTrue == test_1) {
        var_maxValue_2350 = enumerator_2388.current_mConstantValue (HERE) ;
      }
    }
    enumerator_2388.gotoNextObject () ;
  }
  GALGAS_uint var_representationBitCount_2488 = GALGAS_uint ((uint32_t) 0U) ;
  if (GALGAS_uint::constructor_max (SOURCE_FILE ("type-enumeration-declaration.galgas", 62)).isValid ()) {
    uint32_t variant_2499 = GALGAS_uint::constructor_max (SOURCE_FILE ("type-enumeration-declaration.galgas", 62)).uintValue () ;
    bool loop_2499 = true ;
    while (loop_2499) {
      loop_2499 = GALGAS_bool (kIsStrictSup, var_maxValue_2350.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 62)))).isValid () ;
      if (loop_2499) {
        loop_2499 = GALGAS_bool (kIsStrictSup, var_maxValue_2350.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 62)))).boolValue () ;
      }
      if (loop_2499 && (0 == variant_2499)) {
        loop_2499 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("type-enumeration-declaration.galgas", 62)) ;
      }
      if (loop_2499) {
        variant_2499 -- ;
        var_representationBitCount_2488.increment_operation (inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 63)) ;
        var_maxValue_2350 = var_maxValue_2350.divide_operation (GALGAS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 64)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 64)) ;
      }
    }
  }
  {
  ioArgument_ioGraph.setter_addEdge (object->mProperty_mEnumerationName, GALGAS_string ("uint").add_operation (var_representationBitCount_2488.getter_string (SOURCE_FILE ("type-enumeration-declaration.galgas", 66)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 66)).getter_nowhere (SOURCE_FILE ("type-enumeration-declaration.galgas", 66)) COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 66)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_enumerationDeclarationAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_enumerationDeclarationAST.mSlotID,
                                               extensionMethod_enumerationDeclarationAST_enterInPrecedenceGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_enumerationDeclarationAST_enterInPrecedenceGraph (defineExtensionMethod_enumerationDeclarationAST_enterInPrecedenceGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                 Overriding extension getter '@enumerationDeclarationAST locationForErrorSignaling'                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_location extensionGetter_enumerationDeclarationAST_locationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                            C_Compiler * /* inCompiler */
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_enumerationDeclarationAST * object = (const cPtr_enumerationDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_enumerationDeclarationAST) ;
  result_outLocation = object->mProperty_mEnumerationName.getter_location (HERE) ;
//---
  return result_outLocation ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_enumerationDeclarationAST_locationForErrorSignaling (void) {
  enterExtensionGetter_locationForErrorSignaling (kTypeDescriptor_GALGAS_enumerationDeclarationAST.mSlotID,
                                                  extensionGetter_enumerationDeclarationAST_locationForErrorSignaling) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_enumerationDeclarationAST_locationForErrorSignaling (defineExtensionGetter_enumerationDeclarationAST_locationForErrorSignaling, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//             Overriding extension getter '@enumerationDeclarationAST keyRepresentationForErrorSignaling'             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_enumerationDeclarationAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_enumerationDeclarationAST * object = (const cPtr_enumerationDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_enumerationDeclarationAST) ;
  result_outRepresentation = GALGAS_string ("enum ").add_operation (object->mProperty_mEnumerationName.getter_string (SOURCE_FILE ("type-enumeration-declaration.galgas", 78)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 78)) ;
//---
  return result_outRepresentation ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_enumerationDeclarationAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_enumerationDeclarationAST.mSlotID,
                                                           extensionGetter_enumerationDeclarationAST_keyRepresentationForErrorSignaling) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_enumerationDeclarationAST_keyRepresentationForErrorSignaling (defineExtensionGetter_enumerationDeclarationAST_keyRepresentationForErrorSignaling, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                       Overriding extension method '@enumerationDeclarationAST enterInContext'                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_enumerationDeclarationAST_enterInContext (const cPtr_abstractDeclarationAST * inObject,
                                                                      GALGAS_semanticContext & ioArgument_ioContext,
                                                                      GALGAS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                                      GALGAS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                                                      GALGAS_routineListIR & ioArgument_ioRoutineListIR,
                                                                      GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                                      GALGAS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                                      GALGAS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                                      GALGAS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumerationDeclarationAST * object = (const cPtr_enumerationDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_enumerationDeclarationAST) ;
  GALGAS_classConstantMap var_enumConstantMap_4584 = GALGAS_classConstantMap::constructor_emptyMap (SOURCE_FILE ("type-enumeration-declaration.galgas", 105)) ;
  GALGAS_bigint var_maxValue_4608 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 106)) ;
  cEnumerator_enumerationConstantList enumerator_4649 (object->mProperty_mCaseNameList, kENUMERATION_UP) ;
  while (enumerator_4649.hasCurrentObject ()) {
    {
    var_enumConstantMap_4584.setter_insertKey (enumerator_4649.current_mConstantName (HERE), enumerator_4649.current_mConstantValue (HERE), object->mProperty_mEnumerationName, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 108)) ;
    }
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsStrictInf, var_maxValue_4608.objectCompare (enumerator_4649.current_mConstantValue (HERE))).boolEnum () ;
      if (kBoolTrue == test_0) {
        var_maxValue_4608 = enumerator_4649.current_mConstantValue (HERE) ;
      }
    }
    enumerator_4649.gotoNextObject () ;
  }
  GALGAS_uint var_representationBitCount_4865 = GALGAS_uint ((uint32_t) 0U) ;
  if (GALGAS_uint::constructor_max (SOURCE_FILE ("type-enumeration-declaration.galgas", 115)).isValid ()) {
    uint32_t variant_4876 = GALGAS_uint::constructor_max (SOURCE_FILE ("type-enumeration-declaration.galgas", 115)).uintValue () ;
    bool loop_4876 = true ;
    while (loop_4876) {
      loop_4876 = GALGAS_bool (kIsStrictSup, var_maxValue_4608.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 115)))).isValid () ;
      if (loop_4876) {
        loop_4876 = GALGAS_bool (kIsStrictSup, var_maxValue_4608.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 115)))).boolValue () ;
      }
      if (loop_4876 && (0 == variant_4876)) {
        loop_4876 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("type-enumeration-declaration.galgas", 115)) ;
      }
      if (loop_4876) {
        variant_4876 -- ;
        var_representationBitCount_4865.increment_operation (inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 116)) ;
        var_maxValue_4608 = var_maxValue_4608.divide_operation (GALGAS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 117)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 117)) ;
      }
    }
  }
  GALGAS_propertyGetterMap var_propertyGetterMap_5070 = GALGAS_propertyGetterMap::constructor_emptyMap (SOURCE_FILE ("type-enumeration-declaration.galgas", 120)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_integerTypeProxy_5098 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), GALGAS_lstring::constructor_new (GALGAS_string ("uint").add_operation (var_representationBitCount_4865.getter_string (SOURCE_FILE ("type-enumeration-declaration.galgas", 123)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 123)), object->mProperty_mEnumerationName.getter_location (SOURCE_FILE ("type-enumeration-declaration.galgas", 123))  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 123)), inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 121)) ;
  GALGAS_lstring var_conversionToUIntN_5505 ;
  {
  extensionSetter_addPropertyGetter (var_propertyGetterMap_5070, object->mProperty_mEnumerationName.getter_string (SOURCE_FILE ("type-enumeration-declaration.galgas", 126)), GALGAS_lstring::constructor_new (GALGAS_string ("uint").add_operation (var_representationBitCount_4865.getter_string (SOURCE_FILE ("type-enumeration-declaration.galgas", 127)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 127)), object->mProperty_mEnumerationName.getter_location (SOURCE_FILE ("type-enumeration-declaration.galgas", 127))  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 127)), GALGAS_mode::constructor_anySafeMode (SOURCE_FILE ("type-enumeration-declaration.galgas", 128)), GALGAS_bool (true), var_integerTypeProxy_5098, var_conversionToUIntN_5505, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 125)) ;
  }
  ioArgument_ioRoutineListIR.addAssign_operation (GALGAS_enumToUintRoutineIR::constructor_new (var_conversionToUIntN_5505, GALGAS_bool (false), GALGAS_bool (false), GALGAS_string ("i").add_operation (var_representationBitCount_4865.getter_string (SOURCE_FILE ("type-enumeration-declaration.galgas", 137)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 137))  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 133))  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 133)) ;
  {
  routine_enterEnumerationComparisonOperators (object->mProperty_mEnumerationName, ioArgument_ioContext, inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 140)) ;
  }
  GALGAS_omnibusType var_enumerationType_5890 = GALGAS_omnibusType::constructor_new (var_propertyGetterMap_5070, GALGAS_propertySetterMap::constructor_emptyMap (SOURCE_FILE ("type-enumeration-declaration.galgas", 144)), var_enumConstantMap_4584, GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-enumeration-declaration.galgas", 146)), GALGAS_subscript::constructor_noSubscript (SOURCE_FILE ("type-enumeration-declaration.galgas", 147)), GALGAS_omnibusTypeAttributes::constructor_instanciable (SOURCE_FILE ("type-enumeration-declaration.galgas", 148)).operator_or (GALGAS_omnibusTypeAttributes::constructor_equatable (SOURCE_FILE ("type-enumeration-declaration.galgas", 148)) COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 148)).operator_or (GALGAS_omnibusTypeAttributes::constructor_copyable (SOURCE_FILE ("type-enumeration-declaration.galgas", 148)) COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 148)), object->mProperty_mEnumerationName.getter_string (SOURCE_FILE ("type-enumeration-declaration.galgas", 149)), GALGAS_typeKind::constructor_enumeration (var_representationBitCount_4865  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 150)), object->mProperty_mEnumerationName.getter_string (SOURCE_FILE ("type-enumeration-declaration.galgas", 151))  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 142)) ;
  {
  ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (object->mProperty_mEnumerationName, var_enumerationType_5890, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 153)) ;
  }
  GALGAS_lstring var_key_6398 = function_assignmentOperatorKey (var_enumerationType_5890, object->mProperty_mEnumerationName.getter_location (HERE), var_enumerationType_5890, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 155)) ;
  {
  ioArgument_ioContext.mProperty_mAssignmentOperatorMap.setter_insertKey (var_key_6398, GALGAS_simpleCopyAssignmentOperatorUsage::constructor_new (SOURCE_FILE ("type-enumeration-declaration.galgas", 156)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 156)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_enumerationDeclarationAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_enumerationDeclarationAST.mSlotID,
                                       extensionMethod_enumerationDeclarationAST_enterInContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_enumerationDeclarationAST_enterInContext (defineExtensionMethod_enumerationDeclarationAST_enterInContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                    Routine 'enterEnumerationComparisonOperators'                                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_enterEnumerationComparisonOperators (GALGAS_lstring inArgument_inTypeName,
                                                  GALGAS_semanticContext & ioArgument_ioContext,
                                                  C_Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring var_key_6828 = function_combineTypeNamesForInfixOperator (inArgument_inTypeName.getter_string (HERE), inArgument_inTypeName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 165)) ;
  GALGAS_omnibusType var_booleanType_6921 = extensionGetter_booleanType (ioArgument_ioContext, GALGAS_location::constructor_nowhere (SOURCE_FILE ("type-enumeration-declaration.galgas", 166)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 166)) ;
  {
  ioArgument_ioContext.mProperty_mEqualOperatorMap.setter_insertKey (var_key_6828, var_booleanType_6921, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_eq (SOURCE_FILE ("type-enumeration-declaration.galgas", 170))  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 170)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 167)) ;
  }
  {
  ioArgument_ioContext.mProperty_mStrictInfOperatorMap.setter_insertKey (var_key_6828, var_booleanType_6921, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ult (SOURCE_FILE ("type-enumeration-declaration.galgas", 175))  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 175)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 172)) ;
  }
  {
  ioArgument_ioContext.mProperty_mInfEqualOperatorMap.setter_insertKey (var_key_6828, var_booleanType_6921, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ule (SOURCE_FILE ("type-enumeration-declaration.galgas", 180))  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 180)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 177)) ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                        Overriding extension method '@enumToUintRoutineIR llvmCodeGeneration'                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_enumToUintRoutineIR_llvmCodeGeneration (const cPtr_abstractRoutineIR * inObject,
                                                                    GALGAS_string & ioArgument_ioLLVMcode,
                                                                    const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                    GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumToUintRoutineIR * object = (const cPtr_enumToUintRoutineIR *) inObject ;
  macroValidSharedObject (object, cPtr_enumToUintRoutineIR) ;
  GALGAS_string var_routineLLVMName_8139 = function_llvmNameForFunction (object->mProperty_mRoutineMangledName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 199)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal ").add_operation (object->mProperty_mEnumerationLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 200)).add_operation (GALGAS_string (" @"), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 200)).add_operation (var_routineLLVMName_8139, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 200)), inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 200)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" (").add_operation (object->mProperty_mEnumerationLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 201)).add_operation (GALGAS_string ("* %inValue) nounwind {\n"), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 201)), inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 201)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %r = load ").add_operation (object->mProperty_mEnumerationLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 202)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 202)).add_operation (object->mProperty_mEnumerationLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 202)).add_operation (GALGAS_string ("* %inValue\n"), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 202)), inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 202)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret ").add_operation (object->mProperty_mEnumerationLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 203)).add_operation (GALGAS_string (" %r\n"), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 203)), inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 203)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 204)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_enumToUintRoutineIR_llvmCodeGeneration (void) {
  enterExtensionMethod_llvmCodeGeneration (kTypeDescriptor_GALGAS_enumToUintRoutineIR.mSlotID,
                                           extensionMethod_enumToUintRoutineIR_llvmCodeGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_enumToUintRoutineIR_llvmCodeGeneration (defineExtensionMethod_enumToUintRoutineIR_llvmCodeGeneration, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                    Overriding extension method '@structureDeclarationAST enterInPrecedenceGraph'                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_structureDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                            GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_structureDeclarationAST * object = (const cPtr_structureDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_structureDeclarationAST) ;
  {
  const GALGAS_structureDeclarationAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (object->mProperty_mReceiverTypeName, temp_0, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 273)) ;
  }
  cEnumerator_structurePropertyListAST enumerator_9217 (object->mProperty_mStructurePropertyListAST, kENUMERATION_UP) ;
  while (enumerator_9217.hasCurrentObject ()) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GALGAS_bool (kIsNotEqual, enumerator_9217.current_mPropertyTypeName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_1) {
        {
        ioArgument_ioGraph.setter_addEdge (object->mProperty_mReceiverTypeName, enumerator_9217.current_mPropertyTypeName (HERE) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 277)) ;
        }
      }
    }
    switch (enumerator_9217.current_mPropertyKind (HERE).enumValue ()) {
    case GALGAS_propertyKindAST::kNotBuilt:
      break ;
    case GALGAS_propertyKindAST::kEnum_uninitializedStoredProperty:
    case GALGAS_propertyKindAST::kEnum_uninitializedConstantProperty:
      {
      }
      break ;
    case GALGAS_propertyKindAST::kEnum_initializedStoredProperty:
      {
        const cEnumAssociatedValues_propertyKindAST_initializedStoredProperty * extractPtr_9564 = (const cEnumAssociatedValues_propertyKindAST_initializedStoredProperty *) (enumerator_9217.current_mPropertyKind (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_initExpression = extractPtr_9564->mAssociatedValue0 ;
        callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) extractedValue_initExpression.ptr (), object->mProperty_mReceiverTypeName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 282)) ;
      }
      break ;
    case GALGAS_propertyKindAST::kEnum_initializedConstantProperty:
      {
        const cEnumAssociatedValues_propertyKindAST_initializedConstantProperty * extractPtr_9709 = (const cEnumAssociatedValues_propertyKindAST_initializedConstantProperty *) (enumerator_9217.current_mPropertyKind (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_initExpression = extractPtr_9709->mAssociatedValue0 ;
        callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) extractedValue_initExpression.ptr (), object->mProperty_mReceiverTypeName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 284)) ;
      }
      break ;
    case GALGAS_propertyKindAST::kEnum_readOnlyComputedProperty:
      {
        const cEnumAssociatedValues_propertyKindAST_readOnlyComputedProperty * extractPtr_9841 = (const cEnumAssociatedValues_propertyKindAST_readOnlyComputedProperty *) (enumerator_9217.current_mPropertyKind (HERE).unsafePointer ()) ;
        const GALGAS_instructionListAST extractedValue_instructionList = extractPtr_9841->mAssociatedValue0 ;
        extensionMethod_noteInstructionListTypesInPrecedenceGraph (extractedValue_instructionList, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 286)) ;
      }
      break ;
    case GALGAS_propertyKindAST::kEnum_writeComputedProperty:
      {
        const cEnumAssociatedValues_propertyKindAST_writeComputedProperty * extractPtr_9980 = (const cEnumAssociatedValues_propertyKindAST_writeComputedProperty *) (enumerator_9217.current_mPropertyKind (HERE).unsafePointer ()) ;
        const GALGAS_instructionListAST extractedValue_writeInstructionList = extractPtr_9980->mAssociatedValue0 ;
        extensionMethod_noteInstructionListTypesInPrecedenceGraph (extractedValue_writeInstructionList, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 288)) ;
      }
      break ;
    }
    enumerator_9217.gotoNextObject () ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_structureDeclarationAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_structureDeclarationAST.mSlotID,
                                               extensionMethod_structureDeclarationAST_enterInPrecedenceGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_structureDeclarationAST_enterInPrecedenceGraph (defineExtensionMethod_structureDeclarationAST_enterInPrecedenceGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//              Overriding extension getter '@structureDeclarationAST keyRepresentationForErrorSignaling'              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_structureDeclarationAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                                 C_Compiler * /* inCompiler */
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_structureDeclarationAST * object = (const cPtr_structureDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_structureDeclarationAST) ;
  result_outRepresentation = object->mProperty_mReceiverTypeName.getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 296)) ;
//---
  return result_outRepresentation ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_structureDeclarationAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_structureDeclarationAST.mSlotID,
                                                           extensionGetter_structureDeclarationAST_keyRepresentationForErrorSignaling) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_structureDeclarationAST_keyRepresentationForErrorSignaling (defineExtensionGetter_structureDeclarationAST_keyRepresentationForErrorSignaling, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                  Overriding extension getter '@structureDeclarationAST locationForErrorSignaling'                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_location extensionGetter_structureDeclarationAST_locationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                          C_Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_structureDeclarationAST * object = (const cPtr_structureDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_structureDeclarationAST) ;
  result_outLocation = object->mProperty_mReceiverTypeName.getter_location (HERE) ;
//---
  return result_outLocation ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_structureDeclarationAST_locationForErrorSignaling (void) {
  enterExtensionGetter_locationForErrorSignaling (kTypeDescriptor_GALGAS_structureDeclarationAST.mSlotID,
                                                  extensionGetter_structureDeclarationAST_locationForErrorSignaling) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_structureDeclarationAST_locationForErrorSignaling (defineExtensionGetter_structureDeclarationAST_locationForErrorSignaling, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                        Overriding extension method '@structureDeclarationAST enterInContext'                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_structureDeclarationAST_enterInContext (const cPtr_abstractDeclarationAST * inObject,
                                                                    GALGAS_semanticContext & ioArgument_ioContext,
                                                                    GALGAS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                                    GALGAS_decoratedRegularRoutineList & ioArgument_ioDecoratedRoutineList,
                                                                    GALGAS_routineListIR & ioArgument_ioRoutineListIR,
                                                                    GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                                    GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                    GALGAS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                                    GALGAS_userLLVMTypeDefinitionListIR & ioArgument_ioUserLLVMTypeDefinitionListIR,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_structureDeclarationAST * object = (const cPtr_structureDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_structureDeclarationAST) ;
  GALGAS_propertyList var_propertyList_20365 = GALGAS_propertyList::constructor_emptyList (SOURCE_FILE ("type-structure-declaration.galgas", 549)) ;
  GALGAS_propertyGetterMap var_propertyGetterMap_20409 = GALGAS_propertyGetterMap::constructor_emptyMap (SOURCE_FILE ("type-structure-declaration.galgas", 550)) ;
  GALGAS_propertySetterMap var_propertySetterMap_20453 = GALGAS_propertySetterMap::constructor_emptyMap (SOURCE_FILE ("type-structure-declaration.galgas", 551)) ;
  GALGAS_sortedOperandIRList var_sortedOperandIRList_20501 = GALGAS_sortedOperandIRList::constructor_emptySortedList (SOURCE_FILE ("type-structure-declaration.galgas", 552)) ;
  GALGAS_constructorSignature var_constructorSignature_20551 = GALGAS_constructorSignature::constructor_emptyList (SOURCE_FILE ("type-structure-declaration.galgas", 553)) ;
  GALGAS_string var_constructorKey_20581 = GALGAS_string ("(") ;
  GALGAS_bool var_canBeCopied_20605 = GALGAS_bool (true) ;
  cEnumerator_structurePropertyListAST enumerator_20656 (object->mProperty_mStructurePropertyListAST, kENUMERATION_UP) ;
  while (enumerator_20656.hasCurrentObject ()) {
    extensionMethod_enterPropertyInContext (enumerator_20656.current (HERE), ioArgument_ioContext, ioArgument_ioStaticEntityMap, object->mProperty_mReceiverTypeName, object->mProperty_mLLVMBaseTypeName.getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 561)), ioArgument_ioDecoratedRoutineList, var_propertyList_20365, var_propertyGetterMap_20409, var_propertySetterMap_20453, var_sortedOperandIRList_20501, var_constructorSignature_20551, var_constructorKey_20581, var_canBeCopied_20605, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 557)) ;
    enumerator_20656.gotoNextObject () ;
  }
  var_constructorKey_20581.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 572)) ;
  GALGAS_constructorMap var_constructorMap_21188 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-structure-declaration.galgas", 574)) ;
  {
  var_constructorMap_21188.setter_insertKey (GALGAS_lstring::constructor_new (var_constructorKey_20581, object->mProperty_mReceiverTypeName.getter_location (HERE)  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 576)), var_constructorSignature_20551, GALGAS_constructorValue::constructor_structure (var_sortedOperandIRList_20501  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 578)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 575)) ;
  }
  GALGAS_omnibusTypeAttributes var_typeAttributes_21462 = GALGAS_omnibusTypeAttributes::constructor_instanciable (SOURCE_FILE ("type-structure-declaration.galgas", 581)) ;
  cEnumerator_lstringlist enumerator_21601 (object->mProperty_mAttributeListAST, kENUMERATION_UP) ;
  while (enumerator_21601.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsEqual, enumerator_21601.current_mValue (HERE).getter_string (HERE).objectCompare (function_copyableAttribute (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 584)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = var_typeAttributes_21462.getter_copyable (SOURCE_FILE ("type-structure-declaration.galgas", 585)).boolEnum () ;
          if (kBoolTrue == test_1) {
            TC_Array <C_FixItDescription> fixItArray2 ;
            inCompiler->emitSemanticError (enumerator_21601.current_mValue (HERE).getter_location (SOURCE_FILE ("type-structure-declaration.galgas", 586)), GALGAS_string ("duplicated attribute"), fixItArray2  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 586)) ;
          }
        }
        if (kBoolFalse == test_1) {
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = var_canBeCopied_20605.operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 587)).boolEnum () ;
            if (kBoolTrue == test_3) {
              TC_Array <C_FixItDescription> fixItArray4 ;
              inCompiler->emitSemanticError (object->mProperty_mReceiverTypeName.getter_location (SOURCE_FILE ("type-structure-declaration.galgas", 588)), GALGAS_string ("this structure cannot be copied, one field is not copyable"), fixItArray4  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 588)) ;
            }
          }
        }
      }
    }
    if (kBoolFalse == test_0) {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (enumerator_21601.current_mValue (HERE).getter_location (SOURCE_FILE ("type-structure-declaration.galgas", 591)), GALGAS_string ("only @copyable attribute is allowed here"), fixItArray5  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 591)) ;
    }
    enumerator_21601.gotoNextObject () ;
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = object->mProperty_mGenerateAssignmentRoutine.operator_and (var_canBeCopied_20605 COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 594)).boolEnum () ;
    if (kBoolTrue == test_6) {
      var_typeAttributes_21462 = var_typeAttributes_21462.operator_or (GALGAS_omnibusTypeAttributes::constructor_copyable (SOURCE_FILE ("type-structure-declaration.galgas", 595)) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 595)) ;
    }
  }
  GALGAS_omnibusType var_structureType_22135 = GALGAS_omnibusType::constructor_new (var_propertyGetterMap_20409, var_propertySetterMap_20453, GALGAS_classConstantMap::constructor_emptyMap (SOURCE_FILE ("type-structure-declaration.galgas", 601)), var_constructorMap_21188, GALGAS_subscript::constructor_noSubscript (SOURCE_FILE ("type-structure-declaration.galgas", 603)), var_typeAttributes_21462, object->mProperty_mOmnibusTypeSpecificName.getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 605)), GALGAS_typeKind::constructor_structure (var_propertyList_20365  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 606)), object->mProperty_mLLVMBaseTypeName.getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 607))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 598)) ;
  {
  ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (object->mProperty_mReceiverTypeName, var_structureType_22135, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 609)) ;
  }
  ioArgument_ioUserLLVMTypeDefinitionListIR.addAssign_operation (GALGAS_userLLVMSructureTypeDefinitionIR::constructor_new (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) var_structureType_22135.ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 615)), var_propertyList_20365  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 614))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 614)) ;
  GALGAS_string var_assignmentFunctionLLVMName_22919 = function_assignmentOperatorFuncName (var_structureType_22135, var_structureType_22135, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 620)) ;
  ioArgument_ioRoutineListIR.addAssign_operation (GALGAS_structureTypeAssignFunctionIR::constructor_new (var_assignmentFunctionLLVMName_22919.getter_nowhere (SOURCE_FILE ("type-structure-declaration.galgas", 622)), GALGAS_bool (false), GALGAS_bool (false), var_structureType_22135  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 621))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 621)) ;
  GALGAS_lstring var_key_23194 = function_assignmentOperatorKey (var_structureType_22135, GALGAS_location::constructor_nowhere (SOURCE_FILE ("type-structure-declaration.galgas", 628)), var_structureType_22135, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 628)) ;
  GALGAS_structureAssignmentOperatorUsage var_operatorUsage_23280 = GALGAS_structureAssignmentOperatorUsage::constructor_new (var_structureType_22135  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 629)) ;
  {
  ioArgument_ioContext.mProperty_mAssignmentOperatorMap.setter_insertKey (var_key_23194, var_operatorUsage_23280, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 630)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_structureDeclarationAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_structureDeclarationAST.mSlotID,
                                       extensionMethod_structureDeclarationAST_enterInContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_structureDeclarationAST_enterInContext (defineExtensionMethod_structureDeclarationAST_enterInContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                  Overriding extension method '@userLLVMSructureTypeDefinitionIR generateLLVMType'                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_userLLVMSructureTypeDefinitionIR_generateLLVMType (const cPtr_userLLVMTypeDefinitionIR * inObject,
                                                                               GALGAS_string & ioArgument_ioLLVMcode,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_userLLVMSructureTypeDefinitionIR * object = (const cPtr_userLLVMSructureTypeDefinitionIR *) inObject ;
  macroValidSharedObject (object, cPtr_userLLVMSructureTypeDefinitionIR) ;
  ioArgument_ioLLVMcode.plusAssign_operation(object->mProperty_mLLVMDefinedTypeName.add_operation (GALGAS_string (" = type {"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 644)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 644)) ;
  cEnumerator_propertyList enumerator_24073 (object->mProperty_mPropertyList, kENUMERATION_UP) ;
  while (enumerator_24073.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_24073.current_mType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 646)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 646)) ;
    if (enumerator_24073.hasNextObject ()) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 647)) ;
    }
    enumerator_24073.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 649)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_userLLVMSructureTypeDefinitionIR_generateLLVMType (void) {
  enterExtensionMethod_generateLLVMType (kTypeDescriptor_GALGAS_userLLVMSructureTypeDefinitionIR.mSlotID,
                                         extensionMethod_userLLVMSructureTypeDefinitionIR_generateLLVMType) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_userLLVMSructureTypeDefinitionIR_generateLLVMType (defineExtensionMethod_userLLVMSructureTypeDefinitionIR_generateLLVMType, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                    Overriding extension method '@structureAssignmentOperatorUsage generateCode'                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_structureAssignmentOperatorUsage_generateCode (const cPtr_abstractAssignmentOperatorUsage * /* inObject */,
                                                                           GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                           GALGAS_instructionListIR & ioArgument_ioInstructionListIR,
                                                                           GALGAS_allocaList & /* ioArgument_ioAllocaList */,
                                                                           const GALGAS_omnibusType constinArgument_inTargetType,
                                                                           const GALGAS_string constinArgument_inTargetLLVMName,
                                                                           const GALGAS_objectIR constinArgument_inSourcePossibleReference,
                                                                           const GALGAS_location constinArgument_inErrorLocation,
                                                                           const GALGAS_bool constinArgument_inTargetIsInitialized,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_structTypeName_24983 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inTargetType.ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 671)) ;
  GALGAS_arcAssignmentList var_arcAssignmentList_25037 = callExtensionGetter_arcList ((const cPtr_omnibusType *) constinArgument_inTargetType.ptr (), GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("type-structure-declaration.galgas", 672)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 672)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inTargetIsInitialized.operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 673)).boolEnum () ;
    if (kBoolTrue == test_0) {
      cEnumerator_arcAssignmentList enumerator_25168 (var_arcAssignmentList_25037, kENUMERATION_UP) ;
      while (enumerator_25168.hasCurrentObject ()) {
        GALGAS_string var_llvmPropertyPtrName_25202 = GALGAS_string ("%arc.init.").add_operation (constinArgument_inErrorLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 675)).getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 675)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 675)) ;
        GALGAS_string var_s_25263 = GALGAS_string ("  ").add_operation (var_llvmPropertyPtrName_25202, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 676)).add_operation (GALGAS_string (" = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 676)).add_operation (var_structTypeName_24983, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 676)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 676)).add_operation (var_structTypeName_24983, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 676)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 676)).add_operation (constinArgument_inTargetLLVMName, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 676)).add_operation (GALGAS_string (", i32 0"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 676)) ;
        cEnumerator_uintlist enumerator_25431 (enumerator_25168.current_mPropertyIndexPath (HERE), kENUMERATION_UP) ;
        while (enumerator_25431.hasCurrentObject ()) {
          var_s_25263.plusAssign_operation(GALGAS_string (", i32 ").add_operation (enumerator_25431.current_mValue (HERE).getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 678)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 678)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 678)) ;
          enumerator_25431.gotoNextObject () ;
        }
        var_s_25263.plusAssign_operation(GALGAS_string (" ; ").add_operation (enumerator_25168.current_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 680)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 680)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 680)) ;
        {
        extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionListIR, var_s_25263, GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-structure-declaration.galgas", 681)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 681)) ;
        }
        GALGAS_string var_propertyTypeLLVMName_25609 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_25168.current_mPropertyType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 682)) ;
        var_s_25263 = GALGAS_string ("store ").add_operation (var_propertyTypeLLVMName_25609, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 683)).add_operation (GALGAS_string (" null, "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 683)).add_operation (var_propertyTypeLLVMName_25609, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 683)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 683)).add_operation (var_llvmPropertyPtrName_25202, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 683)) ;
        {
        extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionListIR, var_s_25263, GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-structure-declaration.galgas", 684)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 684)) ;
        }
        enumerator_25168.gotoNextObject () ;
      }
    }
  }
  switch (constinArgument_inSourcePossibleReference.enumValue ()) {
  case GALGAS_objectIR::kNotBuilt:
    break ;
  case GALGAS_objectIR::kEnum_llvmArrayRepeatedDynamicValue:
    {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("invalid structure assignment \xC2""\xAB""llvmArrayRepeatedDynamicValue\xC2""\xBB"""), fixItArray1  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 689)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmArrayDynamicValues:
    {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("invalid structure assignment \xC2""\xAB""llvmArrayDynamicValues\xC2""\xBB"""), fixItArray2  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 691)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmArrayStaticValues:
    {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("invalid structure assignment \xC2""\xAB""llvmArrayStaticValues\xC2""\xBB"""), fixItArray3  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 693)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmArrayRepeatedStaticValue:
    {
      const cEnumAssociatedValues_objectIR_llvmArrayRepeatedStaticValue * extractPtr_26707 = (const cEnumAssociatedValues_objectIR_llvmArrayRepeatedStaticValue *) (constinArgument_inSourcePossibleReference.unsafePointer ()) ;
      const GALGAS_uint extractedValue_idx = extractPtr_26707->mAssociatedValue3 ;
      GALGAS_string var_assignmentFunctionLLVMName_26325 = function_assignmentOperatorFuncName (constinArgument_inTargetType, constinArgument_inTargetType, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 695)) ;
      GALGAS_string var_s_26395 = GALGAS_string (" call void  @").add_operation (var_assignmentFunctionLLVMName_26325.getter_assemblerRepresentation (SOURCE_FILE ("type-structure-declaration.galgas", 696)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 696)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 696)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inTargetType.ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 697)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 697)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 697)).add_operation (constinArgument_inTargetLLVMName, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 697)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 697)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inTargetType.ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 698)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 698)).add_operation (GALGAS_string ("* @gconst."), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 698)).add_operation (extractedValue_idx.getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 698)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 698)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 698)) ;
      {
      GALGAS_stringset temp_4 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-structure-declaration.galgas", 699)) ;
      temp_4.addAssign_operation (var_assignmentFunctionLLVMName_26325  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 699)) ;
      extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionListIR, var_s_26395, temp_4, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 699)) ;
      }
    }
    break ;
  case GALGAS_objectIR::kEnum_reference:
    {
      GALGAS_string var_assignmentFunctionLLVMName_26766 = function_assignmentOperatorFuncName (constinArgument_inTargetType, constinArgument_inTargetType, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 701)) ;
      GALGAS_string var_s_26835 = GALGAS_string (" call void  @").add_operation (var_assignmentFunctionLLVMName_26766.getter_assemblerRepresentation (SOURCE_FILE ("type-structure-declaration.galgas", 702)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 702)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 702)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inTargetType.ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 703)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 703)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 703)).add_operation (constinArgument_inTargetLLVMName, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 703)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 703)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inTargetType.ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 704)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 704)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 704)).add_operation (extensionGetter_llvmName (constinArgument_inSourcePossibleReference, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 704)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 704)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 704)) ;
      {
      GALGAS_stringset temp_5 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-structure-declaration.galgas", 705)) ;
      temp_5.addAssign_operation (var_assignmentFunctionLLVMName_26766  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 705)) ;
      extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionListIR, var_s_26835, temp_5, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 705)) ;
      }
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmStructureValue:
    {
      const cEnumAssociatedValues_objectIR_llvmStructureValue * extractPtr_27804 = (const cEnumAssociatedValues_objectIR_llvmStructureValue *) (constinArgument_inSourcePossibleReference.unsafePointer ()) ;
      const GALGAS_sortedOperandIRList extractedValue_sortedOperandValues = extractPtr_27804->mAssociatedValue1 ;
      GALGAS_uint var_uniqueValue_27244 = ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE) ;
      ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 708)) ;
      cEnumerator_sortedOperandIRList enumerator_27358 (extractedValue_sortedOperandValues, kENUMERATION_UP) ;
      while (enumerator_27358.hasCurrentObject ()) {
        GALGAS_string var_ptr_27375 = GALGAS_string ("%ptr.").add_operation (var_uniqueValue_27244.getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 710)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 710)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 710)).add_operation (enumerator_27358.current_mIndex (HERE).getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 710)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 710)) ;
        GALGAS_string var_s_27423 = var_ptr_27375.add_operation (GALGAS_string (" = getelementptr "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 711)).add_operation (var_structTypeName_24983, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 711)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 711)).add_operation (var_structTypeName_24983, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 711)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 711)).add_operation (constinArgument_inTargetLLVMName, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 711)).add_operation (GALGAS_string (", i32 0, i32 "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 711)).add_operation (enumerator_27358.current_mIndex (HERE).getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 711)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 711)) ;
        {
        extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionListIR, var_s_27423, GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-structure-declaration.galgas", 712)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 712)) ;
        }
        var_s_27423 = GALGAS_string ("store ").add_operation (extensionGetter_llvmTypeName (enumerator_27358.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 713)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 713)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 713)).add_operation (extensionGetter_llvmName (enumerator_27358.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 713)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 713)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 713)).add_operation (extensionGetter_llvmTypeName (enumerator_27358.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 713)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 713)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 713)).add_operation (var_ptr_27375, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 713)) ;
        {
        extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionListIR, var_s_27423, GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-structure-declaration.galgas", 714)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 714)) ;
        }
        enumerator_27358.gotoNextObject () ;
      }
    }
    break ;
  case GALGAS_objectIR::kEnum_literalInteger:
    {
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("invalid structure assignment \xC2""\xAB""literalInteger\xC2""\xBB"""), fixItArray6  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 717)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_literalString:
    {
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("invalid structure assignment \xC2""\xAB""literalString\xC2""\xBB"""), fixItArray7  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 719)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmValue:
    {
      TC_Array <C_FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("invalid structure assignment \xC2""\xAB""llvmArrayStaticValues\xC2""\xBB"""), fixItArray8  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 721)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_null:
    {
      TC_Array <C_FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("invalid structure assignment \xC2""\xAB""llvmValue\xC2""\xBB"""), fixItArray9  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 723)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_void:
    {
      TC_Array <C_FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("invalid structure assignment \xC2""\xAB""void\xC2""\xBB"""), fixItArray10  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 725)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_zero:
    {
      TC_Array <C_FixItDescription> fixItArray11 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("invalid structure assignment \xC2""\xAB""zero\xC2""\xBB"""), fixItArray11  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 727)) ;
    }
    break ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_structureAssignmentOperatorUsage_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_structureAssignmentOperatorUsage.mSlotID,
                                     extensionMethod_structureAssignmentOperatorUsage_generateCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_structureAssignmentOperatorUsage_generateCode (defineExtensionMethod_structureAssignmentOperatorUsage_generateCode, NULL) ;

